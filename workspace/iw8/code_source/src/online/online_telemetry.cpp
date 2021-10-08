/*
==============
Online_Telemetry_Platform
==============
*/

const char *__fastcall Online_Telemetry_Platform()
{
  return ?Online_Telemetry_Platform@@YAPEBDXZ();
}

/*
==============
Online_Telemetry_RealtimeNotificationPump
==============
*/

void __fastcall Online_Telemetry_RealtimeNotificationPump(const int controllerIndex)
{
  ?Online_Telemetry_RealtimeNotificationPump@@YAXH@Z(controllerIndex);
}

/*
==============
Online_Telemetry_IsCRMTelemetryEnabled
==============
*/

bool __fastcall Online_Telemetry_IsCRMTelemetryEnabled(const int controllerIndex)
{
  return ?Online_Telemetry_IsCRMTelemetryEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_Telemetry_GetSessionId
==============
*/

void __fastcall Online_Telemetry_GetSessionId(const int controllerIndex, char *outId, unsigned int len)
{
  ?Online_Telemetry_GetSessionId@@YAXHPEADI@Z(controllerIndex, outId, len);
}

/*
==============
Online_Telemetry_StoreScreenView
==============
*/

void __fastcall Online_Telemetry_StoreScreenView(const int controllerIndex, const char *next, const char *prev, const int duration, const bool isIntermission)
{
  ?Online_Telemetry_StoreScreenView@@YAXHPEBD0H_N@Z(controllerIndex, next, prev, duration, isIntermission);
}

/*
==============
Online_Telemetry_SendMOTDClick
==============
*/

void __fastcall Online_Telemetry_SendMOTDClick(const int controllerIndex, const unsigned int screen_id, const unsigned int message_id, const char *interaction_type, const char *interaction_details)
{
  ?Online_Telemetry_SendMOTDClick@@YAXHIIPEBD0@Z(controllerIndex, screen_id, message_id, interaction_type, interaction_details);
}

/*
==============
Online_Telemetry_SendScreenViews
==============
*/

void Online_Telemetry_SendScreenViews(void)
{
  ?Online_Telemetry_SendScreenViews@@YAXXZ();
}

/*
==============
Online_Telemetry_StoreItemViewEnd
==============
*/

void __fastcall Online_Telemetry_StoreItemViewEnd(const int controllerIndex, const unsigned int itemId)
{
  ?Online_Telemetry_StoreItemViewEnd@@YAXHI@Z(controllerIndex, itemId);
}

/*
==============
Online_Telemetry_SendLootPawnEvent
==============
*/

void __fastcall Online_Telemetry_SendLootPawnEvent(const int controllerIndex, const unsigned int itemId)
{
  ?Online_Telemetry_SendLootPawnEvent@@YAXHI@Z(controllerIndex, itemId);
}

/*
==============
Online_Telemetry_SendLootPawnEventWithQuantity
==============
*/

void __fastcall Online_Telemetry_SendLootPawnEventWithQuantity(const int controllerIndex, const unsigned int itemId, const unsigned int quantity)
{
  ?Online_Telemetry_SendLootPawnEventWithQuantity@@YAXHII@Z(controllerIndex, itemId, quantity);
}

/*
==============
Online_Telemetry_ResetInputSession
==============
*/

void __fastcall Online_Telemetry_ResetInputSession(const LocalClientNum_t localClient)
{
  ?Online_Telemetry_ResetInputSession@@YAXW4LocalClientNum_t@@@Z(localClient);
}

/*
==============
Online_Telemetry_StartInputSession
==============
*/

void __fastcall Online_Telemetry_StartInputSession(const LocalClientNum_t localClient)
{
  ?Online_Telemetry_StartInputSession@@YAXW4LocalClientNum_t@@@Z(localClient);
}

/*
==============
Online_Telemetry_SendLootPurchaseEvent
==============
*/

void __fastcall Online_Telemetry_SendLootPurchaseEvent(const int controllerIndex, const unsigned int itemId)
{
  ?Online_Telemetry_SendLootPurchaseEvent@@YAXHI@Z(controllerIndex, itemId);
}

/*
==============
Online_Telemetry_IsOnlineCommunicationTelemetryEnabled
==============
*/

bool __fastcall Online_Telemetry_IsOnlineCommunicationTelemetryEnabled()
{
  return ?Online_Telemetry_IsOnlineCommunicationTelemetryEnabled@@YA_NXZ();
}

/*
==============
Online_Telemetry_SendCommunicationEvent
==============
*/

void __fastcall Online_Telemetry_SendCommunicationEvent(const int controllerIndex, XUID receiverXuid, OnlineTelemetryCommunicationEventType eventType, const char *contextString)
{
  ?Online_Telemetry_SendCommunicationEvent@@YAXHUXUID@@W4OnlineTelemetryCommunicationEventType@@PEBD@Z(controllerIndex, receiverXuid, eventType, contextString);
}

/*
==============
Online_Telemetry_EndGameSurvey
==============
*/

void __fastcall Online_Telemetry_EndGameSurvey(const int controllerIndex, int order, int selection, bool isQuitter)
{
  ?Online_Telemetry_EndGameSurvey@@YAXHHH_N@Z(controllerIndex, order, selection, isQuitter);
}

/*
==============
Online_Telemetry_SendRedeemLootEvent
==============
*/

void __fastcall Online_Telemetry_SendRedeemLootEvent(const int controllerIndex, const int *itemId, const int num_items)
{
  ?Online_Telemetry_SendRedeemLootEvent@@YAXHPEBHH@Z(controllerIndex, itemId, num_items);
}

/*
==============
Online_Telemetry_SendPrestige
==============
*/

void __fastcall Online_Telemetry_SendPrestige(const int controllerIndex, const int old_prestige, const int new_prestige)
{
  ?Online_Telemetry_SendPrestige@@YAXHHH@Z(controllerIndex, old_prestige, new_prestige);
}

/*
==============
Online_Telemetry_SetVoteSelection
==============
*/

void __fastcall Online_Telemetry_SetVoteSelection(const int controllerIndex, const char *previousMap, const char *alternateMap, const char *randomMap)
{
  ?Online_Telemetry_SetVoteSelection@@YAXHPEBD00@Z(controllerIndex, previousMap, alternateMap, randomMap);
}

/*
==============
Online_Telemetry_StoreItemViewBegin
==============
*/

void __fastcall Online_Telemetry_StoreItemViewBegin(const int controllerIndex, const unsigned int itemId)
{
  ?Online_Telemetry_StoreItemViewBegin@@YAXHI@Z(controllerIndex, itemId);
}

/*
==============
Online_Telemetry_SendStartMatchEvent
==============
*/

void __fastcall Online_Telemetry_SendStartMatchEvent(const int controllerIndex)
{
  ?Online_Telemetry_SendStartMatchEvent@@YAXH@Z(controllerIndex);
}

/*
==============
Online_Telemetry_Frame
==============
*/

void __fastcall Online_Telemetry_Frame(const LocalClientNum_t localClient)
{
  ?Online_Telemetry_Frame@@YAXW4LocalClientNum_t@@@Z(localClient);
}

/*
==============
Online_Telemetry_SetMissionEndData
==============
*/

void __fastcall Online_Telemetry_SetMissionEndData(const int controllerIndex, const char *mapName, const int duration, const int highestDifficulty, const int lowestDifficulty)
{
  ?Online_Telemetry_SetMissionEndData@@YAXHPEBDHHH@Z(controllerIndex, mapName, duration, highestDifficulty, lowestDifficulty);
}

/*
==============
Online_Telemetry_Init
==============
*/

void Online_Telemetry_Init(void)
{
  ?Online_Telemetry_Init@@YAXXZ();
}

/*
==============
Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar
==============
*/

bool __fastcall Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar(RealTimeMultiplayBRPumpDisabledFlags flag)
{
  return ?Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar@@YA_NW4RealTimeMultiplayBRPumpDisabledFlags@@@Z(flag);
}

/*
==============
Online_Telemetry_UpdateAndSendInputSessionStart
==============
*/

void __fastcall Online_Telemetry_UpdateAndSendInputSessionStart(const LocalClientNum_t localClient)
{
  ?Online_Telemetry_UpdateAndSendInputSessionStart@@YAXW4LocalClientNum_t@@@Z(localClient);
}

/*
==============
Online_Telemetry_StoreClosedEvent
==============
*/

void __fastcall Online_Telemetry_StoreClosedEvent(const int controllerIndex)
{
  ?Online_Telemetry_StoreClosedEvent@@YAXH@Z(controllerIndex);
}

/*
==============
Online_Telemetry_Update
==============
*/

void __fastcall Online_Telemetry_Update(const int controllerIndex)
{
  ?Online_Telemetry_Update@@YAXH@Z(controllerIndex);
}

/*
==============
Online_Telemetry_StoreOpenedEvent
==============
*/

void __fastcall Online_Telemetry_StoreOpenedEvent(const int controllerIndex, const char *source, const char *actionSource)
{
  ?Online_Telemetry_StoreOpenedEvent@@YAXHPEBD0@Z(controllerIndex, source, actionSource);
}

/*
==============
Online_Telemetry_SendPurchaseInfo
==============
*/

void __fastcall Online_Telemetry_SendPurchaseInfo(const int controllerIndex, const InGameStoreProduct *product, TransactionResult transaction_result)
{
  ?Online_Telemetry_SendPurchaseInfo@@YAXHPEBUInGameStoreProduct@@W4TransactionResult@@@Z(controllerIndex, product, transaction_result);
}

/*
==============
Online_Telemetry_EndGameSurvey
==============
*/
void Online_Telemetry_EndGameSurvey(const int controllerIndex, int order, int selection, bool isQuitter)
{
  DLogEvent_ScreenView *v8; 
  unsigned __int64 matchId; 
  int i; 
  LocalClientNum_t localClientNum; 
  LocalClientNum_t outLocalClientNum[5]; 

  if ( !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
  {
    v8 = (DLogEvent_ScreenView *)((char *)&s_screenViewEvents + 1784 * outLocalClientNum[0]);
    matchId = OnlineMatchId::GetMatchId();
    DLogEvent_ScreenView::AddSurveyData(v8, order, selection, isQuitter, matchId);
  }
  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsUserSignedInToDemonware(i) && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(i) && CL_Mgr_IsControllerActive(i) && CL_Mgr_IsControllerMappedToClient(i, &localClientNum) && CL_IsLocalClientActive(localClientNum) && telemetry_screenView->current.integer && telemetry_active->current.integer && DLogEvent_ScreenView::ReadyToSend((DLogEvent_ScreenView *)&s_screenViewEvents + (int)localClientNum) )
      DLogEvent_Base::Send((DLogEvent_Base *)((char *)&s_screenViewEvents + 1784 * localClientNum), 1);
  }
}

/*
==============
Online_Telemetry_Frame
==============
*/
void Online_Telemetry_Frame(const LocalClientNum_t localClient)
{
  bool v2; 
  bool v3; 
  int *v4; 
  int v5; 
  int i; 
  bool IsPaidUser; 
  bool HasOnlineSubscription; 
  const char *Gametype; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int64 UserId; 

  v2 = telemetry_active->current.integer != 0;
  if ( v2 == Live_IsInSystemlinkLobby() )
  {
    v3 = Live_IsInSystemlinkLobby();
    Dvar_SetInt_Internal(telemetry_active, !v3);
  }
  Online_Telemetry_UpdateAndSendInputSessionStart(localClient);
  v4 = sRealtimeNotificationTimestamps;
  v5 = Sys_Milliseconds();
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerActive(i) && Live_IsUserSignedInToLive(i) && *v4 && v5 - *v4 >= 5000 )
    {
      IsPaidUser = LiveStorage_IsPaidUser(i);
      HasOnlineSubscription = Live_HasOnlineSubscription(i);
      Gametype = Party_GetGametype();
      *v4 = 0;
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      Com_Printf(16, "Sending Realtime Notify ===STOP=== event\n");
      UserId = DLog_GetUserId(i);
      DLog_RecordEvent<char const *,unsigned char,char const *,bool,char const *,bool,char const *,bool,char const *,char const *>(UserId, "dlog_event_realtime_notify", "game_mode", ActiveGameMode, "start", 0, "is_paid_user", IsPaidUser, "has_online_subscription", HasOnlineSubscription, "game_type", Gametype);
    }
    ++v4;
  }
}

/*
==============
Online_Telemetry_GetSessionId
==============
*/
void Online_Telemetry_GetSessionId(const int controllerIndex, char *outId, unsigned int len)
{
  bool IsUserSignedInToDemonware; 
  bool IsTimeSynced; 
  const XUID *Xuid; 
  unsigned int *resultSize; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  LocalClientNum_t outLocalClientNum; 
  unsigned int v24; 
  unsigned __int64 size; 
  char *dest; 
  XUID v27; 
  unsigned int v28; 
  __int64 v29; 
  XUID result; 
  bdHashMD5 v31; 
  unsigned __int8 v32[8]; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  char v36; 

  v29 = -2i64;
  LODWORD(size) = len;
  dest = outId;
  *(_QWORD *)v32 = 0i64;
  v33 = 0i64;
  v34 = 0i64;
  v35 = 0i64;
  v36 = 0;
  outLocalClientNum = LOCAL_CLIENT_INVALID;
  IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(controllerIndex);
  IsTimeSynced = LiveStorage_IsTimeSynced();
  if ( outId )
  {
    if ( !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) && IsUserSignedInToDemonware && IsTimeSynced )
    {
      XUID::XUID(&v27);
      bdHashMD5::bdHashMD5(&v31);
      Xuid = Live_GetXuid(&result, controllerIndex);
      XUID::operator=(&v27, Xuid);
      v28 = s_TelemetrySessions.users[outLocalClientNum].startTime + LiveStorage_GetUTCOffset();
      v24 = 33;
      bdHashMD5::hash(&v31, (const unsigned __int8 *)&v27, 0x10u, v32, &v24);
      bdHashMD5::~bdHashMD5(&v31);
    }
    v22 = HIBYTE(v33);
    v21 = BYTE6(v33);
    v20 = BYTE5(v33);
    v19 = BYTE4(v33);
    v18 = BYTE3(v33);
    v17 = BYTE2(v33);
    v16 = BYTE1(v33);
    v15 = (unsigned __int8)v33;
    v14 = v32[7];
    v13 = v32[6];
    v12 = v32[5];
    v11 = v32[4];
    v10 = v32[3];
    v9 = v32[2];
    LODWORD(resultSize) = v32[1];
    Com_sprintf(dest, (unsigned int)size, "%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", v32[0], resultSize, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22);
  }
}

/*
==============
Online_Telemetry_Init
==============
*/
void Online_Telemetry_Init(void)
{
  UserSessions *v0; 
  __int64 v1; 
  DLogEvent_Base *v2; 
  DLogEvent_Base *v3; 
  DLogEvent_Base *v4; 

  v0 = &s_TelemetrySessions;
  v1 = 2i64;
  v2 = &s_screenViewEvents;
  v3 = &s_storeBrowseEvents;
  v4 = &s_startMatchEvents;
  do
  {
    *(_QWORD *)&v0->users[0].expirationTime = 0i64;
    *(_QWORD *)&v0->users[0].startTime = 0i64;
    DLogEvent_Base::Reset(v4);
    DLogEvent_Base::Reset(v3);
    DLogEvent_Base::Reset(v2);
    v4 += 5;
    v0 = (UserSessions *)((char *)v0 + 16);
    v3 = (DLogEvent_Base *)((char *)v3 + 176);
    v2 = (DLogEvent_Base *)((char *)v2 + 1784);
    --v1;
  }
  while ( v1 );
  *(_QWORD *)sRealtimeNotificationTimestamps = 0i64;
  *(_QWORD *)&sRealtimeNotificationTimestamps[2] = 0i64;
  *(_QWORD *)&sRealtimeNotificationTimestamps[4] = 0i64;
  *(_QWORD *)&sRealtimeNotificationTimestamps[6] = 0i64;
  s_TelemetrySessions.lastUpdateTime = 0;
}

/*
==============
Online_Telemetry_IsCRMTelemetryEnabled
==============
*/
bool Online_Telemetry_IsCRMTelemetryEnabled(const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  return telemetry_loot->current.enabled && telemetry_active->current.integer && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum);
}

/*
==============
Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar
==============
*/
bool Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar(RealTimeMultiplayBRPumpDisabledFlags flag)
{
  const dvar_t *v1; 

  v1 = DVARINT_sony_realtime_multiplayer_br_pump_disabled_flags_for_telemetry;
  if ( !DVARINT_sony_realtime_multiplayer_br_pump_disabled_flags_for_telemetry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sony_realtime_multiplayer_br_pump_disabled_flags_for_telemetry") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (flag & v1->current.integer) != 0;
}

/*
==============
Online_Telemetry_IsOnlineCommunicationTelemetryEnabled
==============
*/
bool Online_Telemetry_IsOnlineCommunicationTelemetryEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_communication_telemetry_enabled;
  if ( !DVARBOOL_online_communication_telemetry_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_communication_telemetry_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
Online_Telemetry_Platform
==============
*/
const char *Online_Telemetry_Platform()
{
  bool v0; 
  const char *result; 

  v0 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO;
  result = "scorpio";
  if ( !v0 )
    return "xb3";
  return result;
}

/*
==============
Online_Telemetry_RealtimeNotificationPump
==============
*/
void Online_Telemetry_RealtimeNotificationPump(const int controllerIndex)
{
  __int64 v1; 
  const PartyData *GameParty; 
  bool v3; 
  bool IsPaidUser; 
  bool HasOnlineSubscription; 
  const char *v6; 
  const char *Gametype; 
  __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  RealTimeMultiplayBRPumpDisabledFlags v12; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int64 UserId; 

  v1 = controllerIndex;
  if ( controllerIndex != -1 && (unsigned int)controllerIndex <= 7 && Live_IsUserSignedInToLive(controllerIndex) && !Live_UserIsGuest(v1) )
  {
    GameParty = Live_GetGameParty();
    v3 = Party_AreAllMembersLocal(GameParty);
    if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch_solo, "xblive_privatematch_solo") && !v3 )
    {
      IsPaidUser = LiveStorage_IsPaidUser(v1);
      HasOnlineSubscription = Live_HasOnlineSubscription(v1);
      v6 = "br";
      Gametype = Party_GetGametype();
      v8 = 0x7FFFFFFFi64;
      if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v9 = v6[Gametype - "br"];
        v10 = v8;
        v11 = *v6++;
        --v8;
        if ( !v10 )
          break;
        if ( v9 != v11 )
          goto LABEL_17;
      }
      while ( v9 );
      v12 = PREMIUM_USER;
      if ( !IsPaidUser )
        v12 = F2P_USER;
      if ( !Online_Telemetry_IsFlagSetInRealtimeMultiplayBattleRoyaePumpDisabledDvar(v12) )
      {
LABEL_17:
        if ( !sRealtimeNotificationTimestamps[v1] )
        {
          ActiveGameMode = Com_GameMode_GetActiveGameMode();
          Com_Printf(16, "Sending Realtime Notify ===START=== event\n");
          UserId = DLog_GetUserId(v1);
          DLog_RecordEvent<char const *,unsigned char,char const *,bool,char const *,bool,char const *,bool,char const *,char const *>(UserId, "dlog_event_realtime_notify", "game_mode", ActiveGameMode, "start", 1, "is_paid_user", IsPaidUser, "has_online_subscription", HasOnlineSubscription, "game_type", Gametype);
        }
        sRealtimeNotificationTimestamps[v1] = Sys_Milliseconds();
      }
    }
  }
}

/*
==============
Online_Telemetry_ResetInputSession
==============
*/
void Online_Telemetry_ResetInputSession(const LocalClientNum_t localClient)
{
  __int64 v1; 
  int ControllerFromClient; 

  v1 = localClient;
  if ( CL_Mgr_IsClientActive(localClient) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( !Live_IsOfflineTool() && CL_Mgr_IsControllerActive(ControllerFromClient) && CL_IsLocalClientActive((LocalClientNum_t)v1) && CL_IsLocalClientActive((LocalClientNum_t)v1) )
      s_TelemetrySessions.users[v1].expirationTime = s_TelemetrySessions.lastUpdateTime + 1800;
  }
}

/*
==============
Online_Telemetry_SendCommunicationEvent
==============
*/
void Online_Telemetry_SendCommunicationEvent(const int controllerIndex, XUID receiverXuid, OnlineTelemetryCommunicationEventType eventType, const char *contextString)
{
  unsigned __int64 UserId; 
  unsigned __int64 v8; 
  XUID v9; 

  v9.m_id = receiverXuid.m_id;
  if ( (unsigned int)controllerIndex > 7 )
  {
    Com_PrintWarning(25, "Online_Telemetry_SendCommunicationEvent failed, controller Index invalid %d\n", (unsigned int)controllerIndex);
  }
  else if ( Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    UserId = DLog_GetUserId(controllerIndex);
    v8 = XUID::ToUint64(&v9);
    if ( !contextString )
      contextString = (char *)&queryFormat.fmt + 3;
    DLog_RecordEvent<char const *,unsigned __int64,char const *,unsigned int,char const *,char const *>(UserId, "dlog_event_online_communication_telemetry", "receiver_uno_id", v8, "event_type", eventType, "context", contextString);
  }
  else
  {
    Com_PrintWarning(25, "Online_Telemetry_SendCommunicationEvent failed, %d not signed into demonware\n", (unsigned int)controllerIndex);
  }
}

/*
==============
Online_Telemetry_SendLootPawnEvent
==============
*/
void Online_Telemetry_SendLootPawnEvent(const int controllerIndex, const unsigned int itemId)
{
  DlogEvent_Loot_ItemDismantle v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( telemetry_active->current.integer && telemetry_loot->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
  {
    DLogEvent_Base::DLogEvent_Base(&v4);
    v4.__vftable = (DlogEvent_Loot_ItemDismantle_vtbl *)&DlogEvent_Loot_ItemDismantle::`vftable';
    DLogEvent_Base::Init(&v4, controllerIndex);
    DlogEvent_Loot_ItemDismantle::SetItemData(&v4, itemId, 1u);
    DLogEvent_Base::Send(&v4, 1);
  }
}

/*
==============
Online_Telemetry_SendLootPawnEventWithQuantity
==============
*/
void Online_Telemetry_SendLootPawnEventWithQuantity(const int controllerIndex, const unsigned int itemId, const unsigned int quantity)
{
  DlogEvent_Loot_ItemDismantle v6; 
  LocalClientNum_t outLocalClientNum; 

  if ( telemetry_active->current.integer && telemetry_loot->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
  {
    DLogEvent_Base::DLogEvent_Base(&v6);
    v6.__vftable = (DlogEvent_Loot_ItemDismantle_vtbl *)&DlogEvent_Loot_ItemDismantle::`vftable';
    DLogEvent_Base::Init(&v6, controllerIndex);
    DlogEvent_Loot_ItemDismantle::SetItemData(&v6, itemId, quantity);
    DLogEvent_Base::Send(&v6, 1);
  }
}

/*
==============
Online_Telemetry_SendLootPurchaseEvent
==============
*/
void Online_Telemetry_SendLootPurchaseEvent(const int controllerIndex, const unsigned int itemId)
{
  DlogEvent_Loot_ItemCraft v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( telemetry_active->current.integer && telemetry_loot->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
  {
    DLogEvent_Base::DLogEvent_Base(&v4);
    v4.__vftable = (DlogEvent_Loot_ItemCraft_vtbl *)&DlogEvent_Loot_ItemCraft::`vftable';
    DLogEvent_Base::Init(&v4, controllerIndex);
    DlogEvent_Loot_ItemCraft::SetItemData(&v4, itemId, 1u);
    DLogEvent_Base::Send(&v4, 1);
  }
}

/*
==============
Online_Telemetry_SendMOTDClick
==============
*/
void Online_Telemetry_SendMOTDClick(const int controllerIndex, const unsigned int screen_id, const unsigned int message_id, const char *interaction_type, const char *interaction_details)
{
  unsigned __int64 UserId; 
  bool v10; 
  LocalClientNum_t outLocalClientNum[4]; 
  DLogContext context; 
  char buffer[4096]; 

  if ( telemetry_loot->current.enabled )
  {
    if ( telemetry_active->current.integer )
    {
      if ( !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
      {
        UserId = DLog_GetUserId(controllerIndex);
        if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
        {
          v10 = DLog_BeginEvent(&context, "dlog_event_crm_message_click");
          context.autoEndEvent = 1;
          if ( v10 && DLog_UInt32(&context, "crm_screen_id", screen_id) && DLog_UInt32(&context, "crm_message_id", message_id) && DLog_String(&context, "interaction_type", interaction_type, 0) && DLog_String(&context, "interaction_detail", interaction_details, 0) )
            DLog_RecordContext(&context);
        }
      }
    }
  }
}

/*
==============
Online_Telemetry_SendPrestige
==============
*/
void Online_Telemetry_SendPrestige(const int controllerIndex, const int old_prestige, const int new_prestige)
{
  unsigned __int8 ActiveGameMode; 
  unsigned __int64 UserId; 
  bool v8; 
  LocalClientNum_t outLocalClientNum[4]; 
  DLogContext context; 
  char buffer[4096]; 

  if ( telemetry_active->current.integer )
  {
    if ( telemetry_prestige->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      UserId = DLog_GetUserId(controllerIndex);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v8 = DLog_BeginEvent(&context, "dlog_event_prestige");
        context.autoEndEvent = 1;
        if ( v8 && DLog_Int32(&context, "old_prestige", old_prestige) && DLog_Int32(&context, "new_prestige", new_prestige) && DLog_UInt8(&context, "game_mode", ActiveGameMode) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
Online_Telemetry_SendPurchaseInfo
==============
*/
void Online_Telemetry_SendPurchaseInfo(const int controllerIndex, const InGameStoreProduct *product, TransactionResult transaction_result)
{
  unsigned __int8 v3; 
  bool isConsumable; 
  const char *skuId; 
  unsigned __int64 UserId; 
  bool v9; 
  LocalClientNum_t outLocalClientNum[4]; 
  DLogContext context; 
  char buffer[4096]; 

  v3 = transaction_result;
  if ( telemetry_active->current.integer )
  {
    if ( telemetry_purchaseConfirm->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
    {
      isConsumable = product->isConsumable;
      skuId = product->skuId;
      UserId = DLog_GetUserId(controllerIndex);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v9 = DLog_BeginEvent(&context, "dlog_event_store_purchase");
        context.autoEndEvent = 1;
        if ( v9 && DLog_String(&context, "product_id", skuId, 0) && DLog_String(&context, "product_label", (const char *)&queryFormat.fmt + 3, 0) && DLog_String(&context, "price", product->price, 0) && DLog_Bool(&context, "is_consumable", isConsumable) && DLog_UInt8(&context, "transaction_result", v3) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
Online_Telemetry_SendRedeemLootEvent
==============
*/
void Online_Telemetry_SendRedeemLootEvent(const int controllerIndex, const int *itemId, const int num_items)
{
  unsigned __int8 v6; 
  LocalClientNum_t outLocalClientNum[4]; 
  DlogEvent_Loot_RedeemDrop v8; 

  if ( telemetry_loot->current.enabled && telemetry_active->current.integer && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
  {
    DLogEvent_Base::DLogEvent_Base(&v8);
    v8.__vftable = (DlogEvent_Loot_RedeemDrop_vtbl *)&DlogEvent_Loot_RedeemDrop::`vftable';
    DLogEvent_Base::Init(&v8, controllerIndex);
    v6 = truncate_cast<unsigned char,int>(num_items);
    if ( (const int *)(((unsigned __int64)itemId + 3) & 0xFFFFFFFFFFFFFFFCui64) != itemId && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", itemId, 4i64) )
      __debugbreak();
    DlogEvent_Loot_RedeemDrop::SetItemData(&v8, (const unsigned int *)itemId, v6);
    DLogEvent_Base::Send(&v8, 1);
  }
}

/*
==============
Online_Telemetry_SendScreenViews
==============
*/
void Online_Telemetry_SendScreenViews(void)
{
  int i; 
  LocalClientNum_t outLocalClientNum; 

  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsUserSignedInToDemonware(i) && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(i) && CL_Mgr_IsControllerActive(i) && CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) && telemetry_screenView->current.integer && telemetry_active->current.integer && DLogEvent_ScreenView::ReadyToSend((DLogEvent_ScreenView *)&s_screenViewEvents + (int)outLocalClientNum) )
      DLogEvent_Base::Send((DLogEvent_Base *)((char *)&s_screenViewEvents + 1784 * outLocalClientNum), 1);
  }
}

/*
==============
Online_Telemetry_SendStartMatchEvent
==============
*/
void Online_Telemetry_SendStartMatchEvent(const int controllerIndex)
{
  bool v2; 
  bool v3; 
  LocalClientNum_t outLocalClientNum; 

  v2 = !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum);
  v3 = telemetry_matchStart->current.enabled && telemetry_active->current.integer;
  if ( v2 && v3 )
    DLogEvent_Base::Send(&s_startMatchEvents + 5 * outLocalClientNum, 1);
  bdTelemetry::record();
}

/*
==============
Online_Telemetry_SetMissionEndData
==============
*/
void Online_Telemetry_SetMissionEndData(const int controllerIndex, const char *mapName, const int duration, const int highestDifficulty, const int lowestDifficulty)
{
  const DDLContext *DDLContext; 
  unsigned int RawHash; 
  unsigned int v13; 
  int Int; 
  unsigned __int8 v15; 
  unsigned __int8 v16; 
  unsigned __int64 UserId; 
  bool v18; 
  LocalClientNum_t outLocalClientNum; 
  DDLState state; 
  DLogContext context; 
  char buffer[4096]; 

  outLocalClientNum = LOCAL_CLIENT_INVALID;
  if ( telemetry_active->current.integer && telemetry_levelEnd->current.enabled && !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum) )
  {
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+1228h+state.member], xmm0
    }
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    DDLContext = GamerProfile_GetDDLContext(controllerIndex, SP_PROGRESSION);
    GamerProfile_GetDDLState(&state, controllerIndex, SP_PROGRESSION);
    RawHash = j_SL_GetRawHash(scr_const.spData);
    DDL_MoveToNameByHash(&state, &state, RawHash, NULL);
    v13 = j_SL_GetRawHash(scr_const.totalGameplayTime);
    DDL_MoveToNameByHash(&state, &state, v13, NULL);
    Int = DDL_GetInt(&state, DDLContext);
    v15 = truncate_cast<unsigned char,int>(lowestDifficulty);
    v16 = truncate_cast<unsigned char,int>(highestDifficulty);
    if ( (duration < 0 || (unsigned int)duration > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)duration, "signed", duration) )
      __debugbreak();
    UserId = DLog_GetUserId(controllerIndex);
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v18 = DLog_BeginEvent(&context, "dlog_event_defeat_level");
      context.autoEndEvent = 1;
      if ( v18 && DLog_String(&context, "map", mapName, 0) && DLog_UInt16(&context, "duration", duration) && DLog_UInt8(&context, "highest_difficulty", v16) && DLog_UInt8(&context, "lowest_difficulty", v15) && DLog_Int32(&context, "total_gameplay_time", Int) )
        DLog_RecordContext(&context);
    }
  }
}

/*
==============
Online_Telemetry_SetVoteSelection
==============
*/
void Online_Telemetry_SetVoteSelection(const int controllerIndex, const char *previousMap, const char *alternateMap, const char *randomMap)
{
  LocalClientNum_t outLocalClientNum[6]; 

  if ( !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(controllerIndex) && CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum[0]) )
    DLogEvent_StartMatch::SetMapSelections((DLogEvent_StartMatch *)&s_startMatchEvents + (int)outLocalClientNum[0], previousMap, alternateMap, randomMap);
}

/*
==============
Online_Telemetry_StartInputSession
==============
*/
void Online_Telemetry_StartInputSession(const LocalClientNum_t localClient)
{
  __int64 v1; 
  int ControllerFromClient; 

  v1 = localClient;
  if ( CL_Mgr_IsClientActive(localClient) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( !Live_IsOfflineTool() && CL_Mgr_IsControllerActive(ControllerFromClient) && CL_IsLocalClientActive((LocalClientNum_t)v1) )
      s_TelemetrySessions.users[v1].userHash = 0;
  }
}

/*
==============
Online_Telemetry_StoreClosedEvent
==============
*/
void Online_Telemetry_StoreClosedEvent(const int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( telemetry_storeBrowse->current.enabled )
  {
    if ( telemetry_active->current.integer )
      DLogEvent_Base::Send((DLogEvent_Base *)((char *)&s_storeBrowseEvents + 176 * ClientFromController), 1);
  }
}

/*
==============
Online_Telemetry_StoreItemViewBegin
==============
*/
void Online_Telemetry_StoreItemViewBegin(const int controllerIndex, const unsigned int itemId)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( telemetry_storeBrowse->current.enabled )
  {
    if ( telemetry_active->current.integer )
      DLogEvent_StoreItemBrowse::BeginItemView((DLogEvent_StoreItemBrowse *)&s_storeBrowseEvents + (int)ClientFromController, itemId);
  }
}

/*
==============
Online_Telemetry_StoreItemViewEnd
==============
*/
void Online_Telemetry_StoreItemViewEnd(const int controllerIndex, const unsigned int itemId)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( telemetry_storeBrowse->current.enabled )
  {
    if ( telemetry_active->current.integer )
      DLogEvent_StoreItemBrowse::EndItemView((DLogEvent_StoreItemBrowse *)&s_storeBrowseEvents + (int)ClientFromController, itemId);
  }
}

/*
==============
Online_Telemetry_StoreOpenedEvent
==============
*/
void Online_Telemetry_StoreOpenedEvent(const int controllerIndex, const char *source, const char *actionSource)
{
  LocalClientNum_t ClientFromController; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int64 UserId; 
  bool v9; 
  DLogContext context; 
  char buffer[4096]; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( telemetry_storeBrowse->current.enabled )
  {
    if ( telemetry_active->current.integer )
    {
      DLogEvent_StoreItemBrowse::SetStoreSources((DLogEvent_StoreItemBrowse *)&s_storeBrowseEvents + (int)ClientFromController, source, actionSource);
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      UserId = DLog_GetUserId(controllerIndex);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v9 = DLog_BeginEvent(&context, "dlog_event_store_entry");
        context.autoEndEvent = 1;
        if ( v9 && DLog_String(&context, "source", source, 0) && DLog_String(&context, "action_source", actionSource, 0) && DLog_UInt8(&context, "game_mode", ActiveGameMode) && DLog_UInt8(&context, "region", 0) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
Online_Telemetry_StoreScreenView
==============
*/
void Online_Telemetry_StoreScreenView(const int controllerIndex, const char *next, const char *prev, const int duration, const bool isIntermission)
{
  bool IsControllerMappedToClient; 
  LocalClientNum_t v8; 
  LocalClientNum_t outLocalClientNum[6]; 

  IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum);
  v8 = outLocalClientNum[0];
  if ( !IsControllerMappedToClient )
    v8 = LOCAL_CLIENT_0;
  outLocalClientNum[0] = v8;
  if ( telemetry_screenView->current.integer )
  {
    if ( telemetry_active->current.integer )
      DLogEvent_ScreenView::AddScreenView((DLogEvent_ScreenView *)&s_screenViewEvents + (int)v8, prev, duration, isIntermission);
  }
}

/*
==============
Online_Telemetry_Update
==============
*/
void Online_Telemetry_Update(const int controllerIndex)
{
  ;
}

/*
==============
Online_Telemetry_UpdateAndSendInputSessionStart
==============
*/
void Online_Telemetry_UpdateAndSendInputSessionStart(const LocalClientNum_t localClient)
{
  __int64 v1; 
  __int64 ControllerFromClient; 
  __int64 v3; 
  __int64 v4; 
  bool v5; 
  Online_BandwidthTest *Instance; 
  bool IsComplete; 
  unsigned int LocalClientHashOfGamertag; 
  int v9; 
  int v10; 
  Online_Commerce *v11; 
  bool v12; 
  StatsSource ActiveStatsSource; 
  bool HaveStatsForSource; 
  bool v15; 
  bool v16; 
  unsigned int v17; 
  int m_uploadBitsPerSec; 
  DLogEvent_StartSession v19; 
  LocalClientNum_t outLocalClientNum; 

  v1 = localClient;
  s_TelemetrySessions.lastUpdateTime = Sys_GetTimeAsSeconds();
  if ( CL_Mgr_IsClientActive((LocalClientNum_t)v1) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    if ( !Live_IsOfflineTool() && CL_Mgr_IsControllerActive(ControllerFromClient) && CL_IsLocalClientActive((LocalClientNum_t)v1) )
    {
      v3 = v1;
      v4 = v1;
      v5 = Live_IsUserSignedInToDemonware(ControllerFromClient) && LiveStorage_IsTimeSynced();
      Instance = Online_BandwidthTest::GetInstance();
      IsComplete = Online_BandwidthTest::IsComplete(Instance);
      LocalClientHashOfGamertag = Live_GetLocalClientHashOfGamertag(ControllerFromClient);
      if ( LocalClientHashOfGamertag != s_TelemetrySessions.users[v1].userHash || s_TelemetrySessions.users[v1].expirationTime < s_TelemetrySessions.lastUpdateTime )
      {
        s_TelemetrySessions.users[v1].userHash = LocalClientHashOfGamertag;
        s_TelemetrySessions.users[v1].startTime = Sys_GetTimeAsSeconds();
        s_TelemetrySessions.users[v1].sendTime = 0;
        if ( CL_Mgr_IsClientActive((LocalClientNum_t)v1) )
        {
          v9 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
          if ( !Live_IsOfflineTool() && CL_Mgr_IsControllerActive(v9) && CL_IsLocalClientActive((LocalClientNum_t)v1) && CL_IsLocalClientActive((LocalClientNum_t)v1) )
            s_TelemetrySessions.users[v1].expirationTime = s_TelemetrySessions.lastUpdateTime + 1800;
        }
      }
      if ( v5 && IsComplete && !s_TelemetrySessions.users[v1].sendTime )
      {
        v10 = Online_Commerce::GetInstance()->m_signInExchangeState[ControllerFromClient];
        v11 = Online_Commerce::GetInstance();
        v12 = v10 == 2 && v11->m_storeEntitlements[ControllerFromClient].taskState == ENTITLEMENT_STATE_COMPLETE;
        ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
        HaveStatsForSource = LiveStorage_DoWeHaveStatsForSource(ControllerFromClient, ActiveStatsSource);
        if ( v12 && HaveStatsForSource )
        {
          v15 = !Live_IsOfflineTool() && Live_IsUserSignedInToDemonware(ControllerFromClient) && CL_Mgr_IsControllerActive(ControllerFromClient) && CL_Mgr_IsControllerMappedToClient(ControllerFromClient, &outLocalClientNum) && CL_IsLocalClientActive(outLocalClientNum);
          v16 = telemetry_sessionStart->current.integer && telemetry_active->current.integer;
          if ( v15 && v16 && LiveStorage_IsTimeSynced() )
          {
            v17 = s_TelemetrySessions.users[outLocalClientNum].startTime + LiveStorage_GetUTCOffset();
            m_uploadBitsPerSec = Online_BandwidthTest::GetInstance()->m_uploadBitsPerSec;
            DLogEvent_Base::DLogEvent_Base(&v19);
            v19.__vftable = (DLogEvent_StartSession_vtbl *)&DLogEvent_StartSession::`vftable';
            DLogEvent_Base::Init(&v19, ControllerFromClient);
            DLogEvent_StartSession::SetSessionParams(&v19, v17, m_uploadBitsPerSec);
            DLogEvent_Base::Send(&v19, 1);
          }
          s_TelemetrySessions.users[v3].sendTime = s_TelemetrySessions.lastUpdateTime;
          DLogEvent_Base::Init(&s_startMatchEvents + 5 * v4, ControllerFromClient);
          DLogEvent_Base::Init((DLogEvent_Base *)((char *)&s_storeBrowseEvents + 176 * v4), ControllerFromClient);
          DLogEvent_Base::Init((DLogEvent_Base *)((char *)&s_screenViewEvents + 1784 * v4), ControllerFromClient);
        }
      }
    }
  }
}

