/*
==============
DLogEvent_StartSession::WriteEvent
==============
*/

bool __fastcall DLogEvent_StartSession::WriteEvent(DLogEvent_StartSession *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_StartSession@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_StartSession::SetSessionParams
==============
*/

void __fastcall DLogEvent_StartSession::SetSessionParams(DLogEvent_StartSession *this, const unsigned __int64 startTime, const unsigned int uploadSpeed)
{
  ?SetSessionParams@DLogEvent_StartSession@@QEAAX_KI@Z(this, startTime, uploadSpeed);
}

/*
==============
DLogEvent_StartSession::SetSessionParams
==============
*/
void DLogEvent_StartSession::SetSessionParams(DLogEvent_StartSession *this, const unsigned __int64 startTime, const unsigned int uploadSpeed)
{
  this->utc_timestamp_start = startTime;
  this->bandwidth_up = uploadSpeed;
}

/*
==============
DLogEvent_StartSession::WriteEvent
==============
*/
bool DLogEvent_StartSession::WriteEvent(DLogEvent_StartSession *this, DLogContext *context)
{
  int ControllerIndex; 
  Online_Commerce *Instance; 
  int NumStoreEntitlements; 
  int v6; 
  int v7; 
  __int64 v8; 
  Online_Commerce *v9; 
  int DurableStoreEntitlementIdByIndex; 
  bool HaveContentPack; 
  bool v12; 
  StatsSource ActiveStatsSource; 
  bool v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  Online_Commerce *v17; 
  Online_Commerce *v18; 
  bool v19; 
  Online_Commerce *v20; 
  bool HavePaidEntitlement; 
  DWServicesAccess *v22; 
  bool v23; 
  unsigned __int64 v24; 
  bool HasOnlineSubscription; 
  unsigned __int64 v26; 
  unsigned int bandwidth_up; 
  unsigned __int64 utc_timestamp_start; 
  bool v30; 
  bool v31; 
  bool v32; 
  bool v33; 
  bool v34; 
  bool v35; 
  bool v36; 
  unsigned int navHashes; 
  unsigned __int64 connectionID; 
  DLogEvent_StartSession *v39; 
  char *value; 
  char *CurrentLanguageCode; 
  int values[60]; 

  v39 = this;
  ControllerIndex = DLogEvent_Base::GetControllerIndex(this);
  navHashes = DDL::DDL_HashString("mpTutorialLevel", 0);
  v36 = CL_PlayerData_GetInt(ControllerIndex, &navHashes, 1, STATSGROUP_RANKED) == 0;
  value = (char *)LiveRegionInfo_GetCountryCodeString();
  CurrentLanguageCode = (char *)SEH_GetCurrentLanguageCode();
  memset_0(values, 0, sizeof(values));
  Instance = Online_Commerce::GetInstance();
  NumStoreEntitlements = Online_Commerce::GetNumStoreEntitlements(Instance, ControllerIndex);
  v6 = 0;
  v7 = 0;
  if ( NumStoreEntitlements > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = Online_Commerce::GetInstance();
      DurableStoreEntitlementIdByIndex = Online_Commerce::GetDurableStoreEntitlementIdByIndex(v9, ControllerIndex, v7);
      if ( DurableStoreEntitlementIdByIndex != -1 )
      {
        if ( v8 >= 60 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_event_telemetry_start_session.cpp", 95, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "DLogEvent_StartSession::WriteEvent - we do NOT expect this many store entitlements!") )
            __debugbreak();
        }
        else
        {
          ++v6;
          values[v8++] = DurableStoreEntitlementIdByIndex;
        }
      }
      ++v7;
    }
    while ( v7 < NumStoreEntitlements );
  }
  HaveContentPack = 0;
  v31 = 0;
  v12 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerIndex);
  if ( LiveStorage_DoWeHaveStatsForSource(ControllerIndex, ActiveStatsSource) )
  {
    HaveContentPack = Content_DoWeHaveContentPack(8);
    v31 = Content_DoWeHaveContentPack(4);
    v32 = Content_DoWeHaveContentPack(32);
    v33 = Content_DoWeHaveContentPack(16);
    v34 = Content_DoWeHaveContentPack(64);
    v14 = Content_DoWeHaveContentPack(128);
    v15 = DVARBOOL_com_force_free_to_play;
    v35 = v14;
    if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
      goto LABEL_30;
    v16 = DVARBOOL_com_force_premium;
    if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      v12 = 1;
      goto LABEL_31;
    }
    if ( Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() )
    {
      v12 = 1;
      goto LABEL_31;
    }
    v17 = Online_Commerce::GetInstance();
    v19 = 1;
    if ( Online_Commerce::GetPaidEntitlementTaskState(v17, ControllerIndex) != ENTITLEMENT_STATE_COMPLETE )
    {
      v18 = Online_Commerce::GetInstance();
      if ( Online_Commerce::GetPaidEntitlementTaskState(v18, ControllerIndex) != ENTITLEMENT_STATE_ERROR )
        v19 = 0;
    }
    v20 = Online_Commerce::GetInstance();
    HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v20, ControllerIndex);
    if ( Live_IsUserSignedInToLive(ControllerIndex) && v19 && HavePaidEntitlement )
      v12 = 1;
    else
LABEL_30:
      v12 = 0;
  }
LABEL_31:
  v22 = DWServicesAccess::GetInstance();
  v23 = DWServicesAccess::GetConnectionID(v22, ControllerIndex, &connectionID);
  v24 = connectionID;
  if ( !v23 )
    v24 = 0i64;
  connectionID = v24;
  HasOnlineSubscription = Live_HasOnlineSubscription(ControllerIndex);
  v26 = connectionID;
  bandwidth_up = v39->bandwidth_up;
  utc_timestamp_start = v39->utc_timestamp_start;
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  v30 = DLog_BeginEvent(context, "dlog_event_session_start");
  context->autoEndEvent = 1;
  return v30 && DLog_UInt64(context, "utc_timestamp_start", utc_timestamp_start) && DLog_UInt32(context, "bandwidth_up", bandwidth_up) && DLog_Bool(context, "is_new", v36) && DLog_Bool(context, "is_igr", 0) && DLog_Bool(context, "is_igr_paid", 0) && DLog_String(context, "country_code", value, 0) && DLog_String(context, "language_code", CurrentLanguageCode, 0) && DLog_Int32Array(context, "durable_store_entitlement_ids", values, v6) && DLog_Bool(context, "dlc_mp_content_pack", HaveContentPack) && DLog_Bool(context, "dlc_sp1_content_pack", v31) && DLog_Bool(context, "dlc_sp2_content_pack", v32) && DLog_Bool(context, "dlc_cp_content_pack", v33) && DLog_Bool(context, "dlc_cp2_content_pack", v34) && DLog_Bool(context, "dlc_cp3_content_pack", v35) && DLog_UInt64(context, "dw_connection_id", v26) && DLog_Bool(context, "is_paid_user", v12) && DLog_Bool(context, "has_online_subscription", HasOnlineSubscription) && DLog_Bool(context, "has_crash_handler_failed", 0);
}

