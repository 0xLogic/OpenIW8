/*
==============
PartyHost_StartTeamMatch
==============
*/

void __fastcall PartyHost_StartTeamMatch(PartyData *party, int localControllerIndex)
{
  ?PartyHost_StartTeamMatch@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyHost_SanityCheck
==============
*/

void __fastcall PartyHost_SanityCheck(const PartyData *party)
{
  ?PartyHost_SanityCheck@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_CanCancelPrivateDS
==============
*/

bool __fastcall PartyHost_CanCancelPrivateDS(const PartyData *party, const int localControllerIndex)
{
  return ?PartyHost_CanCancelPrivateDS@@YA_NPEBUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyHost_AddBotAsync
==============
*/

void __fastcall PartyHost_AddBotAsync(PartyData *party, const int botIndex, PartyRequestHandle *handle)
{
  ?PartyHost_AddBotAsync@@YAXPEAUPartyData@@HPEAVPartyRequestHandle@@@Z(party, botIndex, handle);
}

/*
==============
PartyHost_DropPlayersToMatchSlots
==============
*/

void __fastcall PartyHost_DropPlayersToMatchSlots(PartyData *party, const int numSlots)
{
  ?PartyHost_DropPlayersToMatchSlots@@YAXPEAUPartyData@@H@Z(party, numSlots);
}

/*
==============
PartyHost_ArchiveGameSettings
==============
*/

void __fastcall PartyHost_ArchiveGameSettings(PartyData *party)
{
  ?PartyHost_ArchiveGameSettings@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_CheckSigninState
==============
*/

void __fastcall PartyHost_CheckSigninState(const PartyData *party, const int localControllerIndex, const unsigned int sessionFlags)
{
  ?PartyHost_CheckSigninState@@YAXPEBUPartyData@@HI@Z(party, localControllerIndex, sessionFlags);
}

/*
==============
PartyHost_AllocMatchRulesNetworkingMemory
==============
*/

void PartyHost_AllocMatchRulesNetworkingMemory(void)
{
  ?PartyHost_AllocMatchRulesNetworkingMemory@@YAXXZ();
}

/*
==============
PartyHost_SetPrivatePartyMaxPlayers
==============
*/

void __fastcall PartyHost_SetPrivatePartyMaxPlayers(const int maxPlayers)
{
  ?PartyHost_SetPrivatePartyMaxPlayers@@YAXH@Z(maxPlayers);
}

/*
==============
PartyHost_ClearVotes
==============
*/

void __fastcall PartyHost_ClearVotes(PartyData *party)
{
  ?PartyHost_ClearVotes@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_TellPlayerToEndParty
==============
*/

void __fastcall PartyHost_TellPlayerToEndParty(const PartyData *party, const int memberIndex, const char *reason, PartyEndType endType, int sendImmediately)
{
  ?PartyHost_TellPlayerToEndParty@@YAXPEBUPartyData@@HPEBDW4PartyEndType@@H@Z(party, memberIndex, reason, endType, sendImmediately);
}

/*
==============
PartyHost_SyncVoiceDataForAllPlayers
==============
*/

void __fastcall PartyHost_SyncVoiceDataForAllPlayers(PartyData *party)
{
  ?PartyHost_SyncVoiceDataForAllPlayers@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_LANInfoRequestPacket
==============
*/

void __fastcall PartyHost_LANInfoRequestPacket(const LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg)
{
  ?PartyHost_LANInfoRequestPacket@@YAXW4LocalClientNum_t@@Unetadr_t@@PEAUmsg_t@@@Z(localClientNum, from, msg);
}

/*
==============
Party_GetPlatformId
==============
*/

unsigned __int64 __fastcall Party_GetPlatformId(const PartyData *party, const int clientNum)
{
  return ?Party_GetPlatformId@@YA_KPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
PartyHost_GetCreateFlags
==============
*/

int __fastcall PartyHost_GetCreateFlags()
{
  return ?PartyHost_GetCreateFlags@@YAHXZ();
}

/*
==============
PartyHost_ClearGoAsync
==============
*/

void __fastcall PartyHost_ClearGoAsync(PartyData *party)
{
  ?PartyHost_ClearGoAsync@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_TestTeamCreation_f
==============
*/

void __fastcall Party_TestTeamCreation_f()
{
  ?Party_TestTeamCreation_f@@YAXXZ();
}

/*
==============
PartyHost_UpdateMemberConnectivity
==============
*/

void __fastcall PartyHost_UpdateMemberConnectivity(PartyData *party, int memberIndex, int connectivityBits)
{
  ?PartyHost_UpdateMemberConnectivity@@YAXPEAUPartyData@@HH@Z(party, memberIndex, connectivityBits);
}

/*
==============
PartyHost_SetSquad
==============
*/

void __fastcall PartyHost_SetSquad(PartyData *party, const XUID player, const int squad)
{
  ?PartyHost_SetSquad@@YAXPEAUPartyData@@UXUID@@H@Z(party, player, squad);
}

/*
==============
PartyHost_HandlePacket
==============
*/

int __fastcall PartyHost_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  return ?PartyHost_HandlePacket@@YAHPEAUPartyData@@PEBDPEBUPartyActiveClient@@Unetadr_t@@PEAUmsg_t@@@Z(party, c, destClient, from, msg);
}

/*
==============
PartyHost_SetupParty
==============
*/

void __fastcall PartyHost_SetupParty(PartyData *party, int localControllerIndex)
{
  ?PartyHost_SetupParty@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyHost_RemovePlayer
==============
*/

void __fastcall PartyHost_RemovePlayer(PartyData *party, const int memberIndex, const int tellThem, const char *reason, const NetCloseStyle closeStyle)
{
  ?PartyHost_RemovePlayer@@YAXPEAUPartyData@@HHPEBDW4NetCloseStyle@@@Z(party, memberIndex, tellThem, reason, closeStyle);
}

/*
==============
PartyHost_CancelStartMatch
==============
*/

void __fastcall PartyHost_CancelStartMatch(PartyData *party)
{
  ?PartyHost_CancelStartMatch@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_RegisterDvars
==============
*/

void PartyHost_RegisterDvars(void)
{
  ?PartyHost_RegisterDvars@@YAXXZ();
}

/*
==============
PartyHost_IsMatchChosenForSurvey
==============
*/

bool __fastcall PartyHost_IsMatchChosenForSurvey(PartyData *partyData)
{
  return ?PartyHost_IsMatchChosenForSurvey@@YA_NPEAUPartyData@@@Z(partyData);
}

/*
==============
PartyHost_SetCrossplayEnabled
==============
*/

void __fastcall PartyHost_SetCrossplayEnabled(PartyData *party, const bool value)
{
  ?PartyHost_SetCrossplayEnabled@@YAXPEAUPartyData@@_N@Z(party, value);
}

/*
==============
PartyHost_SetTeam
==============
*/

void __fastcall PartyHost_SetTeam(PartyData *party, const XUID player, team_t team)
{
  ?PartyHost_SetTeam@@YAXPEAUPartyData@@UXUID@@W4team_t@@@Z(party, player, team);
}

/*
==============
PartyHost_AssignTeamChatCreationToPlayer
==============
*/

bool __fastcall PartyHost_AssignTeamChatCreationToPlayer(const PartyData *party, const NetConnection *playerConnection, const int teamIndex)
{
  return ?PartyHost_AssignTeamChatCreationToPlayer@@YA_NPEBUPartyData@@AEBVNetConnection@@H@Z(party, playerConnection, teamIndex);
}

/*
==============
Party_AddTestClients_f
==============
*/

void __fastcall Party_AddTestClients_f()
{
  ?Party_AddTestClients_f@@YAXXZ();
}

/*
==============
Party_FindMemberByPlatformId
==============
*/

int __fastcall Party_FindMemberByPlatformId(const PartyData *party, const unsigned __int64 platformId)
{
  return ?Party_FindMemberByPlatformId@@YAHPEBUPartyData@@_K@Z(party, platformId);
}

/*
==============
PartyHost_StartServer
==============
*/

void __fastcall PartyHost_StartServer(LocalClientNum_t localClientNum)
{
  ?PartyHost_StartServer@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PartyHost_AnyoneStillConnecting
==============
*/

int __fastcall PartyHost_AnyoneStillConnecting(const PartyData *party)
{
  return ?PartyHost_AnyoneStillConnecting@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_ResetState
==============
*/

void __fastcall PartyHost_ResetState(PartyData *party, const PartyActiveClient *mainActiveClient, bool isDueToMigration)
{
  ?PartyHost_ResetState@@YAXPEAUPartyData@@PEBUPartyActiveClient@@_N@Z(party, mainActiveClient, isDueToMigration);
}

/*
==============
PartyHost_ShouldJoinerGoToBRBlade
==============
*/

bool __fastcall PartyHost_ShouldJoinerGoToBRBlade(const PartyData *party)
{
  return ?PartyHost_ShouldJoinerGoToBRBlade@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_ClearMatchRulesNetworkingMemory
==============
*/

void PartyHost_ClearMatchRulesNetworkingMemory(void)
{
  ?PartyHost_ClearMatchRulesNetworkingMemory@@YAXXZ();
}

/*
==============
PartyHost_SetGameBattlesMatchId
==============
*/

void __fastcall PartyHost_SetGameBattlesMatchId(PartyData *party, const unsigned int matchId)
{
  ?PartyHost_SetGameBattlesMatchId@@YAXPEAUPartyData@@I@Z(party, matchId);
}

/*
==============
PartyHost_GamestateChanged
==============
*/

void __fastcall PartyHost_GamestateChanged(PartyData *party)
{
  ?PartyHost_GamestateChanged@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_DemotePresentPartyMembers
==============
*/

unsigned int __fastcall PartyHost_DemotePresentPartyMembers(PartyData *const party, msg_t *const msg)
{
  return ?PartyHost_DemotePresentPartyMembers@@YAIQEAUPartyData@@QEAUmsg_t@@@Z(party, msg);
}

/*
==============
PartyHost_StartParty
==============
*/

void __fastcall PartyHost_StartParty(PartyData *party, const LocalClientNum_t localClientNum, int localControllerIndex, int flags, int numSlots, const PartyHostType hostType, const unsigned __int64 lobbyId, const XSESSION_INFO *sessionInfo)
{
  ?PartyHost_StartParty@@YAXPEAUPartyData@@W4LocalClientNum_t@@HHHW4PartyHostType@@_KAEBVXSESSION_INFO@@@Z(party, localClientNum, localControllerIndex, flags, numSlots, hostType, lobbyId, sessionInfo);
}

/*
==============
PartyHost_SendRMsgToPartyClients
==============
*/

void __fastcall PartyHost_SendRMsgToPartyClients(const PartyData *party, msg_t *msg)
{
  ?PartyHost_SendRMsgToPartyClients@@YAXPEBUPartyData@@PEAUmsg_t@@@Z(party, msg);
}

/*
==============
PartyHost_MatchRulesCleanupFullCache
==============
*/

void __fastcall PartyHost_MatchRulesCleanupFullCache(PartyData *party)
{
  ?PartyHost_MatchRulesCleanupFullCache@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_MapIsAcceptable
==============
*/

bool __fastcall PartyHost_MapIsAcceptable(PartyData *party, const char *mapname, const int playlistId)
{
  return ?PartyHost_MapIsAcceptable@@YA_NPEAUPartyData@@PEBDH@Z(party, mapname, playlistId);
}

/*
==============
PartyHost_CancelPrivateDS
==============
*/

void __fastcall PartyHost_CancelPrivateDS(PartyData *party, const int localControllerIndex)
{
  ?PartyHost_CancelPrivateDS@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyHost_GetMatchRulesSnapshotDelta
==============
*/

const MatchRulesSnapshotDelta *__fastcall PartyHost_GetMatchRulesSnapshotDelta(PartyData *party, int clientNum)
{
  return ?PartyHost_GetMatchRulesSnapshotDelta@@YAPEBUMatchRulesSnapshotDelta@@PEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
PartyHost_KickPlayer
==============
*/

void __fastcall PartyHost_KickPlayer(PartyData *party, const int memberIndex, const PartyDisconnectReason disconnectReason)
{
  ?PartyHost_KickPlayer@@YAXPEAUPartyData@@HW4PartyDisconnectReason@@@Z(party, memberIndex, disconnectReason);
}

/*
==============
PartyHost_AskPartyMembersToBackOut
==============
*/

void __fastcall PartyHost_AskPartyMembersToBackOut(PartyData *party)
{
  ?PartyHost_AskPartyMembersToBackOut@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_RemovePlayer
==============
*/

void __fastcall PartyHost_RemovePlayer(PartyData *party, const int memberIndex, const int tellThem, const char *reason)
{
  ?PartyHost_RemovePlayer@@YAXPEAUPartyData@@HHPEBD@Z(party, memberIndex, tellThem, reason);
}

/*
==============
PartyHost_MarkMemberInfoDirty
==============
*/

void __fastcall PartyHost_MarkMemberInfoDirty(PartyData *party, int dirtyMemberSlot, int dirtyMask)
{
  ?PartyHost_MarkMemberInfoDirty@@YAXPEAUPartyData@@HH@Z(party, dirtyMemberSlot, dirtyMask);
}

/*
==============
PartyAtomicHost_DevSimulateDisconnectMsg
==============
*/

void __fastcall PartyAtomicHost_DevSimulateDisconnectMsg(PartyData *party, const int localControllerIndex, const int memberIndex)
{
  ?PartyAtomicHost_DevSimulateDisconnectMsg@@YAXPEAUPartyData@@HH@Z(party, localControllerIndex, memberIndex);
}

/*
==============
PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty
==============
*/

void PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty(void)
{
  ?PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty@@YAXXZ();
}

/*
==============
PartyHost_CopyPartyPrivacyFromPlayerDataToParty
==============
*/

void __fastcall PartyHost_CopyPartyPrivacyFromPlayerDataToParty(PartyData *party)
{
  ?PartyHost_CopyPartyPrivacyFromPlayerDataToParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_AddOtherSplitscreenLocalPlayer
==============
*/

void __fastcall PartyHost_AddOtherSplitscreenLocalPlayer(PartyData *party)
{
  ?PartyHost_AddOtherSplitscreenLocalPlayer@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_CheckTeams
==============
*/

void __fastcall PartyHost_CheckTeams(PartyData *party)
{
  ?PartyHost_CheckTeams@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_AddLocalPlayer
==============
*/

void __fastcall PartyHost_AddLocalPlayer(PartyData *party, const PartyActiveClient *partyActiveClient, const int slot)
{
  ?PartyHost_AddLocalPlayer@@YAXPEAUPartyData@@PEBUPartyActiveClient@@H@Z(party, partyActiveClient, slot);
}

/*
==============
PartyHost_MatchRulesCleanupClient
==============
*/

void __fastcall PartyHost_MatchRulesCleanupClient(PartyData *party, int clientNum)
{
  ?PartyHost_MatchRulesCleanupClient@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
PartyHost_StartPartyComplete
==============
*/

void __fastcall PartyHost_StartPartyComplete(PartyData *party, const int localControllerIndex)
{
  ?PartyHost_StartPartyComplete@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_RemoveTestClient_f
==============
*/

void __fastcall Party_RemoveTestClient_f()
{
  ?Party_RemoveTestClient_f@@YAXXZ();
}

/*
==============
Party_RemoveTestClients_f
==============
*/

void __fastcall Party_RemoveTestClients_f()
{
  ?Party_RemoveTestClients_f@@YAXXZ();
}

/*
==============
PartyHost_OnMatchEnd
==============
*/

void __fastcall PartyHost_OnMatchEnd(const PartyData *party)
{
  ?PartyHost_OnMatchEnd@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_ClearGo
==============
*/

void __fastcall PartyHost_ClearGo(PartyData *party)
{
  ?PartyHost_ClearGo@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_SetRoundScores
==============
*/

void __fastcall PartyHost_SetRoundScores(PartyData *party, const int memberIndex, const int score, const int deaths)
{
  ?PartyHost_SetRoundScores@@YAXPEAUPartyData@@HHH@Z(party, memberIndex, score, deaths);
}

/*
==============
PartyHost_ArePresentClientsUpToDate
==============
*/

int __fastcall PartyHost_ArePresentClientsUpToDate(const PartyData *party)
{
  return ?PartyHost_ArePresentClientsUpToDate@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_Frame
==============
*/

void __fastcall PartyHost_Frame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  ?PartyHost_Frame@@YAXPEAUPartyData@@PEBUPartyActiveClient@@@Z(party, mainActiveClient);
}

/*
==============
PartyHost_SendPartyChatDataToPlayer
==============
*/

bool __fastcall PartyHost_SendPartyChatDataToPlayer(const PartyData *party, const NetConnection *playerConnection, const int teamIndex)
{
  return ?PartyHost_SendPartyChatDataToPlayer@@YA_NPEBUPartyData@@AEBVNetConnection@@H@Z(party, playerConnection, teamIndex);
}

/*
==============
PartyHost_ResetClientTimeouts
==============
*/

void __fastcall PartyHost_ResetClientTimeouts(PartyData *party)
{
  ?PartyHost_ResetClientTimeouts@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_UpdateSession
==============
*/

void __fastcall PartyHost_UpdateSession(PartyData *party, const int controllerIndex, const unsigned __int64 lobbyId, const XSESSION_INFO *sessionInfo)
{
  ?PartyHost_UpdateSession@@YAXPEAUPartyData@@H_KAEBVXSESSION_INFO@@@Z(party, controllerIndex, lobbyId, sessionInfo);
}

/*
==============
PartyHost_MakeTeams
==============
*/

int __fastcall PartyHost_MakeTeams(PartyData *party, const int localControllerIndex, int memberCount)
{
  return ?PartyHost_MakeTeams@@YAHPEAUPartyData@@HH@Z(party, localControllerIndex, memberCount);
}

/*
==============
PartyHost_GetMatchRulesSnapshotDeltaFromDefault
==============
*/

MatchRulesSnapshotDelta *__fastcall PartyHost_GetMatchRulesSnapshotDeltaFromDefault()
{
  return ?PartyHost_GetMatchRulesSnapshotDeltaFromDefault@@YAPEAUMatchRulesSnapshotDelta@@XZ();
}

/*
==============
PartyHost_IsXnaddrUpdating
==============
*/

bool __fastcall PartyHost_IsXnaddrUpdating(const PartyData *party)
{
  return ?PartyHost_IsXnaddrUpdating@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_ClearStartMatch
==============
*/

void __fastcall PartyHost_ClearStartMatch(PartyData *party)
{
  ?PartyHost_ClearStartMatch@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_MatchRulesStateChanged
==============
*/

void __fastcall PartyHost_MatchRulesStateChanged(PartyData *party)
{
  ?PartyHost_MatchRulesStateChanged@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_IsGameStartRequested
==============
*/

bool __fastcall PartyHost_IsGameStartRequested(const PartyData *party)
{
  return ?PartyHost_IsGameStartRequested@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_StartParty
==============
*/

void __fastcall PartyHost_StartParty(PartyData *party, const LocalClientNum_t localClientNum, int localControllerIndex, int flags, int numSlots, const PartyHostType hostType)
{
  ?PartyHost_StartParty@@YAXPEAUPartyData@@W4LocalClientNum_t@@HHHW4PartyHostType@@@Z(party, localClientNum, localControllerIndex, flags, numSlots, hostType);
}

/*
==============
PartyHost_UpdatePartyRestrictsF2PUsersFlag
==============
*/

void __fastcall PartyHost_UpdatePartyRestrictsF2PUsersFlag(PartyData *party)
{
  ?PartyHost_UpdatePartyRestrictsF2PUsersFlag@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_HandleMatchRulesAckFromMember
==============
*/

void __fastcall PartyHost_HandleMatchRulesAckFromMember(PartyData *party, int clientNum, int partyStateAckTime)
{
  ?PartyHost_HandleMatchRulesAckFromMember@@YAXPEAUPartyData@@HH@Z(party, clientNum, partyStateAckTime);
}

/*
==============
PartyHost_UpdateXnaddr
==============
*/

bool __fastcall PartyHost_UpdateXnaddr(PartyData *party, const XNADDR *xnaddr)
{
  return ?PartyHost_UpdateXnaddr@@YA_NPEAUPartyData@@AEBUXNADDR@@@Z(party, xnaddr);
}

/*
==============
PartyHost_UpdateSubparties
==============
*/

void __fastcall PartyHost_UpdateSubparties(PartyData *party, SubpartyInfo *subparties, unsigned int *subpartyCount, int *totalSkill, bool includeBots)
{
  ?PartyHost_UpdateSubparties@@YAXPEAUPartyData@@PEAUSubpartyInfo@@PEAIPEAH_N@Z(party, subparties, subpartyCount, totalSkill, includeBots);
}

/*
==============
PartyHost_PartyRequiresOnlineSubscriptionForPlatform
==============
*/

bool __fastcall PartyHost_PartyRequiresOnlineSubscriptionForPlatform(const PartyData *party, ClientPlatform platform)
{
  return ?PartyHost_PartyRequiresOnlineSubscriptionForPlatform@@YA_NPEBUPartyData@@W4ClientPlatform@@@Z(party, platform);
}

/*
==============
PartyHost_CopyCrossplaySettingsToParty
==============
*/

void __fastcall PartyHost_CopyCrossplaySettingsToParty(PartyData *party)
{
  ?PartyHost_CopyCrossplaySettingsToParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_ShouldStartHosting
==============
*/

bool __fastcall PartyHost_ShouldStartHosting()
{
  return ?PartyHost_ShouldStartHosting@@YA_NXZ();
}

/*
==============
PartyHost_UsingAssignedTeams
==============
*/

int __fastcall PartyHost_UsingAssignedTeams(const PartyData *party)
{
  return ?PartyHost_UsingAssignedTeams@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_PartyRestrictsF2PUsers
==============
*/

bool __fastcall PartyHost_PartyRestrictsF2PUsers(const PartyData *party)
{
  return ?PartyHost_PartyRestrictsF2PUsers@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyHost_RollDiceForSurveyAndStoreResultInParty
==============
*/

void __fastcall PartyHost_RollDiceForSurveyAndStoreResultInParty(PartyData *party)
{
  ?PartyHost_RollDiceForSurveyAndStoreResultInParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyHost_SetPlatformSessionHandledByHost
==============
*/

void __fastcall PartyHost_SetPlatformSessionHandledByHost(PartyData *party, const ClientPlatform platform, bool value)
{
  ?PartyHost_SetPlatformSessionHandledByHost@@YAXPEAUPartyData@@W4ClientPlatform@@_N@Z(party, platform, value);
}

/*
==============
PartyHost_RequestStartMatch
==============
*/

void __fastcall PartyHost_RequestStartMatch(PartyData *party, bool skipStartCountdown)
{
  ?PartyHost_RequestStartMatch@@YAXPEAUPartyData@@_N@Z(party, skipStartCountdown);
}

/*
==============
PartyHost_MemberInfoChanged
==============
*/

void __fastcall PartyHost_MemberInfoChanged(PartyData *party, int memberSlot, int dirtyMask)
{
  ?PartyHost_MemberInfoChanged@@YAXPEAUPartyData@@HH@Z(party, memberSlot, dirtyMask);
}

/*
==============
PartyHost_RemovePlayerAsync
==============
*/

void __fastcall PartyHost_RemovePlayerAsync(PartyData *party, const int memberIndex, const int tellThem, const char *reason, const NetCloseStyle closeStyle, PartyRequestHandle *handle)
{
  ?PartyHost_RemovePlayerAsync@@YAXPEAUPartyData@@HHPEBDW4NetCloseStyle@@PEAVPartyRequestHandle@@@Z(party, memberIndex, tellThem, reason, closeStyle, handle);
}

/*
==============
PartyHost_AddBot
==============
*/

void __fastcall PartyHost_AddBot(PartyData *party, const int botId)
{
  ?PartyHost_AddBot@@YAXPEAUPartyData@@H@Z(party, botId);
}

/*
==============
PartyHost_StartPrivateParty
==============
*/

void __fastcall PartyHost_StartPrivateParty(const LocalClientNum_t localClientNum, int localControllerIndex, bool currentlyActive, const PartyHostType hostType)
{
  ?PartyHost_StartPrivateParty@@YAXW4LocalClientNum_t@@H_NW4PartyHostType@@@Z(localClientNum, localControllerIndex, currentlyActive, hostType);
}

/*
==============
PartyHost_SetPS4SessionId
==============
*/

void __fastcall PartyHost_SetPS4SessionId(PartyData *party, const SceNpSessionId *sessionId)
{
  ?PartyHost_SetPS4SessionId@@YAXPEAUPartyData@@PEBUSceNpSessionId@@@Z(party, sessionId);
}

/*
==============
PartyHost_HandleHeartbeatAck
==============
*/
void PartyHost_HandleHeartbeatAck(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int128 v5; 
  int addrHandleIndex; 
  int FirstMemberAtAddr; 
  unsigned int v10; 
  __int128 v11; 
  const char *v12; 
  int Long; 
  int v14; 
  __int128 v15; 
  __int128 v16; 
  const char *v17; 
  int v18; 
  __int128 v19; 
  const char *v20; 
  const char *v21; 
  __int64 v22; 
  int v23; 
  netadr_t v24; 
  msg_t buf; 
  netadr_t outEventInfo; 
  unsigned __int8 data[32]; 

  v5 = *(_OWORD *)&from->type;
  addrHandleIndex = from->addrHandleIndex;
  if ( party->inParty && party->areWeHost )
  {
    *(_OWORD *)&outEventInfo.type = *(_OWORD *)&from->type;
    outEventInfo.addrHandleIndex = addrHandleIndex;
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &outEventInfo);
    v10 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      if ( !Party_IsMemberRegistered(party, FirstMemberAtAddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6878, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientNum )") )
        __debugbreak();
      if ( v10 >= 0xC8 )
      {
        v23 = 200;
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6879, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      Long = MSG_ReadLong(msg);
      v14 = Long;
      if ( Long >= 0 )
      {
        if ( Party_IsMemberIndexAway(party, v10) )
        {
          v15 = *(_OWORD *)&from->type;
          outEventInfo.addrHandleIndex = addrHandleIndex;
          *(_OWORD *)&outEventInfo.type = v15;
          PartyHost_ReviveLostPartyMember(party, v10, &outEventInfo);
        }
        v16 = *(_OWORD *)&from->type;
        outEventInfo.addrHandleIndex = addrHandleIndex;
        *(_OWORD *)&outEventInfo.type = v16;
        PartyHost_ReceivedPartystateAck(party, v10, &outEventInfo, v14, 1);
        if ( !Party_IsGameLobby(party) && !Party_IsRunning(party) && !Live_IsInSystemlinkLobby() )
        {
          if ( Party_IsMemberIndexAway(party, v10) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6899, ASSERT_TYPE_ASSERT, "(!Party_IsMemberIndexAway( party, clientNum ))", "%s\n\tShould have revived this user already", "!Party_IsMemberIndexAway( party, clientNum )") )
              __debugbreak();
          }
          MSG_Init(&buf, data, 32);
          v17 = j_va("%inotpresent", (unsigned int)party->partyId);
          MSG_WriteString(&buf, v17);
          PartyProfile_StartEvent(NOTPRESENT, (PartyProfile_Event *)&outEventInfo);
          PartyProfile_AddBandwidthData(buf.cursize, (PartyProfile_Event *)&outEventInfo);
          v18 = Sys_Milliseconds();
          PartyProfile_RecordOutgoingEvent((const PartyProfile_Event *)&outEventInfo, v18, &party->profileState);
          v19 = *(_OWORD *)&from->type;
          v24.addrHandleIndex = addrHandleIndex;
          *(_OWORD *)&v24.type = v19;
          v20 = NET_AdrToString(&v24);
          Com_Printf(25, "[%s] PartyHost - HandleHeartbeatAck - Sending 'notPresent' reply to private party client %i (%s) since our private party is not active.\n", party->partyName, v10, v20);
          PartyHost_SendMessageToClient(party, v10, &buf);
        }
      }
      else
      {
        Com_Printf(25, "[%s] PartyHost - HandleHeartbeatAck - invalid party state ack time %i\n", party->partyName, (unsigned int)Long);
      }
    }
    else
    {
      v11 = *(_OWORD *)&from->type;
      outEventInfo.addrHandleIndex = addrHandleIndex;
      *(_OWORD *)&outEventInfo.type = v11;
      v12 = NET_AdrToString(&outEventInfo);
      Com_Printf(25, "[%s] Received party heartbeat ack but we dont know which client it's from (%s)\n", party->partyName, v12);
    }
  }
  else
  {
    v24.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v24.type = v5;
    v21 = NET_AdrToString(&v24);
    Com_Printf(25, "[%s] Received party heartbeat ack from %s but we are not the party host\n", party->partyName, v21);
  }
}

/*
==============
PartyHost_HandleClientPresence
==============
*/
void PartyHost_HandleClientPresence(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  int Int_Internal_DebugName; 
  int v12; 
  const char *v13; 
  int addrHandleIndex; 
  int FirstMemberAtAddr; 
  unsigned int v16; 
  int v17; 
  const char *v18; 
  int v19; 
  const char *v20; 
  int v21; 
  const char *v22; 
  bool v23; 
  int v24; 
  const char *v25; 
  const char *v26; 
  int v27; 
  const char *v28; 
  int v29; 
  const char *v30; 
  unsigned int v31; 
  unsigned int v32; 
  netadr_t v33; 

  if ( party->inParty && party->areWeHost )
  {
    if ( Party_IsPrivateParty(party) )
    {
      if ( Lobby_IsInLobby() )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_pt_backoutOnClientPresence, "pt_backoutOnClientPresence");
        if ( Int_Internal_DebugName )
        {
          if ( Int_Internal_DebugName != 1 || Lobby_IsInRunningLobby() )
          {
            addrHandleIndex = from->addrHandleIndex;
            *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
            v33.addrHandleIndex = addrHandleIndex;
            FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &v33);
            v16 = FirstMemberAtAddr;
            if ( FirstMemberAtAddr >= 0 )
            {
              if ( Party_IsHost(party, FirstMemberAtAddr) )
              {
                v19 = from->addrHandleIndex;
                *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
                v33.addrHandleIndex = v19;
                v20 = NET_AdrToString(&v33);
                v31 = v16;
                Com_Printf(25, "[%s] Received party client presence from %s which is us (the host client %i)\n", party->partyName, v20, v31);
              }
              else if ( Party_IsMemberLocalPlayer(party, v16) )
              {
                v21 = from->addrHandleIndex;
                *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
                v33.addrHandleIndex = v21;
                v22 = NET_AdrToString(&v33);
                v32 = v16;
                Com_Printf(25, "[%s] Received party client presence from %s which is a local client (%i).\n", party->partyName, v22, v32);
              }
              else
              {
                v23 = !Party_IsMemberPresent(party, v16);
                v24 = from->addrHandleIndex;
                *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
                v33.addrHandleIndex = v24;
                if ( v23 )
                {
                  v26 = NET_AdrToString(&v33);
                  Com_Printf(25, "[%s] Received party client presence from client %i (%s), backing out\n", party->partyName, v16, v26);
                  Com_SetErrorMessage("MPUI/PARTY_MEMBER_LOST_BACKOUT");
                  Party_Backout(mainActiveClient);
                }
                else
                {
                  v25 = NET_AdrToString(&v33);
                  Com_Printf(25, "[%s] Received party client presence from client %i (%s) which is already present. Ignoring.\n", party->partyName, v16, v25);
                }
              }
            }
            else
            {
              v17 = from->addrHandleIndex;
              *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
              v33.addrHandleIndex = v17;
              v18 = NET_AdrToString(&v33);
              Com_Printf(25, "[%s] Received party client presence from %s which is an unknown client\n", party->partyName, v18);
            }
          }
          else
          {
            v12 = from->addrHandleIndex;
            *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
            v33.addrHandleIndex = v12;
            v13 = NET_AdrToString(&v33);
            Com_Printf(25, "[%s] Received party client presence from %s but the lobby we're in is not running (we are in-game).\n", party->partyName, v13);
          }
        }
        else
        {
          v27 = from->addrHandleIndex;
          *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
          v33.addrHandleIndex = v27;
          v28 = NET_AdrToString(&v33);
          Com_Printf(25, "[%s] Received party client presence from %s but the functionality is disabled.\n", party->partyName, v28);
        }
      }
      else
      {
        v9 = from->addrHandleIndex;
        *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
        v33.addrHandleIndex = v9;
        v10 = NET_AdrToString(&v33);
        Com_Printf(25, "[%s] Received party client presence from %s but we're not in a lobby\n", party->partyName, v10);
      }
    }
    else
    {
      v7 = from->addrHandleIndex;
      *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
      v33.addrHandleIndex = v7;
      v8 = NET_AdrToString(&v33);
      Com_Printf(25, "[%s] Received party client presence from %s but it's from the wrong party\n", party->partyName, v8);
    }
  }
  else
  {
    v29 = from->addrHandleIndex;
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    v33.addrHandleIndex = v29;
    v30 = NET_AdrToString(&v33);
    Com_Printf(25, "[%s] Received party client presence from %s but we are not the party host\n", party->partyName, v30);
  }
}

/*
==============
PartyHost_HandleClientPartyStateAck
==============
*/
void PartyHost_HandleClientPartyStateAck(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  int FirstMemberAtAddr; 
  unsigned int v9; 
  int v10; 
  const char *v11; 
  char *v12; 
  unsigned __int8 v13; 
  int Long; 
  int v15; 
  __int128 v16; 
  int v17; 
  const char *v18; 
  int v19; 
  netadr_t v20; 
  __m256i buffer; 

  if ( party->inParty && party->areWeHost )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v20.type = *(_OWORD *)&from->type;
    v20.addrHandleIndex = addrHandleIndex;
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &v20);
    v9 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      v12 = (char *)party + 504 * FirstMemberAtAddr;
      v13 = v12[2602];
      if ( v13 >= 4u )
      {
        Long = MSG_ReadLong(msg);
        v15 = Long;
        if ( Long >= 0 )
        {
          MSG_ReadData(msg, 32, &buffer, 32);
          if ( msg->overflowed )
          {
            Com_Printf(25, "[%s] PartyHost - HandleClientPartyStateAck - message overflowed\n", party->partyName);
          }
          else
          {
            if ( v15 == party->specificData.hostData.partyStateChangeTime )
            {
              *(__m256i *)(v12 + 2492) = buffer;
              *(__m256i *)(v12 + 2524) = buffer;
              *(__m256i *)(v12 + 2556) = buffer;
            }
            v16 = *(_OWORD *)&from->type;
            v20.addrHandleIndex = from->addrHandleIndex;
            *(_OWORD *)&v20.type = v16;
            PartyHost_ReceivedPartystateAck(party, v9, &v20, v15, 0);
          }
        }
        else
        {
          Com_Printf(25, "[%s] PartyHost - HandleClientPartyStateAck - invalid party state ack time %i\n", party->partyName, (unsigned int)Long);
        }
      }
      else
      {
        v19 = v13;
        Com_Printf(25, "[%s] PartyHost - HandleClientPartyStateAck - party state ack from non present/joined client: %i, status is %i\n", party->partyName, v9, v19);
      }
    }
    else
    {
      v10 = from->addrHandleIndex;
      *(_OWORD *)&v20.type = *(_OWORD *)&from->type;
      v20.addrHandleIndex = v10;
      v11 = NET_AdrToString(&v20);
      Com_Printf(25, "[%s] PartyHost - HandleClientPartyStateAck - Unknown client %s\n", party->partyName, v11);
    }
  }
  else
  {
    v17 = from->addrHandleIndex;
    *(_OWORD *)&v20.type = *(_OWORD *)&from->type;
    v20.addrHandleIndex = v17;
    v18 = NET_AdrToString(&v20);
    Com_Printf(25, "[%s] PartyHost - HandleClientPartyStateAck - Not a party host %s\n", party->partyName, v18);
  }
}

/*
==============
PartyAtomicHost_HandleJoinRequest
==============
*/
void PartyAtomicHost_HandleJoinRequest(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int PlaylistIdForNum; 
  int Long; 
  int v9; 
  int v10; 
  int v11; 
  __int128 v12; 
  const char *v13; 
  const char *v14; 
  int addrHandleIndex; 
  const dvar_t *v16; 
  XUID *v17; 
  int v18; 
  const XUID *v19; 
  PartyJoinResponse v20; 
  netadr_t *p_xuid; 
  XUID *v22; 
  int v23; 
  XUID *v24; 
  unsigned int ProtocolVersion; 
  XUID *v26; 
  int StartingControllerIndex; 
  const char *MapName; 
  int MapIndex; 
  unsigned int MapSource; 
  unsigned __int64 m_id; 
  char *v32; 
  OnlineTelemetryCommunicationEventType v33; 
  XUID *v34; 
  int Int_Internal_DebugName; 
  int v36; 
  unsigned int ExplicitMapPacksUsedByPlaylist; 
  XUID *v38; 
  const char *v39; 
  int v40; 
  unsigned int v41; 
  unsigned int v42; 
  int v43; 
  XUID *v44; 
  const char *v45; 
  int v46; 
  const char *v47; 
  int v48; 
  const char *v49; 
  int v50; 
  int v51; 
  const char *v52; 
  int v53; 
  __int64 v54; 
  const char *v55; 
  int v56; 
  unsigned int v57; 
  const char *v58; 
  int v59; 
  const char *v60; 
  int v61; 
  unsigned int v62; 
  int NumGameSlots; 
  int Playlist; 
  unsigned int PlaylistCategory; 
  int v66; 
  const char *v67; 
  int v68; 
  const char *v69; 
  int v70; 
  int v71; 
  msg_t *v72; 
  int v73; 
  int v74; 
  __int64 v75; 
  unsigned int VersionNumber; 
  unsigned int v77; 
  unsigned int v78; 
  unsigned int v79; 
  const char *v80; 
  int v81; 
  int MinPartySize; 
  int v83; 
  const char *v84; 
  int v85; 
  int MaxPartySize; 
  int v87; 
  const char *v88; 
  int v89; 
  unsigned int v90; 
  const char *v91; 
  int v92; 
  unsigned __int64 CurrentLobbyId; 
  __int64 v94; 
  unsigned __int64 v95; 
  const char *v96; 
  const char *v97; 
  int v98; 
  const char *v99; 
  int v100; 
  const char *v101; 
  int v102; 
  const char *v103; 
  int v104; 
  unsigned int v105; 
  unsigned int v106; 
  unsigned int v107; 
  unsigned __int8 *p_status; 
  int MemberByXUID_AllowNotPresent; 
  __int64 v110; 
  const char *v111; 
  const char *MemberStatus; 
  unsigned __int8 status; 
  const char *v114; 
  const char *v115; 
  int v116; 
  const char *v117; 
  const char *v118; 
  __int128 v119; 
  int FirstMemberAtAddr; 
  __int64 v121; 
  const char *v122; 
  const char *v123; 
  unsigned __int8 v124; 
  const char *v125; 
  const char *v126; 
  __int128 v127; 
  PartyJoinResponse v128; 
  int v129; 
  msg_t *v130; 
  int Bit; 
  PartyJoinType v132; 
  const char *v133; 
  int v134; 
  __int64 Bits; 
  unsigned __int8 v136; 
  const char *v137; 
  int v138; 
  const char *String_Internal_DebugName; 
  const char *v140; 
  const char *v141; 
  bool v142; 
  const char *v143; 
  int v144; 
  bool v145; 
  const char *v146; 
  int v147; 
  bool v148; 
  const char *v149; 
  int v150; 
  unsigned int v151; 
  const PartyData *PartyData; 
  int v153; 
  int BotsReservedSlotsAllies; 
  int v155; 
  const char *v156; 
  int v157; 
  int v158; 
  int v159; 
  __int128 v160; 
  const char *v161; 
  const char *v162; 
  int v163; 
  char *fmt; 
  __int64 v165; 
  __int64 v166; 
  __int64 v167; 
  XUID result; 
  netadr_t xuid; 
  __int128 v170; 
  int v171; 
  unsigned int v172; 
  msg_t *msga[2]; 
  int v174; 
  int Byte; 
  int v176; 
  unsigned int v177; 
  int v178; 
  team_t teamId[2]; 
  PartyJoinChallenge challenge; 
  unsigned __int8 buffer[208]; 
  char dest[256]; 

  *(_QWORD *)&v170 = mainActiveClient;
  msga[0] = msg;
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(selectedPlaylist);
  Long = MSG_ReadLong(msg);
  v9 = MSG_ReadLong(msg);
  XUID::FromMsg(&result, msg);
  Byte = MSG_ReadByte(msg);
  v10 = Byte;
  v177 = MSG_ReadLong(msg);
  v178 = MSG_ReadLong(msg);
  v172 = MSG_ReadByte(msg);
  v11 = MSG_ReadByte(msg);
  v12 = *(_OWORD *)&from->type;
  xuid.addrHandleIndex = from->addrHandleIndex;
  v176 = v11;
  *(_OWORD *)&xuid.type = v12;
  v13 = NET_AdrToString(&xuid);
  v14 = XUID::ToDevString(&result);
  Com_Printf(131097, "[%s] %s - Received 'pa_joinrequest' from player %s at %s: protocol %d, join-type %d, join-count %d, playlist-version %d, playlist-num %d\n", party->partyName, "PartyAtomicHost_HandleJoinRequest", v14, v13, Long, v10, v172, v177, v178);
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
  xuid.addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(&xuid) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Sent join request to ourself.\n", party->partyName);
    return;
  }
  v16 = DVARBOOL_party_rejectLobbyJoinRequests;
  if ( !DVARBOOL_party_rejectLobbyJoinRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_rejectLobbyJoinRequests") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( !v16->current.enabled || !Party_IsGameLobby(party) )
  {
    if ( !party->inParty )
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We're not in a party.\n", party->partyName);
LABEL_11:
      v22 = XUID::NullXUID((XUID *)&xuid);
      v23 = from->addrHandleIndex;
      *(_OWORD *)msga = *(_OWORD *)&from->type;
      *(XUID *)&v170 = (XUID)v22->m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
      v20 = JOINRESPONSE_ERROR_HOST_NOT_HOSTING;
LABEL_12:
      v174 = v23;
      v19 = (const XUID *)&v170;
      p_xuid = (netadr_t *)msga;
      goto LABEL_190;
    }
    if ( !party->areWeHost )
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We're not the host or the party is inactive.\n", party->partyName);
      goto LABEL_11;
    }
    if ( PartyMigrate_MigrateActive(party) )
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Our party is migrating hosts\n", party->partyName);
LABEL_17:
      v24 = XUID::NullXUID((XUID *)&xuid);
      v23 = from->addrHandleIndex;
      *(_OWORD *)msga = *(_OWORD *)&from->type;
      *(XUID *)&v170 = (XUID)v24->m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
      v20 = JOINRESPONSE_ERROR_GAME_MIGRATING;
      goto LABEL_12;
    }
    if ( SV_IsMigrating() )
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Our game is migrating hosts\n", party->partyName);
      goto LABEL_17;
    }
    if ( Long != GetProtocolVersion() )
    {
      ProtocolVersion = GetProtocolVersion();
      LODWORD(fmt) = Long;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Incompatible party net code (we are %i, they have %i), rejecting player\n", party->partyName, ProtocolVersion, fmt);
      v26 = XUID::NullXUID((XUID *)&xuid);
      v23 = from->addrHandleIndex;
      *(_OWORD *)msga = *(_OWORD *)&from->type;
      *(XUID *)&v170 = (XUID)v26->m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_VERSION;
      goto LABEL_12;
    }
    if ( (unsigned int)(v10 - 1) <= 1 && Online_Telemetry_IsOnlineCommunicationTelemetryEnabled() )
    {
      StartingControllerIndex = Party_GetStartingControllerIndex(party);
      if ( XUID::IsValid(&result) )
      {
        if ( Party_IsGameLobby(party) )
        {
          MapName = Party_GetMapName();
          MapIndex = Live_GetMapIndex(MapName);
          MapSource = Live_GetMapSource(MapIndex);
          LODWORD(fmt) = v9;
          Com_sprintf(dest, 0x100ui64, "GL %d, %d", MapSource, fmt);
        }
        else
        {
          Com_sprintf(dest, 0x100ui64, "PP");
        }
        m_id = result.m_id;
        v32 = dest;
        v33 = INVITE_JOIN_PARTY_HANDLE_JOIN_REQUEST_RECEIVED;
      }
      else
      {
        v34 = XUID::NullXUID((XUID *)&xuid);
        v32 = NULL;
        m_id = v34->m_id;
        v33 = INVITE_JOIN_PARTY_HANDLE_JOIN_REQUEST_RECEIVED_INVALID_XUID;
      }
      Online_Telemetry_SendCommunicationEvent(StartingControllerIndex, (XUID)m_id, v33, v32);
    }
    if ( Party_IsGameLobby(party) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") )
      {
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_should_check_if_users_have_mappack_in_private_match, "online_should_check_if_users_have_mappack_in_private_match") )
        {
          v39 = Party_GetMapName();
          v40 = Live_GetMapIndex(v39);
          v41 = Live_GetMapSource(v40);
          v42 = v41;
          if ( (v41 & v9) == 0 )
          {
            v43 = 53;
            LODWORD(fmt) = v9;
            Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Player lacks explicit content. Required: %x, Client has: %x \n", party->partyName, v41, fmt);
            if ( v42 == 64 )
              v43 = 54;
            v44 = XUID::NullXUID((XUID *)&xuid);
            v23 = from->addrHandleIndex;
            *(_OWORD *)msga = *(_OWORD *)&from->type;
            *(XUID *)&v170 = (XUID)v44->m_id;
            OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
            v20 = v43;
            goto LABEL_12;
          }
        }
      }
      else
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
        v36 = Playlist_GetPlaylistIdForNum(Int_Internal_DebugName);
        ExplicitMapPacksUsedByPlaylist = Playlist_GetExplicitMapPacksUsedByPlaylist(v36);
        if ( (~v9 & ExplicitMapPacksUsedByPlaylist) != 0 )
        {
          LODWORD(fmt) = v9;
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Player lacks explicit content. Required: %x, Client has: %x \n", party->partyName, ExplicitMapPacksUsedByPlaylist, fmt);
          v38 = XUID::NullXUID((XUID *)&xuid);
          v23 = from->addrHandleIndex;
          *(_OWORD *)msga = *(_OWORD *)&from->type;
          *(XUID *)&v170 = (XUID)v38->m_id;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
          v20 = JOINRESPONSE_ERROR_MISSING_CONTENT;
          goto LABEL_12;
        }
      }
    }
    if ( Party_IsPrivateParty(party) )
    {
      if ( (unsigned int)(v10 - 1) <= 1 && OnlineTournament_IsActive() )
      {
        if ( OnlineTournament_ShouldSessionBeClosed() )
        {
          v45 = XUID::ToDevString(&result);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because we are searching for a tournament and presence joins are disabled.\n", party->partyName, v45);
          v46 = from->addrHandleIndex;
          *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
          *(XUID *)&v170 = result;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
          xuid.addrHandleIndex = v46;
          v19 = (const XUID *)&v170;
          v20 = JOINRESPONSE_ERROR_TOURNAMENT_PRESENCE_JOIN_NOT_ALLOWED_WHILE_SEARCHING;
          p_xuid = &xuid;
          goto LABEL_190;
        }
        if ( !OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket(result) )
        {
          v47 = XUID::ToDevString(&result);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because we are in a tournament and the joiner is not in our team.\n", party->partyName, v47);
          v48 = from->addrHandleIndex;
          *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
          *(XUID *)&v170 = result;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
          xuid.addrHandleIndex = v48;
          v19 = (const XUID *)&v170;
          v20 = JOINRESPONSE_ERROR_TOURNAMENT_PRESENCE_JOIN_NOT_ALLOWED_NOT_IN_TEAM;
          p_xuid = &xuid;
          goto LABEL_190;
        }
      }
    }
    else if ( Party_IsGameLobby(party) && OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::GetTeamFor(&OnlineMatchmakerOmniscient::ms_instance, result, teamId) )
    {
      v49 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) not a member of this tournament.\n", party->partyName, v49);
      v50 = from->addrHandleIndex;
      *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
      *(XUID *)&v170 = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      xuid.addrHandleIndex = v50;
      v19 = (const XUID *)&v170;
      v20 = JOINRESPONSE_ERROR_TOURNAMENT_INVALID_USER;
      p_xuid = &xuid;
      goto LABEL_190;
    }
    if ( v10 == 4 || v10 >= 7 )
    {
      v162 = XUID::ToDevString(&result);
      LODWORD(fmt) = v10;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Bad join type %i\n", party->partyName, v162, fmt);
      v163 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v163;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_TYPE;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    v51 = v176;
    if ( v176 < 1 )
    {
      v52 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Invalid number of subparties - < 1 subparties joining\n", party->partyName, v52);
      v53 = from->addrHandleIndex;
      *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
      *(XUID *)&v170 = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      xuid.addrHandleIndex = v53;
      v19 = (const XUID *)&v170;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_SUBPARTYCOUNT;
      p_xuid = &xuid;
      goto LABEL_190;
    }
    v54 = v176;
    *(_QWORD *)teamId = v176;
    if ( (unsigned __int64)v176 > 0xC8 )
    {
      v55 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Invalid network message\n", party->partyName, v55);
      v56 = from->addrHandleIndex;
      *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
      *(XUID *)&v170 = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      xuid.addrHandleIndex = v56;
      v19 = (const XUID *)&v170;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_SUBPARTYLIST;
      p_xuid = &xuid;
      goto LABEL_190;
    }
    v57 = v172;
    if ( (int)v172 <= 0 )
    {
      v58 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) They gave us an invalid number of players\n", party->partyName, v58);
      v59 = from->addrHandleIndex;
      *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
      *(XUID *)&v170 = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      xuid.addrHandleIndex = v59;
      v19 = (const XUID *)&v170;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_MEMBERCOUNT;
      p_xuid = &xuid;
      goto LABEL_190;
    }
    if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    {
      if ( !Party_IsMatchmakingLobby(party) && Party_IsGameLobby(party) && !Live_IsInGameBattlesGame() )
      {
        if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_allow_joins_before_lobby, "online_matchmaking_allow_joins_before_lobby") )
        {
          v60 = XUID::ToDevString(&result);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We are matchmaking and have not been assigned a lobby yet.\n", party->partyName, v60);
          v61 = from->addrHandleIndex;
          *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
          *(XUID *)&v170 = result;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
          xuid.addrHandleIndex = v61;
          v19 = (const XUID *)&v170;
          v20 = JOINRESPONSE_ERROR_BAD_REQUEST_HOST_MATCHMAKING_NOT_YET_IN_LOBBY;
          p_xuid = &xuid;
          goto LABEL_190;
        }
        if ( Party_FindMemberByXUID(&g_partyData, result) == -1 )
        {
          v62 = Party_CountAllMembersEvenIfInactive(&g_partyData);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") )
          {
            NumGameSlots = Party_GetNumGameSlots(&g_partyData);
          }
          else
          {
            Playlist = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance);
            PlaylistCategory = OnlineMatchmakerOmniscient::GetPlaylistCategory(&OnlineMatchmakerOmniscient::ms_instance);
            NumGameSlots = Playlist_GetMinimumMaxPartySizeForCategory(Playlist, PlaylistCategory);
            v54 = *(_QWORD *)teamId;
          }
          v66 = NumGameSlots;
          if ( (int)(v62 + v172) > NumGameSlots )
          {
            v67 = XUID::ToDevString(&result);
            LODWORD(v166) = v66;
            LODWORD(v165) = v172;
            LODWORD(fmt) = v62;
            Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We are matchmaking, have not been assigned a lobby yet, and not enough room in private party: current (%i) joining (%i) max for playlist(s) (%i) .\n", party->partyName, v67, fmt, v165, v166);
            v68 = from->addrHandleIndex;
            *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
            *(XUID *)&v170 = result;
            OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
            xuid.addrHandleIndex = v68;
            v19 = (const XUID *)&v170;
            v20 = JOINRESPONSE_ERROR_MAXPARTY_EXCEEDED;
            p_xuid = &xuid;
            goto LABEL_190;
          }
          v57 = v172;
          v51 = v176;
        }
      }
      if ( !OnlineMatchmakerOmniscient::IsPlayerAllowedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result) )
      {
        v69 = XUID::ToDevString(&result);
        Com_PrintError(131097, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We are matchmaking and the XUID has not been whitelisted by Demonware.\n", party->partyName, v69);
        v70 = from->addrHandleIndex;
        *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
        *(XUID *)&v170 = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        xuid.addrHandleIndex = v70;
        v19 = (const XUID *)&v170;
        v20 = JOINRESPONSE_ERROR_BAD_REQUEST_NOT_APPROVED_BY_MATCHMAKER;
        p_xuid = &xuid;
        goto LABEL_190;
      }
    }
    v71 = v51;
    v72 = msga[0];
    MSG_ReadData(msga[0], v71, buffer, 200);
    if ( v72->overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7831, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
      __debugbreak();
    *(_QWORD *)&xuid.type = MSG_ReadInt64(v72);
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") && !Live_IsInSystemlinkLobby() )
    {
      v73 = 0;
      v74 = 0;
      if ( v54 > 0 )
      {
        v75 = 0i64;
        while ( 1 )
        {
          v73 += buffer[v75];
          if ( Party_IsGameLobby(party) && buffer[v75] < Playlist_GetMinPartySize(PlaylistIdForNum) )
          {
            MinPartySize = Playlist_GetMinPartySize(PlaylistIdForNum);
            v83 = buffer[v74];
            v84 = XUID::ToDevString(&result);
            LODWORD(v167) = v176;
            LODWORD(v166) = MinPartySize;
            LODWORD(v165) = v83;
            LODWORD(fmt) = v74;
            Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Not enough members in sub party [%i](%i) - < Playlist_GetMinPartySize (%i), subpartyCount %i\n", party->partyName, v84, fmt, v165, v166, v167);
            v85 = from->addrHandleIndex;
            *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
            *(XUID *)&v170 = result;
            OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
            xuid.addrHandleIndex = v85;
            v19 = (const XUID *)&v170;
            v20 = JOINRESPONSE_ERROR_BAD_REQUEST_SUBPARTYSIZE;
            p_xuid = &xuid;
            goto LABEL_190;
          }
          if ( Party_IsGameLobby(party) && Playlist_GetMaxPartySize(PlaylistIdForNum) > 0 && buffer[v75] > Playlist_GetMaxPartySize(PlaylistIdForNum) )
            break;
          ++v74;
          if ( ++v75 >= *(__int64 *)teamId )
            goto LABEL_87;
        }
        MaxPartySize = Playlist_GetMaxPartySize(PlaylistIdForNum);
        v87 = buffer[v74];
        v88 = XUID::ToDevString(&result);
        LODWORD(v167) = v176;
        LODWORD(v166) = MaxPartySize;
        LODWORD(v165) = v87;
        LODWORD(fmt) = v74;
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Would exceed max party size for this playlist.  Number of players in subparty [%i](%i), max party size (%i), subpartyCount %i\n", party->partyName, v88, fmt, v165, v166, v167);
        v89 = from->addrHandleIndex;
        *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
        *(XUID *)&v170 = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        xuid.addrHandleIndex = v89;
        v19 = (const XUID *)&v170;
        v20 = JOINRESPONSE_ERROR_MAXPARTY_EXCEEDED;
        p_xuid = &xuid;
        goto LABEL_190;
      }
LABEL_87:
      v57 = v172;
      if ( v73 != v172 )
      {
        LODWORD(v167) = v73;
        LODWORD(v166) = v172;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7884, ASSERT_TYPE_ASSERT, "(subpartyPlayerCount == numPlayersJoining)", "%s\n\t%i players joining, but subparties had %i players in it\n", "subpartyPlayerCount == numPlayersJoining", v166, v167) )
          __debugbreak();
      }
      VersionNumber = Playlist_GetVersionNumber();
      v77 = Playlist_GetVersionNumber();
      v78 = v177;
      v79 = v77;
      if ( v177 < VersionNumber )
      {
        v80 = XUID::ToDevString(&result);
        LODWORD(v165) = v78;
        LODWORD(fmt) = v79;
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Incompatible playlist version (too old). Expected (%i), Received (%i)\n", party->partyName, v80, fmt, v165);
        v81 = from->addrHandleIndex;
        *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
        *(XUID *)&v170 = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        xuid.addrHandleIndex = v81;
        v19 = (const XUID *)&v170;
        v20 = JOINRESPONSE_ERROR_BAD_REQUEST_PLAYLIST_OLD;
        p_xuid = &xuid;
        goto LABEL_190;
      }
      if ( v177 > v77 )
      {
        v90 = Playlist_GetVersionNumber();
        v91 = XUID::ToDevString(&result);
        LODWORD(v165) = v78;
        LODWORD(fmt) = v90;
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Incompatible playlist version (too new). Expected (%i), Received (%i)\n", party->partyName, v91, fmt, v165);
        v92 = from->addrHandleIndex;
        *(_OWORD *)&xuid.type = *(_OWORD *)&from->type;
        *(XUID *)&v170 = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        xuid.addrHandleIndex = v92;
        v19 = (const XUID *)&v170;
        v20 = JOINRESPONSE_ERROR_BAD_REQUEST_PLAYLIST_NEW;
        p_xuid = &xuid;
        goto LABEL_190;
      }
      CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
      if ( CurrentLobbyId )
      {
        v94 = *(_QWORD *)&xuid.type;
        if ( *(_QWORD *)&xuid.type != CurrentLobbyId )
        {
          v95 = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
          v96 = XUID::ToDevString(&result);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Incorrect lobby id. Expected (%zu), Received (%zu)\n", party->partyName, v96, v95, v94);
          LODWORD(v95) = from->addrHandleIndex;
          v170 = *(_OWORD *)&from->type;
          *(XUID *)&xuid.type = result;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
          v171 = v95;
          v19 = (const XUID *)&xuid;
          v20 = JOINRESPONSE_ERROR_BAD_REQUEST_LOBBYID_INCORRECT;
          p_xuid = (netadr_t *)&v170;
          goto LABEL_190;
        }
      }
      v10 = Byte;
    }
    if ( LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, "CODTvMenu") )
    {
      v97 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) They are trying to join while we are watching CODTv\n", party->partyName, v97);
      v98 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v98;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_HOST_NOT_READY;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    if ( Party_IsGameLobby(party) && v10 == 5 && Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") && !Party_PrivateMatchmakingAllowed(party) )
    {
      v99 = XUID::ToDevString(&result);
      LODWORD(fmt) = v178;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) They are trying to join an old search result for playlistNum %i but we're in privatematch\n", party->partyName, v99, fmt);
      v100 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v100;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_GAME_PRIVATE;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    if ( Party_ShouldCurrentSessionBeClosed(party) && (unsigned int)(v10 - 1) <= 1 )
    {
      v101 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because our current session is closed.\n", party->partyName, v101);
      v102 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v102;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_CLOSED;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    if ( Party_IsPrivateParty(party) && v10 == 1 && Party_IsInviteOnly(party) )
    {
      v103 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Joining on presence on private party is not allowed.\n", party->partyName, v103);
      v104 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v104;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_PRIVATE;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    *(XUID *)&xuid.type = result;
    v105 = Party_GetNumGameSlots(party);
    v106 = v105;
    if ( v105 > 0xC8 )
    {
      LODWORD(v165) = v105;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7358, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", v165) )
        __debugbreak();
    }
    v107 = 0;
    if ( v106 )
    {
      p_status = &party->partyMembers[0].status;
      while ( *p_status != 2 || !XUID::operator==(&party->partyMembers[v107].challengeRequestXuid, (const XUID *)&xuid) )
      {
        ++v107;
        p_status += 504;
        if ( v107 >= v106 )
        {
          v57 = v172;
          goto LABEL_123;
        }
      }
      challenge = *(PartyJoinChallenge *)party->partyMembers[v107].challenge;
      v115 = XUID::ToDevString(&result);
      Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Received duplicate request for %i players. XUID ( %s ) Resending accept message\n", party->partyName, v172, v115);
      v116 = Sys_Milliseconds();
      PartyAtomicHost_RefreshAnonymousTimeout(party, &challenge, v116);
      goto LABEL_134;
    }
LABEL_123:
    MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, result);
    v110 = MemberByXUID_AllowNotPresent;
    if ( MemberByXUID_AllowNotPresent >= 0 )
    {
      if ( (unsigned int)MemberByXUID_AllowNotPresent >= 0xC8 )
      {
        LODWORD(v166) = 200;
        LODWORD(v165) = MemberByXUID_AllowNotPresent;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7990, ASSERT_TYPE_ASSERT, "(unsigned)( oldMemberIndex ) < (unsigned)( 200 )", "oldMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v165, v166) )
          __debugbreak();
      }
      v111 = XUID::ToDevString(&result);
      MemberStatus = Party_GetMemberStatus(party, v110);
      Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Player in slot %i (status %s) requested to join a second time. XUID ( %s ) \n", party->partyName, (unsigned int)v110, MemberStatus, v111);
      status = party->partyMembers[v110].status;
      if ( status == 1 )
      {
LABEL_138:
        v118 = XUID::ToDevString(&result);
        Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Removing and letting it go through. XUID ( %s )\n", party->partyName, v118);
        PartyHost_RemovePlayer(party, v110, 0, "rejoin", NET_CLOSE_SOFT);
        goto LABEL_139;
      }
      if ( status > 2u )
      {
        if ( status <= 4u )
        {
          v117 = XUID::ToDevString(&result);
          Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Clearing them and having them rejoin. XUID ( %s )\n", party->partyName, v117);
          party->partyMembers[v110].lastPacketTime = Sys_Milliseconds();
          PartyAtomicHost_BuildRandomChallenge(&challenge);
          goto LABEL_134;
        }
        if ( status == 5 )
        {
          if ( Com_IsGameLocalServerRunning() )
          {
            CL_Live_RequestClientDrop(v110, SV_LIVE_DROP_INACTIVE, "rejoin");
            v114 = XUID::ToDevString(&result);
            Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Silently rejecting incoming party member. XUID ( %s ) They will be dropped from our game if inactive.\n", party->partyName, v114);
            return;
          }
          goto LABEL_138;
        }
      }
      LODWORD(v165) = status;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8026, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected party status %i", v165) )
        __debugbreak();
    }
LABEL_139:
    v119 = *(_OWORD *)&from->type;
    xuid.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&xuid.type = v119;
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &xuid);
    v121 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      v122 = XUID::ToDevString(&result);
      v123 = Party_GetMemberStatus(party, v121);
      Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Player in slot %i (status %s) requested to join with a different XUID ( %s ) through the same address.\n", party->partyName, (unsigned int)v121, v123, v122);
      if ( (unsigned int)v121 >= 0xC8 )
      {
        LODWORD(v166) = 200;
        LODWORD(v165) = v121;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8039, ASSERT_TYPE_ASSERT, "(unsigned)( oldMemberIndex ) < (unsigned)( 200 )", "oldMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v165, v166) )
          __debugbreak();
      }
      v124 = party->partyMembers[v121].status;
      if ( ((v124 - 1) & 0xFD) != 0 )
      {
        if ( (unsigned __int8)(v124 - 4) > 1u )
        {
          LODWORD(v165) = v124;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8061, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected party status %i", v165) )
            __debugbreak();
          goto LABEL_150;
        }
        if ( Com_IsGameLocalServerRunning() )
        {
          CL_Live_RequestClientDrop(v121, SV_LIVE_DROP_INACTIVE, "rejoin");
          v125 = XUID::ToDevString(&result);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Silently rejecting incoming party member. XUID ( %s ) They will be dropped from our game if inactive\n", party->partyName, v125);
          return;
        }
      }
      v126 = XUID::ToDevString(&result);
      Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Dropping existing player. XUID ( %s ) \n", party->partyName, v126);
      PartyHost_RemovePlayer(party, v121, 0, "rejoin", NET_CLOSE_SOFT);
    }
LABEL_150:
    if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
    {
      v127 = *(_OWORD *)&from->type;
      xuid.addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&xuid.type = v127;
      v128 = PartyAtomicHost_HandleJoinRequest_ShouldLetThemConnect(party, *(const LocalClientNum_t *)v170, &xuid, v57, &g_partyJoinInfo);
      if ( v128 != JOINRESPONSE_SUCCESS )
      {
        v129 = from->addrHandleIndex;
        v170 = *(_OWORD *)&from->type;
        *(XUID *)&xuid.type = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        v171 = v129;
        v19 = (const XUID *)&xuid;
        v20 = v128;
        p_xuid = (netadr_t *)&v170;
        goto LABEL_190;
      }
    }
    v130 = msga[0];
    Bit = MSG_ReadBit(msga[0]);
    v132 = Byte;
    if ( !Bit && party->iscrossplayParty && (unsigned int)(Byte - 1) <= 1 )
    {
      v133 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because our current session is closed.\n", party->partyName, v133);
      v134 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v134;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_CROSSPLAY_PERMISSION_MISMATCH;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    Bits = MSG_ReadBits(v130, 3u);
    v136 = Bits;
    if ( (unsigned __int64)(Bits + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum ClientPlatform __cdecl truncate_cast_impl<enum ClientPlatform,__int64>(__int64)", "signed", (char)Bits, "signed", Bits) )
      __debugbreak();
    if ( (unsigned int)(v132 - 1) <= 1 && (unsigned __int8)GetClientPlatform() != v136 && !Live_DoAllActiveControllersHaveCrossplayPermissions() )
    {
      v137 = XUID::ToDevString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because we dont have crossplay permissions and the joiner is from another platform.\n", party->partyName, v137);
      v138 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v138;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_HOST_CANNOT_CROSSPLAY;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    if ( (unsigned int)(v132 - 1) <= 1 && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_should_check_platforms_can_play_gametype_for_party_join, "online_should_check_platforms_can_play_gametype_for_party_join") && Party_IsGameLobby(party) )
    {
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
      if ( !Live_CanGameTypeBePlayedOnPlatform(String_Internal_DebugName, (ClientPlatform)v136) )
      {
        v140 = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
        v141 = XUID::ToDevString(&result);
        LODWORD(v165) = (char)v136;
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because the game type we are playing now %s is not accessible to the joiner's platform %d.\n", party->partyName, v141, v140, v165);
        LODWORD(v140) = from->addrHandleIndex;
        v170 = *(_OWORD *)&from->type;
        *(XUID *)&xuid.type = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        v171 = (int)v140;
        v19 = (const XUID *)&xuid;
        v20 = JOINRESPONSE_ERROR_ACCESS_DENIED_FOR_GAME_TYPE;
        p_xuid = (netadr_t *)&v170;
        goto LABEL_190;
      }
    }
    v142 = MSG_ReadBit(v130) != 0;
    if ( (unsigned int)(v132 - 1) <= 1 && v142 && !Live_CanCurrentGamemodeSupportSplitscreen() )
    {
      v143 = XUID::ToDevString(&result);
      LODWORD(fmt) = v172;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) because there are splitscreen members in the incoming party and our current gamemode doesnt support splitscreen, num players joining %d\n", party->partyName, v143, fmt);
      v144 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v144;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_BAD_REQUEST_SPLITSCREEN_NOT_SUPPORTED_IN_CURRENT_GAMEMODE;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    v145 = MSG_ReadBit(v130) != 0;
    if ( (unsigned int)(v132 - 1) <= 1 && !v145 && PartyHost_PartyRestrictsF2PUsers(party) )
    {
      v146 = XUID::ToString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting F2P user (%s) because party F2P users are prohibited\n", party->partyName, v146);
      v147 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v147;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_F2P_USERS_NOT_PERMITTED;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    v148 = MSG_ReadBit(v130) != 0;
    if ( (unsigned int)(v132 - 1) <= 1 && !v148 && PartyHost_PartyRequiresOnlineSubscriptionForPlatform(party, (ClientPlatform)v136) )
    {
      v149 = XUID::ToString(&result);
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting subscriptionless user (%s) because subscriptionless users are prohibited\n", party->partyName, v149);
      v150 = from->addrHandleIndex;
      v170 = *(_OWORD *)&from->type;
      *(XUID *)&xuid.type = result;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
      v171 = v150;
      v19 = (const XUID *)&xuid;
      v20 = JOINRESPONSE_ERROR_SUBSCRIPTIONLESS_USERS_NOT_PERMITTED;
      p_xuid = (netadr_t *)&v170;
      goto LABEL_190;
    }
    if ( Party_IsServerRunning(party) )
    {
      v151 = Party_GetNumGameSlots(party);
      PartyData = Lobby_GetPartyData();
      v153 = Party_CountMembersEvenIfInactive(PartyData, PARTY_MEMBER_TYPE_PLAYER_ONLY);
      if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
      {
        BotsReservedSlotsAllies = BG_Bots_GetBotsReservedSlotsAllies();
        v155 = BG_Bots_GetBotsReservedSlotsAxis() + BotsReservedSlotsAllies;
      }
      else
      {
        v155 = 0;
      }
      if ( v155 + v153 >= v151 )
      {
        v156 = XUID::ToDevString(&result);
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We're running a server, but the match is ranked or full.\n", party->partyName, v156);
        v157 = from->addrHandleIndex;
        v170 = *(_OWORD *)&from->type;
        *(XUID *)&xuid.type = result;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, result);
        v171 = v157;
        v19 = (const XUID *)&xuid;
        v20 = JOINRESPONSE_ERROR_GAME_FULL;
        p_xuid = (netadr_t *)&v170;
        goto LABEL_190;
      }
    }
    v158 = v172;
    v159 = v176;
    LODWORD(fmt) = v176;
    Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Request for %i players in %i subparties to join the %s\n", party->partyName, v172, fmt, party->partyName);
    v160 = *(_OWORD *)&from->type;
    xuid.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&xuid.type = v160;
    if ( !PartyAtomicHost_AddJoinRequest(party, *(_DWORD *)(v170 + 4), &xuid, result, v158, v132, v159, buffer, &challenge) )
      return;
    v161 = XUID::ToDevString(&result);
    Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Accepting incoming party member. XUID ( %s ) Sending 'pa_accept'.\n", party->partyName, v161);
LABEL_134:
    PartyAtomicHost_SendAcceptMessage(party, from, &challenge, result);
    return;
  }
  Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We aren't accepting lobby connections.\n", party->partyName);
  v17 = XUID::NullXUID((XUID *)&xuid);
  v18 = from->addrHandleIndex;
  *(_OWORD *)msga = *(_OWORD *)&from->type;
  *(XUID *)&v170 = (XUID)v17->m_id;
  OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v170);
  v174 = v18;
  v19 = (const XUID *)&v170;
  v20 = JOINRESPONSE_ERROR_DEBUG_DISABLED;
  p_xuid = (netadr_t *)msga;
LABEL_190:
  PartyAtomicHost_SendJoinFailedResponseWithPayload(party, p_xuid, v20, v19, NULL, 0);
}

/*
==============
PartyAtomicHost_HandleMemberJoin
==============
*/
void PartyAtomicHost_HandleMemberJoin(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  const dvar_t *v8; 
  XUID v9; 
  int addrHandleIndex; 
  PartyJoinResponse v11; 
  XUID v12; 
  XUID v13; 
  XUID v14; 
  __int64 Bits; 
  unsigned int Byte; 
  unsigned int Short; 
  const char *v18; 
  Online_BlockList *Instance; 
  int SplitscreenClientNumAtSameAddress; 
  int v21; 
  const char *v22; 
  const XUID *v23; 
  XUID *v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  int NumGameSlots; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  unsigned __int8 ActiveGameMode; 
  bool ShouldJoinerGoToBRBlade; 
  __int64 MemberByXUID_AllowNotPresent; 
  unsigned __int8 *p_status; 
  unsigned __int8 v36; 
  const char *MemberName; 
  int FirstMemberAtAddr; 
  __int64 v39; 
  const char *MemberStatus; 
  unsigned __int8 status; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned __int8 *v45; 
  const char *String_Internal_DebugName; 
  const char *v47; 
  const char *v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned __int8 *v52; 
  __int64 v53; 
  unsigned __int8 v54; 
  unsigned __int8 v55; 
  const char *v56; 
  char *fmt; 
  __int64 natType; 
  __int64 natTypea; 
  ClientAuthoritativeMemberInfo *memberInfo; 
  ClientAuthoritativeMemberInfo *memberInfoa; 
  __int64 joinType; 
  __int64 joinTypea; 
  __int64 v64; 
  netadr_t v65; 
  XUID v66; 
  XUID xuid; 
  unsigned int v68; 
  XUID result; 
  int isGuestAccount; 
  XUID v71; 
  msg_t buf; 
  __int64 v73; 
  PartyJoinChallenge challenge; 
  bdSecurityID buffer; 
  ClientAuthoritativeMemberInfo privatePartyId; 
  char v77[768]; 
  unsigned int v78; 
  unsigned __int8 data[64]; 

  v73 = -2i64;
  v66.m_id = (unsigned __int64)mainActiveClient;
  XUID::XUID(&xuid);
  bdSecurityID::bdSecurityID(&buffer);
  bdSecurityID::bdSecurityID(&privatePartyId.privatePartyId);
  v65 = *from;
  if ( NET_IsLocalAddress(&v65) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Sent memberJoin to ourself.\n", party->partyName);
    goto LABEL_143;
  }
  v8 = DVARBOOL_party_rejectLobbyMemberJoin;
  if ( !DVARBOOL_party_rejectLobbyMemberJoin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_rejectLobbyMemberJoin") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled && Party_IsGameLobby(party) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. Disabled by party_rejectLobbyMemberJoin.\n", party->partyName);
    v9.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = v9.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v9);
    v11 = JOINRESPONSE_ERROR_DEBUG_DISABLED;
LABEL_142:
    v65.addrHandleIndex = addrHandleIndex;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v65, v11, &v66, NULL, 0);
    goto LABEL_143;
  }
  if ( !party->inParty )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. Received memberJoin but we are not in a party.\n", party->partyName);
LABEL_11:
    v12.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = v12.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v12);
    v11 = JOINRESPONSE_ERROR_HOST_NOT_HOSTING;
    goto LABEL_142;
  }
  if ( !party->areWeHost )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. Received memberJoin but we are not the host.\n", party->partyName);
    goto LABEL_11;
  }
  if ( !Party_IsServerRunning(party) && !Party_IsRunning(party) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. Got stray memberJoin message.\n", party->partyName);
    v13.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = v13.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v13);
    v11 = JOINRESPONSE_ERROR_HOST_NOT_HOSTING_PARTY;
    goto LABEL_142;
  }
  if ( SV_IsMigrating() )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. Our game is migrating hosts\n", party->partyName);
    v14.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = v14.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v14);
    v11 = JOINRESPONSE_ERROR_GAME_MIGRATING;
    goto LABEL_142;
  }
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8249, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_ReadData(msg, 8, &buffer, 8);
  MSG_ReadData(msg, 6, &challenge, 6);
  XUID::Deserialize(&xuid, msg);
  isGuestAccount = MSG_ReadBit(msg) != 0;
  Bits = MSG_ReadBits(msg, 2u);
  if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
    __debugbreak();
  if ( Live_IsInSystemlinkLobby() )
    LODWORD(Bits) = 1;
  Byte = MSG_ReadByte(msg);
  v68 = Byte;
  memset_0(&privatePartyId, 0, sizeof(privatePartyId));
  Party_ReadMemberInfo(msg, &privatePartyId, xuid);
  PlayercardCache_MarkPartyDirty(mainActiveClient->localControllerIndex, 3);
  Short = MSG_ReadShort(msg);
  v78 = Short;
  if ( Short > 0x300 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8377, ASSERT_TYPE_ASSERT, "(authTicket.ticketSize <= 768)", (const char *)&queryFormat, "authTicket.ticketSize <= P2P_AUTH_TICKET_SIZE_MAX") )
      __debugbreak();
    Short = v78;
  }
  if ( Short )
    MSG_ReadData(msg, Short, v77, 768);
  if ( msg->overflowed || msg->readcount != msg->cursize + msg->splitSize )
  {
    v65 = *from;
    v56 = NET_AdrToString(&v65);
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member - invalid packet (%s)\n", party->partyName, v56);
    goto LABEL_141;
  }
  if ( XUID::IsNull(&xuid) )
  {
    v18 = XUID::ToDevString(&xuid);
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member - invalid xuid %s\n", party->partyName, v18);
LABEL_141:
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_BAD_REQUEST_PACKET;
    goto LABEL_142;
  }
  if ( (unsigned int)(Bits - 1) > 2 )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member - invalid nat type %i\n", party->partyName, (unsigned int)Bits);
    goto LABEL_141;
  }
  if ( Byte - 1 > 5 )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. Bad join type %i\n", party->partyName, Byte);
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_BAD_REQUEST_TYPE;
    goto LABEL_142;
  }
  Instance = Online_BlockList::GetInstance();
  if ( Online_BlockList::IsBlocked(Instance, mainActiveClient->localControllerIndex, xuid) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. On hosts blocklist\n", party->partyName);
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_USER_IN_HOSTS_BLOCKLIST;
    goto LABEL_142;
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_party_check_mm_on_member_join, "party_check_mm_on_member_join") && OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    v65 = *from;
    if ( Net_IsSplitscreenAdr(&v65) )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_party_check_mm_on_splitscreen_member_join, "party_check_mm_on_splitscreen_member_join") )
      {
        v65 = *from;
        SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, &v65);
        v21 = SplitscreenClientNumAtSameAddress;
        if ( SplitscreenClientNumAtSameAddress == -1 )
        {
          v22 = XUID::ToDevString(&xuid);
          Com_PrintError(131097, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming splitscreen party member. XUID ( %s ) We are matchmaking and the primary player was not found in the party.\n", party->partyName, v22);
LABEL_47:
          *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
          addrHandleIndex = from->addrHandleIndex;
          v66.m_id = xuid.m_id;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
          v11 = JOINRESPONSE_ERROR_BAD_REQUEST_NOT_APPROVED_BY_MATCHMAKER;
          goto LABEL_142;
        }
        v23 = Party_GetXuid(&result, party, SplitscreenClientNumAtSameAddress);
        if ( !OnlineMatchmakerOmniscient::IsSplitscreenPlayerAllowedToJoin(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v23->m_id) )
        {
          v24 = Party_GetXuid(&v66, party, v21);
          v25 = XUID::ToDevString(v24);
          v26 = XUID::ToDevString(&xuid);
          Com_PrintError(131097, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming splitscreen party member. XUID ( %s ) We are matchmaking and the primary player ( %s ) has not requested a slot during matchmaking.\n", party->partyName, v26, v25);
          *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
          addrHandleIndex = from->addrHandleIndex;
          v66.m_id = xuid.m_id;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
          v11 = JOINRESPONSE_ERROR_BAD_REQUEST_NOT_APPROVED_BY_MATCHMAKER;
          goto LABEL_142;
        }
      }
    }
    else if ( !OnlineMatchmakerOmniscient::IsPlayerAllowedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid) )
    {
      v27 = XUID::ToDevString(&xuid);
      Com_PrintError(131097, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. XUID ( %s ) We are matchmaking and the XUID has not been whitelisted by Demonware.\n", party->partyName, v27);
      goto LABEL_47;
    }
  }
  NumGameSlots = Party_GetNumGameSlots(party);
  LODWORD(result.m_id) = NumGameSlots;
  v29 = XUID::ToDevString(&xuid);
  v65 = *from;
  v30 = NET_AdrToString(&v65);
  Com_Printf(25, "[%s] PartyJoin - HandleMemberJoin - Received 'pa_memberjoin' from '%s' (%s)\n", party->partyName, v30, v29);
  MSG_Init(&buf, data, 64);
  v31 = j_va("%i%s", (unsigned int)party->partyId, "pa_joined");
  MSG_WriteString(&buf, v31);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  MSG_WriteByte(&buf, ActiveGameMode);
  ShouldJoinerGoToBRBlade = PartyHost_ShouldJoinerGoToBRBlade(party);
  MSG_WriteBool(&buf, !ShouldJoinerGoToBRBlade);
  MSG_WriteBool(&buf, party->party_systemActive == 0);
  XUID::NullXUID(&v71);
  XUID::Serialize(&v71, &buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8484, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &replyMsg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &replyMsg )") )
    __debugbreak();
  MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, xuid);
  if ( (int)MemberByXUID_AllowNotPresent >= 0 )
  {
    if ( (unsigned int)MemberByXUID_AllowNotPresent >= 0xC8 )
    {
      LODWORD(memberInfo) = 200;
      LODWORD(natType) = MemberByXUID_AllowNotPresent;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8489, ASSERT_TYPE_ASSERT, "(unsigned)( oldMemberIndex ) < (unsigned)( 200 )", "oldMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", natType, memberInfo) )
        __debugbreak();
    }
    p_status = &party->partyMembers[MemberByXUID_AllowNotPresent].status;
    v36 = *p_status;
    if ( *p_status == 1 )
    {
LABEL_76:
      v65 = *from;
      PartyHost_ReviveLostPartyMember(party, MemberByXUID_AllowNotPresent, &v65);
LABEL_77:
      if ( NumGameSlots <= Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY) )
      {
        LODWORD(v64) = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
        LODWORD(joinType) = NumGameSlots;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8509, ASSERT_TYPE_ASSERT, "( totalSlots ) > ( Party_CountMembersEvenIfInactive( party, PARTY_MEMBER_TYPE_PLAYER_ONLY ) )", "%s > %s\n\t%i, %i", "totalSlots", "Party_CountMembersEvenIfInactive( party, PARTY_MEMBER_TYPE_PLAYER_ONLY )", joinType, v64) )
          __debugbreak();
      }
      LODWORD(fmt) = *p_status;
      Com_Printf(25, "[%s] PartyJoin - HandleMemberJoin - Received duplicate memberJoin message from joined client %i (current status %i). Telling them to commit.\n", party->partyName, (unsigned int)MemberByXUID_AllowNotPresent, fmt);
      PartyHost_MarkPacketReceivedForJoiningPlayer(party, xuid, &challenge, &privatePartyId.privatePartyId);
      v65 = *from;
      PartyHost_ReceivedUpdatedMemberInfo(party, *(_DWORD *)(v66.m_id + 4), MemberByXUID_AllowNotPresent, &v65, &privatePartyId);
      RMsg_AddMessage(from, &buf, NS_MAXCLIENTS);
      goto LABEL_143;
    }
    if ( v36 > 2u )
    {
      if ( v36 <= 4u )
        goto LABEL_77;
      if ( v36 == 5 )
      {
        if ( Com_IsGameLocalServerRunning() )
        {
          CL_Live_RequestClientDrop(MemberByXUID_AllowNotPresent, SV_LIVE_DROP_INACTIVE, "rejoin");
          MemberName = Party_GetMemberName(party, MemberByXUID_AllowNotPresent);
          Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Silently rejecting incoming party member. They will be dropped from our game if inactive (slot %i, \"%s\").\n", party->partyName, (unsigned int)MemberByXUID_AllowNotPresent, MemberName);
          goto LABEL_143;
        }
        goto LABEL_76;
      }
    }
    LODWORD(natType) = v36;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8517, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected party status %i", natType) )
      __debugbreak();
    Byte = v68;
  }
  v65 = *from;
  FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &v65);
  v39 = FirstMemberAtAddr;
  if ( FirstMemberAtAddr >= 0 )
  {
    MemberStatus = Party_GetMemberStatus(party, FirstMemberAtAddr);
    Com_Printf(25, "[%s] PartyJoin - HandleMemberJoin - Player in slot %i (status %s) requested to join with a different XUID through the same address.\n", party->partyName, (unsigned int)v39, MemberStatus);
    if ( (unsigned int)v39 >= 0xC8 )
    {
      LODWORD(memberInfo) = 200;
      LODWORD(natType) = v39;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8530, ASSERT_TYPE_ASSERT, "(unsigned)( oldMemberIndex ) < (unsigned)( 200 )", "oldMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", natType, memberInfo) )
        __debugbreak();
    }
    status = party->partyMembers[v39].status;
    if ( ((status - 1) & 0xFD) != 0 )
    {
      if ( (unsigned __int8)(status - 4) > 1u )
      {
        LODWORD(natType) = status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8552, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected party status %i", natType) )
          __debugbreak();
        goto LABEL_84;
      }
      if ( Com_IsGameLocalServerRunning() )
      {
        CL_Live_RequestClientDrop(v39, SV_LIVE_DROP_INACTIVE, "rejoin");
        Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Silently rejecting incoming party member. They will be dropped from our game if inactive\n", party->partyName);
        goto LABEL_143;
      }
    }
    Com_Printf(25, "[%s] PartyJoin - HandleMemberJoin - Dropping existing player.\n", party->partyName);
    PartyHost_RemovePlayer(party, v39, 0, "rejoin", NET_CLOSE_SOFT);
  }
LABEL_84:
  if ( NumGameSlots <= Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Not enough slots for another player - telling the client that the connection failed\n", party->partyName);
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_GAME_FULL;
    goto LABEL_142;
  }
  if ( !PartyHost_CountOpenSlots(party) )
  {
    LODWORD(fmt) = Byte;
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Not enough slots for another public player. Telling the client that the connection failed. There were %i total slots. joinType was %i.\n", party->partyName, (unsigned int)NumGameSlots, fmt);
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_GAME_FULL_NO_PUBLIC_SLOTS;
    goto LABEL_142;
  }
  if ( Party_UsingPartyBasedTeams(party) )
  {
    if ( Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8575, ASSERT_TYPE_ASSERT, "(!Party_IsPrivateParty( party ))", (const char *)&queryFormat, "!Party_IsPrivateParty( party )") )
      __debugbreak();
    if ( party->subpartyCount > 1 )
    {
      v42 = Party_GetNumGameSlots(party);
      v43 = v42;
      if ( v42 > 0xC8 )
      {
        LODWORD(natType) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2034, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", natType) )
          __debugbreak();
      }
      v44 = 0;
      if ( !v43 )
      {
LABEL_101:
        Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Using party based teams - there are already %i subparties.\n", party->partyName, party->subpartyCount);
        *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
        addrHandleIndex = from->addrHandleIndex;
        v66.m_id = xuid.m_id;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
        v11 = JOINRESPONSE_ERROR_GAME_FULL_PARTY_TEAM_COUNT;
        goto LABEL_142;
      }
      v45 = &party->partyMembers[0].status;
      while ( (*v45 & 0xFD) == 0 || *(_QWORD *)&party->partyMembers[v44].info.privatePartyId != *(_QWORD *)&privatePartyId.privatePartyId )
      {
        ++v44;
        v45 += 504;
        if ( v44 >= v43 )
          goto LABEL_101;
      }
    }
  }
  if ( Byte - 1 <= 1 && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_should_check_platforms_can_play_gametype_for_party_join, "online_should_check_platforms_can_play_gametype_for_party_join") && Party_IsGameLobby(party) )
  {
    String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
    if ( !Live_CanGameTypeBePlayedOnPlatform(String_Internal_DebugName, (ClientPlatform)(unsigned __int8)privatePartyId.platform[0]) )
    {
      v47 = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
      v48 = XUID::ToDevString(&xuid);
      LODWORD(natType) = (char)privatePartyId.platform[0];
      Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting incoming party member. XUID ( %s ) because the game type we are playing now %s is not accessible to the joiner's platform %d.\n", party->partyName, v48, v47, natType);
      *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
      addrHandleIndex = from->addrHandleIndex;
      v66.m_id = xuid.m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
      v11 = JOINRESPONSE_ERROR_ACCESS_DENIED_FOR_GAME_TYPE;
      goto LABEL_142;
    }
  }
  v49 = Party_GetNumGameSlots(party);
  v50 = v49;
  if ( v49 > 0xC8 )
  {
    LODWORD(natType) = v49;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8225, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", natType) )
      __debugbreak();
  }
  v51 = 0;
  if ( !v50 )
  {
LABEL_116:
    Com_PrintError(25, "[%s] PartyJoin - HandleMemberJoin - Invalid challenge %s\n", party->partyName, challenge.str);
    Com_PrintError(25, "[%s] PartyJoin - HandleMemberJoin - Could not find slot for challenge provided\n", party->partyName);
    *(_OWORD *)&v65.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v66.m_id = xuid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, xuid);
    v11 = JOINRESPONSE_ERROR_GAME_BAD_CHALLENGE;
    goto LABEL_142;
  }
  v52 = &party->partyMembers[0].status;
  while ( 1 )
  {
    if ( *v52 == 2 )
    {
      v53 = v51;
      if ( *(_DWORD *)party->partyMembers[v53].challenge == *(_DWORD *)challenge.str && party->partyMembers[v53].challenge[4] == challenge.str[4] )
        break;
    }
    ++v51;
    v52 += 504;
    if ( v51 >= v50 )
      goto LABEL_116;
  }
  Com_Printf(25, "[%s] PartyJoin - HandleMemberJoin - Claiming memberIndex %i for challenge %s\n", party->partyName, v51, challenge.str);
  v54 = party->partyMembers[v51].status;
  if ( v54 != 2 )
  {
    LODWORD(v64) = 2;
    LODWORD(joinType) = v54;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8602, ASSERT_TYPE_ASSERT, "( party->partyMembers[newMemberIndex].status ) == ( PARTYSTATUS_ANONYMOUS )", "%s == %s\n\t%i, %i", "party->partyMembers[newMemberIndex].status", "PARTYSTATUS_ANONYMOUS", joinType, v64) )
      __debugbreak();
  }
  PartyHost_AddPlayerAtSlot_Internal(party, *(_DWORD *)(v66.m_id + 4), v51, &xuid, isGuestAccount, Bits, &privatePartyId, v68);
  if ( Party_IsMemberRegistered(party, v51) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8604, ASSERT_TYPE_ASSERT, "(!Party_IsMemberRegistered( party, newMemberIndex ))", (const char *)&queryFormat, "!Party_IsMemberRegistered( party, newMemberIndex )") )
    __debugbreak();
  if ( PartyHost_AcceptConnection(party, v51, from) )
  {
    if ( v51 != Party_FindMemberByXUID_AllowNotPresent(party, xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8613, ASSERT_TYPE_ASSERT, "(newMemberIndex == static_cast<uint>( Party_FindMemberByXUID_AllowNotPresent( party, xuid ) ))", "%s\n\tFailed to add member in the returned slot", "newMemberIndex == static_cast<uint>( Party_FindMemberByXUID_AllowNotPresent( party, xuid ) )") )
      __debugbreak();
    if ( v51 >= LODWORD(result.m_id) )
    {
      LODWORD(memberInfoa) = result.m_id;
      LODWORD(natTypea) = v51;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8614, ASSERT_TYPE_ASSERT, "(unsigned)( newMemberIndex ) < (unsigned)( totalSlots )", "newMemberIndex doesn't index totalSlots\n\t%i not in [0, %i)", natTypea, memberInfoa) )
        __debugbreak();
    }
    v55 = party->partyMembers[v51].status;
    if ( v55 != 3 )
    {
      LODWORD(v64) = 3;
      LODWORD(joinTypea) = v55;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8615, ASSERT_TYPE_ASSERT, "( party->partyMembers[newMemberIndex].status ) == ( PARTYSTATUS_JOINED )", "%s == %s\n\t%i, %i", "party->partyMembers[newMemberIndex].status", "PARTYSTATUS_JOINED", joinTypea, v64) )
        __debugbreak();
    }
    if ( *(_QWORD *)&privatePartyId.privatePartyId != *(_QWORD *)&party->partyMembers[v51].info.privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8616, ASSERT_TYPE_ASSERT, "(I_memcmp( &memberInfo.privatePartyId.ab, &party->partyMembers[newMemberIndex].info.privatePartyId.ab, sizeof( XNKID ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &memberInfo.privatePartyId.ab, &party->partyMembers[newMemberIndex].info.privatePartyId.ab, sizeof( XNKID ) ) == 0") )
      __debugbreak();
    PartyHost_MarkPacketReceivedForJoiningPlayer(party, xuid, &challenge, &privatePartyId.privatePartyId);
    RMsg_AddMessage(from, &buf, NS_MAXCLIENTS);
    PartyChat_ClearMemberPartyChataData(party, v51);
  }
  else
  {
    PartyHost_HandleFailedAccept(party, v51, &xuid, from);
  }
LABEL_143:
  bdSecurityID::~bdSecurityID(&privatePartyId.privatePartyId);
  bdSecurityID::~bdSecurityID(&buffer);
}

/*
==============
PartyAtomicHost_HandleMemberCommit
==============
*/
void PartyAtomicHost_HandleMemberCommit(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  XUID v8; 
  int addrHandleIndex; 
  PartyJoinResponse v10; 
  bool v11; 
  __int64 MemberByXUID_AllowNotPresent; 
  bdSecurityID v13; 
  const char *v14; 
  const char *v15; 
  PartyMember *v16; 
  XUID v17; 
  int v18; 
  bdSecurityID *SecurityId; 
  unsigned __int8 status; 
  const char *v21; 
  int v22; 
  const char *v23; 
  const char *v24; 
  int v25; 
  unsigned __int8 v26; 
  bool v27; 
  int v28; 
  bdSecurityID *v29; 
  int v30; 
  __int64 v31; 
  __int64 v32; 
  netadr_t v33; 
  XUID v34; 
  XUID player; 
  bool v36; 
  XUID result; 
  __int64 v38; 
  bdSecurityID buffer; 

  v38 = -2i64;
  XUID::XUID(&player);
  bdSecurityID::bdSecurityID(&buffer);
  v33 = *from;
  if ( NET_IsLocalAddress(&v33) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Stray commit message. Sent join request to ourself.\n", party->partyName);
    goto LABEL_76;
  }
  if ( !party->inParty )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberCommit - Stray commit message. We are not in a party.\n", party->partyName);
LABEL_7:
    v8.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v34.m_id = v8.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v8);
    v10 = JOINRESPONSE_ERROR_HOST_NOT_HOSTING;
LABEL_8:
    v33.addrHandleIndex = addrHandleIndex;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v33, v10, &v34, NULL, 0);
    goto LABEL_76;
  }
  if ( !party->areWeHost )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberCommit - Stray commit message. We are not the host.\n", party->partyName);
    goto LABEL_7;
  }
  XUID::Deserialize(&player, msg);
  MSG_ReadData(msg, 8, &buffer, 8);
  v11 = MSG_ReadBit(msg) != 0;
  v36 = MSG_ReadBit(msg) != 0;
  MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player);
  v13 = buffer;
  v14 = XUID::ToDevString(&player);
  v33 = *from;
  v15 = NET_AdrToString(&v33);
  Com_Printf(131097, "[%s] PartyJoin - HandleMemberCommit - Received 'pa_membercommit' from '%s' (%i %s)(party id %zx)\n", party->partyName, v15, MemberByXUID_AllowNotPresent, v14, *(_QWORD *)&v13);
  if ( (int)MemberByXUID_AllowNotPresent < 0 )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Invalid member slot %i.\n", party->partyName, (unsigned int)MemberByXUID_AllowNotPresent);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v10 = JOINRESPONSE_ERROR_BAD_COMMIT_XUID;
    goto LABEL_8;
  }
  v16 = &party->partyMembers[MemberByXUID_AllowNotPresent];
  if ( !Party_IsServerRunning(party) && !Party_IsRunning(party) && party->partyMembers[MemberByXUID_AllowNotPresent].joinType != 6 )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Party or server is not running.\n", party->partyName);
    v17.m_id = XUID::NullXUID(&result)->m_id;
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    v18 = from->addrHandleIndex;
    v34.m_id = v17.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v17);
    v33.addrHandleIndex = v18;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v33, JOINRESPONSE_ERROR_HOST_NOT_HOSTING_PARTY, &v34, NULL, 0);
    goto LABEL_76;
  }
  if ( *(_QWORD *)&v16->info.privatePartyId != buffer )
  {
    if ( !Party_IsPrivateParty(party) || (SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo), !bdSecurityID::operator==(SecurityId, &party->partyMembers[MemberByXUID_AllowNotPresent].info.privatePartyId)) )
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Unknown member party id, expecting %zx\n", party->partyName, *(_QWORD *)&v16->info.privatePartyId);
      *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
      addrHandleIndex = from->addrHandleIndex;
      v34.m_id = player.m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
      v10 = JOINRESPONSE_ERROR_BAD_COMMIT_PARTYID;
      goto LABEL_8;
    }
    status = party->partyMembers[MemberByXUID_AllowNotPresent].status;
    if ( status <= 3u )
    {
      LODWORD(v31) = status;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8713, ASSERT_TYPE_ASSERT, "( ( partyMember->status > PARTYSTATUS_JOINED ) )", "( partyMember->status ) = %i", v31) )
        __debugbreak();
    }
  }
  if ( Party_IsMatchmakingLobby(party) && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_party_validate_service_level_with_matchmaker, "online_party_validate_service_level_with_matchmaker") && OnlineMatchmakerOmniscient::IsPaidUser(&OnlineMatchmakerOmniscient::ms_instance, player) != v11 )
  {
    v21 = "freemium";
    if ( v11 )
      v21 = "paid";
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - mismatch self reported as %s user but matchmaker disagrees\n", party->partyName, v21);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    v22 = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v33.addrHandleIndex = v22;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v33, JOINRESPONSE_ERROR_F2P_USERS_NOT_PERMITTED, &v34, NULL, 0);
    goto LABEL_76;
  }
  if ( !v11 && PartyHost_PartyRestrictsF2PUsers(party) )
  {
    v23 = XUID::ToString(&player);
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting F2P user (%s) because party F2P users are prohibited\n", party->partyName, v23);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v10 = JOINRESPONSE_ERROR_F2P_USERS_NOT_PERMITTED;
    goto LABEL_8;
  }
  if ( !v36 && PartyHost_PartyRequiresOnlineSubscriptionForPlatform(party, (ClientPlatform)(unsigned __int8)party->partyMembers[MemberByXUID_AllowNotPresent].info.platform[0]) )
  {
    v24 = XUID::ToString(&player);
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Rejecting subscriptionless user (%s) because party subscriptionless users are prohibited\n", party->partyName, v24);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    v25 = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v33.addrHandleIndex = v25;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v33, JOINRESPONSE_ERROR_SUBSCRIPTIONLESS_USERS_NOT_PERMITTED, &v34, NULL, 0);
    goto LABEL_76;
  }
  v26 = party->partyMembers[MemberByXUID_AllowNotPresent].status;
  if ( (v26 & 0xFD) == 0 )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Invalid member status %i.\n", party->partyName, v26);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v10 = JOINRESPONSE_ERROR_BAD_COMMIT_STATUS;
    goto LABEL_8;
  }
  if ( v26 != 1 )
  {
    if ( v26 != 3 )
    {
      if ( v26 == 4 )
      {
        if ( !Party_IsPrivateParty(party) && *(_QWORD *)&v16->info.privatePartyId != buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8796, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ) || I_memcmp( &partyMember->info.privatePartyId, &privatePartyId, sizeof( privatePartyId ) ) == 0)", (const char *)&queryFormat, "Party_IsPrivateParty( party ) || I_memcmp( &partyMember->info.privatePartyId, &privatePartyId, sizeof( privatePartyId ) ) == 0") )
          __debugbreak();
        PartyHost_UpdatePlayerStatus(party, mainActiveClient->localControllerIndex, MemberByXUID_AllowNotPresent, 4);
        goto LABEL_66;
      }
      if ( v26 < 5u )
      {
        LODWORD(v31) = v26;
        v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8802, ASSERT_TYPE_ASSERT, "( ( partyMember->status >= PARTYSTATUS_PRESENT ) )", "( partyMember->status ) = %i", v31);
        goto LABEL_64;
      }
      goto LABEL_66;
    }
    if ( PartyHost_CommitPlayer(party, mainActiveClient->localControllerIndex, MemberByXUID_AllowNotPresent, from) )
    {
      if ( Party_IsGameLobby(party) && buffer != g_noPrivatePartyId )
      {
        if ( *(_QWORD *)&v16->info.privatePartyId != buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8790, ASSERT_TYPE_ASSERT, "(I_memcmp( &partyMember->info.privatePartyId, &privatePartyId, sizeof( privatePartyId ) ) == 0)", (const char *)&queryFormat, "I_memcmp( &partyMember->info.privatePartyId, &privatePartyId, sizeof( privatePartyId ) ) == 0") )
          __debugbreak();
        PartyAtomicHost_CommitPrivatePartyMembers(party, mainActiveClient->localControllerIndex, &buffer);
      }
      goto LABEL_66;
    }
LABEL_47:
    PartyHost_HandleFailedAccept(party, MemberByXUID_AllowNotPresent, &player, from);
    goto LABEL_76;
  }
  if ( Party_IsPrivateParty(party) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Cannot commit to a private party under ZOMBIE status (%i).\n", party->partyName, party->partyMembers[MemberByXUID_AllowNotPresent].status);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    v28 = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v33.addrHandleIndex = v28;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v33, JOINRESPONSE_ERROR_BAD_COMMIT_ZOMBIE_PRIVATE_PARTY, &v34, NULL, 0);
    goto LABEL_76;
  }
  v29 = XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
  if ( bdSecurityID::operator!=(v29, &party->partyMembers[MemberByXUID_AllowNotPresent].info.privatePartyId) )
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleMemberJoin - Stray commit message. Invalid party id to be able to commit with ZOMBIE status (%i).\n", party->partyName, party->partyMembers[MemberByXUID_AllowNotPresent].status);
    *(_OWORD *)&v33.type = *(_OWORD *)&from->type;
    addrHandleIndex = from->addrHandleIndex;
    v34.m_id = player.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, player);
    v10 = JOINRESPONSE_ERROR_BAD_COMMIT_ZOMBIE_PRIVATE_PARTY;
    goto LABEL_8;
  }
  if ( (unsigned int)Party_FindMemberByXUID(&g_partyData, player) >= 0xC8 )
  {
    LODWORD(v32) = 200;
    LODWORD(v31) = Party_FindMemberByXUID(&g_partyData, player);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8769, ASSERT_TYPE_ASSERT, "(unsigned)( Party_FindMemberByXUID( &g_partyData, memberXuid ) ) < (unsigned)( 200 )", "Party_FindMemberByXUID( &g_partyData, memberXuid ) doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  if ( !PartyHost_CommitPlayer(party, mainActiveClient->localControllerIndex, MemberByXUID_AllowNotPresent, from) )
    goto LABEL_47;
  if ( !Party_IsMemberUIVisible(party, MemberByXUID_AllowNotPresent) )
  {
    v27 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8777, ASSERT_TYPE_ASSERT, "(Party_IsMemberUIVisible( party, memberSlot ))", "%s\n\tMaking sure zombie users don't disappear from the UI", "Party_IsMemberUIVisible( party, memberSlot )");
LABEL_64:
    if ( v27 )
      __debugbreak();
  }
LABEL_66:
  PartyHost_MarkPacketReceivedForJoiningPlayer(party, player, NULL, &buffer);
  if ( !Party_IsMemberRegistered(party, MemberByXUID_AllowNotPresent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8808, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, memberSlot ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, memberSlot )") )
    __debugbreak();
  if ( Party_MemberHasLoopbackAddr(party, MemberByXUID_AllowNotPresent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8809, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, memberSlot ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, memberSlot )") )
    __debugbreak();
  if ( Live_XUIDIsLocalPlayer(party->partyMembers[MemberByXUID_AllowNotPresent].playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8810, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( partyMember->playerUID ))", (const char *)&queryFormat, "!Live_XUIDIsLocalPlayer( partyMember->playerUID )") )
    __debugbreak();
  v30 = Sys_Milliseconds();
  ++s_partyStateLoggingData.players_joined;
  s_partyStateLoggingData.cause = 1;
  PartyHost_SendPartyStateToPlayer(party, MemberByXUID_AllowNotPresent, v30);
LABEL_76:
  bdSecurityID::~bdSecurityID(&buffer);
}

/*
==============
PartyAtomicHost_HandleMemberActionResponse
==============
*/
void PartyAtomicHost_HandleMemberActionResponse(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int64 Byte; 
  unsigned int Long; 
  const char *v8; 
  PartyMemberJoinInfo *memberJoinInfo; 
  unsigned int v10; 
  const char *v11; 
  const char *v12; 
  PartyDisconnectReason v13; 
  unsigned int *v14; 
  unsigned int v15; 
  const char *v16; 
  const char *partyName; 
  const char *v18; 
  __int64 v19; 
  XUID xuid; 

  XUID::XUID(&xuid);
  if ( PartyAtomic_GetJoinState(&g_partyJoinInfo) >= PARTYJOIN_JOINED )
  {
    if ( PartyAtomic_ReadAndVerifyJoinIdentifier(msg, &g_partyJoinInfo) )
    {
      Byte = MSG_ReadByte(msg);
      XUID::Deserialize(&xuid, msg);
      Long = MSG_ReadLong(msg);
      if ( msg->overflowed )
      {
        Com_PrintWarning(25, "[%s] Received bad 'pa_memberjoinresponse' message - invalid packet\n", party->partyName);
      }
      else if ( (unsigned int)Byte <= 1 )
      {
        if ( XUID::IsNull(&xuid) )
        {
          v8 = XUID::ToDevString(&xuid);
          Com_PrintWarning(25, "[%s] Received bad 'pa_memberjoinresponse' message - invalid xuid (%s)\n", party->partyName, v8);
        }
        else if ( Long - 1 > 0x4D )
        {
          v18 = XUID::ToDevString(&xuid);
          Com_PrintWarning(25, "[%s] Received bad 'pa_memberjoinresponse' message - invalid response %i (%s)\n", party->partyName, Long, v18);
        }
        else
        {
          memberJoinInfo = g_partyJoinInfo.memberJoinInfo;
          v10 = 0;
          while ( !memberJoinInfo->active || XUID::operator!=(&memberJoinInfo->xuid, &xuid) )
          {
            ++v10;
            ++memberJoinInfo;
            if ( v10 >= 0xC8 )
            {
              v11 = XUID::ToDevString(&xuid);
              Com_PrintError(25, "[%s] Received stray 'pa_memberjoinresponse' message - xuid not found (%s)\n", party->partyName, v11);
              return;
            }
          }
          if ( Long == 3 )
          {
            v12 = XUID::ToDevString(&xuid);
            Com_Printf(25, "[%s] PartyJoinAtomic: Received 'pa_memberjoinresponse' JOINRESPONSE_ERROR_CANCELED for action %i from %s, aborting join attempt.\n", party->partyName, (unsigned int)Byte, v12);
            LOBYTE(v13) = 13;
            g_partyJoinInfo.errorResponse = JOINRESPONSE_ERROR_CANCELED;
            PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v13);
          }
          else
          {
            v14 = (unsigned int *)&memberJoinInfo->responseState[Byte];
            v15 = *v14;
            v16 = XUID::ToDevString(&xuid);
            partyName = party->partyName;
            if ( v15 )
            {
              Com_PrintWarning(25, "[%s] PartyJoinAtomic: Received duplicate 'pa_memberjoinresponse' (cur %i, recv %i) for action %i (%s)\n", partyName, *v14, Long, Byte, v16);
            }
            else
            {
              Com_Printf(25, "[%s] PartyJoinAtomic: Received 'pa_memberjoinresponse' %i for action %i from %s\n", partyName, Long, Byte, v16);
              if ( (unsigned int)Byte >= 2 )
              {
                LODWORD(v19) = Byte;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8901, ASSERT_TYPE_ASSERT, "(unsigned)( joinAction ) < (unsigned)( PARTYACTION_COUNT )", "joinAction doesn't index PARTYACTION_COUNT\n\t%i not in [0, %i)", v19, 2) )
                  __debugbreak();
              }
              *v14 = Long;
            }
          }
        }
      }
      else
      {
        Com_PrintWarning(25, "[%s] Received bad 'pa_memberjoinresponse' message - invalid action %i\n", party->partyName, (unsigned int)Byte);
      }
    }
    else
    {
      Com_PrintWarning(25, "[%s] Received bad 'pa_memberjoinresponse' message - failed verification\n", party->partyName);
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] Received stray 'pa_memberjoinresponse' message - not yet in the PARTYJOIN_JOINED state\n", party->partyName);
  }
}

/*
==============
PartyHost_HandleMatchmakingInfo
==============
*/
void PartyHost_HandleMatchmakingInfo(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  bool v7; 
  int addrHandleIndex; 
  const char *v9; 
  const char *v10; 
  int v11; 
  const char *v12; 
  int v13; 
  const char *v14; 
  const char *v15; 
  netadr_t v16; 
  XUID player; 
  PartyMatchmakingInfo v18; 

  XUID::XUID(&player);
  v7 = party->inParty == 0;
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v16.type = *(_OWORD *)&from->type;
  v16.addrHandleIndex = addrHandleIndex;
  if ( v7 )
  {
    v9 = NET_AdrToString(&v16);
    Com_Printf(25, "[%s] %s -  Received msg from %s but we are not in a party\n", party->partyName, "PartyHost_HandleMatchmakingInfo", v9);
  }
  else if ( party->areWeHost )
  {
    if ( Party_FindFirstMemberAtAddr(party, &v16) >= 0 )
    {
      XUID::Deserialize(&player, msg);
      if ( Party_FindMemberByXUID_AllowNotPresent(party, player) >= 0 )
      {
        PartyMatchmakingInfo::Deserialize(&v18, msg);
        if ( msg->overflowed )
          Com_Printf(25, "[%s] %s - Received invalid/truncated pmminfo packet\n", party->partyName, "PartyHost_HandleMatchmakingInfo");
        else
          OnlineMatchmakerOmniscient::SetMatchmakingTokenForUID(&OnlineMatchmakerOmniscient::ms_instance, player, v18.matchmakingToken, v18.isPrimaryAccount);
      }
      else
      {
        v13 = from->addrHandleIndex;
        *(_OWORD *)&v16.type = *(_OWORD *)&from->type;
        v16.addrHandleIndex = v13;
        v14 = NET_AdrToString(&v16);
        v15 = XUID::ToDevString(&player);
        Com_Printf(25, "[%s] %s - Received from unknown client %s (%s)\n", party->partyName, "PartyHost_HandleMatchmakingInfo", v15, v14);
      }
    }
    else
    {
      v11 = from->addrHandleIndex;
      *(_OWORD *)&v16.type = *(_OWORD *)&from->type;
      v16.addrHandleIndex = v11;
      v12 = NET_AdrToString(&v16);
      Com_Printf(25, "[%s] %s - Received but we dont know which client it's from (%s)\n", party->partyName, "PartyHost_HandleMatchmakingInfo", v12);
    }
  }
  else
  {
    v10 = NET_AdrToString(&v16);
    Com_Printf(25, "[%s] %s - Received msg from %s but we are not the party host\n", party->partyName, "PartyHost_HandleMatchmakingInfo", v10);
  }
}

/*
==============
PartyHost_HandleClientInfoMsg
==============
*/
void PartyHost_HandleClientInfoMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  int Long; 
  int v13; 
  signed int MemberByXUID_AllowNotPresent; 
  unsigned int v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  int Bit; 
  bool v20; 
  netadr_t v21; 
  XUID player; 
  __int64 v23; 
  ClientAuthoritativeMemberInfo v24; 

  v23 = -2i64;
  XUID::XUID(&player);
  bdSecurityID::bdSecurityID(&v24.privatePartyId);
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v21.type = *(_OWORD *)&from->type;
  v21.addrHandleIndex = addrHandleIndex;
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      if ( Party_FindFirstMemberAtAddr(party, &v21) >= 0 )
      {
        XUID::Deserialize(&player, msg);
        Long = MSG_ReadLong(msg);
        v13 = Long;
        if ( Long >= 0 )
        {
          MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player);
          v15 = MemberByXUID_AllowNotPresent;
          if ( MemberByXUID_AllowNotPresent >= 0 )
          {
            if ( Party_IsMemberIndexDataAvailable(party, MemberByXUID_AllowNotPresent) )
            {
              Bit = MSG_ReadBit(msg);
              v20 = Bit != 0;
              if ( Bit )
              {
                memset_0(&v24, 0, sizeof(v24));
                Party_ReadMemberInfo(msg, &v24, player);
              }
              if ( msg->overflowed )
              {
                Com_Printf(25, "[%s] PartyHost - HandleClientInfo - Received invalid/truncated clientInfo packet\n", party->partyName);
              }
              else
              {
                if ( v20 )
                {
                  v21 = *from;
                  PartyHost_ReceivedUpdatedMemberInfo(party, mainActiveClient->localControllerIndex, v15, &v21, &v24);
                }
                v21 = *from;
                PartyHost_ReceivedPartystateAck(party, v15, &v21, v13, 1);
              }
            }
            else
            {
              v21 = *from;
              v18 = NET_AdrToString(&v21);
              Com_Printf(25, "[%s] PartyHost - HandleClientInfo - Received clientInfo from client %i who isn't available yet (%s).\n", party->partyName, v15, v18);
            }
          }
          else
          {
            v21 = *from;
            v16 = NET_AdrToString(&v21);
            v17 = XUID::ToDevString(&player);
            Com_Printf(25, "[%s] PartyHost - HandleClientInfo - Received clientInfo from unknown client %s (%s)\n", party->partyName, v17, v16);
          }
        }
        else
        {
          Com_Printf(25, "[%s] PartyHost - HandleClientInfo - invalid party state ack time %i\n", party->partyName, (unsigned int)Long);
        }
      }
      else
      {
        v21 = *from;
        v11 = NET_AdrToString(&v21);
        Com_Printf(25, "[%s] Received clientInfo but we dont know which client it's from (%s)\n", party->partyName, v11);
      }
    }
    else
    {
      v10 = NET_AdrToString(&v21);
      Com_Printf(25, "[%s] Received clientInfo msg from %s but we are not the party host\n", party->partyName, v10);
    }
  }
  else
  {
    v9 = NET_AdrToString(&v21);
    Com_Printf(25, "[%s] Received clientInfo msg from %s but we are not in a party\n", party->partyName, v9);
  }
  bdSecurityID::~bdSecurityID(&v24.privatePartyId);
}

/*
==============
PartyHost_HandleIHearMsg
==============
*/
void PartyHost_HandleIHearMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  bool v4; 
  int addrHandleIndex; 
  const char *v8; 
  const char *v9; 
  int FirstMemberAtAddr; 
  unsigned int v11; 
  int v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  int v16; 
  int ConnectivityBitsForHost; 
  int v18; 
  char *fmt; 
  __int64 v20; 
  __int64 v21; 
  int v22; 
  netadr_t v23; 

  v4 = party->inParty == 0;
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v23.type = *(_OWORD *)&from->type;
  v23.addrHandleIndex = addrHandleIndex;
  if ( v4 )
  {
    v8 = NET_AdrToString(&v23);
    Com_Printf(25, "[%s] Received ihear msg from %s but we are not in a party\n", party->partyName, v8);
  }
  else if ( party->areWeHost )
  {
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &v23);
    v11 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      if ( !Party_IsMemberRegistered(party, FirstMemberAtAddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9062, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, partyClientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, partyClientNum )") )
        __debugbreak();
      if ( Party_MemberHasLoopbackAddr(party, v11) )
      {
        v14 = from->addrHandleIndex;
        *(_OWORD *)&v23.type = *(_OWORD *)&from->type;
        v23.addrHandleIndex = v14;
        v15 = NET_AdrToString(&v23);
        LODWORD(fmt) = v11;
        Com_PrintWarning(25, "[%s] Received ihear msg from %s party client %i. Ignoring local clients.\n", party->partyName, v15, fmt);
      }
      else
      {
        v16 = Cmd_ArgInt(1);
        ConnectivityBitsForHost = PeerMesh_GetConnectivityBitsForHost(party);
        if ( (v16 & ConnectivityBitsForHost) != ConnectivityBitsForHost )
          Com_PrintWarning(25, "[%s] PartyHost - IHear - Client %i sent us connectivity bits without the proper host bits\n", party->partyName, v11);
        v18 = v16 | ConnectivityBitsForHost;
        if ( v11 >= 0xC8 )
        {
          v22 = 200;
          LODWORD(v20) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2695, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v20, v22) )
            __debugbreak();
        }
        if ( !Party_IsMemberRegistered(party, v11) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2696, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, memberIndex )") )
          __debugbreak();
        if ( !PeerMesh_IsHostConnectivitySet(party, v18) )
        {
          LODWORD(v20) = v16 | ConnectivityBitsForHost;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2697, ASSERT_TYPE_ASSERT, "( ( PeerMesh_IsHostConnectivitySet( party, connectivityBits ) ) )", "( connectivityBits ) = %i", v20) )
            __debugbreak();
        }
        if ( PeerMesh_SetClientConnectivity(party, v11, v18) )
          PartyHost_MemberInfoChanged(party, v11, 1);
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_voice_debug, "voice_debug") )
        {
          LODWORD(v21) = ConnectivityBitsForHost;
          LODWORD(v20) = v16;
          LODWORD(fmt) = v16 | ConnectivityBitsForHost;
          Com_Printf(25, "[%s] PartyHost - IHear - Client %i has connectivity %i. Sent %i, host is %i.\n", party->partyName, v11, fmt, v20, v21);
        }
      }
    }
    else
    {
      v12 = from->addrHandleIndex;
      *(_OWORD *)&v23.type = *(_OWORD *)&from->type;
      v23.addrHandleIndex = v12;
      v13 = NET_AdrToString(&v23);
      Com_Printf(25, "[%s] Received ihear msg from %s from unknown party client\n", party->partyName, v13);
    }
  }
  else
  {
    v9 = NET_AdrToString(&v23);
    Com_Printf(25, "[%s] Received ihear msg from %s but we are not the party host\n", party->partyName, v9);
  }
}

/*
==============
PartyHost_HandleCantHearMsg
==============
*/
void PartyHost_HandleCantHearMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int v6; 
  const char *v7; 
  int addrHandleIndex; 
  const char *v9; 
  unsigned int v10; 
  int v11; 
  __int128 v12; 
  int FirstMemberAtAddr; 
  NetConnection *MemberConnection; 
  const char *v15; 
  netadr_t v16[2]; 

  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      v10 = Cmd_ArgInt(1);
      v11 = v10;
      if ( v10 > 0xC7 )
      {
        Com_PrintError(15, "[%s] Invalid canthear message - remote client was %i", party->partyName, v10);
      }
      else
      {
        v12 = *(_OWORD *)&from->type;
        v16[0].addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v16[0].type = v12;
        FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, v16);
        if ( FirstMemberAtAddr >= 0 )
        {
          if ( Party_IsMemberRegistered(party, v11) )
          {
            MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v11);
            if ( !NetConnection::IsLocal(MemberConnection) )
            {
              v15 = j_va("%ivoicefail %i", (unsigned int)party->partyId, (unsigned int)FirstMemberAtAddr);
              NetConnection::SendReliable(MemberConnection, v15);
            }
          }
        }
        else
        {
          Com_Printf(25, "[%s] Received canthear msg from unknown client\n", party->partyName);
        }
      }
    }
    else
    {
      addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v16[0].type = *(_OWORD *)&from->type;
      v16[0].addrHandleIndex = addrHandleIndex;
      v9 = NET_AdrToString(v16);
      Com_Printf(25, "[%s] Received canthear msg from %s but we are not the party host\n", party->partyName, v9);
    }
  }
  else
  {
    v6 = from->addrHandleIndex;
    *(_OWORD *)&v16[0].type = *(_OWORD *)&from->type;
    v16[0].addrHandleIndex = v6;
    v7 = NET_AdrToString(v16);
    Com_Printf(25, "[%s] Received canthear msg from %s but we are not in a party\n", party->partyName, v7);
  }
}

/*
==============
PartyAtomicHost_HandleClientDisconnect
==============
*/
void PartyAtomicHost_HandleClientDisconnect(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  bdSecurityID *SecurityId; 
  unsigned __int8 Byte; 
  PartyJoinResponse joinResponse; 
  XUID player; 
  netadr_t v16; 
  __int64 v17; 
  bdSecurityID buffer; 

  v17 = -2i64;
  XUID::XUID(&player);
  bdSecurityID::bdSecurityID(&buffer);
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      XUID::Deserialize(&player, msg);
      MSG_ReadData(msg, 8, &buffer, 8);
      if ( msg->overflowed )
      {
        Com_PrintWarning(25, "[%s] PartyJoin: Received bad 'pa_dis' message - invalid packet.\n", party->partyName);
      }
      else if ( Live_XUIDIsLocalPlayer(player) )
      {
        v10 = XUID::ToDevString(&player);
        v16 = *from;
        v11 = NET_AdrToString(&v16);
        Com_PrintWarning(25, "[%s] PartyJoin: Stray 'pa_dis' message from %s - They supplied a local XUID (%s)\n", party->partyName, v11, v10);
      }
      else
      {
        SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
        if ( bdSecurityID::operator!=(SecurityId, &buffer) )
        {
          Com_PrintWarning(25, "[%s] PartyJoin: Received 'pa_dis' for unknown session ID %zx\n", party->partyName, *(_QWORD *)&buffer);
        }
        else
        {
          Byte = MSG_ReadByte(msg);
          joinResponse = MSG_ReadByte(msg);
          PartyHost_HandleClientDisconnect_Internal(party, mainActiveClient, player, (const PartyDisconnectReason)Byte, joinResponse);
        }
      }
    }
    else
    {
      v16 = *from;
      v9 = NET_AdrToString(&v16);
      Com_PrintWarning(25, "[%s] PartyJoin: Stray 'pa_dis' message from %s - Not the host\n", party->partyName, v9);
    }
  }
  else
  {
    v16 = *from;
    v8 = NET_AdrToString(&v16);
    Com_PrintWarning(25, "[%s] PartyJoin: Stray 'pa_dis' message from %s - Not in a party\n", party->partyName, v8);
  }
  bdSecurityID::~bdSecurityID(&buffer);
}

/*
==============
PartyHost_HandleTeamChatResponse
==============
*/
void PartyHost_HandleTeamChatResponse(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9252, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9253, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9254, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  PartyChat_ReadPartyChatResponse(party, mainActiveClient, msg);
}

/*
==============
PartyHost_HandleChatDissolvedMsg
==============
*/
void PartyHost_HandleChatDissolvedMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9262, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9263, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9264, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  PartyChat_ChatDissolvedMessage(party, mainActiveClient, msg);
}

/*
==============
PartyHost_HandleClientTaskResponse
==============
*/
void PartyHost_HandleClientTaskResponse(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  PartyClientTaskService::HandleMessage(&party->clientTaskService, party, msg);
}

/*
==============
PartyHost_HandleUpdateXnaddrAck
==============
*/
void PartyHost_HandleUpdateXnaddrAck(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  bool v4; 
  int addrHandleIndex; 
  const char *v8; 
  const char *v9; 
  int FirstMemberAtAddr; 
  unsigned int v11; 
  int v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  unsigned int v18; 
  unsigned int v19; 
  netadr_t v20[2]; 

  v4 = party->inParty == 0;
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v20[0].type = *(_OWORD *)&from->type;
  v20[0].addrHandleIndex = addrHandleIndex;
  if ( v4 )
  {
    v8 = NET_AdrToString(v20);
    Com_PrintWarning(25, "[%s] PartyHost - UpdateXnaddr - Received stray 'pa_updatexnaddrack' message from (%s), not in party.\n", party->partyName, v8);
  }
  else if ( party->areWeHost )
  {
    FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, v20);
    v11 = FirstMemberAtAddr;
    if ( FirstMemberAtAddr >= 0 )
    {
      if ( (unsigned int)FirstMemberAtAddr < 0x20 )
      {
        if ( Party_IsMemberRegistered(party, FirstMemberAtAddr) )
        {
          bitarray_base<bitarray<32>>::resetBit((bitarray_base<bitarray<32> > *)&party->specificData.clientData + 36, v11);
        }
        else
        {
          v16 = from->addrHandleIndex;
          *(_OWORD *)&v20[0].type = *(_OWORD *)&from->type;
          v20[0].addrHandleIndex = v16;
          v17 = NET_AdrToString(v20);
          v19 = v11;
          Com_PrintWarning(25, "[%s] PartyHost - UpdateXnaddr - Received 'pa_updatexnaddrack' message from (%s) but member (%d) is not registered\n", party->partyName, v17, v19);
        }
      }
      else
      {
        v14 = from->addrHandleIndex;
        *(_OWORD *)&v20[0].type = *(_OWORD *)&from->type;
        v20[0].addrHandleIndex = v14;
        v15 = NET_AdrToString(v20);
        v18 = v11;
        Com_PrintWarning(25, "[%s] PartyHost - UpdateXnaddr - Received 'pa_updatexnaddrack' message from (%s) but member indexes (%d) beyond pending xnaddr updates bit array\n", party->partyName, v15, v18);
      }
    }
    else
    {
      v12 = from->addrHandleIndex;
      *(_OWORD *)&v20[0].type = *(_OWORD *)&from->type;
      v20[0].addrHandleIndex = v12;
      v13 = NET_AdrToString(v20);
      Com_PrintWarning(25, "[%s] PartyHost - UpdateXnaddr - Received 'pa_updatexnaddrack' message from (%s) but we dont know which client it is\n", party->partyName, v13);
    }
  }
  else
  {
    v9 = NET_AdrToString(v20);
    Com_PrintWarning(25, "[%s] PartyHost - UpdateXnaddr - Received stray 'pa_updatexnaddrack' message from (%s), we are not the host\n", party->partyName, v9);
  }
}

/*
==============
PartyAtomicHost_AddAnonymousMember
==============
*/
__int64 PartyAtomicHost_AddAnonymousMember(PartyData *party, const XUID requestXuid, const PartyJoinChallenge *challenge, unsigned int *outSlot)
{
  int FirstSlotByStatus; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  XUID xuid; 
  XUID v13; 

  v13.m_id = requestXuid.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6206, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !challenge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6207, ASSERT_TYPE_ASSERT, "(challenge)", (const char *)&queryFormat, "challenge") )
    __debugbreak();
  FirstSlotByStatus = PartyHost_FindFirstSlotByStatus(party, 0);
  if ( FirstSlotByStatus >= 0 || (FirstSlotByStatus = PartyAtomicHost_FindOldestUsedSlotForAnonymousMember(party), FirstSlotByStatus >= 0) )
  {
    v9 = XUID::ToDevString(&v13);
    Com_Printf(25, "[%s] PartyHost - AddAnonymousMember - Reserving slot %i for challenge %s (%s)\n", party->partyName, (unsigned int)FirstSlotByStatus, challenge->str, v9);
    xuid.m_id = v13.m_id;
    if ( !challenge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 669, ASSERT_TYPE_ASSERT, "(challenge)", (const char *)&queryFormat, "challenge") )
      __debugbreak();
    if ( (unsigned int)FirstSlotByStatus >= 0xC8 )
    {
      LODWORD(v10) = FirstSlotByStatus;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 671, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, 200) )
        __debugbreak();
    }
    memset_0(&party->partyMembers[FirstSlotByStatus], 0, sizeof(party->partyMembers[FirstSlotByStatus]));
    party->partyMembers[FirstSlotByStatus].status = 2;
    *(_DWORD *)party->partyMembers[FirstSlotByStatus].challenge = *(_DWORD *)challenge->str;
    *(_WORD *)&party->partyMembers[FirstSlotByStatus].challenge[4] = *(_WORD *)&challenge->str[4];
    if ( party->partyMembers[FirstSlotByStatus].challenge[5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 680, ASSERT_TYPE_ASSERT, "(partyMember->challenge[5] == 0)", (const char *)&queryFormat, "partyMember->challenge[NUM_CHALLENGE_CHARS] == 0") )
      __debugbreak();
    XUID::operator=(&party->partyMembers[FirstSlotByStatus].challengeRequestXuid, &xuid);
    party->partyMembers[FirstSlotByStatus].lastPacketTime = Sys_Milliseconds();
    PartyHost_ClearMemberBackedOutBit(party, FirstSlotByStatus);
    if ( outSlot )
    {
      if ( (unsigned int)FirstSlotByStatus >= 0xC8 )
      {
        LODWORD(v11) = 200;
        LODWORD(v10) = FirstSlotByStatus;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6225, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      *outSlot = FirstSlotByStatus;
    }
    return 1i64;
  }
  else
  {
    Com_Printf(25, "[%s] PartyHost - AddAnonymousMember - Rejecting incoming party member because the party is full (no empty, anonymous, or zombie slots)\n", party->partyName);
    return 30i64;
  }
}

/*
==============
PartyAtomicHost_AddJoinRequest
==============
*/
__int64 PartyAtomicHost_AddJoinRequest(PartyData *party, const int localControllerIndex, netadr_t *from, XUID requestXuid, const int numPlayersJoining, const PartyJoinType joinType, const int numSubPartiesJoining, const unsigned __int8 *subPartyMemberCountList, PartyJoinChallenge *outChallenge)
{
  const unsigned __int8 *v9; 
  netadr_t *v10; 
  PartyJoinChallenge *v11; 
  unsigned int v13; 
  int BotsReservedSlotsAllies; 
  const char *v15; 
  __int128 v16; 
  int v18; 
  int v19; 
  unsigned int v20; 
  const char *v21; 
  const char *v22; 
  const dvar_t *v23; 
  int Int_Internal_DebugName; 
  int PlaylistIdForNum; 
  signed int MaxHumanPlayers; 
  __int128 v27; 
  int v28; 
  const char *v29; 
  __int128 v30; 
  unsigned int v31; 
  const char *v32; 
  __int128 v33; 
  int v34; 
  int v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  __int64 v39; 
  const unsigned __int8 *v40; 
  __int64 v41; 
  int v42; 
  __int64 v43; 
  __int64 v44; 
  int v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  int NumGameSlots; 
  int v50; 
  __int64 v51; 
  const dvar_t *v52; 
  int integer; 
  const dvar_t *v54; 
  const dvar_t *v55; 
  int v56; 
  const dvar_t *v57; 
  const char *v58; 
  int addrHandleIndex; 
  int v60; 
  int MaxFreeSlots; 
  const char *v62; 
  int v63; 
  const char *v64; 
  int v65; 
  PartyJoinChallenge *v66; 
  const char *v67; 
  const char *v68; 
  int v69; 
  int v70; 
  PartyJoinResponse v71; 
  __int128 v72; 
  char *fmt; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  PartyJoinChallenge *challenge; 
  int maxTeamSize; 
  netadr_t v80; 
  unsigned int subpartyCount; 
  int totalSkill; 
  netadr_t *v83; 
  const unsigned __int8 *v84; 
  SubpartyInfo subparties[200]; 
  XUID uid; 

  uid.m_id = requestXuid.m_id;
  v9 = subPartyMemberCountList;
  v10 = from;
  v11 = outChallenge;
  v84 = subPartyMemberCountList;
  challenge = outChallenge;
  v83 = from;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7210, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7211, ASSERT_TYPE_ASSERT, "(outChallenge)", (const char *)&queryFormat, "outChallenge") )
    __debugbreak();
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7212, ASSERT_TYPE_ASSERT, "(subPartyMemberCountList)", (const char *)&queryFormat, "subPartyMemberCountList") )
    __debugbreak();
  v13 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
  {
    BotsReservedSlotsAllies = BG_Bots_GetBotsReservedSlotsAllies();
    v13 += BotsReservedSlotsAllies + BG_Bots_GetBotsReservedSlotsAxis();
    if ( v13 >= 0xC9 )
    {
      LODWORD(v74) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7220, ASSERT_TYPE_ASSERT, "(unsigned)( memberCount ) < (unsigned)( 200+1 )", "memberCount doesn't index MAX_PARTY_MEMBERS+1\n\t%i not in [0, %i)", v74, 201) )
        __debugbreak();
    }
  }
  if ( Com_MP_GetIsLocalServerPaused() && Com_MP_GetShouldClientPause() )
  {
    v15 = XUID::ToDevString(&uid);
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) The game is currently paused!\n", party->partyName, v15);
    challenge = (PartyJoinChallenge *)uid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
    v16 = *(_OWORD *)&v10->type;
    v80.addrHandleIndex = v10->addrHandleIndex;
    *(_OWORD *)&v80.type = v16;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_PAUSED, (const XUID *)&challenge, NULL, 0);
    return 0i64;
  }
  v18 = numPlayersJoining;
  v19 = v13 + numPlayersJoining;
  maxTeamSize = v13 + numPlayersJoining;
  if ( v19 > Party_GetNumGameSlots(party) )
  {
    v20 = Party_GetNumGameSlots(party) - v13;
    v21 = XUID::ToDevString(&uid);
    v22 = "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We don't have %i free slots for them all (we only have %i left)\n";
LABEL_27:
    LODWORD(v74) = v20;
    LODWORD(fmt) = v18;
    Com_PrintWarning(25, v22, party->partyName, v21, fmt, v74);
    challenge = (PartyJoinChallenge *)uid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
    v27 = *(_OWORD *)&v10->type;
    v80.addrHandleIndex = v10->addrHandleIndex;
    *(_OWORD *)&v80.type = v27;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_PARTY_COUNT, (const XUID *)&challenge, NULL, 0);
    return 0i64;
  }
  if ( Party_IsGameLobby(party) )
  {
    v23 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( !v23->current.enabled )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
      PlaylistIdForNum = Playlist_GetPlaylistIdForNum(Int_Internal_DebugName);
      MaxHumanPlayers = Playlist_GetMaxHumanPlayers(PlaylistIdForNum);
      if ( MaxHumanPlayers )
      {
        if ( v18 + Party_CountRegisteredMembers(party) > MaxHumanPlayers )
        {
          v20 = Party_GetNumGameSlots(party) - v13;
          v21 = XUID::ToDevString(&uid);
          v22 = "[%s] PartyJoin - HandleJoinRequest ( Squads ) - Rejecting incoming party member. XUID ( %s ) We don't have %i free slots for them all (we only have %i left)\n";
          goto LABEL_27;
        }
      }
    }
  }
  if ( PartyHost_CountOpenSlots(party) < v18 )
  {
    v28 = PartyHost_CountOpenSlots(party);
    v29 = XUID::ToDevString(&uid);
    LODWORD(v74) = v18;
    LODWORD(fmt) = v28;
    Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) The party has not enough open slots (%i for %i players)\n", party->partyName, v29, fmt, v74);
    challenge = (PartyJoinChallenge *)uid.m_id;
    OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
    v30 = *(_OWORD *)&v10->type;
    v80.addrHandleIndex = v10->addrHandleIndex;
    *(_OWORD *)&v80.type = v30;
    PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_NO_PUBLIC_SLOTS, (const XUID *)&challenge, NULL, 0);
    return 0i64;
  }
  if ( Party_UsingPartyBasedTeams(party) )
  {
    PartyHost_UpdateSubparties(party, subparties, &subpartyCount, &totalSkill, 0);
    v31 = subpartyCount;
    if ( subpartyCount > 1 )
    {
      v32 = XUID::ToDevString(&uid);
      LODWORD(fmt) = v31;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Already %i sub parties >= 2\n", party->partyName, v32, fmt);
      challenge = (PartyJoinChallenge *)uid.m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
      v33 = *(_OWORD *)&v10->type;
      v80.addrHandleIndex = v10->addrHandleIndex;
      *(_OWORD *)&v80.type = v33;
      PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_PARTY_TEAM_COUNT, (const XUID *)&challenge, NULL, 0);
      return 0i64;
    }
  }
  else if ( Party_UsingTeams(party) )
  {
    v34 = 0;
    v35 = 0;
    PartyHost_UpdateSubparties(party, subparties, &subpartyCount, &totalSkill, 0);
    v36 = numSubPartiesJoining;
    v37 = v13;
    v38 = subpartyCount;
    v39 = 0i64;
    totalSkill = v13;
    if ( numSubPartiesJoining >= 2i64 )
    {
      v40 = v84;
      v41 = numSubPartiesJoining - 1i64;
      do
      {
        v42 = v40[v39];
        v34 += v42;
        v43 = v38;
        v44 = v38 + 1;
        v38 += 2;
        subparties[v43].count = v42;
        v45 = v40[v39 + 1];
        v39 += 2i64;
        v35 += v45;
        subparties[v44].count = v45;
      }
      while ( v39 < v41 );
      v18 = numPlayersJoining;
      v37 = v13;
    }
    if ( v39 < v36 )
    {
      v46 = v84[v39];
      v47 = v38++;
      v13 += v46;
      subparties[v47].count = v46;
    }
    v48 = v34 + v35 + v13;
    if ( v48 != maxTeamSize )
    {
      LODWORD(v75) = v37;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7279, ASSERT_TYPE_ASSERT, "(memberCount == oldMemberCount + numPlayersJoining)", "%s\n\toldPlayers was %i, %i players joining, but subparties had %i players in it\n", "memberCount == oldMemberCount + numPlayersJoining", v75, v18, v48 - v37) )
        __debugbreak();
    }
    NumGameSlots = Party_GetNumGameSlots(party);
    v50 = NumGameSlots - v48;
    if ( NumGameSlots - v48 > 0 )
    {
      do
      {
        if ( v38 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7285, ASSERT_TYPE_ASSERT, "(subpartyCount < 200)", (const char *)&queryFormat, "subpartyCount < MAX_PARTY_MEMBERS") )
          __debugbreak();
        ++v48;
        v51 = v38++;
        --v50;
        subparties[v51].count = 1;
      }
      while ( v50 > 0 );
      v18 = numPlayersJoining;
    }
    if ( v38 - 1 > 0xC7 )
    {
      LODWORD(v74) = v38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7290, ASSERT_TYPE_SANITY, "( ( subpartyCount > 0 && subpartyCount <= 200 ) )", "( subpartyCount ) = %i", v74) )
        __debugbreak();
    }
    if ( v48 != NumGameSlots )
    {
      LODWORD(v74) = v48;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7291, ASSERT_TYPE_ASSERT, "( ( memberCount == totalSlots ) )", "( memberCount ) = %i", v74) )
        __debugbreak();
    }
    v52 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v52);
    integer = v52->current.integer;
    v54 = DVARINT_party_teamCount;
    maxTeamSize = integer;
    if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v54);
    if ( v54->current.integer <= 0 )
    {
      v56 = 1;
    }
    else
    {
      v55 = DVARINT_party_teamCount;
      if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v55);
      v56 = v55->current.integer;
    }
    v57 = DVARBOOL_online_party_validate_team_balance_on_join_request;
    maxTeamSize /= v56;
    if ( !DVARBOOL_online_party_validate_team_balance_on_join_request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_validate_team_balance_on_join_request") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v57);
    if ( v57->current.enabled && !TeamBalance_CanPartitionIntoTeams(subparties, v38, 0, v56, maxTeamSize) )
    {
      v58 = XUID::ToDevString(&uid);
      LODWORD(v74) = numSubPartiesJoining;
      LODWORD(fmt) = v18;
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) Unable to make balanced teams if %i players in %i subparties join.\n", party->partyName, v58, fmt, v74);
      challenge = (PartyJoinChallenge *)uid.m_id;
      OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
      addrHandleIndex = v83->addrHandleIndex;
      *(_OWORD *)&v80.type = *(_OWORD *)&v83->type;
      v80.addrHandleIndex = addrHandleIndex;
      PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_PARTY_TEAM_BALANCE, (const XUID *)&challenge, NULL, 0);
      return 0i64;
    }
    PartyDebug_PrintTeams(subparties, v38);
    if ( PartyHost_UsingAssignedTeams(party) )
    {
      if ( numSubPartiesJoining == 1 )
      {
        if ( v18 > PartyHost_GetMaxFreeSlots(party, totalSkill, v56) )
        {
          v60 = Party_GetNumGameSlots(party);
          MaxFreeSlots = PartyHost_GetMaxFreeSlots(party, v48, v56);
          v62 = XUID::ToDevString(&uid);
          LODWORD(v75) = v60;
          LODWORD(v74) = MaxFreeSlots;
          LODWORD(fmt) = v18;
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. XUID ( %s ) We don't have %i free slots on one team (we only have %i left out of %i)\n", party->partyName, v62, fmt, v74, v75);
          challenge = (PartyJoinChallenge *)uid.m_id;
          OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
          v63 = v83->addrHandleIndex;
          *(_OWORD *)&v80.type = *(_OWORD *)&v83->type;
          v80.addrHandleIndex = v63;
          PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_PARTY_TEAM_FREESLOTS, (const XUID *)&challenge, NULL, 0);
          return 0i64;
        }
      }
      else if ( numSubPartiesJoining > 1 && numSubPartiesJoining != v18 )
      {
        v64 = XUID::ToDevString(&uid);
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming lobby. XUID ( %s ) Wait until round ends\n", party->partyName, v64);
        challenge = (PartyJoinChallenge *)uid.m_id;
        OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
        v65 = v83->addrHandleIndex;
        *(_OWORD *)&v80.type = *(_OWORD *)&v83->type;
        v80.addrHandleIndex = v65;
        PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, JOINRESPONSE_ERROR_GAME_FULL_PARTY_TEAM_ROUNDSTARTED, (const XUID *)&challenge, NULL, 0);
        return 0i64;
      }
    }
    v10 = v83;
  }
  v66 = challenge;
  PartyAtomicHost_BuildRandomChallenge(challenge);
  v67 = "party";
  if ( Party_IsGameLobby(party) )
    v67 = "lobby";
  v68 = XUID::ToDevString(&uid);
  LODWORD(v74) = numSubPartiesJoining;
  LODWORD(fmt) = v18;
  Com_Printf(15, "[%s] PartyJoin - HandleJoinRequest - XUID ( %s ) Adding %i players in %i subparties to the %s with challenge of '%s'\n", party->partyName, v68, fmt, v74, v67, challenge->str);
  v69 = 0;
  if ( v18 <= 0 )
    return 1i64;
  while ( 1 )
  {
    v70 = PartyAtomicHost_AddAnonymousMember(party, uid, v66, NULL);
    v71 = v70;
    if ( v70 < 1 )
    {
      LODWORD(v77) = 1;
      LODWORD(v76) = v70;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7337, ASSERT_TYPE_ASSERT, "( joinResponse ) >= ( JOINRESPONSE_SUCCESS )", "%s >= %s\n\t%i, %i", "joinResponse", "JOINRESPONSE_SUCCESS", v76, v77) )
        __debugbreak();
    }
    if ( v71 != JOINRESPONSE_SUCCESS )
      break;
    v66 = challenge;
    if ( ++v69 >= v18 )
      return 1i64;
  }
  PartyAtomicHost_RemoveAnonymousMembersWithChallengeXuid(party, uid);
  challenge = (PartyJoinChallenge *)uid.m_id;
  OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, uid);
  v72 = *(_OWORD *)&v10->type;
  v80.addrHandleIndex = v10->addrHandleIndex;
  *(_OWORD *)&v80.type = v72;
  PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v80, v71, (const XUID *)&challenge, NULL, 0);
  return 0i64;
}

/*
==============
PartyAtomicHost_BuildRandomChallenge
==============
*/
void PartyAtomicHost_BuildRandomChallenge(PartyJoinChallenge *challenge)
{
  __int64 i; 
  int v3; 

  if ( !challenge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 899, ASSERT_TYPE_ASSERT, "(challenge)", (const char *)&queryFormat, "challenge") )
    __debugbreak();
  for ( i = 0i64; i < 5; ++i )
  {
    v3 = rand();
    LOBYTE(v3) = v3 - 60 * (((((unsigned __int64)(2290649225i64 * v3) >> 32) & 0x80000000) != 0i64) + ((int)((unsigned __int64)(2290649225i64 * v3) >> 32) >> 5)) + 65;
    challenge->str[i] = v3;
    if ( (_BYTE)v3 == 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 905, ASSERT_TYPE_ASSERT, "(challenge->str[i] != ' ')", (const char *)&queryFormat, "challenge->str[i] != ' '") )
      __debugbreak();
  }
  challenge->str[5] = 0;
}

/*
==============
PartyAtomicHost_CommitPrivatePartyMembers
==============
*/
void PartyAtomicHost_CommitPrivatePartyMembers(PartyData *party, const int localControllerIndex, const bdSecurityID *privatePartyId)
{
  int NumGameSlots; 
  __int64 v7; 
  signed int v8; 
  __int64 v9; 
  unsigned __int8 *p_status; 
  __int64 v11; 
  __int64 v12; 
  netadr_t result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8633, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8634, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tShould not be committing a whole party into a party", "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( !privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8635, ASSERT_TYPE_ASSERT, "(privatePartyId)", (const char *)&queryFormat, "privatePartyId") )
    __debugbreak();
  if ( g_noPrivatePartyId == *privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8636, ASSERT_TYPE_ASSERT, "(I_memcmp( &g_noPrivatePartyId, privatePartyId, sizeof( g_noPrivatePartyId ) ) != 0)", (const char *)&queryFormat, "I_memcmp( &g_noPrivatePartyId, privatePartyId, sizeof( g_noPrivatePartyId ) ) != 0") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  v7 = NumGameSlots;
  if ( NumGameSlots > 200 )
  {
    LODWORD(v12) = NumGameSlots;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8639, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", v12) )
      __debugbreak();
  }
  v8 = 0;
  v9 = v7;
  if ( (int)v7 > 0 )
  {
    p_status = &party->partyMembers[0].status;
    do
    {
      if ( *p_status == 3 )
      {
        v11 = v8;
        NetConnection::GetNetadr(&party->partyMembers[v11].connection, &result);
        if ( *(_QWORD *)&party->partyMembers[v11].info.privatePartyId == *privatePartyId )
          PartyHost_CommitPlayer(party, localControllerIndex, v8, &result);
      }
      ++v8;
      p_status += 504;
      --v9;
    }
    while ( v9 );
  }
}

/*
==============
PartyAtomicHost_DevSimulateDisconnectMsg
==============
*/
void PartyAtomicHost_DevSimulateDisconnectMsg(PartyData *party, const int localControllerIndex, const int memberIndex)
{
  PartyDisconnectReason v6; 
  unsigned __int64 m_id; 
  __int64 v8; 
  PartyActiveClient mainActiveClient; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9232, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    LODWORD(v8) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9233, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, 200) )
      __debugbreak();
  }
  mainActiveClient = Party_GetMainActiveClient(party, localControllerIndex);
  if ( Party_IsMemberIndexDataAvailable(party, memberIndex) )
  {
    Party_GetXuid(&result, party, memberIndex);
    m_id = result.m_id;
  }
  else
  {
    m_id = XUID::NullXUID(&result)->m_id;
  }
  LOBYTE(v6) = 36;
  PartyHost_HandleClientDisconnect_Internal(party, &mainActiveClient, (const XUID)m_id, v6, JOINRESPONSE_NONE);
}

/*
==============
PartyAtomicHost_FindOldestUsedSlotForAnonymousMember
==============
*/
__int64 PartyAtomicHost_FindOldestUsedSlotForAnonymousMember(PartyData *party)
{
  const dvar_t *v1; 
  int OldestSlotByStatus; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  unsigned __int8 status; 
  char *fmt; 

  v1 = DVARINT_pt_reservedAnonymousSlotTime;
  if ( !DVARINT_pt_reservedAnonymousSlotTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_reservedAnonymousSlotTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  OldestSlotByStatus = PartyHost_FindOldestSlotByStatus(party, 2, v1->current.integer);
  if ( OldestSlotByStatus >= 0 )
    goto LABEL_16;
  v4 = DVARINT_pt_reservedJoiningSlotTime;
  if ( !DVARINT_pt_reservedJoiningSlotTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_reservedJoiningSlotTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  OldestSlotByStatus = PartyHost_FindOldestSlotByStatus(party, 3, v4->current.integer);
  if ( OldestSlotByStatus >= 0 )
    goto LABEL_16;
  if ( !Party_IsGameLobby(party) || !Com_IsGameLocalServerRunning() )
  {
    v5 = DVARINT_pt_reservedCommittedSlotTime;
    if ( !DVARINT_pt_reservedCommittedSlotTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_reservedCommittedSlotTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    OldestSlotByStatus = PartyHost_FindOldestSlotByStatus(party, 4, v5->current.integer);
  }
  if ( OldestSlotByStatus >= 0 )
  {
LABEL_16:
    status = party->partyMembers[OldestSlotByStatus].status;
    if ( status )
    {
      LODWORD(fmt) = status;
      Com_Printf(25, "[%s] PartyHost - PartyAtomicHost_FindOldestUsedSlotForAnonymousMember - Clearing out slot %i with status %i for new player\n", party->partyName, (unsigned int)OldestSlotByStatus, fmt);
    }
    PartyHost_RemovePlayer(party, OldestSlotByStatus, 0, (const char *)&queryFormat.fmt + 3, NET_CLOSE_SOFT);
  }
  return (unsigned int)OldestSlotByStatus;
}

/*
==============
PartyAtomicHost_HandleJoinRequest_ShouldLetThemConnect
==============
*/
__int64 PartyAtomicHost_HandleJoinRequest_ShouldLetThemConnect(PartyData *party, const LocalClientNum_t localClientNum, netadr_t *from, const unsigned int numPlayersJoining, PartyJoinInfo *partyJoinInfo)
{
  int addrHandleIndex; 
  const char *v11; 
  bdSecurityID *SecurityId; 
  bdSecurityID *v13; 
  int v14; 
  const char *partyName; 
  PartyDisconnectReason v16; 
  netadr_t v17; 

  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7407, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  if ( !PartyAtomic_IsJoiningActive(partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7408, ASSERT_TYPE_ASSERT, "(PartyAtomic_IsJoiningActive( partyJoinInfo ))", (const char *)&queryFormat, "PartyAtomic_IsJoiningActive( partyJoinInfo )") )
    __debugbreak();
  if ( partyJoinInfo->joinType != PJT_MATCHMAKING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7409, ASSERT_TYPE_ASSERT, "(partyJoinInfo->joinType == PJT_MATCHMAKING)", (const char *)&queryFormat, "partyJoinInfo->joinType == PJT_MATCHMAKING") )
    __debugbreak();
  if ( PartyAtomic_PacketIsFromPotentialHost(partyJoinInfo, localClientNum, (const PartyType)party->partyId, from) )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v17.type = *(_OWORD *)&from->type;
    v17.addrHandleIndex = addrHandleIndex;
    v11 = NET_AdrToString(&v17);
    Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - Crazy timing!  We're trying to connect to %s and they're trying to connect to us, too.\n", party->partyName, v11);
    if ( PartyAtomic_GetJoinState(partyJoinInfo) < PARTYJOIN_JOIN )
    {
      if ( Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY) <= numPlayersJoining )
      {
        SecurityId = XSESSION_INFO::GetSecurityId(&partyJoinInfo->session->dyn.sessionInfo);
        v13 = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
        v14 = memcmp_0(SecurityId, v13, 8ui64);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7441, ASSERT_TYPE_ASSERT, "(sessionCompare != 0)", (const char *)&queryFormat, "sessionCompare != 0") )
          __debugbreak();
        partyName = party->partyName;
        if ( v14 <= 0 )
        {
          Com_Printf(25, "[%s] PartyJoin - HandleJoinRequest - We'll pretend we're not trying to connect to them and accept them to our party, and hope to break the stalemate\n", partyName);
          LOBYTE(v16) = 26;
          PartyAtomic_AbortJoinAttempt(partyJoinInfo, v16);
          return 1i64;
        }
        else
        {
          Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We are trying to connect to them and our session ID won.\n", partyName);
          return 13i64;
        }
      }
      else
      {
        Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We are trying to connect to them and have more members.\n", party->partyName);
        return 13i64;
      }
    }
    else
    {
      Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We already connected to their party!\n", party->partyName);
      return 12i64;
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] PartyJoin - HandleJoinRequest - Rejecting incoming party member. We are trying to connect to another party.\n", party->partyName);
    return 11i64;
  }
}

/*
==============
PartyAtomicHost_RefreshAnonymousTimeout
==============
*/
void PartyAtomicHost_RefreshAnonymousTimeout(PartyData *party, const PartyJoinChallenge *challenge, int now)
{
  unsigned int NumGameSlots; 
  unsigned int v7; 
  unsigned int v8; 
  int *p_lastPacketTime; 
  __int64 v10; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7382, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !challenge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7383, ASSERT_TYPE_ASSERT, "(challenge)", (const char *)&queryFormat, "challenge") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  v7 = NumGameSlots;
  if ( NumGameSlots > 0xC8 )
  {
    LODWORD(v11) = NumGameSlots;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7386, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", v11) )
      __debugbreak();
  }
  v8 = 0;
  if ( v7 )
  {
    p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
    do
    {
      if ( *((_BYTE *)p_lastPacketTime + 138) == 2 )
      {
        v10 = v8;
        if ( *(_DWORD *)challenge->str == *(_DWORD *)party->partyMembers[v10].challenge && *(_WORD *)&challenge->str[4] == *(_WORD *)&party->partyMembers[v10].challenge[4] )
          *p_lastPacketTime = now;
      }
      ++v8;
      p_lastPacketTime += 126;
    }
    while ( v8 < v7 );
  }
}

/*
==============
PartyAtomicHost_RemoveAnonymousMembersWithChallengeXuid
==============
*/
void PartyAtomicHost_RemoveAnonymousMembersWithChallengeXuid(PartyData *party, const XUID challengeRequestXuid)
{
  unsigned int NumGameSlots; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned __int8 *p_status; 
  __int64 v7; 
  XUID xuid; 

  xuid.m_id = challengeRequestXuid.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7177, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !XUID::IsNull(&xuid) )
  {
    NumGameSlots = Party_GetNumGameSlots(party);
    v4 = NumGameSlots;
    if ( NumGameSlots > 0xC8 )
    {
      LODWORD(v7) = NumGameSlots;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7183, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", v7) )
        __debugbreak();
    }
    v5 = 0;
    if ( v4 )
    {
      p_status = &party->partyMembers[0].status;
      do
      {
        if ( *p_status == 2 && XUID::operator==(&party->partyMembers[v5].challengeRequestXuid, &xuid) )
        {
          Com_Printf(25, "[%s] PartyJoin: Disconnecting client %i since his challenge XUID was disconnected.\n", party->partyName, v5);
          PartyHost_RemovePlayer(party, v5, 0, "removingAnonymousChallengeXuid", NET_CLOSE_SOFT);
        }
        ++v5;
        p_status += 504;
      }
      while ( v5 < v4 );
    }
  }
}

/*
==============
PartyAtomicHost_SendAcceptMessage
==============
*/
void PartyAtomicHost_SendAcceptMessage(PartyData *party, netadr_t *addr, PartyJoinChallenge *challenge, const XUID xuid)
{
  unsigned __int8 *m_ptr; 
  const char *v9; 
  netadr_t v10; 
  __int64 v11; 
  Mem_LargeLocal data; 
  msg_t buf; 

  v11 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf msgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7463, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7464, ASSERT_TYPE_ASSERT, "(addr)", (const char *)&queryFormat, "addr") )
    __debugbreak();
  v10 = *addr;
  if ( NET_IsLocalAddress(&v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7465, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( *addr ))", (const char *)&queryFormat, "!NET_IsLocalAddress( *addr )") )
    __debugbreak();
  if ( !challenge && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7466, ASSERT_TYPE_ASSERT, "(challenge)", (const char *)&queryFormat, "challenge") )
    __debugbreak();
  MSG_Init(&buf, m_ptr, 2474);
  v9 = j_va("%ipa_accept", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v9);
  MSG_WriteData(&buf, challenge, 6);
  RMsg_AddMessage(addr, &buf, NS_MAXCLIENTS);
  if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    OnlineMatchmakerOmniscient::SetPartyPotentiallyJoining(&OnlineMatchmakerOmniscient::ms_instance, xuid);
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
PartyAtomicHost_SendJoinFailedResponseWithPayload
==============
*/
void PartyAtomicHost_SendJoinFailedResponseWithPayload(PartyData *party, netadr_t *addr, PartyJoinResponse response, const XUID *clientXuid, const unsigned __int8 *payload, const unsigned int payloadSize)
{
  unsigned __int8 *m_ptr; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  netadr_t v16; 
  __int64 v17; 
  Mem_LargeLocal v18; 
  msg_t buf; 

  v17 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v18, 0x9AAui64, "min_msg_buf msgBuf");
  m_ptr = (unsigned __int8 *)v18.m_ptr;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7133, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)response >= JOINRESPONSE_COUNT )
  {
    LODWORD(v14) = response;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7134, ASSERT_TYPE_ASSERT, "(unsigned)( response ) < (unsigned)( JOINRESPONSE_COUNT )", "response doesn't index JOINRESPONSE_COUNT\n\t%i not in [0, %i)", v14, 79) )
      __debugbreak();
  }
  if ( payloadSize > 0xFF )
  {
    LODWORD(v15) = 255;
    LODWORD(v14) = payloadSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7135, ASSERT_TYPE_ASSERT, "( payloadSize ) <= ( 255 )", "payloadSize not in [0, MAX_JOINRESPONSE_PAYLOAD_SIZE]\n\t%u not in [0, %u]", v14, v15) )
      __debugbreak();
  }
  v16 = *addr;
  if ( NET_IsLocalAddress(&v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7137, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( addr ))", (const char *)&queryFormat, "!NET_IsLocalAddress( addr )") )
    __debugbreak();
  Party_DumpInfo(party, "PartyAtomicHost_SendJoinFailedResponseWithPayload");
  MSG_Init(&buf, m_ptr, 2474);
  v11 = j_va("%ipa_joinfailed", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v11);
  MSG_WriteLong(&buf, response);
  MSG_WriteByte(&buf, payloadSize);
  if ( payloadSize )
  {
    if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7149, ASSERT_TYPE_ASSERT, "(payload)", (const char *)&queryFormat, "payload") )
      __debugbreak();
    MSG_WriteData(&buf, payload, payloadSize);
  }
  v16 = *addr;
  v12 = NET_AdrToString(&v16);
  v13 = XUID::ToDevString((XUID *)clientXuid);
  LODWORD(v15) = payloadSize;
  LODWORD(v14) = response;
  Com_Printf(131097, "[%s] PartyJoin - SendJoinFailedResponse - sending 'pa_joinfailed' to client %s at %s with response %i (%i byte payload)\n", party->partyName, v13, v12, v14, v15);
  RMsg_AddMessage(addr, &buf, NS_MAXCLIENTS);
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
}

/*
==============
PartyDebug_PrintTeams
==============
*/
void PartyDebug_PrintTeams(SubpartyInfo *subparties, int subpartyCount)
{
  const dvar_t *v2; 
  int v5; 
  unsigned int *p_count; 
  char *fmt; 

  v2 = DVARBOOL_online_party_reduce_print_spam;
  if ( !DVARBOOL_online_party_reduce_print_spam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_reduce_print_spam") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
  {
    Com_Printf(25, "PrintTeams:\n");
    v5 = 0;
    if ( subpartyCount > 0 )
    {
      p_count = (unsigned int *)&subparties->count;
      do
      {
        LODWORD(fmt) = p_count[1];
        Com_Printf(25, "%i: %i %i\n", (unsigned int)v5++, *p_count, fmt);
        p_count += 254;
      }
      while ( v5 < subpartyCount );
    }
  }
  PartyDebug_UpdateTeam(subparties, subpartyCount);
}

/*
==============
PartyDebug_UpdateTeam
==============
*/
void PartyDebug_UpdateTeam(SubpartyInfo *subparties, int subpartyCount)
{
  __int64 v6; 
  int v7; 
  int v8; 
  int *p_team; 
  __int64 v58; 
  int *p_skill; 
  bool v60; 
  int v61; 
  unsigned int v62; 

  v6 = 0i64;
  v7 = 0;
  v8 = 0;
  if ( subpartyCount > 0 && (unsigned int)subpartyCount >= 8 )
  {
    __asm
    {
      vpxor   xmm5, xmm5, xmm5
      vpxor   xmm6, xmm6, xmm6
      vpxor   xmm7, xmm7, xmm7
    }
    p_team = &subparties[2].team;
    __asm { vpxor   xmm8, xmm8, xmm8 }
    do
    {
      _XMM0 = (unsigned int)*(p_team - 508);
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rax-3F8h], 1
        vpinsrd xmm0, xmm0, dword ptr [rax], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+3F8h], 3
      }
      _XMM3 = (unsigned int)*(p_team - 509);
      __asm
      {
        vpinsrd xmm3, xmm3, dword ptr [rax-3FCh], 1
        vpinsrd xmm3, xmm3, dword ptr [rax-4], 2
        vpinsrd xmm3, xmm3, dword ptr [rax+3F4h], 3
        vpcmpeqd xmm4, xmm0, xmm9
        vpaddd  xmm0, xmm3, xmm5
        vpand   xmm2, xmm0, xmm4
        vpaddd  xmm0, xmm3, xmm8
      }
      _XMM3 = (unsigned int)p_team[507];
      __asm
      {
        vpinsrd xmm3, xmm3, dword ptr [rax+0BE4h], 1
        vpinsrd xmm3, xmm3, dword ptr [rax+0FDCh], 2
        vpinsrd xmm3, xmm3, dword ptr [rax+13D4h], 3
        vpandn  xmm1, xmm4, xmm5
        vpor    xmm5, xmm2, xmm1
        vpandn  xmm2, xmm4, xmm0
      }
      _XMM0 = (unsigned int)p_team[508];
      __asm
      {
        vpinsrd xmm0, xmm0, dword ptr [rax+0BE8h], 1
        vpinsrd xmm0, xmm0, dword ptr [rax+0FE0h], 2
        vpinsrd xmm0, xmm0, dword ptr [rax+13D8h], 3
        vpand   xmm1, xmm4, xmm8
        vpcmpeqd xmm4, xmm0, xmm9
        vpor    xmm8, xmm2, xmm1
        vpaddd  xmm0, xmm3, xmm6
        vpand   xmm2, xmm0, xmm4
        vpandn  xmm1, xmm4, xmm6
        vpaddd  xmm0, xmm3, xmm7
        vpor    xmm6, xmm2, xmm1
      }
      v8 += 8;
      p_team += 2032;
      v6 += 8i64;
      __asm
      {
        vpandn  xmm2, xmm4, xmm0
        vpand   xmm1, xmm4, xmm7
        vpor    xmm7, xmm2, xmm1
      }
    }
    while ( v6 < (int)(subpartyCount - (subpartyCount & 0x80000007)) );
    __asm
    {
      vpaddd  xmm1, xmm7, xmm8
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpaddd  xmm1, xmm6, xmm5
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    v7 = _XMM0;
    __asm
    {
      vpsrldq xmm0, xmm1, 8
      vpaddd  xmm2, xmm1, xmm0
      vpsrldq xmm0, xmm2, 4
      vpaddd  xmm0, xmm2, xmm0
    }
    LODWORD(v6) = _XMM0;
  }
  if ( v8 < (__int64)subpartyCount )
  {
    v58 = subpartyCount - (__int64)v8;
    p_skill = &subparties[v8].skill;
    do
    {
      v60 = p_skill[1] == 1;
      v61 = *p_skill;
      p_skill += 254;
      if ( !v60 )
        v7 += v61;
      v62 = v6 + v61;
      if ( !v60 )
        v62 = v6;
      v6 = v62;
      --v58;
    }
    while ( v58 );
  }
  Com_sprintf_truncate(party_drawTeamDebug, 0x40ui64, "(%i:%i)", v6, v7);
}

/*
==============
PartyHost_AcceptConnection
==============
*/
bool PartyHost_AcceptConnection(PartyData *party, const int memberIndex, const netadr_t *memberAddr)
{
  NetConnection *p_connection; 
  NetConnection::Type ConnectionType; 

  p_connection = &party->partyMembers[memberIndex].connection;
  if ( NetConnection::IsOpened(p_connection) )
  {
    if ( !NetConnection::operator==(p_connection, memberAddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1466, ASSERT_TYPE_ASSERT, "(connection == memberAddr)", "%s\n\tConnection already accepted under different address", "connection == memberAddr") )
      __debugbreak();
    return 1;
  }
  else
  {
    ConnectionType = Party_GetConnectionType(party);
    return NetConnection::Accept(p_connection, memberAddr, ConnectionType, ACCEPT_OPEN);
  }
}

/*
==============
PartyHost_AddBot
==============
*/
void PartyHost_AddBot(PartyData *party, const int botId)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4066, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  PartyHost_AddTestClient(party, botId);
}

/*
==============
PartyHost_AddBotAsync
==============
*/
void PartyHost_AddBotAsync(PartyData *party, const int botIndex, PartyRequestHandle *handle)
{
  int data; 

  data = botIndex;
  PartyRequestBuffer::AddRequest(&party->requestBuffer, PARTY_REQUEST_ADD_BOT, &data, 4, handle);
}

/*
==============
PartyHost_AddLocalPlayer
==============
*/
void PartyHost_AddLocalPlayer(PartyData *party, const PartyActiveClient *partyActiveClient, const int slot)
{
  __int64 v3; 
  const PartyActiveClient *v4; 
  const dvar_t *v6; 
  int LocalNatType; 
  const XUID *Xuid; 
  LocalClientNum_t localClientNum; 
  int localControllerIndex; 
  const char *partyName; 
  const char *v12; 
  SessionData *session; 
  __int64 v14; 
  NetConnection::Type ConnectionType; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  NetConnection *v17; 
  const XNADDR *Address; 
  netsrc_t v19; 
  int ConnectivityBitsForClient; 
  int NumGameSlots; 
  int v22; 
  __int64 v23; 
  unsigned __int8 *p_status; 
  char *fmt; 
  __int64 type; 
  ClientAuthoritativeMemberInfo *memberInfo; 
  ClientAuthoritativeMemberInfo *memberInfoa; 
  XUID player; 
  XUID result; 
  const PartyActiveClient *v31; 
  __int64 v32; 
  netadr_t outAddr; 
  ClientAuthoritativeMemberInfo v34; 

  v32 = -2i64;
  v3 = slot;
  v4 = partyActiveClient;
  v31 = partyActiveClient;
  XUID::XUID(&player);
  bdSecurityID::bdSecurityID(&v34.privatePartyId);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1537, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1538, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1539, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !Live_IsSignedIn(v4->localControllerIndex) && !Live_IsDevmapping() )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)4, NULL);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/SIGNEDOUT");
  }
  if ( !Live_IsInSystemlinkLobby() && !Live_IsUserSignedInToLive(v4->localControllerIndex) )
  {
    v6 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)8, NULL);
      Live_ThrowError(ERR_DROP, "XBOXLIVE/SIGNEDOUT");
    }
  }
  if ( Live_IsInSystemlinkLobby() )
    LocalNatType = 1;
  else
    LocalNatType = Live_GetLocalNatType();
  Xuid = Live_GetXuid(&result, v4->localControllerIndex);
  XUID::operator=(&player, Xuid);
  if ( !XUID::IsValid(&player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1573, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  localClientNum = v4->localClientNum;
  localControllerIndex = v4->localControllerIndex;
  partyName = party->partyName;
  v12 = XUID::ToDevString(&player);
  LODWORD(memberInfo) = LocalNatType;
  LODWORD(fmt) = v3;
  Com_Printf(16, "[%s] Party - AddLocalPlayer - Adding xuid %s in slot %i for party %s, nat type %i, controller %i, client %i\n", party->partyName, v12, fmt, partyName, memberInfo, localControllerIndex, localClientNum);
  if ( Party_FindMemberByXUID(party, player) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1577, ASSERT_TYPE_ASSERT, "(Party_FindMemberByXUID( party, xuid ) < 0)", "%s\n\tAdding someone who's already in the party", "Party_FindMemberByXUID( party, xuid ) < 0") )
    __debugbreak();
  memset_0(&v34, 0, sizeof(v34));
  Party_FillInOurMemberInfo(party, v4->localControllerIndex, &v34);
  LODWORD(result.m_id) = Live_UserIsGuest(v4->localControllerIndex);
  session = party->session;
  v14 = v4->localClientNum;
  ConnectionType = Party_GetConnectionType(party);
  LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v14);
  v17 = &party->currentHost.connections[v14];
  NetConnection::Close(v17, NET_CLOSE_SOFT);
  Address = XSESSION_INFO::GetAddress(&session->dyn.sessionInfo);
  NetConnection::Open(v17, LocalNetIDFromLocalClientNum, &session->dyn.sessionInfo, Address, NS_MAXCLIENTS, ConnectionType);
  v19 = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v4->localClientNum);
  if ( !NET_OpenConnection(&party->session->dyn.sessionInfo, v19, &outAddr) )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_143F734D0, 6103i64);
  PartyHost_AddPlayerAtSlot_Internal(party, v4->localControllerIndex, v3, &player, result.m_id, LocalNatType, &v34, 0);
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(memberInfoa) = 200;
    LODWORD(type) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1223, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", type, memberInfoa) )
      __debugbreak();
  }
  if ( PeerMesh_IsEnabled(party) )
  {
    ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v3);
    NumGameSlots = Party_GetNumGameSlots(party);
    v22 = 0;
    v23 = NumGameSlots;
    if ( NumGameSlots > 0 )
    {
      p_status = &party->partyMembers[0].status;
      do
      {
        if ( *p_status != 6 && Party_IsMemberRegistered(party, v22) && !Party_IsMemberHost(party, v22) )
        {
          if ( Party_MemberHasLoopbackAddr(party, v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1246, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, memberIndex ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, memberIndex )") )
            __debugbreak();
          if ( PeerMesh_AddClientConnectivity(party, v22, ConnectivityBitsForClient) )
            PartyHost_MemberInfoChanged(party, v22, 1);
        }
        ++v22;
        p_status += 504;
        --v23;
      }
      while ( v23 );
      v4 = v31;
    }
  }
  PartyHost_CommitPlayer(party, v4->localControllerIndex, v3, &outAddr);
  if ( !NetConnection::IsLoopback(&party->partyMembers[v3].connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1608, ASSERT_TYPE_ASSERT, "(party->partyMembers[slot].connection.IsLoopback())", "%s\n\tConnection was not initialized as loopback for local player", "party->partyMembers[slot].connection.IsLoopback()") )
    __debugbreak();
  bdSecurityID::~bdSecurityID(&v34.privatePartyId);
}

/*
==============
PartyHost_AddOtherSplitscreenLocalPlayer
==============
*/
void PartyHost_AddOtherSplitscreenLocalPlayer(PartyData *party)
{
  unsigned __int64 PlatformUserId; 
  int FirstSlotByStatus; 
  char *fmt; 
  __int64 v5; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1619, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1620, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1621, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
  {
    PlatformUserId = Live_GetPlatformUserId(outPartyActiveClient.localControllerIndex);
    if ( Party_FindMemberByPlatformId(party, PlatformUserId) < 0 )
    {
      FirstSlotByStatus = PartyHost_FindFirstSlotByStatus(party, 0);
      if ( FirstSlotByStatus >= 0 )
      {
        LODWORD(v5) = FirstSlotByStatus;
        LODWORD(fmt) = outPartyActiveClient.localClientNum;
        Com_Printf(25, "[%s] PartyHost - AddOtherSplitscreenLocalPlayer - Add other client with controller %i and client %i in slot %i\n", party->partyName, (unsigned int)outPartyActiveClient.localControllerIndex, fmt, v5);
        PartyHost_AddLocalPlayer(party, &outPartyActiveClient, FirstSlotByStatus);
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1636, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to add local player to new lobby: no empty slots. this may lead to an invalid splitscreen state\n") )
          __debugbreak();
        Party_ClearOtherSplitscreenClient(&party->splitscreenData);
      }
    }
    else
    {
      Com_PrintWarning(14, "[%s] PartyHost - AddOtherSplitscreenLocalPlayer - Trying to add client who's already in the party (%zu)\n", party->partyName, PlatformUserId);
    }
  }
}

/*
==============
PartyHost_AddPartyMemberToLobby
==============
*/
__int64 PartyHost_AddPartyMemberToLobby(const int localControllerIndex, const XUID hostXuid, const int partyMemberIndex)
{
  __int64 v3; 
  NetConnection *MemberConnection; 
  PartyData *PartyData; 
  netadr_t *Netadr; 
  __int128 v9; 
  int v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  const PartyData *v16; 
  const PartyData *v17; 
  unsigned int NumGameSlots; 
  bool IsPrivatePresence; 
  __int64 natType; 
  __int64 natTypea; 
  ClientAuthoritativeMemberInfo *memberInfo; 
  unsigned int outSlot[4]; 
  netadr_t v24; 
  msg_t buf; 
  netadr_t result; 
  unsigned __int8 data[512]; 

  v3 = partyMemberIndex;
  if ( !Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6235, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby())", (const char *)&queryFormat, "Lobby_IsInLobby()") )
    __debugbreak();
  if ( !Lobby_AreWeHost() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6236, ASSERT_TYPE_ASSERT, "(Lobby_AreWeHost())", (const char *)&queryFormat, "Lobby_AreWeHost()") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(natType) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6237, ASSERT_TYPE_ASSERT, "(unsigned)( partyMemberIndex ) < (unsigned)( 200 )", "partyMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", natType, 200) )
      __debugbreak();
  }
  if ( Party_IsMemberRegistered(&g_partyData, v3) )
  {
    MemberConnection = (NetConnection *)Party_GetMemberConnection(&g_partyData, v3);
    PartyData = Lobby_GetPartyData();
    if ( NetConnection::IsLocal(MemberConnection) )
    {
      Netadr = NetConnection::GetNetadr(MemberConnection, &result);
      v9 = *(_OWORD *)&Netadr->type;
      LODWORD(Netadr) = Netadr->addrHandleIndex;
      *(_OWORD *)&v24.type = v9;
      v24.addrHandleIndex = (int)Netadr;
      if ( !Party_FindFirstMemberAtAddr(PartyData, &v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6247, ASSERT_TYPE_ASSERT, "(Party_FindFirstMemberAtAddr( lobby, partyConnection.GetNetadr() ))", "%s\n\tDid not add local players properly to the lobby", "Party_FindFirstMemberAtAddr( lobby, partyConnection.GetNetadr() )") )
      {
        __debugbreak();
        return 1i64;
      }
      return 1i64;
    }
    v11 = PartyAtomicHost_AddAnonymousMember(PartyData, hostXuid, &s_partyHostJoinChallenge, outSlot);
    v12 = v11;
    if ( v11 < 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6253, ASSERT_TYPE_ASSERT, "( joinResponse ) >= ( JOINRESPONSE_SUCCESS )", "%s >= %s\n\t%i, %i", "joinResponse", "JOINRESPONSE_SUCCESS", v11, 1) )
      __debugbreak();
    if ( v12 == 1 )
    {
      if ( Live_IsInSystemlinkLobby() )
      {
        g_partyData.partyMembers[v3].natType = 1;
        v13 = 1;
      }
      else
      {
        v13 = g_partyData.partyMembers[v3].natType;
      }
      v14 = outSlot[0];
      PartyHost_AddPlayerAtSlot_Internal(PartyData, localControllerIndex, outSlot[0], &g_partyData.partyMembers[v3].playerUID, g_partyData.partyMembers[v3].isGuestAccount, v13, &g_partyData.partyMembers[v3].info, g_partyData.partyMembers[v3].joinType);
      if ( (unsigned int)v14 >= 0xC8 )
      {
        LODWORD(memberInfo) = 200;
        LODWORD(natTypea) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6276, ASSERT_TYPE_ASSERT, "(unsigned)( newMemberIndex ) < (unsigned)( 200 )", "newMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", natTypea, memberInfo) )
          __debugbreak();
      }
      Com_Printf(25, "[%s] PartyHost_AddPartyMemberToLobby - Marking member %i as zombie and inviting him.\n", PartyData->partyName, (unsigned int)v14);
      v15 = v14;
      PartyData->partyMembers[v15].status = 1;
      PartyData->partyMembers[v15].lastPacketTime = Sys_Milliseconds();
      if ( !Party_IsMatchmakingLobby(PartyData) )
      {
        MSG_Init(&buf, data, 512);
        if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6183, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
          __debugbreak();
        if ( !g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6184, ASSERT_TYPE_ASSERT, "(g_partyData.areWeHost)", (const char *)&queryFormat, "g_partyData.areWeHost") )
          __debugbreak();
        if ( !Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6185, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby())", (const char *)&queryFormat, "Lobby_IsInLobby()") )
          __debugbreak();
        if ( !Lobby_AreWeHost() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6186, ASSERT_TYPE_ASSERT, "(Lobby_AreWeHost())", (const char *)&queryFormat, "Lobby_AreWeHost()") )
          __debugbreak();
        v16 = Lobby_GetPartyData();
        PartyHost_WritePresenceMessageHeader(&buf, 0);
        v17 = Lobby_GetPartyData();
        NumGameSlots = Party_GetNumGameSlots(v17);
        Com_Printf(25, "[%s] PartyHost - BuildBroadcastLobbyPresence - %i slots\n", v16->partyName, NumGameSlots);
        XSESSION_INFO::Serialize(&v16->session->dyn.sessionInfo, &buf);
        IsPrivatePresence = Party_IsPrivatePresence(v16);
        MSG_WriteBool(&buf, IsPrivatePresence);
        if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6198, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( newMsg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( newMsg )") )
          __debugbreak();
        NetConnection::SendReliable(MemberConnection, &buf);
      }
      return 1i64;
    }
  }
  return 0i64;
}

/*
==============
PartyHost_AddPartyMembersToLobby
==============
*/
void PartyHost_AddPartyMembersToLobby(const int localControllerIndex)
{
  const PartyData *PartyData; 
  LocalClientNum_t ClientFromController; 
  __int64 v4; 
  int v5; 
  NetConnection *p_connection; 
  int v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  XUID result; 

  if ( !Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6307, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby())", (const char *)&queryFormat, "Lobby_IsInLobby()") )
    __debugbreak();
  if ( !Lobby_AreWeHost() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6308, ASSERT_TYPE_ASSERT, "(Lobby_AreWeHost())", (const char *)&queryFormat, "Lobby_AreWeHost()") )
    __debugbreak();
  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6309, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( !g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6310, ASSERT_TYPE_ASSERT, "(g_partyData.areWeHost)", (const char *)&queryFormat, "g_partyData.areWeHost") )
    __debugbreak();
  PartyData = Lobby_GetPartyData();
  if ( PartyMigrate_MigrateActive(PartyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6314, ASSERT_TYPE_ASSERT, "(!PartyMigrate_MigrateActive( Lobby_GetPartyData() ))", (const char *)&queryFormat, "!PartyMigrate_MigrateActive( Lobby_GetPartyData() )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v4 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v9) = ClientFromController;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, 2) )
      __debugbreak();
  }
  if ( clientUIActives[v4].migrationState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6315, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientMigrationState( CL_Mgr_GetClientFromController( localControllerIndex ) ) == CMSTATE_INACTIVE)", (const char *)&queryFormat, "CL_GetLocalClientMigrationState( CL_Mgr_GetClientFromController( localControllerIndex ) ) == CMSTATE_INACTIVE") )
    __debugbreak();
  if ( Party_IsWaitingForMembers(&g_partyData) )
    Com_PrintWarning(25, "[%s] May be leaving party members behind, not all present when inviting to lobby. Could happen if the lobby host who was a party client backed out.", g_partyData.partyName);
  Live_GetXuid(&result, localControllerIndex);
  v5 = 0;
  p_connection = &g_partyData.partyMembers[0].connection;
  v7 = 0;
  v8 = Party_CountMembersEvenIfInactive(&g_partyData, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  do
  {
    if ( BYTE2(p_connection[5].m_channel) == 6 )
      goto LABEL_33;
    if ( Party_IsMemberPresent((const PartyMember *)&p_connection[-8].m_localId) )
    {
      if ( !NetConnection::IsOpened(p_connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6344, ASSERT_TYPE_ASSERT, "(partyMember->connection.IsOpened())", "%s\n\tPresent members should always have an open connection", "partyMember->connection.IsOpened()") )
        __debugbreak();
      if ( NetConnection::IsOpened(p_connection) )
      {
        if ( !(unsigned int)PartyHost_AddPartyMemberToLobby(localControllerIndex, result, v7) )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143F78BF0, 525i64);
LABEL_33:
        ++v5;
      }
    }
    ++v7;
    p_connection = (NetConnection *)((char *)p_connection + 504);
  }
  while ( v7 < 200 );
  if ( v5 != v8 )
  {
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6360, ASSERT_TYPE_ASSERT, "(playersAdded == numPlayersJoining)", "%s\n\tExpected to add %i players, but we only added %i players\n", "playersAdded == numPlayersJoining", v10, v5) )
      __debugbreak();
  }
}

/*
==============
PartyHost_AddPlayerAtSlot_Internal
==============
*/
void PartyHost_AddPlayerAtSlot_Internal(PartyData *party, const int localControllerIndex, const int slot, const XUID *xuid, const int isGuestAccount, const int natType, const ClientAuthoritativeMemberInfo *memberInfo, const unsigned __int8 joinType)
{
  __int64 v8; 
  int v11; 
  const char *v12; 
  const ClientAuthoritativeMemberInfo *v13; 
  unsigned __int8 v14; 
  unsigned __int8 status; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *v18; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 
  int outMemberIndex; 

  v8 = slot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1354, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1355, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1356, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !xuid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1357, ASSERT_TYPE_ASSERT, "(xuid != nullptr)", (const char *)&queryFormat, "xuid != nullptr") )
    __debugbreak();
  if ( !XUID::IsValid((XUID *)xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1358, ASSERT_TYPE_ASSERT, "(xuid->IsValid())", (const char *)&queryFormat, "xuid->IsValid()") )
    __debugbreak();
  v11 = natType;
  if ( (unsigned int)(natType - 1) > 2 )
  {
    LODWORD(v22) = natType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1359, ASSERT_TYPE_ASSERT, "( ( (natType > XONLINE_NAT_UNKNOWN) && (natType <= XONLINE_NAT_STRICT) ) )", "( natType ) = %i", v22) )
      __debugbreak();
  }
  v12 = XUID::ToDevString((XUID *)xuid);
  v13 = memberInfo;
  v14 = joinType;
  LODWORD(v22) = v8;
  Com_Printf(25, "[%s] Adding player %s (%s) at slot %i with joinType %i\n", party->partyName, memberInfo->gamertag, v12, v22, joinType);
  status = party->partyMembers[v8].status;
  if ( status > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1365, ASSERT_TYPE_ASSERT, "( partyMember->status ) <= ( PARTYSTATUS_ANONYMOUS )", "%s <= %s\n\t%i, %i", "partyMember->status", "PARTYSTATUS_ANONYMOUS", status, 2) )
    __debugbreak();
  if ( party->partyMembers[v8].status )
    Party_ClearMember(party, v8, NET_CLOSE_SOFT);
  if ( party->partyMembers[v8].lastPartyGoTime )
  {
    LODWORD(v23) = party->partyMembers[v8].lastPartyGoTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1371, ASSERT_TYPE_ASSERT, "( ( partyMember->lastPartyGoTime == 0 ) )", "( partyMember->lastPartyGoTime ) = %i", v23) )
      __debugbreak();
  }
  if ( Party_FindMemberByXUID_Internal(party, (const XUID)xuid->m_id, &outMemberIndex) && outMemberIndex != (_DWORD)v8 )
  {
    Com_Printf(25, "[%s] Clearing out old slot %i that they used to be in\n", party->partyName, (unsigned int)outMemberIndex);
    Party_ClearMember(party, v8, NET_CLOSE_SOFT);
  }
  *(_OWORD *)party->partyMembers[v8].info.privatePartyId.ab = *(_OWORD *)v13->privatePartyId.ab;
  *(_OWORD *)&party->partyMembers[v8].info.zombie_consumable1 = *(_OWORD *)&v13->zombie_consumable1;
  *(_OWORD *)&party->partyMembers[v8].info.alien_readyUpFlag = *(_OWORD *)&v13->alien_readyUpFlag;
  *(_OWORD *)&party->partyMembers[v8].info.clientDesiredTeamSelection = *(_OWORD *)&v13->clientDesiredTeamSelection;
  *(_OWORD *)&party->partyMembers[v8].info.gamertag[12] = *(_OWORD *)&v13->gamertag[12];
  *(_OWORD *)&party->partyMembers[v8].info.gamertag[28] = *(_OWORD *)&v13->gamertag[28];
  *(_OWORD *)&party->partyMembers[v8].info.clanAbbrev[4] = *(_OWORD *)&v13->clanAbbrev[4];
  *(_OWORD *)&party->partyMembers[v8].info.wins = *(_OWORD *)&v13->wins;
  *(_OWORD *)&party->partyMembers[v8].info.winLossRatio = *(_OWORD *)&v13->winLossRatio;
  *(_OWORD *)&party->partyMembers[v8].info.mlgFollower = *(_OWORD *)&v13->mlgFollower;
  *(_OWORD *)&party->partyMembers[v8].info.platformId = *(_OWORD *)&v13->platformId;
  *(_QWORD *)&party->partyMembers[v8].info.deathsHistory[3] = *(_QWORD *)&v13->deathsHistory[3];
  XUID::operator=(&party->partyMembers[v8].playerUID, xuid);
  if ( !XUID::IsValid(&party->partyMembers[v8].playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1382, ASSERT_TYPE_ASSERT, "(partyMember->playerUID.IsValid())", (const char *)&queryFormat, "partyMember->playerUID.IsValid()") )
    __debugbreak();
  if ( Party_FindMemberByXUID_Internal(party, (const XUID)xuid->m_id, &outMemberIndex) && outMemberIndex != (_DWORD)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1383, ASSERT_TYPE_ASSERT, "(!Party_FindMemberByXUID_Internal( party, *xuid, &foundMember ) || (foundMember == slot))", (const char *)&queryFormat, "!Party_FindMemberByXUID_Internal( party, *xuid, &foundMember ) || (foundMember == slot)") )
    __debugbreak();
  v16 = XUID::ToUint64((XUID *)xuid);
  v17 = ((unsigned int)v16 ^ HIDWORD(v16)) % 0x185;
  if ( v17 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v18 = &party->memberMap.m_buckets.m_data[v17];
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)v18->m_listHead.m_sentinel.mp_next == v18 )
  {
LABEL_47:
    *(_QWORD *)&v24 = v16;
    DWORD2(v24) = 0;
    if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18 )
    {
LABEL_53:
      p_m_freelist = &party->memberMap.m_freelist;
      if ( !party->memberMap.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xCAui64) )
        __debugbreak();
      mp_next = p_m_freelist->m_head.mp_next;
      p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
      v14 = joinType;
      mp_next->mp_next = NULL;
      *(_OWORD *)&mp_next[1].mp_next = v24;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18->m_listHead.m_sentinel.mp_next;
      v18->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)mp_next;
    }
    else
    {
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v16 )
          break;
        mp_next = mp_next->mp_next;
        if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18 )
          goto LABEL_53;
      }
      mp_next = NULL;
    }
    ++party->memberMap.m_currentNumItems;
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 331, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v16 )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18 )
      {
        mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v18->m_listHead.m_sentinel.mp_next;
        goto LABEL_47;
      }
    }
  }
  v21 = isGuestAccount;
  LODWORD(mp_next[2].mp_next) = v8;
  party->partyMembers[v8].isGuestAccount = v21;
  party->partyMembers[v8].natType = v11;
  party->partyMembers[v8].lastPacketTime = Sys_Milliseconds();
  party->partyMembers[v8].joinType = v14;
  if ( Party_IsPrivateParty(party) && (unsigned __int8)(party->partyMembers[v8].joinType - 1) <= 1u )
    party->partyMembers[v8].isUserInviteJoining = 1;
  PartyHost_UpdatePlayerStatus(party, localControllerIndex, v8, 3);
  Party_CheckUpdatedPartyMemberPartyId(party, localControllerIndex, v8);
  if ( Party_IsMemberRegistered(party, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1407, ASSERT_TYPE_ASSERT, "(!Party_IsMemberRegistered( party, slot ))", (const char *)&queryFormat, "!Party_IsMemberRegistered( party, slot )") )
    __debugbreak();
}

/*
==============
PartyHost_AddTestClient
==============
*/
void PartyHost_AddTestClient(PartyData *party, const int memberId)
{
  int FirstSlotByStatus; 
  unsigned int NumGameSlots; 
  int v6; 
  bdSecurityID privatePartyId; 
  bdSecurityID v8; 
  __int64 v9; 
  bdSecurityID other; 

  v9 = -2i64;
  bdSecurityID::bdSecurityID(&other);
  FirstSlotByStatus = PartyHost_FindFirstSlotByStatus(party, 0);
  if ( FirstSlotByStatus >= 0 )
  {
    if ( Party_IsGameLobby(party) && g_partyData.inParty && g_partyData.areWeHost )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_party_testclients_in_private_party, "party_testclients_in_private_party") )
      {
        other = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
        v6 = PartyHost_FindFirstSlotByStatus(&g_partyData, 0);
LABEL_12:
        bdSecurityID::bdSecurityID(&v8, &other);
        PartyHost_AddTestClient_0(party, memberId, FirstSlotByStatus, v6, privatePartyId);
        goto LABEL_13;
      }
    }
    else if ( Party_IsPrivateParty(party) )
    {
      other = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
LABEL_11:
      v6 = -1;
      goto LABEL_12;
    }
    other.ab[7] = I_irand(1, 256);
    other.ab[6] = other.ab[7];
    other.ab[5] = other.ab[7];
    other.ab[4] = other.ab[7];
    other.ab[3] = other.ab[7];
    other.ab[2] = other.ab[7];
    other.ab[1] = other.ab[7];
    other.ab[0] = other.ab[7];
    goto LABEL_11;
  }
  NumGameSlots = Party_GetNumGameSlots(party);
  Com_Printf(25, "[%s] unable to add test client: active party is full, max (%i).\n", party->partyName, NumGameSlots);
LABEL_13:
  bdSecurityID::~bdSecurityID(&other);
}

/*
==============
PartyHost_AllocMatchRulesNetworkingMemory
==============
*/
void PartyHost_AllocMatchRulesNetworkingMemory(void)
{
  if ( !g_matchRulesSnapshots && !g_matchRulesSnapshotsDelta )
  {
    g_matchRulesSnapshots = (MatchRulesSnapshot *)PMem_Alloc(0xC8320ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "PartyHost_AllocMatchRulesNetworkingMemory: g_matchRulesSnapshots");
    memset_0(g_matchRulesSnapshots, 0, 0xC8320ui64);
    g_matchRulesSnapshotsDelta = (MatchRulesSnapshotDelta *)PMem_Alloc(0xEF100ui64, 4ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "PartyHost_AllocMatchRulesNetworkingMemory: g_matchRulesSnapshotsDelta");
    memset_0(g_matchRulesSnapshotsDelta, 0, 0xEF100ui64);
  }
}

/*
==============
PartyHost_AnyoneStillConnecting
==============
*/
__int64 PartyHost_AnyoneStillConnecting(const PartyData *party)
{
  const dvar_t *v2; 
  int integer; 
  int v4; 
  int *p_lastPacketTime; 
  __int64 v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2371, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2372, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v2 = DVARINT_pt_stillConnectingWaitTime;
  if ( !DVARINT_pt_stillConnectingWaitTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_stillConnectingWaitTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v4 = Sys_Milliseconds() - integer;
  p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
  v6 = 0i64;
  while ( (unsigned __int8)(*((_BYTE *)p_lastPacketTime + 138) - 2) > 2u || *p_lastPacketTime < v4 )
  {
    ++v6;
    p_lastPacketTime += 126;
    if ( v6 >= 200 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
PartyHost_ArchiveGameSettings
==============
*/
void PartyHost_ArchiveGameSettings(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5568, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5569, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( PartyHost_UseArchivedGameStateInfo(party) )
    BG_GameStateInfo_SaveCurrentState();
}

/*
==============
PartyHost_ArePresentClientsUpToDate
==============
*/
__int64 PartyHost_ArePresentClientsUpToDate(const PartyData *party)
{
  unsigned int v2; 
  PartyMember *i; 
  __int64 v5; 
  __int64 v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2170, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2171, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2172, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v2 = 0;
  for ( i = party->partyMembers; ; ++i )
  {
    if ( i->status != 6 && Party_IsMemberPresent(i) )
    {
      if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2137, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
        __debugbreak();
      if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2138, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
        __debugbreak();
      if ( v2 >= 0xC8 )
      {
        LODWORD(v6) = 200;
        LODWORD(v5) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2139, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( !Party_IsMemberIndexDataAvailable(party, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2140, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, memberIndex )") )
        __debugbreak();
      if ( !Party_IsHost(party, v2) && !Party_IsMemberLocalPlayer(party, v2) )
      {
        if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2095, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
          __debugbreak();
        if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2096, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
          __debugbreak();
        if ( GameStateInfo_Get()->usingRecipe && i->lastMatchRulesAck < party->specificData.hostData.matchRulesChangeTime )
          break;
      }
    }
    if ( (int)++v2 >= 200 )
      return 1i64;
  }
  return 0i64;
}

/*
==============
PartyHost_AskPartyMembersToBackOut
==============
*/
void PartyHost_AskPartyMembersToBackOut(PartyData *party)
{
  msg_t buf; 
  unsigned __int8 data[32]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9895, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9896, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9897, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9898, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  MSG_Init(&buf, data, 32);
  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6171, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( !g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6172, ASSERT_TYPE_ASSERT, "(g_partyData.areWeHost)", (const char *)&queryFormat, "g_partyData.areWeHost") )
    __debugbreak();
  PartyHost_WritePresenceMessageHeader(&buf, 1u);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6176, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( newMsg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( newMsg )") )
    __debugbreak();
  if ( PartyHost_DemotePresentPartyMembers(party, &buf) )
    RMsg_SendMessages();
}

/*
==============
PartyHost_AssignSquad
==============
*/
__int64 PartyHost_AssignSquad(PartyData *party, const int slot, const int maxSquadSize)
{
  __int64 v3; 
  char *v6; 
  unsigned __int8 v7; 
  const char *v8; 
  const char *v10; 
  NetConnection *MemberConnection; 
  unsigned int SplitscreenClientNumAtSameAddress; 
  int v13; 
  const XUID *Xuid; 
  bool SquadFor; 
  const char *v16; 
  const char *v17; 
  unsigned int v18; 
  int *v19; 
  __int64 v20; 
  SessionData *session; 
  bdSecurityID *SecurityId; 
  int v23; 
  int *p_squad; 
  __int64 v25; 
  const char *v26; 
  __int64 i; 
  int *v28; 
  int v29; 
  const char *MemberName; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  int squadId; 
  XUID result; 
  char *v36; 
  XUID v37; 
  int v38[100]; 

  v3 = slot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 933, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 934, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 935, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v32) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 937, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, 200) )
      __debugbreak();
  }
  v6 = (char *)party + 504 * v3;
  v36 = v6;
  v7 = v6[2602];
  if ( v7 < 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 938, ASSERT_TYPE_ASSERT, "( party->partyMembers[slot].status ) >= ( PARTYSTATUS_JOINED )", "%s >= %s\n\t%i, %i", "party->partyMembers[slot].status", "PARTYSTATUS_JOINED", v7, 3) )
    __debugbreak();
  if ( maxSquadSize > 1 )
  {
    if ( *((_DWORD *)v6 + 648) )
    {
      if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
      {
        Party_GetXuid(&result, party, v3);
        v10 = XUID::ToDevString(&result);
        Com_Printf(25, "[%s] %s - assigning squad for %s\n", party->partyName, "PartyHost_AssignSquad", v10);
        MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v3);
        if ( NetConnection::IsSplitscreen(MemberConnection) )
        {
          SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, v3);
          v13 = SplitscreenClientNumAtSameAddress;
          if ( SplitscreenClientNumAtSameAddress >= 0xC8 )
          {
            LODWORD(v33) = 200;
            LODWORD(v32) = SplitscreenClientNumAtSameAddress;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 963, ASSERT_TYPE_ASSERT, "(unsigned)( primaryMemberIndex ) < (unsigned)( 200 )", "primaryMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, v33) )
              __debugbreak();
          }
          Xuid = Party_GetXuid(&v37, party, v13);
          XUID::operator=(&result, Xuid);
        }
        SquadFor = OnlineMatchmakerOmniscient::GetSquadFor(&OnlineMatchmakerOmniscient::ms_instance, result, &squadId);
        v16 = XUID::ToDevString((XUID *)v6 + 326);
        if ( SquadFor )
        {
          Com_Printf(25, "\tDW has assigned squad %d for %s\n", (unsigned int)squadId, v16);
          return (unsigned int)squadId;
        }
        Com_PrintError(131097, "\tDW has NOT assigned a squad for %s!\n", v16);
        v17 = XUID::ToDevString(&result);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 975, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s Matchmaker did not find a squad for %s!", "PartyHost_AssignSquad", v17) )
          __debugbreak();
      }
      v18 = 0;
      v19 = v38;
      v20 = 6i64;
      do
      {
        *(_QWORD *)v19 = 0i64;
        *((_QWORD *)v19 + 1) = 0i64;
        *((_QWORD *)v19 + 2) = 0i64;
        v19 += 16;
        *((_QWORD *)v19 - 5) = 0i64;
        *((_QWORD *)v19 - 4) = 0i64;
        *((_QWORD *)v19 - 3) = 0i64;
        *((_QWORD *)v19 - 2) = 0i64;
        *((_QWORD *)v19 - 1) = 0i64;
        --v20;
      }
      while ( v20 );
      session = party->session;
      *(_QWORD *)v19 = 0i64;
      *((_QWORD *)v19 + 1) = 0i64;
      SecurityId = XSESSION_INFO::GetSecurityId(&session->dyn.sessionInfo);
      if ( bdSecurityID::operator!=(SecurityId, (const bdSecurityID *)v6 + 274) && bdSecurityID::operator!=(&g_noPrivatePartyId, (const bdSecurityID *)v6 + 274) )
      {
        v23 = 0;
        p_squad = &party->partyMembers[0].squad;
        do
        {
          if ( v23 != (_DWORD)v3 && *((_BYTE *)p_squad + 6) >= 5u && *(p_squad - 1) == *((_DWORD *)v6 + 648) )
          {
            ++v38[*p_squad];
            if ( bdSecurityID::operator==(&party->partyMembers[v23].info.privatePartyId, (const bdSecurityID *)v6 + 274) )
            {
              v25 = *p_squad;
              if ( v38[v25] < maxSquadSize )
              {
                v28 = &party->partyMembers[v23].squad;
                v29 = *v28;
                MemberName = Party_GetMemberName(party, v3);
                LODWORD(fmt) = v29;
                Com_Printf(25, "[%s] %s is in a subparty, assigning to %i\n", party->partyName, MemberName, fmt);
                return (unsigned int)*v28;
              }
              v26 = Party_GetMemberName(party, v3);
              LODWORD(fmt) = v25;
              Com_Printf(25, "[%s] %s is in a subparty, but squad %i is full, so splitting the private party.\n", party->partyName, v26, fmt);
              v6 = v36;
            }
          }
          ++v23;
          p_squad += 126;
        }
        while ( v23 < 200 );
      }
      for ( i = 0i64; i <= 100; ++i )
      {
        if ( v38[i] < maxSquadSize )
          return v18;
        ++v18;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1024, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Somehow all the squads were full and we have to add a new guy?") )
        __debugbreak();
    }
    else
    {
      v8 = Party_GetMemberName(party, v3);
      Com_Printf(25, "[%s] Member %i is not on a team, so we can't assign %s to a squad.\n", party->partyName, (unsigned int)v3, v8);
    }
  }
  return 0xFFFFFFFFi64;
}

/*
==============
PartyHost_AssignTeam
==============
*/
team_t PartyHost_AssignTeam(PartyData *party, const int controllerIndex, const int slot, bool isHuman)
{
  __int64 v4; 
  unsigned __int8 v8; 
  unsigned int v9; 
  int v10; 
  char *v12; 
  const char *MemberName; 
  const dvar_t *v14; 
  const char *partyName; 
  int integer; 
  const dvar_t *v17; 
  const char *v18; 
  const char *v19; 
  NetConnection *MemberConnection; 
  unsigned int SplitscreenClientNumAtSameAddress; 
  int v22; 
  const XUID *Xuid; 
  bool TeamFor; 
  const char *v25; 
  const char *v26; 
  int *v27; 
  __int64 v28; 
  SessionData *session; 
  bdSecurityID *SecurityId; 
  const bdSecurityID *v31; 
  int v32; 
  int *p_team; 
  int v34; 
  const dvar_t *v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  __int64 v39; 
  const dvar_t *v40; 
  const char *v41; 
  int *v42; 
  int v43; 
  const char *v44; 
  int v45; 
  const char *v46; 
  const char *v47; 
  char *fmt; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  team_t teamId; 
  int Int_Internal_DebugName; 
  XUID result; 
  __int64 v55; 
  XUID v56; 
  int v57[204]; 

  v4 = slot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1038, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1039, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1040, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v49) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1042, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v49, 200) )
      __debugbreak();
  }
  v55 = (__int64)party + 504 * v4;
  v8 = *(_BYTE *)(v55 + 2602);
  if ( v8 < 3u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1043, ASSERT_TYPE_ASSERT, "( party->partyMembers[slot].status ) >= ( PARTYSTATUS_JOINED )", "%s >= %s\n\t%i, %i", "party->partyMembers[slot].status", "PARTYSTATUS_JOINED", v8, 3) )
    __debugbreak();
  v9 = 0;
  v10 = 0;
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_Bots_AreHumansOnAlliesOnly() && isHuman )
  {
    Com_Printf(25, "[%s] BG_Bots_AreHumansOnAlliesOnly() is set, assigning slot %d to TEAM_ALLIES\n", party->partyName, (unsigned int)v4);
    return 2;
  }
  v12 = (char *)party + 504 * v4;
  if ( Live_IsInGameBattlesGame() )
    return GameBattles_GetTeamFromPlatformId(controllerIndex, *((_QWORD *)v12 + 294));
  if ( (unsigned __int8)v12[2602] < 5u )
  {
    MemberName = Party_GetMemberName(party, v4);
    Com_Printf(25, "[%s] Member %i is not fully present yet, assigning %s to TEAM_FREE\n", party->partyName, (unsigned int)v4, MemberName);
    return 0;
  }
  if ( !Party_UsingTeams(party) )
  {
    v14 = DVARINT_party_teamCount;
    partyName = party->partyName;
    if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    integer = v14->current.integer;
    v17 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    LODWORD(fmt) = integer;
    Com_Printf(25, "[%s] No team assignments required: xblive_privatematch = %i, party_teamCount = %i, %s\n", party->partyName, v17->current.color[0], fmt, partyName);
    return 0;
  }
  if ( !PartyHost_UsingAssignedTeams(party) && !Party_UsingPartyBasedTeams(party) )
  {
    v18 = Party_GetMemberName(party, v4);
    Com_Printf(25, "[%s] Teams haven't been assigned yet, assigning %s to TEAM_FREE\n", party->partyName, v18);
    return 0;
  }
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_party_teamCount, "party_teamCount");
  if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    Party_GetXuid(&result, party, v4);
    OnlineMatchmakerOmniscient::PrintTeams(&OnlineMatchmakerOmniscient::ms_instance, party);
    v19 = XUID::ToDevString((XUID *)v12 + 326);
    Com_Printf(25, "[%s] %s - assigning team for %s\n", party->partyName, "PartyHost_AssignTeam", v19);
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v4);
    if ( NetConnection::IsSplitscreen(MemberConnection) )
    {
      SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, v4);
      v22 = SplitscreenClientNumAtSameAddress;
      if ( SplitscreenClientNumAtSameAddress >= 0xC8 )
      {
        LODWORD(v50) = 200;
        LODWORD(v49) = SplitscreenClientNumAtSameAddress;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1096, ASSERT_TYPE_ASSERT, "(unsigned)( primaryMemberIndex ) < (unsigned)( 200 )", "primaryMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v49, v50) )
          __debugbreak();
      }
      Xuid = Party_GetXuid(&v56, party, v22);
      XUID::operator=(&result, Xuid);
    }
    TeamFor = OnlineMatchmakerOmniscient::GetTeamFor(&OnlineMatchmakerOmniscient::ms_instance, result, &teamId);
    v25 = XUID::ToDevString((XUID *)v12 + 326);
    if ( TeamFor )
    {
      Com_Printf(25, "\tDW has assigned team %d for %s\n", (unsigned int)teamId, v25);
      return teamId;
    }
    Com_PrintError(131097, "\tDW has NOT assigned a team for %s!\n", v25);
    v26 = XUID::ToDevString(&result);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1108, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s Matchmaker did not find a team for %s!", "PartyHost_AssignTeam", v26) )
      __debugbreak();
  }
  v27 = v57;
  v28 = 12i64;
  do
  {
    *(_QWORD *)v27 = 0i64;
    *((_QWORD *)v27 + 1) = 0i64;
    *((_QWORD *)v27 + 2) = 0i64;
    v27 += 16;
    *((_QWORD *)v27 - 5) = 0i64;
    *((_QWORD *)v27 - 4) = 0i64;
    *((_QWORD *)v27 - 3) = 0i64;
    *((_QWORD *)v27 - 2) = 0i64;
    *((_QWORD *)v27 - 1) = 0i64;
    --v28;
  }
  while ( v28 );
  session = party->session;
  *(_QWORD *)v27 = 0i64;
  *((_QWORD *)v27 + 1) = 0i64;
  *((_QWORD *)v27 + 2) = 0i64;
  *((_QWORD *)v27 + 3) = 0i64;
  *((_QWORD *)v27 + 4) = 0i64;
  v27[10] = 0;
  SecurityId = XSESSION_INFO::GetSecurityId(&session->dyn.sessionInfo);
  v31 = (const bdSecurityID *)(v12 + 2192);
  if ( !bdSecurityID::operator!=(SecurityId, v31) || !bdSecurityID::operator!=(&g_noPrivatePartyId, v31) )
  {
LABEL_55:
    v34 = Int_Internal_DebugName;
    if ( Int_Internal_DebugName <= 2 )
    {
      v37 = 1;
      *(_DWORD *)(v55 + 2592) = 0;
      v10 = Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_PLAYER_ONLY);
      v45 = Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_PLAYER_ONLY);
      v9 = v45;
      if ( v10 < v45 )
      {
        v46 = Party_GetMemberName(party, v4);
        LODWORD(fmt) = v9;
        Com_Printf(25, "[%s] %i < %i, assigning %s to TEAM_AXIS\n", party->partyName, (unsigned int)v10, fmt, v46);
        return v37;
      }
      if ( v10 > v45 )
      {
        v47 = Party_GetMemberName(party, v4);
        LODWORD(fmt) = v10;
        Com_Printf(25, "[%s] %i < %i, assigning %s to TEAM_ALLIES\n", party->partyName, v9, fmt, v47);
        return 2;
      }
    }
    else
    {
      v35 = DVARINT_party_maxplayers;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      v36 = v35->current.integer;
      v37 = 1;
      v38 = v34 + 1;
      if ( v38 > 1 )
      {
        v39 = 1i64;
        while ( v57[v39] >= (int)(v36 / v34) )
        {
          ++v37;
          if ( ++v39 >= v38 )
            goto LABEL_63;
        }
        return v37;
      }
LABEL_63:
      v40 = DVARINT_party_maxplayers;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v40);
      LODWORD(v51) = v34;
      LODWORD(v50) = v40->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1155, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "[%s] Somehow all the teams were full and we have to add a new guy? party_maxplayers = %d, teamCount = %d\n", party->partyName, v50, v51) )
        __debugbreak();
    }
    v41 = Party_GetMemberName(party, v4);
    LODWORD(fmt) = v9;
    Com_Printf(25, "[%s] %i = %i, assigning %s to random team\n", party->partyName, (unsigned int)v10, fmt, v41);
    return 2 - (I_irand(0, 2) != 0);
  }
  v32 = 0;
  p_team = &party->partyMembers[0].team;
  while ( 1 )
  {
    if ( v32 != (_DWORD)v4 && *((_BYTE *)p_team + 10) >= 5u )
    {
      ++v57[*p_team];
      if ( bdSecurityID::operator==(&party->partyMembers[v32].info.privatePartyId, v31) )
      {
        if ( *p_team )
          break;
      }
    }
    ++v32;
    p_team += 126;
    if ( v32 >= 200 )
      goto LABEL_55;
  }
  v42 = &party->partyMembers[v32].team;
  v43 = *v42;
  v44 = Party_GetMemberName(party, v4);
  LODWORD(fmt) = v43;
  Com_Printf(25, "[%s] %s is in a subparty, assigning to %i\n", party->partyName, v44, fmt);
  return *v42;
}

/*
==============
PartyHost_AssignTeamChatCreationToPlayer
==============
*/
bool PartyHost_AssignTeamChatCreationToPlayer(const PartyData *party, const NetConnection *playerConnection, const int teamIndex)
{
  __int64 v3; 
  const char *v6; 
  __int64 v8; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  v3 = teamIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9927, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xCB )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9928, ASSERT_TYPE_ASSERT, "(unsigned)( teamIndex ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "teamIndex doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v8, 203) )
      __debugbreak();
  }
  MSG_Init(&buf, data, 64);
  v6 = j_va("%ipa_createteamchat", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v6);
  MSG_WriteByte(&buf, v3);
  return NetConnection::SendReliable((NetConnection *)playerConnection, &buf);
}

/*
==============
PartyHost_CalculateFinalVote
==============
*/
void PartyHost_CalculateFinalVote(PartyData *party, const int controllerIndex)
{
  int NextMapCount; 
  int AlternateMapCount; 
  int RandomMapCount; 
  bool v7; 
  VoteType v8; 
  const char *partyName; 
  VoteType *p_vote; 
  __int64 v11; 

  NextMapCount = Party_GetNextMapCount(party);
  AlternateMapCount = Party_GetAlternateMapCount(party);
  RandomMapCount = Party_GetRandomMapCount(party);
  v7 = AlternateMapCount <= RandomMapCount;
  if ( AlternateMapCount < RandomMapCount )
  {
    if ( RandomMapCount > NextMapCount )
    {
      v8 = PARTY_VOTE_RANDOM_MAP;
      goto LABEL_10;
    }
    v7 = AlternateMapCount <= RandomMapCount;
  }
  if ( (v7 || AlternateMapCount <= NextMapCount) && (AlternateMapCount != RandomMapCount || AlternateMapCount <= NextMapCount) )
    goto LABEL_11;
  v8 = PARTY_VOTE_ALTERNATE_MAP;
LABEL_10:
  Party_PrimaryMapVetoed(controllerIndex, v8);
LABEL_11:
  partyName = party->partyName;
  party->voting.votePassed = 1;
  Com_Printf(15, "[%s] Gamestate changing due to a successful vote completing\n", partyName);
  if ( !mapvote_logging->current.integer )
  {
    p_vote = &party->partyMembers[0].info.vote;
    v11 = 200i64;
    do
    {
      *p_vote = PARTY_VOTE_NO_VOTE;
      p_vote += 126;
      --v11;
    }
    while ( v11 );
  }
}

/*
==============
PartyHost_CanCancelPrivateDS
==============
*/
bool PartyHost_CanCancelPrivateDS(const PartyData *party, const int localControllerIndex)
{
  int MemberByXUID; 
  XUID result; 

  if ( !Party_InParty(party) || !Party_HasPrivateMatchId(party) )
    return 0;
  Live_GetXuid(&result, localControllerIndex);
  MemberByXUID = Party_FindMemberByXUID(party, result);
  return Party_IsPrivateDSMatchHost(party, MemberByXUID);
}

/*
==============
PartyHost_CancelPrivateDS
==============
*/
void PartyHost_CancelPrivateDS(PartyData *party, const int localControllerIndex)
{
  int MemberByXUID; 
  const char *v5; 
  LocalClientNum_t localClientNum; 
  NetConnection *HostConnection; 
  XUID result; 
  msg_t buf; 
  unsigned __int8 data[32]; 

  if ( Party_InParty(party) && Party_HasPrivateMatchId(party) && (Live_GetXuid(&result, localControllerIndex), MemberByXUID = Party_FindMemberByXUID(party, result), Party_IsPrivateDSMatchHost(party, MemberByXUID)) )
  {
    if ( Party_IsHostDedicated(party) )
    {
      Com_Printf(25, "[%s] %s - Asking the private match DS host to migrate back to player host\n", party->partyName, "PartyHost_CancelPrivateDS");
      MSG_Init(&buf, data, 32);
      v5 = j_va("%ipa_migratebacktoprivatehost", (unsigned int)party->partyId);
      MSG_WriteString(&buf, v5);
      localClientNum = Party_GetMainActiveClient(party, localControllerIndex).localClientNum;
      HostConnection = Party_GetHostConnection(party, localClientNum);
      if ( !NetConnection::SendReliable(HostConnection, &buf) )
        Com_Printf(25, "[%s] %s - Failed to send message to host\n", party->partyName, "PartyHost_CancelPrivateDS");
    }
    else
    {
      Party_ClearPrivateMatchId(party);
      OnlineMatchmakerOmniscient::ResetLobby(&OnlineMatchmakerOmniscient::ms_instance);
      PartyHost_GamestateChanged(party);
    }
  }
  else
  {
    Com_Printf(25, "[%s] %s called but we can't currently cancel\n", party->partyName, "PartyHost_CancelPrivateDS");
  }
}

/*
==============
PartyHost_CancelStartMatch
==============
*/
void PartyHost_CancelStartMatch(PartyData *party)
{
  int v2; 
  __int64 gameStartTime; 
  int v4; 
  int v5; 
  int party_systemActive; 
  const char *v7; 
  char *fmt; 
  __int64 v9; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3330, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->gameStartRequested )
  {
    Com_Printf(15, "[%s] PartyHost_CancelStartMatch - no start to cancel.\n", party->partyName);
    return;
  }
  v2 = Sys_Milliseconds();
  gameStartTime = (unsigned int)party->gameStartTime;
  v4 = v2;
  if ( !(_DWORD)gameStartTime )
  {
    v5 = -v2;
LABEL_12:
    party_systemActive = party->party_systemActive;
    if ( party_systemActive )
    {
      Com_Printf(15, "[%s] PartyHost_CancelStartMatch - Canceling start\n", party->partyName);
      party->gameStartTime = 0;
      party->m_gameStartSkipCountdown = 0;
      party->gameStartRequested = 0;
      s_ignoreDifferentialTimesAttempted = 0;
      PartyHost_SetWaitingState(party);
      return;
    }
    goto LABEL_8;
  }
  v5 = gameStartTime - v2;
  if ( (int)gameStartTime - v2 > 1000 )
    goto LABEL_12;
  party_systemActive = party->party_systemActive;
LABEL_8:
  v7 = "false";
  if ( party_systemActive )
    v7 = "true";
  LODWORD(v9) = v5;
  LODWORD(fmt) = v4;
  Com_Printf(15, "[%s] PartyHost_CancelStartMatch - not canceling due to gamestartTime %d too close to now %d (delta %d limit is %d) or party_systemActive %s.\n", party->partyName, gameStartTime, fmt, v9, 1000, v7);
}

/*
==============
PartyHost_CheckSigninState
==============
*/
void PartyHost_CheckSigninState(const PartyData *party, const int localControllerIndex, const unsigned int sessionFlags)
{
  char v3; 
  LocalClientNum_t ClientFromController; 
  int v7; 
  const dvar_t *v8; 
  unsigned int LocalClientSignInState; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  char *fmt; 
  __int64 v13; 
  char *errorString; 
  char _Buffer[256]; 

  v3 = sessionFlags;
  if ( !Live_IsDevmapping() )
  {
    ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
    Live_CheckPlayerIsSignedIn(ClientFromController);
    v7 = ((v3 & 0xA) != 0) + 1;
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_ONE_CLIENT && CL_Mgr_GetClientFromController(localControllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5621, ASSERT_TYPE_ASSERT, "(CL_Mgr_GetClientFromController( localControllerIndex ) == LOCAL_CLIENT_0)", (const char *)&queryFormat, "CL_Mgr_GetClientFromController( localControllerIndex ) == LOCAL_CLIENT_0") )
      __debugbreak();
    if ( (unsigned int)localControllerIndex >= 8 )
    {
      LODWORD(v13) = localControllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5625, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v13, 8) )
        __debugbreak();
    }
    if ( CL_GetLocalClientSignInState(localControllerIndex) < v7 )
    {
      v8 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
        Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
      LocalClientSignInState = CL_GetLocalClientSignInState(localControllerIndex);
      LODWORD(fmt) = v7;
      j_sprintf_s(_Buffer, 0x100ui64, "%i, %i", LocalClientSignInState, fmt);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_SESSIONS_t)256, _Buffer);
      Live_ThrowError(ERR_DROP, "XBOXLIVE/LOGGEDOFF");
    }
    if ( CL_GetLocalClientSignInState(localControllerIndex) < v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5645, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientSignInState( localControllerIndex ) >= requiredSigninState)", (const char *)&queryFormat, "CL_GetLocalClientSignInState( localControllerIndex ) >= requiredSigninState") )
      __debugbreak();
    v10 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && !Live_ContentRatingAllowed(localControllerIndex, &errorString) )
    {
      Com_Printf(25, "[%s] Since the active profile doesn't have permission to play MP, we are going to send them back to the main menu\n", party->partyName);
      v11 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v11->current.enabled )
        Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 0);
      if ( !errorString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5660, ASSERT_TYPE_ASSERT, "(errorString)", (const char *)&queryFormat, "errorString") )
        __debugbreak();
      j_sprintf_s(_Buffer, 0x100ui64, (const char *const)&queryFormat, errorString);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_SESSIONS_t)512, _Buffer);
      Live_ThrowError(ERR_DROP, errorString);
    }
  }
}

/*
==============
PartyHost_CheckTeams
==============
*/
void PartyHost_CheckTeams(PartyData *party)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int NumGameSlots; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 400, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 401, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( PartyHost_UsingAssignedTeams(party) && !Live_IsInGameBattlesGame() && !OnlineTournament_IsInTournament() )
  {
    v2 = Party_CountTeamMembers(party, 0, PARTY_MEMBER_TYPE_ALL);
    if ( v2 )
    {
      Party_DumpInfo(party, "Check Teams found player(s) assigned to TEAM_FREE in a public team match");
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 421, ASSERT_TYPE_ASSERT, "(count == 0)", "%s\n\t%i player(s) assigned to TEAM_FREE in a public team match.", "count == 0", v2) )
        __debugbreak();
    }
    v3 = Party_CountTeamMembers(party, 201, PARTY_MEMBER_TYPE_ALL);
    if ( v3 )
    {
      Party_DumpInfo(party, "Check Teams found player(s) assigned to TEAM_SPECTATOR in a public team match");
      LODWORD(v10) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 426, ASSERT_TYPE_ASSERT, "(count == 0)", "%s\n\t%i player(s) assigned to TEAM_SPECTATOR in a public team match.", "count == 0", v10) )
        __debugbreak();
    }
    v4 = Party_CountTeamMembers(party, 202, PARTY_MEMBER_TYPE_ALL);
    if ( v4 )
    {
      Party_DumpInfo(party, "Check Teams found player(s) assigned to TEAM_FOLLOWER in a public team match");
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 431, ASSERT_TYPE_ASSERT, "(count == 0)", "%s\n\t%i player(s) assigned to TEAM_FOLLOWER in a public team match.", "count == 0", v10) )
        __debugbreak();
    }
    v5 = Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_ALL);
    v6 = Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_ALL);
    NumGameSlots = Party_GetNumGameSlots(party);
    if ( v5 > NumGameSlots / 2 || v6 > NumGameSlots / 2 )
    {
      LODWORD(v9) = NumGameSlots;
      LODWORD(fmt) = v6;
      Com_PrintError(25, "[%s] Teams are permanently unbalanced: %i vs. %i, max players %i\n", party->partyName, (unsigned int)v5, fmt, v9);
      Party_DumpInfo(party, "Check Teams found permanently unbalanced teams");
    }
    Com_Printf(25, "^5[%s] Teams are ok.\n", party->partyName);
  }
}

/*
==============
PartyHost_ClearGo
==============
*/
void PartyHost_ClearGo(PartyData *party)
{
  int v2; 
  unsigned __int8 *p_status; 
  NetConnection *MemberConnection; 
  const char *v5; 

  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3477, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3478, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( party ))", "%s\n\tClear go expected only in game", "!Party_IsRunning( party )") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3479, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3480, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  v2 = 0;
  p_status = &party->partyMembers[0].status;
  do
  {
    if ( Party_IsMemberPresent(party, v2) && *p_status != 6 && !Party_IsHost(party, v2) && !Party_MemberHasLoopbackAddr(party, v2) )
    {
      if ( !Party_IsMemberPresent(party, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3460, ASSERT_TYPE_ASSERT, "(Party_IsMemberPresent( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberPresent( party, memberIndex )") )
        __debugbreak();
      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v2);
      if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3463, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
        __debugbreak();
      v5 = j_va("%icleargo", (unsigned int)party->partyId);
      NetConnection::SendReliable(MemberConnection, v5, 2u);
    }
    ++v2;
    p_status += 504;
  }
  while ( v2 < 200 );
  party->disableGo = 1;
}

/*
==============
PartyHost_ClearGoAsync
==============
*/
void PartyHost_ClearGoAsync(PartyData *party)
{
  char data; 

  PartyRequestBuffer::AddRequest(&party->requestBuffer, PARTY_REQUEST_CLEAR_GO, &data, 1);
}

/*
==============
PartyHost_ClearMatchRulesNetworkingMemory
==============
*/
void PartyHost_ClearMatchRulesNetworkingMemory(void)
{
  g_matchRulesSnapshots = NULL;
  g_matchRulesSnapshotsDelta = NULL;
}

/*
==============
PartyHost_ClearMemberBackedOutBit
==============
*/
void PartyHost_ClearMemberBackedOutBit(PartyData *party, const unsigned int memberIndex)
{
  __int64 v4; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 652, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 653, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 654, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( memberIndex >= 0xC8 )
  {
    LODWORD(v4) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 655, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  if ( Party_IsGameLobby(party) )
    bitarray_base<bitarray<256>>::resetBit(&party->backedOutMemberBits, memberIndex);
}

/*
==============
PartyHost_ClearStartMatch
==============
*/
void PartyHost_ClearStartMatch(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3704, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3705, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3706, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  party->gameStartRequested = 0;
  party->gameStartTime = 0;
  party->specificData.hostData.preloadingMapStage = PRELOAD_MAP_IDLE;
  party->m_gameStartSkipCountdown = 0;
}

/*
==============
PartyHost_ClearVotes
==============
*/
void PartyHost_ClearVotes(PartyData *party)
{
  VoteType *p_vote; 
  __int64 v2; 

  p_vote = &party->partyMembers[0].info.vote;
  v2 = 200i64;
  do
  {
    *p_vote = PARTY_VOTE_NO_VOTE;
    p_vote += 126;
    --v2;
  }
  while ( v2 );
}

/*
==============
PartyHost_CommitPlayer
==============
*/
_BOOL8 PartyHost_CommitPlayer(PartyData *party, const int localControllerIndex, const unsigned int memberIndex, const netadr_t *memberAddr)
{
  __int64 v4; 
  unsigned __int8 status; 
  bool v9; 
  const char *v10; 
  const char *v11; 
  const char *String; 
  const char *MatchmakingStringForClientPlatform; 
  int addrHandleIndex; 
  int v15; 
  int v16; 
  const char *v17; 
  char *fmt; 
  __int64 v20; 
  netadr_t v21; 
  XNADDR xnaddr; 
  char dest[32]; 

  v4 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1474, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v20) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1475, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v20, 200) )
      __debugbreak();
  }
  status = party->partyMembers[v4].status;
  if ( status > 4u && status != 6 )
  {
    LODWORD(v20) = status;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1478, ASSERT_TYPE_ASSERT, "( ( member->status <= PARTYSTATUS_COMMITTED || member->status == PARTYSTATUS_TESTCLIENT ) )", "( member->status ) = %i", v20) )
      __debugbreak();
  }
  if ( Party_IsPrivateParty(party) )
    party->partyMembers[v4].info.privatePartyId = *XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
  v9 = PartyHost_AcceptConnection(party, v4, memberAddr);
  if ( v9 )
  {
    v10 = XUID::ToDevString(&party->partyMembers[v4].playerUID);
    Core_strcpy(dest, 0x20ui64, v10);
    v11 = s_partyStatusStrings[party->partyMembers[v4].status];
    String = NetConnection::GetString(&party->partyMembers[v4].connection);
    MatchmakingStringForClientPlatform = Com_GetMatchmakingStringForClientPlatform((const ClientPlatform)(unsigned __int8)party->partyMembers[v4].info.platform[0]);
    LODWORD(fmt) = v4;
    Com_Printf(131097, "[%s] Committing player %s (idx %i, xuid %s, platform %s) at %s when %s\n", party->partyName, party->partyMembers[v4].info.gamertag, fmt, dest, MatchmakingStringForClientPlatform, String, v11);
    addrHandleIndex = memberAddr->addrHandleIndex;
    *(_OWORD *)&v21.type = *(_OWORD *)&memberAddr->type;
    v15 = 4;
    v21.addrHandleIndex = addrHandleIndex;
    if ( NET_IsLocalAddress(&v21) )
      v15 = NET_IsBotAddr(memberAddr) + 5;
    PartyHost_UpdatePlayerStatus(party, localControllerIndex, v4, v15);
    Party_GetClientXNAddr(party, v4, &xnaddr);
    Party_RegisterPlayer(party, localControllerIndex, v4, &xnaddr);
  }
  else
  {
    v16 = memberAddr->addrHandleIndex;
    *(_OWORD *)&v21.type = *(_OWORD *)&memberAddr->type;
    v21.addrHandleIndex = v16;
    v17 = NET_AdrToString(&v21);
    Com_PrintError(131097, "[%s] Failed to accept client connection %s\n", party->partyName, v17);
  }
  return v9;
}

/*
==============
PartyHost_CommittedMemberPresent
==============
*/
void PartyHost_CommittedMemberPresent(PartyData *party, const int memberIndex, netadr_t *from)
{
  __int64 v3; 
  int StartingControllerIndex; 
  char *v6; 
  bool isJoinerNewToTheParty; 
  Online_InvitationManager *Instance; 
  int MemberNatType; 
  int IsMemberGuestAccount; 
  const char *v11; 
  const char *String; 
  const char *MemberName; 
  const char *v14; 
  PartyDisconnectReason v15; 
  const char *v16; 
  const char *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  unsigned __int8 v20; 
  const char *String_Internal_DebugName; 
  int v22; 
  const char *v23; 
  const char *v24; 
  PartyDisconnectReason v25; 
  const dvar_t *v26; 
  int v27; 
  char *fmt; 
  __int64 areWeHost; 
  unsigned int outSlot; 
  XUID result; 
  msg_t buf; 
  PartyJoinChallenge challenge; 
  unsigned __int8 data[1024]; 

  v3 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6746, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  StartingControllerIndex = Party_GetStartingControllerIndex(party);
  v6 = (char *)party + 504 * v3;
  if ( v6[2602] == 4 )
  {
    LODWORD(fmt) = v3;
    Com_Printf(25, "[%s] PartyHost - CommitedMemberPresent - Promoting COMMITTED member %s (%i) to PRESENT status\n", party->partyName, v6 + 2244, fmt);
    PartyHost_UpdatePlayerStatus(party, StartingControllerIndex, v3, 5);
    if ( Party_InParty(party) )
      Party_PlayPlayerJoinSound(party, LOCAL_CLIENT_0);
    isJoinerNewToTheParty = 1;
    if ( Party_IsPrivateParty(party) )
      isJoinerNewToTheParty = v6[2690] != 0;
    v6[2690] = 0;
    Instance = Online_InvitationManager::GetInstance();
    Online_InvitationManager::OnReceiveIncomingPartyMember(Instance, StartingControllerIndex, *(const XUID *)(v6 + 2608), v6 + 2244, party->partyId, 1, isJoinerNewToTheParty);
    if ( !OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) || Party_IsMatchmakingLobby(party) || !Party_IsGameLobby(party) )
      goto LABEL_24;
    if ( Party_AreWeHost(&g_partyData) )
    {
      Party_GetXuid(&result, party, v3);
      if ( Party_FindMemberByXUID(&g_partyData, result) != -1 )
        goto LABEL_24;
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_matchmaking_allow_joins_before_lobby, "online_matchmaking_allow_joins_before_lobby") )
      {
        if ( Party_IsInviteOnly(&g_partyData) || Party_ShouldCurrentSessionBeClosed(&g_partyData) )
          goto LABEL_24;
        PartyAtomicHost_BuildRandomChallenge(&challenge);
        if ( (unsigned int)PartyAtomicHost_AddAnonymousMember(&g_partyData, result, &challenge, &outSlot) == 1 )
        {
          MemberNatType = Party_GetMemberNatType(party, v3);
          IsMemberGuestAccount = Party_IsMemberGuestAccount(party, v3);
          PartyHost_AddPlayerAtSlot_Internal(&g_partyData, StartingControllerIndex, outSlot, &result, IsMemberGuestAccount, MemberNatType, (const ClientAuthoritativeMemberInfo *)(v6 + 2192), 6u);
          MSG_Init(&buf, data, 1024);
          v11 = j_va("%ipa_joinprivateparty", 1i64);
          MSG_WriteString(&buf, v11);
          XSESSION_INFO::Serialize(&g_partyData.session->dyn.sessionInfo, &buf);
          MSG_WriteData(&buf, &challenge, 6);
          String = XSESSION_INFO::GetString(&g_partyData.session->dyn.sessionInfo);
          MemberName = Party_GetMemberName(party, v3);
          Com_Printf(25, "[%s] %s for %s with session %s and challenge %s\n", party->partyName, "PartyHost_TellPlayerToJoinPrivateParty", MemberName, String, challenge.str);
          PartyHost_SendMessageToClient(party, v3, &buf);
          goto LABEL_24;
        }
        v14 = Party_GetMemberName(party, v3);
        Com_Printf(25, "[%s] %s member %s joined the game party before lobby creation but failed AddAnonymousMember, kicking player\n", party->partyName, "PartyHost_CommittedMemberPresent", v14);
      }
      else
      {
        v16 = Party_GetMemberName(party, v3);
        Com_Printf(25, "[%s] %s member %s joined the game party before lobby creation but is not in our private party and online_matchmaking_allow_joins_before_lobby is disabled.  This should not happen, kicking player\n", party->partyName, "PartyHost_CommittedMemberPresent", v16);
      }
    }
    else
    {
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_should_kick_joiner_before_lobby_if_not_party_host, "online_should_kick_joiner_before_lobby_if_not_party_host") )
        goto LABEL_24;
      v17 = Party_GetMemberName(party, v3);
      Com_Printf(25, "[%s] %s member %s joined the game party before lobby creation but we are not the host of the private party. If we add the user to the lobby now, there is no guarantee this joiner will be put in our same team by DW. So rejecting\n", party->partyName, "PartyHost_CommittedMemberPresent", v17);
    }
    LOBYTE(v15) = 19;
    PartyHost_KickPlayer(party, v3, v15);
LABEL_24:
    v18 = DVARBOOL_online_should_check_platforms_can_play_gametype_for_party_join;
    if ( !DVARBOOL_online_should_check_platforms_can_play_gametype_for_party_join && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_check_platforms_can_play_gametype_for_party_join") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    if ( !v18->current.enabled || !Party_IsGameLobby(party) )
      goto LABEL_34;
    v19 = DVARSTR_ui_gametype;
    v20 = v6[2348];
    if ( !DVARSTR_ui_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_gametype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( !Live_CanGameTypeBePlayedOnPlatform(v19->current.string, (ClientPlatform)v20) )
    {
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
      v22 = v6[2348];
      v23 = String_Internal_DebugName;
      v24 = Party_GetMemberName(party, v3);
      LODWORD(areWeHost) = v22;
      Com_Printf(25, "[%s] %s member %s joined the game party but is not allowed because the member's platform %d dont have access to the game type %s, kicking player\n", party->partyName, "PartyHost_CommittedMemberPresent", v24, areWeHost, v23);
      LOBYTE(v25) = 19;
      PartyHost_KickPlayer(party, v3, v25);
    }
    else
    {
LABEL_34:
      PartyHost_UpdateIfPartyIsCrossplayPartyAndSetPartyDirtyIfChanged(party);
      v26 = DVARBOOL_online_force_party_state_on_present;
      if ( !DVARBOOL_online_force_party_state_on_present && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_force_party_state_on_present") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled && Party_IsGameLobby(party) && !Party_IsRunning(party) )
      {
        PartyHost_MarkMemberInfoDirty(party, v3, 2);
        *((_DWORD *)v6 + 618) = 0;
        v27 = Sys_Milliseconds();
        PartyHost_SendPartyStateToPlayer(party, v3, v27);
      }
    }
  }
}

/*
==============
PartyHost_CopyCrossplaySettingsToParty
==============
*/
void PartyHost_CopyCrossplaySettingsToParty(PartyData *party)
{
  int StartingControllerIndex; 
  bool IsCrossPlayEnabled; 

  if ( Party_AreWeHost(party) )
  {
    StartingControllerIndex = Party_GetStartingControllerIndex(party);
    IsCrossPlayEnabled = Live_IsCrossPlayEnabled(StartingControllerIndex);
    if ( Party_GetCrossplayEnabled(party) != IsCrossPlayEnabled )
    {
      Party_SetCrossplayEnabled(party, IsCrossPlayEnabled);
      PartyHost_GamestateChanged(party);
    }
  }
}

/*
==============
PartyHost_CopyPartyPrivacyFromPlayerDataToParty
==============
*/
void PartyHost_CopyPartyPrivacyFromPlayerDataToParty(PartyData *party)
{
  PartyPrivacySetting PrivacySetting; 
  int StartingControllerIndex; 
  PartyPrivacySetting PrivatePartySetting; 

  PrivacySetting = Party_GetPrivacySetting(party);
  StartingControllerIndex = Party_GetStartingControllerIndex(party);
  PrivatePartySetting = Online_PlayerData_GetPrivatePartySetting(StartingControllerIndex);
  if ( PrivacySetting != PrivatePartySetting )
  {
    Party_SetPrivacySetting(party, PrivatePartySetting);
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty
==============
*/
void PartyHost_CopySquadAutofillFromPlayerDataToPrivateParty(void)
{
  char SquadAutofill; 
  int StartingControllerIndex; 
  char PartySquadAutofillEnabled; 

  SquadAutofill = Party_GetSquadAutofill();
  StartingControllerIndex = Party_GetStartingControllerIndex(&g_partyData);
  PartySquadAutofillEnabled = Online_PlayerData_GetPartySquadAutofillEnabled(StartingControllerIndex);
  if ( SquadAutofill != PartySquadAutofillEnabled )
  {
    Party_SetSquadAutofill(PartySquadAutofillEnabled);
    PartyHost_GamestateChanged(&g_partyData);
  }
}

/*
==============
PartyHost_CountOpenSlots
==============
*/
__int64 PartyHost_CountOpenSlots(PartyData *party)
{
  int v2; 
  int v3; 
  int NumGameSlots; 
  int i; 
  int v6; 
  int v7; 
  int v8; 
  int j; 
  int v10; 
  int k; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 691, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 692, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  NumGameSlots = Party_GetNumGameSlots(party);
  for ( i = 0; i < NumGameSlots; ++i )
  {
    if ( Party_IsMemberPresent(party, i) )
      ++v3;
  }
  if ( v3 != Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY) )
  {
    v6 = Party_CountMembersEvenIfInactive(party, PARTY_MEMBER_TYPE_PLAYER_ONLY);
    v7 = 0;
    v8 = Party_GetNumGameSlots(party);
    for ( j = 0; j < v8; ++j )
    {
      if ( Party_IsMemberPresent(party, j) )
        ++v7;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 693, ASSERT_TYPE_ASSERT, "( PartyHost_CountPlayers( party ) ) == ( Party_CountMembersEvenIfInactive( party, PARTY_MEMBER_TYPE_PLAYER_ONLY ) )", "%s == %s\n\t%i, %i", "PartyHost_CountPlayers( party )", "Party_CountMembersEvenIfInactive( party, PARTY_MEMBER_TYPE_PLAYER_ONLY )", v7, v6) )
      __debugbreak();
  }
  v10 = Party_GetNumGameSlots(party);
  for ( k = 0; k < v10; ++k )
  {
    if ( Party_IsMemberPresent(party, k) )
      ++v2;
  }
  return (unsigned int)(Party_GetNumGameSlots(party) - v2);
}

/*
==============
PartyHost_DemotePresentMember
==============
*/
void PartyHost_DemotePresentMember(PartyData *party, const int memberIndex)
{
  int StartingControllerIndex; 
  __int64 v5; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1649, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1650, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1651, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    LODWORD(v5) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1652, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  if ( Party_IsMemberPresent(party, memberIndex) )
  {
    Com_Printf(25, "[%s] PartyHost - DemotePresentMember - Demoting PRESENT member %i back to COMMITTED status\n", party->partyName, (unsigned int)memberIndex);
    StartingControllerIndex = Party_GetStartingControllerIndex(party);
    PartyHost_UpdatePlayerStatus(party, StartingControllerIndex, memberIndex, 4);
  }
}

/*
==============
PartyHost_DemotePresentPartyMembers
==============
*/
__int64 PartyHost_DemotePresentPartyMembers(PartyData *const party, msg_t *const msg)
{
  unsigned int v4; 
  unsigned int v5; 
  int NumGameSlots; 
  __int64 v7; 
  unsigned __int8 *p_status; 
  NetConnection *MemberConnection; 
  const char *MemberName; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9835, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9836, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9837, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9838, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  NumGameSlots = Party_GetNumGameSlots(party);
  v7 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    p_status = &party->partyMembers[0].status;
    do
    {
      if ( Party_IsMemberIndexDataAvailable(party, v5) )
      {
        if ( !Party_IsHost(party, v5) && *p_status != 6 )
        {
          MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v5);
          if ( !NetConnection::IsLocal(MemberConnection) )
          {
            if ( Party_IsHost(party, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9867, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, memberIndex ))", (const char *)&queryFormat, "!Party_IsHost( party, memberIndex )") )
              __debugbreak();
            PartyHost_DemotePresentMember(party, v5);
            if ( msg )
            {
              MemberName = Party_GetMemberName(party, v5);
              Com_Printf(16, "[%s] PartyHost - AskPartyMembersToBackOut - Sending party presence to client %i (%s) to back out\n", party->partyName, v5, MemberName);
              NetConnection::SendReliable(MemberConnection, msg);
            }
            ++v4;
          }
        }
      }
      ++v5;
      p_status += 504;
      --v7;
    }
    while ( v7 );
    if ( v4 )
      PartyHost_GamestateChanged(party);
  }
  return v4;
}

/*
==============
PartyHost_DropPlayersToMatchSlots
==============
*/
void PartyHost_DropPlayersToMatchSlots(PartyData *party, const int numSlots)
{
  int v4; 
  signed int i; 
  const dvar_t *v6; 
  const char *MemberName; 
  const char *v8; 
  int v9; 

  if ( Party_IsRunning(party) && Party_AreWeHost(party) )
  {
    if ( numSlots < 0 )
    {
      v9 = numSlots;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5409, ASSERT_TYPE_ASSERT, "( ( numSlots >= 0 ) )", "( numSlots ) = %i", v9) )
        __debugbreak();
    }
    v4 = 0;
    for ( i = 0; ; ++i )
    {
      v6 = DVARINT_party_maxplayers;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( i >= v6->current.integer )
        break;
      if ( Party_IsMemberIndexDataAvailable(party, i) )
      {
        MemberName = Party_GetMemberName(party, i);
        Com_Printf(25, "[%s] %s is taking a slot\n", party->partyName, MemberName);
        if ( ++v4 > numSlots )
        {
          v8 = Party_GetMemberName(party, i);
          Com_Printf(25, "[%s] Dropping player %s because we don't have enough slots for them\n", party->partyName, v8);
          PartyHost_RemovePlayer(party, i, 1, "@EXE/SERVERISFULL", NET_CLOSE_SOFT);
        }
      }
    }
  }
}

/*
==============
PartyHost_FindFirstSlotByStatus
==============
*/
__int64 PartyHost_FindFirstSlotByStatus(PartyData *party, int status)
{
  int NumGameSlots; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  int PlaylistIdForNum; 
  signed int MaxHumanPlayers; 
  unsigned int v9; 
  __int64 v10; 
  unsigned __int8 *i; 

  NumGameSlots = Party_GetNumGameSlots(party);
  if ( Party_IsGameLobby(party) )
  {
    v5 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.enabled )
    {
      v6 = DVARINT_playlist;
      if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v6->current.integer);
      MaxHumanPlayers = Playlist_GetMaxHumanPlayers(PlaylistIdForNum);
      if ( MaxHumanPlayers )
      {
        if ( MaxHumanPlayers < NumGameSlots )
          NumGameSlots = MaxHumanPlayers;
      }
    }
  }
  v9 = 0;
  if ( NumGameSlots <= 0i64 )
    return 0xFFFFFFFFi64;
  v10 = 0i64;
  for ( i = &party->partyMembers[0].status; *i != status; i += 504 )
  {
    ++v9;
    if ( ++v10 >= NumGameSlots )
      return 0xFFFFFFFFi64;
  }
  return v9;
}

/*
==============
PartyHost_FindOldestSlotByStatus
==============
*/
__int64 PartyHost_FindOldestSlotByStatus(const PartyData *party, int status, int reservedDuration)
{
  int v6; 
  unsigned int v7; 
  int v8; 
  int NumGameSlots; 
  const dvar_t *v10; 
  int v11; 
  int PlaylistIdForNum; 
  signed int MaxHumanPlayers; 
  unsigned int v14; 
  __int64 v15; 
  int *p_lastPacketTime; 

  v6 = Sys_Milliseconds();
  v7 = -1;
  v8 = v6;
  NumGameSlots = Party_GetNumGameSlots(party);
  v10 = DVARINT_playlist;
  v11 = NumGameSlots;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v10->current.integer);
  MaxHumanPlayers = Playlist_GetMaxHumanPlayers(PlaylistIdForNum);
  if ( MaxHumanPlayers && MaxHumanPlayers < v11 )
    v11 = MaxHumanPlayers;
  v14 = 0;
  v15 = v11;
  if ( v11 > 0 )
  {
    p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
    do
    {
      if ( *((unsigned __int8 *)p_lastPacketTime + 138) == status && *p_lastPacketTime < v8 )
      {
        v8 = *p_lastPacketTime;
        v7 = v14;
      }
      ++v14;
      p_lastPacketTime += 126;
      --v15;
    }
    while ( v15 );
  }
  if ( v6 - v8 < reservedDuration )
    return (unsigned int)-1;
  return v7;
}

/*
==============
PartyHost_FindSubpartyIndex
==============
*/
__int64 PartyHost_FindSubpartyIndex(PartyData *party, bdSecurityID **partyIds, const unsigned int subPartyCount, const unsigned int memberIdx)
{
  __int64 v4; 
  bdSecurityID *SecurityId; 
  PartyMember *v9; 
  __int64 result; 

  v4 = memberIdx;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 704, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !partyIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 705, ASSERT_TYPE_ASSERT, "(partyIds)", (const char *)&queryFormat, "partyIds") )
    __debugbreak();
  SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
  v9 = &party->partyMembers[v4];
  if ( bdSecurityID::operator==(SecurityId, &v9->info.privatePartyId) || bdSecurityID::operator==(&g_noPrivatePartyId, &v9->info.privatePartyId) )
    return subPartyCount;
  for ( result = 0i64; (unsigned int)result < subPartyCount; ++partyIds )
  {
    if ( *(_QWORD *)&v9->info.privatePartyId == **partyIds )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}

/*
==============
PartyHost_Frame
==============
*/
void PartyHost_Frame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  const PartyActiveClient *m_id; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int v6; 
  const PartyData *PartyData; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  int integer; 
  const dvar_t *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int NumGameSlots; 
  int v18; 
  __int64 v19; 
  unsigned __int8 *p_status; 
  const char *v21; 
  bool IsValid; 
  const char *v23; 
  int v24; 
  const XUID *Xuid; 
  signed int MemberByXUID; 
  unsigned __int64 PlatformUserId; 
  int v28; 
  PartyMember *v29; 
  PartyType partyId; 
  int v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  bool v34; 
  __int64 v35; 
  XUID result; 
  __int64 v37; 
  ClientAuthoritativeMemberInfo Buf2; 

  v37 = -2i64;
  m_id = mainActiveClient;
  result.m_id = (unsigned __int64)mainActiveClient;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9509, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->party_systemActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9510, ASSERT_TYPE_ASSERT, "(party->party_systemActive)", (const char *)&queryFormat, "party->party_systemActive") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9511, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9512, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !m_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9513, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( Party_IsGameLobby(party) )
  {
    v4 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( !v4->current.enabled )
    {
      v5 = DVARINT_playlist;
      if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( !Playlist_CountEntries(v5->current.integer) )
      {
        Com_PrintError(16, "[%s] I'm hosting a lobby that has no playlist entries!  Aborting!\n", party->partyName);
        Live_ThrowError(ERR_DROP, "@LUA_MENU_MP/NOGOODHOST");
        return;
      }
    }
  }
  v6 = 0;
  if ( party->gameStartTime )
  {
    if ( party->gameStartTime >= Sys_Milliseconds() )
    {
      v8 = DVARBOOL_party_editingsettings;
      if ( !DVARBOOL_party_editingsettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_editingsettings") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        party->gameStartTime = 0;
      }
      else
      {
        v9 = DVARINT_party_timer;
        if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        integer = v9->current.integer;
        v11 = DVARINT_party_timer;
        if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        v12 = v11->current.integer;
        v13 = 274877907i64 * (party->gameStartTime - Sys_Milliseconds());
        if ( v12 != (HIDWORD(v13) >> 31) + (SHIDWORD(v13) >> 6) )
        {
          v14 = Sys_Milliseconds();
          Dvar_SetInt_Internal(DVARINT_party_timer, (party->gameStartTime - v14) / 1000);
        }
        v15 = DVARINT_party_timer;
        if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        if ( integer > v15->current.integer && (!Party_UsingReadyUpFeature() || Party_GetPartyReadyUpStatus()) )
          Party_PlayCountdownSound(integer);
      }
    }
  }
  else if ( Party_IsGameLobby(party) || (PartyData = Lobby_GetPartyData(), !Party_IsRunning(PartyData)) )
  {
    Party_HideTeams((const LocalClientNum_t)m_id->localClientNum);
  }
  if ( Party_IsGameLobby(party) )
  {
    v16 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( !v16->current.enabled && Playlist_CountEntries(selectedPlaylist) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9424, ASSERT_TYPE_ASSERT, "(Playlist_CountEntries( selectedPlaylist ) > 0)", (const char *)&queryFormat, "Playlist_CountEntries( selectedPlaylist ) > 0") )
      __debugbreak();
  }
  NumGameSlots = Party_GetNumGameSlots(party);
  v18 = 0;
  v19 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    p_status = &party->partyMembers[0].status;
    do
    {
      if ( *p_status >= 5u && *p_status != 6 && Party_FindMemberByXUID(party, party->partyMembers[v18].playerUID) != v18 )
      {
        v21 = XUID::ToDevString(&party->partyMembers[v18].playerUID);
        IsValid = Session_IsValid(party->session);
        v23 = "no";
        if ( IsValid )
          v23 = "yes";
        LODWORD(v35) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9438, ASSERT_TYPE_ASSERT, "(Party_FindMemberByXUID( party, party->partyMembers[clientNum].playerUID ) == clientNum)", "%s\n\tsession is %s, sessionIsValid %s, xuid %s, clientNum %i", "Party_FindMemberByXUID( party, party->partyMembers[clientNum].playerUID ) == clientNum", party->partyName, v23, v21, v35) )
          __debugbreak();
      }
      ++v18;
      p_status += 504;
      --v19;
    }
    while ( v19 );
    v6 = 0;
    m_id = (const PartyActiveClient *)result.m_id;
  }
  v24 = Sys_Milliseconds();
  if ( v24 - party->lastMemberInfoTime >= 400 )
  {
    party->lastMemberInfoTime = v24;
    do
    {
      if ( Live_IsSignedIn(v6) )
      {
        bdSecurityID::bdSecurityID(&Buf2.privatePartyId);
        if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2289, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
          __debugbreak();
        if ( Live_IsUserSignedInToDemonware(v6) )
        {
          Xuid = Live_GetXuid(&result, v6);
          MemberByXUID = Party_FindMemberByXUID(party, (const XUID)Xuid->m_id);
        }
        else
        {
          PlatformUserId = Live_GetPlatformUserId(v6);
          MemberByXUID = Party_FindMemberByPlatformId(party, PlatformUserId);
        }
        v28 = MemberByXUID;
        if ( MemberByXUID >= 0 )
        {
          if ( Party_IsMemberIndexDataAvailable(party, MemberByXUID) )
          {
            v29 = &party->partyMembers[v28];
            Buf2 = v29->info;
            Party_FillInOurMemberInfo(party, v6, &Buf2);
            if ( memcmp_0(v29, &Buf2, 0xB8ui64) )
            {
              *(_OWORD *)v29->info.privatePartyId.ab = *(_OWORD *)Buf2.privatePartyId.ab;
              *(_OWORD *)&party->partyMembers[v28].info.zombie_consumable1 = *(_OWORD *)&Buf2.zombie_consumable1;
              *(_OWORD *)&party->partyMembers[v28].info.alien_readyUpFlag = *(_OWORD *)&Buf2.alien_readyUpFlag;
              *(_OWORD *)&party->partyMembers[v28].info.clientDesiredTeamSelection = *(_OWORD *)&Buf2.clientDesiredTeamSelection;
              *(_OWORD *)&party->partyMembers[v28].info.gamertag[12] = *(_OWORD *)&Buf2.gamertag[12];
              *(_OWORD *)&party->partyMembers[v28].info.gamertag[28] = *(_OWORD *)&Buf2.gamertag[28];
              *(_OWORD *)&party->partyMembers[v28].info.clanAbbrev[4] = *(_OWORD *)&Buf2.clanAbbrev[4];
              *(_OWORD *)&party->partyMembers[v28].info.wins = *(_OWORD *)&Buf2.wins;
              *(_OWORD *)&party->partyMembers[v28].info.winLossRatio = *(_OWORD *)&Buf2.winLossRatio;
              *(_OWORD *)&party->partyMembers[v28].info.mlgFollower = *(_OWORD *)&Buf2.mlgFollower;
              *(_OWORD *)&party->partyMembers[v28].info.platformId = *(_OWORD *)&Buf2.platformId;
              *(_QWORD *)&party->partyMembers[v28].info.deathsHistory[3] = *(_QWORD *)&Buf2.deathsHistory[3];
              PartyHost_MemberInfoChanged(party, v28, 2);
            }
          }
        }
        bdSecurityID::~bdSecurityID(&Buf2.privatePartyId);
      }
      ++v6;
    }
    while ( v6 < 8 );
  }
  PartyHost_UpdatePlayerHiding(party);
  PartyHost_TimeoutMembers(party);
  PartyHost_SendHeartbeats(party, m_id->localControllerIndex);
  if ( !Party_IsGameLobby(party) )
  {
    if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9631, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
      __debugbreak();
    PartyMigrate_UpdateMakeHost(party);
  }
  partyId = party->partyId;
  if ( partyId )
  {
    if ( partyId != PRIVATE_PARTY_ID )
      goto LABEL_119;
    if ( party->mapPackFlags != Live_CurrentLocalMapPackFlags() )
    {
      v31 = Live_CurrentLocalMapPackFlags();
      Party_SetMapPackFlags(party, v31);
      Com_Printf(15, "[%s] Gamestate changing due to the mappack flags changing\n", party->partyName);
      PartyHost_GamestateChanged(party);
    }
    if ( !Live_IsInSystemlinkLobby() )
      goto LABEL_119;
LABEL_117:
    if ( !party->gameStartRequested )
      goto LABEL_119;
    goto LABEL_118;
  }
  v32 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( v32->current.enabled )
  {
    v33 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    if ( !v33->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9668, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_xblive_privatematch, \"xblive_privatematch\" ))", (const char *)&queryFormat, "Dvar_GetBool( xblive_privatematch )") )
      __debugbreak();
    PartyHost_UpdatePrivateMatchMapRotation(party, m_id);
    goto LABEL_117;
  }
  if ( party->gameStartRequested )
  {
    PartyHost_StartMatch_Internal(party, m_id);
    goto LABEL_119;
  }
  if ( (party->lobbyFlags & 0x64) == 64 )
  {
    if ( !party->voting.votePassed && Sys_Milliseconds() > party->voting.voteEndTime )
    {
      PartyHost_CalculateFinalVote(party, m_id->localControllerIndex);
      PartyHost_GamestateChanged(party);
    }
    if ( Sys_Milliseconds() > party->interEndTime || Party_UsingReadyUpFeature() )
    {
      Com_Printf(25, "[%s] intermission time over setting lobby state to WAITING\n", party->partyName);
      PartyHost_SetWaitingState(party);
    }
    OnlineMatchmakerOmniscient::GameInLobbyIntermission(&OnlineMatchmakerOmniscient::ms_instance);
    goto LABEL_119;
  }
LABEL_118:
  PartyHost_UpdateMatchStart(party, m_id);
LABEL_119:
  PartyClientTaskService::Frame(&party->clientTaskService, party);
  v34 = PartyHost_PartyRestrictsF2PUsers(party);
  if ( party->restrictsF2PUsers != v34 )
  {
    party->restrictsF2PUsers = v34;
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
PartyHost_GamestateChanged
==============
*/
void PartyHost_GamestateChanged(PartyData *party)
{
  const dvar_t *v2; 
  PartyHostData *HostData; 
  int *p_lastPartyStateTime; 
  signed int i; 
  const char *StringSafe; 
  const char *v7; 
  const char *v8; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2202, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2203, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2204, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( Party_IsRunning(party) )
  {
    v2 = DVARBOOL_party_debug;
    if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      HostData = PartyHost_GetHostData(party);
      Com_Printf(25, "[%s] PartyState changed at time %i\n", party->partyName, (unsigned int)HostData->partyStateChangeTime);
    }
    PartyHost_SetPartyStateChangeTime(party);
    p_lastPartyStateTime = &party->partyMembers[0].lastPartyStateTime;
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsMemberIndexDataAvailable(party, i) )
      {
        *(_QWORD *)(p_lastPartyStateTime - 1) = 0i64;
        p_lastPartyStateTime[3] = 0;
      }
      p_lastPartyStateTime += 126;
    }
    PartyHost_UpdateSubparties(party, NULL, NULL, NULL, 1);
    Party_SetUIPlayerCount(party);
    StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
    Party_SetEntryADisplayMapName(StringSafe);
    v7 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
    Party_SetEntryBDisplayMapName(v7);
    v8 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
    Party_SetEntryCDisplayMapName(v8);
  }
}

/*
==============
PartyHost_GetCreateFlags
==============
*/
__int64 PartyHost_GetCreateFlags()
{
  const dvar_t *v0; 
  unsigned int v1; 
  const dvar_t *v2; 
  int PlaylistIdForNum; 

  v0 = DVARBOOL_xblive_privatematch;
  v1 = 47;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
  {
    v2 = DVARINT_playlist;
    if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v2->current.integer);
    if ( Playlist_JoinInProgressDisabled(PlaylistIdForNum) )
      v1 = 943;
    if ( Playlist_JoinViaPresenceDisabled(PlaylistIdForNum) )
      v1 |= 0x180u;
  }
  return v1;
}

/*
==============
PartyHost_GetHostData
==============
*/
PartySpecificData *PartyHost_GetHostData(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2084, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2085, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2086, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  return &party->specificData;
}

/*
==============
PartyHost_GetMatchRulesSnapshotDelta
==============
*/
MatchRulesSnapshotDelta *PartyHost_GetMatchRulesSnapshotDelta(PartyData *party, int clientNum)
{
  __int64 v2; 
  int *p_lastMatchRulesAck; 
  int v5; 
  MatchRulesSnapshotDelta *v6; 
  int v7; 
  MatchRulesSnapshot *v8; 
  __int64 v9; 
  GameStateInfo *v10; 
  MatchRules *matchRules; 
  MatchRulesSnapshot *v13; 
  int v14; 
  int *p_toSnapTime; 
  __int64 v16; 
  MatchRulesSnapshotDelta *v17; 
  __int64 v18; 
  int *v19; 
  GameStateInfo *v20; 
  char *fmt; 
  __int64 v22; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4881, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4882, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( party->specificData.hostData.matchRulesChangeTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4883, ASSERT_TYPE_ASSERT, "(party->specificData.hostData.matchRulesChangeTime > 0)", (const char *)&queryFormat, "party->specificData.hostData.matchRulesChangeTime > 0") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v22) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4884, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v22, 200) )
      __debugbreak();
  }
  p_lastMatchRulesAck = &party->partyMembers[v2].lastMatchRulesAck;
  v5 = *p_lastMatchRulesAck;
  if ( g_matchRulesSnapshots )
  {
    v6 = g_matchRulesSnapshotsDelta;
    if ( g_matchRulesSnapshotsDelta )
    {
      if ( v5 )
      {
        v7 = 0;
        v8 = g_matchRulesSnapshots;
        v9 = 0i64;
        while ( v8->snapTime != v5 )
        {
          ++v7;
          ++v9;
          ++v8;
          if ( v9 >= 200 )
            goto $delta_from_default;
        }
        v13 = &g_matchRulesSnapshots[v7];
        if ( v13 )
        {
          v14 = 0;
          p_toSnapTime = &g_matchRulesSnapshotsDelta->toSnapTime;
          v16 = 0i64;
          while ( *(p_toSnapTime - 1) != v5 || *p_toSnapTime != party->specificData.hostData.matchRulesChangeTime )
          {
            if ( *p_toSnapTime <= 0 )
            {
              if ( v14 == -1 )
              {
LABEL_35:
                PartyHost_MatchRulesCleanupFullCache(party);
                v6 = g_matchRulesSnapshotsDelta;
                v14 = 0;
                v18 = 0i64;
                v19 = &g_matchRulesSnapshotsDelta->toSnapTime;
                while ( *v19 > 0 )
                {
                  ++v14;
                  ++v18;
                  v19 += 1224;
                  if ( v18 >= 200 )
                    goto LABEL_40;
                }
                if ( v14 != -1 )
                  goto LABEL_41;
LABEL_40:
                Com_PrintWarning(25, "[%s] [PartyHost_GetMatchRulesSnapshotDelta] Was unable to find a slot to use for delta cache, sending delta from defaults instead.\n", party->partyName);
                goto $delta_from_default;
              }
LABEL_41:
              v17 = &v6[v14];
              v17->fromSnapTime = v5;
              if ( v13->snapTime != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4949, ASSERT_TYPE_ASSERT, "(snap->snapTime == delta->fromSnapTime)", (const char *)&queryFormat, "snap->snapTime == delta->fromSnapTime") )
                __debugbreak();
              LODWORD(fmt) = party->specificData.hostData.matchRulesChangeTime;
              Com_Printf(25, "[%s] [PartyHost_GetMatchRulesSnapshotDelta] Building delta from previous snapshot %d to current %d\n", party->partyName, (unsigned int)v13->snapTime, fmt);
              v20 = GameStateInfo_Get();
              if ( !v20->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4953, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
                __debugbreak();
              WriteMatchRulesSnapshotDeltaFromBuffer(v17, v20->matchRules, v13->data);
              v17->toSnapTime = party->specificData.hostData.matchRulesChangeTime;
LABEL_48:
              LODWORD(fmt) = v17->toSnapTime;
              Com_Printf(25, "[%s] [PartyHost_GetMatchRulesSnapshotDelta] Returning delta from previous snapshot %d to current %d\n", party->partyName, (unsigned int)v17->fromSnapTime, fmt);
              return v17;
            }
            ++v14;
            ++v16;
            p_toSnapTime += 1224;
            if ( v16 >= 200 )
              goto LABEL_35;
          }
          v17 = &g_matchRulesSnapshotsDelta[v14];
          if ( !v17 )
            goto LABEL_35;
          goto LABEL_48;
        }
      }
    }
  }
$delta_from_default:
  *p_lastMatchRulesAck = 0;
  v10 = GameStateInfo_Get();
  if ( !v10->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4862, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
    __debugbreak();
  matchRules = v10->matchRules;
  if ( g_matchRulesSnapshotDefaultsDelta.checksum != matchRules->checksum )
  {
    WriteMatchRulesSnapshotDeltaFromDefaults(&g_matchRulesSnapshotDefaultsDelta, matchRules);
    g_matchRulesSnapshotDefaultsDelta.checksum = v10->matchRules->checksum;
  }
  g_matchRulesSnapshotDefaultsDelta.fromSnapTime = 0;
  g_matchRulesSnapshotDefaultsDelta.toSnapTime = party->specificData.hostData.matchRulesChangeTime;
  Com_Printf(25, "[%s] [PartyHost_GetMatchRulesSnapshotDelta] Returning delta from defaults to current %d\n", party->partyName, (unsigned int)party->specificData.hostData.matchRulesChangeTime);
  return &g_matchRulesSnapshotDefaultsDelta;
}

/*
==============
PartyHost_GetMatchRulesSnapshotDeltaFromDefault
==============
*/
MatchRulesSnapshotDelta *PartyHost_GetMatchRulesSnapshotDeltaFromDefault()
{
  GameStateInfo *v0; 
  MatchRules *matchRules; 
  MatchRulesSnapshotDelta *result; 

  v0 = GameStateInfo_Get();
  if ( !v0->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4862, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
    __debugbreak();
  matchRules = v0->matchRules;
  if ( g_matchRulesSnapshotDefaultsDelta.checksum == matchRules->checksum )
    return &g_matchRulesSnapshotDefaultsDelta;
  WriteMatchRulesSnapshotDeltaFromDefaults(&g_matchRulesSnapshotDefaultsDelta, matchRules);
  result = &g_matchRulesSnapshotDefaultsDelta;
  g_matchRulesSnapshotDefaultsDelta.checksum = v0->matchRules->checksum;
  return result;
}

/*
==============
PartyHost_GetMaxFreeSlots
==============
*/
int PartyHost_GetMaxFreeSlots(const PartyData *party, int memberCount, int teamCount)
{
  int NumGameSlots; 
  int v7; 
  int v8; 
  int v10; 
  int v11; 
  int v12; 

  NumGameSlots = Party_GetNumGameSlots(party);
  if ( Party_UsingPartyBasedTeams(party) )
  {
    v7 = Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_PLAYER_ONLY);
    v8 = Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_PLAYER_ONLY);
    if ( v7 && v8 )
      return 0;
    else
      return Party_CountMembersEvenIfInactive(&g_partyData, PARTY_MEMBER_TYPE_PLAYER_ONLY);
  }
  else if ( !Party_IsGameBattleMatch(party) && PartyHost_UsingAssignedTeams(party) && teamCount == 2 )
  {
    v10 = Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_PLAYER_ONLY);
    v11 = Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_PLAYER_ONLY);
    if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
    {
      v10 += BG_Bots_GetBotsReservedSlotsAxis();
      v11 += BG_Bots_GetBotsReservedSlotsAllies();
    }
    v12 = memberCount - v11 - v10;
    if ( v12 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 501, ASSERT_TYPE_ASSERT, "(anonCount >= 0)", "%s\n\tmember count (%i) - axisCount (%i) - alliesCount (%i) < 0", "anonCount >= 0", memberCount, v10, v11) )
      __debugbreak();
    if ( v10 < v11 )
      v11 = v10;
    return NumGameSlots / 2 - v11 - v12;
  }
  else
  {
    return NumGameSlots - memberCount;
  }
}

/*
==============
PartyHost_HandleClientDisconnect_Internal
==============
*/
void PartyHost_HandleClientDisconnect_Internal(PartyData *party, const PartyActiveClient *mainActiveClient, const XUID xuid, const PartyDisconnectReason reason, const PartyJoinResponse joinResponse)
{
  unsigned __int8 v5; 
  const char *partyName; 
  const char *v9; 
  int MemberByXUID_AllowNotPresent; 
  const char *v11; 
  const char *v12; 
  PartyData *PartyData; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  XUID playerXuid; 

  playerXuid.m_id = xuid.m_id;
  v5 = reason;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9131, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9132, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  partyName = party->partyName;
  v9 = XUID::ToDevString(&playerXuid);
  LODWORD(v15) = v5;
  Com_Printf(131097, "[%s] PartyJoin: Received 'pa_dis' - Client with XUID (%s) sent us a disconnect message for party %s, reason %i, joinResponse %i.\n", party->partyName, v9, partyName, v15, joinResponse);
  if ( Party_IsGameLobby(party) && Party_IsPlayerOurPrivatePartyHost(playerXuid) )
  {
    Com_Printf(25, "[%s] PartyJoin: Interpreting disconnect message as a backout request from our party host, backing out.\n", party->partyName);
    Party_Backout(mainActiveClient);
  }
  else
  {
    PartyAtomicHost_RemoveAnonymousMembersWithChallengeXuid(party, playerXuid);
    MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, playerXuid);
    if ( MemberByXUID_AllowNotPresent >= 0 )
    {
      if ( (unsigned int)MemberByXUID_AllowNotPresent >= 0xC8 )
      {
        LODWORD(v17) = 200;
        LODWORD(v16) = MemberByXUID_AllowNotPresent;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9153, ASSERT_TYPE_ASSERT, "(unsigned)( partyClientNum ) < (unsigned)( 200 )", "partyClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      PartyHost_SetMemberBackedOut(party, MemberByXUID_AllowNotPresent);
      if ( Com_IsGameLocalServerRunning() )
      {
        v12 = XUID::ToDevString(&playerXuid);
        Com_Printf(131097, "[%s] PartyJoin: Disconnect request while the game server is running, routing through server for client %i (%s)\n", party->partyName, (unsigned int)MemberByXUID_AllowNotPresent, v12);
        CL_Live_RequestClientDrop(MemberByXUID_AllowNotPresent, SV_LIVE_DROP_DISCONNECT, "disconnectMessage");
      }
      else
      {
        PartyHost_RemovePlayer(party, MemberByXUID_AllowNotPresent, 0, "disconnectMessage", NET_CLOSE_SOFT);
        if ( Party_IsPrivateParty(party) && Lobby_IsInLobby() && Lobby_AreWeHost() && !Com_IsGameLocalServerRunning() )
        {
          PartyData = Lobby_GetPartyData();
          v14 = Party_FindMemberByXUID_AllowNotPresent(PartyData, playerXuid);
          if ( v14 >= 0 )
          {
            Com_Printf(25, "[%s] PartyJoin: Since the client disconnected from our private party, we'll also remove him from our game.\n", party->partyName);
            PartyHost_RemovePlayer(PartyData, v14, 0, "disconnectMessage", NET_CLOSE_SOFT);
            PartyHost_SetMemberBackedOut(PartyData, v14);
          }
        }
        if ( Party_FindMemberByXUID_AllowNotPresent(party, playerXuid) >= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9181, ASSERT_TYPE_SANITY, "(Party_FindMemberByXUID_AllowNotPresent( party, xuid ) < 0)", "%s\n\t\"Did not disconnect member properly\"", "Party_FindMemberByXUID_AllowNotPresent( party, xuid ) < 0") )
          __debugbreak();
      }
    }
    else
    {
      v11 = XUID::ToDevString(&playerXuid);
      Com_Printf(131097, "[%s] PartyJoin: Unknown disconnect client XUID %s. May still be anonymous - Dropping anonymous requests\n", party->partyName, v11);
    }
  }
}

/*
==============
PartyHost_HandleFailedAccept
==============
*/
void PartyHost_HandleFailedAccept(PartyData *party, const int memberIndex, const XUID *xuid, const netadr_t *from)
{
  __int128 v4; 
  int addrHandleIndex; 
  netadr_t v8; 
  XUID v9; 

  v4 = *(_OWORD *)&from->type;
  addrHandleIndex = from->addrHandleIndex;
  v9.m_id = xuid->m_id;
  *(_OWORD *)&v8.type = v4;
  OnlineMatchmakerOmniscient::RemoteFailedToJoin(&OnlineMatchmakerOmniscient::ms_instance, v9);
  v8.addrHandleIndex = addrHandleIndex;
  PartyAtomicHost_SendJoinFailedResponseWithPayload(party, &v8, JOINRESPONSE_ERROR_ACCEPT_FAILED, &v9, NULL, 0);
  RMsg_SendMessages();
  PartyHost_RemovePlayer(party, memberIndex, 0, "acceptFailed", NET_CLOSE_HARD);
}

/*
==============
PartyHost_HandleMatchRulesAckFromMember
==============
*/
void PartyHost_HandleMatchRulesAckFromMember(PartyData *party, int clientNum, int partyStateAckTime)
{
  __int64 v3; 
  int matchRulesChangeTime; 
  int *p_lastMatchRulesAck; 
  int v8; 
  int partyStateChangeTime; 
  __int64 v10; 
  int v11; 
  int *v12; 
  __int64 v13; 
  char v14; 
  MatchRulesSnapshot *v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  int i; 
  int snapTime; 
  unsigned int v21; 
  __int64 j; 
  MatchRulesSnapshot *v23; 
  __int64 v24; 
  GameStateInfo *v25; 
  const DDLDef *Asset; 
  MatchRules *matchRules; 
  __int64 v28; 
  __int64 v29; 

  v3 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4741, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v28) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4742, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v28, 200) )
      __debugbreak();
  }
  matchRulesChangeTime = party->specificData.hostData.matchRulesChangeTime;
  p_lastMatchRulesAck = &party->partyMembers[v3].lastMatchRulesAck;
  v8 = *p_lastMatchRulesAck;
  if ( *p_lastMatchRulesAck != matchRulesChangeTime )
  {
    partyStateChangeTime = party->specificData.hostData.partyStateChangeTime;
    if ( matchRulesChangeTime > partyStateChangeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4725, ASSERT_TYPE_ASSERT, "( currentMatchrulesTime ) <= ( currentPartyTime )", "%s <= %s\n\t%i, %i", "currentMatchrulesTime", "currentPartyTime", party->specificData.hostData.matchRulesChangeTime, party->specificData.hostData.partyStateChangeTime) )
      __debugbreak();
    if ( matchRulesChangeTime <= partyStateAckTime && partyStateAckTime <= partyStateChangeTime )
    {
      *p_lastMatchRulesAck = matchRulesChangeTime;
      if ( g_matchRulesSnapshots )
      {
        if ( g_matchRulesSnapshotsDelta )
        {
          v10 = 0i64;
          if ( v8 <= 0 )
            goto LABEL_35;
          v11 = 0;
          v12 = &party->partyMembers[0].lastMatchRulesAck;
          v13 = 2i64;
          do
          {
            if ( v13 - 2 != v3 && *((_BYTE *)v12 + 122) >= 5u && *v12 == v8 )
              break;
            ++v11;
            if ( v13 - 1 != v3 && *((_BYTE *)v12 + 626) >= 5u && v12[126] == v8 )
              break;
            ++v11;
            if ( v13 != v3 && *((_BYTE *)v12 + 1130) >= 5u && v12[252] == v8 )
              break;
            ++v11;
            if ( v13 + 1 != v3 && *((_BYTE *)v12 + 1634) >= 5u && v12[378] == v8 )
              break;
            ++v11;
            if ( v13 + 2 != v3 && *((_BYTE *)v12 + 2138) >= 5u && v12[504] == v8 )
              break;
            v13 += 5i64;
            ++v11;
            v12 += 630;
          }
          while ( v13 - 2 < 200 );
          if ( v11 < 200 )
LABEL_35:
            v14 = 0;
          else
            v14 = 1;
          v15 = g_matchRulesSnapshots;
          v16 = -1;
          v17 = -1;
          v18 = -1;
          for ( i = 0; i < 200; ++i )
          {
            snapTime = v15->snapTime;
            if ( v15->snapTime > 0 )
            {
              if ( snapTime == matchRulesChangeTime )
              {
                v16 = i;
              }
              else if ( snapTime == v8 )
              {
                v17 = i;
              }
            }
            else
            {
              v21 = i;
              if ( v18 != -1 )
                v21 = v18;
              v18 = v21;
            }
            if ( v16 >= 0 )
            {
              if ( !v14 )
                goto LABEL_57;
              if ( v17 >= 0 )
                break;
            }
            ++v15;
          }
          if ( v14 && v17 >= 0 )
          {
            g_matchRulesSnapshots[v17].snapTime = 0;
            for ( j = 0i64; j < 200; ++j )
            {
              if ( g_matchRulesSnapshotsDelta[j].fromSnapTime == v8 )
              {
                g_matchRulesSnapshotsDelta[j].fromSnapTime = 0;
                g_matchRulesSnapshotsDelta[j].toSnapTime = 0;
                g_matchRulesSnapshotsDelta[j].partitionCount = 0;
              }
            }
            if ( v17 < v18 )
              v18 = v17;
          }
LABEL_57:
          if ( v16 <= 0 )
          {
            if ( v18 == -1 )
            {
              PartyHost_MatchRulesCleanupFullCache(party);
              v23 = g_matchRulesSnapshots;
              v18 = 0;
              while ( v23->snapTime > 0 )
              {
                ++v18;
                ++v10;
                ++v23;
                if ( v10 >= 200 )
                  goto LABEL_64;
              }
              if ( v18 != -1 )
                goto LABEL_65;
LABEL_64:
              Com_PrintWarning(25, "[%s] [PartyHost_HandleMatchRulesAckFromMember] Was unable to find a slot to use for previous snapshot, no snapshot will be saved.\n", party->partyName);
            }
            else
            {
LABEL_65:
              if ( v18 >= 0xC8 )
              {
                LODWORD(v29) = 200;
                LODWORD(v28) = v18;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4844, ASSERT_TYPE_ASSERT, "(unsigned)( unusedSnapIdx ) < (unsigned)( ( 200 ) )", "unusedSnapIdx doesn't index MAX_MATCH_RULES_SNAPSHOTS\n\t%i not in [0, %i)", v28, v29) )
                  __debugbreak();
              }
              v24 = (int)v18;
              g_matchRulesSnapshots[v24].snapTime = matchRulesChangeTime;
              v25 = GameStateInfo_Get();
              Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
              if ( !v25->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4851, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
                __debugbreak();
              if ( Asset->byteSize < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4853, ASSERT_TYPE_ASSERT, "(0 <= static_cast<int>(def->byteSize))", "%s\n\tMemcpy has negative length. (def->byteSize)", "0 <= static_cast<int>(def->byteSize)") )
                __debugbreak();
              matchRules = v25->matchRules;
              if ( matchRules >= (MatchRules *)g_matchRulesSnapshots[v24].data && &matchRules->data[Asset->byteSize] <= &g_matchRulesSnapshots[v24].data[Asset->byteSize] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4853, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((gInfo->matchRules->data)) < reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) || reinterpret_cast<const byte*>((gInfo->matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((def->byteSize)))", "%s\n\tMemcpy from (gInfo->matchRules->data) to (g_matchRulesSnapshots[newSnapIdx].data) is copying between overlapping ranges ", "reinterpret_cast<const byte*>((gInfo->matchRules->data)) < reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) || reinterpret_cast<const byte*>((gInfo->matchRules->data))+((def->byteSize)) > reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((def->byteSize))") )
                __debugbreak();
              if ( &v25->matchRules->data[Asset->byteSize] > &v25->matchRules->data[4097] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4853, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((gInfo->matchRules->data)) >= reinterpret_cast<const byte*>((gInfo->matchRules->data)) && reinterpret_cast<const byte*>((gInfo->matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((gInfo->matchRules->data))+((sizeof( gInfo->matchRules->data ))))", "%s\n\tMemcpy from (gInfo->matchRules->data) exceeded bounds of gInfo->matchRules->data", "reinterpret_cast<const byte*>((gInfo->matchRules->data)) >= reinterpret_cast<const byte*>((gInfo->matchRules->data)) && reinterpret_cast<const byte*>((gInfo->matchRules->data))+((def->byteSize)) <= reinterpret_cast<const byte*>((gInfo->matchRules->data))+((sizeof( gInfo->matchRules->data )))") )
                __debugbreak();
              if ( &g_matchRulesSnapshots[v24].data[Asset->byteSize] > (unsigned __int8 *)&g_matchRulesSnapshots[v24 + 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4853, ASSERT_TYPE_ASSERT, "(reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) >= reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) && reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((def->byteSize)) <= reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((sizeof( g_matchRulesSnapshots[newSnapIdx].data ))))", "%s\n\tMemcpy to (g_matchRulesSnapshots[newSnapIdx].data) exceeded bounds of g_matchRulesSnapshots[newSnapIdx].data", "reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) >= reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data)) && reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((def->byteSize)) <= reinterpret_cast<const byte*>((g_matchRulesSnapshots[newSnapIdx].data))+((sizeof( g_matchRulesSnapshots[newSnapIdx].data )))") )
                __debugbreak();
              memcpy_0(g_matchRulesSnapshots[v24].data, v25->matchRules, Asset->byteSize);
            }
          }
        }
      }
    }
  }
}

/*
==============
PartyHost_HandlePacket
==============
*/
__int64 PartyHost_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  const char *string; 
  int v6; 
  __int64 v11; 
  __int64 v13; 
  int v14; 
  const dvar_t *v15; 
  __int128 v16; 
  PartyActiveClient MainActiveClient; 
  __int128 v18; 
  int addrHandleIndex; 
  PartyProfile_Event outEventInfo; 

  string = messageHandlers_0[0].string;
  v6 = 0;
  if ( !*messageHandlers_0[0].string )
    return 0i64;
  v11 = 0i64;
  while ( I_strnicmp(c + 1, string, 0x7FFFFFFFui64) )
  {
    ++v11;
    ++v6;
    string = messageHandlers_0[v11].string;
    if ( !*string )
      return 0i64;
  }
  MainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
  v13 = v6;
  PartyProfile_StartEvent((const PartyProfile_EventType)messageHandlers_0[v13].profileEventType, &outEventInfo);
  PartyProfile_AddBandwidthData(msg->cursize, &outEventInfo);
  v14 = Sys_Milliseconds();
  PartyProfile_RecordIncomingEvent(&outEventInfo, v14, &party->profileState);
  v15 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( v15->current.enabled )
    Com_Printf(25, "[%s] oob: %s\n", party->partyName, c);
  if ( !messageHandlers_0[v13].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9394, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
    __debugbreak();
  v16 = *(_OWORD *)&from->type;
  addrHandleIndex = from->addrHandleIndex;
  v18 = v16;
  ((void (__fastcall *)(PartyData *, PartyActiveClient *, __int128 *, msg_t *))messageHandlers_0[v13].func)(party, &MainActiveClient, &v18, msg);
  return 1i64;
}

/*
==============
PartyHost_HostPreloadMap
==============
*/
void PartyHost_HostPreloadMap(PartyData *party, const char *mapname, const char *gametype)
{
  int MapIndex; 
  int MapSource; 
  PartyData *PartyData; 
  unsigned __int8 ActiveGameMode; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3169, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3170, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !*mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3171, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
    __debugbreak();
  if ( !gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3172, ASSERT_TYPE_ASSERT, "(gametype)", (const char *)&queryFormat, "gametype") )
    __debugbreak();
  MapIndex = Live_GetMapIndex(mapname);
  MapSource = Live_GetMapSource(MapIndex);
  if ( !Content_DoWeHaveContentPack(MapSource) )
  {
    PartyData = Lobby_GetPartyData();
    Party_StopParty(PartyData);
    UI_MissingMapError();
  }
  PartyHost_GetHostData(party)->hostData.preloadingMapStage = PRELOAD_MAP_INITIATED;
  ProfLoad_Activate();
  R_Cinematic_StopPlayback(0);
  ProfLoad_Begin("Com_SyncThreads");
  Com_SyncThreads();
  ProfLoad_End();
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3205, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", "%s\n\tIf you're the server, you should've loaded the map already!", "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3206, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", (const char *)&queryFormat, "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  CG_Main_CleanupLevel();
  ProfLoad_Begin("Com_FrontEnd_ExitFrontEnd");
  Com_FrontEnd_ExitFrontEnd();
  ProfLoad_End();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  BG_Omnvar_LoadTables((GameModeType)ActiveGameMode, gametype, mapname);
  BG_TransientsInfilMP_InitOmnVars(mapname);
  if ( CL_PlayAgain_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3223, ASSERT_TYPE_ASSERT, "(!CL_PlayAgain_IsActive())", (const char *)&queryFormat, "!CL_PlayAgain_IsActive()") )
    __debugbreak();
  if ( Com_GameStart_UseNewLoadingSystem() )
  {
    ProfLoad_Begin("Com_FastFile_SetupForGameStart");
    Com_FastFile_SetupForGameStart(mapname, 0);
  }
  else
  {
    ProfLoad_Begin("Com_FastFile_SyncLoadComplete");
    Com_FastFile_SyncLoadComplete(mapname);
    DB_SyncXAssetsSkipAlwaysLoaded(1);
  }
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_GameAllocate");
  CL_MainMP_GameAllocate(5);
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_ClearGameState");
  CL_MainMP_ClearGameState();
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_BeginMapLoading");
  CL_MainMP_BeginMapLoading(mapname);
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_InitLoad");
  CL_MainMP_InitLoad(mapname, gametype);
  ProfLoad_End();
  ProfLoad_Begin("CL_MainMP_MapLoading");
  CL_MainMP_MapLoading();
  ProfLoad_End();
  ProfLoad_Begin("CL_Main_ShutdownAll");
  CL_Main_ShutdownAll(0, 1);
  ProfLoad_End();
  if ( Com_GameStart_UseNewLoadingSystem() )
  {
    ProfLoad_Begin("Com_RestartForFrontend");
    Com_RestartForFrontend();
  }
  else
  {
    ProfLoad_Begin("Com_Restart");
    Com_Restart();
  }
  ProfLoad_End();
  if ( cls.hunkUsersStarted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3290, ASSERT_TYPE_ASSERT, "(!cls.hunkUsersStarted)", (const char *)&queryFormat, "!cls.hunkUsersStarted") )
    __debugbreak();
  ProfLoad_Begin("CL_Main_InitRenderer");
  CL_Main_InitRenderer();
  ProfLoad_End();
  ProfLoad_Begin("CL_Main_StartHunkUsers");
  CL_Main_StartHunkUsers();
  ProfLoad_End();
  if ( Com_GameStart_UseNewLoadingSystem() )
  {
    ProfLoad_Begin("Com_GameStart_Begin");
    Com_GameStart_BeginServer(mapname, gametype);
  }
  else
  {
    ProfLoad_Begin("DB_LoadLevelXAssets");
    DB_LoadLevelXAssets(mapname, 0, 0);
  }
  ProfLoad_End();
}

/*
==============
PartyHost_InitSingleBufferPartyStateHeader
==============
*/
void PartyHost_InitSingleBufferPartyStateHeader(PartyData *party, int packetNum, int packetsNeeded, msg_t *msg, unsigned __int8 *buffer)
{
  __int64 v5; 
  __int64 v7; 
  PartySpecificData *HostData; 
  const char *v10; 

  v5 = packetsNeeded;
  v7 = packetNum;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5064, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5065, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5066, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  HostData = PartyHost_GetHostData(party);
  if ( !HostData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5069, ASSERT_TYPE_ASSERT, "(hostData)", (const char *)&queryFormat, "hostData") )
    __debugbreak();
  MSG_Init(msg, buffer, 1252);
  v10 = j_va("%ipartystate", (unsigned int)party->partyId);
  MSG_WriteString(msg, v10);
  MSG_WriteLong(msg, HostData->hostData.partyStateChangeTime);
  MSG_WriteBits(msg, v7, 5u);
  MSG_WriteBits(msg, v5, 5u);
  if ( msg->bit != 138 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5076, ASSERT_TYPE_ASSERT, "(msg->bit == ( 138 ))", "%s\n\tIf the size of the partial header changes, so must the PARTYSTATE_PARTHEADER_BITS define.", "msg->bit == PARTYSTATE_PARTHEADER_BITS") )
    __debugbreak();
  if ( msg->cursize != 18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5077, ASSERT_TYPE_ASSERT, "( msg->cursize ) == ( ( 18 ) )", "%s == %s\n\t%i, %i", "msg->cursize", "PARTYSTATE_HEADER_SIZE", msg->cursize, 18) )
    __debugbreak();
}

/*
==============
PartyHost_IsGameStartRequested
==============
*/
bool PartyHost_IsGameStartRequested(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3404, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_IsRunning(party) && Party_InParty(party) && Party_AreWeHost(party) && party->gameStartRequested;
}

/*
==============
PartyHost_IsMatchChosenForSurvey
==============
*/
_BOOL8 PartyHost_IsMatchChosenForSurvey(PartyData *partyData)
{
  return partyData->chosenToShowSurvey;
}

/*
==============
PartyHost_IsReadyToLaunch
==============
*/
bool PartyHost_IsReadyToLaunch(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  const char *MapName; 
  bool IsLevelPreloadComplete; 
  unsigned int lobbyFlags; 
  unsigned int v7; 
  int v8; 
  bool v9; 
  unsigned int v10; 
  int v11; 
  BOOL v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  unsigned int v16; 
  const char *v17; 
  const char *partyName; 
  int ready; 
  BOOL IsReadyToStart; 
  const PartyData *PartyData; 
  PartyData *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  bool result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6466, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6467, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  MapName = Party_GetMapName();
  IsLevelPreloadComplete = Com_FastFile_IsLevelPreloadComplete(MapName);
  lobbyFlags = party->lobbyFlags;
  v7 = lobbyFlags & 0xFFFFFDFF;
  v8 = lobbyFlags | 0x200;
  if ( IsLevelPreloadComplete )
    v7 = v8;
  party->lobbyFlags = v7;
  if ( Party_IsPrivateOrSystemlinkGame(party) )
  {
    if ( !Party_IsHostDedicated(party) )
      return IsLevelPreloadComplete;
    if ( party->privateDSReady )
      return IsLevelPreloadComplete;
    result = Live_IsInSystemlinkLobby();
    if ( result )
      return IsLevelPreloadComplete;
  }
  else
  {
    v9 = BG_GameStateInfo_BotsCountTowardsGameLaunch();
    v10 = Party_CountMembers(party, (PartyMemberTypes)!v9);
    v11 = 1;
    if ( PartyHost_ShouldStartHosting() )
    {
      v12 = 1;
    }
    else
    {
      v13 = DVARINT_party_minplayers;
      if ( !DVARINT_party_minplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v12 = v10 >= v13->current.integer;
    }
    if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 513, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
      __debugbreak();
    if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 514, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
      __debugbreak();
    if ( PartyMigrate_MigrateActive(party) )
    {
      v14 = 0;
    }
    else
    {
      v15 = DVARBOOL_party_editingsettings;
      if ( !DVARBOOL_party_editingsettings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_editingsettings") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      v16 = party->lobbyFlags;
      if ( v15->current.enabled )
      {
        if ( (v16 & 1) == 0 )
        {
          partyName = party->partyName;
          party->lobbyFlags = v16 | 1;
          Com_Printf(15, "[%s] Gamestate changing due to lobbyFlags gaining the LOBBY_FLAG_HOST_CHANGING_SETTINGS flag\n", partyName);
          PartyHost_GamestateChanged(party);
        }
        v14 = 0;
      }
      else
      {
        if ( (v16 & 1) != 0 )
        {
          v17 = party->partyName;
          party->lobbyFlags = v16 & 0xFFFFFFFE;
          Com_Printf(15, "[%s] Gamestate changing due to lobbyFlags losing the LOBBY_FLAG_HOST_CHANGING_SETTINGS flag\n", v17);
          PartyHost_GamestateChanged(party);
        }
        v14 = 1;
      }
    }
    ready = PartyHost_ReadyTeams(party, mainActiveClient->localControllerIndex, v10);
    IsReadyToStart = OnlineMatchmakerOmniscient::IsReadyToStart(&OnlineMatchmakerOmniscient::ms_instance);
    if ( v12 )
    {
      if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_GameStateInfo_IsBotMatchMakingDataInitialized() && !BG_GameStateInfo_BotsCountTowardsGameLaunch() )
      {
        BG_GameStateInfo_EnableGameLaunchWithBots();
        if ( Lobby_IsInLobby() )
        {
          PartyData = Lobby_GetPartyData();
          if ( Party_AreWeHost(PartyData) )
          {
            v22 = Lobby_GetPartyData();
            PartyHost_GamestateChanged(v22);
          }
        }
      }
    }
    v23 = DVARBOOL_online_matchmaking_delay_start_while_may_connect;
    if ( !DVARBOOL_online_matchmaking_delay_start_while_may_connect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_delay_start_while_may_connect") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled && !PartyHost_GetHostData(party)->hostData.m_wasReadyToLaunchLastFrame && OnlineMatchmakerOmniscient::AreAnyPlayersConnecting(&OnlineMatchmakerOmniscient::ms_instance) )
      v11 = 0;
    v24 = DVARBOOL_party_debug;
    if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled )
      Com_Printf(25, "[%s] %shasEnoughPlayers %sclientsAreReady %steamsAreReady %spreloadingIsReady %smatchmakerReady %sconnectingReady\n", party->partyName);
    return v12 && v14 && ready && IsLevelPreloadComplete && IsReadyToStart && v11;
  }
  return result;
}

/*
==============
PartyHost_IsXnaddrUpdating
==============
*/
char PartyHost_IsXnaddrUpdating(const PartyData *party)
{
  int v2; 
  PartyClientData *i; 

  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5692, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  v2 = 0;
  for ( i = &party->specificData.clientData + 3; !*(_DWORD *)&i->m_receivedGoMessage; i = (PartyClientData *)((char *)i + 4) )
  {
    if ( ++v2 )
      return 0;
  }
  return 1;
}

/*
==============
PartyHost_KickPlayer
==============
*/
void PartyHost_KickPlayer(PartyData *party, const int memberIndex, const PartyDisconnectReason disconnectReason)
{
  unsigned __int8 v3; 
  const char *v6; 
  NetConnection *MemberConnection; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  v3 = disconnectReason;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1666, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1667, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  if ( Party_IsMemberIndexAway(party, memberIndex) || Party_IsMemberIndexCommitted(party, memberIndex) || !Party_IsMemberRegistered(party, memberIndex) )
  {
    PartyHost_RemovePlayer(party, memberIndex, 1, "kicked", NET_CLOSE_SOFT);
  }
  else if ( !Party_MemberHasLoopbackAddr(party, memberIndex) )
  {
    MSG_Init(&buf, data, 64);
    v6 = j_va("%i%s", (unsigned int)party->partyId, "kickedFromParty");
    MSG_WriteString(&buf, v6);
    MSG_WriteByte(&buf, v3);
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, memberIndex);
    NetConnection::SendReliable(MemberConnection, &buf);
    PartyHost_DemotePresentMember(party, memberIndex);
  }
}

/*
==============
PartyHost_LANInfoRequestPacket
==============
*/
void PartyHost_LANInfoRequestPacket(const LocalClientNum_t localClientNum, const netadr_t *from, msg_t *msg)
{
  const dvar_t *v6; 
  const char *v7; 
  int v8; 
  bool v9; 
  int addrHandleIndex; 
  const char *v11; 
  const char *v12; 
  unsigned int v13; 
  unsigned int v14; 
  const char *v15; 
  unsigned int ProtocolVersion; 
  const char *v17; 
  unsigned int v18; 
  const char *v19; 
  int ControllerFromClient; 
  const char *UsernameForLocalClient; 
  const char *MapName; 
  const char *Gametype; 
  const char *v24; 
  unsigned int Int_Internal_DebugName; 
  const char *v26; 
  unsigned int *Address; 
  bdSockAddr *v28; 
  bdSockAddr *v29; 
  const bdSockAddr *v30; 
  SessionData *session; 
  __int64 v32; 
  const bdSecurityKey *SecurityKey; 
  const char *v34; 
  unsigned __int8 ClientPlatform; 
  const char *v36; 
  unsigned int IsRunning; 
  const char *v38; 
  int v39; 
  bool IsCrossPlayEnabled; 
  const char *v41; 
  netadr_t v42; 
  bdSockAddr v43; 
  bdSockAddr result; 
  char value[24]; 
  char str[56]; 
  char dest[128]; 
  char s[1024]; 
  char string[1024]; 
  char data[1024]; 

  from->type = NA_RAW;
  if ( Live_IsInSystemlinkLobby() && Party_AreWeServer(&g_partyData) )
  {
    v6 = DVARBOOL_systemlink_host;
    if ( !DVARBOOL_systemlink_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink_host") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && CL_IsLocalClientActive(localClientNum) && localClientNum == LOCAL_CLIENT_0 )
    {
      MSG_ReadString(msg, string, 0x400u);
      v7 = Info_ValueForKey(string, "protocol");
      v8 = atoi(v7);
      v9 = v8 == GetProtocolVersion();
      addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v42.type = *(_OWORD *)&from->type;
      v42.addrHandleIndex = addrHandleIndex;
      if ( v9 )
      {
        v12 = NET_AdrToString(&v42);
        Com_Printf(25, "Received LAN Info Request from %s - %s\n", v12, string);
        v13 = Party_CountAllMembersEvenIfInactive(&g_partyData);
        s[0] = 0;
        v14 = v13;
        v15 = Cmd_Argv(1);
        Info_SetValueForKey(s, "challenge", v15);
        ProtocolVersion = GetProtocolVersion();
        v17 = j_va("%i", ProtocolVersion);
        Info_SetValueForKey(s, "protocol", v17);
        v18 = BG_NetDataChecksum();
        v19 = j_va("%i", v18);
        Info_SetValueForKey(s, "checksum", v19);
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        UsernameForLocalClient = CL_GetUsernameForLocalClient(ControllerFromClient);
        Info_SetValueForKey(s, "hostname", UsernameForLocalClient);
        MapName = Party_GetMapName();
        Info_SetValueForKey(s, "mapname", MapName);
        Gametype = Party_GetGametype();
        Info_SetValueForKey(s, "gametype", Gametype);
        if ( v14 )
        {
          v24 = j_va("%i", v14);
          Info_SetValueForKey(s, "clients", v24);
        }
        if ( Dvar_GetInt_Internal_DebugName(DVARINT_party_maxplayers, "party_maxplayers") > 0 )
        {
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_party_maxplayers, "party_maxplayers");
          v26 = j_va("%i", Int_Internal_DebugName);
          Info_SetValueForKey(s, "maxclients", v26);
        }
        if ( g_partyData.inParty && XSESSION_INFO::IsValidSessionId(&g_partyData.session->dyn.sessionInfo) )
        {
          Address = (unsigned int *)XSESSION_INFO::GetAddress(&g_partyData.session->dyn.sessionInfo);
          bdSockAddr::bdSockAddr(&v43, *Address);
          v29 = v28;
          v30 = bdSockAddr::Loopback(&result, 2u, 0);
          if ( bdSockAddr::compare(v29, v30, 0) )
          {
            Com_PrintWarning(25, "%s - Cannot advertise game to LAN broadcast request because local machine has NOT obtained a valid IP address!\n 127.0.0.1 is NOT a joinable address!\nCheck network configuration to verify there is a DHCP server available or set machine to use a state IP!\n", "PartyHost_LANInfoRequestPacket");
          }
          else
          {
            session = g_partyData.session;
            v32 = (__int64)*XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
            SecurityKey = XSESSION_INFO::GetSecurityKey(&session->dyn.sessionInfo);
            Int128ToString(SecurityKey->ab, str);
            Int64ToString(v32, value);
            memset_0(dest, 0, 0x71ui64);
            bdBase64::encode((const char *)Address, 0x54u, dest, 0x71u);
            Info_SetValueForKey(s, "seckey", str);
            Info_SetValueForKey(s, "secid", value);
            Info_SetValueForKey(s, "hostaddr", dest);
            v34 = j_va("%i", 0i64);
            Info_SetValueForKey(s, "dedicated", v34);
            ClientPlatform = GetClientPlatform();
            v36 = j_va("%i", ClientPlatform);
            Info_SetValueForKey(s, "platform", v36);
            IsRunning = Party_IsRunning(&g_partyData);
            v38 = j_va("%i", IsRunning);
            Info_SetValueForKey(s, "isLobby", v38);
            v39 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
            IsCrossPlayEnabled = Live_IsCrossPlayEnabled(v39);
            v41 = "0";
            if ( IsCrossPlayEnabled )
              v41 = "1";
            Info_SetValueForKey(s, "crossplay", v41);
            Core_strcpy(data, 0x400ui64, "inforesponse\n");
            I_strcat(data, 0x400ui64, s);
            NET_OutOfBandPrint(NS_MAXCLIENTS, from, data);
          }
        }
      }
      else
      {
        v11 = NET_AdrToString(&v42);
        Com_Printf(25, "Received LAN Info Request from %s - %s but protocol does not match, will not respond (could be different build configs)\n", v11, string);
      }
    }
  }
}

/*
==============
PartyHost_LogPartyStateBBPrint
==============
*/
void PartyHost_LogPartyStateBBPrint(tPartyStateLogData *logData, LocalClientNum_t clientNum)
{
  const dvar_t *v2; 
  unsigned __int16 players_joined; 
  unsigned int total_match_rules; 
  unsigned int total_party_state; 
  unsigned int total_header; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  DLogContext context; 
  char buffer[4096]; 

  v2 = DVARBOOL_log_party_state;
  if ( !DVARBOOL_log_party_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "log_party_state") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    if ( logData->total_header + logData->total_match_rules + logData->total_party_state )
    {
      Com_Printf(25, "logging party state:\n");
      players_joined = logData->players_joined;
      total_match_rules = logData->total_match_rules;
      total_party_state = logData->total_party_state;
      total_header = logData->total_header;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
      UserId = DLog_GetUserId(ControllerFromClient);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v11 = DLog_BeginEvent(&context, "party_state_log");
        context.autoEndEvent = 1;
        if ( v11 && DLog_Int32(&context, "version", 0) && DLog_UInt32(&context, "total_header", total_header) && DLog_UInt32(&context, "total_party_state", total_party_state) && DLog_UInt32(&context, "total_match_rules", total_match_rules) && DLog_UInt16(&context, "players_joined", players_joined) )
          DLog_RecordContext(&context);
      }
      LODWORD(v14) = logData->players_joined;
      LODWORD(v13) = logData->total_match_rules;
      LODWORD(fmt) = logData->total_party_state;
      Com_Printf(25, "version %u, total_header %u, total_party_state %u, total_match_rules %u, players_joined %u", 0i64, logData->total_header, fmt, v13, v14);
      Com_Printf(25, "\n");
    }
    else
    {
      Com_Printf(25, "not logging party state\n");
    }
  }
}

/*
==============
PartyHost_MakeTeams
==============
*/
int PartyHost_MakeTeams(PartyData *party, const int localControllerIndex, int memberCount)
{
  const dvar_t *v5; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  int v9; 
  const dvar_t *v10; 
  int maxSquadSize; 
  const dvar_t *v12; 
  int result; 
  int v14; 
  int v15; 
  __int64 v16; 
  int v17; 
  int *v18; 
  bitarray_base<bitarray<256> > *p_otherDataAckedMembers; 
  int *v20; 
  __int64 v21; 
  int v22; 
  char *v23; 
  team_t TeamFromPlatformId; 
  const dvar_t *v25; 
  signed int i; 
  MPBotPlayerDataContainer *BotMember; 
  int v28; 
  MPBotPlayerDataContainer *v29; 
  __int64 includeBots; 
  __int64 maxPlayers; 
  __int64 teamCount; 
  int *v33; 
  int v34; 
  int v36; 

  PartyHost_UpdateSubparties(party, NULL, NULL, NULL, 1);
  v5 = DVARINT_party_teamCount;
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer <= 0 )
  {
    integer = 1;
  }
  else
  {
    v6 = DVARINT_party_teamCount;
    if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
  }
  v8 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.integer;
  v10 = DVARINT_party_maxSquadSize;
  if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  maxSquadSize = v10->current.integer;
  v12 = DVARINT_party_maxTeamDiff;
  if ( !DVARINT_party_maxTeamDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxTeamDiff") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  result = TeamBalance_MakeTeams(party->subparties, party->subpartyCount, party->partyMembers, memberCount, v12->current.integer, v9, integer, v9 / integer, maxSquadSize);
  v36 = result;
  v14 = result;
  if ( result )
  {
    v15 = 0;
    v16 = 0i64;
    v34 = 0;
    if ( party->subpartyCount )
    {
      do
      {
        v17 = 0;
        v18 = (int *)((char *)party + 1016 * v16);
        v33 = v18;
        if ( v18[27994] > 0 )
        {
          p_otherDataAckedMembers = &party->partyMembers[0].otherDataAckedMembers;
          v20 = v18 + 27744;
          do
          {
            v21 = *v20;
            if ( (unsigned int)v21 >= 0xC8 )
            {
              LODWORD(teamCount) = 200;
              LODWORD(maxPlayers) = *v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2532, ASSERT_TYPE_ASSERT, "(unsigned)( partyClientNum ) < (unsigned)( 200 )", "partyClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", maxPlayers, teamCount) )
                __debugbreak();
            }
            v22 = v18[27996];
            v23 = (char *)party + 504 * v21;
            *((_DWORD *)v23 + 648) = v22;
            LODWORD(teamCount) = v18[27997];
            LODWORD(maxPlayers) = v22;
            *((_DWORD *)v23 + 649) = teamCount;
            Com_Printf(25, "[%s] %s assigning %s to team %i and squad %i\n", party->partyName, "PartyHost_MakeTeams", v23 + 2244, maxPlayers, teamCount);
            if ( GameBattles_IsGameBattleActive() )
            {
              TeamFromPlatformId = GameBattles_GetTeamFromPlatformId(localControllerIndex, *((_QWORD *)v23 + 294));
              *((_DWORD *)v23 + 648) = TeamFromPlatformId;
              v18[27996] = TeamFromPlatformId;
            }
            v25 = DVARBOOL_party_debug;
            if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v25);
            if ( v25->current.enabled )
              Com_Printf(25, "[%s] Marking party client %i as dirty\n", party->partyName, (unsigned int)v21);
            for ( i = 0; i < 200; ++i )
            {
              if ( Party_IsMemberIndexDataAvailable(party, i) )
              {
                if ( (unsigned int)i >= 0xC8 )
                {
                  LODWORD(teamCount) = 200;
                  LODWORD(maxPlayers) = i;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2245, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", maxPlayers, teamCount) )
                    __debugbreak();
                }
                if ( (unsigned int)v21 >= 0xC8 )
                {
                  LODWORD(teamCount) = 200;
                  LODWORD(maxPlayers) = v21;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( dirtyMemberSlot ) < (unsigned)( 200 )", "dirtyMemberSlot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", maxPlayers, teamCount) )
                    __debugbreak();
                }
                bitarray_base<bitarray<256>>::resetBit(p_otherDataAckedMembers - 64, v21);
                bitarray_base<bitarray<256>>::resetBit(p_otherDataAckedMembers, v21);
              }
              p_otherDataAckedMembers += 504;
            }
            PartyChat_ClearAckedMemberFromPartyChats(party, v21);
            v18 = v33;
            v15 = 0;
            if ( BG_GameStateInfo_IsBotMatchMakingDataInitialized() && BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
            {
              BotMember = BG_GameStateInfo_GetBotMember(v21);
              if ( BotMember->isDataValid )
              {
                v28 = v33[27996];
                if ( (v28 < 0 || (unsigned int)v28 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v28, "signed", v28) )
                  __debugbreak();
                BotMember->botPlayerData.aiTeam = v28;
              }
            }
            ++v17;
            p_otherDataAckedMembers = &party->partyMembers[0].otherDataAckedMembers;
            ++v20;
          }
          while ( v17 < v33[27994] );
        }
        v16 = (unsigned int)(v34 + 1);
        v34 = v16;
      }
      while ( (unsigned int)v16 < party->subpartyCount );
      v14 = v36;
    }
    if ( BG_GameStateInfo_IsBotMatchMakingDataInitialized() && BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
    {
      do
      {
        v29 = BG_GameStateInfo_GetBotMember(v15);
        if ( v29->isDataValid )
        {
          LODWORD(includeBots) = v29->botPlayerData.aiTeam;
          Com_Printf(25, "[%s] Bot/player index %d assigned to team %d by MakeTeams\n", party->partyName, (unsigned int)v15, includeBots);
        }
        ++v15;
      }
      while ( v15 < 200 );
    }
    return v14;
  }
  return result;
}

/*
==============
PartyHost_MapIsAcceptable
==============
*/
bool PartyHost_MapIsAcceptable(PartyData *party, const char *mapname, const int playlistId)
{
  int MapIndex; 
  int v6; 

  MapIndex = Live_GetMapIndex(mapname);
  if ( MapIndex < 0 )
    return 1;
  if ( MapIndex >= Live_GetMapCount() )
  {
    v6 = MapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 919, ASSERT_TYPE_ASSERT, "( ( mapIndex >= 0 && mapIndex < Live_GetMapCount() ) )", "( mapIndex ) = %i", v6) )
      __debugbreak();
  }
  return (Live_GetMapSource(MapIndex) & ~party->mapPackFlags) == 0;
}

/*
==============
PartyHost_MarkAllMembersDirty
==============
*/
void PartyHost_MarkAllMembersDirty(PartyData *party)
{
  unsigned __int8 *p_status; 
  unsigned int i; 
  const dvar_t *v4; 
  signed int v5; 
  bitarray_base<bitarray<256> > *p_connectivityAckedMembers; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int8 *v9; 

  p_status = &party->partyMembers[0].status;
  v9 = &party->partyMembers[0].status;
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( *p_status != 6 && Party_IsMemberIndexDataAvailable(party, i) )
    {
      v4 = DVARBOOL_party_debug;
      if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
        Com_Printf(25, "[%s] Marking party client %i as dirty\n", party->partyName, i);
      v5 = 0;
      p_connectivityAckedMembers = &party->partyMembers[0].connectivityAckedMembers;
      do
      {
        if ( Party_IsMemberIndexDataAvailable(party, v5) )
        {
          if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2244, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
            __debugbreak();
          if ( (unsigned int)v5 >= 0xC8 )
          {
            LODWORD(v8) = 200;
            LODWORD(v7) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2245, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, v8) )
              __debugbreak();
          }
          bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers - 32, i);
          bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers, i);
          bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers + 32, i);
        }
        ++v5;
        p_connectivityAckedMembers += 504;
      }
      while ( v5 < 200 );
      PartyChat_ClearAckedMemberFromPartyChats(party, i);
      p_status = v9;
    }
    p_status += 504;
    v9 = p_status;
  }
}

/*
==============
PartyHost_MarkMemberInfoDirty
==============
*/
void PartyHost_MarkMemberInfoDirty(PartyData *party, int dirtyMemberSlot, int dirtyMask)
{
  const dvar_t *v3; 
  signed int v7; 
  bitarray_base<bitarray<256> > *p_connectivityAckedMembers; 
  __int64 v9; 
  __int64 v10; 

  v3 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    Com_Printf(25, "[%s] Marking party client %i as dirty\n", party->partyName, (unsigned int)dirtyMemberSlot);
  v7 = 0;
  p_connectivityAckedMembers = &party->partyMembers[0].connectivityAckedMembers;
  do
  {
    if ( Party_IsMemberIndexDataAvailable(party, v7) )
    {
      if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2244, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
        __debugbreak();
      if ( (unsigned int)v7 >= 0xC8 )
      {
        LODWORD(v10) = 200;
        LODWORD(v9) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2245, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( (unsigned int)dirtyMemberSlot >= 0xC8 )
      {
        LODWORD(v10) = 200;
        LODWORD(v9) = dirtyMemberSlot;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2246, ASSERT_TYPE_ASSERT, "(unsigned)( dirtyMemberSlot ) < (unsigned)( 200 )", "dirtyMemberSlot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !dirtyMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2247, ASSERT_TYPE_ASSERT, "(dirtyMask != 0)", (const char *)&queryFormat, "dirtyMask != 0") )
        __debugbreak();
      bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers - 32, dirtyMemberSlot);
      if ( (dirtyMask & 1) != 0 )
        bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers, dirtyMemberSlot);
      if ( (dirtyMask & 2) != 0 )
        bitarray_base<bitarray<256>>::resetBit(p_connectivityAckedMembers + 32, dirtyMemberSlot);
    }
    ++v7;
    p_connectivityAckedMembers += 504;
  }
  while ( v7 < 200 );
  PartyChat_ClearAckedMemberFromPartyChats(party, dirtyMemberSlot);
}

/*
==============
PartyHost_MarkPacketReceivedForJoiningPlayer
==============
*/
void PartyHost_MarkPacketReceivedForJoiningPlayer(PartyData *party, XUID playerXuid, const PartyJoinChallenge *challenge, const bdSecurityID *privatePartyId)
{
  int v7; 
  int MemberByXUID_AllowNotPresent; 
  unsigned int v9; 
  int *p_lastPacketTime; 
  XUID player; 

  player.m_id = playerXuid.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7515, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !XUID::IsValid(&player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7516, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", (const char *)&queryFormat, "playerXuid.IsValid()") )
    __debugbreak();
  if ( !privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7517, ASSERT_TYPE_ASSERT, "(privatePartyId)", (const char *)&queryFormat, "privatePartyId") )
    __debugbreak();
  v7 = Sys_Milliseconds();
  MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player);
  if ( MemberByXUID_AllowNotPresent >= 0 )
    party->partyMembers[MemberByXUID_AllowNotPresent].lastPacketTime = v7;
  if ( challenge )
    PartyAtomicHost_RefreshAnonymousTimeout(party, challenge, v7);
  if ( g_noPrivatePartyId != *privatePartyId )
  {
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7492, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( !privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7493, ASSERT_TYPE_ASSERT, "(privatePartyId)", (const char *)&queryFormat, "privatePartyId") )
      __debugbreak();
    if ( g_noPrivatePartyId == *privatePartyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7494, ASSERT_TYPE_ASSERT, "(I_memcmp( &g_noPrivatePartyId, privatePartyId, sizeof( g_noPrivatePartyId ) ) != 0)", (const char *)&queryFormat, "I_memcmp( &g_noPrivatePartyId, privatePartyId, sizeof( g_noPrivatePartyId ) ) != 0") )
      __debugbreak();
    v9 = 0;
    p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
    do
    {
      if ( (unsigned __int8)(*((_BYTE *)p_lastPacketTime + 138) - 3) <= 1u && *(_QWORD *)&party->partyMembers[v9].info.privatePartyId == *privatePartyId )
        *p_lastPacketTime = v7;
      ++v9;
      p_lastPacketTime += 126;
    }
    while ( v9 < 0xC8 );
  }
}

/*
==============
PartyHost_MatchRulesCleanupClient
==============
*/
void PartyHost_MatchRulesCleanupClient(PartyData *party, int clientNum)
{
  __int64 v2; 
  PartySpecificData *HostData; 
  int lastMatchRulesAck; 
  int *p_lastMatchRulesAck; 
  __int64 v7; 
  int v8; 
  MatchRulesSnapshot *v9; 
  __int64 v10; 
  __int64 i; 
  int v13; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v13 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4633, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v13) )
      __debugbreak();
  }
  if ( g_matchRulesSnapshots )
  {
    if ( g_matchRulesSnapshotsDelta )
    {
      HostData = PartyHost_GetHostData(party);
      lastMatchRulesAck = party->partyMembers[v2].lastMatchRulesAck;
      if ( lastMatchRulesAck != HostData->hostData.matchRulesChangeTime )
      {
        if ( lastMatchRulesAck )
        {
          p_lastMatchRulesAck = &party->partyMembers[0].lastMatchRulesAck;
          v7 = 0i64;
          while ( v7 == v2 || *((_BYTE *)p_lastMatchRulesAck + 122) < 5u || *p_lastMatchRulesAck != lastMatchRulesAck )
          {
            ++v7;
            p_lastMatchRulesAck += 126;
            if ( v7 >= 200 )
            {
              v8 = 0;
              v9 = g_matchRulesSnapshots + 2;
              v10 = 0i64;
              while ( v9[-2].snapTime != lastMatchRulesAck )
              {
                if ( v9[-1].snapTime == lastMatchRulesAck )
                {
                  ++v8;
                  break;
                }
                if ( v9->snapTime == lastMatchRulesAck )
                {
                  v8 += 2;
                  break;
                }
                if ( v9[1].snapTime == lastMatchRulesAck )
                {
                  v8 += 3;
                  break;
                }
                if ( v9[2].snapTime == lastMatchRulesAck )
                {
                  v8 += 4;
                  break;
                }
                v10 += 5i64;
                v9 += 5;
                v8 += 5;
                if ( v10 >= 200 )
                  break;
              }
              if ( v8 != 200 )
              {
                for ( i = 0i64; i < 200; ++i )
                {
                  if ( g_matchRulesSnapshotsDelta[i].fromSnapTime == lastMatchRulesAck )
                  {
                    g_matchRulesSnapshotsDelta[i].fromSnapTime = 0;
                    g_matchRulesSnapshotsDelta[i].toSnapTime = 0;
                    g_matchRulesSnapshotsDelta[i].partitionCount = 0;
                  }
                }
                g_matchRulesSnapshots[v8].snapTime = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
}

/*
==============
PartyHost_MatchRulesCleanupFullCache
==============
*/
void PartyHost_MatchRulesCleanupFullCache(PartyData *party)
{
  MatchRulesSnapshot *v1; 
  __int64 i; 
  int snapTime; 
  int v5; 
  int *p_lastMatchRulesAck; 
  __int64 j; 
  __int64 k; 

  v1 = g_matchRulesSnapshots;
  if ( g_matchRulesSnapshots && g_matchRulesSnapshotsDelta )
  {
    for ( i = 0i64; i < 200; ++i )
    {
      snapTime = v1[i].snapTime;
      if ( snapTime > 0 )
      {
        v5 = 0;
        p_lastMatchRulesAck = &party->partyMembers[0].lastMatchRulesAck;
        for ( j = 0i64; j < 200; j += 5i64 )
        {
          if ( *((_BYTE *)p_lastMatchRulesAck + 122) >= 5u && *p_lastMatchRulesAck == snapTime )
            break;
          ++v5;
          if ( *((_BYTE *)p_lastMatchRulesAck + 626) >= 5u && p_lastMatchRulesAck[126] == snapTime )
            break;
          ++v5;
          if ( *((_BYTE *)p_lastMatchRulesAck + 1130) >= 5u && p_lastMatchRulesAck[252] == snapTime )
            break;
          ++v5;
          if ( *((_BYTE *)p_lastMatchRulesAck + 1634) >= 5u && p_lastMatchRulesAck[378] == snapTime )
            break;
          ++v5;
          if ( *((_BYTE *)p_lastMatchRulesAck + 2138) >= 5u && p_lastMatchRulesAck[504] == snapTime )
            break;
          ++v5;
          p_lastMatchRulesAck += 630;
        }
        if ( v5 >= 200 )
        {
          v1[i].snapTime = 0;
          for ( k = 0i64; k < 200; ++k )
          {
            if ( g_matchRulesSnapshotsDelta[k].fromSnapTime == snapTime )
            {
              g_matchRulesSnapshotsDelta[k].fromSnapTime = 0;
              g_matchRulesSnapshotsDelta[k].toSnapTime = 0;
              g_matchRulesSnapshotsDelta[k].partitionCount = 0;
            }
          }
          v1 = g_matchRulesSnapshots;
        }
      }
    }
  }
}

/*
==============
PartyHost_MatchRulesStateChanged
==============
*/
void PartyHost_MatchRulesStateChanged(PartyData *party)
{
  GameStateInfo *v2; 
  const dvar_t *v3; 
  char v4; 
  bool v5; 
  __int64 partyStateChangeTime; 
  const char *partyName; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4976, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v2 = GameStateInfo_Get();
  if ( !Party_IsGameLobby(party) )
    goto LABEL_10;
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
    v4 = 1;
  else
LABEL_10:
    v4 = 0;
  v5 = !Party_IsGameLobby(party) && Live_IsInSystemlinkLobby();
  if ( v4 || v5 )
    v5 = 1;
  if ( v2->usingRecipe && v5 )
  {
    if ( !v2->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4986, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
      __debugbreak();
    PartyHost_GamestateChanged(party);
    if ( party->specificData.hostData.matchRulesChangeTime > party->specificData.hostData.partyStateChangeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4989, ASSERT_TYPE_ASSERT, "(party->specificData.hostData.matchRulesChangeTime <= party->specificData.hostData.partyStateChangeTime)", "%s\n\tCode doesn't support wrapping partyStateChangeTime", "party->specificData.hostData.matchRulesChangeTime <= party->specificData.hostData.partyStateChangeTime") )
      __debugbreak();
    partyStateChangeTime = (unsigned int)party->specificData.hostData.partyStateChangeTime;
    partyName = party->partyName;
    party->specificData.hostData.matchRulesChangeTime = partyStateChangeTime;
    Com_Printf(25, "[%s] [PartyHost_MatchRulesStateChanged] time %d\n", partyName, partyStateChangeTime);
  }
}

/*
==============
PartyHost_MemberInfoChanged
==============
*/
void PartyHost_MemberInfoChanged(PartyData *party, int memberSlot, int dirtyMask)
{
  __int64 v3; 
  const char *MemberName; 
  const dvar_t *v7; 
  PartySpecificData *HostData; 
  __int64 v9; 

  v3 = memberSlot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2583, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2584, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2585, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2586, ASSERT_TYPE_ASSERT, "(unsigned)( memberSlot ) < (unsigned)( 200 )", "memberSlot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, 200) )
      __debugbreak();
  }
  if ( Party_IsPrivateParty(party) && party->partyMembers[v3].joinType == 6 )
  {
    MemberName = Party_GetMemberName(party, v3);
    Com_Printf(25, "[%s] %s will bypass the Party_IsRunning check so that %s will be marked as changed\n", party->partyName, "PartyHost_MemberInfoChanged", MemberName);
  }
  else if ( !Party_IsRunning(party) )
  {
    return;
  }
  if ( Live_IsLobbyTeamSelectEnabled() && !Live_IsInGameBattlesGame() && !Live_IsLobbyTeamSelectionLocked() && (!Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") || Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch")) )
    party->partyMembers[v3].team = party->partyMembers[v3].info.clientDesiredTeamSelection;
  v7 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    HostData = PartyHost_GetHostData(party);
    Com_Printf(25, "[%s] PartyState changed at time %i due to member change\n", party->partyName, (unsigned int)HostData->hostData.partyStateChangeTime);
  }
  PartyHost_MarkMemberInfoDirty(party, v3, dirtyMask);
  PartyHost_UpdateSubparties(party, NULL, NULL, NULL, 1);
  PartyHost_SetPartyStateChangeTime(party);
  Party_SetUIPlayerCount(party);
}

/*
==============
PartyHost_OnMatchEnd
==============
*/
void PartyHost_OnMatchEnd(const PartyData *party)
{
  PartyHost_LogPartyStateBBPrint(&s_partyStateLoggingData, LOCAL_CLIENT_0);
}

/*
==============
PartyHost_PartyRequiresOnlineSubscriptionForPlatform
==============
*/
bool PartyHost_PartyRequiresOnlineSubscriptionForPlatform(const PartyData *party, ClientPlatform platform)
{
  char v2; 

  v2 = platform;
  if ( !Live_IsOnlineGame() )
    return 0;
  if ( v2 == 4 )
    return PartyHost_PartyRestrictsF2PUsers(party);
  return v2 == 3;
}

/*
==============
PartyHost_PartyRestrictsF2PUsers
==============
*/
char PartyHost_PartyRestrictsF2PUsers(const PartyData *party)
{
  int PlaylistFromLobbyData; 
  unsigned int Int_Internal_DebugName; 
  int PlaylistCategory; 
  const dvar_t *v5; 
  unsigned int unsignedInt; 
  const dvar_t *v7; 

  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 10137, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( Live_IsOnlineGame() )
  {
    if ( !Party_IsGameLobby(party) )
      return 0;
    if ( !Party_IsPrivateMatchLobby(party) && !Live_IsInGameBattlesGame() )
    {
      if ( OnlineMatchmakerOmniscient::IsInDWLobby(&OnlineMatchmakerOmniscient::ms_instance) )
      {
        PlaylistFromLobbyData = OnlineMatchmakerOmniscient::GetPlaylistFromLobbyData(&OnlineMatchmakerOmniscient::ms_instance);
        Int_Internal_DebugName = -1;
        goto LABEL_26;
      }
      if ( !OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) || OnlineMatchmakerOmniscient::IsShuttingDown(&OnlineMatchmakerOmniscient::ms_instance) )
      {
        PlaylistFromLobbyData = Dvar_GetInt_Internal_DebugName(DVARINT_playlistID, "playlistID");
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlistCategory, "playlistCategory");
        goto LABEL_26;
      }
      PlaylistFromLobbyData = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance);
      PlaylistCategory = OnlineMatchmakerOmniscient::GetPlaylistCategory(&OnlineMatchmakerOmniscient::ms_instance);
      v5 = DVARINT_playlistCategory;
      Int_Internal_DebugName = PlaylistCategory;
      if ( !DVARINT_playlistCategory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistCategory") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      unsignedInt = v5->current.unsignedInt;
      if ( Playlist_IsCategoryFiltered(LOCAL_CLIENT_0, unsignedInt) )
      {
        if ( Int_Internal_DebugName != unsignedInt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 10125, ASSERT_TYPE_ASSERT, "(category == dvarCategory)", (const char *)&queryFormat, "category == dvarCategory") )
LABEL_18:
          __debugbreak();
      }
      else
      {
        v7 = DVARINT_playlistID;
        if ( !DVARINT_playlistID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistID") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( PlaylistFromLobbyData != v7->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 10129, ASSERT_TYPE_ASSERT, "(playlistId == Dvar_GetInt_Internal_DebugName( DVARINT_playlistID, \"playlistID\" ))", (const char *)&queryFormat, "playlistId == Dvar_GetInt( playlistID )") )
          goto LABEL_18;
      }
LABEL_26:
      if ( PlaylistFromLobbyData >= 0 && !Playlist_AnyPlaylistInCategoryRestrictsF2P(PlaylistFromLobbyData, Int_Internal_DebugName) )
        return 0;
    }
  }
  return 1;
}

/*
==============
PartyHost_PreMatch
==============
*/
void PartyHost_PreMatch(PartyData *party, int localControllerIndex)
{
  const dvar_t *v4; 
  char v5; 
  int v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3051, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3052, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3054, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->gameStartTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3055, ASSERT_TYPE_ASSERT, "(party->gameStartTime > 0)", (const char *)&queryFormat, "party->gameStartTime > 0") )
    __debugbreak();
  if ( (party->lobbyFlags & 0x64) == 4 )
  {
    if ( Party_IsPrivateOrSystemlinkGame(party) )
    {
      Com_Printf(15, "[%s] Gamestate changing due to lobbyState changing to STARTREADY\n", party->partyName);
      party->lobbyFlags = party->lobbyFlags & 0xFFFFFF9B | 0x20;
      if ( Party_IsMatchmakingLobby(party) )
        OnlineMatchmakerOmniscient::GameLobbyInFinalCountdown(&OnlineMatchmakerOmniscient::ms_instance);
      PartyHost_GamestateChanged(party);
    }
    else
    {
      v4 = DVARINT_party_teamCount;
      if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.integer < 2 || Party_UsingPartyBasedTeams(party) )
      {
        v5 = 0;
        if ( Party_UsingReadyUpFeature() )
        {
          if ( !Party_GetPartyReadyUpStatus() )
            return;
          v6 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_pt_AliensReadyUpPublicStartTimerLength, "pt_AliensReadyUpPublicStartTimerLength");
          party->gameStartTime = v6 + Sys_Milliseconds();
          PartyHost_GamestateChanged(party);
        }
      }
      else
      {
        v5 = 1;
      }
      if ( !party->voting.votePassed )
      {
        Com_PrintError(15, "[%s] Pre match started and Vote hasn't passed. Please make sure that party_minLobbyTime is greater than party_minVoteTime.\n", party->partyName);
        PartyHost_CalculateFinalVote(party, localControllerIndex);
        PartyHost_GamestateChanged(party);
      }
      if ( v5 )
      {
        PartyHost_StartTeamMatch(party, localControllerIndex);
      }
      else
      {
        party->lobbyFlags &= 0xFFFFFFBB;
        party->lobbyFlags |= 0x20u;
        if ( Party_IsMatchmakingLobby(party) )
          OnlineMatchmakerOmniscient::GameLobbyInFinalCountdown(&OnlineMatchmakerOmniscient::ms_instance);
      }
    }
  }
}

/*
==============
PartyHost_ReadyTeams
==============
*/
__int64 PartyHost_ReadyTeams(const PartyData *party, const int localControllerIndex, const int presentMemberCount)
{
  const dvar_t *v5; 
  char v6; 
  const dvar_t *v7; 
  char v8; 
  const dvar_t *v9; 
  char v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  unsigned int CanPartitionIntoTeams; 
  int v14; 
  int v15; 
  const dvar_t *v16; 
  int Int_Internal_DebugName; 
  int v18; 
  int v19; 

  if ( Party_IsPrivateOrSystemlinkGame(party) )
    goto LABEL_7;
  v5 = DVARBOOL_online_matchmaking_ignore_team_differential;
  if ( !DVARBOOL_online_matchmaking_ignore_team_differential && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_ignore_team_differential") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
LABEL_7:
    v6 = 0;
  else
    v6 = 1;
  if ( Party_IsPrivateOrSystemlinkGame(party) )
    goto LABEL_14;
  v7 = DVARBOOL_online_matchmaking_use_extended_team_differential;
  if ( !DVARBOOL_online_matchmaking_use_extended_team_differential && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_use_extended_team_differential") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( !v7->current.enabled )
LABEL_14:
    v8 = 0;
  else
    v8 = 1;
  if ( Party_IsPrivateOrSystemlinkGame(party) )
    goto LABEL_22;
  v9 = DVARBOOL_online_matchmaking_ignore_partition_value;
  if ( !DVARBOOL_online_matchmaking_ignore_partition_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_ignore_partition_value") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled || OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) )
    v10 = 1;
  else
LABEL_22:
    v10 = 0;
  if ( Party_IsServerRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2827, ASSERT_TYPE_ASSERT, "(!Party_IsServerRunning( party ))", (const char *)&queryFormat, "!Party_IsServerRunning( party )") )
    __debugbreak();
  if ( PartyHost_ShouldStartHosting() )
    return 1;
  v11 = DVARINT_party_minplayers;
  if ( !DVARINT_party_minplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( presentMemberCount < v11->current.integer )
    return 0;
  v12 = DVARINT_party_teamCount;
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.integer )
    return 1;
  if ( Party_UsingPartyBasedTeams(party) )
    return Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_ALL) > 0 && Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_ALL) > 0;
  if ( (party->lobbyFlags & 0x64) == 32 )
  {
    v14 = Party_CountTeamMembers(party, 2, PARTY_MEMBER_TYPE_ALL);
    v15 = abs32(Party_CountTeamMembers(party, 1, PARTY_MEMBER_TYPE_ALL) - v14);
    CanPartitionIntoTeams = v15 <= Dvar_GetInt_Internal_DebugName(DVARINT_party_maxTeamDiff, "party_maxTeamDiff");
    if ( !v8 )
    {
      if ( !v6 )
        return CanPartitionIntoTeams;
      return 1;
    }
    if ( (_BYTE)CanPartitionIntoTeams )
      return 1;
    ++s_ignoreDifferentialTimesAttempted;
    v16 = DVARINT_online_matchmaking_max_retries_exceeding_team_differential;
    if ( !DVARINT_online_matchmaking_max_retries_exceeding_team_differential && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_max_retries_exceeding_team_differential") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( s_ignoreDifferentialTimesAttempted >= v16->current.integer )
      return 1;
  }
  else
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_party_maxplayers, "party_maxplayers");
    if ( Dvar_GetInt_Internal_DebugName(DVARINT_party_teamCount, "party_teamCount") <= 0 )
      v18 = 1;
    else
      v18 = Dvar_GetInt_Internal_DebugName(DVARINT_party_teamCount, "party_teamCount");
    v19 = Dvar_GetInt_Internal_DebugName(DVARINT_party_maxTeamDiff, "party_maxTeamDiff");
    CanPartitionIntoTeams = TeamBalance_CanPartitionIntoTeams(party->subparties, party->subpartyCount, v19, v18, Int_Internal_DebugName / v18);
    if ( v10 )
      return 1;
  }
  return CanPartitionIntoTeams;
}

/*
==============
PartyHost_ReceivedPartystateAck
==============
*/
void PartyHost_ReceivedPartystateAck(PartyData *party, const unsigned int partyClientNum, const netadr_t *from, int ackTime, const int piggybackedPartystateAck)
{
  __int64 v5; 
  char *v9; 
  const dvar_t *v10; 
  int v11; 
  int v12; 
  XUID *Xuid; 
  const char *v14; 
  const char *MemberName; 
  const dvar_t *v16; 
  int partyStateChangeTime; 
  int v18; 
  __int128 v19; 
  const dvar_t *v20; 
  const char *Gametype; 
  const char *MapName; 
  int v23; 
  __int64 v24; 
  netadr_t v25; 
  XUID result; 

  v5 = partyClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6988, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v24) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6989, ASSERT_TYPE_ASSERT, "(unsigned)( partyClientNum ) < (unsigned)( 200 )", "partyClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v24, 200) )
      __debugbreak();
  }
  v9 = (char *)party + 504 * v5;
  *((_DWORD *)v9 + 616) = Sys_Milliseconds();
  v10 = DVARBOOL_online_party_print_ping;
  if ( !DVARBOOL_online_party_print_ping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_print_ping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled )
  {
    v11 = *((_DWORD *)v9 + 618);
    if ( *((_DWORD *)v9 + 617) > v11 )
      v11 = *((_DWORD *)v9 + 617);
    v12 = *((_DWORD *)v9 + 616) - v11;
    Xuid = Party_GetXuid(&result, party, v5);
    v14 = XUID::ToDevString(Xuid);
    MemberName = Party_GetMemberName(party, v5);
    LODWORD(v24) = v12;
    Com_Printf(25, "[%s] Party state ping %s %s %ums\n", party->partyName, MemberName, v14, v24);
  }
  v16 = DVARBOOL_systemlink_host;
  if ( !DVARBOOL_systemlink_host && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink_host") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled || !Party_IsPrivateParty(party) || Party_IsRunning(party) || v9[2603] == 6 )
  {
    partyStateChangeTime = party->specificData.hostData.partyStateChangeTime;
    v18 = piggybackedPartystateAck;
    if ( ackTime == partyStateChangeTime || !piggybackedPartystateAck )
    {
      v19 = *(_OWORD *)&from->type;
      v25.addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v25.type = v19;
      PartyHost_CommittedMemberPresent(party, v5, &v25);
    }
    *((_DWORD *)v9 + 619) = ackTime;
    if ( !v18 )
    {
      v20 = DVARBOOL_xblive_privatematch;
      if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled )
        PartyHost_HandleMatchRulesAckFromMember(party, v5, ackTime);
    }
    if ( ackTime == partyStateChangeTime )
    {
      if ( Party_IsServerRunning(party) && !party->disableGo && (Party_IsGameLobby(party) || Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink_host, "systemlink_host")) && !Live_XUIDIsLocalPlayer(*(const XUID *)(v9 + 2608)) && Party_AreWeServer(party) )
      {
        if ( !Party_IsMemberPresent((const PartyMember *)(v9 + 2192)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7026, ASSERT_TYPE_ASSERT, "(Party_IsMemberPresent( &party->partyMembers[partyClientNum] ))", (const char *)&queryFormat, "Party_IsMemberPresent( &party->partyMembers[partyClientNum] )") )
          __debugbreak();
        Com_Printf(25, "[%s] PartyHost - ReceivedPartystateAck - Sending GO message to client %i since the server is running.\n", party->partyName, (unsigned int)v5);
        Gametype = Party_GetGametype();
        MapName = Party_GetMapName();
        PartyHost_SendGo(party, v5, MapName, Gametype, 2000);
      }
    }
    else if ( !Live_XUIDIsLocalPlayer(*(const XUID *)(v9 + 2608)) )
    {
      if ( Live_XUIDIsLocalPlayer(*(const XUID *)(v9 + 2608)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 7036, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( party->partyMembers[partyClientNum].playerUID ))", (const char *)&queryFormat, "!Live_XUIDIsLocalPlayer( party->partyMembers[partyClientNum].playerUID )") )
        __debugbreak();
      v23 = Sys_Milliseconds();
      s_partyStateLoggingData.cause = 2;
      PartyHost_SendPartyStateToPlayer(party, v5, v23);
    }
  }
}

/*
==============
PartyHost_ReceivedUpdatedMemberInfo
==============
*/
void PartyHost_ReceivedUpdatedMemberInfo(PartyData *party, const int localControllerIndex, const unsigned int partyClientNum, const netadr_t *from, ClientAuthoritativeMemberInfo *newMemberInfo)
{
  __int64 v5; 
  __int128 v9; 
  netadr_t v10; 

  v5 = partyClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8189, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !newMemberInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 8190, ASSERT_TYPE_ASSERT, "(newMemberInfo)", (const char *)&queryFormat, "newMemberInfo") )
    __debugbreak();
  if ( Party_IsMemberIndexAway(party, v5) )
  {
    v9 = *(_OWORD *)&from->type;
    v10.addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v10.type = v9;
    PartyHost_ReviveLostPartyMember(party, v5, &v10);
  }
  party->partyMembers[v5].lastPacketTime = Sys_Milliseconds();
  if ( memcmp_0(newMemberInfo, &party->partyMembers[v5], 0xB8ui64) )
  {
    party->partyMembers[v5].info = *newMemberInfo;
    Party_CheckUpdatedPartyMemberPartyId(party, localControllerIndex, v5);
    PartyHost_MemberInfoChanged(party, v5, 2);
    PlayercardCache_MarkPartyDirty(localControllerIndex, 1);
  }
}

/*
==============
PartyHost_RegisterDvars
==============
*/
void PartyHost_RegisterDvars(void)
{
  DVARINT_party_search_debug_delay_ms = Dvar_RegisterInt("OKTPMKQTPP", 100000, 1000, 0x7FFFFFFF, 0, "party ddebug state TTY output frequency");
  DVARBOOL_log_party_state = Dvar_RegisterBool("LMMSKKTKMS", 1, 0, "Log party state updates to Black Box system");
  DVARBOOL_party_testclients_in_private_party = Dvar_RegisterBool("LNTTTLKMKR", 0, 0, "Whether added party test clients will appear as a member of the party host's private party");
  DVARBOOL_party_check_mm_on_member_join = Dvar_RegisterBool("NLOKRPSPSP", 1, 0, "Whether to check the matchmaker for acceptance on member join");
  DVARBOOL_party_check_mm_on_splitscreen_member_join = Dvar_RegisterBool("NLPRNRQPTM", 1, 0, "Whether to check the matchmaker for acceptance on splitscreen member join");
}

/*
==============
PartyHost_RemoveLobbyPlayerFromPrivateParty
==============
*/
void PartyHost_RemoveLobbyPlayerFromPrivateParty(PartyData *party, const int localControllerIndex, const int memberIndex, const int tellThem)
{
  __int64 v5; 
  __int64 v8; 
  const char *v9; 
  __int64 v10; 
  XUID removedPlayerXuid; 

  v5 = memberIndex;
  XUID::XUID(&removedPlayerXuid);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1748, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1749, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, 200) )
      __debugbreak();
  }
  if ( Party_IsGameLobby(party) && g_partyData.inParty )
  {
    if ( Party_IsRunning(&g_partyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1757, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", "%s\n\tShouldn't be deriving party member status while the party is active", "!Party_IsRunning( &g_partyData )") )
      __debugbreak();
    v8 = v5;
    XUID::operator=(&removedPlayerXuid, &party->partyMembers[v8].playerUID);
    if ( !XUID::IsNull(&removedPlayerXuid) )
    {
      if ( !party->partyMembers[v8].status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1763, ASSERT_TYPE_ASSERT, "(party->partyMembers[memberIndex].status != PARTYSTATUS_EMPTY)", (const char *)&queryFormat, "party->partyMembers[memberIndex].status != PARTYSTATUS_EMPTY") )
        __debugbreak();
      if ( party->partyMembers[v8].status == 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1764, ASSERT_TYPE_ASSERT, "(party->partyMembers[memberIndex].status != PARTYSTATUS_ANONYMOUS)", (const char *)&queryFormat, "party->partyMembers[memberIndex].status != PARTYSTATUS_ANONYMOUS") )
        __debugbreak();
      if ( g_partyData.backingOut )
      {
        if ( g_partyData.stopAfterRound )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1768, ASSERT_TYPE_ASSERT, "(!g_partyData.stopAfterRound)", "%s\n\tShouldn't be stopping the party if we back out", "!g_partyData.stopAfterRound") )
            __debugbreak();
        }
        Com_Printf(14, "[%s] PartyHost - RemovePlayer - We're hosting a lobby and someone disconnected, but since we've been asked to backout we won't touch the party.\n", party->partyName);
      }
      else
      {
        v9 = XUID::ToDevString(&removedPlayerXuid);
        Com_Printf(14, "[%s] PartyHost - RemovePlayer - Since we're hosting a lobby and someone disconnected, we're also going to remove them from our party if we find them there (%s).\n", party->partyName, v9);
        Party_LostPrivatePartyPlayer(localControllerIndex, removedPlayerXuid, 0, tellThem);
      }
    }
  }
}

/*
==============
PartyHost_RemovePlayer
==============
*/
void PartyHost_RemovePlayer(PartyData *party, const int memberIndex, const int tellThem, const char *reason)
{
  PartyHost_RemovePlayer(party, memberIndex, tellThem, reason, NET_CLOSE_SOFT);
}

/*
==============
PartyHost_RemovePlayer
==============
*/
void PartyHost_RemovePlayer(PartyData *party, const int memberIndex, const int tellThem, const char *reason, const NetCloseStyle closeStyle)
{
  const char *v5; 
  unsigned __int64 v6; 
  int StartingControllerIndex; 
  char *v10; 
  bool IsValid; 
  XUID *v12; 
  const char *v13; 
  const char *v14; 
  const char *String; 
  NetConnection *MemberConnection; 
  NetConnection *v17; 
  const char *v18; 
  Online_InvitationManager *Instance; 
  int NumGameSlots; 
  __int64 m_id; 
  int v22; 
  int v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int *v26; 
  __int64 v27; 
  __int64 v28; 
  int PortForLocalXUID; 
  const dvar_t *v30; 
  const char *v31; 
  __int64 v32; 
  signed __int64 v33; 
  char v34; 
  __int64 v35; 
  char v36; 
  int v37; 
  XUID *v38; 
  PartyClientTaskId v39; 
  char *fmt; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  char v46; 
  unsigned __int8 MemberPlatform; 
  XUID result; 
  XUID v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  msg_t buf; 
  char dest[32]; 
  unsigned __int8 data[64]; 

  v49.m_id = (unsigned __int64)reason;
  v5 = reason;
  v6 = (unsigned int)memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1906, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1907, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1908, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0xC8 )
  {
    LODWORD(v41) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1909, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v41, 200) )
      __debugbreak();
  }
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1911, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  v46 = 0;
  StartingControllerIndex = Party_GetStartingControllerIndex(party);
  v10 = (char *)party + 504 * (int)v6;
  IsValid = XUID::IsValid((XUID *)v10 + 326);
  v12 = (XUID *)(v10 + 2608);
  if ( !IsValid )
    v12 = (XUID *)(v10 + 2424);
  v13 = XUID::ToDevString(v12);
  Core_strcpy(dest, 0x20ui64, v13);
  v14 = s_partyStatusStrings[(unsigned __int8)v10[2602]];
  String = NetConnection::GetString((NetConnection *)v10 + 76);
  LODWORD(fmt) = v6;
  Com_Printf(131087, "[%s] Removing player '%s' (idx %u, xuid %s) at %s: reason %s, status %s\n", party->partyName, v10 + 2244, fmt, dest, String, v5, v14);
  MemberPlatform = Party_GetMemberPlatform(party, v6);
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v6);
  NetConnection::DropReliable(MemberConnection);
  PartyHost_RemoveLobbyPlayerFromPrivateParty(party, StartingControllerIndex, v6, tellThem);
  if ( Party_IsMemberIndexDataAvailable(party, v6) )
  {
    if ( tellThem && NetConnection::IsOpened(MemberConnection) )
    {
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1725, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
        __debugbreak();
      v17 = (NetConnection *)Party_GetMemberConnection(party, v6);
      if ( NetConnection::IsLocal(v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1729, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", "%s\n\tShould never be removing a local player", "!connection.IsLocal()") )
        __debugbreak();
      MSG_Init(&buf, data, 64);
      v18 = j_va("%iendparty", (unsigned int)party->partyId);
      MSG_WriteString(&buf, v18);
      MSG_WriteBits(&buf, 1i64, 2u);
      MSG_WriteString(&buf, v5);
      NetConnection::SendReliable(v17, &buf, 6u);
    }
    Party_PlayPlayerLeaveSound(party, LOCAL_CLIENT_0);
    if ( party->partyId == PRIVATE_PARTY_ID )
    {
      Instance = Online_InvitationManager::GetInstance();
      Online_InvitationManager::OnReceiveMemberLeftParty(Instance, StartingControllerIndex, *(const XUID *)(v10 + 2608), v10 + 2244, party->partyId);
    }
    v46 = 1;
  }
  NumGameSlots = Party_GetNumGameSlots(party);
  m_id = NumGameSlots;
  if ( NumGameSlots > 200 )
  {
    LODWORD(v42) = NumGameSlots;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1964, ASSERT_TYPE_ASSERT, "( ( totalSlots <= 200 ) )", "( totalSlots ) = %i", v42) )
      __debugbreak();
  }
  bitarray_base<bitarray<32>>::resetBit((bitarray_base<bitarray<32> > *)&party->specificData.clientData + 36, v6);
  v22 = 0;
  result.m_id = m_id;
  v23 = 0;
  if ( m_id > 0 )
  {
    v24 = ~(0x80000000 >> (v6 & 0x1F));
    v25 = 4 * (v6 >> 5);
    v26 = &party->partyMembers[0].connectivityAckedMembers.array[(unsigned __int64)v25 / 4];
    v50 = -184 - v25;
    v27 = -188 - v25;
    v51 = -284 - v25;
    v52 = -152 - v25;
    v53 = 84 - v25;
    do
    {
      if ( (unsigned int)v6 >= 0x100 )
      {
        LODWORD(v45) = 256;
        LODWORD(v44) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v44, v45) )
          __debugbreak();
      }
      *(v26 - 8) &= v24;
      if ( (unsigned int)v6 >= 0x100 )
      {
        LODWORD(v45) = 256;
        LODWORD(v44) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v44, v45) )
          __debugbreak();
      }
      *v26 &= v24;
      if ( (unsigned int)v6 >= 0x100 )
      {
        LODWORD(v45) = 256;
        LODWORD(v44) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v44, v45) )
          __debugbreak();
      }
      v26[8] &= v24;
      if ( *(unsigned int *)((char *)v26 + v27) && *(unsigned int *)((char *)v26 + v50) == (_DWORD)v6 )
      {
        v28 = v51;
        *(unsigned int *)((char *)v26 + v50) = 63;
        *(unsigned int *)((char *)v26 + v27) = 0;
        *(unsigned int *)((char *)v26 + v28) = 201;
        *((_BYTE *)v26 + v52) = 1;
        if ( Party_IsHost(party, v23) )
        {
          PortForLocalXUID = Live_GetPortForLocalXUID(*(const XUID *)((char *)v26 + v53));
          Party_ClearLocalMLGFollower(party, PortForLocalXUID);
          Party_SetDesiredTeamSelection(party, PortForLocalXUID, 201);
          m_id = result.m_id;
        }
        PartyHost_MemberInfoChanged(party, v23, 2);
      }
      ++v23;
      v26 += 126;
      result.m_id = --m_id;
    }
    while ( m_id );
    v5 = (const char *)v49.m_id;
  }
  v30 = DVARBOOL_party_unregister_matchmaker_player_on_clear;
  if ( !DVARBOOL_party_unregister_matchmaker_player_on_clear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_unregister_matchmaker_player_on_clear") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( !v30->current.enabled )
  {
    v31 = "rejoin";
    v32 = 0x7FFFFFFFi64;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v33 = v5 - "rejoin";
    do
    {
      v34 = v31[v33];
      v35 = v32;
      v36 = *v31;
      --v32;
      ++v31;
      if ( !v35 )
        break;
      if ( v34 != v36 )
      {
        Party_UnregisterPlayerFromMatchmaker(party, v6);
        break;
      }
    }
    while ( v34 );
  }
  Party_ClearMember(party, v6, closeStyle);
  if ( v46 )
    PartyHost_UpdateIfPartyIsCrossplayPartyAndSetPartyDirtyIfChanged(party);
  if ( (unsigned int)v6 >= 0xC8 )
  {
    LODWORD(v43) = 200;
    LODWORD(v42) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1188, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  if ( PeerMesh_IsEnabled(party) )
  {
    v37 = Party_GetNumGameSlots(party);
    if ( v37 > 0 )
    {
      do
      {
        if ( v22 != (_DWORD)v6 && Party_IsMemberRegistered(party, v22) && !Party_IsMemberHost(party, v22) )
        {
          if ( Party_MemberHasLoopbackAddr(party, v22) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1209, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, memberIndex ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, memberIndex )") )
            __debugbreak();
          if ( PeerMesh_RemoveClientConnectivity(party, v22, 1 << v6) )
            PartyHost_MemberInfoChanged(party, v22, 1);
        }
        ++v22;
      }
      while ( v22 < v37 );
    }
  }
  if ( (unsigned __int8)(MemberPlatform - 3) <= 1u )
  {
    if ( !Party_AnyMemberOnPlatform(party, (const ClientPlatform)MemberPlatform) || (Party_GetPlatformSessionHostXUID(&result, party, (ClientPlatform)MemberPlatform), !XUID::IsValid(&result)) || Party_FindMemberByXUID(party, result) < 0 && (v38 = PartyClientTaskService::ResetHostForPlatform(&party->clientTaskService, &v49, party, (const ClientPlatform)MemberPlatform), XUID::IsNull(v38)) )
    {
      if ( MemberPlatform == 4 )
      {
        Party_SetPS4SessionId(party, NULL);
        v39 = PARTY_CLIENT_TASK_CREATE_SESSION_PS4;
LABEL_90:
        PartyClientTaskService::ResetTask(&party->clientTaskService, party, v39);
        goto LABEL_91;
      }
      if ( MemberPlatform == 3 )
      {
        Party_ClearXb3SessionId(party);
        v39 = PARTY_CLIENT_TASK_CREATE_SESSION_XB3;
        goto LABEL_90;
      }
    }
  }
LABEL_91:
  PartyHost_MemberInfoChanged(party, v6, 3);
}

/*
==============
PartyHost_RemovePlayerAsync
==============
*/
void PartyHost_RemovePlayerAsync(PartyData *party, const int memberIndex, const int tellThem, const char *reason, const NetCloseStyle closeStyle, PartyRequestHandle *handle)
{
  __int64 v8; 
  __int64 v10; 
  int v11; 
  int data; 
  bool v13; 
  const char *v14; 
  NetCloseStyle v15; 

  v8 = memberIndex;
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1781, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0xC8 )
  {
    v11 = 200;
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1782, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v15 = closeStyle;
  v13 = tellThem != 0;
  data = v8;
  v14 = reason;
  party->partyMembers[v8].status = 1;
  PartyRequestBuffer::AddRequest(&party->requestBuffer, PARTY_REQUEST_MEMBER_REMOVE, &data, 24, handle);
}

/*
==============
PartyHost_RemoveTestClient
==============
*/
void PartyHost_RemoveTestClient(PartyData *party, int slot)
{
  __int64 v2; 
  __int64 v4; 

  v2 = slot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3939, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3940, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3941, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  if ( party->partyMembers[v2].status != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3944, ASSERT_TYPE_ASSERT, "(member->status == PARTYSTATUS_TESTCLIENT)", (const char *)&queryFormat, "member->status == PARTYSTATUS_TESTCLIENT") )
    __debugbreak();
  PartyHost_RemovePlayer(party, v2, 0, (const char *)&queryFormat.fmt + 3, NET_CLOSE_SOFT);
}

/*
==============
PartyHost_RequestStartMatch
==============
*/
void PartyHost_RequestStartMatch(PartyData *party, bool skipStartCountdown)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3367, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsRunning(party) )
  {
    if ( Party_InParty(party) )
    {
      if ( Party_AreWeHost(party) )
      {
        if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
        {
          Com_Printf(25, "[%s] RequestStartMatch succeeded\n", party->partyName);
          if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3394, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
            __debugbreak();
          party->gameStartRequested = 1;
          party->gameStartTime = 0;
          party->m_gameStartSkipCountdown = skipStartCountdown;
          PartyHost_SetWaitingState(party);
        }
        else
        {
          Com_PrintWarning(25, "[%s] RequestStartMatch failed: not a game lobby\n", party->partyName);
        }
      }
      else
      {
        Com_PrintWarning(25, "[%s] RequestStartMatch failed: we are not the host\n", party->partyName);
      }
    }
    else
    {
      Com_PrintWarning(25, "[%s] RequestStartMatch failed: we are not in a party\n", party->partyName);
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] RequestStartMatch failed: party system is currently inactive\n", party->partyName);
  }
}

/*
==============
PartyHost_ResetClientTimeouts
==============
*/
void PartyHost_ResetClientTimeouts(PartyData *party)
{
  int *p_lastPacketTime; 
  __int64 v2; 

  p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
  v2 = 200i64;
  do
  {
    if ( *((_BYTE *)p_lastPacketTime + 138) )
      *p_lastPacketTime = Sys_Milliseconds();
    p_lastPacketTime += 126;
    --v2;
  }
  while ( v2 );
}

/*
==============
PartyHost_ResetState
==============
*/
void PartyHost_ResetState(PartyData *party, const PartyActiveClient *mainActiveClient, bool isDueToMigration)
{
  int *p_lastPacketTime; 
  __int64 v7; 
  int *p_team; 
  unsigned int i; 
  int NumGameSlots; 
  const char *HostName; 
  __int64 v12; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9760, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9761, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9762, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9763, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  p_lastPacketTime = &party->partyMembers[0].lastPacketTime;
  v7 = 200i64;
  do
  {
    if ( *((_BYTE *)p_lastPacketTime + 138) )
      *p_lastPacketTime = Sys_Milliseconds();
    p_lastPacketTime += 126;
    --v7;
  }
  while ( v7 );
  PartyHost_MarkAllMembersDirty(party);
  PartyHost_SetPartyStateChangeTime(party);
  p_team = &party->partyMembers[0].team;
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( *((_BYTE *)p_team + 10) != 6 && Party_IsMemberIndexDataAvailable(party, i) )
    {
      *p_team = 0;
      *(p_team - 88) = 0;
    }
    p_team += 126;
  }
  party->currentHost.lastPacketSentTime = Sys_Milliseconds();
  party->currentHost.lastPacketTime = Sys_Milliseconds();
  if ( Party_IsGameLobby(party) )
  {
    if ( Party_IsLoadingServer(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9781, ASSERT_TYPE_ASSERT, "(!Party_IsLoadingServer( party ))", (const char *)&queryFormat, "!Party_IsLoadingServer( party )") )
      __debugbreak();
    PartyDebug_PrintTeams(party->subparties, party->subpartyCount);
  }
  party->disableGo = 0;
  party->backingOut = 0;
  if ( Party_IsTheActiveParty(party) )
  {
    NumGameSlots = Party_GetNumGameSlots(party);
    Dvar_SetInt_Internal(DVARINT_party_maxplayers, NumGameSlots);
    HostName = Party_GetHostName(party);
    Dvar_SetString_Internal(DVARSTR_party_hostname, HostName);
    Party_SetUIPlayerCount(party);
    if ( !BG_Bots_IsBotMatchMakingAllowedForPlaylist() || !isDueToMigration && Party_IsGameLobby(party) && BG_GameStateInfo_BotsCountTowardsGameLaunch() )
      BG_GameStateInfo_DisableGameLaunchWithBots();
    if ( Party_IsRunning(party) )
    {
      Com_Printf(15, "[%s] Gamestate changing due to a call to ResetState\n", party->partyName);
      PartyHost_GamestateChanged(party);
      if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
      {
        party->lobbyFlags &= 0xFFFFFF9F;
        party->lobbyFlags |= 4u;
      }
      else if ( !Party_IsPrivateParty(party) )
      {
        LODWORD(v12) = party->partyId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9826, ASSERT_TYPE_ASSERT, "( ( Party_IsPrivateParty( party ) ) )", "( party->partyId ) = %i", v12) )
          goto LABEL_30;
      }
    }
  }
  else if ( Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9792, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( party ))", (const char *)&queryFormat, "!Party_IsRunning( party )") )
  {
LABEL_30:
    __debugbreak();
  }
}

/*
==============
PartyHost_ReviveLostPartyMember
==============
*/
void PartyHost_ReviveLostPartyMember(PartyData *party, const unsigned int memberIndex, const netadr_t *from)
{
  __int64 v4; 
  __int64 v5; 
  int status; 
  const char *MemberName; 
  bool IsPrivateParty; 
  const char *v9; 
  int StartingControllerIndex; 
  __int64 v11; 
  char addr[24]; 

  v4 = memberIndex;
  *(netadr_t *)addr = *from;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6712, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party", *(_QWORD *)addr, *(_QWORD *)&addr[8], *(_QWORD *)&addr[16]) )
    __debugbreak();
  v5 = v4;
  status = party->partyMembers[v4].status;
  MemberName = Party_GetMemberName(party, v4);
  IsPrivateParty = Party_IsPrivateParty(party);
  LODWORD(v11) = status;
  v9 = "Lobby";
  if ( IsPrivateParty )
    v9 = "Party";
  Com_Printf(25, "[%s] PartyHost - %s member %s came back from state %i\n", party->partyName, v9, MemberName, v11);
  StartingControllerIndex = Party_GetStartingControllerIndex(party);
  PartyHost_UpdatePlayerStatus(party, StartingControllerIndex, v4, 4);
  NetConnection::operator=(&party->partyMembers[v5].connection, (const netadr_t *)addr);
  if ( !NetConnection::IsOpened(&party->partyMembers[v5].connection) )
    PartyHost_RemovePlayer(party, v4, 0, "reviveFailed", NET_CLOSE_DTLS);
}

/*
==============
PartyHost_RollDiceForSurveyAndStoreResultInParty
==============
*/
void PartyHost_RollDiceForSurveyAndStoreResultInParty(PartyData *party)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  float value; 

  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5534, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5535, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v2 = DVARBOOL_post_game_survey_forced;
  if ( !DVARBOOL_post_game_survey_forced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "post_game_survey_forced") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    goto LABEL_16;
  v3 = DVARFLT_post_game_survey_chance_percentage;
  if ( !DVARFLT_post_game_survey_chance_percentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "post_game_survey_chance_percentage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  if ( value > 0.0 && (float)((float)(rand() % 10000) * 0.0099999998) < value )
LABEL_16:
    party->chosenToShowSurvey = 1;
}

/*
==============
PartyHost_SanityCheck
==============
*/
void PartyHost_SanityCheck(const PartyData *party)
{
  const dvar_t *v2; 
  int v3; 
  int NumGameSlots; 
  __int64 v5; 
  unsigned __int8 *p_status; 
  const char *v7; 
  bool IsValid; 
  const char *v9; 
  __int64 v10; 

  if ( Party_IsGameLobby(party) )
  {
    v2 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( !v2->current.enabled && Playlist_CountEntries(selectedPlaylist) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9424, ASSERT_TYPE_ASSERT, "(Playlist_CountEntries( selectedPlaylist ) > 0)", (const char *)&queryFormat, "Playlist_CountEntries( selectedPlaylist ) > 0") )
      __debugbreak();
  }
  v3 = 0;
  NumGameSlots = Party_GetNumGameSlots(party);
  v5 = NumGameSlots;
  if ( NumGameSlots > 0 )
  {
    p_status = &party->partyMembers[0].status;
    do
    {
      if ( *p_status >= 5u && *p_status != 6 && Party_FindMemberByXUID(party, party->partyMembers[v3].playerUID) != v3 )
      {
        v7 = XUID::ToDevString(&party->partyMembers[v3].playerUID);
        IsValid = Session_IsValid(party->session);
        v9 = "no";
        LODWORD(v10) = v3;
        if ( IsValid )
          v9 = "yes";
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9438, ASSERT_TYPE_ASSERT, "(Party_FindMemberByXUID( party, party->partyMembers[clientNum].playerUID ) == clientNum)", "%s\n\tsession is %s, sessionIsValid %s, xuid %s, clientNum %i", "Party_FindMemberByXUID( party, party->partyMembers[clientNum].playerUID ) == clientNum", party->partyName, v9, v7, v10) )
          __debugbreak();
      }
      ++v3;
      p_status += 504;
      --v5;
    }
    while ( v5 );
  }
}

/*
==============
PartyHost_SendGo
==============
*/
void PartyHost_SendGo(PartyData *party, int partyMemberSlot, const char *mapname, const char *gametype, const int minSendDelay)
{
  __int64 v5; 
  NetConnection *MemberConnection; 
  int v9; 
  int v10; 
  __int64 v11; 
  int lastPartyGoTime; 
  const char *v13; 
  const char *MatchIdString; 
  const char *MemberName; 
  const dvar_t *v16; 
  int v17; 
  unsigned int PlaylistEntry; 
  const char *v19; 
  char *fmt; 
  char *fmta; 
  __int64 v22; 

  v5 = partyMemberSlot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2709, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2710, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  if ( !Party_IsMemberPresent(party, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2711, ASSERT_TYPE_ASSERT, "(Party_IsMemberPresent( party, partyMemberSlot ))", (const char *)&queryFormat, "Party_IsMemberPresent( party, partyMemberSlot )") )
    __debugbreak();
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v5);
  if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2714, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
    __debugbreak();
  v9 = Sys_Milliseconds();
  v10 = v9;
  v11 = v5;
  if ( minSendDelay <= 0 || (lastPartyGoTime = party->partyMembers[v11].lastPartyGoTime, lastPartyGoTime <= 0) || minSendDelay + lastPartyGoTime - v9 <= 0 )
  {
    MatchIdString = OnlineMatchId::GetMatchIdString();
    MemberName = Party_GetMemberName(party, v5);
    LODWORD(fmt) = v10;
    Com_Printf(25, "[%s] Telling %s to launch into the game at time %i - matchid = %s\n", party->partyName, MemberName, fmt, MatchIdString);
    party->partyMembers[v11].lastPartyGoTime = v10;
    v16 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = v16->current.color[0];
    PlaylistEntry = Party_GetPlaylistEntry(party);
    LODWORD(fmta) = v17;
    v19 = j_va("%igo %i %i %i %s %s %s", (unsigned int)party->partyId, (unsigned int)selectedPlaylist, PlaylistEntry, fmta, mapname, gametype, MatchIdString);
    NetConnection::SendReliable(MemberConnection, v19, 2u);
  }
  else
  {
    v13 = Party_GetMemberName(party, v5);
    LODWORD(v22) = lastPartyGoTime;
    LODWORD(fmt) = v10;
    Com_Printf(25, "[%s] Not telling %s to launch into the game at time %i. Already sent at %i which is less than %i ms ago.\n", party->partyName, v13, fmt, v22, minSendDelay);
  }
}

/*
==============
PartyHost_SendHeartbeats
==============
*/
void PartyHost_SendHeartbeats(PartyData *party, const int controllerIndex)
{
  int v3; 
  int v4; 
  const dvar_t *v5; 
  int ClientNum; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  const char *v10; 
  int v11; 
  unsigned __int8 status; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  msg_t buf; 
  PartyProfile_Event outEventInfo; 
  unsigned __int8 data[16]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5337, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5338, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5339, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v3 = 0;
  v4 = Sys_Milliseconds();
  while ( 1 )
  {
    v5 = DVARINT_pt_htbtmaxperframe;
    if ( !DVARINT_pt_htbtmaxperframe && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_htbtmaxperframe") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v3 >= v5->current.integer )
      break;
    ClientNum = RotatingClientNums::NextClientNum(&party->specificData.hostData.m_partyStateClientNums);
    v7 = ClientNum;
    v8 = (unsigned int)ClientNum;
    if ( party->partyMembers[v7].status == 6 || Party_IsHost(party, ClientNum) || !Party_IsMemberIndexDataAvailable(party, v8) )
      goto LABEL_39;
    if ( Party_IsMemberRegistered(party, v8) )
    {
      if ( Party_MemberHasLoopbackAddr(party, v8) )
        goto LABEL_39;
      if ( Party_MemberHasLoopbackAddr(party, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5375, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, clientNum ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, clientNum )") )
        __debugbreak();
      if ( Party_IsMemberPresent(party, v8) && party->partyMembers[v7].lastPartyStateAck != party->specificData.hostData.partyStateChangeTime )
      {
        s_partyStateLoggingData.cause = 0;
        v9 = PartyHost_SendPartyStateToPlayer(party, v8, v4);
LABEL_35:
        if ( !v9 )
        {
          Com_PrintWarning(25, "[%s] PartyHost - SendHeartbeats - Failed to send to client %i..\n", party->partyName, (unsigned int)v8);
          PartyHost_RemovePlayer(party, v8, 1, "sendFailed", NET_CLOSE_SOFT);
          status = party->partyMembers[v7].status;
          if ( status )
          {
            LODWORD(v15) = status;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5392, ASSERT_TYPE_ASSERT, "( partyMember->status ) == ( PARTYSTATUS_EMPTY )", "%s == %s\n\t%i, %i", "partyMember->status", "PARTYSTATUS_EMPTY", v15, 0i64) )
              __debugbreak();
          }
        }
        goto LABEL_39;
      }
      if ( (unsigned int)v8 >= 0xC8 )
      {
        LODWORD(v14) = 200;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5311, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( v4 - party->partyMembers[v8].lastHeartbeatTime >= 500 )
      {
        party->partyMembers[v8].lastHeartbeatTime = v4;
        MSG_Init(&buf, data, 16);
        v10 = j_va("%iph", (unsigned int)party->partyId);
        MSG_WriteString(&buf, v10);
        if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5321, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
          __debugbreak();
        PartyProfile_StartEvent(HEARTBEAT, &outEventInfo);
        PartyProfile_AddBandwidthData(buf.cursize, &outEventInfo);
        v11 = Sys_Milliseconds();
        PartyProfile_RecordOutgoingEvent(&outEventInfo, v11, &party->profileState);
        v9 = PartyHost_SendMessageToClient(party, v8, &buf);
        goto LABEL_35;
      }
LABEL_39:
      ++v3;
    }
    else
    {
      Com_Printf(25, "[%s] PartyHost_SendHeartbeats - not sending to %d because they're not registered.\n", party->partyName, (unsigned int)v8);
      ++v3;
    }
  }
}

/*
==============
PartyHost_SendMessageToClient
==============
*/
__int64 PartyHost_SendMessageToClient(const PartyData *party, const unsigned int clientNum, const msg_t *msg)
{
  NetConnection *MemberConnection; 
  int v7; 
  unsigned __int8 *data; 
  const char *String; 
  const char *MemberName; 
  __int64 v12; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5044, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5045, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( clientNum >= 0xC8 )
  {
    LODWORD(v12) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5046, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, 200) )
      __debugbreak();
  }
  if ( !Party_IsMemberRegistered(party, clientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5047, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientNum )") )
    __debugbreak();
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, clientNum);
  if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5050, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", (const char *)&queryFormat, "!connection.IsLocal()") )
    __debugbreak();
  v7 = NetConnection::SendUnreliable(MemberConnection, msg->data, msg->cursize);
  if ( v7 < 0 )
  {
    data = msg->data;
    String = NetConnection::GetString(MemberConnection);
    MemberName = Party_GetMemberName(party, clientNum);
    Com_Printf(25, "[%s] PartyHost - SendMessageToClient - Got %d while trying to talk to party client %s at addr %s - message %s\n", party->partyName, (unsigned int)v7, MemberName, String, (const char *)data);
  }
  return 1i64;
}

/*
==============
PartyHost_SendPartyChatDataToPlayer
==============
*/
bool PartyHost_SendPartyChatDataToPlayer(const PartyData *party, const NetConnection *playerConnection, const int teamIndex)
{
  __int64 v3; 
  const char *v6; 
  __int64 v8; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  v3 = teamIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9943, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xCB )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9944, ASSERT_TYPE_ASSERT, "(unsigned)( teamIndex ) < (unsigned)( TEAM_MP_NUM_TEAMS )", "teamIndex doesn't index TEAM_MP_NUM_TEAMS\n\t%i not in [0, %i)", v8, 203) )
      __debugbreak();
  }
  MSG_Init(&buf, data, 64);
  v6 = j_va("%ipa_partychatdata", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v6);
  MSG_WriteByte(&buf, v3);
  MSG_WriteData(&buf, &party->partyChatData.chats[v3].chatId, 8);
  return NetConnection::SendReliable((NetConnection *)playerConnection, &buf);
}

/*
==============
PartyHost_SendPartyStateToPlayer
==============
*/
__int64 PartyHost_SendPartyStateToPlayer(PartyData *party, int clientNum, const int now)
{
  __int64 v4; 
  unsigned __int8 *m_ptr; 
  __int64 v7; 
  unsigned int v8; 
  unsigned int v9; 
  int partitionCount; 
  GameStateInfo *v11; 
  MatchRules *matchRules; 
  const MatchRulesSnapshotDelta *MatchRulesSnapshotDelta; 
  int cursize; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 
  const MatchRulesSnapshotDelta *v20; 
  int v21; 
  const dvar_t *v22; 
  const char *MemberName; 
  unsigned __int8 *v24; 
  int v25; 
  const dvar_t *v26; 
  double v27; 
  unsigned int v28; 
  unsigned __int8 v29; 
  int cause; 
  int v31; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  bool v44; 
  int v45; 
  int v46; 
  int v47; 
  msg_t buf; 
  PartyStateWriteRecord record; 
  __int64 v50; 
  unsigned __int8 *data; 
  msg_t compressedMsg; 
  __int64 v53; 
  Mem_LargeLocal v54; 
  Mem_LargeLocal v55; 
  PartyProfile_Event outEventInfo; 

  v53 = -2i64;
  v4 = clientNum;
  Mem_LargeLocal::Mem_LargeLocal(&v55, 0x243D8ui64, "msg_buf_t compressedMsgBuf");
  data = (unsigned __int8 *)v55.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v54, 0x243D8ui64, "msg_buf_t partyMsgBuf");
  m_ptr = (unsigned __int8 *)v54.m_ptr;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5149, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5150, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5151, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v37) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5153, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v37, 200) )
      __debugbreak();
  }
  v7 = 504 * v4;
  v50 = 504 * v4;
  if ( now - party->partyMembers[v4].lastPartyStateTime >= 500 )
  {
    *(int *)((char *)&party->partyMembers[0].lastPartyStateTime + v7) = now;
    if ( *(&party->partyMembers[0].status + v7) < 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5184, ASSERT_TYPE_ASSERT, "(partyMember->status >= PARTYSTATUS_COMMITTED)", (const char *)&queryFormat, "partyMember->status >= PARTYSTATUS_COMMITTED") )
      __debugbreak();
    MSG_Init(&buf, m_ptr, 148440);
    if ( buf.cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5194, ASSERT_TYPE_ASSERT, "(msg.cursize == 0)", (const char *)&queryFormat, "msg.cursize == 0") )
      __debugbreak();
    if ( buf.bit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5195, ASSERT_TYPE_ASSERT, "(msg.bit == 0)", (const char *)&queryFormat, "msg.bit == 0") )
      __debugbreak();
    v9 = 0;
    *(_QWORD *)&record.matchRulesDeltaFromSnapTime = 0i64;
    record.matchRulesDeltaFromSnapChecksum = 0;
    v8 = 1;
    record.totalPackets = 1;
    record.totalMembers = Party_CountAllMembersEvenIfInactive(party);
    record.matchRulesPacketsStart = 0;
    partitionCount = 0;
    if ( Party_IsPrivateMatchLobby(party) || Live_IsInSystemlinkLobby() )
    {
      v11 = GameStateInfo_Get();
      if ( v11->usingRecipe )
      {
        if ( !party->specificData.hostData.matchRulesChangeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5016, ASSERT_TYPE_ASSERT, "(!gInfo->usingRecipe || party->specificData.hostData.matchRulesChangeTime != 0)", "%s\n\t[PartyHost_BuildPartyStateWriteRecord] Failed to build record, matchRulesChangeTime was 0.", "!gInfo->usingRecipe || party->specificData.hostData.matchRulesChangeTime != 0") )
          __debugbreak();
        if ( v11->usingRecipe )
        {
          matchRules = v11->matchRules;
          record.matchRulesDeltaFromSnapChecksum = matchRules->checksum;
          if ( *(int *)((char *)&party->partyMembers[0].lastMatchRulesAck + v7) != party->specificData.hostData.matchRulesChangeTime )
          {
            if ( !matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5023, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
              __debugbreak();
            MatchRulesSnapshotDelta = PartyHost_GetMatchRulesSnapshotDelta(party, v4);
            partitionCount = MatchRulesSnapshotDelta->partitionCount;
            if ( !(_WORD)partitionCount )
              partitionCount = 0;
            record.matchRulesDeltaFromSnapTime = MatchRulesSnapshotDelta->fromSnapTime;
            if ( MatchRulesSnapshotDelta->toSnapTime != party->specificData.hostData.matchRulesChangeTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5033, ASSERT_TYPE_ASSERT, "(delta->toSnapTime == party->specificData.hostData.matchRulesChangeTime)", (const char *)&queryFormat, "delta->toSnapTime == party->specificData.hostData.matchRulesChangeTime") )
              __debugbreak();
          }
        }
      }
    }
    record.totalMatchRulesPackets = partitionCount;
    cursize = buf.cursize;
    PartyHost_WritePartyStateFullHeader(party, v4, &buf, &record);
    v47 = truncate_cast<short,int>(buf.cursize - cursize);
    v15 = buf.cursize;
    PartyHost_WritePartyStateMembers(party, v4, &buf, 0, &record);
    BG_GameStateInfo_WriteBotData(&buf);
    v45 = truncate_cast<short,int>(buf.cursize - v15);
    v16 = buf.cursize;
    v17 = buf.cursize;
    v46 = buf.cursize;
    v18 = 0;
    if ( partitionCount )
    {
      v19 = 0i64;
      do
      {
        if ( v18 >= 0 )
        {
          v20 = PartyHost_GetMatchRulesSnapshotDelta(party, v4);
          MSG_WriteData(&buf, v20->partition[v19].data, v20->partition[v19].len);
        }
        ++v18;
        ++v19;
      }
      while ( v18 < partitionCount );
      v16 = buf.cursize;
      v8 = 1;
      v7 = v50;
      v17 = v46;
    }
    if ( buf.overflowed )
    {
      LODWORD(v37) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5231, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Party state overflow for message size %d", v37) )
        __debugbreak();
      LODWORD(v38) = buf.cursize;
      LODWORD(fmta) = v4;
      Com_PrintError(131097, "[%s] Party state overflow for client %s (%d) - message size %d\n", party->partyName, &party->partyMembers[0].info.gamertag[v7], fmta, v38);
      v8 = 0;
    }
    else
    {
      v21 = truncate_cast<short,int>(v16 - v17);
      v22 = DVARBOOL_party_debug;
      if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v22);
      if ( v22->current.enabled )
      {
        MemberName = Party_GetMemberName(party, v4);
        LODWORD(fmt) = buf.cursize;
        Com_Printf(25, "[%s] PartyHost - Sending Single Buffer Partystate to %s: msg.cursize = %d\n", party->partyName, MemberName, fmt);
      }
      v24 = data;
      MSG_Init(&compressedMsg, data, 148440);
      v25 = Party_CompressMessage(party, 1, &buf, &compressedMsg);
      v44 = v25 != 0;
      if ( !v25 )
      {
        LODWORD(v37) = buf.cursize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5252, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to compress message of size %d", v37) )
          __debugbreak();
        LODWORD(v39) = buf.cursize;
        LODWORD(fmtb) = v4;
        Com_PrintError(131097, "[%s] Failed to compress party state for client %s (%d) - message size %d\n", party->partyName, &party->partyMembers[0].info.gamertag[v7], fmtb, v39);
        memset_0(v24, 0, 0x243D8ui64);
        MSG_Init(&compressedMsg, v24, 148440);
        Party_CompressMessage(party, 0, &buf, &compressedMsg);
      }
      if ( compressedMsg.overflowed )
      {
        LODWORD(v37) = compressedMsg.cursize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5265, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Compressed party state overflow for message size %d", v37) )
          __debugbreak();
        LODWORD(v40) = compressedMsg.cursize;
        LODWORD(fmtc) = v4;
        Com_PrintError(131097, "[%s] Compressed party state overflow for client %s (%d) - message size %d\n", party->partyName, &party->partyMembers[0].info.gamertag[v7], fmtc, v40);
        v8 = 0;
      }
      else
      {
        PartyHost_SendSinglePartyStateMessageToClient(party, v4, &compressedMsg);
        s_partyStateLoggingData.total_header += v47;
        s_partyStateLoggingData.total_party_state += v45;
        s_partyStateLoggingData.total_match_rules += v21;
        v26 = DVARBOOL_party_debug;
        if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( v26->current.enabled )
        {
          v27 = (float)((float)Sys_Milliseconds() * 0.001);
          v28 = Party_CountAllMembersEvenIfInactive(party);
          v29 = v28;
          if ( v28 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v28, "unsigned", v28) )
            __debugbreak();
          cause = s_partyStateLoggingData.cause;
          LOBYTE(v9) = Party_IsRunning(party) == 0;
          LODWORD(v43) = v21;
          LODWORD(v42) = v45;
          LODWORD(v41) = v47;
          LODWORD(v37) = v29;
          LODWORD(fmt) = cause;
          Com_Printf(25, "[%s] party state update: in_game %d, cause %d, party_size %d, party_header_size %d, party_state_size %d, match_rules_size %d, time %0.3f", party->partyName, v9, fmt, v37, v41, v42, v43, v27);
        }
        PartyProfile_StartEvent(STATE_UPDATE, &outEventInfo);
        PartyProfile_AddBandwidthData(compressedMsg.cursize, &outEventInfo);
        PartyProfile_AddCompressionData(buf.cursize, 1, v44, &outEventInfo);
        v31 = Sys_Milliseconds();
        PartyProfile_RecordOutgoingEvent(&outEventInfo, v31, &party->profileState);
      }
    }
  }
  else
  {
    v8 = 1;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v54);
  Mem_LargeLocal::~Mem_LargeLocal(&v55);
  return v8;
}

/*
==============
PartyHost_SendRMsgToPartyClients
==============
*/
void PartyHost_SendRMsgToPartyClients(const PartyData *party, msg_t *msg)
{
  int v4; 
  unsigned __int8 *p_status; 
  NetConnection *MemberConnection; 

  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2392, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v4 = 0;
  p_status = &party->partyMembers[0].status;
  do
  {
    if ( *p_status != 6 && *p_status >= 5u && !Party_IsHost(party, v4) && Party_IsMemberRegistered(party, v4) && !Party_MemberHasLoopbackAddr(party, v4) )
    {
      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v4);
      NetConnection::SendReliable(MemberConnection, msg);
    }
    ++v4;
    p_status += 504;
  }
  while ( v4 < 200 );
}

/*
==============
PartyHost_SendSinglePartyStateMessageToClient
==============
*/
__int64 PartyHost_SendSinglePartyStateMessageToClient(PartyData *party, const unsigned int clientNum, const msg_t *payload)
{
  __int64 cursize; 
  unsigned __int64 v7; 
  const dvar_t *v8; 
  int v9; 
  const char *MemberName; 
  int v11; 
  int v12; 
  int v13; 
  PartySpecificData *HostData; 
  __int64 result; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  msg_t msg; 
  unsigned __int8 buffer[1264]; 

  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5089, ASSERT_TYPE_ASSERT, "(payload)", (const char *)&queryFormat, "payload") )
    __debugbreak();
  if ( !payload->cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5090, ASSERT_TYPE_ASSERT, "(payload->cursize)", (const char *)&queryFormat, "payload->cursize") )
    __debugbreak();
  if ( party->partyId >= 0xAu )
  {
    LODWORD(v17) = party->partyId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5091, ASSERT_TYPE_ASSERT, "(unsigned)( party->partyId ) < (unsigned)( 10 )", "party->partyId doesn't index 10\n\t%i not in [0, %i)", v17, 10) )
      __debugbreak();
  }
  cursize = payload->cursize;
  v7 = (cursize + 1226) / 0x4CBui64;
  if ( (unsigned int)(v7 - 1) > 0x1E )
  {
    LODWORD(v18) = 1;
    LODWORD(v17) = (cursize + 1226) / 0x4CBui64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5096, ASSERT_TYPE_ASSERT, "( 1 ) <= ( packetsNeeded ) && ( packetsNeeded ) <= ( ( 31 ) )", "packetsNeeded not in [1, MAX_PARTYSTATE_PACKETS]\n\t%i not in [%i, %i]", v17, v18, 31) )
      __debugbreak();
  }
  v8 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v9 = payload->cursize;
    MemberName = Party_GetMemberName(party, clientNum);
    LODWORD(v17) = v9;
    LODWORD(fmt) = (cursize + 1226) / 0x4CBui64;
    Com_Printf(25, "[%s] sending party state to %s in %i packets %i bytes\n", party->partyName, MemberName, fmt, v17);
  }
  v11 = 0;
  v12 = 0;
  if ( (int)v7 <= 0 )
  {
LABEL_32:
    if ( v11 != (_DWORD)cursize )
    {
      LODWORD(v20) = cursize;
      LODWORD(v19) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5124, ASSERT_TYPE_ASSERT, "( payloadOffset ) == ( payloadSize )", "%s == %s\n\t%i, %i", "payloadOffset", "payloadSize", v19, v20) )
        __debugbreak();
    }
    HostData = PartyHost_GetHostData(party);
    if ( !HostData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5127, ASSERT_TYPE_ASSERT, "(hostData)", (const char *)&queryFormat, "hostData") )
      __debugbreak();
    result = 1i64;
    HostData->hostData.partyStateLastSendTime = HostData->hostData.partyStateChangeTime;
  }
  else
  {
    while ( 1 )
    {
      PartyHost_InitSingleBufferPartyStateHeader(party, v12, v7, &msg, buffer);
      if ( msg.cursize != 18 )
      {
        LODWORD(v20) = 1227;
        LODWORD(v19) = 1245 - msg.cursize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5107, ASSERT_TYPE_ASSERT, "( ( ( 1270 - 16 - 2 ) - 4 - 3 ) - subMsg.cursize ) == ( sizeofMaxPacketLen )", "%s == %s\n\t%i, %i", "MAX_PARTYSTATE_PACKET_LENGTH - subMsg.cursize", "sizeofMaxPacketLen", v19, v20) )
          __debugbreak();
      }
      if ( msg.readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 239, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
        __debugbreak();
      v13 = 1227;
      msg.bit = 8 * msg.cursize;
      if ( (int)cursize - v11 < 1227 )
        v13 = cursize - v11;
      MSG_WriteData(&msg, &payload->data[v11], v13);
      if ( msg.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5116, ASSERT_TYPE_ASSERT, "(!subMsg.overflowed)", (const char *)&queryFormat, "!subMsg.overflowed") )
        __debugbreak();
      if ( !(unsigned int)PartyHost_SendMessageToClient(party, clientNum, &msg) )
        return 0i64;
      v11 += v13;
      if ( ++v12 >= (int)v7 )
        goto LABEL_32;
    }
  }
  return result;
}

/*
==============
PartyHost_SetCrossplayEnabled
==============
*/
void PartyHost_SetCrossplayEnabled(PartyData *party, const bool value)
{
  if ( Party_GetCrossplayEnabled(party) != value )
  {
    Party_SetCrossplayEnabled(party, value);
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
PartyHost_SetGameBattlesMatchId
==============
*/
void PartyHost_SetGameBattlesMatchId(PartyData *party, const unsigned int matchId)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9912, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( matchId != party->gamebattleMatchId )
    party->gamebattleMatchId = matchId;
}

/*
==============
PartyHost_SetMemberBackedOut
==============
*/
void PartyHost_SetMemberBackedOut(PartyData *party, const unsigned int memberIndex)
{
  __int64 v4; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 638, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 639, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 640, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( memberIndex >= 0xC8 )
  {
    LODWORD(v4) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 641, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v4, 200) )
      __debugbreak();
  }
  if ( Party_IsGameLobby(party) )
    bitarray_base<bitarray<256>>::setBit(&party->backedOutMemberBits, memberIndex);
}

/*
==============
PartyHost_SetPS4SessionId
==============
*/
void PartyHost_SetPS4SessionId(PartyData *party, const SceNpSessionId *sessionId)
{
  if ( memcmp_0(&party->ps4SessionId, sessionId, 0x30ui64) )
  {
    Party_SetPS4SessionId(party, sessionId);
    PartyHost_SetPartyStateChangeTime(party);
  }
}

/*
==============
PartyHost_SetPartyStateChangeTime
==============
*/
void PartyHost_SetPartyStateChangeTime(PartyData *party)
{
  PartySpecificData *HostData; 
  int v3; 
  int partyStateLastSendTime; 
  char *fmt; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2104, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2105, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2106, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  HostData = PartyHost_GetHostData(party);
  v3 = Sys_Milliseconds();
  partyStateLastSendTime = HostData->hostData.partyStateLastSendTime;
  if ( v3 < 1 )
    v3 = 1;
  HostData->hostData.partyStateChangeTime = v3;
  if ( v3 - partyStateLastSendTime <= 0 )
  {
    LODWORD(fmt) = partyStateLastSendTime + 1;
    Com_Printf(25, "[%s] Fudging partyStateChangeTime from %i to %i so that it's not the same as the time we sent a party state\n", party->partyName, (unsigned int)v3, fmt);
    HostData->hostData.partyStateChangeTime = HostData->hostData.partyStateLastSendTime + 1;
  }
}

/*
==============
PartyHost_SetPlatformSessionHandledByHost
==============
*/
void PartyHost_SetPlatformSessionHandledByHost(PartyData *party, const ClientPlatform platform, bool value)
{
  unsigned __int8 v4; 

  v4 = platform;
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1894, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  Party_SetPlatformSessionHandledByHost(party, (const ClientPlatform)v4, value);
  PartyHost_GamestateChanged(party);
}

/*
==============
PartyHost_SetPrivatePartyMaxPlayers
==============
*/
void PartyHost_SetPrivatePartyMaxPlayers(const int maxPlayers)
{
  int v2; 
  char ActiveGameMode; 

  if ( maxPlayers > 0 )
  {
    v2 = 20;
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( ActiveGameMode != 2 )
    {
      if ( ActiveGameMode != 3 )
      {
LABEL_9:
        Dvar_SetInt_Internal(DVARINT_party_maxPrivatePartyPlayers, v2);
        return;
      }
      v2 = 4;
    }
    if ( maxPlayers < v2 )
      v2 = maxPlayers;
    goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2748, ASSERT_TYPE_ASSERT, "(maxPlayers > 0)", (const char *)&queryFormat, "maxPlayers > 0") )
    __debugbreak();
}

/*
==============
PartyHost_SetRoundScores
==============
*/
void PartyHost_SetRoundScores(PartyData *party, const int memberIndex, const int score, const int deaths)
{
  __int64 v4; 
  __int64 v8; 
  __int64 v9; 

  v4 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2735, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2736, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2737, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2738, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, 200) )
      __debugbreak();
  }
  if ( score > 0xFFFF )
    score = 0xFFFF;
  v8 = v4;
  if ( score < 0 )
    LOWORD(score) = 0;
  party->partyMembers[v8].score = score;
  party->partyMembers[v8].deaths = deaths;
  PartyHost_MemberInfoChanged(party, v4, 2);
}

/*
==============
PartyHost_SetSquad
==============
*/
void PartyHost_SetSquad(PartyData *party, const XUID player, const int squad)
{
  const dvar_t *v5; 
  int MemberByXUID; 
  __int64 v7; 
  const char *v8; 
  int *p_squad; 
  int v10; 
  const char *v11; 
  const char *MemberName; 
  __int64 v13; 
  XUID playera; 

  playera.m_id = player.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2984, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->party_systemActive || PartyHost_UsingAssignedTeams(party) )
  {
    v5 = DVARINT_party_maxSquadSize;
    if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.integer > 1 )
    {
      MemberByXUID = Party_FindMemberByXUID(party, playera);
      v7 = MemberByXUID;
      if ( MemberByXUID == -1 )
      {
        v8 = XUID::ToDevString(&playera);
        Com_PrintWarning(v7 + 26, "[%s] Unable to find player (%s)\n", party->partyName, v8);
      }
      else
      {
        if ( party->party_systemActive && !PartyHost_UsingAssignedTeams(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2999, ASSERT_TYPE_ASSERT, "(!party->party_systemActive || PartyHost_UsingAssignedTeams( party ))", (const char *)&queryFormat, "!party->party_systemActive || PartyHost_UsingAssignedTeams( party )") )
          __debugbreak();
        p_squad = &party->partyMembers[v7].squad;
        v10 = *p_squad;
        if ( *p_squad != squad )
        {
          v11 = XUID::ToDevString(&playera);
          MemberName = Party_GetMemberName(party, v7);
          LODWORD(v13) = v10;
          Com_Printf(25, "[%s] %s changing %s %s squad from %i to %i\n", party->partyName, "PartyHost_SetSquad", MemberName, v11, v13, squad);
          *p_squad = squad;
          PartyHost_MarkMemberInfoDirty(party, v7, 2);
        }
      }
    }
  }
}

/*
==============
PartyHost_SetTeam
==============
*/
void PartyHost_SetTeam(PartyData *party, const XUID player, team_t team)
{
  int MemberByXUID; 
  __int64 v6; 
  const char *v7; 
  int *p_team; 
  int v9; 
  const char *v10; 
  const char *MemberName; 
  MPBotPlayerDataContainer *BotMember; 
  XUID playera; 

  playera.m_id = player.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2950, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->party_systemActive || PartyHost_UsingAssignedTeams(party) )
  {
    MemberByXUID = Party_FindMemberByXUID(party, playera);
    v6 = MemberByXUID;
    if ( MemberByXUID == -1 )
    {
      v7 = XUID::ToDevString(&playera);
      Com_PrintWarning(v6 + 26, "[%s] Unable to find player (%s)\n", party->partyName, v7);
    }
    else
    {
      if ( party->party_systemActive && !PartyHost_UsingAssignedTeams(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2962, ASSERT_TYPE_ASSERT, "(!party->party_systemActive || PartyHost_UsingAssignedTeams( party ))", (const char *)&queryFormat, "!party->party_systemActive || PartyHost_UsingAssignedTeams( party )") )
        __debugbreak();
      p_team = &party->partyMembers[v6].team;
      v9 = *p_team;
      if ( *p_team != team )
      {
        v10 = XUID::ToDevString(&playera);
        MemberName = Party_GetMemberName(party, v6);
        Com_Printf(25, "[%s] %s changing %s %s team from %i to %i\n", party->partyName, "PartyHost_SetTeam", MemberName, v10, v9, team);
        *p_team = team;
        PartyHost_MarkMemberInfoDirty(party, v6, 2);
      }
      if ( BG_GameStateInfo_IsBotMatchMakingDataInitialized() && BG_Bots_IsBotMatchMakingAllowedForPlaylist() )
      {
        BotMember = BG_GameStateInfo_GetBotMember(v6);
        if ( (team < TEAM_ZERO || (unsigned int)team > (TEAM_MP_NUM_TEAMS|TEAM_FIFTY_TWO)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum team_t>(enum team_t)", "unsigned", (unsigned __int8)team, "signed", team) )
          __debugbreak();
        BotMember->botPlayerData.aiTeam = team;
      }
    }
  }
}

/*
==============
PartyHost_SetWaitingState
==============
*/
void PartyHost_SetWaitingState(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3318, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3319, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  Com_Printf(15, "[%s] Gamestate changing due to lobbyState changing to WAITING\n", party->partyName);
  party->lobbyFlags &= 0xFFFFFF9F;
  party->lobbyFlags |= 4u;
  PartyHost_GamestateChanged(party);
}

/*
==============
PartyHost_SetupParty
==============
*/
void PartyHost_SetupParty(PartyData *party, int localControllerIndex)
{
  int v3; 
  MatchRulesSnapshot *v4; 
  __int64 v5; 
  __int64 i; 
  GameStateInfo *v7; 
  unsigned int v8; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5432, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party == &g_partyData )
  {
    v3 = Live_CurrentLocalMapPackFlags();
    Party_SetMapPackFlags(party, v3);
  }
  party->areWeHost = 1;
  *(_QWORD *)&party->hostPresenceIndex = 0i64;
  party->gameStartRequested = 0;
  party->m_gameStartSkipCountdown = 0;
  *(_QWORD *)&party->backingOut = 0i64;
  *(_QWORD *)&party->gameStartTime = 0i64;
  party->stopAfterRound = 0;
  party->inParty = 1;
  *(_QWORD *)party->backedOutMemberBits.array = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[2] = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[4] = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[6] = 0i64;
  party->voting.voteEndTime = 0;
  Party_ClearDesiredTeamSelection(party);
  Party_ClearLocalMLGSpectator(party);
  RotatingClientNums::Reset(&party->specificData.hostData.m_partyStateClientNums);
  *(_QWORD *)&party->specificData.hostData.partyStateChangeTime = 0i64;
  *(_QWORD *)party->specificData.clientData.m_matchmakingTokenSent = 0i64;
  *((_QWORD *)&party->specificData.clientData + 2) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 3) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 4) = 0i64;
  if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
  {
    v4 = g_matchRulesSnapshots;
    if ( g_matchRulesSnapshots && g_matchRulesSnapshotsDelta )
    {
      v5 = 0i64;
      while ( 1 )
      {
        v4[v5++].snapTime = 0;
        if ( v5 >= 200 )
          break;
        v4 = g_matchRulesSnapshots;
      }
      for ( i = 0i64; i < 200; ++i )
        g_matchRulesSnapshotsDelta[i].toSnapTime = 0;
    }
    v7 = GameStateInfo_Get();
    if ( v7->usingRecipe )
      MatchRulesChanged(v7->matchRules);
  }
  Dvar_SetBool_Internal(DVARBOOL_party_am_I_host, 1);
  Dvar_SetBool_Internal(DVARBOOL_party_editingsettings, 0);
  *(_QWORD *)&s_partyStateLoggingData.total_header = 0i64;
  s_partyStateLoggingData.total_match_rules = 0;
  v8 = Party_CountAllMembersEvenIfInactive(party);
  s_partyStateLoggingData.players_joined = truncate_cast<unsigned short,unsigned int>(v8);
}

/*
==============
PartyHost_ShouldJoinerGoToBRBlade
==============
*/
__int64 PartyHost_ShouldJoinerGoToBRBlade(const PartyData *party)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_ui_is_magma_gamemode;
  if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.color[0];
}

/*
==============
PartyHost_ShouldStartHosting
==============
*/
bool PartyHost_ShouldStartHosting()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_party_startHosting;
  if ( !DVARBOOL_party_startHosting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_startHosting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.enabled;
}

/*
==============
PartyHost_StartMatch_Internal
==============
*/
void PartyHost_StartMatch_Internal(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  lua_State *v4; 
  LocalClientNum_t ClientFromController; 
  const char *MapName; 
  int v7; 
  unsigned __int8 *p_status; 
  int v9; 
  const char *Gametype; 
  unsigned int NumGameSlots; 
  const dvar_t *v12; 
  Online_AAR *Instance; 
  OnlineChallengesManager *v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3562, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3563, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3564, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  if ( !Party_InParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3565, ASSERT_TYPE_ASSERT, "(Party_InParty( party ))", (const char *)&queryFormat, "Party_InParty( party )") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3566, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( party->gameStartTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3567, ASSERT_TYPE_ASSERT, "(party->gameStartTime > 0)", (const char *)&queryFormat, "party->gameStartTime > 0") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3568, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  v4 = LUI_luaVM;
  ClientFromController = CL_Mgr_GetClientFromController(mainActiveClient->localControllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "lui_game_start_notify", v4) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
  Online_Telemetry_SendStartMatchEvent(mainActiveClient->localControllerIndex);
  if ( party->splitscreenData.otherClientActive )
    Online_Telemetry_SendStartMatchEvent(party->splitscreenData.otherClient.localControllerIndex);
  Com_FrontEndScene_ShutdownAndDisable();
  if ( Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3588, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerRunning())", "%s\n\tShould not start a match with an active local server", "!Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  PartyHost_CheckTeams(party);
  Party_ClearGameLobbyId(party);
  party->gameStartRequested = 0;
  party->m_gameStartSkipCountdown = 0;
  MapName = Party_GetMapName();
  v7 = 0;
  p_status = &party->partyMembers[0].status;
  v9 = 0;
  Gametype = Party_GetGametype();
  do
  {
    if ( *p_status != 6 )
    {
      if ( *p_status == 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3434, ASSERT_TYPE_ASSERT, "(party->partyMembers[slot].status != PARTYSTATUS_ZOMBIE)", "%s\n\tStarting the match while party is still connecting", "party->partyMembers[slot].status != PARTYSTATUS_ZOMBIE") )
        __debugbreak();
      if ( Party_IsMemberPresent(party, v9) && !Party_IsHost(party, v9) )
      {
        Com_Printf(25, "[%s] Sending 'go' command to clientNum %i in StartMatch()\n", party->partyName, (unsigned int)v9);
        if ( !Party_MemberHasLoopbackAddr(party, v9) )
          PartyHost_SendGo(party, v9, MapName, Gametype, 0);
      }
    }
    ++v9;
    p_status += 504;
  }
  while ( v9 < 200 );
  Party_SleepForMatch(party);
  party->gameStartTime = 0;
  s_ignoreDifferentialTimesAttempted = 0;
  Dvar_SetBoolByName("LQTTNORNQT", 0);
  Dvar_SetString_Internal(DVARSTR_ui_gametype, Gametype);
  NumGameSlots = Party_GetNumGameSlots(party);
  Com_Printf(25, "[%s] Setting ui_maxclients to %i in StartMatch()\n", party->partyName, NumGameSlots);
  Dvar_SetInt_Internal(DVARINT_ui_maxclients, NumGameSlots);
  Dvar_SetInt_Internal(DVARINT_party_maxplayers, NumGameSlots);
  SV_AgentSetupAgentCount(Gametype);
  v12 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( !v12->current.enabled && !Live_IsInSystemlinkLobby() )
    OnlineMatchmakerOmniscient::StartGame(&OnlineMatchmakerOmniscient::ms_instance, MapName, Gametype);
  if ( mainActiveClient->localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3629, ASSERT_TYPE_ASSERT, "( mainActiveClient->localClientNum ) == ( LOCAL_CLIENT_0 )", "%s == %s\n\t%i, %i", "mainActiveClient->localClientNum", "LOCAL_CLIENT_0", mainActiveClient->localClientNum, 0i64) )
    __debugbreak();
  PartyHost_HostPreloadMap(party, MapName, Gametype);
  Live_MultiplayerRoundStartNotify();
  Instance = Online_AAR::GetInstance();
  Online_AAR::StartMatch(Instance);
  v14 = OnlineChallengesManager::GetInstance();
  OnlineChallengesManager::StartMatch(v14);
  LOBYTE(v7) = party->splitscreenData.otherClientActive != 0;
  v15 = v7 + 1;
  if ( CL_GetLocalClientActiveCount() != v15 )
  {
    LODWORD(v17) = v15;
    LODWORD(v16) = CL_GetLocalClientActiveCount();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3652, ASSERT_TYPE_ASSERT, "( CL_GetLocalClientActiveCount() ) == ( expectedPlayerCount )", "%s == %s\n\t%i, %i", "CL_GetLocalClientActiveCount()", "expectedPlayerCount", v16, v17) )
      __debugbreak();
  }
}

/*
==============
PartyHost_StartParty
==============
*/
void PartyHost_StartParty(PartyData *party, const LocalClientNum_t localClientNum, int localControllerIndex, int flags, int numSlots, const PartyHostType hostType)
{
  XSESSION_INFO outSessionInfo; 

  bdSecurityID::bdSecurityID(&outSessionInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&outSessionInfo.m_security.m_key);
  NET_CreateSession(&outSessionInfo);
  PartyHost_StartParty(party, localClientNum, localControllerIndex, flags, numSlots, hostType, 0i64, &outSessionInfo);
  bdSecurityKey::~bdSecurityKey(&outSessionInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&outSessionInfo.m_security.m_id);
}

/*
==============
PartyHost_StartParty
==============
*/
void PartyHost_StartParty(PartyData *party, const LocalClientNum_t localClientNum, int localControllerIndex, int flags, int numSlots, const PartyHostType hostType, const unsigned __int64 lobbyId, const XSESSION_INFO *sessionInfo)
{
  int v8; 
  int v9; 
  int v10; 
  int v12; 
  int PlaylistIdForNum; 
  const PartyData *PartyData; 
  __int64 v15; 
  unsigned int v16; 
  PartyMember *partyMembers; 
  const char *MemberStatus; 
  const char *MemberName; 
  const dvar_t *v20; 
  int v21; 
  bool IsPrivateParty; 
  bool v23; 
  const dvar_t *v24; 
  unsigned __int8 ActiveGameMode; 
  unsigned __int64 TournamentID; 
  unsigned __int16 CurrentTournamentRound; 
  const char *MapNameForRound; 
  const char *Gametype; 
  int v30; 
  int CurrentPlayerCount; 
  int Int_Internal_DebugName; 
  int v33; 
  int MaxHumanPlayers; 
  int v35; 
  MatchRulesSnapshot *v36; 
  __int64 v37; 
  __int64 i; 
  GameStateInfo *v39; 
  unsigned int v40; 
  VoteType *p_vote; 
  int v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  const dvar_t *v45; 
  float value; 
  const dvar_t *v47; 
  PartyType partyId; 
  PartyPrivacySetting PrivacySetting; 
  int StartingControllerIndex; 
  PartyPrivacySetting PrivatePartySetting; 
  char SquadAutofill; 
  int v53; 
  char PartySquadAutofillEnabled; 
  int v55; 
  bool IsCrossPlayEnabled; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  __int64 v60; 

  v8 = flags;
  v9 = localControllerIndex;
  v10 = localClientNum;
  if ( localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5753, ASSERT_TYPE_ASSERT, "( ( localClientNum == LOCAL_CLIENT_0 ) )", "( localClientNum ) = %i", localClientNum) )
    __debugbreak();
  v12 = 0;
  PlaylistIdForNum = 0;
  if ( Party_IsRunning(party) || !Party_IsGameLobby(party) && (PartyAtomic_IsJoiningOnPresence(&g_partyJoinInfo) || (PartyData = Lobby_GetPartyData(), Party_IsRunning(PartyData))) )
  {
    if ( !Party_AreWeHost(party) || !Party_IsRunning(party) )
    {
      Com_Printf(25, "[%s] PartyHost_StartParty called\n", party->partyName);
      PartyHost_CheckSigninState(party, v9, v8);
      Party_StopParty(party);
      v15 = 200i64;
      if ( Party_IsGameLobby(party) )
      {
        if ( g_partyData.inParty )
        {
          v16 = 0;
          partyMembers = g_partyData.partyMembers;
          do
          {
            if ( Party_IsMemberDataAvailable(partyMembers) && !Party_IsMemberPresent(partyMembers) )
            {
              ++v16;
              MemberStatus = Party_GetMemberStatus(&g_partyData, v12);
              MemberName = Party_GetMemberName(&g_partyData, v12);
              Com_PrintWarning(25, "[%s] %i: %s is not present. Status is %s\n", g_partyData.partyName, v16, MemberName, MemberStatus);
            }
            ++v12;
            ++partyMembers;
          }
          while ( v12 < 200 );
          v10 = localClientNum;
          if ( v16 )
            Com_PrintWarning(25, "[%s] %i members are not present, may leave people behind\n", g_partyData.partyName, v16);
          v8 = flags;
          v9 = localControllerIndex;
        }
        Party_Sleep(&g_partyData);
      }
      if ( Party_IsGameLobby(party) )
      {
        v20 = DVARINT_playlist;
        if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v20->current.integer);
        v21 = Live_CurrentDesiredLobbyMapPackFlags(PlaylistIdForNum);
      }
      else
      {
        if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5799, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
          __debugbreak();
        v21 = Live_CurrentLocalMapPackFlags();
      }
      Party_SetMapPackFlags(party, v21);
      Party_InitMapSelectionEntries(party);
      Party_SetUsesMLGRules(party, 0);
      Party_SetCodcastingEnabled(party, 0);
      Party_SetTeamAssignmentEnabled(party, 0);
      Party_SetDraftLoadoutTimer(party, 75);
      Party_SetDraftWeaponTimer(party, 30);
      Party_SetDraftRigTimer(party, 30);
      Party_SetAliensDifficulty(party, 0);
      IsPrivateParty = Party_IsPrivateParty(party);
      v23 = g_partyChatQuitting;
      if ( IsPrivateParty )
        v23 = 0;
      g_partyChatQuitting = v23;
      GamerProfile_UpdateSystemVarsFromProfile(v9);
      if ( PartyHost_UseArchivedGameStateInfo(party) )
      {
        BG_GameStateInfo_RestoreArchivedState();
      }
      else if ( Party_IsGameLobby(party) )
      {
        BG_GameStateInfo_ClearActiveState();
      }
      if ( Party_IsGameLobby(party) )
      {
        v24 = DVARBOOL_xblive_privatematch;
        if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( !v24->current.enabled )
        {
          ActiveGameMode = Com_GameMode_GetActiveGameMode();
          Com_ExecLobbyDefaultConfigs((LocalClientNum_t)v10, v9, (GameModeType)ActiveGameMode);
          Playlist_ResetWeights(PlaylistIdForNum);
          if ( !GameBattles_IsGameBattleActive() && !GameBattles_IsInGameBattleGameMode() )
            Party_ChooseNextPlaylist(v9);
          TournamentID = OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance);
          CurrentTournamentRound = OnlineMatchmakerOmniscient::GetCurrentTournamentRound(&OnlineMatchmakerOmniscient::ms_instance);
          if ( TournamentID )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_online_tournament_should_user_random_maps, "online_tournament_should_user_random_maps") )
            {
              MapNameForRound = OnlineTournament_GetMapNameForRound(CurrentTournamentRound);
              if ( *MapNameForRound )
                Dvar_SetString_Internal(DVARSTR_ui_mapname, MapNameForRound);
            }
          }
          if ( GameBattles_IsGameBattleActive() && Dvar_GetBool_Internal_DebugName(DVARBOOL_gamebattles_mapname_override_client_fix_enabled, "gamebattles_mapname_override_client_fix_enabled") )
            GameBattles_LoadGameRules(v10);
        }
      }
      Gametype = Party_GetGametype();
      Dvar_SetString_Internal(DVARSTR_ui_gametype, Gametype);
      Party_ClearMembers(party);
      Party_ClearActiveClientData(&party->splitscreenData);
      party->m_lobbyId = lobbyId;
      if ( hostType == PARTY_HOST_DEDI )
      {
        v30 = -2;
      }
      else if ( Live_IsInGameBattlesGame() )
      {
        CurrentPlayerCount = GameBattles_GetCurrentPlayerCount(v9);
        v30 = I_irand(0, CurrentPlayerCount);
      }
      else if ( !Party_IsGameLobby(party) || Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") )
      {
        v30 = 0;
      }
      else
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
        v33 = Playlist_GetPlaylistIdForNum(Int_Internal_DebugName);
        MaxHumanPlayers = Playlist_GetMaxHumanPlayers(v33);
        if ( !MaxHumanPlayers )
          MaxHumanPlayers = Playlist_GetMaxLobbySize(v33);
        v30 = I_irand(0, MaxHumanPlayers);
      }
      party->currentHost.hostNum = v30;
      if ( party == &g_partyData )
      {
        v35 = Live_CurrentLocalMapPackFlags();
        Party_SetMapPackFlags(party, v35);
      }
      party->areWeHost = 1;
      party->inParty = 1;
      *(_QWORD *)&party->hostPresenceIndex = 0i64;
      party->gameStartRequested = 0;
      party->m_gameStartSkipCountdown = 0;
      *(_QWORD *)&party->backingOut = 0i64;
      *(_QWORD *)&party->gameStartTime = 0i64;
      party->stopAfterRound = 0;
      *(_QWORD *)party->backedOutMemberBits.array = 0i64;
      *(_QWORD *)&party->backedOutMemberBits.array[2] = 0i64;
      *(_QWORD *)&party->backedOutMemberBits.array[4] = 0i64;
      *(_QWORD *)&party->backedOutMemberBits.array[6] = 0i64;
      party->voting.voteEndTime = 0;
      Party_ClearDesiredTeamSelection(party);
      Party_ClearLocalMLGSpectator(party);
      RotatingClientNums::Reset(&party->specificData.hostData.m_partyStateClientNums);
      *(_QWORD *)&party->specificData.hostData.partyStateChangeTime = 0i64;
      *(_QWORD *)party->specificData.clientData.m_matchmakingTokenSent = 0i64;
      *((_QWORD *)&party->specificData.clientData + 2) = 0i64;
      *((_QWORD *)&party->specificData.clientData + 3) = 0i64;
      *((_QWORD *)&party->specificData.clientData + 4) = 0i64;
      if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
      {
        v36 = g_matchRulesSnapshots;
        if ( g_matchRulesSnapshots && g_matchRulesSnapshotsDelta )
        {
          v37 = 0i64;
          while ( 1 )
          {
            v36[v37++].snapTime = 0;
            if ( v37 >= 200 )
              break;
            v36 = g_matchRulesSnapshots;
          }
          for ( i = 0i64; i < 200; ++i )
            g_matchRulesSnapshotsDelta[i].toSnapTime = 0;
        }
        v39 = GameStateInfo_Get();
        if ( v39->usingRecipe )
          MatchRulesChanged(v39->matchRules);
      }
      Dvar_SetBool_Internal(DVARBOOL_party_am_I_host, 1);
      Dvar_SetBool_Internal(DVARBOOL_party_editingsettings, 0);
      *(_QWORD *)&s_partyStateLoggingData.total_header = 0i64;
      s_partyStateLoggingData.total_match_rules = 0;
      v40 = Party_CountAllMembersEvenIfInactive(party);
      s_partyStateLoggingData.players_joined = truncate_cast<unsigned short,unsigned int>(v40);
      if ( Party_IsGameLobby(party) && g_partyData.inParty )
      {
        Com_Printf(25, "[%s] PartyHost_StartHost - Copying splitscreenData from private party for game lobby\n", party->partyName);
        if ( v9 != g_partyData.splitscreenData.mainClient.localControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5933, ASSERT_TYPE_ASSERT, "( localControllerIndex ) == ( g_partyData.splitscreenData.mainClient.localControllerIndex )", "%s == %s\n\t%i, %i", "localControllerIndex", "g_partyData.splitscreenData.mainClient.localControllerIndex", v9, g_partyData.splitscreenData.mainClient.localControllerIndex) )
          __debugbreak();
        if ( v10 != g_partyData.splitscreenData.mainClient.localClientNum )
        {
          LODWORD(v60) = g_partyData.splitscreenData.mainClient.localClientNum;
          LODWORD(v59) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5934, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( g_partyData.splitscreenData.mainClient.localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "g_partyData.splitscreenData.mainClient.localClientNum", v59, v60) )
            __debugbreak();
        }
        party->splitscreenData = g_partyData.splitscreenData;
      }
      else
      {
        Party_SetupSplitscreenData(&party->splitscreenData, v9, (const LocalClientNum_t)v10);
      }
      Voice_ClearRemoteTalkers(party);
      Party_SetNumGameSlots(party, numSlots);
      Party_SetGameFlags(party, v8);
      XSESSION_INFO::operator=(&party->session->dyn.sessionInfo, sessionInfo);
      p_vote = &party->partyMembers[0].info.vote;
      do
      {
        *p_vote = PARTY_VOTE_NO_VOTE;
        p_vote += 126;
        --v15;
      }
      while ( v15 );
      party->voting.votePassed = 1;
      v42 = Sys_Milliseconds();
      party->lobbyFlags &= 0xFFFFFF9F;
      party->lobbyFlags |= 4u;
      party->voting.voteEndTime = v42;
      if ( (unsigned int)v10 >= 2 )
      {
        LODWORD(v58) = 2;
        LODWORD(v57) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v57, v58) )
          __debugbreak();
      }
      clientUIActives[v10].invited = 1;
      Party_SetUIPlayerCount(party);
      Dvar_SetString_Internal(DVARSTR_party_hostname, (const char *)&queryFormat.fmt + 3);
      party->lastMemberInfoTime = 0;
      party->gamebattleMatchId = 0;
      Party_ClearPrivateMatchId(party);
      *(_WORD *)&party->privateDSReady = 0;
      BG_GameStateInfo_DisableGameLaunchWithBots();
      party->chosenToShowSurvey = 0;
      if ( Party_IsGameLobby(party) && party->areWeHost )
      {
        v43 = DVARBOOL_onlinegame;
        if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v43);
        if ( v43->current.enabled && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch_solo, "xblive_privatematch_solo") )
        {
          if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5534, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
            __debugbreak();
          if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5535, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
            __debugbreak();
          v44 = DVARBOOL_post_game_survey_forced;
          if ( !DVARBOOL_post_game_survey_forced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "post_game_survey_forced") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v44);
          if ( v44->current.enabled )
            goto LABEL_112;
          v45 = DVARFLT_post_game_survey_chance_percentage;
          if ( !DVARFLT_post_game_survey_chance_percentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "post_game_survey_chance_percentage") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v45);
          value = v45->current.value;
          if ( value > 0.0 && (float)((float)(rand() % 10000) * 0.0099999998) < value )
LABEL_112:
            party->chosenToShowSurvey = 1;
        }
      }
      if ( Party_IsGameLobby(party) && g_partyData.inParty )
        party->uiRoot = g_partyData.uiRoot;
      LUI_DataBindingLobby_UpdateLobby();
      PartyClientTaskService::Start(&party->clientTaskService, party);
      NET_ResetTelemetry();
      if ( NET_IsStarted() )
        PartyHost_StartPartyComplete(party, v9);
      v47 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( v47->current.enabled && ((partyId = party->partyId, partyId == PRIVATE_PARTY_ID) || partyId == GAME_LOBBY_ID && Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch")) )
      {
        PrivacySetting = Party_GetPrivacySetting(party);
        StartingControllerIndex = Party_GetStartingControllerIndex(party);
        PrivatePartySetting = Online_PlayerData_GetPrivatePartySetting(StartingControllerIndex);
        if ( PrivacySetting != PrivatePartySetting )
        {
          Party_SetPrivacySetting(party, PrivatePartySetting);
          PartyHost_GamestateChanged(party);
        }
      }
      else
      {
        Party_SetPrivacySetting(party, PUBLIC);
      }
      if ( party->partyId == PRIVATE_PARTY_ID )
      {
        SquadAutofill = Party_GetSquadAutofill();
        v53 = Party_GetStartingControllerIndex(&g_partyData);
        PartySquadAutofillEnabled = Online_PlayerData_GetPartySquadAutofillEnabled(v53);
        if ( SquadAutofill != PartySquadAutofillEnabled )
        {
          Party_SetSquadAutofill(PartySquadAutofillEnabled);
          PartyHost_GamestateChanged(&g_partyData);
        }
      }
      if ( Party_AreWeHost(party) )
      {
        v55 = Party_GetStartingControllerIndex(party);
        IsCrossPlayEnabled = Live_IsCrossPlayEnabled(v55);
        if ( Party_GetCrossplayEnabled(party) != IsCrossPlayEnabled )
        {
          Party_SetCrossplayEnabled(party, IsCrossPlayEnabled);
          PartyHost_GamestateChanged(party);
        }
      }
      ++party->partyVersionNumber;
      party->partyModifyTime = Sys_Milliseconds();
      party->iscrossplayParty = 0;
      party->restrictsF2PUsers = PartyHost_PartyRestrictsF2PUsers(party);
      Party_SetInviteJoinsDisabledForNoJIP(party, 0);
      party->lobbyFlags &= 0xFFFFF3FF;
      Party_DumpInfo(party, "Start party");
    }
  }
}

/*
==============
PartyHost_StartPartyComplete
==============
*/
void PartyHost_StartPartyComplete(PartyData *party, const int localControllerIndex)
{
  LocalClientNum_t ClientFromController; 
  int v5; 
  unsigned __int64 PlatformUserId; 
  int FirstSlotByStatus; 
  PartySpecificData *HostData; 
  int v9; 
  const char *HostName; 
  PartyType partyId; 
  const char *LocalClientName; 
  unsigned __int64 m_id; 
  const unsigned __int64 *SecurityId; 
  char *fmt; 
  __int64 v16; 
  PartyActiveClient partyActiveClient; 

  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6382, ASSERT_TYPE_ASSERT, "(party->inParty)", "%s\n\tPartyHost_StartPartyComplete called but we already left that party", "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6383, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !XSESSION_INFO::IsValidSessionId(&party->session->dyn.sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6384, ASSERT_TYPE_ASSERT, "(party->session->dyn.sessionInfo.IsValidSessionId())", (const char *)&queryFormat, "party->session->dyn.sessionInfo.IsValidSessionId()") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
    if ( CL_GetLocalClientMigrationState(ClientFromController) == CMSTATE_INACTIVE )
    {
      partyActiveClient = Party_GetMainActiveClient(party, localControllerIndex);
      v5 = Party_HostNum(party);
      PartyHost_AddLocalPlayer(party, &partyActiveClient, v5);
      if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1620, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
        __debugbreak();
      if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1621, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
        __debugbreak();
      if ( Party_GetSecondaryActiveClient(party, &partyActiveClient) )
      {
        PlatformUserId = Live_GetPlatformUserId(partyActiveClient.localControllerIndex);
        if ( Party_FindMemberByPlatformId(party, PlatformUserId) < 0 )
        {
          FirstSlotByStatus = PartyHost_FindFirstSlotByStatus(party, 0);
          if ( FirstSlotByStatus >= 0 )
          {
            LODWORD(v16) = FirstSlotByStatus;
            LODWORD(fmt) = partyActiveClient.localClientNum;
            Com_Printf(25, "[%s] PartyHost - AddOtherSplitscreenLocalPlayer - Add other client with controller %i and client %i in slot %i\n", party->partyName, (unsigned int)partyActiveClient.localControllerIndex, fmt, v16);
            PartyHost_AddLocalPlayer(party, &partyActiveClient, FirstSlotByStatus);
          }
          else
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1636, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to add local player to new lobby: no empty slots. this may lead to an invalid splitscreen state\n") )
              __debugbreak();
            Party_ClearOtherSplitscreenClient(&party->splitscreenData);
          }
        }
        else
        {
          Com_PrintWarning(14, "[%s] PartyHost - AddOtherSplitscreenLocalPlayer - Trying to add client who's already in the party (%zu)\n", party->partyName, PlatformUserId);
        }
      }
      if ( Party_IsGameLobby(party) && g_partyData.inParty && g_partyData.areWeHost )
        PartyHost_AddPartyMembersToLobby(localControllerIndex);
      PeerMesh_InitLocalConnectivity(party, 0);
      HostData = PartyHost_GetHostData(party);
      HostData->hostData.partyCreationDoneTime = Sys_Milliseconds();
    }
  }
  if ( !Party_IsHostPresent(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6414, ASSERT_TYPE_ASSERT, "(Party_IsHostPresent( party ))", "%s\n\tDidn't setup the local host in the party properly", "Party_IsHostPresent( party )") )
    __debugbreak();
  if ( !Party_IsHostDedicated(party) )
  {
    v9 = Party_HostNum(party);
    if ( !Party_MemberHasLoopbackAddr(party, v9) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6415, ASSERT_TYPE_ASSERT, "(Party_IsHostDedicated( party ) || Party_MemberHasLoopbackAddr( party, Party_HostNum( party ) ))", "%s\n\tDidn't setup the local host in the party properly", "Party_IsHostDedicated( party ) || Party_MemberHasLoopbackAddr( party, Party_HostNum( party ) )") )
      __debugbreak();
  }
  HostName = Party_GetHostName(party);
  Dvar_SetString_Internal(DVARSTR_party_hostname, HostName);
  LiveParty_Update();
  partyId = party->partyId;
  LocalClientName = Live_GetLocalClientName(localControllerIndex);
  m_id = Live_GetXuid((XUID *)&partyActiveClient, localControllerIndex)->m_id;
  SecurityId = (const unsigned __int64 *)XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
  PartyProfile_Init(*SecurityId, (const XUID)m_id, LocalClientName, partyId, &party->profileState);
  PartyHost_GamestateChanged(party);
}

/*
==============
PartyHost_StartPrivateParty
==============
*/
void PartyHost_StartPrivateParty(const LocalClientNum_t localClientNum, int localControllerIndex, bool currentlyActive, const PartyHostType hostType)
{
  const dvar_t *v8; 
  int integer; 
  const dvar_t *v10; 
  XSESSION_INFO outSessionInfo; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
    Dvar_SetInt_Internal(DVARINT_party_maxPrivatePartyPlayers, 4);
  v8 = DVARINT_party_maxPrivatePartyPlayers;
  if ( !DVARINT_party_maxPrivatePartyPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxPrivatePartyPlayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  if ( currentlyActive )
  {
    v10 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.integer != integer )
      Dvar_SetInt_Internal(DVARINT_party_maxplayers, integer);
  }
  bdSecurityID::bdSecurityID(&outSessionInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&outSessionInfo.m_security.m_key);
  NET_CreateSession(&outSessionInfo);
  PartyHost_StartParty(&g_partyData, localClientNum, localControllerIndex, 289, integer, hostType, 0i64, &outSessionInfo);
  bdSecurityKey::~bdSecurityKey(&outSessionInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&outSessionInfo.m_security.m_id);
  PartyChat_CreatePrivatePartyChat(localControllerIndex);
  g_partyData.party_systemActive = currentlyActive;
}

/*
==============
PartyHost_StartServer
==============
*/
void PartyHost_StartServer(LocalClientNum_t localClientNum)
{
  const char *MapName; 
  const char *Gametype; 
  const dvar_t *v3; 
  bool hardcoreMode; 
  const dvar_t *v5; 
  unsigned int unsignedInt; 
  unsigned __int8 v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  unsigned int v10; 
  const dvar_t *v11; 
  unsigned __int16 weaponMapLargeRuntimeSize; 
  PartySpecificData *p_specificData; 
  __int64 mapIsPreloaded; 
  __int64 migrate; 

  MapName = Party_GetMapName();
  Gametype = Party_GetGametype();
  if ( !MapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3512, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( !Gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3513, ASSERT_TYPE_ASSERT, "(gameType)", (const char *)&queryFormat, "gameType") )
    __debugbreak();
  if ( *MapName && *Gametype )
  {
    v3 = DVARBOOL_ui_hardcore;
    if ( !DVARBOOL_ui_hardcore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_hardcore") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    hardcoreMode = v3->current.enabled;
    v5 = DVARINT_ui_maxclients;
    if ( !DVARINT_ui_maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_maxclients") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    unsignedInt = v5->current.unsignedInt;
    v7 = SV_AgentSetupAgentCount(Gametype);
    v8 = DVARINT_ui_serverFrameDuration;
    v9 = v7;
    if ( !DVARINT_ui_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_serverFrameDuration") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v10 = v8->current.unsignedInt;
    v11 = DVARINT_ui_weaponMapLargeRuntimeSize;
    if ( !DVARINT_ui_weaponMapLargeRuntimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_weaponMapLargeRuntimeSize") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    weaponMapLargeRuntimeSize = truncate_cast<unsigned short,int>(v11->current.integer);
    SV_CmdsMP_StartMapForParty(MapName, Gametype, unsignedInt, v9, v10, weaponMapLargeRuntimeSize, hardcoreMode, 1, 0);
    if ( Live_IsInSystemlinkLobby() )
      p_specificData = &g_partyData.specificData;
    else
      p_specificData = (PartySpecificData *)Lobby_GetHostData();
    if ( p_specificData->hostData.preloadingMapStage != PRELOAD_MAP_STARTED )
    {
      LODWORD(migrate) = 2;
      LODWORD(mapIsPreloaded) = p_specificData->hostData.preloadingMapStage;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3551, ASSERT_TYPE_ASSERT, "( hostData->preloadingMapStage ) == ( PRELOAD_MAP_STARTED )", "%s == %s\n\t%i, %i", "hostData->preloadingMapStage", "PRELOAD_MAP_STARTED", mapIsPreloaded, migrate) )
        __debugbreak();
    }
    p_specificData->hostData.preloadingMapStage = PRELOAD_MAP_IDLE;
  }
}

/*
==============
PartyHost_StartTeamMatch
==============
*/
void PartyHost_StartTeamMatch(PartyData *party, int localControllerIndex)
{
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  const dvar_t *v7; 
  __int64 v8; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3120, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3121, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3122, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  if ( !Party_InParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3123, ASSERT_TYPE_ASSERT, "(Party_InParty( party ))", (const char *)&queryFormat, "Party_InParty( party )") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3124, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( party->gameStartTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3125, ASSERT_TYPE_ASSERT, "(party->gameStartTime > 0)", (const char *)&queryFormat, "party->gameStartTime > 0") )
    __debugbreak();
  if ( (party->lobbyFlags & 0x64) != 4 )
  {
    LODWORD(v8) = party->lobbyFlags;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3126, ASSERT_TYPE_ASSERT, "( ( Party_IsLobbyState( party, ( 1 << 2 ) ) ) )", "( party->lobbyFlags ) = %i", v8) )
      __debugbreak();
  }
  v4 = Party_CountMembers(party, PARTY_MEMBER_TYPE_ALL);
  v5 = v4;
  if ( !v4 )
  {
    v6 = 0i64;
LABEL_24:
    Com_Printf(25, "[%s] xpartygo failed: unable to make balanced teams. count %i\n", party->partyName, v6);
    party->lobbyFlags = party->lobbyFlags & 0xFFFFFF9B | 4;
    return;
  }
  if ( !PartyHost_MakeTeams(party, localControllerIndex, v4) )
  {
    if ( Party_IsPrivateOrSystemlinkGame(party) )
      goto LABEL_31;
    v7 = DVARBOOL_online_matchmaking_ignore_team_check;
    if ( !DVARBOOL_online_matchmaking_ignore_team_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_ignore_team_check") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled )
    {
LABEL_31:
      v6 = v5;
      goto LABEL_24;
    }
  }
  PartyDebug_PrintTeams(party->subparties, party->subpartyCount);
  if ( OnlineMatchmakerOmniscient::IsMatchmaking(&OnlineMatchmakerOmniscient::ms_instance) )
    OnlineMatchmakerOmniscient::PrintTeams(&OnlineMatchmakerOmniscient::ms_instance, party);
  party->lobbyFlags &= 0xFFFFFFBB;
  party->lobbyFlags |= 0x20u;
  if ( Party_IsMatchmakingLobby(party) )
    OnlineMatchmakerOmniscient::GameLobbyInFinalCountdown(&OnlineMatchmakerOmniscient::ms_instance);
  Com_Printf(15, "[%s] Gamestate changing due to lobbyState changing to STARTREADY\n", party->partyName);
  PartyHost_GamestateChanged(party);
}

/*
==============
PartyHost_SyncVoiceDataForAllPlayers
==============
*/
void PartyHost_SyncVoiceDataForAllPlayers(PartyData *party)
{
  PartyMember *partyMembers; 
  int i; 
  unsigned __int8 status; 

  if ( Party_IsRunning(party) && party->inParty )
  {
    partyMembers = party->partyMembers;
    for ( i = 0; i < 200; ++i )
    {
      status = partyMembers->status;
      if ( status && status != 6 && !Party_IsMemberDataAvailable(partyMembers) )
        PartyHost_RemovePlayer(party, i, 0, (const char *)&queryFormat.fmt + 3, NET_CLOSE_SOFT);
      ++partyMembers;
    }
  }
}

/*
==============
PartyHost_TellPlayerToEndParty
==============
*/
void PartyHost_TellPlayerToEndParty(const PartyData *party, const int memberIndex, const char *reason, PartyEndType endType, int sendImmediately)
{
  __int64 v5; 
  NetConnection *MemberConnection; 
  const char *v10; 
  unsigned int v11; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  v5 = endType;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1724, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !reason && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1725, ASSERT_TYPE_ASSERT, "(reason)", (const char *)&queryFormat, "reason") )
    __debugbreak();
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, memberIndex);
  if ( NetConnection::IsLocal(MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1729, ASSERT_TYPE_ASSERT, "(!connection.IsLocal())", "%s\n\tShould never be removing a local player", "!connection.IsLocal()") )
    __debugbreak();
  MSG_Init(&buf, data, 64);
  v10 = j_va("%iendparty", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v10);
  MSG_WriteBits(&buf, v5, 2u);
  MSG_WriteString(&buf, reason);
  v11 = 4;
  if ( sendImmediately )
    v11 = 6;
  NetConnection::SendReliable(MemberConnection, &buf, v11);
}

/*
==============
PartyHost_TimeoutMembers
==============
*/
void PartyHost_TimeoutMembers(PartyData *party)
{
  int v2; 
  unsigned __int8 *p_status; 
  int v4; 
  unsigned __int8 v5; 
  const dvar_t *v6; 
  const char *MemberStatus; 
  XUID *Xuid; 
  const char *v9; 
  const char *MemberName; 
  __int64 v11; 
  __int64 v12; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4080, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4081, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4082, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  v2 = 0;
  p_status = &party->partyMembers[0].status;
  v4 = Sys_Milliseconds();
  do
  {
    v5 = *p_status;
    if ( *p_status != 6 && v5 && (v5 <= 3u || !Party_MemberHasLoopbackAddr(party, v2)) )
    {
      v6 = DVARINT_pt_memberTimeout;
      if ( !DVARINT_pt_memberTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_memberTimeout") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v4 - *(_DWORD *)(p_status - 138) > v6->current.integer )
      {
        MemberStatus = Party_GetMemberStatus(party, v2);
        Xuid = Party_GetXuid(&result, party, v2);
        v9 = XUID::ToDevString(Xuid);
        MemberName = Party_GetMemberName(party, v2);
        LODWORD(v11) = v2;
        Com_Printf(25, "[%s] PartyHost - TimeoutMembers - Party member '%s' %s ( slot %i, status %s ) is timing out of party.\n", party->partyName, MemberName, v9, v11, MemberStatus);
        PartyHost_RemovePlayer(party, v2, 0, "timedOut", NET_CLOSE_SOFT);
        if ( *p_status )
        {
          LODWORD(v12) = *p_status;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4112, ASSERT_TYPE_ASSERT, "( partyMember->status ) == ( PARTYSTATUS_EMPTY )", "%s == %s\n\t%i, %i", "partyMember->status", "PARTYSTATUS_EMPTY", v12, 0i64) )
            __debugbreak();
        }
      }
    }
    ++v2;
    p_status += 504;
  }
  while ( v2 < 200 );
}

/*
==============
PartyHost_UpdateIfPartyIsCrossplayPartyAndSetPartyDirtyIfChanged
==============
*/
void PartyHost_UpdateIfPartyIsCrossplayPartyAndSetPartyDirtyIfChanged(PartyData *party)
{
  bool v1; 
  char *platform; 
  int v3; 
  char v5; 
  char v6; 
  __int64 partyId; 
  const dvar_t *v8; 
  PartySpecificData *HostData; 
  signed int v10; 
  int *p_lastPartyStateTime; 
  const char *StringSafe; 
  const char *v13; 
  const char *v14; 

  v1 = 0;
  platform = party->partyMembers[0].info.platform;
  v3 = 0;
  v5 = 6;
  while ( 1 )
  {
    if ( Party_IsMemberPresent(party, v3) )
    {
      v6 = *platform;
      if ( v5 == 6 )
      {
        if ( v6 == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1817, ASSERT_TYPE_ASSERT, "(party->partyMembers[member].info.platform != ClientPlatform::PLATFORM_ANY)", (const char *)&queryFormat, "party->partyMembers[member].info.platform != ClientPlatform::PLATFORM_ANY") )
          __debugbreak();
        v5 = *platform;
        goto LABEL_9;
      }
      if ( v5 != v6 )
        break;
    }
LABEL_9:
    ++v3;
    platform += 504;
    if ( v3 >= 200 )
      goto LABEL_12;
  }
  v1 = 1;
LABEL_12:
  if ( party->iscrossplayParty != v1 )
  {
    partyId = (unsigned int)party->partyId;
    party->iscrossplayParty = v1;
    Com_Printf(25, "PartyHost_UpdateIfPartyIsCrossplayPartyAndSetPartyDirtyIfChanged party with id %d updated, iscrossplayParty is %d\n", partyId, v1);
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2203, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2204, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
      __debugbreak();
    if ( Party_IsRunning(party) )
    {
      v8 = DVARBOOL_party_debug;
      if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        HostData = PartyHost_GetHostData(party);
        Com_Printf(25, "[%s] PartyState changed at time %i\n", party->partyName, (unsigned int)HostData->hostData.partyStateChangeTime);
      }
      PartyHost_SetPartyStateChangeTime(party);
      v10 = 0;
      p_lastPartyStateTime = &party->partyMembers[0].lastPartyStateTime;
      do
      {
        if ( Party_IsMemberIndexDataAvailable(party, v10) )
        {
          *(_QWORD *)(p_lastPartyStateTime - 1) = 0i64;
          p_lastPartyStateTime[3] = 0;
        }
        ++v10;
        p_lastPartyStateTime += 126;
      }
      while ( v10 < 200 );
      PartyHost_UpdateSubparties(party, NULL, NULL, NULL, 1);
      Party_SetUIPlayerCount(party);
      StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
      Party_SetEntryADisplayMapName(StringSafe);
      v13 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
      Party_SetEntryBDisplayMapName(v13);
      v14 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
      Party_SetEntryCDisplayMapName(v14);
    }
  }
}

/*
==============
PartyHost_UpdateMatchStart
==============
*/
void PartyHost_UpdateMatchStart(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  const dvar_t *v4; 
  int CanHostServer; 
  unsigned int lobbyFlags; 
  unsigned int v7; 
  int v8; 
  bool IsReadyToLaunch; 
  int v10; 
  int integer; 
  int v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const char *v15; 
  const dvar_t *v16; 
  int gameStartTime; 
  const char *partyName; 
  __int64 v19; 
  int v20; 
  const dvar_t *v21; 
  int v22; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6547, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6548, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Party_IsGameLobby( party ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6549, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6550, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  if ( Party_IsPrivateOrSystemlinkGame(party) || PartyHost_ShouldStartHosting() )
  {
    CanHostServer = 1;
  }
  else
  {
    v4 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    CanHostServer = Party_CanHostServer(party, v4->current.integer);
  }
  lobbyFlags = party->lobbyFlags;
  v7 = lobbyFlags & 0xFFFFFEFF;
  v8 = lobbyFlags | 0x100;
  if ( !CanHostServer )
    v7 = v8;
  party->lobbyFlags = v7;
  IsReadyToLaunch = PartyHost_IsReadyToLaunch(party, mainActiveClient);
  PartyHost_GetHostData(party)->hostData.m_wasReadyToLaunchLastFrame = IsReadyToLaunch;
  if ( IsReadyToLaunch )
  {
    v10 = Sys_Milliseconds();
    if ( party->m_gameStartSkipCountdown )
    {
      integer = 0;
      v12 = 0;
LABEL_40:
      if ( !CanHostServer && Party_AreWeServer(party) )
        return;
      gameStartTime = party->gameStartTime;
      if ( (party->lobbyFlags & 0x64) == 4 )
      {
        if ( !gameStartTime )
        {
          if ( !Party_IsPrivateOrSystemlinkGame(party) && BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_GameStateInfo_BotsCountTowardsGameLaunch() )
            Party_ShowTeams((const LocalClientNum_t)mainActiveClient->localClientNum);
          partyName = party->partyName;
          v19 = (unsigned int)(1000 * (v12 + integer));
          party->gameStartTime = v19 + v10;
          Com_Printf(15, "[%s] Gamestate changing due to gameStartTime being set in PREMATCH state. Starting in %i ms\n", partyName, v19);
          PartyHost_GamestateChanged(party);
        }
        PartyHost_PreMatch(party, mainActiveClient->localControllerIndex);
        return;
      }
      if ( gameStartTime <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6607, ASSERT_TYPE_ASSERT, "(party->gameStartTime > 0)", (const char *)&queryFormat, "party->gameStartTime > 0") )
        __debugbreak();
      v20 = party->gameStartTime - v10;
      if ( v20 <= 1000 * v12 )
      {
        if ( (party->lobbyFlags & 0x64) == 32 )
        {
          Party_ShowTeams((const LocalClientNum_t)mainActiveClient->localClientNum);
        }
        else
        {
          party->gameStartTime = v10 + 1000 * (v12 + integer);
          Party_HideTeams((const LocalClientNum_t)mainActiveClient->localClientNum);
          Com_Printf(15, "[%s] Delaying game start due to STARTREADY not being set\n", party->partyName);
          PartyHost_GamestateChanged(party);
          if ( !Party_IsPrivateOrSystemlinkGame(party) )
            OnlineMatchmakerOmniscient::CancelStartGame(&OnlineMatchmakerOmniscient::ms_instance);
        }
      }
      v21 = DVARBOOL_allow_start_match;
      if ( !DVARBOOL_allow_start_match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "allow_start_match") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( !v21->current.enabled )
      {
        if ( party->gameStartTime - v10 < 1000 )
          party->gameStartTime = v10 + 1000;
        return;
      }
      if ( v20 > 0 )
        return;
      if ( !Party_IsPrivateOrSystemlinkGame(party) )
      {
        if ( !OnlineMatchmakerOmniscient::IsStartingGame(&OnlineMatchmakerOmniscient::ms_instance) && !OnlineMatchmakerOmniscient::HasDemonwareAckedGameStart(&OnlineMatchmakerOmniscient::ms_instance) )
        {
          OnlineMatchmakerOmniscient::ReadyToStartGame(&OnlineMatchmakerOmniscient::ms_instance);
          goto LABEL_70;
        }
        if ( OnlineMatchmakerOmniscient::IsStartingGame(&OnlineMatchmakerOmniscient::ms_instance) || !OnlineMatchmakerOmniscient::HasDemonwareAckedGameStart(&OnlineMatchmakerOmniscient::ms_instance) )
        {
LABEL_70:
          if ( nextPrintTime_4 < Sys_Milliseconds() )
          {
            Com_Printf(25, "[%s] Waiting for demonware before starting match\n", party->partyName);
            nextPrintTime_4 = Sys_Milliseconds() + 500;
          }
          return;
        }
        v22 = Party_CountMembers(party, PARTY_MEMBER_TYPE_ALL);
        PartyHost_MakeTeams(party, mainActiveClient->localControllerIndex, v22);
      }
      OnlineMatchId::ResetMatchId();
      if ( (party->lobbyFlags & 0x64) == 32 )
        PartyHost_StartMatch_Internal(party, mainActiveClient);
      else
        Com_Printf(25, "[%s] Waiting for STARTREADY\n", party->partyName);
      return;
    }
    if ( Party_IsPrivateOrSystemlinkGame(party) )
    {
      v13 = DVARINT_pt_privatePregameStartTimerLength;
      if ( !DVARINT_pt_privatePregameStartTimerLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_privatePregameStartTimerLength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      v14 = DVARINT_pt_privateGameStartTimerLength;
      integer = v13->current.integer;
      if ( DVARINT_pt_privateGameStartTimerLength )
        goto LABEL_39;
      v15 = "pt_privateGameStartTimerLength";
    }
    else
    {
      v16 = DVARINT_pt_pregameStartTimerLength;
      if ( !DVARINT_pt_pregameStartTimerLength && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_pregameStartTimerLength") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v14 = DVARINT_pt_gameStartTimerLength;
      integer = v16->current.integer;
      if ( DVARINT_pt_gameStartTimerLength )
        goto LABEL_39;
      v15 = "pt_gameStartTimerLength";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v15) )
      __debugbreak();
LABEL_39:
    Dvar_CheckFrontendServerThread(v14);
    v12 = v14->current.integer;
    goto LABEL_40;
  }
  if ( (party->lobbyFlags & 0x64) != 4 )
  {
    Com_Printf(15, "[%s] Gamestate changing due to lobbyState changing to WAITING\n", party->partyName);
    party->lobbyFlags &= 0xFFFFFF9F;
    party->lobbyFlags |= 4u;
    party->gameStartTime = 0;
    PartyHost_GamestateChanged(party);
    if ( !Party_IsPrivateOrSystemlinkGame(party) )
      OnlineMatchmakerOmniscient::CancelStartGame(&OnlineMatchmakerOmniscient::ms_instance);
  }
}

/*
==============
PartyHost_UpdateMemberConnectivity
==============
*/
void PartyHost_UpdateMemberConnectivity(PartyData *party, int memberIndex, int connectivityBits)
{
  __int64 v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2694, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    LODWORD(v6) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2695, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, 200) )
      __debugbreak();
  }
  if ( !Party_IsMemberRegistered(party, memberIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2696, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, memberIndex )") )
    __debugbreak();
  if ( !PeerMesh_IsHostConnectivitySet(party, connectivityBits) )
  {
    LODWORD(v6) = connectivityBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2697, ASSERT_TYPE_ASSERT, "( ( PeerMesh_IsHostConnectivitySet( party, connectivityBits ) ) )", "( connectivityBits ) = %i", v6) )
      __debugbreak();
  }
  if ( PeerMesh_SetClientConnectivity(party, memberIndex, connectivityBits) )
    PartyHost_MemberInfoChanged(party, memberIndex, 1);
}

/*
==============
PartyHost_UpdatePartyRestrictsF2PUsersFlag
==============
*/
void PartyHost_UpdatePartyRestrictsF2PUsersFlag(PartyData *party)
{
  bool v2; 

  v2 = PartyHost_PartyRestrictsF2PUsers(party);
  if ( party->restrictsF2PUsers != v2 )
  {
    party->restrictsF2PUsers = v2;
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
PartyHost_UpdatePlayerHiding
==============
*/
void PartyHost_UpdatePlayerHiding(PartyData *party)
{
  unsigned int lobbyFlags; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  int integer; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  const dvar_t *v9; 
  PartySpecificData *HostData; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2322, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2323, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2324, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  lobbyFlags = party->lobbyFlags;
  if ( Party_IsPrivateParty(party) )
    goto LABEL_26;
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
LABEL_26:
    party->lobbyFlags &= ~2u;
    v8 = party->lobbyFlags;
  }
  else
  {
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2334, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
      __debugbreak();
    v4 = DVARINT_party_matchedPlayerCount;
    if ( !DVARINT_party_matchedPlayerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_matchedPlayerCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    v6 = Party_CountMembers(party, PARTY_MEMBER_TYPE_ALL);
    v7 = party->lobbyFlags;
    if ( v6 < integer )
    {
      v8 = v7 | 2;
      party->lobbyFlags = v8;
    }
    else
    {
      if ( (v7 & 2) != 0 )
      {
        Party_RandomizeParty(party);
        v7 = party->lobbyFlags;
      }
      v8 = v7 & 0xFFFFFFFD;
      party->lobbyFlags = v8;
    }
  }
  if ( v8 != lobbyFlags )
  {
    PartyHost_SetPartyStateChangeTime(party);
    v9 = DVARBOOL_party_debug;
    if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      HostData = PartyHost_GetHostData(party);
      Com_Printf(25, "[%s] PartyState changed at time %i due to lobby flags changing\n", party->partyName, (unsigned int)HostData->hostData.partyStateChangeTime);
    }
    Party_SetUIPlayerCount(party);
  }
}

/*
==============
PartyHost_UpdatePlayerStatus
==============
*/
void PartyHost_UpdatePlayerStatus(PartyData *party, const int localControllerIndex, const int slot, const int newStatus)
{
  __int64 v4; 
  const dvar_t *v8; 
  char *v9; 
  PartySpecificData *HostData; 
  int v11; 
  __int64 v12; 
  int *p_lastMatchRulesAck; 
  int v14; 
  MatchRulesSnapshot *v15; 
  __int64 v16; 
  __int64 i; 
  bool IsBot; 
  const dvar_t *v19; 
  int v20; 
  __int64 v21; 
  __int64 v22; 

  v4 = slot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1265, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v21) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1266, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v21, 200) )
      __debugbreak();
  }
  v8 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
    Com_Printf(25, "[%s] Player at slot %i just connected, marking them as dirty and clearing their party state ack\n", party->partyName, (unsigned int)v4);
  PartyHost_ClearMemberBackedOutBit(party, v4);
  v9 = (char *)party + 504 * v4;
  *((_DWORD *)v9 + 651) = 0;
  *((_WORD *)v9 + 1300) = 0;
  if ( newStatus != 5 )
  {
    *((_DWORD *)v9 + 619) = 0;
    if ( *((_DWORD *)v9 + 620) )
    {
      if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1289, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
        __debugbreak();
      if ( (unsigned int)v4 >= 0xC8 )
      {
        LODWORD(v22) = 200;
        LODWORD(v21) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4633, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( g_matchRulesSnapshots )
      {
        if ( g_matchRulesSnapshotsDelta )
        {
          HostData = PartyHost_GetHostData(party);
          v11 = *((_DWORD *)v9 + 620);
          if ( v11 != HostData->hostData.matchRulesChangeTime )
          {
            if ( v11 )
            {
              v12 = 0i64;
              p_lastMatchRulesAck = &party->partyMembers[0].lastMatchRulesAck;
              while ( v12 == v4 || *((_BYTE *)p_lastMatchRulesAck + 122) < 5u || *p_lastMatchRulesAck != v11 )
              {
                ++v12;
                p_lastMatchRulesAck += 126;
                if ( v12 >= 200 )
                {
                  v14 = 0;
                  v15 = g_matchRulesSnapshots + 2;
                  v16 = 0i64;
                  while ( v15[-2].snapTime != v11 )
                  {
                    if ( v15[-1].snapTime == v11 )
                    {
                      ++v14;
                      break;
                    }
                    if ( v15->snapTime == v11 )
                    {
                      v14 += 2;
                      break;
                    }
                    if ( v15[1].snapTime == v11 )
                    {
                      v14 += 3;
                      break;
                    }
                    if ( v15[2].snapTime == v11 )
                    {
                      v14 += 4;
                      break;
                    }
                    v16 += 5i64;
                    v15 += 5;
                    v14 += 5;
                    if ( v16 >= 200 )
                      break;
                  }
                  if ( v14 != 200 )
                  {
                    for ( i = 0i64; i < 200; ++i )
                    {
                      if ( g_matchRulesSnapshotsDelta[i].fromSnapTime == v11 )
                      {
                        g_matchRulesSnapshotsDelta[i].fromSnapTime = 0;
                        g_matchRulesSnapshotsDelta[i].toSnapTime = 0;
                        g_matchRulesSnapshotsDelta[i].partitionCount = 0;
                      }
                    }
                    g_matchRulesSnapshots[v14].snapTime = 0;
                  }
                  break;
                }
              }
            }
          }
        }
      }
    }
    *((_DWORD *)v9 + 620) = 0;
    *(_QWORD *)(v9 + 2492) = 0i64;
    *(_QWORD *)(v9 + 2500) = 0i64;
    *(_QWORD *)(v9 + 2508) = 0i64;
    *(_QWORD *)(v9 + 2516) = 0i64;
    *(_QWORD *)(v9 + 2524) = 0i64;
    *(_QWORD *)(v9 + 2532) = 0i64;
    *(_QWORD *)(v9 + 2540) = 0i64;
    *(_QWORD *)(v9 + 2548) = 0i64;
    *(_QWORD *)(v9 + 2556) = 0i64;
    *(_QWORD *)(v9 + 2564) = 0i64;
    *(_QWORD *)(v9 + 2572) = 0i64;
    *(_QWORD *)(v9 + 2580) = 0i64;
  }
  *((_DWORD *)v9 + 616) = Sys_Milliseconds();
  if ( newStatus < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1299, ASSERT_TYPE_ASSERT, "( newStatus ) >= ( PARTYSTATUS_JOINED )", "%s >= %s\n\t%i, %i", "newStatus", "PARTYSTATUS_JOINED", newStatus, 3) )
    __debugbreak();
  v9[2602] = truncate_cast<unsigned char,int>(newStatus);
  IsBot = NetConnection::IsBot((NetConnection *)v9 + 76);
  *((_DWORD *)v9 + 648) = PartyHost_AssignTeam(party, localControllerIndex, v4, !IsBot);
  v19 = DVARINT_party_maxSquadSize;
  if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  LODWORD(v22) = PartyHost_AssignSquad(party, v4, v19->current.integer);
  *((_DWORD *)v9 + 649) = v22;
  LODWORD(v21) = *((_DWORD *)v9 + 648);
  Com_Printf(25, "[%s] %s member %s team %i, squad %i\n", party->partyName, "PartyHost_UpdatePlayerStatus", v9 + 2244, v21, v22);
  if ( (unsigned __int8)(v9[2602] - 4) <= 1u )
  {
    v20 = 2;
    if ( PeerMesh_InitClientConnectivity(party, v4, 0) )
      v20 = 3;
    PartyHost_MemberInfoChanged(party, v4, v20);
    if ( v9[2602] == 5 && Party_IsGameLobby(party) && !Party_IsRunning(party) )
      PartyHost_UpdateSubparties(party, NULL, NULL, NULL, 1);
  }
  else
  {
    if ( Party_IsMemberIndexDataAvailable(party, v4) )
      PartyHost_SetPartyStateChangeTime(party);
    if ( Party_IsMemberRegistered(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 1338, ASSERT_TYPE_ASSERT, "(!Party_IsMemberRegistered( party, slot ))", (const char *)&queryFormat, "!Party_IsMemberRegistered( party, slot )") )
      __debugbreak();
  }
  if ( party->migrateData.migrateActive && party->migrateData.weAreArbitrating )
    PartyMigrate_ClearMemberData(party, v4);
  PartyHost_CheckTeams(party);
}

/*
==============
PartyHost_UpdatePrivateMatchMapRotation
==============
*/
void PartyHost_UpdatePrivateMatchMapRotation(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  GameStateInfo *v3; 
  const char *v4; 
  int v5; 
  const char *v6; 

  if ( (party->lobbyFlags & 0x64) == 64 )
  {
    v3 = GameStateInfo_Get();
    if ( !v3->usingIntermission )
    {
      PartyHost_SetWaitingState(party);
      if ( !party->gameStartRequested )
        return;
      v4 = "!party->gameStartRequested";
      v5 = 9472;
      v6 = "(!party->gameStartRequested)";
      goto LABEL_29;
    }
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9453, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
      __debugbreak();
    if ( Sys_Milliseconds() > party->interEndTime )
    {
      if ( v3->usingRotation )
      {
        if ( !v3->mapRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 9460, ASSERT_TYPE_ASSERT, "(gInfo->mapRotation)", (const char *)&queryFormat, "gInfo->mapRotation") )
          __debugbreak();
        PrivateMapRotation_GetNextMapSelection(v3->mapRotation);
      }
      if ( Party_IsRunning(party) )
      {
        if ( Party_InParty(party) )
        {
          if ( Party_AreWeHost(party) )
          {
            if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
            {
              Com_Printf(25, "[%s] RequestStartMatch succeeded\n", party->partyName);
              if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 3394, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
                __debugbreak();
              party->gameStartRequested = 1;
              party->gameStartTime = 0;
              party->m_gameStartSkipCountdown = 0;
              PartyHost_SetWaitingState(party);
            }
            else
            {
              Com_PrintWarning(25, "[%s] RequestStartMatch failed: not a game lobby\n", party->partyName);
            }
          }
          else
          {
            Com_PrintWarning(25, "[%s] RequestStartMatch failed: we are not the host\n", party->partyName);
          }
        }
        else
        {
          Com_PrintWarning(25, "[%s] RequestStartMatch failed: we are not in a party\n", party->partyName);
        }
      }
      else
      {
        Com_PrintWarning(25, "[%s] RequestStartMatch failed: party system is currently inactive\n", party->partyName);
      }
      if ( !party->gameStartRequested )
      {
        v4 = "party->gameStartRequested";
        v5 = 9465;
        v6 = "(party->gameStartRequested)";
LABEL_29:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", v5, ASSERT_TYPE_ASSERT, v6, (const char *)&queryFormat, v4) )
          __debugbreak();
      }
    }
  }
}

/*
==============
PartyHost_UpdateSession
==============
*/
void PartyHost_UpdateSession(PartyData *party, const int controllerIndex, const unsigned __int64 lobbyId, const XSESSION_INFO *sessionInfo)
{
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5676, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5677, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
    __debugbreak();
  Party_ClearMembers(party);
  XSESSION_INFO::operator=(&party->session->dyn.sessionInfo, sessionInfo);
  party->m_lobbyId = lobbyId;
  PartyHost_StartPartyComplete(party, controllerIndex);
}

/*
==============
PartyHost_UpdateSubparties
==============
*/
void PartyHost_UpdateSubparties(PartyData *party, SubpartyInfo *subparties, unsigned int *subpartyCount, int *totalSkill, bool includeBots)
{
  SubpartyInfo *v9; 
  int v10; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  int *p_trueSkill; 
  char v16; 
  bool IsMemberPresent; 
  unsigned int SubpartyIndex; 
  __int64 v19; 
  __int64 v20; 
  SubpartyInfo *v21; 
  int v22; 
  SubpartyInfo *v23; 
  __int64 v24; 
  unsigned int v25; 
  int *p_subpartyIndex; 
  unsigned int v27; 
  bdSecurityID *SecurityId; 
  unsigned int v29; 
  bdSecurityID **v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v34; 
  bdSecurityID *partyIds[200]; 

  v9 = subparties;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 747, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 748, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 749, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( subparties == party->subparties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 750, ASSERT_TYPE_ASSERT, "(subparties != party->subparties)", (const char *)&queryFormat, "subparties != party->subparties") )
    __debugbreak();
  if ( subpartyCount == &party->subpartyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 751, ASSERT_TYPE_ASSERT, "(subpartyCount != &party->subpartyCount)", (const char *)&queryFormat, "subpartyCount != &party->subpartyCount") )
    __debugbreak();
  if ( (subparties == NULL) != (subpartyCount == NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 752, ASSERT_TYPE_ASSERT, "(( subparties == 0 ) == ( subpartyCount == 0 ))", (const char *)&queryFormat, "( subparties == NULL ) == ( subpartyCount == NULL )") )
    __debugbreak();
  if ( !subparties && Party_IsGameLobby(party) )
  {
    v10 = 1;
    v34 = 1i64;
    goto LABEL_23;
  }
  v34 = 0i64;
  v10 = 0;
  if ( !subparties )
  {
LABEL_23:
    v9 = party->subparties;
    subpartyCount = &party->subpartyCount;
    if ( v10 )
    {
      g_svSubparties.info[0].count = 0;
      g_svSubparties.info[0].time = Sys_Milliseconds();
      g_svSubparties.dirty = 1;
    }
  }
  memset_0(v9, 0, 0x319C0ui64);
  *subpartyCount = 0;
  if ( totalSkill )
    *totalSkill = 0;
  v11 = includeBots;
  if ( !Party_IsHostDedicated(party) )
  {
    v12 = Party_HostNum(party);
    v13 = v12;
    if ( Party_IsMemberPresent(party, v12) || includeBots && BG_GameStateInfo_IsBotMemberPresent(v13) )
    {
      ++*subpartyCount;
      partyIds[0] = &party->partyMembers[v13].info.privatePartyId;
    }
    v11 = includeBots;
  }
  v14 = 0;
  p_trueSkill = &party->partyMembers[0].info.trueSkill;
  do
  {
    v16 = 0;
    IsMemberPresent = Party_IsMemberPresent(party, v14);
    if ( v11 )
    {
      if ( !IsMemberPresent )
      {
        if ( !BG_GameStateInfo_IsBotMemberPresent(v14) )
          goto LABEL_59;
        v16 = 1;
        *p_trueSkill = BG_GameStateInfo_GetBotMember(v14)->botPlayerData.aiTrueSkillRating;
      }
    }
    else if ( !IsMemberPresent )
    {
LABEL_59:
      v23 = subparties;
      goto LABEL_60;
    }
    if ( Party_IsHost(party, v14) || Party_IsMemberLocalPlayer(party, v14) )
    {
      if ( !*subpartyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 831, ASSERT_TYPE_ASSERT, "((*subpartyCount) > 0)", (const char *)&queryFormat, "(*subpartyCount) > 0") )
        __debugbreak();
      LODWORD(v19) = 0;
    }
    else
    {
      SubpartyIndex = PartyHost_FindSubpartyIndex(party, partyIds, *subpartyCount, v14);
      v19 = SubpartyIndex;
      if ( SubpartyIndex == *subpartyCount )
      {
        if ( SubpartyIndex >= 0xC8 )
        {
          LODWORD(v32) = 200;
          LODWORD(v31) = SubpartyIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 839, ASSERT_TYPE_SANITY, "(unsigned)( partyIdx ) < (unsigned)( 200 )", "partyIdx doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v31, v32) )
            __debugbreak();
        }
        ++*subpartyCount;
        partyIds[v19] = &party->partyMembers[v14].info.privatePartyId;
      }
    }
    v20 = (unsigned int)v19;
    v21 = &v9[v20];
    v9[v20].isBot[v9[v20].count] = v16;
    v9[(unsigned int)v19].members[v9[v20].count] = v14;
    ++v21->count;
    v22 = *p_trueSkill;
    v21->skill += *p_trueSkill;
    if ( totalSkill )
      *totalSkill += v22;
    v23 = subparties;
    if ( !subparties )
    {
      p_trueSkill[65] = v19;
      if ( v34 )
      {
        v24 = g_svSubparties.info[0].count++;
        g_svSubparties.info[0].record[v24].clientNum = v14;
        g_svSubparties.info[0].record[v24].partyIdx = v19;
      }
    }
    if ( (unsigned int)(v21->count - 1) > 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 867, ASSERT_TYPE_SANITY, "( subparties[ partyIdx ].count > 0 && subparties[ partyIdx ].count <= 200 )", (const char *)&queryFormat, "subparties[ partyIdx ].count > 0 && subparties[ partyIdx ].count <= MAX_PARTY_MEMBERS") )
      __debugbreak();
    v11 = includeBots;
LABEL_60:
    ++v14;
    p_trueSkill += 126;
  }
  while ( v14 < 0xC8 );
  if ( !v23 )
  {
    v25 = 0;
    p_subpartyIndex = &party->partyMembers[0].subpartyIndex;
    do
    {
      if ( Party_IsMemberIndexDataAvailable(party, v25) && !Party_IsMemberPresent(party, v25) && (!v11 || !BG_GameStateInfo_IsBotMemberPresent(v25)) )
      {
        if ( Party_IsHost(party, v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 883, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, memberIdx ))", "%s\n\tShould not have a non-present host", "!Party_IsHost( party, memberIdx )") )
          __debugbreak();
        if ( *subpartyCount >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 884, ASSERT_TYPE_ASSERT, "((*subpartyCount) < 200)", "%s\n\tWe shouldn't get here if all the members got in their own party", "(*subpartyCount) < MAX_PARTY_MEMBERS") )
          __debugbreak();
        v27 = *subpartyCount;
        SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
        if ( bdSecurityID::operator==(SecurityId, &party->partyMembers[v25].info.privatePartyId) || bdSecurityID::operator==(&g_noPrivatePartyId, &party->partyMembers[v25].info.privatePartyId) )
        {
          v29 = v27;
        }
        else
        {
          v29 = 0;
          if ( v27 )
          {
            v30 = partyIds;
            do
            {
              if ( *(_QWORD *)&party->partyMembers[v25].info.privatePartyId == **v30 )
                break;
              ++v29;
              ++v30;
            }
            while ( v29 < v27 );
          }
        }
        if ( v29 == *subpartyCount )
          v29 = party->maxGameSlots - 1;
        *p_subpartyIndex = v29;
      }
      v11 = includeBots;
      ++v25;
      p_subpartyIndex += 126;
    }
    while ( v25 < 0xC8 );
  }
}

/*
==============
PartyHost_UpdateXnaddr
==============
*/
char PartyHost_UpdateXnaddr(PartyData *party, const XNADDR *xnaddr)
{
  XNADDR *Address; 
  const char *v5; 
  int v6; 
  int NumGameSlots; 
  unsigned int i; 
  PartyClientData *j; 
  __int64 v11; 
  __int64 v12; 
  msg_t buf; 
  unsigned __int8 data[2480]; 

  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5702, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 5703, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  Address = XSESSION_INFO::GetAddress(&party->session->dyn.sessionInfo);
  XNADDR::operator=(Address, xnaddr);
  MSG_Init(&buf, data, 2474);
  v5 = j_va("%ipa_updatexnaddr", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v5);
  MSG_WriteData(&buf, xnaddr, 84);
  v6 = 0;
  NumGameSlots = Party_GetNumGameSlots(party);
  for ( i = 0; (int)i < NumGameSlots; ++i )
  {
    if ( Party_IsMemberRegistered(party, i) && !Party_IsMemberLocalPlayer(party, i) && NetConnection::IsRelay(&party->partyMembers[i].connection) )
    {
      if ( i >= 0x20 )
      {
        LODWORD(v12) = 32;
        LODWORD(v11) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v11, v12) )
          __debugbreak();
      }
      party->specificData.hostData.pendingXnaddrUpdates.array[(unsigned __int64)i >> 5] |= 0x80000000 >> (i & 0x1F);
      NetConnection::SendReliable(&party->partyMembers[i].connection, &buf);
    }
  }
  RMsg_SendMessages();
  for ( j = &party->specificData.clientData + 3; !*(_DWORD *)&j->m_receivedGoMessage; j = (PartyClientData *)((char *)j + 4) )
  {
    if ( ++v6 )
      return 0;
  }
  return 1;
}

/*
==============
PartyHost_UseArchivedGameStateInfo
==============
*/
bool PartyHost_UseArchivedGameStateInfo(const PartyData *party)
{
  const dvar_t *v1; 
  bool result; 

  if ( Party_IsGameLobby(party) )
  {
    v1 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
      return 1;
  }
  result = Live_IsInSystemlinkLobby();
  if ( result )
    return 1;
  return result;
}

/*
==============
PartyHost_UsingAssignedTeams
==============
*/
_BOOL8 PartyHost_UsingAssignedTeams(const PartyData *party)
{
  const dvar_t *v2; 
  bool v3; 
  BOOL v4; 
  BOOL v5; 
  BOOL v6; 
  int v7; 
  int v8; 
  BOOL v9; 

  v2 = DVARINT_party_teamCount;
  if ( DVARINT_party_teamCount )
  {
    Dvar_CheckFrontendServerThread(DVARINT_party_teamCount);
    LOBYTE(v2) = v2->current.integer >= 2;
  }
  v3 = Live_IsInGameBattlesGame();
  v4 = (_BYTE)v2 && Live_IsInRestrictedMatchmakingGame();
  v5 = Party_IsServerRunning(party) || (party->lobbyFlags & 0x64) == 32 || v3;
  v6 = party->inParty && party->areWeHost && Party_IsGameLobby(party);
  v7 = v4 && v6;
  if ( v7 != Party_UsingTeams(party) )
  {
    v8 = Party_UsingTeams(party);
    v9 = v4 && v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 386, ASSERT_TYPE_SANITY, "( (isUsingTeams && isGameLobbyHost) ) == ( Party_UsingTeams( party ) )", "(isUsingTeams && isGameLobbyHost) == Party_UsingTeams( party )\n\t%i, %i", v9, v8) )
      __debugbreak();
  }
  return v6 && v4 && v5;
}

/*
==============
PartyHost_WritePartyStateFullHeader
==============
*/
void PartyHost_WritePartyStateFullHeader(PartyData *party, int destinationMemberSlot, msg_t *msg, const PartyStateWriteRecord *record)
{
  unsigned int v7; 
  int UsedBitCount; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  bool v11; 
  bool v12; 
  bool IsQueuedUpForNextTournament; 
  int MyTournamentTime; 
  int CurrentMatchId; 
  int StartingControllerIndex; 
  int CompletedGameFlags; 
  int WonByHomeGameFlags; 
  GameStateInfo *v19; 
  const dvar_t *v20; 
  char v21; 
  bool v22; 
  char v23; 
  const char *Gametype; 
  unsigned __int8 v25; 
  const dvar_t *v26; 
  unsigned __int8 v27; 
  const dvar_t *v28; 
  unsigned __int8 v29; 
  const dvar_t *v30; 
  unsigned __int8 v31; 
  const dvar_t *v32; 
  unsigned __int8 v33; 
  const dvar_t *v34; 
  unsigned __int8 v35; 
  const dvar_t *v36; 
  unsigned __int8 v37; 
  const dvar_t *v38; 
  unsigned __int8 v39; 
  const dvar_t *v40; 
  unsigned __int8 v41; 
  const dvar_t *v42; 
  unsigned __int8 v43; 
  const dvar_t *v44; 
  unsigned __int8 v45; 
  const dvar_t *v46; 
  unsigned __int8 v47; 
  const dvar_t *v48; 
  unsigned __int8 v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int NumGameSlots; 
  __int64 v56; 
  int v57; 
  const char *MapName; 
  const char *v59; 
  const dvar_t *v60; 
  const dvar_t *v61; 
  int v62; 
  int v63; 
  int DraftLoadoutTimer; 
  int DraftWeaponTimer; 
  int DraftRigTimer; 
  char ActiveGameMode; 
  msg_t *v68; 
  int AliensDifficulty; 
  const dvar_t *v70; 
  int v71; 
  LocalClientNum_t localClientNum; 
  signed int Int_Internal_DebugName; 
  __int64 v74; 
  bool v75; 
  PartySpecificData *HostData; 
  const DDLDef *Asset; 
  MatchRules *matchRules; 
  unsigned int v79; 
  __int64 i; 
  __int64 v81; 
  int GameTypeIndex; 
  PartyUIRoot UIRoot; 
  const dvar_t *v84; 
  PartyPrivacySetting PrivacySetting; 
  bool CrossplayEnabled; 
  ClientPlatform v87; 
  bool PlatformSessionHandledByHost; 
  ClientPlatform v89; 
  bool v90; 
  __int64 v91; 
  unsigned __int64 controllerIndex; 
  unsigned __int64 high_filter_out; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4242, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4243, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4244, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v7 = Party_GetGameFlags(party) & 0xFFFFFFFE;
  MSG_WriteLong(msg, 101);
  UsedBitCount = MSG_GetUsedBitCount(msg);
  MSG_WriteLong(msg, UsedBitCount);
  if ( record->totalMembers != Party_CountAllMembersEvenIfInactive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4252, ASSERT_TYPE_ASSERT, "(record->totalMembers == Party_CountAllMembersEvenIfInactive( party ))", (const char *)&queryFormat, "record->totalMembers == Party_CountAllMembersEvenIfInactive( party )") )
    __debugbreak();
  MSG_WriteByte(msg, record->totalMembers);
  MSG_WriteByte(msg, record->totalMatchRulesPackets);
  v9 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  MSG_WriteBool(msg, v9->current.enabled);
  v10 = DVARBOOL_xblive_privatematch_solo;
  if ( !DVARBOOL_xblive_privatematch_solo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch_solo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  MSG_WriteBool(msg, v10->current.enabled);
  v11 = Live_IsInSystemlinkLobby();
  MSG_WriteBool(msg, v11);
  v12 = OnlineTournament_IsInTournament() || OnlineTournament_RequestedMatchmakingBracket() || OnlineTournament_IsJoiningCommunicationChannel() || OnlineTournament_IsWaitingForMatchmakingBracket();
  MSG_WriteBool(msg, v12);
  IsQueuedUpForNextTournament = OnlineTournament_IsQueuedUpForNextTournament();
  MSG_WriteBool(msg, IsQueuedUpForNextTournament);
  if ( IsQueuedUpForNextTournament )
  {
    MyTournamentTime = OnlineTournament_GetMyTournamentTime();
    MSG_WriteLong(msg, MyTournamentTime);
  }
  MSG_WriteBool(msg, party->chosenToShowSurvey);
  if ( GameBattles_IsGameBattleActive() )
  {
    MSG_WriteBit1(msg);
    CurrentMatchId = GameBattles_GetCurrentMatchId();
    MSG_WriteLong(msg, CurrentMatchId);
    StartingControllerIndex = Party_GetStartingControllerIndex(party);
    controllerIndex = (unsigned __int64)Party_GetMainActiveClient(party, StartingControllerIndex);
    CompletedGameFlags = GameBattles_GetCompletedGameFlags(SHIDWORD(controllerIndex));
    MSG_WriteLong(msg, CompletedGameFlags);
    WonByHomeGameFlags = GameBattles_GetWonByHomeGameFlags(SHIDWORD(controllerIndex));
    MSG_WriteLong(msg, WonByHomeGameFlags);
  }
  else
  {
    MSG_WriteBit0(msg);
  }
  if ( Party_HasPrivateMatchId(party) )
  {
    MSG_WriteBit1(msg);
    PrivateMatchId::SerializeToMsg(&party->privateMatchId, msg);
  }
  else
  {
    MSG_WriteBit0(msg);
  }
  v19 = GameStateInfo_Get();
  if ( !Party_IsGameLobby(party) )
    goto LABEL_39;
  v20 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
    v21 = 1;
  else
LABEL_39:
    v21 = 0;
  v22 = !Party_IsGameLobby(party) && Live_IsInSystemlinkLobby();
  if ( v21 || v22 )
  {
    v23 = 1;
    MSG_WriteBool(msg, v19->usingRecipe);
    MSG_WriteBool(msg, v19->usingIntermission == 1);
  }
  else
  {
    v23 = 0;
  }
  MSG_WriteByte(msg, v19->usingBotsConnectType);
  MSG_WriteByte(msg, v19->usingBotsDifficulty[0]);
  MSG_WriteByte(msg, v19->usingBotsDifficulty[1]);
  MSG_WriteByte(msg, v19->usingBotsTeamLimit[0]);
  MSG_WriteByte(msg, v19->usingBotsTeamLimit[1]);
  Gametype = Party_GetGametype();
  v25 = SV_AgentSetupAgentCount(Gametype);
  MSG_WriteByte(msg, v25);
  v26 = DVARINT_com_maxStreamedBodiesMp;
  if ( !DVARINT_com_maxStreamedBodiesMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedBodiesMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  v27 = truncate_cast<unsigned char,int>(v26->current.integer);
  MSG_WriteByte(msg, v27);
  v28 = DVARINT_com_maxStreamedHeadsMp;
  if ( !DVARINT_com_maxStreamedHeadsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedHeadsMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v28);
  v29 = truncate_cast<unsigned char,int>(v28->current.integer);
  MSG_WriteByte(msg, v29);
  v30 = DVARINT_com_maxStreamedViewArmsMp;
  if ( !DVARINT_com_maxStreamedViewArmsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewArmsMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = truncate_cast<unsigned char,int>(v30->current.integer);
  MSG_WriteByte(msg, v31);
  v32 = DVARINT_com_maxStreamedWeaponsMp;
  if ( !DVARINT_com_maxStreamedWeaponsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedWeaponsMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = truncate_cast<unsigned char,int>(v32->current.integer);
  MSG_WriteByte(msg, v33);
  v34 = DVARINT_com_maxStreamedViewWeaponsMp;
  if ( !DVARINT_com_maxStreamedViewWeaponsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewWeaponsMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  v35 = truncate_cast<unsigned char,int>(v34->current.integer);
  MSG_WriteByte(msg, v35);
  v36 = DVARINT_com_maxStreamedClientModelsMp;
  if ( !DVARINT_com_maxStreamedClientModelsMp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedClientModelsMp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v36);
  v37 = truncate_cast<unsigned char,int>(v36->current.integer);
  MSG_WriteByte(msg, v37);
  v38 = DVARINT_com_maxStreamedBodiesCp;
  if ( !DVARINT_com_maxStreamedBodiesCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedBodiesCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  v39 = truncate_cast<unsigned char,int>(v38->current.integer);
  MSG_WriteByte(msg, v39);
  v40 = DVARINT_com_maxStreamedHeadsCp;
  if ( !DVARINT_com_maxStreamedHeadsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedHeadsCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v40);
  v41 = truncate_cast<unsigned char,int>(v40->current.integer);
  MSG_WriteByte(msg, v41);
  v42 = DVARINT_com_maxStreamedViewArmsCp;
  if ( !DVARINT_com_maxStreamedViewArmsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewArmsCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  v43 = truncate_cast<unsigned char,int>(v42->current.integer);
  MSG_WriteByte(msg, v43);
  v44 = DVARINT_com_maxStreamedWeaponsCp;
  if ( !DVARINT_com_maxStreamedWeaponsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedWeaponsCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  v45 = truncate_cast<unsigned char,int>(v44->current.integer);
  MSG_WriteByte(msg, v45);
  v46 = DVARINT_com_maxStreamedViewWeaponsCp;
  if ( !DVARINT_com_maxStreamedViewWeaponsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedViewWeaponsCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v46);
  v47 = truncate_cast<unsigned char,int>(v46->current.integer);
  MSG_WriteByte(msg, v47);
  v48 = DVARINT_com_maxStreamedClientModelsCp;
  if ( !DVARINT_com_maxStreamedClientModelsCp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_maxStreamedClientModelsCp") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  v49 = truncate_cast<unsigned char,int>(v48->current.integer);
  MSG_WriteByte(msg, v49);
  MSG_WriteLong(msg, v7);
  MSG_WriteLong(msg, party->lobbyFlags);
  v50 = Sys_Milliseconds();
  v51 = 0;
  v52 = party->gameStartTime - v50;
  v53 = v50;
  if ( v52 < 0 )
    v52 = 0;
  MSG_WriteLong(msg, v52);
  v54 = party->interEndTime - v53;
  if ( v54 < 0 )
    v54 = 0;
  MSG_WriteLong(msg, v54);
  NumGameSlots = Party_GetNumGameSlots(party);
  v56 = NumGameSlots;
  if ( NumGameSlots > 200 )
  {
    LODWORD(v91) = NumGameSlots;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4352, ASSERT_TYPE_ASSERT, "(numSlots <= 200)", "%s\n\tslots = %i", "numSlots <= MAX_PARTY_MEMBERS", v91) )
      __debugbreak();
  }
  MSG_WriteByte(msg, v56);
  MSG_WriteShort(msg, party->currentHost.hostNum);
  MSG_WriteBits(msg, party->migrateData.indexBits, 2u);
  if ( Party_IsPrivateParty(party) )
    MSG_WriteBits(msg, party->hostPresenceIndex, 8u);
  else
    MSG_WriteData(msg, &party->backedOutMemberBits, 32);
  MSG_WriteBool(msg, party->voting.votePassed);
  v57 = party->voting.voteEndTime - v53;
  if ( v57 < 0 )
    v57 = 0;
  MSG_WriteLong(msg, v57);
  MSG_WriteData(msg, &party->lobbySteamID, 8);
  if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
  {
    if ( Party_IsPrivateOrSystemlinkGame(party) )
    {
      MapName = Party_GetMapName();
      MSG_WriteString(msg, MapName);
      v59 = Party_GetGametype();
      MSG_WriteString(msg, v59);
      v60 = DVARBOOL_ui_hardcore;
      if ( !DVARBOOL_ui_hardcore && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_hardcore") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v60);
      MSG_WriteBool(msg, v60->current.enabled);
      v61 = DVARBOOL_ui_tactical;
      if ( !DVARBOOL_ui_tactical && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_tactical") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v61);
      MSG_WriteBool(msg, v61->current.enabled);
      v62 = Party_CheckCodcastingEnabled(party);
      MSG_WriteBool(msg, v62 == 1);
      v63 = Party_CheckTeamAssignmentEnabled(party);
      MSG_WriteBool(msg, v63 == 1);
      DraftLoadoutTimer = Party_GetDraftLoadoutTimer(party);
      MSG_WriteByte(msg, DraftLoadoutTimer);
      DraftWeaponTimer = Party_GetDraftWeaponTimer(party);
      MSG_WriteByte(msg, DraftWeaponTimer);
      DraftRigTimer = Party_GetDraftRigTimer(party);
      MSG_WriteByte(msg, DraftRigTimer);
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      v68 = msg;
      if ( ActiveGameMode == 3 )
      {
        MSG_WriteBit1(msg);
        AliensDifficulty = Party_GetAliensDifficulty(party);
        MSG_WriteByte(msg, AliensDifficulty);
        goto LABEL_124;
      }
    }
    else
    {
      if ( Playlist_CountEntries(selectedPlaylist) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4413, ASSERT_TYPE_ASSERT, "(Playlist_CountEntries( selectedPlaylist ) > 0)", (const char *)&queryFormat, "Playlist_CountEntries( selectedPlaylist ) > 0") )
        __debugbreak();
      MSG_WriteByte(msg, selectedPlaylist);
      v70 = DVARBOOL_online_matchmaking_send_party_clients_playlist_filters;
      if ( !DVARBOOL_online_matchmaking_send_party_clients_playlist_filters && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_send_party_clients_playlist_filters") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v70);
      if ( !v70->current.enabled || Party_IsMatchmakingLobby(party) )
      {
        MSG_WriteBit0(msg);
      }
      else
      {
        v71 = Party_GetStartingControllerIndex(party);
        localClientNum = Party_GetMainActiveClient(party, v71).localClientNum;
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlistCategory, "playlistCategory");
        v74 = Int_Internal_DebugName;
        Playlist_GetFiltersForCategory(localClientNum, Int_Internal_DebugName, &controllerIndex, &high_filter_out);
        MSG_WriteBit1(msg);
        MSG_WriteByte(msg, v74);
        MSG_WriteInt64(msg, controllerIndex);
        MSG_WriteInt64(msg, high_filter_out);
      }
      do
        MSG_WriteByte(msg, party->lastEntries[(party->currentEntry + v51++ + 1) % 8]);
      while ( v51 < 8 );
      if ( Party_GetPlaylistEntry(party) == 255 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4439, ASSERT_TYPE_ASSERT, "(Party_GetPlaylistEntry( party ) != 255)", (const char *)&queryFormat, "Party_GetPlaylistEntry( party ) != UNUSED_ENTRY_SLOT") )
        __debugbreak();
      MSG_WriteByte(msg, party->alternateMap);
      MSG_WriteByte(msg, party->randomMap);
      MSG_WriteByte(msg, party->axisWins);
      MSG_WriteByte(msg, party->alliesWins);
      v75 = BG_GameStateInfo_BotsCountTowardsGameLaunch();
      v68 = msg;
      if ( v75 )
      {
        MSG_WriteBit1(msg);
        goto LABEL_124;
      }
    }
    MSG_WriteBit0(v68);
  }
LABEL_124:
  MSG_WriteBool(msg, party->usesMLGRules != 0);
  if ( v23 && v19->usingRecipe )
  {
    if ( !v19->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4465, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
      __debugbreak();
    HostData = PartyHost_GetHostData(party);
    MSG_WriteLong(msg, record->matchRulesDeltaFromSnapTime);
    MSG_WriteLong(msg, HostData->hostData.matchRulesChangeTime);
    Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
    matchRules = v19->matchRules;
    v79 = -1;
    for ( i = Asset->byteSize; i; --i )
    {
      v81 = matchRules->data[0];
      matchRules = (MatchRules *)((char *)matchRules + 1);
      v79 = (v79 >> 8) ^ g_crc32Table[v81 ^ (unsigned __int8)v79];
    }
    if ( ~v79 != record->matchRulesDeltaFromSnapChecksum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4475, ASSERT_TYPE_ASSERT, "(mrChecksum == record->matchRulesDeltaFromSnapChecksum)", (const char *)&queryFormat, "mrChecksum == record->matchRulesDeltaFromSnapChecksum") )
      __debugbreak();
    MSG_WriteLong(msg, record->matchRulesDeltaFromSnapChecksum);
    GameTypeIndex = BG_MatchRulesData_GetGameTypeIndex(v19->matchRules);
    MSG_WriteShort(msg, GameTypeIndex);
  }
  Party_ValidateUIRoot(party);
  UIRoot = Party_GetUIRoot(party);
  MSG_WriteByte(msg, (unsigned __int8)UIRoot);
  if ( party->mapPackFlags <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4486, ASSERT_TYPE_ASSERT, "(party->mapPackFlags > 0)", (const char *)&queryFormat, "party->mapPackFlags > 0") )
    __debugbreak();
  MSG_WriteLong(msg, party->mapPackFlags);
  MSG_WriteData(msg, &party->ps4SessionId, 48);
  XUID::Serialize(&party->ps4PlatformHostXUID, msg);
  MSG_WriteData(msg, &party->mpsdSessionID, 16);
  XUID::Serialize(&party->xb3PlatformHostXUID, msg);
  if ( Party_IsPrivateParty(party) )
    Party_WritePrivatePartyChatData(party, msg);
  v84 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v84);
  if ( v84->current.enabled )
    Com_Printf(25, "[%s] partystate full header size = %d\n", party->partyName, (unsigned int)msg->cursize);
  Party_SetUIPlayerCount(party);
  PrivacySetting = Party_GetPrivacySetting(party);
  MSG_WriteBits(msg, PrivacySetting, 2u);
  MSG_WriteBool(msg, party->iscrossplayParty);
  CrossplayEnabled = Party_GetCrossplayEnabled(party);
  MSG_WriteBool(msg, CrossplayEnabled);
  LOBYTE(v87) = 4;
  PlatformSessionHandledByHost = Party_GetPlatformSessionHandledByHost(party, v87);
  MSG_WriteBool(msg, PlatformSessionHandledByHost);
  LOBYTE(v89) = 3;
  v90 = Party_GetPlatformSessionHandledByHost(party, v89);
  MSG_WriteBool(msg, v90);
  MSG_WriteBool(msg, party->inviteJoinsDisabledForNoJIP);
  MSG_WriteBool(msg, party->restrictsF2PUsers);
}

/*
==============
PartyHost_WritePartyStateMember
==============
*/
void PartyHost_WritePartyStateMember(PartyData *party, PartyMember *partyMember, msg_t *msg, int memberSlot)
{
  __int64 natType; 
  int cursize; 
  NetConnection *p_connection; 
  __int64 NetId; 
  const dvar_t *v12; 
  char *fmt; 
  __int64 v14; 
  XNADDR outAddr; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4146, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !partyMember && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4147, ASSERT_TYPE_ASSERT, "(partyMember)", (const char *)&queryFormat, "partyMember") )
    __debugbreak();
  if ( !Party_IsMemberDataAvailable(partyMember) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4148, ASSERT_TYPE_ASSERT, "(Party_IsMemberDataAvailable( partyMember ))", (const char *)&queryFormat, "Party_IsMemberDataAvailable( partyMember )") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4149, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  natType = partyMember->natType;
  cursize = msg->cursize;
  if ( (unsigned int)(natType - 1) > 2 )
  {
    LODWORD(v14) = partyMember->natType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4157, ASSERT_TYPE_ASSERT, "( ( natType == XONLINE_NAT_OPEN || natType == XONLINE_NAT_MODERATE || natType == XONLINE_NAT_STRICT ) )", "( natType ) = %i", v14) )
      __debugbreak();
  }
  MSG_WriteBits(msg, natType, 2u);
  MSG_WriteBits(msg, partyMember->status, 3u);
  MSG_WriteBool(msg, partyMember->isGuestAccount != 0);
  if ( !XUID::IsValid(&partyMember->playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4165, ASSERT_TYPE_ASSERT, "(partyMember->playerUID.IsValid())", (const char *)&queryFormat, "partyMember->playerUID.IsValid()") )
    __debugbreak();
  XUID::Serialize(&partyMember->playerUID, msg);
  if ( PeerMesh_IsEnabled(party) || Party_IsMemberHost(party, memberSlot) || Party_IsPrivateDSMatchHost(party, memberSlot) )
  {
    XNADDR::Clear(&outAddr);
    p_connection = &partyMember->connection;
    if ( !NetConnection::GetXnaddr(&partyMember->connection, &outAddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4173, ASSERT_TYPE_ASSERT, "((partyMember->connection.GetXnaddr( xnaddr )) == (true))", (const char *)&queryFormat, "partyMember->connection.GetXnaddr( xnaddr ) == true") )
      __debugbreak();
    MSG_WriteBool(msg, 1);
    MSG_WriteData(msg, &outAddr, 84);
  }
  else
  {
    MSG_WriteBool(msg, 0);
    p_connection = &partyMember->connection;
  }
  if ( partyMember->subpartyIndex > 1 << party->partyMembersBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4182, ASSERT_TYPE_SANITY, "( partyMember->subpartyIndex <= (1 << party->partyMembersBits) )", (const char *)&queryFormat, "partyMember->subpartyIndex <= (1 << party->partyMembersBits)") )
    __debugbreak();
  MSG_WriteBits(msg, partyMember->subpartyIndex, party->partyMembersBits);
  MSG_WriteBits(msg, partyMember->team, 8u);
  MSG_WriteBits(msg, partyMember->squad + 1, 6u);
  MSG_WriteData(msg, &partyMember->score, 2);
  MSG_WriteByte(msg, partyMember->deaths);
  MSG_WriteByte(msg, partyMember->joinType);
  NetId = NetConnection::GetNetId(p_connection);
  MSG_WriteByte(msg, NetId);
  if ( partyMember->status != 6 && (unsigned int)NetId >= 2 )
  {
    LODWORD(v14) = NetId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4200, ASSERT_TYPE_ASSERT, "(unsigned)( netId ) < (unsigned)( NS_MAXCLIENTS )", "netId doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v14, 2) )
      __debugbreak();
  }
  if ( party == Lobby_GetPartyData() && (partyMember->info.availableMapPackFlags & 2) == 0 )
    partyMember->info.availableMapPackFlags = 2;
  Party_WriteMemberInfo(party, msg, &partyMember->info);
  v12 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    LODWORD(v14) = msg->cursize;
    LODWORD(fmt) = v14 - cursize;
    Com_Printf(25, "[%s] partystate member %d size = %d, total size %d\n", party->partyName, (unsigned int)memberSlot, fmt, v14);
  }
}

/*
==============
PartyHost_WritePartyStateMembers
==============
*/
void PartyHost_WritePartyStateMembers(PartyData *party, int destinationMemberSlot, msg_t *msg, const int partyStatePartNum, const PartyStateWriteRecord *record)
{
  __int64 v7; 
  int UsedBitCount; 
  unsigned int v9; 
  NetConnection *p_connection; 
  int v11; 
  const char *v12; 
  int v13; 
  __int64 v14; 
  const dvar_t *v15; 
  const char *MemberName; 
  const char *v17; 
  int v18; 
  int v19; 
  int ClientConnectivity; 
  int ConnectivityBitsForHost; 
  const char *v22; 
  const char *v23; 
  const char *v24; 
  const dvar_t *v25; 
  int v26; 
  int v27; 
  const dvar_t *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  int v32; 
  const dvar_t *v33; 
  __int64 v34; 
  unsigned int v35; 

  v7 = destinationMemberSlot;
  MSG_WriteLong(msg, 102);
  UsedBitCount = MSG_GetUsedBitCount(msg);
  MSG_WriteLong(msg, UsedBitCount);
  v9 = 0;
  v35 = 0;
  p_connection = &party->partyMembers[0].connection;
  v11 = 0;
  while ( v9 < 0xC8 )
  {
    if ( Party_IsMemberDataAvailable((const PartyMember *)&p_connection[-8].m_localId) )
    {
      if ( BYTE2(p_connection[5].m_channel) != 1 && !NetConnection::IsOpened(p_connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4552, ASSERT_TYPE_ASSERT, "(partyMember->status == PARTYSTATUS_ZOMBIE || partyMember->connection.IsOpened())", (const char *)&queryFormat, "partyMember->status == PARTYSTATUS_ZOMBIE || partyMember->connection.IsOpened()") )
        __debugbreak();
      if ( NetConnection::IsOpened(p_connection) )
      {
        MSG_WriteByte(msg, v11);
        MSG_WriteLong(msg, v11);
        v13 = MSG_GetUsedBitCount(msg);
        MSG_WriteLong(msg, v13);
        v14 = v7;
        if ( bitarray_base<bitarray<256>>::testBit(&party->partyMembers[v7].ackedMembers, v11) )
        {
          v15 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v15);
          if ( v15->current.enabled )
          {
            MemberName = Party_GetMemberName(party, v11);
            v17 = Party_GetMemberName(party, v7);
            LODWORD(v34) = v11;
            Com_Printf(25, "[%s] Client %i (%s) is current on info about client %i (%s)\n", party->partyName, (unsigned int)v7, v17, v34, MemberName);
          }
          MSG_WriteBit0(msg);
          v18 = MSG_GetUsedBitCount(msg);
          MSG_WriteLong(msg, v18);
          goto LABEL_51;
        }
        MSG_WriteBit1(msg);
        v19 = MSG_GetUsedBitCount(msg);
        MSG_WriteLong(msg, v19);
        if ( !PeerMesh_IsEnabled(party) || bitarray_base<bitarray<256>>::testBit(&party->partyMembers[v14].connectivityAckedMembers, v11) )
        {
          MSG_WriteBit0(msg);
          v25 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v25);
          if ( v25->current.enabled )
          {
            v22 = Party_GetMemberName(party, v11);
            v23 = Party_GetMemberName(party, v7);
            v24 = "[%s] Client %i (%s) is current on connectivity info about client %i (%s)\n";
LABEL_38:
            LODWORD(v34) = v11;
            Com_Printf(25, v24, party->partyName, (unsigned int)v7, v23, v34, v22);
          }
        }
        else
        {
          MSG_WriteBit1(msg);
          if ( !PeerMesh_IsEnabled(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4121, ASSERT_TYPE_ASSERT, "(PeerMesh_IsEnabled( party ))", (const char *)&queryFormat, "PeerMesh_IsEnabled( party )") )
            __debugbreak();
          if ( Party_IsMemberRegistered(party, v11) )
          {
            ClientConnectivity = PeerMesh_GetClientConnectivity(party, v11);
          }
          else
          {
            ConnectivityBitsForHost = PeerMesh_GetConnectivityBitsForHost(party);
            ClientConnectivity = PeerMesh_GetConnectivityBitsForParty(party, v11) | ConnectivityBitsForHost;
          }
          MSG_WriteLong(msg, ClientConnectivity);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_party_debug, "party_debug") )
          {
            v22 = Party_GetMemberName(party, v11);
            v23 = Party_GetMemberName(party, v7);
            v24 = "[%s] Client %i (%s) is being sent connectivity info about client %i (%s)\n";
            goto LABEL_38;
          }
        }
        v26 = MSG_GetUsedBitCount(msg);
        MSG_WriteLong(msg, v26);
        if ( bitarray_base<bitarray<256>>::testBit(&party->partyMembers[v14].otherDataAckedMembers, v11) )
        {
          MSG_WriteBit0(msg);
          v27 = MSG_GetUsedBitCount(msg);
          MSG_WriteLong(msg, v27);
          v28 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v28);
          if ( !v28->current.enabled )
            goto LABEL_51;
          v29 = Party_GetMemberName(party, v11);
          v30 = Party_GetMemberName(party, v7);
          v31 = "[%s] Client %i (%s) is current on other data about client %i (%s)\n";
        }
        else
        {
          MSG_WriteBit1(msg);
          v32 = MSG_GetUsedBitCount(msg);
          MSG_WriteLong(msg, v32);
          PartyHost_WritePartyStateMember(party, (PartyMember *)&p_connection[-8].m_localId, msg, v11);
          v33 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v33);
          if ( !v33->current.enabled )
            goto LABEL_51;
          v29 = Party_GetMemberName(party, v11);
          v30 = Party_GetMemberName(party, v7);
          v31 = "[%s] Client %i (%s) is being sent other data about client %i (%s)\n";
        }
        LODWORD(v34) = v11;
        Com_Printf(25, v31, party->partyName, (unsigned int)v7, v30, v34, v29);
LABEL_51:
        v9 = ++v35;
        goto LABEL_11;
      }
      v12 = Party_GetMemberName(party, v11);
      Com_Printf(131097, "WARNING: [%s] Client %i (%s) has member index data available but does not have an open connection!  This shouldn't happen.\n", party->partyName, (unsigned int)v11, v12);
    }
    v9 = v35;
LABEL_11:
    ++v11;
    p_connection = (NetConnection *)((char *)p_connection + 504);
    if ( v11 >= 200 )
      break;
  }
  if ( v9 != record->totalMembers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 4623, ASSERT_TYPE_ASSERT, "(membersWritten == record->totalMembers)", (const char *)&queryFormat, "membersWritten == record->totalMembers") )
    __debugbreak();
}

/*
==============
PartyHost_WritePresenceMessageHeader
==============
*/
void PartyHost_WritePresenceMessageHeader(msg_t *newMsg, const unsigned __int8 presenceType)
{
  const char *v4; 
  unsigned __int8 ActiveGameMode; 
  const PartyData *ActiveParty; 
  bool ShouldJoinerGoToBRBlade; 

  if ( !newMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 6155, ASSERT_TYPE_ASSERT, "(newMsg)", (const char *)&queryFormat, "newMsg") )
    __debugbreak();
  g_partyData.hostPresenceIndex = (g_partyData.hostPresenceIndex + 1) % 255;
  v4 = j_va("%ipa_presence", 1i64);
  MSG_WriteString(newMsg, v4);
  MSG_WriteByte(newMsg, presenceType);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  MSG_WriteByte(newMsg, ActiveGameMode);
  MSG_WriteBits(newMsg, g_partyData.hostPresenceIndex, 8u);
  ActiveParty = Party_GetActiveParty();
  ShouldJoinerGoToBRBlade = PartyHost_ShouldJoinerGoToBRBlade(ActiveParty);
  MSG_WriteBool(newMsg, !ShouldJoinerGoToBRBlade);
}

/*
==============
Party_AddTestClients_f
==============
*/
void Party_AddTestClients_f(void)
{
  PartyData *PartyData; 
  int v1; 
  __int64 v2; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
      return;
    PartyData = Lobby_GetPartyData();
  }
  if ( Party_AreWeHost(PartyData) )
  {
    if ( Cmd_Argc() <= 1 )
    {
      PartyHost_AddTestClient(PartyData, -1);
    }
    else
    {
      v1 = Cmd_ArgInt(1);
      if ( v1 < 1 )
        v1 = 1;
      v2 = (unsigned int)v1;
      do
      {
        PartyHost_AddTestClient(PartyData, -1);
        --v2;
      }
      while ( v2 );
    }
    PartyHost_UpdateSubparties(PartyData, NULL, NULL, NULL, 1);
  }
}

/*
==============
Party_FindMemberByPlatformId
==============
*/
__int64 Party_FindMemberByPlatformId(const PartyData *party, const unsigned __int64 platformId)
{
  unsigned __int64 *p_platformId; 
  signed int v5; 

  p_platformId = &party->partyMembers[0].info.platformId;
  v5 = 0;
  while ( !Party_IsMemberIndexDataAvailable(party, v5) || *((_BYTE *)p_platformId - 4) != (unsigned __int8)GetClientPlatform() || *p_platformId != platformId )
  {
    ++v5;
    p_platformId += 63;
    if ( v5 >= 200 )
      return 0xFFFFFFFFi64;
  }
  return (unsigned int)v5;
}

/*
==============
Party_GetPlatformId
==============
*/
unsigned __int64 Party_GetPlatformId(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  int v6; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v6) )
      __debugbreak();
  }
  if ( !Party_IsMemberIndexDataAvailable(party, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyhost.cpp", 2056, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  return party->partyMembers[v2].info.platformId;
}

/*
==============
Party_RemoveTestClient_f
==============
*/
void Party_RemoveTestClient_f(void)
{
  PartyData *PartyData; 
  const char *v1; 
  __int64 v2; 
  int v3; 
  unsigned __int8 *i; 
  const char *MemberName; 
  char dest[40]; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
      return;
    PartyData = Lobby_GetPartyData();
  }
  if ( Party_AreWeHost(PartyData) && Cmd_Argc() > 1 )
  {
    v1 = Cmd_Argv(1);
    Com_sprintf(dest, 0x24ui64, "!testclient %s", v1);
    v2 = -1i64;
    do
      ++v2;
    while ( dest[v2] );
    v3 = 0;
    for ( i = &PartyData->partyMembers[0].status; ; i += 504 )
    {
      if ( *i == 6 )
      {
        MemberName = Party_GetMemberName(PartyData, v3);
        if ( !I_strnicmp(MemberName, dest, (int)v2) )
          break;
      }
      if ( ++v3 >= 200 )
        return;
    }
    PartyHost_RemoveTestClient(PartyData, v3);
  }
}

/*
==============
Party_RemoveTestClients_f
==============
*/
void Party_RemoveTestClients_f(void)
{
  PartyData *PartyData; 
  int v1; 
  unsigned __int8 *p_status; 
  int i; 

  PartyData = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
  {
    if ( !Lobby_IsInRunningLobby() )
      return;
    PartyData = Lobby_GetPartyData();
  }
  if ( Party_AreWeHost(PartyData) && Cmd_Argc() > 1 )
  {
    v1 = Cmd_ArgInt(1);
    p_status = &PartyData->partyMembers[0].status;
    for ( i = 0; i < 200; ++i )
    {
      if ( v1 <= 0 )
        break;
      if ( *p_status == 6 )
      {
        PartyHost_RemoveTestClient(PartyData, i);
        --v1;
      }
      p_status += 504;
    }
  }
}

/*
==============
Party_TestTeamCreation_f
==============
*/

void __fastcall Party_TestTeamCreation_f(double _XMM0_8)
{
  PartyHostDetails *p_currentHost; 
  __int64 v2; 
  PartyChatData *p_partyChatData; 
  __int64 v5; 
  PartyClientTaskService *p_clientTaskService; 
  __int64 v7; 
  __int64 v8; 
  PartyClientTask *m_clientTasks; 
  int v10; 
  int v11; 
  __int64 *v12; 
  unsigned int i; 
  int v14; 
  int v15; 
  unsigned __int8 *p_status; 
  XUID *p_playerUID; 
  const XUID *v18; 
  int v19; 
  int Teams; 
  int v21; 
  unsigned int v22; 
  __int64 v23; 
  const dvar_t *v24; 
  void (__fastcall *destructor)(void *); 
  __int64 v26; 
  __int64 v27; 
  XUID result; 
  PartyData party; 
  __int64 ptr[200]; 

  XUID::XUID(&party.migrateData.newHostInfo.xuid);
  party.requestBuffer.m_requests.m_readOffset = 0;
  party.requestBuffer.m_requests.m_writeOffset = 0;
  memset_0(&party.requestBuffer.m_requests.m_buffer, 0, sizeof(party.requestBuffer.m_requests.m_buffer));
  `eh vector constructor iterator'(party.partyMembers, 0x1F8ui64, 0xC8ui64, (void (__fastcall *)(void *))PartyMember::PartyMember, (void (__fastcall *)(void *))PartyMember::~PartyMember);
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&party.memberMap);
  p_currentHost = &party.currentHost;
  v2 = 2i64;
  do
  {
    NetConnection::NetConnection(p_currentHost->connections);
    p_currentHost = (PartyHostDetails *)((char *)p_currentHost + 32);
    --v2;
  }
  while ( v2 );
  XUID::XUID(&party.profileState.startingXuid);
  XUID::XUID(&party.ps4PlatformHostXUID);
  XUID::XUID(&party.xb3PlatformHostXUID);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&party.mpsdSessionData.multiplayerSession = _XMM0;
  p_partyChatData = &party.partyChatData;
  v5 = 203i64;
  do
  {
    PartyChat::PartyChat(p_partyChatData->chats);
    p_partyChatData = (PartyChatData *)((char *)p_partyChatData + 64);
    --v5;
  }
  while ( v5 );
  party.privateMatchId.m_id = 0i64;
  party.createSessionForPartyRequestData.m_taskData.party = NULL;
  party.createSessionForPartyRequestData.m_taskData.localClientNum = LOCAL_CLIENT_INVALID;
  *(_WORD *)&party.createSessionForPartyRequestData.m_taskData.taskId = 511;
  party.createSessionForPartyRequestData.m_taskData.payload = NULL;
  party.createSessionForPartyRequestData.m_taskData.payloadSize = 0;
  p_clientTaskService = &party.clientTaskService;
  v7 = 7i64;
  v8 = 7i64;
  do
  {
    PartyClientTaskHostResolver::PartyClientTaskHostResolver(p_clientTaskService->m_hostResolver);
    p_clientTaskService = (PartyClientTaskService *)((char *)p_clientTaskService + 1616);
    --v8;
  }
  while ( v8 );
  m_clientTasks = party.clientTaskService.m_clientTasks;
  do
  {
    PartyClientTask::PartyClientTask(m_clientTasks++);
    --v7;
  }
  while ( v7 );
  `eh vector constructor iterator'(ptr, 8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdSecurityID::bdSecurityID, (void (__fastcall *)(void *))bdSecurityID::~bdSecurityID);
  memset_0(&party, 0, sizeof(party));
  v10 = Cmd_LocalControllerIndex();
  party.areWeHost = 1;
  party.inParty = 1;
  party.party_systemActive = 1;
  party.subpartyCount = 0;
  party.session = &g_partySession;
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&party.memberMap);
  RotatingClientNums::Reset(&party.specificData.hostData.m_partyStateClientNums);
  v11 = 0;
  v12 = ptr;
  do
  {
    *(_BYTE *)v12 = ++v11;
    *((_BYTE *)v12 + 1) = v11;
    *((_BYTE *)v12 + 2) = v11;
    *((_BYTE *)v12 + 3) = v11;
    *((_BYTE *)v12 + 4) = v11;
    *((_BYTE *)v12 + 5) = v11;
    *((_BYTE *)v12 + 6) = v11;
    *((_BYTE *)v12++ + 7) = v11;
  }
  while ( v11 < 200 );
  for ( i = 0; i < 0x1388; ++i )
  {
    v14 = I_irand(2, 201);
    v15 = 0;
    p_status = &party.partyMembers[0].status;
    p_playerUID = &party.partyMembers[0].playerUID;
    do
    {
      if ( v15 >= v14 )
      {
        *p_status = 0;
      }
      else
      {
        *p_status = 5;
        v18 = XUID::FromUInt64(&result, 0xD36Bui64);
        XUID::operator=(p_playerUID, v18);
        *(_DWORD *)(p_status - 274) = Online_Skill_GenerateRandomSkill();
        *(_QWORD *)(p_status - 410) = ptr[I_irand(0, v14)];
      }
      ++v15;
      p_playerUID += 63;
      p_status += 504;
    }
    while ( v15 < 200 );
    v19 = Sys_Milliseconds();
    Teams = PartyHost_MakeTeams(&party, v10, v14);
    v21 = Sys_Milliseconds();
    LODWORD(v27) = Teams;
    LODWORD(v26) = party.subpartyCount;
    LODWORD(destructor) = v14;
    Com_Printf(25, "\n\nTrial %i: %i milliseconds, %i players, %i parties, %i rc\n", i, (unsigned int)(v21 - v19), destructor, v26, v27);
    PartyDebug_PrintTeams(party.subparties, party.subpartyCount);
    if ( Teams )
    {
      v22 = Party_CountTeamMembers(&party, 1, PARTY_MEMBER_TYPE_ALL);
      v23 = (unsigned int)Party_CountTeamMembers(&party, 2, PARTY_MEMBER_TYPE_ALL);
      Com_Printf(25, "%i vs %i\n", v22, v23);
      v24 = DVARINT_party_maxTeamDiff;
      if ( !DVARINT_party_maxTeamDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxTeamDiff") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v24);
      if ( (signed int)abs32(v22 - v23) > v24->current.integer )
        Com_PrintError(25, "Unbalanced teams!");
    }
  }
  `eh vector destructor iterator'(ptr, 8ui64, 0xC8ui64, (void (__fastcall *)(void *))bdSecurityID::~bdSecurityID);
  if ( party.mpsdSessionData.pendingMultiplayerSession )
    party.mpsdSessionData.pendingMultiplayerSession->__abi_Release(party.mpsdSessionData.pendingMultiplayerSession);
  if ( party.mpsdSessionData.multiplayerSession )
    party.mpsdSessionData.multiplayerSession->__abi_Release(party.mpsdSessionData.multiplayerSession);
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::~fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&party.memberMap);
  `eh vector destructor iterator'(party.partyMembers, 0x1F8ui64, 0xC8ui64, (void (__fastcall *)(void *))PartyMember::~PartyMember);
}

