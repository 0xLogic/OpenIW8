/*
==============
DLog_RegisterAutoFills
==============
*/

void DLog_RegisterAutoFills(void)
{
  ?DLog_RegisterAutoFills@@YAXXZ();
}

/*
==============
DLog_AutoFill_DWHeader
==============
*/
void DLog_AutoFill_DWHeader(DLogContext *context, const DLogEvent *event)
{
  bdTelemetryDLogSink *Instance; 

  Instance = (bdTelemetryDLogSink *)bdTelemetryDLogSink::getInstance();
  bdTelemetryDLogSink::header(Instance, context, event);
}

/*
==============
DLog_AutoFill_TelemetryHeader
==============
*/
void DLog_AutoFill_TelemetryHeader(DLogContext *context, const DLogEvent *event)
{
  unsigned int BuildNumberAsInt; 
  const char *v5; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  unsigned __int8 EventSampleType; 
  __int64 Env; 
  int v10; 
  float v11; 
  __int64 v12; 
  DLogChannelRef *v13; 
  DLogSample EventChannelSample; 
  double EventSampleRate; 
  unsigned int v16; 
  const char *name; 
  int v18; 
  unsigned int UTC; 
  const char *v20; 
  char dest[32]; 

  BuildNumberAsInt = j_getBuildNumberAsInt();
  Com_sprintf<32>((char (*)[32])dest, "%s.%i", "8.24", BuildNumberAsInt);
  v5 = Online_Telemetry_Platform();
  v20 = v5;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  EventSampleType = 0;
  Env = DLog_GetEnv();
  v10 = 0;
  v11 = 0.0;
  if ( event->channelRefCount > 0 )
  {
    v12 = 0i64;
    while ( 1 )
    {
      v13 = &event->channelRefs[v12];
      if ( !strncmp(v13->channel->name, "glutton", 7ui64) )
        break;
      ++v10;
      ++v12;
      if ( v10 >= event->channelRefCount )
        goto LABEL_10;
    }
    EventChannelSample = DLog_GetEventChannelSample(event->name, v13->channel->name, (DLogEnv)Env, v13->sample[Env]);
    if ( EventChannelSample == DLOG_SAMPLE_GROUP )
    {
      EventSampleType = DLog_GetEventSampleType(event->name, event->sampleGroup.type);
      EventSampleRate = DLog_GetEventSampleRate(event->name, event->sampleGroup.rate);
      v11 = *(float *)&EventSampleRate;
LABEL_10:
      v5 = v20;
      goto LABEL_11;
    }
    v5 = v20;
    EventSampleType = 0;
    if ( EventChannelSample == DLOG_SAMPLE_ALL )
      v11 = FLOAT_1_0;
  }
LABEL_11:
  v16 = j_getBuildNumberAsInt();
  name = event->name;
  v18 = v16;
  UTC = DLog_GetUTC();
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, "telemetry") && DLog_UInt32(context, "utc_timestamp_sent", UTC) && DLog_String(context, "action_type", name, 0) && DLog_String(context, "build_version", dest, 0) && DLog_Int32(context, "changelist_number", v18) && DLog_UInt32(context, "title_id", TitleID) && DLog_String(context, "platform", v5, 0) && DLog_UInt8(context, "glutton_sample_type", EventSampleType) && DLog_Float32(context, "glutton_sample_rate", v11) )
      DLog_EndRow(context);
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
}

/*
==============
DLog_AutoFill_ClientHeader
==============
*/
void DLog_AutoFill_ClientHeader(DLogContext *context, const DLogEvent *event)
{
  unsigned __int64 userId; 
  unsigned __int64 v3; 
  unsigned __int64 FirstPartyUserID; 
  unsigned __int8 FirstPartyAccountTypeFromString; 
  XUID *v7; 
  int ControllerIndexFromXuid; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  DWServicesAccess *v11; 
  bdLoginResult *LoginResult; 
  const char *FirstPartyAccountType; 
  unsigned __int64 SessionId; 
  XUID v15; 
  __int64 nameBufferIn[4]; 
  int v17; 

  userId = context->userId;
  v3 = 0i64;
  memset(nameBufferIn, 0, sizeof(nameBufferIn));
  FirstPartyUserID = 0i64;
  FirstPartyAccountTypeFromString = 0;
  v17 = 0;
  if ( userId && (v7 = XUID::FromUInt64(&v15, userId), ControllerIndexFromXuid = Live_GetControllerIndexFromXuid((XUID)v7->m_id), ControllerIndexFromXuid != -1) || (ControllerIndexFromXuid = BB_GetDemonwareActiveController(), ControllerIndexFromXuid != -1) )
  {
    Live_GetOnlineUserName(ControllerIndexFromXuid, (char *)nameBufferIn, 36);
    Instance = DWServicesAccess::GetInstance();
    Login = DWServicesAccess::GetLogin(Instance, ControllerIndexFromXuid);
    if ( DWLogin::succeeded(Login) )
    {
      v11 = DWServicesAccess::GetInstance();
      LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(v11, ControllerIndexFromXuid);
      if ( bdLoginResult::isCrossPlayEnabled(LoginResult) )
        v3 = bdLoginResult::getUserID(LoginResult);
      FirstPartyUserID = bdLoginResult::getFirstPartyUserID(LoginResult);
      FirstPartyAccountType = bdLoginResult::getFirstPartyAccountType(LoginResult);
      FirstPartyAccountTypeFromString = DLog_GetFirstPartyAccountTypeFromString(FirstPartyAccountType);
    }
    if ( !userId && Live_IsUserSignedInToDemonware(ControllerIndexFromXuid) )
      userId = DLog_GetUserId(ControllerIndexFromXuid);
  }
  SessionId = DLog_GetSessionId(userId);
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, "client") && DLog_UInt64(context, "uno_id", v3) && DLog_UInt64(context, "first_party_user_id", FirstPartyUserID) && DLog_UInt8(context, "first_party_account_type", FirstPartyAccountTypeFromString) && DLog_UInt64(context, "user_session_id", SessionId) && DLog_String(context, "user_name", (const char *)nameBufferIn, 0) )
      DLog_EndRow(context);
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
}

/*
==============
DLog_AutoFill_MatchHeader
==============
*/
void DLog_AutoFill_MatchHeader(DLogContext *context, const DLogEvent *event)
{
  unsigned __int64 m_lobbyId; 
  unsigned __int64 MatchId; 

  m_lobbyId = Lobby_GetPartyData()->m_lobbyId;
  MatchId = OnlineMatchId::GetMatchId();
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, "match") && DLog_UInt64(context, "lobby_id", m_lobbyId) && DLog_UInt64(context, "match_id", MatchId) )
      DLog_EndRow(context);
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
}

/*
==============
DLog_RegisterAutoFills
==============
*/
void DLog_RegisterAutoFills(void)
{
  unsigned int v0; 
  DLogAutoFill *v1; 

  v0 = 0;
  v1 = s_autoFills;
  do
  {
    DLog_RegisterAutoFill(v1->name, v1->autoFill);
    ++v0;
    ++v1;
  }
  while ( v0 < 4 );
}

