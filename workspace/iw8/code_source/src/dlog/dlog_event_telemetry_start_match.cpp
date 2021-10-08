/*
==============
DLogEvent_StartMatch::SetMapSelections
==============
*/

void __fastcall DLogEvent_StartMatch::SetMapSelections(DLogEvent_StartMatch *this, const char *previousMap, const char *alternateMap, const char *randomMap)
{
  ?SetMapSelections@DLogEvent_StartMatch@@QEAAXPEBD00@Z(this, previousMap, alternateMap, randomMap);
}

/*
==============
DLogEvent_StartMatch::WriteEvent
==============
*/

bool __fastcall DLogEvent_StartMatch::WriteEvent(DLogEvent_StartMatch *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_StartMatch@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_StartMatch::SetMapSelections
==============
*/
void DLogEvent_StartMatch::SetMapSelections(DLogEvent_StartMatch *this, const char *previousMap, const char *alternateMap, const char *randomMap)
{
  Core_strcpy(this->previous_map, 0x20ui64, previousMap);
  Core_strcpy(this->alternate_map, 0x20ui64, alternateMap);
  Core_strcpy(this->random_map, 0x20ui64, randomMap);
}

/*
==============
DLogEvent_StartMatch::WriteEvent
==============
*/
bool DLogEvent_StartMatch::WriteEvent(DLogEvent_StartMatch *this, DLogContext *context)
{
  PartyData *PartyData; 
  int ControllerIndex; 
  char *Gametype; 
  bool v7; 
  int LocalMLGSpectator; 
  const dvar_t *v9; 
  bool v10; 
  StatsSource ActiveStatsSource; 
  bool v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  Online_Commerce *Instance; 
  Online_Commerce *v16; 
  bool v17; 
  Online_Commerce *v18; 
  bool HavePaidEntitlement; 
  bool IsCrossPlayEnabled; 
  bool v21; 
  bool IsGuest; 
  bool v23; 
  DWServicesAccess *v24; 
  bool v25; 
  unsigned __int64 v26; 
  bool IsClientActive; 
  unsigned __int64 v28; 
  bool v30; 
  bool HaveContentPack; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  unsigned __int8 vote; 
  unsigned __int8 ActiveGameMode; 
  bool v39; 
  bool v40; 
  bool enabled; 
  unsigned int CurrentMatchId; 
  unsigned __int64 connectionID; 
  DLogEvent_StartMatch *v44; 
  unsigned __int64 machineIdHigh; 
  unsigned __int64 machineIdLow; 
  char *value; 
  char *MapName; 
  char dest[8]; 
  __int64 v50; 
  char v51[8]; 
  __int64 v52; 
  char v53; 

  v44 = this;
  PartyData = Lobby_GetPartyData();
  ControllerIndex = DLogEvent_Base::GetControllerIndex(this);
  vote = PartyData->vote;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  MapName = (char *)Party_GetMapName();
  Gametype = (char *)Party_GetGametype();
  v7 = PartyData->areWeHost == 0;
  value = Gametype;
  v39 = !v7;
  LocalMLGSpectator = Party_GetLocalMLGSpectator(PartyData, ControllerIndex);
  v9 = DVARBOOL_xblive_competitionmatch;
  v40 = LocalMLGSpectator != 0;
  if ( !DVARBOOL_xblive_competitionmatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_competitionmatch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  enabled = v9->current.enabled;
  CurrentMatchId = GameBattles_GetCurrentMatchId();
  HaveContentPack = 0;
  v10 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerIndex);
  if ( LiveStorage_DoWeHaveStatsForSource(ControllerIndex, ActiveStatsSource) )
  {
    HaveContentPack = Content_DoWeHaveContentPack(8);
    v32 = Content_DoWeHaveContentPack(4);
    v33 = Content_DoWeHaveContentPack(32);
    v34 = Content_DoWeHaveContentPack(16);
    v35 = Content_DoWeHaveContentPack(64);
    v12 = Content_DoWeHaveContentPack(128);
    v13 = DVARBOOL_com_force_free_to_play;
    v36 = v12;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled )
      goto LABEL_25;
    v14 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
    {
      v10 = 1;
      goto LABEL_26;
    }
    if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    {
      v10 = 1;
      goto LABEL_26;
    }
    Instance = Online_Commerce::GetInstance();
    v17 = 1;
    if ( Online_Commerce::GetPaidEntitlementTaskState(Instance, ControllerIndex) != ENTITLEMENT_STATE_COMPLETE )
    {
      v16 = Online_Commerce::GetInstance();
      if ( Online_Commerce::GetPaidEntitlementTaskState(v16, ControllerIndex) != ENTITLEMENT_STATE_ERROR )
        v17 = 0;
    }
    v18 = Online_Commerce::GetInstance();
    HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v18, ControllerIndex);
    if ( Live_IsUserSignedInToLive(ControllerIndex) && v17 && HavePaidEntitlement )
      v10 = 1;
    else
LABEL_25:
      v10 = 0;
  }
LABEL_26:
  IsCrossPlayEnabled = Online_PlayerData_IsCrossPlayEnabled(ControllerIndex);
  v21 = Live_IsCrossPlayEnabled(ControllerIndex);
  IsGuest = Live_UserIsGuest(ControllerIndex);
  *(_QWORD *)dest = 0i64;
  v50 = 0i64;
  *(_QWORD *)v51 = 0i64;
  v52 = 0i64;
  v53 = 0;
  machineIdLow = 0i64;
  machineIdHigh = 0i64;
  if ( Live_GetMachineId(&machineIdLow, &machineIdHigh) )
  {
    Com_sprintf(dest, 0x11ui64, "%016zx", machineIdHigh);
    Com_sprintf(v51, 0x11ui64, "%016zx", machineIdLow);
  }
  v23 = Live_IsOnWifi();
  v24 = DWServicesAccess::GetInstance();
  v25 = DWServicesAccess::GetConnectionID(v24, ControllerIndex, &connectionID);
  v26 = connectionID;
  if ( !v25 )
    v26 = 0i64;
  IsClientActive = 0;
  connectionID = v26;
  if ( CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
    IsClientActive = CL_Mgr_IsClientActive(LOCAL_CLIENT_1);
  v28 = connectionID;
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  v30 = DLog_BeginEvent(context, "dlog_event_client_match_start");
  context->autoEndEvent = 1;
  return v30 && DLog_UInt8(context, "vote", vote) && DLog_UInt8(context, "game_mode", ActiveGameMode) && DLog_String(context, "game_type", value, 0) && DLog_String(context, "map", MapName, 0) && DLog_String(context, "previous_map", v44->previous_map, 0) && DLog_String(context, "alternate_map", v44->alternate_map, 0) && DLog_String(context, "random_map", v44->random_map, 0) && DLog_Bool(context, "host", v39) && DLog_Bool(context, "mlg_spectator", v40) && DLog_Bool(context, "cod_esports_rules", enabled) && DLog_UInt32(context, "mlg_gamebattle_matchid", CurrentMatchId) && DLog_Bool(context, "dlc_mp_content_pack", HaveContentPack) && DLog_Bool(context, "dlc_sp1_content_pack", v32) && DLog_Bool(context, "dlc_sp2_content_pack", v33) && DLog_Bool(context, "dlc_cp_content_pack", v34) && DLog_Bool(context, "dlc_cp2_content_pack", v35) && DLog_Bool(context, "dlc_cp3_content_pack", v36) && DLog_Bool(context, "has_crossplay_enabled", IsCrossPlayEnabled) && DLog_Bool(context, "crossplay_used_in_matchmaking", v21) && DLog_Bool(context, "is_guest", IsGuest) && DLog_String(context, "console_id", dest, 0) && DLog_Bool(context, "playing_on_wifi", v23) && DLog_UInt64(context, "dw_connection_id", v28) && DLog_Bool(context, "is_paid_user", v10) && DLog_Bool(context, "is_splitscreen", IsClientActive);
}

