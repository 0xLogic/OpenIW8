/*
==============
Live_SyncOnlineDataFlags
==============
*/

unsigned int __fastcall Live_SyncOnlineDataFlags(const int controllerIndex)
{
  return ?Live_SyncOnlineDataFlags@@YAIH@Z(controllerIndex);
}

/*
==============
Live_IsAnybodySignedInToLive
==============
*/

int __fastcall Live_IsAnybodySignedInToLive()
{
  return ?Live_IsAnybodySignedInToLive@@YAHXZ();
}

/*
==============
Live_CountSignedInUsers
==============
*/

int __fastcall Live_CountSignedInUsers()
{
  return ?Live_CountSignedInUsers@@YAHXZ();
}

/*
==============
Live_CheckForFullDisconnect
==============
*/

void __fastcall Live_CheckForFullDisconnect(int controllerIndex)
{
  ?Live_CheckForFullDisconnect@@YAXH@Z(controllerIndex);
}

/*
==============
LiveCommon_Shutdown
==============
*/

void LiveCommon_Shutdown(void)
{
  ?LiveCommon_Shutdown@@YAXXZ();
}

/*
==============
Live_GetSharableParty
==============
*/

PartyData *__fastcall Live_GetSharableParty()
{
  return ?Live_GetSharableParty@@YAPEAUPartyData@@XZ();
}

/*
==============
Live_Invitation_HasAcceptedInvite
==============
*/

bool __fastcall Live_Invitation_HasAcceptedInvite()
{
  return ?Live_Invitation_HasAcceptedInvite@@YA_NXZ();
}

/*
==============
Live_IsInRestrictedMatchmakingGame
==============
*/

bool __fastcall Live_IsInRestrictedMatchmakingGame()
{
  return ?Live_IsInRestrictedMatchmakingGame@@YA_NXZ();
}

/*
==============
Online_CanHostServer
==============
*/

bool __fastcall Online_CanHostServer(const int playerCount)
{
  return ?Online_CanHostServer@@YA_NH@Z(playerCount);
}

/*
==============
Live_DemonwareDisconnected
==============
*/

void __fastcall Live_DemonwareDisconnected(const int controllerIndex)
{
  ?Live_DemonwareDisconnected@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsWaitingForConnection
==============
*/

int __fastcall Live_IsWaitingForConnection(const int controllerIndex)
{
  return ?Live_IsWaitingForConnection@@YAHH@Z(controllerIndex);
}

/*
==============
Live_DWLoginComplete
==============
*/

void __fastcall Live_DWLoginComplete(const int controllerIndex)
{
  ?Live_DWLoginComplete@@YAXH@Z(controllerIndex);
}

/*
==============
Live_BandwidthTestInProgress
==============
*/

bool __fastcall Live_BandwidthTestInProgress()
{
  return ?Live_BandwidthTestInProgress@@YA_NXZ();
}

/*
==============
Live_IsOnlineGame
==============
*/

bool __fastcall Live_IsOnlineGame()
{
  return ?Live_IsOnlineGame@@YA_NXZ();
}

/*
==============
Live_IsAnybodySignedIn
==============
*/

int __fastcall Live_IsAnybodySignedIn()
{
  return ?Live_IsAnybodySignedIn@@YAHXZ();
}

/*
==============
Live_GetMACAddressAsUint64
==============
*/

bool __fastcall Live_GetMACAddressAsUint64(unsigned __int64 *macAddr)
{
  return ?Live_GetMACAddressAsUint64@@YA_NPEA_K@Z(macAddr);
}

/*
==============
Live_DemonwareConnected_Internal
==============
*/

void __fastcall Live_DemonwareConnected_Internal(const int controllerIndex)
{
  ?Live_DemonwareConnected_Internal@@YAXH@Z(controllerIndex);
}

/*
==============
Live_GetUnoIdFromPlayerInfo
==============
*/

unsigned __int64 __fastcall Live_GetUnoIdFromPlayerInfo(BG_SynchronizedPlayerInfo *playerInfo)
{
  return ?Live_GetUnoIdFromPlayerInfo@@YA_KPEAUBG_SynchronizedPlayerInfo@@@Z(playerInfo);
}

/*
==============
Live_HasAcceptedEULA
==============
*/

bool __fastcall Live_HasAcceptedEULA()
{
  return ?Live_HasAcceptedEULA@@YA_NXZ();
}

/*
==============
Live_IsConnectedToDemonware
==============
*/

bool __fastcall Live_IsConnectedToDemonware(int controllerIndex)
{
  return ?Live_IsConnectedToDemonware@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_IsOffline
==============
*/

bool __fastcall Live_IsOffline()
{
  return ?Live_IsOffline@@YA_NXZ();
}

/*
==============
Live_ShutdownDueToTerminalError
==============
*/

void __fastcall Live_ShutdownDueToTerminalError(const int controllerIndex)
{
  ?Live_ShutdownDueToTerminalError@@YAXH@Z(controllerIndex);
}

/*
==============
Live_RegisterCommonDvars
==============
*/

void Live_RegisterCommonDvars(void)
{
  ?Live_RegisterCommonDvars@@YAXXZ();
}

/*
==============
Live_GetOurClientNum
==============
*/

int __fastcall Live_GetOurClientNum(int controllerIndex, const PartyData *party)
{
  return ?Live_GetOurClientNum@@YAHHPEBUPartyData@@@Z(controllerIndex, party);
}

/*
==============
Live_ConfirmAcceptInvitation_Error
==============
*/

void __fastcall Live_ConfirmAcceptInvitation_Error(const char *error)
{
  ?Live_ConfirmAcceptInvitation_Error@@YAXPEBD@Z(error);
}

/*
==============
Online_PanicButtonPushed
==============
*/

void Online_PanicButtonPushed(void)
{
  ?Online_PanicButtonPushed@@YAXXZ();
}

/*
==============
Live_UpdateDesiredDialog
==============
*/

void Live_UpdateDesiredDialog(void)
{
  ?Live_UpdateDesiredDialog@@YAXXZ();
}

/*
==============
Live_GetCrossPlayPermissionsToBeSentForPartyJoin
==============
*/

bool __fastcall Live_GetCrossPlayPermissionsToBeSentForPartyJoin()
{
  return ?Live_GetCrossPlayPermissionsToBeSentForPartyJoin@@YA_NXZ();
}

/*
==============
Live_HasEverPlayedMainMenu
==============
*/

bool __fastcall Live_HasEverPlayedMainMenu()
{
  return ?Live_HasEverPlayedMainMenu@@YA_NXZ();
}

/*
==============
Live_NetworkingFenceStart
==============
*/

void __fastcall Live_NetworkingFenceStart(const int controllerIndex)
{
  ?Live_NetworkingFenceStart@@YAXH@Z(controllerIndex);
}

/*
==============
LiveCommon_Init
==============
*/

void LiveCommon_Init(void)
{
  ?LiveCommon_Init@@YAXXZ();
}

/*
==============
Live_UserSignedIntoDemonware
==============
*/

void __fastcall Live_UserSignedIntoDemonware(const int controllerIndex)
{
  ?Live_UserSignedIntoDemonware@@YAXH@Z(controllerIndex);
}

/*
==============
Live_InLoadingScreen
==============
*/

bool __fastcall Live_InLoadingScreen()
{
  return ?Live_InLoadingScreen@@YA_NXZ();
}

/*
==============
Live_HasOnlineServicesAndRequirementsToJoin
==============
*/

bool __fastcall Live_HasOnlineServicesAndRequirementsToJoin(const int localControllerIndex, const char **errorString, const char **devErrorString)
{
  return ?Live_HasOnlineServicesAndRequirementsToJoin@@YA_NHPEAPEBD0@Z(localControllerIndex, errorString, devErrorString);
}

/*
==============
Live_DisconnectFromWebServices
==============
*/

void __fastcall Live_DisconnectFromWebServices(const int controllerIndex)
{
  ?Live_DisconnectFromWebServices@@YAXH@Z(controllerIndex);
}

/*
==============
Live_GetStartingCrossLaunchPartyDesiredDialog
==============
*/

UI_LiveDialogState __fastcall Live_GetStartingCrossLaunchPartyDesiredDialog()
{
  return ?Live_GetStartingCrossLaunchPartyDesiredDialog@@YA?AW4UI_LiveDialogState@@XZ();
}

/*
==============
Live_IsLobbyTeamSelectionLocked
==============
*/

bool __fastcall Live_IsLobbyTeamSelectionLocked()
{
  return ?Live_IsLobbyTeamSelectionLocked@@YA_NXZ();
}

/*
==============
Live_CanCheckGamerProfileContents
==============
*/

bool __fastcall Live_CanCheckGamerProfileContents()
{
  return ?Live_CanCheckGamerProfileContents@@YA_NXZ();
}

/*
==============
Live_DemonwareConnected
==============
*/

void __fastcall Live_DemonwareConnected(const int controllerIndex)
{
  ?Live_DemonwareConnected@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsUserSignedInToDemonware
==============
*/

bool __fastcall Live_IsUserSignedInToDemonware(const int controllerIndex)
{
  return ?Live_IsUserSignedInToDemonware@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_DoAllActiveControllersHaveCrossplayPermissions
==============
*/

bool __fastcall Live_DoAllActiveControllersHaveCrossplayPermissions()
{
  return ?Live_DoAllActiveControllersHaveCrossplayPermissions@@YA_NXZ();
}

/*
==============
Live_SetPlaylistNum
==============
*/

void __fastcall Live_SetPlaylistNum(int localControllerIndex, int playlistNum)
{
  ?Live_SetPlaylistNum@@YAXHH@Z(localControllerIndex, playlistNum);
}

/*
==============
Live_IsDemonwareFailed
==============
*/

int __fastcall Live_IsDemonwareFailed(const int controllerIndex, FenceDemonwareStatusCodes *statusCode)
{
  return ?Live_IsDemonwareFailed@@YAHHAEAW4FenceDemonwareStatusCodes@@@Z(controllerIndex, statusCode);
}

/*
==============
Live_InAreaThatHasParties
==============
*/

bool __fastcall Live_InAreaThatHasParties()
{
  return ?Live_InAreaThatHasParties@@YA_NXZ();
}

/*
==============
Live_GetLocalNatType
==============
*/

int __fastcall Live_GetLocalNatType()
{
  return ?Live_GetLocalNatType@@YAHXZ();
}

/*
==============
Live_CanGameTypeBePlayedOnPlatform
==============
*/

bool __fastcall Live_CanGameTypeBePlayedOnPlatform(const char *gameType, ClientPlatform platform)
{
  return ?Live_CanGameTypeBePlayedOnPlatform@@YA_NPEBDW4ClientPlatform@@@Z(gameType, platform);
}

/*
==============
Live_GetGameParty
==============
*/

PartyData *__fastcall Live_GetGameParty()
{
  return ?Live_GetGameParty@@YAPEAUPartyData@@XZ();
}

/*
==============
Live_TryCloseDialog
==============
*/

void __fastcall Live_TryCloseDialog(LocalClientNum_t localClientNum, UI_LiveDialogState state)
{
  ?Live_TryCloseDialog@@YAXW4LocalClientNum_t@@W4UI_LiveDialogState@@@Z(localClientNum, state);
}

/*
==============
Live_CanGetConsoleDetails
==============
*/

int __fastcall Live_CanGetConsoleDetails()
{
  return ?Live_CanGetConsoleDetails@@YAHXZ();
}

/*
==============
Test_ShutdownDemonware
==============
*/

void __fastcall Test_ShutdownDemonware(const int controllerIndex)
{
  ?Test_ShutdownDemonware@@YAXH@Z(controllerIndex);
}

/*
==============
Live_GenerateRandomTimeToRetryInSeconds
==============
*/

unsigned int __fastcall Live_GenerateRandomTimeToRetryInSeconds(unsigned int retryCount, unsigned int maxValue)
{
  return ?Live_GenerateRandomTimeToRetryInSeconds@@YAIII@Z(retryCount, maxValue);
}

/*
==============
Live_HandleDWLoginError
==============
*/

bool __fastcall Live_HandleDWLoginError(const int controllerIndex, const unsigned int errorCode)
{
  return ?Live_HandleDWLoginError@@YA_NHI@Z(controllerIndex, errorCode);
}

/*
==============
Live_GetShouldDemonwareRetry
==============
*/

bool __fastcall Live_GetShouldDemonwareRetry(unsigned int secondsSinceLastTry, unsigned int retryCount, unsigned int maxValue)
{
  return ?Live_GetShouldDemonwareRetry@@YA_NIII@Z(secondsSinceLastTry, retryCount, maxValue);
}

/*
==============
Live_GetFirstPartyAccountTypeForPlatform
==============
*/

const char *__fastcall Live_GetFirstPartyAccountTypeForPlatform(ClientPlatform platform)
{
  return ?Live_GetFirstPartyAccountTypeForPlatform@@YAPEBDW4ClientPlatform@@@Z(platform);
}

/*
==============
Live_IsInSystemlinkLobby
==============
*/

bool __fastcall Live_IsInSystemlinkLobby()
{
  return ?Live_IsInSystemlinkLobby@@YA_NXZ();
}

/*
==============
Live_CheckInformNotConnectedToDW
==============
*/

void __fastcall Live_CheckInformNotConnectedToDW(const int controllerIndex)
{
  ?Live_CheckInformNotConnectedToDW@@YAXH@Z(controllerIndex);
}

/*
==============
Live_IsLobbyTeamSelectEnabled
==============
*/

bool __fastcall Live_IsLobbyTeamSelectEnabled()
{
  return ?Live_IsLobbyTeamSelectEnabled@@YA_NXZ();
}

/*
==============
Live_IsDevmapping
==============
*/

bool __fastcall Live_IsDevmapping()
{
  return ?Live_IsDevmapping@@YA_NXZ();
}

/*
==============
Live_IsInLiveGame
==============
*/

bool __fastcall Live_IsInLiveGame()
{
  return ?Live_IsInLiveGame@@YA_NXZ();
}

/*
==============
Live_GetShouldDemonwareRetryWithBase
==============
*/

bool __fastcall Live_GetShouldDemonwareRetryWithBase(unsigned int baseRetry, unsigned int secondsSinceLastTry, unsigned int retryCount, unsigned int maxValue)
{
  return ?Live_GetShouldDemonwareRetryWithBase@@YA_NIIII@Z(baseRetry, secondsSinceLastTry, retryCount, maxValue);
}

/*
==============
Live_GenerateTimeToRetryInSeconds
==============
*/

unsigned int __fastcall Live_GenerateTimeToRetryInSeconds(unsigned int retryCount, unsigned int maxValue)
{
  return ?Live_GenerateTimeToRetryInSeconds@@YAIII@Z(retryCount, maxValue);
}

/*
==============
Live_GetCurrentParty
==============
*/

PartyData *__fastcall Live_GetCurrentParty()
{
  return ?Live_GetCurrentParty@@YAPEAUPartyData@@XZ();
}

/*
==============
Playlist_SetPlaylistAvailable
==============
*/

void __fastcall Playlist_SetPlaylistAvailable(bool available)
{
  ?Playlist_SetPlaylistAvailable@@YAX_N@Z(available);
}

/*
==============
Live_DisconnectOnSignInStatusChanged
==============
*/

void __fastcall Live_DisconnectOnSignInStatusChanged(const char *disconnectMessage)
{
  ?Live_DisconnectOnSignInStatusChanged@@YAXPEBD@Z(disconnectMessage);
}

/*
==============
Live_IsClientAFriendOfAnyLocalPlayer
==============
*/

bool __fastcall Live_IsClientAFriendOfAnyLocalPlayer(const PartyData *party, const int clientNum)
{
  return ?Live_IsClientAFriendOfAnyLocalPlayer@@YA_NPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Live_IsOfflineTool
==============
*/

int __fastcall Live_IsOfflineTool()
{
  return ?Live_IsOfflineTool@@YAHXZ();
}

/*
==============
Live_IsInQueue
==============
*/

bool __fastcall Live_IsInQueue(const int controllerIndex)
{
  return ?Live_IsInQueue@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_CancelPotentiallyBlockingTasks
==============
*/

void __fastcall Live_CancelPotentiallyBlockingTasks(const int controllerIndex)
{
  ?Live_CancelPotentiallyBlockingTasks@@YAXH@Z(controllerIndex);
}

/*
==============
Live_ConfirmAcceptInvitation_ErrorNoParty
==============
*/

void __fastcall Live_ConfirmAcceptInvitation_ErrorNoParty(const char *error)
{
  ?Live_ConfirmAcceptInvitation_ErrorNoParty@@YAXPEBD@Z(error);
}

/*
==============
Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar
==============
*/

bool __fastcall Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar(RealTimeMultiplayBRPumpDisabledFlags flag)
{
  return ?Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar@@YA_NW4RealTimeMultiplayBRPumpDisabledFlags@@@Z(flag);
}

/*
==============
Playlist_IsNewPlaylistAvailable
==============
*/

bool __fastcall Playlist_IsNewPlaylistAvailable()
{
  return ?Playlist_IsNewPlaylistAvailable@@YA_NXZ();
}

/*
==============
Live_CancelInvitationAfterDecliningEULAIfRequired
==============
*/

void Live_CancelInvitationAfterDecliningEULAIfRequired(void)
{
  ?Live_CancelInvitationAfterDecliningEULAIfRequired@@YAXXZ();
}

/*
==============
Live_IsCrossPlayEnabled
==============
*/

bool __fastcall Live_IsCrossPlayEnabled(const int controllerIndex)
{
  return ?Live_IsCrossPlayEnabled@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar
==============
*/

bool __fastcall Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(RealTimeMultiplayBRGameSpecificKillswitchFlags flag)
{
  return ?Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar@@YA_NW4RealTimeMultiplayBRGameSpecificKillswitchFlags@@@Z(flag);
}

/*
==============
Live_ThrowError
==============
*/

void __fastcall Live_ThrowError(const errorParm_t level, const char *msg)
{
  ?Live_ThrowError@@YAXW4errorParm_t@@PEBD@Z(level, msg);
}

/*
==============
Live_HasOnlineServicesAndRequirementsToInvite
==============
*/

bool __fastcall Live_HasOnlineServicesAndRequirementsToInvite(const int localControllerIndex, const char **errorString, const char **devErrorString, bool shouldCheckPlatformSessionRequirements)
{
  return ?Live_HasOnlineServicesAndRequirementsToInvite@@YA_NHPEAPEBD0_N@Z(localControllerIndex, errorString, devErrorString, shouldCheckPlatformSessionRequirements);
}

/*
==============
Live_DisplayActiveDialog
==============
*/

void Live_DisplayActiveDialog(void)
{
  ?Live_DisplayActiveDialog@@YAXXZ();
}

/*
==============
Live_ConfirmAcceptInvitation_ErrorWithoutPartyShutdown
==============
*/

void __fastcall Live_ConfirmAcceptInvitation_ErrorWithoutPartyShutdown(const char *error)
{
  ?Live_ConfirmAcceptInvitation_ErrorWithoutPartyShutdown@@YAXPEBD@Z(error);
}

/*
==============
Live_SyncOnlineDataFrame
==============
*/

int __fastcall Live_SyncOnlineDataFrame(int controllerIndex)
{
  return ?Live_SyncOnlineDataFrame@@YAHH@Z(controllerIndex);
}

/*
==============
Live_GetLoginDelayMs
==============
*/

unsigned int __fastcall Live_GetLoginDelayMs(const int controllerIndex)
{
  return ?Live_GetLoginDelayMs@@YAIH@Z(controllerIndex);
}

/*
==============
Live_HasCrossPlayPermissions
==============
*/

bool __fastcall Live_HasCrossPlayPermissions(const int controllerIndex)
{
  return ?Live_HasCrossPlayPermissions@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_GetQueueWaitTimeSecs
==============
*/

int __fastcall Live_GetQueueWaitTimeSecs(const int controllerIndex)
{
  return ?Live_GetQueueWaitTimeSecs@@YAHH@Z(controllerIndex);
}

/*
==============
Live_ThrowError_DontDeclineInvite
==============
*/

void __fastcall Live_ThrowError_DontDeclineInvite(const errorParm_t level, const char *msg)
{
  ?Live_ThrowError_DontDeclineInvite@@YAXW4errorParm_t@@PEBD@Z(level, msg);
}

/*
==============
Live_ShouldControllerStartLogon
==============
*/

bool __fastcall Live_ShouldControllerStartLogon(const int controllerIndex)
{
  return ?Live_ShouldControllerStartLogon@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_IsInGameBattlesGame
==============
*/

bool __fastcall Live_IsInGameBattlesGame()
{
  return ?Live_IsInGameBattlesGame@@YA_NXZ();
}

/*
==============
Live_GetConsoleID
==============
*/

unsigned __int64 __fastcall Live_GetConsoleID(int verboseIfErrorIn)
{
  return ?Live_GetConsoleID@@YA_KH@Z(verboseIfErrorIn);
}

/*
==============
Live_HasOnlineSubscription
==============
*/

bool __fastcall Live_HasOnlineSubscription(const int controllerIndex)
{
  return ?Live_HasOnlineSubscription@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_ShouldKickIfNotOnline
==============
*/

int __fastcall Live_ShouldKickIfNotOnline()
{
  return ?Live_ShouldKickIfNotOnline@@YAHXZ();
}

/*
==============
Live_CanToggleCrossPlayOption
==============
*/

bool __fastcall Live_CanToggleCrossPlayOption(const int controllerIndex)
{
  return ?Live_CanToggleCrossPlayOption@@YA_NH@Z(controllerIndex);
}

/*
==============
Online_CanHostLobby
==============
*/

bool __fastcall Online_CanHostLobby()
{
  return ?Online_CanHostLobby@@YA_NXZ();
}

/*
==============
Live_CrossplaySettingChanged
==============
*/

void __fastcall Live_CrossplaySettingChanged(const int controllerIndex, const bool enabled)
{
  ?Live_CrossplaySettingChanged@@YAXH_N@Z(controllerIndex, enabled);
}

/*
==============
Live_InviteProcessingSessionSearchAndGameModeCheckFencePassedFrame
==============
*/

bool __fastcall Live_InviteProcessingSessionSearchAndGameModeCheckFencePassedFrame(const int controllerIndex)
{
  return ?Live_InviteProcessingSessionSearchAndGameModeCheckFencePassedFrame@@YA_NH@Z(controllerIndex);
}

/*
==============
Live_DemonwareDisconnectCleanup
==============
*/

void __fastcall Live_DemonwareDisconnectCleanup(int controllerIndex)
{
  ?Live_DemonwareDisconnectCleanup@@YAXH@Z(controllerIndex);
}

/*
==============
Online_GetShouldWeHostValue
==============
*/

bool __fastcall Online_GetShouldWeHostValue()
{
  return ?Online_GetShouldWeHostValue@@YA_NXZ();
}

/*
==============
Live_OnPlayerQuit
==============
*/

void __fastcall Live_OnPlayerQuit()
{
  ?Live_OnPlayerQuit@@YAXXZ();
}

/*
==============
Live_DeclineInvitation
==============
*/

void Live_DeclineInvitation(void)
{
  ?Live_DeclineInvitation@@YAXXZ();
}

/*
==============
Live_CancelConnecting
==============
*/

void Live_CancelConnecting(void)
{
  ?Live_CancelConnecting@@YAXXZ();
}

/*
==============
Live_HasCompletedFirstBootFlow
==============
*/

bool __fastcall Live_HasCompletedFirstBootFlow()
{
  return ?Live_HasCompletedFirstBootFlow@@YA_NXZ();
}

/*
==============
Live_GetActiveParty
==============
*/

PartyData *__fastcall Live_GetActiveParty()
{
  return ?Live_GetActiveParty@@YAPEAUPartyData@@XZ();
}

/*
==============
Live_GetAcceptingInvitationDesiredDialog
==============
*/

UI_LiveDialogState __fastcall Live_GetAcceptingInvitationDesiredDialog()
{
  return ?Live_GetAcceptingInvitationDesiredDialog@@YA?AW4UI_LiveDialogState@@XZ();
}

/*
==============
LiveCommon_Frame
==============
*/

void __fastcall LiveCommon_Frame(const int msec, const int localControllerIndex)
{
  ?LiveCommon_Frame@@YAXHH@Z(msec, localControllerIndex);
}

/*
==============
Live_IsInGamemodeToInvite
==============
*/

bool __fastcall Live_IsInGamemodeToInvite(const char **errorString, const char **devErrorString)
{
  return ?Live_IsInGamemodeToInvite@@YA_NPEAPEBD0@Z(errorString, devErrorString);
}

/*
==============
Live_ConfirmProfileChange
==============
*/

void __fastcall Live_ConfirmProfileChange()
{
  ?Live_ConfirmProfileChange@@YAXXZ();
}

/*
==============
Live_GetMachineId
==============
*/

bool __fastcall Live_GetMachineId(unsigned __int64 *machineIdLow, unsigned __int64 *machineIdHigh)
{
  return ?Live_GetMachineId@@YA_NPEA_K0@Z(machineIdLow, machineIdHigh);
}

/*
==============
Live_CanCurrentGamemodeSupportSplitscreen
==============
*/

bool __fastcall Live_CanCurrentGamemodeSupportSplitscreen()
{
  return ?Live_CanCurrentGamemodeSupportSplitscreen@@YA_NXZ();
}

/*
==============
Online_SetShouldWeHost
==============
*/

void __fastcall Online_SetShouldWeHost(bool shouldHost)
{
  ?Online_SetShouldWeHost@@YAX_N@Z(shouldHost);
}

/*
==============
Live_IsDemonwareReady
==============
*/

bool __fastcall Live_IsDemonwareReady(const int controllerIndex, FenceDemonwareStatusCodes *statusCode)
{
  return ?Live_IsDemonwareReady@@YA_NHAEAW4FenceDemonwareStatusCodes@@@Z(controllerIndex, statusCode);
}

/*
==============
Live_IsDemonwareNetStarted
==============
*/

bool __fastcall Live_IsDemonwareNetStarted()
{
  return ?Live_IsDemonwareNetStarted@@YA_NXZ();
}

/*
==============
Live_ThrowError_Helper
==============
*/

void __fastcall Live_ThrowError_Helper(const errorParm_t level, const char *msg, int shouldDeclineInvite)
{
  ?Live_ThrowError_Helper@@YAXW4errorParm_t@@PEBDH@Z(level, msg, shouldDeclineInvite);
}

/*
==============
LiveCommon_UpdatedXuid
==============
*/

void __fastcall LiveCommon_UpdatedXuid(const int controllerIndex, const XUID newXuid)
{
  ?LiveCommon_UpdatedXuid@@YAXHUXUID@@@Z(controllerIndex, newXuid);
}

/*
==============
Live_CheckRequiredOnlineDataFlags
==============
*/

bool __fastcall Live_CheckRequiredOnlineDataFlags(const int controllerIndex, const int requiredFlags)
{
  return ?Live_CheckRequiredOnlineDataFlags@@YA_NHH@Z(controllerIndex, requiredFlags);
}

/*
==============
Live_GetMACAddress
==============
*/

bool __fastcall Live_GetMACAddress(unsigned __int8 *macAddr)
{
  return ?Live_GetMACAddress@@YA_NQEAE@Z(macAddr);
}

/*
==============
Live_ShutdownDueToTerminalErrorForAllControllers
==============
*/

void Live_ShutdownDueToTerminalErrorForAllControllers(void)
{
  ?Live_ShutdownDueToTerminalErrorForAllControllers@@YAXXZ();
}

/*
==============
Live_IsInMatchMakerArea
==============
*/

bool __fastcall Live_IsInMatchMakerArea()
{
  return ?Live_IsInMatchMakerArea@@YA_NXZ();
}

/*
==============
LiveCommon_ControllerFrame
==============
*/
void LiveCommon_ControllerFrame(const LocalClientNum_t localClientNum, const int controllerIndex)
{
  BOOL v3; 
  int v4; 
  bool v5; 
  int v6; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v8; 
  DWLobbyService *DWLobbyService; 
  const dvar_t *v10; 
  DWServicesAccess *v11; 
  Online_PatchStreamer *v12; 
  PartyData *PartyData; 
  int i; 
  DWServicesAccess *v15; 
  int v16; 
  const dvar_t *v17; 
  int v18; 
  int integer; 
  OnlinePlayFailureReason failureReason; 

  Profile_Begin(807);
  if ( !Com_GeneratingConstBaselines() )
  {
    v3 = Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT) && !Com_FrontEnd_IsInFrontEnd();
    v4 = Sys_Milliseconds();
    if ( v3 )
    {
      if ( Live_IsUserSignedInToLive(controllerIndex) && !Live_UserIsGuest(controllerIndex) )
      {
        v5 = dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED;
        if ( v5 == dw_connected )
        {
          v6 = last_dw_lobby_connect_status_change;
        }
        else
        {
          if ( !v5 && !dw_disconnect_detected )
          {
            dw_last_disconnect_time = v4;
            dw_disconnect_detected = 1;
          }
          v6 = v4;
          dw_connected = v5;
          last_dw_lobby_connect_status_change = v4;
        }
        if ( v5 )
        {
          if ( v4 - v6 > demonwareConsideredConnectedTime->current.integer )
            dw_disconnect_detected = 0;
        }
        else if ( dw_disconnect_detected && v4 - dw_last_disconnect_time > 30000 && !*Dvar_GetStringSafe("OMSSQKRMLQ") )
        {
          dw_disconnect_detected = 0;
          DW_DisableLogon(controllerIndex);
          Live_DemonwareDisconnectCleanup(controllerIndex);
        }
      }
    }
  }
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && (dw_test_disconnect && dw_test_disconnect->current.integer > 0 || dw_test_retry_disconnect && dw_test_retry_disconnect->current.enabled) )
  {
    v8 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v8, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
    dwLobbyServiceCleanup(controllerIndex);
  }
  LiveStorage_CheckNotResettingStats(controllerIndex);
  v10 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
    CL_MainMP_AddSplitscreenControllerToPartyIfRequired(controllerIndex);
  else
    CL_MainMP_CheckSplitscreenOnlineStats(controllerIndex);
  Live_OnlineServicesFence_Frame(controllerIndex);
  if ( Live_IsUserSignedInToLive(controllerIndex) )
  {
    LiveStorage_PlaylistFrame(controllerIndex);
    if ( FenceManager_IsFencePassing(controllerIndex, FENCE_PLAYLISTS) )
      Playlist_IsOutOfDate();
    if ( !LiveStorage_DoWeHaveMotd() )
    {
      v11 = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(v11, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
        LiveStorage_FetchMotd(controllerIndex);
    }
    v12 = Online_PatchStreamer::GetInstance();
    Online_PatchStreamer::DoWeHaveManifest(v12, MOVEMENT);
    FenceManager_IsFencePassing(controllerIndex, FENCE_DW_TIME);
  }
  GameBattles_ValidateData();
  if ( Live_CanUserPlayOnline(controllerIndex, &failureReason) && !Live_UserIsGuest(controllerIndex) )
  {
    if ( LiveStorage_ShouldReadOnlineStats(controllerIndex) && !LiveStorage_AreStatsFetched(controllerIndex, STATS_ONLINE) )
      LiveStorage_DownloadStats(controllerIndex);
    if ( LiveStorage_DoWeNeedOnlineStatsWrite(controllerIndex) && Live_IsUserSignedInToDemonware(controllerIndex) )
      LiveStorage_UploadStats(controllerIndex);
    Live_UpdateOnlinePlayPrivilege(controllerIndex);
    if ( LiveStorage_ShouldReadPeriodicChallenges(controllerIndex) )
      LiveStorage_CheckPeriodicChallengeUpdate(controllerIndex);
    if ( LiveStorage_ShouldReadPeriodicExtinctionBonus(controllerIndex) )
      LiveStorage_CheckPeriodicExtinctionBonusUpdate(controllerIndex);
    PlayercardCache_Update(controllerIndex);
    PartyData = Lobby_GetPartyData();
    Party_AddRecentPlayers(PartyData, controllerIndex);
    Party_AddRecentPlayers(&g_partyData, controllerIndex);
    Content_UpdateTrialFind(controllerIndex);
    MatchRules_Frame(controllerIndex);
    OnlineMgr::ControllerFrame(&g_onlineMgr, controllerIndex);
    for ( i = 0; i < 4; ++i )
      Live_SyncOnlineDataFence_Frame(controllerIndex, i);
    v15 = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(v15, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
    {
      Online_Telemetry_Update(controllerIndex);
      if ( !LiveStorage_CS_IsInited(controllerIndex) )
        LiveStorage_CS_Init(controllerIndex);
      LiveAntiCheat_UpdateForController(controllerIndex);
      LiveCounter_Update(controllerIndex);
      GameBattles_Update(controllerIndex);
      LiveTracker_Process(controllerIndex);
    }
    else if ( LiveStorage_CS_IsInited(controllerIndex) )
    {
      LiveStorage_CS_ClearDWOverlappedTasks(controllerIndex);
    }
    LiveParty_Frame(controllerIndex);
  }
  if ( Live_UserIsGuest(controllerIndex) )
    LiveStorage_CopySponsorStats(controllerIndex);
  if ( s_systemTimeSignedOutOfDW && !s_hasShownSPSignOutWarning && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED )
  {
    v16 = Sys_Milliseconds();
    v17 = DVARINT_sp_disconnected_from_live_grace_period_ms;
    v18 = v16 - s_systemTimeSignedOutOfDW;
    if ( !DVARINT_sp_disconnected_from_live_grace_period_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sp_disconnected_from_live_grace_period_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    integer = v17->current.integer;
    if ( integer && v18 >= integer )
    {
      LUI_OpenMenuForController(controllerIndex, "popup_warn_sp_progress_not_online", 1, 1, 0);
      s_systemTimeSignedOutOfDW = 0;
      s_hasShownSPSignOutWarning = 1;
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
LiveCommon_Frame
==============
*/
void LiveCommon_Frame(const int msec, const int localControllerIndex)
{
  int v4; 
  int i; 
  int ControllerFromClient; 
  DWServicesAccess *Instance; 
  unsigned int v8; 
  _BYTE *bytes_20; 
  char (*v10)[512]; 
  __int64 v11; 
  __int64 v12; 
  DWServicesAccess *v13; 
  PartyData *PartyData; 
  PrivatePartySessionHSM *v15; 
  GameLobbySessionHSM *v16; 
  ScopedCriticalSection v17; 
  __int64 v18; 
  bdEventInfo ptr[64]; 

  v18 = -2i64;
  LiveAntiCheat_StartFrame();
  v4 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
      if ( !Live_UserIsGuest(ControllerFromClient) || Live_HasValidSponsor(ControllerFromClient) )
        LiveCommon_ControllerFrame((const LocalClientNum_t)i, ControllerFromClient);
      if ( CL_Mgr_IsControllerActive(ControllerFromClient) )
        CL_MainMP_CheckSplitscreenOfflineStats((LocalClientNum_t)i, ControllerFromClient);
    }
  }
  FenceManager_Frame();
  OnlineMatchmakerOmniscient::Pump(&OnlineMatchmakerOmniscient::ms_instance);
  OnlineMgr::Frame(&g_onlineMgr);
  dwMail_Frame();
  Live_DisplayActiveDialog();
  Live_PatchFence_Frame();
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, localControllerIndex) && Live_IsUserSignedInToLive(localControllerIndex) && dwGetLogOnStatus(localControllerIndex) == DW_LIVE_CONNECTED )
  {
    LB_CheckOngoingTasks();
    LiveAntiCheat_Update();
    ScopedCriticalSection::ScopedCriticalSection(&v17, CRITSECT_QQTECH_MATCHDATA, SCOPED_CRITSECT_NORMAL);
    if ( Sys_Milliseconds() >= s_matchdata_next_flush )
    {
      if ( (int)s_matchdata_queue_size > 0 )
      {
        `eh vector vbase constructor iterator'(ptr, 0x48ui64, 0x40ui64, (void (__fastcall *)(void *))bdEventInfo::bdEventInfo, (void (__fastcall *)(void *))bdEventInfo::`vbase destructor);
        v8 = s_matchdata_queue_size;
        if ( (int)s_matchdata_queue_size > 0 )
        {
          bytes_20 = ptr[0]._bytes_20;
          v10 = s_matchdata_queue;
          v11 = s_matchdata_queue_size;
          do
          {
            *((_DWORD *)bytes_20 + 1) = 9009;
            *bytes_20 = 1;
            v12 = -1i64;
            do
              ++v12;
            while ( (*v10)[v12] );
            *((_DWORD *)bytes_20 + 2) = v12;
            *((_QWORD *)bytes_20 + 2) = v10++;
            bytes_20 += 72;
            --v11;
          }
          while ( v11 );
        }
        dwRecordEventBatchFF(ptr, v8);
        s_matchdata_queue_size = 0;
        `eh vector destructor iterator'(ptr, 0x48ui64, 0x40ui64, (void (__fastcall *)(void *))bdEventInfo::`vbase destructor);
      }
      s_matchdata_next_flush = Sys_Milliseconds() + 5000;
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v17);
  }
  InviteJoinHSM::InviteHSMUpdate(&g_invitationHSM, msec);
  CrosslaunchHSM::CrosslauncHSMUpdate(&g_crosslaunchHSM, msec);
  OnlineTournament_Frame();
  Online_DcQos_Frame();
  do
  {
    v13 = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(v13, v4) && Live_IsUserSignedInToLive(v4) && dwGetLogOnStatus(v4) == DW_LIVE_CONNECTED )
    {
      Social_UpdatePresence(v4);
      Live_PresenceFrame(v4);
    }
    ++v4;
  }
  while ( v4 < 8 );
  if ( PlatformSessionsHSMEnabled() )
  {
    PartyData = Lobby_GetPartyData();
    Party_Frame_PlatformSessions(&g_partyData, PartyData);
    v15 = PrivatePartySessionHSM::GetInstance();
    PrivatePartySessionHSM::PlatformSessionsHSMUpdate(v15, msec);
    v16 = GameLobbySessionHSM::GetInstance();
    GameLobbySessionHSM::PlatformSessionsHSMUpdate(v16, msec);
  }
  Voice_Frame();
  DS_UtilsFrame();
}

/*
==============
LiveCommon_Init
==============
*/
void LiveCommon_Init(void)
{
  const dvar_t *v0; 
  const char *string; 
  __int64 v2; 
  XUID *v3; 
  PrivatePartySessionHSM *Instance; 
  GameLobbySessionHSM *v5; 
  XUID result; 

  Cmd_AddCommandInternal("onPlayerQuit", Live_OnPlayerQuit, &Live_OnPlayerQuit_VAR);
  Cmd_AddCommandInternal("suckedAsHost", Live_DebugSuckedAsHost, &Live_DebugSuckedAsHost_VAR);
  Cmd_AddCommandInternal("confirmProfileChange", Live_ConfirmProfileChange, &Live_ConfirmProfileChange_VAR);
  SetupDWLogging();
  Party_Init();
  Lobby_Init();
  Session_Init();
  LB_Init();
  LiveStorage_Init();
  LiveParty_Initialize();
  LiveCounter_Init();
  LiveStorage_MarkPeriodicChallengesOutOfDate(0);
  LiveStorage_MarkPeriodicExtinctionBonusOutOfDate(0);
  LiveTracker_Init();
  Social_InitPresence();
  PlayercardCache_Init();
  dwLogOn_Init();
  GameBattles_Init();
  InviteJoinHSM_xb3::Initialize(&g_invitationHSM);
  CrosslaunchHSM::Initialize(&g_crosslaunchHSM);
  v0 = DVARSTR_auto_login;
  if ( !DVARSTR_auto_login && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "auto_login") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  v2 = -1i64;
  do
    ++v2;
  while ( string[v2] );
  if ( (_DWORD)v2 )
  {
    v3 = XUID::FromString(&result, string);
    CrosslaunchHSM::StartCrosslaunchAsHostToWarzone(&g_crosslaunchHSM, (XUID)v3->m_id);
    Dvar_SetString_Internal(DVARSTR_auto_login, (const char *)&queryFormat.fmt + 3);
  }
  OnlineTournament_Init();
  Online_DcQos_Init();
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::Initialize(Instance);
  v5 = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::Initialize(v5);
  UserIdMap_InitModules();
}

/*
==============
LiveCommon_Shutdown
==============
*/
void LiveCommon_Shutdown(void)
{
  Live_Shutdown();
  LiveCounter_Shutdown();
  PlayercardCache_Shutdown();
  LiveStorage_Shutdown();
}

/*
==============
LiveCommon_UpdatedXuid
==============
*/
void LiveCommon_UpdatedXuid(const int controllerIndex, const XUID newXuid)
{
  __int64 v2; 
  int MemberByXUID; 
  __int64 v4; 
  const char *v5; 
  const char *v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **v11; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  XUID *v13; 
  const XUID *v14; 
  __int128 v15; 
  ntl::integral_constant<bool,1> v16; 
  XUID xuid; 
  unsigned __int64 r_keyVal; 

  xuid.m_id = newXuid.m_id;
  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 3133, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( XUID::IsNull(&xuid) )
    DLog_SetUserId(v2, 0i64);
  if ( Live_IsUserSignedInToLive(v2) && Live_IsInSystemlinkLobby() && XUID::IsValid(&s_cachedOfflineXuid[v2]) )
  {
    MemberByXUID = Party_FindMemberByXUID(&g_partyData, s_cachedOfflineXuid[v2]);
    v4 = MemberByXUID;
    if ( MemberByXUID >= 0 )
    {
      v5 = XUID::ToDevString(&xuid);
      v6 = XUID::ToDevString(&s_cachedOfflineXuid[v2]);
      Com_Printf(25, "Updating member index %d in party %s from Xuid %s to %s by setting playerUpdatedUID!\n", (unsigned int)v4, g_partyData.partyName, v6, v5);
      r_keyVal = XUID::ToUint64(&g_partyData.partyMembers[v4].playerUpdatedUID);
      v7 = ((unsigned int)r_keyVal ^ HIDWORD(r_keyVal)) % 0x185;
      if ( v7 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v8 = ntl::internal::hash_table<unsigned __int64,int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,int>,202,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int>>,389>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(&g_partyData.memberMap, &g_partyData.memberMap.m_buckets.m_data[v7], &r_keyVal, v16);
      if ( v8 > g_partyData.memberMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
        __debugbreak();
      g_partyData.memberMap.m_currentNumItems -= v8;
      XUID::operator=(&g_partyData.partyMembers[v4].playerUpdatedUID, &xuid);
      v9 = XUID::ToUint64(&xuid);
      v10 = ((unsigned int)v9 ^ HIDWORD(v9)) % 0x185;
      if ( v10 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v11 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)&g_partyData.memberMap.m_buckets.m_data[v10];
      mp_next = *v11;
      if ( *v11 == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
      {
LABEL_26:
        *(_QWORD *)&v15 = v9;
        DWORD2(v15) = 0;
        if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
        {
LABEL_32:
          if ( !g_partyData.memberMap.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !g_partyData.memberMap.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<24> *)g_partyData.memberMap.m_freelist.m_head.mp_next == &g_partyData.memberMap.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xCAui64) )
            __debugbreak();
          mp_next = g_partyData.memberMap.m_freelist.m_head.mp_next;
          g_partyData.memberMap.m_freelist.m_head.mp_next = g_partyData.memberMap.m_freelist.m_head.mp_next->mp_next;
          mp_next->mp_next = NULL;
          *(_OWORD *)&mp_next[1].mp_next = v15;
          mp_next->mp_next = *v11;
          *v11 = mp_next;
          ++g_partyData.memberMap.m_currentNumItems;
        }
        else
        {
          while ( 1 )
          {
            if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
              __debugbreak();
            if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9 )
              break;
            mp_next = mp_next->mp_next;
            if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
              goto LABEL_32;
          }
          ++g_partyData.memberMap.m_currentNumItems;
          mp_next = NULL;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 331, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
            __debugbreak();
        }
      }
      else
      {
        while ( 1 )
        {
          if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v9 )
            break;
          mp_next = mp_next->mp_next;
          if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
          {
            mp_next = *v11;
            goto LABEL_26;
          }
        }
      }
      LODWORD(mp_next[2].mp_next) = v4;
    }
  }
  v13 = &s_cachedOfflineXuid[v2];
  if ( Live_IsUserSignedIn(v2) )
  {
    XUID::operator=(v13, &xuid);
  }
  else
  {
    v14 = XUID::NullXUID((XUID *)&r_keyVal);
    XUID::operator=(v13, v14);
  }
}

/*
==============
Live_BandwidthTestInProgress
==============
*/
bool Live_BandwidthTestInProgress()
{
  Online_BandwidthTest *Instance; 

  Instance = Online_BandwidthTest::GetInstance();
  return Online_BandwidthTest::IsInProgress(Instance);
}

/*
==============
Live_CanCheckGamerProfileContents
==============
*/
bool Live_CanCheckGamerProfileContents()
{
  int ControllerFromClient; 
  bool result; 

  result = 0;
  if ( !CL_AllLocalClientsInactive() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( ControllerFromClient >= 0 && GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
      return 1;
  }
  return result;
}

/*
==============
Live_CanCurrentGamemodeSupportSplitscreen
==============
*/
char Live_CanCurrentGamemodeSupportSplitscreen()
{
  const PartyData *ActiveParty; 
  const PartyData *v1; 
  unsigned int Int_Internal_DebugName; 
  int Playlist; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF_HALF )
  {
    ActiveParty = Party_GetActiveParty();
    v1 = Party_GetActiveParty();
    if ( !Party_IsGameLobby(v1) || !OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) || GameBattles_IsGameBattleActive() )
      return 1;
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlistCategory, "playlistCategory");
    Playlist = Dvar_GetInt_Internal_DebugName(DVARINT_playlistID, "playlistID");
    if ( Party_IsMatchmakingLobby(ActiveParty) )
    {
      Int_Internal_DebugName = OnlineMatchmakerOmniscient::GetPlaylistCategory(&OnlineMatchmakerOmniscient::ms_instance);
      Playlist = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance);
    }
    if ( !Playlist_AnyPlaylistInCategoryRestrictsSplitscreen(Playlist, Int_Internal_DebugName) )
      return 1;
  }
  else if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
  {
    return 1;
  }
  return 0;
}

/*
==============
Live_CanGameTypeBePlayedOnPlatform
==============
*/
bool Live_CanGameTypeBePlayedOnPlatform(const char *gameType, ClientPlatform platform)
{
  char v2; 
  int v3; 

  v2 = platform;
  v3 = strcmp_0(gameType, "cp_wave_sv");
  if ( v3 || v2 == 4 )
    LOBYTE(v3) = 1;
  return v3;
}

/*
==============
Live_CanGetConsoleDetails
==============
*/
_BOOL8 Live_CanGetConsoleDetails()
{
  return NET_IsLocalAddressResolved() && NET_IsOnline();
}

/*
==============
Live_CanToggleCrossPlayOption
==============
*/
bool Live_CanToggleCrossPlayOption(const int controllerIndex)
{
  bool HasCrossPlayPermissionsOnPlatform; 
  bool IsBanned; 
  int inParty; 
  bool IsActive; 

  HasCrossPlayPermissionsOnPlatform = Live_HasCrossPlayPermissionsOnPlatform(controllerIndex);
  IsBanned = LiveAntiCheat_FeatureIsBanned(controllerIndex, 20);
  inParty = Lobby_GetPartyData()->inParty;
  IsActive = OnlineTournament_IsActive();
  return HasCrossPlayPermissionsOnPlatform && !IsBanned && !inParty && !IsActive;
}

/*
==============
Live_CancelConnecting
==============
*/
void Live_CancelConnecting(__int64 a1, PartyDisconnectReason a2)
{
  LOBYTE(a2) = 30;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, a2);
  Live_DeclineInvitation();
}

/*
==============
Live_CancelInvitationAfterDecliningEULAIfRequired
==============
*/
void Live_CancelInvitationAfterDecliningEULAIfRequired(void)
{
  if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
    InviteJoinHSM::Handle_CancelInvitationAfterEulaDecline(&g_invitationHSM);
}

/*
==============
Live_CancelPotentiallyBlockingTasks
==============
*/
void Live_CancelPotentiallyBlockingTasks(const int controllerIndex)
{
  ;
}

/*
==============
Live_CheckForFullDisconnect
==============
*/
void Live_CheckForFullDisconnect(int controllerIndex)
{
  BOOL v2; 
  int v3; 
  bool v4; 
  int v5; 

  if ( !Com_GeneratingConstBaselines() )
  {
    v2 = Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT) && !Com_FrontEnd_IsInFrontEnd();
    v3 = Sys_Milliseconds();
    if ( v2 )
    {
      if ( Live_IsUserSignedInToLive(controllerIndex) && !Live_UserIsGuest(controllerIndex) )
      {
        v4 = dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED;
        if ( v4 == dw_connected )
        {
          v5 = last_dw_lobby_connect_status_change;
        }
        else
        {
          if ( !v4 && !dw_disconnect_detected )
          {
            dw_last_disconnect_time = v3;
            dw_disconnect_detected = 1;
          }
          v5 = v3;
          last_dw_lobby_connect_status_change = v3;
          dw_connected = v4;
        }
        if ( v4 )
        {
          if ( v3 - v5 > demonwareConsideredConnectedTime->current.integer )
            dw_disconnect_detected = 0;
        }
        else if ( dw_disconnect_detected && v3 - dw_last_disconnect_time > 30000 && !*Dvar_GetStringSafe("OMSSQKRMLQ") )
        {
          dw_disconnect_detected = 0;
          DW_DisableLogon(controllerIndex);
          Live_DemonwareDisconnectCleanup(controllerIndex);
        }
      }
    }
  }
}

/*
==============
Live_CheckInformNotConnectedToDW
==============
*/
void Live_CheckInformNotConnectedToDW(const int controllerIndex)
{
  int v2; 
  int Int_Internal_DebugName; 

  if ( s_systemTimeSignedOutOfDW )
  {
    if ( !s_hasShownSPSignOutWarning && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF && dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED )
    {
      v2 = Sys_Milliseconds() - s_systemTimeSignedOutOfDW;
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_sp_disconnected_from_live_grace_period_ms, "sp_disconnected_from_live_grace_period_ms");
      if ( Int_Internal_DebugName )
      {
        if ( v2 >= Int_Internal_DebugName )
        {
          LUI_OpenMenuForController(controllerIndex, "popup_warn_sp_progress_not_online", 1, 1, 0);
          s_systemTimeSignedOutOfDW = 0;
          s_hasShownSPSignOutWarning = 1;
        }
      }
    }
  }
}

/*
==============
Live_CheckRequiredOnlineDataFlags
==============
*/
bool Live_CheckRequiredOnlineDataFlags(const int controllerIndex, const int requiredFlags)
{
  return (Live_SyncOnlineDataFlags(controllerIndex) & requiredFlags) == 0;
}

/*
==============
Live_ConfirmAcceptInvitation_Error
==============
*/
void Live_ConfirmAcceptInvitation_Error(const char *error)
{
  if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_INVITE_t)8, NULL);
  Live_DeclineInvitation();
  Com_Printf(16, "Live_ConfirmAcceptInvitation_Error - %s\n", error);
  Com_SetErrorMessage(error);
  PartyUI_RecoverFromError();
}

/*
==============
Live_ConfirmAcceptInvitation_ErrorNoParty
==============
*/
void Live_ConfirmAcceptInvitation_ErrorNoParty(const char *error)
{
  if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_INVITE_t)8, NULL);
  Live_DeclineInvitation();
  Com_Printf(16, "Live_ConfirmAcceptInvitation_Error - %s\n", error);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, error);
  Com_SetErrorMessage(error);
  PartyUI_RecoverFromError();
}

/*
==============
Live_ConfirmAcceptInvitation_ErrorWithoutPartyShutdown
==============
*/
void Live_ConfirmAcceptInvitation_ErrorWithoutPartyShutdown(const char *error)
{
  if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_INVITE_t)8, NULL);
  Live_DeclineInvitation();
  Com_Printf(16, "Live_ConfirmAcceptInvitation_Error - %s\n", error);
  Com_SetErrorMessage(error);
  PartyUI_RecoverFromError();
}

/*
==============
Live_ConfirmProfileChange
==============
*/
void Live_ConfirmProfileChange(void)
{
  int v0; 

  v0 = Cmd_LocalControllerIndex();
  Live_OnConfirmUserDesiresProfileChange(v0);
}

/*
==============
Live_CountSignedInUsers
==============
*/
__int64 Live_CountSignedInUsers()
{
  unsigned int v0; 
  int i; 

  v0 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsUserSignedIn(i) )
      ++v0;
  }
  return v0;
}

/*
==============
Live_CrossplaySettingChanged
==============
*/
void Live_CrossplaySettingChanged(const int controllerIndex, const bool enabled)
{
  const dvar_t *v2; 

  v2 = DVARBOOL_online_should_show_toast_for_disabling_crossplay_with_other_platform_users_in_party;
  if ( !DVARBOOL_online_should_show_toast_for_disabling_crossplay_with_other_platform_users_in_party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_show_toast_for_disabling_crossplay_with_other_platform_users_in_party") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && !enabled && Party_IsRunning(&g_partyData) && g_partyData.iscrossplayParty )
    LUI_CoD_CrossplaySettingsDisabledOtherPlatformInPartyWarning(controllerIndex);
}

/*
==============
Live_DWLoginComplete
==============
*/
void Live_DWLoginComplete(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  unsigned __int64 UserID; 
  const char *Username; 
  DWCrossPlatformIdentityEventHandler *v6; 
  DWServicesAccess *v7; 
  DWCrossPlatformIdentity *CrossPlatformIdentity; 
  unsigned __int64 UniversalId; 
  XUID result; 

  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
  UserID = bdLoginResult::getUserID(LoginResult);
  XUID::FromUniversalId(&result, UserID);
  Live_SetUniversalId(controllerIndex, result);
  Username = bdLoginResult::getUsername(LoginResult);
  Live_SetLocalClientUserName(controllerIndex, Username);
  v6 = DWCrossPlatformIdentityEventHandler::GetInstance(controllerIndex);
  v7 = DWServicesAccess::GetInstance();
  CrossPlatformIdentity = DWServicesAccess::GetCrossPlatformIdentity(v7, controllerIndex);
  DWCrossPlatformIdentity::registerPushMessageHandler(CrossPlatformIdentity, v6);
  UniversalId = XUID::GetUniversalId(&result);
  DLog_SetUserId(controllerIndex, UniversalId);
}

/*
==============
Live_DeclineInvitation
==============
*/
void Live_DeclineInvitation(void)
{
  if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1645, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( &g_partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomic_IsJoiningActive( &g_partyJoinInfo )") )
    __debugbreak();
  InviteJoinHSM::ResetAcceptingInviteInitialized(&g_invitationHSM);
  InviteJoinHSM::ClearHostSessionInfoForJoin(&g_invitationHSM);
}

/*
==============
Live_DemonwareConnected
==============
*/
void Live_DemonwareConnected(const int controllerIndex)
{
  LiveRegionInfo_Init(0);
  OnlineMatchmakerOmniscient::Uninit(&OnlineMatchmakerOmniscient::ms_instance);
  s_systemTimeSignedOutOfDW = 0;
}

/*
==============
Live_DemonwareConnected_Internal
==============
*/
void Live_DemonwareConnected_Internal(const int controllerIndex)
{
  LiveRegionInfo_Init(0);
  OnlineMatchmakerOmniscient::Uninit(&OnlineMatchmakerOmniscient::ms_instance);
  s_systemTimeSignedOutOfDW = 0;
}

/*
==============
Live_DemonwareDisconnectCleanup
==============
*/
void Live_DemonwareDisconnectCleanup(int controllerIndex)
{
  BOOL v2; 
  PartyDisconnectReason v3; 
  PartyData *PartyData; 
  const dvar_t *v5; 
  DWServicesAccess *Instance; 
  PartyDisconnectReason v7; 
  DWServicesAccess *v8; 
  DWLobbyService *DWLobbyService; 
  LocalClientNum_t ClientFromController; 

  Com_DPrintf(25, "%s( %d )\n", "Live_DemonwareDisconnectCleanup", (unsigned int)controllerIndex);
  v2 = Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT) && !Com_FrontEnd_IsInFrontEnd();
  if ( Live_IsInSystemlinkLobby() )
  {
    v2 = 0;
  }
  else
  {
    LOBYTE(v3) = 31;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v3);
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    Party_StopParty(&g_partyData);
  }
  v5 = DVARBOOL_online_signout_on_dw_disconnect_cleanup;
  if ( !DVARBOOL_online_signout_on_dw_disconnect_cleanup && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_signout_on_dw_disconnect_cleanup") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    OnlineMgr::OnSignedOut(&g_onlineMgr, controllerIndex, SignedOutFromOnline);
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isDisconnected(Instance, controllerIndex) )
  {
    LiveStorage_CS_ClearDWOverlappedTasks(controllerIndex);
    LiveStorage_ClearDWOverlappedTasks(controllerIndex);
    LB_ClearDWOverlappedTasks(controllerIndex);
    LiveCounter_ClearDWOverlappedTasks(controllerIndex);
    v8 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v8, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
    dwLobbyServiceCleanup(controllerIndex);
  }
  LOBYTE(v7) = 30;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v7);
  Live_DeclineInvitation();
  if ( v2 )
  {
    Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
    if ( g_disableReconnectMultipleLogons )
    {
      if ( Com_IsGameLocalServerRunning() )
      {
        ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
        Live_FakeUserSignout(ClientFromController, controllerIndex);
      }
      else
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)"EXE/DEMONWARE_MULTIPLE_LOGINS_GENERIC");
      }
    }
    else
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441CE5D8);
    }
  }
}

/*
==============
Live_DemonwareDisconnected
==============
*/
void Live_DemonwareDisconnected(const int controllerIndex)
{
  Online_BandwidthTest *Instance; 

  NET_OfflineTransition();
  DW_ResetLogon(controllerIndex);
  Instance = Online_BandwidthTest::GetInstance();
  Online_BandwidthTest::Reset(Instance);
  OnlineMgr::OnDisconnect(&g_onlineMgr, ONLINE_DISCONNECT_DEMONWARE);
  s_systemTimeSignedOutOfDW = Sys_Milliseconds();
}

/*
==============
Live_DisconnectFromWebServices
==============
*/
void Live_DisconnectFromWebServices(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWLobbyService *DWLobbyService; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isDisconnected(Instance, controllerIndex) )
  {
    LiveStorage_CS_ClearDWOverlappedTasks(controllerIndex);
    LiveStorage_ClearDWOverlappedTasks(controllerIndex);
    LB_ClearDWOverlappedTasks(controllerIndex);
    LiveCounter_ClearDWOverlappedTasks(controllerIndex);
    v3 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v3, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
    dwLobbyServiceCleanup(controllerIndex);
  }
}

/*
==============
Live_DisconnectOnSignInStatusChanged
==============
*/
void Live_DisconnectOnSignInStatusChanged(const char *disconnectMessage)
{
  PartyDisconnectReason v2; 
  PartyDisconnectReason v3; 
  const char *v4; 
  const char *v5; 
  errorParm_t v6; 
  PartyDisconnectReason v7; 

  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -1;
  Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
  Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
  Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
  OnlineMatchmakerOmniscient::Uninit(&OnlineMatchmakerOmniscient::ms_instance);
  Com_ScreenShotSaveGame_ClearScreenShot();
  LOBYTE(v2) = 30;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v2);
  Live_DeclineInvitation();
  if ( !disconnectMessage )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)4, NULL);
    if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
    if ( Com_ErrorEntered() )
    {
      v4 = (const char *)&stru_144009380;
      goto LABEL_11;
    }
    LOBYTE(v7) = 27;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v7);
    Live_DeclineInvitation();
    v5 = (const char *)&stru_144009380;
    v6 = ERR_DISCONNECT;
LABEL_13:
    Com_Error_impl(v6, (const ObfuscateErrorText)&queryFormat, v5);
    goto LABEL_14;
  }
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)8, NULL);
  if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
  if ( !Com_ErrorEntered() )
  {
    LOBYTE(v3) = 27;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v3);
    Live_DeclineInvitation();
    v5 = disconnectMessage;
    v6 = ERR_DROP;
    goto LABEL_13;
  }
  v4 = disconnectMessage;
LABEL_11:
  Com_PrintError(25, (const char *)&queryFormat, v4);
LABEL_14:
  OnlineMgr::OnDisconnect(&g_onlineMgr, ONLINE_DISCONNECT_ALL);
}

/*
==============
Live_DisplayActiveDialog
==============
*/
void Live_DisplayActiveDialog(void)
{
  int ControllerFromClient; 
  int v1; 
  int v2; 
  Online_AccountRegistration *Instance; 
  unsigned int v4; 
  __int64 activeMenuState; 
  unsigned int v6; 
  const char *v7; 
  const char **v8; 

  if ( InviteJoinHSM::ShouldShowJoiningGameSessionPopup(&g_invitationHSM) )
  {
    if ( !InviteJoinHSM::ShouldShowCancelButtonOnJoiningGameSessionPopup(&g_invitationHSM) )
    {
      s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_ACCEPTING_INVITE_WITHOUT_CANCEL;
      goto LABEL_8;
    }
  }
  else
  {
    s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
    if ( !CrosslaunchHSM::ShouldShowCrosslaunchingPopup(&g_crosslaunchHSM) )
    {
      s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
      s_uiJoiningDialogState.desiredMenuState = PartyAtomic_GetDesiredDialog();
      if ( s_uiJoiningDialogState.desiredMenuState == LIVE_DIALOG_NONE )
      {
        s_uiJoiningDialogState.desiredMenuState = GameBattles_GetDesiredDialog();
        if ( s_uiJoiningDialogState.desiredMenuState == LIVE_DIALOG_NONE )
          goto LABEL_15;
      }
      goto LABEL_8;
    }
  }
  s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_ACCEPTING_INVITE;
LABEL_8:
  if ( !CL_AllLocalClientsInactive() && (ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), ControllerFromClient >= 0) && GamerProfile_IsProfileLoggedIn(ControllerFromClient) && ((v1 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetAcceptedEULA(v1)) || (v2 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetHasEverPlayedMainMenu(v2))) || (Instance = Online_AccountRegistration::GetInstance(), Online_AccountRegistration::IsRegistering(Instance)) )
    s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
LABEL_15:
  v4 = Sys_Milliseconds();
  activeMenuState = s_uiJoiningDialogState.activeMenuState;
  v6 = v4;
  if ( s_uiJoiningDialogState.activeMenuState != s_uiJoiningDialogState.desiredMenuState && s_uiJoiningDialogState.lastStateTransition + 500 < v4 )
  {
    s_uiJoiningDialogState.lastStateTransition = v4;
    if ( s_uiJoiningDialogState.activeMenuState >= (unsigned int)LIVE_DIALOG_STATE_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1339, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( LIVE_DIALOG_STATE_COUNT )", "state doesn't index LIVE_DIALOG_STATE_COUNT\n\t%i not in [0, %i)", s_uiJoiningDialogState.activeMenuState, 3) )
      __debugbreak();
    v7 = s_uiJoiningDialogMenuName[activeMenuState];
    v8 = &s_uiJoiningDialogMenuName[activeMenuState];
    if ( v7 )
    {
      if ( LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, v7) )
      {
        Com_Printf(13, "Live_CloseDialog state %d dialog name %s\n", (unsigned int)activeMenuState, *v8);
        LUI_CloseMenu(LOCAL_CLIENT_0, *v8, 0);
        if ( !LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, *v8) && v6 != s_uiJoiningDialogState.lastStateTransition )
          Com_PrintWarning(13, "Live_CloseDialog closed '%s' while not on state transition edge\n", *v8);
      }
    }
    Live_OpenDialog(s_uiJoiningDialogState.desiredMenuState, v6);
    LODWORD(activeMenuState) = s_uiJoiningDialogState.desiredMenuState;
    s_uiJoiningDialogState.activeMenuState = s_uiJoiningDialogState.desiredMenuState;
  }
  Live_OpenDialog((UI_LiveDialogState)activeMenuState, v6);
}

/*
==============
Live_DoAllActiveControllersHaveCrossplayPermissions
==============
*/
char Live_DoAllActiveControllersHaveCrossplayPermissions()
{
  LocalClientNum_t v0; 
  int ControllerFromClient; 
  bool v2; 
  bool IsBanned; 
  bool v4; 
  const dvar_t *v5; 
  bool v6; 
  PartyData *PartyData; 

  v0 = LOCAL_CLIENT_0;
  while ( !CL_IsLocalClientActive(v0) )
  {
LABEL_24:
    if ( ++v0 >= LOCAL_CLIENT_COUNT )
      return 1;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v0);
  v2 = Online_PlayerData_IsCrossPlayEnabled(ControllerFromClient) && Live_HasCrossPlayPermissionsOnPlatform(ControllerFromClient);
  IsBanned = LiveAntiCheat_FeatureIsBanned(ControllerFromClient, 20);
  v4 = v2 && !IsBanned;
  if ( Live_IsInSystemlinkLobby() )
  {
    v5 = DVARBOOL_online_lan_cross_play;
    if ( DVARBOOL_online_lan_cross_play )
      goto LABEL_22;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_lan_cross_play");
  }
  else
  {
    PartyData = Lobby_GetPartyData();
    if ( !PartyData->inParty )
      goto LABEL_23;
    if ( Party_IsPrivateMatchLobby(PartyData) )
    {
      v5 = DVARBOOL_online_privatematch_cross_play;
      if ( DVARBOOL_online_privatematch_cross_play )
        goto LABEL_22;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_privatematch_cross_play");
    }
    else
    {
      v5 = DVARBOOL_online_matchmaking_cross_play;
      if ( DVARBOOL_online_matchmaking_cross_play )
        goto LABEL_22;
      v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_cross_play");
    }
  }
  if ( v6 )
    __debugbreak();
LABEL_22:
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    return 0;
LABEL_23:
  if ( v4 )
    goto LABEL_24;
  return 0;
}

/*
==============
Live_GenerateRandomTimeToRetryInSeconds
==============
*/
__int64 Live_GenerateRandomTimeToRetryInSeconds(unsigned int retryCount, unsigned int maxValue)
{
  unsigned int v3; 
  double v4; 
  float v5; 

  if ( retryCount >= 0x10 )
    v3 = 0x10000;
  else
    v3 = 1 << retryCount;
  v4 = I_random();
  v5 = (float)v3;
  if ( v3 + (int)(float)(*(float *)&v4 * v5) < maxValue )
    return v3 + (int)(float)(*(float *)&v4 * v5);
  return maxValue;
}

/*
==============
Live_GenerateTimeToRetryInSeconds
==============
*/
__int64 Live_GenerateTimeToRetryInSeconds(unsigned int retryCount, unsigned int maxValue)
{
  if ( retryCount >= 0x10 )
  {
    if ( maxValue > 0x10000 )
      return 0x10000;
    return maxValue;
  }
  else
  {
    if ( 1 << retryCount < maxValue )
      return (unsigned int)(1 << retryCount);
    return maxValue;
  }
}

/*
==============
Live_GetAcceptingInvitationDesiredDialog
==============
*/
__int64 Live_GetAcceptingInvitationDesiredDialog()
{
  if ( InviteJoinHSM::ShouldShowJoiningGameSessionPopup(&g_invitationHSM) )
    return 2 - (unsigned int)InviteJoinHSM::ShouldShowCancelButtonOnJoiningGameSessionPopup(&g_invitationHSM);
  else
    return 0i64;
}

/*
==============
Live_GetActiveParty
==============
*/
PartyData *Live_GetActiveParty()
{
  bool v0; 
  bool v1; 
  bool v2; 
  bool IsDevmapping; 

  v0 = Lobby_IsInRunningLobby();
  v1 = Party_InParty(&g_partyData) != 0;
  v2 = Live_IsInSystemlinkLobby();
  IsDevmapping = Live_IsDevmapping();
  if ( !v0 && (v1 || v2 || IsDevmapping) )
    return &g_partyData;
  else
    return Lobby_GetPartyData();
}

/*
==============
Live_GetConsoleID
==============
*/
unsigned __int64 Live_GetConsoleID(int verboseIfErrorIn)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  int v5; 
  int v6; 
  unsigned __int64 v7; 

  v4 = 0i64;
  v3 = 0i64;
  v6 = 0;
  v5 = 0;
  v7 = 0i64;
  if ( !Live_GetConsoleDetails(verboseIfErrorIn, (unsigned __int8 *)&v6, (unsigned __int8 *)&v5, &v4, &v3, &v7) && verboseIfErrorIn )
    Com_PrintError(16, "ERROR: Getting console details failed.\n");
  return 0i64;
}

/*
==============
Live_GetCrossPlayPermissionsToBeSentForPartyJoin
==============
*/

bool __fastcall Live_GetCrossPlayPermissionsToBeSentForPartyJoin()
{
  return Live_DoAllActiveControllersHaveCrossplayPermissions();
}

/*
==============
Live_GetCurrentParty
==============
*/
PartyData *Live_GetCurrentParty()
{
  if ( Party_InParty(&g_partyData) || Live_IsInSystemlinkLobby() )
    return &g_partyData;
  else
    return Lobby_GetPartyData();
}

/*
==============
Live_GetFenceDemonwareStatusFromWaitingForOnlineServicesReason
==============
*/
__int64 Live_GetFenceDemonwareStatusFromWaitingForOnlineServicesReason(WaitingForOnlineServicesReason reason)
{
  __int64 result; 

  switch ( reason )
  {
    case HALF:
      result = 7i64;
      break;
    case HALF_HALF:
      result = 8i64;
      break;
    case LONG:
      result = 9i64;
      break;
    case LONG_LONG:
      result = 10i64;
      break;
    case MAX_INT:
      result = 11i64;
      break;
    case SIZE_T:
      result = 12i64;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
Live_GetFirstPartyAccountTypeForPlatform
==============
*/
const char *Live_GetFirstPartyAccountTypeForPlatform(ClientPlatform platform)
{
  switch ( (char)platform )
  {
    case PLATFORM_ANDROID:
      return "steam";
    case PLATFORM_BATTLENET:
      return "bnet";
    case PLATFORM_IOS:
      return "xbl";
    case PLATFORM_KINDLE_FIRE:
      return "psn";
    case PLATFORM_NX:
      return "wecn";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 3297, ASSERT_TYPE_ASSERT, "(0)", (const char *)&queryFormat, "0") )
    __debugbreak();
  return "unknown";
}

/*
==============
Live_GetGameParty
==============
*/
PartyData *Live_GetGameParty()
{
  if ( Live_IsInSystemlinkLobby() || Live_IsDevmapping() )
    return &g_partyData;
  else
    return Lobby_GetPartyData();
}

/*
==============
Live_GetLocalNatType
==============
*/
int Live_GetLocalNatType()
{
  if ( badHost->current.enabled )
    return 3;
  else
    return NET_GetNatType();
}

/*
==============
Live_GetLoginDelayMs
==============
*/
__int64 Live_GetLoginDelayMs(const int controllerIndex)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( GamerProfile_GetAcceptedEULA(ControllerFromClient) )
    return 0i64;
  Com_Printf(25, "Delaying DW Login %u ms to mitigate login burst.\n", 60000i64);
  return 60000i64;
}

/*
==============
Live_GetMACAddress
==============
*/

bool __fastcall Live_GetMACAddress(unsigned __int8 *macAddr)
{
  return Plat_GetMacAddress(macAddr);
}

/*
==============
Live_GetMACAddressAsUint64
==============
*/

bool __fastcall Live_GetMACAddressAsUint64(unsigned __int64 *macAddr)
{
  return Plat_GetMacAddressAsUint64(macAddr);
}

/*
==============
Live_GetMachineId
==============
*/

bool __fastcall Live_GetMachineId(unsigned __int64 *machineIdLow, unsigned __int64 *machineIdHigh)
{
  return Plat_GetMachineId(machineIdLow, machineIdHigh);
}

/*
==============
Live_GetOurClientNum
==============
*/
int Live_GetOurClientNum(int controllerIndex, const PartyData *party)
{
  DWServicesAccess *Instance; 
  const XUID *Xuid; 
  int MemberByXUID; 
  unsigned __int64 PlatformUserId; 
  XUID result; 

  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) || !Live_IsUserSignedInToLive(controllerIndex) || dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED || (Xuid = Live_GetXuid(&result, controllerIndex), MemberByXUID = Party_FindMemberByXUID(party, (const XUID)Xuid->m_id), MemberByXUID == -1) )
  {
    PlatformUserId = Live_GetPlatformUserId(controllerIndex);
    return Party_FindMemberByPlatformId(party, PlatformUserId);
  }
  return MemberByXUID;
}

/*
==============
Live_GetQueueWaitTimeSecs
==============
*/
__int64 Live_GetQueueWaitTimeSecs(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginStatus *Status; 
  bdLoginStatus *v5; 
  DWServicesAccess *v6; 
  DWLogin *v7; 
  bdLoginStatus *v8; 
  __int64 EstimatedQueueTimeMS; 
  float v10; 
  float v11; 

  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
  if ( !DWLogin::hasStarted(Login) )
    return 0i64;
  if ( !DWLogin::isPending(Login) )
    return 0i64;
  Status = (bdLoginStatus *)DWLogin::getStatus(Login);
  if ( bdLoginStatus::getLoginStatusCode(Status) != POLLING_LOGIN_QUEUE )
  {
    v5 = (bdLoginStatus *)DWLogin::getStatus(Login);
    if ( bdLoginStatus::getLoginStatusCode(v5) != POLLING_LOGIN_QUEUE_WAIT )
      return 0i64;
  }
  v6 = DWServicesAccess::GetInstance();
  v7 = DWServicesAccess::GetLogin(v6, controllerIndex);
  v8 = (bdLoginStatus *)DWLogin::getStatus(v7);
  EstimatedQueueTimeMS = bdLoginStatus::getEstimatedQueueTimeMS(v8);
  v10 = (float)EstimatedQueueTimeMS;
  if ( EstimatedQueueTimeMS < 0 )
  {
    v11 = (float)EstimatedQueueTimeMS;
    v10 = v11 + 1.8446744e19;
  }
  return (unsigned int)(int)(float)(v10 * 0.001);
}

/*
==============
Live_GetSharableParty
==============
*/
PartyData *Live_GetSharableParty()
{
  PartyData *PartyData; 
  const dvar_t *v2; 

  PartyData = Lobby_GetPartyData();
  if ( Party_IsSessionSharable(PartyData) )
    return PartyData;
  if ( Party_IsSessionSharable(&g_partyData) )
    return &g_partyData;
  if ( !Session_IsValid(&g_serverSession) )
    return 0i64;
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return PartyData;
  else
    return 0i64;
}

/*
==============
Live_GetShouldDemonwareRetry
==============
*/
bool Live_GetShouldDemonwareRetry(unsigned int secondsSinceLastTry, unsigned int retryCount, unsigned int maxValue)
{
  if ( 1 << retryCount < maxValue )
    maxValue = 1 << retryCount;
  return secondsSinceLastTry >= maxValue;
}

/*
==============
Live_GetShouldDemonwareRetryWithBase
==============
*/
bool Live_GetShouldDemonwareRetryWithBase(unsigned int baseRetry, unsigned int secondsSinceLastTry, unsigned int retryCount, unsigned int maxValue)
{
  if ( baseRetry << retryCount < maxValue )
    maxValue = baseRetry << retryCount;
  return secondsSinceLastTry >= maxValue;
}

/*
==============
Live_GetStartingCrossLaunchPartyDesiredDialog
==============
*/
_BOOL8 Live_GetStartingCrossLaunchPartyDesiredDialog()
{
  return CrosslaunchHSM::ShouldShowCrosslaunchingPopup(&g_crosslaunchHSM);
}

/*
==============
Live_GetUnoIdFromPlayerInfo
==============
*/
unsigned __int64 Live_GetUnoIdFromPlayerInfo(BG_SynchronizedPlayerInfo *playerInfo)
{
  unsigned __int64 result; 

  result = XUID::ToUint64(&playerInfo->xuid);
  if ( result == playerInfo->platformId )
    return 0i64;
  return result;
}

/*
==============
Live_HandleDWLoginError
==============
*/
char Live_HandleDWLoginError(const int controllerIndex, const unsigned int errorCode)
{
  if ( errorCode != 14019 )
    return 0;
  dwSetPlayerBannedType(controllerIndex, BanType_UmbrellaBan);
  return 1;
}

/*
==============
Live_HasAcceptedEULA
==============
*/
bool Live_HasAcceptedEULA()
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  return GamerProfile_GetAcceptedEULA(ControllerFromClient);
}

/*
==============
Live_HasCompletedFirstBootFlow
==============
*/
bool Live_HasCompletedFirstBootFlow()
{
  int ControllerFromClient; 
  int v1; 
  int v2; 
  bool result; 

  result = 0;
  if ( !CL_AllLocalClientsInactive() )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( ControllerFromClient >= 0 && GamerProfile_IsProfileLoggedIn(ControllerFromClient) )
    {
      v1 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( GamerProfile_GetAcceptedEULA(v1) )
      {
        v2 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        if ( GamerProfile_GetHasEverPlayedMainMenu(v2) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
Live_HasCrossPlayPermissions
==============
*/
bool Live_HasCrossPlayPermissions(const int controllerIndex)
{
  bool v2; 
  bool IsBanned; 

  v2 = Online_PlayerData_IsCrossPlayEnabled(controllerIndex) && Live_HasCrossPlayPermissionsOnPlatform(controllerIndex);
  IsBanned = LiveAntiCheat_FeatureIsBanned(controllerIndex, 20);
  return v2 && !IsBanned;
}

/*
==============
Live_HasEverPlayedMainMenu
==============
*/
bool Live_HasEverPlayedMainMenu()
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  return GamerProfile_GetHasEverPlayedMainMenu(ControllerFromClient);
}

/*
==============
Live_HasOnlineServicesAndRequirementsToInvite
==============
*/
char Live_HasOnlineServicesAndRequirementsToInvite(const int localControllerIndex, const char **errorString, const char **devErrorString, bool shouldCheckPlatformSessionRequirements)
{
  const char *v8; 

  if ( !Live_IsUserSignedInToLive(localControllerIndex) )
  {
    *errorString = "ONLINE/CANT_INVITE_NO_ONLINE_SERVICES";
    v8 = "Not signed into live";
LABEL_15:
    *devErrorString = v8;
    return 0;
  }
  if ( dwGetLogOnStatus(localControllerIndex) != DW_LIVE_CONNECTED || !NET_IsStarted() || !NET_IsRelayStarted() )
  {
    *errorString = "ONLINE/CANT_INVITE_NO_ONLINE_SERVICES";
    v8 = "Not signed into DW";
    goto LABEL_15;
  }
  if ( Live_ContentRatingAllowed(localControllerIndex, (char **)devErrorString) )
  {
    if ( !shouldCheckPlatformSessionRequirements || !PlatformSessionsHSMEnabled() || !g_partyData.inParty || Plat_CheckIfPrivatePartySessionExistsForController(localControllerIndex) )
      return 1;
    *errorString = "ONLINE/CANT_INVITE_NO_ONLINE_SERVICES";
    v8 = "Private party session does not exist";
    goto LABEL_15;
  }
  *errorString = "ONLINE/CANT_INVITE_NO_ONLINE_SERVICES";
  return 0;
}

/*
==============
Live_HasOnlineServicesAndRequirementsToJoin
==============
*/
char Live_HasOnlineServicesAndRequirementsToJoin(const int localControllerIndex, const char **errorString, const char **devErrorString)
{
  const char *v6; 

  if ( !Live_IsUserSignedInToLive(localControllerIndex) )
  {
    *errorString = "ONLINE/CANT_JOIN_NO_ONLINE_SERVICES";
    v6 = "Not signed into live";
LABEL_10:
    *devErrorString = v6;
    return 0;
  }
  if ( dwGetLogOnStatus(localControllerIndex) != DW_LIVE_CONNECTED || !NET_IsStarted() || !NET_IsRelayStarted() )
  {
    *errorString = "ONLINE/CANT_JOIN_NO_ONLINE_SERVICES";
    v6 = "Not signed into DW";
    goto LABEL_10;
  }
  if ( Live_ContentRatingAllowed(localControllerIndex, (char **)devErrorString) )
  {
    *devErrorString = (char *)&queryFormat.fmt + 3;
    return 1;
  }
  else
  {
    *errorString = "ONLINE/CANT_JOIN_NO_ONLINE_SERVICES";
    return 0;
  }
}

/*
==============
Live_HasOnlineSubscription
==============
*/

bool __fastcall Live_HasOnlineSubscription(const int controllerIndex)
{
  return Live_HasOnlinePlayPrivilege(controllerIndex);
}

/*
==============
Live_InAreaThatHasParties
==============
*/
bool Live_InAreaThatHasParties()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF;
}

/*
==============
Live_InLoadingScreen
==============
*/
bool Live_InLoadingScreen()
{
  return !Com_FrontEnd_IsInFrontEnd() && clientUIActives[0].connectionState != CA_ACTIVE;
}

/*
==============
Live_Invitation_HasAcceptedInvite
==============
*/
bool Live_Invitation_HasAcceptedInvite()
{
  return InviteJoinHSM::HasStartedJoinProcess(&g_invitationHSM);
}

/*
==============
Live_InviteProcessingSessionSearchAndGameModeCheckFencePassedFrame
==============
*/
char Live_InviteProcessingSessionSearchAndGameModeCheckFencePassedFrame(const int controllerIndex)
{
  const dvar_t *v2; 
  PartyDisconnectReason v4; 
  bool v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  int ControllerFromClient; 
  int v10; 
  int v11; 
  int v12; 
  int v14; 
  LocalClientNum_t outLocalClientNum; 
  WaitingForOnlineServicesReason reason; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1940, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v14) )
      __debugbreak();
  }
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled || (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
  {
    PartyUI_OpenMenu(LOCAL_CLIENT_0, AERIAL, 1);
    return 0;
  }
  if ( CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_ONE_CLIENT )
  {
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_NO_CLIENTS )
      Com_PrintError(25, "Joining somebody with no clients active\n");
LABEL_16:
    if ( Live_IsWaitingForOnlineServices(controllerIndex, &reason) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1970, ASSERT_TYPE_ASSERT, "(!Live_IsWaitingForConnection( controllerIndex ))", (const char *)&queryFormat, "!Live_IsWaitingForConnection( controllerIndex )") )
      __debugbreak();
    if ( !xblive_loggedin->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1971, ASSERT_TYPE_ASSERT, "(xblive_loggedin->current.enabled)", (const char *)&queryFormat, "xblive_loggedin->current.enabled") )
      __debugbreak();
    if ( !Live_IsUserSignedInToLive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1972, ASSERT_TYPE_ASSERT, "(Live_IsUserSignedInToLive( controllerIndex ))", (const char *)&queryFormat, "Live_IsUserSignedInToLive( controllerIndex )") )
      __debugbreak();
    LOBYTE(v4) = 24;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v4);
    if ( FenceManager_IsFencePassing(controllerIndex, FENCE_ONLINE) )
    {
      if ( !InviteJoinHSM::IsAcceptingInviteInitialized(&g_invitationHSM) )
      {
        if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
        {
          v5 = Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") || Live_IsInSystemlinkLobby();
          InviteJoinHSM::SetIsInviteOnline(&g_invitationHSM, v5);
        }
        R_Cinematic_UnsetNextPlayback();
        if ( g_partyData.inParty && !g_partyData.party_systemActive && !g_partyData.areWeHost )
          Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, controllerIndex, "xstopprivateparty 1 1", 0, 0);
        v6 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
        if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v6);
        if ( v6->current.enabled )
        {
          v7 = DVARBOOL_onlinegame;
          if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v7);
          if ( !v7->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 2008, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", (const char *)&queryFormat, "Dvar_GetBool( onlinegame )") )
            __debugbreak();
          v8 = DVARBOOL_systemlink;
          if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v8);
          if ( v8->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 2009, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_systemlink, \"systemlink\" ))", (const char *)&queryFormat, "!Dvar_GetBool( systemlink )") )
            __debugbreak();
        }
        else
        {
          Dvar_SetBool_Internal(DVARBOOL_onlinegame, 1);
          Dvar_SetBool_Internal(DVARBOOL_systemlink, 0);
        }
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        if ( Lobby_GetPartyData()->inParty )
          Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, ControllerFromClient, "xstopparty", 0, 0);
        Cbuf_ExecuteBufferInternal(LOCAL_CLIENT_0, ControllerFromClient, "xstartprivateparty", 0, 0);
        InviteJoinHSM::SetAcceptingInviteInitialized(&g_invitationHSM);
      }
      if ( CL_AllLocalClientsInactive() || (v10 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), v10 < 0) || !GamerProfile_IsProfileLoggedIn(v10) || (v11 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetAcceptedEULA(v11)) || (v12 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetHasEverPlayedMainMenu(v12)) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 2035, ASSERT_TYPE_ASSERT, "(Live_HasCompletedFirstBootFlow())", (const char *)&queryFormat, "Live_HasCompletedFirstBootFlow()") )
          __debugbreak();
      }
      if ( (Live_SyncOnlineDataFlags(controllerIndex) & 0x71B34) == 0 )
        return 1;
    }
    return 0;
  }
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || CL_Mgr_HandleSignIn(controllerIndex, 1) )
    goto LABEL_16;
  return 0;
}

/*
==============
Live_IsAnybodySignedIn
==============
*/
__int64 Live_IsAnybodySignedIn()
{
  int v0; 

  v0 = 0;
  while ( !Live_IsUserSignedIn(v0) )
  {
    if ( ++v0 >= 8 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Live_IsAnybodySignedInToLive
==============
*/
__int64 Live_IsAnybodySignedInToLive()
{
  int v0; 

  v0 = 0;
  while ( !Live_IsUserSignedInToLive(v0) )
  {
    if ( ++v0 >= 8 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Live_IsClientAFriendOfAnyLocalPlayer
==============
*/
char Live_IsClientAFriendOfAnyLocalPlayer(const PartyData *party, const int clientNum)
{
  int v4; 
  unsigned __int64 PlatformId; 
  char MemberPlatform; 
  Online_Friends *Instance; 
  Online_Friends *v8; 
  XUID result; 

  Party_GetXuid(&result, party, clientNum);
  v4 = 0;
  PlatformId = 0i64;
  MemberPlatform = Party_GetMemberPlatform(party, clientNum);
  if ( MemberPlatform == (unsigned __int8)GetClientPlatform() )
    PlatformId = Party_GetPlatformId(party, clientNum);
  while ( 1 )
  {
    if ( PlatformId )
    {
      Instance = Online_Friends::GetInstance();
      if ( Online_Friends::FindIndexByPlatformId(Instance, v4, PlatformId) != -1 )
        break;
    }
    v8 = Online_Friends::GetInstance();
    if ( Online_Friends::Crossplay_FindIndex(v8, v4, result) != -1 )
      break;
    if ( (unsigned int)++v4 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Live_IsConnectedToDemonware
==============
*/
bool Live_IsConnectedToDemonware(int controllerIndex)
{
  return dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED;
}

/*
==============
Live_IsCrossPlayEnabled
==============
*/
bool Live_IsCrossPlayEnabled(const int controllerIndex)
{
  bool v2; 
  bool IsBanned; 
  bool v4; 
  const dvar_t *v5; 
  const char *v6; 
  PartyData *PartyData; 

  v2 = Online_PlayerData_IsCrossPlayEnabled(controllerIndex) && Live_HasCrossPlayPermissionsOnPlatform(controllerIndex);
  IsBanned = LiveAntiCheat_FeatureIsBanned(controllerIndex, 20);
  v4 = v2 && !IsBanned;
  if ( Live_IsInSystemlinkLobby() )
  {
    v5 = DVARBOOL_online_lan_cross_play;
    if ( DVARBOOL_online_lan_cross_play )
      goto LABEL_20;
    v6 = "online_lan_cross_play";
    goto LABEL_18;
  }
  PartyData = Lobby_GetPartyData();
  if ( PartyData->inParty )
  {
    if ( Party_IsPrivateMatchLobby(PartyData) )
    {
      v5 = DVARBOOL_online_privatematch_cross_play;
      if ( DVARBOOL_online_privatematch_cross_play )
        goto LABEL_20;
      v6 = "online_privatematch_cross_play";
    }
    else
    {
      v5 = DVARBOOL_online_matchmaking_cross_play;
      if ( DVARBOOL_online_matchmaking_cross_play )
        goto LABEL_20;
      v6 = "online_matchmaking_cross_play";
    }
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v6) )
      __debugbreak();
LABEL_20:
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled )
      return 0;
  }
  return v4;
}

/*
==============
Live_IsDemonwareFailed
==============
*/
__int64 Live_IsDemonwareFailed(const int controllerIndex, FenceDemonwareStatusCodes *statusCode)
{
  int v4; 
  int v5; 
  PublisherVariableManager *v7; 
  PublisherVariableManager *Instance; 
  WaitingForOnlineServicesReason reason; 

  v4 = Sys_Milliseconds();
  v5 = v4 - DW_GetLogonStartTime();
  if ( v5 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 2581, ASSERT_TYPE_ASSERT, "( ( timeDisplayed >= 0 ) )", "( timeDisplayed ) = %i", v5) )
    __debugbreak();
  if ( Live_HasDetectedNetConnectionLost() )
  {
    *statusCode = HALF_HALF;
    return 1i64;
  }
  if ( !Live_IsWaitingForOnlineServices(controllerIndex, &reason) && (v7 = PublisherVariableManager::GetInstance(), PublisherVariableManager::HasRetrievedVariables(v7)) || v5 <= 30000 )
  {
    if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_DISCONNECTED )
    {
      if ( dwGetNumLogonAttempts(controllerIndex) >= 3 )
      {
        *statusCode = LONG_LONG;
        return 1i64;
      }
      if ( v5 > 30000 )
      {
        if ( dwGetNumLogonAttempts(controllerIndex) >= 1 )
        {
          *statusCode = MAX_INT;
          return 1i64;
        }
        if ( dw_test_disconnect && dw_test_disconnect->current.integer > 0 )
          Com_PrintWarning(25, "Use dvar dw_test_retry_disconnect to properly test connecting dialog up and MW3 servers not available rather than dw_test_disconnect.\n");
      }
    }
    return 0i64;
  }
  else if ( reason )
  {
    *statusCode = Live_GetFenceDemonwareStatusFromWaitingForOnlineServicesReason(reason);
    return 1i64;
  }
  else
  {
    Instance = PublisherVariableManager::GetInstance();
    if ( !PublisherVariableManager::HasRetrievedVariables(Instance) )
      *statusCode = LONG;
    return 1i64;
  }
}

/*
==============
Live_IsDemonwareNetStarted
==============
*/
bool Live_IsDemonwareNetStarted()
{
  return NET_IsStarted() && NET_IsRelayStarted();
}

/*
==============
Live_IsDemonwareReady
==============
*/
_BOOL8 Live_IsDemonwareReady(const int controllerIndex, FenceDemonwareStatusCodes *statusCode)
{
  int IsWaitingForOnlineServices; 
  PrivilegeCheckState v5; 
  bool v6; 
  FenceDemonwareStatusCodes v7; 
  WaitingForOnlineServicesReason reason; 

  IsWaitingForOnlineServices = Live_IsWaitingForOnlineServices(controllerIndex, &reason);
  Live_UpdateOnlinePlayPrivilege(controllerIndex);
  v5 = Live_GetOnlinePlayPrivilegeCheckState(controllerIndex);
  v6 = !IsWaitingForOnlineServices && v5 == CHECKED;
  switch ( reason )
  {
    case HALF:
      v7 = PTRDIFF;
      break;
    case HALF_HALF:
      v7 = LONG_DOUBLE;
      break;
    case LONG:
      v7 = LONG_DOUBLE|HALF;
      break;
    case LONG_LONG:
      v7 = LONG_DOUBLE|HALF_HALF;
      break;
    case MAX_INT:
      v7 = LONG_DOUBLE|LONG;
      break;
    case SIZE_T:
      v7 = LONG_DOUBLE|LONG_LONG;
      break;
    default:
      v7 = NONE;
      break;
  }
  *statusCode = v7;
  return v6;
}

/*
==============
Live_IsDevmapping
==============
*/
__int64 Live_IsDevmapping()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_is_devmapping;
  if ( !DVARBOOL_online_is_devmapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_is_devmapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar
==============
*/
bool Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(RealTimeMultiplayBRGameSpecificKillswitchFlags flag)
{
  return 0;
}

/*
==============
Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar
==============
*/
bool Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar(RealTimeMultiplayBRPumpDisabledFlags flag)
{
  return 0;
}

/*
==============
Live_IsInGameBattlesGame
==============
*/

bool __fastcall Live_IsInGameBattlesGame()
{
  return GameBattles_IsGameBattleActive();
}

/*
==============
Live_IsInGamemodeToInvite
==============
*/
char Live_IsInGamemodeToInvite(const char **errorString, const char **devErrorString)
{
  char ActiveGameMode; 
  const dvar_t *v5; 
  char v6; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  PartyData *PartyData; 
  const dvar_t *v11; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v5 = DVARBOOL_onlinegame;
  v6 = ActiveGameMode;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
  {
    *errorString = "ONLINE/CANT_INVITE_UNINVITABLE_AREA";
    *devErrorString = "Not online game";
    return 0;
  }
  if ( v6 == 1 )
  {
    *errorString = "ONLINE/CANT_INVITE_UNINVITABLE_AREA";
    *devErrorString = "SP gamemode active";
    return 0;
  }
  v8 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = DVARBOOL_xblive_privatematch_solo;
    if ( !DVARBOOL_xblive_privatematch_solo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch_solo") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      *errorString = "ONLINE/CANT_INVITE_UNINVITABLE_AREA";
      *devErrorString = "Solo gamemode active";
      return 0;
    }
  }
  PartyData = Lobby_GetPartyData();
  if ( !Party_IsSessionSharable(PartyData) )
  {
    if ( Party_IsSessionSharable(&g_partyData) )
      return 1;
    if ( !Session_IsValid(&g_serverSession) )
      goto LABEL_25;
    v11 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
      goto LABEL_25;
  }
  if ( !PartyData )
  {
LABEL_25:
    *errorString = "ONLINE/CANT_INVITE_UNINVITABLE_AREA";
    *devErrorString = "No Party active";
    return 0;
  }
  return 1;
}

/*
==============
Live_IsInLiveGame
==============
*/
bool Live_IsInLiveGame()
{
  const dvar_t *v0; 

  if ( !Session_IsValid(&g_serverSession) )
    return 0;
  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
Live_IsInMatchMakerArea
==============
*/
char Live_IsInMatchMakerArea()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const PartyData *PartyData; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  if ( ((Dvar_CheckFrontendServerThread(v1), !v1->current.enabled) || (PartyData = Lobby_GetPartyData(), Party_PrivateMatchmakingAllowed(PartyData))) && Lobby_IsInLobby() )
    return 1;
  else
    return 0;
}

/*
==============
Live_IsInQueue
==============
*/
bool Live_IsInQueue(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWLogin *Login; 
  bdLoginStatus *Status; 
  bdLoginStatus *v5; 
  bool result; 

  Instance = DWServicesAccess::GetInstance();
  Login = DWServicesAccess::GetLogin(Instance, controllerIndex);
  result = 0;
  if ( DWLogin::hasStarted(Login) && DWLogin::isPending(Login) )
  {
    Status = (bdLoginStatus *)DWLogin::getStatus(Login);
    if ( bdLoginStatus::getLoginStatusCode(Status) == POLLING_LOGIN_QUEUE )
      return 1;
    v5 = (bdLoginStatus *)DWLogin::getStatus(Login);
    if ( bdLoginStatus::getLoginStatusCode(v5) == POLLING_LOGIN_QUEUE_WAIT )
      return 1;
  }
  return result;
}

/*
==============
Live_IsInRestrictedMatchmakingGame
==============
*/
bool Live_IsInRestrictedMatchmakingGame()
{
  const dvar_t *v0; 
  bool result; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 1;
  result = GameBattles_IsGameBattleActive();
  if ( result )
    return 1;
  return result;
}

/*
==============
Live_IsInSystemlinkLobby
==============
*/
bool Live_IsInSystemlinkLobby()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  v0 = DVARBOOL_systemlink;
  if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  v1 = DVARBOOL_com_lan_lobby_enabled;
  if ( !DVARBOOL_com_lan_lobby_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_lan_lobby_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Live_IsLobbyTeamSelectEnabled
==============
*/
__int64 Live_IsLobbyTeamSelectEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_lobby_team_select;
  if ( !DVARBOOL_lobby_team_select && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lobby_team_select") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Live_IsLobbyTeamSelectionLocked
==============
*/
bool Live_IsLobbyTeamSelectionLocked()
{
  return 0;
}

/*
==============
Live_IsOffline
==============
*/
bool Live_IsOffline()
{
  const dvar_t *v0; 
  const dvar_t *v1; 

  v0 = DVARBOOL_force_offline_enabled;
  if ( !DVARBOOL_force_offline_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_offline_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 0;
  if ( !Live_HasNetConnection() )
    return 1;
  v1 = DVARBOOL_force_offline_menus;
  if ( !DVARBOOL_force_offline_menus && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "force_offline_menus") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Live_IsOfflineTool
==============
*/
_BOOL8 Live_IsOfflineTool()
{
  return Com_GeneratingConstBaselines();
}

/*
==============
Live_IsOnlineGame
==============
*/
__int64 Live_IsOnlineGame()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Live_IsUserSignedInToDemonware
==============
*/
bool Live_IsUserSignedInToDemonware(const int controllerIndex)
{
  DWServicesAccess *Instance; 

  Instance = DWServicesAccess::GetInstance();
  return DWServicesAccess::isReady(Instance, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED;
}

/*
==============
Live_IsWaitingForConnection
==============
*/
_BOOL8 Live_IsWaitingForConnection(const int controllerIndex)
{
  WaitingForOnlineServicesReason reason; 

  return Live_IsWaitingForOnlineServices(controllerIndex, &reason) != 0;
}

/*
==============
Live_NetworkingFenceStart
==============
*/
void Live_NetworkingFenceStart(const int controllerIndex)
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  Party_StopParty(PartyData);
  Party_StopParty(&g_partyData);
  NET_OnlineTransition();
  DW_OnlineTransition(controllerIndex);
}

/*
==============
Live_OnPlayerQuit
==============
*/
void Live_OnPlayerQuit(void)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Live_TrackMigrateableQuit(ControllerFromClient);
  OnlineTournament_OnPlayerQuit();
}

/*
==============
Live_OpenDialog
==============
*/
void Live_OpenDialog(UI_LiveDialogState state, unsigned int curTime)
{
  __int64 v2; 
  const char *v4; 
  const char **v5; 
  int v7; 

  v2 = state;
  if ( (unsigned int)state >= LIVE_DIALOG_STATE_COUNT )
  {
    v7 = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_common.cpp", 1318, ASSERT_TYPE_ASSERT, "(unsigned)( state ) < (unsigned)( LIVE_DIALOG_STATE_COUNT )", "state doesn't index LIVE_DIALOG_STATE_COUNT\n\t%i not in [0, %i)", state, v7) )
      __debugbreak();
  }
  v4 = s_uiJoiningDialogMenuName[v2];
  v5 = &s_uiJoiningDialogMenuName[v2];
  if ( v4 )
  {
    if ( !LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, v4) )
    {
      CL_Keys_AddCatcher(LOCAL_CLIENT_0, 64);
      LUI_OpenMenu(LOCAL_CLIENT_0, *v5, 1, 1, 0);
      if ( LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, *v5) )
      {
        if ( curTime != s_uiJoiningDialogState.lastStateTransition )
          Com_PrintWarning(13, "Live_OpenDialog opened '%s' while not on state transition edge\n", *v5);
      }
    }
  }
}

/*
==============
Live_RegisterCommonDvars
==============
*/
void Live_RegisterCommonDvars(void)
{
  dwRegisterEnvironmentDvars();
  xblive_loggedin = Dvar_RegisterBool("LLOKQOSPPP", 0, 0, "User is logged into xbox live");
  LiveRegionInfo_RegisterDvars();
  extinctionBonus_period = Dvar_RegisterInt("LNKMOSLNMN", 604800, 0, 0x7FFFFFFF, 0, "Amount of time ( seconds ) before the extinction bonus teeth token pool will be reset.");
  live_test_onlinedataoff = Dvar_RegisterInt("MSRLSMQLNR", 0, 0, 0x7FFFFFFF, 0, "Bit flags corresponding enum OnlineDataSyncFlags that indicate we do not have that piece of data");
  force_ranking = Dvar_RegisterBool("OSPNSPSKL", 0, 4u, "Set to true to allow private or system link games to use the ranking system");
  badHost = Dvar_RegisterBool("NRNPKSNNPK", 0, 4u, "Whether we are a bad host or not (overrides NAT type)");
  dw_addrHandleTimeout = Dvar_RegisterInt("MTRLPQOPSR", 5000, 0, 0x7FFFFFFF, 0, "Delay before destroying an addrHandle after the connection is lost\n");
  demonwareConsideredConnectedTime = Dvar_RegisterInt("NLNTMRRQML", 5000, 0, 0x7FFFFFFF, 0, "Number of milliseconds after being disconnected from demonware before considering shutting down.");
  dw_test_disconnect = Dvar_RegisterInt("TRQPNQNQ", 0, 0, 1, 4u, "Simulate a demonware disconnect");
  dw_test_retry_disconnect = Dvar_RegisterBool("MSTPLMPQMN", 0, 4u, "Simulate a demonware disconnect at the end of every connection retry");
  dw_memory_display_time = Dvar_RegisterInt("NKMNNPMTQN", 30, 0, 600, 4u, "Number of seconds between high watermark display.");
  ui_contextualMenuLocation = Dvar_RegisterString("LTMKOQPNMR", "store_disabled", 0, "Contextual menu location from where you entered the store.");
  enable_recordRecentActivity = Dvar_RegisterInt("LNNMSPMMQS", 0, 0, 1, 0, "records the timestamp of when the player was recently active to the tracker leaderboards");
  unlockAllItems = Dvar_RegisterBool("OLKMKMTKRO", 0, 4u, "Simulate all items being unlocked");
  lockAllItems = Dvar_RegisterBool("OKPRQTRPMP", 0, 4u, "Simulate all items being locked");
  Dvar_BeginPermanentRegistration();
  DVARINT_cg_netStatsExtrapolationLow = Dvar_RegisterInt("NLOSLRRKSS", 299, 0, 0x7FFFFFFF, 0, "The threshold above which the extrapolation icon will show up in the 'low state'");
  DVARINT_cg_netStatsExtrapolationHigh = Dvar_RegisterInt("LRQLSQPPTO", 499, 0, 0x7FFFFFFF, 0, "The threshold above which the extrapolation icon will show up in the 'high state'");
  DVARINT_cg_netStatsExtrapolationLowDedi = Dvar_RegisterInt("MSPPSRRLNM", 299, 0, 0x7FFFFFFF, 0, "The threshold above which the extrapolation icon will show up in the 'low state' for dedicated servers");
  DVARINT_cg_netStatsExtrapolationHighDedi = Dvar_RegisterInt("NRTQNMSQ", 499, 0, 0x7FFFFFFF, 0, "The threshold above which the extrapolation icon will show up in the 'high state' for dedicated servers");
  DVARINT_cg_netStatsLatencyVariationLow = Dvar_RegisterInt("MLSKLOTNTR", 299, 0, 0x7FFFFFFF, 0, "The threshold above which the latency variation icon will show up in the 'low state'");
  DVARINT_cg_netStatsLatencyVariationHigh = Dvar_RegisterInt("OMONPOMRSR", 499, 0, 0x7FFFFFFF, 0, "The threshold above which the latency variation icon will show up in the 'high state'");
  DVARINT_cg_netStatsLatencyVariationLowDedi = Dvar_RegisterInt("LONQPKOQKL", 299, 0, 0x7FFFFFFF, 0, "The threshold above which the latency variation icon will show up in the 'low state' for dedicated servers");
  DVARINT_cg_netStatsLatencyVariationHighDedi = Dvar_RegisterInt("OMRRSOROPP", 499, 0, 0x7FFFFFFF, 0, "The threshold above which the latency variation icon will show up in the 'high state' for dedicated servers");
  DVARINT_cg_netStatsPingLow = Dvar_RegisterInt("LMOPTKKMNM", 199, 0, 0x7FFFFFFF, 0, "The threshold above which the ping icon will show up in the 'low state'");
  DVARINT_cg_netStatsPingHigh = Dvar_RegisterInt("NRPMSPLMLS", 299, 0, 0x7FFFFFFF, 0, "The threshold above which the ping icon will show up in the 'high state'");
  DVARINT_cg_netStatsPingLowDedi = Dvar_RegisterInt("MPRLLMQOQS", 149, 0, 0x7FFFFFFF, 0, "The threshold above which the ping icon will show up in the 'low state' for dedicated servers");
  DVARINT_cg_netStatsPingHighDedi = Dvar_RegisterInt("OMTMKKMKOQ", 249, 0, 0x7FFFFFFF, 0, "The threshold above which the ping icon will show up in the 'high state' for dedicated servers");
  DVARINT_cg_netStatsTimeReceived = Dvar_RegisterInt("MPMPMRRPSQ", 90, 0, 0x7FFFFFFF, 0, "The threshold in milliseconds of command time received in a single server frame above which we show the yellow network packet icon");
  DVARINT_cg_netStatsTimeQueued = Dvar_RegisterInt("LPOKPKRSSS", 60, 0, 0x7FFFFFFF, 0, "The threshold in milliseconds of command time queued in a single server frame above which we show the orange network packet icon");
  DVARINT_cg_netStatsPacketsDropped = Dvar_RegisterInt("LOLSRTTMPL", 1, 0, 0x7FFFFFFF, 0, "The threshold in absolute command count dropped in a single server frame above which we show the red network packet icon");
  DVARINT_cg_netStatsTimerCloseMenus = Dvar_RegisterInt("MKKSSRKTOT", 3000, 0, 0x7FFFFFFF, 0, "The time (in ms) during which the net health icons are hidden after closing all in-game menus");
  DVARINT_cg_netStatsTimerRespawn = Dvar_RegisterInt("LQPRTQKLLL", 3000, 0, 0x7FFFFFFF, 0, "The time (in ms) during which the net health icons are hidden after respawning");
  DVARINT_cg_netStatsTimerStartMatch = Dvar_RegisterInt("NKTKQSLNOK", 3000, 0, 0x7FFFFFFF, 0, "The time (in ms) during which the net health icons are hidden after starting a match");
  DVARINT_cg_displayPSOLoadDuration = Dvar_RegisterInt("OLKLSRSLOK", 5000, 0, 0x7FFFFFFF, 0, "Display duration of PSO Load performance problem icon");
  DVARBOOL_single_player_mp = Dvar_RegisterBool("NOPSSNSOMP", 0, 0, "Run MP with always bots.");
  DVARBOOL_two_player_mp = Dvar_RegisterBool("NOQTKKKSQR", 0, 0, "Run MP with two clients.");
  DVARBOOL_commerce_details_not_purchase = Dvar_RegisterBool("LPSLPLNKNT", 0, 0, "Show Details, not purchase screen on XB3.");
  DVARBOOL_no_server_timeout = Dvar_RegisterBool("MRPPPRMTLO", 0, 0, "If true all timeouts between client and server will be ignored.");
  DVARBOOL_allow_start_match = Dvar_RegisterBool("RKONMTMNL", 1, 0, "If false, matches will not be allowed to start.");
  DVARSTR_online_matchmaking_restrict = Dvar_RegisterString("online_matchmaking_restrict", (const char *)&queryFormat.fmt + 3, 0, "Arbitrary filter to restrict matchmaking. Use your name or similar.");
  DVARSTR_unlock_dir_overide = Dvar_RegisterString("QMRSMTKKS", "unlocks", 0, "Dev only overide for the unlock directory.");
  DVARBOOL_unlock_all_loot = Dvar_RegisterBool("NLOTNSOSKK", 0, 0, "Unlock all loot.");
  DVARBOOL_online_matchmaking_force_host = Dvar_RegisterBool("ORTMRRRPM", 0, 0, "Forces the kit with this dvar set to be the lobby host.");
  DVARINT_online_demonware_logging = Dvar_RegisterInt("NKPPRSPKL", 3, 0, 3, 0, "Turn on DW logging. 1 = (ERROR), 2 = (ERROR, WARN), 3 = (ERROR, WARN, INFO).");
  DVARBOOL_online_is_devmapping = Dvar_RegisterBool("MMSSLSPQNP", 0, 0, "Are we devmapping?");
  DVARBOOL_debug_fakePSNPlusCheckSuccess = Dvar_RegisterBool("LSQMLSKMMO", 0, 0, "Pretend the PSN Plus Check was a success");
  DVARBOOL_online_logging_timeseries_onoff = Dvar_RegisterBool("RNSSQTMSQ", 1, 0, "Turns the online timeseries logging on or off.");
  DVARINT_online_logging_metrics_collection_interval_ms = Dvar_RegisterInt("LNRRRMQRTO", 30000, 30000, 0x7FFFFFFF, 0, "Interval at which the logging system will run CollectMetrics_Client or CollectMetrics_dedi in ms.");
  DVARBOOL_online_party_validate_service_level_with_matchmaker = Dvar_RegisterBool("NLMPNPLLRM", 0, 0, "Validate service level (paid vs freemium) self-reported in party join with the value Demonware sends to the matchmaker");
  DVARBOOL_online_party_validate_team_balance_on_join_request = Dvar_RegisterBool("NTSOMQPKKK", 0, 0, "Validate team balancing locally when a player connects. This should not be needed as we rely on the DW MM to do this.");
  DVARBOOL_online_matchmaking_update_party_team_squad_assignments = Dvar_RegisterBool("MMLNPQQLO", 1, 0, "Inform the party when a player's team or squad changes");
  DVARBOOL_online_matchmaking_request_new_token_from_remote_users_on_fail = Dvar_RegisterBool("LSLPTTMOTM", 1, 0, "Request matchmaking tokens from remote players in the event of MM error INVALID_TOKEN");
  DVARBOOL_online_matchmaking_cached_player_info = Dvar_RegisterBool("PLMKTNQNT", 1, 0, "Whether to check the checksum of the player info string to avoid re-sending the same data.");
  DVARBOOL_online_matchmaking_cached_token = Dvar_RegisterBool("OMQNSKTKQM", 1, 0, "Whether to used the cached matchmaking token to avoid re-requesting after each lobby.");
  DVARBOOL_online_matchmaking_no_dedi_search = Dvar_RegisterBool("LSQNRROOQP", 0, 0, "Skip the dedicated server search.");
  DVARBOOL_online_matchmaking_dedi_required = Dvar_RegisterBool("LRSSMMRMLM", 0, 0, "Require a dedicated server.");
  DVARBOOL_online_matchmaking_allow_lobby_merging = Dvar_RegisterBool("MOKMRQPRSK", 1, 0, "Whether lobby merging should be on or not.");
  DVARBOOL_online_matchmaking_allow_joins_before_lobby = Dvar_RegisterBool("MLSMRSTTQQ", 1, 0, "Allow players to join on presence before the lobby has been assigned, will cause the player to get added to private party and MM restarted (new and dangerous)");
  DVARBOOL_online_should_kick_joiner_before_lobby_if_not_party_host = Dvar_RegisterBool("MLTLMKSLSS", 0, 0, "When a user is joining a lobby that is searching, and we are not the party host, we may need to kick him, this dvar controls that");
  DVARINT_online_matchmaking_min_slots_scale_percent = Dvar_RegisterInt("LSQMMTSPTL", 100, 0, 100, 0, "Informs the matchmaker how to scale down the min players, typically for large mode.  100 = no reduction in min players, 0 = will reduce down to min players 1");
  DVARBOOL_online_matchmaking_show_dc_qos_failed_warning = Dvar_RegisterBool("NSMNRNNNPO", 1, 0, "Whether to show failed dc qos warning to the player");
  DVARBOOL_online_matchmaking_use_lobby_affinity = Dvar_RegisterBool("LLNRQKTPNR", 0, 0, "Use lobby affinity. True = break lobbies up after matches, False = keep lobbies together for next match");
  DVARBOOL_online_matchmaking_allow_game_override_lobby_affinity = Dvar_RegisterBool("NTSQLRNSRR", 0, 0, "Allow gsc to override the lobby affinity flag. True = check if the gsc wants to keep the lobby together regardless of online_matchmaking_use_lobby_affinity, False = no change in behavior.");
  DVARINT_online_matchmaking_host_doc_update_interval_ms = Dvar_RegisterInt("LSMPRRTNNK", 6000, 5000, 0x7FFFFFFF, 0, "Interval between calls to update the lobby host document in ms.");
  DVARINT_online_matchmaking_host_doc_keep_alive_s = Dvar_RegisterInt("LPPLRQMLKT", 240, 60, 0x7FFFFFFF, 0, "If we haven't sent a host doc in the last N seconds we'll send one. In seconds.");
  DVARINT_online_matchmaking_host_doc_keep_alive_max_s = Dvar_RegisterInt("SSNKKLPPS", 270, 60, 0x7FFFFFFF, 0, "If we have exceeded the heartbeat time and have an empty lobby but aren't quite ready to shut down, this is our max time we can delay the send.");
  DVARINT_online_matchmaking_startmatchmaking_interval_ms = Dvar_RegisterInt("NPPRKNTSPL", 10000, 10000, 0x7FFFFFFF, 0, "Time between successive calls to matchmaking. In milliseconds");
  DVARINT_online_matchmaking_initial_connect_timeout_ms = Dvar_RegisterInt("NPTRQLSPLM", 30000, 1, 0x7FFFFFFF, 0, "Time between when the host gets the expected player from the MM to that player connecting to the party");
  DVARBOOL_online_matchmaking_delay_start_while_may_connect = Dvar_RegisterBool("LPQPTRRTPL", 1, 0, "Delay allowing the start of the game while players are in the may connect state");
  DVARBOOL_online_matchmaking_send_party_clients_playlist_filters = Dvar_RegisterBool("ONTOROMLL", 1, 0, "Sends party clients the playlist filters so if they are migrated to they have the right settings");
  DVARBOOL_online_matchmaking_send_wont_connect_status = Dvar_RegisterBool("PNNQNRMST", 0, 0, "Updates the host doc with a player status when in WONT_CONNECT, this causes the status to be echoed back and can overflow max players");
  DVARSTR_online_matchmaking_gametype = Dvar_RegisterString("NLSTPOOTLQ", (const char *)&queryFormat.fmt + 3, 0, "Will be used instead of playlist gametype, note that the playlist config will be run but this mode will be used.");
  DVARSTR_online_matchmaking_mapname = Dvar_RegisterString("NTKNTKNQT", (const char *)&queryFormat.fmt + 3, 0, "Will be used instead of playlist mapname, note that the playlist config will be run but this map will be used.");
  DVARBOOL_online_matchmaking_fail_hostdoc_update = Dvar_RegisterBool("NMPLPKOLML", 0, 0, "Cause host doc update to fail");
  DVARBOOL_online_matchmaking_verbose = Dvar_RegisterBool("NOPTRNPSQO", 0, 0, "Verbose matchmaking prints");
  DVARINT_ugc_update_delay = Dvar_RegisterInt("MOTMLNPRRQ", 10000, 0, 1000000, 0, "The delay between attempting to update the UGC cache from DemonWare.");
  DVARINT_online_qos_max_bandwidth = Dvar_RegisterInt("NKKTPLTMMR", 0x20000, 0, 0x7FFFFFFF, 0, "The maximum bandwidth in bits per second used for serving QoS");
  DVARINT_online_qos_backoff_success_delay = Dvar_RegisterInt("TNPNKMKSL", 1200000, 0, 0x7FFFFFFF, 0, "The minimum time (milliseconds) before refreshing the datacenter QoS after a success");
  DVARINT_online_qos_backoff_fail_delay = Dvar_RegisterInt("NSNLTQSSKS", 1000, 0, 0x7FFFFFFF, 0, "The minimum time (milliseconds) before refreshing the datacenter QoS after a failure, used for backoff");
  DVARFLT_online_qos_backoff_factor = Dvar_RegisterFloat("NMMNKMRRN", 2.0, 0.1, 3.4028235e38, 0, "The refresh factor used for backoff calculation");
  DVARINT_online_qos_backoff_max_attempts = Dvar_RegisterInt("LRKLPPKSMP", 4, 1, 0x7FFFFFFF, 0, "The number of attempts used for backoff");
  DVARBOOL_online_qos_backoff_stop_at_max_attempts = Dvar_RegisterBool("ROMQPQRLM", 0, 0, "Whether to stop when reaching max attempts or not");
  DVARBOOL_online_qos_allow_in_private_match_lobby = Dvar_RegisterBool("MKOMMKOQNR", 0, 0, "Whether to allow dc qos while in private match lobbies");
  DVARSTR_dedi_buildname_override = Dvar_RegisterString("LNLTPNOLTQ", (const char *)&queryFormat.fmt + 3, 0, "Override the requested dedi buildname when matchmaking");
  DVARSTR_dedi_qos_buildname = Dvar_RegisterString("LOTMOMRQKL", "relayping-all-all-all-3", 0, "The build name for the qos.");
  DVARSTR_dedi_qos_buildname_override = Dvar_RegisterString("LRPRPMPKSQ", (const char *)&queryFormat.fmt + 3, 0, "Override for the buildname. Build name generally comes from pubvars so this will allow to override that value.");
  DVARSTR_dedi_qos_buildname_context = Dvar_RegisterString("LOSQRKQOKT", "shared_qos", 0, "The build name for the qos.");
  DVARBOOL_dedi_qos_use_ping_servers = Dvar_RegisterBool("NTTLPSLQTN", 1, 0, "If ping servers are not in use, qos hits acquired servers directly.");
  DVARSTR_dedi_relay_build_config = Dvar_RegisterString("NMQPNKLLKT", "debug", 0, "Relay build config");
  DVARSTR_dedi_relay_build_version = Dvar_RegisterString("MOLRRNLSQT", "20190829124720076798", 0, "Relay build version");
  DVARINT_dedi_relay_backoff_delay = Dvar_RegisterInt("NKKPQQKSOS", 5000, 0, 0x7FFFFFFF, 0, "Initial relay bind backoff delay in milliseconds");
  DVARINT_dedi_relay_max_backoff_delay = Dvar_RegisterInt("MOKNTNRSSN", 60000, 0, 0x7FFFFFFF, 0, "Max relay bind backoff delay in milliseconds");
  DVARINT_online_standalone_umbrella_token_refresh_s = Dvar_RegisterInt("NLQTMTNOOT", 20, 0, 0x7FFFFFFF, 0, "How long before token expiry to refresh the token in seconds. Actual value is <token expiry time> - online_standalone_umbrella_token_refresh_s.");
  DVARINT_online_standalone_umbrella_retry_time_ms = Dvar_RegisterInt("NPKPMKRSON", 30000, 0, 0x7FFFFFFF, 0, "How long to wait in between attempts to get an umbrella token.");
  DVARFLT_online_cohort_sample_percentage = Dvar_RegisterFloat("RPOLSKLNS", 0.02, 0.0, 1.0, 0, "Represents the percent of population that should report non-required data. Between 0 and 1.");
  DVARBOOL_online_auth_skip_auth = Dvar_RegisterBool("NOSONNPTLM", 0, 0, "Will prevent the game from attempting to authenticate with Demonware.");
  DVARINT_online_auth_ticket_expiration_offset_s = Dvar_RegisterInt("LPQPTTPNRM", 20, 0, 0x7FFFFFFF, 0, "This value is subtracted from the auth ticket expiry time to determine when we should grab a new auth ticket. In seconds.");
  DVARBOOL_online_bb_console_logging = Dvar_RegisterBool("OTKMRNMPN", 0, 0, "Will log console output to blackbox.");
  DVARINT_enable_analytics_spawn_log = Dvar_RegisterInt("NTOSMKNMSM", 1, 0, 1, 0, "Will log spawn analytics data to blackbox.");
  DVARINT_analytics_spawn_event_log_count = Dvar_RegisterInt("SOOKORNPT", 2, 0, 10, 0, "The number of spawn events to be instrumented.");
  DVARINT_online_game_metrics_min_time_between_sends_s = Dvar_RegisterInt("MSNLNQQORR", 30, 30, 0x7FFFFFFF, 0, "Minimum allowed time between calls to prepare on the bdGameMetrics class in seconds.");
  DVARBOOL_online_game_metrics_keep_alive = Dvar_RegisterBool("LQRPLQRTSN", 0, 0, "Cache PS4 connections to allow http keep-alive to reuse sockets for multiple http request");
  DVARBOOL_online_blackbox_send_bootguid_in_connect = Dvar_RegisterBool("MROOORPPTL", 0, 0, "Determins if the bootguid should be sent to blackbox.");
  DVARBOOL_online_blackbox_send_snapshot_bw_data = Dvar_RegisterBool("LSMKKTOMRO", 0, 0, "Turns on data about snapshot bandwidth being submitted to blackbox.");
  DVARINT_online_invite_search_duration_timeout_ms = Dvar_RegisterInt("MTRTSPTMSL", 35000, 1000, 60000, 0, "Determines the amount of time to wait for a matchmaking response during an invite.");
  DVARINT_online_blackbox_bbproto_send_interval_ms = Dvar_RegisterInt("NLTTKTRPTM", 60000, 60000, 0x7FFFFFFF, 0, "The number of milliseconds allowed between sending more bbproto data.");
  DVARINT_online_mming_display_string_interval_ms = Dvar_RegisterInt("NTTRTLSNKR", 5000, 0, 0x7FFFFFFF, 0, "The number of milliseconds string cycling when matchmaking.");
  DVARINT_online_invite_online_data_fetch_timeout_ms = Dvar_RegisterInt("NOMKQQOSLR", 45000, 0, 60000, 0, "Determines the amount of time to wait for fetching the online data during an invite before timing out.");
  DVARINT_online_mming_max_num_user_facing_strings = Dvar_RegisterInt("OMLQOOPKQN", 3, 0, 10, 0, "The number of localized strings to choose from in each matchmaking state.");
  DVARBOOL_online_mp_private_matches_are_invite_only = Dvar_RegisterBool("MNLKKQRTKK", 0, 0, "Determines if the MP private ( custom ) matches should be joinable");
  DVARINT_xb3_primary_gamertag_update_delay = Dvar_RegisterInt("OKQKKRKRLS", 1000, 0, 1000000, 0, "The delay between attempting to update the primary users gamertag for display purposes.");
  DVARBOOL_fnf = Dvar_RegisterBool("fnf", 0, 0, "Friday Night Fights!!!!!!!!");
  DVARINT_fnf_build_number = Dvar_RegisterInt("MQPMMLSOOM", 0, 0, 0x7FFFFFFF, 0, "The build number for the fnf builds.");
  DVARINT_xb3_privacy_update_delay_ms = Dvar_RegisterInt("NNOTTNQQO", 1000, 0, 0x7FFFFFFF, 0, "The number of milliseconds before making another request to microsoft for fetching privacy settings.");
  DVARINT_xb3_privacy_user_data_refresh_rate_ms = Dvar_RegisterInt("LQOSPTTTO", 60000, 0, 0x7FFFFFFF, 0, "The number of milliseconds that needs refreshing the privacy settings data.");
  DVARINT_xb3_privacy_stale_data_check_rate_ms = Dvar_RegisterInt("RRQLQSMR", 180000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before checking if any user privacy data has not updated for a long time( xb3_privacy_user_data_refresh_rate_ms ).");
  DVARINT_xb3_privacy_failure_backoff_count_max = Dvar_RegisterInt("OKOSKPKMPO", 10, 0, 0x7FFFFFFF, 0, "The maximum number of failure counts we count upto in case the call to get the privacy settings from xbox fails.");
  DVARINT_xb3_meetplayer_gamertag_refresh_rate_ms = Dvar_RegisterInt("QSPLPOQQM", 30000, 0, 0x7FFFFFFF, 0, "The number of milliseconds before making another request to microsoft for fetching recently met players gamertag.");
  DVARINT_xb3_friends_joinable_refresh_rate_ms = Dvar_RegisterInt("LPOKKPRNT", 5000, 0, 0x7FFFFFFF, 0, "The number of milliseconds before making another request to microsoft for fetching platform session for currently selected friend.");
  DVARINT_xb3_content_change_cooldown = Dvar_RegisterInt("OLNSORMTPN", 30000, 0, 0x7FFFFFFF, 0, "XB3: the cooldown on how often we can check for content changes.");
  DVARINT_xb3_mutelist_fetch_delay = Dvar_RegisterInt("SRMOSPSMT", 2000, 0, 0x7FFFFFFF, 0, "XB3: the cooldown on how often we can check for mutelist changes. (ms)");
  DVARFLT_xb3_gpad_stick_deadzone_min = Dvar_RegisterFloat("LOTPKQTKOS", 0.07, 0.0, 1.0, 0, "XB3: Min value for gpad deadzone, xbox specific");
  DVARINT_gamebattle_account_refresh_interval = Dvar_RegisterInt("MQNKTKQKST", 5, 0, 0x7FFFFFFF, 0, "Interval between tries to fetch MLG GameBattle Account data (in seconds).");
  DVARINT_gamebattle_schedule_refresh_interval = Dvar_RegisterInt("NRNNMRTSMP", 5, 0, 0x7FFFFFFF, 0, "Interval between tries to fetch MLG GameBattle Schedule data (in seconds).");
  DVARINT_gamebattle_keepalive_interval = Dvar_RegisterInt("NPOKSQSNSQ", 5, 0, 0x7FFFFFFF, 0, "MLGLobby presence state refresh interval (in seconds, 0 = disable).");
  DVARINT_gamebattle_join_match_interval = Dvar_RegisterInt("MSSQORPMRQ", 5, 0, 0x7FFFFFFF, 0, "Interval between attempts to create or join a GameBattle match (in seconds).");
  DVARINT_gamebattle_get_match_history_interval = Dvar_RegisterInt("LRTRNSRPML", 30, 0, 0x7FFFFFFF, 0, "Throttling interval for requests for GB match history.  Over this amount of time only gamebattle_get_match_history_max_calls can be made.");
  DVARINT_gamebattle_get_match_history_max_calls = Dvar_RegisterInt("MPRPTSNPMS", 0, 0, 50, 0, "Throttling count for requests for GB match history. Over this amount of time only this many calls can be made over gamebattle_get_match_history_interval seconds. (0 = unlimited)");
  DVARBOOL_gamebattle_skip_account_check = Dvar_RegisterBool("MQSSSPSLMK", 0, 4u, "Set to true to skip check of user existing account.");
  DVARBOOL_gamebattle_fake_mlg_down = Dvar_RegisterBool("OKNPQMLKTT", 0, 4u, "Set to true to fake MLG service outage (account and schedule retrieval errors).");
  DVARINT_gamebattle_noshow_time_override = Dvar_RegisterInt("NTNOSQRROL", 0, 0, 0x7FFFFFFF, 4u, "Time (seconds) of the GameBattles noshow countdown.");
  DVARINT_gamebattle_intermission_time_override = Dvar_RegisterInt("NRMTLLNQKR", 0, 0, 0x7FFFFFFF, 4u, "Time (seconds) of the GameBattles intermission countdown");
  DVARINT_gamebattle_task_timeout_ms = Dvar_RegisterInt("NNOMMSQRTK", 12000, 0, 0x7FFFFFFF, 4u, "Time before a gamebattle task will timeout (in milliseconds)");
  DVARBOOL_gamebattle_allow_noshowreports = Dvar_RegisterBool("LSQMRNNTOR", 1, 0, "Killswitch for Gamebattles sending no show reports.");
  DVARBOOL_gamebattle_debug_draw = Dvar_RegisterBool("LOTTLTNMQS", 1, 0, "This will show the debug info for the gamebattles on the screen.");
  DVARINT_gamebattle_playlist_id = Dvar_RegisterInt("LSKKOOSLKQ", 0, 0, 0x7FFFFFFF, 0, "The playlist id gamebattles should use");
  DVARINT_gamebattle_schedule_max_refresh_attempts = Dvar_RegisterInt("MTSPMLTTQR", 3, 0, 0x7FFFFFFF, 0, "Maximum number of retries to fetch MLG GameBattle schedule data.");
  DVARINT_gamebattle_match_history_max_refresh_attempts = Dvar_RegisterInt("NSNOTQQLQO", 2, 0, 0x7FFFFFFF, 0, "Maximum number of retries to fetch MLG GameBattle match history data.");
  DVARBOOL_gamebattle_system_events_disabled = Dvar_RegisterBool("LKMKROOMPM", 0, 0, "1-disable/0-enable(default) listening of tournament system events (PS4 only)");
  DVARBOOL_gamebattle_tracing_enabled = Dvar_RegisterBool("OKRQOSSLTM", 1, 0, "Enable debug tracing via dlog telemetry");
  DVARBOOL_gamebattles_mapname_override_fix_enabled = Dvar_RegisterBool("SKNMQKNL", 1, 0, "Enables the override of mapname in the dvar ui_mapname");
  DVARBOOL_gamebattles_mapname_override_client_fix_enabled = Dvar_RegisterBool("NMKOQQLMTN", 0, 0, "Enables the override of mapname in the dvar ui_mapname, but if we're still a client");
  DVARBOOL_gamebattles_sony_tournament_flowmanager_fix_enabled = Dvar_RegisterBool("LPQQSRQSMO", 1, 0, "GB Fence fix for IWH-298863, IWH-297635 and IWH-297635");
  DVARBOOL_gamebattles_leave_match_fix_enabled = Dvar_RegisterBool("LOLSNQLPKO", 1, 0, "Clean quit GB menu, fix for IWH-295519");
  DVARBOOL_gamebattles_match_expired_check_enabled = Dvar_RegisterBool("OLTPPRMMKT", 1, 0, "Double check if a match is really expired, fix for IWH-288822");
  DVARBOOL_gamebattles_refresh_clear_join_fix_enabled = Dvar_RegisterBool("NOLRNRPKTN", 1, 0, "Failsafe on gamebattles leave state, fix for IWH-297635");
  DVARBOOL_gamebattles_menu_state_fix_enabled = Dvar_RegisterBool("NKOONQRRTM", 1, 0, "Force clear lobby state. Fix for IWH-298603");
  DVARBOOL_daily_login_bonus_enabled = Dvar_RegisterBool("SKOOSRKKK", 1, 0, "Bool to enable the daily login bonus feature.");
  DVARBOOL_daily_login_bonus_forced = Dvar_RegisterBool("RKRMTLOLQ", 0, 0, "Dvar to force daily login bonus popup everytime you enter mp.");
  DVARBOOL_daily_churn_login_enabled = Dvar_RegisterBool("MTTTSLOPQR", 0, 0, "Bool to enable the daily login churn prevention features.");
  DVARBOOL_daily_churn_login_forced = Dvar_RegisterBool("MMNMNOLQTT", 0, 0, "Dvar to force daily login churn popup everytime you enter mp.");
  DVARSTR_daily_churn_login_title_text = Dvar_RegisterString("LTKLKQSKOK", "LUA_MENU/CHURN_TITLE_0", 0, "Churn popup title string.");
  DVARSTR_daily_churn_login_reward_description = Dvar_RegisterString("MTMTMOLRQK", "LUA_MENU/CHURN_DESCRIPTION_0", 0, "Churn popup reward description string.");
  DVARSTR_daily_churn_login_loot_message = Dvar_RegisterString("NLTPNSPKOQ", "LUA_MENU/CHURN_MESSAGE_0", 0, "Churn popup loot message.");
  DVARSTR_daily_churn_login_confirm_text = Dvar_RegisterString("NTPPOMPLQM", "LUA_MENU/CHURN_CONFIRM_TEXT_0", 0, "Churn popup confirm text.");
  DVARBOOL_daily_challenge_popup_enabled = Dvar_RegisterBool("MLKSPNRQRL", 1, 0, "Allows the daily challenge popup to appear.");
  DVARBOOL_daily_challenge_popup_forced = Dvar_RegisterBool("MKSNTLMSQR", 0, 0, "Forces the daily challenge popup to appear.");
  DVARBOOL_survey_enabled = Dvar_RegisterBool("NTRLRTMMMP", 1, 0, "Dvar to enable surveys.");
  DVARBOOL_post_game_survey_forced = Dvar_RegisterBool("MQMQRKRNMN", 0, 0, "Dvar to force post match survey.");
  DVARBOOL_should_show_post_game_survey = Dvar_RegisterBool("LRKSQRLNKN", 0, 0, "Dvar to be set after a game depending on the party data set by the lobby host.");
  DVARFLT_post_game_survey_chance_percentage = Dvar_RegisterFloat("MPTNPPOPRP", 0.0099999998, 0.0, 100.0, 0, "Dvar that represents what percentage of the matches would be shown the survey, between 0 and 100");
  DVARBOOL_cod_point_bonus_points_enabled = Dvar_RegisterBool("NOMQKRNSKQ", 0, 0, "Displays the amount of bonus points given when purchasing cod points");
  DVARBOOL_cod_point_bonus_percentage_enabled = Dvar_RegisterBool("LKKMPTPLMP", 0, 0, "Displays the bonus percentages when purchasing cod points");
  DVARBOOL_mp_menu_battle_pass_tab_reorder = Dvar_RegisterBool("NSNRTPNQPN", 0, 0, "Places the Battle Pass tab as the second tab in the MP menu");
  DVARINT_battle_pass_tab_position = Dvar_RegisterInt("NTSLOQPLNT", 5, 1, 0x7FFFFFFF, 0, "Sets the position of the battle pass tab in the tabs menu. Only works if number is between 2 and 6. ");
  DVARBOOL_daily_challenge_difficulty_labels_enabled = Dvar_RegisterBool("LLQKSNOSS", 0, 0, "Enables difficulty labels for daily challenges");
  DVARINT_daily_challenge_regular_xp = Dvar_RegisterInt("MSORRSMRQM", 2000, 1, 0x7FFFFFFF, 0, "The range in XP reward of a challenge labelled as Regular");
  DVARINT_daily_challenge_hardened_xp = Dvar_RegisterInt("NTPLTMKQOT", 4500, 1, 0x7FFFFFFF, 0, "The range in XP reward of a challenge labelled as Hardened");
  DVARINT_daily_challenge_veteran_xp = Dvar_RegisterInt("PQOTPPRPP", 6000, 1, 0x7FFFFFFF, 0, "The range in XP reward of a challenge labelled as Veteran");
  DVARBOOL_should_show_debug_info_for_sony_realtime_multiplayer = Dvar_RegisterBool("MPPOLTTTLS", 0, 0, "Set this dvar to get more info about the variables that control the sony real time multiplay.");
  DVARINT_sony_realtime_multiplayer_br_game_specific_killswitch_flags = Dvar_RegisterInt("LOSKNONNMT", 7, 0, 0x7FFFFFFF, 0, "Bitmask to check which scenarios should be pumped for realtime multiplay in BR");
  DVARBOOL_should_check_for_intermission_to_pump_sony_realtime_multiplayer = Dvar_RegisterBool("NOOPTRPKQO", 1, 0, "Set this dvar to not pump RTMP during intermission.");
  DVARBOOL_should_check_for_intermission_to_pump_sony_realtime_multiplayer_only_for_br = Dvar_RegisterBool("TSPTKLQRM", 1, 0, "Set this dvar to not pump RTMP during intermission only for BR.");
  DVARINT_sony_realtime_multiplayer_br_pump_disabled_flags = Dvar_RegisterInt("NSLTOKPOTM", 3, 0, 0x7FFFFFFF, 0, "Bitmask to check which users cannot pump RTMP");
  DVARINT_sony_realtime_multiplayer_br_pump_disabled_flags_for_telemetry = Dvar_RegisterInt("NMRQRRSQOK", 0, 0, 0x7FFFFFFF, 0, "Bitmask to check which users cannot pump RTMP for telemetry if they are in BR");
  DVARBOOL_should_pump_sony_realtime_multiplayer_only_if_user_has_ps_plus_for_telemetry = Dvar_RegisterBool("OSRNKMPTP", 0, 0, "Set this dvar to if we dont want to pump realtime multiplay if user doesnt have PS plus.");
  DVARBOOL_should_check_sony_realtime_multiplayer_br_killswitch_flags = Dvar_RegisterBool("LLQMLNSTSK", 0, 0, "Set this dvar to get more info about the variables that control the sony real time multiplay.");
  DVARBOOL_killswitch_net_health_icons = Dvar_RegisterBool("MTTTROPML", 0, 0, "Killswitch for the network health icons");
  DVARBOOL_killswitch_net_health_dev = Dvar_RegisterBool("SMLKTKNRO", 1, 0, "Killswitch for the network health dev data");
  DVARBOOL_killswitch_PSO_Load_health_icons = Dvar_RegisterBool("QSPRQKKMN", 0, 0, "Killswitch for the PSO Load health icons");
  DVARBOOL_killswitch_matchID = Dvar_RegisterBool("LMKKMPMOSO", 0, 0, "Killswitch for the match ID display in the bottom left of the screen");
  DVARBOOL_killswitch_simultaneous_deaths = Dvar_RegisterBool("MRSNQSMSPL", 0, 0, "Killswitch for simultaneous death (server-side)");
  DVARBOOL_killswitch_player_event_fix = Dvar_RegisterBool("OKQRLRRRRS", 0, 0, "Killswitch for the player event handling fix. See IWH-170209. This fix allows the client to respond to event mispredictions immediately.");
  DVARBOOL_killswitch_bullet_penetration_fix = Dvar_RegisterBool("ONMLKTLMQ", 0, 0, "Killswitch for the bullet penetration fix.");
  DVARBOOL_killswitch_mouse_jitter_fix = Dvar_RegisterBool("NQSQTKKTNM", 0, 0, "Killswitch for the mouse jitter fix.");
  DVARBOOL_killswitch_ads_footstep_creep = Dvar_RegisterBool("LTLTKMTPOT", 0, 0, "Killswitch for playing 'CREEP' footsteps while ADS.  If set to 'true', will instead play 'WALK' footsteps while ADS.");
  DVARBOOL_killswitch_weapon_stance_recenter_scale_enabled = Dvar_RegisterBool("LLPOQNPMPP", 1, 0, "Killswitch for the weapon kick recentering speed scale fix.  See IWH-226509.");
  DVARBOOL_killswitch_weapon_kick_scale_multiplicative_enabled = Dvar_RegisterBool("MOMTPMSLL", 1, 0, "Killswitch for converting kick scaling from additive to multiplicative.  See IWH-231490.");
  DVARBOOL_killswitch_butt_collision_enabled = Dvar_RegisterBool("MLQKTLRTSQ", 1, 0, "Killswitch for player 'butt collision' system.  Pushes the player's posterior away from walls to avoid WM penetration.");
  DVARBOOL_killswitch_butt_collision_vs_players_enabled = Dvar_RegisterBool("SQKQSMOOR", 0, 0, "Killswitch for player 'butt collision' being affected by other players in the game.");
  DVARBOOL_killswitch_butt_collision_velocity_clipping_enabled = Dvar_RegisterBool("MPNTMPPRPT", 1, 0, "If true, clips velocity from active butt collision logic in PMove.");
  DVARBOOL_killswitch_butt_collision_asm_predicted_velocity_correction_enabled = Dvar_RegisterBool("NLNKSPPKMK", 1, 0, "If true, uses the results of 'butt collision' to perform ASM predicted velocity correction.");
  DVARBOOL_killswitch_enforce_sprint_out_fire_interrupt_enabled = Dvar_RegisterBool("MONQSQMML", 1, 0, "Killswitch for strong enforcement of 'sprint out interrupt' timers before firing.  Fixes exploits where the player can slide and subsequently cancel slide to avoid the sprint-out-to-fire delay time.");
  DVARBOOL_killswitch_enforce_slide_fire_time_enabled = Dvar_RegisterBool("LKONMLONRT", 1, 0, "Killswitch for strong enforcement of 'slide to fire' timers before firing.  Further fixes exploits where the player can slide and subsequently cancel slide to avoid the slide-to-fire time penalty.");
  DVARBOOL_killswitch_prevent_mantle_while_linked_enabled = Dvar_RegisterBool("RPKMNOOTQ", 1, 0, "Killswitch for logic that explicitly prevents mantling while linked to another object (riding vehicles, remote eyes, etc.).");
  DVARBOOL_killswitch_last_stand_rewrite_enabled = Dvar_RegisterBool("RLSOSNKRM", 1, 0, "Killswitch for rewritten last stand logic.  Set to 'false' to restore legacy behavior.");
  DVARBOOL_killswitch_last_stand_forward_slope_adjust_enabled = Dvar_RegisterBool("MMOPQORTRN", 1, 0, "Killswitch for special Last Stand collision resolution against slopes.");
  DVARBOOL_killswitch_last_stand_air_movetype_enabled = Dvar_RegisterBool("LKMNLNKTMM", 1, 0, "If true, uses the 'AIR' WM animation movetype while falling in Last Stand.");
  DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled = Dvar_RegisterBool("OLKNQTSTP", 1, 0, "If true, uses reordered predicted player pose calculation logic.  Fixes viewmodel legs jitter in last stand.");
  DVARBOOL_killswitch_last_stand_wm_restless_legs_enabled = Dvar_RegisterBool("NSTLLKTOPQ", 1, 0, "If true, never puts worldmodel legs into the 'IDLELASTSTAND' movetype if desired movement is non-zero.");
  DVARBOOL_killswitch_crawl_vm_left_right_blend_enabled = Dvar_RegisterBool("TTMMORMMM", 1, 0, "If true, blends left/right crawl animation weights smoothly.");
  DVARBOOL_killswitch_ladder_akimbo_cresting_fix_enabled = Dvar_RegisterBool("NKQMLQSQTS", 1, 0, "If true, enables the ladder akimbo cresting fix.");
  DVARBOOL_killswitch_execution_prop_streaming_enabled = Dvar_RegisterBool("LROOTOPLLL", 1, 0, "If true, sets execution prop weapon handles in LerpEntityStatePlayer as soon as props with streamed models are equipped.");
  DVARBOOL_killswitch_execution_death_validation_enabled = Dvar_RegisterBool("LOPNPKPMLR", 1, 0, "If true, will fixup execution attacker/victim pairs when an attacker is killed.");
  DVARBOOL_killswitch_viewheight_assert_fix_enabled = Dvar_RegisterBool("LKOLRRKPQN", 1, 0, "If true, viewheight adjust logic will immediately set target viewheight when an unexpected case is encountered.");
  DVARBOOL_killswitch_execution_prop_showhide_vfx_enabled = Dvar_RegisterBool("MPSOPMOQMN", 1, 0, "If true, will play execution prop show/hide VFX if specified in the execution asset.");
  DVARBOOL_killswitch_execution_scrubtime_fix_enabled = Dvar_RegisterBool("MRMKPRSKMP", 1, 0, "If true, will only update execution scrub time if an execution is active.");
  DVARBOOL_killswitch_rechamber_fix_enabled = Dvar_RegisterBool("MMOSSPRLKT", 1, 0, "If true, will rechamber the player's weapon as soon as brass is ejected for non-reload rechambers.");
  DVARBOOL_killswitch_missile_stuck_timeout_fix_enabled = Dvar_RegisterBool("OLTMQQLRRR", 1, 0, "If true, will disable timed missile detonation for any 'stuck' missile that does not have a timeout specified.");
  DVARBOOL_killswitch_impact_vfx_corpse_fixup_enabled = Dvar_RegisterBool("OLRRQQQMKR", 1, 0, "If true, properly transfers and binds fatal impact VFX to corpses post-mortem.");
  DVARBOOL_killswitch_melee_shield_sfx_fix_enabled = Dvar_RegisterBool("LQTRKPNMMM", 1, 0, "If true, melee attacks against riot shields will immediately play sound instead of waiting for FinishPlayerDamage.");
  DVARBOOL_killswitch_fix_attach_partbits_enabled = Dvar_RegisterBool("LSTKRPRKOR", 1, 0, "If true, hidepartbits are correctly recalculated when attaching models to characters on the server.");
  DVARBOOL_killswitch_weapon_datasource_caching_enabled = Dvar_RegisterBool("NTNLQRNTNK", 1, 0, "If true, will only push weapon datasource values when the player's current weapon changes.");
  DVARBOOL_killswitch_burst_fire_lastshot_enabled = Dvar_RegisterBool("NMRKOQQS", 1, 0, "If true, sends 'LastShot' events for all shots in the first burst for a magazine.");
  DVARBOOL_killswitch_dog_execution_region_fix_enabled = Dvar_RegisterBool("OMLOTKTQKQ", 1, 0, "If true, fixes missing dog execution props in Korea15 and China regions.");
  DVARBOOL_killswitch_scripted_offhand_throwback_fix_enabled = Dvar_RegisterBool("MMTLLKMQON", 1, 0, "If true, fixes an issue with 'throwback' grenades breaking scripted offhand gestures.");
  DVARBOOL_killswitch_view_legs_misprediction_fix_enabled = Dvar_RegisterBool("LNPOTTTORS", 1, 0, "If true, the fix to make sure the camera, view model and legs are in sync during misprediction is enabled.");
  DVARBOOL_killswitch_prevent_zero_bounds_extrapolation_enabled = Dvar_RegisterBool("LSQPOKTLNK", 1, 0, "If true, prevents client-side extrapolation if the player's bounds have zero width.");
  DVARBOOL_killswitch_execution_use_censorship_worldmodel_fix_enabled = Dvar_RegisterBool("NLPRMMRNT", 1, 0, "If true, use censorship execution worldmodel in Korea15 and China regions.");
  DVARBOOL_killswitch_left_hand_throw_gesture_stuck_fix_enabled = Dvar_RegisterBool("ROMNNNOLL", 1, 0, "If true, the offhand gestures are properly cleaned up when the primary weapon or the offhand weapon itself is taken away.");
  DVARBOOL_killswitch_missing_collision_predicted_pose_enabled = Dvar_RegisterBool("MQMPTSSKQS", 1, 0, "If true, will update the local player's worldmodel pose using the client's viewangles when running in non-predicted mode due to missing worldmodel collision.");
  DVARBOOL_killswitch_melee_only_weapon_no_reload_enabled = Dvar_RegisterBool("NPKTRTPKRK", 1, 0, "If true, completely disables the 'check reload' code path when using Melee Only weapons.");
  DVARBOOL_killswitch_melee_prone_improvements_enabled = Dvar_RegisterBool("MQQRLKSPOT", 1, 0, "If true, performs secondary detail traces against prone players to test 'legs' hits.");
  DVARBOOL_killswitch_melee_use_bullet_trace_enabled = Dvar_RegisterBool("LLMKNKQRRP", 1, 0, "If true, melee traces will use 'legacy bullet trace' physics interface calls, fixing melee damage traces that originate within a candidate victim's character proxy.");
  DVARBOOL_killswitch_melee_use_detail_world_center_enabled = Dvar_RegisterBool("LOONLLNNQN", 1, 0, "If true, secondary melee traces to detect riot shields and player legs will use the _detail_ world for the central melee array trace.  This also antilags the detail collision world when performing melee traces.");
  DVARBOOL_killswitch_skydive_stuck_after_landing_fix_enabled = Dvar_RegisterBool("LKLPSNRQOT", 1, 0, "If true, the fix to properly end the skydive state if the player goes into fall death state but do not die.");
  DVARBOOL_killswitch_melee_use_detail_world_for_vehicles = Dvar_RegisterBool("NSLPMTMTST", 1, 0, "If true, melee attacks against vehicles will retrace against the detail world to work around the fact that players have invisible shround collision in the non-details worlds.");
  DVARBOOL_killswitch_weapon_visibility_client_hint_enabled = Dvar_RegisterBool("NRMRNMOSTN", 1, 0, "If true, uses client-authoritative hints from remote clients to determine if weapon visibility logic should be executed.  Used as a performance hint.");
  DVARBOOL_killswitch_weapon_visibility_stowed_check_enabled = Dvar_RegisterBool("LPQTLMRONT", 1, 0, "If true, executes weapon visibility logic for stowed weapons on remote players.");
  DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled = Dvar_RegisterBool("OKSKOSSTNM", 1, 0, "If true, executes weapon visibility logic for script-attached models on remote players.");
  DVARBOOL_killswitch_high_precision_player_fire_event_enabled = Dvar_RegisterBool("OKOPQTKNLP", 1, 0, "If true, client fire events contain high precision shooting angles for accurate tracers. Only applies to player (client) fire events.");
  DVARBOOL_killswitch_high_precision_player_fire_event_high_bit_replication_enabled = Dvar_RegisterBool("LNKNQKTNPN", 1, 0, "This dvar is only respected if the killswitch_high_precision_player_fire_event_enabled is set to false. When true, fire events do not replicate the event params. Can cause catastrophic failure if the client and server dvar values are out of sync.");
  DVARBOOL_killswitch_javeling_steering_rewrite_enabled = Dvar_RegisterBool("NNQMNMQOOR", 1, 0, "If true, uses rewritten javelin steering logic to fix bugs.");
  DVARBOOL_killswitch_improved_akimbo_reload_ammo_distribution_enabled = Dvar_RegisterBool("NMRLRMKOOS", 1, 0, "If true, the improved algorithm to distribute ammo between akimbo guns evenly is enabled.");
  DVARBOOL_killswitch_offhand_ads_weapons = Dvar_RegisterBool("MLMTPQPKST", 1, 0, "If true, enables offhand ads weapon support.");
  DVARBOOL_killswitch_laststand_grenade_drop_fix_enabled = Dvar_RegisterBool("MOTNTMNOSP", 1, 0, "If true, players will drop primed grenades when entering Last Stand.");
  DVARBOOL_killswitch_weapon_inspect_enabled = Dvar_RegisterBool("NOKSLTKTRT", 1, 0, "If true, the weapon inspect feature is enabled.");
  DVARBOOL_killswitch_movement_anim_force_idle_fix_enabled = Dvar_RegisterBool("LMSQORSRKQ", 1, 0, "If true, maintains 'FORCE_IDLE' weapon animation when entering sprint.");
  DVARBOOL_killswitch_weapon_inspect_on_alt_switch_hold_enabled = Dvar_RegisterBool("NSKLLRMLTO", 1, 0, "If true, holding 'alt switch' button on a gamepad will initiate weapon inspect.  'Alt switch' now occurs when the button is _released_ before the weapon inspect timer elapses.");
  DVARBOOL_killswitch_weapon_inspect_on_jump = Dvar_RegisterBool("NRTQNPPRK", 0, 0, "If true, pressing 'JUMP' will initiate weapon inspect.");
  DVARBOOL_killswitch_weapon_inspect_dof_enabled = Dvar_RegisterBool("LPLLSKNLQT", 1, 0, "If true, DoF is enabled while performing a weapon inspect.");
  DVARBOOL_killswitch_aim_assist_mover_fix_enabled = Dvar_RegisterBool("MRLTPNQLN", 1, 0, "If true, updated aim assist logic while standing on moving platforms is active.");
  DVARBOOL_killswitch_mover_killcam_timespsace_fix_enabled = Dvar_RegisterBool("LQNPNLRMQO", 1, 0, "If true, while showing an attacker's killcam, antilag their origin to its predicted position while standing on a moving platform.");
  DVARBOOL_killswitch_edge_patch_proxy_fix_enabled = Dvar_RegisterBool("RKKONMRQP", 1, 0, "If true, fixes logic that calculates which edge patching physicsasset proxy to use.");
  DVARBOOL_killswitch_skydive_loadout_change_fix_enabled = Dvar_RegisterBool("PQPSNTPOP", 1, 0, "If true, view model is not broken if the loadout is changed during skydiving.");
  DVARBOOL_killswitch_weapon_post_ship_relative_anim_fix_enabled = Dvar_RegisterBool("LSTTOQOSLL", 1, 0, "If true, treats post-ship relative VM animations like other relative VM animations.");
  DVARBOOL_killswitch_footstep_player_moveblend_enabled = Dvar_RegisterBool("MPPNPQLQNT", 1, 0, "If true, enables smooth transitions between footstep movetype states.");
  DVARBOOL_killswitch_viewmodel_locomotion_state_reset_enabled = Dvar_RegisterBool("LSPTLTKQOQ", 1, 0, "If true, resets the viewmodel locomotion anim state machine upon rebuilding the player anim tree.");
  DVARBOOL_killswitch_drop_ammo_fix_enabled = Dvar_RegisterBool("MMLOOOTM", 1, 0, "If true, fixes bugs with dropped weapon ammo count when the dropped weapon has an underbarrel attachment that shares ammo with the base weapon.");
  DVARBOOL_killswitch_corpse_moving_platform_link_fix_enabled = Dvar_RegisterBool("LMRTMKQRQK", 1, 0, "If true, a better algorithm is used to link the corpse to the moving platform they are standing/dying on.");
  DVARBOOL_killswitch_instantaneous_velocity_fall_fix_enabled = Dvar_RegisterBool("MKNNSQLOOO", 1, 0, "If true, fixes bugs with 'instantaneous velocity' application while falling.");
  DVARBOOL_killswitch_mover_melee_fix_enabled = Dvar_RegisterBool("OMQLOROKSK", 1, 0, "If true, performs melee lock-on calculations in the moving platform timespace.");
  DVARBOOL_killswitch_suit_change_view_height_stuck_fix_enabled = Dvar_RegisterBool("LMKQSSOKPR", 1, 0, "If true, enables the fix which prevents the view height getting stuck at 0 if the suit is set during a view height transition/lerp.");
  DVARBOOL_killswitch_fix_dangling_client_anims_enabled = Dvar_RegisterBool("NPONKOQNST", 1, 0, "If true, cleans up a few client arms references on the client when destroying the DObj/animtree.");
  DVARBOOL_killswitch_mover_missile_impact_lod_fix_enabled = Dvar_RegisterBool("LPOPOQKPOT", 1, 0, "If true, forces the event entities associated with the missile impacts bolted on moving platforms to be high lod. This fixes the bug where the missile impacts on moving platforms are incorrectly culled out at the expense of extra bandwidth.");
  DVARBOOL_killswitch_mount_mover_fix_enabled = Dvar_RegisterBool("LQKSROQNLR", 1, 0, "If true, fixes weapon mount on moving platforms.");
  DVARBOOL_killswitch_skip_bounce_on_linked_agent_corpse_enabled = Dvar_RegisterBool("STQLSKPPL", 1, 0, "If true, will skip bounce check for agent corpses that are linked.");
  DVARBOOL_killswitch_show_full_magazine_suppress_ammo_add_enabled = Dvar_RegisterBool("NTPTLMRPKR", 1, 0, "If true, reload anims with a 'show_full_magazine' notetrack will suppress the animation effects of the Ammo Add time until the notetrack is hit.");
  DVARBOOL_killswitch_weapon_low_ammo_count_enabled = Dvar_RegisterBool("MQSRMTKKOS", 1, 0, "If true, enables the use of the 'lowAmmoCount' field in weapon and attachment assets.");
  DVARBOOL_vehiclestate_dont_interpolate_if_player_linked_at_all = Dvar_RegisterBool("OTSQOKQNO", 1, 0, "If true, rather than skipping vehicleState interpolation when player is linked to the vehicle, skip it if the player is linked to anything.");
  DVARFLT_corpse_moving_platform_link_fix_start_offset = Dvar_RegisterFloat("LNMMKSNLSS", 10.0, 0.0, 3.4028235e38, 0, "Indicates how many inches above the player origin the trace start point should be. This is needed because of the potential difference between the player clip and what ragdolls collide with.");
  DVARINT_dismemberment_corpse_mutilation_timeout_ms = Dvar_RegisterInt("LRQOPTKKQS", 1000, -1, 0x7FFFFFFF, 0, "Duration after character death that dismemberment is still permitted.  -1 to unconditionally permit corpse dismemberment.");
  DVARBOOL_dismemberment_bone_torso_remap_enabled = Dvar_RegisterBool("NPQRMKKSNM", 1, 0, "If true, dismemberment bone remapping logic is enabled.  This remaps dismemberment hits on some bones to other bones (e.g., upper right torso hit to right arm dismemberment).");
  DVARFLT_dismemberment_bone_torso_remap_max_dist = Dvar_RegisterFloat("LKMRKTPQQK", 7.0, 0.0, 3.4028235e38, 0, "Maximum distance from the specified offset point for a hit to use the destination bone.");
  DVARBOOL_riotshield_ignoreonstick_enabled = Dvar_RegisterBool("NOPTLSQPLM", 1, 0, "Killswitch for ignoring riot shield protection if a radius damage inflictor is linked to its victim. To make sticky grenades kill when stuck on riot shields.");
  DVARBOOL_riotshield_improvedexplosionprotection_enabled = Dvar_RegisterBool("MTRQMQTSMN", 1, 0, "Killswitch doing an extra angle check on shield protection for radius damage.");
  DVARFLT_riotshield_explosionprotection_downdist = Dvar_RegisterFloat("MRQLMLKSQS", 28.0, 0.0, 128.0, 0, "Angle from shield center to explosions is used to determine how much the shield protects the user. Do an additional angle check this many units down from the shield center, to better protect against the ground.");
  DVARBOOL_riotshield_fixstowedmodelinit = Dvar_RegisterBool("LNTPLQPNKP", 1, 4u, "Enables correctly initializing the stowed riot shield model, to set camo params and flag it as stowed.");
  DVARBOOL_jitter_mod_protection_enabled = Dvar_RegisterBool("NKKQOKMOTO", 1, 0, "Enables the code which validates the firing rate to prevent players from using jitter mods.");
  DVARBOOL_jitter_mod_rechamber_protection_enabled = Dvar_RegisterBool("NLRLLQMPKS", 1, 0, "Adds the cost of the rechamber time to the jitter mod timer which prevents players from exploiting the fire rates of weapons.");
  DVARBOOL_fall_damage_fix_enabled = Dvar_RegisterBool("MLKOOQSQOO", 1, 0, "Enables the fall damage fix for the new collision model.");
  DVARFLT_fall_damage_fix_min_fall_speed = Dvar_RegisterFloat("QOQSPMMOR", 300.0, 0.0, 3.4028235e38, 0, "If the fall speed is below this threshold, fall damage fix is not applied. Unit is in inches/sec");
  DVARFLT_fall_damage_fix_min_surface_dot = Dvar_RegisterFloat("MPTMLPPRST", 0.46000001, -1.0, 1.0, 0, "If the dot result between the world up and surface normal is greater than this value, the surface is considered walkable and the fall damage fix is applied.");
  DVARBOOL_killswitch_agent_radius_damage_fix_enabled = Dvar_RegisterBool("LPKQRONTRS", 1, 0, "Killswitch for fixing radius damage trace fails for agents.");
  DVARBOOL_perk_quickswap_primary_item_swap_enabled = Dvar_RegisterBool("LLQMPNLKPT", 1, 0, "Enables the quickswap perk speeding up primary drop and primary raise when switching to and from item weapons (e.g. killstreaks). Note that this only speeds up the primary weapon, NOT the raise and drop of the item weapon.");
  DVARBOOL_thermal_player_fade_distance_enable = Dvar_RegisterBool("NONQMTLNNN", 1, 0, "Enables the Thermal Player Fade Distance feature for thermal optics, controlled by start and end values in attachment GDTs.");
  DVARBOOL_command_buffering_enabled = Dvar_RegisterBool("LLMTSPSMPL", 1, 0, "Enable buffering of client commands for command burst reduction");
  DVARBOOL_command_extrapolation_enabled = Dvar_RegisterBool("NRMNQNKLPL", 1, 0, "Enable extrapolation of client commands for smooth client movement when the server is starving");
  DVARBOOL_command_prediction_enabled = Dvar_RegisterBool("NQQPLLKMQQ", 1, 0, "Enable prediction of client commands for smooth client movement when the server is starving and the extrapolation clamp is exceeded");
  DVARBOOL_command_extrapolation_spectate = Dvar_RegisterBool("MKLRSKPPNP", 1, 0, "Enable using extrapolated player state in spectate");
  DVARINT_command_burst_window_method = Dvar_RegisterInt("OLPOMROQKS", 3, 0, 3, 0, "Use buffering to mitigate bursting rather than extrapolation.");
  DVARINT_command_extrapolation_threshold = Dvar_RegisterInt("MRSPTLLKQL", 0, 0, 0x7FFFFFFF, 0, "The error threshold below which client extrapolation will not be performed on the server");
  DVARINT_command_burst_histogram_range = Dvar_RegisterInt("MQMOMNMTSS", 30000, 0, 0x7FFFFFFF, 0, "The range in milliseconds represented by the burst histogram");
  DVARINT_command_received_histogram_range = Dvar_RegisterInt("RNRQSOST", 500, 1, 0x7FFFFFFF, 0, "The range in milliseconds represented by the command processed histogram");
  DVARINT_command_queued_histogram_range = Dvar_RegisterInt("LPNNKOTKKN", 500, 1, 0x7FFFFFFF, 0, "The range in milliseconds represented by the command queued histogram");
  DVARBOOL_server_profile_log_enabled = Dvar_RegisterBool("NTOSSLKMMP", 0, 0, "Enable time series logging of server performance data");
  DVARBOOL_server_latency_profile_log_enabled = Dvar_RegisterBool("MMSRQNMQM", 0, 0, "Enable time series logging of server latency data");
  DVARBOOL_server_bandwidth_profile_log_enabled = Dvar_RegisterBool("NKMMPKRRSL", 0, 0, "Enable time series logging of server bandwidth data");
  DVARBOOL_server_snap_details_log_enabled = Dvar_RegisterBool("NQMNLRQQR", 0, 0, "Enable time series logging of server snapshot details");
  DVARINT_server_max_bandwidth_profiles_per_frame = Dvar_RegisterInt("MNSKLTTLOQ", 10, 0, 200, 0, "Max number of clients which snapshots will be profiled (to avoid saturation of tasks/buffers)");
  DVARINT_leaderboards_max_rank = Dvar_RegisterInt("RQRMQKTLN", 10000, 0, 0x7FFFFFFF, 0, "Specifies the highest rank value that will appear on any leaderboard");
  DVARBOOL_giving_mission_reward = Dvar_RegisterBool("LKPQLSPSRK", 0, 0, "Are we giving the mission reward");
  DVARINT_online_player_interval_before_removal_ms = Dvar_RegisterInt("MNOKQORLOK", 500, 0, 0x7FFFFFFF, 0, "The amount of time from when we notice the player has no sessions until they're removed from the container.");
  DVARBOOL_test_playlist_update = Dvar_RegisterBool("LPOTNTTQLQ", 0, 0, "Enable to pretend your playlists need an update.");
  DVARBOOL_team_consistency_fix = Dvar_RegisterBool("TLNSRKRQP", 1, 0, "Enable to enforce team consistency between game code and script.");
  DVARBOOL_strict_nat_warning_viewed = Dvar_RegisterBool("MMONQLOPSO", 0, 0, "Bool to track if the user has seen the strict NAT warning");
  DVARSTR_current_chat_restricted_message = Dvar_RegisterString("NONQLQLSLL", (const char *)&queryFormat.fmt + 3, 0, "Message for the chat restrictions");
  DVARBOOL_online_matchmaking_updatehostdocs_check = Dvar_RegisterBool("LLRLOTMLOT", 0, 0, "Bool to check what state comparisons we should do when updating the host docs.");
  DVARBOOL_online_matchmaking_gamestarted_updates_hostdocs = Dvar_RegisterBool("NNNNLMPNM", 0, 0, "Bool to check if a discrepancy in the has_game_started value should update the hostdoc.");
  DVARBOOL_online_matchmaking_ignore_team_check = Dvar_RegisterBool("LLSMQNPRSP", 0, 0, "Bool to cause the team balancing check t be ignored when deciding to start the match.");
  DVARBOOL_online_matchmaking_ignore_team_differential = Dvar_RegisterBool("TTNPLTSKM", 0, 0, "Ignores the team differential.");
  DVARBOOL_online_matchmaking_use_extended_team_differential = Dvar_RegisterBool("NNNOKNORPR", 1, 0, "Does more complex checking for team differential.");
  DVARBOOL_online_matchmaking_ignore_partition_value = Dvar_RegisterBool("NKTLMRMLLL", 0, 0, "Ignore the value returned from TeamBalance_CanPartitionIntoTeams when checking if teams are ready.");
  DVARBOOL_online_matchmaking_do_not_use_dlc_mming = Dvar_RegisterBool("LLOROQTRSO", 0, 0, "Should DLC matchmaking NOT BE used in this playlist.");
  DVARINT_online_matchmaking_max_retries_exceeding_team_differential = Dvar_RegisterInt("MPPSOMMMKQ", 3, 0, 0x7FFFFFFF, 0, "How many times do we kick the lobby out of starting when the team differential is excessive?");
  DVARINT_online_matchmaking_max_team_differential_retry_time_ms = Dvar_RegisterInt("LQMRTMQPQM", 10000, 0, 0x7FFFFFFF, 0, "Time in ms to wait after getting kicked out of starting the match due to excessive differential");
  DVARBOOL_online_dwnet_netadr_error = Dvar_RegisterBool("MPNLOLTTSL", 1, 0, "Turns on the dwCommonAddrToNetadr aggressive error detection");
  DVARBOOL_online_dwnet_print_addrs_immediately = Dvar_RegisterBool("PTPRTPTLP", 0, 0, "If true will print addrs immediately when requested, otherwise waits until end of frame");
  DVARBOOL_online_matchmaking_use_pruning = Dvar_RegisterBool("NTOQQNPKN", 1, 0, "Turns on the aggressive player pruning in the matchmaker.");
  DVARBOOL_online_matchmaking_using_metrics = Dvar_RegisterBool("MPSSMQNTKS", 1, 0, "Turns on game metrics.");
  DVARINT_online_dedi_manual_acquire_s = Dvar_RegisterInt("LMTRMMNRTL", 10, 0, 0x7FFFFFFF, 0, "Time between calls to attempt to allocate a dedicated server.");
  DVARINT_online_dedi_required_max_backoff = Dvar_RegisterInt("NTLPKLQRT", 5, 0, 0x7FFFFFFF, 0, "Max value of the backoff count.");
  DVARBOOL_online_matchmaking_disband_on_update_failure = Dvar_RegisterBool("MRKQMROOSQ", 1, 0, "Should the lobby be disbanded if the update task fails?");
  DVARBOOL_online_recent_players_ui_enabled = Dvar_RegisterBool("NORTQRPRPM", 1, 0, "Switch to enable recent players in the Social Menu UI.");
  DVARBOOL_online_regiments_ui_enabled = Dvar_RegisterBool("NOPQSROMKK", 1, 0, "Switch to enable regiments in the Social Menu UI.");
  DVARBOOL_online_matchmaking_only_join_existing_lobbies = Dvar_RegisterBool("LLKMRMNKMS", 0, 0, "Will only back-fill existing lobbies if true");
  DVARINT_online_data_fence_timeout_ms = Dvar_RegisterInt("NTSSLOPMQS", 120000, 0, 0x7FFFFFFF, 0, "Time to wait before the online data fence times out");
  DVARINT_online_ownership_status_fence_timeout_ms = Dvar_RegisterInt("QKSOMPPMO", 30000, 0, 0x7FFFFFFF, 0, "Time to wait before the ownership status fence times out");
  DVARBOOL_online_matchmaking_cross_play = Dvar_RegisterBool("MONMOQNKPP", 1, 0, "Enables cross play in matchmaking - needs to be set at startup time for dedicated server");
  DVARBOOL_online_privatematch_cross_play = Dvar_RegisterBool("OTNTKRTSL", 1, 0, "Enables cross play in private match");
  DVARBOOL_online_lan_cross_play = Dvar_RegisterBool("LTOQRQMMLQ", 1, 0, "Allow cross platform play in LAN games.");
  DVARBOOL_online_terminal_for_everyone = Dvar_RegisterBool("LNSSNOTRP", 1, 0, "Overide the Terminal entitlement check");
  DVARINT_online_store_timeout_ms = Dvar_RegisterInt("MRQSLSSTLP", 30000, 0, 0x7FFFFFFF, 0, "Time before failing the store fence when getting store related data.");
  DVARINT_online_catalog_timeout_ms = Dvar_RegisterInt("NLLTLPKNTP", 5000, 0, 0x7FFFFFFF, 0, "Time before allowing the catalog fence to pass due to timeout.");
  DVARBOOL_enable_cod_account = Dvar_RegisterBool("MNMLRKRSSL", 1, 0, "Allows CoD Account sign in / registration");
  DVARINT_online_zombies_xpscale = Dvar_RegisterInt("MSTMORLPKN", 1, 0, 0x7FFFFFFF, 0, "XP Scale for Zombies");
  DVARINT_online_zombie_weapon_xpscale = Dvar_RegisterInt("NNKLRNNSOP", 1, 0, 0x7FFFFFFF, 0, "XP Scale for Zombies Weapons");
  DVARINT_online_mp_xpscale = Dvar_RegisterInt("LKKNORQKTP", 1, 0, 0x7FFFFFFF, 0, "XP Scale for MP");
  DVARINT_online_mp_weapon_xpscale = Dvar_RegisterInt("PMORNPNTK", 1, 0, 0x7FFFFFFF, 0, "XP Scale for MP Weapons");
  DVARINT_online_mp_missionteam_xpscale = Dvar_RegisterInt("OMPLRMMKML", 1, 0, 0x7FFFFFFF, 0, "XP Scale for MP Mission Teams");
  DVARINT_online_double_keys = Dvar_RegisterInt("LPORTLTMNP", 0, 0, 0x7FFFFFFF, 0, "Are double keys turned on");
  DVARINT_online_party_double_xp = Dvar_RegisterInt("PNRLKKKOQ", 0, 0, 0x7FFFFFFF, 0, "Is Party Double XP turned on");
  DVARINT_online_mp_xpscale_ends_epoch_time = Dvar_RegisterInt("MSTMLNKSSO", 0, 0, 0x7FFFFFFF, 0, "UTC/Epoch time (seconds) that double XP event end");
  DVARINT_online_mp_weapon_xpscale_ends_epoch_time = Dvar_RegisterInt("MOMQQONMMT", 0, 0, 0x7FFFFFFF, 0, "UTC/Epoch time (seconds) that double weapon XP event end");
  DVARINT_online_double_keys_ends_epoch_time = Dvar_RegisterInt("OKPMLPMNM", 0, 0, 0x7FFFFFFF, 0, "UTC/Epoch time (seconds) that double keys event end");
  DVARINT_online_battle_xpscale = Dvar_RegisterInt("LTKKKPSRSK", 1, 0, 0x7FFFFFFF, 0, "Battlepass XP for MP");
  DVARINT_online_battle_xpscale_ends_epoch_time = Dvar_RegisterInt("RTQLQLKKR", 0, 0, 0x7FFFFFFF, 0, "UTC/Epoch time (seconds) that battle pass XP event ends");
  DVARINT_sirius_a = Dvar_RegisterInt("OMMRTLQSKS", 0, 0, 0x7FFFFFFF, 0, "Sirius a");
  DVARINT_sirius_b = Dvar_RegisterInt("LSPPSOKPLP", 0, 0, 0x7FFFFFFF, 0, "Sirius b");
  DVARINT_sirius_c = Dvar_RegisterInt("OKRSLSSNRS", 0, 0, 0x7FFFFFFF, 0, "Sirius c");
  DVARINT_sirius_d = Dvar_RegisterInt("LRKQLLMKSP", 0, 0, 0x7FFFFFFF, 0, "Sirius d");
  DVARINT_sirius_e = Dvar_RegisterInt("NTMSOPTTOS", 0, 0, 0x7FFFFFFF, 0, "Sirius e");
  DVARINT_sirius_f = Dvar_RegisterInt("LPPQNSNQPP", 0, 0, 0x7FFFFFFF, 0, "Sirius f");
  DVARINT_sirius_g = Dvar_RegisterInt("NRRSRNLPLS", 0, 0, 0x7FFFFFFF, 0, "Sirius g");
  DVARINT_sirius_h = Dvar_RegisterInt("MQKOOSMQQP", 0, 0, 0x7FFFFFFF, 0, "Sirius h");
  DVARINT_sirius_i = Dvar_RegisterInt("PNLSQNMNM", 0, 0, 0x7FFFFFFF, 0, "Sirius i");
  DVARINT_sirius_j = Dvar_RegisterInt("MOPORPOMNP", 0, 0, 0x7FFFFFFF, 0, "Sirius j");
  DVARINT_sirius_k = Dvar_RegisterInt("NSMLNOSKM", 0, 0, 0x7FFFFFFF, 0, "Sirius k");
  DVARINT_sirius_l = Dvar_RegisterInt("MNKPKMPSKP", 0, 0, 0x7FFFFFFF, 0, "Sirius l");
  DVARINT_sirius_m = Dvar_RegisterInt("MNMOKQNRM", 0, 0, 0x7FFFFFFF, 0, "Sirius m");
  DVARINT_sirius_n = Dvar_RegisterInt("MLPPMTRNRP", 0, 0, 0x7FFFFFFF, 0, "Sirius n");
  DVARINT_sirius_o = Dvar_RegisterInt("SMQRRTOM", 0, 0, 0x7FFFFFFF, 0, "Sirius o");
  DVARINT_sirius_p = Dvar_RegisterInt("SKRROLPKP", 0, 0, 0x7FFFFFFF, 0, "Sirius p");
  DVARBOOL_xp_dec_dc = Dvar_RegisterBool("NTTRLOPQKS", 1, 0, "This causes clients to disconnect themselves from servers if their xp decreases.");
  DVARBOOL_cg_mlg_gamebattles_enabled = Dvar_RegisterBool("LPRROTMQNK", 1, 0, "If the MLG GameBattles menu entry is present");
  DVARBOOL_cg_mlg_gamebattles_BNET_enabled = Dvar_RegisterBool("NMKLTMPKRM", 1, 0, "If the MLG GameBattles menu entry is present or not on BNET");
  DVARBOOL_cg_mlg_gamebattles_PSN_enabled = Dvar_RegisterBool("LPKLTLRSNQ", 1, 0, "If the MLG GameBattles menu entry is present or not on PSN");
  DVARBOOL_cg_mlg_gamebattles_XB3_enabled = Dvar_RegisterBool("MQOKLRKKNQ", 1, 0, "If the MLG GameBattles menu entry is present or not on XB3");
  DVARBOOL_online_matchmaking_user_dc_required_gate = Dvar_RegisterBool("MRMMQQPPML", 0, 0, "Indicates if the playlist gating should take whether any DCs are available or not.");
  DVARBOOL_online_xb1_session_join = Dvar_RegisterBool("NSMNKTSTRS", 1, 0, "Turns on or off the DONT_JOIN_SESSION flag from the join potential host code.");
  DVARINT_loot_crate_cost_overide = Dvar_RegisterInt("MTTKKKQRTS", 0, 0, 0x7FFFFFFF, 0, "Loot crate cost overide (Note: This is UI only, it does not make the crate cheaper on the backend)");
  DVARINT_online_license = Dvar_RegisterInt("LSLQSSPLO", 0, 0, 0x7FFFFFFF, 0, "License");
  DVARBOOL_online_qrm5tr_cipher_enabled = Dvar_RegisterBool("LLTNPLLKK", 1, 0, "Is the cipher available in the Quartermaster.");
  DVARBOOL_online_should_use_DC_required_lock = Dvar_RegisterBool("TNRTRQPPK", 0, 0, "Should the UI DC required lockout be used.");
  DVARBOOL_online_acquire_ds_during_intermission = Dvar_RegisterBool("NPTMMLSMLS", 1, 0, "Should a dedi be grabbed during intermission if we don't already have one.");
  DVARINT_online_store_second_pass = Dvar_RegisterInt("NTOKRSSRP", 0, 0, 0x7FFFFFFF, 0, "Should the store do a second pass and on what");
  DVARBOOL_online_matchmaking_use_map_pack_search = Dvar_RegisterBool("QSNLSNN", 0, 0, "Switches the client from just using the maps when calling startMatchmaking to using the map packs.");
  DVARBOOL_enable_loot_error_popups = Dvar_RegisterBool("LRLLRQOMPO", 1, 0, "Shows an error popup with loot ID when getting an item with no client-side match");
  DVARINT_online_mp_party_xpscale = Dvar_RegisterInt("NTLKOKLKRS", 1, 1, 0x7FFFFFFF, 0, "Party XP Scale");
  DVARINT_online_mp_party_weapon_xpscale = Dvar_RegisterInt("LNQMMNNPSR", 1, 1, 0x7FFFFFFF, 0, "Party Weapon XP Scale");
  DVARINT_online_mp_party_missionteam_xpscale = Dvar_RegisterInt("NTPRTMORKK", 1, 1, 0x7FFFFFFF, 0, "Party Mission XP Scale");
  DVARINT_online_zombie_party_xpscale = Dvar_RegisterInt("NSRPSMKOMP", 1, 1, 0x7FFFFFFF, 0, "Zombie Party XP Scale");
  DVARINT_online_zombie_party_weapon_xpscale = Dvar_RegisterInt("LTSPPRQSMO", 1, 1, 0x7FFFFFFF, 0, "Zombie Party Weapon XP Scale");
  DVARBOOL_online_invites_use_hsm = Dvar_RegisterBool("OLKSMMLNMM", 1, 0, "Use HSM for processing invites, if false, use original invite processing code.");
  DVARBOOL_online_invites_game_mode_check_first = Dvar_RegisterBool("LKONQSSNQM", 1, 0, "Do game mode check before session search to allow host to tell the client if a session search is needed.");
  DVARBOOL_online_invite_hsm_should_activate_initial_client_if_not_active = Dvar_RegisterBool("QQKKRRPL", 0, 0, "If this dvar is set, if during the actual joining process, a client is not active, we restart the join process.");
  DVARBOOL_online_invite_hsm_should_check_blocklist = Dvar_RegisterBool("LQQQNQSTKM", 1, 0, "If this dvar is set, the host being joined on will reject the joiner if the joiner is in the blocklist.");
  DVARINT_online_invite_hsm_frames_to_wait_before_clearing_suspend_resumed_flag = Dvar_RegisterInt("LKQMKNQKSO", 1, 1, 0x7FFFFFFF, 0, "The number of frames we have to wait after a suspend resume to clear the flag in the invite hsm");
  DVARBOOL_online_prevent_join_null_session_name = Dvar_RegisterBool("MLONNSQOPT", 1, 0, "Toggles joining MPSD sessions with no names, to prevent MS session join errors leading to ELVIRA");
  DVARSTR_online_featured_playlists = Dvar_RegisterString("LPSLMONOR", (const char *)&queryFormat.fmt + 3, 0, "Featured Playlists");
  DVARBOOL_online_should_upload_analytics_streamer_log_file = Dvar_RegisterBool("MNKQTOSNMN", 0, 0, "This dvar decides if the analytics log file should be uploaded");
  DVARBOOL_online_analytics_streamer_enabled = Dvar_RegisterBool("PLNPOMOPR", 0, 0, "This dvar decides if the analytics streamer is enabled");
  DVARINT_online_analytics_streamer_upload_min_delay_ms = Dvar_RegisterInt("NTPPTONKPN", 1000, 0, 0x7FFFFFFF, 0, "The number of milliseconds before making another request to upload the analytics buffer.");
  DVARINT_online_analytics_streamer_upload_failure_backoff_count_max = Dvar_RegisterInt("LMPQQPTRTQ", 10, 0, 0x7FFFFFFF, 0, "The maximum number of failure counts we count upto in case the call to upload the analytics buffer fails.");
  DVARBOOL_online_analytics_streamer_should_be_enabled_based_on_package = Dvar_RegisterBool("MKTLQRMTTS", 1, 0, "This dvar decides if the analytics streamer should be enabled based on package type");
  DVARBOOL_online_tournament_enabled = Dvar_RegisterBool("NLPONNQNRS", 1, 0, "Enable tournament mode");
  DVARINT_online_tournament_force_start_time = Dvar_RegisterInt("RQLRMRPTT", 60000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before allowing players to force start a match.");
  DVARBOOL_online_tournament_should_user_random_maps = Dvar_RegisterBool("MPRSNKTSQK", 1, 0, "Enable this to play in random maps for tournaments");
  DVARSTR_online_tournament_round_0_mapnames = Dvar_RegisterString("MMPRPLKNLR", "mp_m_king,mp_m_stack,mp_m_pine", 0, "List of mapnames for tournament round 0");
  DVARSTR_online_tournament_round_1_mapnames = Dvar_RegisterString("SNLKKOSSK", "mp_m_king,mp_m_stack,mp_m_pine", 0, "List of mapnames for tournament round 1");
  DVARSTR_online_tournament_round_2_mapnames = Dvar_RegisterString("MMRMQQLSRT", "mp_m_king,mp_m_stack,mp_m_pine", 0, "List of mapnames for tournament round 2");
  DVARSTR_online_tournament_round_3_mapnames = Dvar_RegisterString("LLSSNNLTQM", "mp_m_king,mp_m_stack,mp_m_pine", 0, "List of mapnames for tournament round 3");
  DVARINT_online_tournament_min_bracket_team_count = Dvar_RegisterInt("OLQRKSROPM", 8, 0, 0x7FFFFFFF, 0, "The minimum number of teams to show in the frontend bracket.");
  DVARBOOL_online_tournament_ignore_lobby_start = Dvar_RegisterBool("LLQKPLQQLN", 0, 0, "This will block the handling of msgJoinTournament.  This is mostly for UI testing purposes.");
  DVARBOOL_online_tournament_sim_mode_enabled = Dvar_RegisterBool("LPPPMNLOLS", 0, 0, "This will enable tournaments to produce fake bracket and event simulations.");
  DVARINT_online_tournament_sim_mode_local_player_index = Dvar_RegisterInt("LNKMKTTONP", 0, 0, 0x7FFFFFFF, 0, "This value specific which slot in the participants list we want to put our local player.");
  DVARBOOL_online_tournament_screen_debug_enabled = Dvar_RegisterBool("NOKQOTPMTL", 1, 0, "This will show the debug info for the tournament on the screen.");
  DVARINT_online_tournament_definition_partysize = Dvar_RegisterInt("MKQNNPTORS", 2, 1, 5, 0, "The party size permitted in the upcoming tournament.");
  DVARINT_online_tournament_definition_teamcount = Dvar_RegisterInt("NKSPSORQNL", 8, 2, 16, 0, "The number of teams in the upcoming tournament.");
  DVARINT_online_tournament_definition_min_teams = Dvar_RegisterInt("MRRTMQRKNK", 2, 1, 16, 0, "The minimum number of teams to issue a bracket.");
  DVARINT_online_tournament_playlist_id = Dvar_RegisterInt("NQRQOTSTNL", 12, 0, 0x7FFFFFFF, 0, "The playlist id tournament should use");
  DVARINT_online_tournament_matchmaking_game_type = Dvar_RegisterInt("MLONLSSQRR", 11, 0, 0x7FFFFFFF, 0, "The tournament matchmaking game type");
  DVARINT_online_tournament_time = Dvar_RegisterInt("OPRQOOOLO", 1, 0, 0x7FFFFFFF, 0, "The UTC timestamp of the next tournament.");
  DVARINT_online_tournament_time_interval = Dvar_RegisterInt("TSQOLLPK", 300, 0, 0x7FFFFFFF, 0, "The amount of time between tournaments.");
  DVARINT_online_tournament_match_status_delay = Dvar_RegisterInt("MMMLNLTPPN", 15000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before we can send another match status update.");
  DVARINT_online_tournament_lobby_connect_timeout = Dvar_RegisterInt("MNKRRTLPOK", 120000, 0, 0x7FFFFFFF, 0, "The number of milliseconds to wait before we give up on connecting to a lobby.");
  DVARINT_online_tournament_early_registration_limit = Dvar_RegisterInt("PQNSTTTTM", 7200, 0, 0x7FFFFFFF, 0, "The maximum time in seconds that you can register in advance for a tournament");
  DVARINT_online_tournament_registration_cutoff_time = Dvar_RegisterInt("MMMMNQKTQM", 30, 0, 0x7FFFFFFF, 0, "The time in seconds before the start of the tournament that we disallow registration");
  DVARINT_online_tournament_reminder_toast_notify_time = Dvar_RegisterInt("NPPRRNTROT", 180, 0, 0x7FFFFFFF, 0, "The time in seconds before the start of the tournament at which we send the reminder toast notification");
  DVARINT_online_tournament_callback_toast_notify_time = Dvar_RegisterInt("LMMRSLRPNS", 5, 0, 0x7FFFFFFF, 0, "The time in seconds before the start of the tournament at which we send the toast notification callback to join the tournament");
  DVARINT_online_tournament_callback_toast_notify_duration = Dvar_RegisterInt("NLKNTKRQLR", 30, 0, 0x7FFFFFFF, 0, "The time in seconds that the toast notification callback is available for");
  DVARINT_online_tournament_participation_rate = Dvar_RegisterInt("MPMPKMKLLP", 100, 0, 0x7FFFFFFF, 0, "The percent of online game users to expect in tournaments");
  DVARINT_online_tournament_invite_join_timeout_time_ms = Dvar_RegisterInt("MPOKKPNKKO", 45000, 0, 0x7FFFFFFF, 0, "The amount of milliseconds to wait before giving up on the invite hsm tournament joins");
  DVARINT_online_tournament_invite_join_refresh_time_to_wait_for_tournament_state = Dvar_RegisterInt("LQSMRRQMMT", 5000, 0, 0x7FFFFFFF, 0, "The amount of milliseconds to wait before giving up on the invite hsm tournament joins");
  DVARBOOL_online_tournament_rejoin_enabled = Dvar_RegisterBool("OMKQOPLSK", 0, 0, "This is a kill switch that we can use to disable rejoins.");
  DVARBOOL_online_tournament_reminders_enabled = Dvar_RegisterBool("MOQMSLQMQS", 0, 0, "This is a kill switch that we can use to disable reminders.");
  DVARBOOL_online_tournament_cleanup_leave_calls_enabled = Dvar_RegisterBool("MLSOSOTTRL", 0, 0, "This is a kill switch that we can use to enable the safety leave all tournament calls.");
  DVARBOOL_online_tournament_com_error_on_expire_disabled = Dvar_RegisterBool("MKTROOORM", 0, 0, "This is a kill switch that we can use to disable the com_errors on match expiration.");
  DVARINT_online_tournament_state_update_count_to_start_checking_party_togetherness = Dvar_RegisterInt("SQMNMOSN", 1, 0, 0x7FFFFFFF, 0, "The number of tournament state updates before we begin to check to make sure all party members are present.");
  DVARINT_online_tournament_quit_ban_scale_pct = Dvar_RegisterInt("TMNTQMNQN", 100, 0, 0x7FFFFFFF, 0, "This scales the tournament ban penalties (as a percent).  0 will disable the ban system.");
  DVARBOOL_online_tournament_wait_for_pending_tasks_before_dedi_shutdown_disabled = Dvar_RegisterBool("MORMLTMNNQ", 0, 0, "This is a kill switch that we can use to disable waiting for pending tasks to clear before allowing the dedi to shut down.");
  DVARINT_online_tournament_max_rate_limit = Dvar_RegisterInt("LSLROSMOSO", 1000, 0, 0x7FFFFFFF, 0, "The number of requests per minute dw can handle at peak throughput");
  DVARINT_online_tournament_time_to_reach_rate_limit = Dvar_RegisterInt("NKQNPSLPSN", 300, 0, 0x7FFFFFFF, 0, "The time (in sec) to reach the max dw throughput");
  DVARINT_online_tournament_fake_population = Dvar_RegisterInt("LROPOLSLNK", 100, 0, 0x7FFFFFFF, 0, "The number of players we believe are playing the game for tournament staggering");
  DVARBOOL_online_communication_telemetry_enabled = Dvar_RegisterBool("LMNQLPNNPL", 1, 0, "Enable the telemetry data to be sent about communication for joins");
  DVARSTR_experiment_name = Dvar_RegisterString("MQQPLSSSLQ", (const char *)&queryFormat.fmt + 3, 0, "Experiement name used to track online server experiments. Written to telemetry payloads");
  DVARBOOL_online_matchdata_enabled = Dvar_RegisterBool("TLRPKRKMS", 1, 0, "Enable the matchdata reads and writes");
  DVARBOOL_online_mp_clientmatchdata_enabled = Dvar_RegisterBool("MTKSQRQLKN", 1, 0, "Enable the mp clientmatchdata reads and writes");
  DVARBOOL_online_breadcrumbing_enabled = Dvar_RegisterBool("OLKQSLNLPM", 1, 0, "Enable the logging of player movement throughout a match");
  DVARFLT_online_br_breadcrumbing_frequency = Dvar_RegisterFloat("MQPMTNTSLO", 4.0, 4.0, 4.0, 0, "The frequency with which the player's movement is logged throughout a match in br");
  DVARFLT_online_mp_breadcrumbing_frequency = Dvar_RegisterFloat("NSMKNLRLON", 2.0, 2.0, 2.0, 0, "The frequency with which the player's movement is logged throughout a match in mp");
  DVARBOOL_online_matchmaking_reduce_print_spam = Dvar_RegisterBool("RRMOMQOSO", 1, 0, "Reduce the number of matchmaking prints for performance reasons");
  DVARBOOL_online_party_reduce_print_spam = Dvar_RegisterBool("OKKNSTRNRS", 1, 0, "Reduce the number of matchmaking prints for performance reasons");
  DVARBOOL_online_party_print_ping = Dvar_RegisterBool("LPOTNQLLLS", 0, 0, "Prints ping based on party state acks");
  DVARINT_taskbreaker_time_min = Dvar_RegisterInt("MRNNPTTMNT", 200, 1, 30000, 0, "Minimum amount of time (in milliseconds) to delay before completing a Breaker Task");
  DVARINT_taskbreaker_time_max = Dvar_RegisterInt("NSOQNLOROP", 1000, 1, 30000, 0, "Minimum amount of time (in milliseconds) to delay before completing a Breaker Task");
  DVARFLT_taskbreaker_break_percentage = Dvar_RegisterFloat("OTRMORTOR", 0.2, 0.0, 1.0, 0, "Chance ( 0.0 to 1.0 ) that a task will break when that system is registered to TaskBreaker");
  DVARBOOL_online_should_check_platforms_can_play_gametype_for_party_join = Dvar_RegisterBool("LRNKMRPLOR", 0, 0, "This is a bool that controls if we should check if platfroms can play the current game type");
  DVARBOOL_online_should_block_invite_joins_if_searching_invite_join_disabled_playlists = Dvar_RegisterBool("LPRPSSRRMP", 1, 0, "This is a bool that controls if we should block invites and joins if the user is searching for playlists that has inivites joins disabled flag set");
  DVARBOOL_online_invite_join_should_validate_controller_index_for_atomic_join_fence = Dvar_RegisterBool("MLSLRQNRMN", 1, 0, "This is a bool that controls if we should check for invalid controller index while doing the atomic join fence");
  DVARBOOL_online_platform_sessions_manager_enabled = Dvar_RegisterBool("OKPNQNRPPO", 1, 0, "This dvar turns on the code to route the session events through the new PartyPlatformSessionsManager");
  DVARBOOL_online_platform_sessions_manager_game_lobby_enabled = Dvar_RegisterBool("LQQNSSQQPO", 1, 0, "This dvar turns on the code to have the gamelobby session active for the PartyPlatformSessionsManager");
  DVARBOOL_online_platform_sessions_manager_create_game_lobby_only_if_match_ready_enabled = Dvar_RegisterBool("MNOSQMSQMQ", 0, 0, "This dvar turns on the code to have the gamelobby session active for the PartyPlatformSessionsManager");
  DVARBOOL_online_platform_sessions_manager_should_com_error_on_failure = Dvar_RegisterBool("TSLQQPO", 1, 0, "This dvar turns on the code to route the session events through the new PartyPlatformSessionsManager");
  DVARBOOL_online_platform_sessions_manager_should_handle_first_party_session_removals = Dvar_RegisterBool("LRNLLMKPOS", 1, 0, "This dvar turns on the code to tell the HSMs to leave the session if the first party removed the session");
  DVARBOOL_online_dedi_platform_sessions_manager_enabled = Dvar_RegisterBool("MTKLQKONKP", 1, 0, "This dvar turns on the code to route the session events from the dedi");
  DVARINT_online_dedi_platform_sessions_call_throttle_time_seconds = Dvar_RegisterInt("LTRRORKNSN", 5, 0, 0x7FFFFFFF, 0, "Time between platform session dedi calls");
  DVARINT_online_dedi_platform_session_call_max_delay = Dvar_RegisterInt("SQOOMOOSS", 150, 1, 10000, 0, "The maximum delay in seconds to wait, before making a platform session call from the dedi.");
  DVARINT_online_dedi_platform_session_min_users_required = Dvar_RegisterInt("NSOMQOMQKQ", 1, 0, 200, 0, "The minimum number of xbox users required for the dedi sessions to start.");
  DVARBOOL_online_dedi_platform_session_should_count_xb3_users_only_for_min_count = Dvar_RegisterBool("MSROPPSTLT", 1, 0, "The minimum number of xbox users required for the dedi sessions to start.");
  DVARINT_online_dedi_platform_sessions_frame_status_print_wait_time_ms = Dvar_RegisterInt("PRLSMSNPP", 30000, 0, 0x7FFFFFFF, 0, "Time to wait before printing the frame status of the platform sessions dedi");
  DVARBOOL_online_dedi_platform_sessions_manager_debug_prints_enabled = Dvar_RegisterBool("LKOTMOOMNS", 1, 0, "This dvar turns on debug printing for the platform session code on dedis");
  DVARSTR_xbox_live_dev_sandbox_name = Dvar_RegisterString("STTMRSPOR", "ACNA.9", 0, "Name of the DEV sandbox.");
  DVARSTR_xbox_live_cert_sandbox_name = Dvar_RegisterString("OKMSRQPMSK", "ACNA.99", 0, "Name of the CERT sandbox.");
  DVARSTR_xbox_live_prod_sandbox_name = Dvar_RegisterString("RSTQPKROL", "RETAIL", 0, "Name of the PROD sandbox.");
  DVARBOOL_online_invite_hsm_should_clear_session_info_in_decline_invitation = Dvar_RegisterBool("LRMMRSOKOK", 0, 0, "This bool indicates we should clear the session info after the decline invitation gets called after a com error.");
  DVARINT_invite_hsm_gamemode_check_retries_max_count = Dvar_RegisterInt("MNSPKRTKOK", 2, 1, 10, 0, "Number of times the invite system should try to fetch data and perform gamemode check");
  DVARINT_invite_hsm_matchmaker_session_attempts_max_count = Dvar_RegisterInt("MLOMQTONKQ", 3, 1, 10, 0, "Number of times the invite system should try to fetch data and perform gamemode check");
  DVARBOOL_online_parties_in_main_menu_feature_enabled = Dvar_RegisterBool("MPNKQNOKKS", 1, 0, "This bool indicates if there should be parties in the main menu");
  DVARBOOL_online_invite_hsm_should_show_error_code_in_toast = Dvar_RegisterBool("NQRONQMKPM", 1, 0, "This bool indicates we should show the error code in the toast notification when an invite join fails");
  DVARBOOL_online_invite_hsm_should_report_failure_cleanup_info = Dvar_RegisterBool("OKNTMLQQTL", 1, 0, "This bool indicates we should report the invite failed details");
  DVARBOOL_online_invite_hsm_should_cancel_on_handle_party_join_aborts = Dvar_RegisterBool("MMKMTTSRPL", 1, 0, "This bool indicates we should report the invite failed details");
  DVARBOOL_online_should_handle_matchmaker_join_lobby_while_invite_joining_in_starting_state = Dvar_RegisterBool("MQSSNQOQSL", 1, 0, "This bool controls whether the code should allow users to join lobby if they are in starting matchmaking state");
  DVARINT_invite_hsm_permissions_check_retries_max_count = Dvar_RegisterInt("MKSLNNMRN", 3, 1, 10, 0, "Number of times the invite system should try to verify the permission checks");
  DVARBOOL_online_challenge_upload_enabled = Dvar_RegisterBool("LKMQKMMKTQ", 1, 0, "Enables achievement engine events.");
  DVARBOOL_online_challenge_upload_kill = Dvar_RegisterBool("MKKMMNSPL", 1, 0, "Enables achievement engine kill events.");
  DVARBOOL_online_challenge_upload_death = Dvar_RegisterBool("MQRSMRSSL", 1, 0, "Enables achievement engine death events.");
  DVARBOOL_online_challenge_upload_assist = Dvar_RegisterBool("OKPMSNRNOM", 1, 0, "Enables achievement engine assist events.");
  DVARBOOL_online_challenge_upload_mp_addxp = Dvar_RegisterBool("MTRMTOQPSM", 1, 0, "Enables achievement engine addxp events.");
  DVARBOOL_online_challenge_upload_start_end_match = Dvar_RegisterBool("OPLQKTKTN", 1, 0, "Enables achievement engine start/end events.");
  DVARBOOL_online_challenge_upload_end_trial = Dvar_RegisterBool("MTQMRTSSQR", 1, 0, "Enables achievement engine end trial events.");
  DVARBOOL_online_challenge_upload_login = Dvar_RegisterBool("LSSKMRMMSM", 1, 0, "Enables achievement engine login events.");
  DVARBOOL_online_challenge_upload_killstreak_end = Dvar_RegisterBool("LLQPLRRPKT", 1, 0, "Enables achievement engine killstreak events.");
  DVARBOOL_online_challenge_upload_field_end = Dvar_RegisterBool("MMTQOLLMPL", 1, 0, "Enables achievement engine field upgrade events.");
  DVARBOOL_online_challenge_upload_capture = Dvar_RegisterBool("NQKTNQKNQT", 1, 0, "Enables achievement engine capture events.");
  DVARBOOL_online_challenge_upload_defuse = Dvar_RegisterBool("MRNQONRPST", 1, 0, "Enables achievement engine defuse events.");
  DVARBOOL_online_challenge_upload_plant = Dvar_RegisterBool("NOKMOTTMKQ", 1, 0, "Enables achievement engine plant events.");
  DVARBOOL_online_challenge_upload_stun = Dvar_RegisterBool("NLRLNKNTTN", 1, 0, "Enables achievement engine stun events.");
  DVARBOOL_online_challenge_upload_stim = Dvar_RegisterBool("LROPNMSKKQ", 1, 0, "Enables achievement engine stim events.");
  DVARBOOL_online_challenge_upload_hack = Dvar_RegisterBool("LRRLSLKRLM", 1, 0, "Enables achievement engine hack events.");
  DVARBOOL_online_challenge_upload_sp_mission_complete = Dvar_RegisterBool("LLSQLQRSKN", 1, 0, "Enables achievement engine sp mission complete events.");
  DVARBOOL_online_challenge_upload_cp_complete = Dvar_RegisterBool("NOLSRSLTMO", 1, 0, "Enables achievement engine cp complete events.");
  DVARBOOL_online_challenge_upload_tokens = Dvar_RegisterBool("RSKQOMMKL", 1, 0, "Enables achievement engine token events.");
  DVARBOOL_online_challenge_upload_spec_ops_end = Dvar_RegisterBool("MRTSTTKTNL", 0, 0, "Enables achievement engine spec ops completion events.");
  DVARBOOL_online_challenge_upload_contract_start = Dvar_RegisterBool("NMOORTRLTQ", 1, 0, "Enables achievement engine contract start events.");
  DVARBOOL_online_challenge_upload_contract_end = Dvar_RegisterBool("MOKLPMNTTP", 1, 0, "Enables achievement engine contract end events.");
  DVARBOOL_online_challenge_upload_revive = Dvar_RegisterBool("TMMTSKRTK", 1, 0, "Enables achievement engine revive events.");
  DVARBOOL_online_challenge_upload_buy_item = Dvar_RegisterBool("MKSOPNRQMT", 1, 0, "Enables achievement engine buy item events.");
  DVARBOOL_online_challenge_upload_pickup = Dvar_RegisterBool("ONKNQNTKP", 1, 0, "Enables achievement engine pickup events.");
  DVARBOOL_online_challenge_upload_use_item = Dvar_RegisterBool("LSNPMKPKQS", 1, 0, "Enables achievement engine use item events.");
  DVARBOOL_online_challenge_upload_loadout = Dvar_RegisterBool("MSQRRMMP", 1, 0, "Enables achievement engine loadout events.");
  DVARBOOL_online_challenge_upload_ping = Dvar_RegisterBool("MSOTKNRNQP", 1, 0, "Enables achievement engine ping events.");
  DVARBOOL_online_challenge_upload_collect_item = Dvar_RegisterBool("PONKOMROP", 1, 0, "Enables achievement engine collect item events.");
  DVARBOOL_online_challenge_upload_gulag_end_match = Dvar_RegisterBool("NLNNKKPNRN", 1, 0, "Enables achievement engine gulag end match events.");
  DVARBOOL_online_challenge_upload_match_placement = Dvar_RegisterBool("MQLMQPTQLQ", 1, 0, "Enables achievement engine match placement events.");
  DVARBOOL_online_challenge_upload_driving = Dvar_RegisterBool("OLORSSOOLQ", 1, 0, "Enables achievement engine driving events.");
  DVARBOOL_online_challenge_upload_alive_in_gas = Dvar_RegisterBool("NPSTOSTKNM", 1, 0, "Enables achievement engine alive in gas events.");
  DVARBOOL_online_challenge_upload_alive_not_downed = Dvar_RegisterBool("LNKMKROKPQ", 1, 0, "Enables achievement engine alive not downed events.");
  DVARBOOL_online_challenge_upload_br_tutorial_complete = Dvar_RegisterBool("OMNQOQNPKO", 1, 0, "Enables achievement engine be tutorial events.");
  DVARBOOL_online_challenge_upload_spray = Dvar_RegisterBool("LLMSMQONTQ", 1, 0, "Enables achievement engine spray events.");
  DVARBOOL_online_challenge_upload_games_of_summer = Dvar_RegisterBool("MKRSNLSPQO", 1, 0, "Enables achievement engine for Games of Summer.");
  DVARBOOL_online_challenge_games_of_summer_parse_user_state = Dvar_RegisterBool("LSNRTOTSQS", 1, 0, "Killswitch on the user state reconcile for the GoS.");
  DVARBOOL_online_challenge_upload_killstreak_available = Dvar_RegisterBool("LLMOMMPSON", 1, 0, "Enables achievement engine killstreak available events.");
  DVARINT_online_challenge_cache_flush_time = Dvar_RegisterInt("LRMPRSSSOS", 30000, 0, 0x7FFFFFFF, 0, "Time between cache flush times.");
  DVARFLT_online_challenge_ae_client_flush_time = Dvar_RegisterFloat("TRQKTNMPO", 2.5, 0.0, 10000.0, 0, "Time between ae client cache flush times.");
  DVARINT_online_challenge_cache_driving_flush_time = Dvar_RegisterInt("LQTMKTLRSQ", 10000, 0, 0x7FFFFFFF, 0, "Time between driving event cache flush times.");
  DVARINT_online_challenge_cache_alive_in_gas_flush_time = Dvar_RegisterInt("LRNNOTSLLK", 5000, 0, 0x7FFFFFFF, 0, "Time between alive in gas event cache flush times.");
  DVARINT_online_challenge_cache_alive_not_downed_flush_time = Dvar_RegisterInt("RKSMPSPKM", 10000, 0, 0x7FFFFFFF, 0, "Time between alive not downed event cache flush times.");
  DVARINT_online_challenge_cache_pickup_flush_time = Dvar_RegisterInt("NPRQKTLPMN", 12500, 0, 0x7FFFFFFF, 0, "Time between pickup event cache flush times.");
  DVARBOOL_online_challenge_rest_request_enabled = Dvar_RegisterBool("QMKLPRKSL", 1, 0, "Sets rest request enabled state.");
  DVARINT_online_challenge_jitter_time = Dvar_RegisterInt("NMMMQSSNMN", 300, 0, 0x7FFFFFFF, 0, "Jitter time added to daily events.");
  DVARINT_online_challenge_min_get_state_time = Dvar_RegisterInt("MRTOMNSMO", 600000, 0, 0x7FFFFFFF, 0, "Minimum time between getting challenge state.");
  DVARBOOL_online_challenge_update_player_data_once_when_done = Dvar_RegisterBool("LSPSPQQOTT", 0, 0, "Causes us to only update player data once when we are done fetching challenges.");
  DVARINT_online_challenge_day_override = Dvar_RegisterInt("NTMKRLPSSM", 999999, 0, 0x7FFFFFFF, 0, "(DEBUG) Change this to a valid day to override daily challenges.");
  DVARINT_online_challenge_gamemode_override = Dvar_RegisterInt("SNRLQOOKN", 0, 0, 0x7FFFFFFF, 0, "(DEBUG) Change this to override the gamemode for ae events.");
  DVARBOOL_online_challenge_upload_season_update = Dvar_RegisterBool("OMSQTMMTKM", 1, 0, "Enables achievement engine season update events.");
  DVARBOOL_online_challenge_upload_happy_hour = Dvar_RegisterBool("LSOTPRNTO", 1, 0, "Enables achievement engine happy hour event.");
  DVARINT_online_challenge_season_and_week = Dvar_RegisterInt("LSQRKOSLTP", 0, 0, 0x7FFFFFFF, 0, "Dvar that holds the current season and week i.e. 3002 is Season 3 Week 2");
  DVARINT_online_challenge_server_fetch_delay = Dvar_RegisterInt("LMQNLTLSML", 10000, 0, 0x7FFFFFFF, 0, "Amount of time in ms to wait until fetching states for a client after registering");
  DVARINT_online_challenge_special_event_day = Dvar_RegisterInt("LKPOORNNOO", 0, 0, 0x7FFFFFFF, 0, "Special Event day number. 0 means inactive.");
  DVARFLT_online_challenge_daily_reset_time = Dvar_RegisterFloat("MMLQOSOMTQ", 8.0, 0.0, 23.99, 0, "UTC time at which daily challenges reset. Ex. 12:30pm == 12.50f");
  DVARINT_online_season_ends_epoch_time = Dvar_RegisterInt("LLTMKKPKMR", 1577836800, 0, 0x7FFFFFFF, 0, "UTC/Epoch time (seconds) that season will end");
  DVARBOOL_online_challenge_quest_auto_activate = Dvar_RegisterBool("LTLLOMMMPN", 1, 0, "Enables achievement engine quest system to always have a mission active.");
  DVARBOOL_online_challenge_quest_activate_operators = Dvar_RegisterBool("MSKSMNPTKL", 1, 0, "Enables achievement engine quest system to activate operators.");
  DVARBOOL_online_challenge_quest_activate_loot = Dvar_RegisterBool("MNPPOMRMSM", 1, 0, "Enables achievement engine quest system to activate challenges acquired via loot.");
  DVARBOOL_private_matchmaking_enabled = Dvar_RegisterBool("LMKKTLPSRN", 1, 0, "Enable private matchmaking for DS's");
  DVARBOOL_online_crossplay_friends_enabled = Dvar_RegisterBool("SMKRLSNRT", 1, 0, "Switch to enable crossplay friends.");
  DVARINT_online_crossplay_fail_backoff_threshold = Dvar_RegisterInt("NRPSRTOPSL", 5000, 0, 0x7FFFFFFF, 0, "Failure backoff threshold for crossplay friends fetches");
  DVARINT_online_crossplay_max_fail_attempts = Dvar_RegisterInt("LRQOLTSSS", 4, 0, 0x7FFFFFFF, 0, "Failure backoff threshold for crossplay friends fetches");
  DVARBOOL_online_platform_friends_use_dw_presence = Dvar_RegisterBool("MLPPTKOTLK", 1, 0, "Switch to enable using the DW presence for platform friends instead of platform presence.");
  DVARBOOL_online_should_show_toast_for_disabling_crossplay_with_other_platform_users_in_party = Dvar_RegisterBool("OQLTNPMQR", 1, 0, "When the host disables crossplay when there are users from other platforms in the party, this dvar controls if we should show a toast warning.");
  DVARINT_online_party_host_crossplay_change_toast_display_mode = Dvar_RegisterInt("MNPOSMMMSN", 21, 0, 0x7FFFFFFF, 0, "This dvar controls what toasts and when they should be shown when the host of a party changes their crossplay settings.");
  DVARINT_online_party_host_crossplay_change_toast_wait_time_ms = Dvar_RegisterInt("NKQSMRSNNR", 3000, 0, 0x7FFFFFFF, 0, "Millisconds to wait before showing the toast on the client that the host has changed the crossplay settings.");
  DVARINT_dw_invitation_expiration_time_secs = Dvar_RegisterInt("NSKMOMQSTT", 300, 1, 10000, 0, "Number of seconds after which the DW invites expires");
  DVARINT_online_chat_send_message_throttle_count = Dvar_RegisterInt("MTRNPQQQMR", 10, 1, 50, 0, "The max number of messages a player can send within the given time frame of online_chat_send_message_throttle_rate");
  DVARINT_online_chat_send_message_throttle_rate = Dvar_RegisterInt("NQPPKLOQLO", 7000, 1, 0x7FFFFFFF, 0, "Milliseconds to determine if a player should be throttled or not based on online_chat_send_message_throttle_count messages sent");
  DVARBOOL_online_should_fetch_join_info_from_user = Dvar_RegisterBool("MKLNSNSQSK", 1, 0, "Switch to decide if the join info should be fetched from the user or use the local presence cache");
  DVARINT_online_join_info_request_timeout_time = Dvar_RegisterInt("LMPORKRLSQ", 10000, 1, 100000, 0, "Number of seconds after which the request for the join info expires");
  DVARBOOL_online_should_force_skip_session_search_on_initial_join_attempt = Dvar_RegisterBool("MPTTNLRPOS", 0, 0, "Will force the invitation hsm to try the party atomic join even though the join info says that the user is in a DW lobby.");
  DVARBOOL_netstats_dummy_tracker_data = Dvar_RegisterBool("LMLPRQOMKS", 0, 0, "Turn on dummy random data generation for the netstats tracker");
  DVARINT_sp_disconnected_from_live_grace_period_ms = Dvar_RegisterInt("LNNKPKSLPO", 10000, 0, 0x7FFFFFFF, 0, "Amount of time to wait for reconnect to live before informing player they are offline and can't make online progress, 0 disables.");
  DVARINT_online_platform_session_call_throttle_time = Dvar_RegisterInt("OMRTLLLTRL", 5, 1, 100000, 0, "Number of seconds to wait before making platform session calls after the max number of calls has been exceeded");
  DVARINT_online_platform_session_max_calls_within_throttle_time = Dvar_RegisterInt("NTOOLLKSKT", 2, 1, 100, 0, "Number of tasks that can have started within the throttle time");
  DVARINT_online_platform_session_call_max_delay = Dvar_RegisterInt("LQMTLNQSLL", 150, 1, 10000, 0, "The maximum delay in seconds to wait, before making a platform session call.");
  DVARINT_online_platform_session_max_wait_time_before_sending_error_ms = Dvar_RegisterInt("LMOSKRTPSL", 60000, 1, 0x7FFFFFFF, 0, "The maximum time in milliseconds to wait after party modification, before reporting an error");
  DVARBOOL_online_platform_session_should_remove_user_on_signout = Dvar_RegisterBool("LOQSMNQPOQ", 1, 0, "This is a fix to remove a user that has been signed out of xbox to be also remove the session.");
  DVARINT_online_storage_task_interval = Dvar_RegisterInt("NOTSTROLOM", 1000, 0, 0x7FFFFFFF, 0, "The smallest time interval in milliseconds of time between consecutive storage tasks");
  DVARINT_online_time_to_wait_before_inviting_the_same_user_again = Dvar_RegisterInt("LQQNNLOTPT", 5000, 1, 100000, 0, "Number of milliseconds to wait before we can invite a particular user");
  DVARBOOL_print_on_userid_map_fail = Dvar_RegisterBool("MKKPONRQR", 0, 0, "Turn this on to get user id mapping mismatches to print an error.");
  DVARBOOL_assert_on_userid_map_fail = Dvar_RegisterBool("LQLNOSSPM", 0, 0, "Turn this on to get user id mapping mismatches to assert.");
  DVARINT_online_ccs_file_transport = Dvar_RegisterInt("OMMQKNPP", 1, 0, 9999, 0, "Which method of fetching files to use for CCS. 0=ContentServer, 1=ObjectStore");
  DVARINT_online_patching_fetch_prerelease = Dvar_RegisterInt("MNNPKMKQSL", 0, 0, 1, 0, "Should we fetch pre-release. 0 = no, 1 = yes");
  DVARBOOL_online_ccs_cs_support_enabled = Dvar_RegisterBool("MRTLPTPMNP", 0, 0, "Allow CS (Object Store precursor) support?");
  DVARINT_ccs_expectedPatchVersion = Dvar_RegisterInt("NPMSSLLMLT", 0, 0, 0x7FFFFFFF, 0, "If non-zero, all patch manifest version mismatches are reported.");
  DVARINT_ccs_sendActionReport = Dvar_RegisterInt("OKRNKSLPMT", 0, 0, 0x7FFFFFFF, 0, "If non-zero, action report is sent to the backend when a client restart is requested. Not suitable as a global setting.");
  DVARINT_ccs_single_restart_enabled = Dvar_RegisterInt("LKKMMRMPLR", 1, 0, 0x7FFFFFFF, 0, "If non-zero, ccs updates will download all necessary files while in menus before prompting a restart.");
  DVARINT_ccs_purgeCacheRequestId = Dvar_RegisterInt("NOLPMRPLRM", 0, 0, 0x7FFFFFFF, 0, "The request ID set by pub var. If different from stored value in dcache a purge occurs.");
  DVARINT_ccs_hashCheckMode = Dvar_RegisterInt("LQRMRKSMTO", 3, 0, 0x7FFFFFFF, 0, "1: Hash match required to prevent download. 2: Timestamp/Hash discrepancy is reported. Bitfield comparison.");
  DVARINT_ccs_onCorruptionConfig = Dvar_RegisterInt("LQQPQLMMOR", 4, 0, 0x7FFFFFFF, 0, "Configures how the dcache behaves if a corruption is detected. See DCacheCorruption.");
  DVARINT_dcache_checksumConfig = Dvar_RegisterInt("NSMPRQOSQL", 3, 0, 0x7FFFFFFF, 0, "Configures how checksums are enforced. See DCacheChecksumConfig.");
  DVARINT_dcache_genericConfig = Dvar_RegisterInt("LTQTKNKPNN", 0, 0, 0x7FFFFFFF, 0, "Generic config and kill switches. See DCacheGenericConfig.");
  DVARUINT64_oer_diag_category = Dvar_RegisterUInt64("LOSNRSQSNO", 0i64, 0i64, 0xFFFFFFFFFFFFFFFFui64, 0, "These cat/errors bits combo specified by these two dvars will trigger additional errors with diagnostics data.");
  DVARUINT64_oer_diag_errorbits = Dvar_RegisterUInt64("NPTPOSPRNK", 0i64, 0i64, 0xFFFFFFFFFFFFFFFFui64, 0, "These cat/errors bits combo specified by these two dvars will trigger additional errors with diagnostics data.");
  DVARUINT64_oer_fatal_category = Dvar_RegisterUInt64("NNNPONTNSN", 0i64, 0i64, 0xFFFFFFFFFFFFFFFFui64, 0, "These cat/errors bits combo specified by these two dvars will trigger a com_error.");
  DVARUINT64_oer_fatal_errorbits = Dvar_RegisterUInt64("NORLNTNQLL", 0i64, 0i64, 0xFFFFFFFFFFFFFFFFui64, 0, "These cat/errors bits combo specified by these two dvars will trigger will trigger a com_error.");
  DVARINT_oer_fatal_errortype = Dvar_RegisterInt("LMQRSRQQSR", 0, 0, 7, 0, "Type of com_error to use when triggering via above dvars.");
  DVARINT_oer_sendErrorDataRequestId = Dvar_RegisterInt("NQNOSSTNOM", 0, 0, 0x7FFFFFFF, 0, "The request ID at the time the last report was sent.");
  DVARINT_dw_userlist_recent_throttle = Dvar_RegisterInt("MPOOPRQRNR", 30000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait before we can add/remove userlists again");
  DVARINT_dw_userlist_muted_throttle = Dvar_RegisterInt("NRSSNMNLLL", 500, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait before we can add/remove userlists again");
  DVARINT_dw_userlist_blocked_throttle = Dvar_RegisterInt("ROSRMLLKM", 500, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait before we can add/remove userlists again");
  DVARINT_dw_userlist_max_failcount = Dvar_RegisterInt("MPPMNQQRPT", 4, 0, 0x7FFFFFFF, 0, "Number of times a dw task can fail for a userlist before we stop retrying");
  DVARINT_dw_userlist_retry_throttle = Dvar_RegisterInt("MLTTRLKPS", 5000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait before we can retry a userlist dw task again");
  DVARINT_recentplayers_update_minutes_cooldown = Dvar_RegisterInt("PTONNRNQ", 30, 0, 0x7FFFFFFF, 0, "Number of minutes to wait before we update a player on our recent met list again if they're already on it");
  DVARBOOL_gate_initial_access = Dvar_RegisterBool("NNPRNQMTQO", 0, 0, "Gates the start screen into needing a TU (or pubvar) with this dvar set.");
  DVARBOOL_gate_sp_access = Dvar_RegisterBool("MSRRMTLOQP", 0, 0, "Gates SP into needing a TU (or pubvar) with this dvar set.");
  DVARBOOL_gate_mp_access = Dvar_RegisterBool("NPNQOLKSLP", 0, 0, "Gates MP into needing a TU (or pubvar) with this dvar set.");
  DVARBOOL_gate_cp_access = Dvar_RegisterBool("MQNSRRKQOT", 0, 0, "Gates CP into needing a TU (or pubvar) with this dvar set.");
  DVARBOOL_gate_local_access = Dvar_RegisterBool("OLMPOQOPTT", 0, 0, "Gates Local Play into needing a TU (or pubvar) with this dvar set.");
  DVARINT_blocklist_max_errors = Dvar_RegisterInt("NTRNROLSQL", 6, 0, 0x7FFFFFFF, 0, "Number of errors in the exponential backoff until we try fetching xuids again");
  DVARINT_blocklist_retry_threshold = Dvar_RegisterInt("MPRTTPPOT", 1000, 0, 0x7FFFFFFF, 0, "Number of milliseconds until we retry fetching xuids for platformids in the blocklist");
  DVARINT_blocklist_xuid_batch_time = Dvar_RegisterInt("ONNPLTTTM", 20000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to delay blocklist fetching to make sure we batch them all at once.");
  DVARSTR_online_store_just_for_you = Dvar_RegisterString("MPOSPQTTNR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of 'just for you' items.");
  DVARSTR_online_store_just_for_you_blacklist = Dvar_RegisterString("ROTRKSQNT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of blacklisted items.");
  DVARSTR_online_store_just_for_you_dedicated_items = Dvar_RegisterString("MOLOQRLLQK", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to always show in the Just For You category.");
  DVARSTR_online_store_featured = Dvar_RegisterString("MMOOTLNTNR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of featured items.");
  DVARSTR_online_store_featured_timer = Dvar_RegisterString("MOOMOLTQSP", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_operator = Dvar_RegisterString("OTPQONQQT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of operator items.");
  DVARSTR_online_store_operator_timer = Dvar_RegisterString("LKQROKRTLN", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_weapon = Dvar_RegisterString("LOKOLPNMNP", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of weapon items.");
  DVARSTR_online_store_weapon_timer = Dvar_RegisterString("LPLPNLSORL", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_sales_items = Dvar_RegisterString("OQLLQNMS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of sale items.");
  DVARSTR_online_store_promoted_items = Dvar_RegisterString("MSKPMNRQTS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of promoted (best-selling) items.");
  DVARSTR_online_store_config = Dvar_RegisterString("MKMMQLLLSN", "store_v2.json", 0, "Name of the current store.");
  DVARSTR_online_store_config_dev = Dvar_RegisterString("LTRPKNLRMR", "store_v2.json", 0, "Name of the current store; used in dev builds to override the store config locally.");
  DVARSTR_online_store_just_for_you_warzone = Dvar_RegisterString("OQMTOQTSS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of 'just for you' items.");
  DVARSTR_online_store_just_for_you_blacklist_warzone = Dvar_RegisterString("LQNLSMLQTS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of blacklisted items.");
  DVARSTR_online_store_just_for_you_dedicated_items_warzone = Dvar_RegisterString("LSLPPRMTLR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to always show in the Just For You category.");
  DVARSTR_online_store_featured_warzone = Dvar_RegisterString("LQQSPONNOK", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of featured items.");
  DVARSTR_online_store_featured_timer_warzone = Dvar_RegisterString("NPMLTLMSKS", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_operator_warzone = Dvar_RegisterString("LRQOORNNQS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of operator items.");
  DVARSTR_online_store_operator_timer_warzone = Dvar_RegisterString("NOLNTPPQSO", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_weapon_warzone = Dvar_RegisterString("QTNMNLKMM", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of weapon items.");
  DVARSTR_online_store_weapon_timer_warzone = Dvar_RegisterString("NNQRLTQNNK", (const char *)&queryFormat.fmt + 3, 0, "The UTC timestamp of the next reset.");
  DVARSTR_online_store_sales_items_warzone = Dvar_RegisterString("LKORRRQNPR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of sale items.");
  DVARSTR_online_store_promoted_items_warzone = Dvar_RegisterString("NPPRRPOLLL", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of promoted (best-selling) items.");
  DVARSTR_online_store_config_warzone = Dvar_RegisterString("LSOQLQTOTK", "store_v2_warzone.json", 0, "Name of the current store.");
  DVARSTR_online_store_config_dev_warzone = Dvar_RegisterString("LPQMTOKRPO", "store_v2_warzone.json", 0, "Name of the current store; used in dev builds to override the store config locally.");
  DVARSTR_online_store_featured_recruit = Dvar_RegisterString("LTORSQOPQO", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of featured items to place first in featured category for accounts younger than a certain age.");
  DVARINT_online_store_recruit_age_max = Dvar_RegisterInt("OMSTQOKTNQ", 0, 0, 0x7FFFFFFF, 0, "Accounts younger than this age ( in days ) will be considered recruits and see modified items in store.");
  DVARBOOL_online_store_enforce_product_availability = Dvar_RegisterBool("LROPKRSOL", 0, 0, "Toggle whether to filter recommended SKU's based on their provided availability window data");
  DVARBOOL_online_quartermaster_instrumentation_enabled = Dvar_RegisterBool("LQTMQOTTTQ", 1, 0, "Controls whether dlog instrumentations is collected for Quartermaster activity");
  DVARINT_online_store_v1_autoscroll_timer = Dvar_RegisterInt("NLONMPSRPP", 5000, 0, 0x7FFFFFFF, 0, "How many milliseconds after user input do we wait to re-enable auto-scrolling in the v1 store.");
  DVARINT_online_store_v2_autoscroll_timer = Dvar_RegisterInt("NPSTPKMPKS", 120000, 0, 0x7FFFFFFF, 0, "How many milliseconds after user input do we wait to re-enable auto-scrolling in the v2 store.");
  DVARBOOL_online_store_tier_skip_gift_enabled = Dvar_RegisterBool("MNLKTLKTPM", 1, 0, "Killswitch for tier skip gift");
  DVARSTR_online_store_tier_skip_gift_timer = Dvar_RegisterString("OKRROQNRPK", (const char *)&queryFormat.fmt + 3, 0, "UTC timestamp for when tier skip gift promo should end. Gift will only be available while this dvar is set.");
  DVARSTR_online_store_tier_skip_gift_id = Dvar_RegisterString("LQLOKOPRKS", "400107", 0, "Bundle ID for the tier skip gift");
  DVARBOOL_online_store_shuffle_recommendations = Dvar_RegisterBool("OKKOKTLTP", 0, 0, "Toggle whether to shuffle recommended sku list");
  DVARFLT_online_store_hide_dedicated_item_chance = Dvar_RegisterFloat("OMTLRQOPLK", 0.0, 0.0, 1.0, 0, "Chance (0.0 - 1.0) to hide the dedicated items from the recommended list");
  DVARSTR_online_store_category_5 = Dvar_RegisterString("NKORNLPMMR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 5 items.");
  DVARSTR_online_store_category_5_warzone = Dvar_RegisterString("MPQKKKQPLS", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 5 items.");
  DVARSTR_online_store_category_6 = Dvar_RegisterString("LLMOOMOMMO", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 6 items.");
  DVARSTR_online_store_category_6_warzone = Dvar_RegisterString("LRKMSLPMMT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 6 items.");
  DVARSTR_online_store_category_7 = Dvar_RegisterString("NLTRKONQPR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 7 items.");
  DVARSTR_online_store_category_7_warzone = Dvar_RegisterString("NOOLMRNMSO", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 7 items.");
  DVARSTR_online_store_category_8 = Dvar_RegisterString("RQNMPMLO", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 8 items.");
  DVARSTR_online_store_category_8_warzone = Dvar_RegisterString("SNTSMMPRT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 8 items.");
  DVARSTR_online_store_category_9 = Dvar_RegisterString("MLOSTOOQOR", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 9 items.");
  DVARSTR_online_store_category_9_warzone = Dvar_RegisterString("NRNRRPMKOM", (const char *)&queryFormat.fmt + 3, 0, "Comma delimitied list of category 9 items.");
  DVARSTR_online_store_experimental_category_1 = Dvar_RegisterString("LKSLTSNQNQ", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_1_warzone = Dvar_RegisterString("LKTMQRMOST", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_2 = Dvar_RegisterString("NKKOSROQNT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_2_warzone = Dvar_RegisterString("NKKPNSRLMM", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_3 = Dvar_RegisterString("TNMMPPMKQ", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_3_warzone = Dvar_RegisterString("LKSOPMLKPL", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_4 = Dvar_RegisterString("NOPOKPTTMT", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARSTR_online_store_experimental_category_4_warzone = Dvar_RegisterString("LQSPNQOLLQ", (const char *)&queryFormat.fmt + 3, 0, "Comma delimited list of items to be used for experimental categories");
  DVARBOOL_online_store_zeus_category_enabled = Dvar_RegisterBool("TNMTRNOQT", 1, 0, "Enables the Zeus Preorder category in the store.");
  DVARBOOL_dwlogin_create_anonymous_account = Dvar_RegisterBool("MQLRPOLKO", 0, 0, "Controls whether we will automatically create an anonymous account if you try and log into DW without an account");
  DVARINT_dwlogin_queue_id = Dvar_RegisterInt("QNRTNTLKL", 0, 0, 0x7FFFFFFF, 0, "The login queue you wish to hit when logging in.");
  DVARBOOL_accountreg_create_profanity_check = Dvar_RegisterBool("SLQPMTOMT", 0, 0, "Should we run the profanity check on create full calls.");
  DVARBOOL_accountreg_rename_profanity_check = Dvar_RegisterBool("PLTMTSLKT", 1, 0, "Should we run the profanity check on renames.");
  DVARBOOL_accountreg_rename_use_currency = Dvar_RegisterBool("OLPQTNNSPT", 1, 0, "Should we use the currency for account renaming.");
  DVARINT_accountreg_rename_token_id = Dvar_RegisterInt("LMOKPMKQRR", 200042, 0, 0x7FFFFFFF, 0, "Token id for rename token.");
  DVARINT_accountreg_rename_currency_id = Dvar_RegisterInt("NLNTRLTMQL", 249, 0, 0x7FFFFFFF, 0, "Currency id for rename token.");
  DVARBOOL_online_pub_var_fetch_always = Dvar_RegisterBool("MTNQMNRQML", 1, 0, "Controls whether to always re-fetch pub vars when receiving push message regardess of the version numbers");
  DVARBOOL_online_pub_var_refetch_on_mismatch = Dvar_RegisterBool("LNKRTPTKPR", 0, 0, "Controls whether to re-fetch pub vars when downloading a version that was not requested");
  DVARBOOL_online_pub_var_fetch_all_on_update = Dvar_RegisterBool("MLMKNTSSSL", 1, 0, "Controls whether to refetch ALL namespaces when there is an update");
  DVARBOOL_online_cloud_files_sync = Dvar_RegisterBool("LOTLLTTRTO", 1, 0, "Controls whether configuration files are synced with the cloud");
  DVARBOOL_online_cloud_reverse_sync = Dvar_RegisterBool("LOTKPTQONT", 0, 0, "Reverse the first sync on boot of configuration files, uploading local files instead of downloading from the cloud.");
  DVARINT_online_cloud_upload_throttle = Dvar_RegisterInt("MKMKTPPSRP", 10000, 0, 0x7FFFFFFF, 0, "Minimum time interval (in  milliseconds) between configuration files uploads");
  DVARBOOL_online_should_com_error_on_party_state_parsing_failures = Dvar_RegisterBool("LPMOQTONMP", 1, 0, "This will enable com erroring if parse party header information fails.");
  DVARBOOL_online_error_reporting_should_send_overwrite_errors = Dvar_RegisterBool("LQRRQPMQKT", 0, 0, "This will enable sending overwrite errors for online error reports");
  DVARINT_ui_userid_resolve_throttle_ms = Dvar_RegisterInt("ORONSTNNP", 5000, 0, 0x7FFFFFFF, 0, "Throttle on the ui making calls to resolve user ids.");
  DVARINT_ui_username_resolve_throttle_ms = Dvar_RegisterInt("LTKMRTLTKT", 5000, 0, 0x7FFFFFFF, 0, "Throttle on the ui making calls to resolve user usernames.");
  DVARINT_matchmaking_game_type = Dvar_RegisterInt("QTNLKTKN", 1, 0, 0x7FFFFFFF, 0, "This dvar will get set to determine which game_type to set in matchmaking queries.");
  DVARINT_friend_xuid_resolve_backoff_ms = Dvar_RegisterInt("NRQTTQSSKT", 8000, 0, 0x7FFFFFFF, 0, "Backoff friend user id resolving by this amount when it fails.");
  DVARINT_friend_xuid_resolve_success_delay_ms = Dvar_RegisterInt("LTRRPRPTSO", 1000, 0, 0x7FFFFFFF, 0, "Delay subsequent calls to resolve friend xuids by this amount.");
  DVARINT_friend_xuid_resolve_batch_time_ms = Dvar_RegisterInt("NPSQQPLMR", 10000, 0, 0x7FFFFFFF, 0, "Batch resolve requests over this amount of time to allow the friends system to settle.");
  DVARBOOL_friend_xuid_resolve_kill_fail = Dvar_RegisterBool("LOPQNTMRMR", 0, 0, "Force a fail on friend resolving when reaching max retries.");
  DVARBOOL_client_latency_profile_log_enabled = Dvar_RegisterBool("LLPKPPTNNS", 0, 0, "Enable high frequency time series logging of server latency data");
  DVARBOOL_client_latency_summary_enabled = Dvar_RegisterBool("NMKRPNMOTO", 0, 0, "Enable dlog summary event for client latency data");
  DVARBOOL_online_favorite_friends_enabled = Dvar_RegisterBool("MTMNSKSSQP", 1, 0, "Enable favorite friends feature");
  DVARBOOL_online_favorite_friends_ui_enabled = Dvar_RegisterBool("RRTRNQOLS", 0, 0, "Enable favorite friends UI feature");
  DVARINT_demonware_presence_notifications_max_fail_count = Dvar_RegisterInt("MRTNKMNMO", 3, 0, 0x7FFFFFFF, 0, "Max number of times a subscription/unsubscription to presence can fail");
  DVARINT_demonware_presence_notifications_throttle_rate = Dvar_RegisterInt("MQLRTSSMO", 1000, 0, 0x7FFFFFFF, 0, "Number of milliseconds to wait until retrying after a subscription/unsubscription failure");
  DVARBOOL_demonware_presence_notifications_enabled = Dvar_RegisterBool("OLMLSQPSLM", 1, 0, "Number of milliseconds to wait until retrying after a subscription/unsubscription failure");
  DVARINT_demonware_presence_notifications_max_fetch_count = Dvar_RegisterInt("MLMLPNPTTS", 100, 0, 0x7FFFFFFF, 0, "Max number of players to subscribe to in one call");
  DVARINT_online_skill_upload_max_fail_count = Dvar_RegisterInt("QLLNLPNLS", 3, 0, 0x7FFFFFFF, 0, "Max number of retries when uploading skill fails");
  DVARINT_online_skill_upload_retry_delay = Dvar_RegisterInt("MPRSQLRSML", 2000, 0, 0x7FFFFFFF, 0, "Initial delay before retrying the skill upload, retries are exponential");
  DVARBOOL_online_matchmaking_use_map_weights = Dvar_RegisterBool("MRQQOSRRPK", 1, 0, "Let the backend choose the map");
  DVARBOOL_online_matchmaking_use_jip = Dvar_RegisterBool("LNPKMPLSSL", 1, 0, "Tell the backend whether to allow us to JIP");
  DVARINT_upload_stats_base_interval = Dvar_RegisterInt("MNQLPQLOQ", 5, 0, 0x7FFFFFFF, 0, "This is the base delay in seconds before the first retry for uploading stats");
  DVARBOOL_online_disable_matchmaking_for_private_party_clients = Dvar_RegisterBool("OLTKTKRKO", 1, 0, "Disable matchmaking for private party clients");
  DVARBOOL_always_set_private_party_ui_root = Dvar_RegisterBool("LPMSMMRPNM", 1, 0, "Always set the private party's UI root whenever we update the UI.");
  DVARBOOL_online_force_party_state_on_present = Dvar_RegisterBool("NTPTOSRORL", 1, 0, "Force send a party state to the joining player when he becomes PRESENT so he gets the team and squad immediately");
  DVARBOOL_online_blueprints_enabled = Dvar_RegisterBool("NSPPTONLNP", 1, 0, "Enable gunsmith blueprint support.");
  DVARINT_online_blueprints_retry_delay = Dvar_RegisterInt("OMLNSNMLSS", 5000, 0, 0x7FFFFFFF, 0, "Initial delay before retrying blueprint operations");
  DVARBOOL_online_check_online_data_fence_before_showing_signin_error = Dvar_RegisterBool("LKRTMSRPRO", 1, 0, "IW8 ship hack for IWH-209383, we this switch makes it so that in case of a wan failure we dont show the not signed in message");
  DVARFLT_mount_tuning_shapecast_cylinder_forward_distance_min = Dvar_RegisterFloat("NRSNQTTSOP", 20.0, 0.0, 3.4028235e38, 0, "Minimum distance from the edge to use when sweeping the player's worldmodel cylinder around a mount point.  Minimum distance compared with the weapon's 'mount*EdgeToEyeDistanceForward'");
  DVARFLT_mount_tuning_shapecast_eye_cylinder_forward_distance_min = Dvar_RegisterFloat("NTPQSNSNOR", 14.0, 0.0, 3.4028235e38, 0, "Minimum distance from the edge to use when sweeping the player's view cylinder around a mount point.  Minimum distance compared with the weapon's 'mount*EdgeToEyeDistanceForward'");
  DVARBOOL_killswitch_mount_eye_shapecast_clamp_enabled = Dvar_RegisterBool("OMMORPQPMQ", 1, 0, "If true, performs a yaw shapecast to explicitly prevent the Mounted eye point from penetrating world geometry.");
  DVARBOOL_online_clans_enabled = Dvar_RegisterBool("LLSSOLOMQK", 1, 0, "killswitch for clans");
  DVARINT_online_clans_happy_hour_set_threshold = Dvar_RegisterInt("NQOLNSNOSN", 86400, 0, 0x7FFFFFFF, 0, "time in seconds until we can set a new happy hour");
  DVARBOOL_online_clans_vectorized_fetch = Dvar_RegisterBool("NLSQNKRSLN", 1, 0, "Use vectorized fetch of initial clan information");
  DVARINT_online_clans_invite_decline_throttle_ms = Dvar_RegisterInt("MQKLLKQSKL", 3000, 0, 0x7FFFFFFF, 0, "Delay between calls to decline regiment invites");
  DVARBOOL_online_santize_clan_tag_on_stats_download = Dvar_RegisterBool("LSTRTLPRS", 0, 0, "Run the profanity filter on custom clan tags when stats are downloaded");
  DVARBOOL_killswitch_weapon_based_dof_disable = Dvar_RegisterBool("MMQPPNRPMR", 0, 0, "Kills the feature which turns off depth of field and world motion blur when using weapons without scopes or with small magnification scopes in certain consoles.");
  DVARBOOL_online_kick_users_on_old_tu = Dvar_RegisterBool("LTPSLSSONK", 0, 0, "enable kicking users who are on old TUs");
  DVARBOOL_online_commerce_check_ownership = Dvar_RegisterBool("MSRQSSNOT", 1, 0, "check that user truly owns a durable, not just shared ownership from another user on the same console");
  DVARBOOL_online_archive_streamer_enabled = Dvar_RegisterBool("PQTNSQLKP", 0, 0, "Enable streaming upload of the server archive");
  DVARBOOL_online_archive_streamer_compress = Dvar_RegisterBool("OLRPPMLTO", 0, 0, "Enable compression of the uploaded server archive data");
  DVARFLT_online_archive_streamer_percentage = Dvar_RegisterFloat("NSSQQNPQK", 0.0, 0.0, 1.0, 0, "The percentage of games that are streamed");
  DVARBOOL_online_archive_streamer_force = Dvar_RegisterBool("OLPRPQSPNN", 0, 0, "Force archive streaming regardless of percentage sample rate");
  DVARBOOL_online_archive_streamer_omnvar_stream_enabled = Dvar_RegisterBool("PKNPTSTLQ", 1, 0, "Enable the stream of additional omnvars through the archive streamer");
  DVARBOOL_dlog_use_bdlogin_token = Dvar_RegisterBool("MOTKOROQLL", 0, 0, "copy umbrella token directly from bdLogin into DLog whenever it changes, instead of relying on two levels of expiration logic");
  DVARBOOL_dlog_curl_verbose = Dvar_RegisterBool("NOQORQQKTP", 0, 0, "set CURLOPT_VERBOSE on all DLog http requests for debugging");
  DVARINT_current_season = Dvar_RegisterInt("LRTSSKLKPK", 5, 1, 0x7FFFFFFF, 0, "The current season we are on");
  DVARBOOL_online_regulations_enabled = Dvar_RegisterBool("OMSRROPMSS", 0, 0, "killswitch for player regulations");
  DVARINT_online_regulations_backoff_time_ms = Dvar_RegisterInt("NRSTQMPORK", 2000, 0, 0x7FFFFFFF, 0, "Backoff time for regulation calls in ms");
  DVARBOOL_scaledRemoteAnglesKbmEnabled = Dvar_RegisterBool("POPTTSKRS", 1, 0, "Enables the feature that allows bigger range of motion for the mouse while using remoteControled entities like vehicles and killstreaks");
  DVARBOOL_scaledOrbitKbmControlsEnabled = Dvar_RegisterBool("OMRTKLPTSQ", 1, 0, "Enables the feature that allows bigger range of motion for the mouse while using orbit camera that are not remote control");
  DVARBOOL_auto_sprint_enabled = Dvar_RegisterBool("OLMPNPQOML", 1, 0, "Killswitch for the Auto Sprint General Option");
  DVARBOOL_autoForwardEnable = Dvar_RegisterBool("SKRROQNKK", 1, 0, "Allow auto-move-forward feature");
  DVARBOOL_online_commerce_use_influencer_purchase = Dvar_RegisterBool("OLNMSNSTKS", 1, 0, "Use the influencer SKU purchase path");
  DVARSTR_online_playerxp_playlists = Dvar_RegisterString("NPTKRKLNTQ", (const char *)&queryFormat.fmt + 3, 0, "Playlists that have double player XP");
  DVARSTR_online_weaponxp_playlists = Dvar_RegisterString("LPSROQRSNN", (const char *)&queryFormat.fmt + 3, 0, "Playlists that have double weapon xp");
  DVARSTR_online_battlepass_xp_playlists = Dvar_RegisterString("SSSTKSQN", (const char *)&queryFormat.fmt + 3, 0, "Playlists that have double battlepass xp");
  DVARINT_online_playagain_lobby_timeout = Dvar_RegisterInt("LNQLORLKPM", 0, 0, 0x7FFFFFFF, 0, "Amount of time, in milliseconds to allow the lobby search to run before aborting playagain");
  DVARBOOL_online_signout_on_dw_disconnect_cleanup = Dvar_RegisterBool("LSOPQLSQRS", 1, 0, "Inform the OnlineMgr the player is signed out of online when Live_DemonwareDisconnectCleanup is called (i.e. from banning)");
  DCONST_DVARINT_online_force_min_lobby_size = Dvar_RegisterInt("online_force_min_lobby_size", 0, 0, 255, 0x40004u, "Force the minLobbySize field in playlists to this value. 0=No forcing");
  DVARBOOL_force_match_chat_creation_fix = Dvar_RegisterBool("LKSTMNNPQN", 0, 0, "Killswitch to fix the match chat in BR. Activating this will force the creation of a match channel in all modes with a party.");
  DVARBOOL_enable_match_chat = Dvar_RegisterBool("NNNQRKKPKL", 1, 0, "Allows or kill the match chat channel");
  DVARBOOL_online_challenge_fence_enabled = Dvar_RegisterBool("LKQRNQSSQS", 1, 0, "Enable challenge fence.");
  DVARBOOL_online_anticheat_should_com_error_if_mp_or_cp_banned = Dvar_RegisterBool("OLMKQPQOM", 0, 0, "Control if the frame should run that checks MP or CP feature bans.");
  DVARBOOL_online_anticheat_should_main_menu_fence_fail_if_mp_banned = Dvar_RegisterBool("LNSPMQMSS", 1, 0, "Control if the fence should the main menu fence fail if MP or CP feature bans.");
  DVARBOOL_online_challenge_free_kill_events_enabled = Dvar_RegisterBool("MQPSSLMMRK", 1, 0, "Enable the kill event for free users.");
  DVARINT_ingamestore_version = Dvar_RegisterInt("OMMNLRRRTO", 0, 0, 0x7FFFFFFF, 0, "ingamestore 'pseudo-version'.  increment this pubvar to force old ingamestore configs to re-fetch the latest");
  DVARBOOL_online_playlists_popup_should_have_cancel_button = Dvar_RegisterBool("LRMTMPNPRK", 0, 0, "Enable the users to have the ability to cancel the updating playlist popup.");
  DVARBOOL_online_invite_join_supports_popup_without_cancel = Dvar_RegisterBool("LSTTKOLPKL", 1, 0, "Enable the invite join process to support popups without cancel button.");
  DVARBOOL_online_fences_should_show_status_string_in_popups = Dvar_RegisterBool("NNLMOPLQQO", 1, 0, "Enable the printing of all the fence status strings in the error popups.");
  DVARBOOL_useHoldKBMProfile_enabled = Dvar_RegisterBool("LSLKMPPLOK", 1, 0, "Enables the feature that consists in holding the activate key on KBM to interact with short hold duration interactions");
  DVARBOOL_online_fences_should_show_root_fence_not_passing_in_popups = Dvar_RegisterBool("NSPMLKQLOS", 1, 0, "Enable the printing of the status of the root fence that is not passing.");
  DVARBOOL_playlist_update_wait_on_dependencies = Dvar_RegisterBool("LMPPTMNMML", 1, 0, "Playlist update checks will wait for dependendencies to be met before proceeding.");
  DVARINT_xb3_entitlement_state_mask = Dvar_RegisterInt("NNLNSTKQNR", 63, 0, 0x7FFFFFFF, 0, "XB3: Mask of which entitlement states we should send to DW");
  DVARBOOL_online_getavailablecontentpacks_should_append_all_mappacks_if_bypass_dlc_set = Dvar_RegisterBool("MQTMTKQQQL", 1, 0, "if the bypass DLC is set we should append all mappacks to CONTENT_ALL_MAP_PACKS in the function Content_GetAvailableContentPacks.");
  DVARFLT_online_bandwith_test_f2p_pct = Dvar_RegisterFloat("NOPRTMNSLM", 0.0, 0.0, 1.0, 0, "Percentage of f2p that will run the bandwidth test");
  DVARBOOL_online_mail_enabled = Dvar_RegisterBool("MPMTPTRLTO", 0, 0, "Mail system master kill switch");
  DVARBOOL_online_should_check_if_users_have_mappack_in_private_match = Dvar_RegisterBool("LLSLNKPRMT", 1, 0, "Switch to check if the users joining have the required map pack flags if the host is in a private match");
  DVARBOOL_online_should_copy_presence_join_flag_from_playlist_to_lobby_doc = Dvar_RegisterBool("TKNRKLRLM", 1, 0, "If this dvar is set, when we update lobby doc, if the playlist has no_join_via_presence set, we set lobby_open_for_pres_join to false in the lobby doc");
  DVARINT_online_content_creator_code_expiration_time_seconds = Dvar_RegisterInt("MSSKMNKTKN", 1209600, 0, 0x7FFFFFFF, 0, "Number of seconds before the content creator code expires");
  DVARBOOL_online_content_creator_code_should_do_full_string_compare = Dvar_RegisterBool("NOSNMQOROT", 1, 0, "If this dvar is set, we split the full list of creator codes and strcmp individually instead of the strstr");
  DVARBOOL_online_content_creator_code_should_localize_code = Dvar_RegisterBool("MTQRRPSQLR", 0, 0, "If this dvar is set, UI will try to localize the codes before displaying on screen");
  DVARBOOL_online_should_wake_lobby_party_only_if_in_lobby_party = Dvar_RegisterBool("LLOKOONSQK", 1, 0, "If this dvar is set, when we come back from a match to the public menu, the post load will call WakeLobbyParty only if the we are in lobby party");
  DVARBOOL_online_should_report_error_if_public_lobby_menu_opened_without_in_lobby_party = Dvar_RegisterBool("LSNOPORRSS", 1, 0, "If this dvar is set, we will report an error when we are opening the public lobby without being in a lobby party");
  DVARBOOL_online_friends_should_show_online_only_if_platform_presence_valid = Dvar_RegisterBool("NMOTPSNOLK", 1, 0, "If this dvar is set, before showing a friend is online based on the DW presence, we make sure the platform presence says that user is online");
  DVARBOOL_online_mm_lobby_affinity = Dvar_RegisterBool("RKNOKQMOL", 1, 0, "Add the previous game lobby's id to the search parameters");
  DVARSTR_auto_login = Dvar_RegisterString("PMMLLKMQM", (const char *)&queryFormat.fmt + 3, 0, "This is specifically used for crosslaunch from T9 to IW8 Warzone.");
  DVARBOOL_online_tournament_ignore_rollover = Dvar_RegisterBool("LLTRTNSTNL", 1, 0, "Ignore the lobby rollover message while in a tournament to prevent clients from forming an intermediate lobby before the tournament advances to that state");
  DVARBOOL_online_userlist_dont_check_space_availability_for_removal = Dvar_RegisterBool("MQNPRSTSOT", 1, 0, "If this dvar is set, we wont check if there is space in the userlist before adding to the removal list.");
  Dvar_EndPermanentRegistration();
}

/*
==============
Live_SetPlaylistNum
==============
*/
void Live_SetPlaylistNum(int localControllerIndex, int playlistNum)
{
  unsigned int PlaylistIdForNum; 

  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(playlistNum);
  Com_Printf(25, "Setting playlistId to %i for controller %i\n", PlaylistIdForNum, (unsigned int)localControllerIndex);
  Dvar_SetInt_Internal(DVARINT_playlist, playlistNum);
  selectedPlaylist = playlistNum;
}

/*
==============
Live_ShouldControllerStartLogon
==============
*/
bool Live_ShouldControllerStartLogon(const int controllerIndex)
{
  bool result; 
  int ControllerFromClient; 

  result = 0;
  if ( LiveStorage_IsPaidUserReady(controllerIndex) )
  {
    if ( !CL_Mgr_IsClientActive(LOCAL_CLIENT_0) )
      return 1;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    if ( ControllerFromClient == controllerIndex || dwGetLogOnStatus(ControllerFromClient) == DW_LIVE_CONNECTED )
      return 1;
  }
  return result;
}

/*
==============
Live_ShouldKickIfNotOnline
==============
*/
_BOOL8 Live_ShouldKickIfNotOnline()
{
  return Com_GameMode_SupportsFeature(WEAPON_LADDER_VAULT) && !Com_FrontEnd_IsInFrontEnd();
}

/*
==============
Live_ShutdownDueToTerminalError
==============
*/
void Live_ShutdownDueToTerminalError(const int controllerIndex)
{
  Com_Printf(25, "Live_ShutdownDueToTerminalError called\n");
  Live_DemonwareDisconnectCleanup(controllerIndex);
}

/*
==============
Live_ShutdownDueToTerminalErrorForAllControllers
==============
*/
void Live_ShutdownDueToTerminalErrorForAllControllers(void)
{
  int i; 

  for ( i = 0; i < 8; ++i )
  {
    Com_Printf(25, "Live_ShutdownDueToTerminalError called\n");
    Live_DemonwareDisconnectCleanup(i);
  }
}

/*
==============
Live_SyncOnlineDataFlags
==============
*/
__int64 Live_SyncOnlineDataFlags(const int controllerIndex)
{
  __int64 v1; 
  unsigned int v2; 
  const dvar_t *v3; 
  Online_GunSmith *Instance; 
  MarketingCommsManager *v5; 
  Online_PatchStreamer *v6; 
  Online_Loot *v7; 
  Online_Dailylogin *v8; 
  const dvar_t *v9; 
  OnlineChallengesManager *v10; 
  WaitingForOnlineServicesReason reason; 

  v1 = controllerIndex;
  v2 = !Live_IsUserSignedInToLive(controllerIndex);
  if ( Live_IsWaitingForOnlineServices(v1, &reason) )
    v2 |= 2u;
  if ( !NET_IsStarted() )
    v2 |= 8u;
  if ( !LiveStorage_IsTimeSynced() )
    v2 |= 0x10u;
  if ( !LiveStorage_DoWeHavePlaylists() )
    v2 |= 4u;
  if ( LiveRegionInfo_NeedsRegionSync() )
    v2 |= 0x200u;
  if ( LiveStorage_IsWaitingOnStats(v1) )
    v2 |= 0x20u;
  v3 = DVARBOOL_online_blueprints_enabled;
  if ( !DVARBOOL_online_blueprints_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_blueprints_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    Instance = Online_GunSmith::GetInstance();
    if ( !Online_GunSmith::HasBlueprints(Instance, v1) )
      v2 |= 0x800u;
  }
  v5 = MarketingCommsManager::GetInstance();
  if ( MarketingCommsManager::IsCommsEnabled(v5) && !LiveStorage_DoWeHaveMotd() )
    v2 |= 0x40u;
  if ( !BG_MatchRulesHistory_IsPreloaded(v1) )
    v2 |= 0x400u;
  v6 = Online_PatchStreamer::GetInstance();
  if ( !Online_PatchStreamer::DoWeHaveManifest(v6, MOVEMENT) )
    v2 |= 0x10000u;
  if ( LiveStorage_ShouldReadPeriodicChallenges(v1) )
    v2 |= 0x80u;
  if ( !Content_IsEnumerationDone() )
    v2 |= 0x1000u;
  v7 = Online_Loot::GetInstance();
  if ( !Online_Loot::HasInventory(v7, v1) )
    v2 |= 0x20000u;
  if ( !PlayercardCache_HasLocalPlayercard(v1) )
    v2 |= 0x40000u;
  v8 = Online_Dailylogin::GetInstance();
  if ( !Online_Dailylogin::GetShouldPassFence(v8, v1) )
    v2 |= 0x80000u;
  v9 = DVARBOOL_online_challenge_fence_enabled;
  if ( !DVARBOOL_online_challenge_fence_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_fence_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = OnlineChallengesManager::GetInstance();
    if ( !OnlineChallengesManager::ChallengeProgressFetched(v10, v1) || OnlineProgression::GetInstance()->m_userStateStage[v1] < ONLINE_USER_STATE_STAGE_INITIAL_DOWNLOAD_COMPLETE )
      v2 |= 0x2000u;
  }
  return v2;
}

/*
==============
Live_SyncOnlineDataFrame
==============
*/
__int64 Live_SyncOnlineDataFrame(int controllerIndex)
{
  unsigned int v2; 
  DWServicesAccess *Instance; 
  Online_PatchStreamer *v4; 

  v2 = 0;
  if ( Live_IsUserSignedInToLive(controllerIndex) )
  {
    LiveStorage_PlaylistFrame(controllerIndex);
    if ( !FenceManager_IsFencePassing(controllerIndex, FENCE_PLAYLISTS) || Playlist_IsOutOfDate() )
      v2 = 1;
    if ( !LiveStorage_DoWeHaveMotd() )
    {
      v2 = 1;
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
        LiveStorage_FetchMotd(controllerIndex);
    }
    v4 = Online_PatchStreamer::GetInstance();
    if ( !Online_PatchStreamer::DoWeHaveManifest(v4, MOVEMENT) )
      v2 = 1;
    if ( !FenceManager_IsFencePassing(controllerIndex, FENCE_DW_TIME) )
      return 1;
  }
  return v2;
}

/*
==============
Live_ThrowError
==============
*/
void Live_ThrowError(const errorParm_t level, const char *msg)
{
  PartyDisconnectReason v4; 

  if ( !OnlineErrorManager::DoesErrorExist(&g_onlineMgr.m_errorManager) )
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
  if ( Com_ErrorEntered() )
  {
    Com_PrintError(25, (const char *)&queryFormat, msg);
  }
  else
  {
    LOBYTE(v4) = 27;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v4);
    Live_DeclineInvitation();
    Com_Error_impl(level, (const ObfuscateErrorText)&queryFormat, msg);
  }
}

/*
==============
Live_ThrowError_DontDeclineInvite
==============
*/
void Live_ThrowError_DontDeclineInvite(const errorParm_t level, const char *msg)
{
  PartyDisconnectReason v4; 

  if ( Com_ErrorEntered() )
  {
    Com_PrintError(25, (const char *)&queryFormat, msg);
  }
  else
  {
    LOBYTE(v4) = 27;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v4);
    Com_Error_impl(level, (const ObfuscateErrorText)&queryFormat, msg);
  }
}

/*
==============
Live_ThrowError_Helper
==============
*/
void Live_ThrowError_Helper(const errorParm_t level, const char *msg, int shouldDeclineInvite)
{
  PartyDisconnectReason v6; 

  if ( Com_ErrorEntered() )
  {
    Com_PrintError(25, (const char *)&queryFormat, msg);
  }
  else
  {
    LOBYTE(v6) = 27;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v6);
    if ( shouldDeclineInvite )
      Live_DeclineInvitation();
    Com_Error_impl(level, (const ObfuscateErrorText)&queryFormat, msg);
  }
}

/*
==============
Live_TryCloseDialog
==============
*/
void Live_TryCloseDialog(LocalClientNum_t localClientNum, UI_LiveDialogState state)
{
  const char **v3; 

  if ( s_uiJoiningDialogState.desiredMenuState != state && s_uiJoiningDialogState.activeMenuState != state )
  {
    v3 = &s_uiJoiningDialogMenuName[state];
    if ( LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, *v3) )
    {
      Com_Printf(13, "Live_TryCloseDialog state %d dialog name %s\n", (unsigned int)state, *v3);
      LUI_CloseMenu(LOCAL_CLIENT_0, *v3, 0);
    }
  }
}

/*
==============
Live_UpdateDesiredDialog
==============
*/
void Live_UpdateDesiredDialog(void)
{
  int ControllerFromClient; 
  int v1; 
  int v2; 
  Online_AccountRegistration *Instance; 

  if ( InviteJoinHSM::ShouldShowJoiningGameSessionPopup(&g_invitationHSM) )
  {
    if ( !InviteJoinHSM::ShouldShowCancelButtonOnJoiningGameSessionPopup(&g_invitationHSM) )
    {
      s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_ACCEPTING_INVITE_WITHOUT_CANCEL;
      goto LABEL_8;
    }
  }
  else
  {
    s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
    if ( !CrosslaunchHSM::ShouldShowCrosslaunchingPopup(&g_crosslaunchHSM) )
    {
      s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
      s_uiJoiningDialogState.desiredMenuState = PartyAtomic_GetDesiredDialog();
      if ( s_uiJoiningDialogState.desiredMenuState == LIVE_DIALOG_NONE )
      {
        s_uiJoiningDialogState.desiredMenuState = GameBattles_GetDesiredDialog();
        if ( s_uiJoiningDialogState.desiredMenuState == LIVE_DIALOG_NONE )
          return;
      }
      goto LABEL_8;
    }
  }
  s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_ACCEPTING_INVITE;
LABEL_8:
  if ( !CL_AllLocalClientsInactive() && (ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), ControllerFromClient >= 0) && GamerProfile_IsProfileLoggedIn(ControllerFromClient) && ((v1 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetAcceptedEULA(v1)) || (v2 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0), !GamerProfile_GetHasEverPlayedMainMenu(v2))) || (Instance = Online_AccountRegistration::GetInstance(), Online_AccountRegistration::IsRegistering(Instance)) )
    s_uiJoiningDialogState.desiredMenuState = LIVE_DIALOG_NONE;
}

/*
==============
Live_UserSignedIntoDemonware
==============
*/
void Live_UserSignedIntoDemonware(const int controllerIndex)
{
  PlayercardCache_UserSignedIn(controllerIndex);
  OnlineTournament_OnUserSignedIntoDemonware(controllerIndex);
}

/*
==============
Online_CanHostLobby
==============
*/
char Online_CanHostLobby()
{
  if ( !g_shouldWeHost )
    return 0;
  if ( !badHost->current.enabled )
    NET_GetNatType();
  return 1;
}

/*
==============
Online_CanHostServer
==============
*/
char Online_CanHostServer(const int playerCount)
{
  if ( !g_shouldWeHost )
    return 0;
  if ( !badHost->current.enabled )
    NET_GetNatType();
  return 1;
}

/*
==============
Online_GetShouldWeHostValue
==============
*/
_BOOL8 Online_GetShouldWeHostValue()
{
  return g_shouldWeHost;
}

/*
==============
Online_PanicButtonPushed
==============
*/
void Online_PanicButtonPushed(void)
{
  unsigned __int64 EpochTimeFromAuth_ms; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v3; 
  DLogContext context; 
  char buffer[4096]; 

  if ( Lobby_IsInRunningLobby() )
  {
    EpochTimeFromAuth_ms = Online_GetEpochTimeFromAuth_ms();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    UserId = DLog_GetUserId(ControllerFromClient);
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v3 = DLog_BeginEvent(&context, "online_panic");
      context.autoEndEvent = 1;
      if ( v3 && DLog_UInt64(&context, "servertime_utc", EpochTimeFromAuth_ms) )
        DLog_RecordContext(&context);
    }
    LUI_OpenMenu(LOCAL_CLIENT_0, "mp_panic_buttons_popup", 1, 1, 0);
    Com_Printf(25, "Online_PanicButtonPushed() - panic buttons hit.\n");
    BB_NetworkFlush();
  }
}

/*
==============
Online_SetShouldWeHost
==============
*/
void Online_SetShouldWeHost(bool shouldHost)
{
  if ( g_shouldWeHost )
  {
    g_shouldWeHost = shouldHost;
    if ( !shouldHost )
      Com_Printf(25, "We should never host - setting g_shouldWeHost to false\n");
  }
}

/*
==============
Playlist_IsNewPlaylistAvailable
==============
*/
_BOOL8 Playlist_IsNewPlaylistAvailable()
{
  bool v0; 
  bool v1; 

  v0 = LiveStorage_ArePlaylistUpdatesPaused();
  v1 = g_shouldReloadPlaylist;
  if ( v0 )
    return 0;
  return v1;
}

/*
==============
Playlist_SetPlaylistAvailable
==============
*/
void Playlist_SetPlaylistAvailable(bool available)
{
  g_shouldReloadPlaylist = available;
}

/*
==============
Test_ShutdownDemonware
==============
*/
void Test_ShutdownDemonware(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWServicesAccess *v3; 
  DWLobbyService *DWLobbyService; 

  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, controllerIndex) && Live_IsUserSignedInToLive(controllerIndex) && dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED && (dw_test_disconnect && dw_test_disconnect->current.integer > 0 || dw_test_retry_disconnect && dw_test_retry_disconnect->current.enabled) )
  {
    v3 = DWServicesAccess::GetInstance();
    DWLobbyService = DWServicesAccess::GetDWLobbyService(v3, controllerIndex);
    DWLobbyService::disconnect(DWLobbyService);
    dwLobbyServiceCleanup(controllerIndex);
  }
}

