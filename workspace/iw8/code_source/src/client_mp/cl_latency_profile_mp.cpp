/*
==============
CL_LatencyProfileMP_Init
==============
*/

void __fastcall CL_LatencyProfileMP_Init(const bool isStartingGame)
{
  ?CL_LatencyProfileMP_Init@@YAX_N@Z(isStartingGame);
}

/*
==============
CL_LatencyProfileMP_UpdateClientLatencyHistogram
==============
*/

void __fastcall CL_LatencyProfileMP_UpdateClientLatencyHistogram(unsigned int roundTripLatency)
{
  ?CL_LatencyProfileMP_UpdateClientLatencyHistogram@@YAXI@Z(roundTripLatency);
}

/*
==============
CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram
==============
*/

void __fastcall CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram(unsigned int timeCorrectionErrorMagnitude)
{
  ?CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram@@YAXI@Z(timeCorrectionErrorMagnitude);
}

/*
==============
CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram
==============
*/

void __fastcall CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram(unsigned int timeCorrectionMagnitude)
{
  ?CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram@@YAXI@Z(timeCorrectionMagnitude);
}

/*
==============
CL_LatencyProfileMP_UpdateClientInterpolationHistogram
==============
*/

void __fastcall CL_LatencyProfileMP_UpdateClientInterpolationHistogram(unsigned int interpolationLength)
{
  ?CL_LatencyProfileMP_UpdateClientInterpolationHistogram@@YAXI@Z(interpolationLength);
}

/*
==============
CL_LatencyProfileMP_RecordLatencyEvent
==============
*/

void __fastcall CL_LatencyProfileMP_RecordLatencyEvent(const LocalClientNum_t localClientNum, const ClientLatencyProfileMetrics *metrics)
{
  ?CL_LatencyProfileMP_RecordLatencyEvent@@YAXW4LocalClientNum_t@@AEBUClientLatencyProfileMetrics@@@Z(localClientNum, metrics);
}

/*
==============
CL_LatencyProfileMP_Shutdown
==============
*/

void __fastcall CL_LatencyProfileMP_Shutdown(const LocalClientNum_t localClientNum)
{
  ?CL_LatencyProfileMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_LatencyProfileMP_UpdateClientExtrapolationHistogram
==============
*/

void __fastcall CL_LatencyProfileMP_UpdateClientExtrapolationHistogram(unsigned int extrapLength)
{
  ?CL_LatencyProfileMP_UpdateClientExtrapolationHistogram@@YAXI@Z(extrapLength);
}

/*
==============
CL_LatencyProfileMP_Init
==============
*/
void CL_LatencyProfileMP_Init(const bool isStartingGame)
{
  const dvar_t *v2; 
  bool v3; 
  const dvar_t *v4; 

  if ( !isStartingGame )
    goto LABEL_7;
  v2 = DVARBOOL_client_latency_profile_log_enabled;
  if ( !DVARBOOL_client_latency_profile_log_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "client_latency_profile_log_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    v3 = 1;
  else
LABEL_7:
    v3 = 0;
  s_clLatencyProfEnabled = v3;
  if ( !isStartingGame )
    goto LABEL_14;
  v4 = DVARBOOL_client_latency_summary_enabled;
  if ( !DVARBOOL_client_latency_summary_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "client_latency_summary_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    s_clLatencyDlogSummaryEnabled = 1;
    Com_Printf(15, "Starting Client Latency Profile Session\n");
    memset_0(&s_clientNetQualitySummary, 0, sizeof(s_clientNetQualitySummary));
    s_clientNetQualitySummary.startTimestamp = Xtime_get_ticks_0() / 10000000;
  }
  else
  {
LABEL_14:
    s_clLatencyDlogSummaryEnabled = 0;
  }
}

/*
==============
CL_LatencyProfileMP_RecordLatencyEvent
==============
*/
void CL_LatencyProfileMP_RecordLatencyEvent(const LocalClientNum_t localClientNum, const ClientLatencyProfileMetrics *metrics)
{
  OnlineTimeSeriesLog *v4; 
  unsigned __int64 v5; 
  int ControllerFromClient; 
  const char *UsernameForLocalClient; 
  const char **v8; 
  __int64 v9; 

  if ( s_clLatencyProfEnabled )
  {
    v4 = OnlineTimeSeriesLog::Get();
    v5 = OnlineTimeSeriesLog::BeginMeasurement(v4, "client_latency");
    if ( v5 != 0xFFFFFFFF )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      UsernameForLocalClient = CL_GetUsernameForLocalClient(ControllerFromClient);
      OnlineTimeSeriesLog::AddMetaTag(v4, v5, (const char *)&stru_143C9A1A4, UsernameForLocalClient);
      v8 = (const char **)CL_LATENCY_PROFILE_METRIC;
      v9 = 5i64;
      do
      {
        OnlineTimeSeriesLog::AddFieldValue(v4, v5, *v8, metrics->value[0]);
        metrics = (const ClientLatencyProfileMetrics *)((char *)metrics + 4);
        ++v8;
        --v9;
      }
      while ( v9 );
      OnlineTimeSeriesLog::EndMeasurement(v4, v5);
    }
  }
}

/*
==============
CL_LatencyProfileMP_Shutdown
==============
*/
void CL_LatencyProfileMP_Shutdown(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool v2; 
  ClActiveClient **v3; 
  ClActiveClient *v4; 
  int v5; 
  unsigned __int64 startTimestamp; 
  int m_serverFrameDuration; 
  bool v8; 
  bool v9; 
  DLogContext context; 
  char buffer[4096]; 

  v1 = localClientNum;
  if ( s_clLatencyDlogSummaryEnabled )
  {
    if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
      __debugbreak();
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
      __debugbreak();
    v2 = ClActiveClient::ms_activeClients[v1] == NULL;
    v3 = &ClActiveClient::ms_activeClients[v1];
    if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
      __debugbreak();
    v4 = *v3;
    Com_Printf(15, "Ending Client Latency Profile Session\n");
    if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
      __debugbreak();
    v5 = cls.realtime - *(_DWORD *)v4[4].cmds[53].remoteControlMove;
    startTimestamp = s_clientNetQualitySummary.startTimestamp;
    m_serverFrameDuration = cls.m_serverFrameDuration;
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v8 = DLog_BeginEvent(&context, "dlog_event_client_latency_session");
      context.autoEndEvent = 1;
      if ( v8 && DLog_String(&context, "status", "end", 0) && DLog_UInt64(&context, "session_start_timestamp_sec", startTimestamp) && DLog_UInt32(&context, "expected_frame_time", m_serverFrameDuration) && DLog_Int32(&context, "total_game_time", v5) && DLog_UInt32Array(&context, "client_latency_histogram", s_clientNetQualitySummary.clientLatencyHistogramValues, 256) && DLog_UInt32Array(&context, "client_extrapolation_event_histogram", s_clientNetQualitySummary.clientExtrapolationHistogramValues, 42) && DLog_UInt32Array(&context, "client_interpolation_event_histogram", s_clientNetQualitySummary.clientInterpolationHistogramValues, 61) )
        DLog_RecordContext(&context);
    }
    if ( DLog_IsActive() && DLog_CreateContext(&context, 0i64, buffer, 4096) && DLog_IsActive() )
    {
      v9 = DLog_BeginEvent(&context, "dlog_event_client_time_correction_summary");
      context.autoEndEvent = 1;
      if ( v9 && DLog_UInt32Array(&context, "client_time_correction_magnitude_histogram", s_clientNetQualitySummary.clientTimeCorrectionMagnitudeHistogramValues, 21) && DLog_UInt32Array(&context, "client_time_correction_error_magnitude_histogram", s_clientNetQualitySummary.clientTimeCorrectionErrorMagnitudeHistogramValues, 21) )
        DLog_RecordContext(&context);
    }
  }
  s_clLatencyProfEnabled = 0;
  s_clLatencyDlogSummaryEnabled = 0;
}

/*
==============
CL_LatencyProfileMP_UpdateClientExtrapolationHistogram
==============
*/
void CL_LatencyProfileMP_UpdateClientExtrapolationHistogram(unsigned int extrapLength)
{
  if ( s_clLatencyDlogSummaryEnabled )
    DLog_Histogram_AddValue(extrapLength, s_clientNetQualitySummary.clientExtrapolationHistogramValues, &s_clExtrapolationHistogramDesc);
}

/*
==============
CL_LatencyProfileMP_UpdateClientInterpolationHistogram
==============
*/
void CL_LatencyProfileMP_UpdateClientInterpolationHistogram(unsigned int interpolationLength)
{
  if ( s_clLatencyDlogSummaryEnabled )
    DLog_Histogram_AddValue(interpolationLength, s_clientNetQualitySummary.clientInterpolationHistogramValues, &s_clInterpolationHistogramDesc);
}

/*
==============
CL_LatencyProfileMP_UpdateClientLatencyHistogram
==============
*/
void CL_LatencyProfileMP_UpdateClientLatencyHistogram(unsigned int roundTripLatency)
{
  if ( s_clLatencyDlogSummaryEnabled )
  {
    if ( roundTripLatency )
      DLog_Histogram_AddValue(roundTripLatency, s_clientNetQualitySummary.clientLatencyHistogramValues, &s_clLatencyHistogramDesc);
  }
}

/*
==============
CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram
==============
*/
void CL_LatencyProfileMP_UpdateClientTimeCorrectionErrorMagnitudeHistogram(unsigned int timeCorrectionErrorMagnitude)
{
  if ( s_clLatencyDlogSummaryEnabled )
    DLog_Histogram_AddValue(timeCorrectionErrorMagnitude, s_clientNetQualitySummary.clientTimeCorrectionErrorMagnitudeHistogramValues, &s_clTimeCorrectionMagnitudeHistogramDesc);
}

/*
==============
CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram
==============
*/
void CL_LatencyProfileMP_UpdateClientTimeCorrectionMagnitudeHistogram(unsigned int timeCorrectionMagnitude)
{
  if ( s_clLatencyDlogSummaryEnabled )
    DLog_Histogram_AddValue(timeCorrectionMagnitude, s_clientNetQualitySummary.clientTimeCorrectionMagnitudeHistogramValues, &s_clTimeCorrectionMagnitudeHistogramDesc);
}

