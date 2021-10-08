/*
==============
DLogEvent_MMPartyMembers<24>::Add
==============
*/

void __fastcall DLogEvent_MMPartyMembers<24>::Add(DLogEvent_MMPartyMembers<24> *this, const XUID xuid)
{
  ?Add@?$DLogEvent_MMPartyMembers@$0BI@@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
DLogEvent_MMPartyToMatch::CurrentSearch
==============
*/

DLogEvent_MMPartyToMatch::Search *__fastcall DLogEvent_MMPartyToMatch::CurrentSearch(DLogEvent_MMPartyToMatch *this)
{
  return ?CurrentSearch@DLogEvent_MMPartyToMatch@@IEAAPEAVSearch@1@XZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::WriteEvent
==============
*/

bool __fastcall DLogEvent_MMIntermissionSummary::WriteEvent(DLogEvent_MMIntermissionSummary *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_MMIntermissionSummary@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_MMSearchSummary::WriteEvent
==============
*/

bool __fastcall DLogEvent_MMSearchSummary::WriteEvent(DLogEvent_MMSearchSummary *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_MMSearchSummary@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_MMIntermissionSummary::RemovePlayer
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::RemovePlayer(DLogEvent_MMIntermissionSummary *this, const XUID xuid)
{
  ?RemovePlayer@DLogEvent_MMIntermissionSummary@@UEAAXUXUID@@@Z(this, xuid);
}

/*
==============
DLogEvent_MMPartyToMatch::JoinLobby
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::JoinLobby(DLogEvent_MMPartyToMatch *this)
{
  ?JoinLobby@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyMembers<24>::WriteEvent
==============
*/

bool __fastcall DLogEvent_MMPartyMembers<24>::WriteEvent(DLogEvent_MMPartyMembers<24> *this, DLogContext *context)
{
  return ?WriteEvent@?$DLogEvent_MMPartyMembers@$0BI@@@QEBA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_MMPartyToMatch::JoinLobbyFailed
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::JoinLobbyFailed(DLogEvent_MMPartyToMatch *this)
{
  ?JoinLobbyFailed@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::AddPlayer
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::AddPlayer(DLogEvent_MMIntermissionSummary *this, const XUID xuid)
{
  ?AddPlayer@DLogEvent_MMIntermissionSummary@@UEAAXUXUID@@@Z(this, xuid);
}

/*
==============
DLogEvent_MMIntermissionSummary::ResetLobby
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::ResetLobby(DLogEvent_MMIntermissionSummary *this)
{
  ?ResetLobby@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::Cancel
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::Cancel(DLogEvent_MMPartyToMatch *this)
{
  ?Cancel@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyMigration
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::LobbyMigration(DLogEvent_MMIntermissionSummary *this)
{
  ?LobbyMigration@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::MatchEnd
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::MatchEnd(DLogEvent_MMIntermissionSummary *this)
{
  ?MatchEnd@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::MatchStart
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::MatchStart(DLogEvent_MMIntermissionSummary *this)
{
  ?MatchStart@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::ResetData
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::ResetData(DLogEvent_MMPartyToMatch *this)
{
  ?ResetData@DLogEvent_MMPartyToMatch@@MEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::StartSearch
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::StartSearch(DLogEvent_MMPartyToMatch *this, const OmniscientMatchmakingParams *params)
{
  ?StartSearch@DLogEvent_MMPartyToMatch@@UEAAXPEBUOmniscientMatchmakingParams@@@Z(this, params);
}

/*
==============
DLogEvent_MMPartyMembers<24>::FillFromParty
==============
*/

void __fastcall DLogEvent_MMPartyMembers<24>::FillFromParty(DLogEvent_MMPartyMembers<24> *this, const PartyData *party)
{
  ?FillFromParty@?$DLogEvent_MMPartyMembers@$0BI@@@QEAAXPEBUPartyData@@@Z(this, party);
}

/*
==============
DLogEvent_MMSearchSummary::StartSearch
==============
*/

void __fastcall DLogEvent_MMSearchSummary::StartSearch(DLogEvent_MMSearchSummary *this, const OmniscientMatchmakingParams *params)
{
  ?StartSearch@DLogEvent_MMSearchSummary@@UEAAXPEBUOmniscientMatchmakingParams@@@Z(this, params);
}

/*
==============
DLogEvent_MMIntermissionSummary::SoftResetData
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::SoftResetData(DLogEvent_MMIntermissionSummary *this)
{
  ?SoftResetData@DLogEvent_MMIntermissionSummary@@AEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::MatchStart
==============
*/

void __fastcall DLogEvent_MMSearchSummary::MatchStart(DLogEvent_MMSearchSummary *this)
{
  ?MatchStart@DLogEvent_MMSearchSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::NextSearch
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::NextSearch(DLogEvent_MMPartyToMatch *this)
{
  ?NextSearch@DLogEvent_MMPartyToMatch@@IEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::ResetData
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::ResetData(DLogEvent_MMIntermissionSummary *this)
{
  ?ResetData@DLogEvent_MMIntermissionSummary@@MEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::CreateNewLobby
==============
*/

void __fastcall DLogEvent_MMSearchSummary::CreateNewLobby(DLogEvent_MMSearchSummary *this, const unsigned __int64 createLobbyUpdateId)
{
  ?CreateNewLobby@DLogEvent_MMSearchSummary@@UEAAX_K@Z(this, createLobbyUpdateId);
}

/*
==============
DLogEvent_MMSearchSummary::Cancel
==============
*/

void __fastcall DLogEvent_MMSearchSummary::Cancel(DLogEvent_MMSearchSummary *this)
{
  ?Cancel@DLogEvent_MMSearchSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::DisbandLobby
==============
*/

void __fastcall DLogEvent_MMSearchSummary::DisbandLobby(DLogEvent_MMSearchSummary *this)
{
  ?DisbandLobby@DLogEvent_MMSearchSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyMembers<24>::GetCount
==============
*/

unsigned __int8 __fastcall DLogEvent_MMPartyMembers<24>::GetCount(DLogEvent_MMPartyMembers<24> *this)
{
  return ?GetCount@?$DLogEvent_MMPartyMembers@$0BI@@@QEBAEXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::JoinLobbyFailed
==============
*/

void __fastcall DLogEvent_MMSearchSummary::JoinLobbyFailed(DLogEvent_MMSearchSummary *this)
{
  ?JoinLobbyFailed@DLogEvent_MMSearchSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::JoinLobby
==============
*/

void __fastcall DLogEvent_MMSearchSummary::JoinLobby(DLogEvent_MMSearchSummary *this)
{
  ?JoinLobby@DLogEvent_MMSearchSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::StartSearchComplete
==============
*/

void __fastcall DLogEvent_MMSearchSummary::StartSearchComplete(DLogEvent_MMSearchSummary *this, const unsigned __int64 matchmakingId)
{
  ?StartSearchComplete@DLogEvent_MMSearchSummary@@UEAAX_K@Z(this, matchmakingId);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyOpen
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::LobbyOpen(DLogEvent_MMIntermissionSummary *this)
{
  ?LobbyOpen@DLogEvent_MMIntermissionSummary@@AEAAXXZ(this);
}

/*
==============
DLogEvent_MMSearchSummary::ResetData
==============
*/

void __fastcall DLogEvent_MMSearchSummary::ResetData(DLogEvent_MMSearchSummary *this)
{
  ?ResetData@DLogEvent_MMSearchSummary@@MEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::CreateNewLobby
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::CreateNewLobby(DLogEvent_MMPartyToMatch *this, const unsigned __int64 createLobbyUpdateId)
{
  ?CreateNewLobby@DLogEvent_MMPartyToMatch@@UEAAX_K@Z(this, createLobbyUpdateId);
}

/*
==============
DLogEvent_MMPartyToMatch::DisbandLobby
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::DisbandLobby(DLogEvent_MMPartyToMatch *this)
{
  ?DisbandLobby@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::CreateNewLobby
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::CreateNewLobby(DLogEvent_MMIntermissionSummary *this, const unsigned __int64 createLobbyUpdateId)
{
  ?CreateNewLobby@DLogEvent_MMIntermissionSummary@@UEAAX_K@Z(this, createLobbyUpdateId);
}

/*
==============
DLogEvent_MMIntermissionSummary::DisbandLobby
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::DisbandLobby(DLogEvent_MMIntermissionSummary *this)
{
  ?DisbandLobby@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::StartSearchComplete
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::StartSearchComplete(DLogEvent_MMPartyToMatch *this, const unsigned __int64 matchmakingId)
{
  ?StartSearchComplete@DLogEvent_MMPartyToMatch@@UEAAX_K@Z(this, matchmakingId);
}

/*
==============
DLogEvent_MMPartyToMatch::WriteEvent
==============
*/

bool __fastcall DLogEvent_MMPartyToMatch::WriteEvent(DLogEvent_MMPartyToMatch *this, DLogContext *context)
{
  return ?WriteEvent@DLogEvent_MMPartyToMatch@@MEAA_NPEAUDLogContext@@@Z(this, context);
}

/*
==============
DLogEvent_MMPartyToMatch::ResetMatchmaking
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::ResetMatchmaking(DLogEvent_MMPartyToMatch *this)
{
  ?ResetMatchmaking@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyMembers<24>::ResetData
==============
*/

void __fastcall DLogEvent_MMPartyMembers<24>::ResetData(DLogEvent_MMPartyMembers<24> *this)
{
  ?ResetData@?$DLogEvent_MMPartyMembers@$0BI@@@QEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyToMatch::MatchStart
==============
*/

void __fastcall DLogEvent_MMPartyToMatch::MatchStart(DLogEvent_MMPartyToMatch *this)
{
  ?MatchStart@DLogEvent_MMPartyToMatch@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::StartIntermission
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::StartIntermission(DLogEvent_MMIntermissionSummary *this)
{
  ?StartIntermission@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyMembers<24>::Remove
==============
*/

void __fastcall DLogEvent_MMPartyMembers<24>::Remove(DLogEvent_MMPartyMembers<24> *this, const XUID xuid)
{
  ?Remove@?$DLogEvent_MMPartyMembers@$0BI@@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyMerge
==============
*/

void __fastcall DLogEvent_MMIntermissionSummary::LobbyMerge(DLogEvent_MMIntermissionSummary *this)
{
  ?LobbyMerge@DLogEvent_MMIntermissionSummary@@UEAAXXZ(this);
}

/*
==============
DLogEvent_MMPartyMembers<24>::Add
==============
*/
void DLogEvent_MMPartyMembers<24>::Add(DLogEvent_MMPartyMembers<24> *this, const XUID xuid)
{
  int v2; 
  int v4; 
  unsigned __int64 UTC; 
  int v6; 
  DLogEvent_MMPartyMembers<24> *v7; 
  unsigned __int64 utc_timestamp_left; 
  unsigned int v9; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v2 = -1;
  v4 = -1;
  UTC = LiveStorage_GetUTC();
  v6 = 0;
  v7 = this;
  while ( !XUID::operator==((XUID *)v7, &xuida) )
  {
    if ( v2 == -1 )
    {
      if ( XUID::IsNull((XUID *)v7) )
      {
        v2 = v6;
      }
      else
      {
        utc_timestamp_left = v7->m_members[0].utc_timestamp_left;
        if ( utc_timestamp_left && utc_timestamp_left < UTC )
        {
          v4 = v6;
          UTC = v7->m_members[0].utc_timestamp_left;
        }
      }
    }
    ++v6;
    v7 = (DLogEvent_MMPartyMembers<24> *)((char *)v7 + 24);
    if ( v6 >= 24 )
    {
      if ( v2 >= 0 )
        v4 = v2;
      if ( v4 < 0 )
      {
        Com_PrintError(25, "Trying to insert party member to telemetry member array but there are no slots available, max members is %u.\n", 24i64);
        return;
      }
      v7 = (DLogEvent_MMPartyMembers<24> *)((char *)this + 24 * v4);
      XUID::operator=((XUID *)v7, &xuida);
      v9 = LiveStorage_GetUTC();
      v7->m_members[0].utc_timestamp_left = 0i64;
      goto LABEL_17;
    }
  }
  if ( !v7->m_members[0].utc_timestamp_left )
    return;
  v7->m_members[0].utc_timestamp_left = 0i64;
  v9 = LiveStorage_GetUTC();
LABEL_17:
  v7->m_members[0].utc_timestamp_joined = v9;
}

/*
==============
DLogEvent_MMIntermissionSummary::AddPlayer
==============
*/
void DLogEvent_MMIntermissionSummary::AddPlayer(DLogEvent_MMIntermissionSummary *this, const XUID xuid)
{
  DLogEvent_MMPartyMembers<24>::Add(&this->members, xuid);
}

/*
==============
DLogEvent_MMPartyToMatch::Cancel
==============
*/
void DLogEvent_MMPartyToMatch::Cancel(DLogEvent_MMPartyToMatch *this)
{
  this->ResetData(this);
}

/*
==============
DLogEvent_MMSearchSummary::Cancel
==============
*/
void DLogEvent_MMSearchSummary::Cancel(DLogEvent_MMSearchSummary *this)
{
  this->reason_left[0] = 3;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMIntermissionSummary::CreateNewLobby
==============
*/
void DLogEvent_MMIntermissionSummary::CreateNewLobby(DLogEvent_MMIntermissionSummary *this, const unsigned __int64 createLobbyUpdateId)
{
  this->utc_timestamp_created = DLogEvent_Base::GetCurrentUTC(this);
  this->lobby_create_message_id = createLobbyUpdateId;
  DLogEvent_MMIntermissionSummary::LobbyOpen(this);
}

/*
==============
DLogEvent_MMPartyToMatch::CreateNewLobby
==============
*/
void DLogEvent_MMPartyToMatch::CreateNewLobby(DLogEvent_MMPartyToMatch *this, const unsigned __int64 createLobbyUpdateId)
{
  this->searches[this->search_index % 0xA].search_outcome[0] = 3;
  this->searches[this->search_index % 0xA].joined_lobby_id = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  this->searches[this->search_index % 0xA].lobby_host_id = OnlineMatchmakerOmniscient::GetHostUID(&OnlineMatchmakerOmniscient::ms_instance);
  this->searches[this->search_index % 0xA].utc_timestamp_lobby_joined = DLogEvent_Base::GetCurrentUTC(this);
}

/*
==============
DLogEvent_MMSearchSummary::CreateNewLobby
==============
*/
void DLogEvent_MMSearchSummary::CreateNewLobby(DLogEvent_MMSearchSummary *this, const unsigned __int64 createLobbyUpdateId)
{
  this->utc_timestamp_lobby_joined = DLogEvent_Base::GetCurrentUTC(this);
  this->joined_lobby_id = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  this->lobby_host_id = OnlineMatchmakerOmniscient::GetHostUID(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
DLogEvent_MMPartyToMatch::CurrentSearch
==============
*/
DLogEvent_MMPartyToMatch::Search *DLogEvent_MMPartyToMatch::CurrentSearch(DLogEvent_MMPartyToMatch *this)
{
  return &this->searches[this->search_index % 0xA];
}

/*
==============
DLogEvent_MMIntermissionSummary::DisbandLobby
==============
*/
void DLogEvent_MMIntermissionSummary::DisbandLobby(DLogEvent_MMIntermissionSummary *this)
{
  this->reason_intermission_ended[0] = 1;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMPartyToMatch::DisbandLobby
==============
*/
void DLogEvent_MMPartyToMatch::DisbandLobby(DLogEvent_MMPartyToMatch *this)
{
  this->searches[this->search_index % 0xA].utc_timestamp_lobby_exit = DLogEvent_Base::GetCurrentUTC(this);
}

/*
==============
DLogEvent_MMSearchSummary::DisbandLobby
==============
*/
void DLogEvent_MMSearchSummary::DisbandLobby(DLogEvent_MMSearchSummary *this)
{
  this->utc_timestamp_lobby_exit = DLogEvent_Base::GetCurrentUTC(this);
  this->reason_left[0] = 1;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMPartyMembers<24>::FillFromParty
==============
*/
void DLogEvent_MMPartyMembers<24>::FillFromParty(DLogEvent_MMPartyMembers<24> *this, const PartyData *party)
{
  int i; 
  int v5; 
  int v6; 
  unsigned __int64 UTC; 
  int v8; 
  DLogEvent_MMPartyMembers<24> *v9; 
  unsigned __int64 utc_timestamp_left; 
  unsigned int v11; 
  XUID xuid; 
  XUID result; 

  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) )
    {
      v5 = -1;
      v6 = -1;
      xuid.m_id = Party_GetXuid(&result, party, i)->m_id;
      UTC = LiveStorage_GetUTC();
      v8 = 0;
      v9 = this;
      while ( !XUID::operator==((XUID *)v9, &xuid) )
      {
        if ( v5 == -1 )
        {
          if ( XUID::IsNull((XUID *)v9) )
          {
            v5 = v8;
          }
          else
          {
            utc_timestamp_left = v9->m_members[0].utc_timestamp_left;
            if ( utc_timestamp_left && utc_timestamp_left < UTC )
            {
              v6 = v8;
              UTC = v9->m_members[0].utc_timestamp_left;
            }
          }
        }
        ++v8;
        v9 = (DLogEvent_MMPartyMembers<24> *)((char *)v9 + 24);
        if ( v8 >= 24 )
        {
          if ( v5 >= 0 )
            v6 = v5;
          if ( v6 < 0 )
          {
            Com_PrintError(25, "Trying to insert party member to telemetry member array but there are no slots available, max members is %u.\n", 24i64);
            goto LABEL_20;
          }
          v9 = (DLogEvent_MMPartyMembers<24> *)((char *)this + 24 * v6);
          XUID::operator=((XUID *)v9, &xuid);
          v11 = LiveStorage_GetUTC();
          v9->m_members[0].utc_timestamp_left = 0i64;
          goto LABEL_19;
        }
      }
      if ( !v9->m_members[0].utc_timestamp_left )
        continue;
      v9->m_members[0].utc_timestamp_left = 0i64;
      v11 = LiveStorage_GetUTC();
LABEL_19:
      v9->m_members[0].utc_timestamp_joined = v11;
    }
LABEL_20:
    ;
  }
}

/*
==============
DLogEvent_MMPartyMembers<24>::GetCount
==============
*/
__int64 DLogEvent_MMPartyMembers<24>::GetCount(DLogEvent_MMPartyMembers<24> *this)
{
  unsigned __int8 v2; 
  __int64 v3; 

  v2 = 0;
  v3 = 24i64;
  do
  {
    if ( XUID::IsValid((XUID *)this) )
      ++v2;
    this = (DLogEvent_MMPartyMembers<24> *)((char *)this + 24);
    --v3;
  }
  while ( v3 );
  return v2;
}

/*
==============
DLogEvent_MMPartyToMatch::JoinLobby
==============
*/
void DLogEvent_MMPartyToMatch::JoinLobby(DLogEvent_MMPartyToMatch *this)
{
  this->searches[this->search_index % 0xA].search_outcome[0] = 1;
  this->searches[this->search_index % 0xA].joined_lobby_id = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  this->searches[this->search_index % 0xA].lobby_host_id = OnlineMatchmakerOmniscient::GetHostUID(&OnlineMatchmakerOmniscient::ms_instance);
  this->searches[this->search_index % 0xA].utc_timestamp_lobby_joined = DLogEvent_Base::GetCurrentUTC(this);
  if ( OnlineMatchmakerOmniscient::IsGameStarted(&OnlineMatchmakerOmniscient::ms_instance) )
    this->utc_timestamp_game_start = DLogEvent_Base::GetCurrentUTC(this);
}

/*
==============
DLogEvent_MMSearchSummary::JoinLobby
==============
*/
void DLogEvent_MMSearchSummary::JoinLobby(DLogEvent_MMSearchSummary *this)
{
  bool IsGameStarted; 
  bool IsDedicatedServerLobby; 
  const char *ServerDataCenter; 

  this->utc_timestamp_lobby_joined = DLogEvent_Base::GetCurrentUTC(this);
  this->joined_lobby_id = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  this->lobby_host_id = OnlineMatchmakerOmniscient::GetHostUID(&OnlineMatchmakerOmniscient::ms_instance);
  IsGameStarted = OnlineMatchmakerOmniscient::IsGameStarted(&OnlineMatchmakerOmniscient::ms_instance);
  this->joined_game_in_progress = IsGameStarted;
  if ( IsGameStarted )
    this->utc_timestamp_game_start = DLogEvent_Base::GetCurrentUTC(this);
  IsDedicatedServerLobby = OnlineMatchmakerOmniscient::IsDedicatedServerLobby(&OnlineMatchmakerOmniscient::ms_instance);
  this->is_dedi = IsDedicatedServerLobby;
  if ( IsDedicatedServerLobby )
  {
    ServerDataCenter = OnlineMatchmakerOmniscient::GetServerDataCenter(&OnlineMatchmakerOmniscient::ms_instance);
    Core_strcpy(this->datacenter_id, 0x40ui64, ServerDataCenter);
  }
}

/*
==============
DLogEvent_MMPartyToMatch::JoinLobbyFailed
==============
*/
void DLogEvent_MMPartyToMatch::JoinLobbyFailed(DLogEvent_MMPartyToMatch *this)
{
  this->searches[this->search_index % 0xA].search_outcome[0] = 2;
}

/*
==============
DLogEvent_MMSearchSummary::JoinLobbyFailed
==============
*/
void DLogEvent_MMSearchSummary::JoinLobbyFailed(DLogEvent_MMSearchSummary *this)
{
  this->reason_left[0] = 2;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyMerge
==============
*/
void DLogEvent_MMIntermissionSummary::LobbyMerge(DLogEvent_MMIntermissionSummary *this)
{
  this->reason_intermission_ended[0] = 2;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyMigration
==============
*/
void DLogEvent_MMIntermissionSummary::LobbyMigration(DLogEvent_MMIntermissionSummary *this)
{
  this->reason_intermission_ended[0] = 3;
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMIntermissionSummary::LobbyOpen
==============
*/
void DLogEvent_MMIntermissionSummary::LobbyOpen(DLogEvent_MMIntermissionSummary *this)
{
  const char *ServerDataCenter; 
  const char *ServerHostName; 

  this->lobby_id = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  this->lobby_host_id = OnlineMatchmakerOmniscient::GetHostUID(&OnlineMatchmakerOmniscient::ms_instance);
  this->is_dedi = OnlineMatchmakerOmniscient::IsDedicatedServerLobby(&OnlineMatchmakerOmniscient::ms_instance);
  ServerDataCenter = OnlineMatchmakerOmniscient::GetServerDataCenter(&OnlineMatchmakerOmniscient::ms_instance);
  Core_strcpy(this->datacenter_id, 0x40ui64, ServerDataCenter);
  ServerHostName = OnlineMatchmakerOmniscient::GetServerHostName(&OnlineMatchmakerOmniscient::ms_instance);
  Core_strcpy(this->dedi_hostname, 0x400ui64, ServerHostName);
  this->playlist_id = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance);
  this->playlist_version = OnlineMatchmakerOmniscient::GetPlaylistVersion(&OnlineMatchmakerOmniscient::ms_instance);
  this->netcode_version = GetProtocolVersion();
}

/*
==============
DLogEvent_MMIntermissionSummary::MatchEnd
==============
*/
void DLogEvent_MMIntermissionSummary::MatchEnd(DLogEvent_MMIntermissionSummary *this)
{
  this->utc_timestamp_last_game_end = DLogEvent_Base::GetCurrentUTC(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::MatchStart
==============
*/
void DLogEvent_MMIntermissionSummary::MatchStart(DLogEvent_MMIntermissionSummary *this)
{
  const char *MapName; 

  this->reason_intermission_ended[0] = 4;
  this->next_game_match_id = OnlineMatchId::GetMatchId();
  MapName = Party_GetMapName();
  Core_strcpy(this->next_game_map_name, 0x20ui64, MapName);
  DLogEvent_Base::Send(this, 0);
  this->utc_timestamp_sent = 0i64;
  this->lobby_id = 0i64;
  this->lobby_host_id = 0i64;
  *(_WORD *)&this->is_dedi = 0;
  this->dedi_hostname[0] = 0;
  *(_QWORD *)&this->playlist_version = 0i64;
  this->netcode_version = 0;
  this->utc_timestamp_last_game_end = 0i64;
  this->next_game_match_id = 0i64;
  this->next_game_map_name[0] = 0;
  this->num_seconds_blocked = 0;
  this->reason_intermission_ended[0] = 0;
  this->lobby_merge_target = 0i64;
  this->last_game_match_id = this->next_game_match_id;
  Core_strcpy(this->last_game_map_name, 0x20ui64, this->next_game_map_name);
}

/*
==============
DLogEvent_MMPartyToMatch::MatchStart
==============
*/
void DLogEvent_MMPartyToMatch::MatchStart(DLogEvent_MMPartyToMatch *this)
{
  this->utc_timestamp_game_start = DLogEvent_Base::GetCurrentUTC(this);
  this->first_game_guid = OnlineMatchId::GetMatchId();
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMSearchSummary::MatchStart
==============
*/
void DLogEvent_MMSearchSummary::MatchStart(DLogEvent_MMSearchSummary *this)
{
  this->utc_timestamp_game_start = DLogEvent_Base::GetCurrentUTC(this);
  DLogEvent_Base::Send(this, 1);
}

/*
==============
DLogEvent_MMPartyToMatch::NextSearch
==============
*/
void DLogEvent_MMPartyToMatch::NextSearch(DLogEvent_MMPartyToMatch *this)
{
  if ( this->searches[this->search_index % 0xA].search_outcome[0] )
  {
    ++this->search_index;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_event_mm_telemetry.cpp", 249, ASSERT_TYPE_ASSERT, "(CurrentSearch()->search_outcome != Search::SearchOutcome::NONE)", (const char *)&queryFormat, "CurrentSearch()->search_outcome != Search::SearchOutcome::NONE") )
      __debugbreak();
    ++this->search_index;
  }
}

/*
==============
DLogEvent_MMPartyMembers<24>::Remove
==============
*/
void DLogEvent_MMPartyMembers<24>::Remove(DLogEvent_MMPartyMembers<24> *this, const XUID xuid)
{
  DLogEvent_MMPartyMembers<24> *v2; 
  unsigned __int64 *p_utc_timestamp_left; 
  __int64 v4; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v2 = this;
  p_utc_timestamp_left = &this->m_members[0].utc_timestamp_left;
  v4 = 24i64;
  do
  {
    if ( XUID::operator==((XUID *)v2, &xuida) )
      *p_utc_timestamp_left = LiveStorage_GetUTC();
    v2 = (DLogEvent_MMPartyMembers<24> *)((char *)v2 + 24);
    p_utc_timestamp_left += 3;
    --v4;
  }
  while ( v4 );
}

/*
==============
DLogEvent_MMIntermissionSummary::RemovePlayer
==============
*/
void DLogEvent_MMIntermissionSummary::RemovePlayer(DLogEvent_MMIntermissionSummary *this, const XUID xuid)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  unsigned __int64 *p_utc_timestamp_left; 
  __int64 v4; 
  XUID xuida; 

  p_members = &this->members;
  xuida.m_id = xuid.m_id;
  p_utc_timestamp_left = &this->members.m_members[0].utc_timestamp_left;
  v4 = 24i64;
  do
  {
    if ( XUID::operator==((XUID *)p_members, &xuida) )
      *p_utc_timestamp_left = LiveStorage_GetUTC();
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    p_utc_timestamp_left += 3;
    --v4;
  }
  while ( v4 );
}

/*
==============
DLogEvent_MMPartyMembers<24>::ResetData
==============
*/
void DLogEvent_MMPartyMembers<24>::ResetData(DLogEvent_MMPartyMembers<24> *this)
{
  __int64 v2; 
  const XUID *v3; 
  XUID result; 

  v2 = 24i64;
  do
  {
    v3 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)this, v3);
    this = (DLogEvent_MMPartyMembers<24> *)((char *)this + 24);
    --v2;
  }
  while ( v2 );
}

/*
==============
DLogEvent_MMIntermissionSummary::ResetData
==============
*/
void DLogEvent_MMIntermissionSummary::ResetData(DLogEvent_MMIntermissionSummary *this)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  __int64 v2; 
  const XUID *v3; 
  XUID result; 

  p_members = &this->members;
  this->lobby_create_message_id = 0i64;
  this->utc_timestamp_created = 0i64;
  this->utc_timestamp_sent = 0i64;
  this->lobby_id = 0i64;
  v2 = 24i64;
  this->lobby_host_id = 0i64;
  *(_WORD *)&this->is_dedi = 0;
  this->dedi_hostname[0] = 0;
  *(_QWORD *)&this->playlist_version = 0i64;
  this->netcode_version = 0;
  this->utc_timestamp_last_game_end = 0i64;
  this->last_game_match_id = 0i64;
  this->last_game_map_name[0] = 0;
  this->next_game_match_id = 0i64;
  this->next_game_map_name[0] = 0;
  this->num_seconds_blocked = 0;
  this->reason_intermission_ended[0] = 0;
  this->lobby_merge_target = 0i64;
  do
  {
    v3 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)p_members, v3);
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    --v2;
  }
  while ( v2 );
}

/*
==============
DLogEvent_MMPartyToMatch::ResetData
==============
*/
void DLogEvent_MMPartyToMatch::ResetData(DLogEvent_MMPartyToMatch *this)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  __int64 v3; 
  const XUID *v4; 
  XUID result; 

  this->utc_timestamp_created = 0i64;
  this->utc_timestamp_sent = 0i64;
  this->party_host_user_id = 0i64;
  this->utc_timestamp_game_start = 0i64;
  this->first_game_guid = 0i64;
  this->search_index = 0;
  memset_0(this->searches, 0, sizeof(this->searches));
  p_members = &this->members;
  v3 = 24i64;
  do
  {
    v4 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)p_members, v4);
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    --v3;
  }
  while ( v3 );
}

/*
==============
DLogEvent_MMSearchSummary::ResetData
==============
*/
void DLogEvent_MMSearchSummary::ResetData(DLogEvent_MMSearchSummary *this)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  __int64 v2; 
  const XUID *v3; 
  XUID result; 

  p_members = &this->members;
  this->matchmaking_id = 0i64;
  this->utc_timestamp_created = 0i64;
  this->utc_timestamp_sent = 0i64;
  v2 = 24i64;
  this->party_host_user_id = 0i64;
  *(_QWORD *)&this->playlist_version = 0i64;
  this->netcode_version = 0;
  this->joined_lobby_id = 0i64;
  this->lobby_host_id = 0i64;
  *(_WORD *)&this->is_dedi = 0;
  this->utc_timestamp_lobby_joined = 0i64;
  this->utc_timestamp_lobby_exit = 0i64;
  this->utc_timestamp_game_start = 0i64;
  *(_WORD *)this->reason_left = 0;
  do
  {
    v3 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)p_members, v3);
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    --v2;
  }
  while ( v2 );
}

/*
==============
DLogEvent_MMIntermissionSummary::ResetLobby
==============
*/
void DLogEvent_MMIntermissionSummary::ResetLobby(DLogEvent_MMIntermissionSummary *this)
{
  this->ResetData(this);
}

/*
==============
DLogEvent_MMPartyToMatch::ResetMatchmaking
==============
*/
void DLogEvent_MMPartyToMatch::ResetMatchmaking(DLogEvent_MMPartyToMatch *this)
{
  this->ResetData(this);
}

/*
==============
DLogEvent_MMIntermissionSummary::SoftResetData
==============
*/
void DLogEvent_MMIntermissionSummary::SoftResetData(DLogEvent_MMIntermissionSummary *this)
{
  this->utc_timestamp_sent = 0i64;
  this->lobby_id = 0i64;
  this->lobby_host_id = 0i64;
  *(_WORD *)&this->is_dedi = 0;
  this->dedi_hostname[0] = 0;
  *(_QWORD *)&this->playlist_version = 0i64;
  this->netcode_version = 0;
  this->utc_timestamp_last_game_end = 0i64;
  this->next_game_match_id = 0i64;
  this->next_game_map_name[0] = 0;
  this->num_seconds_blocked = 0;
  this->reason_intermission_ended[0] = 0;
  this->lobby_merge_target = 0i64;
  this->last_game_match_id = this->next_game_match_id;
  Core_strcpy(this->last_game_map_name, 0x20ui64, this->next_game_map_name);
}

/*
==============
DLogEvent_MMIntermissionSummary::StartIntermission
==============
*/
void DLogEvent_MMIntermissionSummary::StartIntermission(DLogEvent_MMIntermissionSummary *this)
{
  DLogEvent_MMIntermissionSummary::LobbyOpen(this);
  this->last_game_match_id = OnlineMatchId::GetMatchId();
}

/*
==============
DLogEvent_MMPartyToMatch::StartSearch
==============
*/
void DLogEvent_MMPartyToMatch::StartSearch(DLogEvent_MMPartyToMatch *this, const OmniscientMatchmakingParams *params)
{
  unsigned int search_index; 
  XUID *HostXuid; 
  XUID result; 

  search_index = this->search_index;
  if ( search_index || this->searches[0].search_outcome[0] )
  {
    if ( !this->searches[search_index % 0xA].search_outcome[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dlog\\dlog_event_mm_telemetry.cpp", 249, ASSERT_TYPE_ASSERT, "(CurrentSearch()->search_outcome != Search::SearchOutcome::NONE)", (const char *)&queryFormat, "CurrentSearch()->search_outcome != Search::SearchOutcome::NONE") )
      __debugbreak();
    ++this->search_index;
  }
  else
  {
    this->ResetData(this);
    this->utc_timestamp_created = DLogEvent_Base::GetCurrentUTC(this);
    HostXuid = Party_GetHostXuid(&result, &g_partyData);
    this->party_host_user_id = XUID::GetUniversalId(HostXuid);
    DLogEvent_MMPartyMembers<24>::FillFromParty(&this->members, &g_partyData);
  }
  memset_0(&this->searches[this->search_index % 0xA], 0, sizeof(this->searches[this->search_index % 0xA]));
  this->searches[this->search_index % 0xA].utc_timestamp_search_start = DLogEvent_Base::GetCurrentUTC(this);
  this->searches[this->search_index % 0xA].playlist_id = params->m_playlistId;
  this->searches[this->search_index % 0xA].playlist_category = params->m_playlistCategory;
  this->searches[this->search_index % 0xA].playlist_version = params->m_playlistVersion;
  this->searches[this->search_index % 0xA].netcode_version = params->m_netcodeVersion;
}

/*
==============
DLogEvent_MMSearchSummary::StartSearch
==============
*/
void DLogEvent_MMSearchSummary::StartSearch(DLogEvent_MMSearchSummary *this, const OmniscientMatchmakingParams *params)
{
  XUID *HostXuid; 
  XUID result; 

  this->ResetData(this);
  this->utc_timestamp_created = DLogEvent_Base::GetCurrentUTC(this);
  HostXuid = Party_GetHostXuid(&result, &g_partyData);
  this->party_host_user_id = XUID::GetUniversalId(HostXuid);
  this->playlist_id = params->m_playlistId;
  this->playlist_category = params->m_playlistCategory;
  this->playlist_version = params->m_playlistVersion;
  this->netcode_version = params->m_netcodeVersion;
  DLogEvent_MMPartyMembers<24>::FillFromParty(&this->members, &g_partyData);
}

/*
==============
DLogEvent_MMPartyToMatch::StartSearchComplete
==============
*/
void DLogEvent_MMPartyToMatch::StartSearchComplete(DLogEvent_MMPartyToMatch *this, const unsigned __int64 matchmakingId)
{
  this->searches[this->search_index % 0xA].utc_timestamp_search_end = DLogEvent_Base::GetCurrentUTC(this);
  this->searches[this->search_index % 0xA].matchmaking_id = matchmakingId;
}

/*
==============
DLogEvent_MMSearchSummary::StartSearchComplete
==============
*/
void DLogEvent_MMSearchSummary::StartSearchComplete(DLogEvent_MMSearchSummary *this, const unsigned __int64 matchmakingId)
{
  this->matchmaking_id = matchmakingId;
}

/*
==============
DLogEvent_MMPartyMembers<24>::WriteEvent
==============
*/
char DLogEvent_MMPartyMembers<24>::WriteEvent(DLogEvent_MMPartyMembers<24> *this, DLogContext *context)
{
  __int64 v4; 
  unsigned __int64 utc_timestamp_left; 
  unsigned __int64 utc_timestamp_joined; 
  unsigned __int64 UniversalId; 

  v4 = 0i64;
  while ( 1 )
  {
    if ( !XUID::IsValid((XUID *)this) )
      goto LABEL_9;
    utc_timestamp_left = this->m_members[0].utc_timestamp_left;
    utc_timestamp_joined = this->m_members[0].utc_timestamp_joined;
    UniversalId = XUID::GetUniversalId((XUID *)this);
    if ( !DLog_IsActive() )
      break;
    if ( !DLog_BeginRow(context, "party_members") || !DLog_UInt64(context, "user", UniversalId) || !DLog_UInt64(context, "utc_timestamp_joined", utc_timestamp_joined) || !DLog_UInt64(context, "utc_timestamp_left", utc_timestamp_left) || !DLog_EndRow(context) )
      return 0;
LABEL_9:
    ++v4;
    this = (DLogEvent_MMPartyMembers<24> *)((char *)this + 24);
    if ( v4 >= 24 )
      return 1;
  }
  context->error = DLOG_ERROR_NOT_ACTIVE;
  return 0;
}

/*
==============
DLogEvent_MMIntermissionSummary::WriteEvent
==============
*/
bool DLogEvent_MMIntermissionSummary::WriteEvent(DLogEvent_MMIntermissionSummary *this, DLogContext *context)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  unsigned __int8 v5; 
  __int64 v6; 
  unsigned __int64 lobby_id; 
  unsigned __int64 CurrentUTC; 
  unsigned __int64 utc_timestamp_created; 
  unsigned __int64 v10; 
  unsigned __int64 lobby_create_message_id; 
  bool v13; 
  unsigned int playlist_version; 
  unsigned int playlist_id; 
  unsigned int netcode_version; 
  unsigned int num_seconds_blocked; 
  unsigned __int64 value; 
  unsigned __int64 utc_timestamp_last_game_end; 
  unsigned __int64 last_game_match_id; 
  unsigned __int64 next_game_match_id; 
  unsigned __int64 lobby_merge_target; 
  bool is_dedi; 
  unsigned __int8 v24; 

  p_members = &this->members;
  v5 = 0;
  v6 = 24i64;
  do
  {
    if ( XUID::IsValid((XUID *)p_members) )
      ++v5;
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    --v6;
  }
  while ( v6 );
  lobby_id = this->lobby_id;
  lobby_merge_target = this->lobby_merge_target;
  v24 = this->reason_intermission_ended[0];
  num_seconds_blocked = this->num_seconds_blocked;
  next_game_match_id = this->next_game_match_id;
  last_game_match_id = this->last_game_match_id;
  utc_timestamp_last_game_end = this->utc_timestamp_last_game_end;
  is_dedi = this->is_dedi;
  netcode_version = this->netcode_version;
  playlist_id = this->playlist_id;
  playlist_version = this->playlist_version;
  value = this->lobby_host_id;
  CurrentUTC = DLogEvent_Base::GetCurrentUTC(this);
  utc_timestamp_created = this->utc_timestamp_created;
  v10 = CurrentUTC;
  lobby_create_message_id = this->lobby_create_message_id;
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  v13 = DLog_BeginEvent(context, "dlog_event_matchmaking_intermission_summary");
  context->autoEndEvent = 1;
  return v13 && DLog_UInt64(context, "lobby_create_message_id", lobby_create_message_id) && DLog_UInt64(context, "utc_timestamp_created", utc_timestamp_created) && DLog_UInt64(context, "utc_timestamp_sent", v10) && DLog_UInt64(context, "lobby_id", lobby_id) && DLog_UInt64(context, "lobby_host_id", value) && DLog_UInt32(context, "playlist_version", playlist_version) && DLog_UInt32(context, "playlist_id", playlist_id) && DLog_UInt32(context, "netcode_version", netcode_version) && DLog_Bool(context, "is_dedi", is_dedi) && DLog_String(context, "datacenter_id", this->datacenter_id, 0) && DLog_String(context, "dedi_hostname", this->dedi_hostname, 0) && DLog_UInt64(context, "utc_timestamp_last_game_end", utc_timestamp_last_game_end) && DLog_UInt64(context, "last_game_match_id", last_game_match_id) && DLog_String(context, "last_game_map_name", this->last_game_map_name, 0) && DLog_UInt64(context, "next_game_match_id", next_game_match_id) && DLog_String(context, "next_game_map_name", this->next_game_map_name, 0) && DLog_UInt32(context, "num_seconds_blocked", num_seconds_blocked) && DLog_UInt8(context, "reason_intermission_ended", v24) && DLog_UInt64(context, "lobby_merge_target", lobby_merge_target) && DLog_UInt8(context, "party_member_count", v5) && DLogEvent_MMPartyMembers<24>::WriteEvent(&this->members, context);
}

/*
==============
DLogEvent_MMPartyToMatch::WriteEvent
==============
*/
bool DLogEvent_MMPartyToMatch::WriteEvent(DLogEvent_MMPartyToMatch *this, DLogContext *context)
{
  signed int v2; 
  unsigned __int8 v5; 
  DLogEvent_MMPartyMembers<24> *v6; 
  __int64 v7; 
  unsigned __int64 utc_timestamp_game_start; 
  unsigned __int64 party_host_user_id; 
  unsigned __int64 CurrentUTC; 
  unsigned __int64 utc_timestamp_created; 
  unsigned __int64 v12; 
  char v13; 
  __int64 v14; 
  unsigned int *p_playlist_id; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int8 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  bool v22; 
  unsigned __int64 v23; 
  unsigned __int64 v24; 
  DLogEvent_MMPartyMembers<24> *p_members; 
  unsigned __int64 value; 
  unsigned int valuea; 
  unsigned int v28; 
  unsigned int v29; 

  v2 = 10;
  if ( (signed int)(this->search_index + 1) < 10 )
    v2 = this->search_index + 1;
  if ( v2 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v2, "signed", v2) )
    __debugbreak();
  v5 = 0;
  p_members = &this->members;
  v6 = &this->members;
  v7 = 24i64;
  do
  {
    if ( XUID::IsValid((XUID *)v6) )
      ++v5;
    v6 = (DLogEvent_MMPartyMembers<24> *)((char *)v6 + 24);
    --v7;
  }
  while ( v7 );
  utc_timestamp_game_start = this->utc_timestamp_game_start;
  party_host_user_id = this->party_host_user_id;
  value = this->first_game_guid;
  CurrentUTC = DLogEvent_Base::GetCurrentUTC(this);
  utc_timestamp_created = this->utc_timestamp_created;
  v12 = CurrentUTC;
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v22 = DLog_BeginEvent(context, "dlog_event_matchmaking_party_to_match");
  context->autoEndEvent = 1;
  if ( !v22 || !DLog_UInt64(context, "utc_timestamp_created", utc_timestamp_created) || !DLog_UInt64(context, "utc_timestamp_sent", v12) || !DLog_UInt64(context, "party_host_user_id", party_host_user_id) || !DLog_UInt64(context, "utc_timestamp_game_start", utc_timestamp_game_start) || !DLog_UInt64(context, "first_game_guid", value) || !DLog_UInt8(context, "party_member_count", v5) || !DLog_UInt8(context, "search_count", v2) )
    goto LABEL_12;
  v13 = 1;
LABEL_13:
  v14 = (unsigned __int8)v2;
  if ( (_BYTE)v2 )
  {
    p_playlist_id = &this->searches[0].playlist_id;
    do
    {
      if ( v13 )
      {
        v16 = *(_QWORD *)(p_playlist_id - 13);
        v17 = *(_QWORD *)(p_playlist_id - 9);
        v18 = *((_BYTE *)p_playlist_id - 44);
        v19 = *(_QWORD *)(p_playlist_id - 15);
        v20 = *(_QWORD *)(p_playlist_id - 17);
        v29 = p_playlist_id[2];
        v28 = *p_playlist_id;
        valuea = *(p_playlist_id - 1);
        v24 = *(_QWORD *)(p_playlist_id - 3);
        v23 = *(_QWORD *)(p_playlist_id - 7);
        if ( DLog_IsActive() )
        {
          if ( DLog_BeginRow(context, "searches") && DLog_UInt64(context, "matchmaking_id", v20) && DLog_UInt64(context, "utc_timestamp_search_start", v19) && DLog_UInt64(context, "utc_timestamp_search_end", v16) && DLog_UInt8(context, "search_outcome", v18) && DLog_UInt64(context, "joined_lobby_id", v17) && DLog_UInt64(context, "lobby_host_id", v23) && DLog_UInt64(context, "utc_timestamp_lobby_joined", v16) && DLog_UInt64(context, "utc_timestamp_lobby_exit", v24) && DLog_UInt32(context, "playlist_version", valuea) && DLog_UInt32(context, "playlist_id", v28) && DLog_UInt32(context, "netcode_version", v29) && DLog_EndRow(context) )
          {
            v13 = 1;
            goto LABEL_19;
          }
        }
        else
        {
          context->error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      v13 = 0;
LABEL_19:
      p_playlist_id += 20;
      --v14;
    }
    while ( v14 );
  }
  return v13 && DLogEvent_MMPartyMembers<24>::WriteEvent(p_members, context);
}

/*
==============
DLogEvent_MMSearchSummary::WriteEvent
==============
*/
bool DLogEvent_MMSearchSummary::WriteEvent(DLogEvent_MMSearchSummary *this, DLogContext *context)
{
  DLogEvent_MMPartyMembers<24> *p_members; 
  unsigned __int8 v5; 
  __int64 v6; 
  unsigned __int64 party_host_user_id; 
  unsigned __int64 CurrentUTC; 
  unsigned __int64 utc_timestamp_created; 
  unsigned __int64 v10; 
  unsigned __int64 matchmaking_id; 
  bool v13; 
  bool joined_game_in_progress; 
  unsigned int value; 
  unsigned int playlist_id; 
  unsigned int netcode_version; 
  unsigned __int64 joined_lobby_id; 
  unsigned __int64 lobby_host_id; 
  unsigned __int64 utc_timestamp_lobby_joined; 
  unsigned __int64 utc_timestamp_lobby_exit; 
  unsigned __int64 utc_timestamp_game_start; 
  bool is_dedi; 
  unsigned __int8 v24; 

  p_members = &this->members;
  v5 = 0;
  v6 = 24i64;
  do
  {
    if ( XUID::IsValid((XUID *)p_members) )
      ++v5;
    p_members = (DLogEvent_MMPartyMembers<24> *)((char *)p_members + 24);
    --v6;
  }
  while ( v6 );
  party_host_user_id = this->party_host_user_id;
  joined_game_in_progress = this->joined_game_in_progress;
  v24 = this->reason_left[0];
  utc_timestamp_game_start = this->utc_timestamp_game_start;
  utc_timestamp_lobby_exit = this->utc_timestamp_lobby_exit;
  utc_timestamp_lobby_joined = this->utc_timestamp_lobby_joined;
  is_dedi = this->is_dedi;
  lobby_host_id = this->lobby_host_id;
  joined_lobby_id = this->joined_lobby_id;
  netcode_version = this->netcode_version;
  playlist_id = this->playlist_id;
  value = this->playlist_version;
  CurrentUTC = DLogEvent_Base::GetCurrentUTC(this);
  utc_timestamp_created = this->utc_timestamp_created;
  v10 = CurrentUTC;
  matchmaking_id = this->matchmaking_id;
  if ( !DLog_IsActive() )
  {
    context->error = DLOG_ERROR_NOT_ACTIVE;
    return 0;
  }
  v13 = DLog_BeginEvent(context, "dlog_event_matchmaking_search_summary");
  context->autoEndEvent = 1;
  return v13 && DLog_UInt64(context, "matchmaking_id", matchmaking_id) && DLog_UInt64(context, "utc_timestamp_created", utc_timestamp_created) && DLog_UInt64(context, "utc_timestamp_sent", v10) && DLog_UInt64(context, "party_host_user_id", party_host_user_id) && DLog_UInt32(context, "playlist_version", value) && DLog_UInt32(context, "playlist_id", playlist_id) && DLog_UInt32(context, "netcode_version", netcode_version) && DLog_UInt64(context, "joined_lobby_id", joined_lobby_id) && DLog_UInt64(context, "lobby_host_id", lobby_host_id) && DLog_Bool(context, "is_dedi", is_dedi) && DLog_String(context, "datacenter_id", this->datacenter_id, 0) && DLog_UInt64(context, "utc_timestamp_lobby_joined", utc_timestamp_lobby_joined) && DLog_UInt64(context, "utc_timestamp_lobby_exit", utc_timestamp_lobby_exit) && DLog_UInt64(context, "utc_timestamp_game_start", utc_timestamp_game_start) && DLog_UInt8(context, "reason_left", v24) && DLog_Bool(context, "joined_game_in_progress", joined_game_in_progress) && DLog_UInt8(context, "party_member_count", v5) && DLogEvent_MMPartyMembers<24>::WriteEvent(&this->members, context);
}

