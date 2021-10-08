/*
==============
DWWrappers::registerWrapperForPump
==============
*/

bool __fastcall DWWrappers::registerWrapperForPump(DWWrappers *this, BaseDWWrapper *wrapper)
{
  return ?registerWrapperForPump@DWWrappers@@QEAA_NAEAVBaseDWWrapper@@@Z(this, wrapper);
}

/*
==============
DWWrappers::DWWrappers
==============
*/

void __fastcall DWWrappers::DWWrappers(DWWrappers *this)
{
  ??0DWWrappers@@QEAA@XZ(this);
}

/*
==============
DWWrappers::DWWrappers
==============
*/
void DWWrappers::DWWrappers(DWWrappers *this)
{
  DWPublisherVariables *p_m_publisherVariables; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<24> *v4; 

  this->m_matchmaking.m_owningWrapper = NULL;
  this->m_matchmaking.__vftable = (DWMatchMaking_vtbl *)&DWMatchMaking::`vftable';
  this->m_asyncMatchmaking.m_owningWrapper = NULL;
  this->m_asyncMatchmaking.__vftable = (DWAsyncMatchMaking_vtbl *)&DWAsyncMatchMaking::`vftable';
  this->m_serverInventory.m_owningWrapper = NULL;
  this->m_serverInventory.__vftable = (DWServerInventory_vtbl *)&DWServerInventory::`vftable';
  this->m_storage.m_owningWrapper = NULL;
  this->m_storage.__vftable = (DWStorage_vtbl *)&DWStorage::`vftable';
  this->m_storage.m_contexts.m_size = 0i64;
  this->m_storage.m_unknownContext.m_context.m_string[0] = 0;
  this->m_storage.m_unknownContext.m_inUse = 0;
  this->m_storage.m_unknownContext.m_isUnknown = 1;
  this->m_objectStore.m_owningWrapper = NULL;
  this->m_objectStore.__vftable = (DWObjectStore_vtbl *)&DWObjectStore::`vftable';
  p_m_publisherVariables = &this->m_publisherVariables;
  this->m_publisherVariables.m_owningWrapper = NULL;
  this->m_publisherVariables.__vftable = (DWPublisherVariables_vtbl *)&DWPublisherVariables::`vftable';
  bdRetrievePublisherVariablesResponse::bdRetrievePublisherVariablesResponse(&this->m_publisherVariables.m_response);
  bdPublisherVariablesInfo::bdPublisherVariablesInfo(&p_m_publisherVariables->m_info);
  this->m_contentStreaming.m_owningWrapper = NULL;
  this->m_contentStreaming.__vftable = (DWContentStreaming_vtbl *)&DWContentStreaming::`vftable';
  this->m_pooledStorage.m_owningWrapper = NULL;
  this->m_pooledStorage.__vftable = (DWPooledStorage_vtbl *)&DWPooledStorage::`vftable';
  this->m_tags.m_owningWrapper = NULL;
  this->m_tags.__vftable = (DWTags_vtbl *)&DWTags::`vftable';
  this->m_voteRank.m_owningWrapper = NULL;
  this->m_voteRank.__vftable = (DWVoteRank_vtbl *)&DWVoteRank::`vftable';
  this->m_antiCheat.m_owningWrapper = NULL;
  this->m_antiCheat.__vftable = (DWAntiCheat_vtbl *)&DWAntiCheat::`vftable';
  this->m_mail.m_owningWrapper = NULL;
  this->m_mail.__vftable = (DWMail_vtbl *)&DWMail::`vftable';
  this->m_counter.m_owningWrapper = NULL;
  this->m_counter.__vftable = (DWCounter_vtbl *)&DWCounter::`vftable';
  this->m_richPresence.m_owningWrapper = NULL;
  this->m_richPresence.__vftable = (DWRichPresenceService_vtbl *)&DWRichPresenceService::`vftable';
  this->m_keyArchive.m_owningWrapper = NULL;
  this->m_keyArchive.__vftable = (DWKeyArchive_vtbl *)&DWKeyArchive::`vftable';
  this->m_teams.m_owningWrapper = NULL;
  this->m_teams.__vftable = (DWTeams_vtbl *)&DWTeams::`vftable';
  this->m_group.m_owningWrapper = NULL;
  this->m_group.__vftable = (DWGroup_vtbl *)&DWGroup::`vftable';
  this->m_profiles.m_owningWrapper = NULL;
  this->m_profiles.__vftable = (DWProfiles_vtbl *)&DWProfiles::`vftable';
  this->m_dml.m_owningWrapper = NULL;
  this->m_dml.__vftable = (DWDML_vtbl *)&DWDML::`vftable';
  this->m_ucd.m_owningWrapper = NULL;
  this->m_ucd.__vftable = (DWUCD_vtbl *)&DWUCD::`vftable';
  this->m_marketPlace.m_owningWrapper = NULL;
  this->m_marketPlace.__vftable = (DWMarketplace_vtbl *)&DWMarketplace::`vftable';
  this->m_achievementEngine.m_owningWrapper = NULL;
  this->m_achievementEngine.__vftable = (DWAchievementEngine_vtbl *)&DWAchievementEngine::`vftable';
  this->m_achievementEngineClient.m_owningWrapper = NULL;
  this->m_achievementEngineClient.__vftable = (DWAchievementEngineClient_vtbl *)&DWAchievementEngineClient::`vftable';
  this->m_reward.m_owningWrapper = NULL;
  this->m_reward.__vftable = (DWReward_vtbl *)&DWReward::`vftable';
  this->m_titleUtilities.m_owningWrapper = NULL;
  this->m_titleUtilities.__vftable = (DWTitleUtilities_vtbl *)&DWTitleUtilities::`vftable';
  this->m_stats.m_owningWrapper = NULL;
  this->m_stats.__vftable = (DWStats_vtbl *)&DWStats::`vftable';
  this->m_eventLog.m_owningWrapper = NULL;
  this->m_eventLog.__vftable = (DWEventLog_vtbl *)&DWEventLog::`vftable';
  this->m_eventLog.m_filteringInitialized = 0;
  this->m_eventLog.m_filteringTask.m_ptr = NULL;
  this->m_marketingComms.m_owningWrapper = NULL;
  this->m_marketingComms.__vftable = (DWMarketingComms_vtbl *)&DWMarketingComms::`vftable';
  this->m_matchScheduler.m_owningWrapper = NULL;
  this->m_matchScheduler.__vftable = (DWMatchScheduler_vtbl *)&DWMatchScheduler::`vftable';
  this->m_mlg.m_owningWrapper = NULL;
  this->m_mlg.__vftable = (DWMLG_vtbl *)&DWMLG::`vftable';
  this->m_messaging.m_owningWrapper = NULL;
  this->m_messaging.__vftable = (DWMessaging_vtbl *)&DWMessaging::`vftable';
  this->m_friends.m_owningWrapper = NULL;
  this->m_friends.__vftable = (DWFriends_vtbl *)&DWFriends::`vftable';
  this->m_userLists.m_owningWrapper = NULL;
  this->m_userLists.__vftable = (DWUserLists_vtbl *)&DWUserLists::`vftable';
  this->m_umbrella.m_owningWrapper = NULL;
  this->m_umbrella.__vftable = (DWUmbrella_vtbl *)&DWUmbrella::`vftable';
  this->m_uno.m_owningWrapper = NULL;
  this->m_uno.__vftable = (DWUno_vtbl *)&DWUno::`vftable';
  this->m_redeemableCodes.m_owningWrapper = NULL;
  this->m_redeemableCodes.__vftable = (DWRedeemableCodes_vtbl *)&DWRedeemableCodes::`vftable';
  this->m_authService.m_bInited = 0;
  this->m_authService.m_authService = NULL;
  this->m_crossPlatformIdentity.m_owningWrapper = NULL;
  this->m_crossPlatformIdentity.__vftable = (DWCrossPlatformIdentity_vtbl *)&DWCrossPlatformIdentity::`vftable';
  this->m_abTesting.m_owningWrapper = NULL;
  this->m_abTesting.__vftable = (DWABTesting_vtbl *)&DWABTesting::`vftable';
  this->m_lootGen.m_owningWrapper = NULL;
  this->m_lootGen.__vftable = (DWLootGen_vtbl *)&DWLootGen::`vftable';
  this->m_clans.m_owningWrapper = NULL;
  this->m_clans.__vftable = (DWClans_vtbl *)&DWClans::`vftable';
  this->m_regulations.m_owningWrapper = NULL;
  this->m_regulations.__vftable = (DWRegulations_vtbl *)&DWRegulations::`vftable';
  this->m_lobbyService.m_owningWrapper = NULL;
  this->m_lobbyService.__vftable = (DWLobbyService_vtbl *)&DWLobbyService::`vftable';
  this->m_lobbyService.m_loginService = NULL;
  this->m_lobbyService.m_hasCalledReportConsoleDetails = 0;
  this->m_isInited = 0;
  this->m_controllerIndex = -1;
  p_m_freelist = &this->m_wrapperPumpList.m_freelist;
  v4 = &this->m_wrapperPumpList.m_freelist;
  do
  {
    v4 -= 3;
    v4->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v4;
  }
  while ( v4 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_wrapperPumpList );
  this->m_wrapperPumpList.m_freelist.m_head.mp_next = &v4->m_head;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_wrapperPumpList.m_listHead.m_sentinel.mp_prev = &this->m_wrapperPumpList.m_listHead.m_sentinel;
  this->m_wrapperPumpList.m_listHead.m_sentinel.mp_next = &this->m_wrapperPumpList.m_listHead.m_sentinel;
}

/*
==============
DWWrappers::registerWrapperForPump
==============
*/
char DWWrappers::registerWrapperForPump(DWWrappers *this, BaseDWWrapper *wrapper)
{
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::list_node<BaseDWWrapper *> *mp_next; 

  p_m_freelist = &this->m_wrapperPumpList.m_freelist;
  if ( !this->m_wrapperPumpList.m_freelist.m_head.mp_next )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
  }
  if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 7ui64) )
    __debugbreak();
  mp_next = (ntl::internal::list_node<BaseDWWrapper *> *)p_m_freelist->m_head.mp_next;
  p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
  mp_next->mp_prev = NULL;
  mp_next->mp_next = NULL;
  mp_next->m_data = wrapper;
  ntl::internal::list_head_base<ntl::internal::list_node<BaseDWWrapper *>>::insert_before(&this->m_wrapperPumpList.m_listHead, (ntl::internal::list_node<BaseDWWrapper *> *)&this->m_wrapperPumpList.m_listHead, mp_next);
  return 1;
}

