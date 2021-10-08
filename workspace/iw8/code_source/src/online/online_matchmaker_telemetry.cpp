/*
==============
OnlineMatchmakerTelemetry::MatchEnd
==============
*/

void __fastcall OnlineMatchmakerTelemetry::MatchEnd(OnlineMatchmakerTelemetry *this)
{
  ?MatchEnd@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::StartSearch
==============
*/

void __fastcall OnlineMatchmakerTelemetry::StartSearch(OnlineMatchmakerTelemetry *this, const OmniscientMatchmakingParams *params)
{
  ?StartSearch@OnlineMatchmakerTelemetry@@QEAAXPEBUOmniscientMatchmakingParams@@@Z(this, params);
}

/*
==============
OnlineMatchmakerTelemetry::CreateNewLobby
==============
*/

void __fastcall OnlineMatchmakerTelemetry::CreateNewLobby(OnlineMatchmakerTelemetry *this, const unsigned __int64 createLobbyUpdateId)
{
  ?CreateNewLobby@OnlineMatchmakerTelemetry@@QEAAX_K@Z(this, createLobbyUpdateId);
}

/*
==============
OnlineMatchmakerTelemetry::OnlineMatchmakerTelemetry
==============
*/

void __fastcall OnlineMatchmakerTelemetry::OnlineMatchmakerTelemetry(OnlineMatchmakerTelemetry *this)
{
  ??0OnlineMatchmakerTelemetry@@QEAA@XZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::LobbyMerge
==============
*/

void __fastcall OnlineMatchmakerTelemetry::LobbyMerge(OnlineMatchmakerTelemetry *this)
{
  ?LobbyMerge@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::ResetLobby
==============
*/

void __fastcall OnlineMatchmakerTelemetry::ResetLobby(OnlineMatchmakerTelemetry *this)
{
  ?ResetLobby@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::AddPlayer
==============
*/

void __fastcall OnlineMatchmakerTelemetry::AddPlayer(OnlineMatchmakerTelemetry *this, const XUID xuid)
{
  ?AddPlayer@OnlineMatchmakerTelemetry@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
OnlineMatchmakerTelemetry::StartSearchComplete
==============
*/

void __fastcall OnlineMatchmakerTelemetry::StartSearchComplete(OnlineMatchmakerTelemetry *this, const unsigned __int64 matchmakingId)
{
  ?StartSearchComplete@OnlineMatchmakerTelemetry@@QEAAX_K@Z(this, matchmakingId);
}

/*
==============
OnlineMatchmakerTelemetry::JoinLobbyFailed
==============
*/

void __fastcall OnlineMatchmakerTelemetry::JoinLobbyFailed(OnlineMatchmakerTelemetry *this)
{
  ?JoinLobbyFailed@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::RemovePlayer
==============
*/

void __fastcall OnlineMatchmakerTelemetry::RemovePlayer(OnlineMatchmakerTelemetry *this, const XUID xuid)
{
  ?RemovePlayer@OnlineMatchmakerTelemetry@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
OnlineMatchmakerTelemetry::Init
==============
*/

void __fastcall OnlineMatchmakerTelemetry::Init(OnlineMatchmakerTelemetry *this, const int controllerIndex)
{
  ?Init@OnlineMatchmakerTelemetry@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMatchmakerTelemetry::StartIntermission
==============
*/

void __fastcall OnlineMatchmakerTelemetry::StartIntermission(OnlineMatchmakerTelemetry *this)
{
  ?StartIntermission@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::LobbyMigration
==============
*/

void __fastcall OnlineMatchmakerTelemetry::LobbyMigration(OnlineMatchmakerTelemetry *this)
{
  ?LobbyMigration@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::MatchStart
==============
*/

void __fastcall OnlineMatchmakerTelemetry::MatchStart(OnlineMatchmakerTelemetry *this)
{
  ?MatchStart@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::ShouldSend
==============
*/

bool __fastcall OnlineMatchmakerTelemetry::ShouldSend(OnlineMatchmakerTelemetry *this, const OnlineMatchmakerTelemetry::EventType eventType)
{
  return ?ShouldSend@OnlineMatchmakerTelemetry@@AEBA_NW4EventType@1@@Z(this, eventType);
}

/*
==============
OnlineMatchmakerTelemetry::JoinLobby
==============
*/

void __fastcall OnlineMatchmakerTelemetry::JoinLobby(OnlineMatchmakerTelemetry *this)
{
  ?JoinLobby@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::Cancel
==============
*/

void __fastcall OnlineMatchmakerTelemetry::Cancel(OnlineMatchmakerTelemetry *this)
{
  ?Cancel@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::DisbandLobby
==============
*/

void __fastcall OnlineMatchmakerTelemetry::DisbandLobby(OnlineMatchmakerTelemetry *this)
{
  ?DisbandLobby@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::ResetMatchmaking
==============
*/

void __fastcall OnlineMatchmakerTelemetry::ResetMatchmaking(OnlineMatchmakerTelemetry *this)
{
  ?ResetMatchmaking@OnlineMatchmakerTelemetry@@QEAAXXZ(this);
}

/*
==============
OnlineMatchmakerTelemetry::OnlineMatchmakerTelemetry
==============
*/
void OnlineMatchmakerTelemetry::OnlineMatchmakerTelemetry(OnlineMatchmakerTelemetry *this)
{
  this->m_initialized = 0;
  this->m_events[0] = &s_searchSummary;
  this->m_events[1] = &s_partyToMatch;
  this->m_events[2] = &s_intermission;
}

/*
==============
OnlineMatchmakerTelemetry::AddPlayer
==============
*/
void OnlineMatchmakerTelemetry::AddPlayer(OnlineMatchmakerTelemetry *this, const XUID xuid)
{
  signed __int64 v2; 
  __int64 i; 

  v2 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8) + 128i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8), xuid.m_id);
  }
}

/*
==============
OnlineMatchmakerTelemetry::Cancel
==============
*/
void OnlineMatchmakerTelemetry::Cancel(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 112i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::CreateNewLobby
==============
*/
void OnlineMatchmakerTelemetry::CreateNewLobby(OnlineMatchmakerTelemetry *this, const unsigned __int64 createLobbyUpdateId)
{
  signed __int64 v2; 
  __int64 i; 

  v2 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD, const unsigned __int64))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8) + 56i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8), createLobbyUpdateId);
  }
}

/*
==============
OnlineMatchmakerTelemetry::DisbandLobby
==============
*/
void OnlineMatchmakerTelemetry::DisbandLobby(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 64i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::Init
==============
*/
void OnlineMatchmakerTelemetry::Init(OnlineMatchmakerTelemetry *this, const int controllerIndex)
{
  DLogEvent_Base **m_events; 
  __int64 v5; 

  m_events = this->m_events;
  v5 = 3i64;
  do
  {
    DLogEvent_Base::Init(*m_events++, controllerIndex);
    --v5;
  }
  while ( v5 );
  this->m_initialized = 1;
}

/*
==============
OnlineMatchmakerTelemetry::JoinLobby
==============
*/
void OnlineMatchmakerTelemetry::JoinLobby(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 32i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::JoinLobbyFailed
==============
*/
void OnlineMatchmakerTelemetry::JoinLobbyFailed(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 40i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::LobbyMerge
==============
*/
void OnlineMatchmakerTelemetry::LobbyMerge(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 96i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::LobbyMigration
==============
*/
void OnlineMatchmakerTelemetry::LobbyMigration(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 104i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::MatchEnd
==============
*/
void OnlineMatchmakerTelemetry::MatchEnd(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 80i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::MatchStart
==============
*/
void OnlineMatchmakerTelemetry::MatchStart(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 72i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::RemovePlayer
==============
*/
void OnlineMatchmakerTelemetry::RemovePlayer(OnlineMatchmakerTelemetry *this, const XUID xuid)
{
  signed __int64 v2; 
  __int64 i; 

  v2 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8) + 136i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8), xuid.m_id);
  }
}

/*
==============
OnlineMatchmakerTelemetry::ResetLobby
==============
*/
void OnlineMatchmakerTelemetry::ResetLobby(OnlineMatchmakerTelemetry *this)
{
  DLogEvent_MMBase **m_events; 
  __int64 v2; 

  m_events = this->m_events;
  v2 = 3i64;
  do
  {
    (*m_events)->ResetLobby(*m_events);
    ++m_events;
    --v2;
  }
  while ( v2 );
}

/*
==============
OnlineMatchmakerTelemetry::ResetMatchmaking
==============
*/
void OnlineMatchmakerTelemetry::ResetMatchmaking(OnlineMatchmakerTelemetry *this)
{
  DLogEvent_MMBase **m_events; 
  __int64 v2; 

  m_events = this->m_events;
  v2 = 3i64;
  do
  {
    (*m_events)->ResetMatchmaking(*m_events);
    ++m_events;
    --v2;
  }
  while ( v2 );
}

/*
==============
OnlineMatchmakerTelemetry::ShouldSend
==============
*/
bool OnlineMatchmakerTelemetry::ShouldSend(OnlineMatchmakerTelemetry *this, const OnlineMatchmakerTelemetry::EventType eventType)
{
  __int64 v2; 

  v2 = eventType;
  return this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[v2].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[v2].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance));
}

/*
==============
OnlineMatchmakerTelemetry::StartIntermission
==============
*/
void OnlineMatchmakerTelemetry::StartIntermission(OnlineMatchmakerTelemetry *this)
{
  signed __int64 v1; 
  __int64 i; 

  v1 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8) + 88i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v1 + i * 8));
  }
}

/*
==============
OnlineMatchmakerTelemetry::StartSearch
==============
*/
void OnlineMatchmakerTelemetry::StartSearch(OnlineMatchmakerTelemetry *this, const OmniscientMatchmakingParams *params)
{
  signed __int64 v2; 
  __int64 i; 

  v2 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD, const OmniscientMatchmakingParams *))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8) + 16i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8), params);
  }
}

/*
==============
OnlineMatchmakerTelemetry::StartSearchComplete
==============
*/
void OnlineMatchmakerTelemetry::StartSearchComplete(OnlineMatchmakerTelemetry *this, const unsigned __int64 matchmakingId)
{
  signed __int64 v2; 
  __int64 i; 

  v2 = (char *)this - (char *)&OnlineMatchmakerTelemetry::m_eventPermissions[0].privatePartyHost;
  for ( i = 0i64; i < 3; ++i )
  {
    if ( this->m_initialized && (OnlineMatchmakerTelemetry::m_eventPermissions[i].privatePartyHost && Party_AreWeHost(&g_partyData) || OnlineMatchmakerTelemetry::m_eventPermissions[i].lobbyHost && OnlineMatchmakerOmniscient::AmIHost(&OnlineMatchmakerOmniscient::ms_instance)) )
      (*(void (__fastcall **)(_QWORD, const unsigned __int64))(**(_QWORD **)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8) + 24i64))(*(_QWORD *)(&OnlineMatchmakerTelemetry::m_eventPermissions[1].privatePartyHost + v2 + i * 8), matchmakingId);
  }
}

