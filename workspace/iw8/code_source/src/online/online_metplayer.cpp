/*
==============
Online_MetPlayer::MarkForGamerTagRefresh
==============
*/

void __fastcall Online_MetPlayer::MarkForGamerTagRefresh(Online_MetPlayer *this, const int controllerIndex)
{
  ?MarkForGamerTagRefresh@Online_MetPlayer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::RequestGamertagForRecentMetPlayers
==============
*/

void __fastcall Online_MetPlayer::RequestGamertagForRecentMetPlayers(Online_MetPlayer *this, const int controllerIndex)
{
  ?RequestGamertagForRecentMetPlayers@Online_MetPlayer@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::IsPlatformFriend
==============
*/

bool __fastcall Online_MetPlayer::IsPlatformFriend(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  return ?IsPlatformFriend@Online_MetPlayer@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_MetPlayer::FeederOnReportRequest
==============
*/

void __fastcall Online_MetPlayer::FeederOnReportRequest(Online_MetPlayer *this, const int controllerIndex, const ReportOffense offense)
{
  ?FeederOnReportRequest@Online_MetPlayer@@QEAAXHW4ReportOffense@@@Z(this, controllerIndex, offense);
}

/*
==============
Online_MetPlayer::UpdateMemberXB3
==============
*/

bool __fastcall Online_MetPlayer::UpdateMemberXB3(Online_MetPlayer *this, const int controllerIndex, const XUID playerXuid, const unsigned __int64 platformId, const char *playerName)
{
  return ?UpdateMemberXB3@Online_MetPlayer@@QEAA_NHUXUID@@_KPEBD@Z(this, controllerIndex, playerXuid, platformId, playerName);
}

/*
==============
Online_MetPlayer::GetInstancePtr
==============
*/

Online_MetPlayer *__fastcall Online_MetPlayer::GetInstancePtr()
{
  return ?GetInstancePtr@Online_MetPlayer@@SAPEAV1@XZ();
}

/*
==============
Online_MetPlayer::OnDisconnect
==============
*/

void __fastcall Online_MetPlayer::OnDisconnect(Online_MetPlayer *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_MetPlayer@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_MetPlayer::OnSignedOut
==============
*/

void __fastcall Online_MetPlayer::OnSignedOut(Online_MetPlayer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_MetPlayer@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_MetPlayer::FeederOnShowGroups
==============
*/

void __fastcall Online_MetPlayer::FeederOnShowGroups(Online_MetPlayer *this, const LocalClientNum_t localClientNum, const int controllerIndex)
{
  ?FeederOnShowGroups@Online_MetPlayer@@QEAAXW4LocalClientNum_t@@H@Z(this, localClientNum, controllerIndex);
}

/*
==============
Online_MetPlayer::GetPlayerInfoForUI
==============
*/

UIPlayerInfo *__fastcall Online_MetPlayer::GetPlayerInfoForUI(Online_MetPlayer *this, UIPlayerInfo *result, const int controllerIndex, int playerIndex)
{
  return ?GetPlayerInfoForUI@Online_MetPlayer@@QEAA?AUUIPlayerInfo@@HH@Z(this, result, controllerIndex, playerIndex);
}

/*
==============
Online_MetPlayer::UpdateMember
==============
*/

bool __fastcall Online_MetPlayer::UpdateMember(Online_MetPlayer *this, const int controllerIndex, const XUID playerXuid, const char *playerName)
{
  return ?UpdateMember@Online_MetPlayer@@QEAA_NHUXUID@@PEBD@Z(this, controllerIndex, playerXuid, playerName);
}

/*
==============
Online_MetPlayer::OnSignedIn
==============
*/

void __fastcall Online_MetPlayer::OnSignedIn(Online_MetPlayer *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_MetPlayer@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_MetPlayer::GetPositionByXuid
==============
*/

int __fastcall Online_MetPlayer::GetPositionByXuid(Online_MetPlayer *this, const int controllerIndex, XUID currentPlayerXuid)
{
  return ?GetPositionByXuid@Online_MetPlayer@@QEAAHHUXUID@@@Z(this, controllerIndex, currentPlayerXuid);
}

/*
==============
OnRequestGamertagForRecentMetPlayersComplete
==============
*/

void __fastcall OnRequestGamertagForRecentMetPlayersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRequestGamertagForRecentMetPlayersComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_MetPlayer::RemoveFriends
==============
*/

void __fastcall Online_MetPlayer::RemoveFriends(Online_MetPlayer *this, const int controllerIndex)
{
  ?RemoveFriends@Online_MetPlayer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::OutputCurrentState
==============
*/

void __fastcall Online_MetPlayer::OutputCurrentState(Online_MetPlayer *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_MetPlayer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::BlackListPlayer
==============
*/

void __fastcall Online_MetPlayer::BlackListPlayer(Online_MetPlayer *this, const int controllerIndex, const XUID player)
{
  ?BlackListPlayer@Online_MetPlayer@@QEAAXHUXUID@@@Z(this, controllerIndex, player);
}

/*
==============
Online_MetPlayer::ControllerFrame
==============
*/

void __fastcall Online_MetPlayer::ControllerFrame(Online_MetPlayer *this, const int controllerIndex)
{
  ?ControllerFrame@Online_MetPlayer@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::GetXB3PlatformIdFromTemporaryData
==============
*/

unsigned __int64 __fastcall Online_MetPlayer::GetXB3PlatformIdFromTemporaryData(Online_MetPlayer *this, const int controllerIndex, const XUID xuid)
{
  return ?GetXB3PlatformIdFromTemporaryData@Online_MetPlayer@@QEAA_KHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_MetPlayer::GetInstance
==============
*/

Online_MetPlayer *__fastcall Online_MetPlayer::GetInstance()
{
  return ?GetInstance@Online_MetPlayer@@SAAEAV1@XZ();
}

/*
==============
Online_MetPlayer::FeederSelection
==============
*/

void __fastcall Online_MetPlayer::FeederSelection(Online_MetPlayer *this, const int controllerIndex, const int row)
{
  ?FeederSelection@Online_MetPlayer@@QEAAXHH@Z(this, controllerIndex, row);
}

/*
==============
Online_MetPlayer::FeederOnShowCard
==============
*/

void __fastcall Online_MetPlayer::FeederOnShowCard(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  ?FeederOnShowCard@Online_MetPlayer@@QEAAXHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_MetPlayer::GetCurrentIndexXUID
==============
*/

XUID *__fastcall Online_MetPlayer::GetCurrentIndexXUID(Online_MetPlayer *this, XUID *result, const int controllerIndex)
{
  return ?GetCurrentIndexXUID@Online_MetPlayer@@QEAA?AUXUID@@H@Z(this, result, controllerIndex);
}

/*
==============
Online_MetPlayer::GetCurrentIndexName
==============
*/

const char *__fastcall Online_MetPlayer::GetCurrentIndexName(Online_MetPlayer *this, const int controllerIndex)
{
  return ?GetCurrentIndexName@Online_MetPlayer@@QEAAPEBDH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::GetCount
==============
*/

int __fastcall Online_MetPlayer::GetCount(Online_MetPlayer *this, const int controllerIndex)
{
  return ?GetCount@Online_MetPlayer@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::ShouldUpdateMember
==============
*/

bool __fastcall Online_MetPlayer::ShouldUpdateMember(Online_MetPlayer *this, const int controllerIndex, const XUID player, const unsigned int systemTime)
{
  return ?ShouldUpdateMember@Online_MetPlayer@@QEAA_NHUXUID@@I@Z(this, controllerIndex, player, systemTime);
}

/*
==============
Online_MetPlayer::FeederStoreXUID
==============
*/

void __fastcall Online_MetPlayer::FeederStoreXUID(Online_MetPlayer *this, const int controllerIndex)
{
  ?FeederStoreXUID@Online_MetPlayer@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_MetPlayer::GetPresence
==============
*/

void __fastcall Online_MetPlayer::GetPresence(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, char *presenceStringOut, unsigned __int64 presenceStringSize)
{
  ?GetPresence@Online_MetPlayer@@QEAAXHUXUID@@PEAD_K@Z(this, controllerIndex, playerId, presenceStringOut, presenceStringSize);
}

/*
==============
Online_MetPlayer::GetStatus
==============
*/

const char *__fastcall Online_MetPlayer::GetStatus(Online_MetPlayer *this, const int controllerIndex, const int playerIndex)
{
  return ?GetStatus@Online_MetPlayer@@AEAAPEBDHH@Z(this, controllerIndex, playerIndex);
}

/*
==============
Online_MetPlayer::GetLastMetInfoForSlot
==============
*/

const char *__fastcall Online_MetPlayer::GetLastMetInfoForSlot(Online_MetPlayer *this, const int controllerIndex, const int slot)
{
  return ?GetLastMetInfoForSlot@Online_MetPlayer@@QEAAPEBDHH@Z(this, controllerIndex, slot);
}

/*
==============
Online_MetPlayer::IsPlayerJoinable
==============
*/

bool __fastcall Online_MetPlayer::IsPlayerJoinable(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  return ?IsPlayerJoinable@Online_MetPlayer@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, playerId, errorString, devErrorString);
}

/*
==============
Online_MetPlayer::IsPlayerInvitable
==============
*/

bool __fastcall Online_MetPlayer::IsPlayerInvitable(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  return ?IsPlayerInvitable@Online_MetPlayer@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, playerId, errorString, devErrorString);
}

/*
==============
Online_MetPlayer::FeederOnFriendRequest
==============
*/

void __fastcall Online_MetPlayer::FeederOnFriendRequest(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  ?FeederOnFriendRequest@Online_MetPlayer@@QEAAXHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_MetPlayer::RefreshGamerTagDataReset
==============
*/

void __fastcall Online_MetPlayer::RefreshGamerTagDataReset(Online_MetPlayer *this)
{
  ?RefreshGamerTagDataReset@Online_MetPlayer@@AEAAXXZ(this);
}

/*
==============
Online_MetPlayer::Init
==============
*/

bool __fastcall Online_MetPlayer::Init(Online_MetPlayer *this)
{
  return ?Init@Online_MetPlayer@@UEAA_NXZ(this);
}

/*
==============
GetPositionByXuid
==============
*/

int __fastcall GetPositionByXuid(const XUID xuid)
{
  return ?GetPositionByXuid@@YAHUXUID@@@Z(xuid);
}

/*
==============
Online_MetPlayer::Init
==============
*/
char Online_MetPlayer::Init(Online_MetPlayer *this)
{
  int v2; 
  int Int_Internal_DebugName; 

  v2 = Sys_Milliseconds();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_meetplayer_gamertag_refresh_rate_ms, "xb3_meetplayer_gamertag_refresh_rate_ms");
  this->m_nextRefreshTime[0] = Int_Internal_DebugName + v2;
  *(_QWORD *)this->m_refreshInProgress = 0i64;
  *(_QWORD *)this->m_needToRefresh = 0i64;
  this->m_nextRefreshTime[1] = Int_Internal_DebugName + v2;
  *(_QWORD *)&this->m_refreshInProgress[2] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[2] = 0i64;
  this->m_nextRefreshTime[2] = Int_Internal_DebugName + v2;
  this->m_nextRefreshTime[3] = Int_Internal_DebugName + v2;
  *(_QWORD *)&this->m_refreshInProgress[4] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[4] = 0i64;
  this->m_nextRefreshTime[4] = Int_Internal_DebugName + v2;
  this->m_nextRefreshTime[5] = Int_Internal_DebugName + v2;
  *(_QWORD *)&this->m_refreshInProgress[6] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[6] = 0i64;
  this->m_nextRefreshTime[6] = Int_Internal_DebugName + v2;
  this->m_nextRefreshTime[7] = Int_Internal_DebugName + v2;
  memset_0(s_xb3MetPlayerTemporaryData, 0, sizeof(s_xb3MetPlayerTemporaryData));
  return 1;
}

/*
==============
Online_MetPlayer::ControllerFrame
==============
*/
void Online_MetPlayer::ControllerFrame(Online_MetPlayer *this, const int controllerIndex)
{
  __int64 v2; 
  int v4; 
  int Int_Internal_DebugName; 

  v2 = controllerIndex;
  if ( this->m_needToRefresh[controllerIndex] )
  {
    v4 = Sys_Milliseconds();
    if ( v4 > this->m_nextRefreshTime[v2] )
    {
      Online_MetPlayer::RequestGamertagForRecentMetPlayers(this, v2);
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_meetplayer_gamertag_refresh_rate_ms, "xb3_meetplayer_gamertag_refresh_rate_ms");
      this->m_needToRefresh[v2] = 0;
      this->m_nextRefreshTime[v2] = v4 + Int_Internal_DebugName;
    }
  }
}

/*
==============
Online_MetPlayer::OnSignedIn
==============
*/
void Online_MetPlayer::OnSignedIn(Online_MetPlayer *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
Online_MetPlayer::OnSignedOut
==============
*/
void Online_MetPlayer::OnSignedOut(Online_MetPlayer *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
Online_MetPlayer::OnDisconnect
==============
*/
void Online_MetPlayer::OnDisconnect(Online_MetPlayer *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_MetPlayer::OutputCurrentState
==============
*/
void Online_MetPlayer::OutputCurrentState(Online_MetPlayer *this, const int controllerIndex)
{
  Com_Printf(25, "METPLAYER DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  __asm
  {
    vmovsd  xmm3, cs:__real@3ff0800000000000
    vmovq   r9, xmm3
  }
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, *(double *)&_XMM3);
  Com_Printf(25, "METPLAYER DUMP END\n");
}

/*
==============
Online_MetPlayer::BlackListPlayer
==============
*/
void Online_MetPlayer::BlackListPlayer(Online_MetPlayer *this, const int controllerIndex, const XUID player)
{
  int v3; 
  __int64 v4; 
  OnlineUserLists *Instance; 
  UserList::User *v7; 
  OnlineUserLists *v8; 
  MeetPlayerBlackList *v9; 
  int count; 
  UserList::User *userOut; 
  UserList::User v12; 
  XUID xuid; 

  xuid.m_id = player.m_id;
  v3 = 0;
  v4 = controllerIndex;
  userOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserByXUID(Instance, v4, MOVEMENT, xuid, (const UserList::User **)&userOut) )
  {
    v7 = userOut;
    XUID::XUID(&v12.xuid);
    XUID::operator=(&v12.xuid, &v7->xuid);
    v12.timeAdded = v7->timeAdded;
    Core_strcpy(v12.name, 0x40ui64, v7->name);
    Core_strcpy(v12.nameWithHash, 0x40ui64, v7->nameWithHash);
    v12.xb3PlatformId = v7->xb3PlatformId;
    v12.xb3DataSet = v7->xb3DataSet;
    v8 = OnlineUserLists::GetInstance();
    OnlineUserLists::RemoveUsersFromList(v8, v4, MOVEMENT, &v12, 1);
  }
  v9 = &this->m_BlackList[v4];
  LOBYTE(count) = v9->count;
  if ( v9->count )
  {
    while ( !XUID::operator==(&v9->blackList[v3], &xuid) )
    {
      count = v9->count;
      if ( ++v3 >= count )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( (unsigned __int8)count >= 0xAu )
    {
      Com_Printf(25, "Meetplayer blacklist exceeded max entry count.  Max count is %i, rolling over.", 10i64);
      LOBYTE(count) = 0;
    }
    v9->count = count + 1;
    XUID::operator=(&v9->blackList[(unsigned __int8)count], &xuid);
  }
}

/*
==============
Online_MetPlayer::FeederOnFriendRequest
==============
*/
void Online_MetPlayer::FeederOnFriendRequest(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  bool IsUserSignedInToLive; 
  OnlineUserLists *Instance; 
  unsigned __int64 UserXB3PlatformId; 
  unsigned int v8; 
  int v10; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 638, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  IsUserSignedInToLive = Live_IsUserSignedInToLive(controllerIndex);
  Instance = OnlineUserLists::GetInstance();
  UserXB3PlatformId = OnlineUserLists::GetUserXB3PlatformId(Instance, controllerIndex, MOVEMENT, xuid);
  if ( IsUserSignedInToLive && UserXB3PlatformId )
  {
    v8 = XShowGamerCardUI(controllerIndex, UserXB3PlatformId);
    if ( v8 )
      Com_PrintError(25, "Microsoft error %i from XShowGamerCardUI()\n", v8);
  }
}

/*
==============
Online_MetPlayer::FeederOnReportRequest
==============
*/
void Online_MetPlayer::FeederOnReportRequest(Online_MetPlayer *this, const int controllerIndex, const ReportOffense offense)
{
  __int64 v3; 
  OnlineUserLists *Instance; 
  XUID *v7; 
  unsigned __int64 UniversalId; 
  int v10; 
  LocalClientNum_t outLocalClientNum; 
  UserList::User *userOut; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  if ( Live_IsUserSignedInToLive(v3) )
  {
    userOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    v7 = &this->m_storedPlayer[v3];
    if ( OnlineUserLists::GetUserByXUID(Instance, v3, MOVEMENT, (const XUID)v7->m_id, (const UserList::User **)&userOut) )
    {
      UniversalId = XUID::GetUniversalId(v7);
      LiveAntiCheat_ReportPlayer(v3, offense, UniversalId);
      CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum);
    }
  }
}

/*
==============
Online_MetPlayer::FeederOnShowCard
==============
*/
void Online_MetPlayer::FeederOnShowCard(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  bool IsUserSignedInToLive; 
  OnlineUserLists *Instance; 
  unsigned __int64 UserXB3PlatformId; 
  unsigned int v8; 
  int v10; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 638, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  IsUserSignedInToLive = Live_IsUserSignedInToLive(controllerIndex);
  Instance = OnlineUserLists::GetInstance();
  UserXB3PlatformId = OnlineUserLists::GetUserXB3PlatformId(Instance, controllerIndex, MOVEMENT, xuid);
  if ( IsUserSignedInToLive && UserXB3PlatformId )
  {
    v8 = XShowGamerCardUI(controllerIndex, UserXB3PlatformId);
    if ( v8 )
      Com_PrintError(25, "Microsoft error %i from XShowGamerCardUI()\n", v8);
  }
}

/*
==============
Online_MetPlayer::FeederOnShowGroups
==============
*/
void Online_MetPlayer::FeederOnShowGroups(Online_MetPlayer *this, const LocalClientNum_t localClientNum, const int controllerIndex)
{
  ;
}

/*
==============
Online_MetPlayer::FeederSelection
==============
*/
void Online_MetPlayer::FeederSelection(Online_MetPlayer *this, const int controllerIndex, const int row)
{
  __int64 v3; 
  OnlineUserLists *Instance; 
  UserList::User *v7; 
  int v9; 
  UserList::User *userOut; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 303, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  userOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserByIndex(Instance, v3, MOVEMENT, row, (const UserList::User **)&userOut) )
  {
    v7 = userOut;
    this->m_currentIndex[v3] = row;
    XUID::operator=(&this->m_currentPlayer[v3], &v7->xuid);
  }
}

/*
==============
Online_MetPlayer::FeederStoreXUID
==============
*/
void Online_MetPlayer::FeederStoreXUID(Online_MetPlayer *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 628, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  XUID::operator=(&this->m_storedPlayer[v2], &this->m_currentPlayer[v2]);
}

/*
==============
Online_MetPlayer::GetCount
==============
*/
__int64 Online_MetPlayer::GetCount(Online_MetPlayer *this, const int controllerIndex)
{
  OnlineUserLists *Instance; 
  UserList *userListOut; 

  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserList(Instance, controllerIndex, MOVEMENT, (const UserList **)&userListOut) )
    return userListOut->m_numUsers;
  else
    return 0i64;
}

/*
==============
Online_MetPlayer::GetCurrentIndexName
==============
*/
char *Online_MetPlayer::GetCurrentIndexName(Online_MetPlayer *this, const int controllerIndex)
{
  int v3; 
  OnlineUserLists *Instance; 
  UserList::User *userOut; 

  userOut = NULL;
  v3 = this->m_currentIndex[controllerIndex];
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserByIndex(Instance, controllerIndex, MOVEMENT, v3, (const UserList::User **)&userOut) )
    return userOut->name;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
Online_MetPlayer::GetCurrentIndexXUID
==============
*/
XUID *Online_MetPlayer::GetCurrentIndexXUID(Online_MetPlayer *this, XUID *result, const int controllerIndex)
{
  int v5; 
  OnlineUserLists *Instance; 
  XUID *v7; 
  UserList::User *userOut; 

  userOut = NULL;
  v5 = this->m_currentIndex[controllerIndex];
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserByIndex(Instance, controllerIndex, MOVEMENT, v5, (const UserList::User **)&userOut) )
  {
    v7 = result;
    result->m_id = (unsigned __int64)userOut->xuid;
  }
  else
  {
    XUID::NullXUID(result);
    return result;
  }
  return v7;
}

/*
==============
Online_MetPlayer::GetInstance
==============
*/
Online_MetPlayer *Online_MetPlayer::GetInstance()
{
  return &Online_MetPlayer::s_instance;
}

/*
==============
Online_MetPlayer::GetInstancePtr
==============
*/
Online_MetPlayer *Online_MetPlayer::GetInstancePtr()
{
  return &Online_MetPlayer::s_instance;
}

/*
==============
Online_MetPlayer::GetLastMetInfoForSlot
==============
*/
const char *Online_MetPlayer::GetLastMetInfoForSlot(Online_MetPlayer *this, const int controllerIndex, const int slot)
{
  __int64 v4; 
  OnlineUserLists *Instance; 
  unsigned int v7; 
  OnlineUserLists *v8; 
  unsigned __int64 timeAdded; 
  unsigned int v10; 
  int v11; 
  int v12; 
  int v13; 
  const char *v14; 
  const char *v16; 
  const char *v17; 
  UserList::User *userOut; 
  UserList *userListOut; 

  v4 = controllerIndex;
  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::GetUserList(Instance, v4, MOVEMENT, (const UserList **)&userListOut) )
    return (char *)&queryFormat.fmt + 3;
  v7 = this->m_currentStartPos[v4] + slot;
  if ( v7 >= userListOut->m_numUsers )
    return (char *)&queryFormat.fmt + 3;
  if ( (unsigned int)v4 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 534, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, 8) )
    __debugbreak();
  userOut = NULL;
  v8 = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::GetUserByIndex(v8, v4, MOVEMENT, v7, (const UserList::User **)&userOut) )
    return (char *)&queryFormat.fmt + 3;
  timeAdded = userOut->timeAdded;
  if ( timeAdded > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)timeAdded, "unsigned", userOut->timeAdded) )
    __debugbreak();
  v10 = Sys_GetTimeAsSeconds() - timeAdded;
  v11 = v10 / 0xE10;
  v12 = v10 / 0x3C;
  if ( v10 < 0x15180 )
  {
    if ( v11 )
    {
      v16 = UI_SafeTranslateString("MENU/LAST_MET_N_HOURS_AGO");
      return UI_ReplaceConversionInt(v16, v11);
    }
    else if ( v12 )
    {
      v17 = UI_SafeTranslateString("MENU/LAST_MET_N_MINS_AGO");
      return UI_ReplaceConversionInt(v17, v12);
    }
    else
    {
      return UI_SafeTranslateString("MENU/LAST_MET_LESS_THAN_A_MIN_AGO");
    }
  }
  else
  {
    v13 = v10 / 0x15180;
    v14 = UI_SafeTranslateString("MENU/LAST_MET_N_DAYS_AGO");
    return UI_ReplaceConversionInt(v14, v13);
  }
}

/*
==============
Online_MetPlayer::GetPlayerInfoForUI
==============
*/
UIPlayerInfo *Online_MetPlayer::GetPlayerInfoForUI(Online_MetPlayer *this, UIPlayerInfo *result, const int controllerIndex, int playerIndex)
{
  OnlineUserLists *Instance; 
  const char *LastMetInfoForSlot; 
  UserList::User *v10; 
  unsigned __int64 xb3PlatformId; 
  unsigned __int64 XB3PlatformIdFromTemporaryData; 
  const SocialPresence *Presence; 
  SocialPresence *v14; 
  int outputSize; 
  int v17; 
  UserList::User *userOut; 

  XUID::XUID(&result->xuid);
  memset_0(result, 0, sizeof(UIPlayerInfo));
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v17 = 8;
    outputSize = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 347, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", outputSize, v17) )
      __debugbreak();
  }
  userOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserByIndex(Instance, controllerIndex, MOVEMENT, playerIndex, (const UserList::User **)&userOut) )
  {
    XUID::operator=(&result->xuid, &userOut->xuid);
    Core_strcpy(result->gamertag, 0x80ui64, userOut->name);
    Core_strcpy(result->gamertagWithHash, 0x40ui64, userOut->nameWithHash);
    LastMetInfoForSlot = Online_MetPlayer::GetLastMetInfoForSlot(&Online_MetPlayer::s_instance, controllerIndex, playerIndex);
    Core_strcpy(result->lastMetInfo, 0x80ui64, LastMetInfoForSlot);
    v10 = userOut;
    xb3PlatformId = userOut->xb3PlatformId;
    result->platformId = xb3PlatformId;
    if ( !xb3PlatformId )
    {
      XB3PlatformIdFromTemporaryData = Online_MetPlayer::GetXB3PlatformIdFromTemporaryData(this, controllerIndex, v10->xuid);
      v10 = userOut;
      result->platformId = XB3PlatformIdFromTemporaryData;
    }
    if ( Social_IsRemotePlayerOnline(controllerIndex, v10->xuid) )
    {
      Presence = Social_GetPresence(controllerIndex, userOut->xuid);
      v14 = (SocialPresence *)Presence;
      if ( Presence )
      {
        Social_FormatPresenceStatus(Presence->m_context, Presence->m_mapIndex, Presence->m_gametype, PRESENCE_PLATFORM_NONE, result->presenceString, 0x80ui64);
        if ( (v14->m_sessionFlags & 2) != 0 )
          result->isSessionPrivate = 1;
        result->presencePlatform = SocialPresence::GetPlatform(v14);
      }
    }
  }
  else
  {
    Com_PrintError(14, "%s: Unable to find recent met player at index %i\n", "Online_MetPlayer::GetPlayerInfoForUI", (unsigned int)playerIndex);
  }
  return result;
}

/*
==============
Online_MetPlayer::GetPositionByXuid
==============
*/
__int64 Online_MetPlayer::GetPositionByXuid(Online_MetPlayer *this, const int controllerIndex, XUID currentPlayerXuid)
{
  OnlineUserLists *Instance; 
  UserList *v5; 
  unsigned __int8 v6; 
  unsigned int v7; 
  int v10; 
  UserList::User *userOut; 
  XUID v12; 
  UserList *userListOut; 

  v12.m_id = currentPlayerXuid.m_id;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::GetUserList(Instance, controllerIndex, MOVEMENT, (const UserList **)&userListOut) )
    return 0xFFFFFFFFi64;
  v5 = userListOut;
  v6 = 0;
  if ( !userListOut->m_numUsers )
    return 0xFFFFFFFFi64;
  v7 = 0;
  while ( 1 )
  {
    userOut = NULL;
    if ( UserList::GetUserByIndex(v5, v7, (const UserList::User **)&userOut) && XUID::operator==(&v12, &userOut->xuid) )
      break;
    v5 = userListOut;
    v7 = ++v6;
    if ( v6 >= userListOut->m_numUsers )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

/*
==============
Online_MetPlayer::GetPresence
==============
*/
void Online_MetPlayer::GetPresence(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, char *presenceStringOut, unsigned __int64 presenceStringSize)
{
  SocialPresence *Presence; 
  SocialPresence *v9; 
  unsigned __int64 PlatformId; 
  PresencePlatform Platform; 

  Presence = (SocialPresence *)Social_GetPresence(controllerIndex, playerId);
  v9 = Presence;
  if ( Presence && (SocialPresence::GetPlatform(Presence) != PRESENCE_PLATFORM_XBOX_ONE || (PlatformId = SocialPresence::GetPlatformId(v9), XB3_Privacy_GetPrivacySettingsForUser(controllerIndex, PlatformId, PERMISSION_PRESENCE))) && XB3_Privacy_CanCommunicateWithCrossplayUser(controllerIndex, playerId) )
  {
    Platform = SocialPresence::GetPlatform(v9);
    Social_FormatPresenceStatus(v9->m_context, v9->m_mapIndex, v9->m_gametype, Platform, presenceStringOut, presenceStringSize);
  }
  else
  {
    *presenceStringOut = 0;
  }
}

/*
==============
Online_MetPlayer::GetStatus
==============
*/
const char *Online_MetPlayer::GetStatus(Online_MetPlayer *this, const int controllerIndex, const int playerIndex)
{
  OnlineUserLists *Instance; 
  unsigned __int64 timeAdded; 
  unsigned int v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  UserList::User *userOut; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 534, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  userOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( !OnlineUserLists::GetUserByIndex(Instance, controllerIndex, MOVEMENT, playerIndex, (const UserList::User **)&userOut) )
    return (char *)&queryFormat.fmt + 3;
  timeAdded = userOut->timeAdded;
  if ( timeAdded > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)timeAdded, "unsigned", userOut->timeAdded) )
    __debugbreak();
  v8 = Sys_GetTimeAsSeconds() - timeAdded;
  v9 = v8 / 0xE10;
  v10 = v8 / 0x3C;
  if ( v8 < 0x15180 )
  {
    if ( v9 )
    {
      v13 = UI_SafeTranslateString("MENU/LAST_MET_N_HOURS_AGO");
      return UI_ReplaceConversionInt(v13, v9);
    }
    else if ( v10 )
    {
      v14 = UI_SafeTranslateString("MENU/LAST_MET_N_MINS_AGO");
      return UI_ReplaceConversionInt(v14, v10);
    }
    else
    {
      return UI_SafeTranslateString("MENU/LAST_MET_LESS_THAN_A_MIN_AGO");
    }
  }
  else
  {
    v11 = v8 / 0x15180;
    v12 = UI_SafeTranslateString("MENU/LAST_MET_N_DAYS_AGO");
    return UI_ReplaceConversionInt(v12, v11);
  }
}

/*
==============
Online_MetPlayer::GetXB3PlatformIdFromTemporaryData
==============
*/
unsigned __int64 Online_MetPlayer::GetXB3PlatformIdFromTemporaryData(Online_MetPlayer *this, const int controllerIndex, const XUID xuid)
{
  XB3MetPlayerTemporaryData *v3; 
  int v4; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = &s_xb3MetPlayerTemporaryData[controllerIndex];
  v4 = 0;
  while ( 1 )
  {
    if ( !XUID::IsValid(&v3->users[v4].xuid) )
      return 0i64;
    if ( XUID::operator==(&v3->users[v4].xuid, &xuida) )
      break;
    if ( (unsigned int)++v4 >= 0xC8 )
      return 0i64;
  }
  return v3->users[v4].platformId;
}

/*
==============
Online_MetPlayer::IsPlatformFriend
==============
*/
bool Online_MetPlayer::IsPlatformFriend(Online_MetPlayer *this, const int controllerIndex, XUID xuid)
{
  Online_Friends *Instance; 

  Instance = Online_Friends::GetInstance();
  return Online_Friends::FindIndex(Instance, controllerIndex, xuid) != -1;
}

/*
==============
Online_MetPlayer::IsPlayerInvitable
==============
*/
bool Online_MetPlayer::IsPlayerInvitable(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  if ( !Live_IsInGamemodeToInvite(errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 592, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
    __debugbreak();
  return Social_IsUserInvitable(controllerIndex, playerId, errorString, devErrorString);
}

/*
==============
Online_MetPlayer::IsPlayerJoinable
==============
*/
bool Online_MetPlayer::IsPlayerJoinable(Online_MetPlayer *this, const int controllerIndex, const XUID playerId, const char **errorString, const char **devErrorString)
{
  if ( !Live_HasOnlineServicesAndRequirementsToJoin(controllerIndex, errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 584, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToJoin( controllerIndex, errorString, devErrorString ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToJoin( controllerIndex, errorString, devErrorString )") )
    __debugbreak();
  return Social_IsUserJoinable(controllerIndex, playerId, 0, errorString, devErrorString);
}

/*
==============
Online_MetPlayer::MarkForGamerTagRefresh
==============
*/
void Online_MetPlayer::MarkForGamerTagRefresh(Online_MetPlayer *this, const int controllerIndex)
{
  this->m_needToRefresh[controllerIndex] = 1;
}

/*
==============
OnRequestGamertagForRecentMetPlayersComplete
==============
*/
void OnRequestGamertagForRecentMetPlayersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v5; 
  int v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  HSTRING v10; 
  unsigned int i; 
  int v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  HSTRING v16; 
  int v17; 
  HSTRING v18; 
  int v19; 
  HSTRING v20; 
  OnlineUserLists *Instance; 
  unsigned __int64 v22; 
  int v23; 
  HSTRING v24; 
  int v25; 
  HSTRING v26; 
  bool v27; 
  const char *v28; 
  HSTRING string; 
  XUID xuidOut; 
  __int64 v31; 
  __int64 v32; 
  unsigned __int64 platformId; 
  HSTRING v34; 
  HSTRING v35; 
  HSTRING newString; 
  HSTRING v37[11]; 
  unsigned int controllerIndex; 
  HSTRING v39; 
  __int64 v40; 

  v37[1] = (HSTRING)-2i64;
  m_asyncInfo = pTask->m_asyncInfo;
  v5 = 0i64;
  v32 = 0i64;
  if ( m_asyncInfo )
  {
    v6 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVXboxUserProfile_Social_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)&v32);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v32;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8i64))(v5);
  v31 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  controllerIndex = pTask->m_controllerIndex;
  v7 = controllerIndex;
  Online_MetPlayer::s_instance.m_refreshInProgress[controllerIndex] = 0;
  if ( controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 112, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( taskState )
  {
    Com_Printf(25, "MeetPlayer_OnRequestGamertagForRecentMetPlayersComplete: GetUserProfilesAsync failed with task state %d\n", (unsigned int)taskState);
  }
  else
  {
    Com_Printf(25, "MeetPlayer_RequestGamertagForRecentMetPlayer GetUserProfilesAsync Completed\n");
    v40 = 0i64;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64i64))(v5, &v40);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v40;
    v10 = (HSTRING)v40;
    if ( v40 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8i64))(v40);
      v9 = v40;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    v39 = v10;
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8i64))(v10);
    v37[2] = v10;
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
    for ( i = 0; ; ++i )
    {
      v12 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v10 + 56i64))(v10, &v39);
      if ( v12 < 0 )
        __abi_WinRTraiseException(v12);
      if ( i >= (unsigned int)v39 )
        break;
      v13 = NULL;
      v35 = NULL;
      string = NULL;
      v14 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v10 + 48i64))(v10, i, &string);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = string;
      v16 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v15 = string;
      }
      if ( v15 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16i64))(v15);
      v34 = v16;
      if ( v16 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 8i64))(v16);
        v13 = v16;
        v35 = v16;
      }
      if ( v16 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v16 + 16i64))(v16);
      string = NULL;
      v17 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 96i64))(v13, &string);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = string;
      if ( string )
      {
        v19 = WindowsDuplicateString_0(string, &newString);
        if ( v19 < 0 )
          __abi_WinRTraiseException(v19);
        v20 = newString;
        v18 = string;
      }
      else
      {
        v20 = NULL;
      }
      WindowsDeleteString_0(v18);
      v34 = v20;
      ConvertPlatformStringToPlatformId((Platform::String *)v20, &platformId);
      WindowsDeleteString_0(v20);
      XUID::XUID(&xuidOut);
      if ( !Social_GetXUIDFromPlatformID(v7, platformId, &xuidOut) )
        goto LABEL_45;
      Instance = OnlineUserLists::GetInstance();
      v22 = platformId;
      string = NULL;
      v23 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 88i64))(v13, &string);
      if ( v23 < 0 )
        __abi_WinRTraiseException(v23);
      v24 = string;
      if ( string )
      {
        v25 = WindowsDuplicateString_0(string, v37);
        if ( v25 < 0 )
          __abi_WinRTraiseException(v25);
        v26 = v37[0];
        v24 = string;
      }
      else
      {
        v26 = NULL;
      }
      WindowsDeleteString_0(v24);
      v34 = v26;
      v27 = OnlineUserLists::SetUserXB3Data(Instance, controllerIndex, MOVEMENT, xuidOut, (Platform::String *)v26, v22);
      WindowsDeleteString_0(v26);
      if ( !v27 )
      {
LABEL_45:
        v28 = XUID::ToString(&xuidOut);
        Com_Printf(25, "MeetPlayer_OnRequestGamertagForRecentMetPlayersComplete: Couldnt find matching entry for xuid %s\n", v28);
      }
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
      v7 = controllerIndex;
    }
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
Online_MetPlayer::RefreshGamerTagDataReset
==============
*/
void Online_MetPlayer::RefreshGamerTagDataReset(Online_MetPlayer *this)
{
  int v2; 
  int v3; 

  v2 = Sys_Milliseconds();
  v3 = Dvar_GetInt_Internal_DebugName(DVARINT_xb3_meetplayer_gamertag_refresh_rate_ms, "xb3_meetplayer_gamertag_refresh_rate_ms") + v2;
  this->m_nextRefreshTime[0] = v3;
  *(_QWORD *)this->m_refreshInProgress = 0i64;
  *(_QWORD *)this->m_needToRefresh = 0i64;
  this->m_nextRefreshTime[1] = v3;
  *(_QWORD *)&this->m_refreshInProgress[2] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[2] = 0i64;
  this->m_nextRefreshTime[2] = v3;
  this->m_nextRefreshTime[3] = v3;
  *(_QWORD *)&this->m_refreshInProgress[4] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[4] = 0i64;
  this->m_nextRefreshTime[4] = v3;
  this->m_nextRefreshTime[5] = v3;
  *(_QWORD *)&this->m_refreshInProgress[6] = 0i64;
  *(_QWORD *)&this->m_needToRefresh[6] = 0i64;
  this->m_nextRefreshTime[6] = v3;
  this->m_nextRefreshTime[7] = v3;
}

/*
==============
Online_MetPlayer::RemoveFriends
==============
*/
void Online_MetPlayer::RemoveFriends(Online_MetPlayer *this, const int controllerIndex)
{
  OnlineUserLists *Instance; 
  UserList::User *p_users; 
  __int64 v5; 
  UserList *v6; 
  unsigned int v7; 
  int v8; 
  char *name; 
  Online_Friends *v10; 
  unsigned __int64 v11; 
  UserList::User *v12; 
  OnlineUserLists *v13; 
  UserList::User *userOut; 
  UserList *userListOut; 
  UserList::User users; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 393, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Com_Printf(25, "Online_MetPlayer::RemoveFriends called for controller index %d\n", (unsigned int)controllerIndex);
  userListOut = NULL;
  Instance = OnlineUserLists::GetInstance();
  if ( OnlineUserLists::GetUserList(Instance, controllerIndex, MOVEMENT, (const UserList **)&userListOut) )
  {
    p_users = &users;
    v5 = 200i64;
    do
    {
      UserList::User::User(p_users++);
      --v5;
    }
    while ( v5 );
    v6 = userListOut;
    v7 = 0;
    v8 = 0;
    if ( userListOut->m_numUsers )
    {
      name = users.name;
      do
      {
        userOut = NULL;
        if ( UserList::GetUserByIndex(v6, v7, (const UserList::User **)&userOut) )
        {
          v10 = Online_Friends::GetInstance();
          if ( Online_Friends::IsFriendByID(v10, controllerIndex, userOut->xuid) )
          {
            v11 = XUID::ToUint64(&userOut->xuid);
            Com_Printf(25, "Online_MetPlayer::RemoveFriends need to remove %llu\n", v11);
            v12 = userOut;
            XUID::operator=((XUID *)name - 2, &userOut->xuid);
            *((_QWORD *)name - 1) = v12->timeAdded;
            Core_strcpy(name, 0x40ui64, v12->name);
            Core_strcpy(name + 64, 0x40ui64, v12->nameWithHash);
            ++v8;
            *((_QWORD *)name + 16) = v12->xb3PlatformId;
            name[136] = v12->xb3DataSet;
            name += 160;
          }
        }
        v6 = userListOut;
        ++v7;
      }
      while ( v7 < userListOut->m_numUsers );
      if ( v8 > 0 )
      {
        v13 = OnlineUserLists::GetInstance();
        OnlineUserLists::RemoveUsersFromList(v13, controllerIndex, MOVEMENT, &users, v8);
      }
    }
  }
  else
  {
    Com_PrintWarning(25, "Online_MetPlayer::RemoveFriends recent players not downloaded, returning\n");
  }
}

/*
==============
Online_MetPlayer::RequestGamertagForRecentMetPlayers
==============
*/
void Online_MetPlayer::RequestGamertagForRecentMetPlayers(Online_MetPlayer *this, const int controllerIndex)
{
  __int64 v2; 
  OnlineUserLists *Instance; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  unsigned int v10; 
  UserList *v11; 
  unsigned __int64 XB3PlatformIdFromTemporaryData; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  Windows::Foundation::IAsyncInfo *v16; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ; 
  int v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *v23; 
  Windows::Foundation::IAsyncInfo *v24; 
  UserList *userListOut; 
  __int64 v26; 
  __int64 v27; 
  Windows::Foundation::IAsyncInfo *v28; 
  TaskCreateRequest pTaskCreateRequest; 
  unsigned __int64 outPlatformId; 
  __int64 v31; 
  int *v32; 
  Microsoft::Xbox::Services::XboxLiveContext *v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v37; 
  __int64 v38; 
  Windows::Foundation::Collections::IVectorView<Platform::String _> *v39; 
  __int64 v40; 
  Windows::Foundation::IAsyncInfo *v41; 
  TaskCreateResult pTaskCreateResult; 
  UserList::User *userOut; 
  Platform::String *stringXUID; 

  v35 = -2i64;
  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 169, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( Live_IsUserSignedInToLive(v2) )
  {
    userListOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( OnlineUserLists::GetUserList(Instance, v2, MOVEMENT, (const UserList **)&userListOut) && userListOut->m_numUsers && !UserList::IsDWTaskActive(userListOut) )
    {
      UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v2);
      v6 = (__int64)UsersXboxLiveContext;
      v33 = UsersXboxLiveContext;
      if ( UsersXboxLiveContext )
        UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
      v36 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      if ( !v6 )
      {
        Com_PrintWarning(25, "MeetPlayer_RequestGamertagForRecentMetPlayer: controller %d has no LiveContext!\n", (unsigned int)v2);
        return;
      }
      v7 = 0;
      userOut = (UserList::User *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>((Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)userOut);
      v9 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v8;
      v34 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
      v37 = v9;
      if ( v9 )
        v9->__abi_Release(v9);
      v10 = 0;
      v11 = userListOut;
      if ( userListOut->m_numUsers )
      {
        while ( 1 )
        {
          userOut = NULL;
          if ( !UserList::GetUserByIndex(v11, v10, (const UserList::User **)&userOut) || userOut->xb3DataSet || !Social_IsUserOnSamePlatform(v2, userOut->xuid) )
            goto LABEL_27;
          stringXUID = NULL;
          XB3PlatformIdFromTemporaryData = Online_MetPlayer::GetXB3PlatformIdFromTemporaryData(this, v2, userOut->xuid);
          outPlatformId = XB3PlatformIdFromTemporaryData;
          if ( XB3PlatformIdFromTemporaryData )
            goto LABEL_25;
          if ( XUID::GetPlatformIdFromXuid(userOut->xuid, &outPlatformId) )
            break;
LABEL_26:
          WindowsDeleteString_0((HSTRING)stringXUID);
LABEL_27:
          ++v10;
          v11 = userListOut;
          if ( v10 >= userListOut->m_numUsers )
          {
            if ( v7 )
            {
              v31 = v2;
              v32 = &this->m_refreshInProgress[v2];
              *v32 = 1;
              Com_Printf(25, "Calling MeetPlayer_RequestGamertagForRecentMetPlayer for controller %d\n", (unsigned int)v2);
              v26 = 0i64;
              v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 56i64))(v6, &v26);
              if ( v13 < 0 )
                __abi_WinRTraiseException(v13);
              v14 = v26;
              v15 = v26;
              if ( v26 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8i64))(v26);
                v14 = v26;
              }
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
              v28 = (Windows::Foundation::IAsyncInfo *)v15;
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8i64))(v15);
              v38 = v15;
              if ( v15 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
              pTaskCreateRequest.m_appTaskType = -1;
              v16 = NULL;
              memset(&pTaskCreateRequest.m_appData, 0, 32);
              pTaskCreateRequest.m_onUpdateCallback = NULL;
              pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
              pTaskCreateRequest.m_timeoutInSeconds = 0;
              pTaskCreateResult.m_localTaskId = 0;
              pTaskCreateResult.m_task = NULL;
              pTaskCreateRequest.m_controllerIndex = v2;
              pTaskCreateRequest.m_onCompletionCallback = OnRequestGamertagForRecentMetPlayersComplete;
              View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ = j__GetView__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ(v9);
              v39 = View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ;
              v27 = 0i64;
              v18 = (*(__int64 (__fastcall **)(__int64, Windows::Foundation::Collections::IVectorView<Platform::String _> *, __int64 *))(*(_QWORD *)v15 + 56i64))(v15, View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ, &v27);
              if ( v18 < 0 )
                __abi_WinRTraiseException(v18);
              v19 = v27;
              v20 = v27;
              if ( v27 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8i64))(v27);
                v19 = v27;
              }
              if ( v19 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
              v40 = v20;
              v28 = NULL;
              if ( v20 )
              {
                v21 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v20)(v20, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v28);
                if ( v21 < 0 )
                  __abi_WinRTraiseException(v21);
                v16 = v28;
              }
              v41 = v16;
              m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
              if ( v16 != pTaskCreateRequest.m_asyncInfo )
              {
                if ( v16 )
                {
                  v16->__abi_AddRef(v16);
                  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
                }
                if ( m_asyncInfo )
                  m_asyncInfo->__abi_Release(m_asyncInfo);
                pTaskCreateRequest.m_asyncInfo = v16;
              }
              if ( v16 )
                v16->__abi_Release(v16);
              if ( v20 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
              if ( View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ )
                View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ->__abi_Release(View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ);
              v23 = TaskManager::GetInstance();
              if ( !TaskManager::CreateTask(v23, &pTaskCreateRequest, &pTaskCreateResult) )
              {
                *v32 = 0;
                Com_Printf(25, "MeetPlayer_RequestGamertagForRecentMetPlayer: GetUserProfilesAsync CreateTask failed! Will try again at %d", (unsigned int)this->m_nextRefreshTime[v31]);
              }
              pTaskCreateRequest.m_onCompletionCallback = NULL;
              pTaskCreateRequest.m_onUpdateCallback = NULL;
              pTaskCreateRequest.m_appSecondaryCallback = NULL;
              pTaskCreateRequest.m_timeoutInSeconds = 0;
              v24 = pTaskCreateRequest.m_asyncInfo;
              if ( pTaskCreateRequest.m_asyncInfo )
              {
                pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
                v24 = NULL;
                pTaskCreateRequest.m_asyncInfo = NULL;
              }
              if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
                {
                  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
                    ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
                  pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
                }
                v24 = pTaskCreateRequest.m_asyncInfo;
              }
              if ( v24 )
                v24->__abi_Release(v24);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
            }
            goto LABEL_71;
          }
        }
        XB3PlatformIdFromTemporaryData = outPlatformId;
LABEL_25:
        ConvertPlatformIdToPlatformString(XB3PlatformIdFromTemporaryData, &stringXUID);
        j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v9, stringXUID);
        ++v7;
        goto LABEL_26;
      }
LABEL_71:
      if ( v9 )
        v9->__abi_Release(v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    }
  }
}

/*
==============
Online_MetPlayer::ShouldUpdateMember
==============
*/
bool Online_MetPlayer::ShouldUpdateMember(Online_MetPlayer *this, const int controllerIndex, const XUID player, const unsigned int systemTime)
{
  unsigned __int64 v4; 
  OnlineUserLists *Instance; 
  int Int_Internal_DebugName; 
  bool result; 
  UserList::User *userOut; 
  XUID xuid; 

  xuid.m_id = player.m_id;
  v4 = systemTime;
  result = 0;
  if ( XUID::IsValid(&xuid) )
  {
    userOut = NULL;
    Instance = OnlineUserLists::GetInstance();
    if ( !OnlineUserLists::GetUserByXUID(Instance, controllerIndex, MOVEMENT, xuid, (const UserList::User **)&userOut) )
      return 1;
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_recentplayers_update_minutes_cooldown, "recentplayers_update_minutes_cooldown");
    if ( userOut->timeAdded + (unsigned int)(60 * Int_Internal_DebugName) <= v4 )
      return 1;
  }
  return result;
}

/*
==============
Online_MetPlayer::UpdateMember
==============
*/
bool Online_MetPlayer::UpdateMember(Online_MetPlayer *this, const int controllerIndex, const XUID playerXuid, const char *playerName)
{
  OnlineUserLists *Instance; 
  UserList::User users; 
  XUID xuid; 

  xuid.m_id = playerXuid.m_id;
  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 479, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  if ( !XUID::IsValid(&xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 480, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", (const char *)&queryFormat, "playerXuid.IsValid()") )
    __debugbreak();
  UserList::User::User(&users);
  XUID::operator=(&users.xuid, &xuid);
  Core_strcpy(users.name, 0x40ui64, playerName);
  Instance = OnlineUserLists::GetInstance();
  return OnlineUserLists::AddUsersToList(Instance, controllerIndex, MOVEMENT, &users, 1);
}

/*
==============
Online_MetPlayer::UpdateMemberXB3
==============
*/
bool Online_MetPlayer::UpdateMemberXB3(Online_MetPlayer *this, const int controllerIndex, const XUID playerXuid, const unsigned __int64 platformId, const char *playerName)
{
  const char *v5; 
  __int64 v6; 
  XB3MetPlayerTemporaryData *v9; 
  __int64 v10; 
  OnlineUserLists *Instance; 
  XUID v13; 
  UserList::User users; 
  XUID xuid; 

  xuid.m_id = playerXuid.m_id;
  v5 = playerName;
  v6 = controllerIndex;
  if ( !playerName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 456, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName") )
    __debugbreak();
  if ( !XUID::IsValid(&xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 457, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", (const char *)&queryFormat, "playerXuid.IsValid()") )
    __debugbreak();
  if ( platformId && !Online_MetPlayer::GetXB3PlatformIdFromTemporaryData(this, v6, xuid) )
  {
    v9 = &s_xb3MetPlayerTemporaryData[v6];
    XUID::operator=(&v9->users[v9->nextIndex].xuid, &xuid);
    v9->users[v9->nextIndex].platformId = platformId;
    v10 = ((v9->nextIndex + 1) * (unsigned __int128)0x47AE147AE147AE15ui64) >> 64;
    v9->nextIndex = v9->nextIndex + 1 - 200 * ((v10 + (((unsigned __int64)(v9->nextIndex + 1) - v10) >> 1)) >> 7);
  }
  v13.m_id = xuid.m_id;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 479, ASSERT_TYPE_ASSERT, "(playerName)", (const char *)&queryFormat, "playerName", v13.m_id) )
    __debugbreak();
  if ( !XUID::IsValid(&v13) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_metplayer.cpp", 480, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", (const char *)&queryFormat, "playerXuid.IsValid()") )
    __debugbreak();
  UserList::User::User(&users);
  XUID::operator=(&users.xuid, &v13);
  Core_strcpy(users.name, 0x40ui64, v5);
  Instance = OnlineUserLists::GetInstance();
  return OnlineUserLists::AddUsersToList(Instance, v6, MOVEMENT, &users, 1);
}

/*
==============
GetPositionByXuid
==============
*/
__int64 GetPositionByXuid(const XUID xuid)
{
  __int64 v1; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v1 = 0i64;
  if ( !s_partyChatUserList.size )
    return 0xFFFFFFFFi64;
  while ( !XUID::operator==(&s_partyChatUserList.xuids[v1], &xuida) )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= s_partyChatUserList.size )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v1;
}

