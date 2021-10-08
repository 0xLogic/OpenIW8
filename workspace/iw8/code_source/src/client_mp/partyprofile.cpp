/*
==============
PartyProfile_RecordCompressionReport
==============
*/

void __fastcall PartyProfile_RecordCompressionReport(const char *testName, const CompressionReport *report)
{
  ?PartyProfile_RecordCompressionReport@@YAXPEBDAEBUCompressionReport@@@Z(testName, report);
}

/*
==============
PartyProfile_RecordIncomingEvent
==============
*/

void __fastcall PartyProfile_RecordIncomingEvent(const PartyProfile_Event *eventInfo, const int now, PartyProfile_State *outProfileState)
{
  ?PartyProfile_RecordIncomingEvent@@YAXAEBUPartyProfile_Event@@HAEAUPartyProfile_State@@@Z(eventInfo, now, outProfileState);
}

/*
==============
PartyProfile_RecordInterval
==============
*/

void __fastcall PartyProfile_RecordInterval(const int now, PartyProfile_State *outProfileState)
{
  ?PartyProfile_RecordInterval@@YAXHAEAUPartyProfile_State@@@Z(now, outProfileState);
}

/*
==============
PartyProfile_Init
==============
*/

void __fastcall PartyProfile_Init(const unsigned __int64 guid, const XUID startingXuid, const char *gamertag, const int partyType, PartyProfile_State *outProfileState)
{
  ?PartyProfile_Init@@YAX_KUXUID@@PEBDHAEAUPartyProfile_State@@@Z(guid, startingXuid, gamertag, partyType, outProfileState);
}

/*
==============
PartyProfile_AddBandwidthData
==============
*/

void __fastcall PartyProfile_AddBandwidthData(const int messageSize, PartyProfile_Event *outEventInfo)
{
  ?PartyProfile_AddBandwidthData@@YAXHAEAUPartyProfile_Event@@@Z(messageSize, outEventInfo);
}

/*
==============
PartyProfile_StartEvent
==============
*/

void __fastcall PartyProfile_StartEvent(const PartyProfile_EventType eventType, PartyProfile_Event *outEventInfo)
{
  ?PartyProfile_StartEvent@@YAXW4PartyProfile_EventType@@AEAUPartyProfile_Event@@@Z(eventType, outEventInfo);
}

/*
==============
PartyProfile_AddCompressionData
==============
*/

void __fastcall PartyProfile_AddCompressionData(const int uncompressedSize, const bool compressionAttempted, const bool compressionSucceeded, PartyProfile_Event *outEventInfo)
{
  ?PartyProfile_AddCompressionData@@YAXH_N0AEAUPartyProfile_Event@@@Z(uncompressedSize, compressionAttempted, compressionSucceeded, outEventInfo);
}

/*
==============
PartyProfile_RecordOutgoingEvent
==============
*/

void __fastcall PartyProfile_RecordOutgoingEvent(const PartyProfile_Event *eventInfo, const int now, PartyProfile_State *outProfileState)
{
  ?PartyProfile_RecordOutgoingEvent@@YAXAEBUPartyProfile_Event@@HAEAUPartyProfile_State@@@Z(eventInfo, now, outProfileState);
}

/*
==============
PartyProfile_Reset
==============
*/

void __fastcall PartyProfile_Reset(PartyProfile_State *outProfileState)
{
  ?PartyProfile_Reset@@YAXAEAUPartyProfile_State@@@Z(outProfileState);
}

/*
==============
PartyProfile_AddBandwidthData
==============
*/
void PartyProfile_AddBandwidthData(const int messageSize, PartyProfile_Event *outEventInfo)
{
  outEventInfo->messageSize = messageSize;
}

/*
==============
PartyProfile_AddCompressionData
==============
*/
void PartyProfile_AddCompressionData(const int uncompressedSize, const bool compressionAttempted, const bool compressionSucceeded, PartyProfile_Event *outEventInfo)
{
  outEventInfo->uncompressedMessageSize = uncompressedSize;
  outEventInfo->compressionAttempted = compressionAttempted;
  outEventInfo->compressionSucceeded = compressionSucceeded;
}

/*
==============
PartyProfile_AddProfileHeader
==============
*/
void PartyProfile_AddProfileHeader(const unsigned __int64 measurementHandle, const PartyProfile_State *profileState, OnlineTimeSeriesLog *outSeriesLog)
{
  const char *v6; 
  char dest[21]; 

  if ( measurementHandle == 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyprofile.cpp", 133, ASSERT_TYPE_ASSERT, "(measurementHandle != (0xffffffff))", (const char *)&queryFormat, "measurementHandle != INVALID_MEASUREMENT_HANDLE") )
    __debugbreak();
  if ( !profileState->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyprofile.cpp", 134, ASSERT_TYPE_ASSERT, "(profileState.initialized)", (const char *)&queryFormat, "profileState.initialized") )
    __debugbreak();
  Com_sprintf<21>((char (*)[21])dest, "%d", (unsigned int)profileState->partyType);
  OnlineTimeSeriesLog::AddMetaTag(outSeriesLog, measurementHandle, "partyType", dest);
  Com_sprintf<21>((char (*)[21])dest, "%lu", profileState->guid);
  OnlineTimeSeriesLog::AddMetaTag(outSeriesLog, measurementHandle, "guid", dest);
  v6 = XUID::ToString(&profileState->startingXuid);
  OnlineTimeSeriesLog::AddMetaTag(outSeriesLog, measurementHandle, "startXuid", v6);
  OnlineTimeSeriesLog::AddMetaTag(outSeriesLog, measurementHandle, "gamertag", profileState->gamertag);
  OnlineTimeSeriesLog::AddMetaTag(outSeriesLog, measurementHandle, "version", "5");
}

/*
==============
PartyProfile_Enabled
==============
*/
bool PartyProfile_Enabled(const PartyProfile_State *profileState)
{
  const dvar_t *v1; 

  if ( !profileState->initialized )
    return 0;
  v1 = DVARBOOL_party_profile_enabled;
  if ( !DVARBOOL_party_profile_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_profile_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
PartyProfile_Init
==============
*/
void PartyProfile_Init(const unsigned __int64 guid, const XUID startingXuid, const char *gamertag, const int partyType, PartyProfile_State *outProfileState)
{
  PartyProfile_State *v5; 
  XUID xuid; 

  xuid.m_id = startingXuid.m_id;
  v5 = outProfileState;
  outProfileState->guid = guid;
  v5->partyType = partyType;
  v5->outgoingSize = 0i64;
  v5->incomingSize = 0i64;
  XUID::operator=(&v5->startingXuid, &xuid);
  Core_strcpy(v5->gamertag, 0x24ui64, gamertag);
  v5->nextIntervalRecord = 0;
  v5->initialized = 1;
}

/*
==============
PartyProfile_PrintEnabledForType
==============
*/
bool PartyProfile_PrintEnabledForType(const PartyProfile_OutputTypes_t type)
{
  const dvar_t *v1; 

  v1 = DVARINT_party_profile_print_output;
  if ( !DVARINT_party_profile_print_output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_profile_print_output") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (type & v1->current.integer) != 0;
}

/*
==============
PartyProfile_RecordCompressionReport
==============
*/
void PartyProfile_RecordCompressionReport(const char *testName, const CompressionReport *report)
{
  OnlineTimeSeriesLog *v4; 
  unsigned __int64 v5; 

  v4 = OnlineTimeSeriesLog::Get();
  v5 = OnlineTimeSeriesLog::BeginMeasurement(v4, "party_profile_compression_report");
  if ( v5 != 0xFFFFFFFF )
  {
    OnlineTimeSeriesLog::AddMetaTag(v4, v5, "testName", testName);
    OnlineTimeSeriesLog::AddMetaTag(v4, v5, "version", "5");
    OnlineTimeSeriesLog::AddMetaTag(v4, v5, "algorithmName", report->algorithmName);
    OnlineTimeSeriesLog::AddFieldValue(v4, v5, "compressionBytes", report->compression.byteSize);
    OnlineTimeSeriesLog::AddFieldValue(v4, v5, "compressionTime", report->compression.microseconds);
    OnlineTimeSeriesLog::AddFieldValue(v4, v5, "uncompressedBytes", report->decompression.byteSize);
    OnlineTimeSeriesLog::AddFieldValue(v4, v5, "decompressionTime", report->decompression.microseconds);
    OnlineTimeSeriesLog::AddFieldValue(v4, v5, "memoryBenchmark", report->currentlyAllocatedMemory);
    OnlineTimeSeriesLog::EndMeasurement(v4, v5);
  }
}

/*
==============
PartyProfile_RecordEvent
==============
*/
void PartyProfile_RecordEvent(const char *msg, const PartyProfile_State *profileState, unsigned __int64 *sizeVariable, const PartyProfile_Event *eventInfo, const int now)
{
  OnlineTimeSeriesLog *v9; 
  unsigned __int64 v10; 
  __int64 eventType; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  __int64 v15; 
  const char *v16; 
  int partyType; 
  int messageSize; 
  int uncompressedMessageSize; 
  BOOL compressionAttempted; 
  BOOL compressionSucceeded; 

  if ( PartyProfile_Enabled(profileState) && eventInfo->eventType != NO_EVENT_TRACK )
  {
    if ( PartyProfile_SendEnabledForType(PARTY_PROFILE_EVENTS) )
    {
      v9 = OnlineTimeSeriesLog::Get();
      v10 = OnlineTimeSeriesLog::BeginMeasurement(v9, msg);
      if ( v10 != 0xFFFFFFFF )
      {
        PartyProfile_AddProfileHeader(v10, profileState, v9);
        eventType = eventInfo->eventType;
        if ( (int)eventType < 0 || (unsigned int)eventType >= 7 )
          v12 = NO_EVENT;
        else
          v12 = PROFILE_EVENT_NAMES[eventType];
        OnlineTimeSeriesLog::AddMetaTag(v9, v10, "eventType", v12);
        v13 = "0";
        v14 = "0";
        if ( eventInfo->compressionAttempted )
          v14 = "1";
        OnlineTimeSeriesLog::AddMetaTag(v9, v10, "compressionAttempted", v14);
        if ( eventInfo->compressionSucceeded )
          v13 = "1";
        OnlineTimeSeriesLog::AddMetaTag(v9, v10, "compressionSucceeded", v13);
        OnlineTimeSeriesLog::AddFieldValue(v9, v10, "messageSize", eventInfo->messageSize);
        OnlineTimeSeriesLog::AddFieldValue(v9, v10, "uncompressedSize", eventInfo->uncompressedMessageSize);
        OnlineTimeSeriesLog::EndMeasurement(v9, v10);
      }
    }
    if ( PartyProfile_PrintEnabledForType(PARTY_PROFILE_EVENTS) )
    {
      v15 = eventInfo->eventType;
      if ( (int)v15 < 0 || (unsigned int)v15 >= 7 )
        v16 = NO_EVENT;
      else
        v16 = PROFILE_EVENT_NAMES[v15];
      compressionSucceeded = eventInfo->compressionSucceeded;
      compressionAttempted = eventInfo->compressionAttempted;
      uncompressedMessageSize = eventInfo->uncompressedMessageSize;
      messageSize = eventInfo->messageSize;
      partyType = profileState->partyType;
      Com_Printf(25, "%s,%lu,%d,%d,%s,%d,%d,%d,%d\n", msg, profileState->guid, now, partyType, v16, messageSize, uncompressedMessageSize, compressionAttempted, compressionSucceeded);
    }
    *sizeVariable += eventInfo->messageSize;
  }
}

/*
==============
PartyProfile_RecordIncomingEvent
==============
*/
void PartyProfile_RecordIncomingEvent(const PartyProfile_Event *eventInfo, const int now, PartyProfile_State *outProfileState)
{
  PartyProfile_RecordEvent("party_profile_incoming_event", outProfileState, &outProfileState->incomingSize, eventInfo, now);
}

/*
==============
PartyProfile_RecordInterval
==============
*/
void PartyProfile_RecordInterval(const int now, PartyProfile_State *outProfileState)
{
  OnlineTimeSeriesLog *v4; 
  unsigned __int64 v5; 
  const dvar_t *v6; 
  int fmt; 

  if ( PartyProfile_Enabled(outProfileState) && now >= outProfileState->nextIntervalRecord )
  {
    if ( outProfileState->incomingSize || outProfileState->outgoingSize )
    {
      if ( PartyProfile_SendEnabledForType(PARTY_PROFILE_INTERVALS) )
      {
        v4 = OnlineTimeSeriesLog::Get();
        v5 = OnlineTimeSeriesLog::BeginMeasurement(v4, "party_profile_interval");
        if ( v5 != 0xFFFFFFFF )
        {
          PartyProfile_AddProfileHeader(v5, outProfileState, v4);
          OnlineTimeSeriesLog::AddFieldValue(v4, v5, "incomingMessageSize", outProfileState->incomingSize);
          OnlineTimeSeriesLog::AddFieldValue(v4, v5, "outgoingMessageSize", outProfileState->outgoingSize);
          OnlineTimeSeriesLog::EndMeasurement(v4, v5);
        }
      }
      if ( PartyProfile_PrintEnabledForType(PARTY_PROFILE_INTERVALS) )
      {
        fmt = outProfileState->partyType;
        Com_Printf(25, "party_profile_interval,%lu,%d,%d,%lu,%lu\n", outProfileState->guid, (unsigned int)now, fmt, outProfileState->outgoingSize, outProfileState->incomingSize);
      }
      outProfileState->incomingSize = 0i64;
      outProfileState->outgoingSize = 0i64;
    }
    v6 = DVARINT_party_profile_frame_delay;
    if ( !DVARINT_party_profile_frame_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_profile_frame_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    outProfileState->nextIntervalRecord = now + v6->current.integer;
  }
}

/*
==============
PartyProfile_RecordOutgoingEvent
==============
*/
void PartyProfile_RecordOutgoingEvent(const PartyProfile_Event *eventInfo, const int now, PartyProfile_State *outProfileState)
{
  PartyProfile_RecordEvent("party_profile_outgoing_event", outProfileState, &outProfileState->outgoingSize, eventInfo, now);
}

/*
==============
PartyProfile_Reset
==============
*/
void PartyProfile_Reset(PartyProfile_State *outProfileState)
{
  outProfileState->initialized = 0;
}

/*
==============
PartyProfile_SendEnabledForType
==============
*/
bool PartyProfile_SendEnabledForType(const PartyProfile_OutputTypes_t type)
{
  const dvar_t *v1; 

  v1 = DVARINT_party_profile_send_output;
  if ( !DVARINT_party_profile_send_output && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_profile_send_output") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (type & v1->current.integer) != 0;
}

/*
==============
PartyProfile_StartEvent
==============
*/
void PartyProfile_StartEvent(const PartyProfile_EventType eventType, PartyProfile_Event *outEventInfo)
{
  *(_QWORD *)&outEventInfo->eventType = 0i64;
  *(_QWORD *)&outEventInfo->uncompressedMessageSize = 0i64;
  outEventInfo->eventType = eventType;
}

