/*
==============
Online_Friends::OnSignedIn
==============
*/

void __fastcall Online_Friends::OnSignedIn(Online_Friends *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@Online_Friends@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
Online_Friends::Init
==============
*/

bool __fastcall Online_Friends::Init(Online_Friends *this)
{
  return ?Init@Online_Friends@@UEAA_NXZ(this);
}

/*
==============
Online_Friends::HandleUsernameResolving
==============
*/

void __fastcall Online_Friends::HandleUsernameResolving(Online_Friends *this, const LocalClientNum_t clientNum)
{
  ?HandleUsernameResolving@Online_Friends@@AEAAXW4LocalClientNum_t@@@Z(this, clientNum);
}

/*
==============
Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList
==============
*/

void __fastcall Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::GetPlatformUserId
==============
*/

unsigned __int64 __fastcall Online_Friends::GetPlatformUserId(Online_Friends *this, const int localControllerIndex, const unsigned int friendIndex)
{
  return ?GetPlatformUserId@Online_Friends@@QEAA_KHI@Z(this, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::SetOwningPlatformId
==============
*/

void __fastcall Online_Friends::SetOwningPlatformId(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId)
{
  ?SetOwningPlatformId@Online_Friends@@QEAAXH_K@Z(this, controllerIndex, platformId);
}

/*
==============
Online_Friends::HandleUserIdResolving
==============
*/

void __fastcall Online_Friends::HandleUserIdResolving(Online_Friends *this, const LocalClientNum_t clientNum)
{
  ?HandleUserIdResolving@Online_Friends@@AEAAXW4LocalClientNum_t@@@Z(this, clientNum);
}

/*
==============
Online_Friends::FavoriteFriends_AddToPlayerData
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_AddToPlayerData(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_AddToPlayerData@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::FavoriteFriends_RemoveFromPlayerData
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_RemoveFromPlayerData(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_RemoveFromPlayerData@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList
==============
*/

void __fastcall Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_RemoveUsersNotLinkedToOriginalList@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetPlatformFriendsListExists
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetPlatformFriendsListExists(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetPlatformFriendsListExists@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetTryLinkingUsersWithOriginalList@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::OnDisconnect
==============
*/

void __fastcall Online_Friends::OnDisconnect(Online_Friends *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Friends@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
Online_Friends::FavoriteFriends_SetCrossplayFriendsListDoesNotExist
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetCrossplayFriendsListDoesNotExist(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetCrossplayFriendsListDoesNotExist@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::GetFriendList
==============
*/

friendList_t *__fastcall Online_Friends::GetFriendList(Online_Friends *this, const int localControllerIndex)
{
  return ?GetFriendList@Online_Friends@@QEAAPEAUfriendList_t@@H@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetInstance
==============
*/

Online_Friends *__fastcall Online_Friends::GetInstance()
{
  return ?GetInstance@Online_Friends@@SAAEAV1@XZ();
}

/*
==============
Online_Friends::MarkForUpdate
==============
*/

void __fastcall Online_Friends::MarkForUpdate(Online_Friends *this, const int localControllerIndex)
{
  ?MarkForUpdate@Online_Friends@@QEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::FeederStoreXUID
==============
*/

void __fastcall Online_Friends::FeederStoreXUID(Online_Friends *this, const int localControllerIndex)
{
  ?FeederStoreXUID@Online_Friends@@QEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetNumFriends
==============
*/

unsigned int __fastcall Online_Friends::GetNumFriends(Online_Friends *this, const int localControllerIndex)
{
  return ?GetNumFriends@Online_Friends@@QEAAIH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::ClearResolveStateFromFailedResolves
==============
*/

void __fastcall Online_Friends::ClearResolveStateFromFailedResolves(Online_Friends *this, const int controllerIndex, const unsigned __int64 *platformIds, const unsigned int platformIdCount)
{
  ?ClearResolveStateFromFailedResolves@Online_Friends@@AEAAXHPEB_KI@Z(this, controllerIndex, platformIds, platformIdCount);
}

/*
==============
Online_Friends::OnRegistered
==============
*/

void __fastcall Online_Friends::OnRegistered(Online_Friends *this)
{
  ?OnRegistered@Online_Friends@@UEAAXXZ(this);
}

/*
==============
Online_Friends::GetSortedFriendByIndex
==============
*/

int __fastcall Online_Friends::GetSortedFriendByIndex(Online_Friends *this, const int localControllerIndex, int sortedIndex)
{
  return ?GetSortedFriendByIndex@Online_Friends@@QEAAHHH@Z(this, localControllerIndex, sortedIndex);
}

/*
==============
Online_Friends::IsPlatformFriendJoinable
==============
*/

bool __fastcall Online_Friends::IsPlatformFriendJoinable(Online_Friends *this, const int localControllerIndex, const XUID xuid, unsigned __int64 friendPlatformId, bool shouldCheckDWPresence, const char **errorString, const char **devErrorString)
{
  return ?IsPlatformFriendJoinable@Online_Friends@@QEAA_NHUXUID@@_K_NPEAPEBD3@Z(this, localControllerIndex, xuid, friendPlatformId, shouldCheckDWPresence, errorString, devErrorString);
}

/*
==============
Online_Friends::FavoriteFriends_GetOnlineFriendCount
==============
*/

int __fastcall Online_Friends::FavoriteFriends_GetOnlineFriendCount(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_GetOnlineFriendCount@Online_Friends@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::IsFriendByID
==============
*/

bool __fastcall Online_Friends::IsFriendByID(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  return ?IsFriendByID@Online_Friends@@QEAA_NHUXUID@@@Z(this, localControllerIndex, friendId);
}

/*
==============
Online_Friends::GetCurrentIndexXUID
==============
*/

XUID *__fastcall Online_Friends::GetCurrentIndexXUID(Online_Friends *this, XUID *result, const int controllerIndex)
{
  return ?GetCurrentIndexXUID@Online_Friends@@QEAA?AUXUID@@H@Z(this, result, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_IsUserAddedToList
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_IsUserAddedToList(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_IsUserAddedToList@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::OnSignedOut
==============
*/

void __fastcall Online_Friends::OnSignedOut(Online_Friends *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Friends@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Friends::IsPlatformFriendInvitable
==============
*/

bool __fastcall Online_Friends::IsPlatformFriendInvitable(Online_Friends *this, const int localControllerIndex, unsigned __int64 friendplatformId, const char **errorString, const char **devErrorString)
{
  return ?IsPlatformFriendInvitable@Online_Friends@@QEAA_NH_KPEAPEBD1@Z(this, localControllerIndex, friendplatformId, errorString, devErrorString);
}

/*
==============
Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData
==============
*/

void __fastcall Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_UpdateLocalCacheFromPlayerData@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_Reset
==============
*/

void __fastcall Online_Friends::FavoriteFriends_Reset(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_Reset@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FriendResolverComplete
==============
*/

void __fastcall Online_Friends::FriendResolverComplete(Online_Friends *this, GenericTask *task, eTaskManagerTaskState taskState)
{
  ?FriendResolverComplete@Online_Friends@@QEAAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(this, task, taskState);
}

/*
==============
Online_Friends::FavoriteFriends_Frame
==============
*/

void __fastcall Online_Friends::FavoriteFriends_Frame(Online_Friends *this)
{
  ?FavoriteFriends_Frame@Online_Friends@@QEAAXXZ(this);
}

/*
==============
Online_Friends::FeederSelection
==============
*/

void __fastcall Online_Friends::FeederSelection(Online_Friends *this, const int localControllerIndex, const int index)
{
  ?FeederSelection@Online_Friends@@QEAAXHH@Z(this, localControllerIndex, index);
}

/*
==============
Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList(Online_Friends *this, const int controllerIndex, const int indexInFavoriteFriendsList)
{
  return ?FavoriteFriends_TryLinkingUserWithOriginalList@Online_Friends@@QEAA_NHH@Z(this, controllerIndex, indexInFavoriteFriendsList);
}

/*
==============
Online_Friends::GetInstancePtr
==============
*/

Online_Friends *__fastcall Online_Friends::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Friends@@SAPEAV1@XZ();
}

/*
==============
Online_Friends::FavoriteFriends_CanUserBeRemovedFromList
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_CanUserBeRemovedFromList(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?FavoriteFriends_CanUserBeRemovedFromList@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::FavoriteFriends_GetLinkedFriendCount
==============
*/

int __fastcall Online_Friends::FavoriteFriends_GetLinkedFriendCount(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_GetLinkedFriendCount@Online_Friends@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetInitialized
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetInitialized(Online_Friends *this, const int controllerIndex, bool value)
{
  ?FavoriteFriends_SetInitialized@Online_Friends@@QEAAXH_N@Z(this, controllerIndex, value);
}

/*
==============
Online_Friends::FavoriteFriends_CanUserBeAddedToList
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_CanUserBeAddedToList(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?FavoriteFriends_CanUserBeAddedToList@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::ShowErrorMessage
==============
*/

void __fastcall Online_Friends::ShowErrorMessage(Online_Friends *this, const char *message)
{
  ?ShowErrorMessage@Online_Friends@@QEAAXPEBD@Z(this, message);
}

/*
==============
Online_Friends::Frame
==============
*/

void __fastcall Online_Friends::Frame(Online_Friends *this)
{
  ?Frame@Online_Friends@@UEAAXXZ(this);
}

/*
==============
Online_Friends::FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::FindIndex
==============
*/

int __fastcall Online_Friends::FindIndex(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  return ?FindIndex@Online_Friends@@QEAAHHUXUID@@@Z(this, localControllerIndex, friendId);
}

/*
==============
Online_Friends::FindIndexByPlatformId
==============
*/

int __fastcall Online_Friends::FindIndexByPlatformId(Online_Friends *this, const int localControllerIndex, unsigned __int64 platformId)
{
  return ?FindIndexByPlatformId@Online_Friends@@QEAAHH_K@Z(this, localControllerIndex, platformId);
}

/*
==============
Online_Friends::FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::FavoriteFriends_ResetStats
==============
*/

void __fastcall Online_Friends::FavoriteFriends_ResetStats(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_ResetStats@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::RegisterLuaFunctions
==============
*/

void __fastcall Online_Friends::RegisterLuaFunctions(Online_Friends *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Friends@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_ShouldTryLinkingUsersWithOriginalList@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Uninit
==============
*/

void __fastcall Online_Friends::Uninit(Online_Friends *this)
{
  ?Uninit@Online_Friends@@UEAAXXZ(this);
}

/*
==============
Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_CanFavoriteFriendsBeAccessed@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_IsFriendsJoinable
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_IsFriendsJoinable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?FavoriteFriends_IsFriendsJoinable@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::GetNumOnlineFriends
==============
*/

unsigned int __fastcall Online_Friends::GetNumOnlineFriends(Online_Friends *this, const int localControllerIndex)
{
  return ?GetNumOnlineFriends@Online_Friends@@QEAAIH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::CanShowCard
==============
*/

bool __fastcall Online_Friends::CanShowCard(Online_Friends *this, const int localControllerIndex)
{
  return ?CanShowCard@Online_Friends@@QEAA_NH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetUserId
==============
*/

XUID *__fastcall Online_Friends::GetUserId(Online_Friends *this, XUID *result, const int localControllerIndex, const unsigned int friendIndex)
{
  return ?GetUserId@Online_Friends@@QEAA?AUXUID@@HI@Z(this, result, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::HandleCrossplayResolving
==============
*/

void __fastcall Online_Friends::HandleCrossplayResolving(Online_Friends *this)
{
  ?HandleCrossplayResolving@Online_Friends@@AEAAXXZ(this);
}

/*
==============
Online_Friends::GetStatus
==============
*/

FriendStatus __fastcall Online_Friends::GetStatus(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return ?GetStatus@Online_Friends@@QEAA?AW4FriendStatus@@HH@Z(this, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::FavoriteFriends_IsFriendsInvitable
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_IsFriendsInvitable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?FavoriteFriends_IsFriendsInvitable@Online_Friends@@QEAA_NHUXUID@@PEAPEBD1@Z(this, controllerIndex, xuid, errorString, devErrorString);
}

/*
==============
Online_Friends::FavoriteFriends_IsEnabled
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_IsEnabled(Online_Friends *this)
{
  return ?FavoriteFriends_IsEnabled@Online_Friends@@QEAA_NXZ(this);
}

/*
==============
Online_Friends::OnUnregistered
==============
*/

void __fastcall Online_Friends::OnUnregistered(Online_Friends *this)
{
  ?OnUnregistered@Online_Friends@@UEAAXXZ(this);
}

/*
==============
Online_Friends::FavoriteFriends_GetFriendsList
==============
*/

FavoriteFriend *__fastcall Online_Friends::FavoriteFriends_GetFriendsList(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_GetFriendsList@Online_Friends@@QEAAPEAUFavoriteFriend@@H@Z(this, controllerIndex);
}

/*
==============
Online_Friends::GetUserIdResolver
==============
*/

UserIdResolver<200> *__fastcall Online_Friends::GetUserIdResolver(Online_Friends *this)
{
  return ?GetUserIdResolver@Online_Friends@@AEAAPEAV?$UserIdResolver@$0MI@@@XZ(this);
}

/*
==============
Online_Friends::CheckNewFriendIdResolve
==============
*/

void __fastcall Online_Friends::CheckNewFriendIdResolve(Online_Friends *this, FriendListGlobal *friendList, const int friendIndex, const unsigned __int64 platformId)
{
  ?CheckNewFriendIdResolve@Online_Friends@@AEAAXPEAUFriendListGlobal@@H_K@Z(this, friendList, friendIndex, platformId);
}

/*
==============
Online_Friends::FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache@Online_Friends@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::ResetUser
==============
*/

void __fastcall Online_Friends::ResetUser(Online_Friends *this, const int localControllerIndex)
{
  ?ResetUser@Online_Friends@@AEAAXH@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::GetCurrentIndexName
==============
*/

const char *__fastcall Online_Friends::GetCurrentIndexName(Online_Friends *this, const int controllerIndex)
{
  return ?GetCurrentIndexName@Online_Friends@@QEAAPEBDH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_GetTotalFriendCount
==============
*/

int __fastcall Online_Friends::FavoriteFriends_GetTotalFriendCount(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_GetTotalFriendCount@Online_Friends@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::GetFriends
==============
*/

FriendListGlobal *__fastcall Online_Friends::GetFriends(Online_Friends *this, const int localControllerIndex)
{
  return ?GetFriends@Online_Friends@@QEAAPEAUFriendListGlobal@@H@Z(this, localControllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetPlatformFriendsListDoesNotExist
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetPlatformFriendsListDoesNotExist(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetPlatformFriendsListDoesNotExist@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_SetCrossplayFriendsListExists
==============
*/

void __fastcall Online_Friends::FavoriteFriends_SetCrossplayFriendsListExists(Online_Friends *this, const int controllerIndex)
{
  ?FavoriteFriends_SetCrossplayFriendsListExists@Online_Friends@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_IsInitialized
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_IsInitialized(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_IsInitialized@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::OutputCurrentState
==============
*/

void __fastcall Online_Friends::OutputCurrentState(Online_Friends *this, const int controllerIndex)
{
  ?OutputCurrentState@Online_Friends@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_GetUserIndexFromXuid
==============
*/

int __fastcall Online_Friends::FavoriteFriends_GetUserIndexFromXuid(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  return ?FavoriteFriends_GetUserIndexFromXuid@Online_Friends@@QEAAHHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Online_Friends::FavoriteFriends_GetUserDetailsForUI
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_GetUserDetailsForUI(Online_Friends *this, const int controllerIndex, const int favoriteFriendIndex, FavoriteFriendDetailsForUI *detailsForUI)
{
  return ?FavoriteFriends_GetUserDetailsForUI@Online_Friends@@QEAA_NHHAEAUFavoriteFriendDetailsForUI@@@Z(this, controllerIndex, favoriteFriendIndex, detailsForUI);
}

/*
==============
Online_Friends::GetOwningPlatformId
==============
*/

unsigned __int64 __fastcall Online_Friends::GetOwningPlatformId(Online_Friends *this, const int controllerIndex)
{
  return ?GetOwningPlatformId@Online_Friends@@QEAA_KH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_DoesAllListsExist
==============
*/

bool __fastcall Online_Friends::FavoriteFriends_DoesAllListsExist(Online_Friends *this, const int controllerIndex)
{
  return ?FavoriteFriends_DoesAllListsExist@Online_Friends@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Friends::Online_Friends_PublisherVariablesFetched
==============
*/

void __fastcall Online_Friends::Online_Friends_PublisherVariablesFetched(Online_Friends *this)
{
  ?Online_Friends_PublisherVariablesFetched@Online_Friends@@QEAAXXZ(this);
}

/*
==============
Online_Friends::IsAlreadyConnected
==============
*/

bool __fastcall Online_Friends::IsAlreadyConnected(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  return ?IsAlreadyConnected@Online_Friends@@AEAA_NHH@Z(this, localControllerIndex, friendIndex);
}

/*
==============
Online_Friends::OnRegistered
==============
*/
void Online_Friends::OnRegistered(Online_Friends *this)
{
  ;
}

/*
==============
Online_Friends::OnUnregistered
==============
*/
void Online_Friends::OnUnregistered(Online_Friends *this)
{
  FreeMutex(this->m_friendSessionMutex);
}

/*
==============
Online_Friends::Uninit
==============
*/
void Online_Friends::Uninit(Online_Friends *this)
{
  ;
}

/*
==============
Online_Friends::Frame
==============
*/
void Online_Friends::Frame(Online_Friends *this)
{
  int v2; 
  int v3; 
  int i; 
  int ControllerFromClient; 
  PublisherVariableManager *Instance; 
  int v7; 
  __int64 v8; 
  int *m_indexOfUserBeingTriedToLinkWithOriginalList; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  LocalClientNum_t outLocalClientNum; 

  v2 = Sys_Milliseconds();
  v3 = Sys_Milliseconds();
  if ( Online_Backoff::CanProceed(&this->m_friendResolverBackoff, v3) && v2 >= this->m_nextFriendResolveBatchTime )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
        if ( Live_IsUserSignedInToDemonware(ControllerFromClient) )
          Online_Friends::HandleUserIdResolving(this, (const LocalClientNum_t)i);
      }
    }
  }
  if ( Online_Friends::FavoriteFriends_IsEnabled(this) )
  {
    Instance = PublisherVariableManager::GetInstance();
    if ( PublisherVariableManager::HasRetrievedVariables(Instance) && Online_Friends::FavoriteFriends_IsEnabled(this) )
    {
      v7 = 0;
      v8 = 0i64;
      m_indexOfUserBeingTriedToLinkWithOriginalList = this->m_indexOfUserBeingTriedToLinkWithOriginalList;
      v10 = 0i64;
      v11 = 0i64;
      do
      {
        if ( Live_IsUserSignedInToDemonware(v7) && LiveStorage_DoWeHaveStatsForSource(v7, STATS_ONLINE) )
        {
          if ( Online_Friends::FavoriteFriends_IsInitialized(this, v7) )
          {
            if ( CL_Mgr_IsControllerActive(v7) && CL_Mgr_IsControllerMappedToClient(v7, &outLocalClientNum) && Online_Friends::FavoriteFriends_DoesAllListsExist(this, v7) && Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList(this, v7) )
            {
              if ( XUID::IsValid(&this->m_favoriteFriends[v11][*m_indexOfUserBeingTriedToLinkWithOriginalList].m_xuid) )
              {
                v12 = *m_indexOfUserBeingTriedToLinkWithOriginalList;
                if ( this->m_favoriteFriends[0][v12 + v10].m_friendType == NONE && Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList(this, v7, v12) )
                  ++*(m_indexOfUserBeingTriedToLinkWithOriginalList - 523);
              }
              if ( ++*m_indexOfUserBeingTriedToLinkWithOriginalList >= 16 )
              {
                this->m_shouldTryLinkingWithOriginalList[v8] = 0;
                *m_indexOfUserBeingTriedToLinkWithOriginalList = 0;
                Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList(this, v7);
              }
            }
          }
          else
          {
            Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(this, v7);
            Online_Friends::FavoriteFriends_SetInitialized(this, v7, 1);
          }
        }
        ++v7;
        ++v11;
        ++v8;
        ++m_indexOfUserBeingTriedToLinkWithOriginalList;
        v10 += 16i64;
      }
      while ( v7 < 8 );
    }
  }
}

/*
==============
Online_Friends::OnSignedIn
==============
*/
void Online_Friends::OnSignedIn(Online_Friends *this, const int controllerIndex, GenericSignInState signinState)
{
  unsigned __int64 owningPlatformId; 
  __int64 v7; 
  friendList_t *v8; 
  FriendListGlobal *v9; 
  unsigned __int64 PlatformUserId; 
  const dvar_t *v11; 
  int successDelay; 
  const dvar_t *v13; 
  bool enabled; 
  const dvar_t *v15; 
  LocalClientNum_t outLocalClientNum; 

  owningPlatformId = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].owningPlatformId;
  if ( Live_GetPlatformUserId(controllerIndex) != owningPlatformId )
  {
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 550, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
      __debugbreak();
    if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    {
      v7 = outLocalClientNum;
      v8 = this->m_friendClientLists[v7];
      v9 = &this->m_friendClientListGlobal[outLocalClientNum];
      memset_0(&this->m_friendClientLists[v7][1], 0, sizeof(this->m_friendClientLists[v7][1]));
      memset_0(v8, 0, sizeof(friendList_t));
      memset_0(v9, 0, sizeof(FriendListGlobal));
    }
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 573, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
      __debugbreak();
    this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].dirty = 1;
    PlatformUserId = Live_GetPlatformUserId(controllerIndex);
    this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].owningPlatformId = PlatformUserId;
  }
  if ( (unsigned int)(signinState - 3) <= 1 && Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Online_Friends::Crossplay_OnSignedIn(this, controllerIndex);
    v11 = DVARINT_friend_xuid_resolve_success_delay_ms;
    if ( !DVARINT_friend_xuid_resolve_success_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_success_delay_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    successDelay = v11->current.integer;
    v13 = DVARBOOL_friend_xuid_resolve_kill_fail;
    if ( !DVARBOOL_friend_xuid_resolve_kill_fail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_kill_fail") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    enabled = v13->current.enabled;
    v15 = DVARINT_friend_xuid_resolve_backoff_ms;
    if ( !DVARINT_friend_xuid_resolve_backoff_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_backoff_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    Online_Backoff::Init(&this->m_friendResolverBackoff, v15->current.integer, 5, 2.0, enabled, successDelay);
  }
}

/*
==============
Online_Friends::OnSignedOut
==============
*/
void Online_Friends::OnSignedOut(Online_Friends *this, const int controllerIndex, GenericSignOutState signOutState)
{
  this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].owningPlatformId = 0i64;
  Online_Friends::Crossplay_OnSignedOut(this, controllerIndex);
}

/*
==============
Online_Friends::OnDisconnect
==============
*/
void Online_Friends::OnDisconnect(Online_Friends *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
Online_Friends::RegisterLuaFunctions
==============
*/
void Online_Friends::RegisterLuaFunctions(Online_Friends *this, lua_State *luaVM)
{
  ;
}

/*
==============
Online_Friends::OutputCurrentState
==============
*/
void Online_Friends::OutputCurrentState(Online_Friends *this, const int controllerIndex)
{
  Com_Printf(25, "FRIENDS DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "%s is %.2fkb in size.\n", this->m_name, DOUBLE_1154_2421875);
  Com_Printf(25, "FRIENDS DUMP END\n");
}

/*
==============
Online_Friends::Init
==============
*/
bool Online_Friends::Init(Online_Friends *this)
{
  PublisherVariableManager *Instance; 
  bool v3; 
  unsigned int v4; 
  bool *m_favoriteFriendsInitialized; 
  int *p_m_indexInOriginalList; 
  int *m_favoriteFriendCountLinked; 
  __int64 v8; 
  const XUID *v9; 
  __int64 v11; 
  __int64 v12; 
  XUID result; 

  this->m_friendClientListGlobal[0].owningPlatformId = 0i64;
  this->m_friendClientListGlobal[1].owningPlatformId = 0i64;
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, StaticPublisherVariablesFetched);
  v3 = 1;
  this->m_nextFriendResolveBatchTime = 0;
  v4 = 0;
  m_favoriteFriendsInitialized = this->m_favoriteFriendsInitialized;
  p_m_indexInOriginalList = &this->m_favoriteFriends[0][0].m_indexInOriginalList;
  m_favoriteFriendCountLinked = this->m_favoriteFriendCountLinked;
  do
  {
    if ( !v3 )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1048, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Com_Printf(25, "FavoriteFriends_Reset called for controller %d\n", v4);
    *(m_favoriteFriendCountLinked - 8) = 0;
    v8 = 16i64;
    *m_favoriteFriendCountLinked = 0;
    do
    {
      v9 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)(p_m_indexInOriginalList - 3), v9);
      *(p_m_indexInOriginalList - 1) = 0;
      *p_m_indexInOriginalList = -1;
      p_m_indexInOriginalList += 4;
      --v8;
    }
    while ( v8 );
    m_favoriteFriendCountLinked[533] = 0;
    m_favoriteFriendCountLinked[541] = 0;
    m_favoriteFriendCountLinked[523] = 0;
    if ( v4 >= 8 )
    {
      LODWORD(v12) = 8;
      LODWORD(v11) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1157, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    Com_Printf(25, "FavoriteFriends_SetInitialized called for controller %d\n", v4);
    *m_favoriteFriendsInitialized = 0;
    ++v4;
    ++m_favoriteFriendsInitialized;
    ++m_favoriteFriendCountLinked;
    v3 = v4 < 8;
  }
  while ( (int)v4 < 8 );
  return Online_Friends::PlatformInit(this);
}

/*
==============
Online_Friends::CanShowCard
==============
*/
bool Online_Friends::CanShowCard(Online_Friends *this, const int localControllerIndex)
{
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 404, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  return Online_Friends::IsConnected(this, localControllerIndex);
}

/*
==============
Online_Friends::CheckNewFriendIdResolve
==============
*/
void Online_Friends::CheckNewFriendIdResolve(Online_Friends *this, FriendListGlobal *friendList, const int friendIndex, const unsigned __int64 platformId)
{
  __int64 v4; 
  const dvar_t *v8; 
  int integer; 
  XUID result; 

  v4 = friendIndex;
  if ( !friendList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 898, ASSERT_TYPE_SANITY, "( friendList )", (const char *)&queryFormat, "friendList") )
    __debugbreak();
  XUID::NullXUID(&result);
  if ( friendList->friendPlatformIds[v4] == platformId )
  {
    XUID::operator=(&result, &friendList->friends[v4]);
  }
  else
  {
    friendList->checkResolve = 1;
    friendList->userIdResolveState[v4] = USERID_NOT_RESOLVED;
    v8 = DVARINT_friend_xuid_resolve_batch_time_ms;
    if ( !DVARINT_friend_xuid_resolve_batch_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_batch_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    integer = v8->current.integer;
    this->m_nextFriendResolveBatchTime = integer + Sys_Milliseconds();
  }
  XUID::operator=(&friendList->friends[v4], &result);
}

/*
==============
Online_Friends::ClearResolveStateFromFailedResolves
==============
*/
void Online_Friends::ClearResolveStateFromFailedResolves(Online_Friends *this, const int controllerIndex, const unsigned __int64 *platformIds, const unsigned int platformIdCount)
{
  __int64 v4; 
  unsigned __int64 *v5; 
  FriendListGlobal *v8; 
  int IndexByPlatformId; 

  v4 = platformIdCount;
  v5 = (unsigned __int64 *)platformIds;
  if ( !platformIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 860, ASSERT_TYPE_SANITY, "( platformIds )", (const char *)&queryFormat, "platformIds") )
    __debugbreak();
  v8 = &this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)];
  if ( (_DWORD)v4 )
  {
    do
    {
      IndexByPlatformId = Online_Friends::FindIndexByPlatformId(this, controllerIndex, *v5);
      if ( IndexByPlatformId != -1 )
        v8->userIdResolveState[IndexByPlatformId] = USERID_NOT_RESOLVED;
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  v8->checkResolve = 1;
}

/*
==============
Online_Friends::FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache
==============
*/
char Online_Friends::FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  __int64 v3; 
  const char *v6; 
  const char *v7; 
  unsigned __int64 v8; 
  unsigned int FavoriteFriendsNextFreeSlot; 
  unsigned __int64 v10; 
  __int64 v12; 
  __int64 v14; 
  int v15; 
  XUID friendXUID; 
  XUID xuida; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v15 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1416, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v15) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_AddToListAndFixTheOrderOfUsersInLocalCache called for controller %d\n", (unsigned int)v3);
  friendXUID.m_id = xuid.m_id;
  v6 = (char *)&queryFormat.fmt + 3;
  xuida.m_id = xuid.m_id;
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v14) = 8;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1540, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( !Online_Friends::FavoriteFriends_IsEnabled(&Online_Friends::s_instance) )
  {
    v7 = (char *)&queryFormat.fmt + 3;
    v6 = "Favorite Friends Feature disabled";
LABEL_20:
    v8 = XUID::ToUint64(&friendXUID);
    Com_PrintError(25, "FavoriteFriends_AddToPlayerData: could not add user %llu because of error %s and dev error %s\n", v8, v7, v6);
    return 0;
  }
  if ( !Online_Friends::FavoriteFriends_IsInitialized(&Online_Friends::s_instance, v3) )
  {
    v7 = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
    goto LABEL_20;
  }
  if ( XUID::IsNull(&xuida) )
  {
    v7 = "ONLINE/FAVORITE_FRIEND_ADD_FAIL_NO_XUID";
    goto LABEL_20;
  }
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v14) = 8;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v12, v14) )
      __debugbreak();
  }
  if ( Online_Friends::s_instance.m_favoriteFriendCountTotal[v3] >= 16 )
  {
    v7 = "ONLINE/FAVORITE_FRIEND_LIST_FULL";
    goto LABEL_20;
  }
  if ( Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, v3, xuida) )
  {
    v7 = "ONLINE/FAVORITE_FRIEND_EXISTS";
    goto LABEL_20;
  }
  FavoriteFriendsNextFreeSlot = Online_PlayerData_GetFavoriteFriendsNextFreeSlot(v3);
  v10 = XUID::ToUint64(&friendXUID);
  if ( FavoriteFriendsNextFreeSlot <= 0xF )
  {
    Com_Printf(25, "FavoriteFriends_AddToPlayerData: adding user %llu at index %d in player data\n", v10, FavoriteFriendsNextFreeSlot);
    Online_PlayerData_SetFavoriteFriends(v3, friendXUID, FavoriteFriendsNextFreeSlot);
    Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(this, v3);
    Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(this, v3);
    return 1;
  }
  Com_PrintError(25, "FavoriteFriends_AddToPlayerData: could not add user %llu because there is no free slot\n", v10);
  return 0;
}

/*
==============
Online_Friends::FavoriteFriends_AddToPlayerData
==============
*/
char Online_Friends::FavoriteFriends_AddToPlayerData(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  __int64 v3; 
  const char *v4; 
  const char *v5; 
  unsigned __int64 v6; 
  unsigned int FavoriteFriendsNextFreeSlot; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v12; 
  int v13; 
  XUID friendXUID; 
  XUID xuida; 

  friendXUID.m_id = xuid.m_id;
  v3 = controllerIndex;
  v4 = (char *)&queryFormat.fmt + 3;
  xuida.m_id = xuid.m_id;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v13 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1540, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v13) )
      __debugbreak();
  }
  if ( !Online_Friends::FavoriteFriends_IsEnabled(&Online_Friends::s_instance) )
  {
    v5 = (char *)&queryFormat.fmt + 3;
    v4 = "Favorite Friends Feature disabled";
LABEL_17:
    v6 = XUID::ToUint64(&friendXUID);
    Com_PrintError(25, "FavoriteFriends_AddToPlayerData: could not add user %llu because of error %s and dev error %s\n", v6, v5, v4);
    return 0;
  }
  if ( !Online_Friends::FavoriteFriends_IsInitialized(&Online_Friends::s_instance, v3) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
    goto LABEL_17;
  }
  if ( XUID::IsNull(&xuida) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_ADD_FAIL_NO_XUID";
    goto LABEL_17;
  }
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v12) = 8;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( Online_Friends::s_instance.m_favoriteFriendCountTotal[v3] >= 16 )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_LIST_FULL";
    goto LABEL_17;
  }
  if ( Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, v3, xuida) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_EXISTS";
    goto LABEL_17;
  }
  FavoriteFriendsNextFreeSlot = Online_PlayerData_GetFavoriteFriendsNextFreeSlot(v3);
  v9 = XUID::ToUint64(&friendXUID);
  if ( FavoriteFriendsNextFreeSlot > 0xF )
  {
    Com_PrintError(25, "FavoriteFriends_AddToPlayerData: could not add user %llu because there is no free slot\n", v9);
    return 0;
  }
  else
  {
    Com_Printf(25, "FavoriteFriends_AddToPlayerData: adding user %llu at index %d in player data\n", v9, FavoriteFriendsNextFreeSlot);
    Online_PlayerData_SetFavoriteFriends(v3, friendXUID, FavoriteFriendsNextFreeSlot);
    return 1;
  }
}

/*
==============
Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed
==============
*/
bool Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed(Online_Friends *this, const int controllerIndex)
{
  int v6; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1742, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return Online_Friends::FavoriteFriends_IsEnabled(this) && Online_Friends::FavoriteFriends_IsInitialized(this, controllerIndex) && Online_Friends::FavoriteFriends_DoesAllListsExist(this, controllerIndex) && !Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList(this, controllerIndex);
}

/*
==============
Online_Friends::FavoriteFriends_CanUserBeAddedToList
==============
*/
char Online_Friends::FavoriteFriends_CanUserBeAddedToList(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1540, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( Online_Friends::FavoriteFriends_IsEnabled(this) )
  {
    if ( Online_Friends::FavoriteFriends_IsInitialized(this, v5) )
    {
      if ( XUID::IsNull(&xuida) )
      {
        *errorString = "ONLINE/FAVORITE_FRIEND_ADD_FAIL_NO_XUID";
        return 0;
      }
      else
      {
        if ( (unsigned int)v5 >= 8 )
        {
          LODWORD(v10) = 8;
          LODWORD(v9) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( this->m_favoriteFriendCountTotal[v5] < 16 )
        {
          if ( Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, v5, xuida) )
          {
            *errorString = "ONLINE/FAVORITE_FRIEND_EXISTS";
            return 0;
          }
          else
          {
            return 1;
          }
        }
        else
        {
          *errorString = "ONLINE/FAVORITE_FRIEND_LIST_FULL";
          return 0;
        }
      }
    }
    else
    {
      *errorString = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
      return 0;
    }
  }
  else
  {
    *errorString = (char *)&queryFormat.fmt + 3;
    *devErrorString = "Favorite Friends Feature disabled";
    return 0;
  }
}

/*
==============
Online_Friends::FavoriteFriends_CanUserBeRemovedFromList
==============
*/
char Online_Friends::FavoriteFriends_CanUserBeRemovedFromList(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  int v10; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1585, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  if ( Online_Friends::FavoriteFriends_IsEnabled(this) )
  {
    if ( Online_Friends::FavoriteFriends_IsInitialized(this, controllerIndex) )
    {
      if ( XUID::IsNull(&xuida) )
      {
        *errorString = "ONLINE/FAVORITE_FRIEND_REMOVE_FAIL_NO_XUID";
        return 0;
      }
      else if ( Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, controllerIndex, xuida) )
      {
        return 1;
      }
      else
      {
        *errorString = "ONLINE/FAVORITE_FRIEND_DOES_NOT_EXIST";
        return 0;
      }
    }
    else
    {
      *errorString = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
      return 0;
    }
  }
  else
  {
    *errorString = (char *)&queryFormat.fmt + 3;
    *devErrorString = "Favorite Friends Feature disabled";
    return 0;
  }
}

/*
==============
Online_Friends::FavoriteFriends_DoesAllListsExist
==============
*/
bool Online_Friends::FavoriteFriends_DoesAllListsExist(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1381, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return this->m_favoriteFriendPlatformFriendsListExistenceStatus[v2] == EXISTS && this->m_favoriteFriendCrossplayFriendsListExistenceStatus[v2] == EXISTS;
}

/*
==============
Online_Friends::FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled
==============
*/
char Online_Friends::FavoriteFriends_FavoriteFriendsViewProfileButtonDisabled(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  int v10; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1636, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  if ( Online_Friends::FavoriteFriends_IsEnabled(this) )
  {
    if ( Online_Friends::FavoriteFriends_IsInitialized(this, controllerIndex) )
    {
      if ( Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed(this, controllerIndex) )
      {
        if ( XUID::IsNull(&xuida) )
        {
          *errorString = "ONLINE/FAVORITE_FRIEND_REMOVE_FAIL_NO_XUID";
          return 1;
        }
        else if ( Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, controllerIndex, xuida) )
        {
          return 0;
        }
        else
        {
          *errorString = "ONLINE/FAVORITE_FRIEND_DOES_NOT_EXIST";
          return 1;
        }
      }
      else
      {
        *errorString = "ONLINE/FAVORITE_FRIEND_NOT_LINKED";
        return 1;
      }
    }
    else
    {
      *errorString = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
      return 1;
    }
  }
  else
  {
    *errorString = (char *)&queryFormat.fmt + 3;
    *devErrorString = "Favorite Friends Feature disabled";
    return 1;
  }
}

/*
==============
Online_Friends::FavoriteFriends_Frame
==============
*/
void Online_Friends::FavoriteFriends_Frame(Online_Friends *this)
{
  PublisherVariableManager *Instance; 
  int *m_indexOfUserBeingTriedToLinkWithOriginalList; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  LocalClientNum_t outLocalClientNum; 

  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) && Online_Friends::FavoriteFriends_IsEnabled(this) )
  {
    m_indexOfUserBeingTriedToLinkWithOriginalList = this->m_indexOfUserBeingTriedToLinkWithOriginalList;
    v4 = 0;
    v5 = 0i64;
    v6 = 0i64;
    v7 = 0i64;
    do
    {
      if ( Live_IsUserSignedInToDemonware(v4) && LiveStorage_DoWeHaveStatsForSource(v4, STATS_ONLINE) )
      {
        if ( Online_Friends::FavoriteFriends_IsInitialized(this, v4) )
        {
          if ( CL_Mgr_IsControllerActive(v4) && CL_Mgr_IsControllerMappedToClient(v4, &outLocalClientNum) && Online_Friends::FavoriteFriends_DoesAllListsExist(this, v4) && Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList(this, v4) )
          {
            if ( XUID::IsValid(&this->m_favoriteFriends[v7][*m_indexOfUserBeingTriedToLinkWithOriginalList].m_xuid) )
            {
              v8 = *m_indexOfUserBeingTriedToLinkWithOriginalList;
              if ( this->m_favoriteFriends[0][v8 + v6].m_friendType == NONE && Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList(this, v4, v8) )
                ++*(m_indexOfUserBeingTriedToLinkWithOriginalList - 523);
            }
            if ( ++*m_indexOfUserBeingTriedToLinkWithOriginalList >= 16 )
            {
              this->m_shouldTryLinkingWithOriginalList[v5] = 0;
              *m_indexOfUserBeingTriedToLinkWithOriginalList = 0;
              Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList(this, v4);
            }
          }
        }
        else
        {
          Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(this, v4);
          Online_Friends::FavoriteFriends_SetInitialized(this, v4, 1);
        }
      }
      ++v4;
      ++v7;
      ++v5;
      ++m_indexOfUserBeingTriedToLinkWithOriginalList;
      v6 += 16i64;
    }
    while ( v4 < 8 );
  }
}

/*
==============
Online_Friends::FavoriteFriends_GetFriendsList
==============
*/
FavoriteFriend *Online_Friends::FavoriteFriends_GetFriendsList(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1695, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return this->m_favoriteFriends[v2];
}

/*
==============
Online_Friends::FavoriteFriends_GetLinkedFriendCount
==============
*/
__int64 Online_Friends::FavoriteFriends_GetLinkedFriendCount(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex < 8 )
    return (unsigned int)this->m_favoriteFriendCountLinked[controllerIndex];
  v6 = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1533, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
    __debugbreak();
  return (unsigned int)this->m_favoriteFriendCountLinked[v2];
}

/*
==============
Online_Friends::FavoriteFriends_GetOnlineFriendCount
==============
*/
__int64 Online_Friends::FavoriteFriends_GetOnlineFriendCount(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  unsigned int v4; 
  __int64 v5; 
  int *p_m_indexInOriginalList; 
  FavoriteFriend *v7; 
  int v8; 
  __int64 v9; 
  __int64 ClientFromController; 
  unsigned int v11; 
  SocialPresence *Presence; 
  PresencePlatform Platform; 

  v2 = controllerIndex;
  v4 = 0;
  if ( Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed(this, controllerIndex) )
  {
    v5 = 16i64;
    p_m_indexInOriginalList = &this->m_favoriteFriends[v2][0].m_indexInOriginalList;
    v7 = this->m_favoriteFriends[v2];
    do
    {
      if ( XUID::IsValid(&v7->m_xuid) )
      {
        v8 = *(p_m_indexInOriginalList - 1);
        if ( v8 == 1 )
        {
          v9 = *p_m_indexInOriginalList;
          ClientFromController = CL_Mgr_GetClientFromController(v2);
          v11 = v4 + 1;
          if ( this->m_friendClientListGlobal[ClientFromController].status[v9] != FRIEND_STATUS_PRESENT )
            v11 = v4;
          v4 = v11;
        }
        else if ( v8 == 2 )
        {
          Presence = (SocialPresence *)Social_GetPresence(v2, v7->m_xuid);
          Platform = SocialPresence::GetPlatform(Presence);
          if ( Presence )
          {
            if ( Platform )
              ++v4;
          }
        }
      }
      ++v7;
      p_m_indexInOriginalList += 4;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}

/*
==============
Online_Friends::FavoriteFriends_GetTotalFriendCount
==============
*/
__int64 Online_Friends::FavoriteFriends_GetTotalFriendCount(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex < 8 )
    return (unsigned int)this->m_favoriteFriendCountTotal[controllerIndex];
  v6 = 8;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1526, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
    __debugbreak();
  return (unsigned int)this->m_favoriteFriendCountTotal[v2];
}

/*
==============
Online_Friends::FavoriteFriends_GetUserDetailsForUI
==============
*/
bool Online_Friends::FavoriteFriends_GetUserDetailsForUI(Online_Friends *this, const int controllerIndex, const int favoriteFriendIndex, FavoriteFriendDetailsForUI *detailsForUI)
{
  __int64 v4; 
  __int64 v6; 
  FavoriteFriend *v8; 
  __int64 v9; 
  FavoriteFriendType m_friendType; 
  LocalClientNum_t ClientFromController; 
  __int64 m_indexInOriginalList; 
  const XUID *p_m_xuid; 
  FriendListGlobal *v14; 
  unsigned __int64 v15; 
  unsigned __int64 m_id; 
  bool result; 
  __int64 v18; 
  __int64 v19; 
  const SocialPresence *Presence; 
  SocialPresence *v21; 
  unsigned __int64 PlatformId; 
  bool v23; 
  const char *v24; 
  char *gamertagOut; 
  char *gamertagOuta; 
  bool *isSessionPrivateOut; 
  int isSessionPrivateOutb; 
  bool *isSessionPrivateOuta; 
  DWFriend *friendsOut; 
  unsigned int numFriendsOut; 

  v4 = controllerIndex;
  v6 = favoriteFriendIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    isSessionPrivateOutb = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1771, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, isSessionPrivateOutb) )
      __debugbreak();
    LODWORD(isSessionPrivateOuta) = 8;
    LODWORD(gamertagOuta) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1695, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", gamertagOuta, isSessionPrivateOuta) )
      __debugbreak();
  }
  v8 = this->m_favoriteFriends[v4];
  if ( Online_Friends::FavoriteFriends_CanFavoriteFriendsBeAccessed(this, v4) )
  {
    v9 = v6 + 16 * v4;
    m_friendType = this->m_favoriteFriends[0][v9].m_friendType;
    if ( m_friendType == HALF )
    {
      ClientFromController = CL_Mgr_GetClientFromController(v4);
      m_indexInOriginalList = this->m_favoriteFriends[0][v9].m_indexInOriginalList;
      p_m_xuid = &v8[v6].m_xuid;
      v14 = &this->m_friendClientListGlobal[ClientFromController];
      XUID::operator=(&detailsForUI->xuid, p_m_xuid);
      if ( !XUID::operator==(&v14->friends[m_indexInOriginalList], p_m_xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1784, ASSERT_TYPE_ASSERT, "(friendsList->friends[indexInPlatformFriendsList] == favoriteFriendsList[favoriteFriendIndex].m_xuid)", (const char *)&queryFormat, "friendsList->friends[indexInPlatformFriendsList] == favoriteFriendsList[favoriteFriendIndex].m_xuid") )
        __debugbreak();
      v15 = v14->friendPlatformIds[m_indexInOriginalList];
      m_id = detailsForUI->xuid.m_id;
      detailsForUI->friendPlatformId = v15;
      Online_Friends::GetFriendsDetailsForUI(&Online_Friends::s_instance, v4, (XUID)m_id, v15, detailsForUI->presence, detailsForUI->gamerTag, &detailsForUI->isSessionPrivate);
      detailsForUI->presencePlatform = Social_GetPresencePlatform();
      detailsForUI->isOnline = 0;
      if ( (unsigned int)(v14->status[m_indexInOriginalList] - 5) <= 3 )
      {
        detailsForUI->isOnline = 1;
        return 1;
      }
      return 1;
    }
    if ( m_friendType == HALF_HALF )
    {
      numFriendsOut = 0;
      v18 = this->m_favoriteFriends[0][v9].m_indexInOriginalList;
      Online_Friends::Crossplay_GetFriends(&Online_Friends::s_instance, v4, &friendsOut, &numFriendsOut);
      if ( (unsigned int)v18 >= numFriendsOut )
      {
        LODWORD(isSessionPrivateOut) = numFriendsOut;
        LODWORD(gamertagOut) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1808, ASSERT_TYPE_ASSERT, "(unsigned)( indexInCrossplayFriendsList ) < (unsigned)( crossplayFriendsCount )", "indexInCrossplayFriendsList doesn't index crossplayFriendsCount\n\t%i not in [0, %i)", gamertagOut, isSessionPrivateOut) )
          __debugbreak();
      }
      v19 = v18;
      XUID::operator=(&detailsForUI->xuid, &friendsOut[v19].xuid);
      Com_TruncatePlayerName(friendsOut[v19].name, detailsForUI->gamerTag, 0x24ui64);
      Presence = Social_GetPresence(v4, detailsForUI->xuid);
      v21 = (SocialPresence *)Presence;
      if ( Presence )
      {
        Social_FormatPresenceStatus(Presence->m_context, Presence->m_mapIndex, Presence->m_gametype, PRESENCE_PLATFORM_NONE, detailsForUI->presence, 0x80ui64);
        detailsForUI->presencePlatform = SocialPresence::GetPlatform(v21);
        PlatformId = SocialPresence::GetPlatformId(v21);
        v23 = detailsForUI->presencePlatform == PRESENCE_PLATFORM_NONE;
        detailsForUI->friendPlatformId = PlatformId;
        detailsForUI->isOnline = 0;
        if ( !v23 )
          detailsForUI->isOnline = 1;
      }
      return 1;
    }
  }
  XUID::operator=(&detailsForUI->xuid, &v8[v6].m_xuid);
  detailsForUI->friendPlatformId = 0i64;
  Com_sprintf<128>((char (*)[128])detailsForUI->presence, (const char *)&queryFormat.fmt + 3);
  v24 = SEH_SafeTranslateString("ONLINE/FAVORITE_FRIEND_NOT_LINKED");
  Com_TruncatePlayerName(v24, detailsForUI->gamerTag, 0x24ui64);
  result = 0;
  *(_WORD *)&detailsForUI->isSessionPrivate = 1;
  detailsForUI->isOnline = 0;
  return result;
}

/*
==============
Online_Friends::FavoriteFriends_GetUserIndexFromXuid
==============
*/
__int64 Online_Friends::FavoriteFriends_GetUserIndexFromXuid(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  __int64 v3; 
  unsigned int v5; 
  __int64 v6; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1679, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v5 = 0;
  v6 = v3;
  while ( !XUID::operator==(&this->m_favoriteFriends[v6][v5].m_xuid, &xuida) )
  {
    if ( (int)++v5 >= 16 )
      return 0xFFFFFFFFi64;
  }
  return v5;
}

/*
==============
Online_Friends::FavoriteFriends_IsEnabled
==============
*/
__int64 Online_Friends::FavoriteFriends_IsEnabled(Online_Friends *this)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_online_favorite_friends_enabled;
  if ( !DVARBOOL_online_favorite_friends_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_favorite_friends_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
Online_Friends::FavoriteFriends_IsFriendsInvitable
==============
*/
bool Online_Friends::FavoriteFriends_IsFriendsInvitable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  __int64 v5; 
  int UserIndexFromXuid; 
  __int64 v11; 
  FavoriteFriendType m_friendType; 
  LocalClientNum_t ClientFromController; 
  __int64 m_indexInOriginalList; 
  __int64 v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  const char *v18; 
  unsigned int IndexByPlatformId; 
  __int64 v20; 
  __int64 v21; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1843, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  UserIndexFromXuid = Online_Friends::FavoriteFriends_GetUserIndexFromXuid(this, v5, xuid);
  if ( UserIndexFromXuid < 0 )
  {
    *errorString = "ONLINE/FAVORITE_FRIEND_NOT_LINKED";
    *devErrorString = "Favorite friend not linked to original list";
    return 0;
  }
  v11 = UserIndexFromXuid + 16 * v5;
  m_friendType = this->m_favoriteFriends[v5][UserIndexFromXuid].m_friendType;
  if ( m_friendType == HALF )
  {
    ClientFromController = CL_Mgr_GetClientFromController(v5);
    m_indexInOriginalList = this->m_favoriteFriends[0][v11].m_indexInOriginalList;
    v15 = ClientFromController;
    if ( Live_HasOnlineServicesAndRequirementsToInvite(v5, errorString, devErrorString, 1) )
    {
      v16 = this->m_friendClientListGlobal[v15].friendPlatformIds[m_indexInOriginalList];
      if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 181, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 183, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
        __debugbreak();
      if ( !Live_HasOnlineServicesAndRequirementsToInvite(v5, errorString, devErrorString, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 184, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( localControllerIndex, errorString, devErrorString, true ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( localControllerIndex, errorString, devErrorString, true )") )
        __debugbreak();
      if ( !Live_IsInGamemodeToInvite(errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 185, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
        __debugbreak();
      v17 = CL_Mgr_GetClientFromController(v5);
      if ( v16 )
      {
        IndexByPlatformId = Online_Friends::FindIndexByPlatformId(&Online_Friends::s_instance, v5, v16);
        if ( IndexByPlatformId == -1 )
        {
          v18 = "ONLINE/INVALID_FRIEND_INDEX";
        }
        else
        {
          if ( IndexByPlatformId >= Online_Friends::s_instance.m_friendClientListGlobal[v17].count )
          {
            LODWORD(v21) = Online_Friends::s_instance.m_friendClientListGlobal[v17].count;
            LODWORD(v20) = IndexByPlatformId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( fl->count )", "friendIndex doesn't index fl->count\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( Online_Friends::GetStatus(&Online_Friends::s_instance, v5, IndexByPlatformId) != FRIEND_STATUS_OFFLINE )
            return 1;
          v18 = "MENU/FRIEND_OFFLINE";
        }
      }
      else
      {
        v18 = "ONLINE/CANT_INVITE_NO_PRESENCE";
      }
      *errorString = v18;
    }
    return 0;
  }
  else if ( m_friendType == HALF_HALF )
  {
    return Online_Friends::Crossplay_FriendInvitable(&Online_Friends::s_instance, v5, xuid, errorString, devErrorString);
  }
  else
  {
    *errorString = "ONLINE/FAVORITE_FRIEND_NOT_LINKED";
    *devErrorString = "Favorite friend's friend type is not set";
    return 0;
  }
}

/*
==============
Online_Friends::FavoriteFriends_IsFriendsJoinable
==============
*/
bool Online_Friends::FavoriteFriends_IsFriendsJoinable(Online_Friends *this, const int controllerIndex, XUID xuid, const char **errorString, const char **devErrorString)
{
  __int64 v5; 
  int UserIndexFromXuid; 
  __int64 v11; 
  FavoriteFriendType m_friendType; 
  unsigned __int64 v13; 
  int IndexByPlatformId; 
  int v15; 
  FriendStatus Status; 

  v5 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1890, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  UserIndexFromXuid = Online_Friends::FavoriteFriends_GetUserIndexFromXuid(this, v5, xuid);
  if ( UserIndexFromXuid < 0 )
  {
    *errorString = "ONLINE/FAVORITE_FRIEND_NOT_LINKED";
    *devErrorString = "Favorite friend not linked to original list";
    return 0;
  }
  v11 = UserIndexFromXuid + 16 * v5;
  m_friendType = this->m_favoriteFriends[v5][UserIndexFromXuid].m_friendType;
  if ( m_friendType == HALF )
  {
    v13 = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(v5)].friendPlatformIds[this->m_favoriteFriends[0][v11].m_indexInOriginalList];
    if ( (unsigned int)v5 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 227, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
      __debugbreak();
    if ( !Live_HasOnlineServicesAndRequirementsToJoin(v5, errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 228, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString )") )
      __debugbreak();
    if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 230, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
      __debugbreak();
    if ( v13 )
    {
      IndexByPlatformId = Online_Friends::FindIndexByPlatformId(&Online_Friends::s_instance, v5, v13);
      v15 = IndexByPlatformId;
      if ( IndexByPlatformId == -1 )
      {
        *errorString = "ONLINE/INVALID_FRIEND_INDEX";
        return 0;
      }
      Status = Online_Friends::GetStatus(&Online_Friends::s_instance, v5, IndexByPlatformId);
      switch ( Status )
      {
        case FRIEND_STATUS_REQUEST_PENDING:
          *errorString = "MENU/FRIEND_STILL_PENDING";
          return 0;
        case FRIEND_STATUS_REQUEST_RECEIVED:
          *errorString = "MENU/FRIEND_NOT_CONFIRMED";
          return 0;
        case FRIEND_STATUS_PRESENT:
          if ( Online_Friends::GetIsSameTitleID(&Online_Friends::s_instance, v5, v15, errorString) )
            return Online_Friends::GetIsSessionValid(&Online_Friends::s_instance, v5, v15, errorString);
          return 0;
      }
    }
    *errorString = "LUA_MENU/FRIEND_NOT_IN_GAME";
  }
  else
  {
    if ( m_friendType == HALF_HALF )
      return Online_Friends::Crossplay_FriendJoinable(&Online_Friends::s_instance, v5, xuid, errorString, devErrorString);
    *errorString = "ONLINE/FAVORITE_FRIEND_NOT_LINKED";
    *devErrorString = "Favorite friend's friend type is not set";
  }
  return 0;
}

/*
==============
Online_Friends::FavoriteFriends_IsInitialized
==============
*/
bool Online_Friends::FavoriteFriends_IsInitialized(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  bool result; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1144, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  result = Online_Friends::FavoriteFriends_IsEnabled(this);
  if ( result )
    return this->m_favoriteFriendsInitialized[v2];
  return result;
}

/*
==============
Online_Friends::FavoriteFriends_IsUserAddedToList
==============
*/
bool Online_Friends::FavoriteFriends_IsUserAddedToList(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1623, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  return Online_Friends::FavoriteFriends_GetUserIndexFromXuid(this, controllerIndex, xuid) >= 0;
}

/*
==============
Online_Friends::FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache
==============
*/
char Online_Friends::FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  __int64 v3; 
  int *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v15 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1458, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v15) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_RemoveFromListAndFixTheOrderOfUsersInLocalCache called for controller %d\n", (unsigned int)v3);
  if ( !Online_Friends::FavoriteFriends_RemoveFromPlayerData(this, v3, xuid) )
    return 0;
  Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(this, v3);
  v6 = &this->m_favoriteFriendCountLinked[v3];
  v7 = v3;
  v8 = 0;
  *v6 = 0;
  v19 = 16 * v3 + 73743;
  v16 = 16 * v3 + 73744;
  v17 = 16 * v3 + 73745;
  v9 = 16 * v3 + 73738;
  v10 = 16 * v3 + 73739;
  v18 = 16 * v3 + 73746;
  v11 = 16 * v3 + 73752;
  v12 = 16 * v3 + 73740;
  if ( this->m_favoriteFriends[v7][0].m_friendType )
  {
    v8 = 1;
    *v6 = 1;
  }
  if ( *((_DWORD *)&this->__vftable + 4 * v9) )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v10) )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v12) )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][4].m_friendType )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][5].m_friendType )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v19) )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v16) )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v17) )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v18) )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][10].m_friendType )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][11].m_friendType )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][12].m_friendType )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][13].m_friendType )
    *v6 = ++v8;
  if ( this->m_favoriteFriends[v7][14].m_friendType )
    *v6 = ++v8;
  if ( *((_DWORD *)&this->__vftable + 4 * v11) )
    *v6 = v8 + 1;
  return 1;
}

/*
==============
Online_Friends::FavoriteFriends_RemoveFromPlayerData
==============
*/
char Online_Friends::FavoriteFriends_RemoveFromPlayerData(Online_Friends *this, const int controllerIndex, XUID xuid)
{
  const char *v4; 
  const char *v5; 
  unsigned __int64 v6; 
  int IndexForXuidInFavoriteFriends; 
  unsigned __int64 v9; 
  const XUID *v10; 
  int v12; 
  XUID friendXUID; 
  XUID xuida; 

  friendXUID.m_id = xuid.m_id;
  xuida.m_id = xuid.m_id;
  v4 = (char *)&queryFormat.fmt + 3;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1585, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v12) )
      __debugbreak();
  }
  if ( !Online_Friends::FavoriteFriends_IsEnabled(&Online_Friends::s_instance) )
  {
    v5 = (char *)&queryFormat.fmt + 3;
    v4 = "Favorite Friends Feature disabled";
LABEL_12:
    v6 = XUID::ToUint64(&friendXUID);
    Com_PrintError(25, "FavoriteFriends_RemoveFromPlayerData: could not remove user %llu because of error %s and dev error %s\n", v6, v5, v4);
    return 0;
  }
  if ( !Online_Friends::FavoriteFriends_IsInitialized(&Online_Friends::s_instance, controllerIndex) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_NOT_INITIALIZED";
    goto LABEL_12;
  }
  if ( XUID::IsNull(&xuida) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_REMOVE_FAIL_NO_XUID";
    goto LABEL_12;
  }
  if ( !Online_Friends::FavoriteFriends_IsUserAddedToList(&Online_Friends::s_instance, controllerIndex, xuida) )
  {
    v5 = "ONLINE/FAVORITE_FRIEND_DOES_NOT_EXIST";
    goto LABEL_12;
  }
  IndexForXuidInFavoriteFriends = Online_PlayerData_GetIndexForXuidInFavoriteFriends(controllerIndex, friendXUID);
  v9 = XUID::ToUint64(&friendXUID);
  if ( IndexForXuidInFavoriteFriends < 0 )
  {
    Com_PrintError(25, "FavoriteFriends_RemoveFromPlayerData: could not remove user %llu because the user does not exist in player data\n", v9);
    return 0;
  }
  else
  {
    Com_Printf(25, "FavoriteFriends_RemoveFromPlayerData: removing user %llu from index %d in player data\n", v9, (unsigned int)IndexForXuidInFavoriteFriends);
    v10 = XUID::NullXUID(&xuida);
    Online_PlayerData_SetFavoriteFriends(controllerIndex, (const XUID)v10->m_id, IndexForXuidInFavoriteFriends);
    return 1;
  }
}

/*
==============
Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList
==============
*/
void Online_Friends::FavoriteFriends_RemoveUsersNotLinkedToOriginalList(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  char v3; 
  int v5; 
  int v6; 
  __int64 v7; 
  FavoriteFriend *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 

  v2 = controllerIndex;
  v3 = 0;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v23 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1488, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v23) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_RemoveUsersNotLinkedToOriginalList called for controller %d\n", (unsigned int)v2);
  v5 = 0;
  v25 = v2;
  v6 = 0;
  v7 = v2;
  v8 = this->m_favoriteFriends[v2];
  do
  {
    if ( XUID::IsValid(&v8->m_xuid) && v8->m_friendType == NONE )
    {
      v9 = XUID::ToUint64(&v8->m_xuid);
      Com_Printf(25, "FavoriteFriends_RemoveUsersNotLinkedToOriginalList %llu exists at index %d but is not linked, removing\n", v9, (unsigned int)v6);
      Online_Friends::FavoriteFriends_RemoveFromPlayerData(this, v2, v8->m_xuid);
      v3 = 1;
    }
    ++v6;
    ++v8;
  }
  while ( v6 < 16 );
  if ( v3 )
  {
    Com_Printf(25, "FavoriteFriends_RemoveUsersNotLinkedToOriginalList, users were removed, so calling FavoriteFriends_UpdateLocalCacheFromPlayerData\n");
    Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(this, v2);
    this->m_favoriteFriendCountLinked[v2] = 0;
    v10 = v2;
    v26 = 16 * v2 + 73746;
    v11 = 16 * v2 + 73738;
    v27 = 16 * v2 + 73747;
    v12 = 16 * v2 + 73739;
    v13 = 16 * v2 + 73740;
    v24 = 16 * v2 + 73748;
    v14 = 16 * v2 + 73752;
    v15 = 16 * v2 + 73741;
    v16 = 16 * v2 + 73742;
    v17 = 16 * v2 + 73743;
    v18 = 16 * v2 + 73744;
    v19 = 16 * v2 + 73745;
    v20 = 16 * v2 + 73749;
    v21 = 16 * v2 + 73750;
    if ( this->m_favoriteFriends[v10][0].m_friendType )
    {
      v5 = 1;
      this->m_favoriteFriendCountLinked[v25] = 1;
    }
    if ( *((_DWORD *)&this->__vftable + 4 * v11) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v12) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v13) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v15) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v16) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v17) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v18) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v19) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v26) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v27) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v24) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v20) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( *((_DWORD *)&this->__vftable + 4 * v21) )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    if ( this->m_favoriteFriends[v10][14].m_friendType )
      this->m_favoriteFriendCountLinked[v25] = ++v5;
    v7 = v25;
    if ( *((_DWORD *)&this->__vftable + 4 * v14) )
      this->m_favoriteFriendCountLinked[v25] = v5 + 1;
  }
  Com_Printf(25, "FavoriteFriends_RemoveUsersNotLinkedToOriginalList, the number of users linked are %d\n", (unsigned int)this->m_favoriteFriendCountLinked[v7]);
}

/*
==============
Online_Friends::FavoriteFriends_Reset
==============
*/
void Online_Friends::FavoriteFriends_Reset(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  int *p_m_indexInOriginalList; 
  const XUID *v7; 
  XUID result; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1048, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_Reset called for controller %d\n", (unsigned int)v2);
  v4 = v2;
  this->m_favoriteFriendCountTotal[v2] = 0;
  this->m_favoriteFriendCountLinked[v2] = 0;
  v5 = 16i64;
  p_m_indexInOriginalList = &this->m_favoriteFriends[v2][0].m_indexInOriginalList;
  do
  {
    v7 = XUID::NullXUID(&result);
    XUID::operator=((XUID *)(p_m_indexInOriginalList - 3), v7);
    *(p_m_indexInOriginalList - 1) = 0;
    *p_m_indexInOriginalList = -1;
    p_m_indexInOriginalList += 4;
    --v5;
  }
  while ( v5 );
  this->m_favoriteFriendPlatformFriendsListExistenceStatus[v4] = DOES_NOT_EXIST;
  this->m_favoriteFriendCrossplayFriendsListExistenceStatus[v4] = DOES_NOT_EXIST;
  this->m_indexOfUserBeingTriedToLinkWithOriginalList[v4] = 0;
}

/*
==============
Online_Friends::FavoriteFriends_ResetStats
==============
*/
void Online_Friends::FavoriteFriends_ResetStats(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v3; 
  int i; 
  const XUID *v5; 
  XUID *v6; 
  __int64 v7; 
  FavoriteFriend *v8; 
  __int64 v9; 
  unsigned int v10; 
  int *p_m_indexInOriginalList; 
  __int64 v12; 
  const XUID *v13; 
  Online_Friends *v14; 
  FavoriteFriendType *p_m_friendType; 
  __int64 v16; 
  unsigned __int64 v17; 
  int UserIndexFromXuid; 
  __int64 v19; 
  unsigned __int64 v20; 
  FavoriteFriendType v21; 
  unsigned __int64 v22; 
  char *v23; 
  unsigned __int64 m_id; 
  _DWORD *v25; 
  const XUID *v26; 
  char *v27; 
  FavoriteFriend *v28; 
  __int64 v29; 
  __m256i v30; 
  FavoriteFriend v31; 
  char *fmt; 
  __int64 v33; 
  __int64 v34; 
  XUID xuid; 
  XUID result; 
  Online_Friends *v37; 
  XUID favoriteFriendXUIDs[16]; 
  FavoriteFriend v39[16]; 

  v2 = controllerIndex;
  v37 = this;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1130, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_ResetStats called for controller %d\n", (unsigned int)v2);
  v3 = 0i64;
  for ( i = 0; i < 16; ++i )
  {
    v5 = XUID::NullXUID(&result);
    Online_PlayerData_SetFavoriteFriends(v2, (const XUID)v5->m_id, i);
  }
  v6 = favoriteFriendXUIDs;
  result.m_id = 16i64;
  v7 = 16i64;
  do
  {
    XUID::XUID(v6++);
    --v7;
  }
  while ( v7 );
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v34) = 8;
    LODWORD(v33) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1068, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData called for controller %d\n", (unsigned int)v2);
  if ( Online_PlayerData_GetFavoriteFriends(v2, favoriteFriendXUIDs) )
  {
    v8 = v39;
    v9 = 16i64;
    do
    {
      FavoriteFriend::FavoriteFriend(v8++);
      --v9;
    }
    while ( v9 );
    v10 = 0;
    p_m_indexInOriginalList = &v39[0].m_indexInOriginalList;
    v12 = 16i64;
    do
    {
      v13 = XUID::NullXUID(&xuid);
      XUID::operator=((XUID *)(p_m_indexInOriginalList - 3), v13);
      *(p_m_indexInOriginalList - 1) = 0;
      *p_m_indexInOriginalList = -1;
      p_m_indexInOriginalList += 4;
      --v12;
    }
    while ( v12 );
    v14 = v37;
    p_m_friendType = &v39[0].m_friendType;
    v16 = v2;
    do
    {
      xuid.m_id = favoriteFriendXUIDs[v3].m_id;
      if ( XUID::IsValid(&xuid) )
      {
        XUID::operator=(&v39[v10].m_xuid, &xuid);
        v17 = XUID::ToUint64(&xuid);
        Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Adding xuid in player data %llu at index %d in temp list\n", v17, v10);
        UserIndexFromXuid = Online_Friends::FavoriteFriends_GetUserIndexFromXuid(v14, v2, xuid);
        if ( UserIndexFromXuid >= 0 )
        {
          v19 = (__int64)&v14->m_favoriteFriends[v16][UserIndexFromXuid];
          XUID::operator=((XUID *)p_m_friendType - 1, (const XUID *)v19);
          *p_m_friendType = *(FavoriteFriendType *)(v19 + 8);
          p_m_friendType[1] = *(FavoriteFriendType *)(v19 + 12);
          v20 = XUID::ToUint64(&xuid);
          Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Found xuid %llu in cache\n", v20);
          SLODWORD(v19) = p_m_friendType[1];
          v21 = *p_m_friendType;
          v22 = XUID::ToUint64((XUID *)p_m_friendType - 1);
          LODWORD(fmt) = v19;
          Com_Printf(25, "XUID: %llu, friendType %d, indexInOriginalList %d\n", v22, (unsigned int)v21, fmt);
          v16 = v2;
        }
        ++v10;
        p_m_friendType += 4;
      }
      ++v3;
    }
    while ( v3 < 16 );
    Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Found %d users in player data\n", v10);
    v23 = (char *)v14 + 256 * v16;
    m_id = result.m_id;
    v25 = v23 + 1179796;
    do
    {
      v26 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)(v25 - 3), v26);
      *(v25 - 1) = 0;
      *v25 = -1;
      v25 += 4;
      --m_id;
    }
    while ( m_id );
    v27 = v23 + 1179784;
    v28 = v39;
    v29 = 2i64;
    do
    {
      v27 += 128;
      v30 = *(__m256i *)&v28->m_xuid.m_id;
      v31 = v28[7];
      v28 += 8;
      *((__m256i *)v27 - 4) = v30;
      *((__m256i *)v27 - 3) = *(__m256i *)&v28[-6].m_xuid.m_id;
      *((__m256i *)v27 - 2) = *(__m256i *)&v28[-4].m_xuid.m_id;
      *((FavoriteFriend *)v27 - 2) = v28[-2];
      *((FavoriteFriend *)v27 - 1) = v31;
      --v29;
    }
    while ( v29 );
    v37->m_favoriteFriendCountTotal[v16] = v10;
    Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData Found %d users\n", v10);
  }
  else
  {
    Com_PrintWarning(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData, could not read player data\n");
  }
}

/*
==============
Online_Friends::FavoriteFriends_SetCrossplayFriendsListDoesNotExist
==============
*/
void Online_Friends::FavoriteFriends_SetCrossplayFriendsListDoesNotExist(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1352, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_SetCrossplayFriendsListDoesNotExist called for controller %d\n", (unsigned int)v2);
  this->m_favoriteFriendCrossplayFriendsListExistenceStatus[v2] = DOES_NOT_EXIST;
  Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList(this, v2);
}

/*
==============
Online_Friends::FavoriteFriends_SetCrossplayFriendsListExists
==============
*/
void Online_Friends::FavoriteFriends_SetCrossplayFriendsListExists(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  bool DoesAllListsExist; 
  bool v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1362, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_SetCrossplayFriendsListExists called for controller %d\n", (unsigned int)v2);
  DoesAllListsExist = Online_Friends::FavoriteFriends_DoesAllListsExist(this, v2);
  this->m_favoriteFriendCrossplayFriendsListExistenceStatus[v2] = EXISTS;
  v5 = DoesAllListsExist;
  if ( Online_Friends::FavoriteFriends_DoesAllListsExist(this, v2) && !v5 )
    Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(this, v2);
}

/*
==============
Online_Friends::FavoriteFriends_SetInitialized
==============
*/
void Online_Friends::FavoriteFriends_SetInitialized(Online_Friends *this, const int controllerIndex, bool value)
{
  __int64 v3; 
  int v7; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1157, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_SetInitialized called for controller %d\n", (unsigned int)v3);
  this->m_favoriteFriendsInitialized[v3] = value;
}

/*
==============
Online_Friends::FavoriteFriends_SetPlatformFriendsListDoesNotExist
==============
*/
void Online_Friends::FavoriteFriends_SetPlatformFriendsListDoesNotExist(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1324, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_SetPlatformFriendsListDoesNotExist called for controller %d\n", (unsigned int)v2);
  this->m_favoriteFriendPlatformFriendsListExistenceStatus[v2] = DOES_NOT_EXIST;
  Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList(this, v2);
}

/*
==============
Online_Friends::FavoriteFriends_SetPlatformFriendsListExists
==============
*/
void Online_Friends::FavoriteFriends_SetPlatformFriendsListExists(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  bool DoesAllListsExist; 
  bool v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1333, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_SetPlatformFriendsListExists called for controller %d\n", (unsigned int)v2);
  DoesAllListsExist = Online_Friends::FavoriteFriends_DoesAllListsExist(this, v2);
  this->m_favoriteFriendPlatformFriendsListExistenceStatus[v2] = EXISTS;
  v5 = DoesAllListsExist;
  if ( Online_Friends::FavoriteFriends_DoesAllListsExist(this, v2) && !v5 )
    Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(this, v2);
}

/*
==============
Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList
==============
*/
void Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1236, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_SetTryLinkingUsersWithOriginalList called for controller %d\n", (unsigned int)v2);
  this->m_indexOfUserBeingTriedToLinkWithOriginalList[v2] = 0;
  this->m_shouldTryLinkingWithOriginalList[v2] = 1;
}

/*
==============
Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible
==============
*/
void Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible(Online_Friends *this, const int controllerIndex)
{
  int v5; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1312, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_SetTryLinkingUsersWithOriginalListIfPossible called for controller %d\n", (unsigned int)controllerIndex);
  if ( Online_Friends::FavoriteFriends_DoesAllListsExist(this, controllerIndex) )
  {
    Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList(this, controllerIndex);
    Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(this, controllerIndex);
  }
}

/*
==============
Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList
==============
*/
bool Online_Friends::FavoriteFriends_ShouldTryLinkingUsersWithOriginalList(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  int v6; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1245, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
  }
  return this->m_shouldTryLinkingWithOriginalList[v2];
}

/*
==============
Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList
==============
*/
char Online_Friends::FavoriteFriends_TryLinkingUserWithOriginalList(Online_Friends *this, const int controllerIndex, const int indexInFavoriteFriendsList)
{
  __int64 v3; 
  __int64 v5; 
  FavoriteFriend *v6; 
  char *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  DWFriend *friendsOut; 
  unsigned int numFriendsOut; 

  v3 = controllerIndex;
  v5 = indexInFavoriteFriendsList;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1257, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v6 = &this->m_favoriteFriends[v3][v5];
  if ( !XUID::IsValid(&v6->m_xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1258, ASSERT_TYPE_ASSERT, "(m_favoriteFriends[controllerIndex][indexInFavoriteFriendsList].m_xuid.IsValid())", (const char *)&queryFormat, "m_favoriteFriends[controllerIndex][indexInFavoriteFriendsList].m_xuid.IsValid()") )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_TryLinkingUserWithOriginalList called for controller %d\n", (unsigned int)v3);
  v7 = (char *)this + 48072 * CL_Mgr_GetClientFromController(v3);
  v8 = 0;
  v9 = 0;
  if ( *((_DWORD *)v7 + 24) )
  {
    while ( !XUID::operator==((XUID *)&v7[8 * v9 + 104], &v6->m_xuid) )
    {
      if ( ++v9 >= *((_DWORD *)v7 + 24) )
        goto LABEL_10;
    }
    v6->m_friendType = HALF;
    v6->m_indexInOriginalList = v9;
    v12 = XUID::ToUint64(&v6->m_xuid);
    Com_Printf(25, "FavoriteFriends_TryLinkingUserWithOriginalList %llu found as favorite user in platform friends list at index %d\n", v12, v9);
    return 1;
  }
  else
  {
LABEL_10:
    friendsOut = NULL;
    numFriendsOut = 0;
    Online_Friends::Crossplay_GetFriends(&Online_Friends::s_instance, v3, &friendsOut, &numFriendsOut);
    if ( numFriendsOut )
    {
      while ( !XUID::operator==(&friendsOut[v8].xuid, &v6->m_xuid) )
      {
        if ( ++v8 >= numFriendsOut )
          goto LABEL_13;
      }
      v6->m_friendType = HALF_HALF;
      v6->m_indexInOriginalList = v8;
      v13 = XUID::ToUint64(&v6->m_xuid);
      Com_Printf(25, "FavoriteFriends_TryLinkingUserWithOriginalList %llu found as favorite user in crossplay friends list at index %d\n", v13, v8);
      return 1;
    }
    else
    {
LABEL_13:
      v10 = XUID::ToUint64(&v6->m_xuid);
      Com_PrintWarning(25, "FavoriteFriends_TryLinkingUserWithOriginalList %llu not found in any list\n", v10);
      return 0;
    }
  }
}

/*
==============
Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList
==============
*/
void Online_Friends::FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  int v21; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v21 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1298, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v21) )
      __debugbreak();
  }
  Com_Printf(25, "FavoriteFriends_UnlinkAllFavoriteFriendsFromOriginalList called for controller %d\n", (unsigned int)v2);
  this->m_favoriteFriendCountLinked[v2] = 0;
  v4 = v2;
  this->m_favoriteFriends[v4][0].m_friendType = NONE;
  this->m_favoriteFriends[v4][0].m_indexInOriginalList = -1;
  v5 = 16 * v2 + 1;
  this->m_favoriteFriends[0][v5].m_friendType = NONE;
  this->m_favoriteFriends[0][v5].m_indexInOriginalList = -1;
  v6 = 16 * v2 + 2;
  this->m_favoriteFriends[0][v6].m_friendType = NONE;
  this->m_favoriteFriends[0][v6].m_indexInOriginalList = -1;
  v7 = 16 * v2 + 3;
  this->m_favoriteFriends[0][v7].m_friendType = NONE;
  this->m_favoriteFriends[0][v7].m_indexInOriginalList = -1;
  v8 = 16 * v2 + 4;
  this->m_favoriteFriends[0][v8].m_friendType = NONE;
  this->m_favoriteFriends[0][v8].m_indexInOriginalList = -1;
  v9 = 16 * v2 + 5;
  this->m_favoriteFriends[0][v9].m_friendType = NONE;
  this->m_favoriteFriends[0][v9].m_indexInOriginalList = -1;
  v10 = 16 * v2 + 6;
  this->m_favoriteFriends[0][v10].m_friendType = NONE;
  this->m_favoriteFriends[0][v10].m_indexInOriginalList = -1;
  v11 = 16 * v2 + 7;
  this->m_favoriteFriends[0][v11].m_friendType = NONE;
  this->m_favoriteFriends[0][v11].m_indexInOriginalList = -1;
  v12 = 16 * v2 + 8;
  this->m_favoriteFriends[0][v12].m_friendType = NONE;
  this->m_favoriteFriends[0][v12].m_indexInOriginalList = -1;
  v13 = 16 * v2 + 9;
  this->m_favoriteFriends[0][v13].m_friendType = NONE;
  this->m_favoriteFriends[0][v13].m_indexInOriginalList = -1;
  v14 = 16 * v2 + 10;
  this->m_favoriteFriends[0][v14].m_friendType = NONE;
  this->m_favoriteFriends[0][v14].m_indexInOriginalList = -1;
  v15 = 16 * v2 + 11;
  this->m_favoriteFriends[0][v15].m_friendType = NONE;
  this->m_favoriteFriends[0][v15].m_indexInOriginalList = -1;
  v16 = 16 * v2 + 12;
  this->m_favoriteFriends[0][v16].m_friendType = NONE;
  this->m_favoriteFriends[0][v16].m_indexInOriginalList = -1;
  v17 = 16 * v2 + 13;
  this->m_favoriteFriends[0][v17].m_friendType = NONE;
  this->m_favoriteFriends[0][v17].m_indexInOriginalList = -1;
  v18 = 16 * v2 + 14;
  this->m_favoriteFriends[0][v18].m_friendType = NONE;
  this->m_favoriteFriends[0][v18].m_indexInOriginalList = -1;
  v19 = 16 * v2 + 15;
  this->m_favoriteFriends[0][v19].m_friendType = NONE;
  this->m_favoriteFriends[0][v19].m_indexInOriginalList = -1;
}

/*
==============
Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData
==============
*/
void Online_Friends::FavoriteFriends_UpdateLocalCacheFromPlayerData(Online_Friends *this, const int controllerIndex)
{
  __int64 v2; 
  XUID *v3; 
  __int64 v4; 
  FavoriteFriend *v5; 
  __int64 v6; 
  __int64 v7; 
  int *p_m_indexInOriginalList; 
  unsigned int v9; 
  __int64 v10; 
  const XUID *v11; 
  Online_Friends *v12; 
  FavoriteFriendType *p_m_friendType; 
  __int64 v14; 
  unsigned __int64 v15; 
  int UserIndexFromXuid; 
  __int64 v17; 
  unsigned __int64 v18; 
  FavoriteFriendType v19; 
  unsigned __int64 v20; 
  char *v21; 
  unsigned __int64 m_id; 
  _DWORD *v23; 
  const XUID *v24; 
  char *v25; 
  FavoriteFriend *v26; 
  __int64 v27; 
  __m256i v28; 
  FavoriteFriend v29; 
  char *fmt; 
  XUID result; 
  Online_Friends *v32; 
  XUID v33; 
  XUID favoriteFriendXUIDs[16]; 
  FavoriteFriend v35[16]; 

  v2 = controllerIndex;
  v33.m_id = 16i64;
  v3 = favoriteFriendXUIDs;
  v4 = 16i64;
  v32 = this;
  do
  {
    XUID::XUID(v3++);
    --v4;
  }
  while ( v4 );
  if ( (unsigned int)v2 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1068, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v2, 8) )
    __debugbreak();
  Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData called for controller %d\n", (unsigned int)v2);
  if ( Online_PlayerData_GetFavoriteFriends(v2, favoriteFriendXUIDs) )
  {
    v5 = v35;
    v6 = 16i64;
    do
    {
      FavoriteFriend::FavoriteFriend(v5++);
      --v6;
    }
    while ( v6 );
    v7 = 0i64;
    p_m_indexInOriginalList = &v35[0].m_indexInOriginalList;
    v9 = 0;
    v10 = 16i64;
    do
    {
      v11 = XUID::NullXUID(&result);
      XUID::operator=((XUID *)(p_m_indexInOriginalList - 3), v11);
      *(p_m_indexInOriginalList - 1) = 0;
      *p_m_indexInOriginalList = -1;
      p_m_indexInOriginalList += 4;
      --v10;
    }
    while ( v10 );
    v12 = v32;
    p_m_friendType = &v35[0].m_friendType;
    v14 = v2;
    do
    {
      result.m_id = favoriteFriendXUIDs[v7].m_id;
      if ( XUID::IsValid(&result) )
      {
        XUID::operator=(&v35[v9].m_xuid, &result);
        v15 = XUID::ToUint64(&result);
        Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Adding xuid in player data %llu at index %d in temp list\n", v15, v9);
        UserIndexFromXuid = Online_Friends::FavoriteFriends_GetUserIndexFromXuid(v12, v2, result);
        if ( UserIndexFromXuid >= 0 )
        {
          v17 = (__int64)&v12->m_favoriteFriends[v14][UserIndexFromXuid];
          XUID::operator=((XUID *)p_m_friendType - 1, (const XUID *)v17);
          *p_m_friendType = *(FavoriteFriendType *)(v17 + 8);
          p_m_friendType[1] = *(FavoriteFriendType *)(v17 + 12);
          v18 = XUID::ToUint64(&result);
          Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Found xuid %llu in cache\n", v18);
          SLODWORD(v17) = p_m_friendType[1];
          v19 = *p_m_friendType;
          v20 = XUID::ToUint64((XUID *)p_m_friendType - 1);
          LODWORD(fmt) = v17;
          Com_Printf(25, "XUID: %llu, friendType %d, indexInOriginalList %d\n", v20, (unsigned int)v19, fmt);
          v14 = v2;
        }
        ++v9;
        p_m_friendType += 4;
      }
      ++v7;
    }
    while ( v7 < 16 );
    Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData: Found %d users in player data\n", v9);
    v21 = (char *)v12 + 256 * v14;
    m_id = v33.m_id;
    v23 = v21 + 1179796;
    do
    {
      v24 = XUID::NullXUID(&v33);
      XUID::operator=((XUID *)(v23 - 3), v24);
      *(v23 - 1) = 0;
      *v23 = -1;
      v23 += 4;
      --m_id;
    }
    while ( m_id );
    v25 = v21 + 1179784;
    v26 = v35;
    v27 = 2i64;
    do
    {
      v25 += 128;
      v28 = *(__m256i *)&v26->m_xuid.m_id;
      v29 = v26[7];
      v26 += 8;
      *((__m256i *)v25 - 4) = v28;
      *((__m256i *)v25 - 3) = *(__m256i *)&v26[-6].m_xuid.m_id;
      *((__m256i *)v25 - 2) = *(__m256i *)&v26[-4].m_xuid.m_id;
      *((FavoriteFriend *)v25 - 2) = v26[-2];
      *((FavoriteFriend *)v25 - 1) = v29;
      --v27;
    }
    while ( v27 );
    v32->m_favoriteFriendCountTotal[v14] = v9;
    Com_Printf(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData Found %d users\n", v9);
  }
  else
  {
    Com_PrintWarning(25, "FavoriteFriends_UpdateLocalCacheFromPlayerData, could not read player data\n");
  }
}

/*
==============
Online_Friends::FeederSelection
==============
*/
void Online_Friends::FeederSelection(Online_Friends *this, const int localControllerIndex, const int index)
{
  __int64 v3; 
  __int64 ClientFromController; 
  FriendListGlobal *v7; 

  v3 = index;
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 341, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v7 = &this->m_friendClientListGlobal[ClientFromController];
  if ( (int)v3 >= 0 && (unsigned int)v3 < this->m_friendClientListGlobal[ClientFromController].count )
  {
    v7->actualIndex = v3;
    this->m_friendClientListGlobal[ClientFromController].currentIndex = v3;
    XUID::operator=(&this->m_friendClientListGlobal[ClientFromController].currentFriend, &v7->friends[v7->sortedFriends[v3]]);
  }
}

/*
==============
Online_Friends::FeederStoreXUID
==============
*/
void Online_Friends::FeederStoreXUID(Online_Friends *this, const int localControllerIndex)
{
  char *v4; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 

  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 383, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( Online_Friends::IsConnected(this, localControllerIndex) )
  {
    v4 = (char *)this + 48072 * CL_Mgr_GetClientFromController(localControllerIndex);
    if ( *((_DWORD *)v4 + 24) )
    {
      v5 = *((_DWORD *)v4 + 24);
      if ( Online_Friends::FindIndex(this, localControllerIndex, *(XUID *)(v4 + 80)) >= v5 )
      {
        v7 = v5;
        LODWORD(v6) = Online_Friends::FindIndex(this, localControllerIndex, *(XUID *)(v4 + 80));
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 396, ASSERT_TYPE_ASSERT, "(unsigned)( FindIndex( localControllerIndex, fl->currentFriend ) ) < (unsigned)( fl->count )", "FindIndex( localControllerIndex, fl->currentFriend ) doesn't index fl->count\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      XUID::operator=((XUID *)v4 + 11, (const XUID *)v4 + 10);
    }
  }
}

/*
==============
Online_Friends::FindIndex
==============
*/
__int64 Online_Friends::FindIndex(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  __int64 ClientFromController; 
  unsigned int v6; 
  signed int count; 
  __int64 v8; 
  XUID xuid; 

  xuid.m_id = friendId.m_id;
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 465, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( !XUID::IsValid(&xuid) )
    return 0xFFFFFFFFi64;
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v6 = 0;
  count = this->m_friendClientListGlobal[ClientFromController].count;
  if ( count <= 0 )
    return 0xFFFFFFFFi64;
  v8 = ClientFromController;
  while ( !XUID::operator==(&this->m_friendClientListGlobal[v8].friends[v6], &xuid) )
  {
    if ( (int)++v6 >= count )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

/*
==============
Online_Friends::FindIndexByPlatformId
==============
*/
__int64 Online_Friends::FindIndexByPlatformId(Online_Friends *this, const int localControllerIndex, unsigned __int64 platformId)
{
  unsigned int v6; 
  __int64 ClientFromController; 
  __int64 count; 
  __int64 v9; 
  unsigned __int64 *i; 

  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 489, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( !platformId )
    return 0xFFFFFFFFi64;
  v6 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  count = (int)this->m_friendClientListGlobal[ClientFromController].count;
  if ( count <= 0 )
    return 0xFFFFFFFFi64;
  v9 = 0i64;
  for ( i = this->m_friendClientListGlobal[ClientFromController].friendPlatformIds; *i != platformId; ++i )
  {
    ++v6;
    if ( ++v9 >= count )
      return 0xFFFFFFFFi64;
  }
  return v6;
}

/*
==============
Online_Friends::FriendResolverComplete
==============
*/
void Online_Friends::FriendResolverComplete(Online_Friends *this, GenericTask *task, eTaskManagerTaskState taskState)
{
  unsigned int m_controllerIndex; 
  LocalClientNum_t ClientFromController; 
  const unsigned __int64 *m_appData; 
  FriendListGlobal *v9; 
  unsigned int i; 
  int IndexByPlatformId; 
  __int64 v12; 
  XUID v13; 
  OnlinePresenceNotifications *Instance; 
  int v15; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode ErrorCode; 
  unsigned __int64 TransactionID; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  XUID xuid; 

  m_controllerIndex = task->m_controllerIndex;
  if ( m_controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 928, ASSERT_TYPE_SANITY, "( IsControllerValid( controllerIndex ) )", (const char *)&queryFormat, "IsControllerValid( controllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(m_controllerIndex);
  m_appData = (const unsigned __int64 *)task->m_appData;
  v9 = &this->m_friendClientListGlobal[ClientFromController];
  if ( taskState )
  {
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    if ( m_ptr )
    {
      ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(25, "Failed to resolve friend platform ids, transactionid(%zu), errorCode(%u).\n", TransactionID, (unsigned int)ErrorCode);
    }
    if ( *(_DWORD *)m_appData )
      Online_Friends::ClearResolveStateFromFailedResolves(this, m_controllerIndex, m_appData + 1, *(_DWORD *)m_appData);
    v19 = Sys_Milliseconds();
    Online_Backoff::ReportFailure(&this->m_friendResolverBackoff, v19);
  }
  else
  {
    if ( *((_DWORD *)m_appData + 402) != *(_DWORD *)m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 935, ASSERT_TYPE_SANITY, "( resolver->XuidCount() == resolver->PlatformIdCount() )", (const char *)&queryFormat, "resolver->XuidCount() == resolver->PlatformIdCount()") )
      __debugbreak();
    Com_Printf(25, "Friend Resolver Complete, resolved %u user ids.\n", *((unsigned int *)m_appData + 402));
    for ( i = 0; i < *((_DWORD *)m_appData + 402); ++i )
    {
      if ( i >= *(_DWORD *)m_appData )
      {
        LODWORD(v21) = *(_DWORD *)m_appData;
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numPlatformIds )", "index doesn't index m_numPlatformIds\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      IndexByPlatformId = Online_Friends::FindIndexByPlatformId(this, m_controllerIndex, m_appData[(int)i + 1]);
      v12 = IndexByPlatformId;
      if ( IndexByPlatformId != -1 )
      {
        if ( i >= *((_DWORD *)m_appData + 402) )
        {
          LODWORD(v21) = *((_DWORD *)m_appData + 402);
          LODWORD(v20) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numXuids )", "index doesn't index m_numXuids\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        xuid.m_id = m_appData[(int)i + 202];
        XUID::operator=(&v9->friends[v12], &xuid);
        v9->userIdResolveState[v12] = USERID_RESOLVED;
      }
      if ( i >= *((_DWORD *)m_appData + 402) )
      {
        LODWORD(v21) = *((_DWORD *)m_appData + 402);
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numXuids )", "index doesn't index m_numXuids\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v13.m_id = m_appData[(int)i + 202];
      if ( i >= *(_DWORD *)m_appData )
      {
        LODWORD(v21) = *(_DWORD *)m_appData;
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numPlatformIds )", "index doesn't index m_numPlatformIds\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      Online_Friends::UserIdResolved(this, m_controllerIndex, m_appData[(int)i + 1], v13);
      Instance = OnlinePresenceNotifications::GetInstance();
      if ( i >= *((_DWORD *)m_appData + 402) )
      {
        LODWORD(v21) = *((_DWORD *)m_appData + 402);
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 136, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( m_numXuids )", "index doesn't index m_numXuids\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      OnlinePresenceNotifications::SubscribeToUser(Instance, m_controllerIndex, (const XUID)m_appData[(int)i + 202], PlatformFriend);
    }
    v15 = Sys_Milliseconds();
    Online_Backoff::ReportSuccess(&this->m_friendResolverBackoff, v15);
  }
  *((_DWORD *)m_appData + 402) = 0;
  *(_DWORD *)m_appData = 0;
  *((_DWORD *)m_appData + 804) = 0;
}

/*
==============
Online_Friends::GetCurrentIndexName
==============
*/
char *Online_Friends::GetCurrentIndexName(Online_Friends *this, const int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Online_Friends::GetGamertag(this, controllerIndex, this->m_friendClientListGlobal[ClientFromController].currentIndex, this->m_friendFeederName, 0x24ui64);
  return this->m_friendFeederName;
}

/*
==============
Online_Friends::GetCurrentIndexXUID
==============
*/
XUID *Online_Friends::GetCurrentIndexXUID(Online_Friends *this, XUID *result, const int controllerIndex)
{
  FriendListGlobal *v4; 

  v4 = &this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)];
  result->m_id = (unsigned __int64)v4->friends[v4->sortedFriends[v4->currentIndex]];
  return result;
}

/*
==============
Online_Friends::GetFriendList
==============
*/
friendList_t *Online_Friends::GetFriendList(Online_Friends *this, const int localControllerIndex)
{
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 541, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  return this->m_friendClientLists[CL_Mgr_GetClientFromController(localControllerIndex)];
}

/*
==============
Online_Friends::GetFriends
==============
*/
FriendListGlobal *Online_Friends::GetFriends(Online_Friends *this, const int localControllerIndex)
{
  return &this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)];
}

/*
==============
Online_Friends::GetInstance
==============
*/
Online_Friends *Online_Friends::GetInstance()
{
  return &Online_Friends::s_instance;
}

/*
==============
Online_Friends::GetInstancePtr
==============
*/
Online_Friends *Online_Friends::GetInstancePtr()
{
  return &Online_Friends::s_instance;
}

/*
==============
Online_Friends::GetNumFriends
==============
*/
__int64 Online_Friends::GetNumFriends(Online_Friends *this, const int localControllerIndex)
{
  return this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].count;
}

/*
==============
Online_Friends::GetNumOnlineFriends
==============
*/
__int64 Online_Friends::GetNumOnlineFriends(Online_Friends *this, const int localControllerIndex)
{
  unsigned int v4; 
  char *v5; 
  __int64 v6; 
  _DWORD *v7; 

  v4 = 0;
  if ( Live_IsUserSignedIn(localControllerIndex) )
  {
    v5 = (char *)this + 48072 * CL_Mgr_GetClientFromController(localControllerIndex);
    v6 = *((unsigned int *)v5 + 24);
    if ( (_DWORD)v6 )
    {
      v7 = v5 + 19304;
      do
      {
        if ( (unsigned int)(*v7 - 5) <= 3 )
          ++v4;
        ++v7;
        --v6;
      }
      while ( v6 );
    }
  }
  return v4;
}

/*
==============
Online_Friends::GetOwningPlatformId
==============
*/
unsigned __int64 Online_Friends::GetOwningPlatformId(Online_Friends *this, const int controllerIndex)
{
  return this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].owningPlatformId;
}

/*
==============
Online_Friends::GetPlatformUserId
==============
*/
unsigned __int64 Online_Friends::GetPlatformUserId(Online_Friends *this, const int localControllerIndex, const unsigned int friendIndex)
{
  __int64 v3; 
  FriendListGlobal *v4; 
  int v6; 
  unsigned int count; 

  v3 = friendIndex;
  v4 = &this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)];
  if ( (unsigned int)v3 >= v4->count )
  {
    count = v4->count;
    v6 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( fl->count )", "friendIndex doesn't index fl->count\n\t%i not in [0, %i)", v6, count) )
      __debugbreak();
  }
  return v4->friendPlatformIds[v3];
}

/*
==============
Online_Friends::GetSortedFriendByIndex
==============
*/
__int64 Online_Friends::GetSortedFriendByIndex(Online_Friends *this, const int localControllerIndex, int sortedIndex)
{
  __int64 v3; 
  __int64 ClientFromController; 
  signed int count; 
  bool v8; 
  __int64 v10; 
  unsigned int v11; 

  v3 = sortedIndex;
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 582, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  count = this->m_friendClientListGlobal[ClientFromController].count;
  v8 = (int)v3 < count;
  if ( (unsigned int)v3 >= count )
  {
    v11 = this->m_friendClientListGlobal[ClientFromController].count;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 587, ASSERT_TYPE_ASSERT, "(unsigned)( sortedIndex ) < (unsigned)( friendCount )", "sortedIndex doesn't index friendCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
    v8 = (int)v3 < count;
  }
  if ( v8 )
    return (unsigned int)this->m_friendClientListGlobal[ClientFromController].sortedFriends[v3];
  else
    return 0xFFFFFFFFi64;
}

/*
==============
Online_Friends::GetStatus
==============
*/
__int64 Online_Friends::GetStatus(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  __int64 v3; 
  __int64 ClientFromController; 
  __int64 v8; 
  unsigned int count; 

  v3 = friendIndex;
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 529, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  if ( (unsigned int)v3 >= this->m_friendClientListGlobal[ClientFromController].count )
  {
    count = this->m_friendClientListGlobal[ClientFromController].count;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( m_friendClientListGlobal[localClientNum].count )", "friendIndex doesn't index m_friendClientListGlobal[localClientNum].count\n\t%i not in [0, %i)", v8, count) )
      __debugbreak();
  }
  return (unsigned int)this->m_friendClientListGlobal[ClientFromController].status[v3];
}

/*
==============
Online_Friends::GetUserId
==============
*/
XUID *Online_Friends::GetUserId(Online_Friends *this, XUID *result, const int localControllerIndex, const unsigned int friendIndex)
{
  __int64 v4; 
  FriendListGlobal *v6; 
  XUID *v7; 
  int v8; 
  unsigned int count; 

  v4 = friendIndex;
  v6 = &this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)];
  if ( (unsigned int)v4 >= v6->count )
  {
    count = v6->count;
    v8 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 602, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( fl->count )", "friendIndex doesn't index fl->count\n\t%i not in [0, %i)", v8, count) )
      __debugbreak();
  }
  v7 = result;
  result->m_id = (unsigned __int64)v6->friends[v4];
  return v7;
}

/*
==============
Online_Friends::GetUserIdResolver
==============
*/
UserIdResolver<200> *Online_Friends::GetUserIdResolver(Online_Friends *this)
{
  __int64 v1; 
  UserIdResolver<200> *result; 
  int v3; 
  int v4; 

  v1 = 0i64;
  result = this->m_friendResolver;
  v3 = 0;
  v4 = -1;
  while ( 1 )
  {
    if ( !result->m_taskId )
    {
      v4 = v3;
      if ( result->m_numPlatformIds || result->m_numXuids )
        break;
    }
    ++v3;
    ++result;
    if ( v3 >= 1 )
    {
      if ( v4 >= 0 )
        return &this->m_friendResolver[v4];
      return (UserIdResolver<200> *)v1;
    }
  }
  return result;
}

/*
==============
Online_Friends::HandleCrossplayResolving
==============
*/
void Online_Friends::HandleCrossplayResolving(Online_Friends *this)
{
  int v2; 
  int v3; 
  int i; 
  int ControllerFromClient; 

  v2 = Sys_Milliseconds();
  v3 = Sys_Milliseconds();
  if ( Online_Backoff::CanProceed(&this->m_friendResolverBackoff, v3) && v2 >= this->m_nextFriendResolveBatchTime )
  {
    for ( i = 0; i < 2; ++i )
    {
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      {
        ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
        if ( Live_IsUserSignedInToDemonware(ControllerFromClient) )
          Online_Friends::HandleUserIdResolving(this, (const LocalClientNum_t)i);
      }
    }
  }
}

/*
==============
Online_Friends::HandleUserIdResolving
==============
*/
void Online_Friends::HandleUserIdResolving(Online_Friends *this, const LocalClientNum_t clientNum)
{
  LocalClientNum_t v2; 
  UserIdResolver<200> *m_friendResolver; 
  Online_Friends *v4; 
  int v5; 
  FriendListGlobal *v6; 
  int v7; 
  unsigned int v8; 
  __int64 v9; 
  bool DoesAllListsExist; 
  bool v11; 
  Online_MetPlayer *Instance; 
  int ControllerFromClient; 
  __int64 v14; 

  v2 = clientNum;
  m_friendResolver = this->m_friendResolver;
  v4 = this;
  v5 = 0;
  v6 = &this->m_friendClientListGlobal[clientNum];
  v7 = -1;
  while ( 1 )
  {
    if ( !m_friendResolver->m_taskId )
    {
      v7 = v5;
      if ( m_friendResolver->m_numPlatformIds || m_friendResolver->m_numXuids )
        break;
    }
    ++v5;
    ++m_friendResolver;
    if ( v5 >= 1 )
    {
      if ( v7 < 0 )
        m_friendResolver = NULL;
      else
        m_friendResolver = &this->m_friendResolver[v7];
      break;
    }
  }
  if ( this->m_friendClientListGlobal[clientNum].checkResolve && m_friendResolver )
  {
    v8 = 0;
    if ( this->m_friendClientListGlobal[clientNum].count )
    {
      do
      {
        if ( UserIdResolver<200>::IsFull(m_friendResolver) )
          break;
        if ( v6->userIdResolveState[v8] == USERID_NOT_RESOLVED )
        {
          if ( m_friendResolver->m_numPlatformIds >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 82, ASSERT_TYPE_SANITY, "( m_numPlatformIds < MAX_REQUESTS )", (const char *)&queryFormat, "m_numPlatformIds < MAX_REQUESTS") )
            __debugbreak();
          if ( m_friendResolver->m_numXuids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 83, ASSERT_TYPE_SANITY, "(m_numXuids == 0)", "%s\n\t\"Trying to mix xuids and platformIds in one Resolver Task Data, the DW code won't know how to handle this.\"", "m_numXuids == 0") )
            __debugbreak();
          if ( m_friendResolver->m_taskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_userid_resolver.cpp", 84, ASSERT_TYPE_SANITY, "( !IsBusy() )", (const char *)&queryFormat, "!IsBusy()") )
            __debugbreak();
          m_friendResolver->m_platformIds[m_friendResolver->m_numPlatformIds++] = v6->friendPlatformIds[v8];
          v6->userIdResolveState[v8] = USERID_RESOLVING;
        }
        ++v8;
      }
      while ( v8 < v6->count );
      v4 = this;
      v2 = clientNum;
    }
    if ( m_friendResolver->m_numPlatformIds || m_friendResolver->m_numXuids )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(v2);
      Com_Printf(25, "Friend Resolver Sending request with %u platformIds.\n", m_friendResolver->m_numPlatformIds);
      if ( !UserIdResolver<200>::Send(m_friendResolver, ControllerFromClient, StaticFriendResolverComplete) )
      {
        if ( m_friendResolver->m_numPlatformIds )
          Online_Friends::ClearResolveStateFromFailedResolves(v4, ControllerFromClient, m_friendResolver->m_platformIds, m_friendResolver->m_numPlatformIds);
        m_friendResolver->m_numXuids = 0;
        m_friendResolver->m_numPlatformIds = 0;
        m_friendResolver->m_taskId = 0;
      }
    }
    else
    {
      v6->checkResolve = 0;
      v9 = CL_Mgr_GetControllerFromClient(v2);
      if ( Online_Friends::FavoriteFriends_IsEnabled(v4) )
      {
        Com_Printf(25, "Friend Resolver complete.\n");
        if ( (unsigned int)v9 >= 8 )
        {
          LODWORD(v14) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 1333, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v14, 8) )
            __debugbreak();
        }
        Com_Printf(25, "FavoriteFriends_SetPlatformFriendsListExists called for controller %d\n", (unsigned int)v9);
        DoesAllListsExist = Online_Friends::FavoriteFriends_DoesAllListsExist(v4, v9);
        v4->m_favoriteFriendPlatformFriendsListExistenceStatus[v9] = EXISTS;
        v11 = DoesAllListsExist;
        if ( Online_Friends::FavoriteFriends_DoesAllListsExist(v4, v9) && !v11 )
          Online_Friends::FavoriteFriends_SetTryLinkingUsersWithOriginalList(v4, v9);
      }
      Online_Friends::Crossplay_UpdateIfAnyCrossplayFriendIsAlsoPlatformFriend(v4, v9);
      Instance = Online_MetPlayer::GetInstance();
      Online_MetPlayer::RemoveFriends(Instance, v9);
    }
  }
}

/*
==============
Online_Friends::HandleUsernameResolving
==============
*/
void Online_Friends::HandleUsernameResolving(Online_Friends *this, const LocalClientNum_t clientNum)
{
  ;
}

/*
==============
Online_Friends::IsAlreadyConnected
==============
*/
bool Online_Friends::IsAlreadyConnected(Online_Friends *this, const int localControllerIndex, const int friendIndex)
{
  __int64 v4; 
  const PartyData *GameParty; 
  XUID player; 
  XUID xuid; 

  v4 = friendIndex;
  XUID::XUID(&player);
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 642, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  xuid.m_id = this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].friends[v4].m_id;
  XUID::operator=(&player, &xuid);
  if ( Party_InParty(&g_partyData) )
  {
    if ( !g_partyData.session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 665, ASSERT_TYPE_ASSERT, "(g_partyData.session)", (const char *)&queryFormat, "g_partyData.session") )
      __debugbreak();
    if ( Party_FindMemberByXUID(&g_partyData, player) >= 0 )
      return 1;
  }
  GameParty = Live_GetGameParty();
  return Party_FindMemberByXUID(GameParty, player) >= 0;
}

/*
==============
Online_Friends::IsFriendByID
==============
*/
bool Online_Friends::IsFriendByID(Online_Friends *this, const int localControllerIndex, XUID friendId)
{
  int Index; 

  Index = Online_Friends::FindIndex(this, localControllerIndex, friendId);
  return Index != -1 && Online_Friends::GetStatus(this, localControllerIndex, Index) >= FRIEND_STATUS_OFFLINE;
}

/*
==============
Online_Friends::IsPlatformFriendInvitable
==============
*/
char Online_Friends::IsPlatformFriendInvitable(Online_Friends *this, const int localControllerIndex, unsigned __int64 friendplatformId, const char **errorString, const char **devErrorString)
{
  __int64 ClientFromController; 
  unsigned int IndexByPlatformId; 
  __int64 v12; 

  if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 181, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
    __debugbreak();
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 183, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( !Live_HasOnlineServicesAndRequirementsToInvite(localControllerIndex, errorString, devErrorString, 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 184, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToInvite( localControllerIndex, errorString, devErrorString, true ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToInvite( localControllerIndex, errorString, devErrorString, true )") )
    __debugbreak();
  if ( !Live_IsInGamemodeToInvite(errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 185, ASSERT_TYPE_ASSERT, "(Live_IsInGamemodeToInvite( errorString, devErrorString ))", (const char *)&queryFormat, "Live_IsInGamemodeToInvite( errorString, devErrorString )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  if ( friendplatformId )
  {
    IndexByPlatformId = Online_Friends::FindIndexByPlatformId(this, localControllerIndex, friendplatformId);
    if ( IndexByPlatformId == -1 )
    {
      *errorString = "ONLINE/INVALID_FRIEND_INDEX";
      return 0;
    }
    else
    {
      if ( IndexByPlatformId >= this->m_friendClientListGlobal[ClientFromController].count )
      {
        LODWORD(v12) = IndexByPlatformId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 203, ASSERT_TYPE_ASSERT, "(unsigned)( friendIndex ) < (unsigned)( fl->count )", "friendIndex doesn't index fl->count\n\t%i not in [0, %i)", v12, this->m_friendClientListGlobal[ClientFromController].count) )
          __debugbreak();
      }
      if ( Online_Friends::GetStatus(this, localControllerIndex, IndexByPlatformId) == FRIEND_STATUS_OFFLINE )
      {
        *errorString = "MENU/FRIEND_OFFLINE";
        return 0;
      }
      else
      {
        return 1;
      }
    }
  }
  else
  {
    *errorString = "ONLINE/CANT_INVITE_NO_PRESENCE";
    return 0;
  }
}

/*
==============
Online_Friends::IsPlatformFriendJoinable
==============
*/
bool Online_Friends::IsPlatformFriendJoinable(Online_Friends *this, const int localControllerIndex, const XUID xuid, unsigned __int64 friendPlatformId, bool shouldCheckDWPresence, const char **errorString, const char **devErrorString)
{
  int IndexByPlatformId; 
  int v12; 
  const char *v13; 
  FriendStatus Status; 

  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 227, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( !Live_HasOnlineServicesAndRequirementsToJoin(localControllerIndex, errorString, devErrorString) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 228, ASSERT_TYPE_ASSERT, "(Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString ))", (const char *)&queryFormat, "Live_HasOnlineServicesAndRequirementsToJoin( localControllerIndex, errorString, devErrorString )") )
    __debugbreak();
  if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 230, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
    __debugbreak();
  if ( !friendPlatformId )
    goto LABEL_24;
  IndexByPlatformId = Online_Friends::FindIndexByPlatformId(this, localControllerIndex, friendPlatformId);
  v12 = IndexByPlatformId;
  if ( IndexByPlatformId != -1 )
  {
    Status = Online_Friends::GetStatus(this, localControllerIndex, IndexByPlatformId);
    if ( Status == FRIEND_STATUS_REQUEST_PENDING )
    {
      v13 = "MENU/FRIEND_STILL_PENDING";
      goto LABEL_25;
    }
    if ( Status == FRIEND_STATUS_REQUEST_RECEIVED )
    {
      v13 = "MENU/FRIEND_NOT_CONFIRMED";
      goto LABEL_25;
    }
    if ( shouldCheckDWPresence )
      return Social_IsUserJoinable(localControllerIndex, xuid, 1, errorString, devErrorString);
    if ( Status == FRIEND_STATUS_PRESENT )
      return Online_Friends::GetIsSameTitleID(this, localControllerIndex, v12, errorString) && Online_Friends::GetIsSessionValid(this, localControllerIndex, v12, errorString);
LABEL_24:
    v13 = "LUA_MENU/FRIEND_NOT_IN_GAME";
    goto LABEL_25;
  }
  v13 = "ONLINE/INVALID_FRIEND_INDEX";
LABEL_25:
  *errorString = v13;
  return 0;
}

/*
==============
Online_Friends::MarkForUpdate
==============
*/
void Online_Friends::MarkForUpdate(Online_Friends *this, const int localControllerIndex)
{
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 573, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(localControllerIndex)].dirty = 1;
}

/*
==============
Online_Friends::Online_Friends_PublisherVariablesFetched
==============
*/
void Online_Friends::Online_Friends_PublisherVariablesFetched(Online_Friends *this)
{
  const dvar_t *v1; 
  Online_Backoff *p_m_friendResolverBackoff; 
  const dvar_t *v3; 
  const dvar_t *v4; 

  v1 = DVARINT_friend_xuid_resolve_backoff_ms;
  p_m_friendResolverBackoff = &this->m_friendResolverBackoff;
  if ( !DVARINT_friend_xuid_resolve_backoff_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_backoff_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  Online_Backoff::UpdateFailureDelay(p_m_friendResolverBackoff, v1->current.integer);
  v3 = DVARBOOL_friend_xuid_resolve_kill_fail;
  if ( !DVARBOOL_friend_xuid_resolve_kill_fail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_kill_fail") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  Online_Backoff::UpdateStopAtMax(p_m_friendResolverBackoff, v3->current.enabled);
  v4 = DVARINT_friend_xuid_resolve_success_delay_ms;
  if ( !DVARINT_friend_xuid_resolve_success_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_success_delay_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  Online_Backoff::UpdateSuccessDelay(p_m_friendResolverBackoff, v4->current.integer);
}

/*
==============
Online_Friends::ResetUser
==============
*/
void Online_Friends::ResetUser(Online_Friends *this, const int localControllerIndex)
{
  char *v4; 
  void *v5; 
  FriendListGlobal *v6; 
  LocalClientNum_t outLocalClientNum; 

  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 550, ASSERT_TYPE_ASSERT, "(IsControllerValid( localControllerIndex ))", (const char *)&queryFormat, "IsControllerValid( localControllerIndex )") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) )
  {
    v4 = (char *)this + 537616 * outLocalClientNum;
    v5 = v4 + 96248;
    v6 = &this->m_friendClientListGlobal[outLocalClientNum];
    memset_0(v4 + 365056, 0, 0x41A08ui64);
    memset_0(v5, 0, 0x41A08ui64);
    memset_0(v6, 0, sizeof(FriendListGlobal));
  }
}

/*
==============
Online_Friends::SetOwningPlatformId
==============
*/
void Online_Friends::SetOwningPlatformId(Online_Friends *this, const int controllerIndex, const unsigned __int64 platformId)
{
  this->m_friendClientListGlobal[CL_Mgr_GetClientFromController(controllerIndex)].owningPlatformId = platformId;
}

/*
==============
Online_Friends::ShowErrorMessage
==============
*/
void Online_Friends::ShowErrorMessage(Online_Friends *this, const char *message)
{
  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_friends.cpp", 450, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  Com_SetErrorMessage(message);
  if ( !CL_Keys_IsCatcherActive(LOCAL_CLIENT_0, 64) )
    CL_Keys_AddCatcher(LOCAL_CLIENT_0, 64);
}

/*
==============
StaticFriendResolverComplete
==============
*/
void StaticFriendResolverComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_Friends::FriendResolverComplete(&Online_Friends::s_instance, task, taskState);
}

/*
==============
StaticPublisherVariablesFetched
==============
*/
void StaticPublisherVariablesFetched()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 

  v0 = DVARINT_friend_xuid_resolve_backoff_ms;
  if ( !DVARINT_friend_xuid_resolve_backoff_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_backoff_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  Online_Backoff::UpdateFailureDelay(&Online_Friends::s_instance.m_friendResolverBackoff, v0->current.integer);
  v1 = DVARBOOL_friend_xuid_resolve_kill_fail;
  if ( !DVARBOOL_friend_xuid_resolve_kill_fail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_kill_fail") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  Online_Backoff::UpdateStopAtMax(&Online_Friends::s_instance.m_friendResolverBackoff, v1->current.enabled);
  v2 = DVARINT_friend_xuid_resolve_success_delay_ms;
  if ( !DVARINT_friend_xuid_resolve_success_delay_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "friend_xuid_resolve_success_delay_ms") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  Online_Backoff::UpdateSuccessDelay(&Online_Friends::s_instance.m_friendResolverBackoff, v2->current.integer);
}

