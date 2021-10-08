/*
==============
SV_Init_DeregisterDvarsCommon
==============
*/

void SV_Init_DeregisterDvarsCommon(void)
{
  ?SV_Init_DeregisterDvarsCommon@@YAXXZ();
}

/*
==============
SV_Init_IsMemoryAllocated
==============
*/

bool __fastcall SV_Init_IsMemoryAllocated()
{
  return ?SV_Init_IsMemoryAllocated@@YA_NXZ();
}

/*
==============
SV_Init_RegisterDvarsCommon
==============
*/

void SV_Init_RegisterDvarsCommon(void)
{
  ?SV_Init_RegisterDvarsCommon@@YAXXZ();
}

/*
==============
SV_Loaded
==============
*/

bool __fastcall SV_Loaded()
{
  return ?SV_Loaded@@YA_NXZ();
}

/*
==============
SV_ServerShutdownCommon
==============
*/

void __fastcall SV_ServerShutdownCommon(const char *finalmsg)
{
  ?SV_ServerShutdownCommon@@YAXPEBD@Z(finalmsg);
}

/*
==============
SV_Init_SetLocalServerRunning
==============
*/

void SV_Init_SetLocalServerRunning(void)
{
  ?SV_Init_SetLocalServerRunning@@YAXXZ();
}

/*
==============
SV_Init_DeregisterDvarsCommon
==============
*/
void SV_Init_DeregisterDvarsCommon(void)
{
  DVARINT_replay_autosave = Dvar_Deregister(DVARINT_replay_autosave);
  DVARBOOL_replay_autosaveOnError = Dvar_Deregister(DVARBOOL_replay_autosaveOnError);
  DVARFLT_replay_speed = Dvar_Deregister(DVARFLT_replay_speed);
  DVARBOOL_replay_autosave_mp = Dvar_Deregister(DVARBOOL_replay_autosave_mp);
  DVARBOOL_sv_debugTrackServerTime = Dvar_Deregister(DVARBOOL_sv_debugTrackServerTime);
  DVARBOOL_lmc = Dvar_Deregister(DVARBOOL_lmc);
  DVARBOOL_cmWorldValidate = Dvar_Deregister(DVARBOOL_cmWorldValidate);
  DVARINT_sv_clientNetPerf_UsrCmdTimeWindowMs = Dvar_Deregister(DVARINT_sv_clientNetPerf_UsrCmdTimeWindowMs);
  DVARINT_sv_clientNetPerf_UsrCmdReceivedMinTime = Dvar_Deregister(DVARINT_sv_clientNetPerf_UsrCmdReceivedMinTime);
  DVARINT_sv_clientNetPerf_UsrCmdQueuedMinTime = Dvar_Deregister(DVARINT_sv_clientNetPerf_UsrCmdQueuedMinTime);
  DVARINT_sv_clientNetPerf_UsrCmdDroppedMinCount = Dvar_Deregister(DVARINT_sv_clientNetPerf_UsrCmdDroppedMinCount);
  DVARINT_sv_clientNetPerf_UsrCmdBurstMinTime = Dvar_Deregister(DVARINT_sv_clientNetPerf_UsrCmdBurstMinTime);
  DVARINT_sv_ballisticsMaxSimStepsPerServerFrame = Dvar_Deregister(DVARINT_sv_ballisticsMaxSimStepsPerServerFrame);
  DVARINT_sv_ballisticsMaxLatencyMs = Dvar_Deregister(DVARINT_sv_ballisticsMaxLatencyMs);
  DCONST_DVARBOOL_sv_memory_print = Dvar_Deregister(DCONST_DVARBOOL_sv_memory_print);
  DCONST_DVARBOOL_sv_client_task_limit_assert = Dvar_Deregister(DCONST_DVARBOOL_sv_client_task_limit_assert);
  DVARFLT_script_usage_trigger_time = Dvar_Deregister(DVARFLT_script_usage_trigger_time);
  DVARBOOL_dev_verifyLOSDataFile = Dvar_Deregister(DVARBOOL_dev_verifyLOSDataFile);
  DVARBOOL_sv_usePrecomputedLOSData = Dvar_Deregister(DVARBOOL_sv_usePrecomputedLOSData);
  DCONST_DVARBOOL_scriptable_sv_validate_update = Dvar_Deregister(DCONST_DVARBOOL_scriptable_sv_validate_update);
  DCONST_DVARBOOL_scriptable_sv_debug_updates = Dvar_Deregister(DCONST_DVARBOOL_scriptable_sv_debug_updates);
  DVARBOOL_scriptable_sv_debug_reuse_instances = Dvar_Deregister(DVARBOOL_scriptable_sv_debug_reuse_instances);
  DVARSTR_loot_table_name = Dvar_Deregister(DVARSTR_loot_table_name);
  DVARINT_loot_seed = Dvar_Deregister(DVARINT_loot_seed);
  DCONST_DVARFLT_doorNavObstacleAngle = Dvar_Deregister(DCONST_DVARFLT_doorNavObstacleAngle);
  DVARSTR_loot_table_filter = Dvar_Deregister(DVARSTR_loot_table_filter);
  DVARSTR_loot_table_zones = Dvar_Deregister(DVARSTR_loot_table_zones);
  DVARBOOL_scriptable_sv_accurate_vehicle = Dvar_Deregister(DVARBOOL_scriptable_sv_accurate_vehicle);
  DVARBOOL_scriptable_sv_weapon_pickup_check_enabled = Dvar_Deregister(DVARBOOL_scriptable_sv_weapon_pickup_check_enabled);
}

/*
==============
SV_Init_IsMemoryAllocated
==============
*/
bool SV_Init_IsMemoryAllocated()
{
  return g_serverHunkUser != NULL;
}

/*
==============
SV_Init_RegisterDvarsCommon
==============
*/

void __fastcall SV_Init_RegisterDvarsCommon(__int64 a1, __int64 a2, double _XMM2_8)
{
  DVARINT_replay_autosave = Dvar_RegisterInt("NMOONRNPPP", 30, 0, 0x7FFFFFFF, 0x40u, "Use autosaves as part of demos - will make demo access faster but will cause hitches");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3f800000; value
  }
  DVARBOOL_replay_autosaveOnError = Dvar_RegisterBool("NSLRNLQNQM", 1, 0, "Auto save replay on error");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_replay_speed = Dvar_RegisterFloat("LTSKMMROTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Replay playback time scale");
  DVARBOOL_replay_autosave_mp = Dvar_RegisterBool("OLRSTKMRML", 0, 0, "MP-Specific toggle to enable or disable autosave replays completely");
  DVARBOOL_sv_debugTrackServerTime = Dvar_RegisterBool("SSOKSNOTR", 0, 0, "Enable server time track debugging.");
  DVARBOOL_lmc = Dvar_RegisterBool("LMPONSMKNL", 0, 0, "Load my changes fast file on devmap.");
  DVARBOOL_cmWorldValidate = Dvar_RegisterBool("LONOLKLKQR", 0, 4u, "Extra validation checks on CMWorld operations.");
  DVARINT_sv_clientNetPerf_UsrCmdTimeWindowMs = Dvar_RegisterInt("NKORLPMQ", 2000, 0, 10000, 0, "The time window to detect issues relating to processing user commands.");
  DVARINT_sv_clientNetPerf_UsrCmdReceivedMinTime = Dvar_RegisterInt("LSNPQTOMKP", 60, 0, 0x7FFFFFFF, 0, "Minimum execution time of user commands we need to receive in a server frame for us to log it as an issue.");
  DVARINT_sv_clientNetPerf_UsrCmdQueuedMinTime = Dvar_RegisterInt("OMKNMTOQOR", 35, 0, 0x7FFFFFFF, 0, "Minimum execution time of user commands we need to queue in a server frame for us to log it as an issue.");
  DVARINT_sv_clientNetPerf_UsrCmdDroppedMinCount = Dvar_RegisterInt("MRKMKRKSNM", 1, 0, 100, 0, "Minimum number of user commands we need to drop in a server frame for us to log it as an issue.");
  DVARINT_sv_clientNetPerf_UsrCmdBurstMinTime = Dvar_RegisterInt("TOOMSNTLQ", 60, 0, 0x7FFFFFFF, 0, "Minimum execution time of burst we need in a server frame for us to log it as an issue.");
  DVARINT_sv_ballisticsMaxSimStepsPerServerFrame = Dvar_RegisterInt("NSLOMMLNLO", 0, 0, 10, 0, "Ballistics system uses fixed timestep updates. This value defines the number of maximum simulation steps which can occur for a ballistic instance. If the value is set to 0, the ballistic instance will be simulated until it catches up to the server time.");
  DVARINT_sv_ballisticsMaxLatencyMs = Dvar_RegisterInt("NQRKPRKRKP", 400, 0, 400, 0, "Maximum amount of latency for which the bullet accuracy will be guaranteed.");
  DCONST_DVARBOOL_sv_memory_print = Dvar_RegisterBool("sv_memory_print", 0, 0x40004u, "When enabled, prints out memory estimates during server allocation. ");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  DCONST_DVARBOOL_sv_client_task_limit_assert = Dvar_RegisterBool("sv_client_task_limit_assert", 1, 0x40004u, "[Dev-only] Turn this dvar off to work around client task limits triggering fatal errors. This might result in gameplay bugs.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_script_usage_trigger_time = Dvar_RegisterFloat("NLPSPSNSMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Trigger a script_usage_report when any frame exceeds this time (ms) (clears after trigger)");
  DVARBOOL_dev_verifyLOSDataFile = Dvar_RegisterBool("TQSRMKOK", 0, 0, "Dev only - if enabled instructs the game to throw a com error if the LOS file doesn't exist, is the wrong version, or the wrong node count for the current map.");
  DVARBOOL_sv_usePrecomputedLOSData = Dvar_RegisterBool("LSQOPROPRS", 1, 0x80u, "Whether or not to use LOS data files for sight traces.");
  DCONST_DVARBOOL_scriptable_sv_validate_update = Dvar_RegisterBool("scriptable_sv_validate_update", 1, 0x40004u, "Enable to turn on update list validation (slow)");
  DCONST_DVARBOOL_scriptable_sv_debug_updates = Dvar_RegisterBool("scriptable_sv_debug_updates", 0, 0x40004u, "Enable to turn on update list debuging prints");
  DVARBOOL_scriptable_sv_debug_reuse_instances = Dvar_RegisterBool("PMMPQOLTK", 0, 0x80u, "Set this to disable the FIFO intance queue, which will favor instance re-use");
  DVARSTR_loot_table_name = Dvar_RegisterString("RKMMNSQKO", (const char *)&queryFormat.fmt + 3, 0x80u, "Loot Table filename. e.g. mp/brloot_test.csv. Leave blank to avoid generating loot.");
  __asm
  {
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@42040000; value
  }
  DVARINT_loot_seed = Dvar_RegisterInt("MSMMNLPPKT", 0, 0, 0x7FFFFFFF, 0x80u, "Loot generation Seed");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DCONST_DVARFLT_doorNavObstacleAngle = Dvar_RegisterFloat("doorNavObstacleAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The door 'open' angle at which a nav obstacle gets created.");
  DVARSTR_loot_table_filter = Dvar_RegisterString("MSLKNNLLMN", (const char *)&queryFormat.fmt + 3, 0x80u, "A space seperated list of items or types to disable in the loot table");
  DVARSTR_loot_table_zones = Dvar_RegisterString("PRRSROQPO", (const char *)&queryFormat.fmt + 3, 0x80u, "Zone map file name.  e.g. mp/brloot_zones.csv, if left blank will use the main table");
  DVARBOOL_scriptable_sv_accurate_vehicle = Dvar_RegisterBool("MNTLRLOPSS", 1, 0, "True to enable vehicle vs server-scriptable accurate shape overlap");
  DVARBOOL_scriptable_sv_weapon_pickup_check_enabled = Dvar_RegisterBool("LLOKOSSQR", 1, 0, "True to enable scriptable weapon pickup checks. Fixes double riot shield bug.");
}

/*
==============
SV_Init_SetLocalServerRunning
==============
*/
void SV_Init_SetLocalServerRunning(void)
{
  if ( !Com_IsAnyLocalServerRunning() )
    Dvar_SetBool_Internal(com_sv_running, 1);
}

/*
==============
SV_Loaded
==============
*/
bool SV_Loaded()
{
  return SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME;
}

/*
==============
SV_ServerShutdownCommon
==============
*/
void SV_ServerShutdownCommon(const char *finalmsg)
{
  bool HasActiveServerApplication; 
  bool IsAnyLocalServerRunning; 
  SvPersistentGlobals *v4; 
  SvGameModeApplication *ActiveServerApplication; 
  __int64 v6; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 65, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  HasActiveServerApplication = SvGameModeApplication::HasActiveServerApplication();
  IsAnyLocalServerRunning = Com_IsAnyLocalServerRunning();
  if ( HasActiveServerApplication )
  {
    if ( IsAnyLocalServerRunning || Com_IsAnyLocalServerStarting() )
    {
      Com_SyncThreads();
      Com_SetLocalServerStarting(NONE);
      if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
      {
        LODWORD(v6) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 87, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", v6) )
          __debugbreak();
      }
      Com_Printf(15, "----- Server Shutdown -----\n");
      v4 = SvPersistentGlobals::ms_svPersistent;
      *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
      if ( v4 && v4->m_svMemoryInitialized )
      {
        if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
          __debugbreak();
        if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
          __debugbreak();
        SvPersistentGlobals::ms_svPersistent->ServerShutdown(SvPersistentGlobals::ms_svPersistent, finalmsg);
      }
      Dvar_SetBool_Internal(com_sv_running, 0);
      ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
      ActiveServerApplication->ServerShutdown(ActiveServerApplication);
      Com_Printf(15, "---------------------------\n");
      if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
        __debugbreak();
      if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
      {
        LODWORD(v6) = g_serverThreadOwnership;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 110, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", v6) )
          goto LABEL_36;
      }
    }
    else if ( g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 78, ASSERT_TYPE_ASSERT, "(!SV_Init_IsMemoryAllocated())", (const char *)&queryFormat, "!SV_Init_IsMemoryAllocated()") )
    {
LABEL_36:
      __debugbreak();
    }
  }
  else
  {
    if ( IsAnyLocalServerRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 70, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", (const char *)&queryFormat, "!Com_IsAnyLocalServerRunning()") )
      __debugbreak();
    if ( g_serverHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_init.cpp", 71, ASSERT_TYPE_ASSERT, "(!SV_Init_IsMemoryAllocated())", (const char *)&queryFormat, "!SV_Init_IsMemoryAllocated()") )
      goto LABEL_36;
  }
}

