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
  const char *v7; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  unsigned __int8 v10; 
  __int64 Env; 
  int v12; 
  __int64 v14; 
  const char ***v15; 
  DLogSample EventChannelSample; 
  DLogSampleType EventSampleType; 
  unsigned int v19; 
  const char *name; 
  int v21; 
  unsigned int UTC; 
  const char *v25; 
  char dest[32]; 

  __asm { vmovaps [rsp+98h+var_48], xmm6 }
  _RDI = event;
  BuildNumberAsInt = j_getBuildNumberAsInt();
  Com_sprintf<32>((char (*)[32])dest, "%s.%i", "8.24", BuildNumberAsInt);
  v7 = Online_Telemetry_Platform();
  v25 = v7;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v10 = 0;
  Env = DLog_GetEnv();
  v12 = 0;
  __asm { vxorps  xmm6, xmm6, xmm6 }
  if ( _RDI->channelRefCount > 0 )
  {
    v14 = 0i64;
    while ( 1 )
    {
      v15 = (const char ***)&_RDI->channelRefs[v14];
      if ( !strncmp(**v15, "glutton", 7ui64) )
        break;
      ++v12;
      ++v14;
      if ( v12 >= _RDI->channelRefCount )
        goto LABEL_10;
    }
    EventChannelSample = DLog_GetEventChannelSample(_RDI->name, **v15, (DLogEnv)Env, *((DLogSample *)v15 + Env + 16));
    if ( EventChannelSample == DLOG_SAMPLE_GROUP )
    {
      EventSampleType = DLog_GetEventSampleType(_RDI->name, _RDI->sampleGroup.type);
      __asm { vmovss  xmm1, dword ptr [rdi+5Ch]; sampleRate }
      v10 = EventSampleType;
      *(double *)&_XMM0 = DLog_GetEventSampleRate(_RDI->name, *(float *)&_XMM1);
      __asm { vmovaps xmm6, xmm0 }
LABEL_10:
      v7 = v25;
      goto LABEL_11;
    }
    v7 = v25;
    v10 = 0;
    if ( EventChannelSample == DLOG_SAMPLE_ALL )
      __asm { vmovss  xmm6, cs:__real@3f800000 }
  }
LABEL_11:
  v19 = j_getBuildNumberAsInt();
  name = _RDI->name;
  v21 = v19;
  UTC = DLog_GetUTC();
  if ( DLog_IsActive() )
  {
    if ( DLog_BeginRow(context, "telemetry") && DLog_UInt32(context, "utc_timestamp_sent", UTC) && DLog_String(context, "action_type", name, 0) && DLog_String(context, "build_version", dest, 0) && DLog_Int32(context, "changelist_number", v21) && DLog_UInt32(context, "title_id", TitleID) && DLog_String(context, "platform", v7, 0) && DLog_UInt8(context, "glutton_sample_type", v10) )
    {
      __asm { vmovaps xmm2, xmm6; value }
      if ( DLog_Float32(context, "glutton_sample_rate", *(float *)&_XMM2) )
        DLog_EndRow(context);
    }
  }
  else
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
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

