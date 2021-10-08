/*
==============
Online_Friends::CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend
==============
*/

void __fastcall Online_Friends::CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  ?CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend@Online_Friends@@QEAAXHH@Z(this, controllerIndex, friendIndex);
}

/*
==============
Online_Friends::Crossplay_FetchIncomingFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_FetchIncomingFriendRequests(Online_Friends *this, const int controllerIndex)
{
  return ?Crossplay_FetchIncomingFriendRequests@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
DWFriendsNotifications::DWFriendsNotifications
==============
*/

void __fastcall DWFriendsNotifications::DWFriendsNotifications(DWFriendsNotifications *this)
{
  ??0DWFriendsNotifications@@QEAA@XZ(this);
}

/*
==============
Online_Friends::Crossplay_OnSignedIn
==============
*/

void __fastcall Online_Friends::Crossplay_OnSignedIn(Online_Friends *this, const int controllerIndex)
{
  ?Crossplay_OnSignedIn@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Crossplay_AddPlayerByName
==============
*/

bool __fastcall Online_Friends::Crossplay_AddPlayerByName(Online_Friends *this, const int controllerIndex, const char *name, const ClientPlatform platform)
{
  return ?Crossplay_AddPlayerByName@Online_Friends@@QEAA_NHPEBDW4ClientPlatform@@@Z(this, controllerIndex, name, platform);
}

/*
==============
Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend
==============
*/

void __fastcall Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend(Online_Friends *this, const int controllerIndex)
{
  ?Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Crossplay_GetFriends
==============
*/

bool __fastcall Online_Friends::Crossplay_GetFriends(Online_Friends *this, const int controllerIndex, DWFriend **friendsOut, unsigned int *numFriendsOut)
{
  return ?Crossplay_GetFriends@Online_Friends@@QEAA_NHPEAPEAUDWFriend@@AEAI@Z(this, controllerIndex, friendsOut, numFriendsOut);
}

/*
==============
Online_Friends::Crossplay_FetchOutgoingFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_FetchOutgoingFriendRequests(Online_Friends *this, const int controllerIndex)
{
  return ?Crossplay_FetchOutgoingFriendRequests@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Crossplay_FriendJoinable
==============
*/

bool __fastcall Online_Friends::Crossplay_FriendJoinable(Online_Friends *this, const int localControllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?Crossplay_FriendJoinable@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, localControllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::Crossplay_GetUserNameByIndex
==============
*/

char *__fastcall Online_Friends::Crossplay_GetUserNameByIndex(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  return ?Crossplay_GetUserNameByIndex@Online_Friends@@QEAAPEADHH@Z(this, controllerIndex, friendIndex);
}

/*
==============
Online_Friends::Crossplay_FetchFriendsList
==============
*/

bool __fastcall Online_Friends::Crossplay_FetchFriendsList(Online_Friends *this, const int controllerIndex)
{
  return ?Crossplay_FetchFriendsList@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Crossplay_AcceptFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_AcceptFriendRequests(Online_Friends *this, const int controllerIndex, const XUID *xuids, const int numXUIDs)
{
  return ?Crossplay_AcceptFriendRequests@Online_Friends@@QEAA_NHPEBUXUID@@H@Z(this, controllerIndex, xuids, numXUIDs);
}

/*
==============
Online_Friends::Crossplay_GetIncomingFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_GetIncomingFriendRequests(Online_Friends *this, const int controllerIndex, const DWFriend **requestsOut, unsigned int *numRequestsOut)
{
  return ?Crossplay_GetIncomingFriendRequests@Online_Friends@@QEAA_NHPEAPEBUDWFriend@@AEAI@Z(this, controllerIndex, requestsOut, numRequestsOut);
}

/*
==============
ShouldFetchFriendData
==============
*/

bool __fastcall ShouldFetchFriendData(const int friendDataType, const int controllerIndex)
{
  return ?ShouldFetchFriendData@@YA_NHH@Z(friendDataType, controllerIndex);
}

/*
==============
DWFriendsNotifications::friendshipRevoked
==============
*/

void __fastcall DWFriendsNotifications::friendshipRevoked(DWFriendsNotifications *this, bdCrossPlatformFriendsFriendshipRevokedPushMessage *message)
{
  ?friendshipRevoked@DWFriendsNotifications@@MEAAXAEAVbdCrossPlatformFriendsFriendshipRevokedPushMessage@@@Z(this, message);
}

/*
==============
DWFriendsNotifications::inviteAccepted
==============
*/

void __fastcall DWFriendsNotifications::inviteAccepted(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteAcceptedPushMessage *message)
{
  ?inviteAccepted@DWFriendsNotifications@@MEAAXAEAVbdCrossPlatformFriendsInviteAcceptedPushMessage@@@Z(this, message);
}

/*
==============
Online_Friends::Crossplay_RejectFriend
==============
*/

bool __fastcall Online_Friends::Crossplay_RejectFriend(Online_Friends *this, const int controllerIndex, const bdUserAccountID *userId)
{
  return ?Crossplay_RejectFriend@Online_Friends@@AEAA_NHVbdUserAccountID@@@Z(this, controllerIndex, userId);
}

/*
==============
Online_Friends::Crossplay_RemoveFriend
==============
*/

bool __fastcall Online_Friends::Crossplay_RemoveFriend(Online_Friends *this, const int controllerIndex, const XUID xuid)
{
  return ?Crossplay_RemoveFriend@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::Crossplay_FriendInvitable
==============
*/

bool __fastcall Online_Friends::Crossplay_FriendInvitable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?Crossplay_FriendInvitable@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::Crossplay_FindIndex
==============
*/

int __fastcall Online_Friends::Crossplay_FindIndex(Online_Friends *this, const int controllerIndex, XUID friendId)
{
  return ?Crossplay_FindIndex@Online_Friends@@QEAAHHUXUID@@@Z(this, controllerIndex, friendId);
}

/*
==============
DWFriendsNotifications::inviteRejected
==============
*/

void __fastcall DWFriendsNotifications::inviteRejected(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteRejectedPushMessage *message)
{
  ?inviteRejected@DWFriendsNotifications@@MEAAXAEAVbdCrossPlatformFriendsInviteRejectedPushMessage@@@Z(this, message);
}

/*
==============
Online_Friends::Crossplay_GetOutgoingFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_GetOutgoingFriendRequests(Online_Friends *this, const int controllerIndex, const DWFriend **requestsOut, unsigned int *numRequestsOut)
{
  return ?Crossplay_GetOutgoingFriendRequests@Online_Friends@@QEAA_NHPEAPEBUDWFriend@@AEAI@Z(this, controllerIndex, requestsOut, numRequestsOut);
}

/*
==============
Online_Friends::Crossplay_AddFriendsByXUID
==============
*/

bool __fastcall Online_Friends::Crossplay_AddFriendsByXUID(Online_Friends *this, const int controllerIndex, const XUID *xuids, const int numXUIDs)
{
  return ?Crossplay_AddFriendsByXUID@Online_Friends@@QEAA_NHPEBUXUID@@H@Z(this, controllerIndex, xuids, numXUIDs);
}

/*
==============
DWFriendsNotifications::inviteReceived
==============
*/

void __fastcall DWFriendsNotifications::inviteReceived(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteCreatedPushMessage *message)
{
  ?inviteReceived@DWFriendsNotifications@@MEAAXAEAVbdCrossPlatformFriendsInviteCreatedPushMessage@@@Z(this, message);
}

/*
==============
Online_Friends::Crossplay_CancelFriendRequest
==============
*/

bool __fastcall Online_Friends::Crossplay_CancelFriendRequest(Online_Friends *this, const int controllerIndex, const XUID xuid)
{
  return ?Crossplay_CancelFriendRequest@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::Crossplay_OnSignedOut
==============
*/

void __fastcall Online_Friends::Crossplay_OnSignedOut(Online_Friends *this, const int controllerIndex)
{
  ?Crossplay_OnSignedOut@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Crossplay_Init
==============
*/

void __fastcall Online_Friends::Crossplay_Init(Online_Friends *this)
{
  ?Crossplay_Init@Online_Friends@@QEAAXXZ(this);
}

/*
==============
DWFriendsNotifications::inviteReceived
==============
*/
void DWFriendsNotifications::inviteReceived(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteCreatedPushMessage *message)
{
  bdUserDetails *InvitingUserDetails; 
  unsigned int UsernameHash; 
  const char *Username; 
  const char *v7; 
  const bdUserAccountID *InvitingUser; 
  char dest[97]; 

  InvitingUserDetails = (bdUserDetails *)bdCrossPlatformFriendsInviteCreatedPushMessage::getInvitingUserDetails(message);
  UsernameHash = bdUserDetails::getUsernameHash(InvitingUserDetails);
  Username = bdUserDetails::getUsername(InvitingUserDetails);
  Com_sprintf<97>((char (*)[97])dest, "%s%d", Username, UsernameHash);
  v7 = bdUserDetails::getUsername(InvitingUserDetails);
  InvitingUser = bdCrossPlatformFriendsInviteCreatedPushMessage::getInvitingUser(message);
  AddDWFriendToData(1, this->m_controllerIndex, InvitingUser, v7, dest);
}

/*
==============
DWFriendsNotifications::inviteAccepted
==============
*/
void DWFriendsNotifications::inviteAccepted(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteAcceptedPushMessage *message)
{
  __int64 ClientFromController; 
  bdUserAccountID *AcceptingUser; 
  unsigned __int64 UserID; 
  int v7; 
  DWFriend *v8; 
  const bdUserAccountID *v9; 
  OnlinePresenceNotifications *Instance; 
  const char *v11; 
  XUID xuid; 
  __int64 v13; 
  bdUserAccountID result; 

  v13 = -2i64;
  ClientFromController = CL_Mgr_GetClientFromController(this->m_controllerIndex);
  AcceptingUser = bdCrossPlatformFriendsInviteAcceptedPushMessage::getAcceptingUser(message, &result);
  UserID = bdUserAccountID::getUserID(AcceptingUser);
  XUID::FromUniversalId(&xuid, UserID);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  v7 = 0;
  if ( s_dwFriendData[ClientFromController][2].count <= 0 )
    goto LABEL_6;
  do
  {
    v8 = &s_dwFriendData[ClientFromController][2].list[v7];
    if ( XUID::operator==(&v8->xuid, &xuid) )
      break;
    ++v7;
  }
  while ( v7 < s_dwFriendData[ClientFromController][2].count );
  if ( v8 )
  {
    v9 = bdCrossPlatformFriendsInviteAcceptedPushMessage::getAcceptingUser(message, &result);
    AddDWFriendToData(0, this->m_controllerIndex, v9, v8->name, v8->nameWithHash);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
    RemoveDWFriendFromData(2, this->m_controllerIndex, xuid);
    Instance = OnlinePresenceNotifications::GetInstance();
    OnlinePresenceNotifications::SubscribeToUser(Instance, this->m_controllerIndex, xuid, CrossplayFriend);
  }
  else
  {
LABEL_6:
    v11 = XUID::ToDevString(&xuid);
    Com_PrintError(14, "%s Could not find xuid: %s in FRIEND_DATA_TYPE_PENDING_OUTGOING list, it's possible there is a fetch in flight and the list is cleared until received.\n", "DWFriendsNotifications::inviteAccepted", v11);
  }
}

/*
==============
DWFriendsNotifications::inviteRejected
==============
*/
void DWFriendsNotifications::inviteRejected(DWFriendsNotifications *this, bdCrossPlatformFriendsInviteRejectedPushMessage *message)
{
  bdUserAccountID *RejectingUser; 
  const XUID *v5; 
  DWFriend *v6; 
  bdUserAccountID *v7; 
  const XUID *v8; 
  const XUID *v9; 
  DWFriend *v10; 
  bdUserAccountID *v11; 
  const XUID *v12; 
  XUID result; 
  __int64 v14; 
  bdUserAccountID v15; 

  v14 = -2i64;
  RejectingUser = bdCrossPlatformFriendsInviteRejectedPushMessage::getRejectingUser(message, &v15);
  v5 = XUID::FromUniversalId(&result, RejectingUser->m_userID);
  v6 = SearchForXUIDInFriendData(2, this->m_controllerIndex, (const XUID)v5->m_id);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v15.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v15.gap38);
  v7 = bdCrossPlatformFriendsInviteRejectedPushMessage::getRejectingUser(message, &v15);
  if ( v6 )
  {
    v8 = XUID::FromUniversalId(&result, v7->m_userID);
    RemoveDWFriendFromData(2, this->m_controllerIndex, (const XUID)v8->m_id);
  }
  else
  {
    v9 = XUID::FromUniversalId(&result, v7->m_userID);
    v10 = SearchForXUIDInFriendData(1, this->m_controllerIndex, (const XUID)v9->m_id);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v15.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v15.gap38);
    if ( !v10 )
      return;
    v11 = bdCrossPlatformFriendsInviteRejectedPushMessage::getRejectingUser(message, &v15);
    v12 = XUID::FromUniversalId(&result, v11->m_userID);
    RemoveDWFriendFromData(1, this->m_controllerIndex, (const XUID)v12->m_id);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v15.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)v15.gap38);
}

/*
==============
DWFriendsNotifications::friendshipRevoked
==============
*/
void DWFriendsNotifications::friendshipRevoked(DWFriendsNotifications *this, bdCrossPlatformFriendsFriendshipRevokedPushMessage *message)
{
  bdUserAccountID *RevokingUser; 
  OnlinePresenceNotifications *Instance; 
  Online_Friends *v5; 
  const char *v6; 
  Online_Friends *v7; 
  XUID xuid; 
  __int64 v9; 
  bdUserAccountID result; 

  v9 = -2i64;
  RevokingUser = bdCrossPlatformFriendsFriendshipRevokedPushMessage::getRevokingUser(message, &result);
  XUID::FromUniversalId(&xuid, RevokingUser->m_userID);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  RemoveDWFriendFromData(0, this->m_controllerIndex, xuid);
  Instance = OnlinePresenceNotifications::GetInstance();
  OnlinePresenceNotifications::UnsubscribeFromUser(Instance, this->m_controllerIndex, xuid, CrossplayFriend);
  v5 = Online_Friends::GetInstance();
  if ( Online_Friends::FavoriteFriends_IsEnabled(v5) )
  {
    v6 = XUID::ToString(&xuid);
    Com_Printf(25, "RemoveDWFriendFromData called for xuid %s, going to relink the favorite friends\n", v6);
    v7 = Online_Friends::GetInstance();
    Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible(v7, this->m_controllerIndex);
  }
}

/*
==============
DWFriendsNotifications::DWFriendsNotifications
==============
*/
void DWFriendsNotifications::DWFriendsNotifications(DWFriendsNotifications *this)
{
  this->m_inited = 0;
  this->__vftable = (DWFriendsNotifications_vtbl *)&DWFriendsNotifications::`vftable';
  this->m_controllerIndex = -1;
}

/*
==============
AddDWFriendToData
==============
*/
void AddDWFriendToData(const int friendDataType, const int controllerIndex, const bdUserAccountID *userAccountId, const char *username, const char *usernameWithHash)
{
  __int64 v5; 
  DWFriendData *FriendData; 
  __int64 count; 
  __int64 v11; 
  const XUID *v12; 
  Online_BlockList *Instance; 
  Online_Friends *v14; 
  lua_State *v15; 
  LocalClientNum_t ClientFromController; 
  lua_State *v17; 
  const char *v18; 
  const char *v19; 
  OnlineChatManager *v20; 
  unsigned __int64 v21; 
  char *fmt; 
  XUID result; 

  v5 = controllerIndex;
  if ( !username && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1139, ASSERT_TYPE_ASSERT, "(username)", (const char *)&queryFormat, "username") )
    __debugbreak();
  FriendData = GetFriendData(friendDataType, v5);
  count = FriendData->count;
  if ( (_DWORD)count == FriendData->listSize )
  {
    Com_PrintError(14, "Couldn't properly handle the add as we already have the maximum amount in list type %i\n", (unsigned int)friendDataType);
  }
  else
  {
    FriendData->count = count + 1;
    v11 = (__int64)&FriendData->list[count];
    v12 = XUID::FromUniversalId(&result, userAccountId->m_userID);
    XUID::operator=((XUID *)v11, v12);
    Core_strcpy((char *)(v11 + 8), 0x40ui64, username);
    Core_strcpy((char *)(v11 + 72), 0x40ui64, usernameWithHash);
    Instance = Online_BlockList::GetInstance();
    if ( Online_BlockList::IsBlocked(Instance, v5, *(const XUID *)v11) )
    {
      LODWORD(fmt) = friendDataType;
      Com_Printf(14, "%s: Removing friend %zu from list type %i because they are blocked\n", "AddDWFriendToData", userAccountId->m_userID, fmt);
      v14 = Online_Friends::GetInstance();
      if ( (unsigned int)(friendDataType - 1) <= 1 )
        Online_Friends::Crossplay_CancelFriendRequest(v14, v5, *(const XUID *)v11);
      else
        Online_Friends::Crossplay_RemoveFriend(v14, v5, *(const XUID *)v11);
    }
    else
    {
      if ( friendDataType == 1 )
      {
        v15 = LUI_luaVM;
        ClientFromController = CL_Mgr_GetClientFromController(v5);
        if ( LUI_BeginEvent(ClientFromController, "send_toast_notification", v15) )
        {
          LUI_BeginTable("options", 0, 2, LUI_luaVM);
          LUI_SetTableString("genEventName", "genFriendRequestReceived", LUI_luaVM);
          LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
          LUI_SetTableString("friendName", (const char *)(v11 + 8), LUI_luaVM);
          v17 = LUI_luaVM;
          v18 = XUID::ToString((XUID *)v11);
          LUI_SetTableString("xuidString", v18, v17);
          LUI_SetTableBool("isCrossplay", 1, LUI_luaVM);
          LUI_EndTable(LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
        v19 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_FRIEND_REQUEST", "ui string", LOCMSG_NOERR);
        if ( v19 )
        {
          v20 = OnlineChatManager::GetInstance();
          v21 = XUID::ToUint64((XUID *)v11);
          OnlineChatManager::SendPlayerEvent(v20, v5, v19, v21, (const char *)(v11 + 8));
        }
      }
      LODWORD(fmt) = friendDataType;
      Com_Printf(14, "%s: Added new friend %zu to list type %i\n", "AddDWFriendToData", userAccountId->m_userID, fmt);
    }
  }
}

/*
==============
AddFriendCallback
==============
*/
void AddFriendCallback(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_controllerIndex; 
  bool v5; 
  bool v6; 
  int v7; 
  lua_State *v8; 
  LocalClientNum_t ClientFromController; 
  Online_Friends *InstancePtr; 
  Online_Friends *v11; 
  Online_Friends *v12; 

  m_controllerIndex = task->m_controllerIndex;
  v5 = state == TASKSTATE_SUCCESS;
  v6 = task->m_appTaskType == 0;
  v7 = task->m_controllerIndex;
  if ( v6 )
  {
    v8 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(v7);
    if ( LUI_BeginEvent(ClientFromController, "send_toast_notification", v8) )
    {
      LUI_BeginTable("options", 0, 2, LUI_luaVM);
      LUI_SetTableString("genEventName", "genFriendRequestAccepted", LUI_luaVM);
      LUI_SetTableInt("controllerIndex", m_controllerIndex, LUI_luaVM);
      LUI_SetTableBool("success", v5, LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    SendLuaAddFriendNotification(v7, v5, GENERAL);
  }
  if ( state == TASKSTATE_SUCCESS )
  {
    ClearList(0, task->m_controllerIndex);
    InstancePtr = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchFriendsList(InstancePtr, task->m_controllerIndex);
    ClearList(1, task->m_controllerIndex);
    v11 = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchIncomingFriendRequests(v11, task->m_controllerIndex);
    ClearList(2, task->m_controllerIndex);
    v12 = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchOutgoingFriendRequests(v12, task->m_controllerIndex);
  }
  s_addFriendInProgress = 0;
}

/*
==============
AddPlayerByNameCallback
==============
*/
void AddPlayerByNameCallback(const int controllerIndex, const bool success, const bdCrossPlatformUser *results, __int64 numResults)
{
  int v6; 
  bdCrossPlatformAccount *v7; 
  const char *AccountType; 
  unsigned __int64 AccountID; 
  const char *UserName; 
  unsigned __int64 v11; 
  const XUID *v12; 
  Online_Friends *InstancePtr; 
  XUID result; 
  XUID xuids; 
  XUID v16; 

  if ( !success || !(_DWORD)numResults )
  {
    Com_PrintError(14, "%s: Couldn't find player\n", "AddPlayerByNameCallback");
    goto LABEL_12;
  }
  Com_Printf(14, "%s: Got back results for %i users\n", "AddPlayerByNameCallback", numResults);
  XUID::NullXUID(&result);
  v6 = 0;
  if ( !bdCrossPlatformUser::getNumberOfAccounts((bdCrossPlatformUser *)results) )
  {
LABEL_6:
    Com_PrintError(14, "%s: The results we got back were not for an uno player\n", "AddPlayerByNameCallback");
LABEL_12:
    SendLuaAddFriendNotification(controllerIndex, 0, GENERAL);
    return;
  }
  while ( 1 )
  {
    v7 = (bdCrossPlatformAccount *)&bdCrossPlatformUser::getAccounts((bdCrossPlatformUser *)results)[v6];
    AccountType = bdCrossPlatformAccount::getAccountType(v7);
    if ( !I_strcmp(AccountType, "uno") )
      break;
    if ( ++v6 >= bdCrossPlatformUser::getNumberOfAccounts((bdCrossPlatformUser *)results) )
      goto LABEL_6;
  }
  AccountID = bdCrossPlatformAccount::getAccountID(v7);
  UserName = bdCrossPlatformAccount::getUserName(v7);
  Com_Printf(14, "%s: Found player %s, XUID: %zu\n", "AddPlayerByNameCallback", UserName, AccountID);
  v11 = bdCrossPlatformAccount::getAccountID(v7);
  v12 = XUID::FromUniversalId(&v16, v11);
  XUID::operator=(&result, v12);
  if ( !XUID::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1031, ASSERT_TYPE_SANITY, "( resultXuid.IsValid() )", (const char *)&queryFormat, "resultXuid.IsValid()") )
    __debugbreak();
  XUID::XUID(&xuids);
  XUID::operator=(&xuids, &result);
  InstancePtr = Online_Friends::GetInstancePtr();
  Online_Friends::Crossplay_AddFriendsByXUID(InstancePtr, controllerIndex, &xuids, 1);
}

/*
==============
ClearList
==============
*/
void ClearList(const int friendDataType, const int controllerIndex)
{
  int *FriendData; 
  int v3; 
  int *v4; 
  __int64 v5; 
  __int64 v6; 
  const XUID *v7; 
  XUID result; 

  FriendData = (int *)GetFriendData(friendDataType, controllerIndex);
  v3 = 0;
  v4 = FriendData;
  FriendData[6] = 0;
  if ( FriendData[4] <= 0 )
  {
    FriendData[5] = 0;
  }
  else
  {
    v5 = 0i64;
    do
    {
      v6 = v5 + *((_QWORD *)v4 + 1);
      v7 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)v6, v7);
      Core_strcpy((char *)(v6 + 8), 0x40ui64, (const char *)&queryFormat.fmt + 3);
      ++v3;
      *(_BYTE *)(v6 + 136) = 0;
      v5 += 144i64;
    }
    while ( v3 < v4[4] );
    v4[5] = 0;
  }
}

/*
==============
Online_Friends::CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend
==============
*/
void Online_Friends::CrossPlay_UpdateIfCrossplayFriendAtIndexIsAlsoPlatformFriend(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  __int64 v3; 
  __int64 ClientFromController; 
  __int64 v6; 
  Online_Friends *Instance; 
  int v9; 

  v3 = friendIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1307, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( (int)v3 >= s_dwFriendData[ClientFromController][0].count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1311, ASSERT_TYPE_ASSERT, "(friendIndex < friendsData->count)", (const char *)&queryFormat, "friendIndex < friendsData->count") )
    __debugbreak();
  v6 = v3;
  if ( XUID::IsValid(&s_dwFriendData[ClientFromController][0].list[v6].xuid) && !s_dwFriendData[ClientFromController][0].list[v6].isPlatformFriend )
  {
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::IsFriendByID(Instance, controllerIndex, s_dwFriendData[ClientFromController][0].list[v6].xuid) )
      s_dwFriendData[ClientFromController][0].list[v6].isPlatformFriend = 1;
  }
}

/*
==============
Online_Friends::Crossplay_AcceptFriendRequests
==============
*/

bool __fastcall Online_Friends::Crossplay_AcceptFriendRequests(Online_Friends *this, const int controllerIndex, const XUID *xuids, const int numXUIDs)
{
  return Online_Friends::Crossplay_AddFriendsByXUID(this, controllerIndex, xuids, numXUIDs);
}

/*
==============
Online_Friends::Crossplay_AddFriendsByXUID
==============
*/
bool Online_Friends::Crossplay_AddFriendsByXUID(Online_Friends *this, const int controllerIndex, const XUID *xuids, const int numXUIDs)
{
  __int64 v4; 
  char v7; 
  int v8; 
  __int64 v9; 
  unsigned __int64 *p_m_userID; 
  Online_BlockList *Instance; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  DWServicesAccess *v15; 
  DWFriends *Friends; 
  TaskCreateRequest *v17; 
  bdRemoteTask *v18; 
  TaskManager *v19; 
  unsigned __int64 *v20; 
  unsigned __int64 *v21; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  XUID xuid; 
  DWFriendData *friendData; 
  TaskCreateRequest pTaskCreateRequest; 
  DWFriendData *v27; 
  DWFriendData *v28; 
  Online_Friends *v29; 
  __int64 v30; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID userIdOut; 
  bdUserAccountID ptr[100]; 

  v30 = -2i64;
  v4 = numXUIDs;
  v29 = this;
  if ( s_addFriendInProgress )
  {
    Com_PrintError(14, "%s: unable to add friend, add already in progress\n", "Online_Friends::Crossplay_AddFriendsByXUID");
    return 0;
  }
  if ( !xuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 447, ASSERT_TYPE_ASSERT, "(xuids)", (const char *)&queryFormat, "xuids") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 448, ASSERT_TYPE_ASSERT, "(numXUIDs > 0)", (const char *)&queryFormat, "numXUIDs > 0") )
    __debugbreak();
  if ( (unsigned int)v4 > 0x64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 449, ASSERT_TYPE_ASSERT, "(numXUIDs <= BD_CROSS_PLATFORM_FRIENDS_MAX_FRIENDS_PAGE_SIZE)", (const char *)&queryFormat, "numXUIDs <= BD_CROSS_PLATFORM_FRIENDS_MAX_FRIENDS_PAGE_SIZE") )
    __debugbreak();
  if ( !xuids || (int)v4 <= 0 || (unsigned int)v4 > 0x64 )
  {
    Com_PrintError(14, "%s: invalid xuids\n", "Online_Friends::Crossplay_AddFriendsByXUID");
    return 0;
  }
  `eh vector vbase constructor iterator'(ptr, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::bdUserAccountID, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  friendData = s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)];
  v27 = &s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][2];
  v28 = &s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][1];
  bdUserAccountID::bdUserAccountID(&userIdOut);
  v7 = 0;
  v8 = 0;
  if ( v4 <= 0 )
    goto LABEL_57;
  v9 = 0i64;
  p_m_userID = &ptr[0].m_userID;
  do
  {
    xuid.m_id = xuids[v9].m_id;
    Instance = Online_BlockList::GetInstance();
    if ( Online_BlockList::IsBlocked(Instance, controllerIndex, xuid) )
    {
      SendLuaAddFriendNotification(controllerIndex, 0, BLOCKED);
      v12 = XUID::ToString(&xuid);
      Com_PrintError(14, "%s: [%i] Couldn't add xuid %s to friends list because it's on our block list\n", "Online_Friends::Crossplay_AddFriendsByXUID", (unsigned int)controllerIndex, v12);
    }
    else if ( GetAccountUserIdFromList(friendData, xuid, &userIdOut) )
    {
      SendLuaAddFriendNotification(controllerIndex, 0, ALREADY_FRIENDS);
      v13 = XUID::ToString(&xuid);
      Com_PrintError(14, "%s: [%i] Couldn't add xuid %s to friends list because we already have are friends\n", "Online_Friends::Crossplay_AddFriendsByXUID", (unsigned int)controllerIndex, v13);
    }
    else if ( GetAccountUserIdFromList(v27, xuid, &userIdOut) )
    {
      SendLuaAddFriendNotification(controllerIndex, 0, PENDING);
      v14 = XUID::ToString(&xuid);
      Com_PrintError(14, "%s: [%i] Couldn't add xuid %s to friends list because we already have a request pending\n", "Online_Friends::Crossplay_AddFriendsByXUID", (unsigned int)controllerIndex, v14);
    }
    else
    {
      if ( GetAccountUserIdFromList(v28, xuid, &userIdOut) )
        v7 = 1;
      *p_m_userID = XUID::GetUniversalId(&xuid);
      Core_strcpy(ptr[v8++]._bytes_20, 0xAui64, "uno");
      p_m_userID += 9;
    }
    ++v9;
  }
  while ( v9 < v4 );
  if ( v8 )
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v15 = DWServicesAccess::GetInstance();
    Friends = DWServicesAccess::GetFriends(v15, controllerIndex);
    v17 = (TaskCreateRequest *)DWFriends::addFriends(Friends, (bdReference<bdRemoteTask> *)&friendData, ptr, v8, &s_inviteResponse);
    if ( v17 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v18 = *(bdRemoteTask **)&v17->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v18;
      if ( v18 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v18->m_refCount, 1u);
    }
    if ( friendData && _InterlockedExchangeAdd((volatile signed __int32 *)&friendData->list, 0xFFFFFFFF) == 1 && friendData )
      (**(void (__fastcall ***)(DWFriendData *, __int64))&friendData->activeFetchingCount)(friendData, 1i64);
    pTaskCreateRequest.m_appData = v29;
    pTaskCreateRequest.m_onCompletionCallback = AddFriendCallback;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_appTaskType = v7 == 0;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v19 = TaskManager::GetInstance(), TaskManager::CreateTask(v19, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      v20 = &ptr[0].m_userID;
      do
      {
        Com_Printf(14, "%s: Started task to send friend request to %zu\n", "Online_Friends::Crossplay_AddFriendsByXUID", *v20);
        v20 += 9;
        --v4;
      }
      while ( v4 );
      s_addFriendInProgress = 1;
      LOBYTE(v4) = 1;
    }
    else
    {
      v21 = &ptr[0].m_userID;
      do
      {
        Com_PrintError(14, "%s: Failed to send friend request to %zu\n", "Online_Friends::Crossplay_AddFriendsByXUID", *v21);
        v21 += 9;
        --v4;
      }
      while ( v4 );
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
  }
  else
  {
LABEL_57:
    Com_PrintError(14, "%s: [%i] Couldn't add any xuids to friends list\n", "Online_Friends::Crossplay_AddFriendsByXUID", (unsigned int)controllerIndex);
    LOBYTE(v4) = 0;
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userIdOut.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userIdOut.gap38);
  `eh vector destructor iterator'(ptr, 0x48ui64, 0x64ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  return v4;
}

/*
==============
Online_Friends::Crossplay_AddPlayerByName
==============
*/
char Online_Friends::Crossplay_AddPlayerByName(Online_Friends *this, const int controllerIndex, const char *name, const ClientPlatform platform)
{
  unsigned __int8 v4; 
  const char *AccountTypeString; 
  const char *v10; 
  DWUsernameSearch::SearchRequest searchRequest; 

  v4 = platform;
  if ( !name )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1057, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
LABEL_4:
    SendLuaAddFriendNotification(controllerIndex, 0, GENERAL);
    return 0;
  }
  if ( !I_strcmp(name, (const char *)&queryFormat.fmt + 3) )
    goto LABEL_4;
  Com_Printf(14, "%s: Searching for player %s (who exists on platform %i) on Demonware\n", "Online_Friends::Crossplay_AddPlayerByName", name, (char)v4);
  AccountTypeString = dwPlatformTypes_GetAccountTypeString((const ClientPlatform)v4);
  searchRequest.username = name;
  v10 = "uno";
  searchRequest.maxResults = 1;
  if ( AccountTypeString )
    v10 = AccountTypeString;
  searchRequest.subStringSearch = 0;
  searchRequest.accountProvider = v10;
  searchRequest.callback = (void (__fastcall *)(const int, const bool, const bdCrossPlatformUser *, const unsigned int))AddPlayerByNameCallback;
  if ( !DWUsernameSearch::Search(&this->m_userNameSearch, controllerIndex, &searchRequest) )
    goto LABEL_4;
  return 1;
}

/*
==============
Online_Friends::Crossplay_CancelFriendRequest
==============
*/
_BOOL8 Online_Friends::Crossplay_CancelFriendRequest(Online_Friends *this, const int controllerIndex, const XUID xuid)
{
  __int64 ClientFromController; 
  int v6; 
  int v7; 
  __int64 v8; 
  const char *v9; 
  bool v10; 
  const bdUserAccountID *v12; 
  XUID xuida; 
  __int64 v14; 
  bdUserAccountID v15; 
  bdUserAccountID other; 
  XUID v17; 

  v17.m_id = xuid.m_id;
  v14 = -2i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  bdUserAccountID::bdUserAccountID(&other);
  xuida.m_id = v17.m_id;
  v6 = 0;
  v7 = 0;
  if ( s_dwFriendData[ClientFromController][1].count > 0 )
  {
    while ( !XUID::operator==(&s_dwFriendData[ClientFromController][1].list[v7].xuid, &xuida) )
    {
      if ( ++v7 >= s_dwFriendData[ClientFromController][1].count )
        goto LABEL_4;
    }
    goto LABEL_9;
  }
LABEL_4:
  v8 = CL_Mgr_GetClientFromController(controllerIndex);
  xuida.m_id = v17.m_id;
  if ( s_dwFriendData[v8][2].count > 0 )
  {
    while ( !XUID::operator==(&s_dwFriendData[v8][2].list[v6].xuid, &xuida) )
    {
      if ( ++v6 >= s_dwFriendData[v8][2].count )
        goto LABEL_7;
    }
LABEL_9:
    other.m_userID = XUID::GetUniversalId(&xuida);
    Core_strcpy(other._bytes_20, 0xAui64, "uno");
    bdUserAccountID::bdUserAccountID(&v15, &other);
    v10 = Online_Friends::Crossplay_RejectFriend(this, controllerIndex, v12);
    goto LABEL_8;
  }
LABEL_7:
  v9 = XUID::ToDevString(&v17);
  Com_PrintError(14, "%s: friend request (outgoing or incoming) for %s not present to remove\n", "Online_Friends::Crossplay_CancelFriendRequest", v9);
  v10 = 0;
LABEL_8:
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  return v10;
}

/*
==============
Online_Friends::Crossplay_FetchFriendsList
==============
*/
bool Online_Friends::Crossplay_FetchFriendsList(Online_Friends *this, const int controllerIndex)
{
  __int64 ClientFromController; 
  int errorCount; 
  int v5; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][0].listFetchState )
    return 0;
  errorCount = s_dwFriendData[ClientFromController][0].errorCount;
  if ( errorCount )
  {
    v5 = (1 << (errorCount - 1)) * Dvar_GetInt_Internal_DebugName(DVARINT_online_crossplay_fail_backoff_threshold, "online_crossplay_fail_backoff_threshold");
    if ( v5 + s_dwFriendData[ClientFromController][0].lastFailTime >= Sys_Milliseconds() )
      return 0;
  }
  s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][0].activeFetchingCount = 0;
  return Crossplay_FetchFriendsList_Internal(controllerIndex, (const char *)&queryFormat.fmt + 3);
}

/*
==============
Crossplay_FetchFriendsList_Internal
==============
*/
__int64 Crossplay_FetchFriendsList_Internal(const int controllerIndex, const char *pageToken)
{
  LocalClientNum_t ClientFromController; 
  bdGetFriendsResponse *FriendsTaskResponse; 
  DWServicesAccess *Instance; 
  DWFriends *Friends; 
  TaskCreateRequest *v8; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
  Online_Friends *v11; 
  Online_Friends *v12; 
  unsigned __int8 v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  FriendsTaskResponse = GetGetFriendsTaskResponse(ClientFromController);
  bdGetFriendsResponse::clearBuffer(FriendsTaskResponse);
  Instance = DWServicesAccess::GetInstance();
  Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
  v8 = (TaskCreateRequest *)DWFriends::getFriends(Friends, &result, FriendsTaskResponse, pageToken);
  if ( v8 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v9 = *(bdRemoteTask **)&v8->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_onCompletionCallback = FetchFriendsListComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v10 = TaskManager::GetInstance(), TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][0].listFetchState = FETCHING;
    Com_Printf(14, "%s: Started task to fetch friends\n", "Crossplay_FetchFriendsList_Internal");
    v11 = Online_Friends::GetInstance();
    if ( Online_Friends::FavoriteFriends_IsEnabled(v11) )
    {
      Com_Printf(25, "Crossplay_FetchFriendsList_Internal called\n");
      v12 = Online_Friends::GetInstance();
      Online_Friends::FavoriteFriends_SetCrossplayFriendsListDoesNotExist(v12, controllerIndex);
    }
    v13 = 1;
  }
  else
  {
    TrackError(0, controllerIndex);
    Com_PrintError(14, "%s: Failed to fetch friends\n", "Crossplay_FetchFriendsList_Internal");
    v13 = 0;
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
  return v13;
}

/*
==============
Online_Friends::Crossplay_FetchIncomingFriendRequests
==============
*/
char Online_Friends::Crossplay_FetchIncomingFriendRequests(Online_Friends *this, const int controllerIndex)
{
  __int64 ClientFromController; 
  int errorCount; 
  int v6; 
  __int64 v7; 
  bdGetPendingFriendsResponse *v8; 
  DWServicesAccess *Instance; 
  DWFriends *Friends; 
  TaskCreateRequest *Pending; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  char v14; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][1].listFetchState )
    return 0;
  errorCount = s_dwFriendData[ClientFromController][1].errorCount;
  if ( errorCount )
  {
    v6 = s_dwFriendData[ClientFromController][1].lastFailTime + Dvar_GetInt_Internal_DebugName(DVARINT_online_crossplay_fail_backoff_threshold, "online_crossplay_fail_backoff_threshold") * (1 << (errorCount - 1));
    if ( v6 >= Sys_Milliseconds() )
      return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v7 = CL_Mgr_GetClientFromController(controllerIndex);
  if ( dword_14A151604 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14A151604);
    if ( dword_14A151604 == -1 )
    {
      `eh vector constructor iterator'(&unk_14A103170, 0x209E8ui64, 2ui64, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::bdGetPendingFriendsResponse, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse);
      j_atexit(GetGetPendingIncomingTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_pendingIncomingResponses__);
      j__Init_thread_footer(&dword_14A151604);
    }
  }
  v8 = (bdGetPendingFriendsResponse *)((char *)&unk_14A103170 + 133608 * v7);
  bdGetPendingFriendsResponse::clearBuffer(v8);
  Instance = DWServicesAccess::GetInstance();
  Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
  Pending = (TaskCreateRequest *)DWFriends::getPending(Friends, &result, v8, 0);
  if ( Pending != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v12 = *(bdRemoteTask **)&Pending->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = FetchIncomingFriendRequestsComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][1].listFetchState = FETCHING;
    Com_Printf(14, "%s: Started task to fetch incoming friend requests\n", "Online_Friends::Crossplay_FetchIncomingFriendRequests");
    v14 = 1;
  }
  else
  {
    TrackError(1, controllerIndex);
    Com_PrintError(14, "%s: Failed to fetch incoming friend requests\n", "Online_Friends::Crossplay_FetchIncomingFriendRequests");
    v14 = 0;
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
  return v14;
}

/*
==============
Online_Friends::Crossplay_FetchOutgoingFriendRequests
==============
*/
char Online_Friends::Crossplay_FetchOutgoingFriendRequests(Online_Friends *this, const int controllerIndex)
{
  __int64 ClientFromController; 
  int errorCount; 
  int v6; 
  __int64 v7; 
  bdGetPendingFriendsResponse *v8; 
  DWServicesAccess *Instance; 
  DWFriends *Friends; 
  TaskCreateRequest *Pending; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  char v14; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][2].listFetchState )
    return 0;
  errorCount = s_dwFriendData[ClientFromController][2].errorCount;
  if ( errorCount )
  {
    v6 = s_dwFriendData[ClientFromController][2].lastFailTime + Dvar_GetInt_Internal_DebugName(DVARINT_online_crossplay_fail_backoff_threshold, "online_crossplay_fail_backoff_threshold") * (1 << (errorCount - 1));
    if ( v6 >= Sys_Milliseconds() )
      return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  v7 = CL_Mgr_GetClientFromController(controllerIndex);
  if ( dword_14A19FAA4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14A19FAA4);
    if ( dword_14A19FAA4 == -1 )
    {
      `eh vector constructor iterator'(&unk_14A151610, 0x209E8ui64, 2ui64, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::bdGetPendingFriendsResponse, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse);
      j_atexit(GetGetPendingOutgoingTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_pendingOutgoingResponses__);
      j__Init_thread_footer(&dword_14A19FAA4);
    }
  }
  v8 = (bdGetPendingFriendsResponse *)((char *)&unk_14A151610 + 133608 * v7);
  bdGetPendingFriendsResponse::clearBuffer(v8);
  Instance = DWServicesAccess::GetInstance();
  Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
  Pending = (TaskCreateRequest *)DWFriends::getPending(Friends, &result, v8, 1);
  if ( Pending != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v12 = *(bdRemoteTask **)&Pending->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = FetchOutgoingFriendRequestsComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][2].listFetchState = FETCHING;
    Com_Printf(14, "%s: Started task to fetch outgoing friend requests\n", "Online_Friends::Crossplay_FetchOutgoingFriendRequests");
    v14 = 1;
  }
  else
  {
    TrackError(2, controllerIndex);
    Com_PrintError(14, "%s: Failed to fetch outgoing friend requests\n", "Online_Friends::Crossplay_FetchOutgoingFriendRequests");
    v14 = 0;
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
  return v14;
}

/*
==============
Online_Friends::Crossplay_FindIndex
==============
*/
__int64 Online_Friends::Crossplay_FindIndex(Online_Friends *this, const int controllerIndex, XUID friendId)
{
  __int64 ClientFromController; 
  unsigned int v5; 
  XUID xuid; 

  xuid.m_id = friendId.m_id;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 944, ASSERT_TYPE_ASSERT, "(IsControllerValid( controllerIndex ))", (const char *)&queryFormat, "IsControllerValid( controllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][0].listFetchState != FETCHED )
    return 0xFFFFFFFFi64;
  v5 = 0;
  if ( s_dwFriendData[ClientFromController][0].count <= 0 )
    return 0xFFFFFFFFi64;
  while ( !XUID::operator==(&s_dwFriendData[ClientFromController][0].list[v5].xuid, &xuid) )
  {
    if ( (signed int)++v5 >= s_dwFriendData[ClientFromController][0].count )
      return 0xFFFFFFFFi64;
  }
  return v5;
}

/*
==============
Online_Friends::Crossplay_FriendInvitable
==============
*/
char Online_Friends::Crossplay_FriendInvitable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  if ( !Live_HasOnlineServicesAndRequirementsToInvite(controllerIndex, errorString, devErrorString, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 993, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, false ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( controllerIndex, errorString, devErrorString, false )") )
    __debugbreak();
  if ( !Live_IsInGamemodeToInvite(errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 994, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
    __debugbreak();
  if ( Online_Friends::Crossplay_FindIndex(this, controllerIndex, xuid) == -1 )
  {
    *errorString = "ONLINE/INVALID_FRIEND_INDEX";
    return 0;
  }
  else if ( Social_IsUserInvitable(controllerIndex, xuid, errorString, devErrorString) )
  {
    return 1;
  }
  else
  {
    if ( !*errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1005, ASSERT_TYPE_ASSERT, "(*errorString)", (const char *)&queryFormat, "*errorString") )
      __debugbreak();
    return 0;
  }
}

/*
==============
Online_Friends::Crossplay_FriendJoinable
==============
*/
bool Online_Friends::Crossplay_FriendJoinable(Online_Friends *this, const int localControllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 969, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( !Live_HasOnlineServicesAndRequirementsToJoin(localControllerIndex, errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 970, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString )") )
    __debugbreak();
  if ( Online_Friends::Crossplay_FindIndex(this, localControllerIndex, xuid) != -1 )
    return Social_IsUserJoinable(localControllerIndex, xuid, 1, errorString, devErrorString);
  *errorString = "ONLINE/INVALID_FRIEND_INDEX";
  return 0;
}

/*
==============
Online_Friends::Crossplay_GetFriends
==============
*/
char Online_Friends::Crossplay_GetFriends(Online_Friends *this, const int controllerIndex, DWFriend **friendsOut, unsigned int *numFriendsOut)
{
  __int64 ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  *friendsOut = s_dwFriendData[ClientFromController][0].list;
  *numFriendsOut = s_dwFriendData[ClientFromController][0].count;
  return 1;
}

/*
==============
Online_Friends::Crossplay_GetIncomingFriendRequests
==============
*/
char Online_Friends::Crossplay_GetIncomingFriendRequests(Online_Friends *this, const int controllerIndex, const DWFriend **requestsOut, unsigned int *numRequestsOut)
{
  __int64 ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][1].listFetchState != FETCHED )
    return 0;
  *requestsOut = s_dwFriendData[ClientFromController][1].list;
  *numRequestsOut = s_dwFriendData[ClientFromController][1].count;
  return 1;
}

/*
==============
Online_Friends::Crossplay_GetOutgoingFriendRequests
==============
*/
char Online_Friends::Crossplay_GetOutgoingFriendRequests(Online_Friends *this, const int controllerIndex, const DWFriend **requestsOut, unsigned int *numRequestsOut)
{
  __int64 ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( s_dwFriendData[ClientFromController][2].listFetchState != FETCHED )
    return 0;
  *requestsOut = s_dwFriendData[ClientFromController][2].list;
  *numRequestsOut = s_dwFriendData[ClientFromController][2].count;
  return 1;
}

/*
==============
Online_Friends::Crossplay_GetUserNameByIndex
==============
*/
char *Online_Friends::Crossplay_GetUserNameByIndex(Online_Friends *this, const int controllerIndex, const int friendIndex)
{
  __int64 v3; 
  __int64 ClientFromController; 
  __int64 v7; 
  int count; 

  v3 = friendIndex;
  if ( friendIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 238, ASSERT_TYPE_ASSERT, "(friendIndex != -1)", (const char *)&queryFormat, "friendIndex != FRIENDS_UNKNOWN_INDEX") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( (unsigned int)v3 >= s_dwFriendData[ClientFromController][0].count )
  {
    count = s_dwFriendData[ClientFromController][0].count;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 242, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( friendsData->count )", "friendIndex doesn't index friendsData->count\n\t%i not in [0, %i)", v7, count) )
      __debugbreak();
  }
  return s_dwFriendData[ClientFromController][0].list[v3].name;
}

/*
==============
Online_Friends::Crossplay_Init
==============
*/
void Online_Friends::Crossplay_Init(Online_Friends *this)
{
  s_dwFriendData[0][0].listSize = 200;
  s_dwFriendData[0][0].list = &s_dwFriendsList;
  s_dwFriendData[0][1].listSize = 20;
  s_dwFriendData[0][1].list = &s_dwIncomingRequestsList;
  s_dwFriendData[0][2].listSize = 20;
  s_dwFriendData[0][2].list = &s_dwOutgoingRequestsList;
  s_dwFriendData[1][0].listSize = 200;
  s_dwFriendData[1][0].list = (DWFriend *)&unk_14A0E2000;
  s_dwFriendData[1][1].list = (DWFriend *)&unk_14A0E9BC0;
  s_dwFriendData[1][2].list = (DWFriend *)&unk_14A0EB240;
  s_dwFriendData[1][1].listSize = 20;
  s_dwFriendData[1][2].listSize = 20;
  Cmd_AddCommandInternal("crossplayfriends_removefriend", TestRemoveFriend, &stru_14A19FAA8);
  Cmd_AddCommandInternal("crossplayfriends_acceptfriend", TestAcceptFriend, &stru_14A19FAD8);
  Cmd_AddCommandInternal("crossplayfriends_addfriend", TestAddPlayer, &stru_14A19FB08);
  Cmd_AddCommandInternal("crossplayfriends_fetch", TestFetch, &stru_14A19FB38);
  Cmd_AddCommandInternal("crossplayfriends_acceptall", TestAcceptAll, &stru_14A19FB68);
}

/*
==============
Online_Friends::Crossplay_OnSignedIn
==============
*/
void Online_Friends::Crossplay_OnSignedIn(Online_Friends *this, const int controllerIndex)
{
  DWFriendsNotifications *v3; 
  int v4; 
  __int64 v5; 
  __int64 ClientFromController; 
  __int64 v7; 
  DWServicesAccess *Instance; 
  DWFriends *Friends; 
  __int64 v10; 
  __int64 v11; 

  v3 = &s_dwFriendsNotifications[CL_Mgr_GetClientFromController(controllerIndex)];
  if ( !v3->m_inited )
  {
    v4 = 0;
    v5 = 0i64;
    v3->m_inited = 1;
    v3->m_controllerIndex = controllerIndex;
    do
    {
      ClearList(v4, controllerIndex);
      if ( (unsigned int)v4 >= 3 )
      {
        LODWORD(v11) = 3;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( friendDataType ) < (unsigned)( FRIEND_DATA_TYPE_COUNT )", "friendDataType doesn't index FRIEND_DATA_TYPE_COUNT\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      ++v4;
      v7 = v5 + 2 * ClientFromController;
      ++v5;
      *(_QWORD *)&s_dwFriendData[0][v7 + ClientFromController].errorCount = 0i64;
    }
    while ( v4 < 3 );
    Instance = DWServicesAccess::GetInstance();
    Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
    if ( !DWFriends::registerPushMessageHandler(Friends, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 384, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
      __debugbreak();
  }
}

/*
==============
Online_Friends::Crossplay_OnSignedOut
==============
*/
void Online_Friends::Crossplay_OnSignedOut(Online_Friends *this, const int controllerIndex)
{
  DWFriendsNotifications *v3; 
  DWServicesAccess *Instance; 
  DWFriends *Friends; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, NULL) )
  {
    v3 = &s_dwFriendsNotifications[CL_Mgr_GetClientFromController(controllerIndex)];
    if ( v3->m_inited )
    {
      v3->m_inited = 0;
      v3->m_controllerIndex = -1;
      Instance = DWServicesAccess::GetInstance();
      Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
      DWFriends::unregisterPushMessageHandler(Friends, v3);
    }
  }
}

/*
==============
Online_Friends::Crossplay_RejectFriend
==============
*/
char Online_Friends::Crossplay_RejectFriend(Online_Friends *this, const int controllerIndex, const bdUserAccountID *userId)
{
  DWServicesAccess *Instance; 
  DWFriends *Friends; 
  const bdUserAccountID *v8; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  const XUID *v12; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v16; 
  XUID result; 
  __int64 v18; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v20; 
  const bdUserAccountID *v21; 

  v18 = -2i64;
  v21 = userId;
  if ( s_rejectFriendInProgress )
  {
    Com_PrintError(14, "%s: Couldn't reject friend %zu because we are in the process rejecting someone else\n", "Online_Friends::Crossplay_RejectFriend", userId->m_userID);
  }
  else
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    Friends = DWServicesAccess::GetFriends(Instance, controllerIndex);
    bdUserAccountID::bdUserAccountID(&v20, userId);
    v9 = (TaskCreateRequest *)DWFriends::rejectFriend(Friends, &v16, v8, &s_rejectFriendResponse);
    if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    }
    if ( v16.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v16.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v16.m_ptr->~bdReferencable)(v16.m_ptr, 1i64);
    pTaskCreateRequest.m_appData = this;
    pTaskCreateRequest.m_onCompletionCallback = RejectFriendCallback;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      v11 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        v12 = XUID::FromUniversalId(&result, userId->m_userID);
        XUID::operator=(&s_rejectFriendXUID, v12);
        s_rejectFriendInProgress = 1;
        Com_Printf(14, "%s: Started task to remove friend %zu\n", "Online_Friends::Crossplay_RejectFriend", userId->m_userID);
        TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userId->gap38);
        bdReferencable::~bdReferencable((bdReferencable *)userId->gap38);
        return 1;
      }
    }
    Com_PrintError(14, "%s: Failed to remove friend %zu\n", "Online_Friends::Crossplay_RejectFriend", userId->m_userID);
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
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userId->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userId->gap38);
  return 0;
}

/*
==============
Online_Friends::Crossplay_RemoveFriend
==============
*/
_BOOL8 Online_Friends::Crossplay_RemoveFriend(Online_Friends *this, const int controllerIndex, const XUID xuid)
{
  __int64 ClientFromController; 
  int v6; 
  const char *v7; 
  bool v8; 
  const bdUserAccountID *v10; 
  XUID xuida; 
  __int64 v12; 
  bdUserAccountID v13; 
  bdUserAccountID other; 
  XUID v15; 

  v15.m_id = xuid.m_id;
  v12 = -2i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  bdUserAccountID::bdUserAccountID(&other);
  xuida.m_id = v15.m_id;
  v6 = 0;
  if ( s_dwFriendData[ClientFromController][0].count <= 0 )
  {
LABEL_4:
    v7 = XUID::ToDevString(&v15);
    Com_PrintError(14, "%s: friend %s not present to remove\n", "Online_Friends::Crossplay_RemoveFriend", v7);
    v8 = 0;
  }
  else
  {
    while ( !XUID::operator==(&s_dwFriendData[ClientFromController][0].list[v6].xuid, &xuida) )
    {
      if ( ++v6 >= s_dwFriendData[ClientFromController][0].count )
        goto LABEL_4;
    }
    other.m_userID = XUID::GetUniversalId(&xuida);
    Core_strcpy(other._bytes_20, 0xAui64, "uno");
    bdUserAccountID::bdUserAccountID(&v13, &other);
    v8 = Online_Friends::Crossplay_RejectFriend(this, controllerIndex, v10);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  return v8;
}

/*
==============
Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend
==============
*/
void Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend(Online_Friends *this, const int controllerIndex)
{
  __int64 ClientFromController; 
  int v4; 
  __int64 v5; 
  Online_Friends *Instance; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v4 = 0;
  if ( s_dwFriendData[ClientFromController][0].count > 0 )
  {
    v5 = 0i64;
    do
    {
      if ( XUID::IsValid(&s_dwFriendData[ClientFromController][0].list[v4].xuid) && !s_dwFriendData[ClientFromController][0].list[v5].isPlatformFriend )
      {
        Instance = Online_Friends::GetInstance();
        if ( Online_Friends::IsFriendByID(Instance, controllerIndex, s_dwFriendData[ClientFromController][0].list[v5].xuid) )
          s_dwFriendData[ClientFromController][0].list[v5].isPlatformFriend = 1;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < s_dwFriendData[ClientFromController][0].count );
  }
}

/*
==============
FetchFriendsListComplete
==============
*/
void FetchFriendsListComplete(GenericTask *task, eTaskManagerTaskState state)
{
  DWFriendData *v4; 
  LocalClientNum_t ClientFromController; 
  bdGetFriendsResponse *FriendsTaskResponse; 
  bdGetFriendsResponse *v7; 
  int v8; 
  unsigned int v9; 
  bdCrossPlatformFriend *Friend; 
  __int64 v11; 
  bdUserDetails *UserDetails; 
  unsigned __int64 UserID; 
  const XUID *v14; 
  bdUserDetails *v15; 
  const char *Username; 
  bdUserDetails *v17; 
  const char *v18; 
  const char *PageToken; 
  int activeFetchingCount; 
  int v21; 
  __int64 v22; 
  OnlinePresenceNotifications *Instance; 
  Online_Friends *v24; 
  Online_Friends *v25; 
  unsigned int m_controllerIndex; 
  __int64 v27; 
  __int64 v28; 
  Online_Friends *v29; 
  lua_State *v30; 
  LocalClientNum_t v31; 
  XUID v32; 
  bdUserDetails result; 
  char usernameWithHash[112]; 

  v4 = s_dwFriendData[CL_Mgr_GetClientFromController(task->m_controllerIndex)];
  ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
  FriendsTaskResponse = GetGetFriendsTaskResponse(ClientFromController);
  v7 = FriendsTaskResponse;
  if ( state )
  {
    TrackError(0, task->m_controllerIndex);
  }
  else
  {
    v8 = 0;
    v9 = 0;
    if ( bdGetFriendsResponse::getNumFriends(FriendsTaskResponse) )
    {
      do
      {
        if ( v4->activeFetchingCount == v4->listSize )
          break;
        Friend = bdGetFriendsResponse::getFriend(v7, v9);
        v11 = (__int64)&v4->list[v4->activeFetchingCount];
        UserDetails = bdCrossPlatformFriend::getUserDetails(Friend, &result);
        UserID = bdUserDetails::getUserID(UserDetails);
        v14 = XUID::FromUniversalId(&v32, UserID);
        XUID::operator=((XUID *)v11, v14);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&result.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)&result.gap79[7]);
        v15 = bdCrossPlatformFriend::getUserDetails(Friend, &result);
        Username = bdUserDetails::getUsername(v15);
        Core_strcpy((char *)(v11 + 8), 0x40ui64, Username);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&result.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)&result.gap79[7]);
        v17 = bdCrossPlatformFriend::getUserDetails(Friend, &result);
        LOBYTE(Friend) = bdUserDetails::getUsernameWithHash(v17, usernameWithHash);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&result.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)&result.gap79[7]);
        if ( (_BYTE)Friend )
          Core_strcpy_truncate((char *)(v11 + 72), 0x40ui64, usernameWithHash);
        ++v4->activeFetchingCount;
        ++v9;
      }
      while ( v9 < bdGetFriendsResponse::getNumFriends(v7) );
    }
    if ( bdGetFriendsResponse::getNumFriends(v7) && (v18 = bdGetFriendsResponse::getPageToken(v7), I_strcmp(v18, (const char *)&queryFormat.fmt + 3)) && v4->activeFetchingCount != v4->listSize )
    {
      PageToken = bdGetFriendsResponse::getPageToken(v7);
      Crossplay_FetchFriendsList_Internal(task->m_controllerIndex, PageToken);
    }
    else
    {
      activeFetchingCount = v4->activeFetchingCount;
      v4->count = v4->activeFetchingCount;
      v4->listFetchState = FETCHED;
      v21 = 0;
      if ( activeFetchingCount > 0 )
      {
        v22 = 0i64;
        do
        {
          Instance = OnlinePresenceNotifications::GetInstance();
          OnlinePresenceNotifications::SubscribeToUser(Instance, task->m_controllerIndex, v4->list[v22].xuid, CrossplayFriend);
          ++v21;
          ++v22;
        }
        while ( v21 < v4->count );
      }
      v24 = Online_Friends::GetInstance();
      if ( Online_Friends::FavoriteFriends_IsEnabled(v24) )
      {
        Com_Printf(25, "Crossplay, FetchFriendsListComplete called\n");
        v25 = Online_Friends::GetInstance();
        Online_Friends::FavoriteFriends_SetCrossplayFriendsListExists(v25, task->m_controllerIndex);
      }
      Online_Friends::GetInstance();
      m_controllerIndex = task->m_controllerIndex;
      if ( m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1291, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", task->m_controllerIndex, 8) )
        __debugbreak();
      v27 = CL_Mgr_GetClientFromController(m_controllerIndex);
      if ( s_dwFriendData[v27][0].count > 0 )
      {
        v28 = 0i64;
        do
        {
          if ( XUID::IsValid(&s_dwFriendData[v27][0].list[v8].xuid) && !s_dwFriendData[v27][0].list[v28].isPlatformFriend )
          {
            v29 = Online_Friends::GetInstance();
            if ( Online_Friends::IsFriendByID(v29, m_controllerIndex, s_dwFriendData[v27][0].list[v28].xuid) )
              s_dwFriendData[v27][0].list[v28].isPlatformFriend = 1;
          }
          ++v8;
          ++v28;
        }
        while ( v8 < s_dwFriendData[v27][0].count );
      }
      v30 = LUI_luaVM;
      v31 = CL_Mgr_GetClientFromController(task->m_controllerIndex);
      if ( LUI_BeginEvent(v31, "fetch_friend_data_complete", v30) )
        LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
FetchIncomingFriendRequestsComplete
==============
*/
void FetchIncomingFriendRequestsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  DWFriendData *v4; 
  __int64 ClientFromController; 

  v4 = &s_dwFriendData[CL_Mgr_GetClientFromController(task->m_controllerIndex)][1];
  ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
  if ( dword_14A151604 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14A151604);
    if ( dword_14A151604 == -1 )
    {
      `eh vector constructor iterator'(&unk_14A103170, 0x209E8ui64, 2ui64, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::bdGetPendingFriendsResponse, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse);
      j_atexit(GetGetPendingIncomingTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_pendingIncomingResponses__);
      j__Init_thread_footer(&dword_14A151604);
    }
  }
  FetchPendingFriendsComplete(task->m_controllerIndex, state, v4, (bdGetPendingFriendsResponse *)&unk_14A103170 + ClientFromController);
}

/*
==============
FetchOutgoingFriendRequestsComplete
==============
*/
void FetchOutgoingFriendRequestsComplete(GenericTask *task, eTaskManagerTaskState state)
{
  DWFriendData *v4; 
  __int64 ClientFromController; 

  v4 = &s_dwFriendData[CL_Mgr_GetClientFromController(task->m_controllerIndex)][2];
  ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
  if ( dword_14A19FAA4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14A19FAA4);
    if ( dword_14A19FAA4 == -1 )
    {
      `eh vector constructor iterator'(&unk_14A151610, 0x209E8ui64, 2ui64, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::bdGetPendingFriendsResponse, (void (__fastcall *)(void *))bdGetPendingFriendsResponse::~bdGetPendingFriendsResponse);
      j_atexit(GetGetPendingOutgoingTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_pendingOutgoingResponses__);
      j__Init_thread_footer(&dword_14A19FAA4);
    }
  }
  FetchPendingFriendsComplete(task->m_controllerIndex, state, v4, (bdGetPendingFriendsResponse *)&unk_14A151610 + ClientFromController);
}

/*
==============
FetchPendingFriendsComplete
==============
*/
void FetchPendingFriendsComplete(const int controllerIndex, eTaskManagerTaskState state, DWFriendData *friendData, bdGetPendingFriendsResponse *response)
{
  unsigned int NumFriends; 
  unsigned int v8; 
  __int64 v9; 
  DWFriend *v10; 
  bdCrossPlatformFriend *Friend; 
  unsigned __int64 UserID; 
  const XUID *v13; 
  const char *Username; 
  unsigned int UsernameHash; 
  const char *v16; 
  lua_State *v17; 
  LocalClientNum_t ClientFromController; 
  XUID v19; 
  bdUserDetails result; 

  if ( state )
  {
    TrackError(1, controllerIndex);
  }
  else
  {
    NumFriends = bdGetPendingFriendsResponse::getNumFriends(response);
    if ( friendData->listSize < (signed int)NumFriends )
      NumFriends = friendData->listSize;
    v8 = 0;
    if ( NumFriends )
    {
      v9 = 0i64;
      do
      {
        v10 = &friendData->list[v9];
        Friend = bdGetPendingFriendsResponse::getFriend(response, v8);
        bdCrossPlatformFriend::getUserDetails(Friend, &result);
        UserID = bdUserDetails::getUserID(&result);
        v13 = XUID::FromUniversalId(&v19, UserID);
        XUID::operator=(&v10->xuid, v13);
        Username = bdUserDetails::getUsername(&result);
        Core_strcpy(v10->name, 0x40ui64, Username);
        UsernameHash = bdUserDetails::getUsernameHash(&result);
        v16 = bdUserDetails::getUsername(&result);
        Com_sprintf<64>((char (*)[64])v10->nameWithHash, "%s%d", v16, UsernameHash);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&result.gap79[7]);
        bdReferencable::~bdReferencable((bdReferencable *)&result.gap79[7]);
        ++v8;
        ++v9;
      }
      while ( v8 < NumFriends );
    }
    friendData->count = NumFriends;
    friendData->listFetchState = FETCHED;
  }
  v17 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "fetch_friend_request_complete", v17) )
    LUI_EndEvent(LUI_luaVM);
}

/*
==============
GetAccountUserIdFromList
==============
*/
char GetAccountUserIdFromList(DWFriendData *friendData, const XUID xuid, bdUserAccountID *userIdOut)
{
  int v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = 0;
  if ( friendData->count <= 0 )
    return 0;
  while ( !XUID::operator==(&friendData->list[v3].xuid, &xuida) )
  {
    if ( ++v3 >= friendData->count )
      return 0;
  }
  userIdOut->m_userID = XUID::GetUniversalId(&xuida);
  Core_strcpy(userIdOut->_bytes_20, 0xAui64, "uno");
  return 1;
}

/*
==============
GetFriendData
==============
*/
DWFriendData *GetFriendData(const int friendDataType, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = friendDataType;
  if ( (unsigned int)friendDataType >= 3 )
  {
    v6 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 211, ASSERT_TYPE_ASSERT, "(unsigned)( friendDataType ) < (unsigned)( FRIEND_DATA_TYPE_COUNT )", "friendDataType doesn't index FRIEND_DATA_TYPE_COUNT\n\t%i not in [0, %i)", friendDataType, v6) )
      __debugbreak();
  }
  return &s_dwFriendData[CL_Mgr_GetClientFromController(controllerIndex)][v2];
}

/*
==============
GetGetFriendsTaskResponse
==============
*/
bdGetFriendsResponse *GetGetFriendsTaskResponse(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( dword_14A10316C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14A10316C);
    if ( dword_14A10316C == -1 )
    {
      `eh vector constructor iterator'(s_friendsResponses, 0x7B10ui64, 2ui64, (void (__fastcall *)(void *))bdGetFriendsResponse::bdGetFriendsResponse, (void (__fastcall *)(void *))bdGetFriendsResponse::~bdGetFriendsResponse);
      j_atexit(GetGetFriendsTaskResponse_::_2_::_dynamic_atexit_destructor_for__s_friendsResponses__);
      j__Init_thread_footer(&dword_14A10316C);
    }
  }
  return &s_friendsResponses[v1];
}

/*
==============
RejectFriendCallback
==============
*/
void RejectFriendCallback(GenericTask *task, eTaskManagerTaskState state)
{
  Online_Friends *InstancePtr; 
  OnlinePresenceNotifications *Instance; 
  Online_Friends *v5; 
  Online_Friends *v6; 
  Online_Friends *v7; 
  lua_State *v8; 
  LocalClientNum_t ClientFromController; 
  const XUID *v10; 
  XUID result; 

  if ( state == TASKSTATE_SUCCESS )
  {
    InstancePtr = Online_Friends::GetInstancePtr();
    if ( Online_Friends::Crossplay_FindIndex(InstancePtr, task->m_controllerIndex, s_rejectFriendXUID) != -1 )
    {
      Instance = OnlinePresenceNotifications::GetInstance();
      OnlinePresenceNotifications::UnsubscribeFromUser(Instance, task->m_controllerIndex, s_rejectFriendXUID, CrossplayFriend);
    }
    ClearList(0, task->m_controllerIndex);
    v5 = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchFriendsList(v5, task->m_controllerIndex);
    ClearList(1, task->m_controllerIndex);
    v6 = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchIncomingFriendRequests(v6, task->m_controllerIndex);
    ClearList(2, task->m_controllerIndex);
    v7 = Online_Friends::GetInstancePtr();
    Online_Friends::Crossplay_FetchOutgoingFriendRequests(v7, task->m_controllerIndex);
    v8 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(task->m_controllerIndex);
    if ( LUI_BeginEvent(ClientFromController, "remove_friend_complete", v8) )
      LUI_EndEvent(LUI_luaVM);
  }
  v10 = XUID::NullXUID(&result);
  XUID::operator=(&s_rejectFriendXUID, v10);
  s_rejectFriendInProgress = 0;
}

/*
==============
RemoveDWFriendFromData
==============
*/
void RemoveDWFriendFromData(const int friendDataType, const int controllerIndex, const XUID xuid)
{
  DWFriendData *FriendData; 
  int v5; 
  DWFriend *v6; 
  bool v7; 
  int count; 
  const char *v9; 
  const char *v10; 
  char *fmt; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  FriendData = GetFriendData(friendDataType, controllerIndex);
  if ( FriendData->count <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1189, ASSERT_TYPE_ASSERT, "(friendData->count > 0)", (const char *)&queryFormat, "friendData->count > 0") )
    __debugbreak();
  v5 = 0;
  if ( FriendData->count > 0 )
  {
    while ( 1 )
    {
      v6 = &FriendData->list[v5];
      v7 = XUID::operator==(&v6->xuid, &xuida);
      count = FriendData->count;
      if ( v7 )
        break;
      if ( ++v5 >= count )
        goto LABEL_9;
    }
    FriendData->count = count - 1;
    DWFriend::operator=(v6, &FriendData->list[count - 1]);
    v9 = XUID::ToDevString(&xuida);
    LODWORD(fmt) = friendDataType;
    Com_Printf(14, "%s: Removed friend %s from list %i\n", "RemoveDWFriendFromData", v9, fmt);
  }
LABEL_9:
  v10 = XUID::ToDevString(&xuida);
  LODWORD(fmt) = friendDataType;
  Com_PrintError(14, "%s: Unable to remove friend %s, not found in list type %i\n", "RemoveDWFriendFromData", v10, fmt);
}

/*
==============
SearchForXUIDInFriendData
==============
*/
XUID *SearchForXUIDInFriendData(const int friendDataType, const int controllerIndex, const XUID xuid)
{
  int v3; 
  DWFriendData *FriendData; 
  XUID *p_xuid; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = 0;
  FriendData = GetFriendData(friendDataType, controllerIndex);
  if ( FriendData->count <= 0 )
    return 0i64;
  while ( 1 )
  {
    p_xuid = &FriendData->list[v3].xuid;
    if ( XUID::operator==(p_xuid, &xuida) )
      break;
    if ( ++v3 >= FriendData->count )
      return 0i64;
  }
  return p_xuid;
}

/*
==============
SendLuaAddFriendNotification
==============
*/
void SendLuaAddFriendNotification(const int controllerIndex, const bool success, const AddFriendErrorCode errorCode)
{
  lua_State *v3; 
  __int64 v5; 
  __int64 v6; 
  LocalClientNum_t ClientFromController; 

  v3 = LUI_luaVM;
  v5 = controllerIndex;
  v6 = errorCode;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "send_toast_notification", v3) )
  {
    LUI_BeginTable("options", 0, 4, LUI_luaVM);
    LUI_SetTableString("genEventName", "genFriendRequestSent", LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v5, LUI_luaVM);
    LUI_SetTableBool("success", success, LUI_luaVM);
    LUI_SetTableInt("errorCode", v6, LUI_luaVM);
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
ShouldFetchFriendData
==============
*/
bool ShouldFetchFriendData(const int friendDataType, const int controllerIndex)
{
  DWFriendData *FriendData; 
  int errorCount; 
  int v5; 

  FriendData = GetFriendData(friendDataType, controllerIndex);
  if ( FriendData->listFetchState )
    return 0;
  errorCount = FriendData->errorCount;
  if ( !errorCount )
    return 1;
  v5 = (1 << (errorCount - 1)) * Dvar_GetInt_Internal_DebugName(DVARINT_online_crossplay_fail_backoff_threshold, "online_crossplay_fail_backoff_threshold") + FriendData->lastFailTime;
  return v5 < Sys_Milliseconds();
}

/*
==============
TestAcceptAll
==============
*/
void TestAcceptAll()
{
  XUID *v0; 
  __int64 ClientFromController; 
  __int64 v2; 
  int i; 
  Online_Friends *InstancePtr; 
  XUID xuids[100]; 

  v0 = xuids;
  ClientFromController = CL_Mgr_GetClientFromController(0);
  v2 = 100i64;
  do
  {
    XUID::XUID(v0++);
    --v2;
  }
  while ( v2 );
  for ( i = 0; i < s_dwFriendData[ClientFromController][1].count; ++i )
    XUID::operator=(&xuids[i], &s_dwFriendData[ClientFromController][1].list[i].xuid);
  InstancePtr = Online_Friends::GetInstancePtr();
  Online_Friends::Crossplay_AddFriendsByXUID(InstancePtr, 0, xuids, s_dwFriendData[ClientFromController][1].count);
}

/*
==============
TestAcceptFriend
==============
*/
void TestAcceptFriend()
{
  const char *v0; 
  int v1; 
  __int64 ClientFromController; 
  int *p_count; 
  DWFriend **p_list; 
  __int64 v5; 
  __int64 v6; 
  char *name; 
  signed __int64 v8; 
  char v9; 
  __int64 v10; 
  char v11; 
  const XUID *p_xuid; 
  Online_Friends *InstancePtr; 
  XUID xuids; 

  v0 = Cmd_Argv(1);
  v1 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(0);
  p_count = &s_dwFriendData[ClientFromController][1].count;
  if ( *p_count > 0 )
  {
    p_list = &s_dwFriendData[ClientFromController][1].list;
LABEL_3:
    v5 = 0x7FFFFFFFi64;
    v6 = v1;
    name = (*p_list)[v6].name;
    if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v0 - name;
    do
    {
      v9 = name[v8];
      v10 = v5;
      v11 = *name++;
      --v5;
      if ( !v10 )
        break;
      if ( v9 != v11 )
      {
        if ( ++v1 >= *p_count )
          return;
        goto LABEL_3;
      }
    }
    while ( v9 );
    p_xuid = &(*p_list)[v6].xuid;
    if ( p_xuid )
    {
      XUID::XUID(&xuids);
      XUID::operator=(&xuids, p_xuid);
      InstancePtr = Online_Friends::GetInstancePtr();
      Online_Friends::Crossplay_AddFriendsByXUID(InstancePtr, 0, &xuids, 1);
    }
  }
}

/*
==============
TestAddPlayer
==============
*/
void TestAddPlayer()
{
  const char *v0; 
  Online_Friends *InstancePtr; 
  const char *AccountTypeString; 
  const char *v3; 
  DWUsernameSearch::SearchRequest searchRequest; 

  v0 = Cmd_Argv(1);
  InstancePtr = Online_Friends::GetInstancePtr();
  if ( !v0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends_crossplay.cpp", 1057, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
      __debugbreak();
LABEL_8:
    SendLuaAddFriendNotification(0, 0, GENERAL);
    return;
  }
  if ( !I_strcmp(v0, (const char *)&queryFormat.fmt + 3) )
    goto LABEL_8;
  Com_Printf(14, "%s: Searching for player %s (who exists on platform %i) on Demonware\n", "Online_Friends::Crossplay_AddPlayerByName", v0, 0);
  AccountTypeString = dwPlatformTypes_GetAccountTypeString(PLATFORM_UNKNOWN);
  searchRequest.username = v0;
  v3 = "uno";
  searchRequest.maxResults = 1;
  if ( AccountTypeString )
    v3 = AccountTypeString;
  searchRequest.subStringSearch = 0;
  searchRequest.accountProvider = v3;
  searchRequest.callback = (void (__fastcall *)(const int, const bool, const bdCrossPlatformUser *, const unsigned int))AddPlayerByNameCallback;
  if ( !DWUsernameSearch::Search(&InstancePtr->m_userNameSearch, 0, &searchRequest) )
    goto LABEL_8;
}

/*
==============
TestFetch
==============
*/
void TestFetch()
{
  ClearList(0, 0);
  ClearList(2, 0);
  ClearList(1, 0);
}

/*
==============
TestRemoveFriend
==============
*/
void TestRemoveFriend()
{
  const char *v0; 
  __int64 ClientFromController; 
  int v2; 
  __int64 v3; 
  DWFriend *v4; 
  Online_Friends *InstancePtr; 

  v0 = Cmd_Argv(1);
  ClientFromController = CL_Mgr_GetClientFromController(0);
  v2 = 0;
  if ( s_dwFriendData[ClientFromController][0].count > 0 )
  {
    while ( 1 )
    {
      v3 = v2;
      if ( !I_stricmp(v0, s_dwFriendData[ClientFromController][0].list[v3].name) )
        break;
      if ( ++v2 >= s_dwFriendData[ClientFromController][0].count )
        return;
    }
    v4 = &s_dwFriendData[ClientFromController][0].list[v3];
    if ( v4 )
    {
      InstancePtr = Online_Friends::GetInstancePtr();
      Online_Friends::Crossplay_RemoveFriend(InstancePtr, 0, v4->xuid);
    }
  }
}

