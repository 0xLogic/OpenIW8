/*
==============
Online_Friends::IsConnected
==============
*/

bool __fastcall Online_Friends::IsConnected(Online_Friends *this, const int localControllerIndex)
{
  return ?IsConnected@Online_Friends@@QEAA_NH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetPlatformUserIdFromXuidIfPlatformFriend
==============
*/

bool __fastcall Online_Friends::GetPlatformUserIdFromXuidIfPlatformFriend(Online_Friends *this, const int controllerIndex, XUID xuid, unsigned __int64 *outPlatformId)
{
  return ?GetPlatformUserIdFromXuidIfPlatformFriend@Online_Friends@@QEAA_NHUXUID@@AEA_K@Z(this, controllerIndex, xuid, outPlatformId);
}

/*
==============
Online_Friends::RequestPresenceForPeopleGroup
==============
*/

void __fastcall Online_Friends::RequestPresenceForPeopleGroup(Online_Friends *this, const int localControllerIndex)
{
  ?RequestPresenceForPeopleGroup@Online_Friends@@AEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::EnumerateFriends
==============
*/

void __fastcall Online_Friends::EnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  ?EnumerateFriends@Online_Friends@@AEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::RequestBatchProfileInformation
==============
*/

void __fastcall Online_Friends::RequestBatchProfileInformation(Online_Friends *this, const int localControllerIndex)
{
  ?RequestBatchProfileInformation@Online_Friends@@QEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::UserIdResolved
==============
*/

void __fastcall Online_Friends::UserIdResolved(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId, const XUID xuid)
{
  ?UserIdResolved@Online_Friends@@AEAAXH_KUXUID@@@Z(this, controllerIndex, platformId, xuid);
}

/*
==============
Online_Friends_GetSessionsForUsersComplete
==============
*/

void __fastcall Online_Friends_GetSessionsForUsersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?Online_Friends_GetSessionsForUsersComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Friends::ShowPlayerCard
==============
*/

void __fastcall Online_Friends::ShowPlayerCard(Online_Friends *this, const int localControllerIndex, unsigned __int64 platformId)
{
  ?ShowPlayerCard@Online_Friends@@QEAAXH_K@Z(this, localControllerIndex, platformId);
}

/*
==============
Online_Friends::GetSessionsForUsers
==============
*/

void __fastcall Online_Friends::GetSessionsForUsers(Online_Friends *this, const int localControllerIndex, unsigned __int64 *userPlatformIds, const int userCount)
{
  ?GetSessionsForUsers@Online_Friends@@QEAAXHPEA_KH@Z(this, localControllerIndex, userPlatformIds, userCount);
}

/*
==============
Online_Friends::GetIsSessionClosed
==============
*/

bool __fastcall Online_Friends::GetIsSessionClosed(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return ?GetIsSessionClosed@Online_Friends@@AEAA_NHH@Z(this, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::UpdateNeeded
==============
*/

bool __fastcall Online_Friends::UpdateNeeded(Online_Friends *this, const int localControllerIndex)
{
  return ?UpdateNeeded@Online_Friends@@AEAA_NH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::OnFriendsRefreshRequired
==============
*/

void __fastcall Online_Friends::OnFriendsRefreshRequired(Online_Friends *this, const int localControllerIndex)
{
  ?OnFriendsRefreshRequired@Online_Friends@@AEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetFriendsDetailsForUI
==============
*/

bool __fastcall Online_Friends::GetFriendsDetailsForUI(Online_Friends *this, const int localControllerIndex, XUID xuid, unsigned __int64 platformId, char *presenceOut, char *gamertagOut, bool *isSessionPrivateOut)
{
  return ?GetFriendsDetailsForUI@Online_Friends@@QEAA_NHUXUID@@_KPEAD2AEA_N@Z(this, localControllerIndex, xuid, platformId, presenceOut, gamertagOut, isSessionPrivateOut);
}

/*
==============
Online_Friends::GetPresence
==============
*/

void __fastcall Online_Friends::GetPresence(Online_Friends *this, const int localControllerIndex, const int friendIndex, char *presenceOut, const unsigned __int64 presenceOutSize)
{
  ?GetPresence@Online_Friends@@QEAAXHHPEAD_K@Z(this, localControllerIndex, friendIndex, presenceOut, presenceOutSize);
}

/*
==============
Online_Friends::RetryEnumerateFriends
==============
*/

int __fastcall Online_Friends::RetryEnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  return ?RetryEnumerateFriends@Online_Friends@@QEAAHH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::OnRequestBatchProfileInformationComplete
==============
*/

void __fastcall Online_Friends::OnRequestBatchProfileInformationComplete(Online_Friends *this, const int localControllerIndex, Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *userProfiles)
{
  ?OnRequestBatchProfileInformationComplete@Online_Friends@@QEAAXHPE$AAU?$IVectorView@PE$AAVXboxUserProfile@Social@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@@Z(this, localControllerIndex, userProfiles);
}

/*
==============
Online_Friends::GetIndexOfPlatformIdInSessionsCache
==============
*/

int __fastcall Online_Friends::GetIndexOfPlatformIdInSessionsCache(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId)
{
  return ?GetIndexOfPlatformIdInSessionsCache@Online_Friends@@QEAAHH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_Friends::GetIsSameTitleID
==============
*/

bool __fastcall Online_Friends::GetIsSameTitleID(Online_Friends *this, const int localControllerIndex, const int friendIndex, const char **errorString)
{
  return ?GetIsSameTitleID@Online_Friends@@AEAA_NHHPEAPEBD@Z(this, localControllerIndex, friendIndex, errorString);
}

/*
==============
Online_Friends::HandleRefreshFriendsWidgetCommand
==============
*/

void __fastcall Online_Friends::HandleRefreshFriendsWidgetCommand(Online_Friends *this)
{
  ?HandleRefreshFriendsWidgetCommand@Online_Friends@@QEAAXXZ(this);
}

/*
==============
FriendsRefresh_f
==============
*/

void __fastcall FriendsRefresh_f()
{
  ?FriendsRefresh_f@@YAXXZ();
}

/*
==============
Online_Friends::IsFriendOnlineInTitle
==============
*/

bool __fastcall Online_Friends::IsFriendOnlineInTitle(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  return ?IsFriendOnlineInTitle@Online_Friends@@QEAA_NHH@Z(this, controllerIndex, friendIndex);
}

/*
==============
Online_Friends::CompleteEnumerateFriends
==============
*/

void __fastcall Online_Friends::CompleteEnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  ?CompleteEnumerateFriends@Online_Friends@@QEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::ControllerFrame
==============
*/

void __fastcall Online_Friends::ControllerFrame(Online_Friends *this, const int controllerIndex)
{
  ?ControllerFrame@Online_Friends@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
FriendsWidgetRefresh_f
==============
*/

void __fastcall FriendsWidgetRefresh_f()
{
  ?FriendsWidgetRefresh_f@@YAXXZ();
}

/*
==============
Live_OnRequestPresenceForPeopleGroupComplete
==============
*/

void __fastcall Live_OnRequestPresenceForPeopleGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?Live_OnRequestPresenceForPeopleGroupComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Online_Friends::GetIsSessionPrivate
==============
*/

bool __fastcall Online_Friends::GetIsSessionPrivate(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return ?GetIsSessionPrivate@Online_Friends@@AEAA_NHH@Z(this, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::OnRequestPresenceForPeopleGroupComplete
==============
*/

void __fastcall Online_Friends::OnRequestPresenceForPeopleGroupComplete(Online_Friends *this, const int localControllerIndex, Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *records, eTaskManagerTaskState taskState)
{
  ?OnRequestPresenceForPeopleGroupComplete@Online_Friends@@QEAAXHPE$AAU?$IVectorView@PE$AAVPresenceRecord@Presence@Services@Xbox@Microsoft@@@Collections@Foundation@Windows@@W4eTaskManagerTaskState@@@Z(this, localControllerIndex, records, taskState);
}

/*
==============
Online_Friends::GetGamertag
==============
*/

void __fastcall Online_Friends::GetGamertag(Online_Friends *this, const int localControllerIndex, const int friendIndex, char *gamertagOut, const unsigned __int64 gamertagOutSize)
{
  ?GetGamertag@Online_Friends@@QEAAXHHPEAD_K@Z(this, localControllerIndex, friendIndex, gamertagOut, gamertagOutSize);
}

/*
==============
Online_Friends::PlatformInit
==============
*/

bool __fastcall Online_Friends::PlatformInit(Online_Friends *this)
{
  return ?PlatformInit@Online_Friends@@QEAA_NXZ(this);
}

/*
==============
Online_Friends::FindFriendIndexByPlatformId
==============
*/

int __fastcall Online_Friends::FindFriendIndexByPlatformId(Online_Friends *this, const int localControllerIndex, friendList_t *friendList, const unsigned __int64 friendPlatformId)
{
  return ?FindFriendIndexByPlatformId@Online_Friends@@QEAAHHPEAUfriendList_t@@_K@Z(this, localControllerIndex, friendList, friendPlatformId);
}

/*
==============
Online_Friends::ResetCurrentFriendsSelections
==============
*/

void __fastcall Online_Friends::ResetCurrentFriendsSelections(Online_Friends *this, const int controllerIndex)
{
  ?ResetCurrentFriendsSelections@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::DoesUserHaveValidLobbySession
==============
*/

bool __fastcall Online_Friends::DoesUserHaveValidLobbySession(Online_Friends *this, int controllerIndex, unsigned __int64 platformId)
{
  return ?DoesUserHaveValidLobbySession@Online_Friends@@QEAA_NH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_Friends::AddUserToFriendsSessionListAtIndex
==============
*/

void __fastcall Online_Friends::AddUserToFriendsSessionListAtIndex(Online_Friends *this, const int controllerIndex, unsigned __int64 platformId, int index)
{
  ?AddUserToFriendsSessionListAtIndex@Online_Friends@@QEAAXH_KH@Z(this, controllerIndex, platformId, index);
}

/*
==============
Online_Friends::IsSessionInfoValid
==============
*/

bool __fastcall Online_Friends::IsSessionInfoValid(Online_Friends *this, Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *const sessionInfo)
{
  return ?IsSessionInfoValid@Online_Friends@@QEAA_NQE$AAVMultiplayerSessionReference@Multiplayer@Services@Xbox@Microsoft@@@Z(this, sessionInfo);
}

/*
==============
Online_Friends::SendInviteMessage
==============
*/

eFriendPartyInviteError __fastcall Online_Friends::SendInviteMessage(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  return ?SendInviteMessage@Online_Friends@@QEAA?AW4eFriendPartyInviteError@@HUXUID@@@Z(this, localControllerIndex, friendId);
}

/*
==============
Online_Friends::HandleRefreshFriendsCommand
==============
*/

void __fastcall Online_Friends::HandleRefreshFriendsCommand(Online_Friends *this)
{
  ?HandleRefreshFriendsCommand@Online_Friends@@QEAAXXZ(this);
}

/*
==============
Online_Friends::GetIsSessionValid
==============
*/

bool __fastcall Online_Friends::GetIsSessionValid(Online_Friends *this, const int localControllerIndex, const int friendIndex, const char **errorString)
{
  return ?GetIsSessionValid@Online_Friends@@AEAA_NHHPEAPEBD@Z(this, localControllerIndex, friendIndex, errorString);
}

/*
==============
Online_Friends::AddFriendSessionList
==============
*/

void __fastcall Online_Friends::AddFriendSessionList(Online_Friends *this, tFriendSession *friendSession)
{
  ?AddFriendSessionList@Online_Friends@@QEAAXUtFriendSession@@@Z(this, friendSession);
}

/*
==============
Online_Friends::AddFriendSessionList
==============
*/
void Online_Friends::AddFriendSessionList(Online_Friends *this, tFriendSession *friendSession)
{
  ntl::fixed_vector<tFriendSession,16,0> *p_m_friendSessionList; 
  char *v5; 
  std::_Ref_count_base *Rep; 

  if ( this->m_friendSessionList.m_size >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1222, ASSERT_TYPE_ASSERT, "(m_friendSessionList.size() < 16)", (const char *)&queryFormat, "m_friendSessionList.size() < MAX_XB3_FRIENDS_SESSIONS", -2i64) )
    __debugbreak();
  if ( this->m_friendSessionList.m_size < 0x10 )
  {
    p_m_friendSessionList = &this->m_friendSessionList;
    if ( p_m_friendSessionList->m_size >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
      __debugbreak();
    v5 = &p_m_friendSessionList->m_data.m_buffer[48 * p_m_friendSessionList->m_size];
    *(_QWORD *)v5 = 0i64;
    *((_QWORD *)v5 + 1) = 0i64;
    Rep = friendSession->mp_session._Rep;
    if ( Rep )
      _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    *(_QWORD *)v5 = friendSession->mp_session._Ptr;
    *((_QWORD *)v5 + 1) = friendSession->mp_session._Rep;
    std::wstring::wstring((std::wstring *)(v5 + 16), &friendSession->handleId);
    ++p_m_friendSessionList->m_size;
  }
  tFriendSession::~tFriendSession(friendSession);
}

/*
==============
Online_Friends::AddUserToFriendsSessionListAtIndex
==============
*/
void Online_Friends::AddUserToFriendsSessionListAtIndex(Online_Friends *this, const int controllerIndex, unsigned __int64 platformId, int index)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v8; 

  v4 = controllerIndex;
  v5 = index;
  if ( this->sessionFetchInProgress[controllerIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 685, ASSERT_TYPE_ASSERT, "(sessionFetchInProgress[controllerIndex] == false)", (const char *)&queryFormat, "sessionFetchInProgress[controllerIndex] == false") )
    __debugbreak();
  v8 = v5 + (v4 << 6);
  if ( this->m_friendsWithJoinableSessions[0][v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 686, ASSERT_TYPE_ASSERT, "(m_friendsWithJoinableSessions[controllerIndex][index] == (0))", (const char *)&queryFormat, "m_friendsWithJoinableSessions[controllerIndex][index] == INVALID_PLATFORM_ID") )
    __debugbreak();
  this->m_friendsWithJoinableSessions[0][v8] = platformId;
}

/*
==============
Online_Friends::CompleteEnumerateFriends
==============
*/
void Online_Friends::CompleteEnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  this->m_friendClientLists[ClientFromController][1].isUpdating = 0;
  this->m_friendClientListGlobal[ClientFromController].refreshRequired = 1;
  *(_QWORD *)&this->m_friendEnumerateRetryTime = 0i64;
  ProcessPreviousXUIDsForUnsubscribe(localControllerIndex);
}

/*
==============
Online_Friends::ControllerFrame
==============
*/
void Online_Friends::ControllerFrame(Online_Friends *this, const int controllerIndex)
{
  int v4; 
  const dvar_t *v5; 
  int v7; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  if ( this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].dirty && !Live_IsSystemUiActive() )
  {
    v4 = Sys_Milliseconds();
    if ( !Live_UserIsGuest(controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && !this->m_friendClientLists[CL_Mgr_GetClientFromController(controllerIndex)][1].isUpdating && v4 >= this->m_friendEnumerateRetryTime )
    {
      if ( Live_HasWANConnectivity() )
        Online_Friends::RequestPresenceForPeopleGroup(this, controllerIndex);
      else
        this->m_friendEnumerateRetryTime = v4 + 1000 * Live_GenerateRandomTimeToRetryInSeconds(++this->m_friendEnumerateRetryCount, 0x1Eu);
    }
    LiveParty_ForceSystemPartyPresenceRefresh();
  }
  if ( this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].refreshRequired )
    Online_Friends::OnFriendsRefreshRequired(this, controllerIndex);
  LUI_DataBindingLive_UpdateFriends(controllerIndex);
  v5 = DVARBOOL_online_crossplay_friends_enabled;
  if ( !DVARBOOL_online_crossplay_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_crossplay_friends_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    Online_Friends::Crossplay_FetchFriendsList(this, controllerIndex);
    Online_Friends::Crossplay_FetchIncomingFriendRequests(this, controllerIndex);
    Online_Friends::Crossplay_FetchOutgoingFriendRequests(this, controllerIndex);
  }
}

/*
==============
Online_Friends::DoesUserHaveValidLobbySession
==============
*/
char Online_Friends::DoesUserHaveValidLobbySession(Online_Friends *this, int controllerIndex, unsigned __int64 platformId)
{
  __int64 v3; 
  unsigned __int64 *i; 

  v3 = 0i64;
  for ( i = this->m_friendsWithJoinableSessions[(__int64)controllerIndex]; *i != platformId; ++i )
  {
    if ( ++v3 >= 64 )
      return 0;
  }
  return 1;
}

/*
==============
Online_Friends::EnumerateFriends
==============
*/
void Online_Friends::EnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  int v4; 

  v4 = Sys_Milliseconds();
  if ( !Live_UserIsGuest(localControllerIndex) && Live_IsUserSignedInToLive(localControllerIndex) && !this->m_friendClientLists[CL_Mgr_GetClientFromController(localControllerIndex)][1].isUpdating && v4 >= this->m_friendEnumerateRetryTime )
  {
    if ( Live_HasWANConnectivity() )
      Online_Friends::RequestPresenceForPeopleGroup(this, localControllerIndex);
    else
      this->m_friendEnumerateRetryTime = v4 + 1000 * Live_GenerateRandomTimeToRetryInSeconds(++this->m_friendEnumerateRetryCount, 0x1Eu);
  }
}

/*
==============
Online_Friends::FindFriendIndexByPlatformId
==============
*/
__int64 Online_Friends::FindFriendIndexByPlatformId(Online_Friends *this, const int localControllerIndex, friendList_t *friendList, const unsigned __int64 friendPlatformId)
{
  unsigned int v6; 
  unsigned int count; 

  v6 = 0;
  count = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].count;
  if ( !count )
    return 0xFFFFFFFFi64;
  while ( friendPlatformId != friendList->friends[0].platformId )
  {
    ++v6;
    friendList = (friendList_t *)((char *)friendList + 224);
    if ( v6 >= count )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

/*
==============
FriendsRefresh_f
==============
*/
void FriendsRefresh_f(void)
{
  Online_Friends *Instance; 
  LocalClientNum_t v1; 
  unsigned int ControllerFromClient; 
  unsigned int v3; 
  __int64 ClientFromController; 
  Online_MetPlayer *v5; 
  unsigned int v6; 
  int v7; 

  Instance = Online_Friends::GetInstance();
  v1 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
  v3 = Sys_Milliseconds();
  if ( ControllerFromClient >= 8 )
  {
    v7 = 8;
    v6 = ControllerFromClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1122, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
  if ( friendsMinimumRefreshTimer->current.integer + Instance->m_friendClientListGlobal[ClientFromController].lastTimeFetched < v3 )
    Instance->m_friendClientListGlobal[ClientFromController].dirty = 1;
  LiveParty_Update_Platform();
  v5 = Online_MetPlayer::GetInstance();
  Online_MetPlayer::MarkForGamerTagRefresh(v5, ControllerFromClient);
}

/*
==============
FriendsWidgetRefresh_f
==============
*/
void FriendsWidgetRefresh_f(void)
{
  Online_Friends *Instance; 
  LocalClientNum_t v1; 
  unsigned int ControllerFromClient; 
  unsigned int v3; 
  __int64 ClientFromController; 
  unsigned int v5; 
  int v6; 

  Instance = Online_Friends::GetInstance();
  v1 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v1);
  v3 = Sys_Milliseconds();
  if ( ControllerFromClient >= 8 )
  {
    v6 = 8;
    v5 = ControllerFromClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1154, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
  if ( friendsWidgetMinimumRefreshTimer->current.integer + Instance->m_friendClientListGlobal[ClientFromController].lastTimeFetched < v3 )
    Instance->m_friendClientListGlobal[ClientFromController].dirty = 1;
}

/*
==============
Online_Friends::GetFriendsDetailsForUI
==============
*/
bool Online_Friends::GetFriendsDetailsForUI(Online_Friends *this, const int localControllerIndex, XUID xuid, unsigned __int64 platformId, char *presenceOut, char *gamertagOut, bool *isSessionPrivateOut)
{
  char *returnString; 
  char *v9; 
  bool *v11; 
  int Index; 
  const char *v14; 
  bool result; 
  friendList_t *FriendList; 
  XUID v17; 

  v17.m_id = xuid.m_id;
  returnString = presenceOut;
  v9 = gamertagOut;
  v11 = isSessionPrivateOut;
  *presenceOut = 0;
  *v9 = 0;
  *v11 = 1;
  Index = Online_Friends::FindIndex(this, localControllerIndex, xuid);
  if ( Index == -1 && (Index = Online_Friends::FindIndexByPlatformId(this, localControllerIndex, platformId), Index == -1) )
  {
    v14 = XUID::ToDevString(&v17);
    Com_PrintWarning(25, "Friends_GetFriendsDetailsForUI_Platform : Could not find friend with xuid %s, platformId %zu\n", v14, platformId);
    return 0;
  }
  else
  {
    FriendList = Online_Friends::GetFriendList(this, localControllerIndex);
    Live_GetPresenceString((FriendList->friends[Index].dwFriendState & 4) != 0, (FriendList->friends[Index].dwFriendState & 2) != 0, FriendList->friends[Index].dwTitleID == 609700427, FriendList->friends[Index].wszRichPresence, returnString, 0x80ui64);
    Online_Friends::GetGamertag(this, localControllerIndex, Index, v9, 0x80ui64);
    result = 1;
    *v11 = 0;
  }
  return result;
}

/*
==============
Online_Friends::GetGamertag
==============
*/
void Online_Friends::GetGamertag(Online_Friends *this, const int localControllerIndex, const int friendIndex, char *gamertagOut, const unsigned __int64 gamertagOutSize)
{
  __int64 v5; 
  friendList_t *FriendList; 

  v5 = friendIndex;
  if ( !gamertagOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1089, ASSERT_TYPE_ASSERT, "(gamertagOut)", (const char *)&queryFormat, "gamertagOut") )
    __debugbreak();
  if ( !gamertagOutSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1090, ASSERT_TYPE_ASSERT, "(gamertagOutSize > 0)", (const char *)&queryFormat, "gamertagOutSize > 0") )
    __debugbreak();
  FriendList = Online_Friends::GetFriendList(this, localControllerIndex);
  if ( (int)v5 >= 0 )
    Core_strcpy(gamertagOut, gamertagOutSize, FriendList->friends[v5].szGamertag);
  else
    *gamertagOut = 0;
}

/*
==============
Online_Friends::GetIndexOfPlatformIdInSessionsCache
==============
*/
__int64 Online_Friends::GetIndexOfPlatformIdInSessionsCache(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId)
{
  unsigned int v3; 
  __int64 v4; 
  unsigned __int64 *i; 

  v3 = 0;
  v4 = 0i64;
  for ( i = this->m_friendsWithJoinableSessions[(__int64)controllerIndex]; *i != platformId; ++i )
  {
    ++v3;
    if ( ++v4 >= 64 )
      return 0xFFFFFFFFi64;
  }
  return v3;
}

/*
==============
Online_Friends::GetIsSameTitleID
==============
*/
char Online_Friends::GetIsSameTitleID(Online_Friends *this, const int localControllerIndex, const int friendIndex, const char **errorString)
{
  __int64 v4; 
  unsigned int count; 
  __int64 dwTitleID; 
  __int64 v11; 
  __int64 v12; 

  v4 = friendIndex;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  count = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].count;
  if ( (unsigned int)v4 >= count )
  {
    LODWORD(v12) = count;
    LODWORD(v11) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1197, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( m_friendClientListGlobal[localClientNum].count )", "friendIndex doesn't index m_friendClientListGlobal[localClientNum].count\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  dwTitleID = Online_Friends::GetFriendList(this, localControllerIndex)->friends[v4].dwTitleID;
  if ( (_DWORD)dwTitleID == 609700427 )
    return 1;
  Com_Printf(25, "FriendsMenu_GetIsSessionValid_Platform returning false due to friendInfo->dwTitleID (%x) != TITLEID_CURRENT (%x)\n", dwTitleID, 609700427i64);
  *errorString = "MENU/JOIN_SESSION_INVALID";
  return 0;
}

/*
==============
Online_Friends::GetIsSessionClosed
==============
*/
bool Online_Friends::GetIsSessionClosed(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return 0;
}

/*
==============
Online_Friends::GetIsSessionPrivate
==============
*/
bool Online_Friends::GetIsSessionPrivate(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return 0;
}

/*
==============
Online_Friends::GetIsSessionValid
==============
*/
char Online_Friends::GetIsSessionValid(Online_Friends *this, const int localControllerIndex, const int friendIndex, const char **errorString)
{
  __int64 v5; 
  __int64 v6; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 *i; 
  __int64 v12; 

  v5 = friendIndex;
  v6 = localControllerIndex;
  if ( PlatformSessionsHSMEnabled() )
  {
    if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 498, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
      __debugbreak();
    if ( (unsigned int)v5 >= 0x4B0 )
    {
      LODWORD(v12) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 499, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( 1200 )", "friendIndex doesn't index MAX_FRIENDS\n\t%i not in [0, %i)", v12, 1200) )
        __debugbreak();
    }
    v8 = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(v6)].friendPlatformIds[v5];
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 503, ASSERT_TYPE_ASSERT, "(friendPlatformId != (0))", (const char *)&queryFormat, "friendPlatformId != INVALID_PLATFORM_ID") )
      __debugbreak();
    v9 = 0i64;
    for ( i = this->m_friendsWithJoinableSessions[v6]; *i != v8; ++i )
    {
      if ( ++v9 >= 64 )
      {
        *errorString = "MENU/JOIN_SESSION_INVALID";
        return 0;
      }
    }
  }
  return 1;
}

/*
==============
Online_Friends::GetPlatformUserIdFromXuidIfPlatformFriend
==============
*/
char Online_Friends::GetPlatformUserIdFromXuidIfPlatformFriend(Online_Friends *this, const int controllerIndex, XUID xuid, unsigned __int64 *outPlatformId)
{
  if ( Online_Friends::FindIndex(this, controllerIndex, xuid) == -1 )
    return 0;
  *outPlatformId = XUID::GetPlatformIdFromXuid(xuid);
  return 1;
}

/*
==============
Online_Friends::GetPresence
==============
*/
void Online_Friends::GetPresence(Online_Friends *this, const int localControllerIndex, const int friendIndex, char *presenceOut, const unsigned __int64 presenceOutSize)
{
  __int64 v5; 
  friendList_t *FriendList; 

  v5 = friendIndex;
  if ( !presenceOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1000, ASSERT_TYPE_ASSERT, "(presenceOut)", (const char *)&queryFormat, "presenceOut") )
    __debugbreak();
  if ( !presenceOutSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1001, ASSERT_TYPE_ASSERT, "(presenceOutSize > 0)", (const char *)&queryFormat, "presenceOutSize > 0") )
    __debugbreak();
  FriendList = Online_Friends::GetFriendList(this, localControllerIndex);
  if ( (_DWORD)v5 == -1 )
    *presenceOut = 0;
  else
    Live_GetPresenceString((FriendList->friends[v5].dwFriendState & 4) != 0, (FriendList->friends[v5].dwFriendState & 2) != 0, FriendList->friends[v5].dwTitleID == 609700427, FriendList->friends[v5].wszRichPresence, presenceOut, presenceOutSize);
}

/*
==============
Online_Friends::GetSessionsForUsers
==============
*/
void Online_Friends::GetSessionsForUsers(Online_Friends *this, const int localControllerIndex, unsigned __int64 *userPlatformIds, const int userCount)
{
  __int64 v6; 
  int v8; 
  const dvar_t *v9; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v11; 
  HSTRING v12; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  HSTRING v14; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  HSTRING v16; 
  HSTRING v17; 
  int v18; 
  HSTRING v19; 
  HSTRING v20; 
  int v21; 
  int i; 
  unsigned __int64 PlatformUserId; 
  const char *LocalClientName; 
  int v25; 
  __int64 v26; 
  HSTRING v27; 
  __int64 v28; 
  HSTRING v29; 
  int v30; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  __int64 v42; 
  HSTRING v43; 
  Windows::Foundation::IAsyncInfo *v44; 
  int v45; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *v48; 
  char *fmt; 
  Windows::Foundation::IAsyncInfo *v50; 
  HSTRING v51; 
  HSTRING string; 
  Platform::String *stringXUID; 
  __int64 v54; 
  __int64 v55; 
  HSTRING v56; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v58; 
  HSTRING newString[8]; 
  TaskCreateResult pTaskCreateResult; 

  newString[2] = (HSTRING)-2i64;
  v6 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 586, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  if ( userCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 587, ASSERT_TYPE_ASSERT, "(userCount <= 64)", (const char *)&queryFormat, "userCount <= MAX_FRIENDS_SESSIONS_TO_FETCH") )
    __debugbreak();
  if ( !this->sessionFetchInProgress[v6] && userCount > 0 )
  {
    v8 = Sys_Milliseconds();
    v9 = DVARINT_xb3_friends_joinable_refresh_rate_ms;
    if ( !DVARINT_xb3_friends_joinable_refresh_rate_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_friends_joinable_refresh_rate_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v8 >= this->m_nextPlatformSessionUpdatedTime )
    {
      this->m_nextPlatformSessionUpdatedTime = v8 + v9->current.integer;
      this->sessionFetchInProgress[v6] = 1;
      UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v6);
      v11 = (__int64)UsersXboxLiveContext;
      v58 = (__int64)UsersXboxLiveContext;
      if ( UsersXboxLiveContext )
        UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
      v58 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      if ( v11 )
      {
        v12 = NULL;
        v56 = NULL;
        v13 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
        Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v13);
        v15 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v14;
        v51 = v14;
        if ( v14 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v14 + 8i64))(v14);
        newString[3] = (HSTRING)v15;
        if ( v15 )
          v15->__abi_Release(v15);
        string = NULL;
        Platform::String::String(NULL, L"LobbySession");
        v17 = v16;
        v51 = v16;
        if ( v16 )
        {
          v56 = NULL;
          v18 = WindowsDuplicateString_0(v16, newString);
          if ( v18 < 0 )
            __abi_WinRTraiseException(v18);
          v12 = newString[0];
          v56 = newString[0];
        }
        WindowsDeleteString_0(v17);
        v51 = NULL;
        Platform::String::String(NULL, &LocaleName);
        v20 = v19;
        v50 = (Windows::Foundation::IAsyncInfo *)v19;
        if ( v19 )
        {
          string = NULL;
          v21 = WindowsDuplicateString_0(v19, &v51);
          if ( v21 < 0 )
            __abi_WinRTraiseException(v21);
          string = v51;
        }
        WindowsDeleteString_0(v20);
        for ( i = 0; i < userCount; ++i )
        {
          stringXUID = NULL;
          ConvertPlatformIdToPlatformString(userPlatformIds[i], &stringXUID);
          j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v15, stringXUID);
          WindowsDeleteString_0((HSTRING)stringXUID);
        }
        PlatformUserId = Live_GetPlatformUserId(v6);
        LocalClientName = Live_GetLocalClientName(v6);
        LODWORD(fmt) = v6;
        Com_Printf(25, "Calling Friends_GetSessionsForUsers for %s platformId %llu controller %d context [%llx]\n", LocalClientName, PlatformUserId, fmt, v11);
        v54 = 0i64;
        v25 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 112i64))(v11, &v54);
        if ( v25 < 0 )
          __abi_WinRTraiseException(v25);
        v26 = v54;
        v27 = (HSTRING)v54;
        if ( v54 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8i64))(v54);
          v26 = v54;
        }
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
        v50 = (Windows::Foundation::IAsyncInfo *)v27;
        if ( v27 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 8i64))(v27);
        newString[4] = v27;
        if ( v27 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16i64))(v27);
        pTaskCreateRequest.m_appTaskType = -1;
        memset(&pTaskCreateRequest.m_appData, 0, 32);
        pTaskCreateRequest.m_onUpdateCallback = NULL;
        pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        pTaskCreateResult.m_localTaskId = 0;
        pTaskCreateResult.m_task = NULL;
        pTaskCreateRequest.m_controllerIndex = v6;
        pTaskCreateRequest.m_onCompletionCallback = Online_Friends_GetSessionsForUsersComplete;
        Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest::MultiplayerGetSessionsRequest(NULL, (Platform::String *)g_serviceConfigurationId, 0x64u);
        v29 = (HSTRING)v28;
        v50 = (Windows::Foundation::IAsyncInfo *)v28;
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8i64))(v28);
        newString[5] = v29;
        if ( v29 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16i64))(v29);
        v30 = (*(__int64 (__fastcall **)(HSTRING, HSTRING))(*(_QWORD *)v29 + 168i64))(v29, v12);
        if ( v30 < 0 )
          __abi_WinRTraiseException(v30);
        v31 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
        Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v31, &v15->m_ctr, &v15->m_vec);
        v33 = v32;
        v50 = (Windows::Foundation::IAsyncInfo *)v32;
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8i64))(v32);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
        v50 = (Windows::Foundation::IAsyncInfo *)v33;
        v34 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v29 + 136i64))(v29, v33);
        if ( v34 < 0 )
          __abi_WinRTraiseException(v34);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
        v35 = (*(__int64 (__fastcall **)(HSTRING, HSTRING))(*(_QWORD *)v29 + 152i64))(v29, string);
        if ( v35 < 0 )
          __abi_WinRTraiseException(v35);
        v36 = (*(__int64 (__fastcall **)(HSTRING, __int64))(*(_QWORD *)v29 + 184i64))(v29, 5i64);
        if ( v36 < 0 )
          __abi_WinRTraiseException(v36);
        v37 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v29 + 200i64))(v29, 0i64);
        if ( v37 < 0 )
          __abi_WinRTraiseException(v37);
        v38 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v29 + 72i64))(v29, 0i64);
        if ( v38 < 0 )
          __abi_WinRTraiseException(v38);
        v39 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v29 + 88i64))(v29, 0i64);
        if ( v39 < 0 )
          __abi_WinRTraiseException(v39);
        v40 = (*(__int64 (__fastcall **)(HSTRING, _QWORD))(*(_QWORD *)v29 + 104i64))(v29, 0i64);
        if ( v40 < 0 )
          __abi_WinRTraiseException(v40);
        v55 = 0i64;
        v41 = (*(__int64 (__fastcall **)(HSTRING, HSTRING, __int64 *))(*(_QWORD *)v27 + 128i64))(v27, v29, &v55);
        if ( v41 < 0 )
          __abi_WinRTraiseException(v41);
        v42 = v55;
        v43 = (HSTRING)v55;
        if ( v55 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8i64))(v55);
          v42 = v55;
        }
        if ( v42 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16i64))(v42);
        newString[6] = v43;
        v44 = NULL;
        v50 = NULL;
        if ( v43 )
        {
          v45 = (**(__int64 (__fastcall ***)(HSTRING, void *, __int64 *))v43)(v43, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v50);
          if ( v45 < 0 )
            __abi_WinRTraiseException(v45);
          v44 = v50;
        }
        newString[1] = (HSTRING)v44;
        m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
        if ( v44 != pTaskCreateRequest.m_asyncInfo )
        {
          if ( v44 )
          {
            v44->__abi_AddRef(v44);
            m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
          }
          if ( m_asyncInfo )
            m_asyncInfo->__abi_Release(m_asyncInfo);
          pTaskCreateRequest.m_asyncInfo = v44;
        }
        if ( v44 )
          v44->__abi_Release(v44);
        if ( v43 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v43 + 16i64))(v43);
        Instance = TaskManager::GetInstance();
        if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
        {
          Com_Printf(25, "Friends_GetSessionsForUsers CreateTask failed!\n");
          this->sessionFetchInProgress[v6] = 0;
          Online_Friends::ResetCurrentFriendsSelections(this, v6);
        }
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16i64))(v29);
        pTaskCreateRequest.m_onCompletionCallback = NULL;
        pTaskCreateRequest.m_onUpdateCallback = NULL;
        pTaskCreateRequest.m_appSecondaryCallback = NULL;
        pTaskCreateRequest.m_timeoutInSeconds = 0;
        v48 = pTaskCreateRequest.m_asyncInfo;
        if ( pTaskCreateRequest.m_asyncInfo )
        {
          pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
          v48 = NULL;
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
          v48 = pTaskCreateRequest.m_asyncInfo;
        }
        if ( v48 )
          v48->__abi_Release(v48);
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16i64))(v27);
        WindowsDeleteString_0(string);
        if ( v15 )
          v15->__abi_Release(v15);
        WindowsDeleteString_0(v56);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
      }
      else
      {
        this->sessionFetchInProgress[v6] = 0;
        Online_Friends::ResetCurrentFriendsSelections(this, v6);
        Com_Printf(25, "Friends_GetSessionsForUsers when controller %d has no LiveContext!\n", (unsigned int)v6);
      }
    }
  }
}

/*
==============
Online_Friends::HandleRefreshFriendsCommand
==============
*/
void Online_Friends::HandleRefreshFriendsCommand(Online_Friends *this)
{
  LocalClientNum_t v2; 
  unsigned int ControllerFromClient; 
  unsigned int v4; 
  __int64 ClientFromController; 
  Online_MetPlayer *Instance; 
  unsigned int v7; 
  int v8; 

  v2 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v2);
  v4 = Sys_Milliseconds();
  if ( ControllerFromClient >= 8 )
  {
    v8 = 8;
    v7 = ControllerFromClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1122, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
  if ( friendsMinimumRefreshTimer->current.integer + this->m_friendClientListGlobal[ClientFromController].lastTimeFetched < v4 )
    this->m_friendClientListGlobal[ClientFromController].dirty = 1;
  LiveParty_Update_Platform();
  Instance = Online_MetPlayer::GetInstance();
  Online_MetPlayer::MarkForGamerTagRefresh(Instance, ControllerFromClient);
}

/*
==============
Online_Friends::HandleRefreshFriendsWidgetCommand
==============
*/
void Online_Friends::HandleRefreshFriendsWidgetCommand(Online_Friends *this)
{
  LocalClientNum_t v2; 
  unsigned int ControllerFromClient; 
  unsigned int v4; 
  __int64 ClientFromController; 
  unsigned int v6; 
  int v7; 

  v2 = Cmd_LocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v2);
  v4 = Sys_Milliseconds();
  if ( ControllerFromClient >= 8 )
  {
    v7 = 8;
    v6 = ControllerFromClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1154, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(ControllerFromClient);
  if ( friendsWidgetMinimumRefreshTimer->current.integer + this->m_friendClientListGlobal[ClientFromController].lastTimeFetched < v4 )
    this->m_friendClientListGlobal[ClientFromController].dirty = 1;
}

/*
==============
Online_Friends::IsConnected
==============
*/
bool Online_Friends::IsConnected(Online_Friends *this, const int localControllerIndex)
{
  return Live_IsUserSignedInToLive(localControllerIndex);
}

/*
==============
Online_Friends::IsFriendOnlineInTitle
==============
*/
bool Online_Friends::IsFriendOnlineInTitle(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  return Online_Friends::GetFriendList(this, controllerIndex)->friends[friendIndex].dwTitleID == 609700427;
}

/*
==============
Online_Friends::IsSessionInfoValid
==============
*/
bool Online_Friends::IsSessionInfoValid(Online_Friends *this, Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference *const sessionInfo)
{
  return sessionInfo != NULL;
}

/*
==============
Live_OnRequestPresenceForPeopleGroupComplete
==============
*/
void Live_OnRequestPresenceForPeopleGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v5; 
  int v6; 
  int v7; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v8; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v9; 
  Online_Friends *Instance; 
  Online_Friends *v11; 
  unsigned int v12; 
  __int64 v13[3]; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v14; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *records; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v16; 

  v13[1] = -2i64;
  m_asyncInfo = pTask->m_asyncInfo;
  v5 = NULL;
  v13[0] = 0i64;
  if ( m_asyncInfo )
  {
    v6 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVPresenceRecord_Presence_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)v13);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = (Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *)v13[0];
  }
  records = v5;
  v16 = v5;
  if ( v5 )
    v5->__abi_AddRef(v5);
  v13[2] = (__int64)v5;
  if ( v5 )
    v5->__abi_Release(v5);
  Com_Printf(25, "======================= GetPresenceForSocialGroupAsync Completed\n");
  records = NULL;
  v7 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *, Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> **))v5->Platform::Object::__vftable[1].__abi_Release)(v5, &records);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = records;
  v9 = records;
  if ( records )
  {
    records->__abi_AddRef(records);
    v8 = records;
  }
  if ( v8 )
    v8->__abi_Release(v8);
  v14 = v9;
  if ( v9 )
    v9->__abi_AddRef(v9);
  v14 = v9;
  if ( v9 )
    v9->__abi_Release(v9);
  Instance = Online_Friends::GetInstance();
  Online_Friends::OnRequestPresenceForPeopleGroupComplete(Instance, pTask->m_controllerIndex, v9, taskState);
  if ( v9 )
    v9->__abi_Release(v9);
  if ( taskState )
  {
    v11 = Online_Friends::GetInstance();
    v12 = Online_Friends::RetryEnumerateFriends(v11, pTask->m_controllerIndex);
    Com_Printf(25, "======================= GetPresenceForSocialGroupAsync asyncAction Error, next retry at %i.\n", v12);
  }
  if ( v5 )
    v5->__abi_Release(v5);
}

/*
==============
Online_Friends::OnFriendsRefreshRequired
==============
*/
void Online_Friends::OnFriendsRefreshRequired(Online_Friends *this, const int localControllerIndex)
{
  __int64 ClientFromController; 
  unsigned int count; 
  FriendListGlobal *v6; 
  unsigned int oldFriendsCount; 
  friendList_t *v8; 
  __int64 i; 
  IW_XB3_FRIEND *v10; 
  unsigned int v11; 

  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 399, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  count = this->m_friendClientListGlobal[ClientFromController].count;
  v6 = &this->m_friendClientListGlobal[ClientFromController];
  if ( count )
  {
    oldFriendsCount = this->m_friendClientListGlobal[ClientFromController].oldFriendsCount;
    v8 = this->m_friendClientLists[ClientFromController];
    this->m_friendClientListGlobal[ClientFromController].oldFriendsCount = count;
    memcpy_0(v8, &this->m_friendClientLists[ClientFromController][1], sizeof(friendList_t));
    for ( i = 0i64; (unsigned int)i < v6->count; i = (unsigned int)(i + 1) )
    {
      v10 = &v8->friends[(unsigned int)i];
      Online_Friends::CheckNewFriendIdResolve(this, v6, i, v10->platformId);
      v6->friendPlatformIds[i] = v10->platformId;
      if ( v10->dwTitleID == 609700427 )
      {
        v11 = 8;
      }
      else if ( (v10->dwFriendState & 4) != 0 )
      {
        v11 = 6;
      }
      else
      {
        v11 = (v10->dwFriendState & 2 | 8) >> 1;
      }
      v6->status[i] = v11;
      v6->sortedFriends[i] = i;
    }
    this->m_sortFriendList = v8;
    qsort(v6->sortedFriends, v6->count, 4ui64, (_CoreCrtNonSecureSearchSortCompareFunction)Online_Friends_PresenceCompare);
    v6->refreshRequired = 0;
    if ( Online_Friends::FavoriteFriends_IsEnabled(this) )
    {
      if ( v6->checkResolve )
      {
        Online_Friends::FavoriteFriends_SetPlatformFriendsListDoesNotExist(this, localControllerIndex);
      }
      else
      {
        if ( oldFriendsCount == count )
        {
LABEL_19:
          Live_UpdateVoiceFriendSettings();
          return;
        }
        Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible(this, localControllerIndex);
      }
    }
    if ( oldFriendsCount != count )
      Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend(this, localControllerIndex);
    goto LABEL_19;
  }
}

/*
==============
Online_Friends::OnRequestBatchProfileInformationComplete
==============
*/
void Online_Friends::OnRequestBatchProfileInformationComplete(Online_Friends *this, const int localControllerIndex, Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *userProfiles)
{
  int v6; 
  friendList_t *v7; 
  int v8; 
  unsigned int i; 
  int v10; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  HSTRING v15; 
  int v16; 
  HSTRING v17; 
  LocalClientNum_t ClientFromController; 
  HSTRING newString[11]; 
  unsigned int v20; 
  __int64 v21; 
  HSTRING string; 

  newString[1] = (HSTRING)-2i64;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 206, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  if ( !userProfiles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 207, ASSERT_TYPE_ASSERT, "(userProfiles)", (const char *)&queryFormat, "userProfiles") )
    __debugbreak();
  v6 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *, unsigned int *))userProfiles->Platform::Object::__vftable[1].__abi_AddRef)(userProfiles, &v20);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  Com_Printf(25, "OnRequestBatchProfileInformationComplete returned %d profiles\n", v20);
  v7 = &this->m_friendClientLists[CL_Mgr_GetClientFromController(localControllerIndex)][1];
  v8 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *, unsigned int *))userProfiles->Platform::Object::__vftable[1].__abi_AddRef)(userProfiles, &v20);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  if ( v20 )
  {
    for ( i = 0; ; ++i )
    {
      v10 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Social::XboxUserProfile _> *, unsigned int *))userProfiles->Platform::Object::__vftable[1].__abi_AddRef)(userProfiles, &v20);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      if ( i >= v20 )
        break;
      v21 = 0i64;
      v11 = userProfiles->Platform::Object::__vftable[1].__abi_QueryInterface(userProfiles, (Platform::Guid *)i, (void **)&v21);
      if ( v11 < 0 )
        __abi_WinRTraiseException(v11);
      v12 = v21;
      v13 = (HSTRING)v21;
      if ( v21 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8i64))(v21);
        v12 = v21;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
      string = v13;
      if ( v13 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
      newString[2] = v13;
      if ( v13 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
      string = NULL;
      v14 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v13 + 88i64))(v13, &string);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      v15 = string;
      if ( string )
      {
        v16 = WindowsDuplicateString_0(string, newString);
        if ( v16 < 0 )
          __abi_WinRTraiseException(v16);
        v17 = newString[0];
        v15 = string;
      }
      else
      {
        v17 = NULL;
      }
      WindowsDeleteString_0(v15);
      newString[3] = v17;
      ConvertStringGamertagToDisplayableBuffer((Platform::String *)v17, v7->friends[i].szGamertag, 0x44ui64);
      WindowsDeleteString_0(v17);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
    }
  }
  v7->isUpdating = 0;
  this->OutputCurrentState(this, localControllerIndex);
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  this->m_friendClientLists[ClientFromController][1].isUpdating = 0;
  this->m_friendClientListGlobal[ClientFromController].refreshRequired = 1;
  *(_QWORD *)&this->m_friendEnumerateRetryTime = 0i64;
  ProcessPreviousXUIDsForUnsubscribe(localControllerIndex);
}

/*
==============
Online_Friends::OnRequestPresenceForPeopleGroupComplete
==============
*/
void Online_Friends::OnRequestPresenceForPeopleGroupComplete(Online_Friends *this, const int localControllerIndex, Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *records, eTaskManagerTaskState taskState)
{
  eTaskManagerTaskState v4; 
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *v5; 
  unsigned int v6; 
  int v8; 
  __int64 ClientFromController; 
  char *v10; 
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  unsigned int v13; 
  int v14; 
  Online_Friends *v15; 
  friendList_t *v16; 
  int v17; 
  int v18; 
  int v19; 
  unsigned int v20; 
  unsigned int v21; 
  HSTRING v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  int v26; 
  HSTRING v27; 
  int v28; 
  int v29; 
  HSTRING v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  __int64 v34; 
  HSTRING v35; 
  __int64 v36; 
  unsigned int v37; 
  int v38; 
  int v39; 
  __int64 v40; 
  HSTRING v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  HSTRING v46; 
  HSTRING v47; 
  unsigned int i; 
  int v49; 
  int v50; 
  __int64 v51; 
  __int64 v52; 
  int v53; 
  HSTRING v54; 
  int v55; 
  HSTRING v56; 
  int v57; 
  HSTRING v58; 
  int v59; 
  int v60; 
  __int64 v61; 
  UINT32 StringLen; 
  const wchar_t *StringRawBuffer_0; 
  Online_MetPlayer *v64; 
  HSTRING string; 
  unsigned int v66; 
  __int64 v67; 
  __int64 v68; 
  unsigned int v69; 
  unsigned int v70; 
  int v71; 
  int v72; 
  unsigned int v73; 
  __int64 v74; 
  __int64 v75; 
  HSTRING v76; 
  char *v77; 
  __int64 v78; 
  HSTRING newString; 
  HSTRING v80; 
  HSTRING v81; 
  unsigned __int64 platformId; 
  HSTRING v83; 
  HSTRING v84; 
  HSTRING v85[2]; 
  friendList_t *v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  HSTRING v90; 
  __int64 v91; 

  v87 = -2i64;
  v4 = taskState;
  v5 = records;
  v6 = localControllerIndex;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 747, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  v8 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *, HSTRING *))v5->Platform::Object::__vftable[1].__abi_AddRef)(v5, &string);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  Com_Printf(25, "OnRequestPresenceForPeopleGroupComplete( localControllerIndex %d ) returned %d records\n", v6, (unsigned int)string);
  ClientFromController = CL_Mgr_GetClientFromController(v6);
  v10 = (char *)this + 48072 * ClientFromController;
  v77 = v10;
  v10[43304] = 0;
  *((_DWORD *)v10 + 10831) = Sys_Milliseconds();
  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, v6);
  s_numPreviousXUIDs = 0;
  v13 = 0;
  if ( Friends->count )
  {
    do
    {
      if ( XUID::IsValid(&Friends->friends[v13]) )
      {
        XUID::operator=(&s_previousUsers[s_numPreviousXUIDs].xuid, &Friends->friends[v13]);
        v14 = s_numPreviousXUIDs;
        s_previousUsers[s_numPreviousXUIDs].platformId = Friends->friendPlatformIds[v13];
        s_numPreviousXUIDs = v14 + 1;
      }
      ++v13;
    }
    while ( v13 < Friends->count );
    v4 = taskState;
    v5 = records;
    v6 = localControllerIndex;
    v10 = v77;
  }
  v15 = this;
  v16 = &this->m_friendClientLists[ClientFromController][1];
  v86 = v16;
  v16->isUpdating = 0;
  *((_DWORD *)v10 + 10832) = *((_DWORD *)v10 + 24);
  *((_DWORD *)v10 + 24) = 0;
  if ( v4 == TASKSTATE_SUCCESS )
  {
    v17 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *, HSTRING *))v5->Platform::Object::__vftable[1].__abi_AddRef)(v5, &string);
    if ( v17 < 0 )
      __abi_WinRTraiseException(v17);
    *((_DWORD *)v10 + 24) = (_DWORD)string;
  }
  v18 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *, HSTRING *))v5->Platform::Object::__vftable[1].__abi_AddRef)(v5, &string);
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  if ( (_DWORD)string )
  {
    if ( v4 == TASKSTATE_SUCCESS )
    {
      v19 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Presence::PresenceRecord _> *, HSTRING *))v5->Platform::Object::__vftable[1].__abi_AddRef)(v5, &string);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = (unsigned int)string;
      if ( (int)string > 1200 )
        v20 = 1200;
      v73 = v20;
      v21 = 0;
      v66 = 0;
      if ( v20 )
      {
        v22 = NULL;
        while ( 2 )
        {
          v74 = 0i64;
          v23 = v5->Platform::Object::__vftable[1].__abi_QueryInterface(v5, (Platform::Guid *)v21, (void **)&v74);
          if ( v23 < 0 )
            __abi_WinRTraiseException(v23);
          v24 = v74;
          v25 = v74;
          if ( v74 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 8i64))(v74);
            v24 = v74;
          }
          if ( v24 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
          v68 = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8i64))(v25);
          v88 = v25;
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
          string = NULL;
          v26 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 48i64))(v25, &string);
          if ( v26 < 0 )
            __abi_WinRTraiseException(v26);
          v27 = string;
          if ( string )
          {
            v28 = WindowsDuplicateString_0(string, &newString);
            if ( v28 < 0 )
              __abi_WinRTraiseException(v28);
            v22 = newString;
            v27 = string;
          }
          WindowsDeleteString_0(v27);
          v68 = (__int64)v22;
          if ( v22 )
          {
            v29 = WindowsDuplicateString_0(v22, &v80);
            if ( v29 < 0 )
              __abi_WinRTraiseException(v29);
            v30 = v80;
            v76 = v80;
            v81 = v80;
          }
          else
          {
            v30 = NULL;
            v76 = NULL;
            v81 = NULL;
          }
          WindowsDeleteString_0(v22);
          LODWORD(string) = 0;
          v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v25 + 56i64))(v25, &string);
          if ( v31 < 0 )
            __abi_WinRTraiseException(v31);
          v75 = 0i64;
          v32 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64i64))(v25, &v75);
          if ( v32 < 0 )
            __abi_WinRTraiseException(v32);
          v33 = v75;
          v34 = v75;
          if ( v75 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8i64))(v75);
            v33 = v75;
          }
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16i64))(v33);
          v68 = v34;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
          v89 = v34;
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
          v35 = NULL;
          v83 = NULL;
          v36 = (__int64)&v16->friends[v21];
          v68 = v36;
          v37 = 0;
          *(_DWORD *)(v36 + 80) = 0;
          if ( (_DWORD)string == 1 )
          {
            *(_DWORD *)(v36 + 80) = 2;
          }
          else if ( (_DWORD)string == 2 )
          {
            *(_DWORD *)(v36 + 80) = 6;
          }
          ConvertPlatformStringToPlatformId((Platform::String *)v30, &platformId);
          *(_QWORD *)v36 = platformId;
          *(_DWORD *)(v36 + 84) = 0;
          *(_DWORD *)(v36 + 220) = 0;
          memset_0((void *)(v36 + 88), 0, 0x82ui64);
          while ( 1 )
          {
            v22 = NULL;
            v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 56i64))(v34, &v69);
            if ( v38 < 0 )
              __abi_WinRTraiseException(v38);
            if ( v37 >= v69 )
              break;
            v67 = 0i64;
            v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48i64))(v34, v37, &v67);
            if ( v39 < 0 )
              __abi_WinRTraiseException(v39);
            v40 = v67;
            v41 = (HSTRING)v67;
            if ( v67 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 8i64))(v67);
              v40 = v67;
            }
            if ( v40 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16i64))(v40);
            string = v41;
            if ( v41 )
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 8i64))(v41);
            v90 = v41;
            if ( v41 )
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 16i64))(v41);
            LODWORD(string) = 0;
            v42 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v41 + 48i64))(v41, &string);
            if ( v42 < 0 )
              __abi_WinRTraiseException(v42);
            if ( (_DWORD)string == g_applicationDeviceType )
            {
              LODWORD(string) = 0;
              v43 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v41 + 48i64))(v41, &string);
              if ( v43 < 0 )
                __abi_WinRTraiseException(v43);
              v44 = (int)string;
              string = NULL;
              v45 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v41 + 56i64))(v41, &string);
              if ( v45 < 0 )
                __abi_WinRTraiseException(v45);
              v46 = string;
              v47 = string;
              if ( string )
              {
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
                v46 = string;
              }
              if ( v46 )
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v46 + 16i64))(v46);
              v78 = (__int64)v47;
              if ( v47 )
              {
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v47 + 8i64))(v47);
                v35 = v47;
                v83 = v47;
              }
              if ( v47 )
                (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v47 + 16i64))(v47);
              (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 16i64))(v41);
              v22 = NULL;
              if ( v35 )
              {
                for ( i = 0; ; ++i )
                {
                  v49 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v35 + 56i64))(v35, &v70);
                  if ( v49 < 0 )
                    __abi_WinRTraiseException(v49);
                  if ( i >= v70 )
                    break;
                  v67 = 0i64;
                  v50 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)v35 + 48i64))(v35, i, &v67);
                  if ( v50 < 0 )
                    __abi_WinRTraiseException(v50);
                  v51 = v67;
                  v52 = v67;
                  if ( v67 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 8i64))(v67);
                    v51 = v67;
                  }
                  if ( v51 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16i64))(v51);
                  v78 = v52;
                  if ( v52 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8i64))(v52);
                  v91 = v52;
                  if ( v52 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16i64))(v52);
                  v53 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 48i64))(v52, &v71);
                  if ( v53 < 0 )
                    __abi_WinRTraiseException(v53);
                  if ( v71 == 609700427 )
                  {
                    v54 = NULL;
                    string = NULL;
                    v55 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v52 + 80i64))(v52, &string);
                    if ( v55 < 0 )
                      __abi_WinRTraiseException(v55);
                    v56 = string;
                    if ( string )
                    {
                      v57 = WindowsDuplicateString_0(string, &v84);
                      if ( v57 < 0 )
                        __abi_WinRTraiseException(v57);
                      v58 = v84;
                      v56 = string;
                    }
                    else
                    {
                      v58 = NULL;
                    }
                    WindowsDeleteString_0(v56);
                    v78 = (__int64)v58;
                    if ( v58 )
                    {
                      v59 = WindowsDuplicateString_0(v58, v85);
                      if ( v59 < 0 )
                        __abi_WinRTraiseException(v59);
                      v54 = v85[0];
                    }
                    v85[1] = v54;
                    WindowsDeleteString_0(v58);
                    v60 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v52 + 48i64))(v52, &v72);
                    if ( v60 < 0 )
                      __abi_WinRTraiseException(v60);
                    v61 = v68;
                    *(_DWORD *)(v68 + 84) = v72;
                    StringLen = _Platform_WindowsGetStringLen(v54);
                    *(_DWORD *)(v61 + 220) = StringLen;
                    if ( StringLen > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 847, ASSERT_TYPE_ASSERT, "(flBack->friends[friendIndex].cchRichPresence <= 65 - 1)", (const char *)&queryFormat, "flBack->friends[friendIndex].cchRichPresence <= MAX_RICHPRESENCE_SIZE - 1") )
                      __debugbreak();
                    StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v54, NULL);
                    wcsncpy((wchar_t *)(v61 + 88), StringRawBuffer_0, 0x41ui64);
                    *(_WORD *)(v61 + 216) = 0;
                    *(_DWORD *)(v61 + 76) = v44;
                    if ( v44 != g_applicationDeviceType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 852, ASSERT_TYPE_ASSERT, "(flBack->friends[friendIndex].DeviceType == g_applicationDeviceType)", (const char *)&queryFormat, "flBack->friends[friendIndex].DeviceType == g_applicationDeviceType") )
                      __debugbreak();
                    WindowsDeleteString_0(v54);
                    if ( v52 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16i64))(v52);
                    v22 = NULL;
                    v30 = v76;
                    break;
                  }
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16i64))(v52);
                  v22 = NULL;
                }
              }
              v21 = v66;
              break;
            }
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 16i64))(v41);
            ++v37;
          }
          if ( v35 )
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v35 + 16i64))(v35);
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
          WindowsDeleteString_0(v30);
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
          v66 = ++v21;
          if ( v21 < v73 )
          {
            v5 = records;
            v16 = v86;
            continue;
          }
          break;
        }
        v6 = localControllerIndex;
        v10 = v77;
        v15 = this;
      }
      v64 = Online_MetPlayer::GetInstance();
      Online_MetPlayer::RemoveFriends(v64, v6);
      goto LABEL_126;
    }
    Com_Printf(25, "OnRequestPresenceForPeopleGroupComplete handling task error %d\n", (unsigned int)v4);
  }
  else if ( Live_IsUserSignedInToLive(v6) )
  {
    ProcessPreviousXUIDsForUnsubscribe(v6);
    Com_Printf(25, "User has no friends, how sad :(\n");
  }
  if ( v4 )
    return;
LABEL_126:
  if ( !*((_DWORD *)v10 + 24) )
  {
    if ( Online_Friends::FavoriteFriends_IsEnabled(v15) )
    {
      if ( v10[43332] )
        goto LABEL_133;
      Online_Friends::FavoriteFriends_SetPlatformFriendsListExists(v15, v6);
    }
    if ( !v10[43332] )
      Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend(v15, v6);
    goto LABEL_133;
  }
  Online_Friends::RequestBatchProfileInformation(v15, v6);
LABEL_133:
  v10[43332] = 1;
}

/*
==============
Online_Friends_GetSessionsForUsersComplete
==============
*/
void Online_Friends_GetSessionsForUsersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  unsigned __int64 v5; 
  int v6; 
  __int64 m_controllerIndex; 
  __int64 v8; 
  Online_Friends *Instance; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int i; 
  int v14; 
  HSTRING v15; 
  int v16; 
  HSTRING v17; 
  HSTRING v18; 
  int v19; 
  HSTRING v20; 
  int v21; 
  HSTRING v22; 
  Online_Friends *v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  unsigned __int64 v27; 
  Online_Friends *v28; 
  unsigned __int64 v29; 
  unsigned __int64 *v30; 
  Online_Friends *v31; 
  HSTRING string; 
  unsigned __int64 platformId[2]; 
  unsigned __int64 v34; 
  HSTRING v35; 
  HSTRING newString; 
  HSTRING v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 

  v38 = -2i64;
  m_asyncInfo = pTask->m_asyncInfo;
  v5 = 0i64;
  v34 = 0i64;
  if ( m_asyncInfo )
  {
    v6 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVMultiplayerSessionStates_Multiplayer_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)&v34);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v34;
  }
  if ( v5 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8i64))(v5);
  platformId[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16i64))(v5);
  m_controllerIndex = pTask->m_controllerIndex;
  if ( (unsigned int)m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 524, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", m_controllerIndex, 8) )
    __debugbreak();
  v8 = m_controllerIndex;
  Online_Friends::GetInstance()->sessionFetchInProgress[m_controllerIndex] = 0;
  Instance = Online_Friends::GetInstance();
  Online_Friends::ResetCurrentFriendsSelections(Instance, m_controllerIndex);
  if ( taskState )
  {
    Com_Printf(25, "Online_Friends_GetSessionsForUsersComplete: GetSessionsAsync failed with task state %d\n", (unsigned int)taskState);
    v31 = Online_Friends::GetInstance();
    Online_Friends::ResetCurrentFriendsSelections(v31, m_controllerIndex);
  }
  else
  {
    Com_Printf(25, "Online_Friends_GetSessionsForUsersComplete GetSessionsAsync Completed\n");
    v41 = 0i64;
    v10 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v5 + 64i64))(v5, &v41);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v11 = v41;
    v12 = v41;
    if ( v41 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8i64))(v41);
      v11 = v41;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    v40 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8i64))(v12);
    v39 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    for ( i = 0; ; ++i )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 56i64))(v12, &v40);
      if ( v14 < 0 )
        __abi_WinRTraiseException(v14);
      if ( i >= (unsigned int)v40 )
        break;
      v15 = NULL;
      v35 = NULL;
      string = NULL;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING *))(*(_QWORD *)v12 + 48i64))(v12, i, &string);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v17 = string;
      v18 = string;
      if ( string )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)string + 8i64))(string);
        v17 = string;
      }
      if ( v17 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
      v37 = v18;
      if ( v18 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 8i64))(v18);
        v15 = v18;
        v35 = v18;
      }
      if ( v18 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16i64))(v18);
      string = NULL;
      v19 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v15 + 88i64))(v15, &string);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = string;
      if ( string )
      {
        v21 = WindowsDuplicateString_0(string, &newString);
        if ( v21 < 0 )
          __abi_WinRTraiseException(v21);
        v22 = newString;
        v20 = string;
      }
      else
      {
        v22 = NULL;
      }
      WindowsDeleteString_0(v20);
      v37 = v22;
      ConvertPlatformStringToPlatformId((Platform::String *)v22, platformId);
      WindowsDeleteString_0(v22);
      if ( !platformId[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 544, ASSERT_TYPE_ASSERT, "(resultPlatformId != 0)", (const char *)&queryFormat, "resultPlatformId != 0") )
        __debugbreak();
      v23 = Online_Friends::GetInstance();
      v24 = 0i64;
      v25 = 0i64;
      v26 = (v8 << 9) + 1172312;
      v27 = platformId[0];
      while ( *(Online_Friends_vtbl **)((char *)&v23->__vftable + v26) != (Online_Friends_vtbl *)platformId[0] )
      {
        v24 = (unsigned int)(v24 + 1);
        ++v25;
        v26 += 8i64;
        if ( v25 >= 64 )
          goto LABEL_46;
      }
      if ( (int)v24 >= 0 )
        goto LABEL_53;
LABEL_46:
      v28 = Online_Friends::GetInstance();
      v29 = platformId[0];
      if ( v28->sessionFetchInProgress[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 685, ASSERT_TYPE_ASSERT, "(sessionFetchInProgress[controllerIndex] == false)", (const char *)&queryFormat, "sessionFetchInProgress[controllerIndex] == false") )
        __debugbreak();
      v30 = &v28->m_friendsWithJoinableSessions[v8][i];
      if ( *v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 686, ASSERT_TYPE_ASSERT, "(m_friendsWithJoinableSessions[controllerIndex][index] == (0))", (const char *)&queryFormat, "m_friendsWithJoinableSessions[controllerIndex][index] == INVALID_PLATFORM_ID") )
        __debugbreak();
      *v30 = v29;
LABEL_53:
      if ( v15 )
        (*(void (__fastcall **)(HSTRING, __int64, __int64, unsigned __int64))(*(_QWORD *)v15 + 16i64))(v15, v25, v24, v27);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
  }
  if ( v5 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
Online_Friends_PresenceCompare
==============
*/
__int64 Online_Friends_PresenceCompare(const void *arg0, const void *arg1)
{
  friendList_t *m_sortFriendList; 
  IW_XB3_FRIEND *v5; 
  IW_XB3_FRIEND *v6; 
  unsigned int v7; 
  unsigned int v8; 
  char *szGamertag; 
  signed __int64 v11; 
  unsigned __int8 v12; 

  m_sortFriendList = Online_Friends::GetInstance()->m_sortFriendList;
  v5 = &m_sortFriendList->friends[*(int *)arg0];
  v6 = &m_sortFriendList->friends[*(int *)arg1];
  Online_Friends::GetInstance();
  v7 = 8;
  if ( v5->dwTitleID == 609700427 )
  {
    v8 = 8;
  }
  else if ( (v5->dwFriendState & 4) != 0 )
  {
    v8 = 6;
  }
  else
  {
    v8 = (v5->dwFriendState & 2 | 8) >> 1;
  }
  Online_Friends::GetInstance();
  if ( v6->dwTitleID != 609700427 )
  {
    if ( (v6->dwFriendState & 4) != 0 )
      v7 = 6;
    else
      v7 = (v6->dwFriendState & 2 | 8) >> 1;
  }
  if ( v7 != v8 )
    return v7 - v8;
  szGamertag = v5->szGamertag;
  v11 = (char *)v6 - (char *)v5;
  while ( 1 )
  {
    v12 = *szGamertag;
    if ( *szGamertag != szGamertag[v11] )
      break;
    ++szGamertag;
    if ( !v12 )
      return 0i64;
  }
  return v12 < (unsigned __int8)szGamertag[v11] ? -1 : 1;
}

/*
==============
Online_Friends::PlatformInit
==============
*/
char Online_Friends::PlatformInit(Online_Friends *this)
{
  Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails _> *m_friendActivityDetailsList; 

  memset_0(this->m_friendClientListGlobal, 0, sizeof(this->m_friendClientListGlobal));
  Cmd_AddCommandInternal("friends_refresh", FriendsRefresh_f, &FriendsRefresh_f_VAR);
  Cmd_AddCommandInternal("friends_widget_refresh", FriendsWidgetRefresh_f, &FriendsWidgetRefresh_f_VAR);
  *(_QWORD *)&this->m_friendEnumerateRetryTime = 0i64;
  this->m_friendSessionMutex = NewMutex();
  this->m_friendSessionListExpectedCount = 0;
  m_friendActivityDetailsList = this->m_friendActivityDetailsList;
  if ( m_friendActivityDetailsList )
  {
    m_friendActivityDetailsList->__abi_Release(m_friendActivityDetailsList);
    this->m_friendActivityDetailsList = NULL;
  }
  this->m_joiningControllerIndex = -1;
  Dvar_BeginPermanentRegistration();
  xb3_get_friend_session_private_flag = Dvar_RegisterBool("RNPSKRSOK", 0, 0, "Whether to search for private games with GetSessionsAsync when joining on a friend.");
  xb3_get_friend_session_reservation_flag = Dvar_RegisterBool("LTQKTMSPMP", 0, 0, "Whether to search for reservation games with GetSessionsAsync when joining on a friend.");
  xb3_get_friend_session_inactive_flag = Dvar_RegisterBool("LKKOOKNMOQ", 0, 0, "Whether to search for inactive games with GetSessionsAsync when joining on a friend.");
  friendsMinimumRefreshTimer = Dvar_RegisterInt("SMOKSQLKO", 30000, 0, 0x7FFFFFFF, 0, "Minimum delay before refreshing friends data.\n");
  friendsWidgetMinimumRefreshTimer = Dvar_RegisterInt("MSQKLLPTOK", 300000, 0, 0x7FFFFFFF, 0, "Minimum delay before refreshing friends data if you aren't on the friends screen\n");
  Dvar_EndPermanentRegistration();
  Online_Friends::MarkForUpdate(this, 0);
  Online_Friends::Crossplay_Init(this);
  return 1;
}

/*
==============
ProcessPreviousXUIDsForUnsubscribe
==============
*/
void ProcessPreviousXUIDsForUnsubscribe(const int controllerIndex)
{
  Online_Friends *Instance; 
  FriendListGlobal *Friends; 
  int v4; 
  int v5; 
  FriendListGlobal *v6; 
  XUID *p_xuid; 
  unsigned int count; 
  __int64 v9; 
  OnlinePresenceNotifications *v10; 

  Instance = Online_Friends::GetInstance();
  Friends = Online_Friends::GetFriends(Instance, controllerIndex);
  v4 = s_numPreviousXUIDs;
  v5 = 0;
  v6 = Friends;
  if ( s_numPreviousXUIDs > 0 )
  {
    p_xuid = &s_previousUsers[0].xuid;
    do
    {
      count = v6->count;
      v9 = 0i64;
      if ( count )
      {
        while ( v6->friendPlatformIds[v9] != p_xuid[-1].m_id )
        {
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= count )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        v10 = OnlinePresenceNotifications::GetInstance();
        OnlinePresenceNotifications::UnsubscribeFromUser(v10, controllerIndex, (const XUID)p_xuid->m_id, PlatformFriend);
        v4 = s_numPreviousXUIDs;
      }
      ++v5;
      p_xuid += 2;
    }
    while ( v5 < v4 );
  }
}

/*
==============
Online_Friends::RequestBatchProfileInformation
==============
*/
void Online_Friends::RequestBatchProfileInformation(Online_Friends *this, const int localControllerIndex)
{
  Platform::String *v4; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v6; 
  friendList_t *v7; 
  __int64 v8; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  int v10; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v11; 
  Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *v12; 
  unsigned int v13; 
  Platform::String *v14; 
  Online_Friends *v15; 
  friendList_t *FriendList; 
  LocalClientNum_t v17; 
  unsigned int v18; 
  unsigned int count; 
  __int64 v20; 
  unsigned __int64 PlatformUserId; 
  const char *LocalClientName; 
  Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ; 
  int v24; 
  Platform::String *v25; 
  Platform::String *v26; 
  __int64 v28; 
  __int64 v29; 
  int v30; 
  char *fmt; 
  __int64 v32; 
  Platform::String *stringXUID; 
  friendList_t *v34; 
  Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *v35; 
  Microsoft::Xbox::Services::XboxLiveContext *v36; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v37; 
  __int128 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v42; 
  Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *v43; 
  LocalClientNum_t ClientFromController; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v46; 

  v40 = -2i64;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v4 = (Platform::String *)((char *)this + 48072 * ClientFromController);
  stringXUID = v4;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
  v6 = (__int64)UsersXboxLiveContext;
  v36 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v41 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  if ( LODWORD(v4[1].__abi_reference_count.__pUnkMarshal) && !Live_UserIsGuest(localControllerIndex) && Live_IsUserSignedInToLive(localControllerIndex) )
  {
    if ( !v6 )
      return;
    v7 = &this->m_friendClientLists[ClientFromController][1];
    v34 = v7;
    if ( !this->m_friendClientLists[ClientFromController][1].isUpdating )
    {
      v46 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v46);
      v9 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v8;
      v39 = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
      v42 = v9;
      if ( v9 )
        v9->__abi_Release(v9);
      v46 = NULL;
      v10 = (*(__int64 (__fastcall **)(__int64, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> **))(*(_QWORD *)v6 + 56i64))(v6, &v46);
      if ( v10 < 0 )
        __abi_WinRTraiseException(v10);
      v11 = v46;
      v12 = (Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *)v46;
      v37 = v46;
      if ( v46 )
      {
        v46->__abi_AddRef(v46);
        v11 = v46;
      }
      if ( v11 )
        v11->__abi_Release(v11);
      v35 = v12;
      if ( v12 )
        ((void (__fastcall *)(Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *))v12->__this->m_nextSystem)(v12);
      v43 = v12;
      if ( v12 )
        (*(void (__fastcall **)(Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *))&v12->__this->m_dependencyFlags)(v12);
      v13 = 0;
      if ( LODWORD(v4[1].__abi_reference_count.__pUnkMarshal) )
      {
        v14 = stringXUID;
        do
        {
          stringXUID = NULL;
          v35 = (Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *)&v7->friends[v13];
          v15 = v35->__this;
          FriendList = Online_Friends::GetFriendList(this, localControllerIndex);
          v17 = CL_Mgr_GetClientFromController(localControllerIndex);
          v18 = 0;
          count = this->m_friendClientListGlobal[v17].count;
          if ( !count )
            goto LABEL_33;
          while ( v15 != (Online_Friends *)FriendList->friends[0].platformId )
          {
            ++v18;
            FriendList = (friendList_t *)((char *)FriendList + 224);
            if ( v18 >= count )
              goto LABEL_33;
          }
          if ( v18 == -1 )
          {
LABEL_33:
            ConvertPlatformIdToPlatformString((const unsigned __int64)v15, &stringXUID);
            j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v9, stringXUID);
          }
          else
          {
            Online_Friends::GetGamertag(this, localControllerIndex, v18, (char *)&v35->localClientNum, 0x44ui64);
          }
          WindowsDeleteString_0((HSTRING)stringXUID);
          ++v13;
          v7 = v34;
        }
        while ( v13 < LODWORD(v14[1].__abi_reference_count.__pUnkMarshal) );
        v6 = (__int64)v36;
        v12 = (Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *)v37;
      }
      v20 = v9->m_vec._Ptr->_Mypair._Myval2._Mylast - v9->m_vec._Ptr->_Mypair._Myval2._Myfirst;
      if ( (_DWORD)v20 )
      {
        PlatformUserId = Live_GetPlatformUserId(localControllerIndex);
        LocalClientName = Live_GetLocalClientName(localControllerIndex);
        LODWORD(v32) = v20;
        LODWORD(fmt) = localControllerIndex;
        Com_Printf(25, "Calling GetUserProfilesAsync for %s platformId %llx controller %d, for %d platformIds\n", LocalClientName, PlatformUserId, fmt, v32);
        v34->isUpdating = 1;
        View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ = (Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *)j__GetView__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ(v9);
        v35 = View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ;
        stringXUID = NULL;
        v24 = (*(__int64 (__fastcall **)(Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *, Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *, Platform::String **))&v12->__this->m_msgHeaderName[3])(v12, View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ, &stringXUID);
        if ( v24 < 0 )
          __abi_WinRTraiseException(v24);
        v25 = stringXUID;
        v26 = stringXUID;
        if ( stringXUID )
        {
          stringXUID->__abi_AddRef(stringXUID);
          v25 = stringXUID;
        }
        if ( v25 )
          v25->__abi_Release(v25);
        v34 = (friendList_t *)v26;
        if ( v26 )
          v26->__abi_AddRef(v26);
        v34 = (friendList_t *)v26;
        if ( v26 )
          v26->__abi_Release(v26);
        if ( View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ )
          (*(void (__fastcall **)(Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *))&View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ->__this->m_dependencyFlags)(View__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAPE_AAU__IVectorView_PE_AAVString_Platform___234_XZ);
        v35 = (Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
        *(_QWORD *)&v38 = this;
        *((_QWORD *)&v38 + 1) = __PAIR64__(localControllerIndex, ClientFromController);
        __asm
        {
          vmovups xmm0, [rsp+0E8h+var_78]
          vmovdqa [rsp+0E8h+var_78], xmm0
        }
        Windows::Foundation::AsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Social::XboxUserProfile______::AsyncOperationCompletedHandler_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::Social::XboxUserProfile________lambda_4566892f595a03151501b28079b00ae0___(v35, (Platform::CallbackContext)&v38, 2);
        v29 = v28;
        v30 = ((__int64 (__fastcall *)(Platform::String *, __int64))v26->Platform::Object::__vftable[1].__abi_QueryInterface)(v26, v28);
        if ( v30 < 0 )
          __abi_WinRTraiseException(v30);
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
        v26->__abi_Release(v26);
      }
      else
      {
        Online_Friends::CompleteEnumerateFriends(this, localControllerIndex);
      }
      if ( v12 )
        (*(void (__fastcall **)(Online_Friends::RequestBatchProfileInformation::__l30::<lambda_4566892f595a03151501b28079b00ae0> *))&v12->__this->m_dependencyFlags)(v12);
      v9->__abi_Release(v9);
    }
  }
  else if ( !v6 )
  {
    return;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
}

/*
==============
Online_Friends::RequestPresenceForPeopleGroup
==============
*/
void Online_Friends::RequestPresenceForPeopleGroup(Online_Friends *this, const int localControllerIndex)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v5; 
  unsigned __int64 PlatformUserId; 
  const char *LocalClientName; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  HSTRING v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  Windows::Foundation::IAsyncInfo *v16; 
  int v17; 
  TaskManager *Instance; 
  unsigned int RandomTimeToRetryInSeconds; 
  __int64 v20; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  Windows::Foundation::IAsyncInfo *v23; 
  __int64 ClientFromController; 
  __int64 v25; 
  Microsoft::Xbox::Services::XboxLiveContext *v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  Windows::Foundation::IAsyncInfo *v32; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v34; 
  __int64 v35; 

  v27 = -2i64;
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v25 = (__int64)this + 537616 * ClientFromController;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
  v5 = (__int64)UsersXboxLiveContext;
  v26 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v28 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v5 )
  {
    PlatformUserId = Live_GetPlatformUserId(localControllerIndex);
    LocalClientName = Live_GetLocalClientName(localControllerIndex);
    Com_Printf(25, "Calling GetPresenceForSocialGroupAsync for %s platformID %llu controller %d context [%llx]\n", LocalClientName, PlatformUserId, localControllerIndex, v5);
    this->m_friendClientLists[ClientFromController][1].isUpdating = 1;
    v34 = 0i64;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 136i64))(v5, &v34);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v34;
    v10 = v34;
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8i64))(v34);
      v9 = v34;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    v35 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
    v29 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appData, 0, 32);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = localControllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = Live_OnRequestPresenceForPeopleGroupComplete;
    v35 = 0i64;
    Platform::String::String(NULL, L"People");
    v12 = (HSTRING)v11;
    v30 = v11;
    v35 = 0i64;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v10 + 120i64))(v10, v11, &v35);
    if ( v13 < 0 )
      __abi_WinRTraiseException(v13);
    v14 = v35;
    v15 = v35;
    if ( v35 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8i64))(v35);
      v14 = v35;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
    v31 = v15;
    v16 = NULL;
    v23 = NULL;
    if ( v15 )
    {
      v17 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v15)(v15, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v23);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v16 = v23;
    }
    v32 = v16;
    if ( v16 != pTaskCreateRequest.m_asyncInfo )
    {
      v16->__abi_AddRef(v16);
      pTaskCreateRequest.m_asyncInfo = v16;
    }
    if ( v16 )
      v16->__abi_Release(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
    WindowsDeleteString_0(v12);
    Instance = TaskManager::GetInstance();
    if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(25, "GetPresenceForSocialGroupAsync CreateTask failed!\n");
      RandomTimeToRetryInSeconds = Live_GenerateRandomTimeToRetryInSeconds(++this->m_friendEnumerateRetryCount, 0x1Eu);
      v20 = Sys_Milliseconds() + 1000 * RandomTimeToRetryInSeconds;
      this->m_friendEnumerateRetryTime = v20;
      Com_Printf(25, "======================= GetPresenceForSocialGroupAsync Error, next retry at %i.\n", v20);
      this->m_friendClientListGlobal[ClientFromController].dirty = 1;
      *(_BYTE *)(v25 + 633856) = 0;
    }
    pTaskCreateRequest.m_onCompletionCallback = NULL;
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_appSecondaryCallback = NULL;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    if ( pTaskCreateRequest.m_asyncInfo )
    {
      pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
      m_asyncInfo = NULL;
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
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  }
  else
  {
    Com_Printf(25, "RequestPresenceForPeopleGroup when controller %d has no LiveContext!\n", (unsigned int)localControllerIndex);
  }
}

/*
==============
Online_Friends::ResetCurrentFriendsSelections
==============
*/
void Online_Friends::ResetCurrentFriendsSelections(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 

  v2 = controllerIndex;
  if ( this->sessionFetchInProgress[controllerIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 674, ASSERT_TYPE_ASSERT, "(sessionFetchInProgress[controllerIndex] == false)", (const char *)&queryFormat, "sessionFetchInProgress[controllerIndex] == false") )
    __debugbreak();
  v4 = v2 << 6;
  this->m_friendsWithJoinableSessions[0][v4] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 1] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 2] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 3] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 4] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 5] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 6] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 7] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 8] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 9] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 10] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 11] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 12] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 13] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 14] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 15] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 16] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 17] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 18] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 19] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 20] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 21] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 22] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 23] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 24] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 25] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 26] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 27] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 28] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 29] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 30] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 31] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 32] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 33] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 34] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 35] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 36] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 37] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 38] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 39] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 40] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 41] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 42] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 43] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 44] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 45] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 46] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 47] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 48] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 49] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 50] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 51] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 52] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 53] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 54] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 55] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 56] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 57] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 58] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 59] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 60] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 61] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 62] = 0i64;
  this->m_friendsWithJoinableSessions[0][v4 + 63] = 0i64;
}

/*
==============
Online_Friends::RetryEnumerateFriends
==============
*/
__int64 Online_Friends::RetryEnumerateFriends(Online_Friends *this, const int localControllerIndex)
{
  LocalClientNum_t ClientFromController; 
  __int64 v4; 
  unsigned int v5; 

  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  ++this->m_friendEnumerateRetryCount;
  v4 = ClientFromController;
  v5 = 1000 * Live_GenerateRandomTimeToRetryInSeconds(this->m_friendEnumerateRetryCount, 0x1Eu);
  this->m_friendEnumerateRetryTime = v5 + Sys_Milliseconds();
  this->m_friendClientListGlobal[v4].dirty = 1;
  this->m_friendClientLists[v4][1].isUpdating = 0;
  return (unsigned int)this->m_friendEnumerateRetryTime;
}

/*
==============
Online_Friends::SendInviteMessage
==============
*/
eFriendPartyInviteError Online_Friends::SendInviteMessage(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  XUID xuids; 

  xuids.m_id = friendId.m_id;
  return LiveParty_InviteToSession(localControllerIndex, 1, &xuids, 1);
}

/*
==============
Online_Friends::ShowPlayerCard
==============
*/
void Online_Friends::ShowPlayerCard(Online_Friends *this, const int localControllerIndex, unsigned __int64 platformId)
{
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 1076, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( Live_IsUserSignedInToLive(localControllerIndex) )
    XShowGamerCardUI(localControllerIndex, platformId);
}

/*
==============
Online_Friends::UpdateNeeded
==============
*/
bool Online_Friends::UpdateNeeded(Online_Friends *this, const int localControllerIndex)
{
  int v6; 

  if ( (unsigned int)localControllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_xb3.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, v6) )
      __debugbreak();
  }
  return this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].dirty && !Live_IsSystemUiActive();
}

/*
==============
Online_Friends::UserIdResolved
==============
*/
void Online_Friends::UserIdResolved(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId, const XUID xuid)
{
  ;
}

