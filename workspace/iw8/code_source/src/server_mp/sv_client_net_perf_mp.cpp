/*
==============
SV_ClientNetPerf_InitForClient
==============
*/

void __fastcall SV_ClientNetPerf_InitForClient(const int clientNum)
{
  ?SV_ClientNetPerf_InitForClient@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientNetPerf_Reset
==============
*/

void SV_ClientNetPerf_Reset(void)
{
  ?SV_ClientNetPerf_Reset@@YAXXZ();
}

/*
==============
SV_ClientNetPerf_OnFullServerFrame
==============
*/

void SV_ClientNetPerf_OnFullServerFrame(void)
{
  ?SV_ClientNetPerf_OnFullServerFrame@@YAXXZ();
}

/*
==============
SV_ClientNetPerf_UpdateCmdHistogram
==============
*/

void __fastcall SV_ClientNetPerf_UpdateCmdHistogram(int clientNum)
{
  ?SV_ClientNetPerf_UpdateCmdHistogram@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientNetPerf_AddReceivedUserCommandForClient
==============
*/

void __fastcall SV_ClientNetPerf_AddReceivedUserCommandForClient(const int clientNum, const int cmdTime)
{
  ?SV_ClientNetPerf_AddReceivedUserCommandForClient@@YAXHH@Z(clientNum, cmdTime);
}

/*
==============
SV_ClientNetPerf_AddDroppedCommandForClient
==============
*/

void __fastcall SV_ClientNetPerf_AddDroppedCommandForClient(const int clientNum, const int droppedCommandCount)
{
  ?SV_ClientNetPerf_AddDroppedCommandForClient@@YAXHH@Z(clientNum, droppedCommandCount);
}

/*
==============
SV_ClientNetPerf_UpdatePlayerState
==============
*/

void __fastcall SV_ClientNetPerf_UpdatePlayerState(const int clientNum, playerState_s *ps)
{
  ?SV_ClientNetPerf_UpdatePlayerState@@YAXHPEAUplayerState_s@@@Z(clientNum, ps);
}

/*
==============
SV_ClientNetPerf_IsEnabled
==============
*/

bool __fastcall SV_ClientNetPerf_IsEnabled()
{
  return ?SV_ClientNetPerf_IsEnabled@@YA_NXZ();
}

/*
==============
SV_ClientNetPerf_SendClientNetworkTelemetry
==============
*/

void __fastcall SV_ClientNetPerf_SendClientNetworkTelemetry(const int clientNum)
{
  ?SV_ClientNetPerf_SendClientNetworkTelemetry@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientNetPerf_AddBurstUserCommandForClient
==============
*/

void __fastcall SV_ClientNetPerf_AddBurstUserCommandForClient(const int clientNum, const int cmdTime)
{
  ?SV_ClientNetPerf_AddBurstUserCommandForClient@@YAXHH@Z(clientNum, cmdTime);
}

/*
==============
SV_ClientNetPerf_AddBufferedUserCommandForClient
==============
*/

void __fastcall SV_ClientNetPerf_AddBufferedUserCommandForClient(int clientNum, const int cmdTime)
{
  ?SV_ClientNetPerf_AddBufferedUserCommandForClient@@YAXHH@Z(clientNum, cmdTime);
}

/*
==============
SV_ClientNetPerf_AddBufferedUserCommandForClient
==============
*/
void SV_ClientNetPerf_AddBufferedUserCommandForClient(int clientNum, const int cmdTime)
{
  __int64 v2; 
  int v5; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 86, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( SV_ClientNetPerf_IsEnabled() )
    s_stats.userCommands[v2].queued.valueThisFrame += cmdTime;
}

/*
==============
SV_ClientNetPerf_AddBurstUserCommandForClient
==============
*/
void SV_ClientNetPerf_AddBurstUserCommandForClient(const int clientNum, const int cmdTime)
{
  __int64 v2; 
  int v5; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( SV_ClientNetPerf_IsEnabled() )
    s_stats.userCommands[v2].burst.valueThisFrame += cmdTime;
}

/*
==============
SV_ClientNetPerf_AddDroppedCommandForClient
==============
*/
void SV_ClientNetPerf_AddDroppedCommandForClient(const int clientNum, const int droppedCommandCount)
{
  __int64 v2; 
  int v5; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( SV_ClientNetPerf_IsEnabled() )
    s_stats.userCommands[v2].dropped.valueThisFrame += droppedCommandCount;
}

/*
==============
SV_ClientNetPerf_AddReceivedUserCommandForClient
==============
*/
void SV_ClientNetPerf_AddReceivedUserCommandForClient(const int clientNum, const int cmdTime)
{
  __int64 v2; 
  int v5; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v5 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  if ( SV_ClientNetPerf_IsEnabled() )
    s_stats.userCommands[v2].received.valueThisFrame += cmdTime;
}

/*
==============
SV_ClientNetPerf_EvaluateUserCommandCommon
==============
*/
void SV_ClientNetPerf_EvaluateUserCommandCommon(ClientNetPerfStatsUserCommandCounter *userCmdCounter, const int threshold)
{
  const dvar_t *v4; 
  int integer; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int valueThisFrame; 
  int time; 
  int v9; 

  if ( !userCmdCounter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 134, ASSERT_TYPE_ASSERT, "(userCmdCounter)", (const char *)&queryFormat, "userCmdCounter") )
    __debugbreak();
  v4 = DVARINT_sv_clientNetPerf_UsrCmdTimeWindowMs;
  if ( !DVARINT_sv_clientNetPerf_UsrCmdTimeWindowMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientNetPerf_UsrCmdTimeWindowMs") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  valueThisFrame = userCmdCounter->valueThisFrame;
  time = PersistentGlobalsMP->time;
  v9 = time - userCmdCounter->highestUpdateTime;
  userCmdCounter->valueThisFrame = 0;
  if ( v9 > integer || v9 < 0 )
  {
    userCmdCounter->highestValue = userCmdCounter->secondHighestValue;
    userCmdCounter->highestUpdateTime = userCmdCounter->secondHighestUpdateTime;
    *(_QWORD *)&userCmdCounter->secondHighestValue = 0i64;
  }
  if ( valueThisFrame >= threshold )
  {
    if ( valueThisFrame < userCmdCounter->highestValue )
    {
      userCmdCounter->secondHighestValue = valueThisFrame;
      userCmdCounter->secondHighestUpdateTime = time;
    }
    else
    {
      userCmdCounter->highestValue = valueThisFrame;
      userCmdCounter->highestUpdateTime = time;
    }
  }
}

/*
==============
SV_ClientNetPerf_InitForClient
==============
*/
void SV_ClientNetPerf_InitForClient(const int clientNum)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  *(_QWORD *)&CommonClient[833].lastUsercmd.weapon.weaponOthers = 0x7FEFFFFFFFFFFFFFi64;
  *(_QWORD *)&CommonClient[833].lastUsercmd.weapon.weaponAttachments[6] = 0x10000000000000i64;
  *(_QWORD *)&CommonClient[833].lastUsercmd.weapon.attachmentVariationIndices[9] = 0i64;
  *(_QWORD *)&CommonClient[833].lastUsercmd.weapon.attachmentVariationIndices[17] = 0i64;
  *(_QWORD *)&CommonClient[833].lastUsercmd.weapon.attachmentVariationIndices[25] = 0i64;
  memset_0(&CommonClient[833].lastUsercmd.offHand, 0, 0xB40ui64);
  *(_QWORD *)&CommonClient[843].lastUsercmd.offHand.weaponIdx = 0x7FEFFFFFFFFFFFFFi64;
  *(_QWORD *)&CommonClient[843].lastUsercmd.offHand.stickerIndices[3] = 0x10000000000000i64;
  *(_QWORD *)&CommonClient[843].lastUsercmd.offHand.weaponAttachments[10] = 0i64;
  *(_QWORD *)&CommonClient[843].lastUsercmd.offHand.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&CommonClient[843].lastUsercmd.offHand.attachmentVariationIndices[13] = 0i64;
  memset_0(&CommonClient[843].lastUsercmd.offHand.attachmentVariationIndices[21], 0, 0xB40ui64);
  CommonClient[783].lastUsercmd.buttons = 0x7FEFFFFFFFFFFFFFi64;
  *(_QWORD *)&CommonClient[783].lastUsercmd.stateFlags = 0x10000000000000i64;
  *(_QWORD *)CommonClient[783].lastUsercmd.angles.v = 0i64;
  *((_QWORD *)&CommonClient[783].lastUsercmd.angles.xy + 1) = 0i64;
  *(_QWORD *)&CommonClient[783].lastUsercmd.weapon.stickerIndices[1] = 0i64;
  memset_0(&CommonClient[783].lastUsercmd.weapon.weaponOthers, 0, 0x3840ui64);
}

/*
==============
SV_ClientNetPerf_IsEnabled
==============
*/
bool SV_ClientNetPerf_IsEnabled()
{
  const dvar_t *v0; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    return 0;
  v0 = DVARBOOL_bg_enableClientNetPerf;
  if ( !DVARBOOL_bg_enableClientNetPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enableClientNetPerf") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
SV_ClientNetPerf_OnFullServerFrame
==============
*/
void SV_ClientNetPerf_OnFullServerFrame(void)
{
  unsigned int i; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( SV_ClientNetPerf_IsEnabled() )
  {
    for ( i = 0; (int)i < (int)SvClient::ms_clientCount; ++i )
    {
      if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
      {
        SV_ClientNetPerf_UpdateCmdHistogram(i);
        if ( i >= 0xC8 )
        {
          LODWORD(v6) = 200;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v1 = DVARINT_sv_clientNetPerf_UsrCmdReceivedMinTime;
        if ( !DVARINT_sv_clientNetPerf_UsrCmdReceivedMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientNetPerf_UsrCmdReceivedMinTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v1);
        SV_ClientNetPerf_EvaluateUserCommandCommon(&s_stats.userCommands[i].received, v1->current.integer);
        if ( i >= 0xC8 )
        {
          LODWORD(v6) = 200;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v2 = DVARINT_sv_clientNetPerf_UsrCmdQueuedMinTime;
        if ( !DVARINT_sv_clientNetPerf_UsrCmdQueuedMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientNetPerf_UsrCmdQueuedMinTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v2);
        SV_ClientNetPerf_EvaluateUserCommandCommon(&s_stats.userCommands[i].queued, v2->current.integer);
        if ( i >= 0xC8 )
        {
          LODWORD(v6) = 200;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 195, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v3 = DVARINT_sv_clientNetPerf_UsrCmdDroppedMinCount;
        if ( !DVARINT_sv_clientNetPerf_UsrCmdDroppedMinCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientNetPerf_UsrCmdDroppedMinCount") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v3);
        SV_ClientNetPerf_EvaluateUserCommandCommon(&s_stats.userCommands[i].dropped, v3->current.integer);
        if ( i >= 0xC8 )
        {
          LODWORD(v6) = 200;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 207, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v4 = DVARINT_sv_clientNetPerf_UsrCmdBurstMinTime;
        if ( !DVARINT_sv_clientNetPerf_UsrCmdBurstMinTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_clientNetPerf_UsrCmdBurstMinTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v4);
        SV_ClientNetPerf_EvaluateUserCommandCommon(&s_stats.userCommands[i].burst, v4->current.integer);
      }
      else
      {
        if ( i >= 0xC8 )
        {
          LODWORD(v6) = 200;
          LODWORD(v5) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        memset_0(&s_stats.userCommands[i], 0, sizeof(s_stats.userCommands[i]));
      }
    }
  }
}

/*
==============
SV_ClientNetPerf_Reset
==============
*/
void SV_ClientNetPerf_Reset(void)
{
  memset_0(&s_stats, 0, sizeof(s_stats));
}

/*
==============
SV_ClientNetPerf_SendClientNetworkTelemetry
==============
*/
void SV_ClientNetPerf_SendClientNetworkTelemetry(const int clientNum)
{
  SvClient *CommonClient; 
  SvClient *v3; 
  SvGameModeApplication *ActiveServerApplication; 
  int m_frameDuration; 
  int v6; 
  bool v7; 
  int v8; 
  int v9; 
  unsigned int v11; 
  int v12; 
  int v13; 
  DLogContext context; 
  unsigned __int8 outBuffer[1024]; 
  char buffer[4096]; 

  if ( clientNum >= SvClient::ms_clientCount )
  {
    v11 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v11) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  v3 = CommonClient;
  if ( *((_BYTE *)&CommonClient[783].state + 4) )
  {
    Com_Printf(15, "Trying to send Player Network Perf Payload thats already been sent\n");
    return;
  }
  if ( !CommonClient->gentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 325, ASSERT_TYPE_ASSERT, "(cl->gentity)", (const char *)&queryFormat, "cl->gentity") )
    __debugbreak();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = ActiveServerApplication->m_frameDuration;
  v6 = *(_DWORD *)&v3[782].lastUsercmd.scriptedMeleeTarget - v3[782].lastUsercmd.sightedClientsMask.data[0];
  Com_Printf(15, "Sending Player Network Perf Payload\n");
  if ( DLog_CreateContext(&context, 0i64, buffer, 4096) )
  {
    if ( DLog_IsActive() )
    {
      v7 = DLog_BeginEvent(&context, "dlog_event_server_net_perf");
      context.autoEndEvent = 1;
      if ( v7 && DLog_Int32(&context, "client_connection_duration_ms", v6) && DLog_Int32(&context, "frame_duration", m_frameDuration) && DLog_UInt16Array(&context, "cmd_extrapolation_frame_length_histogram", (const unsigned __int16 *)v3[854].lastUsercmd.remoteControlMove, 20) && DLog_UInt16Array(&context, "cmd_received_histogram", (const unsigned __int16 *)&v3[853].lastUsercmd.offHand.attachmentVariationIndices[21], 32) && DLog_UInt16Array(&context, "cmd_queued_histogram", (const unsigned __int16 *)&v3[853].lastUsercmd.gunYaw, 32) && DLog_UInt16Array(&context, "cmd_dropped_histogram", (const unsigned __int16 *)&v3[854], 32) && DLog_UInt16Array(&context, "cmd_burst_histogram", &v3[854].lastUsercmd.weapon.weaponOthers, 60) && SV_ClientNetPerf_DlogDigest_20_(&context, "lost_snapshots_digest", (DLogTDigest<20,8> *)&v3[833].lastUsercmd.weapon.weaponOthers) && SV_ClientNetPerf_DlogDigest_20_(&context, "packet_backup_digest", (DLogTDigest<20,8> *)&v3[843].lastUsercmd.offHand) )
      {
        DLogTDigest<100,8>::ProcessBufferedCentroids((DLogTDigest<100,8> *)&v3[783].lastUsercmd);
        v8 = DLogTDigest<100,8>::SerializeToProtobuf((DLogTDigest<100,8> *)&v3[783].lastUsercmd, outBuffer, 0x400ui64);
        v9 = v8;
        if ( (unsigned __int64)v8 > 0x400 )
        {
          v13 = 1024;
          v12 = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 309, ASSERT_TYPE_ASSERT, "( serializedSize ) <= ( sizeof( buffer ) )", "%s <= %s\n\t%i, %i", "serializedSize", "sizeof( buffer )", v12, v13) )
            __debugbreak();
        }
        if ( DLog_UInt8Array(&context, "ping_digest", outBuffer, v9) && NetchanTelemetry::Dlog((NetchanTelemetry *)&v3[652].lastUsercmd.stateFlags, &context, "chan") && DLog_RecordContext(&context) )
          goto LABEL_35;
      }
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
  }
  Com_Printf(131087, "Failed to send dlog event %s\n", "dlog_event_server_net_perf");
LABEL_35:
  *((_BYTE *)&v3[783].state + 4) = 1;
}

/*
==============
SV_ClientNetPerf_UpdateCmdHistogram
==============
*/
void SV_ClientNetPerf_UpdateCmdHistogram(int clientNum)
{
  __int64 v1; 
  ClientNetPerfStatsUserCommands *v2; 
  SvClient *CommonClient; 
  const dvar_t *v4; 
  SvClient *v5; 
  int v6; 
  int v7; 
  const dvar_t *v8; 
  int v9; 
  int v10; 
  int valueThisFrame; 
  int v13; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v13 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( s_stats.userCommands ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( s_stats.userCommands )\n\t%i not in [0, %i)", clientNum, v13) )
      __debugbreak();
  }
  v2 = &s_stats.userCommands[v1];
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v1);
  v4 = DVARINT_command_received_histogram_range;
  v5 = CommonClient;
  if ( !DVARINT_command_received_histogram_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_received_histogram_range") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v6 = v4->current.integer / 32;
  if ( v6 > 0 )
  {
    v7 = v2->received.valueThisFrame / v6;
    if ( v7 > 31 )
      v7 = 31;
    if ( v7 < 0 )
      v7 = 0;
    ++*(_WORD *)&v5[853].lastUsercmd.offHand.attachmentVariationIndices[2 * v7 + 21];
  }
  v8 = DVARINT_command_queued_histogram_range;
  if ( !DVARINT_command_queued_histogram_range && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "command_queued_histogram_range") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer / 32;
  if ( v9 > 0 )
  {
    v10 = v2->queued.valueThisFrame / v9;
    if ( v10 > 31 )
      v10 = 31;
    if ( v10 < 0 )
      v10 = 0;
    ++*((_WORD *)&v5[853].lastUsercmd.gunYaw + v10);
  }
  valueThisFrame = v2->dropped.valueThisFrame;
  if ( valueThisFrame > 31 )
    valueThisFrame = 31;
  if ( valueThisFrame < 0 )
    valueThisFrame = 0;
  ++*((_WORD *)&v5[854].__vftable + valueThisFrame);
}

/*
==============
SV_ClientNetPerf_UpdatePlayerState
==============
*/
void SV_ClientNetPerf_UpdatePlayerState(const int clientNum, playerState_s *ps)
{
  __int64 v3; 
  const dvar_t *v4; 
  int ClientPing; 
  int v6; 
  int highestValue; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 

  v3 = clientNum;
  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    goto LABEL_25;
  v4 = DVARBOOL_bg_enableClientNetPerf;
  if ( !DVARBOOL_bg_enableClientNetPerf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_enableClientNetPerf") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
  {
LABEL_25:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 273, ASSERT_TYPE_ASSERT, "( SV_ClientNetPerf_IsEnabled() )", (const char *)&queryFormat, "SV_ClientNetPerf_IsEnabled()") )
      __debugbreak();
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 274, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (unsigned int)v3 >= SvClient::ms_clientCount )
  {
    LODWORD(v13) = SvClient::ms_clientCount;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_net_perf_mp.cpp", 275, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  ClientPing = SV_ClientMP_GetClientPing(v3);
  v6 = 1000;
  if ( ClientPing < 1000 )
    v6 = ClientPing;
  ps->netPerf.pingMs = (int)(float)((float)v6 * 0.255);
  highestValue = s_stats.userCommands[v3].dropped.highestValue;
  v8 = s_stats.userCommands[v3].burst.highestValue;
  v9 = 1023;
  v10 = 1023;
  if ( s_stats.userCommands[v3].received.highestValue < 1023 )
    v10 = s_stats.userCommands[v3].received.highestValue;
  ps->netPerf.maxUserCmdReceivedTime = v10;
  v11 = 1023;
  if ( highestValue < 1023 )
    v11 = highestValue;
  ps->netPerf.maxUserCmdDroppedCount = v11;
  if ( v8 < 1023 )
    v9 = v8;
  ps->netPerf.maxUserCmdQueuedTime = v9;
}

