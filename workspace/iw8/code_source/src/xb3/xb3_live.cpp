/*
==============
Live_CheckNotifications_SignInChanged
==============
*/

void __fastcall Live_CheckNotifications_SignInChanged(LocalClientNum_t localClientNum, const int userIndexTriggered, int controllerIndexTriggered, bool fakeSignoutForUser)
{
  ?Live_CheckNotifications_SignInChanged@@YAXW4LocalClientNum_t@@HH_N@Z(localClientNum, userIndexTriggered, controllerIndexTriggered, fakeSignoutForUser);
}

/*
==============
Live_OnSuspendResume_RefreshCachedObjects
==============
*/

void Live_OnSuspendResume_RefreshCachedObjects(void)
{
  ?Live_OnSuspendResume_RefreshCachedObjects@@YAXXZ();
}

/*
==============
Live_SetLocalClientPlatformUserName
==============
*/

void __fastcall Live_SetLocalClientPlatformUserName(const int controllerIndex, const char *userName)
{
  ?Live_SetLocalClientPlatformUserName@@YAXHPEBD@Z(controllerIndex, userName);
}

/*
==============
XB3NotificationHandler::InitializeUsers
==============
*/

void __fastcall XB3NotificationHandler::InitializeUsers(XB3NotificationHandler *this)
{
  ?InitializeUsers@XB3NotificationHandler@@QE$AAAXXZ(this);
}

/*
==============
Live_GetNetworkConnectivityLevel
==============
*/

Windows::Networking::Connectivity::NetworkConnectivityLevel __fastcall Live_GetNetworkConnectivityLevel()
{
  return ?Live_GetNetworkConnectivityLevel@@YA?AW4NetworkConnectivityLevel@Connectivity@Networking@Windows@@XZ();
}

/*
==============
Live_DCacheInitialize
==============
*/

void Live_DCacheInitialize(void)
{
  ?Live_DCacheInitialize@@YAXXZ();
}

/*
==============
Live_IsUserSignedInToLive
==============
*/

bool __fastcall Live_IsUserSignedInToLive(const int controllerIndex)
{
  return ?Live_IsUserSignedInToLive@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_AreWeAcceptingInvite
==============
*/

bool __fastcall Live_AreWeAcceptingInvite()
{
  return ?Live_AreWeAcceptingInvite@@YA_NXZ();
}

/*
==============
Live_IsWaitingForOnlineServices
==============
*/

int __fastcall Live_IsWaitingForOnlineServices(const int controllerIndex, WaitingForOnlineServicesReason *reason)
{
  return ?Live_IsWaitingForOnlineServices@@YAHHAEAW4WaitingForOnlineServicesReason@@@Z(controllerIndex, reason);
}

/*
==============
Live_FakeUserSignout
==============
*/

void __fastcall Live_FakeUserSignout(LocalClientNum_t localClientNum, const int controllerIndex)
{
  ?Live_FakeUserSignout@@YAXW4LocalClientNum_t@@H@Z(localClientNum, controllerIndex);
}

/*
==============
Live_SetLocalClientUserName
==============
*/

void __fastcall Live_SetLocalClientUserName(const int controllerIndex, const char *userName)
{
  ?Live_SetLocalClientUserName@@YAXHPEBD@Z(controllerIndex, userName);
}

/*
==============
Live_OnConstrainedResources_EnableBlockingPrivilegeChecks
==============
*/

void Live_OnConstrainedResources_EnableBlockingPrivilegeChecks(void)
{
  ?Live_OnConstrainedResources_EnableBlockingPrivilegeChecks@@YAXXZ();
}

/*
==============
Live_StartAsyncOnlinePrivilegeCheck
==============
*/

void __fastcall Live_StartAsyncOnlinePrivilegeCheck(int controllerIndex)
{
  ?Live_StartAsyncOnlinePrivilegeCheck@@YAXH@Z(controllerIndex);
}

/*
==============
Live_CheckOngoingTasks
==============
*/

void Live_CheckOngoingTasks(void)
{
  ?Live_CheckOngoingTasks@@YAXXZ();
}

/*
==============
Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread
==============
*/

bool __fastcall Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread()
{
  return ?Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread@@YA_NXZ();
}

/*
==============
Plat_GetMacAddressAsUint64
==============
*/

bool __fastcall Plat_GetMacAddressAsUint64(unsigned __int64 *macAddr)
{
  return ?Plat_GetMacAddressAsUint64@@YA_NPEA_K@Z(macAddr);
}

/*
==============
Live_HasWANConnectivity
==============
*/

bool __fastcall Live_HasWANConnectivity()
{
  return ?Live_HasWANConnectivity@@YA_NXZ();
}

/*
==============
Live_GetOnlinePlayPrivilegeCheckState
==============
*/

PrivilegeCheckState __fastcall Live_GetOnlinePlayPrivilegeCheckState(int controllerIndex)
{
  return ?Live_GetOnlinePlayPrivilegeCheckState@@YA?AW4PrivilegeCheckState@@H@Z(controllerIndex);
}

/*
==============
Live_InitSigninState
==============
*/

void Live_InitSigninState(void)
{
  ?Live_InitSigninState@@YAXXZ();
}

/*
==============
Live_StayInGameOnSuspend
==============
*/

bool __fastcall Live_StayInGameOnSuspend()
{
  return ?Live_StayInGameOnSuspend@@YA_NXZ();
}

/*
==============
Live_HasValidSponsor
==============
*/

bool __fastcall Live_HasValidSponsor(int localControllerIndex)
{
  return ?Live_HasValidSponsor@@YA_NH@Z(localControllerIndex);
}

/*
==============
Live_GetPresenceString
==============
*/

void __fastcall Live_GetPresenceString(const bool isAway, const bool isOnline, const bool isInTitle, const wchar_t *presenceString, char *returnString, const unsigned __int64 returnStringSize)
{
  ?Live_GetPresenceString@@YAX_N00PEB_WPEAD_K@Z(isAway, isOnline, isInTitle, presenceString, returnString, returnStringSize);
}

/*
==============
Live_HasUserChanged
==============
*/

bool __fastcall Live_HasUserChanged(int controllerIndex)
{
  return ?Live_HasUserChanged@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetDoesUserHaveOnlinePlayPrivilege
==============
*/

bool __fastcall Live_GetDoesUserHaveOnlinePlayPrivilege(int controllerIndex)
{
  return ?Live_GetDoesUserHaveOnlinePlayPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetConsoleDetails
==============
*/

int __fastcall Live_GetConsoleDetails(int verboseIfErrorIn, unsigned __int8 *consoleInternalIP, unsigned __int8 *consoleExternalIP, unsigned __int64 *machineIDHigh, unsigned __int64 *machineIDLow, unsigned __int64 *macAddress)
{
  return ?Live_GetConsoleDetails@@YAHHQEAE0AEA_K11@Z(verboseIfErrorIn, consoleInternalIP, consoleExternalIP, machineIDHigh, machineIDLow, macAddress);
}

/*
==============
Live_GetLocalClientName
==============
*/

const char *__fastcall Live_GetLocalClientName(const int controllerIndex)
{
  return ?Live_GetLocalClientName@@YAPEBDH@Z(controllerIndex);
}

/*
==============
Live_IsSigningIn
==============
*/

bool __fastcall Live_IsSigningIn()
{
  return ?Live_IsSigningIn@@YA_NXZ();
}

/*
==============
Plat_GetMachineId
==============
*/

bool __fastcall Plat_GetMachineId(unsigned __int64 *machineIdLow, unsigned __int64 *machineIdHigh)
{
  return ?Plat_GetMachineId@@YA_NPEA_K0@Z(machineIdLow, machineIdHigh);
}

/*
==============
Live_HasNetConnection
==============
*/

bool __fastcall Live_HasNetConnection()
{
  return ?Live_HasNetConnection@@YA_NXZ();
}

/*
==============
Live_UserSignedInToLive
==============
*/

bool __fastcall Live_UserSignedInToLive(const int controllerIndex, char **disconnectMessage)
{
  return ?Live_UserSignedInToLive@@YA_NHPEAPEAD@Z(controllerIndex, disconnectMessage);
}

/*
==============
Live_GetUsersXboxLiveContext
==============
*/

Microsoft::Xbox::Services::XboxLiveContext *__fastcall Live_GetUsersXboxLiveContext(int controllerIndex)
{
  return ?Live_GetUsersXboxLiveContext@@YAPE$AAVXboxLiveContext@Services@Xbox@Microsoft@@H@Z(controllerIndex);
}

/*
==============
Live_UpdateVoiceFriendSettings
==============
*/

void Live_UpdateVoiceFriendSettings(void)
{
  ?Live_UpdateVoiceFriendSettings@@YAXXZ();
}

/*
==============
Live_SetCachedUserDataForSigninComplete
==============
*/

void __fastcall Live_SetCachedUserDataForSigninComplete(const int controllerIndex, const unsigned __int64 xuid)
{
  ?Live_SetCachedUserDataForSigninComplete@@YAXH_K@Z(controllerIndex, xuid);
}

/*
==============
Live_PerformXboxPermissionsCheck_InSaveGameThread
==============
*/

void Live_PerformXboxPermissionsCheck_InSaveGameThread(void)
{
  ?Live_PerformXboxPermissionsCheck_InSaveGameThread@@YAXXZ();
}

/*
==============
Live_UpdateActiveLocalGameClient
==============
*/

void __fastcall Live_UpdateActiveLocalGameClient(LocalClientNum_t localClientNum)
{
  ?Live_UpdateActiveLocalGameClient@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Live_Frame
==============
*/

void __fastcall Live_Frame(const int msec)
{
  ?Live_Frame@@YAXH@Z(msec);
}

/*
==============
Live_UserIsGuest
==============
*/

bool __fastcall Live_UserIsGuest(int controllerIndex)
{
  return ?Live_UserIsGuest@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_OnSuspendResume_CheckForContentChanges
==============
*/

void Live_OnSuspendResume_CheckForContentChanges(void)
{
  ?Live_OnSuspendResume_CheckForContentChanges@@YAXXZ();
}

/*
==============
Live_DoesSessionMatchGameServerSession
==============
*/

bool __fastcall Live_DoesSessionMatchGameServerSession(const XSESSION_INFO *sessionInfo)
{
  return ?Live_DoesSessionMatchGameServerSession@@YA_NAEBVXSESSION_INFO@@@Z(sessionInfo);
}

/*
==============
Live_SetIsBadPreviewByte
==============
*/

void __fastcall Live_SetIsBadPreviewByte(const int controllerIndex)
{
  ?Live_SetIsBadPreviewByte@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsFakeUser
==============
*/

bool __fastcall Live_IsFakeUser(const int controllerIndex)
{
  return ?Live_IsFakeUser@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_DoesUserHavePrivilegeInArray
==============
*/

bool __fastcall Live_DoesUserHavePrivilegeInArray(int controllerIndex, unsigned int privilege)
{
  return ?Live_DoesUserHavePrivilegeInArray@@YA_NHI@Z(controllerIndex, privilege);
}

/*
==============
Plat_GetMacAddress
==============
*/

bool __fastcall Plat_GetMacAddress(unsigned __int8 *macAddr)
{
  return ?Plat_GetMacAddress@@YA_NQEAE@Z(macAddr);
}

/*
==============
Live_CheckForSigninStatusChanges
==============
*/

void Live_CheckForSigninStatusChanges(void)
{
  ?Live_CheckForSigninStatusChanges@@YAXXZ();
}

/*
==============
Live_ForcePlatformSignInStateRefresh
==============
*/

void Live_ForcePlatformSignInStateRefresh(void)
{
  ?Live_ForcePlatformSignInStateRefresh@@YAXXZ();
}

/*
==============
Live_GetDoesUserHaveSocialNetworkSharingPrivilege
==============
*/

bool __fastcall Live_GetDoesUserHaveSocialNetworkSharingPrivilege(const int controllerIndex)
{
  return ?Live_GetDoesUserHaveSocialNetworkSharingPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_CheckForSignoutStatusChanges
==============
*/

void Live_CheckForSignoutStatusChanges(void)
{
  ?Live_CheckForSignoutStatusChanges@@YAXXZ();
}

/*
==============
XB3NotificationHandler::XB3NotificationHandler
==============
*/

void __fastcall XB3NotificationHandler::XB3NotificationHandler(XB3NotificationHandler *this)
{
  ??0XB3NotificationHandler@@AE$AAA@XZ(this);
}

/*
==============
Live_IsUserSignedIn
==============
*/

bool __fastcall Live_IsUserSignedIn(const int controllerIndex)
{
  return ?Live_IsUserSignedIn@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_IsGoldUpselling
==============
*/

bool __fastcall Live_IsGoldUpselling()
{
  return ?Live_IsGoldUpselling@@YA_NXZ();
}

/*
==============
Live_GetUserOverallReputationIsBad
==============
*/

bool __fastcall Live_GetUserOverallReputationIsBad(int controllerIndex)
{
  return ?Live_GetUserOverallReputationIsBad@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetPlatformUserId
==============
*/

unsigned __int64 __fastcall Live_GetPlatformUserId(const int controllerIndex)
{
  return ?Live_GetPlatformUserId@@YA_KH@Z(controllerIndex);
}

/*
==============
XB3NotificationHandler::OnControllerPairingChangedEvent
==============
*/

void __fastcall XB3NotificationHandler::OnControllerPairingChangedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerPairingChangedEventArgs *args)
{
  ?OnControllerPairingChangedEvent@XB3NotificationHandler@@QE$AAAXPE$AAVObject@Platform@@PE$AAVControllerPairingChangedEventArgs@Input@Xbox@Windows@@@Z(this, sender, args);
}

/*
==============
XB3NotificationHandler::OnControllerAddedEvent
==============
*/

void __fastcall XB3NotificationHandler::OnControllerAddedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerAddedEventArgs *args)
{
  ?OnControllerAddedEvent@XB3NotificationHandler@@QE$AAAXPE$AAVObject@Platform@@PE$AAVControllerAddedEventArgs@Input@Xbox@Windows@@@Z(this, sender, args);
}

/*
==============
Live_XB3ProfanityFilter_FilterString
==============
*/

bool __fastcall Live_XB3ProfanityFilter_FilterString(const int controllerIndex, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *stringsToVerify, void *payload, void (__fastcall *completionCallback)(GenericTask *, eTaskManagerTaskState))
{
  return ?Live_XB3ProfanityFilter_FilterString@@YA_NHPE$AAV?$Vector@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@Collections@Platform@@PEAXP6AXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z@Z(controllerIndex, stringsToVerify, payload, completionCallback);
}

/*
==============
Live_ShowFriendsList
==============
*/

void __fastcall Live_ShowFriendsList(int controllerIndex)
{
  ?Live_ShowFriendsList@@YAXH@Z(controllerIndex);
}

/*
==============
Live_ContentRatingAllowed
==============
*/

int __fastcall Live_ContentRatingAllowed(const int controllerIndex, char **errorString)
{
  return ?Live_ContentRatingAllowed@@YAHHPEAPEAD@Z(controllerIndex, errorString);
}

/*
==============
Live_GetUserCommsReputationIsBad
==============
*/

bool __fastcall Live_GetUserCommsReputationIsBad(int controllerIndex)
{
  return ?Live_GetUserCommsReputationIsBad@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_MultiplayerRoundStartNotify
==============
*/

void Live_MultiplayerRoundStartNotify(void)
{
  ?Live_MultiplayerRoundStartNotify@@YAXXZ();
}

/*
==============
Live_DCacheShutdown
==============
*/

void Live_DCacheShutdown(void)
{
  ?Live_DCacheShutdown@@YAXXZ();
}

/*
==============
Live_OnConstrainedResources_DisableBlockingPrivilegeChecks
==============
*/

void Live_OnConstrainedResources_DisableBlockingPrivilegeChecks(void)
{
  ?Live_OnConstrainedResources_DisableBlockingPrivilegeChecks@@YAXXZ();
}

/*
==============
Live_Init
==============
*/

void Live_Init(void)
{
  ?Live_Init@@YAXXZ();
}

/*
==============
Live_GetPortForLocalXUID
==============
*/

int __fastcall Live_GetPortForLocalXUID(const XUID player)
{
  return ?Live_GetPortForLocalXUID@@YAHUXUID@@@Z(player);
}

/*
==============
Live_GetLocalClientFullName
==============
*/

const char *__fastcall Live_GetLocalClientFullName(const int controllerIndex)
{
  return ?Live_GetLocalClientFullName@@YAPEBDH@Z(controllerIndex);
}

/*
==============
Live_GetCachedXboxUser
==============
*/

Windows::Xbox::System::User *__fastcall Live_GetCachedXboxUser(int controllerIndex)
{
  return ?Live_GetCachedXboxUser@@YAPE$AAVUser@System@Xbox@Windows@@H@Z(controllerIndex);
}

/*
==============
Live_ShouldPlatformSessionBeInviteOnly
==============
*/

bool __fastcall Live_ShouldPlatformSessionBeInviteOnly(PartyData *party)
{
  return ?Live_ShouldPlatformSessionBeInviteOnly@@YA_NPEAUPartyData@@@Z(party);
}

/*
==============
Live_GetDoesUserHaveUGCPrivilege
==============
*/

bool __fastcall Live_GetDoesUserHaveUGCPrivilege(int controllerIndex)
{
  return ?Live_GetDoesUserHaveUGCPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetOnlineUserName
==============
*/

bool __fastcall Live_GetOnlineUserName(const int controllerIndex, char *nameBufferIn, const int nameBufferSizeIn)
{
  return ?Live_GetOnlineUserName@@YA_NHPEADH@Z(controllerIndex, nameBufferIn, nameBufferSizeIn);
}

/*
==============
Live_GetDoesUserHaveCrossplayPrivilege
==============
*/

bool __fastcall Live_GetDoesUserHaveCrossplayPrivilege(int controllerIndex)
{
  return ?Live_GetDoesUserHaveCrossplayPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
XB3NotificationHandler::OnNetworkStatusChangedEvent
==============
*/

void __fastcall XB3NotificationHandler::OnNetworkStatusChangedEvent(XB3NotificationHandler *this, Platform::Object *sender)
{
  ?OnNetworkStatusChangedEvent@XB3NotificationHandler@@QE$AAAXPE$AAVObject@Platform@@@Z(this, sender);
}

/*
==============
Live_UpdateOnlinePlayPrivilege
==============
*/

void __fastcall Live_UpdateOnlinePlayPrivilege(const int controllerIndex)
{
  ?Live_UpdateOnlinePlayPrivilege@@YAXH@Z(controllerIndex);
}

/*
==============
Live_Disconnected
==============
*/

void __fastcall Live_Disconnected(const int controllerIndex)
{
  ?Live_Disconnected@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsSignedIn
==============
*/

bool __fastcall Live_IsSignedIn(int controllerIndex)
{
  return ?Live_IsSignedIn@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_CalculateControllerVoiceCommunicationSetting
==============
*/

voiceCommunicationSetting __fastcall Live_CalculateControllerVoiceCommunicationSetting(int controllerIndex)
{
  return ?Live_CalculateControllerVoiceCommunicationSetting@@YA?AW4voiceCommunicationSetting@@H@Z(controllerIndex);
}

/*
==============
Live_OnResume
==============
*/

void Live_OnResume(void)
{
  ?Live_OnResume@@YAXXZ();
}

/*
==============
Live_GetLocalClientXuidString
==============
*/

const char *__fastcall Live_GetLocalClientXuidString(const int controllerIndex)
{
  return ?Live_GetLocalClientXuidString@@YAPEBDH@Z(controllerIndex);
}

/*
==============
Live_TryGoldUpsell
==============
*/

void __fastcall Live_TryGoldUpsell(const int controllerIndex)
{
  ?Live_TryGoldUpsell@@YAXH@Z(controllerIndex);
}

/*
==============
Live_InitXboxLiveContexts
==============
*/

void Live_InitXboxLiveContexts(void)
{
  ?Live_InitXboxLiveContexts@@YAXXZ();
}

/*
==============
Live_GetXuid
==============
*/

XUID *__fastcall Live_GetXuid(XUID *result, int controllerIndex)
{
  return ?Live_GetXuid@@YA?AUXUID@@H@Z(result, controllerIndex);
}

/*
==============
Live_OnIgnoreUserProfileChange
==============
*/

void __fastcall Live_OnIgnoreUserProfileChange(const int controllerIndex)
{
  ?Live_OnIgnoreUserProfileChange@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsOnWifi
==============
*/

bool __fastcall Live_IsOnWifi()
{
  return ?Live_IsOnWifi@@YA_NXZ();
}

/*
==============
GetInviteHandleId
==============
*/

const std::wstring *__fastcall GetInviteHandleId()
{
  return ?GetInviteHandleId@@YAAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ();
}

/*
==============
Live_ShowMarketplaceUI
==============
*/

void __fastcall Live_ShowMarketplaceUI(const int controllerIndex, const int product_id)
{
  ?Live_ShowMarketplaceUI@@YAXHH@Z(controllerIndex, product_id);
}

/*
==============
Live_HasCrossPlayPermissionsOnPlatform
==============
*/

bool __fastcall Live_HasCrossPlayPermissionsOnPlatform(const int controllerIndex)
{
  return ?Live_HasCrossPlayPermissionsOnPlatform@@YA_NH@Z(controllerIndex);
}

/*
==============
XenonUserDataWrapper::operator[]
==============
*/

XenonUserData *__fastcall XenonUserDataWrapper::operator[](XenonUserDataWrapper *this, int controllerIndex)
{
  return ??AXenonUserDataWrapper@@QEAAAEAUXenonUserData@@H@Z(this, controllerIndex);
}

/*
==============
Live_FakeUserSignIn
==============
*/

void __fastcall Live_FakeUserSignIn(const int controllerIndex, const char *gamertag)
{
  ?Live_FakeUserSignIn@@YAXHPEBD@Z(controllerIndex, gamertag);
}

/*
==============
Live_GetControllerIndexFromXuid
==============
*/

int __fastcall Live_GetControllerIndexFromXuid(XUID xuid)
{
  return ?Live_GetControllerIndexFromXuid@@YAHUXUID@@@Z(xuid);
}

/*
==============
Live_IsClientAFriend
==============
*/

bool __fastcall Live_IsClientAFriend(const int controllerIndex, const PartyData *party, const int clientNum)
{
  return ?Live_IsClientAFriend@@YA_NHPEBUPartyData@@H@Z(controllerIndex, party, clientNum);
}

/*
==============
Live_SetUniversalId
==============
*/

void __fastcall Live_SetUniversalId(const int controllerIndex, const XUID xuid)
{
  ?Live_SetUniversalId@@YAXHUXUID@@@Z(controllerIndex, xuid);
}

/*
==============
Live_GetControllerIndexForPlatformId
==============
*/

int __fastcall Live_GetControllerIndexForPlatformId(const unsigned __int64 platformId)
{
  return ?Live_GetControllerIndexForPlatformId@@YAH_K@Z(platformId);
}

/*
==============
Live_GetLocalClientHashOfGamertag
==============
*/

unsigned int __fastcall Live_GetLocalClientHashOfGamertag(const int controllerIndex)
{
  return ?Live_GetLocalClientHashOfGamertag@@YAIH@Z(controllerIndex);
}

/*
==============
Live_OnSuspendResume_CheckForSignoutChanges
==============
*/

void Live_OnSuspendResume_CheckForSignoutChanges(void)
{
  ?Live_OnSuspendResume_CheckForSignoutChanges@@YAXXZ();
}

/*
==============
Live_GetDoesUserHaveOnlineCommunicationsPrivilege
==============
*/

bool __fastcall Live_GetDoesUserHaveOnlineCommunicationsPrivilege(int controllerIndex)
{
  return ?Live_GetDoesUserHaveOnlineCommunicationsPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
XB3NotificationHandler::OnCurrentUserChangedEvent
==============
*/

void __fastcall XB3NotificationHandler::OnCurrentUserChangedEvent(XB3NotificationHandler *this, Platform::Object *sender, Platform::Object *args)
{
  ?OnCurrentUserChangedEvent@XB3NotificationHandler@@QE$AAAXPE$AAVObject@Platform@@0@Z(this, sender, args);
}

/*
==============
Live_IsKoreanAccount
==============
*/

bool __fastcall Live_IsKoreanAccount(int controllerIndex)
{
  return ?Live_IsKoreanAccount@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_IsDCacheInitialized
==============
*/

bool __fastcall Live_IsDCacheInitialized()
{
  return ?Live_IsDCacheInitialized@@YA_NXZ();
}

/*
==============
Live_OnFullResources_CheckForContentChanges
==============
*/

void Live_OnFullResources_CheckForContentChanges(void)
{
  ?Live_OnFullResources_CheckForContentChanges@@YAXXZ();
}

/*
==============
Live_IsSystemUiActive
==============
*/

bool __fastcall Live_IsSystemUiActive()
{
  return ?Live_IsSystemUiActive@@YA_NXZ();
}

/*
==============
Live_OnUserAddedEvent
==============
*/

void __fastcall Live_OnUserAddedEvent(Windows::Xbox::System::User *newUser, const int controllerIndex)
{
  ?Live_OnUserAddedEvent@@YAXPE$AAVUser@System@Xbox@Windows@@H@Z(newUser, controllerIndex);
}

/*
==============
Live_GetPrivilegeCheckState
==============
*/

PrivilegeCheckState __fastcall Live_GetPrivilegeCheckState(int controllerIndex, int privilegeToGet)
{
  return ?Live_GetPrivilegeCheckState@@YA?AW4PrivilegeCheckState@@HH@Z(controllerIndex, privilegeToGet);
}

/*
==============
Live_DoesUserHaveMultiplayerPermissions
==============
*/

bool __fastcall Live_DoesUserHaveMultiplayerPermissions(const int localControllerIndex, OnlinePlayFailureReason *failureReason)
{
  return ?Live_DoesUserHaveMultiplayerPermissions@@YA_NHPEAW4OnlinePlayFailureReason@@@Z(localControllerIndex, failureReason);
}

/*
==============
XB3NotificationHandler::InitializeControllerNotificationHandlers
==============
*/

void __fastcall XB3NotificationHandler::InitializeControllerNotificationHandlers(XB3NotificationHandler *this)
{
  ?InitializeControllerNotificationHandlers@XB3NotificationHandler@@QE$AAAXXZ(this);
}

/*
==============
Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired
==============
*/

void Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired(void)
{
  ?Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired@@YAXXZ();
}

/*
==============
Live_CheckForContentChanges
==============
*/

void Live_CheckForContentChanges(void)
{
  ?Live_CheckForContentChanges@@YAXXZ();
}

/*
==============
Live_GiveAchievement
==============
*/

void __fastcall Live_GiveAchievement(int controllerIndex, const char *achievementName)
{
  ?Live_GiveAchievement@@YAXHPEBD@Z(controllerIndex, achievementName);
}

/*
==============
ResetXenonUserData
==============
*/

void ResetXenonUserData(void)
{
  ?ResetXenonUserData@@YAXXZ();
}

/*
==============
Live_GetLocaClientGamertagSuffix
==============
*/

unsigned int __fastcall Live_GetLocaClientGamertagSuffix(const int controllerIndex)
{
  return ?Live_GetLocaClientGamertagSuffix@@YAIH@Z(controllerIndex);
}

/*
==============
Live_GetPermissions
==============
*/

void __fastcall Live_GetPermissions(const int controllerIndex)
{
  ?Live_GetPermissions@@YAXH@Z(controllerIndex);
}

/*
==============
Live_XUIDIsLocalPlayer
==============
*/

bool __fastcall Live_XUIDIsLocalPlayer(const XUID player)
{
  return ?Live_XUIDIsLocalPlayer@@YA_NUXUID@@@Z(player);
}

/*
==============
Live_GetOurVoiceCommunicationSetting
==============
*/

voiceCommunicationSetting __fastcall Live_GetOurVoiceCommunicationSetting(int controllerIndex)
{
  return ?Live_GetOurVoiceCommunicationSetting@@YA?AW4voiceCommunicationSetting@@H@Z(controllerIndex);
}

/*
==============
Live_UpdateXboxLiveContext
==============
*/

bool __fastcall Live_UpdateXboxLiveContext(Windows::Xbox::System::User *currentUser, const int controllerIndex)
{
  return ?Live_UpdateXboxLiveContext@@YA_NPE$AAVUser@System@Xbox@Windows@@H@Z(currentUser, controllerIndex);
}

/*
==============
XB3NotificationHandler::InitializeNetworkStatusEventHandlers
==============
*/

void __fastcall XB3NotificationHandler::InitializeNetworkStatusEventHandlers(XB3NotificationHandler *this)
{
  ?InitializeNetworkStatusEventHandlers@XB3NotificationHandler@@QE$AAAXXZ(this);
}

/*
==============
CL_GetLocalClientSignInState
==============
*/

int __fastcall CL_GetLocalClientSignInState(int controllerIndex)
{
  return ?CL_GetLocalClientSignInState@@YAHH@Z(controllerIndex);
}

/*
==============
Live_SetPrivilegeCheckState
==============
*/

void __fastcall Live_SetPrivilegeCheckState(int controllerIndex, int privilegeToSet, PrivilegeCheckState state)
{
  ?Live_SetPrivilegeCheckState@@YAXHHW4PrivilegeCheckState@@@Z(controllerIndex, privilegeToSet, state);
}

/*
==============
Durango_RESTFrame
==============
*/

void Durango_RESTFrame(void)
{
  ?Durango_RESTFrame@@YAXXZ();
}

/*
==============
Live_GetGuestUserSponsorControllerIndex
==============
*/

int __fastcall Live_GetGuestUserSponsorControllerIndex(int controllerIndex)
{
  return ?Live_GetGuestUserSponsorControllerIndex@@YAHH@Z(controllerIndex);
}

/*
==============
XShowGamerCardUI
==============
*/

int __fastcall XShowGamerCardUI(const int controllerIndex, unsigned __int64 platformId)
{
  return ?XShowGamerCardUI@@YAHH_K@Z(controllerIndex, platformId);
}

/*
==============
XB3NotificationHandler::OnControllerRemovedEvent
==============
*/

void __fastcall XB3NotificationHandler::OnControllerRemovedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerRemovedEventArgs *args)
{
  ?OnControllerRemovedEvent@XB3NotificationHandler@@QE$AAAXPE$AAVObject@Platform@@PE$AAVControllerRemovedEventArgs@Input@Xbox@Windows@@@Z(this, sender, args);
}

/*
==============
Live_XB3ProfanityFilter_CheckStrings
==============
*/

bool __fastcall Live_XB3ProfanityFilter_CheckStrings(const int controllerIndex, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *stringsToVerify, bool *pIsVulgar)
{
  return ?Live_XB3ProfanityFilter_CheckStrings@@YA_NHPE$AAV?$Vector@PE$AAVString@Platform@@U?$equal_to@PE$AAVString@Platform@@@std@@$00@Collections@Platform@@PEA_N@Z(controllerIndex, stringsToVerify, pIsVulgar);
}

/*
==============
Live_OnUserRemovedEvent
==============
*/

void __fastcall Live_OnUserRemovedEvent(Windows::Xbox::System::User *oldUser)
{
  ?Live_OnUserRemovedEvent@@YAXPE$AAVUser@System@Xbox@Windows@@@Z(oldUser);
}

/*
==============
Live_OnConfirmUserDesiresProfileChange
==============
*/

void __fastcall Live_OnConfirmUserDesiresProfileChange(const int controllerIndex)
{
  ?Live_OnConfirmUserDesiresProfileChange@@YAXH@Z(controllerIndex);
}

/*
==============
Plat_OnlineServicesFence_Activate
==============
*/

void __fastcall Plat_OnlineServicesFence_Activate(const int controllerIndex)
{
  ?Plat_OnlineServicesFence_Activate@@YAXH@Z(controllerIndex);
}

/*
==============
Live_PlatformIdIsLocalPlayer
==============
*/

bool __fastcall Live_PlatformIdIsLocalPlayer(const unsigned __int64 platformId)
{
  return ?Live_PlatformIdIsLocalPlayer@@YA_N_K@Z(platformId);
}

/*
==============
Live_IsCurrentlyInAGameServerSession
==============
*/

bool __fastcall Live_IsCurrentlyInAGameServerSession(const int controllerIndex)
{
  return ?Live_IsCurrentlyInAGameServerSession@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_StallingXBoxPermissionsCheck
==============
*/

void __fastcall Live_StallingXBoxPermissionsCheck(int controllerIndex)
{
  ?Live_StallingXBoxPermissionsCheck@@YAXH@Z(controllerIndex);
}

/*
==============
Live_CanUserPlayOnline
==============
*/

bool __fastcall Live_CanUserPlayOnline(const int controllerIndex, OnlinePlayFailureReason *failureReason)
{
  return ?Live_CanUserPlayOnline@@YA_NHPEAW4OnlinePlayFailureReason@@@Z(controllerIndex, failureReason);
}

/*
==============
Live_StartXBOneSignIn
==============
*/

int __fastcall Live_StartXBOneSignIn(int localControllerIndex, bool allowGuests, bool isFromWidget)
{
  return ?Live_StartXBOneSignIn@@YAHH_N0@Z(localControllerIndex, allowGuests, isFromWidget);
}

/*
==============
Live_StartAsyncUGCPrivilegeCheck
==============
*/

void __fastcall Live_StartAsyncUGCPrivilegeCheck(int controllerIndex)
{
  ?Live_StartAsyncUGCPrivilegeCheck@@YAXH@Z(controllerIndex);
}

/*
==============
Live_HasOnlinePlayPrivilege
==============
*/

bool __fastcall Live_HasOnlinePlayPrivilege(const int controllerIndex)
{
  return ?Live_HasOnlinePlayPrivilege@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetLocalClientPlatformUsername
==============
*/

const char *__fastcall Live_GetLocalClientPlatformUsername(const int controllerIndex)
{
  return ?Live_GetLocalClientPlatformUsername@@YAPEBDH@Z(controllerIndex);
}

/*
==============
Live_IsInPartyChat
==============
*/

bool __fastcall Live_IsInPartyChat()
{
  return ?Live_IsInPartyChat@@YA_NXZ();
}

/*
==============
Live_OnSuspendPreCom_Suspend
==============
*/

void Live_OnSuspendPreCom_Suspend(void)
{
  ?Live_OnSuspendPreCom_Suspend@@YAXXZ();
}

/*
==============
Live_HasDetectedNetConnectionLost
==============
*/

bool __fastcall Live_HasDetectedNetConnectionLost()
{
  return ?Live_HasDetectedNetConnectionLost@@YA_NXZ();
}

/*
==============
Live_GetControllerIndexForUserFromXenonUserData
==============
*/

bool __fastcall Live_GetControllerIndexForUserFromXenonUserData(Platform::String *xboxUserId, int *controllerIndex)
{
  return ?Live_GetControllerIndexForUserFromXenonUserData@@YA_NPE$AAVString@Platform@@AEAH@Z(xboxUserId, controllerIndex);
}

/*
==============
Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange
==============
*/

void Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange(void)
{
  ?Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange@@YAXXZ();
}

/*
==============
Live_GamertagForUser
==============
*/

Platform::String *__fastcall Live_GamertagForUser(Windows::Xbox::System::User *user)
{
  return ?Live_GamertagForUser@@YAPE$AAVString@Platform@@PE$AAVUser@System@Xbox@Windows@@@Z(user);
}

/*
==============
Live_GetPrimaryGamertagToDisplay
==============
*/

void __fastcall Live_GetPrimaryGamertagToDisplay(char *nameBufferIn, const int nameBufferSizeIn)
{
  ?Live_GetPrimaryGamertagToDisplay@@YAXPEADH@Z(nameBufferIn, nameBufferSizeIn);
}

/*
==============
Live_IsGuestByXUID
==============
*/

bool __fastcall Live_IsGuestByXUID(XUID xuid)
{
  return ?Live_IsGuestByXUID@@YA_NUXUID@@@Z(xuid);
}

/*
==============
Live_OnClanTagEnteredByUser
==============
*/

void __fastcall Live_OnClanTagEnteredByUser(int localControllerIndex, bool changeConfirmed, const char *resultString)
{
  ?Live_OnClanTagEnteredByUser@@YAXH_NPEBD@Z(localControllerIndex, changeConfirmed, resultString);
}

/*
==============
XB3NotificationHandler::GetInstance
==============
*/

XB3NotificationHandler *__fastcall XB3NotificationHandler::GetInstance()
{
  return ?GetInstance@XB3NotificationHandler@@SAPE$AAV1@XZ();
}

/*
==============
Live_UserSignedOutofLive
==============
*/

bool __fastcall Live_UserSignedOutofLive(int controllerIndex, char **disconnectMessage)
{
  return ?Live_UserSignedOutofLive@@YA_NHPEAPEAD@Z(controllerIndex, disconnectMessage);
}

/*
==============
Live_CheckControllerPairingsForConfirmationPopup
==============
*/

void Live_CheckControllerPairingsForConfirmationPopup(void)
{
  ?Live_CheckControllerPairingsForConfirmationPopup@@YAXXZ();
}

/*
==============
Live_Shutdown
==============
*/

void Live_Shutdown(void)
{
  ?Live_Shutdown@@YAXXZ();
}

/*
==============
Live_UserSignedInLocally
==============
*/

bool __fastcall Live_UserSignedInLocally(int controllerIndex, char **disconnectMessage)
{
  return ?Live_UserSignedInLocally@@YA_NHPEAPEAD@Z(controllerIndex, disconnectMessage);
}

/*
==============
XB3NotificationHandler::XB3NotificationHandler
==============
*/
void XB3NotificationHandler::XB3NotificationHandler(XB3NotificationHandler *this)
{
  Platform::Object::Object(&this->Platform::Object);
  this->__IXB3NotificationHandlerPublicNonVirtuals::Platform::Object::__vftable = (XB3NotificationHandler_vtbl *)&XB3NotificationHandler::`vftable'{for `__IXB3NotificationHandlerPublicNonVirtuals'};
  this->Platform::Object::__vftable = (Platform::Object_vtbl *)&XB3NotificationHandler::`vftable'{for `Platform::Object'};
  this->Platform::Details::IWeakReferenceSource::__abi_IUnknown::__vftable = (Platform::Details::IWeakReferenceSource_vtbl *)&XB3NotificationHandler::`vftable'{for `__abi_IUnknown'};
  this->Platform::Details::IWeakReferenceSource::Platform::Object::__vftable = (Platform::Object_vtbl *)&XB3NotificationHandler::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  this->__abi_reference_count.__pUnkMarshal = (__abi_IUnknown *volatile)-1i64;
  if ( __abi_module )
    __abi_module->__abi_IncrementObjectCount(__abi_module);
  *(_WORD *)&this->m_userHandlersInitialized = 0;
  this->m_networkStatusHandlersInitialized = 0;
}

/*
==============
XenonUserDataWrapper::operator[]
==============
*/
XenonUserData *XenonUserDataWrapper::operator[](XenonUserDataWrapper *this, int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (XenonUserData *)((char *)this + 256 * v2);
}

/*
==============
CL_GetLocalClientSignInState
==============
*/
__int64 CL_GetLocalClientSignInState(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3450, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
  }
  return (unsigned int)xenonUserData.m_guardedUserData[v1].signinState;
}

/*
==============
Durango_RESTFrame
==============
*/

void Durango_RESTFrame(void)
{
  RESTRequest_UpdateAll();
}

/*
==============
XB3NotificationHandler::GetInstance
==============
*/
XB3NotificationHandler *XB3NotificationHandler::GetInstance()
{
  XB3NotificationHandler *v0; 
  XB3NotificationHandler *v1; 
  XB3NotificationHandler *v2; 
  XB3NotificationHandler *v3; 

  v0 = g_XB3NotificationHandler;
  if ( g_XB3NotificationHandler )
    goto LABEL_11;
  v1 = (XB3NotificationHandler *)Platform::Details::Heap::Allocate((unsigned int)((_DWORD)g_XB3NotificationHandler + 40), (unsigned int)((_DWORD)g_XB3NotificationHandler + 56));
  XB3NotificationHandler::XB3NotificationHandler(v1);
  v3 = v2;
  v0 = g_XB3NotificationHandler;
  if ( v2 != g_XB3NotificationHandler )
  {
    if ( v2 )
    {
      v2->__abi_AddRef(v2);
      v0 = g_XB3NotificationHandler;
    }
    if ( v0 )
      v0->__abi_Release(v0);
    v0 = v3;
    g_XB3NotificationHandler = v3;
  }
  if ( v3 )
  {
    v3->__abi_Release(v3);
    v0 = g_XB3NotificationHandler;
  }
  if ( v0 )
LABEL_11:
    v0->__abi_AddRef(v0);
  return v0;
}

/*
==============
GetInviteHandleId
==============
*/
std::wstring *GetInviteHandleId()
{
  return &s_pendingJoinHandleId;
}

/*
==============
XB3NotificationHandler::InitializeControllerNotificationHandlers
==============
*/
void XB3NotificationHandler::InitializeControllerNotificationHandlers(XB3NotificationHandler *this)
{
  __int64 v3; 
  __int64 v4; 
  int ActivationFactoryByPCWSTR; 
  int v6; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  Platform::Guid pGuid; 
  void *ppActivationFactory; 
  __int64 v19; 
  __int64 v20; 

  if ( !this->m_controllerHandlersInitialized )
  {
    ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    pGuid.__vftable = (Platform::Object_vtbl *)XB3NotificationHandler::OnControllerAddedEvent;
    *(_DWORD *)&pGuid.__d = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable]
      vmovdqa xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable], xmm0
    }
    Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerAddedEventArgs __gc *>::EventHandler<Windows::Xbox::Input::ControllerAddedEventArgs __gc *>((Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerAddedEventArgs _> *)ppActivationFactory, this, (__int128 *)&pGuid, (Platform::CallbackContext)2, 0);
    v4 = v3;
    v20 = v3;
    pGuid.__vftable = (Platform::Object_vtbl *)0x47FC144B7400624Fi64;
    *(_DWORD *)&pGuid.__d = -904053857;
    *(_DWORD *)&pGuid.__h = 1932019963;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Controller", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v19 = 0i64;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, v4, &v19);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    pGuid.__vftable = (Platform::Object_vtbl *)XB3NotificationHandler::OnControllerRemovedEvent;
    *(_DWORD *)&pGuid.__d = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable]
      vmovdqa xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable], xmm0
    }
    Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerRemovedEventArgs __gc *>::EventHandler<Windows::Xbox::Input::ControllerRemovedEventArgs __gc *>((Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerRemovedEventArgs _> *)ppActivationFactory, this, (__int128 *)&pGuid, (Platform::CallbackContext)2, 0);
    v9 = v8;
    v20 = v8;
    pGuid.__vftable = (Platform::Object_vtbl *)0x47FC144B7400624Fi64;
    *(_DWORD *)&pGuid.__d = -904053857;
    *(_DWORD *)&pGuid.__h = 1932019963;
    ppActivationFactory = NULL;
    v10 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Controller", &pGuid, &ppActivationFactory);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v19 = 0i64;
    v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, v9, &v19);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    pGuid.__vftable = (Platform::Object_vtbl *)XB3NotificationHandler::OnControllerPairingChangedEvent;
    *(_DWORD *)&pGuid.__d = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable]
      vmovdqa xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable], xmm0
    }
    Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerPairingChangedEventArgs __gc *>::EventHandler<Windows::Xbox::Input::ControllerPairingChangedEventArgs __gc *>((Windows::Foundation::EventHandler<Windows::Xbox::Input::ControllerPairingChangedEventArgs _> *)ppActivationFactory, this, (__int128 *)&pGuid, (Platform::CallbackContext)2, 0);
    v14 = v13;
    v20 = v13;
    pGuid.__vftable = (Platform::Object_vtbl *)0x47FC144B7400624Fi64;
    *(_DWORD *)&pGuid.__d = -904053857;
    *(_DWORD *)&pGuid.__h = 1932019963;
    ppActivationFactory = NULL;
    v15 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Input.Controller", &pGuid, &ppActivationFactory);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    v19 = 0i64;
    v16 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 88i64))(ppActivationFactory, v14, &v19);
    if ( v16 < 0 )
      __abi_WinRTraiseException(v16);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
    Content_InitDownloadableContentPackageManager();
    this->m_controllerHandlersInitialized = 1;
  }
}

/*
==============
XB3NotificationHandler::InitializeNetworkStatusEventHandlers
==============
*/
void XB3NotificationHandler::InitializeNetworkStatusEventHandlers(XB3NotificationHandler *this)
{
  __int64 v3; 
  __int64 v4; 
  int ActivationFactoryByPCWSTR; 
  int v6; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  Platform::Guid pGuid; 
  void *ppActivationFactory; 
  __int64 v14; 
  __int64 v15; 

  if ( !this->m_networkStatusHandlersInitialized )
  {
    s_hasNetworkConnection = Live_GetCurrentNetworkConnectionStatus();
    g_NetworkConnectivityLevel = Live_GetNetworkConnectivityLevel();
    ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    pGuid.__vftable = (Platform::Object_vtbl *)XB3NotificationHandler::OnNetworkStatusChangedEvent;
    *(_DWORD *)&pGuid.__d = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable]
      vmovdqa xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable], xmm0
    }
    Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler((Windows::Networking::Connectivity::NetworkStatusChangedEventHandler *)ppActivationFactory, this, (__int128 *)&pGuid, (Platform::CallbackContext)2, 0);
    v4 = v3;
    v15 = v3;
    pGuid.__vftable = (Platform::Object_vtbl *)0x4165950D5074F851i64;
    *(_DWORD *)&pGuid.__d = 1446385052;
    *(_DWORD *)&pGuid.__h = -367114215;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Networking.Connectivity.NetworkInformation", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    v14 = 0i64;
    v6 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 96i64))(ppActivationFactory, v4, &v14);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    this->m_networkStatusHandlersInitialized = 1;
    ppActivationFactory = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
    pGuid.__vftable = (Platform::Object_vtbl *)XB3NotificationHandler::OnCurrentUserChangedEvent;
    *(_DWORD *)&pGuid.__d = 0;
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable]
      vmovdqa xmmword ptr [rbp+pGuid.baseclass_0.baseclass_0.__vftable], xmm0
    }
    Windows::Foundation::EventHandler<Platform::Object __gc *>::EventHandler<Platform::Object __gc *>((Windows::Foundation::EventHandler<Platform::Object _> *)ppActivationFactory, this, (__int128 *)&pGuid, (Platform::CallbackContext)2, 0);
    v9 = v8;
    v15 = v8;
    pGuid.__vftable = (Platform::Object_vtbl *)0x4D41B9ACD8D4C59Fi64;
    *(_DWORD *)&pGuid.__d = 480259460;
    *(_DWORD *)&pGuid.__h = -417876391;
    ppActivationFactory = NULL;
    v10 = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.ApplicationModel.Core.CoreApplicationContext", &pGuid, &ppActivationFactory);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v14 = 0i64;
    v11 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, v9, &v14);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  }
}

/*
==============
XB3NotificationHandler::InitializeUsers
==============
*/
void XB3NotificationHandler::InitializeUsers(XB3NotificationHandler *this)
{
  ;
}

/*
==============
Live_AreWeAcceptingInvite
==============
*/
bool Live_AreWeAcceptingInvite()
{
  return PartyAtomic_IsJoiningOnPresence(&g_partyJoinInfo) || s_hasPendingJoinInfo && g_launchData.pendingJoinInvite;
}

/*
==============
Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired
==============
*/
void Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired(void)
{
  Windows::Xbox::System::User *v0; 
  unsigned int v1; 
  unsigned int v2; 
  Windows::Xbox::System::User *User; 
  __int64 v4; 
  int v5; 
  int v6; 
  char v7; 
  Windows::Xbox::System::User *v8; 
  unsigned int v9; 
  XenonUserDataWrapper *v10; 
  Windows::Xbox::System::User *v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  Windows::Xbox::System::UserOnlineState v16; 
  int v17; 
  int signinState; 
  int v19; 
  int v20; 
  bool v21; 
  XenonUserData *v22; 
  XenonUserData *v23; 
  int v24; 
  int v25; 
  int v26; 
  char *fmt; 
  int userIndexToReturn; 
  int v29; 
  char *disconnectMessage; 
  __int64 v31; 
  __int64 v32; 
  Windows::Xbox::System::User *v33; 
  char v34; 
  char v35; 
  __int64 v36; 
  Windows::Xbox::System::User *checkResult; 

  v32 = -2i64;
  Com_Printf(16, "%s() \n", "Live_IsNonGuestAccountAvailableAsSponsor");
  v0 = NULL;
  v36 = 0i64;
  v1 = Users_NumUsers();
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      User = Users_GetUser(v2);
      v4 = (__int64)User;
      checkResult = User;
      if ( User != v0 )
      {
        if ( User )
          User->__abi_AddRef(User);
        if ( v0 )
          v0->__abi_Release(v0);
        v0 = (Windows::Xbox::System::User *)v4;
        v36 = v4;
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
      if ( v0 )
      {
        v5 = v0->__abi_get_IsGuest(v0, (bool *)&v34);
        if ( v5 < 0 )
          __abi_WinRTraiseException(v5);
        if ( !v34 )
        {
          v6 = v0->__abi_get_IsSignedIn(v0, (bool *)&v35);
          if ( v6 < 0 )
            __abi_WinRTraiseException(v6);
          if ( v35 && GPad_GetGamepadCountForUser(v0) > 0 )
            break;
        }
      }
      if ( ++v2 >= v1 )
        goto LABEL_17;
    }
    v0->__abi_Release(v0);
    v7 = 1;
  }
  else
  {
LABEL_17:
    if ( v0 )
      v0->__abi_Release(v0);
    v7 = 0;
  }
  v8 = NULL;
  v31 = 0i64;
  Com_Printf(16, "Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired\n");
  GPad_ForceGamepadRefresh();
  v9 = 0;
  v10 = &xenonUserData;
  do
  {
    if ( v8 )
    {
      v8->__abi_Release(v8);
      v8 = NULL;
      v31 = 0i64;
    }
    if ( GPad_HasInput(v9) && GPad_GetUserIndexForPort(v9, &userIndexToReturn) )
    {
      v11 = Users_GetUser(userIndexToReturn);
      v12 = (__int64)v11;
      v33 = v11;
      if ( v11 != v8 )
      {
        v11->__abi_AddRef(v11);
        v8 = (Windows::Xbox::System::User *)v12;
        v31 = v12;
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    }
    if ( v8 )
    {
      v13 = v8->__abi_get_IsGuest(v8, (bool *)&v34);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      if ( !v34 || v7 )
      {
        v14 = v8->__abi_get_IsGuest(v8, (bool *)&v36);
        if ( v14 < 0 )
          __abi_WinRTraiseException(v14);
        v15 = v8->__abi_get_IsSignedIn(v8, (bool *)&v35);
        if ( v15 < 0 )
          __abi_WinRTraiseException(v15);
        if ( v35 )
        {
          v16 = Windows::Xbox::System::User::OnlineState::get();
          Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v16);
          v17 = (Windows::Xbox::System::User::OnlineState::get() == SaudiArabia) + 1;
        }
        else
        {
          v17 = 0;
        }
        if ( v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( v10->m_guardedUserData[0].signinState == v17 )
        {
          if ( v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          signinState = v10->m_guardedUserData[0].signinState;
          if ( v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          LODWORD(fmt) = signinState;
          Com_Printf(25, "The user with controller index %d and xuid %llu is already in the expected signinstate %d\n", v9, v10->m_guardedUserData[0].xuid.m_id, fmt);
        }
        else
        {
          v19 = v17 - 1;
          if ( v19 )
          {
            if ( v19 == 1 )
            {
              v20 = Sys_Milliseconds();
              if ( !(_BYTE)v36 )
              {
                if ( !GPad_HasInput(v9) || !GPad_GetUserIndexForPort(v9, &v29) )
                  goto LABEL_72;
                Live_UserSignedInToLive(v9, &disconnectMessage);
                v21 = (g_launchData.pendingHandleAcceptInvite || InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM)) && g_launchData.sessionHandleId._Mypair._Myval2._Mysize && Live_GetPlatformUserId(v9) == g_launchData.invitedPlatformId;
                if ( Live_DoesUserHavePrivilegeInArray(v9, 0xFEu) || (LODWORD(checkResult) = 0, Live_GetPrivilege(v9, XPRIVILEGE_MULTIPLAYER_SESSIONS, (Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult *)&checkResult, 0)) && !(_DWORD)checkResult || v21 )
                {
                  if ( XenonUserDataWrapper::operator[](&xenonUserData, v9)->signinState != 2 )
                  {
                    Sys_Sleep(100);
                    Live_UserSignedInToLive(v9, &disconnectMessage);
                    if ( XenonUserDataWrapper::operator[](&xenonUserData, v9)->signinState != 2 )
                    {
                      v23 = XenonUserDataWrapper::operator[](&xenonUserData, v9);
                      Com_Printf(16, "Since we are unable to sign in properly, we're going to pretend that %s signed out of controller %i\n", v23->gamertag, v9);
                      Live_UserSignedOut(v9, &disconnectMessage, 0, 0);
                    }
                  }
                  v24 = Sys_Milliseconds();
                  Com_Printf(16, "Live_UserSignedInToLive took %ims\n", (unsigned int)(v24 - v20));
                }
                else
                {
                  v22 = XenonUserDataWrapper::operator[](&xenonUserData, v9);
                  Com_Printf(16, "Since we don't have MP privileges, we're going to pretend that %s signed out of controller %i\n", v22->gamertag, v9);
                  Live_UserSignedOut(v9, &disconnectMessage, 0, 0);
                }
              }
            }
          }
          else
          {
            v25 = Sys_Milliseconds();
            Live_UserSignedInLocally(v9, &disconnectMessage);
            v26 = Sys_Milliseconds();
            Com_Printf(16, "Live_UserSignedInLocally took %ims\n", (unsigned int)(v26 - v25));
          }
          if ( GamerProfile_IsProfileLoggedIn(v9) && GamerProfile_WasErrorOnRead(v9) )
          {
            if ( v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            Com_Printf(16, "Since we had an error reading their gamer profile, we're going to pretend that %s signed out of controller %i\n", xenonUserData.m_guardedUserData[(__int64)(int)v9].gamertag, v9);
            Live_UserSignedOut(v9, &disconnectMessage, 0, 0);
          }
        }
      }
    }
LABEL_72:
    ++v9;
    v10 = (XenonUserDataWrapper *)((char *)v10 + 256);
  }
  while ( (int)v9 < 8 );
  if ( v8 )
    v8->__abi_Release(v8);
}

/*
==============
Live_BeingSignedOutByAnotherController
==============
*/
__int64 Live_BeingSignedOutByAnotherController(const int signedOutControllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::IUser *v2; 
  unsigned __int64 v3; 
  int v4; 
  Windows::Xbox::System::User *User; 
  __int64 v6; 
  int v7; 
  Platform::String *v9; 
  char v10; 
  int userIndexToReturn; 
  __int64 v12; 
  unsigned __int64 platformId; 

  v1 = signedOutControllerIndex;
  v2 = NULL;
  v12 = 0i64;
  if ( (unsigned int)signedOutControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
    __debugbreak();
  if ( XUID::IsValid(&xenonUserData.m_guardedUserData[v1].xuid) )
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v3 = xenonUserData.m_guardedUserData[v1].platformId;
    v4 = 0;
    while ( 1 )
    {
      if ( (_DWORD)v1 != v4 && GPad_HasInput(v4) && GPad_GetUserIndexForPort(v4, &userIndexToReturn) )
      {
        User = Users_GetUser(userIndexToReturn);
        v6 = (__int64)User;
        if ( User != v2 )
        {
          if ( User )
            User->__abi_AddRef(User);
          if ( v2 )
            v2->__abi_Release(v2);
          v2 = (Windows::Xbox::System::IUser *)v6;
          v12 = v6;
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
        v9 = Windows::Xbox::System::IUser::XboxUserId::get(v2);
        ConvertPlatformStringToPlatformId(v9, &platformId);
        WindowsDeleteString_0((HSTRING)v9);
        v7 = v2->__abi_get_IsSignedIn(v2, (bool *)&v10);
        if ( v7 < 0 )
          __abi_WinRTraiseException(v7);
        if ( v10 && platformId == v3 )
          break;
      }
      if ( ++v4 >= 8 )
        goto LABEL_24;
    }
    v2->__abi_Release(v2);
    return 1i64;
  }
  else
  {
LABEL_24:
    if ( v2 )
      v2->__abi_Release(v2);
    return 0i64;
  }
}

/*
==============
Live_CacheXBOnePermissions
==============
*/
void Live_CacheXBOnePermissions(int controllerIndex)
{
  __int64 v1; 
  unsigned __int8 *p_userPrivileges; 
  Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult checkResult; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  checkResult = NoIssue;
  p_userPrivileges = &xenonUserData.m_guardedUserData[v1].userPrivileges;
  *p_userPrivileges = 0;
  if ( Live_GetPrivilege(v1, XPRIVILEGE_COMMUNICATIONS, &checkResult, 0) )
  {
    if ( checkResult == NoIssue )
    {
      if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      *p_userPrivileges |= 1u;
    }
  }
  else
  {
    Com_PrintError(16, "Live_GetPrivilege for XPRIVILEGE_COMMUNICATIONS failed\n");
  }
  Live_StallingXBoxPermissionsCheck(v1);
}

/*
==============
Live_CachedUserAndContextRefresh
==============
*/
void Live_CachedUserAndContextRefresh()
{
  unsigned int v0; 
  Microsoft::Xbox::Services::XboxLiveContext **p_xboxLiveContext; 
  CachedXboxLiveContext *v2; 
  Windows::Xbox::System::User *UserByPlatformId; 
  Windows::Xbox::System::User *v4; 
  int v5; 
  Windows::Xbox::System::UserOnlineState v6; 
  Microsoft::Xbox::Services::XboxLiveContext *v7; 
  int v8; 
  Windows::Xbox::System::UserOnlineState v9; 
  __int64 v10; 
  char v11; 
  char v12; 
  Windows::Xbox::System::User *v13; 
  Windows::Xbox::System::User *v14; 

  Com_Printf(16, "%s\n", "Live_CachedUserAndContextRefresh");
  v0 = 0;
  p_xboxLiveContext = &xenonUserData.m_guardedUserData[0].xboxLiveContext;
  v2 = s_cachedInviteUserInfo;
  do
  {
    if ( v2->context )
    {
      v2->context->__abi_Release(v2->context);
      v2->context = NULL;
    }
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( *p_xboxLiveContext )
    {
      (*p_xboxLiveContext)->__abi_Release(*p_xboxLiveContext);
      *p_xboxLiveContext = NULL;
    }
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( *((int *)p_xboxLiveContext - 58) > 0 )
    {
      if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      UserByPlatformId = Users_GetUserByPlatformId((const unsigned __int64)*(p_xboxLiveContext - 6));
      v4 = UserByPlatformId;
      v13 = UserByPlatformId;
      if ( UserByPlatformId )
        UserByPlatformId->__abi_AddRef(UserByPlatformId);
      v14 = v4;
      if ( v4 )
        v4->__abi_Release(v4);
      Com_Printf(16, "User found at controller index %d to update!\n", v0);
      if ( !v4 )
        goto LABEL_31;
      v5 = v4->__abi_get_IsSignedIn(v4, (bool *)&v11);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      if ( v11 )
      {
        v6 = Windows::Xbox::System::User::OnlineState::get();
        Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v6);
        Windows::Xbox::System::User::OnlineState::get();
        Com_Printf(16, "Refreshing cached user and context!\n");
        if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( v4 != (Windows::Xbox::System::User *)p_xboxLiveContext[1] )
        {
          v4->__abi_AddRef(v4);
          v7 = p_xboxLiveContext[1];
          if ( v7 )
            v7->__abi_Release(v7);
          p_xboxLiveContext[1] = (Microsoft::Xbox::Services::XboxLiveContext *)v4;
        }
        Live_UpdateXboxLiveContext(v4, v0);
      }
      else
      {
LABEL_31:
        Com_Printf(16, "Cannot refresh cached user data for controller %d due to:", v0);
        if ( v4 )
        {
          v8 = v4->__abi_get_IsSignedIn(v4, (bool *)&v12);
          if ( v8 < 0 )
            __abi_WinRTraiseException(v8);
          if ( v12 )
          {
            v9 = Windows::Xbox::System::User::OnlineState::get();
            Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v9);
            v10 = (unsigned int)(Windows::Xbox::System::User::OnlineState::get() == SaudiArabia) + 1;
          }
          else
          {
            v10 = 0i64;
          }
          Com_Printf(16, "\tuser sign in state %d!", v10);
        }
        else
        {
          Com_Printf(16, "\tuser isn't in current user array!");
        }
      }
      if ( v4 )
        v4->__abi_Release(v4);
    }
    ++v0;
    ++v2;
    p_xboxLiveContext += 32;
  }
  while ( (int)v0 < 8 );
}

/*
==============
Live_CalculateControllerVoiceCommunicationSetting
==============
*/
int Live_CalculateControllerVoiceCommunicationSetting(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( Live_UserIsGuest(controllerIndex) || !CL_GetLocalClientSignInState(v1) )
    return Live_GetMostRestrictiveVoiceCommunicationSetting();
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return 2 * ((xenonUserData.m_guardedUserData[v1].userPrivileges & 1) == 0);
}

/*
==============
Live_CanUserPlayOnline
==============
*/
bool Live_CanUserPlayOnline(const int controllerIndex, OnlinePlayFailureReason *failureReason)
{
  __int64 v2; 
  bool v4; 
  const dvar_t *v5; 
  bool result; 
  int GuestUserSponsorControllerIndex; 
  bool v8; 
  char v9; 
  LocalClientNum_t outLocalClientNum; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3268, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( !failureReason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3269, ASSERT_TYPE_ASSERT, "(failureReason)", (const char *)&queryFormat, "failureReason") )
    __debugbreak();
  v4 = !s_hasNetworkConnection;
  *failureReason = OPFR_NONE;
  if ( v4 )
    goto LABEL_29;
  v5 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && g_NetworkConnectivityLevel < 2 )
  {
LABEL_29:
    *failureReason = OPFR_NETWORK_CONNECTION;
    return 0;
  }
  else
  {
    result = Live_IsUserSignedInToLive(v2);
    if ( result )
    {
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( (xenonUserData.m_guardedUserData[v2].userPrivileges & 2) != 0 )
      {
        if ( Live_UserIsGuest(v2) && ((GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(v2), v8 = GuestUserSponsorControllerIndex == (_DWORD)v2, GuestUserSponsorControllerIndex < 0) || !CL_Mgr_IsControllerMappedToClient(GuestUserSponsorControllerIndex, &outLocalClientNum) ? (v9 = 0) : (v9 = 1), v8 || !v9) )
        {
          result = 0;
          *failureReason = OPFR_GUEST_WITHOUT_SPONSOR;
        }
        else
        {
          *failureReason = OPFR_NONE;
          return 1;
        }
      }
      else
      {
        result = 0;
        *failureReason = OPFR_XBOXLIVE_MPNOTALLOWED;
      }
    }
    else
    {
      *failureReason = OPFR_XBOXLIVE_SIGNEDOUTOFLIVE;
    }
  }
  return result;
}

/*
==============
Live_CheckControllerPairingsForConfirmationPopup
==============
*/
void Live_CheckControllerPairingsForConfirmationPopup(void)
{
  unsigned int v0; 
  unsigned __int64 *i; 
  Windows::Xbox::System::User *v2; 
  Windows::Xbox::System::User *UserByPlatformId; 
  Windows::Xbox::System::User *v4; 
  LocalClientNum_t ClientFromController; 

  Com_Printf(16, "%s() \n", "Live_CheckControllerPairingsForConfirmationPopup");
  v0 = 0;
  for ( i = &xenonUserData.m_guardedUserData[0].platformId; ; i += 32 )
  {
    if ( Live_HasUserChanged(v0) )
    {
      if ( CL_Mgr_IsControllerMappedToClient(v0, NULL) )
      {
        Com_Printf(16, "Live_HasUserChanged returned true for controllerIndex %d showing pop-up\n", v0);
        LUI_OpenMenuForController(v0, "user_changed_confirm_mp", 1, 0, 1);
        g_hasOpenedUserConfirmChangeDialog = 1;
        return;
      }
      goto LABEL_24;
    }
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(v0) <= 0 )
      goto LABEL_24;
    v2 = NULL;
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    UserByPlatformId = Users_GetUserByPlatformId(*i);
    v4 = UserByPlatformId;
    if ( UserByPlatformId )
    {
      UserByPlatformId->__abi_AddRef(UserByPlatformId);
      v2 = v4;
    }
    if ( v4 )
      v4->__abi_Release(v4);
    if ( !v2 || GPad_IsControllerPairedToUser(v2, v0) || GPad_GetGamepadCountForUser(v2) <= 1 )
    {
      if ( v2 )
        v2->__abi_Release(v2);
      goto LABEL_24;
    }
    v2->__abi_Release(v2);
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_HARD_LAND|WEAPON_OFFHAND_END|0x80) )
      break;
LABEL_24:
    if ( (int)++v0 >= 8 )
      return;
  }
  Com_Printf(16, "Live_HasControllerChanged returned true for controllerIndex %d showing pop-up\n", v0);
  ClientFromController = CL_Mgr_GetClientFromController(v0);
  UI_SetShowControllerRemovedPopup(ClientFromController, 0);
  LUI_OpenMenuForController(v0, "controller_changed_confirm_mp", 1, 0, 0);
}

/*
==============
Live_CheckForContentChanges
==============
*/
void Live_CheckForContentChanges(void)
{
  int v0; 
  XenonUserDataWrapper *v1; 
  __int64 v2; 
  Online_Loot *Instance; 
  Online_Commerce *v4; 
  Online_Commerce *v5; 

  Com_Printf(16, "Live_CheckForContentChanges\n");
  v0 = 0;
  v1 = &xenonUserData;
  v2 = 0i64;
  do
  {
    if ( (unsigned int)v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( v1->m_guardedUserData[0].signinState > 0 )
    {
      Content_FindContentPacks(v0);
      Instance = Online_Loot::GetInstance();
      if ( Online_Loot::HasInventory(Instance, v0) && Online_Commerce::GetInstance()->m_storeEntitlements[v2].taskState != ENTITLEMENT_STATE_WORKING && Online_Commerce::GetInstance()->m_storeEntitlements[v2].taskState != ENTITLEMENT_STATE_EXCHANGING )
      {
        v4 = Online_Commerce::GetInstance();
        Online_Commerce::ResetStoreEntitlements(v4, v0, 0);
        v5 = Online_Commerce::GetInstance();
        Online_Commerce::GetEntitlements(v5, v0);
      }
    }
    ++v0;
    v1 = (XenonUserDataWrapper *)((char *)v1 + 256);
    ++v2;
  }
  while ( v0 < 8 );
}

/*
==============
Live_CheckForSigninStatusChanges
==============
*/
void Live_CheckForSigninStatusChanges(void)
{
  unsigned int v0; 
  XenonUserDataWrapper *v1; 
  Windows::Xbox::System::User *UserByPlatformId; 
  const Windows::Xbox::System::User *v3; 
  int Index; 
  int v5; 
  Windows::Xbox::System::UserOnlineState v6; 
  int v7; 
  LocalClientNum_t ClientFromController; 
  char v9; 
  Windows::Xbox::System::User *v10; 
  const Windows::Xbox::System::User *v11; 

  Com_Printf(16, "Live_CheckForSigninStatusChanges\n");
  v0 = 0;
  v1 = &xenonUserData;
  do
  {
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( v1->m_guardedUserData[0].signinState == 1 )
    {
      if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      UserByPlatformId = Users_GetUserByPlatformId(v1->m_guardedUserData[0].platformId);
      v3 = UserByPlatformId;
      v10 = UserByPlatformId;
      if ( UserByPlatformId )
        UserByPlatformId->__abi_AddRef(UserByPlatformId);
      v11 = v3;
      if ( v3 )
        v3->__abi_Release(&v3->Windows::Xbox::System::IUser);
      Index = Users_GetIndex(v3);
      v5 = v3->__abi_get_IsSignedIn(&v3->Windows::Xbox::System::IUser, (bool *)&v9);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      if ( v9 )
      {
        v6 = Windows::Xbox::System::User::OnlineState::get();
        Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v6);
        v7 = (Windows::Xbox::System::User::OnlineState::get() == SaudiArabia) + 1;
      }
      else
      {
        v7 = 0;
      }
      if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( v7 > v1->m_guardedUserData[0].signinState )
      {
        ClientFromController = CL_Mgr_GetClientFromController(v0);
        Live_CheckNotifications_SignInChanged(ClientFromController, Index, v0, 0);
      }
      if ( v3 )
        v3->__abi_Release(&v3->Windows::Xbox::System::IUser);
    }
    ++v0;
    v1 = (XenonUserDataWrapper *)((char *)v1 + 256);
  }
  while ( (int)v0 < 8 );
}

/*
==============
Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange
==============
*/
void Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange(void)
{
  int v0; 
  int v1; 
  unsigned int v2; 

  v0 = Sys_Milliseconds();
  v1 = v0;
  if ( s_checkForSigninStateChangesTimer )
  {
    v2 = 0;
    if ( v0 - s_checkForSigninStateChangesTimer > 30000 )
    {
      s_checkForSigninStateChangesTimer = 0;
      s_lastSigninStateCheckTimer = 0;
    }
    else
    {
      while ( 1 )
      {
        if ( v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( CL_GetLocalClientSignInState(v2) > 0 )
        {
          if ( v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          if ( CL_GetLocalClientSignInState(v2) != 2 )
            break;
        }
        if ( (int)++v2 >= 8 )
          return;
      }
      if ( v1 - s_lastSigninStateCheckTimer >= 1000 )
      {
        Com_Printf(16, "Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange triggering sign in status check.\n");
        s_checkForSigninStatusChanges = 1;
      }
    }
  }
}

/*
==============
Live_CheckForSignoutStatusChanges
==============
*/
void Live_CheckForSignoutStatusChanges(void)
{
  unsigned int v0; 
  Microsoft::Xbox::Services::XboxLiveContext **p_xboxLiveContext; 
  Windows::Xbox::System::User *UserByPlatformId; 
  __int64 v3; 
  int v4; 
  Windows::Xbox::System::UserOnlineState v5; 
  int v6; 
  Windows::Xbox::System::UserOnlineState v7; 
  LocalClientNum_t ClientFromController; 
  char v9; 
  char v10; 
  Windows::Xbox::System::User *v11; 
  __int64 v12; 

  Com_Printf(16, "Live_CheckForSignoutStatusChanges\n");
  v0 = 0;
  p_xboxLiveContext = &xenonUserData.m_guardedUserData[0].xboxLiveContext;
  do
  {
    if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( *((int *)p_xboxLiveContext - 58) <= 0 )
    {
      if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( *p_xboxLiveContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4253, ASSERT_TYPE_ASSERT, "(xenonUserData[controllerIndex].xboxLiveContext == nullptr)", (const char *)&queryFormat, "xenonUserData[controllerIndex].xboxLiveContext == nullptr") )
        __debugbreak();
    }
    else
    {
      if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      UserByPlatformId = Users_GetUserByPlatformId((const unsigned __int64)*(p_xboxLiveContext - 6));
      v3 = (__int64)UserByPlatformId;
      v11 = UserByPlatformId;
      if ( UserByPlatformId )
        UserByPlatformId->__abi_AddRef(UserByPlatformId);
      v12 = v3;
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
      if ( !v3 )
        goto LABEL_27;
      v4 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 88i64))(v3, &v9);
      if ( v4 < 0 )
        __abi_WinRTraiseException(v4);
      if ( v9 )
      {
        v5 = Windows::Xbox::System::User::OnlineState::get();
        Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v5);
        Windows::Xbox::System::User::OnlineState::get();
        v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 88i64))(v3, &v10);
        if ( v6 < 0 )
          __abi_WinRTraiseException(v6);
        if ( v10 )
        {
          v7 = Windows::Xbox::System::User::OnlineState::get();
          Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v7);
          Windows::Xbox::System::User::OnlineState::get();
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4247, ASSERT_TYPE_ASSERT, "(newUser != nullptr && Live_GetSigninStateForUserFromSystem( newUser ) != eXUserSigninState_NotSignedIn)", (const char *)&queryFormat, "newUser != nullptr && Live_GetSigninStateForUserFromSystem( newUser ) != eXUserSigninState_NotSignedIn") )
        {
          __debugbreak();
        }
        if ( v0 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( !*p_xboxLiveContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4248, ASSERT_TYPE_ASSERT, "(xenonUserData[controllerIndex].xboxLiveContext != nullptr)", (const char *)&queryFormat, "xenonUserData[controllerIndex].xboxLiveContext != nullptr") )
          __debugbreak();
      }
      else
      {
LABEL_27:
        ClientFromController = CL_Mgr_GetClientFromController(v0);
        Live_CheckNotifications_SignInChanged(ClientFromController, -1, v0, 1);
      }
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
    }
    ++v0;
    p_xboxLiveContext += 32;
  }
  while ( (int)v0 < 8 );
}

/*
==============
Live_CheckNetConnection
==============
*/
void Live_CheckNetConnection(__int64 a1, PartyDisconnectReason a2)
{
  const dvar_t *v2; 
  PartyData *PartyData; 

  if ( !s_hasNetworkConnection )
  {
    LOBYTE(a2) = 32;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, a2);
    Live_DeclineInvitation();
    v2 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
      Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
    Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
    Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    Party_StopParty(&g_partyData);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)0x2000, NULL);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/NETCONNECTION");
  }
}

/*
==============
Live_CheckNotifications_SignInChanged
==============
*/
void Live_CheckNotifications_SignInChanged(LocalClientNum_t localClientNum, const int userIndexTriggered, int controllerIndexTriggered, bool fakeSignoutForUser)
{
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  int v9; 
  bool UserIndexForPort; 
  __int64 v11; 
  const Windows::Xbox::System::User *v12; 
  Windows::Xbox::System::User *UserByPlatformId; 
  __int64 v14; 
  int v15; 
  Windows::Xbox::System::UserOnlineState v16; 
  bool v17; 
  Windows::Xbox::System::User *User; 
  HSTRING v19; 
  int v20; 
  Windows::Xbox::System::UserOnlineState v21; 
  bool v22; 
  int v23; 
  Windows::Xbox::System::User *v24; 
  Windows::Xbox::System::User *v25; 
  Windows::Xbox::System::User *v26; 
  Platform::String *v27; 
  int v28; 
  HSTRING v29; 
  int v30; 
  HSTRING v31; 
  unsigned __int64 v32; 
  char v33; 
  Windows::Xbox::System::User *v34; 
  unsigned __int64 v35; 
  PartyData *PartyData; 
  bool v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  LocalClientNum_t v40; 
  ClActiveClient *Client; 
  bool v42; 
  char *fmt; 
  __int64 v44; 
  __int64 v45; 
  char v46; 
  char v47; 
  char v48; 
  bool v49; 
  unsigned int index; 
  int v51; 
  char *disconnectMessage; 
  unsigned __int64 platformId; 
  HSTRING string; 
  int userIndexToReturn; 
  int v56; 
  LocalClientNum_t localClientNuma; 
  Windows::Xbox::System::User *v58; 
  __int64 v59; 
  __int64 v60; 
  HSTRING newString[2]; 
  XUID v62; 
  Windows::Xbox::System::User *v63; 
  Windows::Xbox::System::User *v64; 
  Windows::Xbox::System::User *v65; 
  Platform::String *v66; 
  HSTRING v67; 
  Windows::Xbox::System::User *v68; 
  char pDestBuffer[80]; 

  newString[1] = (HSTRING)-2i64;
  v49 = fakeSignoutForUser;
  v51 = controllerIndexTriggered;
  v56 = userIndexTriggered;
  localClientNuma = localClientNum;
  if ( (unsigned int)controllerIndexTriggered >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2296, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndexTriggered ) < (unsigned)( 8 )", "controllerIndexTriggered doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndexTriggered, 8) )
    __debugbreak();
  XUID::XUID(&v62);
  v6 = 0;
  v58 = NULL;
  disconnectMessage = NULL;
  v46 = 0;
  if ( userIndexTriggered != -1 && Live_SignoutUserIfTheyAreSignedIntoAnotherController(userIndexTriggered, controllerIndexTriggered) )
  {
    v46 = 1;
    disconnectMessage = "XBOXLIVE/USER_CHANGED_CONTROLLER";
  }
  v7 = 0;
  v8 = 0i64;
  v59 = 0i64;
  do
  {
    v9 = 0;
    UserIndexForPort = 0;
    index = -1;
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v11 = v8 << 8;
    if ( !xenonUserData.m_guardedUserData[v8].platformId )
    {
      v12 = NULL;
      v60 = 0i64;
      UserByPlatformId = Users_GetUserByPlatformId(0i64);
      v14 = (__int64)UserByPlatformId;
      v63 = UserByPlatformId;
      if ( UserByPlatformId )
      {
        UserByPlatformId->__abi_AddRef(UserByPlatformId);
        v12 = (const Windows::Xbox::System::User *)v14;
        v60 = v14;
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
      if ( v12 )
      {
        index = Users_GetIndex(v12);
        UserIndexForPort = 1;
        v15 = v12->__abi_get_IsSignedIn(&v12->Windows::Xbox::System::IUser, (bool *)&v47);
        if ( v15 < 0 )
          __abi_WinRTraiseException(v15);
        if ( v47 )
        {
          v16 = Windows::Xbox::System::User::OnlineState::get();
          Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v16);
          v9 = (Windows::Xbox::System::User::OnlineState::get() == SaudiArabia) + 1;
        }
        else
        {
          v9 = 0;
        }
      }
      if ( v12 )
        v12->__abi_Release(&v12->Windows::Xbox::System::IUser);
    }
    v17 = UserIndexForPort;
    if ( !UserIndexForPort )
    {
      if ( v7 > 7 )
      {
        LODWORD(v44) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 907, ASSERT_TYPE_ASSERT, "( ( controllerIndex >= 0 && controllerIndex < 8 ) )", "( controllerIndex ) = %i", v44) )
          __debugbreak();
      }
      if ( GPad_HasInput(v7) && GPad_GetUserIndexForPort(v7, &userIndexToReturn) )
      {
        User = Users_GetUser(userIndexToReturn);
        v19 = (HSTRING)User;
        v64 = User;
        if ( User )
          User->__abi_AddRef(User);
        string = v19;
        if ( v19 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16i64))(v19);
        v20 = (*(__int64 (__fastcall **)(HSTRING, char *))(*(_QWORD *)v19 + 88i64))(v19, &v48);
        if ( v20 < 0 )
          __abi_WinRTraiseException(v20);
        if ( v48 )
        {
          v21 = Windows::Xbox::System::User::OnlineState::get();
          Com_Printf(25, "Live_GetSigninStateForUserFromSystem: thisUser->OnlineState %d (0 = Unknown,1 = Offline, 2 = Online)\n", (unsigned int)v21);
          v9 = (Windows::Xbox::System::User::OnlineState::get() == SaudiArabia) + 1;
        }
        else
        {
          v9 = 0;
        }
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16i64))(v19);
      }
      else
      {
        v9 = 0;
      }
      if ( GPad_HasInput(v7) )
        UserIndexForPort = GPad_GetUserIndexForPort(v7, (int *)&index);
    }
    if ( v49 )
    {
      v22 = !v17;
      v23 = v51;
      if ( !v22 && v7 == v51 )
      {
        v9 = 0;
        LODWORD(fmt) = v51;
        Com_Printf(16, "Live_CheckNotifications_SignInChanged faking signout state for user index %d at controller %d, controller %d was passed in for this user to use.\n", index, v7, fmt);
      }
    }
    else
    {
      v23 = v51;
    }
    if ( !UserIndexForPort )
    {
      platformId = 0i64;
      pDestBuffer[0] = 0;
      v26 = v58;
LABEL_94:
      v33 = v46;
      goto LABEL_95;
    }
    if ( index == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2381, ASSERT_TYPE_ASSERT, "(userIndex != -1)", (const char *)&queryFormat, "userIndex != -1") )
      __debugbreak();
    v24 = Users_GetUser(index);
    v25 = v24;
    v65 = v24;
    v26 = v58;
    if ( v24 != v58 )
    {
      if ( v24 )
        v24->__abi_AddRef(v24);
      if ( v26 )
        v26->__abi_Release(v26);
      v26 = v25;
      v58 = v25;
    }
    if ( v25 )
      v25->__abi_Release(v25);
    v27 = Live_GamertagForUser(v26);
    v66 = v27;
    ConvertStringGamertagToDisplayableBuffer(v27, pDestBuffer, 0x44ui64);
    WindowsDeleteString_0((HSTRING)v27);
    string = NULL;
    v28 = v26->__abi_get_XboxUserId(v26, (Platform::String **)&string);
    if ( v28 < 0 )
      __abi_WinRTraiseException(v28);
    v29 = string;
    if ( string )
    {
      v30 = WindowsDuplicateString_0(string, newString);
      if ( v30 < 0 )
        __abi_WinRTraiseException(v30);
      v31 = newString[0];
      v29 = string;
    }
    else
    {
      v31 = NULL;
    }
    WindowsDeleteString_0(v29);
    v67 = v31;
    ConvertPlatformStringToPlatformId((Platform::String *)v31, &platformId);
    WindowsDeleteString_0(v31);
    if ( index == v56 )
    {
      if ( v7 != v23 )
      {
        LODWORD(v44) = v23;
        LODWORD(fmt) = v7;
        Com_Printf(16, "Live_CheckNotifications_SignInChanged found user index %d (%s) at controller %d, but controller %d was passed in for this user to use. Skipping this user.\n", index, pDestBuffer, fmt, v44);
        goto LABEL_111;
      }
      LODWORD(fmt) = v7;
      Com_Printf(16, "Live_CheckNotifications_SignInChanged found user index %d (%s) at controller %d which is the controller that was passed in to use for this user.\n", index, pDestBuffer, fmt);
    }
    if ( !platformId )
      goto LABEL_94;
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( !*(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v11 + 24] )
      goto LABEL_94;
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( platformId == *(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v11 + 24] )
      goto LABEL_94;
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( !strcmp(pDestBuffer, xenonUserData.m_guardedUserData[(__int64)(int)v7].gamertag) )
    {
      v35 = platformId;
      if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      *(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v11 + 24] = v35;
      goto LABEL_94;
    }
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v32 = platformId;
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    LODWORD(v45) = v7;
    Com_Printf(16, "platformId changed from %llx to %llx and gamertag went from '%s' to '%s', signing out old user (controller %i)\n", *(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v11 + 24], v32, xenonUserData.m_guardedUserData[(__int64)(int)v7].gamertag, pDestBuffer, v45);
    v33 = Live_UserSignedOut(v7, &disconnectMessage, 0, 1) | v46;
    v46 = v33;
    if ( v33 )
    {
      v34 = Users_GetUserByPlatformId(platformId);
      v68 = v34;
      Users_HandleControllerChangedUsersDuringSignout(v34, v7);
      if ( v34 )
        v34->__abi_Release(v34);
      goto LABEL_111;
    }
LABEL_95:
    if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( v9 != *(int *)((char *)&xenonUserData.m_guardedUserData[0].signinState + v11) )
    {
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v37 = Live_UserSignedInLocally(v7, &disconnectMessage);
        }
        else
        {
          if ( v9 != 2 )
            goto LABEL_126;
          v37 = Live_UserSignedInToLive(v7, &disconnectMessage);
        }
        v33 |= v37;
        v46 = v33;
LABEL_126:
        v38 = DVARBOOL_splitscreen;
        if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v38);
        if ( v38->current.enabled )
        {
          v39 = DVARBOOL_onlinegame;
          if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v39);
          if ( !v39->current.enabled && !v33 )
          {
            v40 = localClientNuma;
            if ( CL_GetLocalClientGameConnectionState(localClientNuma) >= CA_CONNECTED )
            {
              Com_Printf(16, "We're playing splitscreen and someone just signed in - we'll send a userinfo string for them.\n");
              Client = ClActiveClient::GetClient(v40);
              Client->SendUserInfo(Client);
            }
          }
        }
      }
      else
      {
        if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        Com_Printf(16, "Gamer %s signed out of their controller (%i)\n", xenonUserData.m_guardedUserData[(__int64)(int)v7].gamertag, v7);
        v42 = CL_AllLocalClientsInactive();
        v33 |= Live_UserSignedOut(v7, &disconnectMessage, 0, v42);
        v46 = v33;
      }
      if ( GamerProfile_IsProfileLoggedIn(v7) && GamerProfile_WasErrorOnRead(v7) )
      {
        if ( v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        Com_Printf(16, "Gamer %s didn't sign out of their controller (%i), but we're pretending they did because we had an error reading their gamer profile\n", xenonUserData.m_guardedUserData[(__int64)(int)v7].gamertag, v7);
        Live_UserSignedOut(v7, &disconnectMessage, 0, 0);
      }
      if ( v33 )
        Live_DisconnectFromWebServices(v7);
    }
LABEL_111:
    ++v7;
    v8 = ++v59;
  }
  while ( (int)v7 < 8 );
  while ( 1 )
  {
    if ( v6 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(v6) > 0 )
      break;
    if ( (int)++v6 >= 8 )
    {
      Dvar_SetBool_Internal(xblive_loggedin, 0);
      break;
    }
  }
  if ( v46 )
    Live_DisconnectOnSignInStatusChanged(disconnectMessage);
  PartyData = Lobby_GetPartyData();
  Voice_SetAllFriendFlags(PartyData);
  Voice_SetAllFriendFlags(&g_partyData);
  if ( v26 )
    v26->__abi_Release(v26);
}

/*
==============
Live_CheckOngoingTasks
==============
*/
void Live_CheckOngoingTasks(void)
{
  int *p_type; 
  __int64 v1; 
  overlappedTask *tasks; 
  __int64 v3; 

  Profile_Begin(812);
  Sys_EnterCriticalSection(CRITSECT_LIVE);
  p_type = &overlappedTasks_0.tasks[0].type;
  v1 = 32i64;
  tasks = overlappedTasks_0.tasks;
  do
  {
    if ( !*((_BYTE *)p_type + 4) )
      goto LABEL_10;
    if ( *p_type )
    {
      LODWORD(v3) = *p_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown live task type %i\n", v3) )
        __debugbreak();
    }
    else
    {
      if ( *(p_type - 2) != 1 )
      {
        if ( *(p_type - 2) != 2 )
          goto LABEL_10;
        Com_PrintError(16, "Error getting session for join.\n");
      }
      TaskManager_ClearTask(tasks);
    }
LABEL_10:
    ++tasks;
    p_type += 10;
    --v1;
  }
  while ( v1 );
  Sys_LeaveCriticalSection(CRITSECT_LIVE);
  Profile_EndInternal(NULL);
}

/*
==============
Live_CheckOnlineStatus
==============
*/
void Live_CheckOnlineStatus()
{
  int i; 
  bool v1; 
  DWOnlineStatus LogOnStatus; 

  for ( i = 0; i < 8; ++i )
  {
    v1 = 1;
    if ( !Live_IsSignedIn(i) )
      v1 = dwGetLogOnStatus(i) != DW_LIVE_DISCONNECTED;
    LogOnStatus = dwGetLogOnStatus(i);
    if ( LogOnStatus == DW_LIVE_DISCONNECTED )
    {
      if ( xb3_dw_disconnect_test->current.enabled )
        dwLogonHSM_xb3::ClearLogonAttemptCount(&g_dwLogonHSMs[i]);
LABEL_11:
      if ( v1 )
        DW_Frame(i);
      continue;
    }
    if ( LogOnStatus != DW_LIVE_CONNECTING || !xb3_dw_disconnect_test->current.enabled || g_DisconnectEndTime <= Sys_Milliseconds() )
      goto LABEL_11;
  }
}

/*
==============
Live_CheckPartyChatQuitTimer
==============
*/
void Live_CheckPartyChatQuitTimer()
{
  LocalClientNum_t FirstActiveLocalClient; 
  PartyData *PartyData; 

  if ( s_partyChatWaitingForQuitTimer && Sys_Milliseconds() - s_partyChatQuitTime >= 0 )
  {
    s_partyChatWaitingForQuitTimer = 0;
    if ( Live_IsInPartyChatWhileDisallowed() )
    {
      if ( !Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5608, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby())", (const char *)&queryFormat, "Lobby_IsInLobby()") )
        __debugbreak();
      if ( Com_FrontEnd_IsInFrontEnd() )
      {
        if ( !Lobby_IsInRunningLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5628, ASSERT_TYPE_ASSERT, "(Lobby_IsInRunningLobby())", "%s\n\tWe're in a lobby at the menus but it is not running", "Lobby_IsInRunningLobby()") )
          __debugbreak();
        if ( g_partyData.inParty && !g_partyData.areWeHost )
          Party_StopParty(&g_partyData);
        Live_ThrowError(ERR_DROP, "@PLATFORM/PARTYCHATNOTALLOWED");
      }
      else if ( Com_IsGameLocalServerRunning() && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") )
      {
        g_pendingPartyChatErrorToDisplay = 1;
        g_partyChatQuitting = 1;
        FirstActiveLocalClient = CL_GetFirstActiveLocalClient();
        Cbuf_AddText(FirstActiveLocalClient, "hostmigration_start\n");
      }
      else
      {
        Party_StopParty(&g_partyData);
        PartyData = Lobby_GetPartyData();
        Party_StopParty(PartyData);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)256, NULL);
        Live_ThrowError(ERR_DROP, "PLATFORM/PARTYCHATNOTALLOWED");
      }
    }
  }
}

/*
==============
Live_ContentRatingAllowed
==============
*/
_BOOL8 Live_ContentRatingAllowed(const int controllerIndex, char **errorString)
{
  _BOOL8 result; 

  if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4746, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
    __debugbreak();
  result = Live_IsSignedIn(controllerIndex);
  if ( !result )
    *errorString = "XBOXLIVE/MPNOTALLOWED";
  return result;
}

/*
==============
Live_DCacheInitialize
==============
*/
void Live_DCacheInitialize(void)
{
  char v0; 

  v0 = s_dCacheEnabled;
  if ( !s_dCacheEnabled )
    v0 = 1;
  s_dCacheEnabled = v0;
}

/*
==============
Live_DCacheShutdown
==============
*/
void Live_DCacheShutdown(void)
{
  s_dCacheEnabled = 0;
}

/*
==============
Live_Disconnected
==============
*/
void Live_Disconnected(const int controllerIndex)
{
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2661, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( !Live_UserIsGuest(controllerIndex) )
    LiveStorage_SaveStats(controllerIndex);
}

/*
==============
Live_DoesSessionMatchGameServerSession
==============
*/
bool Live_DoesSessionMatchGameServerSession(const XSESSION_INFO *sessionInfo)
{
  return Session_IsValid(&g_serverSession) && !XSESSION_INFO::operator!=(&g_serverSession.dyn.sessionInfo, sessionInfo);
}

/*
==============
Live_DoesUserHaveMultiplayerPermissions
==============
*/
char Live_DoesUserHaveMultiplayerPermissions(const int localControllerIndex, OnlinePlayFailureReason *failureReason)
{
  __int64 v2; 
  int GuestUserSponsorControllerIndex; 
  bool v6; 
  char v7; 
  LocalClientNum_t outLocalClientNum; 

  v2 = localControllerIndex;
  if ( (unsigned int)localControllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( (xenonUserData.m_guardedUserData[v2].userPrivileges & 2) != 0 )
  {
    if ( Live_UserIsGuest(v2) && ((GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(v2), v6 = GuestUserSponsorControllerIndex == (_DWORD)v2, GuestUserSponsorControllerIndex < 0) || !CL_Mgr_IsControllerMappedToClient(GuestUserSponsorControllerIndex, &outLocalClientNum) ? (v7 = 0) : (v7 = 1), v6 || !v7) )
    {
      *failureReason = OPFR_GUEST_WITHOUT_SPONSOR;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *failureReason = OPFR_XBOXLIVE_MPNOTALLOWED;
    return 0;
  }
}

/*
==============
Live_DoesUserHavePrivilegeInArray
==============
*/
__int64 Live_DoesUserHavePrivilegeInArray(int controllerIndex, unsigned int privilege)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v4; 
  Windows::Xbox::System::UserDisplayInfo *v5; 
  Windows::Foundation::Collections::IVectorView<unsigned int> *v6; 
  __int64 v7; 
  unsigned int i; 
  int v9; 
  int v10; 
  __int64 v12[9]; 
  unsigned __int8 v13; 
  void *v14; 

  v12[1] = -2i64;
  v13 = 0;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v4 = UserFromControllerIndex;
  v14 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  v12[2] = (__int64)v4;
  if ( v4 )
    v4->__abi_Release(v4);
  if ( v4 )
  {
    v5 = Windows::Xbox::System::IUser::DisplayInfo::get(v4);
    v14 = v5;
    v6 = Windows::Xbox::System::IUserDisplayInfo::Privileges::get(v5);
    v7 = (__int64)v6;
    v12[0] = (__int64)v6;
    if ( v6 )
      v6->__abi_AddRef(v6);
    v12[3] = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
    if ( v5 )
      v5->__abi_Release(v5);
    if ( v7 )
    {
      for ( i = 0; ; ++i )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 56i64))(v7, &v14);
        if ( v9 < 0 )
          __abi_WinRTraiseException(v9);
        if ( i >= (unsigned int)v14 )
          break;
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 48i64))(v7, i, v12);
        if ( v10 < 0 )
          __abi_WinRTraiseException(v10);
        if ( privilege == LODWORD(v12[0]) )
        {
          v13 = 1;
          break;
        }
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  }
  if ( v4 )
    v4->__abi_Release(v4);
  return v13;
}

/*
==============
Live_FakeUserSignIn
==============
*/
void Live_FakeUserSignIn(const int controllerIndex, const char *gamertag)
{
  __int64 v2; 
  unsigned __int64 v4; 
  XUID result; 

  v2 = controllerIndex;
  if ( Live_IsSignedIn(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2274, ASSERT_TYPE_ASSERT, "(!Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "!Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  XUID::RandomXUID(&result);
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v4 = XUID::ToUint64(&result);
  Live_SetPlatformId(v2, v4);
  Live_SetUniversalId(v2, result);
  xenonUserData.m_guardedUserData[v2].signinState = 1;
  Live_SetLocalClientPlatformUserName(v2, gamertag);
}

/*
==============
Live_FakeUserSignout
==============
*/
void Live_FakeUserSignout(LocalClientNum_t localClientNum, const int controllerIndex)
{
  Live_CheckNotifications_SignInChanged(localClientNum, -1, controllerIndex, 1);
}

/*
==============
Live_ForcePlatformSignInStateRefresh
==============
*/
void Live_ForcePlatformSignInStateRefresh(void)
{
  s_checkForSigninStatusChanges = 1;
}

/*
==============
Live_Frame
==============
*/
void Live_Frame(const int msec)
{
  int v1; 
  char v2; 
  int v3; 
  int i; 
  int v5; 
  unsigned int v6; 
  int j; 
  const dvar_t *v8; 
  int v9; 
  __int64 v10; 
  XenonUserDataWrapper *v11; 
  Online_Loot *Instance; 
  Online_Commerce *v13; 
  Online_Commerce *v14; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int ActivationFactoryByPCWSTR; 
  int v19; 
  __int64 v20; 
  Windows::Xbox::System::User *v21; 
  Windows::Xbox::System::User *v22; 
  int v23; 
  int ControllerFromClient; 
  const dvar_t *v25; 
  int v26; 
  Platform::String *v27; 
  int k; 
  const dvar_t *v29; 
  Online_Error_CAT_PLATFORM_t v30; 
  const char *v31; 
  TaskManager *v32; 
  int *p_type; 
  overlappedTask *tasks; 
  __int64 v35; 
  int m; 
  unsigned int v37; 
  int GuestUserSponsorControllerIndex; 
  int v39; 
  PartyData *PartyData; 
  int ShouldKickIfNotOnline; 
  PartyDisconnectReason v42; 
  __int64 v43; 
  __int64 v44; 
  Platform::Guid pGuid; 
  Platform::String *controllerIndex; 
  void *ppActivationFactory; 
  Windows::Xbox::System::User *v49; 

  v1 = Sys_Milliseconds();
  LODWORD(controllerIndex) = v1;
  Profile_Begin(806);
  v2 = 0;
  v3 = 0;
  if ( xb3_dw_disconnect_test->current.enabled )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( Live_IsConnectedToDemonware(i) )
        v2 = 1;
    }
    if ( v2 )
    {
      v5 = Sys_Milliseconds();
      v6 = v5;
      if ( g_NextDisconnectTime <= 0 || v5 >= g_NextDisconnectTime )
      {
        for ( j = 0; j < 8; ++j )
          Live_DisconnectFromWebServices(j);
        g_DisconnectEndTime = v6 + I_irand(0, 20000);
        g_NextDisconnectTime = g_DisconnectEndTime + I_irand(0, 40000);
        Com_Printf(16, "***DEV*** Scheduled Demonware disconnect test running at %i until %i (for %i ms).\n", v6, (unsigned int)g_DisconnectEndTime, g_DisconnectEndTime - v6);
        Com_Printf(16, "***DEV*** Next test in %i ms, at %i.\n", (unsigned int)(g_NextDisconnectTime - g_DisconnectEndTime), (unsigned int)g_NextDisconnectTime);
      }
    }
  }
  if ( s_checkForSignoutStatusChanges )
  {
    s_checkForSignoutStatusChanges = 0;
    Live_CheckForSignoutStatusChanges();
  }
  if ( s_checkForContentChanges && v1 - s_checkForContentChangesTime >= 0 && Com_FrontEnd_IsInFrontEnd() )
  {
    s_checkForContentChanges = 0;
    v8 = DVARINT_xb3_content_change_cooldown;
    if ( !DVARINT_xb3_content_change_cooldown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_content_change_cooldown") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    s_checkForContentChangesTime = v1 + v8->current.integer;
    Com_Printf(16, "Live_CheckForContentChanges\n");
    v9 = 0;
    v10 = 0i64;
    v11 = &xenonUserData;
    do
    {
      if ( (unsigned int)v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( v11->m_guardedUserData[0].signinState > 0 )
      {
        Content_FindContentPacks(v9);
        Instance = Online_Loot::GetInstance();
        if ( Online_Loot::HasInventory(Instance, v9) && Online_Commerce::GetInstance()->m_storeEntitlements[v10].taskState != ENTITLEMENT_STATE_WORKING && Online_Commerce::GetInstance()->m_storeEntitlements[v10].taskState != ENTITLEMENT_STATE_EXCHANGING )
        {
          v13 = Online_Commerce::GetInstance();
          Online_Commerce::ResetStoreEntitlements(v13, v9, 0);
          v14 = Online_Commerce::GetInstance();
          Online_Commerce::GetEntitlements(v14, v9);
        }
      }
      ++v9;
      v11 = (XenonUserDataWrapper *)((char *)v11 + 256);
      ++v10;
    }
    while ( v9 < 8 );
    v3 = 0;
    v1 = (int)controllerIndex;
  }
  if ( s_networkStatusImproved )
  {
    s_networkStatusImproved = 0;
    s_checkForSigninStatusChanges = 1;
    s_checkForSigninStateChangesTimer = v1;
  }
  v15 = Sys_Milliseconds();
  v16 = v15;
  if ( s_checkForSigninStateChangesTimer )
  {
    if ( v15 - s_checkForSigninStateChangesTimer > 30000 )
    {
      s_checkForSigninStateChangesTimer = 0;
      s_lastSigninStateCheckTimer = 0;
    }
    else
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( CL_GetLocalClientSignInState(v17) > 0 )
        {
          if ( v17 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          if ( CL_GetLocalClientSignInState(v17) != 2 )
            break;
        }
        if ( (int)++v17 >= 8 )
          goto LABEL_49;
      }
      if ( v16 - s_lastSigninStateCheckTimer >= 1000 )
      {
        Com_Printf(16, "Live_CheckForSigninUpgradesPeriodicallyAfterNetworkStatusChange triggering sign in status check.\n");
        s_checkForSigninStatusChanges = 1;
        goto LABEL_50;
      }
    }
  }
LABEL_49:
  if ( s_checkForSigninStatusChanges )
  {
LABEL_50:
    if ( Com_FrontEnd_IsInFrontEnd() )
    {
      s_checkForSigninStatusChanges = 0;
      Live_CheckForSigninStatusChanges();
      s_lastSigninStateCheckTimer = v1;
    }
  }
  if ( s_updateCurrentUser )
  {
    s_updateCurrentUser = 0;
    if ( g_appContextRecommendedUser )
    {
      g_appContextRecommendedUser->__abi_Release(g_appContextRecommendedUser);
      g_appContextRecommendedUser = NULL;
    }
    pGuid.__vftable = (Platform::Object_vtbl *)0x4D41B9ACD8D4C59Fi64;
    *(_DWORD *)&pGuid.__d = 480259460;
    *(_DWORD *)&pGuid.__h = -417876391;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.ApplicationModel.Core.CoreApplicationContext", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    controllerIndex = NULL;
    v19 = (*(__int64 (__fastcall **)(void *, Platform::String **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &controllerIndex);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
    v20 = (__int64)controllerIndex;
    v21 = (Windows::Xbox::System::User *)controllerIndex;
    if ( controllerIndex )
    {
      controllerIndex->__abi_AddRef(controllerIndex);
      v20 = (__int64)controllerIndex;
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
    v49 = NULL;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v49 = v21;
    v22 = g_appContextRecommendedUser;
    if ( v21 != g_appContextRecommendedUser )
    {
      if ( v21 )
      {
        v21->__abi_AddRef(v21);
        v22 = g_appContextRecommendedUser;
      }
      if ( v22 )
        v22->__abi_Release(v22);
      g_appContextRecommendedUser = v21;
    }
    if ( v21 )
      v21->__abi_Release(v21);
  }
  v23 = Sys_Milliseconds();
  if ( !CL_IsLocalClientActive(LOCAL_CLIENT_0) || (ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !Live_IsSignedIn(ControllerFromClient)) )
  {
    if ( clientUIActives[0].connectionState != CA_ACTIVE )
    {
      v25 = DVARINT_xb3_primary_gamertag_update_delay;
      if ( !DVARINT_xb3_primary_gamertag_update_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xb3_primary_gamertag_update_delay") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v23 - dword_156442184 > v25->current.integer )
      {
        *(_QWORD *)s_firstUserGamertagAtStart = 0i64;
        *(_QWORD *)&s_firstUserGamertagAtStart[8] = 0i64;
        *(_QWORD *)&s_firstUserGamertagAtStart[16] = 0i64;
        *(_QWORD *)&s_firstUserGamertagAtStart[24] = 0i64;
        *(_DWORD *)&s_firstUserGamertagAtStart[32] = 0;
        if ( g_appContextRecommendedUser )
        {
          v26 = g_appContextRecommendedUser->__abi_get_IsSignedIn(g_appContextRecommendedUser, (bool *)&controllerIndex);
          if ( v26 < 0 )
            __abi_WinRTraiseException(v26);
          if ( (_BYTE)controllerIndex )
          {
            v27 = Live_GamertagForUser(g_appContextRecommendedUser);
            controllerIndex = v27;
            ConvertStringGamertagToDisplayableBuffer(v27, s_firstUserGamertagAtStart, 0x24ui64);
            WindowsDeleteString_0((HSTRING)v27);
          }
        }
        dword_156442184 = v23;
      }
    }
  }
  if ( s_showErrorDialogOnResume || s_markOnlineStatsForDiscard && Com_FrontEnd_IsInFrontEnd() )
  {
    if ( s_markOnlineStatsForDiscard )
    {
      for ( k = 0; k < 8; ++k )
      {
        if ( LiveStorage_AreStatsFetched(k, STATS_ONLINE) )
          LiveStorage_DiscardStats(k, STATS_ONLINE);
      }
    }
    s_showErrorDialogOnResume = 0;
    s_markOnlineStatsForDiscard = 0;
    v29 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    v30 = 0x8000;
    if ( !v29->current.enabled )
      v30 = 0x10000;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v30, NULL);
    if ( s_showSystemlinkErrorMessageTypeOnResume )
    {
      s_showSystemlinkErrorMessageTypeOnResume = 0;
      v31 = "XBOXLIVE/LANSUSPEND";
    }
    else
    {
      v31 = "XBOXLIVE/LIVEERROR";
    }
    Live_ThrowError(ERR_DROP, v31);
  }
  LODWORD(controllerIndex) = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  RESTRequest_UpdateAll();
  Sys_ProfBeginNamedEvent(0xFFFFA500, "Live_Frame");
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4621, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Live_CheckOnlineStatus();
  v32 = TaskManager::GetInstance();
  TaskManager::Update(v32);
  TaskBreaker_Update();
  Profile_Begin(812);
  Sys_EnterCriticalSection(CRITSECT_LIVE);
  p_type = &overlappedTasks_0.tasks[0].type;
  tasks = overlappedTasks_0.tasks;
  v35 = 32i64;
  do
  {
    if ( !*((_BYTE *)p_type + 4) )
      goto LABEL_112;
    if ( *p_type )
    {
      LODWORD(v44) = *p_type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4135, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown live task type %i\n", v44) )
        __debugbreak();
    }
    else
    {
      if ( *(p_type - 2) != 1 )
      {
        if ( *(p_type - 2) != 2 )
          goto LABEL_112;
        Com_PrintError(16, "Error getting session for join.\n");
      }
      TaskManager_ClearTask(tasks);
    }
LABEL_112:
    ++tasks;
    p_type += 10;
    --v35;
  }
  while ( v35 );
  Sys_LeaveCriticalSection(CRITSECT_LIVE);
  Profile_EndInternal(NULL);
  Live_CheckOngoingSessionTasks();
  Content_CheckOngoingSessionTasks();
  for ( m = 0; m < 2; ++m )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)m) )
    {
      v37 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)m);
      if ( !Live_UserIsGuest(v37) )
        goto LABEL_121;
      if ( !Live_UserIsGuest(v37) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3353, ASSERT_TYPE_ASSERT, "(Live_UserIsGuest( localControllerIndex ))", (const char *)&queryFormat, "Live_UserIsGuest( localControllerIndex )") )
        __debugbreak();
      GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(v37);
      if ( GuestUserSponsorControllerIndex >= 0 && GuestUserSponsorControllerIndex != v37 )
      {
LABEL_121:
        Profile_Begin(807);
        if ( v37 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        if ( CL_GetLocalClientSignInState(v37) == 2 )
          Voice_Update(v37);
        if ( !Live_UserIsGuest(v37) )
          XB3GameEvent_Update(v37);
        Profile_EndInternal(NULL);
      }
    }
  }
  v39 = (int)controllerIndex;
  do
  {
    if ( Live_IsSignedIn(v3) )
      Live_SignedInControllerFrame(v3);
    ++v3;
  }
  while ( v3 < 8 );
  Live_CheckPartyChatQuitTimer();
  LiveStorage_CheckOngoingSessionTasks();
  PartyAtomic_PartyJoinFrame();
  PartyData = Lobby_GetPartyData();
  Party_Frame(PartyData, v39, msec);
  Party_Frame(&g_partyData, v39, msec);
  LUI_DataBindingLobby_UpdateLobby();
  LUI_DataBindingMLG_UpdateMLG();
  Session_Frame();
  if ( g_pendingPartyChatErrorToDisplay && !g_partyChatQuitting && Com_FrontEnd_IsInFrontEnd() )
  {
    g_pendingPartyChatErrorToDisplay = 0;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)128, NULL);
    Live_ThrowError(ERR_DROP, "PLATFORM/PARTYCHATNOTALLOWED");
  }
  if ( Live_IsInPartyChatWhileDisallowed() && !s_partyChatWaitingForQuitTimer && !g_partyChatQuitting )
  {
    s_partyChatWaitingForQuitTimer = 1;
    s_partyChatQuitTime = partyChatDisconnectTimer->current.integer + Sys_Milliseconds();
    Live_CheckPartyChatQuitTimer();
  }
  XB3_KeyboardUpdate();
  ShouldKickIfNotOnline = Live_ShouldKickIfNotOnline();
  if ( !Live_IsInSystemlinkLobby() && ShouldKickIfNotOnline )
    Live_CheckNetConnection(v43, v42);
  XB3_Privacy_Frame();
  LiveCommon_Frame(msec, v39);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
}

/*
==============
Live_GamertagForUser
==============
*/
Platform::String *Live_GamertagForUser(Windows::Xbox::System::User *user)
{
  int v1; 
  Windows::Xbox::System::IUserDisplayInfo *v2; 
  Windows::Xbox::System::IUserDisplayInfo *v3; 
  Platform::String *v4; 
  Windows::Xbox::System::IUserDisplayInfo *v6; 
  Windows::Xbox::System::IUserDisplayInfo *v7; 

  v6 = NULL;
  v1 = user->__abi_get_DisplayInfo(user, (Windows::Xbox::System::UserDisplayInfo **)&v6);
  if ( v1 < 0 )
    __abi_WinRTraiseException(v1);
  v2 = v6;
  v3 = v6;
  if ( v6 )
  {
    v6->__abi_AddRef(v6);
    v2 = v6;
  }
  if ( v2 )
    v2->__abi_Release(v2);
  v7 = v3;
  v4 = Windows::Xbox::System::IUserDisplayInfo::Gamertag::get(v3);
  v7 = NULL;
  WindowsDeleteString_0(NULL);
  if ( v3 )
    v3->__abi_Release(v3);
  return v4;
}

/*
==============
Live_GetAchievementStats
==============
*/
void Live_GetAchievementStats(const int controllerIndex)
{
  __int64 v2; 
  __int64 v3; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v4; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v6; 
  __int64 v7; 
  int i; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  HSTRING v10; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  int v12; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v14; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  __int64 v16; 
  __int64 v17; 
  HSTRING v18; 
  HSTRING v19; 
  int v20; 
  __int64 v21; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> *v22; 
  const std::shared_ptr<Concurrency::scheduler_interface> *ambient_scheduler; 
  std::_Ref_count_base *Rep; 
  Concurrency::task<void> *v26; 
  volatile signed __int32 *v27; 
  std::_Ref_count_base *v28; 
  int v29; 
  __int64 v30; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> *v31; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v32; 
  int v33; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v34; 
  HSTRING v35; 
  Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> *v36; 
  __int64 v37; 
  Windows::Xbox::System::User *v38; 
  Concurrency::task_options v39; 
  __int64 v40; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v41; 
  Windows::Xbox::System::IUser *v42; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v43; 
  Concurrency::scheduler_interface *Ptr; 
  Live_GetAchievementStats::__l5::<lambda_82c21ff187424bc419ee87622aa0186d> _Func; 
  volatile signed __int32 *v46; 
  Concurrency::task<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> v47; 
  wchar_t _Buffer[32]; 

  v40 = -2i64;
  v2 = controllerIndex;
  v33 = controllerIndex;
  v32 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v32);
  v4 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v3;
  v37 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8i64))(v3);
  v41 = v4;
  if ( v4 )
    v4->__abi_Release(v4);
  UserFromControllerIndex = GetUserFromControllerIndex(v2);
  v6 = UserFromControllerIndex;
  v38 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  v42 = v6;
  if ( v6 )
    v6->__abi_Release(v6);
  memset_0(&s_achievementUnlockStatus[v2], 0, sizeof(AchievementUnlockList));
  v7 = 0i64;
  for ( i = 0; i < 50; ++i )
  {
    swprintf_s<32>((wchar_t (*)[32])_Buffer, L"Achievement%iUnlocked", (unsigned int)i);
    Platform::String::String(NULL, _Buffer);
    v10 = (HSTRING)v9;
    v32 = v9;
    j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v4, (Platform::String *)v9);
    WindowsDeleteString_0(v10);
  }
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(v2);
  v30 = (__int64)UsersXboxLiveContext;
  v34 = NULL;
  v12 = UsersXboxLiveContext->__abi_get_UserStatisticsService(UsersXboxLiveContext, (Microsoft::Xbox::Services::UserStatistics::UserStatisticsService **)&v34);
  if ( v12 < 0 )
    __abi_WinRTraiseException(v12);
  v13 = v34;
  v14 = v34;
  v32 = v34;
  if ( v34 )
  {
    v34->__abi_AddRef(v34);
    v13 = v34;
  }
  if ( v13 )
    v13->__abi_Release(v13);
  v31 = (Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> *)v14;
  if ( v14 )
    v14->__abi_AddRef(v14);
  v43 = v14;
  if ( v14 )
    v14->__abi_Release(v14);
  UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
  v15 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v15, &v4->m_ctr, &v4->m_vec);
  v17 = v16;
  v30 = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  v30 = v17;
  v18 = g_serviceConfigurationId;
  v19 = (HSTRING)Windows::Xbox::System::IUser::XboxUserId::get(v6);
  v35 = v19;
  v31 = NULL;
  v20 = ((__int64 (__fastcall *)(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *, HSTRING, HSTRING, __int64, Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult _> **))v14->Windows::Foundation::Collections::IObservableVector<Platform::String _>::Platform::Object::__vftable[1].__abi_GetIids)(v14, v19, v18, v17, &v31);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  v21 = (__int64)v31;
  v22 = v31;
  if ( v31 )
  {
    v31->__abi_AddRef(v31);
    v21 = (__int64)v31;
  }
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
  v36 = v22;
  if ( v22 )
    v22->__abi_AddRef(v22);
  v36 = v22;
  if ( v22 )
    v22->__abi_Release(v22);
  WindowsDeleteString_0(v19);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  ambient_scheduler = Concurrency::get_ambient_scheduler();
  Rep = ambient_scheduler->_Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Rep = ambient_scheduler->_Rep;
  }
  Ptr = ambient_scheduler->_Ptr;
  v39._M_Scheduler._M_sharedScheduler._Ptr = Ptr;
  v39._M_Scheduler._M_sharedScheduler._Rep = Rep;
  v39._M_Scheduler._M_scheduler = Ptr;
  v39._M_CancellationToken._M_Impl = NULL;
  v39._M_ContinuationContext._M_context._M_captureMethod = 1i64;
  v39._M_ContinuationContext._M_RunInline = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+1A8h+var_F0], xmm0
  }
  v39._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
  v39._M_InternalTaskOptions._M_presetCreationCallstack._M_SingleFrame = NULL;
  v39._M_InternalTaskOptions._M_hasPresetCreationCallstack = 0;
  *(_WORD *)&v39._M_HasCancellationToken = 0;
  v26 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult __gc *> __gc *>(&v47, v22, &v39);
  LODWORD(v35) = v33;
  Concurrency::task_Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult___::then__lambda_82c21ff187424bc419ee87622aa0186d___(v26, &_Func);
  v27 = v46;
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8i64))(v27);
    }
  }
  v28 = v47._M_Impl._Rep;
  if ( v47._M_Impl._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v47._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v28->_Destroy(v28);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28->_Weaks, 0xFFFFFFFF) == 1 )
        v28->_Delete_this(v28);
    }
  }
  if ( v22 )
    v22->__abi_Release(v22);
  if ( v14 )
    v14->__abi_Release(v14);
  if ( v6 )
    v6->__abi_Release(v6);
  v30 = 0i64;
  if ( v4 )
  {
    if ( v4->__abi_QueryInterface(v4, (Platform::Guid *)&_uuidof__AUIDisposable_Platform__, (void **)&v30) )
      goto LABEL_57;
    v7 = v30;
  }
  if ( v7 )
  {
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48i64))(v7);
    if ( v29 < 0 )
      __abi_WinRTraiseException(v29);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  }
LABEL_57:
  if ( v4 )
    v4->__abi_Release(v4);
}

/*
==============
Live_GetCachedXboxUser
==============
*/
Windows::Xbox::System::User *Live_GetCachedXboxUser(int controllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *cachedUser; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4771, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  cachedUser = xenonUserData.m_guardedUserData[v1].cachedUser;
  if ( cachedUser )
    cachedUser->__abi_AddRef(cachedUser);
  return cachedUser;
}

/*
==============
Live_GetConsoleDetails
==============
*/
__int64 Live_GetConsoleDetails(int verboseIfErrorIn, unsigned __int8 *consoleInternalIP, unsigned __int8 *consoleExternalIP, unsigned __int64 *machineIDHigh, unsigned __int64 *machineIDLow, unsigned __int64 *macAddress)
{
  bdCommonAddr *v9; 
  unsigned int v10; 
  bdCommonAddr *v11; 
  __int64 *LocalCommonAddr; 
  unsigned __int8 In4AddrByte; 
  __int64 v22; 
  __int64 v23; 
  bdCommonAddr *v24; 
  int v25; 
  __int64 v26; 
  bdAddr v27; 

  v26 = -2i64;
  v9 = NULL;
  v24 = NULL;
  bdAddr::bdAddr(&v27);
  if ( Live_GetMachineId(machineIDLow, machineIDHigh) )
  {
    if ( Live_GetMACAddressAsUint64(macAddress) )
    {
      v25 = *Sys_GetLocalIP(0);
      *(_DWORD *)consoleInternalIP = v25;
      Com_Printf(16, "Live_GetConsoleDetails retrieved local ip %i.%i.%i.%i\n", *consoleInternalIP, consoleInternalIP[1], consoleInternalIP[2], consoleInternalIP[3]);
      LocalCommonAddr = (__int64 *)NET_GetLocalCommonAddr();
      v11 = NULL;
      if ( LocalCommonAddr != (__int64 *)&v24 )
      {
        v9 = (bdCommonAddr *)*LocalCommonAddr;
        v11 = v9;
        v24 = (bdCommonAddr *)*LocalCommonAddr;
        if ( v9 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
          v9 = v24;
        }
      }
      _RAX = bdCommonAddr::getPublicAddr(v9);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rsp+128h+var_D8.m_address.inUn], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+128h+var_D8.m_address.inUn+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rsp+128h+var_D8.m_address.inUn+40h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rsp+128h+var_D8.m_address.inUn+60h], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rsp+128h+var_D8.m_relayRoute.m_relayID], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  qword ptr [rsp+128h+var_D8.m_type], xmm1
      }
      *consoleExternalIP = bdSockAddr::getIn4AddrByte(&v27.m_address, 0);
      consoleExternalIP[1] = bdSockAddr::getIn4AddrByte(&v27.m_address, 1);
      consoleExternalIP[2] = bdSockAddr::getIn4AddrByte(&v27.m_address, 2);
      In4AddrByte = bdSockAddr::getIn4AddrByte(&v27.m_address, 3);
      consoleExternalIP[3] = In4AddrByte;
      if ( *consoleExternalIP || consoleExternalIP[1] != 0xFF || consoleExternalIP[2] || In4AddrByte != 0xFF )
      {
        LODWORD(v23) = In4AddrByte;
        LODWORD(v22) = consoleExternalIP[2];
        Com_Printf(16, "Our remote IP:  %d.%d.%d.%d\n", *consoleExternalIP, consoleExternalIP[1], v22, v23);
      }
      else
      {
        Com_PrintError(16, "ERROR: LiveAntiCheat_GetConsoleDetails() : BAD PUBLIC IP 0.255.0.255 EXTRACTED!.\n");
      }
      v10 = 1;
    }
    else
    {
      Com_Printf(16, "Live_GetConsoleDetails failed, could not retrieve mac address.\n");
      v10 = 0;
      v11 = NULL;
    }
  }
  else
  {
    Com_Printf(16, "Live_GetConsoleDetails failed, could not retrieve console ID.\n");
    v10 = 0;
    v11 = NULL;
  }
  if ( v9 && _InterlockedExchangeAdd((volatile signed __int32 *)&v11->m_refCount, 0xFFFFFFFF) == 1 )
    ((void (__fastcall *)(bdCommonAddr *, __int64))v24->~bdReferencable)(v24, 1i64);
  return v10;
}

/*
==============
Live_GetControllerIndexForPlatformId
==============
*/
__int64 Live_GetControllerIndexForPlatformId(const unsigned __int64 platformId)
{
  unsigned int v2; 
  unsigned __int64 *p_platformId; 
  unsigned __int64 i; 

  if ( !platformId )
    return 0xFFFFFFFFi64;
  v2 = 0;
  p_platformId = &xenonUserData.m_guardedUserData[0].platformId;
  for ( i = 0i64; ; ++i )
  {
    if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( *p_platformId == platformId )
      break;
    ++v2;
    p_platformId += 32;
    if ( (__int64)p_platformId >= (__int64)s_firstUserGamertagAtStart )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Live_GetControllerIndexForUserFromXenonUserData
==============
*/
char Live_GetControllerIndexForUserFromXenonUserData(Platform::String *xboxUserId, int *controllerIndex)
{
  int v3; 
  unsigned __int64 *p_platformId; 
  unsigned __int64 i; 
  unsigned __int64 platformId; 

  *controllerIndex = -1;
  ConvertPlatformStringToPlatformId(xboxUserId, &platformId);
  v3 = 0;
  p_platformId = &xenonUserData.m_guardedUserData[0].platformId;
  for ( i = 0i64; ; ++i )
  {
    if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( platformId == *p_platformId )
      break;
    ++v3;
    p_platformId += 32;
    if ( (__int64)p_platformId >= (__int64)s_firstUserGamertagAtStart )
      return 0;
  }
  *controllerIndex = v3;
  return 1;
}

/*
==============
Live_GetControllerIndexFromXuid
==============
*/
__int64 Live_GetControllerIndexFromXuid(XUID xuid)
{
  unsigned int v1; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v1 = 0;
  while ( 1 )
  {
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( XUID::operator==(&xenonUserData.m_guardedUserData[(__int64)(int)v1].xuid, &xuida) )
      break;
    if ( (int)++v1 >= 8 )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
Live_GetCurrentNetworkConnectionStatus
==============
*/
_BOOL8 Live_GetCurrentNetworkConnectionStatus()
{
  Windows::Networking::Connectivity::ConnectionProfile *InternetConnectionProfile; 
  Windows::Networking::Connectivity::ConnectionProfile *v1; 
  int v2; 
  int v3; 
  bool v4; 
  __int64 v6; 
  Windows::Networking::Connectivity::ConnectionProfile *v7; 

  InternetConnectionProfile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
  v1 = InternetConnectionProfile;
  v7 = InternetConnectionProfile;
  v2 = 0;
  v6 = 0i64;
  if ( InternetConnectionProfile )
  {
    LODWORD(v6) = 0;
    v3 = InternetConnectionProfile->__abi_GetNetworkConnectivityLevel(InternetConnectionProfile, (Windows::Networking::Connectivity::NetworkConnectivityLevel *)&v6);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    v2 = v6;
    Com_Printf(16, "Live_GetCurrentNetworkConnectionStatus detected status = %d\n", (unsigned int)v6);
  }
  v4 = v2 != 0;
  if ( v1 )
    v1->__abi_Release(v1);
  return v4;
}

/*
==============
Live_GetDoesUserHaveCrossplayPrivilege
==============
*/
bool Live_GetDoesUserHaveCrossplayPrivilege(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (xenonUserData.m_guardedUserData[v1].userPrivileges & 0x10) != 0;
}

/*
==============
Live_GetDoesUserHaveOnlineCommunicationsPrivilege
==============
*/
bool Live_GetDoesUserHaveOnlineCommunicationsPrivilege(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].userPrivileges & 1;
}

/*
==============
Live_GetDoesUserHaveOnlinePlayPrivilege
==============
*/
bool Live_GetDoesUserHaveOnlinePlayPrivilege(int controllerIndex)
{
  bool result; 
  Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult checkResult; 

  result = 1;
  if ( !Live_DoesUserHavePrivilegeInArray(controllerIndex, 0xFEu) )
  {
    checkResult = NoIssue;
    if ( !Live_GetPrivilege(controllerIndex, XPRIVILEGE_MULTIPLAYER_SESSIONS, &checkResult, 0) || checkResult )
      return 0;
  }
  return result;
}

/*
==============
Live_GetDoesUserHaveSocialNetworkSharingPrivilege
==============
*/
bool Live_GetDoesUserHaveSocialNetworkSharingPrivilege(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (xenonUserData.m_guardedUserData[v1].userPrivileges & 4) != 0;
}

/*
==============
Live_GetDoesUserHaveUGCPrivilege
==============
*/
bool Live_GetDoesUserHaveUGCPrivilege(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (xenonUserData.m_guardedUserData[v1].userPrivileges & 8) != 0;
}

/*
==============
Live_GetGuestUserSponsorControllerIndex
==============
*/
__int64 Live_GetGuestUserSponsorControllerIndex(int controllerIndex)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::User *v2; 
  unsigned int v3; 
  int v4; 
  int v5; 
  Windows::Xbox::System::IUser *v6; 
  Windows::Xbox::System::IUser *v7; 
  Platform::String *v8; 
  bool ControllerIndexForUserFromXenonUserData; 
  int v10; 
  Windows::Xbox::System::IUser *v12; 
  int controllerIndexa; 
  Platform::String *v14; 

  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v2 = UserFromControllerIndex;
  v12 = NULL;
  v3 = -1;
  controllerIndexa = -1;
  if ( UserFromControllerIndex )
  {
    v4 = UserFromControllerIndex->__abi_get_IsGuest(UserFromControllerIndex, (bool *)&v12);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    if ( (_BYTE)v12 )
    {
      v12 = NULL;
      v5 = v2->__abi_get_Sponsor(v2, (Windows::Xbox::System::User **)&v12);
      if ( v5 < 0 )
        __abi_WinRTraiseException(v5);
      v6 = v12;
      v7 = v12;
      if ( v12 )
      {
        v12->__abi_AddRef(v12);
        v6 = v12;
      }
      if ( v6 )
        v6->__abi_Release(v6);
      v14 = NULL;
      v8 = Windows::Xbox::System::IUser::XboxUserId::get(v7);
      v14 = v8;
      ControllerIndexForUserFromXenonUserData = Live_GetControllerIndexForUserFromXenonUserData(v8, &controllerIndexa);
      WindowsDeleteString_0((HSTRING)v8);
      v10 = controllerIndexa;
      if ( !ControllerIndexForUserFromXenonUserData )
        v10 = -1;
      v3 = v10;
      if ( v7 )
        v7->__abi_Release(v7);
    }
  }
  if ( v2 )
    v2->__abi_Release(v2);
  return v3;
}

/*
==============
Live_GetLocaClientGamertagSuffix
==============
*/
__int64 Live_GetLocaClientGamertagSuffix(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2517, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].gamertagSuffix;
}

/*
==============
Live_GetLocalClientFullName
==============
*/
char *Live_GetLocalClientFullName(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].fullGamertag;
}

/*
==============
Live_GetLocalClientHashOfGamertag
==============
*/
__int64 Live_GetLocalClientHashOfGamertag(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2524, ASSERT_TYPE_ASSERT, "((controllerIndex >= 0) && (controllerIndex < 8))", (const char *)&queryFormat, "(controllerIndex >= 0) && (controllerIndex < MAX_GPAD_COUNT)") )
      __debugbreak();
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
  }
  return xenonUserData.m_guardedUserData[v1].hashOfGamertag;
}

/*
==============
Live_GetLocalClientName
==============
*/
char *Live_GetLocalClientName(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2495, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( Live_IsUserSignedInToDemonware(v1) )
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    return xenonUserData.m_guardedUserData[v1].gamertag;
  }
  else
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    return xenonUserData.m_guardedUserData[v1].platformGamertag;
  }
}

/*
==============
Live_GetLocalClientPlatformUsername
==============
*/
char *Live_GetLocalClientPlatformUsername(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2510, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].platformGamertag;
}

/*
==============
Live_GetLocalClientXuidString
==============
*/
char *Live_GetLocalClientXuidString(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( controllerIndex < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3650, ASSERT_TYPE_ASSERT, "(controllerIndex >= 0)", (const char *)&queryFormat, "controllerIndex >= 0") )
    __debugbreak();
  if ( (int)v1 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3651, ASSERT_TYPE_ASSERT, "(controllerIndex < 8)", (const char *)&queryFormat, "controllerIndex < MAX_GPAD_COUNT") )
    __debugbreak();
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].xuidString;
}

/*
==============
Live_GetMostRestrictiveVoiceCommunicationSetting
==============
*/
__int64 Live_GetMostRestrictiveVoiceCommunicationSetting()
{
  unsigned int v0; 
  unsigned __int8 *p_userPrivileges; 
  int i; 

  v0 = 0;
  p_userPrivileges = &xenonUserData.m_guardedUserData[0].userPrivileges;
  for ( i = 0; i < 8; ++i )
  {
    if ( (unsigned int)i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(i) == 2 && !Live_UserIsGuest(i) && CL_GetLocalClientSignInState(i) )
    {
      if ( (unsigned int)i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( (*p_userPrivileges & 1) == 0 )
        v0 = 2;
    }
    p_userPrivileges += 256;
  }
  return v0;
}

/*
==============
Live_GetNetworkConnectivityLevel
==============
*/
__int64 Live_GetNetworkConnectivityLevel()
{
  Windows::Networking::Connectivity::ConnectionProfile *InternetConnectionProfile; 
  Windows::Networking::Connectivity::ConnectionProfile *v1; 
  unsigned int v2; 
  int v3; 
  __int64 v5; 
  Windows::Networking::Connectivity::ConnectionProfile *v6; 

  InternetConnectionProfile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
  v1 = InternetConnectionProfile;
  v6 = InternetConnectionProfile;
  v2 = 0;
  v5 = 0i64;
  if ( InternetConnectionProfile )
  {
    LODWORD(v5) = 0;
    v3 = InternetConnectionProfile->__abi_GetNetworkConnectivityLevel(InternetConnectionProfile, (Windows::Networking::Connectivity::NetworkConnectivityLevel *)&v5);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    v2 = v5;
    Com_Printf(16, "Live_GetNetworkConnectivityLevel detected status = %d\n", (unsigned int)v5);
  }
  if ( v1 )
    v1->__abi_Release(v1);
  return v2;
}

/*
==============
Live_GetOnlinePlayPrivilegeCheckState
==============
*/
PrivilegeCheckState Live_GetOnlinePlayPrivilegeCheckState(int controllerIndex)
{
  return Live_GetPrivilegeCheckState(controllerIndex, 2);
}

/*
==============
Live_GetOnlineUserName
==============
*/
char Live_GetOnlineUserName(const int controllerIndex, char *nameBufferIn, const int nameBufferSizeIn)
{
  unsigned __int64 v3; 
  const char *LocalClientName; 

  v3 = nameBufferSizeIn;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2571, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( !nameBufferIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2574, ASSERT_TYPE_ASSERT, "(nameBufferIn)", (const char *)&queryFormat, "nameBufferIn") )
    __debugbreak();
  if ( (int)v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2575, ASSERT_TYPE_ASSERT, "(nameBufferSizeIn > 0)", (const char *)&queryFormat, "nameBufferSizeIn > 0") )
    __debugbreak();
  LocalClientName = Live_GetLocalClientName(controllerIndex);
  Core_strcpy_truncate(nameBufferIn, v3, LocalClientName);
  return 1;
}

/*
==============
Live_GetOurVoiceCommunicationSetting
==============
*/
__int64 Live_GetOurVoiceCommunicationSetting(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (unsigned int)xenonUserData.m_guardedUserData[v1].voiceCommunicationSetting;
}

/*
==============
Live_GetPermissions
==============
*/
void Live_GetPermissions(const int controllerIndex)
{
  Windows::Xbox::System::User *CachedXboxUser; 
  Windows::Xbox::System::User *v2; 
  unsigned int v3; 
  Windows::Xbox::System::UserDisplayInfo *v4; 
  Windows::Foundation::Collections::IVectorView<unsigned int> *v5; 
  int v6; 
  int v7; 
  int v8; 
  Windows::Xbox::System::UserDisplayInfo *v9; 
  unsigned int v10; 
  Windows::Xbox::System::User *v11; 

  CachedXboxUser = Live_GetCachedXboxUser(controllerIndex);
  v2 = CachedXboxUser;
  v11 = CachedXboxUser;
  v3 = 0;
  v9 = NULL;
  if ( CachedXboxUser )
  {
    v4 = Windows::Xbox::System::IUser::DisplayInfo::get(CachedXboxUser);
    v9 = v4;
    v5 = Windows::Xbox::System::IUserDisplayInfo::Privileges::get(v4);
    v9 = NULL;
    if ( v4 )
      v4->__abi_Release(v4);
    if ( v5 )
    {
      v6 = v5->__abi_get_Size(v5, (unsigned int *)&v9);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      Com_Printf(16, "DisplayInfo->Privileges size = %d\n", (unsigned int)v9);
      v7 = v5->__abi_get_Size(v5, (unsigned int *)&v9);
      if ( v7 < 0 )
LABEL_18:
        __abi_WinRTraiseException(v7);
      while ( v3 < (unsigned int)v9 )
      {
        v8 = v5->__abi_GetAt(v5, v3, &v10);
        if ( v8 < 0 )
          __abi_WinRTraiseException(v8);
        Com_Printf(16, "|[%d] = %d|\t", v3++, v10);
        v7 = v5->__abi_get_Size(v5, (unsigned int *)&v9);
        if ( v7 < 0 )
          goto LABEL_18;
      }
      Com_Printf(16, "\n");
    }
    if ( v5 )
      v5->__abi_Release(v5);
  }
  if ( v2 )
    v2->__abi_Release(v2);
}

/*
==============
Live_GetPlatformUserId
==============
*/
unsigned __int64 Live_GetPlatformUserId(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].platformId;
}

/*
==============
Live_GetPortForLocalXUID
==============
*/
__int64 Live_GetPortForLocalXUID(const XUID player)
{
  unsigned int v1; 
  XUID xuid; 

  xuid.m_id = player.m_id;
  if ( XUID::IsNull(&xuid) )
    return 0xFFFFFFFFi64;
  v1 = 0;
  while ( 1 )
  {
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( XUID::operator==(&xenonUserData.m_guardedUserData[(__int64)(int)v1].xuid, &xuid) )
      break;
    if ( (int)++v1 >= 8 )
      return 0xFFFFFFFFi64;
  }
  return v1;
}

/*
==============
Live_GetPresenceString
==============
*/
void Live_GetPresenceString(const bool isAway, const bool isOnline, const bool isInTitle, const wchar_t *presenceString, char *returnString, const unsigned __int64 returnStringSize)
{
  const char *v7; 
  int v8; 
  const char *v9; 

  if ( isAway )
  {
    v7 = "XBOXLIVE/AWAY";
LABEL_8:
    v9 = SEH_SafeTranslateString(v7);
    Com_sprintf(returnString, returnStringSize, (const char *)&queryFormat, v9);
    return;
  }
  if ( !isOnline )
  {
    v7 = "XBOXLIVE/OFFLINE";
    goto LABEL_8;
  }
  if ( !isInTitle || (v8 = truncate_cast<int,unsigned __int64>(returnStringSize), !MakeWideCharNameSafeForAllLanguages(returnString, presenceString, v8)) )
  {
    v7 = "XBOXLIVE/ONLINE";
    goto LABEL_8;
  }
}

/*
==============
Live_GetPrimaryGamertagToDisplay
==============
*/
void Live_GetPrimaryGamertagToDisplay(char *nameBufferIn, const int nameBufferSizeIn)
{
  unsigned __int64 v3; 
  int v4; 
  int ControllerFromClient; 
  char *LocalClientName; 
  int v7; 
  int v8; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = nameBufferSizeIn;
  if ( CL_IsLocalClientActive(LOCAL_CLIENT_0) && (v4 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), Live_IsSignedIn(v4)) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( !Live_IsSignedIn(ControllerFromClient) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5163, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
      __debugbreak();
    LocalClientName = (char *)Live_GetLocalClientName(ControllerFromClient);
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = -1;
    do
    {
      if ( Live_IsSignedIn(v8) )
      {
        v9 = v8;
        ++v7;
      }
      ++v8;
    }
    while ( v8 < 8 );
    if ( v7 == 1 )
    {
      if ( v9 >= 8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5182, ASSERT_TYPE_SANITY, "(unsigned)( signedInControllerIndex ) < (unsigned)( 8 )", "signedInControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, 8) )
          __debugbreak();
        LODWORD(v11) = 8;
        LODWORD(v10) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2510, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      LocalClientName = xenonUserData.m_guardedUserData[(__int64)(int)v9].platformGamertag;
    }
    else
    {
      LocalClientName = s_firstUserGamertagAtStart;
    }
  }
  Core_strcpy_truncate(nameBufferIn, v3, LocalClientName);
}

/*
==============
Live_GetPrivilege
==============
*/
__int64 Live_GetPrivilege(const int controllerIndex, Windows::Xbox::ApplicationModel::Store::KnownPrivileges privilegeToCheck, Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult *checkResult, bool attemptResolve)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v9; 
  int v11; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v12; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v13; 
  Concurrency::task_options *v14; 
  Concurrency::task<void> *v15; 
  Concurrency::details::_Task_impl<unsigned char> *Ptr; 
  volatile signed __int32 *RetVal; 
  std::_Ref_count_base *Rep; 
  unsigned __int8 v19; 
  char v20[8]; 
  Windows::Xbox::System::User *v21; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v22; 
  Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult *v23; 
  unsigned __int8 *v24; 
  __int64 v25; 
  Windows::Xbox::System::IUser *v26; 
  Live_GetPrivilege::__l16::<lambda_a3169f8246cbe95589ba0144a166111e> _Func; 
  Concurrency::task<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> v28; 
  Concurrency::task_options v29; 
  unsigned __int8 v30; 

  v25 = -2i64;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2809, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v30 = 0;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v9 = UserFromControllerIndex;
  v21 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  v26 = v9;
  if ( v9 )
    v9->__abi_Release(v9);
  if ( !v9 )
    return v30;
  v11 = v9->__abi_get_IsGuest(v9, (bool *)v20);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  if ( v20[0] || privilegeToCheck == XPRIVILEGE_COMMUNICATIONS )
    attemptResolve = 0;
  R_BeginRemoteScreenUpdate();
  v12 = Windows::Xbox::ApplicationModel::Store::Product::CheckPrivilegeAsync(v9, privilegeToCheck, attemptResolve, NULL);
  v13 = v12;
  v22 = v12;
  if ( v12 )
    v12->__abi_AddRef(v12);
  v22 = v13;
  if ( v13 )
    v13->__abi_Release(v13);
  Concurrency::task_options::task_options(&v29);
  v15 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> __gc *>(&v28, v13, v14);
  v23 = checkResult;
  v24 = &v30;
  Ptr = Concurrency::task_enum_Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult_::then__lambda_a3169f8246cbe95589ba0144a166111e___(v15, &_Func)->_M_unitTask._M_Impl._Ptr;
  if ( !Ptr )
    Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
  Concurrency::details::_Task_impl_base::_Wait(Ptr);
  RetVal = (volatile signed __int32 *)_Func.RetVal;
  if ( _Func.RetVal )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)_Func.RetVal + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))RetVal)(RetVal);
      if ( !_InterlockedDecrement(RetVal + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)RetVal + 8i64))(RetVal);
    }
  }
  Rep = v28._M_Impl._Rep;
  if ( v28._M_Impl._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v28._M_Impl._Rep->_Uses) )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( v13 )
    v13->__abi_Release(v13);
  R_EndRemoteScreenUpdate();
  v19 = v30;
  v9->__abi_Release(v9);
  return v19;
}

/*
==============
Live_GetPrivilegeCheckState
==============
*/
__int64 Live_GetPrivilegeCheckState(int controllerIndex, int privilegeToGet)
{
  __int64 v2; 
  unsigned __int8 *p_privilegeCheckStates; 
  int v4; 
  int v5; 
  unsigned __int8 *v6; 
  bool v8; 

  v2 = controllerIndex;
  if ( privilegeToGet == 2 )
  {
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    p_privilegeCheckStates = &xenonUserData.m_guardedUserData[v2].privilegeCheckStates;
    v4 = *p_privilegeCheckStates & 1;
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v5 = *p_privilegeCheckStates & 2;
  }
  else
  {
    if ( privilegeToGet != 8 )
    {
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 496, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Live_GetPrivilegeCheckState not setup for this privilege");
      goto LABEL_24;
    }
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v6 = &xenonUserData.m_guardedUserData[v2].privilegeCheckStates;
    v4 = *v6 & 4;
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v5 = *v6 & 8;
  }
  if ( !v4 )
  {
    if ( v5 )
      return 2i64;
    return 0i64;
  }
  if ( !v5 )
    return 1i64;
  v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 513, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Both checking and checked cannot be true");
LABEL_24:
  if ( v8 )
    __debugbreak();
  return 0i64;
}

/*
==============
Live_GetUserCommsReputationIsBad
==============
*/
_BOOL8 Live_GetUserCommsReputationIsBad(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1431, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].reputationValues.commsReputationIsBad;
}

/*
==============
Live_GetUserOverallReputationIsBad
==============
*/
_BOOL8 Live_GetUserOverallReputationIsBad(int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1424, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return xenonUserData.m_guardedUserData[v1].reputationValues.overallReputationIsBad;
}

/*
==============
Live_GetUserStatistics
==============
*/
void Live_GetUserStatistics(int controllerIndex)
{
  Windows::Xbox::System::User *CachedXboxUser; 
  Windows::Xbox::System::IUser *v3; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *v5; 
  int v6; 
  __int64 v7; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v8; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v10; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v11; 
  HSTRING v12; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  HSTRING v14; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  HSTRING v16; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v17; 
  HSTRING v18; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v19; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v20; 
  HSTRING v21; 
  HSTRING v22; 
  int v23; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v24; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v31; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v32; 
  Windows::Xbox::System::IUser *v33; 

  CachedXboxUser = Live_GetCachedXboxUser(controllerIndex);
  v3 = CachedXboxUser;
  v31 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)CachedXboxUser;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  v33 = v3;
  if ( v3 )
    v3->__abi_Release(v3);
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1496, ASSERT_TYPE_ASSERT, "(currentUser != nullptr)", (const char *)&queryFormat, "currentUser != nullptr") )
    __debugbreak();
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v5 = UsersXboxLiveContext;
  v31 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  if ( v5 )
    v5->__abi_Release(v5);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1499, ASSERT_TYPE_ASSERT, "(usersContext != nullptr)", (const char *)&queryFormat, "usersContext != nullptr") )
    __debugbreak();
  v31 = NULL;
  v6 = v5->__abi_get_UserStatisticsService(v5, (Microsoft::Xbox::Services::UserStatistics::UserStatisticsService **)&v31);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  v7 = (__int64)v31;
  v8 = v31;
  if ( v31 )
  {
    v31->__abi_AddRef(v31);
    v7 = (__int64)v31;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v32 = v8;
  if ( v8 )
    v8->__abi_AddRef(v8);
  if ( v8 )
    v8->__abi_Release(v8);
  v32 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v32);
  v10 = v9;
  if ( v9 )
    v9->__abi_AddRef(v9);
  if ( v10 )
    v10->__abi_Release(v10);
  v32 = NULL;
  Platform::String::String(NULL, L"OverAllReputationIsBad");
  v12 = (HSTRING)v11;
  v32 = v11;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v10, (Platform::String *)v11);
  WindowsDeleteString_0(v12);
  v32 = NULL;
  Platform::String::String(NULL, L"FairplayReputationIsBad");
  v14 = (HSTRING)v13;
  v32 = v13;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v10, (Platform::String *)v13);
  WindowsDeleteString_0(v14);
  v32 = NULL;
  Platform::String::String(NULL, L"CommsReputationIsBad");
  v16 = (HSTRING)v15;
  v32 = v15;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v10, (Platform::String *)v15);
  WindowsDeleteString_0(v16);
  v32 = NULL;
  Platform::String::String(NULL, L"UserContentReputationIsBad");
  v18 = (HSTRING)v17;
  v32 = v17;
  j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v10, (Platform::String *)v17);
  WindowsDeleteString_0(v18);
  v32 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>((Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)v32, &v10->m_ctr, &v10->m_vec);
  v20 = v19;
  v32 = v19;
  if ( v19 )
    v19->__abi_AddRef(v19);
  if ( v20 )
    v20->__abi_Release(v20);
  v21 = g_globalServiceConfigurationId;
  v22 = (HSTRING)Windows::Xbox::System::IUser::XboxUserId::get(v3);
  v32 = NULL;
  v23 = ((__int64 (__fastcall *)(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *, HSTRING, HSTRING, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> **))v8->Windows::Foundation::Collections::IObservableVector<Platform::String _>::Platform::Object::__vftable[1].__abi_GetIids)(v8, v22, v21, v20, &v32);
  if ( v23 < 0 )
    __abi_WinRTraiseException(v23);
  v24 = v32;
  v25 = v32;
  if ( v32 )
  {
    v32->__abi_AddRef(v32);
    v24 = v32;
  }
  if ( v24 )
    v24->__abi_Release(v24);
  if ( v25 )
    v25->__abi_AddRef(v25);
  if ( v25 )
    v25->__abi_Release(v25);
  WindowsDeleteString_0(v22);
  if ( v20 )
    v20->__abi_Release(v20);
  v26 = (unsigned int)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncOperationCompletedHandler_Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult___::AsyncOperationCompletedHandler_Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult_____lambda_e72bcdfea546d167e96ceae860109e85___((Live_GetUserStatistics::__l17::<lambda_e72bcdfea546d167e96ceae860109e85>)v26, (Platform::CallbackContext)controllerIndex, 2);
  v28 = v27;
  v29 = ((__int64 (__fastcall *)(Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *, __int64))v25->Windows::Foundation::Collections::IObservableVector<Platform::String _>::Platform::Object::__vftable[1].__abi_QueryInterface)(v25, v27);
  if ( v29 < 0 )
    __abi_WinRTraiseException(v29);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16i64))(v28);
  v25->__abi_Release(v25);
  if ( v10 )
    v10->__abi_Release(v10);
  if ( v8 )
    v8->__abi_Release(v8);
  v5->__abi_Release(v5);
  if ( v3 )
    v3->__abi_Release(v3);
}

/*
==============
Live_GetUsersXboxLiveContext
==============
*/
Microsoft::Xbox::Services::XboxLiveContext *Live_GetUsersXboxLiveContext(int controllerIndex)
{
  __int64 v1; 
  Microsoft::Xbox::Services::XboxLiveContext **p_xboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *context; 
  Microsoft::Xbox::Services::XboxLiveContext *v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4759, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  p_xboxLiveContext = &xenonUserData.m_guardedUserData[v1].xboxLiveContext;
  if ( *p_xboxLiveContext || (context = s_cachedInviteUserInfo[v1].context) == NULL )
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v5 = *p_xboxLiveContext;
    if ( *p_xboxLiveContext )
      v5->__abi_AddRef(*p_xboxLiveContext);
    return v5;
  }
  else
  {
    context->__abi_AddRef(context);
    return context;
  }
}

/*
==============
Live_GetXuid
==============
*/
XUID *Live_GetXuid(XUID *result, int controllerIndex)
{
  __int64 v2; 
  XUID *p_xuid; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2674, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( !Live_IsSignedIn(v2) )
  {
    p_xuid = &s_cachedInviteUserInfo[v2].xuid;
    if ( XUID::IsValid(p_xuid) )
      goto LABEL_16;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)0x4000, NULL);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/SIGNEDOUT");
  }
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  p_xuid = &xenonUserData.m_guardedUserData[v2].xuid;
  if ( !XUID::IsValid(p_xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2689, ASSERT_TYPE_ASSERT, "(xenonUserData[controllerIndex].xuid.IsValid())", (const char *)&queryFormat, "xenonUserData[controllerIndex].xuid.IsValid()") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
LABEL_16:
  result->m_id = p_xuid->m_id;
  return result;
}

/*
==============
Live_GiveAchievement
==============
*/
void Live_GiveAchievement(int controllerIndex, const char *achievementName)
{
  __int64 v3; 
  int v4; 
  const AchievementListing *v5; 
  __int64 v6; 
  __int64 v7; 
  const AchievementListing *v8; 
  const char *v9; 
  int v10; 
  int v11; 
  int v13; 
  int v14; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  const char *v16; 
  __int64 v17; 
  const wchar_t *achievementStatName; 
  HSTRING v19; 
  const wchar_t *StringRawBuffer_0; 
  unsigned int (__fastcall *unlockEvent)(const wchar_t *, const _GUID *, const int); 
  PCWSTR v22; 
  unsigned int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  HSTRING v27; 
  _GUID v28; 

  v3 = controllerIndex;
  v4 = 0;
  v5 = gameAchievementList;
  while ( 2 )
  {
    v6 = 0x7FFFFFFFi64;
    v7 = v4;
    v8 = &gameAchievementList[v4];
    if ( !achievementName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = (const char *)(achievementName - (const char *)v8);
    while ( 1 )
    {
      v10 = (unsigned __int8)v8->achievementName[(_QWORD)v9];
      v11 = (unsigned __int8)v8->achievementName[0];
      v8 = (const AchievementListing *)((char *)v8 + 1);
      if ( !v6-- )
      {
LABEL_17:
        UserFromControllerIndex = GetUserFromControllerIndex(v3);
        if ( UserFromControllerIndex )
        {
          v17 = v4;
          achievementStatName = gameAchievementList[v7].achievementStatName;
          v19 = (HSTRING)Windows::Xbox::System::IUser::XboxUserId::get(UserFromControllerIndex);
          StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v19, NULL);
          Com_Printf(16, "Attempting to unlock achievement(%s) for xuid(%ls).  Statname is (%ls).\n", achievementName, StringRawBuffer_0, achievementStatName);
          WindowsDeleteString_0(v19);
          unlockEvent = gameAchievementList[v17].unlockEvent;
          v27 = (HSTRING)Windows::Xbox::System::IUser::XboxUserId::get(UserFromControllerIndex);
          v22 = WindowsGetStringRawBuffer_0(v27, NULL);
          v23 = unlockEvent(v22, &v28, 1);
          WindowsDeleteString_0(v27);
          if ( v23 )
          {
            Com_Printf(16, "Error unlocking achievement(%s) with data platform error(%i).\n", achievementName, v23);
          }
          else
          {
            v24 = v3;
            v25 = 80 * v3 + (int)gameAchievementList[v17].achievementId;
            if ( !s_achievementUnlockStatus[0].unlocked[v25] )
            {
              s_achievementUnlockStatus[0].unlocked[v25] = 1;
              v26 = (unsigned __int8)gameAchievementList[v17].gameMode[0] + 20 * v3;
              ++s_achievementUnlockStatus[0].unlockCountGameMode[v26];
              ++s_achievementUnlockStatus[v24].unlockCount;
              if ( gameAchievementList[v17].isGameProgress )
                ++s_achievementUnlockStatus[v24].unlockCountGameProgress;
              WriteAchievementProgress(v3);
            }
          }
          UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
        }
        else
        {
          Com_Printf(16, "No user for controller (%i) unable to give achievement (%s).\n", (unsigned int)v3, achievementName);
        }
        return;
      }
      if ( v10 != v11 )
      {
        v13 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v13 = v10;
        v10 = v13;
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        if ( v10 != v14 )
          break;
      }
      if ( !v10 )
        goto LABEL_17;
    }
    ++v4;
    ++v5;
    if ( v5->achievementName[0] )
      continue;
    break;
  }
  v16 = j_va("Unknown achievement %s!\n", achievementName);
  Com_PrintError(16, v16);
}

/*
==============
Live_HasCrossPlayPermissionsOnPlatform
==============
*/
bool Live_HasCrossPlayPermissionsOnPlatform(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (xenonUserData.m_guardedUserData[v1].userPrivileges & 0x10) != 0;
}

/*
==============
Live_HasDetectedNetConnectionLost
==============
*/
bool Live_HasDetectedNetConnectionLost()
{
  return !s_hasNetworkConnection;
}

/*
==============
Live_HasNetConnection
==============
*/
_BOOL8 Live_HasNetConnection()
{
  return s_hasNetworkConnection;
}

/*
==============
Live_HasOnlinePlayPrivilege
==============
*/
bool Live_HasOnlinePlayPrivilege(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return (xenonUserData.m_guardedUserData[v1].userPrivileges & 2) != 0;
}

/*
==============
Live_HasUserChanged
==============
*/
char Live_HasUserChanged(int controllerIndex)
{
  __int64 v2; 
  Windows::Xbox::System::User *User; 
  unsigned __int64 PlatformUserId; 
  Windows::Xbox::System::User *UserByPlatformId; 
  __int64 v6; 
  int v7; 
  Platform::String *v8; 
  unsigned __int64 platformId[9]; 
  char v11; 
  int userIndexToReturn; 
  void *v13; 
  __int64 v14; 

  platformId[1] = -2i64;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( CL_GetLocalClientSignInState(controllerIndex) > 0 && GPad_HasInput(controllerIndex) && GPad_GetUserIndexForPort(controllerIndex, &userIndexToReturn) )
  {
    v2 = 0i64;
    v14 = 0i64;
    User = Users_GetUser(userIndexToReturn);
    platformId[2] = (unsigned __int64)User;
    v13 = NULL;
    PlatformUserId = Live_GetPlatformUserId(controllerIndex);
    UserByPlatformId = Users_GetUserByPlatformId(PlatformUserId);
    v6 = (__int64)UserByPlatformId;
    v13 = UserByPlatformId;
    if ( UserByPlatformId )
    {
      UserByPlatformId->__abi_AddRef(UserByPlatformId);
      v2 = v6;
      v14 = v6;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    if ( v2 )
    {
      v7 = User->__abi_get_IsSignedIn(User, (bool *)&v11);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      if ( v11 )
      {
        v8 = Windows::Xbox::System::IUser::XboxUserId::get(User);
        v13 = v8;
        ConvertPlatformStringToPlatformId(v8, platformId);
        WindowsDeleteString_0((HSTRING)v8);
        if ( PlatformUserId != platformId[0] )
        {
          User->__abi_Release(User);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
          return 1;
        }
      }
    }
    if ( User )
      User->__abi_Release(User);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16i64))(v2);
  }
  return 0;
}

/*
==============
Live_HasValidSponsor
==============
*/
bool Live_HasValidSponsor(int localControllerIndex)
{
  int GuestUserSponsorControllerIndex; 

  if ( !Live_UserIsGuest(localControllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3353, ASSERT_TYPE_ASSERT, "(Live_UserIsGuest( localControllerIndex ))", (const char *)&queryFormat, "Live_UserIsGuest( localControllerIndex )") )
    __debugbreak();
  GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(localControllerIndex);
  return GuestUserSponsorControllerIndex >= 0 && GuestUserSponsorControllerIndex != localControllerIndex;
}

/*
==============
Live_HasWANConnectivity
==============
*/
bool Live_HasWANConnectivity()
{
  return g_NetworkConnectivityLevel >= 3;
}

/*
==============
Live_Init
==============
*/
void Live_Init(void)
{
  CachedXboxLiveContext *v0; 
  XUID *p_xuid; 
  __int64 v2; 
  const XUID *v3; 
  XB3NotificationHandler *Instance; 
  XUID result; 

  Com_Printf(25, "Live_Init\n");
  s_cachedConsoleID[0] = 0i64;
  s_cachedConsoleID[1] = 0i64;
  s_cachedConsoleID[2] = 0i64;
  v0 = s_cachedInviteUserInfo;
  p_xuid = &s_cachedInviteUserInfo[0].xuid;
  v2 = 8i64;
  do
  {
    v3 = XUID::NullXUID(&result);
    XUID::operator=(p_xuid, v3);
    if ( v0->context )
    {
      v0->context->__abi_Release(v0->context);
      v0->context = NULL;
    }
    p_xuid += 2;
    ++v0;
    --v2;
  }
  while ( v2 );
  ResetXenonUserData();
  Xb3MultiplayerManager::Allocate(&Xb3MultiplayerManager::ms_xb3MultiplayerManager);
  Instance = XB3NotificationHandler::GetInstance();
  result.m_id = (unsigned __int64)Instance;
  XB3NotificationHandler::InitializeNetworkStatusEventHandlers(Instance);
  if ( Instance )
    Instance->__abi_Release(Instance);
  Dvar_BeginPermanentRegistration();
  Live_RegisterCommonDvars();
  checkOnlinePlayPrivilegePeriod = Dvar_RegisterInt("NMKTNOPSPS", 5000, 1, 0x7FFFFFFF, 0, "Duration between Xbox Live privilege checks (in milliseconds)");
  xb3_mp_joinability_success_backoff = Dvar_RegisterInt("MPTSMOQOQQ", 5000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before attempting to set this value again after a successful call was made.");
  xb3_mp_joinability_failure_backoff = Dvar_RegisterInt("MLQSKRLQST", 20000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before attempting to set this value again after a failed call was made.");
  live_qos_maxprobeconnections = Dvar_RegisterInt("NOONTMTTRR", 32, 1, 100, 0, "the maximum simultaneous QoS requests that will be serviced");
  partyChatDisallowed = Dvar_RegisterBool("LMKRNQKLQR", 0, 0, "Whether to disallow Xbox Live Party Chat");
  partyChatDisconnectTimer = Dvar_RegisterInt("OLSSQKOMTS", 2000, 0, 0x7FFFFFFF, 0, "Time to wait after user responds to Party Chat dialog before kicking (msec)");
  xb3_dw_disconnect_test = Dvar_RegisterBool("LRLTMNTONK", 0, 0, "Turns on automatic random disconnects from demonware to test connectivity code.\n");
  controller_hot_swap_check_timer = Dvar_RegisterInt("NNTLRLSQNK", 1000, 0, 0x7FFFFFFF, 0, "Delay between checks to see if the controlled has been swapped.\n");
  xb3_voip_enabled = Dvar_RegisterBool("LROMTRKRQT", 1, 0, "VOIP is enabled by default");
  Dvar_EndPermanentRegistration();
  TaskManager_ConstructTaskSet(&overlappedTasks_0, "Live_Init");
  LiveCommon_Init();
  Live_PresenceInit();
  XB3GameEvent_Init();
  XB3_Privacy_Init();
}

/*
==============
Live_InitSigninState
==============
*/
void Live_InitSigninState(void)
{
  XB3NotificationHandler *Instance; 

  GamerProfile_InitAllProfiles();
  Instance = XB3NotificationHandler::GetInstance();
  if ( Instance )
    Instance->__abi_Release(Instance);
  Live_InitXboxLiveContexts();
  if ( Live_IsAnyUserSignedIntoMultipleControllers() )
    Com_Printf(16, "Cannot initialize users because at least one user has multiple controllers mapped to them!\n");
  else
    Live_AutoSigninUsersWhoAreSignedIntoPlatformIfRequired();
}

/*
==============
Live_InitXboxLiveContexts
==============
*/
void Live_InitXboxLiveContexts(void)
{
  Windows::Xbox::System::User *v0; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *Users; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v2; 
  int v3; 
  unsigned int v4; 
  int v5; 
  int v6; 
  Windows::Xbox::System::User *v7; 
  Windows::Xbox::System::User *v8; 
  __int64 v9; 
  int portIndexToReturn; 
  Windows::Xbox::System::User *aUser; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *v12; 

  v0 = NULL;
  v12 = NULL;
  Users = Users_GetUsers();
  v2 = Users;
  v12 = Users;
  v9 = 0i64;
  if ( !Users )
    goto LABEL_20;
  v3 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))Users->Platform::Object::__vftable[1].__abi_AddRef)(Users, &v9);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  if ( (_DWORD)v9 )
  {
    v4 = 0;
    v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))v2->Platform::Object::__vftable[1].__abi_AddRef)(v2, &v9);
    if ( v5 < 0 )
LABEL_24:
      __abi_WinRTraiseException(v5);
    while ( v4 < (unsigned int)v9 )
    {
      aUser = NULL;
      v6 = v2->Platform::Object::__vftable[1].__abi_QueryInterface(v2, (Platform::Guid *)v4, (void **)&aUser);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v7 = aUser;
      v8 = aUser;
      if ( aUser )
      {
        aUser->__abi_AddRef(aUser);
        v7 = aUser;
      }
      if ( v7 )
        v7->__abi_Release(v7);
      aUser = v8;
      if ( v0 )
        v0->__abi_Release(v0);
      v0 = v8;
      aUser = NULL;
      if ( GPad_GetGamepadCountForUser(v8) == 1 && GPad_GetPortIndexForUser(v8, &portIndexToReturn) )
        Live_UpdateXboxLiveContext(v8, portIndexToReturn);
      ++v4;
      v5 = ((__int64 (__fastcall *)(Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::User _> *, __int64 *))v2->Platform::Object::__vftable[1].__abi_AddRef)(v2, &v9);
      if ( v5 < 0 )
        goto LABEL_24;
    }
    v2->__abi_Release(v2);
    if ( v0 )
      v0->__abi_Release(v0);
  }
  else
  {
LABEL_20:
    Com_PrintError(16, "No users in the list!  Cannot create XboxLiveContext\n");
    if ( v2 )
      v2->__abi_Release(v2);
  }
}

/*
==============
Live_IsAnyUserSignedIntoMultipleControllers
==============
*/
char Live_IsAnyUserSignedIntoMultipleControllers()
{
  char v0; 
  Windows::Xbox::System::User *v1; 
  Windows::Xbox::System::User *Users; 
  Windows::Xbox::System::User *v3; 
  int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  Windows::Xbox::System::User *v8; 
  Windows::Xbox::System::User *v9; 
  int GamepadCountForUser; 
  Windows::Xbox::System::User *v11; 
  Windows::Foundation::Collections::IVectorView<Windows::Xbox::System::IAudioDeviceInfo _> *v13; 
  Windows::Xbox::System::User *aUser[2]; 
  Windows::Xbox::System::User *v15; 
  __int64 v16; 
  char pDestBuffer[80]; 

  v16 = -2i64;
  v0 = 0;
  v1 = NULL;
  v15 = NULL;
  Users = (Windows::Xbox::System::User *)Users_GetUsers();
  v3 = Users;
  aUser[1] = Users;
  aUser[0] = NULL;
  if ( !Users )
    goto LABEL_20;
  v4 = Users->__abi_get_AudioDevices(Users, &v13);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  if ( (_DWORD)v13 )
  {
    v5 = 0;
    v6 = v3->__abi_get_AudioDevices(v3, &v13);
    if ( v6 < 0 )
LABEL_24:
      __abi_WinRTraiseException(v6);
    while ( v5 < (unsigned int)v13 )
    {
      aUser[0] = NULL;
      v7 = ((__int64 (__fastcall *)(Windows::Xbox::System::User *, _QWORD, Windows::Xbox::System::User **))v3->__abi_get_Id)(v3, v5, aUser);
      if ( v7 < 0 )
        __abi_WinRTraiseException(v7);
      v8 = aUser[0];
      v9 = aUser[0];
      if ( aUser[0] )
      {
        aUser[0]->__abi_AddRef(aUser[0]);
        v8 = aUser[0];
      }
      if ( v8 )
        v8->__abi_Release(v8);
      aUser[0] = v9;
      if ( v1 )
        v1->__abi_Release(v1);
      v1 = v9;
      v15 = v9;
      aUser[0] = NULL;
      GamepadCountForUser = GPad_GetGamepadCountForUser(v9);
      if ( GamepadCountForUser > 1 )
      {
        v11 = (Windows::Xbox::System::User *)Live_GamertagForUser(v9);
        aUser[0] = v11;
        ConvertStringGamertagToDisplayableBuffer((Platform::String *)v11, pDestBuffer, 0x44ui64);
        WindowsDeleteString_0((HSTRING)v11);
        Com_Printf(16, "User %s has %d controllers mapped to them!\n", pDestBuffer, (unsigned int)GamepadCountForUser);
        v0 = 1;
        break;
      }
      ++v5;
      v6 = v3->__abi_get_AudioDevices(v3, &v13);
      if ( v6 < 0 )
        goto LABEL_24;
    }
    v3->__abi_Release(v3);
    if ( v1 )
      v1->__abi_Release(v1);
    return v0;
  }
  else
  {
LABEL_20:
    if ( v3 )
      v3->__abi_Release(v3);
    return 0;
  }
}

/*
==============
Live_IsClientAFriend
==============
*/
bool Live_IsClientAFriend(const int controllerIndex, const PartyData *party, const int clientNum)
{
  int v6; 
  Online_Friends *Instance; 
  XUID result; 
  XUID xuid; 

  if ( (unsigned int)clientNum > 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5641, ASSERT_TYPE_ASSERT, "( ( clientNum >= 0 && clientNum < 200 ) )", "( clientNum ) = %i", clientNum) )
    __debugbreak();
  Party_GetXuid(&result, party, clientNum);
  xuid.m_id = result.m_id;
  if ( !XUID::IsNull(&xuid) )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v6 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( XUID::operator==(&xenonUserData.m_guardedUserData[(__int64)v6].xuid, &xuid) )
        break;
      if ( ++v6 >= 8 )
        goto LABEL_11;
    }
    if ( v6 >= 0 )
      return 1;
  }
LABEL_11:
  Instance = Online_Friends::GetInstance();
  return Online_Friends::IsFriendByID(Instance, controllerIndex, result);
}

/*
==============
Live_IsCurrentlyInAGameServerSession
==============
*/
bool Live_IsCurrentlyInAGameServerSession(const int controllerIndex)
{
  bool result; 

  if ( !Com_FrontEnd_IsInFrontEnd() )
    return 1;
  result = Lobby_IsInRunningLobby();
  if ( result )
    return 1;
  return result;
}

/*
==============
Live_IsDCacheInitialized
==============
*/
_BOOL8 Live_IsDCacheInitialized()
{
  return s_dCacheEnabled;
}

/*
==============
Live_IsFakeUser
==============
*/

bool __fastcall Live_IsFakeUser(const int controllerIndex)
{
  return Live_IsDevmapping();
}

/*
==============
Live_IsGoldUpselling
==============
*/
_BOOL8 Live_IsGoldUpselling()
{
  return s_goldUpselling;
}

/*
==============
Live_IsGuestByXUID
==============
*/
char Live_IsGuestByXUID(XUID xuid)
{
  const PartyData *v2; 
  int v3; 
  const PartyData *PartyData; 
  int MemberByXUID_AllowNotPresent; 

  if ( Lobby_IsInLobby() && (v2 = Lobby_GetPartyData(), v3 = Party_FindMemberByXUID_AllowNotPresent(v2, xuid), v3 >= 0) )
  {
    PartyData = Lobby_GetPartyData();
    return Party_IsMemberGuestAccount(PartyData, v3) != 0;
  }
  else if ( g_partyData.inParty && (MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(&g_partyData, xuid), MemberByXUID_AllowNotPresent >= 0) )
  {
    return Party_IsMemberGuestAccount(&g_partyData, MemberByXUID_AllowNotPresent) != 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2775, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Checking a XUID that isn't in any of our parties for guest status, this doesn't work on XB3 platform you must reference the user structure!\n") )
      __debugbreak();
    return 1;
  }
}

/*
==============
Live_IsInPartyChat
==============
*/
bool Live_IsInPartyChat()
{
  return LiveParty_GetCount() > 0;
}

/*
==============
Live_IsInPartyChatWhileDisallowed
==============
*/
bool Live_IsInPartyChatWhileDisallowed()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return !v1->current.enabled && Lobby_IsInLobby() && partyChatDisallowed->current.enabled && LiveParty_GetCount() > 0;
}

/*
==============
Live_IsKoreanAccount
==============
*/
bool Live_IsKoreanAccount(int controllerIndex)
{
  return GetUserGeoID(0x10u) == 134;
}

/*
==============
Live_IsOnWifi
==============
*/
__int64 Live_IsOnWifi()
{
  char v0; 
  Windows::Networking::Connectivity::ConnectionProfile *InternetConnectionProfile; 
  Windows::Networking::Connectivity::ConnectionProfile *v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned __int8 v7; 
  int v9; 
  __int64 v10; 
  __int64 v11; 

  v0 = 0;
  InternetConnectionProfile = Windows::Networking::Connectivity::NetworkInformation::GetInternetConnectionProfile();
  v2 = InternetConnectionProfile;
  if ( !InternetConnectionProfile )
  {
    v5 = v11;
LABEL_11:
    v7 = 0;
    goto LABEL_12;
  }
  v10 = 0i64;
  v3 = InternetConnectionProfile->__abi_get_NetworkAdapter(InternetConnectionProfile, (Windows::Networking::Connectivity::NetworkAdapter **)&v10);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v10;
  v5 = v10;
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
    v4 = v10;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v11 = v5;
  v0 = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v5 + 64i64))(v5, &v9);
  if ( v6 < 0 )
    __abi_WinRTraiseException(v6);
  if ( v9 != 71 )
    goto LABEL_11;
  v7 = 1;
LABEL_12:
  if ( (v0 & 1) != 0 && v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v2 )
    v2->__abi_Release(v2);
  return v7;
}

/*
==============
Live_IsSignedIn
==============
*/
bool Live_IsSignedIn(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3463, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
  }
  return xenonUserData.m_guardedUserData[v1].signinState > 0;
}

/*
==============
Live_IsSigningIn
==============
*/
bool Live_IsSigningIn()
{
  bool result; 

  if ( s_isAccountPickerOpen )
    return 1;
  result = Users_HasPendingChanges();
  if ( result )
    return 1;
  return result;
}

/*
==============
Live_IsSystemUiActive
==============
*/
bool Live_IsSystemUiActive()
{
  return g_PLMGameHasFocus == 0;
}

/*
==============
Live_IsUserSignedIn
==============
*/
bool Live_IsUserSignedIn(const int controllerIndex)
{
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return CL_GetLocalClientSignInState(controllerIndex) > 0;
}

/*
==============
Live_IsUserSignedInToLive
==============
*/
bool Live_IsUserSignedInToLive(const int controllerIndex)
{
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  return CL_GetLocalClientSignInState(controllerIndex) == 2;
}

/*
==============
Live_IsWaitingForOnlineServices
==============
*/
__int64 Live_IsWaitingForOnlineServices(const int controllerIndex, WaitingForOnlineServicesReason *reason)
{
  bool IsUserSignedInToDemonware; 
  unsigned int v5; 
  WaitingForOnlineServicesReason v6; 

  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3502, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(controllerIndex);
  v5 = 0;
  v6 = NONE;
  if ( !IsUserSignedInToDemonware )
    v6 = MAX_INT;
  *reason = v6;
  LOBYTE(v5) = !Live_IsUserSignedInToDemonware(controllerIndex);
  return v5;
}

/*
==============
Live_MultiplayerRoundStartNotify
==============
*/
void Live_MultiplayerRoundStartNotify(void)
{
  XUID *p_xuid; 
  unsigned int v1; 
  XUID *v2; 
  XUID *v3; 
  XUID *v4; 
  unsigned __int64 *p_m_id; 
  XUID player; 
  XUID xuid; 

  XUID::XUID(&player);
  p_xuid = &xenonUserData.m_guardedUserData[0].xuid;
  v1 = 0;
  v2 = &s_cachedInviteUserInfo[0].xuid;
  v3 = &xenonUserData.m_guardedUserData[0].xuid;
  v4 = &s_cachedInviteUserInfo[0].xuid;
  do
  {
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(v1) > 0 )
    {
      if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2674, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( !Live_IsSignedIn(v1) )
      {
        if ( XUID::IsValid(v4) )
        {
          p_m_id = &v2->m_id;
LABEL_23:
          xuid.m_id = *p_m_id;
          XUID::operator=(&player, &xuid);
          if ( Party_FindMemberByXUID(&g_partyData, player) != -1 )
            XB3GameEvent_MultiplayerRoundStart(v1);
          goto LABEL_25;
        }
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)0x4000, NULL);
        Live_ThrowError(ERR_DROP, "XBOXLIVE/SIGNEDOUT");
      }
      if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( !XUID::IsValid(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2689, ASSERT_TYPE_ASSERT, "(xenonUserData[controllerIndex].xuid.IsValid())", (const char *)&queryFormat, "xenonUserData[controllerIndex].xuid.IsValid()") )
        __debugbreak();
      if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      p_m_id = &p_xuid->m_id;
      goto LABEL_23;
    }
LABEL_25:
    ++v1;
    v4 += 2;
    v3 += 32;
    v2 += 2;
    p_xuid += 32;
  }
  while ( (int)v1 < 8 );
}

/*
==============
Live_OnClanTagEnteredByUser
==============
*/
void Live_OnClanTagEnteredByUser(int localControllerIndex, bool changeConfirmed, const char *resultString)
{
  Platform::String *v5; 
  Platform::String *v6; 
  HSTRING v7; 
  __int64 v8; 
  Platform::String *v9; 
  HSTRING v10; 
  const char *LocalClientName; 
  Platform::String *v12; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v13; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v14; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  bool v16; 
  bool v17; 
  const char *v18; 
  bool pIsVulgar; 
  __int64 v20; 
  Platform::String *v21; 
  Platform::String *v22; 
  __int64 v23; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v24; 
  char dest[8]; 
  wchar_t WideCharStr[12]; 
  char MultiByteStr[80]; 
  wchar_t __strArg[80]; 

  v23 = -2i64;
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2135, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  v5 = NULL;
  v21 = NULL;
  v6 = NULL;
  v22 = NULL;
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    if ( resultString )
    {
      Core_strcpy_truncate(dest, 6ui64, resultString);
      dest[5] = 0;
      v8 = -1i64;
      do
        ++v8;
      while ( dest[v8] );
      MultiByteToWideChar(0xFDE9u, 0, dest, -1, WideCharStr, 6);
      WideCharStr[5] = 0;
      Com_Printf(16, "%s\n", dest);
      Platform::String::String(NULL, WideCharStr);
      v5 = v9;
      WindowsDeleteString_0(NULL);
      v21 = v5;
      v20 = 0i64;
      WindowsDeleteString_0(NULL);
      _Platform_WindowsGetStringLen((HSTRING)v5);
      if ( v8 && !UI_VerifyString(dest, WideCharStr) )
      {
        Com_PrintError(14, "Invalid characters detected in user input.\n");
        Com_SetErrorMessage("MENU/INVALIDCHARS");
        v10 = NULL;
LABEL_24:
        WindowsDeleteString_0(v10);
        v7 = (HSTRING)v5;
        goto LABEL_25;
      }
      if ( !Live_IsUserSignedInToLive(localControllerIndex) )
      {
        CL_PlayerData_SetCustomClanTag(localControllerIndex, dest);
        v10 = NULL;
        goto LABEL_24;
      }
      LocalClientName = Live_GetLocalClientName(localControllerIndex);
      Com_sprintf(MultiByteStr, 0x4Cui64, "[%s]%s", dest, LocalClientName);
      MultiByteStr[75] = 0;
      MultiByteToWideChar(0xFDE9u, 0, MultiByteStr, -1, __strArg, 76);
      __strArg[75] = 0;
      Platform::String::String(NULL, __strArg);
      v6 = v12;
      WindowsDeleteString_0(NULL);
      v22 = v6;
      WindowsDeleteString_0(NULL);
      v13 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
      Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v13);
      v15 = v14;
      v24 = v14;
      v20 = 0i64;
      j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v14, v5);
      j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v15, v6);
      pIsVulgar = 0;
      v16 = Live_XB3ProfanityFilter_CheckStrings(localControllerIndex, v15, &pIsVulgar);
      v17 = pIsVulgar;
      if ( !v16 || pIsVulgar )
      {
        CL_PlayerData_SetCustomClanTag(localControllerIndex, (const char *)&queryFormat.fmt + 3);
        if ( v17 )
        {
          Com_PrintError(14, "Offensive text (curse words, etc) detected in user input.\n");
          v18 = "MENU/OFFENSIVETEXT";
        }
        else
        {
          Com_PrintError(14, "Error occurred when checking for vulgarity in clan tag.\n");
          v18 = "XBOXLIVE/LIVEERROR";
        }
        Com_SetErrorMessage(v18);
      }
      else
      {
        CL_PlayerData_SetCustomClanTag(localControllerIndex, dest);
      }
      if ( v15 )
        v15->__abi_Release(v15);
    }
    v10 = (HSTRING)v6;
    goto LABEL_24;
  }
  Com_Printf(14, "Live_OnClanTagEnteredByUser: Cannot be updated while in-game\n");
  WindowsDeleteString_0(NULL);
  v7 = NULL;
LABEL_25:
  WindowsDeleteString_0(v7);
}

/*
==============
Live_OnConfirmUserDesiresProfileChange
==============
*/
void Live_OnConfirmUserDesiresProfileChange(const int controllerIndex)
{
  __int64 v1; 
  const Windows::Xbox::System::User *v2; 
  Windows::Xbox::System::User *UserByPlatformId; 
  Windows::Xbox::System::User *v4; 
  int Index; 
  LocalClientNum_t ClientFromController; 

  v1 = controllerIndex;
  Com_Printf(16, "%s( %d ) \n", "Live_OnConfirmUserDesiresProfileChange", (unsigned int)controllerIndex);
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v2 = NULL;
  g_hasOpenedUserConfirmChangeDialog = 0;
  UserByPlatformId = Users_GetUserByPlatformId(xenonUserData.m_guardedUserData[v1].platformId);
  v4 = UserByPlatformId;
  if ( UserByPlatformId )
  {
    UserByPlatformId->__abi_AddRef(UserByPlatformId);
    v2 = v4;
  }
  if ( v4 )
    v4->__abi_Release(v4);
  if ( v2 )
  {
    Index = Users_GetIndex(v2);
    ClientFromController = CL_Mgr_GetClientFromController(v1);
    Live_CheckNotifications_SignInChanged(ClientFromController, Index, v1, 1);
    v2->__abi_Release(&v2->Windows::Xbox::System::IUser);
  }
}

/*
==============
Live_OnConstrainedResources_DisableBlockingPrivilegeChecks
==============
*/
void Live_OnConstrainedResources_DisableBlockingPrivilegeChecks(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4284, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_enableBlockingPrivilegeChecks = 0;
}

/*
==============
Live_OnConstrainedResources_EnableBlockingPrivilegeChecks
==============
*/
void Live_OnConstrainedResources_EnableBlockingPrivilegeChecks(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4292, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  s_enableBlockingPrivilegeChecks = 1;
}

/*
==============
Live_OnFullResources_CheckForContentChanges
==============
*/
void Live_OnFullResources_CheckForContentChanges(void)
{
  s_checkForContentChanges = 1;
}

/*
==============
Live_OnGetUserStatisticsComplete
==============
*/
void Live_OnGetUserStatisticsComplete(int controllerIndex, Microsoft::Xbox::Services::UserStatistics::UserStatisticsResult *userStatistics)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  HSTRING v5; 
  unsigned int v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  HSTRING v10; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  unsigned int i; 
  int v16; 
  __int64 v17; 
  HSTRING v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  HSTRING v22; 
  int v23; 
  __int64 v24; 
  HSTRING v25; 
  int v26; 
  HSTRING v27; 
  int v28; 
  HSTRING v29; 
  int v30; 
  int v31; 
  HSTRING v32; 
  int v33; 
  HSTRING v34; 
  int v35; 
  bool v36; 
  int v37; 
  HSTRING v38; 
  int v39; 
  HSTRING v40; 
  int v41; 
  int v42; 
  HSTRING v43; 
  int v44; 
  int v45; 
  bool v46; 
  int v47; 
  HSTRING v48; 
  int v49; 
  HSTRING v50; 
  int v51; 
  int v52; 
  HSTRING v53; 
  int v54; 
  int v55; 
  bool v56; 
  int v57; 
  HSTRING v58; 
  int v59; 
  HSTRING v60; 
  int v61; 
  int v62; 
  HSTRING v63; 
  int v64; 
  int v65; 
  bool v66; 
  HSTRING string; 
  int v68; 
  unsigned int v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  HSTRING_HEADER hstringHeader; 
  HSTRING newString; 
  HSTRING string2; 
  HSTRING string1; 
  HSTRING v77; 
  HSTRING v78; 
  HSTRING v79; 
  HSTRING v80; 
  HSTRING v81; 
  HSTRING v82; 
  HSTRING v83; 
  HSTRING v84; 
  HSTRING v85; 
  HSTRING v86; 
  HSTRING v87; 
  HSTRING v88; 
  HSTRING v89[17]; 
  HSTRING result; 
  unsigned int v91; 
  unsigned int v92; 

  v89[1] = (HSTRING)-2i64;
  v2 = controllerIndex;
  v70 = 0i64;
  v3 = userStatistics->__abi_get_ServiceConfigurationStatistics(userStatistics, (Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::UserStatistics::ServiceConfigurationStatistic _> **)&v70);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v70;
  v5 = (HSTRING)v70;
  if ( v70 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 8i64))(v70);
    v4 = v70;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v89[2] = v5;
  result = NULL;
  v6 = 0;
LABEL_7:
  v91 = v6;
  v7 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v5 + 56i64))(v5, &v92);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  if ( v6 < v92 )
  {
    v71 = 0i64;
    v8 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)v5 + 48i64))(v5, v6, &v71);
    if ( v8 < 0 )
      __abi_WinRTraiseException(v8);
    v9 = v71;
    v10 = (HSTRING)v71;
    if ( v71 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 8i64))(v71);
      v9 = v71;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
    result = v10;
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 8i64))(v10);
    v89[3] = v10;
    if ( v10 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
    result = NULL;
    v11 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v10 + 56i64))(v10, &result);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = (__int64)result;
    v13 = result;
    if ( result )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)result + 8i64))(result);
      v12 = (__int64)result;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
    string = v13;
    v14 = (*(__int64 (__fastcall **)(HSTRING, int *))(*(_QWORD *)v13 + 56i64))(v13, &v68);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
    if ( v68 )
    {
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      xenonUserData.m_guardedUserData[v2].isReputationSet = 1;
    }
    for ( i = 0; ; ++i )
    {
      result = NULL;
      v16 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v10 + 56i64))(v10, &result);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      v17 = (__int64)result;
      v18 = result;
      if ( result )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)result + 8i64))(result);
        v17 = (__int64)result;
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
      string = v18;
      v19 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v18 + 56i64))(v18, &v69);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16i64))(v18);
      if ( i >= v69 )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16i64))(v10);
        v6 = v91 + 1;
        goto LABEL_7;
      }
      result = NULL;
      v20 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v10 + 56i64))(v10, &result);
      if ( v20 < 0 )
        __abi_WinRTraiseException(v20);
      v21 = (__int64)result;
      v22 = result;
      if ( result )
      {
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)result + 8i64))(result);
        v21 = (__int64)result;
      }
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
      string = v22;
      v72 = 0i64;
      v23 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, __int64 *))(*(_QWORD *)v22 + 48i64))(v22, i, &v72);
      if ( v23 < 0 )
        __abi_WinRTraiseException(v23);
      v24 = v72;
      v25 = (HSTRING)v72;
      if ( v72 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 8i64))(v72);
        v24 = v72;
      }
      if ( v24 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
      v89[4] = v25;
      if ( v25 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 8i64))(v25);
      v89[5] = v25;
      if ( v25 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 16i64))(v25);
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16i64))(v22);
      string = NULL;
      v26 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 48i64))(v25, &string);
      if ( v26 < 0 )
        __abi_WinRTraiseException(v26);
      v27 = string;
      if ( string )
      {
        v28 = WindowsDuplicateString_0(string, &newString);
        if ( v28 < 0 )
          __abi_WinRTraiseException(v28);
        v29 = newString;
        v27 = string;
      }
      else
      {
        v29 = NULL;
      }
      WindowsDeleteString_0(v27);
      result = v29;
      v30 = WindowsCreateStringReference_0(L"OverAllReputationIsBad", 0x16u, &hstringHeader, &string2);
      if ( v30 < 0 )
        __abi_WinRTraiseException(v30);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v29, string2, (INT32 *)&result);
      WindowsDeleteString_0(v29);
      string = NULL;
      if ( !(_DWORD)result )
        break;
      v37 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 48i64))(v25, &string);
      if ( v37 < 0 )
        __abi_WinRTraiseException(v37);
      v38 = string;
      if ( string )
      {
        v39 = WindowsDuplicateString_0(string, &v78);
        if ( v39 < 0 )
          __abi_WinRTraiseException(v39);
        v40 = v78;
        v38 = string;
      }
      else
      {
        v40 = NULL;
      }
      WindowsDeleteString_0(v38);
      result = v40;
      v41 = WindowsCreateStringReference_0(L"FairplayReputationIsBad", 0x17u, &hstringHeader, &v79);
      if ( v41 < 0 )
        __abi_WinRTraiseException(v41);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v40, v79, (INT32 *)&result);
      WindowsDeleteString_0(v40);
      string = NULL;
      if ( !(_DWORD)result )
      {
        v42 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 64i64))(v25, &string);
        if ( v42 < 0 )
          __abi_WinRTraiseException(v42);
        v43 = string;
        if ( string )
        {
          v44 = WindowsDuplicateString_0(string, &v80);
          if ( v44 < 0 )
            __abi_WinRTraiseException(v44);
          v34 = v80;
          v43 = string;
        }
        else
        {
          v34 = NULL;
        }
        WindowsDeleteString_0(v43);
        v89[7] = v34;
        v45 = WindowsCreateStringReference_0(L"1", 1u, &hstringHeader, &v81);
        if ( v45 < 0 )
          __abi_WinRTraiseException(v45);
        LODWORD(result) = 0;
        WindowsCompareStringOrdinal_0(v34, v81, (INT32 *)&result);
        v46 = (_DWORD)result == 0;
        if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        xenonUserData.m_guardedUserData[v2].reputationValues.fairplayReputationIsBad = v46;
        goto LABEL_119;
      }
      v47 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 48i64))(v25, &string);
      if ( v47 < 0 )
        __abi_WinRTraiseException(v47);
      v48 = string;
      if ( string )
      {
        v49 = WindowsDuplicateString_0(string, &v82);
        if ( v49 < 0 )
          __abi_WinRTraiseException(v49);
        v50 = v82;
        v48 = string;
      }
      else
      {
        v50 = NULL;
      }
      WindowsDeleteString_0(v48);
      result = v50;
      v51 = WindowsCreateStringReference_0(L"CommsReputationIsBad", 0x14u, &hstringHeader, &v83);
      if ( v51 < 0 )
        __abi_WinRTraiseException(v51);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v50, v83, (INT32 *)&result);
      WindowsDeleteString_0(v50);
      string = NULL;
      if ( !(_DWORD)result )
      {
        v52 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 64i64))(v25, &string);
        if ( v52 < 0 )
          __abi_WinRTraiseException(v52);
        v53 = string;
        if ( string )
        {
          v54 = WindowsDuplicateString_0(string, &v84);
          if ( v54 < 0 )
            __abi_WinRTraiseException(v54);
          v34 = v84;
          v53 = string;
        }
        else
        {
          v34 = NULL;
        }
        WindowsDeleteString_0(v53);
        v89[8] = v34;
        v55 = WindowsCreateStringReference_0(L"1", 1u, &hstringHeader, &v85);
        if ( v55 < 0 )
          __abi_WinRTraiseException(v55);
        LODWORD(result) = 0;
        WindowsCompareStringOrdinal_0(v34, v85, (INT32 *)&result);
        v56 = (_DWORD)result == 0;
        if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        xenonUserData.m_guardedUserData[v2].reputationValues.commsReputationIsBad = v56;
        goto LABEL_119;
      }
      v57 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 48i64))(v25, &string);
      if ( v57 < 0 )
        __abi_WinRTraiseException(v57);
      v58 = string;
      if ( string )
      {
        v59 = WindowsDuplicateString_0(string, &v86);
        if ( v59 < 0 )
          __abi_WinRTraiseException(v59);
        v60 = v86;
        v58 = string;
      }
      else
      {
        v60 = NULL;
      }
      WindowsDeleteString_0(v58);
      result = v60;
      v61 = WindowsCreateStringReference_0(L"UserContentReputationIsBad", 0x1Au, &hstringHeader, &v87);
      if ( v61 < 0 )
        __abi_WinRTraiseException(v61);
      LODWORD(result) = 0;
      WindowsCompareStringOrdinal_0(v60, v87, (INT32 *)&result);
      WindowsDeleteString_0(v60);
      if ( !(_DWORD)result )
      {
        string = NULL;
        v62 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 64i64))(v25, &string);
        if ( v62 < 0 )
          __abi_WinRTraiseException(v62);
        v63 = string;
        if ( string )
        {
          v64 = WindowsDuplicateString_0(string, &v88);
          if ( v64 < 0 )
            __abi_WinRTraiseException(v64);
          v34 = v88;
          v63 = string;
        }
        else
        {
          v34 = NULL;
        }
        WindowsDeleteString_0(v63);
        v89[9] = v34;
        v65 = WindowsCreateStringReference_0(L"1", 1u, &hstringHeader, v89);
        if ( v65 < 0 )
          __abi_WinRTraiseException(v65);
        LODWORD(result) = 0;
        WindowsCompareStringOrdinal_0(v34, v89[0], (INT32 *)&result);
        v66 = (_DWORD)result == 0;
        if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
          __debugbreak();
        xenonUserData.m_guardedUserData[v2].reputationValues.userContentReputationIsBad = v66;
        goto LABEL_119;
      }
LABEL_120:
      if ( v25 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v25 + 16i64))(v25);
    }
    v31 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v25 + 64i64))(v25, &string);
    if ( v31 < 0 )
      __abi_WinRTraiseException(v31);
    v32 = string;
    if ( string )
    {
      v33 = WindowsDuplicateString_0(string, &string1);
      if ( v33 < 0 )
        __abi_WinRTraiseException(v33);
      v34 = string1;
      v32 = string;
    }
    else
    {
      v34 = NULL;
    }
    WindowsDeleteString_0(v32);
    v89[6] = v34;
    v35 = WindowsCreateStringReference_0(L"1", 1u, &hstringHeader, &v77);
    if ( v35 < 0 )
      __abi_WinRTraiseException(v35);
    LODWORD(result) = 0;
    WindowsCompareStringOrdinal_0(v34, v77, (INT32 *)&result);
    v36 = (_DWORD)result == 0;
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    xenonUserData.m_guardedUserData[v2].reputationValues.overallReputationIsBad = v36;
LABEL_119:
    WindowsDeleteString_0(v34);
    goto LABEL_120;
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
Live_OnIgnoreUserProfileChange
==============
*/
void Live_OnIgnoreUserProfileChange(const int controllerIndex)
{
  Com_Printf(16, "%s( %d ) \n", "Live_OnIgnoreUserProfileChange", (unsigned int)controllerIndex);
  g_hasOpenedUserConfirmChangeDialog = 0;
}

/*
==============
Live_OnResume
==============
*/
void Live_OnResume(void)
{
  OnlineChallengesManager *Instance; 
  OnlineProgression *v1; 
  char v2; 
  PublisherVariableManager *v3; 

  s_checkForSignoutStatusChanges = 1;
  s_checkForContentChanges = 1;
  s_checkForContentChangesTime = Sys_Milliseconds();
  Instance = OnlineChallengesManager::GetInstance();
  OnlineChallengesManager::Reset(Instance);
  v1 = OnlineProgression::GetInstance();
  OnlineProgression::OnResume(v1);
  if ( discard_playerstats_on_suspend )
  {
    v2 = s_markOnlineStatsForDiscard;
    if ( discard_playerstats_on_suspend->current.integer )
      v2 = 1;
    s_markOnlineStatsForDiscard = v2;
  }
  DLog_OnResume();
  Live_ShutdownDueToTerminalErrorForAllControllers();
  v3 = PublisherVariableManager::GetInstance();
  PublisherVariableManager::OnSuspendResume(v3);
  InviteJoinHSM::OnSuspendResume(&g_invitationHSM);
}

/*
==============
Live_OnSuspendPreCom_Suspend
==============
*/
void Live_OnSuspendPreCom_Suspend(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    goto LABEL_15;
  v1 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && (!Live_IsInSystemlinkLobby() || !Party_AreAllMembersLocal(&g_partyData)) )
  {
LABEL_15:
    if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT) )
    {
      s_showErrorDialogOnResume = 1;
      s_showSystemlinkErrorMessageTypeOnResume = Live_IsInSystemlinkLobby();
    }
  }
}

/*
==============
Live_OnSuspendResume_CheckForContentChanges
==============
*/
void Live_OnSuspendResume_CheckForContentChanges(void)
{
  s_checkForContentChanges = 1;
  s_checkForContentChangesTime = Sys_Milliseconds();
}

/*
==============
Live_OnSuspendResume_CheckForSignoutChanges
==============
*/
void Live_OnSuspendResume_CheckForSignoutChanges(void)
{
  s_checkForSignoutStatusChanges = 1;
}

/*
==============
Live_OnSuspendResume_RefreshCachedObjects
==============
*/
void Live_OnSuspendResume_RefreshCachedObjects(void)
{
  Com_Printf(16, "Live_OnSuspendResume_RefreshCachedObjects\n");
  Users_ForceUsersRefresh();
  GPad_ForceGamepadRefresh();
  Live_CachedUserAndContextRefresh();
}

/*
==============
Live_OnUserAddedEvent
==============
*/
void Live_OnUserAddedEvent(Windows::Xbox::System::User *newUser, const int controllerIndex)
{
  int Index; 
  LocalClientNum_t ClientFromController; 

  Com_Printf(16, "%s\n", "Live_OnUserAddedEvent");
  Index = Users_GetIndex(newUser);
  if ( Index == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 729, ASSERT_TYPE_ASSERT, "(userIndex != -1)", "%s\n\tUser isn't cached in UserManager", "userIndex != -1") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Live_CheckNotifications_SignInChanged(ClientFromController, Index, controllerIndex, 0);
}

/*
==============
Live_OnUserRemovedEvent
==============
*/
void Live_OnUserRemovedEvent(Windows::Xbox::System::User *oldUser)
{
  Platform::String *v2; 
  bool ControllerIndexForUserFromXenonUserData; 
  int Index; 
  LocalClientNum_t ClientFromController; 
  int controllerIndex; 
  Platform::String *v7; 

  Com_Printf(16, "%s\n", "Live_OnUserRemovedEvent");
  controllerIndex = -1;
  v2 = Windows::Xbox::System::IUser::XboxUserId::get(oldUser);
  v7 = v2;
  ControllerIndexForUserFromXenonUserData = Live_GetControllerIndexForUserFromXenonUserData(v2, &controllerIndex);
  WindowsDeleteString_0((HSTRING)v2);
  if ( ControllerIndexForUserFromXenonUserData )
  {
    Index = Users_GetIndex(oldUser);
    if ( Index == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 750, ASSERT_TYPE_ASSERT, "(userIndex != -1)", "%s\n\tUser isn't cached in UserManager", "userIndex != -1") )
      __debugbreak();
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    Live_CheckNotifications_SignInChanged(ClientFromController, Index, controllerIndex, 0);
  }
  else
  {
    Com_Printf(16, "A user sign out event occurred but at the time of the event the user doesn't exist in the xenonUserData.\n");
  }
}

/*
==============
Live_PerformXboxPermissionsCheck_InSaveGameThread
==============
*/
void Live_PerformXboxPermissionsCheck_InSaveGameThread(void)
{
  unsigned __int8 *p_privilegeCheckStates; 
  unsigned int i; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  bool v3; 
  XenonUserData *v4; 
  XenonUserData *v5; 
  XenonUserData *v6; 
  XenonUserData *v7; 
  XenonUserData *v8; 

  s_performXboxPermissionsCheck = 0;
  p_privilegeCheckStates = &xenonUserData.m_guardedUserData[0].privilegeCheckStates;
  for ( i = 0; (int)i < 8; ++i )
  {
    if ( Com_FrontEnd_IsInFrontEnd() && g_NetworkConnectivityLevel >= 3 && s_hasNetworkConnection )
    {
      UserFromControllerIndex = GetUserFromControllerIndex(i);
      v3 = UserFromControllerIndex == NULL;
      if ( UserFromControllerIndex )
        UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
      if ( !v3 )
      {
        if ( Live_DoesUserHavePrivilegeInArray(i, 0xFCu) )
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) |= 1u;
        }
        else
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) &= ~1u;
        }
        if ( Live_DoesUserHavePrivilegeInArray(i, 0xDCu) )
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) |= 4u;
        }
        else
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) &= ~4u;
        }
        if ( Live_DoesUserHavePrivilegeInArray(i, 0xB9u) )
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) |= 0x10u;
        }
        else
        {
          if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *(p_privilegeCheckStates - 1) &= ~0x10u;
        }
        if ( Live_GetPrivilegeCheckState(i, 2) != CHECKING )
        {
          if ( Live_DoesUserHavePrivilegeInArray(i, 0xFEu) )
          {
            v4 = XenonUserDataWrapper::operator[](&xenonUserData, i);
            v4->userPrivileges |= 2u;
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~1u;
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~2u;
            v5 = XenonUserDataWrapper::operator[](&xenonUserData, i);
            v5->privilegeCheckStates |= 2u;
          }
          else
          {
            Live_StartAsyncOnlinePrivilegeCheck(i);
            Live_SetPrivilegeCheckState(i, 2, CHECKING);
          }
        }
        if ( Live_GetPrivilegeCheckState(i, 8) != CHECKING )
        {
          if ( Live_DoesUserHavePrivilegeInArray(i, 0xF7u) )
          {
            v6 = XenonUserDataWrapper::operator[](&xenonUserData, i);
            v6->userPrivileges |= 8u;
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~4u;
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~8u;
            v7 = XenonUserDataWrapper::operator[](&xenonUserData, i);
            v7->privilegeCheckStates |= 8u;
          }
          else
          {
            Live_StartAsyncUGCPrivilegeCheck(i);
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~4u;
            if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
              __debugbreak();
            *p_privilegeCheckStates &= ~8u;
            v8 = XenonUserDataWrapper::operator[](&xenonUserData, i);
            v8->privilegeCheckStates |= 4u;
          }
        }
      }
    }
    p_privilegeCheckStates += 256;
  }
}

/*
==============
Live_PlatformIdIsLocalPlayer
==============
*/
_BOOL8 Live_PlatformIdIsLocalPlayer(const unsigned __int64 platformId)
{
  int v2; 
  unsigned __int64 *p_platformId; 
  unsigned __int64 v4; 

  if ( platformId )
  {
    v2 = 0;
    p_platformId = &xenonUserData.m_guardedUserData[0].platformId;
    v4 = 0i64;
    while ( 1 )
    {
      if ( v4 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( *p_platformId == platformId )
        break;
      ++v2;
      ++v4;
      p_platformId += 32;
      if ( (__int64)p_platformId >= (__int64)s_firstUserGamertagAtStart )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v2 = -1;
  }
  return v2 >= 0;
}

/*
==============
Live_SetCachedUserDataForSigninComplete
==============
*/
void Live_SetCachedUserDataForSigninComplete(const int controllerIndex, const unsigned __int64 xuid)
{
  ;
}

/*
==============
Live_SetIsBadPreviewByte
==============
*/
void Live_SetIsBadPreviewByte(const int controllerIndex)
{
  __int64 v1; 
  BOOL overallReputationIsBad; 
  unsigned int RawHash; 

  v1 = controllerIndex;
  if ( LiveStorage_PersistentDataEnabled() )
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(v1) > 0 )
    {
      if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( xenonUserData.m_guardedUserData[v1].isReputationSet )
      {
        if ( LiveStorage_DoWeHaveStats(v1) )
        {
          overallReputationIsBad = XenonUserDataWrapper::operator[](&xenonUserData, v1)->reputationValues.overallReputationIsBad;
          RawHash = j_SL_GetRawHash(scr_const.isbad_preview);
          CL_PlayerData_SetIntByName(v1, RawHash, overallReputationIsBad + 128, STATSGROUP_COMMON);
        }
        else
        {
          Com_PrintError(15, "We don't have stats yet..\n");
        }
      }
    }
  }
}

/*
==============
Live_SetLocalClientPlatformUserName
==============
*/
void Live_SetLocalClientPlatformUserName(const int controllerIndex, const char *userName)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2551, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !userName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2552, ASSERT_TYPE_SANITY, "( userName )", (const char *)&queryFormat, "userName") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  Com_Printf(25, "Changing platform username(%u) from (%s) to (%s).\n", (unsigned int)v2, xenonUserData.m_guardedUserData[v2].platformGamertag, userName);
  Com_TruncatePlayerName(userName, xenonUserData.m_guardedUserData[v2].platformGamertag, 0x24ui64);
}

/*
==============
Live_SetLocalClientUserName
==============
*/
void Live_SetLocalClientUserName(const int controllerIndex, const char *userName)
{
  __int64 v2; 
  char *gamertag; 
  unsigned int PlayerNameSuffix; 
  unsigned int v6; 
  char *v7; 
  int v8; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2537, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !userName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2538, ASSERT_TYPE_SANITY, "( userName )", (const char *)&queryFormat, "userName") )
    __debugbreak();
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  gamertag = xenonUserData.m_guardedUserData[v2].gamertag;
  Com_Printf(25, "Changing username(%u) from (%s) to (%s).\n", (unsigned int)v2, gamertag, userName);
  Core_strcpy(xenonUserData.m_guardedUserData[v2].fullGamertag, 0x40ui64, userName);
  Com_TruncatePlayerName(userName, gamertag, 0x24ui64);
  PlayerNameSuffix = Com_ExtractPlayerNameSuffix(userName);
  v6 = 0;
  xenonUserData.m_guardedUserData[v2].gamertagSuffix = PlayerNameSuffix;
  if ( &xenonUserData.m_guardedUserData[v2] != (XenonUserData *)-4i64 && *gamertag )
  {
    v7 = xenonUserData.m_guardedUserData[v2].gamertag;
    do
    {
      if ( v7 - gamertag >= 36 )
        break;
      v8 = *v7++;
      v6 = v8 + 31 * v6;
    }
    while ( *v7 );
  }
  xenonUserData.m_guardedUserData[v2].hashOfGamertag = v6;
}

/*
==============
Live_SetPlatformId
==============
*/
void Live_SetPlatformId(const int controllerIndex, const unsigned __int64 platformId)
{
  __int64 v2; 
  __int64 v4; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v4 = v2 << 8;
  Com_Printf(25, "Changing PlatformId(%u) from (%zu) to (%zu).\n", (unsigned int)v2, xenonUserData.m_guardedUserData[v2].platformId, platformId);
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v4 + 24] = platformId;
  if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  Com_sprintf<21>((char (*)[21])&xenonUserData.m_guardedUserData[0].platformIdString[v4], "%zu", platformId);
}

/*
==============
Live_SetPrivilegeCheckState
==============
*/
void Live_SetPrivilegeCheckState(int controllerIndex, int privilegeToSet, PrivilegeCheckState state)
{
  __int64 v3; 
  unsigned __int8 *p_privilegeCheckStates; 
  XenonUserData *v6; 
  unsigned __int8 *v7; 
  XenonUserData *v8; 
  XenonUserData *v9; 

  v3 = controllerIndex;
  if ( privilegeToSet == 2 )
  {
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    p_privilegeCheckStates = &xenonUserData.m_guardedUserData[v3].privilegeCheckStates;
    *p_privilegeCheckStates &= ~1u;
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *p_privilegeCheckStates &= ~2u;
    if ( state == CHECKING )
    {
      if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      *p_privilegeCheckStates |= 1u;
    }
    else if ( state == CHECKED )
    {
      v6 = XenonUserDataWrapper::operator[](&xenonUserData, v3);
      v6->privilegeCheckStates |= 2u;
    }
  }
  else if ( privilegeToSet == 8 )
  {
    if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v7 = &xenonUserData.m_guardedUserData[v3].privilegeCheckStates;
    *v7 &= ~4u;
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *v7 &= ~8u;
    if ( state == CHECKING )
    {
      v8 = XenonUserDataWrapper::operator[](&xenonUserData, v3);
      v8->privilegeCheckStates |= 4u;
    }
    else if ( state == CHECKED )
    {
      v9 = XenonUserDataWrapper::operator[](&xenonUserData, v3);
      v9->privilegeCheckStates |= 8u;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 470, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Live_SetPrivelegeCheckState not setup for this privilege") )
  {
    __debugbreak();
  }
}

/*
==============
Live_SetUniversalId
==============
*/
void Live_SetUniversalId(const int controllerIndex, const XUID xuid)
{
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v3 = XUID::ToDevString(&xuida);
  v4 = XUID::ToDevString(&xenonUserData.m_guardedUserData[v2].xuid);
  Com_Printf(25, "Changing UniversalId(%u) from (%s) to (%s).\n", (unsigned int)v2, v4, v3);
  XUID::operator=(&xenonUserData.m_guardedUserData[v2].xuid, &xuida);
  v5 = XUID::ToString(&xenonUserData.m_guardedUserData[v2].xuid);
  Core_strcpy(xenonUserData.m_guardedUserData[v2].xuidString, 0x15ui64, v5);
  LiveCommon_UpdatedXuid(v2, xuida);
}

/*
==============
Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread
==============
*/
_BOOL8 Live_ShouldPerformXboxPermissionsCheck_InSaveGameThread()
{
  return s_performXboxPermissionsCheck;
}

/*
==============
Live_ShouldPlatformSessionBeInviteOnly
==============
*/
bool Live_ShouldPlatformSessionBeInviteOnly(PartyData *party)
{
  const dvar_t *v1; 
  const dvar_t *v3; 

  v1 = DVARBOOL_xblive_privatematch_solo;
  if ( !DVARBOOL_xblive_privatematch_solo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch_solo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1;
  v3 = DVARBOOL_online_mp_private_matches_are_invite_only;
  if ( !DVARBOOL_online_mp_private_matches_are_invite_only && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_mp_private_matches_are_invite_only") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && Party_IsPrivateMatchLobby(party);
}

/*
==============
Live_ShowFriendsList
==============
*/
void Live_ShowFriendsList(int controllerIndex)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  int ActivationFactoryByPCWSTR; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  Platform::Guid pGuid; 
  __int64 v8; 
  void *ppActivationFactory; 
  __int64 v10; 

  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3641, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
    __debugbreak();
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v8 = 0i64;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4CFA3F9D1A0DD80Ei64;
  *(_DWORD *)&pGuid.__d = 772690062;
  *(_DWORD *)&pGuid.__h = 799480509;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v8 = 0i64;
  v4 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::System::User *, __int64 *))(*(_QWORD *)ppActivationFactory + 72i64))(ppActivationFactory, UserFromControllerIndex, &v8);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = v8;
  v6 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
    v5 = v8;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v10 = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
}

/*
==============
Live_ShowMarketplaceUI
==============
*/
void Live_ShowMarketplaceUI(const int controllerIndex, const int product_id)
{
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 2784, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  Com_Printf(16, "%s\n", "Live_ShowMarketplaceUI");
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( CL_GetLocalClientSignInState(controllerIndex) == 2 )
    Com_PrintWarning(0, "Live_ShowMarketplaceUI not implemented on this platform\n");
  else
    Live_StartXBOneSignIn(controllerIndex, 0, 0);
}

/*
==============
Live_Shutdown
==============
*/
void Live_Shutdown(void)
{
  dwLogOn_Shutdown();
  Xb3MultiplayerManager::Deallocate(&Xb3MultiplayerManager::ms_xb3MultiplayerManager);
}

/*
==============
Live_SignedInControllerFrame
==============
*/
void Live_SignedInControllerFrame(const unsigned int controllerIndex)
{
  __int64 v1; 
  voiceCommunicationSetting MostRestrictiveVoiceCommunicationSetting; 
  int v4; 

  v1 = (int)controllerIndex;
  if ( controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4151, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( !Live_IsSignedIn(v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 4152, ASSERT_TYPE_ASSERT, "(Live_IsSignedIn( controllerIndex ))", (const char *)&queryFormat, "Live_IsSignedIn( controllerIndex )") )
    __debugbreak();
  if ( Live_UserIsGuest(v1) || !CL_GetLocalClientSignInState(v1) )
  {
    MostRestrictiveVoiceCommunicationSetting = (unsigned int)Live_GetMostRestrictiveVoiceCommunicationSetting();
  }
  else
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    MostRestrictiveVoiceCommunicationSetting = 2 * ((xenonUserData.m_guardedUserData[v1].userPrivileges & 1) == 0);
  }
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[v1].voiceCommunicationSetting = MostRestrictiveVoiceCommunicationSetting;
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3436, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( CL_GetLocalClientSignInState(v1) == 2 && !Live_UserIsGuest(v1) && Live_IsUserSignedInToDemonware(v1) && !LiveStorage_CS_IsInited(v1) )
    LiveStorage_CS_Init(v1);
  if ( !Live_UserIsGuest(v1) )
    Content_UpdateEnumerateIfNeeded(v1);
}

/*
==============
Live_SignoutUserIfTheyAreSignedIntoAnotherController
==============
*/
__int64 Live_SignoutUserIfTheyAreSignedIntoAnotherController(const int userIndexTriggered, int controllerIndexTriggered)
{
  unsigned int v4; 
  Windows::Xbox::System::IUser *v5; 
  unsigned __int8 v6; 
  char *User; 
  char *v8; 
  XenonUserDataWrapper *v9; 
  char *gamertag; 
  char *fmt; 
  __int64 v13; 
  char *disconnectMessage; 
  Windows::Xbox::System::IUser *v15; 
  unsigned __int64 platformId; 

  v4 = 0;
  v5 = NULL;
  v15 = NULL;
  v6 = 0;
  if ( userIndexTriggered >= 0 && userIndexTriggered < (int)Users_NumUsers() )
  {
    User = (char *)Users_GetUser(userIndexTriggered);
    v8 = User;
    disconnectMessage = User;
    if ( User )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)User + 8i64))(User);
      v5 = (Windows::Xbox::System::IUser *)v8;
      v15 = (Windows::Xbox::System::IUser *)v8;
    }
    if ( v8 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16i64))(v8);
    disconnectMessage = (char *)Windows::Xbox::System::IUser::XboxUserId::get(v5);
    ConvertPlatformStringToPlatformId((Platform::String *)disconnectMessage, &platformId);
    WindowsDeleteString_0((HSTRING)disconnectMessage);
    v9 = &xenonUserData;
    gamertag = xenonUserData.m_guardedUserData[0].gamertag;
    do
    {
      if ( v4 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( v9->m_guardedUserData[0].signinState && platformId == Live_GetPlatformUserId(v4) )
      {
        if ( v4 == controllerIndexTriggered )
        {
          if ( v4 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          LODWORD(v13) = controllerIndexTriggered;
          LODWORD(fmt) = v4;
          Com_Printf(16, "Live_SignoutUserIfTheyAreSignedIntoAnotherController found user index %d (%s) at controller %d, and controller %d was passed in for this user to use.\n", (unsigned int)userIndexTriggered, gamertag, fmt, v13);
        }
        else
        {
          if ( v4 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          LODWORD(v13) = controllerIndexTriggered;
          LODWORD(fmt) = v4;
          Com_Printf(16, "Live_SignoutUserIfTheyAreSignedIntoAnotherController found user index %d (%s) at controller %d, but controller %d was passed in for this user to use. Since controller &d was signed into xenonUserData, we are signing them out!\n", (unsigned int)userIndexTriggered, gamertag, fmt, v13);
          if ( Live_UserSignedOut(v4, &disconnectMessage, 1, 0) )
            v6 = 1;
        }
      }
      ++v4;
      gamertag += 256;
      v9 = (XenonUserDataWrapper *)((char *)v9 + 256);
    }
    while ( (int)v4 < 8 );
    v5 = v15;
  }
  if ( v5 )
    v5->__abi_Release(v5);
  return v6;
}

/*
==============
Live_StallingXBoxPermissionsCheck
==============
*/
void Live_StallingXBoxPermissionsCheck(int controllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  bool v3; 
  bool HavePrivilegeInArray; 
  XenonUserData *v5; 
  unsigned __int8 userPrivileges; 
  unsigned __int8 v7; 
  bool v8; 
  XenonUserData *v9; 
  unsigned __int8 v10; 
  unsigned __int8 v11; 
  bool v12; 
  XenonUserData *v13; 
  unsigned __int8 v14; 
  unsigned __int8 v15; 
  XenonUserData *v16; 
  unsigned __int8 *p_privilegeCheckStates; 
  XenonUserData *v18; 
  XenonUserData *v19; 
  unsigned __int8 *v20; 
  XenonUserData *v21; 
  unsigned __int8 *v22; 
  XenonUserData *v23; 

  v1 = controllerIndex;
  if ( Com_FrontEnd_IsInFrontEnd() && g_NetworkConnectivityLevel >= 3 && s_hasNetworkConnection )
  {
    UserFromControllerIndex = GetUserFromControllerIndex(v1);
    v3 = UserFromControllerIndex == NULL;
    if ( UserFromControllerIndex )
      UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
    if ( !v3 )
    {
      HavePrivilegeInArray = Live_DoesUserHavePrivilegeInArray(v1, 0xFCu);
      v5 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
      userPrivileges = v5->userPrivileges;
      if ( HavePrivilegeInArray )
        v7 = userPrivileges | 1;
      else
        v7 = userPrivileges & 0xFE;
      v5->userPrivileges = v7;
      v8 = Live_DoesUserHavePrivilegeInArray(v1, 0xDCu);
      v9 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
      v10 = v9->userPrivileges;
      if ( v8 )
        v11 = v10 | 4;
      else
        v11 = v10 & 0xFB;
      v9->userPrivileges = v11;
      v12 = Live_DoesUserHavePrivilegeInArray(v1, 0xB9u);
      v13 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
      v14 = v13->userPrivileges;
      if ( v12 )
        v15 = v14 | 0x10;
      else
        v15 = v14 & 0xEF;
      v13->userPrivileges = v15;
      if ( Live_GetPrivilegeCheckState(v1, 2) != CHECKING )
      {
        if ( Live_DoesUserHavePrivilegeInArray(v1, 0xFEu) )
        {
          v16 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
          v16->userPrivileges |= 2u;
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          p_privilegeCheckStates = &xenonUserData.m_guardedUserData[v1].privilegeCheckStates;
          *p_privilegeCheckStates &= ~1u;
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *p_privilegeCheckStates &= ~2u;
          v18 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
          v18->privilegeCheckStates |= 2u;
        }
        else
        {
          Live_StartAsyncOnlinePrivilegeCheck(v1);
          Live_SetPrivilegeCheckState(v1, 2, CHECKING);
        }
      }
      if ( Live_GetPrivilegeCheckState(v1, 8) != CHECKING )
      {
        if ( Live_DoesUserHavePrivilegeInArray(v1, 0xF7u) )
        {
          v19 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
          v19->userPrivileges |= 8u;
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          v20 = &xenonUserData.m_guardedUserData[v1].privilegeCheckStates;
          *v20 &= ~4u;
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *v20 &= ~8u;
          v21 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
          v21->privilegeCheckStates |= 8u;
        }
        else
        {
          Live_StartAsyncUGCPrivilegeCheck(v1);
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          v22 = &xenonUserData.m_guardedUserData[v1].privilegeCheckStates;
          *v22 &= ~4u;
          if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
            __debugbreak();
          *v22 &= ~8u;
          v23 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
          v23->privilegeCheckStates |= 4u;
        }
      }
    }
  }
}

/*
==============
Live_StartAsyncOnlinePrivilegeCheck
==============
*/
void Live_StartAsyncOnlinePrivilegeCheck(int controllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v3; 
  __int64 v4; 
  XenonUserData *v5; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v6; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v7; 
  Concurrency::task_options *v8; 
  Concurrency::task<void> *v9; 
  volatile signed __int32 *v10; 
  std::_Ref_count_base *Rep; 
  Live_StartAsyncOnlinePrivilegeCheck::__l6::<lambda_25090cb3a42d9611f2a4fa0483c818a4> _Func; 
  volatile signed __int32 *v13; 
  Concurrency::task<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> v14; 
  Concurrency::task_options v15; 

  v1 = controllerIndex;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v3 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  if ( v3 )
    v3->__abi_Release(v3);
  if ( v3 )
  {
    v6 = Windows::Xbox::ApplicationModel::Store::Product::CheckPrivilegeAsync(v3, 0xFEu, 0, NULL);
    v7 = v6;
    if ( v6 )
      v6->__abi_AddRef(v6);
    if ( v7 )
      v7->__abi_Release(v7);
    Concurrency::task_options::task_options(&v15);
    v9 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> __gc *>(&v14, v7, v8);
    Concurrency::task_enum_Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult_::then__lambda_25090cb3a42d9611f2a4fa0483c818a4___(v9, &_Func);
    v10 = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8i64))(v10);
      }
    }
    Rep = v14._M_Impl._Rep;
    if ( v14._M_Impl._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    if ( v7 )
      v7->__abi_Release(v7);
  }
  else
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
      __debugbreak();
    v4 = v1 << 8;
    xenonUserData.m_guardedUserData[v1].userPrivileges &= ~2u;
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(&xenonUserData.m_guardedUserData[0].privilegeCheckStates + v4) &= ~1u;
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(&xenonUserData.m_guardedUserData[0].privilegeCheckStates + v4) &= ~2u;
    v5 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
    v5->privilegeCheckStates |= 2u;
  }
  if ( v3 )
    v3->__abi_Release(v3);
}

/*
==============
Live_StartAsyncUGCPrivilegeCheck
==============
*/
void Live_StartAsyncUGCPrivilegeCheck(int controllerIndex)
{
  __int64 v1; 
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v3; 
  __int64 v4; 
  XenonUserData *v5; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v6; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v7; 
  Concurrency::task_options *v8; 
  Concurrency::task<void> *v9; 
  volatile signed __int32 *v10; 
  std::_Ref_count_base *Rep; 
  Live_StartAsyncUGCPrivilegeCheck::__l6::<lambda_c271f60dee6ac74fc869547bb3998754> _Func; 
  volatile signed __int32 *v13; 
  Concurrency::task<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> v14; 
  Concurrency::task_options v15; 

  v1 = controllerIndex;
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v3 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  if ( v3 )
    v3->__abi_Release(v3);
  if ( v3 )
  {
    v6 = Windows::Xbox::ApplicationModel::Store::Product::CheckPrivilegeAsync(v3, 0xF7u, 0, NULL);
    v7 = v6;
    if ( v6 )
      v6->__abi_AddRef(v6);
    if ( v7 )
      v7->__abi_Release(v7);
    Concurrency::task_options::task_options(&v15);
    v9 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> __gc *>(&v14, v7, v8);
    Concurrency::task_enum_Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult_::then__lambda_c271f60dee6ac74fc869547bb3998754___(v9, &_Func);
    v10 = v13;
    if ( v13 )
    {
      if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
        if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8i64))(v10);
      }
    }
    Rep = v14._M_Impl._Rep;
    if ( v14._M_Impl._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    if ( v7 )
      v7->__abi_Release(v7);
  }
  else
  {
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
      __debugbreak();
    v4 = v1 << 8;
    xenonUserData.m_guardedUserData[v1].userPrivileges &= ~8u;
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(&xenonUserData.m_guardedUserData[0].privilegeCheckStates + v4) &= ~4u;
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(&xenonUserData.m_guardedUserData[0].privilegeCheckStates + v4) &= ~8u;
    v5 = XenonUserDataWrapper::operator[](&xenonUserData, v1);
    v5->privilegeCheckStates |= 8u;
  }
  if ( v3 )
    v3->__abi_Release(v3);
}

/*
==============
Live_StartXBOneSignIn
==============
*/
__int64 Live_StartXBOneSignIn(int localControllerIndex, bool allowGuests, bool isFromWidget)
{
  Windows::Xbox::Input::IController *ControllerForGamePadIndex; 
  int ActivationFactoryByPCWSTR; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  void *v11; 
  void *v12; 
  int v13; 
  void *ppActivationFactory; 
  void *v15; 
  __int64 v16; 
  Windows::Xbox::Input::IController *v17; 
  __int64 v18; 
  Platform::Guid pGuid; 
  __int64 v20; 

  v16 = -2i64;
  Com_Printf(16, "======================= Live_StartXBOneSignIn called for controller %d\n", (unsigned int)localControllerIndex);
  if ( GPad_IsActive(localControllerIndex) )
  {
    ControllerForGamePadIndex = GPad_GetControllerForGamePadIndex(localControllerIndex);
    v17 = ControllerForGamePadIndex;
    v20 = 0i64;
    if ( ControllerForGamePadIndex )
    {
      s_isAccountPickerOpen = 1;
      pGuid.__vftable = (Platform::Object_vtbl *)0x4CFA3F9D1A0DD80Ei64;
      *(_DWORD *)&pGuid.__d = 772690062;
      *(_DWORD *)&pGuid.__h = 799480509;
      ppActivationFactory = NULL;
      ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", &pGuid, &ppActivationFactory);
      if ( ActivationFactoryByPCWSTR < 0 )
        __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
      v20 = 0i64;
      v8 = (*(__int64 (__fastcall **)(void *, Windows::Xbox::Input::IController *, bool, __int64 *))(*(_QWORD *)ppActivationFactory + 80i64))(ppActivationFactory, ControllerForGamePadIndex, allowGuests, &v20);
      if ( v8 < 0 )
        __abi_WinRTraiseException(v8);
      v9 = v20;
      v10 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8i64))(v20);
        v9 = v20;
      }
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
      v15 = NULL;
      if ( ppActivationFactory )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
      v18 = v10;
      v15 = NULL;
      v15 = Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
      Windows::Foundation::AsyncOperationCompletedHandler_Windows::Xbox::UI::AccountPickerResult___::AsyncOperationCompletedHandler_Windows::Xbox::UI::AccountPickerResult_____lambda_2bd599fc2c27e2731783455f8c0ca9aa___((Live_StartXBOneSignIn::__l2::<lambda_2bd599fc2c27e2731783455f8c0ca9aa>)v15, (Platform::CallbackContext)localControllerIndex, 2);
      v12 = v11;
      v15 = v11;
      v13 = (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 48i64))(v10, v11);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      if ( v12 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16i64))(v12);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
      ControllerForGamePadIndex->__abi_Release(ControllerForGamePadIndex);
      return 1i64;
    }
    else
    {
      Com_PrintError(16, "======================= GPad_GetControllerForGamePadIndex FAILED for controller %d!\n", (unsigned int)localControllerIndex);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(16, "======================= GPad_IsActive FAILED for controller %d!\n", (unsigned int)localControllerIndex);
    return 0i64;
  }
}

/*
==============
Live_StayInGameOnSuspend
==============
*/
bool Live_StayInGameOnSuspend()
{
  return Live_IsInSystemlinkLobby() && Party_AreAllMembersLocal(&g_partyData);
}

/*
==============
Live_TryGoldUpsell
==============
*/
void Live_TryGoldUpsell(const int controllerIndex)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Windows::Xbox::System::IUser *v3; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v4; 
  Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *v5; 
  Concurrency::task_options *v6; 
  Concurrency::details::_Task_impl<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> *Ptr; 
  std::_Ref_count_base *Rep; 
  Concurrency::task<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> v9; 
  Concurrency::task_options v10; 

  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3308, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
    __debugbreak();
  UserFromControllerIndex = GetUserFromControllerIndex(controllerIndex);
  v3 = UserFromControllerIndex;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  if ( v3 )
    v3->__abi_Release(v3);
  if ( v3 )
  {
    if ( s_enableBlockingPrivilegeChecks )
    {
      s_goldUpselling = 1;
      v4 = Windows::Xbox::ApplicationModel::Store::Product::CheckPrivilegeAsync(v3, 0xFEu, 1, NULL);
      v5 = v4;
      if ( v4 )
        v4->__abi_AddRef(v4);
      if ( v5 )
        v5->__abi_Release(v5);
      Concurrency::task_options::task_options(&v10);
      Ptr = Concurrency::create_task<Windows::Foundation::IAsyncOperation<enum Windows::Xbox::ApplicationModel::Store::PrivilegeCheckResult> __gc *>(&v9, v5, v6)->_M_Impl._Ptr;
      if ( !Ptr )
        Concurrency::details::_DefaultTaskHelper::_NoCallOnDefaultTask_ErrorImpl();
      Concurrency::details::_Task_impl_base::_Wait(Ptr);
      Rep = v9._M_Impl._Rep;
      if ( v9._M_Impl._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      s_goldUpselling = 0;
      if ( v5 )
        v5->__abi_Release(v5);
    }
    v3->__abi_Release(v3);
  }
}

/*
==============
Live_UpdateActiveLocalGameClient
==============
*/
void Live_UpdateActiveLocalGameClient(LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
Live_UpdateOnlinePlayPrivilege
==============
*/
void Live_UpdateOnlinePlayPrivilege(const int controllerIndex)
{
  int v2; 
  XenonUserData *v3; 

  if ( Com_FrontEnd_IsInFrontEnd() && g_NetworkConnectivityLevel >= 3 && s_hasNetworkConnection && Live_IsOnlineGame() )
  {
    v2 = Sys_Milliseconds();
    if ( v2 - XenonUserDataWrapper::operator[](&xenonUserData, controllerIndex)->lastOnlinePlayPrivilegeCheckTime >= checkOnlinePlayPrivilegePeriod->current.integer )
    {
      v3 = XenonUserDataWrapper::operator[](&xenonUserData, controllerIndex);
      s_performXboxPermissionsCheck = 1;
      v3->lastOnlinePlayPrivilegeCheckTime = v2;
      Sys_SetSaveTasksEvent();
    }
  }
}

/*
==============
Live_UpdateVoiceFriendSettings
==============
*/
void Live_UpdateVoiceFriendSettings(void)
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  Voice_SetAllFriendFlags(PartyData);
  Voice_SetAllFriendFlags(&g_partyData);
}

/*
==============
Live_UpdateXboxLiveContext
==============
*/
bool Live_UpdateXboxLiveContext(Windows::Xbox::System::User *currentUser, const int controllerIndex)
{
  __int64 v2; 
  int v4; 
  unsigned int Index; 
  Microsoft::Xbox::Services::XboxLiveContext **p_xboxLiveContext; 
  Microsoft::Xbox::Services::XboxLiveContext *context; 
  unsigned int v8; 
  __int64 v9; 
  Microsoft::Xbox::Services::XboxLiveContext *v10; 
  unsigned int v11; 
  Microsoft::Xbox::Services::XboxLiveContext *xboxLiveContext; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  char *fmt; 
  char *fmta; 
  __int64 v20; 
  int v21; 
  __int64 v22; 

  v21 = controllerIndex;
  v2 = controllerIndex;
  v4 = currentUser->__abi_get_IsSignedIn(currentUser, (bool *)&v20);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  if ( (_BYTE)v20 )
  {
    Index = Users_GetIndex(currentUser);
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v20 = v2;
    p_xboxLiveContext = &xenonUserData.m_guardedUserData[v2].xboxLiveContext;
    LODWORD(fmt) = v2;
    Com_Printf(16, "Updating XBox context from [%llx] for user index %d with controller %d\n", *p_xboxLiveContext, Index, fmt);
    context = s_cachedInviteUserInfo[v2].context;
    if ( context )
    {
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( context != *p_xboxLiveContext )
      {
        context->__abi_AddRef(context);
        if ( *p_xboxLiveContext )
          (*p_xboxLiveContext)->__abi_Release(*p_xboxLiveContext);
        *p_xboxLiveContext = context;
      }
      v8 = Users_GetIndex(currentUser);
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      LODWORD(fmta) = v2;
      Com_Printf(16, "New XBox context [%llx] copied from s_cachedInviteUserInfo for user index %d with controller %d\n", *p_xboxLiveContext, v8, fmta);
    }
    else
    {
      v22 = 0i64;
      Microsoft::Xbox::Services::XboxLiveContext::XboxLiveContext(NULL, currentUser);
      v10 = (Microsoft::Xbox::Services::XboxLiveContext *)v9;
      v22 = v9;
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      if ( v10 != *p_xboxLiveContext )
      {
        if ( v10 )
          v10->__abi_AddRef(v10);
        if ( *p_xboxLiveContext )
          (*p_xboxLiveContext)->__abi_Release(*p_xboxLiveContext);
        *p_xboxLiveContext = v10;
      }
      if ( v10 )
        v10->__abi_Release(v10);
      v11 = Users_GetIndex(currentUser);
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      LODWORD(fmta) = v2;
      Com_Printf(16, "New XBox context obtained [%llx] for user index %d with controller %d\n", *p_xboxLiveContext, v11, fmta);
    }
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( xenonUserData.m_guardedUserData[v2].xboxLiveContext )
    {
      if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      xboxLiveContext = xenonUserData.m_guardedUserData[v2].xboxLiveContext;
      v20 = 0i64;
      v13 = xboxLiveContext->__abi_get_Settings(xboxLiveContext, (Microsoft::Xbox::Services::XboxLiveContextSettings **)&v20);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = v20;
      v15 = v20;
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8i64))(v20);
        v14 = v20;
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
      v22 = v15;
      v16 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 88i64))(v15, 4i64);
      if ( v16 < 0 )
        __abi_WinRTraiseException(v16);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
    }
  }
  return 0;
}

/*
==============
Live_UserIsGuest
==============
*/
_BOOL8 Live_UserIsGuest(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3346, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
  }
  return xenonUserData.m_guardedUserData[v1].isGuest;
}

/*
==============
Live_UserSignedIn
==============
*/
__int64 Live_UserSignedIn(int controllerIndex, int signinState, char **disconnectMessage)
{
  __int64 v3; 
  Windows::Xbox::System::User *v4; 
  Windows::Xbox::System::User *User; 
  __int64 v7; 
  Microsoft::Xbox::Services::XboxLiveContext **p_xboxLiveContext; 
  Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService *v9; 
  int v10; 
  Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals **v11; 
  Microsoft::Xbox::Services::Multiplayer::MultiplayerService *v12; 
  int v13; 
  Microsoft::Xbox::Services::Multiplayer::MultiplayerService *v14; 
  int v15; 
  Platform::String *v16; 
  Platform::String *v17; 
  Platform::String *v18; 
  __int64 v19; 
  int v20; 
  Windows::Xbox::System::User *v21; 
  const XUID *v22; 
  int v23; 
  int v24; 
  char v25[8]; 
  int v26; 
  XUID result; 
  __int64 v28; 
  unsigned __int64 platformId; 
  int userIndexToReturn; 
  __int64 v31; 
  char **disconnectMessagea; 
  __int64 v33; 
  char pDestBuffer[80]; 
  char v35[256]; 

  v33 = -2i64;
  v3 = controllerIndex;
  v26 = controllerIndex;
  disconnectMessagea = disconnectMessage;
  v4 = NULL;
  v28 = 0i64;
  if ( !GPad_GetUserIndexForPort(controllerIndex, &userIndexToReturn) )
    return 0i64;
  User = Users_GetUser(userIndexToReturn);
  v7 = (__int64)User;
  v31 = (__int64)User;
  if ( User )
  {
    User->__abi_AddRef(User);
    v4 = (Windows::Xbox::System::User *)v7;
    v28 = v7;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v31 = v3;
  p_xboxLiveContext = &xenonUserData.m_guardedUserData[v3].xboxLiveContext;
  if ( !*p_xboxLiveContext )
    Live_UpdateXboxLiveContext(v4, v3);
  Com_Printf(16, "Live_UserSignedIn setting up user contexts events for user on controller %d.\n", (unsigned int)v3);
  Com_Printf(25, "======================= RealTimeActivityService->Activate()\n");
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v9 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::RealTimeActivityService::get(*p_xboxLiveContext);
  result.m_id = (unsigned __int64)v9;
  v10 = v9->__abi_Activate(v9);
  if ( v10 < 0 )
    __abi_WinRTraiseException(v10);
  if ( v9 )
    v9->__abi_Release(v9);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v11 = &xenonUserData.m_guardedUserData[v31].xboxLiveContext;
  v12 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::MultiplayerService::get(*v11);
  result.m_id = (unsigned __int64)v12;
  v13 = v12->__abi_get_MultiplayerSubscriptionsEnabled(v12, (bool *)v25);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  v12->__abi_Release(v12);
  if ( !v25[0] )
  {
    Com_Printf(25, "======================= MultiplayerService->EnableMultiplayerSubscriptions()\n");
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v14 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::MultiplayerService::get(*v11);
    result.m_id = (unsigned __int64)v14;
    v15 = v14->__abi_EnableMultiplayerSubscriptions(v14);
    if ( v15 < 0 )
      __abi_WinRTraiseException(v15);
    if ( v14 )
      v14->__abi_Release(v14);
  }
  v16 = Live_GamertagForUser(v4);
  result.m_id = (unsigned __int64)v16;
  ConvertStringGamertagToDisplayableBuffer(v16, pDestBuffer, 0x44ui64);
  WindowsDeleteString_0((HSTRING)v16);
  memset_0(v35, 0, sizeof(v35));
  v17 = Windows::Xbox::System::IUser::XboxUserId::get(v4);
  result.m_id = (unsigned __int64)v17;
  ConvertStringGamertagToDisplayableBuffer(v17, v35, 0x100ui64);
  WindowsDeleteString_0((HSTRING)v17);
  Com_Printf(25, "Live_UserSignedIn - XboxUserId [%s]\n", v35);
  v18 = Windows::Xbox::System::IUser::XboxUserId::get(v4);
  result.m_id = (unsigned __int64)v18;
  ConvertPlatformStringToPlatformId(v18, &platformId);
  WindowsDeleteString_0((HSTRING)v18);
  if ( platformId )
  {
    if ( !g_VOIPMostlyUniqueValue )
      g_VOIPMostlyUniqueValue = platformId + Sys_Milliseconds();
    LiveStorage_NewUser(v3);
    Dvar_SetBool_Internal(xblive_loggedin, 1);
    if ( !platformId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1657, ASSERT_TYPE_ASSERT, "(newPlatformId != 0)", (const char *)&queryFormat, "newPlatformId != 0") )
      __debugbreak();
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v19 = v31 << 8;
    v20 = xenonUserData.m_guardedUserData[v31].signinState;
    Live_SetPlatformId(v3, platformId);
    Live_SetLocalClientPlatformUserName(v3, pDestBuffer);
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v21 = *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v19);
    if ( v4 != v21 )
    {
      if ( v4 )
      {
        v4->__abi_AddRef(v4);
        v21 = *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v19);
      }
      if ( v21 )
        v21->__abi_Release(v21);
      *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v19) = v4;
    }
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(int *)((char *)&xenonUserData.m_guardedUserData[0].signinState + v19) = signinState;
    if ( v20 < 2 )
    {
      v22 = XUID::FromUInt64(&result, platformId);
      Live_SetUniversalId(v3, (const XUID)v22->m_id);
    }
    Live_OnlineServicesFence_ResetState(v3);
    Live_SyncOnlineDataFence_ResetStateForAllGameModes(v3);
    if ( !v20 )
    {
      v23 = Sys_Milliseconds();
      GamerProfile_LogInProfile(v3);
      v24 = Sys_Milliseconds();
      Com_Printf(16, "GamerProfile_LogInProfile took %ims\n", (unsigned int)(v24 - v23));
    }
    Session_LeaveOldMPSDSessions(v3);
    Live_CacheXBOnePermissions(v3);
    if ( v4 )
      v4->__abi_Release(v4);
    return 1i64;
  }
  else
  {
    Live_UserSignedOut(v3, disconnectMessagea, 0, 0);
    Com_PrintError(14, "Live_UserSignedIn - Null XUID. Aborting\n");
    Com_SetErrorMessage("XBOXLIVE/INVALID_XUID");
    if ( v4 )
      v4->__abi_Release(v4);
    return 0i64;
  }
}

/*
==============
Live_UserSignedInLocally
==============
*/
bool Live_UserSignedInLocally(int controllerIndex, char **disconnectMessage)
{
  __int64 v3; 
  Windows::Xbox::System::IUser *v4; 
  bool v5; 
  unsigned int *v6; 
  int v7; 
  int v8; 
  Windows::Xbox::System::User *User; 
  __int64 v10; 
  XenonUserData *v11; 
  Platform::String *v13; 
  int userIndexToReturn; 
  __int64 v15; 
  unsigned __int64 platformId; 

  v3 = controllerIndex;
  v4 = NULL;
  v15 = 0i64;
  v5 = 0;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )", -2i64) )
    __debugbreak();
  v6 = (unsigned int *)&xenonUserData.m_guardedUserData[v3];
  Com_Printf(16, "Controller #%i signed in locally from state %i\n", (unsigned int)v3, *v6);
  v7 = Sys_Milliseconds();
  if ( !(unsigned int)Live_UserSignedIn(v3, 1, disconnectMessage) )
  {
    Com_PrintError(16, "Live_UserSignedIn failed\n");
    return 0;
  }
  v8 = Sys_Milliseconds();
  Com_Printf(16, "Live_UserSignedIn took %ims\n", (unsigned int)(v8 - v7));
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  if ( *v6 == 2 )
    v5 = Live_UserSignedOutofLive(v3, disconnectMessage);
  if ( !GPad_HasInput(v3) || !GPad_GetUserIndexForPort(v3, &userIndexToReturn) )
  {
    Com_Printf(16, "Live_UserSignedInLocally has no user for controller %d\n", (unsigned int)v3);
    return 0;
  }
  User = Users_GetUser(userIndexToReturn);
  v10 = (__int64)User;
  if ( User )
  {
    User->__abi_AddRef(User);
    v4 = (Windows::Xbox::System::IUser *)v10;
    v15 = v10;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  v13 = Windows::Xbox::System::IUser::XboxUserId::get(v4);
  ConvertPlatformStringToPlatformId(v13, &platformId);
  WindowsDeleteString_0((HSTRING)v13);
  if ( !platformId )
  {
    Com_Printf(16, "Live_UserSignedInLocally has NULL xuid\n");
    if ( v4 )
      v4->__abi_Release(v4);
    return 0;
  }
  v11 = XenonUserDataWrapper::operator[](&xenonUserData, v3);
  __abi_winrt_ptr_assign((void **)&v11->cachedUser, v4);
  ResetAllPrivilegeStates(v3);
  if ( v5 || !ShouldDisconnectForSignInOrOut(v3) )
  {
    Live_CacheXBOnePermissions(v3);
  }
  else
  {
    Com_Printf(16, "Since controller %i signed in while in a game, we are going to send them back to the main menu\n", (unsigned int)v3);
    v5 = 1;
    *disconnectMessage = "XBOXLIVE/SIGNINCHANGED";
  }
  Content_FindContentPacks(v3);
  OnlineMgr::OnSignedIn(&g_onlineMgr, v3, SignedInLocally);
  if ( v4 )
    v4->__abi_Release(v4);
  return v5;
}

/*
==============
Live_UserSignedInToLive
==============
*/
char Live_UserSignedInToLive(const int controllerIndex, char **disconnectMessage)
{
  __int64 v3; 
  Windows::Xbox::System::User *v4; 
  const XUID *v5; 
  Microsoft::Xbox::Services::XboxLiveContext *context; 
  __int64 v7; 
  Microsoft::Xbox::Services::XboxLiveContext *xboxLiveContext; 
  char v9; 
  int v10; 
  char UserIndexForPort; 
  Windows::Xbox::System::User *User; 
  Windows::Xbox::System::User *v13; 
  int v14; 
  unsigned __int64 PlatformUserId; 
  const XUID *v16; 
  Platform::String *v17; 
  __int64 v18; 
  Windows::Xbox::System::User *cachedUser; 
  XUID result; 
  unsigned __int64 platformId[8]; 
  char v22; 
  LocalClientNum_t outLocalClientNum; 
  int userIndexToReturn; 

  v3 = controllerIndex;
  v4 = NULL;
  Com_Printf(16, "Live_UserSignedInToLive( %d )\n", (unsigned int)controllerIndex);
  v5 = XUID::NullXUID(&result);
  XUID::operator=(&s_cachedInviteUserInfo[v3].xuid, v5);
  context = s_cachedInviteUserInfo[v3].context;
  if ( context )
  {
    context->__abi_Release(context);
    s_cachedInviteUserInfo[v3].context = NULL;
  }
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v7 = v3 << 8;
  xboxLiveContext = xenonUserData.m_guardedUserData[v3].xboxLiveContext;
  if ( xboxLiveContext )
  {
    xboxLiveContext->__abi_Release(xboxLiveContext);
    *(Microsoft::Xbox::Services::XboxLiveContext **)((char *)&xenonUserData.m_guardedUserData[0].xboxLiveContext + v7) = NULL;
  }
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].privilegeCheckStates + v7) = 0;
  v9 = 0;
  DW_EnableLogon(v3);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v10 = *(int *)((char *)&xenonUserData.m_guardedUserData[0].signinState + v7);
  UserIndexForPort = GPad_GetUserIndexForPort(v3, &userIndexToReturn);
  if ( UserIndexForPort )
  {
    User = Users_GetUser(userIndexToReturn);
    v13 = User;
    result.m_id = (unsigned __int64)User;
    if ( User )
    {
      User->__abi_AddRef(User);
      v4 = v13;
    }
    if ( v13 )
      v13->__abi_Release(v13);
    v14 = v4->__abi_get_IsGuest(v4, (bool *)&v22);
    if ( v14 < 0 )
      __abi_WinRTraiseException(v14);
    if ( v22 )
    {
      if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      xenonUserData.m_guardedUserData[0].platformIdString[v7 + 21] = 1;
    }
    if ( (unsigned int)Live_UserSignedIn(v3, 2, disconnectMessage) )
    {
      if ( Live_UserIsGuest(v3) )
      {
        PlatformUserId = Live_GetPlatformUserId(v3);
        v16 = XUID::FromUInt64(&result, PlatformUserId);
        Live_SetUniversalId(v3, (const XUID)v16->m_id);
      }
      v17 = Windows::Xbox::System::IUser::XboxUserId::get(v4);
      result.m_id = (unsigned __int64)v17;
      ConvertPlatformStringToPlatformId(v17, platformId);
      WindowsDeleteString_0((HSTRING)v17);
      if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      v18 = v3 << 8;
      cachedUser = xenonUserData.m_guardedUserData[v3].cachedUser;
      if ( v4 != cachedUser )
      {
        if ( v4 )
        {
          v4->__abi_AddRef(v4);
          cachedUser = *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v18);
        }
        if ( cachedUser )
          cachedUser->__abi_Release(cachedUser);
        *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v18) = v4;
      }
      Live_GetUserStatistics(v3);
      if ( CL_Mgr_IsControllerActive(v3) && !Live_UserIsGuest(v3) && CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) )
      {
        if ( LiveStorage_ShouldReadOnlineStats(v3) && LiveStorage_GetActiveStatsSource(v3) == STATS_ONLINE && CL_GetLocalClientGameConnectionState(outLocalClientNum) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) )
        {
          Com_Printf(16, "Since the active profile signed into live and is using online stats, we are going to send them back to the main menu\n");
          *disconnectMessage = "XBOXLIVE/SIGNINCHANGED";
          v9 = 1;
        }
        if ( LiveStorage_ShouldReadOfflineStats(v3) )
        {
          if ( LiveStorage_GetActiveStatsSource(v3) == STATS_OFFLINE && CL_GetLocalClientGameConnectionState(outLocalClientNum) && CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) )
          {
            Com_Printf(16, "Since the active profile signed into live and is using offline stats, we are going to send them back to the main menu\n");
            *disconnectMessage = "XBOXLIVE/SIGNINCHANGED";
            v9 = 1;
          }
          else
          {
            LiveStorage_ReadStats(v3);
          }
        }
      }
      LiveStorage_MarkPeriodicChallengesOutOfDate(v3);
      LiveStorage_MarkPeriodicExtinctionBonusOutOfDate(v3);
      Live_GetPermissions(v3);
      LiveParty_Update();
      LiveAntiCheat_UserSignedInToLive(v3);
      dwMail_UserSignedInToLive(v3);
      Live_GetAchievementStats(v3);
      XB3GameEvent_OnUserSignIn(v3);
      XB3GameEvent_PlayerSessionStart(v3);
      if ( !v9 && !v10 && ShouldDisconnectForSignInOrOut(v3) )
      {
        Com_Printf(16, "Since controller %i signed in while in a game, we are going to send them back to the main menu\n", (unsigned int)v3);
        v9 = 1;
        *disconnectMessage = "XBOXLIVE/SIGNINCHANGED";
      }
      Content_FindContentPacks(v3);
      if ( CL_Mgr_GetMode() && CL_Mgr_GetClientFromController(v3) == LOCAL_CLIENT_INVALID )
        Live_NotPlaying(v3);
      OnlineMgr::OnSignedIn(&g_onlineMgr, v3, SignedInToFirstParty);
      if ( v4 )
        v4->__abi_Release(v4);
      return v9;
    }
    else
    {
      if ( v4 )
        v4->__abi_Release(v4);
      return 0;
    }
  }
  return UserIndexForPort;
}

/*
==============
Live_UserSignedOut
==============
*/
char Live_UserSignedOut(const int controllerIndex, char **disconnectMessage, bool fromOtherController, bool forceSignOut)
{
  __int64 v5; 
  char v7; 
  LocalClientNum_t ClientFromController; 
  int signinState; 
  LocalClientNum_t outLocalClientNum; 

  v5 = controllerIndex;
  Com_Printf(16, "%s\n", "Live_UserSignedOut");
  v7 = 0;
  if ( fromOtherController && CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS )
  {
    Live_UserSignoutHandleGuestsOfUser(v5);
    Live_UserSignoutCleanup(v5, LOCAL_CLIENT_0);
    ResetAllPrivilegeStates(v5);
    return v7;
  }
  ClientFromController = CL_Mgr_GetClientFromController(v5);
  if ( (unsigned int)v5 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  signinState = xenonUserData.m_guardedUserData[v5].signinState;
  Live_UserSignoutHandleGuestsOfUser(v5);
  Live_UserSignoutCleanup(v5, ClientFromController);
  ResetAllPrivilegeStates(v5);
  if ( CL_Mgr_IsControllerMappedToClient(v5, &outLocalClientNum) )
  {
    Com_Printf(16, "Since the active profile signed out, we are going to send them back to the main menu\n");
    *disconnectMessage = "XBOXLIVE/SIGNEDOUT";
    v7 = 1;
    Com_Printf(25, "Live_UserSignedOut - Calling CL_Mgr_ResetClientsBackToSingleClient for controllerIndex %d\n", (unsigned int)v5);
    CL_Mgr_ResetClientsBackToSingleClient(v5);
  }
  else
  {
    Com_Printf(16, "Controller #%i signed out\n", (unsigned int)v5);
  }
  if ( signinState != 2 )
    return v7;
  return v7 | Live_UserSignedOutofLive(v5, disconnectMessage);
}

/*
==============
Live_UserSignedOutofLive
==============
*/
bool Live_UserSignedOutofLive(int controllerIndex, char **disconnectMessage)
{
  const dvar_t *v3; 
  const dvar_t *v4; 
  bool IsGameLocalServerRunning; 
  Online_Error_CAT_PLATFORM_t v6; 
  const dvar_t *v7; 
  LocalClientNum_t outLocalClientNum; 

  OnlineMgr::OnSignedOut(&g_onlineMgr, controllerIndex, SignedOutFromOnline);
  v3 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
      return 0;
    if ( Com_IsGameLocalServerRunning() )
    {
      v4 = DVARBOOL_xblive_privatematch;
      if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( !v4->current.enabled )
      {
        if ( !SV_IsMigrating() )
          Cbuf_AddText(outLocalClientNum, "hostmigration_start\n");
        return 0;
      }
    }
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
    Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
    IsGameLocalServerRunning = Com_IsGameLocalServerRunning();
    v6 = 1024;
    if ( !IsGameLocalServerRunning )
      v6 = 512;
LABEL_21:
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v6, NULL);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/SIGNEDOUTOFLIVE");
    return 0;
  }
  v7 = DVARBOOL_ui_onlineRequired;
  if ( !DVARBOOL_ui_onlineRequired && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_onlineRequired") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    Dvar_SetBool_Internal(DVARBOOL_ui_onlineRequired, 0);
    v6 = 64;
    goto LABEL_21;
  }
  return 0;
}

/*
==============
Live_UserSignoutCleanup
==============
*/
void Live_UserSignoutCleanup(const int controllerIndex, LocalClientNum_t localClientNum)
{
  __int64 v3; 
  TaskManager *Instance; 
  Windows::Xbox::System::User *v5; 
  Windows::Xbox::System::User *User; 
  __int64 v7; 
  Platform::String *v8; 
  Platform::String *v9; 
  unsigned __int64 v10; 
  XenonUserData *v11; 
  char *v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  char v16; 
  __int64 v17; 
  Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService *v18; 
  int v19; 
  const dvar_t *v20; 
  const XUID *v21; 
  __int64 v22; 
  __int64 v23; 
  int userIndexToReturn[2]; 
  XUID result; 
  __int64 v26; 
  unsigned __int64 platformId[4]; 
  char pDestBuffer[80]; 

  platformId[1] = -2i64;
  v3 = controllerIndex;
  Com_Printf(16, "%s ( %d %d )\n", "Live_UserSignoutCleanup", (unsigned int)controllerIndex, localClientNum);
  if ( (unsigned int)v3 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v3, 8) )
    __debugbreak();
  OnlineMgr::OnSignedOut(&g_onlineMgr, v3, SignedOutFromProfile);
  LuaShared_PlayerData_OnUserSignOut(v3);
  Instance = TaskManager::GetInstance();
  TaskManager::OnSignoutEvent(Instance, v3);
  v5 = NULL;
  v26 = 0i64;
  if ( !GPad_GetUserIndexForPort(v3, userIndexToReturn) )
    goto LABEL_22;
  User = Users_GetUser(userIndexToReturn[0]);
  v7 = (__int64)User;
  result.m_id = (unsigned __int64)User;
  if ( User )
  {
    User->__abi_AddRef(User);
    v5 = (Windows::Xbox::System::User *)v7;
    v26 = v7;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  v8 = Live_GamertagForUser(v5);
  result.m_id = (unsigned __int64)v8;
  ConvertStringGamertagToDisplayableBuffer(v8, pDestBuffer, 0x44ui64);
  WindowsDeleteString_0((HSTRING)v8);
  v9 = Windows::Xbox::System::IUser::XboxUserId::get(v5);
  result.m_id = (unsigned __int64)v9;
  ConvertPlatformStringToPlatformId(v9, platformId);
  WindowsDeleteString_0((HSTRING)v9);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v10 = xenonUserData.m_guardedUserData[v3].platformId;
  if ( !platformId[0] || !v10 || platformId[0] == v10 )
    goto LABEL_22;
  v11 = XenonUserDataWrapper::operator[](&xenonUserData, v3);
  v12 = pDestBuffer;
  v13 = v11->gamertag - pDestBuffer;
  do
  {
    v14 = (unsigned __int8)v12[v13];
    v15 = (unsigned __int8)*v12 - v14;
    if ( v15 )
      break;
    ++v12;
  }
  while ( v14 );
  if ( v15 )
  {
    if ( v5 )
      ((void (__fastcall *)(Windows::Xbox::System::User *, char *))v5->__abi_Release)(v5, v12);
    v16 = 1;
  }
  else
  {
LABEL_22:
    if ( v5 )
      v5->__abi_Release(v5);
    v16 = 0;
  }
  Live_BeingSignedOutByAnotherController(v3);
  if ( !v16 && UI_ShouldShowControllerRemovedPopup(localClientNum) )
    UI_SetShowControllerRemovedPopup(localClientNum, 0);
  XB3GameEvent_MultiplayerRoundEnd(v3);
  XB3GameEvent_PlayerSessionEnd(v3, 1);
  SD_OutputClosePadPort(v3);
  Voice_CleanupOnUserSignout(v3);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v26 = v3;
  v17 = v3 << 8;
  *(_QWORD *)userIndexToReturn = v3 << 8;
  if ( xenonUserData.m_guardedUserData[v3].xboxLiveContext )
  {
    Com_Printf(25, "======================= RealTimeActivityService->Deactivate()\n");
    if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v18 = Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals::RealTimeActivityService::get(*(Microsoft::Xbox::Services::__IXboxLiveContextPublicNonVirtuals **)((char *)&xenonUserData.m_guardedUserData[0].xboxLiveContext + v17));
    result.m_id = (unsigned __int64)v18;
    v19 = v18->__abi_Deactivate(v18);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
    if ( v18 )
      v18->__abi_Release(v18);
  }
  GamerProfile_LogOutProfile(v3);
  BG_MatchRulesHistory_Unload(v3);
  if ( PlatformSessionsHSMEnabled() )
  {
    v20 = DVARBOOL_online_platform_session_should_remove_user_on_signout;
    if ( !DVARBOOL_online_platform_session_should_remove_user_on_signout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_session_should_remove_user_on_signout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
    {
      if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
        __debugbreak();
      Plat_AddUserToGraveyard(xenonUserData.m_guardedUserData[v26].cachedUser);
    }
  }
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(int *)((char *)&xenonUserData.m_guardedUserData[0].signinState + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[0].platformIdString[v17 + 21] = 0;
  v21 = XUID::NullXUID(&result);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  XUID::operator=((XUID *)((char *)&xenonUserData.m_guardedUserData[0].xuid + v17), v21);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(_QWORD *)&xenonUserData.m_guardedUserData[0].xuidString[v17 + 24] = 0i64;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(_DWORD *)&xenonUserData.m_guardedUserData[0].gamertag[v17 + 36] = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(unsigned int *)((char *)&xenonUserData.m_guardedUserData[0].hashOfGamertag + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].userPrivileges + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v22 = *(__int64 *)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v17);
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16i64))(v22);
    *(Windows::Xbox::System::User **)((char *)&xenonUserData.m_guardedUserData[0].cachedUser + v17) = NULL;
  }
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].isReputationSet + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].reputationValues.overallReputationIsBad + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].reputationValues.fairplayReputationIsBad + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].reputationValues.commsReputationIsBad + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  *(&xenonUserData.m_guardedUserData[0].reputationValues.userContentReputationIsBad + v17) = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[0].gamertag[v17] = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[0].xuidString[v17] = 0;
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[0].platformIdString[v17] = 0;
  LiveAntiCheat_UserSignedOut(v3);
  dwMail_UserSignedOut(v3);
  PlayercardCache_UserSignedOut(v3);
  LiveAntiCheat_FeatureBanClearInfo(v3);
  LiveStorage_CheckOngoingSessionTasks();
  LiveStorage_NewUser(v3);
  dwLogonHSM_xb3::OnUserSignout(&g_dwLogonHSMs[v26]);
  Live_DisconnectFromWebServices(v3);
  if ( (unsigned int)v3 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  v23 = *(__int64 *)((char *)&xenonUserData.m_guardedUserData[0].xboxLiveContext + v17);
  if ( v23 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
    *(Microsoft::Xbox::Services::XboxLiveContext **)((char *)&xenonUserData.m_guardedUserData[0].xboxLiveContext + v17) = NULL;
  }
}

/*
==============
Live_UserSignoutHandleGuestsOfUser
==============
*/
void Live_UserSignoutHandleGuestsOfUser(const int controllerIndexOfSigningOutUser)
{
  unsigned int i; 
  int GuestUserSponsorControllerIndex; 
  LocalClientNum_t outLocalClientNum; 

  for ( i = 0; (int)i < 8; ++i )
  {
    if ( i > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3443, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( CL_GetLocalClientSignInState(i) > 0 && Live_UserIsGuest(i) && i != controllerIndexOfSigningOutUser )
    {
      GuestUserSponsorControllerIndex = Live_GetGuestUserSponsorControllerIndex(i);
      if ( GuestUserSponsorControllerIndex == -1 )
      {
        Com_Printf(16, "Guest on controller index %d has no valid sponsor (controllerIndexOfSponsor == %d), signing them out manually to prevent them from being able to play in online games without their sponsor.\n", i, 0xFFFFFFFFi64);
        CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum);
      }
      else
      {
        if ( GuestUserSponsorControllerIndex != controllerIndexOfSigningOutUser )
          continue;
        Com_Printf(16, "Guest on controller index %d is losing their sponsor on controller index %d, signing them out manually to prevent them from being able to play in online games without their sponsor.\n", i, (unsigned int)controllerIndexOfSigningOutUser);
        if ( !CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 1186, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndexToCheck, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndexToCheck, &localClientNum )") )
          __debugbreak();
      }
      Live_UserSignoutCleanup(i, outLocalClientNum);
    }
  }
}

/*
==============
Live_XB3ProfanityFilter_CheckStrings
==============
*/
__int64 Live_XB3ProfanityFilter_CheckStrings(const int controllerIndex, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *stringsToVerify, bool *pIsVulgar)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v10; 
  __int64 v11; 
  Concurrency::details::_Task_impl<unsigned char> *v12; 
  int v13; 
  __int64 v14; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> *v15; 
  const std::shared_ptr<Concurrency::scheduler_interface> *ambient_scheduler; 
  std::_Ref_count_base *Rep; 
  Concurrency::task<void> *v19; 
  std::_Ref_count_base *v20; 
  volatile signed __int32 *v23; 
  unsigned __int8 v24; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> *v26; 
  __int64 v27; 
  Concurrency::task<void> v28; 
  __int64 v29; 
  Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> *v30; 
  Microsoft::Xbox::Services::XboxLiveContext *v31; 
  __int64 v32; 
  Live_XB3ProfanityFilter_CheckStrings::__l3::<lambda_1213adf5df6b34aa048411708a000ca6> _Func; 
  bool **v34; 
  char *v35; 
  Concurrency::task_options v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  Concurrency::scheduler_interface *Ptr; 
  Concurrency::task<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> v41; 
  bool *v42; 
  unsigned __int8 v43; 

  v42 = pIsVulgar;
  v37 = -2i64;
  v29 = 0i64;
  v43 = 0;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v6 = (__int64)UsersXboxLiveContext;
  v31 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v38 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  v27 = 0i64;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 168i64))(v6, &v27);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = v27;
  v9 = v27;
  v32 = v27;
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8i64))(v27);
    v8 = v27;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v26 = (Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> *)v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8i64))(v9);
  v39 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  v10 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v10, &stringsToVerify->m_ctr, &stringsToVerify->m_vec);
  v12 = (Concurrency::details::_Task_impl<unsigned char> *)v11;
  v26 = (Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> *)v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
  if ( v12 )
    v12->__vftable[1].~_Task_impl_base(v12);
  v28._M_unitTask._M_Impl._Ptr = v12;
  v26 = NULL;
  v13 = (*(__int64 (__fastcall **)(__int64, Concurrency::details::_Task_impl<unsigned char> *, Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult _> _> **))(*(_QWORD *)v9 + 56i64))(v9, v12, &v26);
  if ( v13 < 0 )
    __abi_WinRTraiseException(v13);
  v14 = (__int64)v26;
  v15 = v26;
  if ( v26 )
  {
    v26->__abi_AddRef(v26);
    v14 = (__int64)v26;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  v30 = v15;
  if ( v15 )
    v15->__abi_AddRef(v15);
  v30 = v15;
  if ( v15 )
    v15->__abi_Release(v15);
  if ( v12 )
    v12->__vftable[1].~_Task_impl_base(v12);
  ambient_scheduler = Concurrency::get_ambient_scheduler();
  Rep = ambient_scheduler->_Rep;
  if ( Rep )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Rep->_Uses);
    Rep = ambient_scheduler->_Rep;
  }
  Ptr = ambient_scheduler->_Ptr;
  v36._M_Scheduler._M_sharedScheduler._Ptr = Ptr;
  v36._M_Scheduler._M_sharedScheduler._Rep = Rep;
  v36._M_Scheduler._M_scheduler = Ptr;
  v36._M_CancellationToken._M_Impl = NULL;
  v36._M_ContinuationContext._M_context._M_captureMethod = 1i64;
  v36._M_ContinuationContext._M_RunInline = 0;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+148h+var_80], xmm0
  }
  v36._M_InternalTaskOptions._M_presetCreationCallstack._M_frames._Mypair._Myval2._Myend = NULL;
  v36._M_InternalTaskOptions._M_presetCreationCallstack._M_SingleFrame = NULL;
  v36._M_InternalTaskOptions._M_hasPresetCreationCallstack = 0;
  *(_WORD *)&v36._M_HasCancellationToken = 0;
  v19 = (Concurrency::task<void> *)Concurrency::create_task<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Microsoft::Xbox::Services::System::VerifyStringResult __gc *> __gc *> __gc *>(&v41, v15, &v36);
  _Func.RetVal = (bool *)&v29;
  v34 = &v42;
  v35 = (char *)&v43;
  Concurrency::task_Windows::Foundation::Collections::IVectorView_Microsoft::Xbox::Services::System::VerifyStringResult______::then__lambda_1213adf5df6b34aa048411708a000ca6___(v19, &_Func);
  v20 = v41._M_Impl._Rep;
  if ( v41._M_Impl._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v41._M_Impl._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v20->_Destroy(v20);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->_Weaks, 0xFFFFFFFF) == 1 )
        *(double *)&_XMM0 = ((double (__fastcall *)(std::_Ref_count_base *))v20->_Delete_this)(v20);
    }
  }
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu [rsp+148h+var_118], xmm0
  }
  if ( _Func.pIsVulgar )
    _InterlockedIncrement((volatile signed __int32 *)_Func.pIsVulgar + 2);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+148h+_Func.result]
    vmovdqa [rsp+148h+var_118], xmm0
  }
  Sys_SafeWait<Concurrency::task<void>>(&v28);
  v23 = (volatile signed __int32 *)_Func.pIsVulgar;
  if ( _Func.pIsVulgar )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)_Func.pIsVulgar + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8i64))(v23);
    }
  }
  if ( v15 )
    v15->__abi_Release(v15);
  v24 = v43;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16i64))(v29);
  return v24;
}

/*
==============
Live_XB3ProfanityFilter_FilterString
==============
*/
char Live_XB3ProfanityFilter_FilterString(const int controllerIndex, Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *stringsToVerify, void *payload, void (*completionCallback)(GenericTask *, eTaskManagerTaskState))
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  Windows::Foundation::IAsyncInfo *v18; 
  int v19; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *v22; 
  Windows::Foundation::IAsyncInfo *v24; 
  Windows::Foundation::IAsyncInfo *v25; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v27; 
  __int64 v28[10]; 
  TaskCreateResult pTaskCreateResult; 

  v28[4] = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v8 = (__int64)UsersXboxLiveContext;
  v28[2] = (__int64)UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v28[5] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  v27 = 0i64;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 168i64))(v8, &v27);
  if ( v9 < 0 )
    __abi_WinRTraiseException(v9);
  v10 = v27;
  v11 = v27;
  v28[1] = v27;
  if ( v27 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8i64))(v27);
    v10 = v27;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  v25 = (Windows::Foundation::IAsyncInfo *)v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8i64))(v11);
  v28[6] = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  v12 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v12, &stringsToVerify->m_ctr, &stringsToVerify->m_vec);
  v14 = v13;
  v25 = (Windows::Foundation::IAsyncInfo *)v13;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8i64))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  v28[7] = v14;
  v28[0] = 0i64;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v11 + 56i64))(v11, v14, v28);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  v16 = v28[0];
  v17 = v28[0];
  if ( v28[0] )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28[0] + 8i64))(v28[0]);
    v16 = v28[0];
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
  v28[8] = v17;
  v18 = NULL;
  v25 = NULL;
  if ( v17 )
  {
    v19 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v17)(v17, &_uuidof__AUIAsyncInfo_Foundation_Windows__, (__int64 *)&v25);
    if ( v19 < 0 )
      __abi_WinRTraiseException(v19);
    v18 = v25;
  }
  v28[3] = (__int64)v18;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( v18 != pTaskCreateRequest.m_asyncInfo )
  {
    if ( v18 )
    {
      v18->__abi_AddRef(v18);
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
    pTaskCreateRequest.m_asyncInfo = v18;
  }
  if ( v18 )
    v18->__abi_Release(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16i64))(v17);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14);
  pTaskCreateRequest.m_onCompletionCallback = completionCallback;
  pTaskCreateRequest.m_appData = payload;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
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
    return 1;
  }
  else
  {
    Com_Printf(25, "%s CreateTask failed!\n", "Live_XB3ProfanityFilter_FilterString");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16i64))(v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
    pTaskCreateRequest.m_onCompletionCallback = NULL;
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_appSecondaryCallback = NULL;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    v22 = pTaskCreateRequest.m_asyncInfo;
    if ( pTaskCreateRequest.m_asyncInfo )
    {
      pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
      v22 = NULL;
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
      v22 = pTaskCreateRequest.m_asyncInfo;
    }
    if ( v22 )
      v22->__abi_Release(v22);
    return 0;
  }
}

/*
==============
Live_XUIDIsLocalPlayer
==============
*/
_BOOL8 Live_XUIDIsLocalPlayer(const XUID player)
{
  signed int v2; 
  XUID xuid; 

  xuid.m_id = player.m_id;
  if ( XUID::IsNull(&xuid) )
    return 0i64;
  v2 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v2 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    if ( XUID::operator==(&xenonUserData.m_guardedUserData[(__int64)v2].xuid, &xuid) )
      break;
    if ( ++v2 >= 8 )
    {
      v2 = -1;
      return v2 >= 0;
    }
  }
  return v2 >= 0;
}

/*
==============
XB3NotificationHandler::OnControllerAddedEvent
==============
*/
void XB3NotificationHandler::OnControllerAddedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerAddedEventArgs *args)
{
  Com_Printf(16, "%s\n", "XB3NotificationHandler::OnControllerAddedEvent");
  GPad_InvalidatePortMapping();
}

/*
==============
XB3NotificationHandler::OnControllerPairingChangedEvent
==============
*/
void XB3NotificationHandler::OnControllerPairingChangedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerPairingChangedEventArgs *args)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  Windows::Xbox::System::User *v7; 
  Platform::String *v8; 
  bool ControllerIndexForUserFromXenonUserData; 
  Windows::Xbox::System::User *v10; 
  Windows::Xbox::System::UserDisplayInfo *v11; 
  Platform::String *v12; 
  int controllerIndex[2]; 
  void *v14; 
  void *v15; 
  __int64 v16; 
  Platform::String *v17; 
  char pDestBuffer[128]; 

  v16 = -2i64;
  Com_Printf(16, "%s\n", "XB3NotificationHandler::OnControllerPairingChangedEvent");
  *(_QWORD *)controllerIndex = 0i64;
  v4 = args->__abi_get_PreviousUser(args, (Windows::Xbox::System::User **)controllerIndex);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = *(_QWORD *)controllerIndex;
  v6 = *(_QWORD *)controllerIndex;
  if ( *(_QWORD *)controllerIndex )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)controllerIndex + 8i64))(*(_QWORD *)controllerIndex);
    v5 = *(_QWORD *)controllerIndex;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
    v7 = Windows::Xbox::Input::IControllerPairingChangedEventArgs::PreviousUser::get(args);
    v14 = v7;
    v8 = Windows::Xbox::System::IUser::XboxUserId::get(v7);
    v15 = v8;
    ControllerIndexForUserFromXenonUserData = Live_GetControllerIndexForUserFromXenonUserData(v8, controllerIndex);
    WindowsDeleteString_0((HSTRING)v8);
    if ( v7 )
      v7->__abi_Release(v7);
    if ( ControllerIndexForUserFromXenonUserData )
    {
      v10 = Windows::Xbox::Input::IControllerPairingChangedEventArgs::PreviousUser::get(args);
      v15 = v10;
      v11 = Windows::Xbox::System::IUser::DisplayInfo::get(v10);
      v14 = v11;
      v12 = Windows::Xbox::System::IUserDisplayInfo::Gamertag::get(v11);
      v17 = v12;
      ConvertStringGamertagToDisplayableBuffer(v12, pDestBuffer, 0x80ui64);
      WindowsDeleteString_0((HSTRING)v12);
      if ( v11 )
        v11->__abi_Release(v11);
      if ( v10 )
        v10->__abi_Release(v10);
      Com_Printf(16, "user %s has lost their controller at game controller index %d\n", pDestBuffer, (unsigned int)controllerIndex[0]);
    }
  }
}

/*
==============
XB3NotificationHandler::OnControllerRemovedEvent
==============
*/
void XB3NotificationHandler::OnControllerRemovedEvent(XB3NotificationHandler *this, Platform::Object *sender, Windows::Xbox::Input::ControllerRemovedEventArgs *args)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  Windows::Xbox::System::IUser *v8; 
  Windows::Xbox::System::User *v9; 
  Platform::String *v10; 
  bool ControllerIndexForUserFromXenonUserData; 
  Platform::String *v12; 
  int controllerIndex[2]; 
  __int64 v14; 
  Windows::Xbox::System::IUser *v15[4]; 
  char pDestBuffer[128]; 

  v15[1] = (Windows::Xbox::System::IUser *)-2i64;
  Com_Printf(16, "%s\n", "XB3NotificationHandler::OnControllerRemovedEvent");
  *(_QWORD *)controllerIndex = 0i64;
  v4 = args->__abi_get_Controller(args, (Windows::Xbox::Input::IController **)controllerIndex);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = *(_QWORD *)controllerIndex;
  v6 = *(_QWORD *)controllerIndex;
  if ( *(_QWORD *)controllerIndex )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)controllerIndex + 8i64))(*(_QWORD *)controllerIndex);
    v5 = *(_QWORD *)controllerIndex;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  v14 = v6;
  v15[0] = NULL;
  v7 = (*(__int64 (__fastcall **)(__int64, Windows::Xbox::System::IUser **))(*(_QWORD *)v6 + 64i64))(v6, v15);
  if ( v7 < 0 )
    __abi_WinRTraiseException(v7);
  v8 = v15[0];
  v9 = (Windows::Xbox::System::User *)v15[0];
  if ( v15[0] )
  {
    v15[0]->__abi_AddRef(v15[0]);
    v8 = v15[0];
  }
  if ( v8 )
    v8->__abi_Release(v8);
  v15[2] = v9;
  v14 = 0i64;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  if ( v9 )
  {
    v10 = Windows::Xbox::System::IUser::XboxUserId::get(v9);
    v14 = (__int64)v10;
    ControllerIndexForUserFromXenonUserData = Live_GetControllerIndexForUserFromXenonUserData(v10, controllerIndex);
    WindowsDeleteString_0((HSTRING)v10);
    if ( ControllerIndexForUserFromXenonUserData )
    {
      v12 = Live_GamertagForUser(v9);
      v14 = (__int64)v12;
      ConvertStringGamertagToDisplayableBuffer(v12, pDestBuffer, 0x80ui64);
      WindowsDeleteString_0((HSTRING)v12);
      Com_Printf(16, "user %s has lost their controller at game controller index %d\n", pDestBuffer, (unsigned int)controllerIndex[0]);
    }
  }
  GPad_InvalidatePortMapping();
  if ( v9 )
    v9->__abi_Release(v9);
}

/*
==============
XB3NotificationHandler::OnCurrentUserChangedEvent
==============
*/
void XB3NotificationHandler::OnCurrentUserChangedEvent(XB3NotificationHandler *this, Platform::Object *sender, Platform::Object *args)
{
  Com_Printf(16, "%s\n", "XB3NotificationHandler::OnCurrentUserChangedEvent");
  s_updateCurrentUser = 1;
}

/*
==============
XB3NotificationHandler::OnNetworkStatusChangedEvent
==============
*/
void XB3NotificationHandler::OnNetworkStatusChangedEvent(XB3NotificationHandler *this, Platform::Object *sender)
{
  Windows::Networking::Connectivity::NetworkConnectivityLevel v2; 
  Windows::Networking::Connectivity::NetworkConnectivityLevel NetworkConnectivityLevel; 
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 
  const char *v7; 
  const char *v8; 

  Com_Printf(16, "%s\n", "XB3NotificationHandler::OnNetworkStatusChangedEvent");
  v2 = g_NetworkConnectivityLevel;
  NetworkConnectivityLevel = Live_GetNetworkConnectivityLevel();
  g_NetworkConnectivityLevel = NetworkConnectivityLevel;
  if ( NetworkConnectivityLevel == None )
  {
    v7 = "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : None\n";
    goto LABEL_14;
  }
  v4 = NetworkConnectivityLevel - 1;
  if ( !v4 )
  {
    v7 = "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : Local Access\n";
    goto LABEL_14;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : Constrained Internet Access\n";
LABEL_14:
    Com_Printf(16, v7);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      Com_Printf(16, "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : unknown (API change)\n");
      goto LABEL_15;
    }
    Com_Printf(16, "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : XboxLive Access\n");
  }
  else
  {
    Com_Printf(16, "\t NetworkInformation::GetInternetConnectionProfile() - Connectivity Level : Internet Access\n");
  }
  if ( v2 != g_NetworkConnectivityLevel )
    s_networkStatusImproved = 1;
LABEL_15:
  s_hasNetworkConnection = Live_GetCurrentNetworkConnectionStatus();
  v8 = "false";
  if ( s_hasNetworkConnection )
    v8 = "true";
  Com_Printf(16, "\t s_hasNetworkConnection set to %s\n", v8);
}

/*
==============
Plat_GetMacAddress
==============
*/
char Plat_GetMacAddress(unsigned __int8 *macAddr)
{
  UpdateConsoleIdCache();
  if ( !s_cachedConsoleID[0] )
    return 0;
  *(_DWORD *)macAddr = s_cachedConsoleID[2];
  *((_WORD *)macAddr + 2) = WORD2(s_cachedConsoleID[2]);
  return 1;
}

/*
==============
Plat_GetMacAddressAsUint64
==============
*/
char Plat_GetMacAddressAsUint64(unsigned __int64 *macAddr)
{
  UpdateConsoleIdCache();
  if ( !s_cachedConsoleID[0] )
    return 0;
  *macAddr = s_cachedConsoleID[2];
  return 1;
}

/*
==============
Plat_GetMachineId
==============
*/
char Plat_GetMachineId(unsigned __int64 *machineIdLow, unsigned __int64 *machineIdHigh)
{
  char result; 

  UpdateConsoleIdCache();
  result = s_cachedConsoleID[0];
  if ( s_cachedConsoleID[0] )
  {
    *machineIdHigh = s_cachedConsoleID[0];
    *machineIdLow = s_cachedConsoleID[1];
    Com_Printf(16, "Live_GetConsoleDetails using cached machine ID %llu, %llu.\n", *machineIdHigh, s_cachedConsoleID[1]);
    return 1;
  }
  return result;
}

/*
==============
Plat_OnlineServicesFence_Activate
==============
*/
void Plat_OnlineServicesFence_Activate(const int controllerIndex)
{
  ;
}

/*
==============
ResetAllPrivilegeStates
==============
*/
void ResetAllPrivilegeStates(int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
    __debugbreak();
  xenonUserData.m_guardedUserData[v1].privilegeCheckStates = 0;
}

/*
==============
ResetXenonUserData
==============
*/
void ResetXenonUserData(void)
{
  unsigned int *p_gamertagSuffix; 
  unsigned int v1; 
  char *platformGamertag; 
  const XUID *v3; 
  __int64 v4; 
  __int64 v5; 
  XUID result; 

  p_gamertagSuffix = &xenonUserData.m_guardedUserData[0].gamertagSuffix;
  v1 = 0;
  platformGamertag = xenonUserData.m_guardedUserData[0].platformGamertag;
  do
  {
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(p_gamertagSuffix - 10) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(_QWORD *)(platformGamertag - 44) = 0i64;
    *(_QWORD *)(platformGamertag - 36) = 0i64;
    *(_QWORD *)(platformGamertag - 28) = 0i64;
    *(_QWORD *)(platformGamertag - 20) = 0i64;
    *((_DWORD *)platformGamertag - 3) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(_QWORD *)platformGamertag = 0i64;
    *((_QWORD *)platformGamertag + 1) = 0i64;
    *((_QWORD *)platformGamertag + 2) = 0i64;
    *((_QWORD *)platformGamertag + 3) = 0i64;
    *((_DWORD *)platformGamertag + 8) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *(_QWORD *)(platformGamertag + 36) = 0i64;
    *(_QWORD *)(platformGamertag + 44) = 0i64;
    *(_QWORD *)(platformGamertag + 52) = 0i64;
    *(_QWORD *)(platformGamertag + 60) = 0i64;
    *(_QWORD *)(platformGamertag + 68) = 0i64;
    *(_QWORD *)(platformGamertag + 76) = 0i64;
    *(_QWORD *)(platformGamertag + 84) = 0i64;
    *(_QWORD *)(platformGamertag + 92) = 0i64;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *p_gamertagSuffix = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    p_gamertagSuffix[1] = 0;
    v3 = XUID::NullXUID(&result);
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    XUID::operator=((XUID *)platformGamertag + 13, v3);
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_QWORD *)p_gamertagSuffix + 18) = 0i64;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_QWORD *)platformGamertag + 14) = 0i64;
    *((_QWORD *)platformGamertag + 15) = 0i64;
    *((_DWORD *)platformGamertag + 32) = 0;
    platformGamertag[132] = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_QWORD *)platformGamertag + 18) = 0i64;
    *((_QWORD *)platformGamertag + 19) = 0i64;
    *((_DWORD *)platformGamertag + 40) = 0;
    platformGamertag[164] = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 173) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 184) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    p_gamertagSuffix[44] = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v4 = *((_QWORD *)p_gamertagSuffix + 24);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
      *((_QWORD *)p_gamertagSuffix + 24) = 0i64;
    }
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    v5 = *((_QWORD *)p_gamertagSuffix + 25);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
      *((_QWORD *)p_gamertagSuffix + 25) = 0i64;
    }
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 212) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 208) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 209) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 210) = 0;
    if ( v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 405, ASSERT_TYPE_ASSERT, "(( controllerIndex >= 0 ) && ( controllerIndex < 8 ))", (const char *)&queryFormat, "( controllerIndex >= 0 ) && ( controllerIndex < MAX_GPAD_COUNT )") )
      __debugbreak();
    *((_BYTE *)p_gamertagSuffix + 211) = 0;
    ++v1;
    p_gamertagSuffix += 64;
    platformGamertag += 256;
  }
  while ( (int)v1 < 8 );
}

/*
==============
ShouldDisconnectForSignInOrOut
==============
*/
bool ShouldDisconnectForSignInOrOut(int controllerIndex)
{
  LocalClientNum_t ClientFromController; 
  bool result; 

  result = 0;
  if ( CL_Mgr_IsControllerActive(controllerIndex) && CL_Mgr_GetClientFromController(controllerIndex) != LOCAL_CLIENT_INVALID )
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    if ( CL_GetLocalClientGameConnectionState(ClientFromController) )
      return 1;
  }
  return result;
}

/*
==============
UpdateConsoleIdCache
==============
*/
void UpdateConsoleIdCache()
{
  bdString *v0; 
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginResult *Result; 
  const char *MachineId; 
  int v5; 
  int Length; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 
  char v11; 
  char v12; 
  char v13; 
  char v14; 
  const char *Buffer; 
  bdString v17; 
  __int64 v18; 
  __int64 v19; 
  bdAddr v20; 
  __int128 v21; 
  int v22; 

  v19 = -2i64;
  v18 = 0i64;
  bdAddr::bdAddr(&v20);
  v0 = NULL;
  bdString::bdString(&v17);
  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, 0);
  if ( DWLogin::succeeded(Login) )
  {
    Result = (bdLoginResult *)DWLogin::getResult(Login);
    MachineId = bdLoginResult::getMachineId(Result);
    bdString::operator=(&v17, MachineId);
    v0 = &v17;
  }
  if ( !s_cachedConsoleID[0] && v0 )
  {
    v5 = 0;
    v21 = 0ui64;
    v22 = 0;
    Length = bdString::getLength(v0);
    v7 = Length;
    if ( Length )
    {
      if ( Length <= 40 )
      {
        v8 = 0;
        v9 = Length;
        if ( Length > 0 )
        {
          v10 = 0i64;
          do
          {
            v11 = bdString::getBuffer(v0)[v10];
            if ( (unsigned __int8)(v11 - 48) > 9u )
            {
              if ( (unsigned __int8)(v11 - 65) > 5u )
                v12 = -(v11 != 0);
              else
                v12 = v11 - 55;
            }
            else
            {
              v12 = v11 - 48;
            }
            v13 = bdString::getBuffer(v0)[v10 + 1];
            if ( (unsigned __int8)(v13 - 48) > 9u )
            {
              if ( (unsigned __int8)(v13 - 65) > 5u )
                v14 = -(v13 != 0);
              else
                v14 = v13 - 55;
            }
            else
            {
              v14 = v13 - 48;
            }
            if ( v12 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3787, ASSERT_TYPE_ASSERT, "(high != 255)", (const char *)&queryFormat, "high != 255") )
              __debugbreak();
            if ( v14 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 3788, ASSERT_TYPE_ASSERT, "(low != 255)", (const char *)&queryFormat, "low != 255") )
              __debugbreak();
            *((_BYTE *)&v21 + ((unsigned __int64)v8 >> 1)) = v14 + 16 * v12;
            v8 += 2;
            v10 += 2i64;
          }
          while ( v10 < v9 );
          v5 = v22;
        }
        __asm
        {
          vmovups xmm0, [rsp+138h+var_48]
          vmovups xmmword ptr cs:s_cachedConsoleID, xmm0
        }
        LODWORD(s_cachedConsoleID[2]) = v5;
        goto LABEL_31;
      }
      Buffer = bdString::getBuffer(v0);
    }
    else
    {
      Buffer = (char *)&queryFormat.fmt + 3;
    }
    Com_Printf(16, "Live_GetConsoleDetails failed with invalid machineId (%s) with length (%i).\n", Buffer, v7);
  }
LABEL_31:
  bdString::~bdString(&v17);
}

/*
==============
WriteAchievementProgress
==============
*/

void __fastcall WriteAchievementProgress(const int controllerIndex, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __m256i v46; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( s_achievementUnlockStatus[controllerIndex].read )
  {
    _RAX = gameAchievementList;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    __asm { vmovaps xmmword ptr [r11-38h], xmm6 }
    v14 = 0;
    __asm { vmovaps xmmword ptr [r11-48h], xmm7 }
    v15 = 0i64;
    __asm { vmovaps xmmword ptr [r11-58h], xmm8 }
    do
    {
      __asm
      {
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rsp+0C8h+var_88], ymm1
        vextractf128 xmm1, ymm1, 1
        vpextrb rax, xmm1, 1
      }
      if ( (_BYTE)_RAX )
        ++v11;
      if ( v46.m256i_i8[16] == 1 )
      {
        ++v12;
      }
      else if ( BG_GameInterface_GameModeIsMP((GameModeType)v46.m256i_u8[16]) )
      {
        ++v13;
      }
      else if ( v46.m256i_i8[16] == 3 )
      {
        ++v14;
      }
      _RAX = &gameAchievementList[++v15];
    }
    while ( _RAX->achievementName[0] );
    __asm
    {
      vmovss  xmm4, cs:__real@42c80000
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm2, xmm2, xmm2
    }
    if ( v11 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rax+r12*8+48h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, edi
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm1, xmm4
      }
    }
    __asm { vxorps  xmm8, xmm8, xmm8 }
    if ( v12 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rax+r12*8+3Ch]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebp
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm8, xmm1, xmm4
      }
    }
    __asm { vxorps  xmm7, xmm7, xmm7 }
    if ( v13 > 0 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rax+r12*8+40h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r14d
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm7, xmm1, xmm4
      }
    }
    if ( v14 > 0 )
    {
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, dword ptr [rax+r12*8+44h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, r15d
        vdivss  xmm3, xmm3, xmm0
        vmulss  xmm6, xmm3, xmm4
      }
    }
    __asm { vmovaps xmm1, xmm2; completionPercentage }
    XB3GameEvent_GameProgress(controllerIndex, *(const float *)&_XMM1);
    __asm
    {
      vmovaps xmm3, xmm6; percentageCP
      vmovaps xmm2, xmm7; percentageMP
      vmovaps xmm1, xmm8; percentageSP
    }
    XB3GameEvent_HeroStats(controllerIndex, *(const float *)&_XMM1, *(const float *)&_XMM2, *(const float *)&_XMM3);
    __asm
    {
      vmovaps xmm8, [rsp+0C8h+var_58]
      vmovaps xmm7, [rsp+0C8h+var_48]
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
  }
}

/*
==============
XShowGamerCardUI
==============
*/
__int64 XShowGamerCardUI(const int controllerIndex, unsigned __int64 platformId)
{
  Windows::Xbox::System::User *CachedXboxUser; 
  __int64 v4; 
  __int64 v5; 
  HSTRING v6; 
  int ActivationFactoryByPCWSTR; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int8 v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  char v17; 
  int v18; 
  int v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  char v23; 
  int v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 
  Platform::Guid pGuid; 
  __int64 v30; 
  void *ppActivationFactory; 
  __int64 v32[5]; 
  char dest[21]; 
  wchar_t Dest[24]; 

  v32[1] = -2i64;
  v26 = 0;
  CachedXboxUser = Live_GetCachedXboxUser(controllerIndex);
  v4 = (__int64)CachedXboxUser;
  v27 = (__int64)CachedXboxUser;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  v32[2] = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_live.cpp", 5230, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr") )
    __debugbreak();
  Com_sprintf<21>((char (*)[21])dest, "%zu", platformId);
  mbstowcs(Dest, dest, 0x2Aui64);
  Platform::String::String(NULL, Dest);
  v6 = (HSTRING)v5;
  v27 = v5;
  pGuid.__vftable = (Platform::Object_vtbl *)0x4CFA3F9D1A0DD80Ei64;
  *(_DWORD *)&pGuid.__d = 772690062;
  *(_DWORD *)&pGuid.__h = 799480509;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.UI.SystemUI", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v30 = 0i64;
  v8 = (*(__int64 (__fastcall **)(void *, __int64, HSTRING, __int64 *))(*(_QWORD *)ppActivationFactory + 64i64))(ppActivationFactory, v4, v6, &v30);
  if ( v8 < 0 )
    __abi_WinRTraiseException(v8);
  v9 = v30;
  v10 = v30;
  if ( v30 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8i64))(v30);
    v9 = v30;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  v28 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
  v28 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  v28 = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8i64))(v10);
  v32[3] = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  WindowsDeleteString_0(v6);
  v11 = (unsigned __int8)Platform::Details::Heap::Allocate(0x18ui64, 0x130ui64);
  Windows::Foundation::AsyncActionCompletedHandler::AsyncActionCompletedHandler__lambda_5d7a494902d053b77d4017b46e0c8d37___((XShowGamerCardUI::__l2::<lambda_5d7a494902d053b77d4017b46e0c8d37>)v11, NonConst, 2);
  v13 = v12;
  v27 = v12;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48i64))(v10, v12);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16i64))(v13);
  v32[0] = 0i64;
  v15 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v10)(v10, &_uuidof__AUIAsyncInfo_Foundation_Windows__, v32);
  if ( v15 < 0 )
    __abi_WinRTraiseException(v15);
  v16 = v32[0];
  v32[4] = v32[0];
  v17 = 1;
  v26 = 1;
  v25 = 0;
  v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32[0] + 56i64))(v32[0], &v25);
  if ( v18 < 0 )
    __abi_WinRTraiseException(v18);
  v19 = 1;
  if ( !v25 )
  {
    v21 = v27;
LABEL_39:
    v23 = 1;
    goto LABEL_40;
  }
  v28 = 0i64;
  v20 = (**(__int64 (__fastcall ***)(__int64, void *, __int64 *))v10)(v10, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v28);
  if ( v20 < 0 )
    __abi_WinRTraiseException(v20);
  v21 = v28;
  v27 = v28;
  v17 = 3;
  v26 = 3;
  v25 = 0;
  v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 56i64))(v28, &v25);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  v19 = 3;
  if ( v25 == 1 )
    goto LABEL_39;
  v23 = 0;
LABEL_40:
  if ( (v17 & 2) != 0 )
  {
    v26 = v19 & 0xFFFFFFFD;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16i64))(v21);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
  if ( v23 )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    return 0i64;
  }
  else
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    return 22i64;
  }
}

