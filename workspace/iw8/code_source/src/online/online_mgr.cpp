/*
==============
OnlineMgr::IsFullyOnline
==============
*/

bool __fastcall OnlineMgr::IsFullyOnline(OnlineMgr *this, const int controllerIndex)
{
  return ?IsFullyOnline@OnlineMgr@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineMgr::OnClientDeactivated
==============
*/

void __fastcall OnlineMgr::OnClientDeactivated(OnlineMgr *this, const int controllerIndex, const LocalClientNum_t localClientNum)
{
  ?OnClientDeactivated@OnlineMgr@@QEAAXHW4LocalClientNum_t@@@Z(this, controllerIndex, localClientNum);
}

/*
==============
OnlineMgr_HandleDemonwareMail
==============
*/

dwMailHandlerReturnCode_t __fastcall OnlineMgr_HandleDemonwareMail(const int controllerindex_in, const char *bufferptr_in, const int buffersize_in, bdMailInfo *mailInfo)
{
  return ?OnlineMgr_HandleDemonwareMail@@YA?AW4dwMailHandlerReturnCode_t@@HPEBDHPEAVbdMailInfo@@@Z(controllerindex_in, bufferptr_in, buffersize_in, mailInfo);
}

/*
==============
OnlineMgr::HandleDWInstantMessage
==============
*/

void __fastcall OnlineMgr::HandleDWInstantMessage(OnlineMgr *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message, unsigned int messageSize)
{
  ?HandleDWInstantMessage@OnlineMgr@@QEAAXH_KPEBD1I@Z(this, controllerIndex, senderID, senderName, message, messageSize);
}

/*
==============
OnlineMgr::ControllerFrame
==============
*/

void __fastcall OnlineMgr::ControllerFrame(OnlineMgr *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineMgr@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMgr::Uninit
==============
*/

void __fastcall OnlineMgr::Uninit(OnlineMgr *this)
{
  ?Uninit@OnlineMgr@@QEAAXXZ(this);
}

/*
==============
OnlineMgr::Unregister
==============
*/

OnlineSystem *__fastcall OnlineMgr::Unregister(OnlineMgr *this, OnlineSystem *system)
{
  return ?Unregister@OnlineMgr@@AEAAPEAVOnlineSystem@@PEAV2@@Z(this, system);
}

/*
==============
OnlineMgr::OnFrontEnd_FreeSystemsMemory
==============
*/

void __fastcall OnlineMgr::OnFrontEnd_FreeSystemsMemory(OnlineMgr *this)
{
  ?OnFrontEnd_FreeSystemsMemory@OnlineMgr@@QEAAXXZ(this);
}

/*
==============
OnlineMgr::Init
==============
*/

void __fastcall OnlineMgr::Init(OnlineMgr *this)
{
  ?Init@OnlineMgr@@QEAAXXZ(this);
}

/*
==============
OnlineMgr::OnUserStatsFetched
==============
*/

void __fastcall OnlineMgr::OnUserStatsFetched(OnlineMgr *this, const int controllerIndex, StatsSource statsSource)
{
  ?OnUserStatsFetched@OnlineMgr@@QEAAXHW4StatsSource@@@Z(this, controllerIndex, statsSource);
}

/*
==============
OnlineMgr::TryToStartSystems
==============
*/

void __fastcall OnlineMgr::TryToStartSystems(OnlineMgr *this, const int controllerIndex)
{
  ?TryToStartSystems@OnlineMgr@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMgr::CanStart
==============
*/

bool __fastcall OnlineMgr::CanStart(OnlineMgr *this, const int controllerIndex, ONLINE_DEPENDENCY_FLAGS flags)
{
  return ?CanStart@OnlineMgr@@AEAA_NHW4ONLINE_DEPENDENCY_FLAGS@@@Z(this, controllerIndex, flags);
}

/*
==============
OnlineMgr::OnFrontEnd_AllocateSystemsMemory
==============
*/

void __fastcall OnlineMgr::OnFrontEnd_AllocateSystemsMemory(OnlineMgr *this)
{
  ?OnFrontEnd_AllocateSystemsMemory@OnlineMgr@@QEAAXXZ(this);
}

/*
==============
OnlineMgr::Frame
==============
*/

void __fastcall OnlineMgr::Frame(OnlineMgr *this)
{
  ?Frame@OnlineMgr@@QEAAXXZ(this);
}

/*
==============
OnlineMgr::OnClientActivated
==============
*/

void __fastcall OnlineMgr::OnClientActivated(OnlineMgr *this, const int controllerIndex, const LocalClientNum_t localClientNum)
{
  ?OnClientActivated@OnlineMgr@@QEAAXHW4LocalClientNum_t@@@Z(this, controllerIndex, localClientNum);
}

/*
==============
OnlineMgr::OnSignedOut
==============
*/

void __fastcall OnlineMgr::OnSignedOut(OnlineMgr *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineMgr@@QEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineMgr::ShowOnlineStatus
==============
*/

void __fastcall OnlineMgr::ShowOnlineStatus(OnlineMgr *this, const int controllerIndex, const char *system_name)
{
  ?ShowOnlineStatus@OnlineMgr@@QEAAXHPEBD@Z(this, controllerIndex, system_name);
}

/*
==============
OnlineMgr::Register
==============
*/

void __fastcall OnlineMgr::Register(OnlineMgr *this, OnlineSystem *system, const char *name, const char (*message_header)[8], ONLINE_DEPENDENCY_FLAGS flags)
{
  ?Register@OnlineMgr@@AEAAXPEAVOnlineSystem@@PEBDAEAY07$$CBDW4ONLINE_DEPENDENCY_FLAGS@@@Z(this, system, name, message_header, flags);
}

/*
==============
OnlineMgr::HandleDWMail
==============
*/

void __fastcall OnlineMgr::HandleDWMail(OnlineMgr *this, const int controllerIndex, const char *msg, const int msg_size, bdMailInfo *mailInfo)
{
  ?HandleDWMail@OnlineMgr@@QEAAXHPEBDHPEAVbdMailInfo@@@Z(this, controllerIndex, msg, msg_size, mailInfo);
}

/*
==============
OnlineMgr::RegisterLuaFunctions
==============
*/

void __fastcall OnlineMgr::RegisterLuaFunctions(OnlineMgr *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineMgr@@QEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineMgr::OnSignedIn
==============
*/

void __fastcall OnlineMgr::OnSignedIn(OnlineMgr *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineMgr@@QEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineMgr::UnregisterAll
==============
*/

void __fastcall OnlineMgr::UnregisterAll(OnlineMgr *this)
{
  ?UnregisterAll@OnlineMgr@@AEAAXXZ(this);
}

/*
==============
OnlineMgr::OnDisconnect
==============
*/

void __fastcall OnlineMgr::OnDisconnect(OnlineMgr *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineMgr@@QEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineMgr::CanStart
==============
*/
bool OnlineMgr::CanStart(OnlineMgr *this, const int controllerIndex, ONLINE_DEPENDENCY_FLAGS flags)
{
  char v3; 

  v3 = flags;
  return ((flags & 1) == 0 || Live_IsSignedIn(controllerIndex)) && ((v3 & 2) == 0 || Live_IsUserSignedInToLive(controllerIndex)) && ((v3 & 4) == 0 || dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED) && ((v3 & 8) == 0 || CL_Mgr_IsControllerMappedToClient(controllerIndex, NULL));
}

/*
==============
OnlineMgr::ControllerFrame
==============
*/
void OnlineMgr::ControllerFrame(OnlineMgr *this, const int controllerIndex)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->ControllerFrame(i, controllerIndex);
  }
}

/*
==============
OnlineMgr::Frame
==============
*/
void OnlineMgr::Frame(OnlineMgr *this)
{
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  OnlineSystem *i; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 34856);
  if ( (unsigned int)(*((_DWORD *)Value + 8714) + 1) >= 3 )
  {
    v13 = 3;
    v11 = *((_DWORD *)Value + 8714) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(v12) = 3;
    LODWORD(v10) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = &v3[*v3 + 2];
  v7 = __rdtsc();
  *v6 = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 819, NULL, 0);
  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->Frame(i);
  }
  Profile_EndInternal(NULL);
}

/*
==============
OnlineMgr::HandleDWInstantMessage
==============
*/
void OnlineMgr::HandleDWInstantMessage(OnlineMgr *this, const int controllerIndex, unsigned __int64 senderID, const char *senderName, const char *message, unsigned int messageSize)
{
  OnlineSystem *i; 
  ONLINE_DEPENDENCY_FLAGS m_dependencyFlags; 
  char *m_msgHeaderName; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  __int64 v16; 
  char v17; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 713, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( message )
  {
    for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
    {
      m_dependencyFlags = i->m_dependencyFlags;
      if ( ((m_dependencyFlags & 1) == 0 || Live_IsSignedIn(controllerIndex)) && ((m_dependencyFlags & 2) == 0 || Live_IsUserSignedInToLive(controllerIndex)) && ((m_dependencyFlags & 4) == 0 || dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED) && ((m_dependencyFlags & 8) == 0 || CL_Mgr_IsControllerMappedToClient(controllerIndex, NULL)) )
      {
        m_msgHeaderName = i->m_msgHeaderName;
        v13 = 5i64;
        if ( i == (OnlineSystem *)-53i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v14 = (const char *)(message - m_msgHeaderName);
        do
        {
          v15 = m_msgHeaderName[(_QWORD)v14];
          v16 = v13;
          v17 = *m_msgHeaderName++;
          --v13;
          if ( !v16 )
            break;
          if ( v15 != v17 )
            goto LABEL_22;
        }
        while ( v15 );
        i->OnDWInstantMessage(i, controllerIndex, senderID, senderName, message, messageSize);
      }
LABEL_22:
      ;
    }
  }
}

/*
==============
OnlineMgr::HandleDWMail
==============
*/
void OnlineMgr::HandleDWMail(OnlineMgr *this, const int controllerIndex, const char *msg, const int msg_size, bdMailInfo *mailInfo)
{
  OnlineSystem *i; 
  ONLINE_DEPENDENCY_FLAGS m_dependencyFlags; 
  char *m_msgHeaderName; 
  __int64 v12; 
  const char *v13; 
  char v14; 
  __int64 v15; 
  char v16; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( msg )
  {
    for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
    {
      m_dependencyFlags = i->m_dependencyFlags;
      if ( ((m_dependencyFlags & 1) == 0 || Live_IsSignedIn(controllerIndex)) && ((m_dependencyFlags & 2) == 0 || Live_IsUserSignedInToLive(controllerIndex)) && ((m_dependencyFlags & 4) == 0 || dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED) && ((m_dependencyFlags & 8) == 0 || CL_Mgr_IsControllerMappedToClient(controllerIndex, NULL)) )
      {
        m_msgHeaderName = i->m_msgHeaderName;
        v12 = 5i64;
        if ( i == (OnlineSystem *)-53i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v13 = (const char *)(msg - m_msgHeaderName);
        do
        {
          v14 = m_msgHeaderName[(_QWORD)v13];
          v15 = v12;
          v16 = *m_msgHeaderName++;
          --v12;
          if ( !v15 )
            break;
          if ( v14 != v16 )
            goto LABEL_22;
        }
        while ( v14 );
        i->OnDWMail(i, controllerIndex, msg, msg_size, mailInfo);
      }
LABEL_22:
      ;
    }
  }
}

/*
==============
OnlineMgr::Init
==============
*/
void OnlineMgr::Init(OnlineMgr *this)
{
  PublisherVariableManager *InstancePtr; 
  Online_Loot *v3; 
  Online_BlockList *v4; 
  Online_PatchStreamer *v5; 
  Online_CachedContentStreamer *v6; 
  Online_ErrorReporting *v7; 
  Online_Commerce *v8; 
  Online_Upsell *v9; 
  Online_Dailylogin *v10; 
  Online_DailyChurnLogin *v11; 
  Online_LootCrate *v12; 
  Online_GunSmith *v13; 
  Online_VideoStreaming *v14; 
  OnlineTimeSeriesLog *v15; 
  Online_Redeemables *v16; 
  MarketingCommsManager *Instance; 
  Online_HardwareSurvey *v18; 
  Online_BandwidthTest *v19; 
  Online_MetPlayer *v20; 
  OnlineChatManager *v21; 
  Online_Friends *v22; 
  OnlineChallengesManager *v23; 
  OnlineStorage *v24; 
  OnlineOperatorChallenges *v25; 
  OnlineProgression *v26; 
  OnlineCommunityChallenges *v27; 
  OnlineScheduledChallenges *v28; 
  OnlineTrials *v29; 
  OnlineQuests *v30; 
  OnlineBattlepass *v31; 
  OnlineStickerBookChallenges *v32; 
  OnlineMiscChallenges *v33; 
  Online_InvitationManager *v34; 
  OnlineUserLists *v35; 
  Online_AAR *v36; 
  Online_AB_Testing *v37; 
  Online_AccountRegistration *v38; 
  Online_CommsAssetLoader *v39; 
  Online_Store *v40; 
  OnlineClansManager *v41; 
  OnlinePresenceNotifications *v42; 
  Online_Regulations *v43; 
  char message_header[8]; 

  if ( !this->m_bInitialized )
  {
    if ( !DWServicesAccess::init(&this->m_dwServiceAccess) )
      Com_PrintError(25, "Failed to initialize the demonware service access object.\n");
    InstancePtr = PublisherVariableManager::GetInstancePtr();
    OnlineMgr::Register(this, InstancePtr, "publishervariables", (const char (*)[8])PUBLISHER_VARIABLES_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v3 = Online_Loot::GetInstancePtr();
    OnlineMgr::Register(this, v3, "loot", (const char (*)[8])LOOT_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_HAS_CLIENT|ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v4 = Online_BlockList::GetInstancePtr();
    OnlineMgr::Register(this, v4, "blocklist", (const char (*)[8])BLOCKLIST_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_LIVE);
    v5 = Online_PatchStreamer::GetInstancePtr();
    OnlineMgr::Register(this, v5, "patchstreamer", (const char (*)[8])PS_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v6 = Online_CachedContentStreamer::GetInstancePtr();
    OnlineMgr::Register(this, v6, "cachedcontentstreamer", (const char (*)[8])CCS_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v7 = Online_ErrorReporting::GetInstancePtr();
    OnlineMgr::Register(this, v7, "onlineerrorreporting", (const char (*)[8])"ONLERR:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v8 = Online_Commerce::GetInstancePtr();
    OnlineMgr::Register(this, v8, "commerce", (const char (*)[8])COMMERCE_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v9 = Online_Upsell::GetInstancePtr();
    OnlineMgr::Register(this, v9, "upsell", (const char (*)[8])UPSELL_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_LIVE);
    v10 = Online_Dailylogin::GetInstancePtr();
    OnlineMgr::Register(this, v10, "dailylogin", (const char (*)[8])DAILY_LOGIN_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v11 = Online_DailyChurnLogin::GetInstancePtr();
    OnlineMgr::Register(this, v11, "dailychurnlogin", (const char (*)[8])DAILY_CHURN_LOGIN_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v12 = Online_LootCrate::GetInstancePtr();
    OnlineMgr::Register(this, v12, "lootcrate", (const char (*)[8])LOOT_CRATES_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v13 = Online_GunSmith::GetInstancePtr();
    OnlineMgr::Register(this, v13, "gunsmith", (const char (*)[8])GUNSMITH_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v14 = Online_VideoStreaming::GetInstancePtr();
    OnlineMgr::Register(this, v14, "videostreaming", (const char (*)[8])"VIDSTM:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    memset(message_header, 0, sizeof(message_header));
    v15 = OnlineTimeSeriesLog::Get();
    OnlineMgr::Register(this, v15, "logging_timeseries", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    memset(message_header, 0, sizeof(message_header));
    OnlineMgr::Register(this, &QosPayload::ms_qosPayload, "qos", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v16 = Online_Redeemables::GetInstancePtr();
    OnlineMgr::Register(this, v16, "redeemables", (const char (*)[8])"REDEEM:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    Instance = MarketingCommsManager::GetInstance();
    OnlineMgr::Register(this, Instance, "CRM_manager", (const char (*)[8])CRM_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v18 = Online_HardwareSurvey::GetInstance();
    OnlineMgr::Register(this, v18, "hardwaresurvey", (const char (*)[8])HARDWARE_SURVEY_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v19 = Online_BandwidthTest::GetInstance();
    OnlineMgr::Register(this, v19, "bandwidthtest", (const char (*)[8])"BWTEST:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v20 = Online_MetPlayer::GetInstance();
    OnlineMgr::Register(this, v20, "metplayer", (const char (*)[8])ONLINE_METPLATER_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v21 = OnlineChatManager::GetInstance();
    OnlineMgr::Register(this, v21, "onlinechat", (const char (*)[8])ONLINE_CHAT_MANAGER_MESSAGE_HEADER_0, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v22 = Online_Friends::GetInstance();
    OnlineMgr::Register(this, v22, "friends", (const char (*)[8])ONLINE_FRIENDS_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_HAS_CLIENT|ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v23 = OnlineChallengesManager::GetInstancePtr();
    OnlineMgr::Register(this, v23, "socialchallenges", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_HAS_CLIENT|ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v24 = OnlineStorage::GetInstancePtr();
    OnlineMgr::Register(this, v24, "storage", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v25 = OnlineOperatorChallenges::GetInstancePtr();
    OnlineMgr::Register(this, v25, "op_challenges", (const char (*)[8])OPERATOR_CHALLENGES_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v26 = OnlineProgression::GetInstancePtr();
    OnlineMgr::Register(this, v26, "progression", (const char (*)[8])PROGRESSION_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v27 = OnlineCommunityChallenges::GetInstancePtr();
    OnlineMgr::Register(this, v27, "com_challenges", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v28 = OnlineScheduledChallenges::GetInstancePtr();
    OnlineMgr::Register(this, v28, "sched_challenges", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v29 = OnlineTrials::GetInstancePtr();
    OnlineMgr::Register(this, v29, "trials", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v30 = OnlineQuests::GetInstancePtr();
    OnlineMgr::Register(this, v30, "quests", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v31 = OnlineBattlepass::GetInstancePtr();
    OnlineMgr::Register(this, v31, "battlepass", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v32 = OnlineStickerBookChallenges::GetInstancePtr();
    OnlineMgr::Register(this, v32, "sticker_book_challenges", (const char (*)[8])STICKER_BOOK_CHALLENGES_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v33 = OnlineMiscChallenges::GetInstancePtr();
    OnlineMgr::Register(this, v33, "misc_challenges", (const char (*)[8])MISC_CHALLENGES_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    dwMail_RegisterHandler(1, OnlineMgr_HandleDemonwareMail, NULL);
    dwMail_Enable(1);
    Dvar_BeginPermanentRegistration();
    this->analyticsFnFMode = Dvar_RegisterBool("MLSSTQTOPO", 0, 0, "DEV ONLY: Used to send extra data and perform deeper analytics during FnF");
    Dvar_EndPermanentRegistration();
    Cmd_AddCommandInternal("showOnlineStatus", OnlineMgr_ShowOnlineStatus_f, &OnlineMgr_ShowOnlineStatus_f_VAR);
    v34 = Online_InvitationManager::GetInstance();
    OnlineMgr::Register(this, v34, "online_invitations_manager", (const char (*)[8])ONLINE_INVITATION_MESSAGE_HEADER_1, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v35 = OnlineUserLists::GetInstance();
    OnlineMgr::Register(this, v35, "online_userlists", (const char (*)[8])"USRLST:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v36 = Online_AAR::GetInstance();
    OnlineMgr::Register(this, v36, "online_aar", (const char (*)[8])AAR_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v37 = Online_AB_Testing::GetInstance();
    OnlineMgr::Register(this, v37, "online_ab_testing", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v38 = Online_AccountRegistration::GetInstance();
    OnlineMgr::Register(this, v38, "online_accountRegistration", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_LOCALLY);
    v39 = Online_CommsAssetLoader::GetInstance();
    OnlineMgr::Register(this, v39, "online_commsassetloader", (const char (*)[8])ONLINE_COMMS_ASSET_LOADER_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v40 = Online_Store::GetInstance();
    OnlineMgr::Register(this, v40, "online_store", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v41 = OnlineClansManager::GetInstance();
    OnlineMgr::Register(this, v41, "online_clans_manager", (const char (*)[8])ONLINE_CLANS_MESSAGE_HEADER, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    v42 = OnlinePresenceNotifications::GetInstance();
    OnlineMgr::Register(this, v42, "online_presence_notifications", (const char (*)[8])"PRESNC:", ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    memset(message_header, 0, sizeof(message_header));
    v43 = Online_Regulations::GetInstancePtr();
    OnlineMgr::Register(this, v43, "online_regulations", (const char (*)[8])message_header, ONLINE_DEPENDENCY_FLAG_AUTH_CONNECTED_TO_DW);
    this->m_bInitialized = 1;
  }
}

/*
==============
OnlineMgr::IsFullyOnline
==============
*/
bool OnlineMgr::IsFullyOnline(OnlineMgr *this, const int controllerIndex)
{
  bool IsUserSignedInToLive; 
  DWServicesAccess *Instance; 
  bool isReady; 

  IsUserSignedInToLive = Live_IsUserSignedInToLive(controllerIndex);
  Instance = DWServicesAccess::GetInstance();
  isReady = DWServicesAccess::isReady(Instance, controllerIndex);
  return IsUserSignedInToLive && isReady;
}

/*
==============
OnlineMgr::OnClientActivated
==============
*/
void OnlineMgr::OnClientActivated(OnlineMgr *this, const int controllerIndex, const LocalClientNum_t localClientNum)
{
  OnlineSystem *i; 

  OnlineMgr::TryToStartSystems(this, controllerIndex);
  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnSignedIn(i, controllerIndex, SignedInToLocalClient);
  }
}

/*
==============
OnlineMgr::OnClientDeactivated
==============
*/
void OnlineMgr::OnClientDeactivated(OnlineMgr *this, const int controllerIndex, const LocalClientNum_t localClientNum)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnSignedOut(i, controllerIndex, SignedOutFromLocalClient);
  }
}

/*
==============
OnlineMgr::OnDisconnect
==============
*/
void OnlineMgr::OnDisconnect(OnlineMgr *this, ONLINE_DISCONNECT reason)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnDisconnect(i, reason);
  }
}

/*
==============
OnlineMgr::OnFrontEnd_AllocateSystemsMemory
==============
*/
void OnlineMgr::OnFrontEnd_AllocateSystemsMemory(OnlineMgr *this)
{
  OnlineSystem *i; 

  if ( !this->m_bInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 399, ASSERT_TYPE_ASSERT, "(m_bInitialized)", (const char *)&queryFormat, "m_bInitialized") )
    __debugbreak();
  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
    i->OnFrontEnd_AllocateSystemsMemory(i);
}

/*
==============
OnlineMgr::OnFrontEnd_FreeSystemsMemory
==============
*/
void OnlineMgr::OnFrontEnd_FreeSystemsMemory(OnlineMgr *this)
{
  OnlineSystem *i; 

  if ( !this->m_bInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 413, ASSERT_TYPE_ASSERT, "(m_bInitialized)", (const char *)&queryFormat, "m_bInitialized") )
    __debugbreak();
  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
    i->OnFrontEnd_FreeSystemsMemory(i);
}

/*
==============
OnlineMgr::OnSignedIn
==============
*/
void OnlineMgr::OnSignedIn(OnlineMgr *this, const int controllerIndex, GenericSignInState signinState)
{
  OnlineSystem *i; 

  OnlineMgr::TryToStartSystems(this, controllerIndex);
  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnSignedIn(i, controllerIndex, signinState);
  }
}

/*
==============
OnlineMgr::OnSignedOut
==============
*/
void OnlineMgr::OnSignedOut(OnlineMgr *this, const int controllerIndex, GenericSignOutState signOutState)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnSignedOut(i, controllerIndex, signOutState);
  }
}

/*
==============
OnlineMgr::OnUserStatsFetched
==============
*/
void OnlineMgr::OnUserStatsFetched(OnlineMgr *this, const int controllerIndex, StatsSource statsSource)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( i->m_initialized )
      i->OnUserStatsFetched(i, controllerIndex, statsSource);
  }
}

/*
==============
OnlineMgr_HandleDemonwareMail
==============
*/
__int64 OnlineMgr_HandleDemonwareMail(const int controllerindex_in, const char *bufferptr_in, const int buffersize_in, bdMailInfo *mailInfo)
{
  OnlineSystem *m_firstSystem; 
  ONLINE_DEPENDENCY_FLAGS m_dependencyFlags; 
  char *m_msgHeaderName; 
  __int64 v11; 
  const char *v12; 
  char v13; 
  __int64 v14; 
  char v15; 

  if ( (unsigned int)controllerindex_in >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 183, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerindex_in, 8) )
    __debugbreak();
  if ( !bufferptr_in )
    return 2i64;
  m_firstSystem = g_onlineMgr.m_firstSystem;
  if ( !g_onlineMgr.m_firstSystem )
    return 2i64;
  do
  {
    m_dependencyFlags = m_firstSystem->m_dependencyFlags;
    if ( ((m_dependencyFlags & 1) == 0 || Live_IsSignedIn(controllerindex_in)) && ((m_dependencyFlags & 2) == 0 || Live_IsUserSignedInToLive(controllerindex_in)) && ((m_dependencyFlags & 4) == 0 || dwGetLogOnStatus(controllerindex_in) == DW_LIVE_CONNECTED) && ((m_dependencyFlags & 8) == 0 || CL_Mgr_IsControllerMappedToClient(controllerindex_in, NULL)) )
    {
      m_msgHeaderName = m_firstSystem->m_msgHeaderName;
      v11 = 5i64;
      if ( m_firstSystem == (OnlineSystem *)-53i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v12 = (const char *)(bufferptr_in - m_msgHeaderName);
      do
      {
        v13 = m_msgHeaderName[(_QWORD)v12];
        v14 = v11;
        v15 = *m_msgHeaderName++;
        --v11;
        if ( !v14 )
          break;
        if ( v13 != v15 )
          goto LABEL_22;
      }
      while ( v13 );
      m_firstSystem->OnDWMail(m_firstSystem, controllerindex_in, bufferptr_in, buffersize_in, mailInfo);
    }
LABEL_22:
    m_firstSystem = m_firstSystem->m_nextSystem;
  }
  while ( m_firstSystem );
  return 2i64;
}

/*
==============
OnlineMgr_ShowOnlineStatus_f
==============
*/
void OnlineMgr_ShowOnlineStatus_f()
{
  unsigned int v0; 
  const char *v1; 
  int v2; 
  __int64 v3; 
  OnlineSystem *m_firstSystem; 
  bool i; 
  char *m_name; 
  __int64 v7; 
  signed __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_ArgInt(1);
    if ( v0 > 7 )
    {
      Com_PrintError(25, "Invalid controller, usage: showOnlineStatus <controller> <system_name|all>.\n");
    }
    else
    {
      v1 = Cmd_Argv(2);
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 693, ASSERT_TYPE_ASSERT, "(system_name)", (const char *)&queryFormat, "system_name") )
        __debugbreak();
      v2 = I_stricmp(v1, "all");
      m_firstSystem = g_onlineMgr.m_firstSystem;
      for ( i = v2 == 0; m_firstSystem; m_firstSystem = m_firstSystem->m_nextSystem )
      {
        if ( !i )
        {
          m_name = m_firstSystem->m_name;
          v7 = 0x7FFFFFFFi64;
          if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( m_firstSystem == (OnlineSystem *)-21i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v8 = v1 - m_name;
          do
          {
            v9 = (unsigned __int8)m_name[v8];
            v10 = v7;
            v3 = (unsigned __int8)*m_name++;
            --v7;
            if ( !v10 )
              break;
            if ( v9 != (_DWORD)v3 )
            {
              v11 = v9 + 32;
              if ( (unsigned int)(v9 - 65) > 0x19 )
                v11 = v9;
              v9 = v11;
              v12 = v3 + 32;
              if ( (unsigned int)(v3 - 65) > 0x19 )
                v12 = v3;
              if ( v9 != v12 )
                goto LABEL_25;
            }
          }
          while ( v9 );
        }
        ((void (__fastcall *)(OnlineSystem *, _QWORD, __int64))m_firstSystem->OutputCurrentState)(m_firstSystem, v0, v3);
LABEL_25:
        ;
      }
    }
  }
  else
  {
    Com_PrintError(25, "Not the correct amount of params, usage: showOnlineStatus <controller> <system_name|all>.\n");
  }
}

/*
==============
OnlineMgr::Register
==============
*/
void OnlineMgr::Register(OnlineMgr *this, OnlineSystem *system, const char *name, const char (*message_header)[8], ONLINE_DEPENDENCY_FLAGS flags)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 549, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  v9 = -1i64;
  v10 = -1i64;
  do
    ++v10;
  while ( name[v10] );
  if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", v10) )
    __debugbreak();
  if ( (unsigned int)v10 >= 0x20 )
  {
    do
      ++v9;
    while ( name[v9] );
    if ( v9 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v9, "unsigned", v9) )
      __debugbreak();
    LODWORD(v12) = 32;
    LODWORD(v11) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 550, ASSERT_TYPE_ASSERT, "( truncate_cast<uint>( strlen( name ) ) ) < ( 32 )", "%s < %s\n\t%u, %u", "truncate_cast<uint>( strlen( name ) )", "MAX_ONLINE_SYSTEM_NAME", v11, v12) )
      __debugbreak();
  }
  if ( this->m_firstSystem )
  {
    OnlineSystem::SetNextSystem(this->m_currentSystem, system);
  }
  else
  {
    if ( this->m_currentSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 554, ASSERT_TYPE_ASSERT, "(m_currentSystem == nullptr)", (const char *)&queryFormat, "m_currentSystem == nullptr") )
      __debugbreak();
    this->m_firstSystem = system;
  }
  this->m_currentSystem = system;
  system->m_dependencyFlags = flags;
  Core_strcpy(this->m_currentSystem->m_name, 0x20ui64, name);
  Core_strcpy(this->m_currentSystem->m_msgHeaderName, 8ui64, (const char *)message_header);
  this->m_currentSystem->OnRegistered(this->m_currentSystem);
}

/*
==============
OnlineMgr::RegisterLuaFunctions
==============
*/
void OnlineMgr::RegisterLuaFunctions(OnlineMgr *this, lua_State *luaVM)
{
  OnlineSystem *i; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
    i->RegisterLuaFunctions(i, luaVM);
}

/*
==============
OnlineMgr::ShowOnlineStatus
==============
*/
void OnlineMgr::ShowOnlineStatus(OnlineMgr *this, const int controllerIndex, const char *system_name)
{
  int v6; 
  __int64 v7; 
  OnlineSystem *m_firstSystem; 
  bool i; 
  char *m_name; 
  __int64 v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 

  if ( !system_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 693, ASSERT_TYPE_ASSERT, "(system_name)", (const char *)&queryFormat, "system_name") )
    __debugbreak();
  v6 = I_stricmp(system_name, "all");
  m_firstSystem = this->m_firstSystem;
  for ( i = v6 == 0; m_firstSystem; m_firstSystem = m_firstSystem->m_nextSystem )
  {
    if ( !i )
    {
      m_name = m_firstSystem->m_name;
      v11 = 0x7FFFFFFFi64;
      if ( !system_name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( m_firstSystem == (OnlineSystem *)-21i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v12 = (const char *)(system_name - m_name);
      do
      {
        v13 = (unsigned __int8)m_name[(_QWORD)v12];
        v14 = v11;
        v7 = (unsigned __int8)*m_name++;
        --v11;
        if ( !v14 )
          break;
        if ( v13 != (_DWORD)v7 )
        {
          v15 = v13 + 32;
          if ( (unsigned int)(v13 - 65) > 0x19 )
            v15 = v13;
          v13 = v15;
          v16 = v7 + 32;
          if ( (unsigned int)(v7 - 65) > 0x19 )
            v16 = v7;
          if ( v13 != v16 )
            goto LABEL_22;
        }
      }
      while ( v13 );
    }
    ((void (__fastcall *)(OnlineSystem *, _QWORD, __int64))m_firstSystem->OutputCurrentState)(m_firstSystem, (unsigned int)controllerIndex, v7);
LABEL_22:
    ;
  }
}

/*
==============
OnlineMgr::TryToStartSystems
==============
*/
void OnlineMgr::TryToStartSystems(OnlineMgr *this, const int controllerIndex)
{
  OnlineSystem *i; 
  ONLINE_DEPENDENCY_FLAGS m_dependencyFlags; 

  for ( i = this->m_firstSystem; i; i = i->m_nextSystem )
  {
    if ( !i->m_initialized )
    {
      m_dependencyFlags = i->m_dependencyFlags;
      if ( ((m_dependencyFlags & 1) == 0 || Live_IsSignedIn(controllerIndex)) && ((m_dependencyFlags & 2) == 0 || Live_IsUserSignedInToLive(controllerIndex)) && ((m_dependencyFlags & 4) == 0 || dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED) && ((m_dependencyFlags & 8) == 0 || CL_Mgr_IsControllerMappedToClient(controllerIndex, NULL)) && i->Init(i) )
        i->m_initialized = 1;
    }
  }
}

/*
==============
OnlineMgr::Uninit
==============
*/
void OnlineMgr::Uninit(OnlineMgr *this)
{
  OnlineSystem *m_firstSystem; 
  OnlineSystem *v3; 
  OnlineSystem *m_nextSystem; 
  OnlineSystem *v5; 

  if ( this->m_bInitialized )
  {
    m_firstSystem = this->m_firstSystem;
    if ( m_firstSystem )
    {
      do
      {
        if ( m_firstSystem->m_initialized )
          m_firstSystem->Uninit(m_firstSystem);
        m_firstSystem = m_firstSystem->m_nextSystem;
      }
      while ( m_firstSystem );
      v3 = this->m_firstSystem;
      if ( v3 )
      {
        do
        {
          if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 572, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
            __debugbreak();
          m_nextSystem = NULL;
          if ( v3 )
          {
            v5 = this->m_firstSystem;
            m_nextSystem = v3->m_nextSystem;
            if ( v3 == v5 )
            {
              this->m_firstSystem = m_nextSystem;
            }
            else if ( v5 )
            {
              while ( v5->m_nextSystem != v3 )
                m_nextSystem = v5->m_nextSystem;
              OnlineSystem::SetNextSystem(v5, m_nextSystem);
            }
            v3->OnUnregistered(v3);
          }
          v3 = m_nextSystem;
        }
        while ( m_nextSystem );
      }
    }
    this->m_bInitialized = 0;
  }
}

/*
==============
OnlineMgr::Unregister
==============
*/
OnlineSystem *OnlineMgr::Unregister(OnlineMgr *this, OnlineSystem *system)
{
  OnlineSystem *m_firstSystem; 
  OnlineSystem *m_nextSystem; 

  if ( !system && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 572, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( !system )
    return 0i64;
  m_firstSystem = this->m_firstSystem;
  m_nextSystem = system->m_nextSystem;
  if ( system == m_firstSystem )
  {
    this->m_firstSystem = m_nextSystem;
  }
  else if ( m_firstSystem )
  {
    while ( m_firstSystem->m_nextSystem != system )
      m_nextSystem = m_firstSystem->m_nextSystem;
    OnlineSystem::SetNextSystem(m_firstSystem, m_nextSystem);
  }
  system->OnUnregistered(system);
  return m_nextSystem;
}

/*
==============
OnlineMgr::UnregisterAll
==============
*/
void OnlineMgr::UnregisterAll(OnlineMgr *this)
{
  OnlineSystem *m_firstSystem; 
  OnlineSystem *m_nextSystem; 
  OnlineSystem *v4; 

  m_firstSystem = this->m_firstSystem;
  if ( m_firstSystem )
  {
    do
    {
      if ( !m_firstSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_mgr.cpp", 572, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
        __debugbreak();
      m_nextSystem = NULL;
      if ( m_firstSystem )
      {
        v4 = this->m_firstSystem;
        m_nextSystem = m_firstSystem->m_nextSystem;
        if ( m_firstSystem == v4 )
        {
          this->m_firstSystem = m_nextSystem;
        }
        else if ( v4 )
        {
          while ( v4->m_nextSystem != m_firstSystem )
            m_nextSystem = v4->m_nextSystem;
          OnlineSystem::SetNextSystem(v4, m_nextSystem);
        }
        m_firstSystem->OnUnregistered(m_firstSystem);
      }
      m_firstSystem = m_nextSystem;
    }
    while ( m_nextSystem );
  }
}

