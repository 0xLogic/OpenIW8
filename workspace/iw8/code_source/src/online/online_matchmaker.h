/*
==============
MatchMakerOmniLobbyData::MatchMakerOmniLobbyData
==============
*/

void __fastcall MatchMakerOmniLobbyData::MatchMakerOmniLobbyData(MatchMakerOmniLobbyData *this)
{
  ??0MatchMakerOmniLobbyData@@QEAA@XZ(this);
}

/*
==============
OnlineMatchmakerOmniscient::OnlineMatchmakerOmniscient
==============
*/

void __fastcall OnlineMatchmakerOmniscient::OnlineMatchmakerOmniscient(OnlineMatchmakerOmniscient *this)
{
  ??0OnlineMatchmakerOmniscient@@QEAA@XZ(this);
}

/*
==============
MatchMakerOmniLobbyData::MatchMakerOmniLobbyData
==============
*/
void MatchMakerOmniLobbyData::MatchMakerOmniLobbyData(MatchMakerOmniLobbyData *this)
{
  XSECURITY_INFO *p_m_security; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<24> *v4; 
  ntl::internal::pool_allocator_freelist<32> *v5; 
  ntl::internal::pool_allocator_freelist<32> *v6; 
  ntl::internal::pool_allocator_freelist<32> *v7; 
  ntl::internal::pool_allocator_freelist<32> *v8; 
  ntl::internal::pool_allocator_freelist<32> *v9; 
  ntl::internal::pool_allocator_freelist<32> *v10; 
  ntl::internal::pool_allocator_freelist<32> *v11; 
  ntl::internal::pool_allocator_freelist<32> *v12; 
  ntl::internal::pool_allocator_freelist<32> *v13; 
  ntl::internal::pool_allocator_freelist<32> *v14; 
  ntl::internal::pool_allocator_freelist<24> *v15; 
  ntl::internal::pool_allocator_freelist<24> *v16; 
  ntl::internal::pool_allocator_freelist<24> *v17; 
  ntl::internal::pool_allocator_freelist<24> *v18; 
  ntl::internal::pool_allocator_freelist<32> *v19; 
  ntl::internal::pool_allocator_freelist<32> *v20; 
  ntl::internal::pool_allocator_freelist<24> *v21; 
  ntl::internal::pool_allocator_freelist<24> *v22; 

  *(_DWORD *)&this->m_canGameStart = 0;
  this->m_lobbyDocIsDirty = 0;
  *(_QWORD *)&this->m_timeToUpdateIfDirty = 0i64;
  this->m_lobbyid = 0i64;
  this->m_updateId = 0i64;
  this->m_hostUID = 0i64;
  p_m_security = &this->m_hostAddress.m_security;
  bdSecurityID::bdSecurityID(&this->m_hostAddress.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&p_m_security->m_key);
  bdSecurityID::bdSecurityID(&this->m_keyId);
  bdSecurityKey::bdSecurityKey(&this->m_key);
  this->m_playList = 0;
  this->m_tournamentID = 0i64;
  *(_QWORD *)&this->m_tournamentAlliesTeam = 0i64;
  this->m_privateMatchId.m_id = 0i64;
  this->m_amITheLobbyHost = 0;
  p_m_freelist = &this->m_expectedPlayers.m_freelist;
  v4 = &this->m_expectedPlayers.m_freelist;
  do
  {
    v4 -= 3;
    v4->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v4;
  }
  while ( v4 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_expectedPlayers );
  this->m_expectedPlayers.m_freelist.m_head.mp_next = &v4->m_head;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_expectedPlayers.m_listHead.m_sentinel.mp_prev = &this->m_expectedPlayers.m_listHead.m_sentinel;
  this->m_expectedPlayers.m_listHead.m_sentinel.mp_next = &this->m_expectedPlayers.m_listHead.m_sentinel;
  v5 = &this->m_playerStatusList.m_freelist;
  v6 = &this->m_playerStatusList.m_freelist;
  do
  {
    v6 -= 4;
    v6->m_head.mp_next = &v5->m_head;
    v5 = v6;
  }
  while ( v6 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_playerStatusList );
  this->m_playerStatusList.m_freelist.m_head.mp_next = &v6->m_head;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_playerStatusList.m_listHead.m_sentinel.mp_prev = &this->m_playerStatusList.m_listHead.m_sentinel;
  this->m_playerStatusList.m_listHead.m_sentinel.mp_next = &this->m_playerStatusList.m_listHead.m_sentinel;
  v7 = &this->m_teamAssignmentList.m_freelist;
  v8 = &this->m_teamAssignmentList.m_freelist;
  do
  {
    v8 -= 4;
    v8->m_head.mp_next = &v7->m_head;
    v7 = v8;
  }
  while ( v8 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_teamAssignmentList );
  this->m_teamAssignmentList.m_freelist.m_head.mp_next = &v8->m_head;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_teamAssignmentList.m_listHead.m_sentinel.mp_prev = &this->m_teamAssignmentList.m_listHead.m_sentinel;
  this->m_teamAssignmentList.m_listHead.m_sentinel.mp_next = &this->m_teamAssignmentList.m_listHead.m_sentinel;
  v9 = &this->m_squadAssignmentList.m_freelist;
  v10 = &this->m_squadAssignmentList.m_freelist;
  do
  {
    v10 -= 4;
    v10->m_head.mp_next = &v9->m_head;
    v9 = v10;
  }
  while ( v10 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_squadAssignmentList );
  this->m_squadAssignmentList.m_freelist.m_head.mp_next = &v10->m_head;
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_squadAssignmentList.m_listHead.m_sentinel.mp_prev = &this->m_squadAssignmentList.m_listHead.m_sentinel;
  this->m_squadAssignmentList.m_listHead.m_sentinel.mp_next = &this->m_squadAssignmentList.m_listHead.m_sentinel;
  v11 = &this->m_matchmakingIdList.m_freelist;
  v12 = &this->m_matchmakingIdList.m_freelist;
  do
  {
    v12 -= 4;
    v12->m_head.mp_next = &v11->m_head;
    v11 = v12;
  }
  while ( v12 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_matchmakingIdList );
  this->m_matchmakingIdList.m_freelist.m_head.mp_next = &v12->m_head;
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_matchmakingIdList.m_listHead.m_sentinel.mp_prev = &this->m_matchmakingIdList.m_listHead.m_sentinel;
  this->m_matchmakingIdList.m_listHead.m_sentinel.mp_next = &this->m_matchmakingIdList.m_listHead.m_sentinel;
  v13 = &this->m_performanceValueList.m_freelist;
  v14 = &this->m_performanceValueList.m_freelist;
  do
  {
    v14 -= 4;
    v14->m_head.mp_next = &v13->m_head;
    v13 = v14;
  }
  while ( v14 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_performanceValueList );
  this->m_performanceValueList.m_freelist.m_head.mp_next = &v14->m_head;
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_performanceValueList.m_listHead.m_sentinel.mp_prev = &this->m_performanceValueList.m_listHead.m_sentinel;
  this->m_performanceValueList.m_listHead.m_sentinel.mp_next = &this->m_performanceValueList.m_listHead.m_sentinel;
  v15 = &this->m_paidUsersList.m_freelist;
  v16 = &this->m_paidUsersList.m_freelist;
  do
  {
    v16 -= 3;
    v16->m_head.mp_next = &v15->m_head;
    v15 = v16;
  }
  while ( v16 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_paidUsersList );
  this->m_paidUsersList.m_freelist.m_head.mp_next = &v16->m_head;
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_paidUsersList.m_listHead.m_sentinel.mp_prev = &this->m_paidUsersList.m_listHead.m_sentinel;
  this->m_paidUsersList.m_listHead.m_sentinel.mp_next = &this->m_paidUsersList.m_listHead.m_sentinel;
  v17 = &this->m_freemiumUsersList.m_freelist;
  v18 = &this->m_freemiumUsersList.m_freelist;
  do
  {
    v18 -= 3;
    v18->m_head.mp_next = &v17->m_head;
    v17 = v18;
  }
  while ( v18 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_freemiumUsersList );
  this->m_freemiumUsersList.m_freelist.m_head.mp_next = &v18->m_head;
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_freemiumUsersList.m_listHead.m_sentinel.mp_prev = &this->m_freemiumUsersList.m_listHead.m_sentinel;
  this->m_freemiumUsersList.m_listHead.m_sentinel.mp_next = &this->m_freemiumUsersList.m_listHead.m_sentinel;
  v19 = &this->m_additionalSlotsRequestedList.m_freelist;
  v20 = &this->m_additionalSlotsRequestedList.m_freelist;
  do
  {
    v20 -= 4;
    v20->m_head.mp_next = &v19->m_head;
    v19 = v20;
  }
  while ( v20 > (ntl::internal::pool_allocator_freelist<32> *)&this->m_additionalSlotsRequestedList );
  this->m_additionalSlotsRequestedList.m_freelist.m_head.mp_next = &v20->m_head;
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_additionalSlotsRequestedList.m_listHead.m_sentinel.mp_prev = &this->m_additionalSlotsRequestedList.m_listHead.m_sentinel;
  this->m_additionalSlotsRequestedList.m_listHead.m_sentinel.mp_next = &this->m_additionalSlotsRequestedList.m_listHead.m_sentinel;
  v21 = &this->m_migrationList.m_freelist;
  v22 = &this->m_migrationList.m_freelist;
  do
  {
    v22 -= 3;
    v22->m_head.mp_next = &v21->m_head;
    v21 = v22;
  }
  while ( v22 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_migrationList );
  this->m_migrationList.m_freelist.m_head.mp_next = &v22->m_head;
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_migrationList.m_listHead.m_sentinel.mp_prev = &this->m_migrationList.m_listHead.m_sentinel;
  this->m_migrationList.m_listHead.m_sentinel.mp_next = &this->m_migrationList.m_listHead.m_sentinel;
  this->m_qosing = 0;
  this->m_numQoses = 0;
  this->m_gameid = 0;
  *(_WORD *)&this->m_shouldBackfill_JIP = 257;
  this->m_acceptLobbyMerges = 1;
  bdBoolResult::bdBoolResult(&this->m_syncLobbyDocsResult);
  this->m_dwTimestampOfLastUpdate = 0i64;
  bdDataCenterPreferences::bdDataCenterPreferences(&this->m_dcPrefs);
  this->m_isGameInProgress = 0;
  this->m_performanceGameType = eGAME_TYPE_MULTIPLAYER;
  this->m_dcPrefs.m_numDataCenterPreferences = 0;
  this->m_mapWeights[0].mapIndex = 255;
  this->m_mapWeights[1].mapIndex = 255;
  this->m_mapWeights[2].mapIndex = 255;
  this->m_mapWeights[3].mapIndex = 255;
  this->m_mapWeights[4].mapIndex = 255;
  this->m_mapWeights[5].mapIndex = 255;
  this->m_mapWeights[6].mapIndex = 255;
  this->m_mapWeights[7].mapIndex = 255;
  this->m_mapWeights[8].mapIndex = 255;
  this->m_mapWeights[9].mapIndex = 255;
  this->m_mapWeights[10].mapIndex = 255;
  this->m_mapWeights[11].mapIndex = 255;
  this->m_mapWeights[12].mapIndex = 255;
  this->m_mapWeights[13].mapIndex = 255;
  this->m_mapWeights[14].mapIndex = 255;
  this->m_mapWeights[15].mapIndex = 255;
  this->m_mapWeights[16].mapIndex = 255;
  this->m_mapWeights[17].mapIndex = 255;
  this->m_mapWeights[18].mapIndex = 255;
  this->m_mapWeights[19].mapIndex = 255;
  this->m_mapName[0] = 0;
  this->m_modeName[0] = 0;
}

/*
==============
OnlineMatchmakerOmniscient::OnlineMatchmakerOmniscient
==============
*/
void OnlineMatchmakerOmniscient::OnlineMatchmakerOmniscient(OnlineMatchmakerOmniscient *this)
{
  ntl::fixed_list<OnlineMatchmakerOmniscient::Player,200,0> *p_m_playerList; 
  ntl::internal::pool_allocator_freelist<232> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<232> *v4; 
  ntl::internal::pool_allocator_freelist<24> *v5; 
  ntl::internal::pool_allocator_freelist<24> *v6; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::list_head_base<ntl::internal::list_node<PingBand> > *p_m_listHead; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v9; 

  this->m_state = eIDLE;
  this->m_controllerIndex = -1;
  p_m_playerList = &this->m_playerList;
  p_m_freelist = &this->m_playerList.m_freelist;
  v4 = &p_m_playerList->m_freelist;
  do
  {
    v4 -= 29;
    v4->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v4;
  }
  while ( v4 > (ntl::internal::pool_allocator_freelist<232> *)p_m_playerList );
  p_m_playerList->m_freelist.m_head.mp_next = &v4->m_head;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  p_m_playerList->m_listHead.m_sentinel.mp_prev = &p_m_playerList->m_listHead.m_sentinel;
  p_m_playerList->m_listHead.m_sentinel.mp_next = &p_m_playerList->m_listHead.m_sentinel;
  bdStringResult::bdStringResult(&this->m_response);
  bdBoolResult::bdBoolResult(&this->m_mmingData.m_outstandingResult);
  v5 = &this->m_mmingData.m_pingBands.m_freelist;
  v6 = &this->m_mmingData.m_pingBands.m_freelist;
  do
  {
    v6 -= 3;
    v6->m_head.mp_next = &v5->m_head;
    v5 = v6;
  }
  while ( v6 > (ntl::internal::pool_allocator_freelist<24> *)&this->m_mmingData.m_pingBands );
  this->m_mmingData.m_pingBands.m_freelist.m_head.mp_next = &v6->m_head;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  this->m_mmingData.m_pingBands.m_listHead.m_sentinel.mp_prev = &this->m_mmingData.m_pingBands.m_listHead.m_sentinel;
  this->m_mmingData.m_pingBands.m_listHead.m_sentinel.mp_next = &this->m_mmingData.m_pingBands.m_listHead.m_sentinel;
  this->m_mmingData.m_matchmakingId = 0i64;
  this->m_mmingData.m_timeOut = 0;
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_mmingData.m_pingBands.m_listHead.m_sentinel.mp_next;
  p_m_listHead = &this->m_mmingData.m_pingBands.m_listHead;
  if ( mp_next != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)&this->m_mmingData.m_pingBands.m_listHead )
  {
    do
    {
      v9 = mp_next[1].mp_next;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)this->m_mmingData.m_pingBands.m_freelist.m_head;
      this->m_mmingData.m_pingBands.m_freelist.m_head.mp_next = mp_next;
      mp_next = v9;
    }
    while ( v9 != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_listHead );
  }
  p_m_listHead->m_sentinel.mp_prev = &p_m_listHead->m_sentinel;
  this->m_mmingData.m_pingBands.m_listHead.m_sentinel.mp_next = &this->m_mmingData.m_pingBands.m_listHead.m_sentinel;
  *(_WORD *)&this->m_mmingData.m_firstTime = 1;
  MatchMakerOmniLobbyData::MatchMakerOmniLobbyData(&this->m_lobbyData);
  bdLobbyDocuments::bdLobbyDocuments(&this->m_lobbyDocuments);
  this->m_params.m_localControllerIndex = -1;
  *(_QWORD *)&this->m_params.m_playlistId = 0i64;
  *(_QWORD *)&this->m_params.m_playlistVersion = 0i64;
  *(_QWORD *)&this->m_params.m_minPlayerNeeded = 0i64;
  this->m_params.m_tournamentTeamSize = 0;
  this->m_params.m_inviteLocalJoiningControllerIndex = -1;
  XUID::NullXUID(&this->m_params.m_inviteClientAttemptingToJoinUID);
  this->m_params.m_lobbyIdToJoin = 0i64;
  this->m_params.m_gameType = eGAME_TYPE_MULTIPLAYER;
  this->m_params.m_privateMatchId.m_id = 0i64;
  Qos::Qos(&this->m_qos);
  OnlineMatchmakerTelemetry::OnlineMatchmakerTelemetry(&this->m_telemetry);
  this->m_callbacks.m_createLobbyCallback = NULL;
  this->m_callbacks.m_joinLobbyCallback = NULL;
  this->m_callbacks.m_lobbyUpdatedCallback = NULL;
  this->m_callbacks.m_lobbyDisbandedCallback = NULL;
  this->m_callbacks.m_failureCallback = NULL;
  this->m_callbacks.m_tokenUpdateCallback = NULL;
  this->m_callbacks.m_inviteCallback = NULL;
  this->m_callbacks.m_inviteData = NULL;
  *(_QWORD *)&this->m_callbacks.m_lastLobbyStateCallbackMade = 0i64;
  *(_WORD *)&this->m_callbacks.m_callbackWasSuccessful[4] = 0;
  this->m_callbacks.m_callbackWasSuccessful[6] = 0;
  this->m_callbacks.m_outstandingCallback = 0;
  this->m_eventHandler.__vftable = (OnlineAsyncMatchmakingEventHandler_vtbl *)&OnlineAsyncMatchmakingEventHandler::`vftable';
}

