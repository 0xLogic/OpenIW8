/*
==============
SV_LatencyProfileMP_Init
==============
*/

void __fastcall SV_LatencyProfileMP_Init(const bool isGameServer)
{
  ?SV_LatencyProfileMP_Init@@YAX_N@Z(isGameServer);
}

/*
==============
SV_LatencyProfileMP_Shutdown
==============
*/

void SV_LatencyProfileMP_Shutdown(void)
{
  ?SV_LatencyProfileMP_Shutdown@@YAXXZ();
}

/*
==============
SV_LatencyProfileMP_RecordLatencyEvent
==============
*/

void __fastcall SV_LatencyProfileMP_RecordLatencyEvent(const unsigned int clientIndex, const SvLatencyProfileMetrics *metrics)
{
  ?SV_LatencyProfileMP_RecordLatencyEvent@@YAXIAEBUSvLatencyProfileMetrics@@@Z(clientIndex, metrics);
}

/*
==============
SV_LatencyProfileMP_Init
==============
*/
void SV_LatencyProfileMP_Init(const bool isGameServer)
{
  const dvar_t *v1; 
  SvGameModeApplication *ActiveServerApplication; 
  __int64 v3; 
  char *MatchIdString; 

  if ( !isGameServer )
    goto LABEL_7;
  v1 = DVARBOOL_server_latency_profile_log_enabled;
  if ( !DVARBOOL_server_latency_profile_log_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "server_latency_profile_log_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    s_svLatencyProfEnabled = 1;
    Com_Printf(15, "Starting Latency Profile Session\n");
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    v3 = Xtime_get_ticks_0() / 10000000;
    LODWORD(ActiveServerApplication) = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    MatchIdString = OnlineMatchId::GetMatchIdString();
    DLog_RecordEvent<char const *,char const *,char const *,char *,char const *,unsigned __int64,char const *,unsigned int>(0i64, "sv_profile_latency_session", "status", "begin", "match_guid", MatchIdString, "timestamp", v3, "expected_frame_time", (unsigned int)ActiveServerApplication);
  }
  else
  {
LABEL_7:
    s_svLatencyProfEnabled = 0;
  }
}

/*
==============
SV_LatencyProfileMP_RecordLatencyEvent
==============
*/
void SV_LatencyProfileMP_RecordLatencyEvent(const unsigned int clientIndex, const SvLatencyProfileMetrics *metrics)
{
  OnlineTimeSeriesLog *v4; 
  unsigned __int64 v5; 
  SvClient *CommonClient; 
  const char **v7; 
  __int64 v8; 

  if ( s_svLatencyProfEnabled )
  {
    v4 = OnlineTimeSeriesLog::Get();
    v5 = OnlineTimeSeriesLog::BeginMeasurement(v4, "server_latency");
    if ( v5 != 0xFFFFFFFF )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(clientIndex);
      OnlineTimeSeriesLog::AddMetaTag(v4, v5, (const char *)&stru_143C9A1A4, &CommonClient[4].lastUsercmd.selectedLoc[1]);
      v7 = (const char **)SV_LATENCY_PROFILE_METRIC;
      v8 = 8i64;
      do
      {
        OnlineTimeSeriesLog::AddFieldValue(v4, v5, *v7, metrics->value[0]);
        metrics = (const SvLatencyProfileMetrics *)((char *)metrics + 4);
        ++v7;
        --v8;
      }
      while ( v8 );
      OnlineTimeSeriesLog::EndMeasurement(v4, v5);
    }
  }
}

/*
==============
SV_LatencyProfileMP_Shutdown
==============
*/
void SV_LatencyProfileMP_Shutdown(void)
{
  SvGameModeApplication *ActiveServerApplication; 
  __int64 v1; 
  char *MatchIdString; 

  if ( s_svLatencyProfEnabled )
  {
    Com_Printf(15, "Ending Latency Profile Session\n");
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    v1 = Xtime_get_ticks_0() / 10000000;
    LODWORD(ActiveServerApplication) = SvGameModeApplication::GetFrameDuration(ActiveServerApplication);
    MatchIdString = OnlineMatchId::GetMatchIdString();
    DLog_RecordEvent<char const *,char const *,char const *,char *,char const *,unsigned __int64,char const *,unsigned int>(0i64, "sv_profile_latency_session", "status", "end", "match_guid", MatchIdString, "timestamp", v1, "expected_frame_time", (unsigned int)ActiveServerApplication);
  }
  s_svLatencyProfEnabled = 0;
}

