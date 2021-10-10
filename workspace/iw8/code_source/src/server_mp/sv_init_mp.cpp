/*
==============
SvGameModeAppMP::ShutdownGameMode
==============
*/

void __fastcall SvGameModeAppMP::ShutdownGameMode(SvGameModeAppMP *this)
{
  ?ShutdownGameMode@SvGameModeAppMP@@MEAAXXZ(this);
}

/*
==============
SV_InitMP_SaveSystemInfo
==============
*/

void SV_InitMP_SaveSystemInfo(void)
{
  ?SV_InitMP_SaveSystemInfo@@YAXXZ();
}

/*
==============
SvGameModeAppMP::ServerStart_Spawn
==============
*/

void __fastcall SvGameModeAppMP::ServerStart_Spawn(SvGameModeAppMP *this, const SvServerInitSettings *initSettings)
{
  ?ServerStart_Spawn@SvGameModeAppMP@@AEAAXPEBUSvServerInitSettings@@@Z(this, initSettings);
}

/*
==============
SV_InitMP_GenerateServerHostName
==============
*/

void __fastcall SV_InitMP_GenerateServerHostName(const bool isFrontEnd, char *outHostName, unsigned int outHostNameSize)
{
  ?SV_InitMP_GenerateServerHostName@@YAX_NPEADI@Z(isFrontEnd, outHostName, outHostNameSize);
}

/*
==============
SV_InitMP_RestartServer
==============
*/

void __fastcall SV_InitMP_RestartServer(const SvServerInitSettings *initSettings)
{
  ?SV_InitMP_RestartServer@@YAXPEBUSvServerInitSettings@@@Z(initSettings);
}

/*
==============
SvGameModeAppMP::FreeServerMemory
==============
*/

void __fastcall SvGameModeAppMP::FreeServerMemory(SvGameModeAppMP *this)
{
  ?FreeServerMemory@SvGameModeAppMP@@UEBAXXZ(this);
}

/*
==============
SvPersistentGlobalsMP::ServerShutdown
==============
*/

void __fastcall SvPersistentGlobalsMP::ServerShutdown(SvPersistentGlobalsMP *this, const char *finalMsg)
{
  ?ServerShutdown@SvPersistentGlobalsMP@@UEAAXPEBD@Z(this, finalMsg);
}

/*
==============
SvGameModeAppMP::InitGameMode
==============
*/

void __fastcall SvGameModeAppMP::InitGameMode(SvGameModeAppMP *this)
{
  ?InitGameMode@SvGameModeAppMP@@MEAAXXZ(this);
}

/*
==============
SV_InitMP_RestartServerFinalize
==============
*/

void SV_InitMP_RestartServerFinalize(void)
{
  ?SV_InitMP_RestartServerFinalize@@YAXXZ();
}

/*
==============
SV_InitMP_SetServerRestarting
==============
*/

void __fastcall SV_InitMP_SetServerRestarting(bool restarting)
{
  ?SV_InitMP_SetServerRestarting@@YAX_N@Z(restarting);
}

/*
==============
SvGameModeAppMP::ResetDvars
==============
*/

void __fastcall SvGameModeAppMP::ResetDvars(SvGameModeAppMP *this)
{
  ?ResetDvars@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SvGameModeAppMP::ServerStart_PreSpawn
==============
*/

void __fastcall SvGameModeAppMP::ServerStart_PreSpawn(SvGameModeAppMP *this, const SvServerInitSettings *initSettings)
{
  ?ServerStart_PreSpawn@SvGameModeAppMP@@AEAAXPEBUSvServerInitSettings@@@Z(this, initSettings);
}

/*
==============
SvGameModeAppMP::ServerShutdown
==============
*/

void __fastcall SvGameModeAppMP::ServerShutdown(SvGameModeAppMP *this)
{
  ?ServerShutdown@SvGameModeAppMP@@UEAAXXZ(this);
}

/*
==============
SV_InitMP_RestartServerBegin
==============
*/

void SV_InitMP_RestartServerBegin(void)
{
  ?SV_InitMP_RestartServerBegin@@YAXXZ();
}

/*
==============
SV_InitMP_CheckThread
==============
*/

void SV_InitMP_CheckThread(void)
{
  ?SV_InitMP_CheckThread@@YAXXZ();
}

/*
==============
SV_InitMP_ShutdownForDemo
==============
*/

void SV_InitMP_ShutdownForDemo(void)
{
  ?SV_InitMP_ShutdownForDemo@@YAXXZ();
}

/*
==============
SvGameModeAppMP::FreeServerMemory
==============
*/
void SvGameModeAppMP::FreeServerMemory(SvGameModeAppMP *this)
{
  scrContext_t *v1; 

  ScriptableSv_DestroyMemory();
  G_ShutdownTagInfoHeap();
  G_Main_ShutdownXAnimHunkUser();
  SV_MemoryMP_Shutdown();
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
SvGameModeAppMP::InitGameMode
==============
*/
void SvGameModeAppMP::InitGameMode(SvGameModeAppMP *this)
{
  SV_ResetServerBlackboardMonitoringData();
  SV_InitMP_RegisterDvars();
  SV_DemoMP_InitSystem();
  G_MainMP_RegisterGameModeDvars();
  G_SpawnMP_Init();
}

/*
==============
SvGameModeAppMP::ResetDvars
==============
*/
void SvGameModeAppMP::ResetDvars(SvGameModeAppMP *this)
{
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 

  v1 = DVARINT_sv_minPingClamp;
  if ( !DVARINT_sv_minPingClamp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v1, DVAR_SOURCE_INTERNAL);
  v2 = DVARINT_sv_cumulThinkTime;
  if ( !DVARINT_sv_cumulThinkTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v2, DVAR_SOURCE_INTERNAL);
  v3 = DVARINT_sv_useExtraCompress;
  if ( !DVARINT_sv_useExtraCompress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v3, DVAR_SOURCE_INTERNAL);
  v4 = DVARINT_sv_testValue;
  if ( !DVARINT_sv_testValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v4, DVAR_SOURCE_INTERNAL);
  v5 = DVARINT_badhost_maxDoISuckFrames;
  if ( !DVARINT_badhost_maxDoISuckFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v5, DVAR_SOURCE_INTERNAL);
  v6 = DVARINT_sv_snapshot_delay_connecting;
  if ( !DVARINT_sv_snapshot_delay_connecting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v6, DVAR_SOURCE_INTERNAL);
}

/*
==============
SV_InitMP_CheckThread
==============
*/
void SV_InitMP_CheckThread(void)
{
  const char *v0; 
  int v1; 
  const char *v2; 

  if ( SV_Main_GetServerThreadOwnsGame() )
  {
    if ( Sys_IsServerThread() )
      return;
    v0 = "Sys_IsServerThread()";
    v1 = 2779;
    v2 = "(Sys_IsServerThread())";
  }
  else
  {
    if ( Sys_IsMainThread() )
      return;
    v0 = "Sys_IsMainThread()";
    v1 = 2783;
    v2 = "(Sys_IsMainThread())";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", v1, ASSERT_TYPE_ASSERT, v2, (const char *)&queryFormat, v0) )
    __debugbreak();
}

/*
==============
SV_InitMP_ClearServer
==============
*/
void SV_InitMP_ClearServer()
{
  SvGameModeAppMP *ActiveServerApplicationMP; 
  char v1; 
  SvGameGlobals *v2; 

  if ( !SvGameModeApplication::HasActiveServerApplication() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1112, ASSERT_TYPE_ASSERT, "( SvGameModeApplication::HasActiveServerApplication() )", (const char *)&queryFormat, "SvGameModeApplication::HasActiveServerApplication()") )
    __debugbreak();
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  SvGameModeAppMP::ResetServerTime(ActiveServerApplicationMP);
  G_Utils_ClearCachedModels();
  v1 = SvGameGlobals::ms_allocatedType;
  if ( !(_BYTE)SvGameGlobals::ms_allocatedType )
  {
LABEL_9:
    if ( v1 != 2 )
      goto LABEL_14;
    goto LABEL_10;
  }
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 152, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v1 = SvGameGlobals::ms_allocatedType;
    goto LABEL_9;
  }
LABEL_10:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 156, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tClearSvGameGlobalsMemoryCommon: Trying to clear server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  memset_0(SvGameGlobals::ms_svGameGlobals, 0, 0x82A8ui64);
  SvGameGlobalsMP::SvGameGlobalsMP((SvGameGlobalsMP *)SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::ms_svGameGlobals = v2;
LABEL_14:
  *(_QWORD *)&SvStaticGlobals::ms_svStaticGlobals.state = 0i64;
  qword_14E91B0F0 = 0i64;
  qword_14E91B0F8 = 0i64;
  qword_14E91B100 = NULL;
  SV_ClientMP_ClearClients();
  SV_Timing_Clear();
  NetConstStrings_Clear();
  ScriptableSv_ResetLootGlobals();
  BgDynamicLimits::UpdateDynamicValues();
  Dvar_Reset(sv_paused, DVAR_SOURCE_INTERNAL);
}

/*
==============
SV_InitMP_DeregisterDvars
==============
*/
const dvar_t *SV_InitMP_DeregisterDvars()
{
  const dvar_t *result; 

  SV_Init_DeregisterDvarsCommon();
  DCONST_DVARBOOL_sv_dedicatedServerBandwidthTest = Dvar_Deregister(DCONST_DVARBOOL_sv_dedicatedServerBandwidthTest);
  DCONST_DVARINT_sv_streamSync_peerWaitTimeout = Dvar_Deregister(DCONST_DVARINT_sv_streamSync_peerWaitTimeout);
  DCONST_DVARBOOL_sv_streamSync_devFillSlots = Dvar_Deregister(DCONST_DVARBOOL_sv_streamSync_devFillSlots);
  DCONST_DVARBOOL_sv_streamSync_devDisablePeerBlock = Dvar_Deregister(DCONST_DVARBOOL_sv_streamSync_devDisablePeerBlock);
  DCONST_DVARBOOL_sv_streamSync_devForceUnload = Dvar_Deregister(DCONST_DVARBOOL_sv_streamSync_devForceUnload);
  DCONST_DVARBOOL_sv_streamSync_devVerbose = Dvar_Deregister(DCONST_DVARBOOL_sv_streamSync_devVerbose);
  DCONST_DVARBOOL_sv_streamSync_devDisablePresets = Dvar_Deregister(DCONST_DVARBOOL_sv_streamSync_devDisablePresets);
  DCONST_DVARINT_badhost_maxHappyPingTime = Dvar_Deregister(DCONST_DVARINT_badhost_maxHappyPingTime);
  DCONST_DVARINT_badhost_minTotalClientsForHappyTest = Dvar_Deregister(DCONST_DVARINT_badhost_minTotalClientsForHappyTest);
  DCONST_DVARFLT_badhost_minPercentClientsUnhappyToSuck = Dvar_Deregister(DCONST_DVARFLT_badhost_minPercentClientsUnhappyToSuck);
  DCONST_DVARBOOL_badhost_debug = Dvar_Deregister(DCONST_DVARBOOL_badhost_debug);
  DCONST_DVARBOOL_badhost_endGameIfISuck = Dvar_Deregister(DCONST_DVARBOOL_badhost_endGameIfISuck);
  DVARINT_protocol = Dvar_Deregister(DVARINT_protocol);
  DVARINT_ds_data_buildnumber_override = Dvar_Deregister(DVARINT_ds_data_buildnumber_override);
  DVARINT_ds_code_buildnumber_override = Dvar_Deregister(DVARINT_ds_code_buildnumber_override);
  DVARBOOL_ds_info_enable = Dvar_Deregister(DVARBOOL_ds_info_enable);
  DVARSTR_ds_info = Dvar_Deregister(DVARSTR_ds_info);
  DVARINT_badhost_maxDoISuckFrames = Dvar_Deregister(DVARINT_badhost_maxDoISuckFrames);
  DVARINT_badHost_detectMinServerTime = Dvar_Deregister(DVARINT_badHost_detectMinServerTime);
  DVARBOOL_sv_printConfigStrings = Dvar_Deregister(DVARBOOL_sv_printConfigStrings);
  DVARINT_sv_printArchiveDetails = Dvar_Deregister(DVARINT_sv_printArchiveDetails);
  DVARINT_sv_timeout = Dvar_Deregister(DVARINT_sv_timeout);
  DVARINT_sv_connectTimeout = Dvar_Deregister(DVARINT_sv_connectTimeout);
  DVARINT_sv_rejoinTimeout = Dvar_Deregister(DVARINT_sv_rejoinTimeout);
  DVARINT_sv_zombietime = Dvar_Deregister(DVARINT_sv_zombietime);
  DVARINT_sv_min_reconnect_time = Dvar_Deregister(DVARINT_sv_min_reconnect_time);
  DVARINT_sv_max_reconnect_time = Dvar_Deregister(DVARINT_sv_max_reconnect_time);
  DVARSTR_sv_allowedClan1 = Dvar_Deregister(DVARSTR_sv_allowedClan1);
  DVARSTR_sv_allowedClan2 = Dvar_Deregister(DVARSTR_sv_allowedClan2);
  DVARFLT_sv_kickBanTime = Dvar_Deregister(DVARFLT_sv_kickBanTime);
  DVARBOOL_sv_debugMessageKey = Dvar_Deregister(DVARBOOL_sv_debugMessageKey);
  DVARINT_sv_debugPacketContents = Dvar_Deregister(DVARINT_sv_debugPacketContents);
  DVARBOOL_sv_debugTrackPacketContents = Dvar_Deregister(DVARBOOL_sv_debugTrackPacketContents);
  DVARINT_sv_debugLargePacketsMinSize = Dvar_Deregister(DVARINT_sv_debugLargePacketsMinSize);
  DVARINT_sv_debugLargePacketsMinSizeLargePlayerCount = Dvar_Deregister(DVARINT_sv_debugLargePacketsMinSizeLargePlayerCount);
  DVARBOOL_sv_debugPacketContentsForClientThisFrame = Dvar_Deregister(DVARBOOL_sv_debugPacketContentsForClientThisFrame);
  DVARINT_sv_debugLargePacketsForcePrintSize = Dvar_Deregister(DVARINT_sv_debugLargePacketsForcePrintSize);
  DVARBOOL_sv_writeNextLargeSnapshotToFile = Dvar_Deregister(DVARBOOL_sv_writeNextLargeSnapshotToFile);
  DVARBOOL_sv_sendSnapshotsToBots = Dvar_Deregister(DVARBOOL_sv_sendSnapshotsToBots);
  DVARINT_sv_botsSimulatedLatency = Dvar_Deregister(DVARINT_sv_botsSimulatedLatency);
  DVARINT_sv_botsSimulatedJitter = Dvar_Deregister(DVARINT_sv_botsSimulatedJitter);
  DVARINT_sv_minPingClamp = Dvar_Deregister(DVARINT_sv_minPingClamp);
  DVARINT_sv_cumulThinkTime = Dvar_Deregister(DVARINT_sv_cumulThinkTime);
  DVARINT_sv_cmdMinBufferBurst = Dvar_Deregister(DVARINT_sv_cmdMinBufferBurst);
  DVARFLT_sv_cmdMinCumulThinkFrac = Dvar_Deregister(DVARFLT_sv_cmdMinCumulThinkFrac);
  DVARFLT_sv_cmdMaxCumulThinkFrac = Dvar_Deregister(DVARFLT_sv_cmdMaxCumulThinkFrac);
  DVARINT_sv_cmdBufferStepTime = Dvar_Deregister(DVARINT_sv_cmdBufferStepTime);
  DVARFLT_sv_cmdBufferResponse = Dvar_Deregister(DVARFLT_sv_cmdBufferResponse);
  DVARFLT_sv_cmdBufferCumulResponse = Dvar_Deregister(DVARFLT_sv_cmdBufferCumulResponse);
  DVARFLT_sv_cmdBufferCumulWindupScale = Dvar_Deregister(DVARFLT_sv_cmdBufferCumulWindupScale);
  DVARINT_sv_cmdMaxCumulThinkError = Dvar_Deregister(DVARINT_sv_cmdMaxCumulThinkError);
  DVARINT_sv_cmdMaxExtrapTime = Dvar_Deregister(DVARINT_sv_cmdMaxExtrapTime);
  DVARINT_sv_cmdMaxBufferTime = Dvar_Deregister(DVARINT_sv_cmdMaxBufferTime);
  DVARINT_sv_cmdMaxBufferWindow = Dvar_Deregister(DVARINT_sv_cmdMaxBufferWindow);
  DVARINT_sv_cmdBufferOffset = Dvar_Deregister(DVARINT_sv_cmdBufferOffset);
  DVARINT_sv_cmdDeficitOffset = Dvar_Deregister(DVARINT_sv_cmdDeficitOffset);
  DVARINT_sv_cmdStartSurplus = Dvar_Deregister(DVARINT_sv_cmdStartSurplus);
  DVARINT_sv_cmdStartDeficit = Dvar_Deregister(DVARINT_sv_cmdStartDeficit);
  DVARINT_sv_cmdTargetExtrapTime = Dvar_Deregister(DVARINT_sv_cmdTargetExtrapTime);
  DVARBOOL_sv_cmdDropOnPredict = Dvar_Deregister(DVARBOOL_sv_cmdDropOnPredict);
  DVARBOOL_sv_cmdExtrapAngles = Dvar_Deregister(DVARBOOL_sv_cmdExtrapAngles);
  DVARBOOL_sv_cmdPredictAngles = Dvar_Deregister(DVARBOOL_sv_cmdPredictAngles);
  DVARBOOL_sv_cmdDebugBufferVerbose = Dvar_Deregister(DVARBOOL_sv_cmdDebugBufferVerbose);
  DVARINT_sv_cmdThrottleType = Dvar_Deregister(DVARINT_sv_cmdThrottleType);
  DVARINT_sv_cmdThrottleWindow = Dvar_Deregister(DVARINT_sv_cmdThrottleWindow);
  DVARINT_sv_cmdMaxCommandTime = Dvar_Deregister(DVARINT_sv_cmdMaxCommandTime);
  DVARINT_sv_cmdMinCommandTimeClientCutoff = Dvar_Deregister(DVARINT_sv_cmdMinCommandTimeClientCutoff);
  DVARINT_sv_useExtraCompress = Dvar_Deregister(DVARINT_sv_useExtraCompress);
  DVARBOOL_sv_recordPingHistogram = Dvar_Deregister(DVARBOOL_sv_recordPingHistogram);
  DVARINT_sv_checkMinPlayers = Dvar_Deregister(DVARINT_sv_checkMinPlayers);
  DVARBOOL_sv_debugMinPlayers = Dvar_Deregister(DVARBOOL_sv_debugMinPlayers);
  DCONST_DVARINT_sv_network_fps = Dvar_Deregister(DCONST_DVARINT_sv_network_fps);
  DCONST_DVARINT_sv_start_check_interval = Dvar_Deregister(DCONST_DVARINT_sv_start_check_interval);
  DCONST_DVARINT_sv_start_check_timeout = Dvar_Deregister(DCONST_DVARINT_sv_start_check_timeout);
  DVARBOOL_sv_transmission_error_enabled = Dvar_Deregister(DVARBOOL_sv_transmission_error_enabled);
  DVARBOOL_sv_debugPlayerstate = Dvar_Deregister(DVARBOOL_sv_debugPlayerstate);
  DVARINT_sv_snapshotReportTimeThreshold = Dvar_Deregister(DVARINT_sv_snapshotReportTimeThreshold);
  DVARBOOL_sv_error_on_baseline_failure = Dvar_Deregister(DVARBOOL_sv_error_on_baseline_failure);
  DVARBOOL_testClients_doAttack = Dvar_Deregister(DVARBOOL_testClients_doAttack);
  DVARBOOL_testClients_doMove = Dvar_Deregister(DVARBOOL_testClients_doMove);
  DVARBOOL_testClients_doReload = Dvar_Deregister(DVARBOOL_testClients_doReload);
  DVARBOOL_testClients_doCrouch = Dvar_Deregister(DVARBOOL_testClients_doCrouch);
  DVARBOOL_testClients_doProne = Dvar_Deregister(DVARBOOL_testClients_doProne);
  DVARBOOL_testClients_watchKillcam = Dvar_Deregister(DVARBOOL_testClients_watchKillcam);
  DVARINT_sv_fakeHitchDelay = Dvar_Deregister(DVARINT_sv_fakeHitchDelay);
  DVARINT_sv_fakeHitchDuration = Dvar_Deregister(DVARINT_sv_fakeHitchDuration);
  DVARINT_replay_client = Dvar_Deregister(DVARINT_replay_client);
  DVARINT_scr_cp_objective = Dvar_Deregister(DVARINT_scr_cp_objective);
  DVARBOOL_scr_switch_to_aliens = Dvar_Deregister(DVARBOOL_scr_switch_to_aliens);
  DCONST_DVARBOOL_sv_enable_server_wake = Dvar_Deregister(DCONST_DVARBOOL_sv_enable_server_wake);
  DCONST_DVARINT_sv_max_server_update = Dvar_Deregister(DCONST_DVARINT_sv_max_server_update);
  DVARBOOL_sv_usercmd_print = Dvar_Deregister(DVARBOOL_sv_usercmd_print);
  DCONST_DVARBOOL_sv_usermove_workers = Dvar_Deregister(DCONST_DVARBOOL_sv_usermove_workers);
  DCONST_DVARBOOL_sv_clientWorkersEnabled = Dvar_Deregister(DCONST_DVARBOOL_sv_clientWorkersEnabled);
  DCONST_DVARBOOL_sv_entityWorkersEnabled = Dvar_Deregister(DCONST_DVARBOOL_sv_entityWorkersEnabled);
  DVARINT_sv_delay_cpwave_matchinprogress = Dvar_Deregister(DVARINT_sv_delay_cpwave_matchinprogress);
  DCONST_DVARINT_migration_blocksperframe = Dvar_Deregister(DCONST_DVARINT_migration_blocksperframe);
  DCONST_DVARINT_migration_msgtimeout = Dvar_Deregister(DCONST_DVARINT_migration_msgtimeout);
  DCONST_DVARINT_migration_limit = Dvar_Deregister(DCONST_DVARINT_migration_limit);
  DCONST_DVARINT_migration_timeBetween = Dvar_Deregister(DCONST_DVARINT_migration_timeBetween);
  DCONST_DVARINT_migration_verboseBroadcastTime = Dvar_Deregister(DCONST_DVARINT_migration_verboseBroadcastTime);
  DCONST_DVARFLT_migrationStressRandTime = Dvar_Deregister(DCONST_DVARFLT_migrationStressRandTime);
  DCONST_DVARFLT_migrationStressMinTime = Dvar_Deregister(DCONST_DVARFLT_migrationStressMinTime);
  DCONST_DVARBOOL_migrationStressSaveLoadOnly = Dvar_Deregister(DCONST_DVARBOOL_migrationStressSaveLoadOnly);
  DVARBOOL_migration_kickoldhost = Dvar_Deregister(DVARBOOL_migration_kickoldhost);
  DVARBOOL_migration_crossplay_allow_pc_host = Dvar_Deregister(DVARBOOL_migration_crossplay_allow_pc_host);
  DVARINT_sv_snapshot_size_estimate_mp = Dvar_Deregister(DVARINT_sv_snapshot_size_estimate_mp);
  DVARINT_sv_baseline_size_estimate_mp = Dvar_Deregister(DVARINT_sv_baseline_size_estimate_mp);
  DVARINT_sv_snapshot_size_estimate_br = Dvar_Deregister(DVARINT_sv_snapshot_size_estimate_br);
  DVARINT_sv_baseline_size_estimate_br = Dvar_Deregister(DVARINT_sv_baseline_size_estimate_br);
  DVARINT_sv_snapshot_size_huge = Dvar_Deregister(DVARINT_sv_snapshot_size_huge);
  DVARINT_sv_snapshot_delay_nodelta = Dvar_Deregister(DVARINT_sv_snapshot_delay_nodelta);
  DVARINT_sv_snapshot_delay_connecting = Dvar_Deregister(DVARINT_sv_snapshot_delay_connecting);
  DVARBOOL_sv_snapshot_throttle_nobaseline = Dvar_Deregister(DVARBOOL_sv_snapshot_throttle_nobaseline);
  DVARINT_sv_snapshot_silence_threshold_send = Dvar_Deregister(DVARINT_sv_snapshot_silence_threshold_send);
  DVARINT_sv_snapshot_silence_threshold_recv = Dvar_Deregister(DVARINT_sv_snapshot_silence_threshold_recv);
  DVARINT_sv_cp_remote_client_snapshot_msec_default = Dvar_Deregister(DVARINT_sv_cp_remote_client_snapshot_msec_default);
  DVARINT_sv_mp_LAN_remote_client_snapshot_msec_default = Dvar_Deregister(DVARINT_sv_mp_LAN_remote_client_snapshot_msec_default);
  DVARINT_sv_mp_peer_remote_client_snapshot_msec_default = Dvar_Deregister(DVARINT_sv_mp_peer_remote_client_snapshot_msec_default);
  DCONST_DVARINT_sv_compression_threshold = Dvar_Deregister(DCONST_DVARINT_sv_compression_threshold);
  DCONST_DVARINT_sv_zlib_threshold = Dvar_Deregister(DCONST_DVARINT_sv_zlib_threshold);
  DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities = Dvar_Deregister(DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities);
  DCONST_DVARBOOL_sv_sendOverMaxSnapshotEntities = Dvar_Deregister(DCONST_DVARBOOL_sv_sendOverMaxSnapshotEntities);
  DVARBOOL_sv_sendSnapshots = Dvar_Deregister(DVARBOOL_sv_sendSnapshots);
  DVARBOOL_sv_debugRate = Dvar_Deregister(DVARBOOL_sv_debugRate);
  DVARBOOL_sv_debugReliableCmds = Dvar_Deregister(DVARBOOL_sv_debugReliableCmds);
  DVARBOOL_sv_snapshotDebugVerbose = Dvar_Deregister(DVARBOOL_sv_snapshotDebugVerbose);
  DVARBOOL_sv_showAverageBPS = Dvar_Deregister(DVARBOOL_sv_showAverageBPS);
  DVARBOOL_sv_log_blackbox_snapshot_data = Dvar_Deregister(DVARBOOL_sv_log_blackbox_snapshot_data);
  DCONST_DVARBOOL_sv_snapshotWorkersEnabled = Dvar_Deregister(DCONST_DVARBOOL_sv_snapshotWorkersEnabled);
  DVARBOOL_sv_snapshotWorkersDeferMessageBuild = Dvar_Deregister(DVARBOOL_sv_snapshotWorkersDeferMessageBuild);
  DVARINT_sv_snapshotWorkersDeferMessageBuildForClientCount = Dvar_Deregister(DVARINT_sv_snapshotWorkersDeferMessageBuildForClientCount);
  DCONST_DVARBOOL_sv_snapshotServerMessageEnabled = Dvar_Deregister(DCONST_DVARBOOL_sv_snapshotServerMessageEnabled);
  DCONST_DVARINT_sv_snapshotServerMessageMinClients = Dvar_Deregister(DCONST_DVARINT_sv_snapshotServerMessageMinClients);
  DVARBOOL_sv_killcam_exit_delta_from_last_game_snap = Dvar_Deregister(DVARBOOL_sv_killcam_exit_delta_from_last_game_snap);
  DVARBOOL_sv_snapshot_blindDeltaEnabled = Dvar_Deregister(DVARBOOL_sv_snapshot_blindDeltaEnabled);
  DVARINT_sv_snapshot_blindDeltaMaxTimeDelta = Dvar_Deregister(DVARINT_sv_snapshot_blindDeltaMaxTimeDelta);
  DVARINT_sv_snapshot_throttleBackupCount = Dvar_Deregister(DVARINT_sv_snapshot_throttleBackupCount);
  DCONST_DVARBOOL_sv_snapshot_transientStorageEnabled = Dvar_Deregister(DCONST_DVARBOOL_sv_snapshot_transientStorageEnabled);
  DCONST_DVARINT_sv_snapshot_transientStorageMaxAllowedSendMsec = Dvar_Deregister(DCONST_DVARINT_sv_snapshot_transientStorageMaxAllowedSendMsec);
  DVARINT_sv_forceNetfieldLoD = Dvar_Deregister(DVARINT_sv_forceNetfieldLoD);
  DVARINT_sv_useLowLodEntityEvents = Dvar_Deregister(DVARINT_sv_useLowLodEntityEvents);
  DVARFLT_sv_entitiesPartitioningNearbyRangeX = Dvar_Deregister(DVARFLT_sv_entitiesPartitioningNearbyRangeX);
  DVARFLT_sv_entitiesPartitioningNearbyRangeY = Dvar_Deregister(DVARFLT_sv_entitiesPartitioningNearbyRangeY);
  DCONST_DVARBOOL_sv_entitiesPartitioningDrawOverlay = Dvar_Deregister(DCONST_DVARBOOL_sv_entitiesPartitioningDrawOverlay);
  DCONST_DVARINT_sv_default_client_bandwidth = Dvar_Deregister(DCONST_DVARINT_sv_default_client_bandwidth);
  DCONST_DVARINT_sv_min_client_bandwidth = Dvar_Deregister(DCONST_DVARINT_sv_min_client_bandwidth);
  DCONST_DVARINT_sv_max_client_bandwidth = Dvar_Deregister(DCONST_DVARINT_sv_max_client_bandwidth);
  DCONST_DVARINT_sv_server_bandwidth_override = Dvar_Deregister(DCONST_DVARINT_sv_server_bandwidth_override);
  DVARBOOL_sv_virtual_archive_enabled = Dvar_Deregister(DVARBOOL_sv_virtual_archive_enabled);
  DVARINT_sv_virtual_archive_page_mode = Dvar_Deregister(DVARINT_sv_virtual_archive_page_mode);
  DVARINT_sv_killcam_length_max = Dvar_Deregister(DVARINT_sv_killcam_length_max);
  DVARINT_sv_archive_frame_size_mp = Dvar_Deregister(DVARINT_sv_archive_frame_size_mp);
  DVARINT_sv_archive_frame_size_br = Dvar_Deregister(DVARINT_sv_archive_frame_size_br);
  DVARBOOL_sv_archive_smooth_transform_origin = Dvar_Deregister(DVARBOOL_sv_archive_smooth_transform_origin);
  DVARBOOL_sv_archive_smooth_transform_angles = Dvar_Deregister(DVARBOOL_sv_archive_smooth_transform_angles);
  DVARBOOL_sv_netfieldHighLoDMissilesEnable = Dvar_Deregister(DVARBOOL_sv_netfieldHighLoDMissilesEnable);
  DVARBOOL_sv_netfieldHighLoDScriptablesEnable = Dvar_Deregister(DVARBOOL_sv_netfieldHighLoDScriptablesEnable);
  DVARBOOL_sv_netfieldHighLoDValidation = Dvar_Deregister(DVARBOOL_sv_netfieldHighLoDValidation);
  DVARINT_bot_DebugPersonality = Dvar_Deregister(DVARINT_bot_DebugPersonality);
  DVARINT_bot_DebugDifficulty = Dvar_Deregister(DVARINT_bot_DebugDifficulty);
  DVARINT_bot_MaxNumAllyBots = Dvar_Deregister(DVARINT_bot_MaxNumAllyBots);
  DVARINT_bot_MaxNumEnemyBots = Dvar_Deregister(DVARINT_bot_MaxNumEnemyBots);
  DVARBOOL_bot_DisableAllAI = Dvar_Deregister(DVARBOOL_bot_DisableAllAI);
  DVARINT_bot_DisableMovement = Dvar_Deregister(DVARINT_bot_DisableMovement);
  DVARBOOL_bot_DisableKillstreaks = Dvar_Deregister(DVARBOOL_bot_DisableKillstreaks);
  DVARBOOL_bot_SkipKillcams = Dvar_Deregister(DVARBOOL_bot_SkipKillcams);
  DVARBOOL_bot_DisableAttack = Dvar_Deregister(DVARBOOL_bot_DisableAttack);
  DVARINT_bot_NoTarget = Dvar_Deregister(DVARINT_bot_NoTarget);
  DVARBOOL_bot_GodMode = Dvar_Deregister(DVARBOOL_bot_GodMode);
  DVARBOOL_bot_DemiGodMode = Dvar_Deregister(DVARBOOL_bot_DemiGodMode);
  DVARBOOL_bot_SimulateNoAmmo = Dvar_Deregister(DVARBOOL_bot_SimulateNoAmmo);
  DVARBOOL_bot_DisableGrenadeThrow = Dvar_Deregister(DVARBOOL_bot_DisableGrenadeThrow);
  DVARBOOL_bot_EnableNoPathnodeBehavior = Dvar_Deregister(DVARBOOL_bot_EnableNoPathnodeBehavior);
  DVARINT_bot_BadPlaceTest = Dvar_Deregister(DVARINT_bot_BadPlaceTest);
  DVARINT_bot_DebugPathStyle = Dvar_Deregister(DVARINT_bot_DebugPathStyle);
  DVARINT_bot_DebugPathGoal = Dvar_Deregister(DVARINT_bot_DebugPathGoal);
  DVARBOOL_bot_DebugPathGoal_AllBots = Dvar_Deregister(DVARBOOL_bot_DebugPathGoal_AllBots);
  DVARBOOL_bot_DebugPathGoal_DrawPathsBetweenPoints = Dvar_Deregister(DVARBOOL_bot_DebugPathGoal_DrawPathsBetweenPoints);
  DVARBOOL_bot_ForceGrenadeThrow = Dvar_Deregister(DVARBOOL_bot_ForceGrenadeThrow);
  DVARINT_bot_ForceStance = Dvar_Deregister(DVARINT_bot_ForceStance);
  DVARBOOL_bot_ForcePathIndoors = Dvar_Deregister(DVARBOOL_bot_ForcePathIndoors);
  DVARINT_bot_DrawDebug = Dvar_Deregister(DVARINT_bot_DrawDebug);
  DVARINT_bot_DrawDebugSpecial = Dvar_Deregister(DVARINT_bot_DrawDebugSpecial);
  DVARBOOL_bot_DrawDebugGametype = Dvar_Deregister(DVARBOOL_bot_DrawDebugGametype);
  DVARINT_bot_DrawDebugHudEnt = Dvar_Deregister(DVARINT_bot_DrawDebugHudEnt);
  DVARINT_bot_DrawDebugOnlySpectated = Dvar_Deregister(DVARINT_bot_DrawDebugOnlySpectated);
  DVARINT_bot_DrawDebugOnlyEntityNum = Dvar_Deregister(DVARINT_bot_DrawDebugOnlyEntityNum);
  DVARBOOL_bot_DrawNavmeshExposure = Dvar_Deregister(DVARBOOL_bot_DrawNavmeshExposure);
  DVARBOOL_bot_DrawSplashDamageChecks = Dvar_Deregister(DVARBOOL_bot_DrawSplashDamageChecks);
  DVARINT_bot_DrawSeeThrough = Dvar_Deregister(DVARINT_bot_DrawSeeThrough);
  DVARINT_bot_DrawBrokenTraversals = Dvar_Deregister(DVARINT_bot_DrawBrokenTraversals);
  DVARBOOL_bot_ScoreHold = Dvar_Deregister(DVARBOOL_bot_ScoreHold);
  DVARINT_bot_ScoreClient = Dvar_Deregister(DVARINT_bot_ScoreClient);
  DVARINT_bot_ScoreType = Dvar_Deregister(DVARINT_bot_ScoreType);
  DVARINT_bot_ScoreDist = Dvar_Deregister(DVARINT_bot_ScoreDist);
  DVARINT_bot_ScoreShowAll = Dvar_Deregister(DVARINT_bot_ScoreShowAll);
  DVARBOOL_bot_ScoreShowFactors = Dvar_Deregister(DVARBOOL_bot_ScoreShowFactors);
  DVARINT_bot_ScoreMinCutoff = Dvar_Deregister(DVARINT_bot_ScoreMinCutoff);
  DVARINT_bot_ScoreMaxCutoff = Dvar_Deregister(DVARINT_bot_ScoreMaxCutoff);
  DVARBOOL_bot_ScoreValReset = Dvar_Deregister(DVARBOOL_bot_ScoreValReset);
  DVARFLT_bot_ScoreVal0 = Dvar_Deregister(DVARFLT_bot_ScoreVal0);
  DVARFLT_bot_ScoreVal1 = Dvar_Deregister(DVARFLT_bot_ScoreVal1);
  DVARFLT_bot_ScoreVal2 = Dvar_Deregister(DVARFLT_bot_ScoreVal2);
  DVARFLT_bot_ScoreVal3 = Dvar_Deregister(DVARFLT_bot_ScoreVal3);
  DVARFLT_bot_ScoreVal4 = Dvar_Deregister(DVARFLT_bot_ScoreVal4);
  DVARFLT_bot_ScoreVal5 = Dvar_Deregister(DVARFLT_bot_ScoreVal5);
  DVARFLT_bot_ScoreVal6 = Dvar_Deregister(DVARFLT_bot_ScoreVal6);
  DVARFLT_bot_ScoreVal7 = Dvar_Deregister(DVARFLT_bot_ScoreVal7);
  DVARFLT_bot_ScoreVal8 = Dvar_Deregister(DVARFLT_bot_ScoreVal8);
  DVARFLT_bot_ScoreVal9 = Dvar_Deregister(DVARFLT_bot_ScoreVal9);
  DVARFLT_bot_ScoreVal10 = Dvar_Deregister(DVARFLT_bot_ScoreVal10);
  DVARFLT_bot_ScoreVal11 = Dvar_Deregister(DVARFLT_bot_ScoreVal11);
  DVARFLT_bot_ScoreVal12 = Dvar_Deregister(DVARFLT_bot_ScoreVal12);
  DVARFLT_bot_ScoreVal13 = Dvar_Deregister(DVARFLT_bot_ScoreVal13);
  DVARFLT_bot_ScoreVal14 = Dvar_Deregister(DVARFLT_bot_ScoreVal14);
  DVARINT_scrAgent_DebugEnt = Dvar_Deregister(DVARINT_scrAgent_DebugEnt);
  DVARBOOL_sv_anticheat_dataCollectionEnabled = Dvar_Deregister(DVARBOOL_sv_anticheat_dataCollectionEnabled);
  DVARBOOL_sv_anticheat_perKillEventEnabled = Dvar_Deregister(DVARBOOL_sv_anticheat_perKillEventEnabled);
  DVARINT_sv_anticheat_playerKilled_angle_speed_window = Dvar_Deregister(DVARINT_sv_anticheat_playerKilled_angle_speed_window);
  result = Dvar_Deregister(DVARINT_sv_anticheat_playerRecentlySighted_resetTime);
  DVARINT_sv_anticheat_playerRecentlySighted_resetTime = result;
  return result;
}

/*
==============
SV_InitMP_FinalMessage
==============
*/
void SV_InitMP_FinalMessage(const char *message)
{
  unsigned __int8 *m_ptr; 
  int time; 
  int DeterministicSystemTime; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  SvClientConnectionState state; 
  SvClientMP *CommonClient; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int MaxFragmentLength; 
  bool IsClientThrottled; 
  char *fmt; 
  __int64 v14; 
  Mem_LargeLocal v15; 
  msg_t msg; 
  ClientSnapshotInfo outSnapInfo; 
  SvWriteSnapshotResult outResult; 

  Mem_LargeLocal::Mem_LargeLocal(&v15, 0x243D8ui64, "msg_buf_t msg_buf");
  m_ptr = (unsigned __int8 *)v15.m_ptr;
  SV_SnapWorkersMP_FinishSnapshotWorkers();
  time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  DeterministicSystemTime = SV_MainMP_GetDeterministicSystemTime();
  v5 = 2i64;
  v14 = 2i64;
  v6 = SvClient::ms_clientCount;
  do
  {
    v7 = 0;
    if ( v6 > 0 )
    {
      do
      {
        state = SvClient::GetCommonClient(v7)->state;
        if ( (unsigned __int8)state >= CS_CONNECTED )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = (SvClientMP *)SvClient::GetCommonClient(v7);
          if ( SV_SnapshotMP_ShouldGenerateSnapshotForClient(CommonClient) )
          {
            if ( !NetConnection::IsLoopback(&CommonClient->clientConnection) )
            {
              if ( !NetConnection::IsBot(&CommonClient->clientConnection) && (!I_stricmp(message, "hostquit") || !I_stricmp(message, "roundsdone")) )
                NetConnection::SendReliable(&CommonClient->clientConnection, message);
              SV_ClientMP_SendDisconnect(CommonClient, state, message, CommonClient->name);
            }
            CommonClient->nextSnapshotTime = -1;
            SV_SnapshotMP_InitClientSnapshotInfo(CommonClient, &outSnapInfo);
            SV_SnapshotMP_BeginClientSnapshot(&outSnapInfo, &msg, m_ptr);
            if ( state == CS_ACTIVE )
            {
              PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
              SV_BuildClientSnapshot_PopulateFinalSnapshot(CommonClient, PersistentGlobalsMP->time);
              SV_SnapshotMP_WriteSnapshotToClient(&outSnapInfo, 0, &msg, &outResult);
              SvWriteSnapshotResult::CopyToClient(&outResult, CommonClient);
              CommonClient->reliableSent = CommonClient->reliableSequence;
            }
            SV_SnapshotMP_EndClientSnapshot(&outSnapInfo, &msg, m_ptr);
            MaxFragmentLength = NET_GetMaxFragmentLength(&CommonClient->netchan);
            if ( msg.cursize >= MaxFragmentLength )
            {
              LODWORD(fmt) = NET_GetMaxFragmentLength(&CommonClient->netchan);
              Com_PrintError(15, "SV_FinalMessage - Potentially sending a final message to client %i that's too large to fit in a packet (%i bytes, packets are %i bytes), clients will not receive it", v7, (unsigned int)msg.cursize, fmt);
            }
            IsClientThrottled = SV_SnapshotMP_IsClientThrottled(CommonClient);
            SV_SnapshotMP_SendMessageToClient(CommonClient, time, DeterministicSystemTime, state == CS_ACTIVE, IsClientThrottled, &msg);
          }
        }
        ++v7;
        v6 = SvClient::ms_clientCount;
      }
      while ( (int)v7 < (int)SvClient::ms_clientCount );
      v5 = v14;
    }
    v14 = --v5;
  }
  while ( v5 );
  Mem_LargeLocal::~Mem_LargeLocal(&v15);
}

/*
==============
SV_InitMP_GenerateServerHostName
==============
*/
void SV_InitMP_GenerateServerHostName(const bool isFrontEnd, char *outHostName, unsigned int outHostNameSize)
{
  unsigned __int64 v3; 
  const char *UsernameForLocalClient; 
  int v7; 
  int ControllerFromClient; 
  const char *ClanTag; 
  const char *LocalClientName; 
  char *v11; 

  v3 = outHostNameSize;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1522, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tAccessing client information, must be on main thread", "Sys_IsMainThread()") )
    __debugbreak();
  if ( !outHostName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1523, ASSERT_TYPE_ASSERT, "(outHostName)", (const char *)&queryFormat, "outHostName") )
    __debugbreak();
  if ( !(_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1524, ASSERT_TYPE_ASSERT, "(outHostNameSize)", (const char *)&queryFormat, "outHostNameSize") )
    __debugbreak();
  UsernameForLocalClient = "Call of Duty Server";
  if ( isFrontEnd )
  {
    UsernameForLocalClient = "Local FrontEnd";
  }
  else
  {
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS )
    {
      v7 = 0;
      while ( !CL_IsLocalClientActive((LocalClientNum_t)v7) )
      {
        if ( ++v7 >= 2 )
          goto LABEL_18;
      }
      UsernameForLocalClient = CL_GetUsernameForLocalClient(v7);
LABEL_18:
      if ( v7 == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1543, ASSERT_TYPE_ASSERT, "(localClientNum != 2)", (const char *)&queryFormat, "localClientNum != STATIC_MAX_LOCAL_CLIENTS") )
        __debugbreak();
    }
    else
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( !Live_IsSignedIn(ControllerFromClient) )
        goto LABEL_32;
      ClanTag = CL_PlayerData_GetClanTag(ControllerFromClient);
      LocalClientName = Live_GetLocalClientName(ControllerFromClient);
      if ( *ClanTag )
        v11 = j_va("[%s]%s", ClanTag, LocalClientName);
      else
        v11 = j_va((const char *)&queryFormat, LocalClientName);
      UsernameForLocalClient = v11;
    }
    if ( !UsernameForLocalClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1569, ASSERT_TYPE_ASSERT, "( hostname )", (const char *)&queryFormat, "hostname") )
      __debugbreak();
    if ( !*UsernameForLocalClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1570, ASSERT_TYPE_ASSERT, "( hostname[0] )", (const char *)&queryFormat, "hostname[0]") )
      __debugbreak();
  }
LABEL_32:
  Core_strcpy(outHostName, v3, UsernameForLocalClient);
}

/*
==============
SV_InitMP_PrintMemoryEstimates
==============
*/
void SV_InitMP_PrintMemoryEstimates(const SvServerInitSettings *initSettings)
{
  const dvar_t *v1; 
  unsigned int i; 
  unsigned int j; 
  unsigned int k; 
  unsigned int m; 
  unsigned int n; 
  unsigned int ii; 
  unsigned int maxClientCount; 
  unsigned int maxAgentCount; 
  unsigned __int16 weaponMapLargeRuntimeSize; 
  unsigned int jj; 
  unsigned int kk; 
  char *fmt; 
  char *fmtd; 
  char *fmta; 
  char *fmte; 
  char *fmtb; 
  char *fmtf; 
  char *fmtc; 
  char *fmtg; 
  __int64 frameDuration; 
  __int64 frameDurationa; 
  __int64 frameDurationb; 
  __int64 frameDurationc; 
  ScriptableInitLimits scriptableInitLimits; 
  ScriptableInitLimits scriptableInitLimitsa; 
  ScriptableInitLimits scriptableInitLimitsb; 
  ScriptableInitLimits scriptableInitLimitsc; 

  v1 = DCONST_DVARBOOL_sv_memory_print;
  if ( !DCONST_DVARBOOL_sv_memory_print && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_memory_print") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 689, ASSERT_TYPE_ASSERT, "( initSettings )", (const char *)&queryFormat, "initSettings") )
      __debugbreak();
    BgWeaponMap::ValidateRuntimeSize(initSettings->maxClientCount, initSettings->mapName, initSettings->weaponMapLargeRuntimeSize);
    ScriptableSv_InitCounts(0xC8u, 0x30u);
    UsableWorld_InitLimits();
    BgWeaponMap::InitRuntimeSize(0xC8u, initSettings->mapName, 0x3FFu);
    scriptableInitLimits.replicatedPartLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
    LODWORD(frameDuration) = scriptableInitLimits.replicatedPartLimit;
    scriptableInitLimits.replicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(fmt) = scriptableInitLimits.replicatedInstanceLimit;
    Com_Printf(15, "Memory Estimates (Ship, Maximum) with %i Clients, %i Agents, %i instances and %i parts\n", 200i64, 48i64, fmt, frameDuration);
    for ( i = 0; i <= 1; ++i )
    {
      for ( j = 16; j <= 0x40; j += 8 )
      {
        LODWORD(fmtd) = SV_MemoryMP_GetTotalAllocationSize(j, i, 0xC8u, 0x30u, scriptableInitLimits, initSettings->frameDuration, None, 0, 1, 0, 1) >> 20;
        Com_Printf(15, "[%i, %i] %i mb\n", j, i, fmtd);
      }
    }
    ScriptableSv_ClearCounts();
    ScriptableSv_InitCounts(0xCu, 0xAu);
    UsableWorld_InitLimits();
    BgWeaponMap::InitRuntimeSize(0xCu, initSettings->mapName, 0xFFu);
    scriptableInitLimitsa.replicatedPartLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
    LODWORD(frameDurationa) = scriptableInitLimitsa.replicatedPartLimit;
    scriptableInitLimitsa.replicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(fmta) = scriptableInitLimitsa.replicatedInstanceLimit;
    Com_Printf(15, "Memory Estimates (Ship, Typical) with %i Clients, %i Agents, %i instances and %i parts\n", 12i64, 10i64, fmta, frameDurationa);
    for ( k = 0; k <= 1; ++k )
    {
      for ( m = 16; m <= 0x40; m += 8 )
      {
        LODWORD(fmte) = SV_MemoryMP_GetTotalAllocationSize(m, k, 0xCu, 0xAu, scriptableInitLimitsa, initSettings->frameDuration, None, 0, 1, 0, 1) >> 20;
        Com_Printf(15, "[%i, %i] %i mb\n", m, k, fmte);
      }
    }
    ScriptableSv_ClearCounts();
    ScriptableSv_InitCounts(0x96u, 0xAu);
    UsableWorld_InitLimits();
    BgWeaponMap::InitRuntimeSize(0x96u, initSettings->mapName, 0x1FFu);
    scriptableInitLimitsb.replicatedPartLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
    LODWORD(frameDurationb) = scriptableInitLimitsb.replicatedPartLimit;
    scriptableInitLimitsb.replicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(fmtb) = scriptableInitLimitsb.replicatedInstanceLimit;
    Com_Printf(15, "Memory Estimates (Ship, Warzone) with %i Clients, %i Agents, %i instances and %i parts\n", 150i64, 10i64, fmtb, frameDurationb);
    for ( n = 0; n <= 1; ++n )
    {
      for ( ii = 16; ii <= 0x40; ii += 8 )
      {
        LODWORD(fmtf) = SV_MemoryMP_GetTotalAllocationSize(ii, n, 0x96u, 0xAu, scriptableInitLimitsb, initSettings->frameDuration, None, 0, 1, 0, 1) >> 20;
        Com_Printf(15, "[%i, %i] %i mb\n", ii, n, fmtf);
      }
    }
    maxClientCount = initSettings->maxClientCount;
    maxAgentCount = initSettings->maxAgentCount;
    weaponMapLargeRuntimeSize = initSettings->weaponMapLargeRuntimeSize;
    ScriptableSv_ClearCounts();
    ScriptableSv_InitCounts(maxClientCount, maxAgentCount);
    UsableWorld_InitLimits();
    BgWeaponMap::InitRuntimeSize(maxClientCount, initSettings->mapName, weaponMapLargeRuntimeSize);
    scriptableInitLimitsc.replicatedPartLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
    LODWORD(frameDurationc) = scriptableInitLimitsc.replicatedPartLimit;
    scriptableInitLimitsc.replicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(fmtc) = scriptableInitLimitsc.replicatedInstanceLimit;
    Com_Printf(15, "Memory Estimates (Ship, Current) with %i Clients, %i Agents, %i instances and %i parts\n", maxClientCount, maxAgentCount, fmtc, frameDurationc);
    for ( jj = 0; jj <= 1; ++jj )
    {
      for ( kk = 16; kk <= 0x40; kk += 8 )
      {
        LODWORD(fmtg) = SV_MemoryMP_GetTotalAllocationSize(kk, jj, maxClientCount, maxAgentCount, scriptableInitLimitsc, initSettings->frameDuration, None, 0, 1, 0, 1) >> 20;
        Com_Printf(15, "[%i, %i] %i mb\n", kk, jj, fmtg);
      }
    }
    ScriptableSv_ClearCounts();
    BgWeaponMap::InitRuntimeSize(initSettings->maxClientCount, initSettings->mapName, initSettings->weaponMapLargeRuntimeSize);
  }
}

/*
==============
SV_InitMP_RegisterDvars
==============
*/
const dvar_t *SV_InitMP_RegisterDvars()
{
  const dvar_t *result; 

  SV_Init_RegisterDvarsCommon();
  DCONST_DVARBOOL_sv_dedicatedServerBandwidthTest = Dvar_RegisterBool("sv_dedicatedServerBandwidthTest", 1, 0x40004u, "Allow dedicated server to skip its bandwidth check");
  DCONST_DVARINT_sv_streamSync_peerWaitTimeout = Dvar_RegisterInt("sv_streamSync_peerWaitTimeout", 15000, 0, 600000, 0x40004u, "How much time in milliseconds do we wait before letting players in even though they haven't finished loading.");
  DCONST_DVARBOOL_sv_streamSync_devFillSlots = Dvar_RegisterBool("sv_streamSync_devFillSlots", 1, 0x40004u, "When enabled, will max out load slots for each client.");
  DCONST_DVARBOOL_sv_streamSync_devDisablePeerBlock = Dvar_RegisterBool("sv_streamSync_devDisablePeerBlock", 0, 0x40004u, "When enabled, will let players into the match even if they haven't sync'd data.");
  DCONST_DVARBOOL_sv_streamSync_devForceUnload = Dvar_RegisterBool("sv_streamSync_devForceUnload", 0, 0x40004u, "When enabled, will only send to the client the list of active models. This is to test unloads.");
  DCONST_DVARBOOL_sv_streamSync_devVerbose = Dvar_RegisterBool("sv_streamSync_devVerbose", 0, 0x40004u, "Turns on extra spam");
  DCONST_DVARBOOL_sv_streamSync_devDisablePresets = Dvar_RegisterBool("sv_streamSync_devDisablePresets", 0, 0x40004u, "Disable preset customization (used by bots)");
  DCONST_DVARINT_badhost_maxHappyPingTime = Dvar_RegisterInt("badhost_maxHappyPingTime", 400, 0, 999, 0x40004u, "Max ping that a player can have that we consider acceptable when calculating if the server is swamped");
  DCONST_DVARINT_badhost_minTotalClientsForHappyTest = Dvar_RegisterInt("badhost_minTotalClientsForHappyTest", 3, 1, 200, 0x40004u, "Minimum number of clients before it does the 'suck as host' test");
  DCONST_DVARFLT_badhost_minPercentClientsUnhappyToSuck = Dvar_RegisterFloat("badhost_minPercentClientsUnhappyToSuck", 0.50999999, 0.0, 1.0, 0x40004u, "What percentage of clients need to have a ping higher than sv_maxHappyPingTime before it aborts");
  DCONST_DVARBOOL_badhost_debug = Dvar_RegisterBool("badhost_debug", 0, 0x40004u, "Bad host debugging");
  DCONST_DVARBOOL_badhost_endGameIfISuck = Dvar_RegisterBool("badhost_endGameIfISuck", 1, 0x40004u, "End the match if most of the players are lagged out");
  DVARINT_protocol = Dvar_RegisterInt("protocol", 1098, 1098, 1098, 0x2400u, "Protocol version");
  DVARINT_ds_data_buildnumber_override = Dvar_RegisterInt("RRSKTSRQK", -1, -1, 0x7FFFFFFF, 0, "Force data build# override for ds/client compatibility");
  DVARINT_ds_code_buildnumber_override = Dvar_RegisterInt("LMTNTKTTLR", -1, -1, 0x7FFFFFFF, 0, "Force code build# override for ds/client compatibility");
  DVARBOOL_ds_info_enable = Dvar_RegisterBool("NNKKRRMOLN", 0, 0, "Enable ds info string");
  DVARSTR_ds_info = Dvar_RegisterString("OMKRTKQTPT", (const char *)&queryFormat.fmt + 3, 0, "ds info string");
  DVARINT_badhost_maxDoISuckFrames = Dvar_RegisterInt("LOQONLKTMR", 200, 0, 300, 0, "Max lagged frames need to end match");
  DVARINT_badHost_detectMinServerTime = Dvar_RegisterInt("NOTNSQPPTM", 20000, 0, 30000, 0, "Time in MS before the bad host dection system kicks in after match start");
  DVARBOOL_sv_printConfigStrings = Dvar_RegisterBool("LRRTROTNNK", 0, 0, "Print our the config strings that we're sending");
  DVARINT_sv_printArchiveDetails = Dvar_RegisterInt("MQQKTRRPSM", 0, 0, 2, 0, "Print spammy text showing what we're archiving in snapshots");
  DVARINT_sv_timeout = Dvar_RegisterInt("LQKRMNSSMO", 50, 0, 1800, 0, "seconds without any message");
  DVARINT_sv_connectTimeout = Dvar_RegisterInt("LSKRMTQMRO", 360, 0, 1800, 0, "seconds without any message when a client is loading");
  DVARINT_sv_rejoinTimeout = Dvar_RegisterInt("NONPLLKSNR", 5, 0, 1800, 0, "seconds without any message before allowing a rejoin");
  DVARINT_sv_zombietime = Dvar_RegisterInt("MKKROQKOOO", 2, 0, 1800, 0, "seconds to sync messages after disconnect");
  DVARINT_sv_min_reconnect_time = Dvar_RegisterInt("LKTLKNKSLN", 1000, 0, 0x7FFFFFFF, 0, "Minimum time in milliseconds between consecutive connect packets; otherwise packet is dropped.");
  DVARINT_sv_max_reconnect_time = Dvar_RegisterInt("NSKOLSTNMN", 5000, 0, 0x7FFFFFFF, 0, "Maximum time in milliseconds for what is still considered a reconnect; otherwise the connecting client is fully re-added.");
  DVARSTR_sv_allowedClan1 = Dvar_RegisterString("LSSPQRSQQQ", (const char *)&queryFormat.fmt + 3, 0, "Allow this clan to join the server");
  DVARSTR_sv_allowedClan2 = Dvar_RegisterString("OLKSKMQPMT", (const char *)&queryFormat.fmt + 3, 0, "Allow this clan to join the server");
  DVARFLT_sv_kickBanTime = Dvar_RegisterFloat("LMPMSPPOMT", 300.0, 0.0, 3600.0, 0, "Time in seconds for a player to be banned from the server after being kicked");
  DVARBOOL_sv_debugMessageKey = Dvar_RegisterBool("TLKTQPQNK", 0, 0, "net message key generation debugging");
  DVARINT_sv_debugPacketContents = Dvar_RegisterInt("LSTOPTLOTM", 0, 0, 3, 0, "print out the contents of every snapshot (VERY SLOW)");
  DVARBOOL_sv_debugTrackPacketContents = Dvar_RegisterBool("LPMTRTSTON", 0, 0, "whether to track packet contents when debug packet contents is off");
  DVARINT_sv_debugLargePacketsMinSize = Dvar_RegisterInt("MMSOPQRSPT", 1000, 0, 10000, 0, "Minimum client snapshot size to trigger an analysis printout");
  DVARINT_sv_debugLargePacketsMinSizeLargePlayerCount = Dvar_RegisterInt("LKSRKLPSPK", 3000, 0, 10000, 0, "Minimum client snapshot size to trigger an analysis printout for large player counts");
  DVARBOOL_sv_debugPacketContentsForClientThisFrame = Dvar_RegisterBool("MQPSOMMNML", 0, 0, "set to true to get the next snapshot for this client");
  DVARINT_sv_debugLargePacketsForcePrintSize = Dvar_RegisterInt("LPPTRQMLKT", 0, 0, 0x7FFFFFFF, 0, "Force a dump of the snapshot content if the snapshot size is bigger than this value");
  DVARBOOL_sv_writeNextLargeSnapshotToFile = Dvar_RegisterBool("OQONSQPSL", 0, 0, "Write the content of the next large snapshot to a file (if snap size > sv_debugLargePacketsForcePrintSize)");
  DVARBOOL_sv_sendSnapshotsToBots = Dvar_RegisterBool("QRLOOQKLR", 0, 0, "Whether to send snapshot data to bots also. Snapshots will get built and count against internal bandwidth profilers but won't actually get sent over the network.");
  DVARINT_sv_botsSimulatedLatency = Dvar_RegisterInt("MQRSRKTPQR", 0, 0, 1000, 0, "simulate X ms of latency on bots before they acknowledge a snapshot");
  DVARINT_sv_botsSimulatedJitter = Dvar_RegisterInt("OLMKKTSOQN", 0, 0, 1000, 0, "simulate X ms of jitter on bots before they acknowledge a snapshot");
  DVARINT_sv_minPingClamp = Dvar_RegisterInt("MROPPRSMRO", 100, 50, 200, 0, "Clamp the minimum ping to this value");
  DVARINT_sv_cumulThinkTime = Dvar_RegisterInt("NMOKTTPPM", 100, 75, 0x7FFFFFFF, 0, "Max client think per server 50 msec frame");
  DVARINT_sv_cmdMinBufferBurst = Dvar_RegisterInt("TPPRRKPLN", 50, 0, 0x7FFFFFFF, 0, "Minimum amount of observed burst time before the client begins buffering commands");
  DVARFLT_sv_cmdMinCumulThinkFrac = Dvar_RegisterFloat("MTNMQMRQKN", 0.5, 0.0, 1.0, 0, "Minimum fraction of a server frame for desired client think time");
  DVARFLT_sv_cmdMaxCumulThinkFrac = Dvar_RegisterFloat("MPOMMQSPN", 1.5, 1.0, 3.4028235e38, 0, "Maximum fraction of a server frame for desired client think time");
  DVARINT_sv_cmdBufferStepTime = Dvar_RegisterInt("LRLTNKPLMQ", 5000, 1, 0x7FFFFFFF, 0, "The amount of time (msec) to decay the last maximum observed burst to the current maximum observed burst");
  DVARFLT_sv_cmdBufferResponse = Dvar_RegisterFloat("MSNQTSQQTS", 0.75, 0.0, 3.4028235e38, 0, "The proportional response in adjusting the command execution time when our available buffer does not match the target buffer size");
  DVARFLT_sv_cmdBufferCumulResponse = Dvar_RegisterFloat("OMOTNQRTNM", 0.2, 0.0, 3.4028235e38, 0, "The integral response in adjusting the command execution time applied to the cumulative error between the available and target buffer sizes");
  DVARFLT_sv_cmdBufferCumulWindupScale = Dvar_RegisterFloat("MOLOQPNTPK", 0.80000001, 0.0, 3.4028235e38, 0, "The scale to apply to the integral response when the response exceeds the maximum");
  DVARINT_sv_cmdMaxCumulThinkError = Dvar_RegisterInt("OKTQNQTPQR", 48, 16, 0x7FFFFFFF, 0, "The maximum command time in addition to the current frame time that can be executed on a given server frame");
  DVARINT_sv_cmdMaxExtrapTime = Dvar_RegisterInt("MNKQRTQRPS", 48, 0, 0x7FFFFFFF, 0, "The maximum time the server will extrapolate client positions before predicting player input");
  DVARINT_sv_cmdMaxBufferTime = Dvar_RegisterInt("ROSKKRMOS", 512, 0, 0x7FFFFFFF, 0, "The maximum time the server will buffer client input before predicting player input");
  DVARINT_sv_cmdMaxBufferWindow = Dvar_RegisterInt("MKRLOQMTSL", 512, 0, 0x7FFFFFFF, 0, "The maximum duration over which to compensate for client packet bursting");
  DVARINT_sv_cmdBufferOffset = Dvar_RegisterInt("MLMLOMPSQO", 0, 0, 0x7FFFFFFF, 0, "The allowable buffer size before throttling is applied.");
  DVARINT_sv_cmdDeficitOffset = Dvar_RegisterInt("LQPKMNMNMO", 0, 0, 0x7FFFFFFF, 0, "The allowable cumulative command error before throttling is applied.");
  DVARINT_sv_cmdStartSurplus = Dvar_RegisterInt("MRMNOMNPMR", 0, 0x80000000, 0x7FFFFFFF, 0, "The amount of command surplus beyond which the throttle kicks in to drain the command buffer.");
  DVARINT_sv_cmdStartDeficit = Dvar_RegisterInt("LPRROTQSOP", -15, 0x80000000, 0x7FFFFFFF, 0, "The amount of command deficit beyond which the throttle kicks in to fill the command buffer.");
  DVARINT_sv_cmdTargetExtrapTime = Dvar_RegisterInt("LRTRKLMTON", 48, 0, 0x7FFFFFFF, 0, "The amount of time the server will extrapolate client positions before trying to buffer");
  DVARBOOL_sv_cmdDropOnPredict = Dvar_RegisterBool("ROPOPPROK", 0, 0, "When predicting player input on the server, drop input that arrives from the client for the predicted input frames");
  DVARBOOL_sv_cmdExtrapAngles = Dvar_RegisterBool("MMSQPQPKNR", 1, 0, "True to enable view angle extrapolation for extrapolative commands");
  DVARBOOL_sv_cmdPredictAngles = Dvar_RegisterBool("LPMNLPLTKQ", 1, 0, "True to enable view angle extrapolation for predictive commands");
  DVARBOOL_sv_cmdDebugBufferVerbose = Dvar_RegisterBool("MRSNOPQSLK", 0, 0, "True if verbose debugging the command buffering is enabled");
  DVARINT_sv_cmdThrottleType = Dvar_RegisterInt("OKRPNQTQT", 1, 0, 2, 0, "The algorithm used to determine client input throttling");
  DVARINT_sv_cmdThrottleWindow = Dvar_RegisterInt("NQLTMNRKRR", 500, 0, 5000, 0, "The window size, in milliseconds, for the fixed window throttle type");
  DVARINT_sv_cmdMaxCommandTime = Dvar_RegisterInt("SMTRRKSTP", 16, 0, 0x7FFFFFFF, 0, "The maximum desired user command duration, in milliseconds");
  DVARINT_sv_cmdMinCommandTimeClientCutoff = Dvar_RegisterInt("NPKLTQKSQP", 130, 0, 0x7FFFFFFF, 0, "The number of active clients above which the server sets the maximum command time (sv_cmdMaxCommandTime)");
  DVARINT_sv_useExtraCompress = Dvar_RegisterInt("OLMRMNQOKS", 1, 0, 1, 0, "Use zlib compress for gamestate/baseline/score packets");
  DVARBOOL_sv_recordPingHistogram = Dvar_RegisterBool("MSPNRQRSRK", 1, 0, "Whether or not to log SvClientMp::pingHistogram for each client");
  DVARINT_sv_checkMinPlayers = Dvar_RegisterInt("NOQPNNSKKR", 4, 0, 200, 0, "Check min players. 0 disables");
  DVARBOOL_sv_debugMinPlayers = Dvar_RegisterBool("LPTKPRRPPQ", 0, 0, "Debug min players");
  DCONST_DVARINT_sv_network_fps = Dvar_RegisterInt("sv_network_fps", 1000, 20, 1000, 0x40004u, "Number of times per second the server checks for net messages");
  DCONST_DVARINT_sv_start_check_interval = Dvar_RegisterInt("sv_start_check_interval", 1, 0, 1000, 0x40004u, "Amount of time in milliseconds we sleep between consecutive checks for server start.");
  DCONST_DVARINT_sv_start_check_timeout = Dvar_RegisterInt("sv_start_check_timeout", 0, 0, 0x7FFFFFFF, 0x40004u, "Amount of time in milliseconds in total before we time out checking for server start and break out.");
  DVARBOOL_sv_transmission_error_enabled = Dvar_RegisterBool("MQTTKKTPNM", 1, 0, "Whether or not to drop clients immediately on transmit errors");
  DVARBOOL_sv_debugPlayerstate = Dvar_RegisterBool("LRMQNLOMNS", 0, 0, "Print out what fields are changing in the playerstate");
  DVARINT_sv_snapshotReportTimeThreshold = Dvar_RegisterInt("MOMRPNOLNL", 125, 0, 0x7FFFFFFF, 0, "Milliseconds before reporting how long last complete snapshot send took");
  DVARBOOL_sv_error_on_baseline_failure = Dvar_RegisterBool("NSOTRTRKNS", 0, 0, "Throw an error if the const baseline data is invalid.");
  DVARBOOL_testClients_doAttack = Dvar_RegisterBool("NSLPLMQNSL", 1, 0, "Testclients will use the attack button.");
  DVARBOOL_testClients_doMove = Dvar_RegisterBool("QLQOSNNOO", 1, 0, "Testclients will use the movement.");
  DVARBOOL_testClients_doReload = Dvar_RegisterBool("OKNTSKLPKO", 1, 0, "Testclients will use the reload button.");
  DVARBOOL_testClients_doCrouch = Dvar_RegisterBool("ROTLTRSTR", 0, 0, "Testclients will use the crouch button.");
  DVARBOOL_testClients_doProne = Dvar_RegisterBool("MNLSQNRTKN", 0, 0, "Testclients will use the prone button.");
  DVARBOOL_testClients_watchKillcam = Dvar_RegisterBool("OMRPQLNQMM", 1, 0, "Testclients will not press buttons during killcam.");
  DVARINT_sv_fakeHitchDelay = Dvar_RegisterInt("NPNNTQMMPN", 0, 0, 10000, 0, "Time in milliseconds between hitches.");
  DVARINT_sv_fakeHitchDuration = Dvar_RegisterInt("LMNMOQNKTK", 0, 0, 10000, 0, "Length of hitch in milliseconds.");
  DVARINT_replay_client = Dvar_RegisterInt("MRKSSRORQO", 0, 0, 200, 0, "Replay client to view");
  DVARINT_scr_cp_objective = Dvar_RegisterInt("scr_cp_objective", 0, 0, 0x7FFFFFFF, 0x80u, "Set to 0 by default, we will use various integers to define what objective type we will have on a specific playlist.");
  DVARBOOL_scr_switch_to_aliens = Dvar_RegisterBool("scr_switch_to_aliens", 0, 0x80u, "Set to 1 to change all enemy soldiers to aliens. C6's on the walls of the machine shop are still robots at the moment.");
  DCONST_DVARBOOL_sv_enable_server_wake = Dvar_RegisterBool("sv_enable_server_wake", 1, 0x40004u, "Allow the server to wake itself when enough time passes");
  DCONST_DVARINT_sv_max_server_update = Dvar_RegisterInt("sv_max_server_update", 100, 50, 0x7FFFFFFF, 0x40004u, "The maximum allowable delta to update the server time with on a given time step");
  DVARBOOL_sv_usercmd_print = Dvar_RegisterBool("NRQNTMQLPS", 0, 0, "Print the command packets read by the server.");
  DCONST_DVARBOOL_sv_usermove_workers = Dvar_RegisterBool("sv_usermove_workers", 1, 0x40004u, "Enable user move processing on workers");
  DCONST_DVARBOOL_sv_clientWorkersEnabled = Dvar_RegisterBool("sv_clientWorkersEnabled", 1, 0x40004u, "Enable end frame processing on workers");
  DCONST_DVARBOOL_sv_entityWorkersEnabled = Dvar_RegisterBool("sv_entityWorkersEnabled", 1, 0x40004u, "Enable server per-entity processing on workers");
  DVARINT_sv_delay_cpwave_matchinprogress = Dvar_RegisterInt("LKKRLSMRQP", 8, 0, 0x7FFFFFFF, 0, "Seconds to delay the ui_match_in_progress update in cp_wave_sv game mode");
  DCONST_DVARINT_migration_blocksperframe = Dvar_RegisterInt("migration_blocksperframe", 0, 0, 32, 0x40004u, "Number of blocks to send out each server frame.  A value of 0 means base it off our tested bandwidth.\n");
  DCONST_DVARINT_migration_msgtimeout = Dvar_RegisterInt("migration_msgtimeout", 500, 0, 0x7FFFFFFF, 0x40004u, "timeout time in ms of migration messages");
  DCONST_DVARINT_migration_limit = Dvar_RegisterInt("migration_limit", 5, 0, 0x7FFFFFFF, 0x40004u, "maximum number of migrations within migration_timeBetween dvar's value in milliseconds.");
  DCONST_DVARINT_migration_timeBetween = Dvar_RegisterInt("migration_timeBetween", 30000, 0, 0x7FFFFFFF, 0x40004u, "milliseconds between migration_limit dvar's value of migrations.");
  DCONST_DVARINT_migration_verboseBroadcastTime = Dvar_RegisterInt("migration_verboseBroadcastTime", 100, 0, 0x7FFFFFFF, 0x40004u, "time in milliseconds between verbose migration state broadcasts");
  DCONST_DVARFLT_migrationStressRandTime = Dvar_RegisterFloat("migrationStressRandTime", 0.0, 0.0, 3.4028235e38, 0x40004u, "Random time for host migrations.");
  DCONST_DVARFLT_migrationStressMinTime = Dvar_RegisterFloat("migrationStressMinTime", 10.0, 0.0, 3.4028235e38, 0x40004u, "The min time before a host migration will start.");
  DCONST_DVARBOOL_migrationStressSaveLoadOnly = Dvar_RegisterBool("migrationStressSaveLoadOnly", 1, 0x40004u, "If set to true, only save and load will be tested. This case is nice, because it is simple and can be done with a single kit.");
  DVARBOOL_migration_kickoldhost = Dvar_RegisterBool("LNSNKRQNTT", 1, 0, "whether to kick the old host on migration");
  DVARBOOL_migration_crossplay_allow_pc_host = Dvar_RegisterBool("MMTLLQSMNR", 0, 0, "whether PC's can host listen matches in a game with consoles");
  DVARINT_sv_snapshot_size_estimate_mp = Dvar_RegisterInt("MTQNNRPQQM", 1024, 0, 0x7FFFFFFF, 0, "Estimated size of delta snapshot for MP. Rather over than undershoot this.");
  DVARINT_sv_baseline_size_estimate_mp = Dvar_RegisterInt("MNNSPLMMMP", 7168, 0, 0x7FFFFFFF, 0, "Estimated size of baseline snapshot for MP. Rather over than undershoot this.");
  DVARINT_sv_snapshot_size_estimate_br = Dvar_RegisterInt("RRLSSRRLL", 4096, 0, 0x7FFFFFFF, 0, "Estimated size of delta snapshot for BR.");
  DVARINT_sv_baseline_size_estimate_br = Dvar_RegisterInt("LPPQSRMPMK", 15360, 0, 0x7FFFFFFF, 0, "Estimated size of baseline snapshot for BR.");
  DVARINT_sv_snapshot_size_huge = Dvar_RegisterInt("NMPKRNMQML", 4096, 0, 0x7FFFFFFF, 0, "Size of a snapshot to be considered 'huge'");
  DVARINT_sv_snapshot_delay_nodelta = Dvar_RegisterInt("SPOSSQKNP", 200, 50, 2000, 0x80u, "Time to delay snapshots to clients who we've just sent a no-delta snapshot");
  DVARINT_sv_snapshot_delay_connecting = Dvar_RegisterInt("MQSOSLMPOK", 1000, 50, 2000, 0x80u, "Time to delay snapshots to clients who are connecting/zombie");
  DVARBOOL_sv_snapshot_throttle_nobaseline = Dvar_RegisterBool("NOQPLLOQRR", 1, 0x80u, "Whether to throttle snapshot sending to clients who have not acked baseline yet");
  DVARINT_sv_snapshot_silence_threshold_send = Dvar_RegisterInt("QNRNRRTLM", 120, 0, 1000, 0, "Ms of silence in snapshot sends before we trigger a silence event");
  DVARINT_sv_snapshot_silence_threshold_recv = Dvar_RegisterInt("LOKNNQLKMM", 50, 0, 1000, 0, "Ms of silence in snapshot acks before we trigger a silence event. Zero to emit warning if acks are not received on every server frame.");
  DVARINT_sv_cp_remote_client_snapshot_msec_default = Dvar_RegisterInt("NONRKKKLML", 100, -1, 100, 0x80u, "CP mode remote client snapshot rate, used to set sv_remote_client_snapshot_msec");
  DVARINT_sv_mp_LAN_remote_client_snapshot_msec_default = Dvar_RegisterInt("TMPMPLTRT", 50, -1, 100, 0x80u, "MP mode LAN client snapshot rate, used to set sv_remote_client_snapshot_msec");
  DVARINT_sv_mp_peer_remote_client_snapshot_msec_default = Dvar_RegisterInt("NTNKMLOQLO", 100, -1, 100, 0x80u, "MP mode remote client snapshot rate for peer hosted games, used to set sv_remote_client_snapshot_msec");
  DCONST_DVARINT_sv_compression_threshold = Dvar_RegisterInt("sv_compression_threshold", 1, 1, 148440, 0x40004u, "Message size threshold which triggers compression");
  DCONST_DVARINT_sv_zlib_threshold = Dvar_RegisterInt("sv_zlib_threshold", 1200, 1, 148440, 0x40004u, "Message size threshold which triggers more aggressive compression");
  DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities = Dvar_RegisterBool("sv_errorOnMaxSnapshotEntities", 1, 0x40004u, "Whether or not to end the game when reaching MAX_SNAPSHOT_ENTITIES");
  DCONST_DVARBOOL_sv_sendOverMaxSnapshotEntities = Dvar_RegisterBool("sv_sendOverMaxSnapshotEntities", 1, 0x40004u, "Whether or not to send all entities if max limit is passed (if sv_errorOnMaxSnapshotEntities is false)");
  DVARBOOL_sv_sendSnapshots = Dvar_RegisterBool("RQOSNTKTQ", 1, 0, "Whether to actually send snapshot data or just empty snapshots");
  DVARBOOL_sv_debugRate = Dvar_RegisterBool("NPOOTPTSS", 0, 0, "Enable snapshot rate debugging info");
  DVARBOOL_sv_debugReliableCmds = Dvar_RegisterBool("NKLMNKQSQN", 0, 0, "Enable debugging information for 'reliable' commands");
  DVARBOOL_sv_snapshotDebugVerbose = Dvar_RegisterBool("LLSMSORTM", 1, 0, "Verbose snapshot warnings");
  DVARBOOL_sv_showAverageBPS = Dvar_RegisterBool("MSORRTLTKQ", 0, 0, "Show average bytes per second for net debugging");
  DVARBOOL_sv_log_blackbox_snapshot_data = Dvar_RegisterBool("LRRMMSKLSQ", 0, 0, "Whether or not to log baseline, snapshot, and other network related event data to blackbox");
  DCONST_DVARBOOL_sv_snapshotWorkersEnabled = Dvar_RegisterBool("sv_snapshotWorkersEnabled", 1, 0x40004u, "Enable constructing client snapshots using worker commands.");
  DVARBOOL_sv_snapshotWorkersDeferMessageBuild = Dvar_RegisterBool("LMSOTPTQR", 0, 0, "Defer snapshot messages until the server game runs a frame");
  DVARINT_sv_snapshotWorkersDeferMessageBuildForClientCount = Dvar_RegisterInt("MQLSRSOPPK", 0, 0, 0x7FFFFFFF, 0, "Defer snapshot messages until the server game runs a frame when the client count exceeds the specified number. (Zero value disables snapshot defer)");
  DCONST_DVARBOOL_sv_snapshotServerMessageEnabled = Dvar_RegisterBool("sv_snapshotServerMessageEnabled", 1, 0x40004u, "Enable constructing server delta's to use for encoding client delta's.");
  DCONST_DVARINT_sv_snapshotServerMessageMinClients = Dvar_RegisterInt("sv_snapshotServerMessageMinClients", 2, 1, 0x7FFFFFFF, 0x40004u, "Build a server message if N (or more) clients are requesting the same snapshot.");
  DVARBOOL_sv_killcam_exit_delta_from_last_game_snap = Dvar_RegisterBool("PMMQLLKMS", 0, 0, "When enabled, will allow the server to try and delta encode the game snap after leaving killcam from the last game (non killcam) snapshot.");
  DVARBOOL_sv_snapshot_blindDeltaEnabled = Dvar_RegisterBool("NTRLKMLNLQ", 1, 0, "Allow the server to encode unacknowledged snapshots to reduce bandwidth");
  DVARINT_sv_snapshot_blindDeltaMaxTimeDelta = Dvar_RegisterInt("OLRMRKMSNM", 50, 0, 1000, 0, "Time delta since the last sent snapshots within which we allow blind deltas");
  DVARINT_sv_snapshot_throttleBackupCount = Dvar_RegisterInt("NQMSPTORTR", 30, 0, 64, 0, "Start throttling (exponential backoof) the msg frequency if the client has not acked the last X messages");
  DCONST_DVARBOOL_sv_snapshot_transientStorageEnabled = Dvar_RegisterBool("sv_snapshot_transientStorageEnabled", 1, 0x40004u, "Allow the server to send snapshots without storing them to reduce memory usage");
  DCONST_DVARINT_sv_snapshot_transientStorageMaxAllowedSendMsec = Dvar_RegisterInt("sv_snapshot_transientStorageMaxAllowedSendMsec", 50, 0, 100, 0x40004u, "Rate after which the transient snapshot storage is disabled. E.g. by default, only 50ms and below will use this");
  DVARINT_sv_forceNetfieldLoD = Dvar_RegisterInt("OKTSLRSQMS", 1, -1, 1, 0, "Force the netfields' LoD (-1: dynamic lod, 0: low LoD, 1: high LoD).");
  DVARINT_sv_useLowLodEntityEvents = Dvar_RegisterEnum("LQMTQKONKR", g_lowLoDEntityEventModeStrings, 0, 0, "Generate low lod entity events (will steal one event from high lod event buffer). Changing this dvar mid-match may cause a mix of event types/invalid event sequences.");
  DVARFLT_sv_entitiesPartitioningNearbyRangeX = Dvar_RegisterFloat("LSKPPLSTSO", 8000.0, 0.0, 3.4028235e38, 0, "Entities that are in cells within clientpos +- sv_entitiesPartitioningNearbyRangeX X axis will be returned by the nearby search.");
  DVARFLT_sv_entitiesPartitioningNearbyRangeY = Dvar_RegisterFloat("NSRSLNSOLR", 8000.0, 0.0, 3.4028235e38, 0, "Entities that are in cells within clientpos +- sv_entitiesPartitioningNearbyRangeX Y axis will be returned by the nearby search.");
  DCONST_DVARBOOL_sv_entitiesPartitioningDrawOverlay = Dvar_RegisterBool("sv_entitiesPartitioningDrawOverlay", 0, 0x40004u, "Displays an overlay of the last entities query.");
  DCONST_DVARINT_sv_default_client_bandwidth = Dvar_RegisterInt("sv_default_client_bandwidth", 49152, 1024, 0x7FFFFFFF, 0x40004u, "Default client downstream bandwidth in bytes if none was provided in userinfo. Default to 1Mbit.");
  DCONST_DVARINT_sv_min_client_bandwidth = Dvar_RegisterInt("sv_min_client_bandwidth", 1024, 1024, 0x7FFFFFFF, 0x40004u, "Minimum client downstream bandwidth in bytes if provided value was unreasonably low. Default to 256Kbit");
  DCONST_DVARINT_sv_max_client_bandwidth = Dvar_RegisterInt("sv_max_client_bandwidth", 128000, 1024, 0x7FFFFFFF, 0x40004u, "Maximum client downstream bandwidth in bytes if provided value was unreasonably low");
  DCONST_DVARINT_sv_server_bandwidth_override = Dvar_RegisterInt("sv_server_bandwidth_override", -1, -1, 0x7FFFFFFF, 0x40004u, "Override for available server bandwidth. Will allow to simulate bandwidth restricted listen servers on dedi.");
  DVARBOOL_sv_virtual_archive_enabled = Dvar_RegisterBool("LOSKQOPNKL", 0, 0, "Whether virtual archive is enabled");
  DVARINT_sv_virtual_archive_page_mode = Dvar_RegisterInt("OKKTOPLLTL", 0, 0, 2, 0, "0 (default): Page non-active segments out dynamically; 1: Let OS decide; 2: Lock entire archive into physical memory.");
  DVARINT_sv_killcam_length_max = Dvar_RegisterInt("NSQSLQQTRK", 60, 0, 0x7FFFFFFF, 0, "Maximum killcam length in seconds. Determines necessary archive buffer size.");
  DVARINT_sv_archive_frame_size_mp = Dvar_RegisterInt("LMLOOPKLPL", 2048, 0, 0x7FFFFFFF, 0, "Arhive frame size estimate for MP.");
  DVARINT_sv_archive_frame_size_br = Dvar_RegisterInt("MKNKMKMONS", 5120, 0, 0x7FFFFFFF, 0, "Arhive frame size estimate for BR.");
  DVARBOOL_sv_archive_smooth_transform_origin = Dvar_RegisterBool("MSORPQRSMO", 0, 0, "Enable player origin smoothing for extrapolated states in killcam");
  DVARBOOL_sv_archive_smooth_transform_angles = Dvar_RegisterBool("LNTNMKLPKM", 0, 0, "Enable player angles smoothing for extrapolated states in killcam");
  DVARBOOL_sv_netfieldHighLoDMissilesEnable = Dvar_RegisterBool("LLMNQRQQML", 1, 0, "Killswitch for missile heuristic for high network lod classification");
  DVARBOOL_sv_netfieldHighLoDScriptablesEnable = Dvar_RegisterBool("LQSNRTMKRQ", 1, 0, "Killswitch for scriptable heuristic for high network lod classification");
  DVARBOOL_sv_netfieldHighLoDValidation = Dvar_RegisterBool("QOPTQQQOO", 1, 0, "Killswitch for netfield validation");
  DVARINT_bot_DebugPersonality = Dvar_RegisterEnum("LNPKNONKTK", BOT_STR_TBL_PERSONALITY, 3, 4u, "Override the personality of the bots. Only affects bots that spawn subsequently.");
  DVARINT_bot_DebugDifficulty = Dvar_RegisterEnum("OMMRLPTPOL", BOT_STR_TBL_DIFFICULTY, 4, 0, "Override the difficulty level of the bots.  Only affects bots that spawn subsequently.");
  DVARINT_bot_MaxNumAllyBots = Dvar_RegisterInt("SNMLPONRP", -1, -1, 200, 0, "Maximum number of allied bots (will not exceed client limits though)");
  DVARINT_bot_MaxNumEnemyBots = Dvar_RegisterInt("RNRLKSNNR", -1, -1, 200, 0, "Maximum number of enemy bots (will not exceed client limits though)");
  DVARBOOL_bot_DisableAllAI = Dvar_RegisterBool("NKOLRNSOKM", 0, 0, "Disables ALL bot AI");
  DVARINT_bot_DisableMovement = Dvar_RegisterEnum("MORQPNORMS", BOT_DISABLE_MOVEMENT_STRINGS, 0, 0, "Disable bot movement or movement and rotation");
  DVARBOOL_bot_DisableKillstreaks = Dvar_RegisterBool("SRNSRQLQ", 0, 0, "Bots will not use any killstreaks");
  DVARBOOL_bot_SkipKillcams = Dvar_RegisterBool("NKKQNKLROO", 0, 0, "Bots will always skip watching their killcams");
  DVARBOOL_bot_DisableAttack = Dvar_RegisterBool("NSRQOLSQLT", 0, 0, "Bots will not be allowed to do any attacks");
  DVARINT_bot_NoTarget = Dvar_RegisterEnum("MKQNRNNKQN", BOT_NO_TARGET_STRINGS, 0, 0, "Bots will not target these types of entities");
  DVARBOOL_bot_GodMode = Dvar_RegisterBool("NNNMPLPMSK", 0, 0, "Bots will be invincible");
  DVARBOOL_bot_DemiGodMode = Dvar_RegisterBool("LLTLOQOTQP", 0, 0, "Bots will take pain, but won't die");
  DVARBOOL_bot_SimulateNoAmmo = Dvar_RegisterBool("NNTTLPTTMM", 0, 0, "Bots will act like they are out of ammo");
  DVARBOOL_bot_DisableGrenadeThrow = Dvar_RegisterBool("LRONSQQOOR", 0, 0, "Bots will not use grenades or equipment");
  DVARBOOL_bot_EnableNoPathnodeBehavior = Dvar_RegisterBool("MQNOMMKSMM", 0, 0, "Bots will be allowed to function without pathnodes in the map");
  DVARINT_bot_BadPlaceTest = Dvar_RegisterInt("MTQSOQTQOT", 0, 0, 3, 0, "bad place at human player locations every second (1 for grenade, 2 for helicopter, 3 for global outside");
  DVARINT_bot_DebugPathStyle = Dvar_RegisterEnum("LNSSKNORQS", BOT_STR_TBL_PATH_TYPE, 0, 0, "Forces all bots to use a specific pathing style");
  DVARINT_bot_DebugPathGoal = Dvar_RegisterInt("NSLRNMNNSM", 0, 0, 4, 0, "Enables mode when > 0 to allow player to either aim at a point with ADS (or press reload to specify spot he is standing) as debug goal waypoint for current dvar index");
  DVARBOOL_bot_DebugPathGoal_AllBots = Dvar_RegisterBool("NRLTMOQPO", 0, 0, "Causes all bots to use the debugPathGoal, not just the nearest one");
  DVARBOOL_bot_DebugPathGoal_DrawPathsBetweenPoints = Dvar_RegisterBool("LNTPLNTQTK", 0, 0, "Generate and draw a path between the sequence of points when using bot_DebugPathGoal");
  DVARBOOL_bot_ForceGrenadeThrow = Dvar_RegisterBool("MLLQPQRMNK", 0, 0, "Force bots to throw a grenade much more often than usual");
  DVARINT_bot_ForceStance = Dvar_RegisterEnum("LQOLSLSMNM", BOT_FORCE_STANCE_STRINGS, 0, 0, "Force bots to take a specific stance");
  DVARBOOL_bot_ForcePathIndoors = Dvar_RegisterBool("LKQONQMTKT", 0, 0, "force bots to attempt indoor pathing");
  DVARINT_bot_DrawDebug = Dvar_RegisterEnum("LNTQKTMLS", BOT_DEBUG_STRINGS, 0, 0, "Draws debug bot info");
  DVARINT_bot_DrawDebugSpecial = Dvar_RegisterEnum("NOONQMPQPT", BOT_DEBUG_SPECIAL_STRINGS, 0, 0, "Draws debug bot info for special modes");
  DVARBOOL_bot_DrawDebugGametype = Dvar_RegisterBool("NQOPLMSRMO", 0, 0, "Draws special debug bot info unique to the current gametype");
  DVARINT_bot_DrawDebugHudEnt = Dvar_RegisterInt("MLRNNPNLLQ", -1, -1, 247, 0, "draws debug bot info on HUD for given entity (-1 for entity being viewed in first person)");
  DVARINT_bot_DrawDebugOnlySpectated = Dvar_RegisterInt("QSSPRTMSN", 0, 0, 1, 0, "If true, bot debug drawing will be limited to the current bot being spectated");
  DVARINT_bot_DrawDebugOnlyEntityNum = Dvar_RegisterInt("MKPKMNNLNL", -1, -1, 247, 0, "If true, bot debug drawing will be limited to this specific entity number");
  DVARBOOL_bot_DrawNavmeshExposure = Dvar_RegisterBool("NLTKLPOLTK", 0, 0, "Used to Toggle Area Exposure Drawing on the navmesh");
  DVARBOOL_bot_DrawSplashDamageChecks = Dvar_RegisterBool("LONOPKQKKK", 0, 0, "Draw splash damage detection checks");
  DVARINT_bot_DrawSeeThrough = Dvar_RegisterEnum("NRTRNMOQNL", BOT_DRAW_SEE_THRU_STRINGS, 1, 0, "bots will draw geometry they can see through");
  DVARINT_bot_DrawBrokenTraversals = Dvar_RegisterEnum("MMLMKLTNON", BOT_DRAW_BROKEN_TRAVERSALS_STRINGS, 1, 0, "bots will draw boxes around traversals that they failed to use");
  DVARBOOL_bot_ScoreHold = Dvar_RegisterBool("NMMQQLSKO", 0, 4u, "holds scored nodes and parameters and continues to score them every frame");
  DVARINT_bot_ScoreClient = Dvar_RegisterInt("PLMORMMLK", -1, -1, 199, 4u, "draw node scores only for particular client");
  DVARINT_bot_ScoreType = Dvar_RegisterEnum("LRORMKSLPP", BOT_STR_TBL_SCORE_TYPES, 0, 4u, "draws color coded node selection scoring");
  DVARINT_bot_ScoreDist = Dvar_RegisterInt("MONTSQNPKT", 1000, 0, 20000, 4u, "max distance from camera that nodes will draw");
  DVARINT_bot_ScoreShowAll = Dvar_RegisterEnum("LNNTRPOKNN", BOT_SCORE_SHOW_ALL_STRINGS, 0, 0, "draw all nodes considered (not just the top choices)");
  DVARBOOL_bot_ScoreShowFactors = Dvar_RegisterBool("LLMTNNQOQQ", 0, 0, "draw all factors along with node scores");
  DVARINT_bot_ScoreMinCutoff = Dvar_RegisterInt("NNTSRNQSRM", 0, 0, 4095, 0, "When using bot_ScoreType, will not draw any nodes that score less than this amount");
  DVARINT_bot_ScoreMaxCutoff = Dvar_RegisterInt("NOLLPMSPMQ", 4095, 0, 4095, 0, "When using bot_ScoreType, will not draw any nodes that score more than this amount");
  DVARBOOL_bot_ScoreValReset = Dvar_RegisterBool("LKQMNSMQQL", 0, 0, "resets all score factor weight offsets to zero then sets itself to false");
  DVARFLT_bot_ScoreVal0 = Dvar_RegisterFloat("ORORLTMRM", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 0");
  DVARFLT_bot_ScoreVal1 = Dvar_RegisterFloat("MPORNNSRKP", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 1");
  DVARFLT_bot_ScoreVal2 = Dvar_RegisterFloat("NMOTTKSOM", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 2");
  DVARFLT_bot_ScoreVal3 = Dvar_RegisterFloat("MNTRQLKMRP", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 3");
  DVARFLT_bot_ScoreVal4 = Dvar_RegisterFloat("LRPMQMOLM", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 4");
  DVARFLT_bot_ScoreVal5 = Dvar_RegisterFloat("MMORSSLSOP", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 5");
  DVARFLT_bot_ScoreVal6 = Dvar_RegisterFloat("MPPNNTSM", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 6");
  DVARFLT_bot_ScoreVal7 = Dvar_RegisterFloat("MKTSLPNOLP", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 7");
  DVARFLT_bot_ScoreVal8 = Dvar_RegisterFloat("LKRNQNMTTM", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 8");
  DVARFLT_bot_ScoreVal9 = Dvar_RegisterFloat("NLOQMPMOMP", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 9");
  DVARFLT_bot_ScoreVal10 = Dvar_RegisterFloat("LMPSPQSSRR", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 10");
  DVARFLT_bot_ScoreVal11 = Dvar_RegisterFloat("NOSKTLQROK", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 11");
  DVARFLT_bot_ScoreVal12 = Dvar_RegisterFloat("LLKSSOKOOR", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 12");
  DVARFLT_bot_ScoreVal13 = Dvar_RegisterFloat("NNNLLSSNLK", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 13");
  DVARFLT_bot_ScoreVal14 = Dvar_RegisterFloat("LPPSKMPRNR", 0.0, -100.0, 100.0, 0, "debug dvar for offsetting scoring factor weight 14");
  DVARINT_scrAgent_DebugEnt = Dvar_RegisterInt("LOKTORKSMR", -1, -1, 2048, 4u, "Use this to turn off all Script agents except for the one with this entity number.");
  DVARBOOL_sv_anticheat_dataCollectionEnabled = Dvar_RegisterBool("NKTLOQKPRO", 0, 0, "Enable sv anticheat data collection.");
  DVARBOOL_sv_anticheat_perKillEventEnabled = Dvar_RegisterBool("OLRRKTQKKP", 1, 0, "Enable per-kill event logging (all logging will be disabled by sv_anticheat_dataCollectionEnabled = false)");
  DVARINT_sv_anticheat_playerKilled_angle_speed_window = Dvar_RegisterInt("MNSNKTPMTM", 2048, 1, 12288, 0, "Window of time (in ms) for which we'll record player angle speeds and report with kill data. NOTE: internal buffer is 256 frames long. Max is based on 48ms frame length.");
  result = Dvar_RegisterInt("OMTTLOSKR", 1000, 0, 0x7FFFFFFF, 0, "Time (in ms) after which 'sighted'-ness is considered to be lost when tracking first sighted time reported with kill data.");
  DVARINT_sv_anticheat_playerRecentlySighted_resetTime = result;
  return result;
}

/*
==============
SV_InitMP_RestartServer
==============
*/
void SV_InitMP_RestartServer(const SvServerInitSettings *initSettings)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvGameGlobals *SvGameGlobalsCommon; 
  bool savePersist; 
  bool v5; 
  unsigned __int8 Byte; 
  int v7; 

  SV_UserMoveWorkersMP_CheckNoWorkInProgress();
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -513;
  SV_MainMP_InitSnapshot();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  PersistentGlobalsMP->snapFlagServerBit ^= 4u;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v7 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v7) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext() )
  {
    sv_serverId_value = (sv_serverId_value & 0xF0) + (((_BYTE)sv_serverId_value + 1) & 0xF);
    SvGameGlobals::GetSvGameGlobalsCommon()->restarting = 1;
    Com_SetLocalServerRestarting(1);
  }
  SvGameGlobalsCommon[1].restarting = com_frameTime;
  SvStaticGlobals::ms_svStaticGlobals.state = SS_LOADING;
  SvGameGlobalsCommon[93].mapcrc = 0;
  SV_ClientNetPerf_Reset();
  SV_InitMP_SetXUIDConfigStrings();
  SV_GameMP_RestartGameProgs(initSettings);
  SV_InitMP_SpawnServer_ResetConnectedClients(0);
  savePersist = initSettings->savePersist;
  if ( SV_IsDemoPlaying() )
  {
    if ( SV_DemoMP_UsingDemoHistory() )
    {
      v5 = 0;
    }
    else
    {
      Byte = SV_Demo_GetByte();
      v5 = Byte != 0;
      if ( Byte )
        savePersist = SV_Demo_GetByte() != 0;
    }
  }
  else
  {
    v5 = 1;
    SV_Record_GetByte(1u);
    SV_Record_GetByte(savePersist);
  }
  SV_ClientMP_UpdateConnectedClientsOnRestart(v5, savePersist);
  SV_InitMP_SaveSystemInfo();
  SV_SnapshotMP_CreateBaselineIfNeeded();
  SV_InitMP_UpdateAllowedDvarFlags(initSettings);
}

/*
==============
SV_InitMP_RestartServerBegin
==============
*/
void SV_InitMP_RestartServerBegin(void)
{
  signed int i; 
  SvClient *CommonClient; 

  if ( !SV_DemoMP_UsingDemoHistory() )
  {
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      if ( SvClient::GetCommonClient(i)->state >= CS_CONNECTED )
        NetConnection::SendUnreliable((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], "fastrestart");
    }
  }
  SV_MainMP_InitServerEvents();
}

/*
==============
SV_InitMP_RestartServerFinalize
==============
*/
void SV_InitMP_RestartServerFinalize(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2422, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  SV_DemoMP_StartServerFinalize();
  Com_ResetFrametime();
}

/*
==============
SV_InitMP_SaveSystemInfo
==============
*/
void SV_InitMP_SaveSystemInfo(void)
{
  __int64 v0; 
  __int64 v1; 
  const char *DvarInfoString; 
  __int64 v3; 
  __int64 v4; 

  if ( !SV_DemoMP_UsingDemoHistory() )
  {
    v0 = tls_index;
    if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & 0x1000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1154, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 12))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_SYSTEMINFO") )
      __debugbreak();
    v1 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    *(_DWORD *)(v1 + 1048) &= ~0x1000u;
    DvarInfoString = SV_MainMP_GetDvarInfoString(1024);
    SV_SetConfigstring(0x210u, DvarInfoString);
    if ( (*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1052i64) & 0x400) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1158, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 10))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_SERVERINFO") )
      __debugbreak();
    v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    *(_DWORD *)(v3 + 1048) &= ~0x400u;
    SV_MainMP_SetCodInfoDvarValues();
    if ( (*(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1052i64) & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1162, ASSERT_TYPE_ASSERT, "(dvar_allowedModifiedFlags & (1 << 3))", (const char *)&queryFormat, "dvar_allowedModifiedFlags & DVAR_CODINFO") )
      __debugbreak();
    v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    *(_DWORD *)(v4 + 1048) &= ~8u;
  }
  SvStaticGlobals::ms_svStaticGlobals.state = SS_GAME;
  SvGameGlobals::GetSvGameGlobalsCommon()->restarting = 0;
  Com_SetLocalServerRestarting(0);
}

/*
==============
SV_InitMP_SetServerRestarting
==============
*/
void SV_InitMP_SetServerRestarting(bool restarting)
{
  SvGameGlobals::GetSvGameGlobalsCommon()->restarting = restarting;
  Com_SetLocalServerRestarting(restarting);
}

/*
==============
SV_InitMP_SetXUIDConfigStrings
==============
*/
void SV_InitMP_SetXUIDConfigStrings()
{
  const PartyData *ServerLobby; 
  unsigned int i; 
  SvClient *CommonClient; 
  const XUID *v3; 
  int MemberNatType; 
  unsigned int v5; 
  const PartyData *PartyData; 
  const bdSecurityID *PrivatePartyId; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  XUID xuid; 
  __int64 v13; 
  XUID result; 
  bdSecurityID v15; 
  BG_SynchronizedPlayerInfo v16; 
  XNADDR outAddr; 
  char str[32]; 
  char buffer[176]; 

  v13 = -2i64;
  XUID::XUID(&xuid);
  bdSecurityID::bdSecurityID(&v16.partyId);
  XUID::XUID(&v16.xuid);
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 186, ASSERT_TYPE_ASSERT, "(!SvPersistentGlobalsMP::IsFrontEndServer())", "%s\n\tCan't modify the session from the front end server", "!SvPersistentGlobalsMP::IsFrontEndServer()") )
    __debugbreak();
  if ( !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext() )
  {
    ServerLobby = SV_MainMP_GetServerLobby();
    if ( Session_IsValid(ServerLobby->session) )
    {
      for ( i = 0; (int)i < (int)SvClient::ms_clientCount; ++i )
      {
        if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
        {
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = SvClient::GetCommonClient(i);
          if ( !NetConnection::IsBot((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
          {
            v3 = Party_GetXuid(&result, ServerLobby, i);
            XUID::operator=(&xuid, v3);
            if ( XUID::IsValid(&xuid) )
            {
              bdSecurityID::bdSecurityID(&v15);
              BG_SynchronizedPlayerInfo_Reset(&v16);
              XUID::operator=(&v16.xuid, &xuid);
              if ( !SV_ClientMP_IsClientConnected(i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(SV_ClientMP_IsClientConnected( clientNum ))", (const char *)&queryFormat, "SV_ClientMP_IsClientConnected( clientNum )") )
                __debugbreak();
              SV_ClientMP_GetXNAddr(i, &outAddr);
              XNADDR::ToString(&outAddr, buffer);
              v16.xnaddr = outAddr;
              MemberNatType = Party_GetMemberNatType(ServerLobby, i);
              v5 = MemberNatType;
              if ( (unsigned int)(MemberNatType - 1) > 2 )
              {
                LODWORD(v11) = MemberNatType;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 227, ASSERT_TYPE_ASSERT, "( ( natType > 0 && natType <= XONLINE_NAT_STRICT ) )", "( natType ) = %i", v11) )
                  __debugbreak();
              }
              v16.natType = v5;
              Com_Printf(131087, "Setting client %i NATTYPE to %i\n", i, v5);
              Com_Printf(131087, "Setting client %i XNADDR to %s\n", i, buffer);
              if ( Lobby_IsInLobby() )
              {
                PartyData = Lobby_GetPartyData();
                v16.platformId = Party_GetPlatformId(PartyData, i);
                Com_Printf(131087, "Setting client %i PLATFORMUID to %llu\n", i, v16.platformId);
              }
              else
              {
                v16.platformId = 0i64;
              }
              v16.clientPlatform[0] = Party_GetMemberPlatform(ServerLobby, i);
              Com_Printf(131087, "Setting client %i PLATFORM to %d\n", i, (unsigned int)(char)v16.clientPlatform[0]);
              PrivatePartyId = SV_ClientMP_GetPrivatePartyId(i);
              XNKIDToString(PrivatePartyId, str, 21);
              v16.partyId = *PrivatePartyId;
              Com_Printf(131087, "Setting client %i XNKID to %s\n", i, str);
              v8 = XUID::ToDevString(&xuid);
              Com_Printf(131087, "Setting client %i XUID to %s\n", i, v8);
              v9 = Info_ValueForKey((const char *)&CommonClient[1].lastUsercmd.buttons + 4, "guest");
              LODWORD(PrivatePartyId) = atoi(v9);
              Com_Printf(131087, "Setting client %i GUEST to %i\n", i, (_DWORD)PrivatePartyId != 0);
              v16.isGuestAccount = (_DWORD)PrivatePartyId != 0;
              LODWORD(PrivatePartyId) = NetConnection::GetNetId((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]);
              Com_Printf(131087, "Setting client %i NETID to %i\n", i, (unsigned int)PrivatePartyId);
              v16.localNetId = (int)PrivatePartyId;
              v10 = Info_ValueForKey((const char *)&CommonClient[1].lastUsercmd.buttons + 4, "headless");
              LOBYTE(PrivatePartyId) = atoi(v10) != 0;
              Com_Printf(131087, "Setting client %i HEADLESS to %i\n", i, (unsigned __int8)PrivatePartyId);
              v16.isHeadless = (char)PrivatePartyId;
              SV_Live_SetPlayerInfo(i, &v16);
              bdSecurityID::~bdSecurityID(&v15);
            }
          }
        }
      }
    }
    else if ( (SV_Game_IsOnlineGame() || SV_Game_IsSystemLink()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 198, ASSERT_TYPE_ASSERT, "(!SV_Game_IsOnlineGame() && !SV_Game_IsSystemLink())", "%s\n\tShould have a valid session for networked play", "!SV_Game_IsOnlineGame() && !SV_Game_IsSystemLink()") )
    {
      __debugbreak();
    }
  }
  bdSecurityID::~bdSecurityID(&v16.partyId);
}

/*
==============
SV_InitMP_ShutdownForDemo
==============
*/
void SV_InitMP_ShutdownForDemo(void)
{
  LocalClientNum_t v0; 
  signed int v1; 
  SvClient *CommonClient; 
  SvClientMP *v3; 
  const netadr_t *Netadr; 
  PartyData *PartyData; 
  XSESSION_INFO outSessionInfo; 
  netadr_t result; 

  Com_DPrintf(14, "Shutting down for demo\n");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2568, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2569, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", (const char *)&queryFormat, "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( !Com_IsGameLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2573, ASSERT_TYPE_ASSERT, "(Com_IsGameLocalServerRunning())", (const char *)&queryFormat, "Com_IsGameLocalServerRunning()") )
      __debugbreak();
    if ( !g_archiveGetDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2575, ASSERT_TYPE_ASSERT, "(g_archiveGetDvar)", (const char *)&queryFormat, "g_archiveGetDvar") )
      __debugbreak();
    g_archiveGetDvar = 0;
    v0 = LOCAL_CLIENT_0;
    v1 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v1);
        v3 = (SvClientMP *)CommonClient;
        if ( CommonClient->state )
        {
          if ( !NetConnection::IsLoopback((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6]) )
            NetConnection::SendUnreliable(&v3->clientConnection, "disconnect replay_restart");
          SV_ClientMP_DropClient(v3, "replay_restart", 0);
          Netadr = NetConnection::GetNetadr(&v3->clientConnection, &result);
          SvClientMP::RemoveClientAtAddress(Netadr);
          NetConnection::Close(&v3->clientConnection, NET_CLOSE_SOFT);
        }
        ++v1;
      }
      while ( v1 < (int)SvClient::ms_clientCount );
      if ( g_archiveGetDvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2596, ASSERT_TYPE_ASSERT, "(!g_archiveGetDvar)", (const char *)&queryFormat, "!g_archiveGetDvar") )
        __debugbreak();
    }
    g_archiveGetDvar = 1;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      do
      {
        if ( CL_IsLocalClientActive(v0) )
          LiveStorage_EndGame(v0);
        ++v0;
      }
      while ( v0 < SLODWORD(cl_maxLocalClients) );
    }
  }
  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  bdSecurityID::bdSecurityID(&outSessionInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&outSessionInfo.m_security.m_key);
  NET_CreateSession(&outSessionInfo);
  bdSecurityKey::~bdSecurityKey(&outSessionInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&outSessionInfo.m_security.m_id);
}

/*
==============
SV_InitMP_SpawnServer_LoadMapAssets
==============
*/
void SV_InitMP_SpawnServer_LoadMapAssets(const SvServerInitSettings *initSettings)
{
  bool isMapPreloaded; 
  bool v3; 
  unsigned __int8 ActiveGameMode; 
  bool isFrontEnd; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1892, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1893, ASSERT_TYPE_ASSERT, "( initSettings )", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->isMapPreloaded )
  {
    if ( initSettings->isFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1898, ASSERT_TYPE_ASSERT, "(!initSettings->isFrontEnd)", "%s\n\tFront-end is always preloaded", "!initSettings->isFrontEnd") )
      __debugbreak();
    DB_PushFullLevelUnload();
    DB_FreeLevelXAssetsForMap(initSettings->mapName);
    DB_PopFullLevelUnload();
  }
  fs_checksumFeed = G_InitFileSystemRandomSeed();
  isMapPreloaded = initSettings->isMapPreloaded;
  if ( !isMapPreloaded || (v3 = initSettings->isMapPreloaded, initSettings->isFrontEnd) )
  {
    v3 = initSettings->isMapPreloaded;
    if ( initSettings->loadScripts )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      BG_Omnvar_LoadTables((GameModeType)ActiveGameMode, initSettings->gameType, initSettings->mapName);
      BG_TransientsInfilMP_InitOmnVars(initSettings->mapName);
      v3 = initSettings->isMapPreloaded;
      isMapPreloaded = v3;
    }
  }
  if ( !v3 || initSettings->isSaveGame )
  {
    if ( initSettings->isFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1917, ASSERT_TYPE_ASSERT, "(!initSettings->isFrontEnd)", "%s\n\tFront-end is always preloaded", "!initSettings->isFrontEnd") )
      __debugbreak();
    ProfLoad_Begin("start loading client");
    CL_CGameMP_StartLoading();
    ProfLoad_End();
    isMapPreloaded = initSettings->isMapPreloaded;
  }
  isFrontEnd = initSettings->isFrontEnd;
  if ( isMapPreloaded )
  {
    if ( !isFrontEnd )
    {
      CL_TransientsCollisionMP_SetTransientMode(CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_ALL);
      CL_TransientsCollisionMP_ProcessFastfiles(0);
      CL_TransientsMP_StallUntilCompletion();
      CL_TransientsCollisionMP_UpdateTransientFlags(0);
      if ( !CL_TransientsCollisionMP_IsRequestedLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1963, ASSERT_TYPE_ASSERT, "(CL_TransientsCollisionMP_IsRequestedLoaded())", (const char *)&queryFormat, "CL_TransientsCollisionMP_IsRequestedLoaded()") )
        __debugbreak();
      CL_TransientsCollisionMP_ProcessFastfiles(0);
    }
  }
  else
  {
    if ( isFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1930, ASSERT_TYPE_ASSERT, "(!initSettings->isFrontEnd)", "%s\n\tFront-end is always preloaded", "!initSettings->isFrontEnd") )
      __debugbreak();
    DB_LoadLevelXAssets(initSettings->mapName, 0, 1);
    DB_SyncXAssetsKeepAlive();
    DB_LoadLevelXAssetsValidatePostLoad();
    CL_TransientsCollisionMP_SetTransientMode(CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_ALL);
    CL_TransientsCollisionMP_ProcessFastfiles(0);
    CL_TransientsMP_StallUntilCompletion();
    CL_TransientsCollisionMP_UpdateTransientFlags(0);
    if ( !CL_TransientsCollisionMP_IsRequestedLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1944, ASSERT_TYPE_ASSERT, "(CL_TransientsCollisionMP_IsRequestedLoaded())", (const char *)&queryFormat, "CL_TransientsCollisionMP_IsRequestedLoaded()") )
      __debugbreak();
    CL_TransientsCollisionMP_ProcessFastfiles(0);
    CL_TransientsInfilMP_OnDevMap(initSettings->mapName);
  }
  if ( !initSettings->isFrontEnd && !initSettings->serverThreadStartup )
    DB_SyncLevelLoad();
  DB_DevFastBoot_Disable();
}

/*
==============
SV_InitMP_SpawnServer_ResetConnectedClients
==============
*/
void SV_InitMP_SpawnServer_ResetConnectedClients(bool shouldResetClients)
{
  signed int i; 
  SvClient *CommonClient; 
  SvClient *v4; 
  unsigned int gentity; 
  const char *v6; 
  __int64 v7; 

  if ( SV_IsDemoPlaying() )
  {
    shouldResetClients = SV_Demo_GetByte() != 0;
  }
  else
  {
    if ( SV_DemoMP_UsingDemoHistory() )
      return;
    SV_Record_GetByte(shouldResetClients);
  }
  if ( shouldResetClients )
  {
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( SvClient::GetCommonClient(i)->state >= CS_CONNECTED )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(i);
        v4 = CommonClient;
        if ( LODWORD(CommonClient[855].__vftable) )
        {
          G_ClientMP_UserinfoChanged(i);
          SV_ClientMP_DropClient((SvClientMP *)v4, (const char *)&queryFormat.fmt + 3, 0);
          v4->state = CS_FREE;
        }
        else
        {
          if ( LOBYTE(CommonClient[1].__vftable) )
          {
            LODWORD(v7) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1664, ASSERT_TYPE_ASSERT, "(client->migrationState == SvClientConnectionState::CS_FREE)", "%s\n\t%i migstate != CS_FREE\n", "client->migrationState == SvClientConnectionState::CS_FREE", v7) )
              __debugbreak();
          }
          gentity = (unsigned int)v4[854].gentity;
          LOBYTE(v4[602].lastUsercmd.weapon.weaponIdx) = 0;
          v6 = G_ClientMP_Connect(i, gentity);
          if ( v6 )
            SV_ClientMP_DropClient((SvClientMP *)v4, v6, 1);
          else
            v4->state = CS_CONNECTED;
        }
      }
    }
  }
}

/*
==============
SV_InitMP_Startup
==============
*/
void SV_InitMP_Startup(const SvServerInitSettings *initSettings)
{
  unsigned int v2; 
  unsigned int maxAgentCount; 
  char useConstBaseline; 
  int maxClientCount; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  bool enabled; 
  const dvar_t *v10; 
  SvGameModeApplication *ActiveServerApplication; 
  const dvar_t *v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  unsigned __int64 FreeReserveAmount; 
  scrContext_t *v16; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvPersistentGlobalsMP *v18; 
  volatile __int32 *p_m_svMemoryInitialized; 
  unsigned __int64 v20; 
  __int64 scriptedCameraCount; 
  unsigned int scriptedCameraCounta; 
  ScriptableInitLimits *scriptableInitLimits; 
  int scriptableInitLimitsa; 
  unsigned int v25; 
  unsigned int throttleBackupCount; 
  ScriptableInitLimits v27; 
  bool throttleNoBaseline; 
  bool useMoreEntities; 
  int snapshotDelayNoDelta; 
  SvSnapshotArchiveMode archiveMode; 

  if ( initSettings->isFrontEnd )
  {
    if ( initSettings->maxClientCount != 1 )
    {
      scriptableInitLimitsa = 1;
      scriptedCameraCounta = initSettings->maxClientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 844, ASSERT_TYPE_ASSERT, "( initSettings->maxClientCount ) == ( 1 )", "initSettings->maxClientCount == FRONTEND_SCENE_MAX_SV_CLIENTS\n\t%i, %i", scriptedCameraCounta, scriptableInitLimitsa) )
        __debugbreak();
    }
    v2 = 16;
    if ( initSettings->frameDuration != 16 )
    {
      LODWORD(scriptableInitLimits) = 16;
      LODWORD(scriptedCameraCount) = initSettings->frameDuration;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 845, ASSERT_TYPE_ASSERT, "( initSettings->frameDuration ) == ( 16 )", "initSettings->frameDuration == FRONTEND_SCENE_FRAME_DURATION\n\t%i, %i", scriptedCameraCount, scriptableInitLimits) )
        __debugbreak();
    }
    maxAgentCount = 0;
    v25 = 1;
    useConstBaseline = 0;
    throttleBackupCount = 16;
    useMoreEntities = 0;
    maxClientCount = 1;
    throttleNoBaseline = 0;
    snapshotDelayNoDelta = 0;
    archiveMode = 2;
  }
  else
  {
    if ( !initSettings->frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 865, ASSERT_TYPE_ASSERT, "( initSettings->frameDuration > 0 )", (const char *)&queryFormat, "initSettings->frameDuration > 0") )
      __debugbreak();
    v6 = DVARINT_sv_snapshot_throttleBackupCount;
    v2 = 64;
    maxClientCount = initSettings->maxClientCount;
    maxAgentCount = initSettings->maxAgentCount;
    if ( !DVARINT_sv_snapshot_throttleBackupCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_throttleBackupCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    v8 = DVARBOOL_sv_snapshot_throttle_nobaseline;
    throttleBackupCount = integer;
    if ( !DVARBOOL_sv_snapshot_throttle_nobaseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_throttle_nobaseline") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    enabled = v8->current.enabled;
    v10 = DVARINT_sv_snapshot_delay_nodelta;
    throttleNoBaseline = enabled;
    if ( !DVARINT_sv_snapshot_delay_nodelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_delay_nodelta") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    snapshotDelayNoDelta = v10->current.integer;
    useConstBaseline = 1;
    useMoreEntities = initSettings->devMoreSnapshotEntities;
    archiveMode = None;
    v25 = 0;
    Com_DediMapCheck_CheckMap(initSettings->mapName);
  }
  MSG_InitializeNetfields(initSettings->gameType);
  SV_InitMP_PrintMemoryEstimates(initSettings);
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  SvGameModeApplication::SetFrameDuration(ActiveServerApplication, initSettings->frameDuration);
  v12 = DCONST_DVARBOOL_sv_snapshot_transientStorageEnabled;
  if ( !DCONST_DVARBOOL_sv_snapshot_transientStorageEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_transientStorageEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = 1;
  if ( !v12->current.enabled )
  {
    Com_Printf(15, "SV_InitMP_Startup: Disabling transient packet storage per dvar request (expected to be %i)\n", 1i64);
    v13 = 0;
  }
  BgWeaponMap::ValidateRuntimeSize(initSettings->maxClientCount, initSettings->mapName, initSettings->weaponMapLargeRuntimeSize);
  ScriptableSv_InitCounts(maxClientCount, maxAgentCount);
  v27.replicatedPartLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
  v27.replicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  SV_SnapshotMP_InitCounts(v2, throttleBackupCount, v13, maxClientCount, maxAgentCount, v25, &v27, initSettings->frameDuration, archiveMode, useConstBaseline, useMoreEntities, throttleNoBaseline, snapshotDelayNoDelta);
  UsableWorld_InitLimits();
  if ( g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 441, ASSERT_TYPE_ASSERT, "(g_serverHunkUser == nullptr)", (const char *)&queryFormat, "g_serverHunkUser == nullptr") )
    __debugbreak();
  g_serverHunkUser = Mem_HunkUser_Create(0x9C400000ui64, "g_serverHunkUser", TRACK_NETWORK_ENTITY, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  v14 = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser) - 2621440000u;
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
  Com_Printf(0, "Mem_HunkUser_GetFreeReserveAmount( g_serverHunkUser ) = %zu kb (Alignment Loss: %zu)\n", FreeReserveAmount >> 10, v14);
  G_Main_InitXanimHunkUser();
  G_InitTagInfoHeap();
  ScriptableSv_InitMemory();
  v16 = ScriptContext_Server();
  ScriptContext_MemoryInit(v16, initSettings->gameType, maxClientCount);
  SV_MemoryMP_Init(maxClientCount, maxAgentCount, v2, v13, useConstBaseline, useConstBaseline);
  SV_EntitiesPartitioning_Init(initSettings->mapName, g_serverHunkUser);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( initSettings->isFrontEnd )
  {
    PersistentGlobalsMP->frontEndState[0] = 1;
  }
  else if ( PersistentGlobalsMP->frontEndState[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 495, ASSERT_TYPE_ASSERT, "( svPers->frontEndState == SvFrontEndState::INACTIVE )", (const char *)&queryFormat, "svPers->frontEndState == SvFrontEndState::INACTIVE") )
  {
    __debugbreak();
  }
  v18 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  p_m_svMemoryInitialized = &v18->m_svMemoryInitialized;
  if ( (((_BYTE)v18 + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v18->m_svMemoryInitialized) )
    __debugbreak();
  _InterlockedExchange(p_m_svMemoryInitialized, 1);
  v20 = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
  Com_Printf(0, "%zu bytes reserve free at end of SV_Startup\n", v20);
}

/*
==============
SV_InitMP_UpdateAllowedDvarFlags
==============
*/
void SV_InitMP_UpdateAllowedDvarFlags(const SvServerInitSettings *initSettings)
{
  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1856, ASSERT_TYPE_ASSERT, "( initSettings )", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( initSettings->serverThreadStartup )
  {
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1864, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread())", (const char *)&queryFormat, "Sys_IsServerThread()") )
      __debugbreak();
    SV_Main_RestrictServerAllowedDvarFlags(initSettings->isFrontEnd);
  }
  else
  {
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1869, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    SV_Main_RestrictClientAllowedDvarFlags(initSettings->isFrontEnd);
  }
}

/*
==============
SV_MemoryMP_GetTotalAllocationSize
==============
*/
__int64 SV_MemoryMP_GetTotalAllocationSize(const unsigned int packetBackupCount, const unsigned int packetTransientStorageInterval, const unsigned int maxClients, const unsigned int maxAgents, const ScriptableInitLimits scriptableInitLimits, const int frameDuration, const SvSnapshotArchiveMode archiveMode, const bool useMoreSnapshotEntities, const bool useAiSystems, const bool useDemoSystem, const bool verbosePrint)
{
  bool v11; 
  const dvar_t *v16; 
  int integer; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int AllocationSize; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int MemorySize; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 
  unsigned int v48; 
  unsigned int v49; 
  int v50; 
  unsigned int v51; 
  unsigned int GameMemoryAllocationSize; 
  int v53; 
  unsigned int ServerAllocationSizeMP; 
  unsigned int v55; 

  v11 = verbosePrint;
  if ( verbosePrint )
  {
    Com_Printf(15, "SvPersistentGlobalsMP %i KB, ", 941i64);
    Com_Printf(15, "SvGameGlobalsMP %i KB, ", 32i64);
  }
  v16 = DVARINT_sv_cmdThrottleType;
  if ( !DVARINT_sv_cmdThrottleType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdThrottleType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  if ( integer )
  {
    v18 = 1072;
    if ( integer != 2 )
      v18 = 80;
  }
  else
  {
    v18 = 40;
  }
  v19 = ((264 * maxClients * packetBackupCount + 127) & 0xFFFFFF80) + ((v18 * maxClients + 127) & 0xFFFFFF80) + ((27768 * maxClients * (packetBackupCount / (packetTransientStorageInterval + 1)) + 127) & 0xFFFFFF80) + ((379488 * maxClients + 127) & 0xFFFFFF80) + ((60 * maxClients * packetBackupCount + 127) & 0xFFFFFF80);
  v20 = v19 + ((4 * maxClients * packetBackupCount + 127) & 0xFFFFFF80) + (maxClients << 7);
  v21 = v20 + 997120;
  if ( (((_BYTE)v19 + ((4 * (_BYTE)maxClients * (_BYTE)packetBackupCount + 127) & 0x80) + ((_BYTE)maxClients << 7)) & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 527, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "SvClientMP %i KB, ", v20 >> 10);
  if ( useDemoSystem )
  {
    v22 = SvDemoMP::GetServerDemoMessageSize() + 7277312;
    v21 += (v22 + 127) & 0xFFFFFF80;
    if ( v11 )
      Com_Printf(15, "SvDemo %i KB, ", v22 >> 10);
  }
  AllocationSize = SV_BotGetAllocationSize();
  v24 = AllocationSize + v21;
  v25 = AllocationSize;
  if ( (v24 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 549, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "Bots %i KB, ", v25 >> 10);
  v26 = LOSPrecomputeSystem::GetAllocationSize(&g_losPrecomputeData);
  v27 = v26 + v24;
  v28 = v26;
  if ( (v27 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 558, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "LosPrecompute %i KB, ", v28 >> 10);
  v29 = SV_Agent_GetAllocationSize(maxAgents);
  v30 = v29 + v27;
  v31 = v29;
  if ( (v30 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 567, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "Agents %i KB, ", v31 >> 10);
  MemorySize = SV_SnapshotMP_GetMemorySize(packetBackupCount, packetTransientStorageInterval, maxClients, maxAgents, &scriptableInitLimits, frameDuration, archiveMode, useMoreSnapshotEntities);
  v33 = MemorySize + v30;
  v34 = MemorySize;
  if ( (v33 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 576, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "Snapshots %i KB, ", v34 >> 10);
  v35 = ScriptableMsgWrite_GetMessageBufferSizeEstimate(maxClients);
  v36 = ((v35 + 127) & 0xFFFFFF80) + v33;
  if ( v11 )
    Com_Printf(15, "ScriptableMsg %i KB, ", v35 >> 10);
  v37 = SV_StreamSync_GetAllocationSize(maxClients);
  v38 = v37 + v36;
  v39 = v37;
  if ( (v38 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 593, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "Streamsync %i KB, ", v39 >> 10);
  v40 = SV_ClientWorkersMP_GetAllocationSize(maxClients);
  v41 = v40 + v38;
  v42 = v40;
  if ( (v41 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 602, ASSERT_TYPE_ASSERT, "( !(totalSize & 127) )", (const char *)&queryFormat, "!(totalSize & SERVER_HUNK_ALIGN)") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "ClientWorkers %i KB, ", v42 >> 10);
  v43 = SV_EntityWorkersMP_GetAllocationSize();
  v44 = v43 + v41;
  v45 = v43;
  if ( (v44 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 611, ASSERT_TYPE_ASSERT, "( !(totalSize & 127) )", (const char *)&queryFormat, "!(totalSize & SERVER_HUNK_ALIGN)") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "EntityhWorkers %i KB, ", v45 >> 10);
  v46 = SV_UserMoveWorkersMP_GetMemorySize(maxClients);
  v47 = v46 + v44;
  v48 = v46;
  if ( (v47 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 620, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "SvUserMoveWorkers %i KB, ", v48 >> 10);
  v49 = SV_SnapshotProfileMP_GetAllocationSize(maxClients);
  v50 = v49 + v47;
  v51 = v49;
  if ( (v50 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 630, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  if ( v11 )
    Com_Printf(15, "SnapshotProfile %i KB, ", v51 >> 10);
  GameMemoryAllocationSize = G_MainMP_GetGameMemoryAllocationSize(maxClients, maxAgents, useAiSystems);
  v53 = ((GameMemoryAllocationSize + 127) & 0xFFFFFF80) + v50;
  if ( v11 )
    Com_Printf(15, "GMain %i KB, ", GameMemoryAllocationSize >> 10);
  ServerAllocationSizeMP = XAnimProceduralBonesAllocator_GetServerAllocationSizeMP(maxClients);
  v55 = ((ServerAllocationSizeMP + 127) & 0xFFFFFF80) + v53;
  if ( v11 )
  {
    Com_Printf(15, "XAnimProcBones %i KB, ", ServerAllocationSizeMP >> 10);
    Com_Printf(15, "\n");
  }
  if ( (v55 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 671, ASSERT_TYPE_ASSERT, "( !( totalSize & 127 ) )", (const char *)&queryFormat, "!( totalSize & SERVER_HUNK_ALIGN )") )
    __debugbreak();
  return v55;
}

/*
==============
SV_MemoryMP_Init
==============
*/
void SV_MemoryMP_Init(const unsigned int clientCount, const unsigned int agentCount, const unsigned int packetBackupCount, const unsigned int packetTransientStorageInterval, const bool allocateAiSystems, const bool useDemoSystem)
{
  HunkUser *v10; 
  SvPersistentGlobals *v11; 
  HunkUser *v12; 
  SvGameGlobalsMP *v13; 
  SvGameGlobals *v14; 
  HunkUser *v15; 
  unsigned int v16; 
  GSnapshotWeaponMap *v17; 
  void (__fastcall *CopyWeapon)(BgWeaponMap *, BgWeaponHandle *, const BgWeaponHandle *); 
  unsigned int ServerDemoMessageSize; 
  scrContext_t *v20; 
  unsigned __int64 FreeReserveAmount; 
  int v22; 

  if ( !g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 287, ASSERT_TYPE_ASSERT, "(g_serverHunkUser != nullptr)", (const char *)&queryFormat, "g_serverHunkUser != nullptr") )
    __debugbreak();
  ProfLoad_Begin("SV_MemoryMP_Init");
  ProfLoad_Begin("Allocate SvPersistentGlobalsMP");
  v10 = g_serverHunkUser;
  if ( BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 106, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 107, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
    __debugbreak();
  v11 = (SvPersistentGlobals *)Mem_HunkUser_AllocInternal(v10, 0xF3C8ui64, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  memset_0(v11, 0, 0xF3C8ui64);
  v11->__vftable = (SvPersistentGlobals_vtbl *)&SvPersistentGlobalsMP::`vftable';
  SvPersistentGlobals::ms_svPersistent = v11;
  v11->m_skelMemSize = 901120;
  SvPersistentGlobals::ms_svPersistent->m_skelMemory = (char *)Mem_HunkUser_AllocInternal(v10, SvPersistentGlobals::ms_svPersistent->m_skelMemSize, 0x80ui64, "SvPersistentGlobals::AllocateServerPersistentGlobalsMemoryCommon");
  BYTE1(SvGameGlobals::ms_allocatedType) = 2;
  ProfLoad_End();
  ProfLoad_Begin("Allocate SvGameGlobalsMP");
  v12 = g_serverHunkUser;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    v22 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 114, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tCreating SvGameGlobals when still marked as allocated by %d", "ms_allocatedType == GameModeType::NONE", v22) )
      __debugbreak();
  }
  if ( SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 115, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals == nullptr)", "%s\n\tCreating SvGameGlobals when singleton already exists", "ms_svGameGlobals == nullptr") )
    __debugbreak();
  v13 = (SvGameGlobalsMP *)Mem_HunkUser_AllocInternal(v12, 0x82A8ui64, 0x80ui64, "SvGameGlobals::AllocateSvGameGlobalsMemoryCommon");
  memset_0(v13, 0, sizeof(SvGameGlobalsMP));
  SvGameGlobalsMP::SvGameGlobalsMP(v13);
  SvGameGlobals::ms_svGameGlobals = v14;
  LOBYTE(SvGameGlobals::ms_allocatedType) = 2;
  ProfLoad_End();
  ProfLoad_Begin("Allocate SvClientMP");
  SvClientMP::AllocateClientsMemoryMP(clientCount, packetBackupCount, packetTransientStorageInterval, g_serverHunkUser);
  ProfLoad_End();
  ProfLoad_Begin("SV_ClientAntiCheatMP_AllocateMemory");
  SV_ClientAntiCheatMP_AllocateMemory(g_serverHunkUser);
  ProfLoad_End();
  if ( useDemoSystem )
  {
    v15 = g_serverHunkUser;
    if ( (_BYTE)SvDemo::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 277, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
      __debugbreak();
    if ( SvDemo::ms_gServerDemoSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 278, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
      __debugbreak();
    v16 = SvDemoMP::GetServerDemoMessageSize() + 7277312;
    v17 = (GSnapshotWeaponMap *)Mem_HunkUser_AllocInternal(v15, v16, 0x80ui64, "SvDemo::AllocateMemory");
    memset_0(v17, 0, v16);
    memset_0(&v17->m_entries, 0, 0x6F0AF8ui64);
    v17->__vftable = (GSnapshotWeaponMap_vtbl *)&SvDemoMP::`vftable';
    LODWORD(v17[453366].m_entries) = 0;
    GSnapshotWeaponMap::GSnapshotWeaponMap(v17 + 454804);
    SvDemo::ms_gServerDemoSystem = (SvDemo *)v17;
    CopyWeapon = v17->CopyWeapon;
    ServerDemoMessageSize = SvDemoMP::GetServerDemoMessageSize();
    CopyWeapon((BgWeaponMap *)SvDemo::ms_gServerDemoSystem, (BgWeaponHandle *)&v17[454832], (const BgWeaponHandle *)ServerDemoMessageSize);
    LOBYTE(SvDemo::ms_allocatedType) = 2;
  }
  ProfLoad_Begin("SV_BotAllocateSystemMemory");
  SV_BotAllocateSystemMemory(g_serverHunkUser);
  ProfLoad_End();
  ProfLoad_Begin("LOSPrecomputeData_AllocateMEmory");
  LOSPrecomputeSystem::AllocateTimingDataTable(&g_losPrecomputeData, g_serverHunkUser);
  ProfLoad_End();
  ProfLoad_Begin("SV_Agent_AllocateMemory");
  SV_Agent_AllocateMemory(agentCount, g_serverHunkUser);
  ProfLoad_End();
  ProfLoad_Begin("SV_SnapshotMP_InitMemory");
  SV_SnapshotMP_InitMemory(g_serverHunkUser);
  ProfLoad_Begin("ScriptableMsgWrite_InitMessageBuffers");
  ScriptableMsgWrite_InitMessageBuffers(g_serverHunkUser);
  ProfLoad_End();
  ProfLoad_Begin("SV_StreamSync_AllocateMemory");
  SV_StreamSync_AllocateMemory(g_serverHunkUser, clientCount);
  ProfLoad_End();
  ProfLoad_Begin("SV_ClientWorkersMP_AllocateMemory");
  SV_ClientWorkersMP_AllocateMemory(g_serverHunkUser, clientCount);
  ProfLoad_End();
  ProfLoad_Begin("SV_EntityWorkersMP_AllocateMemory");
  SV_EntityWorkersMP_AllocateMemory(g_serverHunkUser);
  ProfLoad_End();
  SV_UserMoveWorkersMP_AllocateMemory(g_serverHunkUser, clientCount);
  ProfLoad_Begin("SV_SnapshotProfileMP_AllocateMemory");
  SV_SnapshotProfileMP_AllocateMemory(g_serverHunkUser, clientCount);
  ProfLoad_End();
  XAnimProceduralBonesAllocator_AllocateServerMemoryMP(g_serverHunkUser, clientCount);
  ProfLoad_Begin("G_MainMP_AllocateGameMemory");
  G_MainMP_AllocateGameMemory(g_serverHunkUser, clientCount, agentCount, allocateAiSystems);
  ProfLoad_End();
  v20 = ScriptContext_Server();
  ScriptContext_MemoryAllocate(v20);
  ProfLoad_End();
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(g_serverHunkUser);
  Com_Printf(15, "g_serverHunkUser finished. free memory %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
SV_MemoryMP_Shutdown
==============
*/
void SV_MemoryMP_Shutdown()
{
  char v0; 
  SvPersistentGlobals *v1; 
  SvDemo *v2; 
  SvDemo *v3; 
  char v4; 
  SvGameGlobals *v5; 
  char v6; 
  SvPersistentGlobals *v7; 

  G_MainMP_ShutdownGameMemory();
  XAnimProceduralBonesAllocator_FreeServerMemory();
  SV_SnapshotProfileMP_ShutdownMemory();
  SV_UserMoveWorkersMP_ShutdownMemory();
  SV_StreamSync_ShutdownMemory();
  ScriptableMsgWrite_FreeMessageBuffers();
  SV_EntityWorkersMP_ShutdownMemory();
  SV_ClientWorkersMP_ShutdownMemory();
  SV_SnapshotMP_ShutdownMemory();
  SV_Agent_FreeMemory();
  LOSPrecomputeSystem::ReleaseTimingDataTable(&g_losPrecomputeData);
  SV_BotFreeSystemMemory();
  v0 = SvDemo::ms_allocatedType;
  v1 = NULL;
  if ( (_BYTE)SvDemo::ms_allocatedType )
  {
    if ( (_BYTE)SvDemo::ms_allocatedType == HALF_HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 295, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvDemo::ms_allocatedType;
  }
  if ( v0 != 2 )
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
  DebugWipe(SvDemo::ms_gServerDemoSystem, 0x6F0B00ui64);
  v3 = NULL;
  SvDemo::ms_gServerDemoSystem = NULL;
LABEL_13:
  LOBYTE(SvDemo::ms_allocatedType) = 0;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_demo.h", 310, ASSERT_TYPE_ASSERT, "( ms_gServerDemoSystem == 0 )", (const char *)&queryFormat, "ms_gServerDemoSystem == NULL") )
    __debugbreak();
  SV_ClientAntiCheatMP_FreeMemory();
  SvClientMP::FreeClientsMemoryMP();
  v4 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType )
  {
    if ( (_BYTE)SvGameGlobals::ms_allocatedType == HALF_HALF )
      goto LABEL_22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v4 = SvGameGlobals::ms_allocatedType;
  }
  if ( v4 != 2 )
  {
    v5 = SvGameGlobals::ms_svGameGlobals;
    goto LABEL_27;
  }
LABEL_22:
  if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 134, ASSERT_TYPE_ASSERT, "(ms_svGameGlobals != 0)", "%s\n\tFreeSvGameGlobalsMemoryCommon: Trying to free server global memory but none have been allocated\n", "ms_svGameGlobals != NULL") )
    __debugbreak();
  SvGameGlobals::ClearConfigStrings(SvGameGlobals::ms_svGameGlobals);
  SvGameGlobals::~SvGameGlobals(SvGameGlobals::ms_svGameGlobals);
  DebugWipe(SvGameGlobals::ms_svGameGlobals, 0x82A8ui64);
  v5 = NULL;
  SvGameGlobals::ms_svGameGlobals = NULL;
LABEL_27:
  LOBYTE(SvGameGlobals::ms_allocatedType) = 0;
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 145, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals == 0 )", (const char *)&queryFormat, "ms_svGameGlobals == NULL") )
    __debugbreak();
  v6 = BYTE1(SvGameGlobals::ms_allocatedType);
  if ( BYTE1(SvGameGlobals::ms_allocatedType) )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) == 2 )
      goto LABEL_36;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 126, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubServerType::ALLOCATION_TYPE") )
      __debugbreak();
    v6 = BYTE1(SvGameGlobals::ms_allocatedType);
  }
  if ( v6 != 2 )
  {
    v1 = SvPersistentGlobals::ms_svPersistent;
    goto LABEL_42;
  }
LABEL_36:
  v7 = SvPersistentGlobals::ms_svPersistent;
  if ( !SvPersistentGlobals::ms_svPersistent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 130, ASSERT_TYPE_ASSERT, "(ms_svPersistent != 0)", "%s\n\tFreeServerPersistentGlobalsMemoryCommon: Trying to free server static memory but none have been allocated\n", "ms_svPersistent != NULL") )
      __debugbreak();
    v7 = SvPersistentGlobals::ms_svPersistent;
  }
  ((void (__fastcall *)(SvPersistentGlobals *, _QWORD))v7->~SvPersistentGlobals)(v7, 0i64);
  DebugWipe(SvPersistentGlobals::ms_svPersistent, 0xF3C8ui64);
  SvPersistentGlobals::ms_svPersistent = NULL;
LABEL_42:
  BYTE1(SvGameGlobals::ms_allocatedType) = 0;
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 142, ASSERT_TYPE_ASSERT, "( ms_svPersistent == 0 )", (const char *)&queryFormat, "ms_svPersistent == NULL") )
    __debugbreak();
  SV_EntitiesPartitioning_Shutdown();
}

/*
==============
SvGameModeAppMP::ServerShutdown
==============
*/
void SvGameModeAppMP::ServerShutdown(SvGameModeAppMP *this)
{
  bool v1; 
  scrContext_t *v2; 
  PartyData *PartyData; 
  bool IsStoppingAfterRound; 
  PartyData *v5; 
  PartyData *v6; 
  SessionData *ServerSession; 

  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2838, ASSERT_TYPE_ASSERT, "( !Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2839, ASSERT_TYPE_ASSERT, "( !Com_IsAnyLocalServerStarting() )", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  if ( SV_MainMP_IsAsyncServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2840, ASSERT_TYPE_ASSERT, "( !SV_MainMP_IsAsyncServerStarting() )", (const char *)&queryFormat, "!SV_MainMP_IsAsyncServerStarting()") )
    __debugbreak();
  v1 = SvPersistentGlobals::ms_svPersistent && SvPersistentGlobals::ms_svPersistent->m_svMemoryInitialized && SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] == 0;
  SV_SnapshotProfileMP_Shutdown();
  SV_Profile_Shutdown();
  SV_LatencyProfileMP_Shutdown();
  SV_BandwidthProfile_Shutdown();
  DLog_Send(1);
  ScriptableSv_DestroyMemory();
  G_ShutdownTagInfoHeap();
  G_Main_ShutdownXAnimHunkUser();
  SV_MemoryMP_Shutdown();
  if ( g_serverHunkUser )
  {
    Mem_HunkUser_Destroy(g_serverHunkUser);
    g_serverHunkUser = NULL;
  }
  v2 = ScriptContext_Server();
  ScriptContext_MemoryFree(v2);
  if ( v1 )
  {
    DB_UpdateDebugZone();
    if ( Party_IsStoppingAfterRound(&g_partyData) )
    {
      Com_DPrintf(14, "SV - Shutdown - Stopping private party after round as requested\n");
      Party_StopParty(&g_partyData);
    }
    PartyData = Lobby_GetPartyData();
    IsStoppingAfterRound = Party_IsStoppingAfterRound(PartyData);
    v5 = Lobby_GetPartyData();
    if ( IsStoppingAfterRound )
    {
      Party_StopAfterRound(v5);
    }
    else if ( Party_ShouldDisbandAfterRound(v5) )
    {
      v6 = Lobby_GetPartyData();
      Party_DoDisbandAfterRound(v6);
    }
    else if ( !SV_Game_IsOnlineGame() )
    {
      Com_DPrintf(14, "Destroying session since onlinegame is false\n");
      ServerSession = SV_MainMP_GetServerSession();
      Session_DeleteSession(ServerSession);
    }
  }
}

/*
==============
SvPersistentGlobalsMP::ServerShutdown
==============
*/
void SvPersistentGlobalsMP::ServerShutdown(SvPersistentGlobalsMP *this, const char *finalMsg)
{
  signed int i; 
  SvClientMP *CommonClient; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  SV_DemoMP_AutoSaveEndDemo();
  SV_MainMP_FlushServerLoopbackPackets();
  CL_TransientsWorldMP_OnServerShutdown();
  SV_FinalizeNetworkHealthMonitoring();
  if ( SV_IsMigrating() )
  {
    SV_MigrationEnd();
  }
  else
  {
    SV_InitMP_FinalMessage(finalMsg);
    if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Online_Skill_Upload();
      OnlineMatchmakerOmniscient::EndGame(&OnlineMatchmakerOmniscient::ms_instance);
    }
  }
  SV_GameMP_ShutdownGameProgs();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state > CS_ZOMBIE )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (SvClientMP *)SvClient::GetCommonClient(i);
      SV_ClientMP_DropClient(CommonClient, finalMsg, 1);
    }
  }
  FakeLag_FlushPackets();
  NET_Flush();
  SV_DispatchSnapshotProfileData();
  SV_ClientMP_FreeClients();
  RESTRequest_CancelAll_ServerThreadTasks();
  SV_SnapshotMP_Shutdown();
  SV_UserMoveWorkersMP_Shutdown();
  SV_InitMP_ClearServer();
  ScriptableSv_ClearCounts();
  com_inServerFrame = 0;
}

/*
==============
SvGameModeAppMP::ServerStart_PreSpawn
==============
*/
void SvGameModeAppMP::ServerStart_PreSpawn(SvGameModeAppMP *this, const SvServerInitSettings *initSettings)
{
  bool IsDemoPlayingNext; 
  int v4; 
  const dvar_t *v5; 
  int ControllerFromClient; 
  PartyData *v7; 
  PartyData *PartyData; 
  PartyData *v9; 
  const char *GameType; 
  SvGameModeApplication *ActiveServerApplication; 
  unsigned int v12; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const scrContext_t *v14; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2238, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2239, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "SpawnServerPreInit");
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
  if ( !ProfLoad_IsActive() )
    ProfLoad_Activate();
  if ( !initSettings->isFrontEnd )
  {
    Com_FrontEnd_ExitFrontEnd();
    SV_GameMP_UpdatePresenceGametype(initSettings);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1319, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !SV_Game_IsOnlineGame() && !SV_Game_IsSplitscreen() && !SV_Game_IsSystemLink() )
    {
      CL_SetLocalClientActive(LOCAL_CLIENT_0, 1);
      CL_SetLocalClientActive(LOCAL_CLIENT_1, 0);
      Dvar_SetBool_Internal(DVARBOOL_systemlink, 1);
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1194, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    Blackbox_SendSession(0, 1, initSettings->mapName, initSettings->gameType);
    BB_RecordSystemMemoryFootprint(initSettings->mapName, 0);
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1381, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !initSettings->isMapPreloaded )
    {
      Com_FastFile_SyncLoadComplete(initSettings->mapName);
      DB_SyncXAssets();
      if ( SV_IsDemoPlaying() || (IsDemoPlayingNext = SV_IsDemoPlayingNext(), v4 = 5, IsDemoPlayingNext) )
        v4 = 13;
      CL_MainMP_GameAllocate(v4);
      CL_MainMP_BeginMapLoading(initSettings->mapName);
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1433, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    v5 = DVARBOOL_lmc;
    if ( !DVARBOOL_lmc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lmc") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, ControllerFromClient, "loadzone mychanges\n", 0, 0);
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1446, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( !initSettings->isMapPreloaded )
    {
      R_BeginRemoteScreenUpdateNoClScreenUpdate();
      if ( !Com_IsAnyLocalServerRunning() )
        CL_MainMP_InitLoad(initSettings->mapName, initSettings->gameType);
      CL_MainMP_MapLoading();
      R_EndRemoteScreenUpdateNoClScreenUpdate();
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1579, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
      __debugbreak();
    if ( SV_IsDemoPlaying() || SV_IsDemoPlayingNext() )
    {
      Party_StopParty(&g_partyData);
      PartyData = Lobby_GetPartyData();
      Party_StopParty(PartyData);
      Party_Sleep(&g_partyData);
      v9 = Lobby_GetPartyData();
      Party_Sleep(v9);
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
    }
    else if ( Lobby_IsInLobby() && !Lobby_AreWeHost() )
    {
      v7 = Lobby_GetPartyData();
      Party_StopParty(v7);
    }
    if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1265, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", "%s\n\tChanging client information, must be on main thread", "Sys_IsMainThread()") )
      __debugbreak();
    if ( strstr_0(initSettings->mapName, "\\") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1268, ASSERT_TYPE_ASSERT, "(!strstr( server, \"\\\\\" ))", (const char *)&queryFormat, "!strstr( server, \"\\\\\" )") )
      __debugbreak();
    Dvar_SetString_Internal(DVARSTR_ui_mapname, initSettings->mapName);
  }
  if ( !initSettings->isMapPreloaded || initSettings->isSaveGame )
    CL_Main_ShutdownAll(initSettings->isRestart, 1);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -513;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1877, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !initSettings->isMapPreloaded || initSettings->isSaveGame )
  {
    if ( initSettings->isFrontEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1884, ASSERT_TYPE_ASSERT, "(!initSettings->isFrontEnd)", "%s\n\tFront-end is always preloaded", "!initSettings->isFrontEnd") )
      __debugbreak();
    Com_Restart();
  }
  CL_TransientsWorldMP_BeginListenServerStall();
  SV_InitMP_SpawnServer_LoadMapAssets(initSettings);
  BgWeaponMap::InitRuntimeSize(initSettings->maxClientCount, initSettings->mapName, initSettings->weaponMapLargeRuntimeSize);
  if ( Com_IsAnyLocalServerRunning() )
  {
    if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 967, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( initSettings->maxClientCount != SvClient::ms_clientCount )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E2BA0, 850i64);
    GameType = SV_GameMP_GetGameType();
    if ( I_strcmp(initSettings->gameType, GameType) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E2C10, 5736i64);
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    if ( SV_MainMP_IsDevToolsMode() )
    {
      SvGameModeApplication::SetFrameDuration(ActiveServerApplication, initSettings->frameDuration);
      SV_SnapshotMP_UpdateFrameDuration(initSettings->frameDuration);
    }
    if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
      __debugbreak();
    if ( initSettings->frameDuration != ActiveServerApplication->m_frameDuration )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E2C80, 851i64);
    BgWeaponMap::ValidateRuntimeSize(initSettings->maxClientCount, initSettings->mapName, initSettings->weaponMapLargeRuntimeSize);
  }
  else
  {
    SV_InitMP_Startup(initSettings);
  }
  v12 = SvClient::ms_clientCount;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  ComCharacterLimits::UpdateGameLimits(v12, PersistentGlobalsMP->agentCount, 8u, 8u);
  G_Main_PreCommitXanimHunkUser();
  v14 = ScriptContext_Server();
  Scr_Main_PreCommitMemory(v14);
  ScriptableSv_PrecommitMemory();
  Mem_HunkDebug_PreCommit();
  if ( initSettings->isSaveGame )
    G_MainMP_ClearLowHunk();
  Sys_ProfEndNamedEvent();
}

/*
==============
SvGameModeAppMP::ServerStart_Spawn
==============
*/
void SvGameModeAppMP::ServerStart_Spawn(SvGameModeAppMP *this, const SvServerInitSettings *initSettings)
{
  bool IsServerThread; 
  int serverThreadStartup; 
  __int64 v6; 
  bool isFrontEnd; 
  int v8; 
  signed int v9; 
  char v10; 
  signed int v11; 
  SvClient *CommonClient; 
  signed int i; 
  SvClientMP *v14; 
  const char *MapName; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const dvar_t *v17; 
  SvGameGlobals *SvGameGlobalsCommon; 
  SvGameGlobals *v19; 
  SvPersistentGlobalsMP *v20; 
  SvGameGlobals *v21; 
  SvGameGlobals *v22; 
  int v23; 
  int v24; 
  bool v25; 
  bool v26; 
  unsigned __int8 Byte; 
  SvClient *v28; 
  SvClientMP *v29; 
  SvClientConnectionState state; 
  const char *v31; 
  const dvar_t *v32; 
  int integer; 
  const dvar_t *v34; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  int ServerThreadOwnsGame; 
  __int64 v41; 
  char filename[64]; 
  char dest[64]; 

  if ( !initSettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2029, ASSERT_TYPE_ASSERT, "(initSettings)", (const char *)&queryFormat, "initSettings") )
    __debugbreak();
  if ( !initSettings->registerDvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2030, ASSERT_TYPE_ASSERT, "(initSettings->registerDvars)", (const char *)&queryFormat, "initSettings->registerDvars") )
    __debugbreak();
  if ( initSettings->serverThreadStartup )
    IsServerThread = Sys_IsServerThread();
  else
    IsServerThread = Sys_IsMainThread();
  if ( !IsServerThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2031, ASSERT_TYPE_ASSERT, "(initSettings->serverThreadStartup ? Sys_IsServerThread() : Sys_IsMainThread())", (const char *)&queryFormat, "initSettings->serverThreadStartup ? Sys_IsServerThread() : Sys_IsMainThread()") )
    __debugbreak();
  if ( g_serverThreadOwnership != 1 )
  {
    LODWORD(v37) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2033, ASSERT_TYPE_ASSERT, "( ( g_serverThreadOwnership == 1 ) )", "( g_serverThreadOwnership ) = %i", v37) )
      __debugbreak();
  }
  serverThreadStartup = initSettings->serverThreadStartup;
  if ( SV_Main_GetServerThreadOwnsGame() != serverThreadStartup )
  {
    ServerThreadOwnsGame = SV_Main_GetServerThreadOwnsGame();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2036, ASSERT_TYPE_ASSERT, "( SV_Main_GetServerThreadOwnsGame() ) == ( static_cast<qboolean>( initSettings->serverThreadStartup ) )", "%s == %s\n\t%i, %i", "SV_Main_GetServerThreadOwnsGame()", "static_cast<qboolean>( initSettings->serverThreadStartup )", ServerThreadOwnsGame, serverThreadStartup) )
      __debugbreak();
  }
  if ( !Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1839, ASSERT_TYPE_ASSERT, "(Com_IsAnyLocalServerStarting())", "%s\n\tThis should be set prior to spawning the serer", "Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  if ( g_serverThreadOwnership != 1 )
  {
    LODWORD(v37) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1841, ASSERT_TYPE_ASSERT, "( ( g_serverThreadOwnership == 1 ) )", "( g_serverThreadOwnership ) = %i", v37) )
      __debugbreak();
  }
  if ( !initSettings->isFrontEnd )
  {
    if ( !Com_FastFile_IsGameWorkComplete() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1847, ASSERT_TYPE_ASSERT, "(Com_FastFile_IsGameWorkComplete())", (const char *)&queryFormat, "Com_FastFile_IsGameWorkComplete()") )
      __debugbreak();
    if ( !DB_AreFastfileLoadsCompleted() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1848, ASSERT_TYPE_ASSERT, "(DB_AreFastfileLoadsCompleted())", (const char *)&queryFormat, "DB_AreFastfileLoadsCompleted()") )
      __debugbreak();
  }
  v6 = tls_index;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
  DLog_ResetMeasurementDictionaries();
  SV_Profile_Init(!initSettings->isFrontEnd);
  SV_LatencyProfileMP_Init(!initSettings->isFrontEnd);
  SV_BandwidthProfile_Init(!initSettings->isFrontEnd);
  SV_ClientNetPerf_Reset();
  MSG_UserCmd_ClearReadData();
  MSG_RunUnitTest();
  isFrontEnd = initSettings->isFrontEnd;
  if ( !isFrontEnd )
  {
    SV_SetupMPBotData();
    isFrontEnd = initSettings->isFrontEnd;
  }
  if ( !initSettings->serverThreadStartup && !isFrontEnd && !Com_IsAnyLocalServerRunning() )
  {
    if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
    {
      LODWORD(v37) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1241, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v37) )
        __debugbreak();
    }
    Live_Frame(0);
    if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
    {
      LODWORD(v37) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1245, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v37) )
        __debugbreak();
    }
  }
  SV_MigrationInit();
  SV_CmdsMP_ClearLoadGame();
  v8 = initSettings->serverThreadStartup;
  if ( SV_Main_GetServerThreadOwnsGame() != v8 )
  {
    LODWORD(v41) = v8;
    LODWORD(v39) = SV_Main_GetServerThreadOwnsGame();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2082, ASSERT_TYPE_ASSERT, "( SV_Main_GetServerThreadOwnsGame() ) == ( static_cast<qboolean>( initSettings->serverThreadStartup ) )", "%s == %s\n\t%i, %i", "SV_Main_GetServerThreadOwnsGame()", "static_cast<qboolean>( initSettings->serverThreadStartup )", v39, v41) )
      __debugbreak();
  }
  v9 = 0;
  if ( !initSettings->isFrontEnd )
  {
    if ( Com_IsAnyLocalServerRunning() )
    {
      v10 = 0;
      v11 = 0;
      if ( (int)SvClient::ms_clientCount > 0 )
      {
        do
        {
          if ( SvClient::GetCommonClient(v11)->state >= CS_CLIENTLOADING && !SV_ClientMP_IsLocalClient(v11) )
          {
            Com_sprintf(dest, 0x40ui64, "loadingnewmap\n%s\n%s", initSettings->mapName, initSettings->gameType);
            if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
              __debugbreak();
            CommonClient = SvClient::GetCommonClient(v11);
            NetConnection::SendUnreliable((NetConnection *)&CommonClient[642].lastUsercmd.sightedClientsMask.data[6], dest);
            v10 = 1;
          }
          ++v11;
        }
        while ( v11 < (int)SvClient::ms_clientCount );
        if ( v10 )
          NET_Sleep(250);
      }
    }
    Online_Skill_Reset();
  }
  SV_GameMP_ShutdownGameProgs();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state && SV_BotIsBot(i) )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v14 = (SvClientMP *)SvClient::GetCommonClient(i);
      SV_ClientMP_DropClient(v14, "EXE/PLAYERKICKED", 0);
    }
  }
  Com_Printf(15, "------ Server Initialization ------\n");
  Com_Printf(131087, "Server: %s\n", initSettings->mapName);
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 1052i64) = -513;
  if ( Com_IsAnyLocalServerRunning() )
  {
    MapName = SV_Game_GetMapName();
    if ( I_strcmp(initSettings->mapName, MapName) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440E32D0, 852i64);
  }
  ProfLoad_Begin("SV_InitMP_ClearServer");
  SV_InitMP_ClearServer();
  ProfLoad_End();
  Dvar_SetBool_Internal(com_cheats, initSettings->useCheats);
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( !PersistentGlobalsMP->m_svMemoryInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2124, ASSERT_TYPE_ASSERT, "( svPers->m_svMemoryInitialized )", (const char *)&queryFormat, "svPers->m_svMemoryInitialized") )
    __debugbreak();
  v17 = DVARINT_sv_cmdMaxCommandTime;
  if ( !DVARINT_sv_cmdMaxCommandTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdMaxCommandTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v17);
  this->m_svCurCmdDuration = v17->current.unsignedInt;
  if ( !initSettings->mapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1023, ASSERT_TYPE_ASSERT, "( initSettings->mapName[0] )", (const char *)&queryFormat, "initSettings->mapName[0]") )
    __debugbreak();
  if ( !initSettings->gameType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1024, ASSERT_TYPE_ASSERT, "( initSettings->gameType[0] )", (const char *)&queryFormat, "initSettings->gameType[0]") )
    __debugbreak();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v38) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v38) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v19 = SvGameGlobalsCommon;
  if ( initSettings->isFrontEnd )
  {
    SvGameGlobalsCommon[2].profile.vmBuiltinTimeAccum = 0.0;
  }
  else
  {
    ProfLoad_Begin("BG_NetDataChecksum");
    LODWORD(v19[2].profile.vmBuiltinTimeAccum) = BG_NetDataChecksum();
    ProfLoad_End();
  }
  Core_strcpy(v19->m_mapname, 0x40ui64, initSettings->mapName);
  Core_strcpy((char *)&v19[2].profile.wallClockTime + 1, 0x40ui64, initSettings->gameType);
  BYTE1(v19[2].profile.vmBuiltinTime) = initSettings->hardcoreMode;
  *(_QWORD *)&v19[107].skelMemPos = Com_PlayerData_GetRequiredStatPacketBitmask();
  v20 = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( !initSettings->serverHostName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1057, ASSERT_TYPE_ASSERT, "( initSettings->serverHostName[0] )", (const char *)&queryFormat, "initSettings->serverHostName[0]") )
    __debugbreak();
  Core_strcpy(v20->m_hostname, 0x40ui64, initSettings->serverHostName);
  ProfLoad_Begin("SV_SpawnServerMP_InitConfigStrings");
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v38) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v38) )
      __debugbreak();
  }
  v21 = SvGameGlobals::GetSvGameGlobalsCommon();
  SvGameGlobals::InitConfigStrings(v21);
  NetConstStrings_BuildStringMap();
  BgDynamicLimits::UpdateDynamicValues();
  BG_Omnvar_InitializeDefaultValues();
  ProfLoad_End();
  if ( !NetConstStrings_AreStringsLoaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1188, ASSERT_TYPE_ASSERT, "( NetConstStrings_AreStringsLoaded() )", (const char *)&queryFormat, "NetConstStrings_AreStringsLoaded()") )
    __debugbreak();
  SV_StreamSync_SpawnServer(initSettings->isSaveGame, initSettings->isRestart);
  SV_GameMP_SetMapCenter(&vec3_origin);
  if ( initSettings->serverThreadStartup )
  {
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1798, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread ())", (const char *)&queryFormat, "Sys_IsServerThread ()") )
      __debugbreak();
  }
  else
  {
    R_BeginRemoteScreenUpdate();
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SV_InitMP_SpawnServer_Fence");
  }
  SV_MainMP_InitSnapshot();
  PersistentGlobalsMP->snapFlagServerBit ^= 4u;
  CL_Pause_UnpauseGame();
  Com_GetBspFilename(filename, 64, initSettings->mapName);
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v38) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v38) )
      __debugbreak();
  }
  v22 = SvGameGlobals::GetSvGameGlobalsCommon();
  CM_LoadMap(filename, &v22->mapcrc);
  Com_LoadWorld(filename);
  BgDynamicLimits::UpdateDynamicValues();
  v23 = (unsigned __int8)(sv_serverId_value + 16);
  sv_serverId_value = v23;
  if ( (v23 & 0xF0) == 0 )
    sv_serverId_value = v23 + 16;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v38) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v38) )
      __debugbreak();
  }
  SvGameGlobals::GetSvGameGlobalsCommon()[1].restarting = com_frameTime;
  SvStaticGlobals::ms_svStaticGlobals.state = SS_LOADING;
  if ( !initSettings->isFrontEnd )
    Live_SetCurrentMapname(initSettings->mapName);
  v24 = initSettings->serverThreadStartup;
  if ( SV_Main_GetServerThreadOwnsGame() != v24 )
  {
    LODWORD(v41) = v24;
    LODWORD(v39) = SV_Main_GetServerThreadOwnsGame();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2167, ASSERT_TYPE_ASSERT, "( SV_Main_GetServerThreadOwnsGame() ) == ( static_cast<qboolean>(initSettings->serverThreadStartup) )", "%s == %s\n\t%i, %i", "SV_Main_GetServerThreadOwnsGame()", "static_cast<qboolean>(initSettings->serverThreadStartup)", v39, v41) )
      __debugbreak();
  }
  if ( !initSettings->isFrontEnd && !SV_IsDemoPlaying() && !SV_IsDemoPlayingNext() )
    SV_InitMP_SetXUIDConfigStrings();
  SV_UserMoveWorkersMP_Init();
  ProfLoad_Begin("Init game");
  SV_GameMP_InitGameProgs(initSettings);
  ProfLoad_End();
  CL_TransientsWorldMP_EndListenServerStall();
  SV_InitMP_SpawnServer_ResetConnectedClients(!initSettings->isSaveGame);
  v25 = 0;
  v26 = 0;
  if ( SV_IsDemoPlaying() )
  {
    if ( !SV_DemoMP_UsingDemoHistory() )
    {
      Byte = SV_Demo_GetByte();
      v26 = Byte != 0;
      if ( Byte )
        v25 = SV_Demo_GetByte() != 0;
    }
  }
  else
  {
    SV_Record_GetByte(0);
  }
  SV_ClientMP_UpdateConnectedClientsOnRestart(v26, v25);
  SV_InitMP_SaveSystemInfo();
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v28 = SvClient::GetCommonClient(v9);
      v29 = (SvClientMP *)v28;
      state = v28->state;
      if ( state )
      {
        v31 = *(const char **)&v28[1].state;
        if ( v31 )
        {
          if ( !strcmp_0(v31, "EXE/PLAYERKICKED") )
          {
            if ( state != CS_RECONNECTING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2018, ASSERT_TYPE_ASSERT, "(client->state == SvClientConnectionState::CS_RECONNECTING)", "%s\n\tUnexpected client state during load", "client->state == SvClientConnectionState::CS_RECONNECTING") )
              __debugbreak();
            SV_ClientMP_DropClient(v29, v29->dropReason, 1);
          }
        }
      }
      ++v9;
    }
    while ( v9 < (int)SvClient::ms_clientCount );
  }
  v32 = DVARINT_badHost_detectMinServerTime;
  if ( !DVARINT_badHost_detectMinServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "badHost_detectMinServerTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  integer = 30000;
  if ( v32->current.integer < 30000 )
    integer = v32->current.integer;
  PersistentGlobalsMP->badHostDetectionTime = PersistentGlobalsMP->time + integer;
  SV_SnapshotMP_CreateBaselineIfNeeded();
  if ( !initSettings->isFrontEnd )
  {
    v34 = DVARBOOL_sv_usePrecomputedLOSData;
    if ( DVARBOOL_sv_usePrecomputedLOSData )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_sv_usePrecomputedLOSData);
      if ( v34->current.enabled )
        LOSPrecomputeSystem::LoadTimingDataFromFile(&g_losPrecomputeData, initSettings->mapName);
    }
  }
  ProfLoad_Deactivate();
  Com_Printf(15, "-----------------------------------\n");
  SV_InitMP_UpdateAllowedDvarFlags(initSettings);
  if ( initSettings->serverThreadStartup )
  {
    if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 1820, ASSERT_TYPE_ASSERT, "(Sys_IsServerThread ())", (const char *)&queryFormat, "Sys_IsServerThread ()") )
      __debugbreak();
  }
  else
  {
    Sys_ProfEndNamedEvent();
    R_EndRemoteScreenUpdate();
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  if ( (__int64)(__rdtsc() - g_timerTickAtBoot) < 0 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  Com_Printf(0, "Time since boot: %.2fs\n", (double)(*(double *)&_XMM0 * msecPerRawTimerTick * 0.001));
  if ( g_serverThreadOwnership != 1 )
  {
    LODWORD(v37) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_init_mp.cpp", 2231, ASSERT_TYPE_ASSERT, "( ( g_serverThreadOwnership == 1 ) )", "( g_serverThreadOwnership ) = %i", v37) )
      __debugbreak();
  }
}

/*
==============
SvGameModeAppMP::ShutdownGameMode
==============
*/
void SvGameModeAppMP::ShutdownGameMode(SvGameModeAppMP *this)
{
  SV_InitMP_DeregisterDvars();
  SV_DemoMP_ShutdownSystem();
  G_MainMP_DeregisterGameModeDvars();
  G_SpawnMP_Shutdown();
}

