/*
==============
Party_IsControllerMainActiveClient
==============
*/

int __fastcall Party_IsControllerMainActiveClient(const PartyData *party, const int controllerIndex)
{
  return ?Party_IsControllerMainActiveClient@@YAHPEBUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
Party_CheckTeamAssignmentEnabled
==============
*/

int __fastcall Party_CheckTeamAssignmentEnabled(const PartyData *party)
{
  return ?Party_CheckTeamAssignmentEnabled@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetUIRoot
==============
*/

PartyUIRoot __fastcall Party_GetUIRoot(const PartyData *party)
{
  return ?Party_GetUIRoot@@YA?AW4PartyUIRoot@@PEBUPartyData@@@Z(party);
}

/*
==============
Party_GetNumGameSlots
==============
*/

int __fastcall Party_GetNumGameSlots(const PartyData *party)
{
  return ?Party_GetNumGameSlots@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_FillInOurMemberInfo
==============
*/

void __fastcall Party_FillInOurMemberInfo(PartyData *party, int localControllerIndex, ClientAuthoritativeMemberInfo *memberInfo)
{
  ?Party_FillInOurMemberInfo@@YAXPEAUPartyData@@HPEAUClientAuthoritativeMemberInfo@@@Z(party, localControllerIndex, memberInfo);
}

/*
==============
Live_CurrentLocalMapPackFlags
==============
*/

int __fastcall Live_CurrentLocalMapPackFlags()
{
  return ?Live_CurrentLocalMapPackFlags@@YAHXZ();
}

/*
==============
Party_HasPrivateMatchId
==============
*/

bool __fastcall Party_HasPrivateMatchId(const PartyData *party)
{
  return ?Party_HasPrivateMatchId@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_SetPlatformSessionHostXUID
==============
*/

void __fastcall Party_SetPlatformSessionHostXUID(PartyData *party, XUID hostXuid, ClientPlatform platform)
{
  ?Party_SetPlatformSessionHostXUID@@YAXPEAUPartyData@@UXUID@@W4ClientPlatform@@@Z(party, hostXuid, platform);
}

/*
==============
Party_PlayCountdownSound
==============
*/

void __fastcall Party_PlayCountdownSound(const int countdownTimer)
{
  ?Party_PlayCountdownSound@@YAXH@Z(countdownTimer);
}

/*
==============
Party_SetAliensDifficulty
==============
*/

void __fastcall Party_SetAliensDifficulty(PartyData *party, int difficulty)
{
  ?Party_SetAliensDifficulty@@YAXPEAUPartyData@@H@Z(party, difficulty);
}

/*
==============
Party_GetMemberNatType
==============
*/

int __fastcall Party_GetMemberNatType(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberNatType@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_UsingTeams
==============
*/

int __fastcall Party_UsingTeams(const PartyData *party)
{
  return ?Party_UsingTeams@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberSplitscreen
==============
*/

bool __fastcall Party_IsMemberSplitscreen(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberSplitscreen@@YA_NPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_GetPlaylistEntry
==============
*/

int __fastcall Party_GetPlaylistEntry(PartyData *party)
{
  return ?Party_GetPlaylistEntry@@YAHPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetAlternateMapCount
==============
*/

int __fastcall Party_GetAlternateMapCount(const PartyData *party)
{
  return ?Party_GetAlternateMapCount@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
RotatingClientNums::NextClientNum
==============
*/

int __fastcall RotatingClientNums::NextClientNum(RotatingClientNums *this)
{
  return ?NextClientNum@RotatingClientNums@@QEAAHXZ(this);
}

/*
==============
Party_MemberIsInHostPrivateParty
==============
*/

int __fastcall Party_MemberIsInHostPrivateParty(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_MemberIsInHostPrivateParty@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_WriteMemberInfo
==============
*/

void __fastcall Party_WriteMemberInfo(PartyData *party, msg_t *msg, ClientAuthoritativeMemberInfo *memberInfo)
{
  ?Party_WriteMemberInfo@@YAXPEAUPartyData@@PEAUmsg_t@@PEAUClientAuthoritativeMemberInfo@@@Z(party, msg, memberInfo);
}

/*
==============
Party_GetAssignedTeam
==============
*/

int __fastcall Party_GetAssignedTeam(const PartyData *party, const XUID player)
{
  return ?Party_GetAssignedTeam@@YAHPEBUPartyData@@UXUID@@@Z(party, player);
}

/*
==============
Party_SetUIRoot
==============
*/

void __fastcall Party_SetUIRoot(PartyData *party, PartyUIRoot uiRoot)
{
  ?Party_SetUIRoot@@YAXPEAUPartyData@@W4PartyUIRoot@@@Z(party, uiRoot);
}

/*
==============
Party_GetPlatformSessionHandledByHost
==============
*/

bool __fastcall Party_GetPlatformSessionHandledByHost(const PartyData *party, const ClientPlatform platform)
{
  return ?Party_GetPlatformSessionHandledByHost@@YA_NPEBUPartyData@@W4ClientPlatform@@@Z(party, platform);
}

/*
==============
Party_GetCountForVoteType
==============
*/

int __fastcall Party_GetCountForVoteType(const PartyData *party, VoteType voteType)
{
  return ?Party_GetCountForVoteType@@YAHPEBUPartyData@@W4VoteType@@@Z(party, voteType);
}

/*
==============
Party_IsSessionSharable
==============
*/

int __fastcall Party_IsSessionSharable(PartyData *party)
{
  return ?Party_IsSessionSharable@@YAHPEAUPartyData@@@Z(party);
}

/*
==============
Party_PartyMemberIsPaid
==============
*/

bool __fastcall Party_PartyMemberIsPaid(PartyData *party, int playerSlot)
{
  return ?Party_PartyMemberIsPaid@@YA_NPEAUPartyData@@H@Z(party, playerSlot);
}

/*
==============
Party_CountUIVisibleMembers
==============
*/

unsigned int __fastcall Party_CountUIVisibleMembers(const PartyData *party)
{
  return ?Party_CountUIVisibleMembers@@YAIPEBUPartyData@@@Z(party);
}

/*
==============
Party_StopPartyNoUIScreenChange
==============
*/

void __fastcall Party_StopPartyNoUIScreenChange(PartyData *party)
{
  ?Party_StopPartyNoUIScreenChange@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_SetLocalMLGSpectator
==============
*/

void __fastcall Party_SetLocalMLGSpectator(PartyData *party, const int localControllerIndex, int isMLGSpectator)
{
  ?Party_SetLocalMLGSpectator@@YAXPEAUPartyData@@HH@Z(party, localControllerIndex, isMLGSpectator);
}

/*
==============
Party_StopParty
==============
*/

void __fastcall Party_StopParty(PartyData *party)
{
  ?Party_StopParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_ClearXb3SessionId
==============
*/

void __fastcall Party_ClearXb3SessionId(PartyData *party)
{
  ?Party_ClearXb3SessionId@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetSecondaryActiveController
==============
*/

int __fastcall Party_GetSecondaryActiveController(const PartyData *party)
{
  return ?Party_GetSecondaryActiveController@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_RegisterPlayerJip
==============
*/

void __fastcall Party_RegisterPlayerJip(PartyData *party, const int localControllerIndex, const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  ?Party_RegisterPlayerJip@@YAXPEAUPartyData@@HHPEBUBG_SynchronizedPlayerInfo@@@Z(party, localControllerIndex, clientNum, playerInfo);
}

/*
==============
Party_HideTeams
==============
*/

void __fastcall Party_HideTeams(const LocalClientNum_t localClientNum)
{
  ?Party_HideTeams@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Party_GetDraftWeaponTimer
==============
*/

int __fastcall Party_GetDraftWeaponTimer(const PartyData *party)
{
  return ?Party_GetDraftWeaponTimer@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetHostName
==============
*/

const char *__fastcall Party_GetHostName(const PartyData *party)
{
  return ?Party_GetHostName@@YAPEBDPEBUPartyData@@@Z(party);
}

/*
==============
Party_ClearLocalMLGSpectator
==============
*/

void __fastcall Party_ClearLocalMLGSpectator(PartyData *party)
{
  ?Party_ClearLocalMLGSpectator@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetMemberPlatform
==============
*/

ClientPlatform __fastcall Party_GetMemberPlatform(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_GetMemberPlatform@@YA?AW4ClientPlatform@@PEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_FillMatchmakingInfo
==============
*/

int __fastcall Party_FillMatchmakingInfo(const PartyData *party, const PartyActiveClient *activeClient, const XUID uid, PartyMatchmakingInfo *outMatchmakingInfo)
{
  return ?Party_FillMatchmakingInfo@@YAHPEBUPartyData@@PEBUPartyActiveClient@@UXUID@@PEAUPartyMatchmakingInfo@@@Z(party, activeClient, uid, outMatchmakingInfo);
}

/*
==============
Party_GetMapName
==============
*/

const char *__fastcall Party_GetMapName()
{
  return ?Party_GetMapName@@YAPEBDXZ();
}

/*
==============
Party_GetLocalMLGSpectator
==============
*/

int __fastcall Party_GetLocalMLGSpectator(PartyData *party, const int localControllerIndex)
{
  return ?Party_GetLocalMLGSpectator@@YAHPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_Frame_PlatformSessions
==============
*/

void __fastcall Party_Frame_PlatformSessions(PartyData *privateParty, PartyData *gameLobby)
{
  ?Party_Frame_PlatformSessions@@YAXPEAUPartyData@@0@Z(privateParty, gameLobby);
}

/*
==============
Party_CheckUpdatedPartyMemberPartyId
==============
*/

void __fastcall Party_CheckUpdatedPartyMemberPartyId(const PartyData *party, const int localControllerIndex, const unsigned int memberIndex)
{
  ?Party_CheckUpdatedPartyMemberPartyId@@YAXPEBUPartyData@@HI@Z(party, localControllerIndex, memberIndex);
}

/*
==============
Party_SetPS4SessionId
==============
*/

void __fastcall Party_SetPS4SessionId(PartyData *party, const SceNpSessionId *sessionId)
{
  ?Party_SetPS4SessionId@@YAXPEAUPartyData@@PEBUSceNpSessionId@@@Z(party, sessionId);
}

/*
==============
Party_GetMemberFullName
==============
*/

void __fastcall Party_GetMemberFullName(const PartyData *party, const int clientNum, char *nameBufferIn, const int nameBufferSizeIn)
{
  ?Party_GetMemberFullName@@YAXPEBUPartyData@@HPEADH@Z(party, clientNum, nameBufferIn, nameBufferSizeIn);
}

/*
==============
PartyHost_CachePrivateGameSettingsForDedi
==============
*/

void __fastcall PartyHost_CachePrivateGameSettingsForDedi(PartyData *party)
{
  ?PartyHost_CachePrivateGameSettingsForDedi@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsControllerAnActiveClient
==============
*/

int __fastcall Party_IsControllerAnActiveClient(const PartyData *party, const int controllerIndex)
{
  return ?Party_IsControllerAnActiveClient@@YAHPEBUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
PartyHost_SetXb3SessionId
==============
*/

void __fastcall PartyHost_SetXb3SessionId(PartyData *party, const _GUID *sessionId)
{
  ?PartyHost_SetXb3SessionId@@YAXPEAUPartyData@@U_GUID@@@Z(party, sessionId);
}

/*
==============
Party_SetNumGameSlots
==============
*/

void __fastcall Party_SetNumGameSlots(PartyData *party, const int numGameSlots)
{
  ?Party_SetNumGameSlots@@YAXPEAUPartyData@@H@Z(party, numGameSlots);
}

/*
==============
Party_GetMemberTeam
==============
*/

int __fastcall Party_GetMemberTeam(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberTeam@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_CanSignInLocalPlayers
==============
*/

bool __fastcall Party_CanSignInLocalPlayers(const PartyData *party)
{
  return ?Party_CanSignInLocalPlayers@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_StopPartyOnBackoutNoUIScreenChange
==============
*/

void __fastcall Party_StopPartyOnBackoutNoUIScreenChange(PartyData *party)
{
  ?Party_StopPartyOnBackoutNoUIScreenChange@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetInviteJoinsDisabledForNoJIP
==============
*/

bool __fastcall Party_GetInviteJoinsDisabledForNoJIP(const PartyData *party)
{
  return ?Party_GetInviteJoinsDisabledForNoJIP@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberLocalPlayer
==============
*/

int __fastcall Party_IsMemberLocalPlayer(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberLocalPlayer@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_IsInviteOnly
==============
*/

bool __fastcall Party_IsInviteOnly(const PartyData *party)
{
  return ?Party_IsInviteOnly@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_ClearLocalMLGFollower
==============
*/

void __fastcall Party_ClearLocalMLGFollower(PartyData *party, const int localControllerIndex)
{
  ?Party_ClearLocalMLGFollower@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_ClientIsInMyParty
==============
*/

int __fastcall Party_ClientIsInMyParty(int clientNum)
{
  return ?Party_ClientIsInMyParty@@YAHH@Z(clientNum);
}

/*
==============
Party_WaitAsyncRequests
==============
*/

void __fastcall Party_WaitAsyncRequests(PartyData *party)
{
  ?Party_WaitAsyncRequests@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
RotatingClientNums::Reset
==============
*/

void __fastcall RotatingClientNums::Reset(RotatingClientNums *this)
{
  ?Reset@RotatingClientNums@@QEAAXXZ(this);
}

/*
==============
Party_AddRecentPlayers
==============
*/

void __fastcall Party_AddRecentPlayers(PartyData *party, const int localControllerIndex)
{
  ?Party_AddRecentPlayers@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_DoDisbandAfterRound
==============
*/

void __fastcall Party_DoDisbandAfterRound(PartyData *party)
{
  ?Party_DoDisbandAfterRound@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_SetLastVoicePacketTime
==============
*/

void __fastcall Party_SetLastVoicePacketTime(PartyData *party, const int clientNum, const int timeReceivedMs)
{
  ?Party_SetLastVoicePacketTime@@YAXPEAUPartyData@@HH@Z(party, clientNum, timeReceivedMs);
}

/*
==============
Party_IsLoadingServer
==============
*/

int __fastcall Party_IsLoadingServer(const PartyData *party)
{
  return ?Party_IsLoadingServer@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_AreTeamsVisible
==============
*/

bool __fastcall Party_AreTeamsVisible()
{
  return ?Party_AreTeamsVisible@@YA_NXZ();
}

/*
==============
Party_GetAliensDifficulty
==============
*/

int __fastcall Party_GetAliensDifficulty(PartyData *party)
{
  return ?Party_GetAliensDifficulty@@YAHPEAUPartyData@@@Z(party);
}

/*
==============
PartyMatchmakingInfo::Serialize
==============
*/

void __fastcall PartyMatchmakingInfo::Serialize(PartyMatchmakingInfo *this, msg_t *msg)
{
  ?Serialize@PartyMatchmakingInfo@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
Party_IsMemberIndexDataAvailable
==============
*/

int __fastcall Party_IsMemberIndexDataAvailable(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberIndexDataAvailable@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_CanHostServer
==============
*/

int __fastcall Party_CanHostServer(const PartyData *party, int playerCount)
{
  return ?Party_CanHostServer@@YAHPEBUPartyData@@H@Z(party, playerCount);
}

/*
==============
Party_IsMemberHeadless
==============
*/

bool __fastcall Party_IsMemberHeadless(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberHeadless@@YA_NPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_SetDraftWeaponTimer
==============
*/

void __fastcall Party_SetDraftWeaponTimer(PartyData *party, int timer)
{
  ?Party_SetDraftWeaponTimer@@YAXPEAUPartyData@@H@Z(party, timer);
}

/*
==============
Party_ValidateMemberMap
==============
*/

void __fastcall Party_ValidateMemberMap(PartyData *party)
{
  ?Party_ValidateMemberMap@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsAnyMemberMissingMapPack
==============
*/

bool __fastcall Party_IsAnyMemberMissingMapPack()
{
  return ?Party_IsAnyMemberMissingMapPack@@YA_NXZ();
}

/*
==============
Party_GetPartyReadyUpStatus
==============
*/

bool __fastcall Party_GetPartyReadyUpStatus()
{
  return ?Party_GetPartyReadyUpStatus@@YA_NXZ();
}

/*
==============
Party_Frame
==============
*/

void __fastcall Party_Frame(PartyData *party, int controllerIndex, const int msec)
{
  ?Party_Frame@@YAXPEAUPartyData@@HH@Z(party, controllerIndex, msec);
}

/*
==============
Party_MemberHasLoopbackAddr
==============
*/

bool __fastcall Party_MemberHasLoopbackAddr(const PartyData *party, const int clientNum)
{
  return ?Party_MemberHasLoopbackAddr@@YA_NPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_GetMainActiveClient
==============
*/

PartyActiveClient __fastcall Party_GetMainActiveClient(const PartyData *party, const int originalControllerNum)
{
  return ?Party_GetMainActiveClient@@YA?AUPartyActiveClient@@PEBUPartyData@@H@Z(party, originalControllerNum);
}

/*
==============
Party_ReadMemberInfo
==============
*/

void __fastcall Party_ReadMemberInfo(msg_t *msg, ClientAuthoritativeMemberInfo *memberInfo, XUID xuid)
{
  ?Party_ReadMemberInfo@@YAXPEAUmsg_t@@PEAUClientAuthoritativeMemberInfo@@UXUID@@@Z(msg, memberInfo, xuid);
}

/*
==============
Party_ShowTeams
==============
*/

void __fastcall Party_ShowTeams(const LocalClientNum_t localClientNum)
{
  ?Party_ShowTeams@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Party_GetGametype
==============
*/

const char *__fastcall Party_GetGametype()
{
  return ?Party_GetGametype@@YAPEBDXZ();
}

/*
==============
Party_PartyMemberHasMapPack
==============
*/

bool __fastcall Party_PartyMemberHasMapPack(const PartyData *party, int playerSlot, int mapPackIndex)
{
  return ?Party_PartyMemberHasMapPack@@YA_NPEBUPartyData@@HH@Z(party, playerSlot, mapPackIndex);
}

/*
==============
Party_ClearDesiredTeamSelection
==============
*/

void __fastcall Party_ClearDesiredTeamSelection(PartyData *party)
{
  ?Party_ClearDesiredTeamSelection@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberUIVisible
==============
*/

int __fastcall Party_IsMemberUIVisible(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberUIVisible@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_IsMemberIndexAway
==============
*/

int __fastcall Party_IsMemberIndexAway(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberIndexAway@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_GetSquadAutofill
==============
*/

bool __fastcall Party_GetSquadAutofill()
{
  return ?Party_GetSquadAutofill@@YA_NXZ();
}

/*
==============
Party_MigrateClientConnections
==============
*/

void __fastcall Party_MigrateClientConnections(PartyData *party, netsrc_t localId)
{
  ?Party_MigrateClientConnections@@YAXPEAUPartyData@@W4netsrc_t@@@Z(party, localId);
}

/*
==============
Party_GetGameStartTime
==============
*/

int __fastcall Party_GetGameStartTime(const PartyData *party)
{
  return ?Party_GetGameStartTime@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMatchmakingLobby
==============
*/

bool __fastcall Party_IsMatchmakingLobby(const PartyData *party)
{
  return ?Party_IsMatchmakingLobby@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsRunning
==============
*/

int __fastcall Party_IsRunning(const PartyData *party)
{
  return ?Party_IsRunning@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_SendKeepAlives
==============
*/

void __fastcall Party_SendKeepAlives(PartyData *party, const LocalClientNum_t localClientNum)
{
  ?Party_SendKeepAlives@@YAXPEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_IsPrivateDSMatchHost
==============
*/

bool __fastcall Party_IsPrivateDSMatchHost(const PartyData *party, const int memberSlot)
{
  return ?Party_IsPrivateDSMatchHost@@YA_NPEBUPartyData@@H@Z(party, memberSlot);
}

/*
==============
Party_UnRegisterVoice
==============
*/

void __fastcall Party_UnRegisterVoice(PartyData *party, const int clientNum)
{
  ?Party_UnRegisterVoice@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_Sleep
==============
*/

void __fastcall Party_Sleep(PartyData *party)
{
  ?Party_Sleep@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsPlayerInPrivateParty
==============
*/

int __fastcall Party_IsPlayerInPrivateParty(XUID playerXuid)
{
  return ?Party_IsPlayerInPrivateParty@@YAHUXUID@@@Z(playerXuid);
}

/*
==============
Party_ReadPrivatePartyChatData
==============
*/

void __fastcall Party_ReadPrivatePartyChatData(PartyData *party, msg_t *msg)
{
  ?Party_ReadPrivatePartyChatData@@YAXPEAUPartyData@@PEAUmsg_t@@@Z(party, msg);
}

/*
==============
Party_IsMemberCommitted
==============
*/

int __fastcall Party_IsMemberCommitted(const PartyMember *member)
{
  return ?Party_IsMemberCommitted@@YAHPEBUPartyMember@@@Z(member);
}

/*
==============
Party_SleepForMatch
==============
*/

void __fastcall Party_SleepForMatch(PartyData *party)
{
  ?Party_SleepForMatch@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_ShouldCurrentSessionBeClosed
==============
*/

bool __fastcall Party_ShouldCurrentSessionBeClosed(const PartyData *party)
{
  return ?Party_ShouldCurrentSessionBeClosed@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetHostConnection
==============
*/

const NetConnection *__fastcall Party_GetHostConnection(const PartyData *party, LocalClientNum_t localClientNum)
{
  return ?Party_GetHostConnection@@YAAEBVNetConnection@@PEBUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_UnregisterPlayer
==============
*/

void __fastcall Party_UnregisterPlayer(PartyData *party, const int clientNum, const NetCloseStyle closeStyle)
{
  ?Party_UnregisterPlayer@@YAXPEAUPartyData@@HW4NetCloseStyle@@@Z(party, clientNum, closeStyle);
}

/*
==============
Party_AnyMemberOnPlatform
==============
*/

bool __fastcall Party_AnyMemberOnPlatform(const PartyData *party, const ClientPlatform platform)
{
  return ?Party_AnyMemberOnPlatform@@YA_NPEBUPartyData@@W4ClientPlatform@@@Z(party, platform);
}

/*
==============
Party_IsMemberDataAvailable
==============
*/

int __fastcall Party_IsMemberDataAvailable(const PartyMember *member)
{
  return ?Party_IsMemberDataAvailable@@YAHPEBUPartyMember@@@Z(member);
}

/*
==============
Party_GetRetailDebug
==============
*/

void __fastcall Party_GetRetailDebug(char *destString, const int maxLength)
{
  ?Party_GetRetailDebug@@YAXPEADH@Z(destString, maxLength);
}

/*
==============
Party_ClearLocalMLGFollower
==============
*/

void __fastcall Party_ClearLocalMLGFollower(PartyData *party)
{
  ?Party_ClearLocalMLGFollower@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberRegistered
==============
*/

bool __fastcall Party_IsMemberRegistered(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMemberRegistered@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_GetNatType
==============
*/

int __fastcall Party_GetNatType(const PartyData *party, const XUID xuid)
{
  return ?Party_GetNatType@@YAHPEBUPartyData@@UXUID@@@Z(party, xuid);
}

/*
==============
Party_RegisterPlayer
==============
*/

void __fastcall Party_RegisterPlayer(PartyData *party, const int localControllerIndex, const int clientNum, const XNADDR *xnaddr)
{
  ?Party_RegisterPlayer@@YAXPEAUPartyData@@HHAEBUXNADDR@@@Z(party, localControllerIndex, clientNum, xnaddr);
}

/*
==============
Party_IsRegisteredForVoiceInAnyParty
==============
*/

bool __fastcall Party_IsRegisteredForVoiceInAnyParty(const XUID xuid)
{
  return ?Party_IsRegisteredForVoiceInAnyParty@@YA_NUXUID@@@Z(xuid);
}

/*
==============
Party_UsingReadyUpFeature
==============
*/

bool __fastcall Party_UsingReadyUpFeature()
{
  return ?Party_UsingReadyUpFeature@@YA_NXZ();
}

/*
==============
Party_IsPrivateOrSystemlinkGame
==============
*/

bool __fastcall Party_IsPrivateOrSystemlinkGame(const PartyData *party)
{
  return ?Party_IsPrivateOrSystemlinkGame@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_UnregisterPlayerFromMatchmaker
==============
*/

void __fastcall Party_UnregisterPlayerFromMatchmaker(PartyData *party, const int clientNum)
{
  ?Party_UnregisterPlayerFromMatchmaker@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_GetMemberName
==============
*/

const char *__fastcall Party_GetMemberName(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberName@@YAPEBDPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_PartyMembersHaveMapPack
==============
*/

bool __fastcall Party_PartyMembersHaveMapPack(const PartyData *party, int mapPackIndex)
{
  return ?Party_PartyMembersHaveMapPack@@YA_NPEBUPartyData@@H@Z(party, mapPackIndex);
}

/*
==============
Party_WritePrivatePartyChatData
==============
*/

void __fastcall Party_WritePrivatePartyChatData(PartyData *party, msg_t *msg)
{
  ?Party_WritePrivatePartyChatData@@YAXPEAUPartyData@@PEAUmsg_t@@@Z(party, msg);
}

/*
==============
Party_ClearActiveClientData
==============
*/

void __fastcall Party_ClearActiveClientData(PartySplitscreenData *splitscreenData)
{
  ?Party_ClearActiveClientData@@YAXPEAUPartySplitscreenData@@@Z(splitscreenData);
}

/*
==============
Party_PartiesAcrossGamemodesFeatureEnabled
==============
*/

bool __fastcall Party_PartiesAcrossGamemodesFeatureEnabled()
{
  return ?Party_PartiesAcrossGamemodesFeatureEnabled@@YA_NXZ();
}

/*
==============
Party_ClearMembers
==============
*/

void __fastcall Party_ClearMembers(PartyData *party)
{
  ?Party_ClearMembers@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsHostPresent
==============
*/

int __fastcall Party_IsHostPresent(const PartyData *party)
{
  return ?Party_IsHostPresent@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetMemberIndex
==============
*/

int __fastcall Party_GetMemberIndex(const PartyData *party, const PartyMember *member)
{
  return ?Party_GetMemberIndex@@YAHPEBUPartyData@@PEBUPartyMember@@@Z(party, member);
}

/*
==============
Party_Init
==============
*/

void Party_Init(void)
{
  ?Party_Init@@YAXXZ();
}

/*
==============
Party_HandleMatchmakingInvalidPlayerInfo
==============
*/

void __fastcall Party_HandleMatchmakingInvalidPlayerInfo(PartyData *party, const int localControllerIndex)
{
  ?Party_HandleMatchmakingInvalidPlayerInfo@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_IsSearchingForPlaylistsThatDisabledInviteJoins
==============
*/

bool __fastcall Party_IsSearchingForPlaylistsThatDisabledInviteJoins()
{
  return ?Party_IsSearchingForPlaylistsThatDisabledInviteJoins@@YA_NXZ();
}

/*
==============
Party_SetCrossplayEnabled
==============
*/

void __fastcall Party_SetCrossplayEnabled(PartyData *party, const bool value)
{
  ?Party_SetCrossplayEnabled@@YAXPEAUPartyData@@_N@Z(party, value);
}

/*
==============
Party_SetLocalMLGFollower
==============
*/

void __fastcall Party_SetLocalMLGFollower(PartyData *party, const int localControllerIndex, int isMLGFollower)
{
  ?Party_SetLocalMLGFollower@@YAXPEAUPartyData@@HH@Z(party, localControllerIndex, isMLGFollower);
}

/*
==============
Party_GetMemberUsingGamepad
==============
*/

bool __fastcall Party_GetMemberUsingGamepad(const PartyData *party, const int memberIndex)
{
  return ?Party_GetMemberUsingGamepad@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_ClearMember
==============
*/

void __fastcall Party_ClearMember(PartyData *party, const int memberIndex, const NetCloseStyle closeStyle)
{
  ?Party_ClearMember@@YAXPEAUPartyData@@HW4NetCloseStyle@@@Z(party, memberIndex, closeStyle);
}

/*
==============
PartyHost_SetMigrateBackToPrivateHost
==============
*/

void __fastcall PartyHost_SetMigrateBackToPrivateHost(PartyData *party)
{
  ?PartyHost_SetMigrateBackToPrivateHost@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetSavedLobbyId
==============
*/

bool __fastcall Party_GetSavedLobbyId(const PartyData *party, unsigned __int64 *outLobbyId)
{
  return ?Party_GetSavedLobbyId@@YA_NPEBUPartyData@@PEA_K@Z(party, outLobbyId);
}

/*
==============
Party_IsPlayerMLGSpectator
==============
*/

int __fastcall Party_IsPlayerMLGSpectator(XUID playerXuid)
{
  return ?Party_IsPlayerMLGSpectator@@YAHUXUID@@@Z(playerXuid);
}

/*
==============
Party_GetHostStatus
==============
*/

const char *__fastcall Party_GetHostStatus(const PartyData *party)
{
  return ?Party_GetHostStatus@@YAPEBDPEBUPartyData@@@Z(party);
}

/*
==============
Party_RecordVote
==============
*/

void __fastcall Party_RecordVote(PartyData *party, const VoteType vote)
{
  ?Party_RecordVote@@YAXPEAUPartyData@@W4VoteType@@@Z(party, vote);
}

/*
==============
Party_OnInviteJoinEvent
==============
*/

void __fastcall Party_OnInviteJoinEvent(const int controllerIndex, const InviteJoinHSMResult result, const char *errorCode)
{
  ?Party_OnInviteJoinEvent@@YAXHW4InviteJoinHSMResult@@PEBD@Z(controllerIndex, result, errorCode);
}

/*
==============
PartyMatchmakingInfo::Deserialize
==============
*/

void __fastcall PartyMatchmakingInfo::Deserialize(PartyMatchmakingInfo *this, msg_t *msg)
{
  ?Deserialize@PartyMatchmakingInfo@@QEAAXPEAUmsg_t@@@Z(this, msg);
}

/*
==============
PartyHost_SetPrivateMatchId
==============
*/

void __fastcall PartyHost_SetPrivateMatchId(PartyData *party, const PrivateMatchId matchId)
{
  ?PartyHost_SetPrivateMatchId@@YAXPEAUPartyData@@VPrivateMatchId@@@Z(party, matchId);
}

/*
==============
Party_SetSquadAutofill
==============
*/

void __fastcall Party_SetSquadAutofill(const bool enabled)
{
  ?Party_SetSquadAutofill@@YAX_N@Z(enabled);
}

/*
==============
Party_GetPrivateMatchId
==============
*/

PrivateMatchId *__fastcall Party_GetPrivateMatchId(PrivateMatchId *result, const PartyData *party)
{
  return ?Party_GetPrivateMatchId@@YA?AVPrivateMatchId@@PEBUPartyData@@@Z(result, party);
}

/*
==============
Party_IsMLGFollower
==============
*/

int __fastcall Party_IsMLGFollower(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMLGFollower@@YAHPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_IsServerDedicated
==============
*/

int __fastcall Party_IsServerDedicated(const PartyData *party)
{
  return ?Party_IsServerDedicated@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetPlatformSessionHostXUID
==============
*/

XUID *__fastcall Party_GetPlatformSessionHostXUID(XUID *result, const PartyData *party, ClientPlatform platform)
{
  return ?Party_GetPlatformSessionHostXUID@@YA?AUXUID@@PEBUPartyData@@W4ClientPlatform@@@Z(result, party, platform);
}

/*
==============
Party_CountActivePlayersInSubparty
==============
*/

int __fastcall Party_CountActivePlayersInSubparty(const PartyData *party, int subpartyIndex)
{
  return ?Party_CountActivePlayersInSubparty@@YAHPEBUPartyData@@H@Z(party, subpartyIndex);
}

/*
==============
Party_PlayPlayerJoinSound
==============
*/

void __fastcall Party_PlayPlayerJoinSound(PartyData *party, const LocalClientNum_t localClientNum)
{
  ?Party_PlayPlayerJoinSound@@YAXPEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_SetGameFlags
==============
*/

void __fastcall Party_SetGameFlags(PartyData *party, const int flags)
{
  ?Party_SetGameFlags@@YAXPEAUPartyData@@H@Z(party, flags);
}

/*
==============
Party_AllMembersPaid
==============
*/

bool __fastcall Party_AllMembersPaid(PartyData *party, bitarray<224> *freePlayersInParty)
{
  return ?Party_AllMembersPaid@@YA_NPEAUPartyData@@AEAV?$bitarray@$0OA@@@@Z(party, freePlayersInParty);
}

/*
==============
Party_ShouldDisbandAfterRound
==============
*/

bool __fastcall Party_ShouldDisbandAfterRound(PartyData *party)
{
  return ?Party_ShouldDisbandAfterRound@@YA_NPEAUPartyData@@@Z(party);
}

/*
==============
Party_UnsetDisbandAfterRound
==============
*/

void __fastcall Party_UnsetDisbandAfterRound(PartyData *party)
{
  ?Party_UnsetDisbandAfterRound@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsGameLobby
==============
*/

bool __fastcall Party_IsGameLobby(const PartyData *party)
{
  return ?Party_IsGameLobby@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberOnPlatform
==============
*/

bool __fastcall Party_IsMemberOnPlatform(const PartyData *party, const unsigned int memberIndex, const ClientPlatform platform)
{
  return ?Party_IsMemberOnPlatform@@YA_NPEBUPartyData@@IW4ClientPlatform@@@Z(party, memberIndex, platform);
}

/*
==============
Party_IsPrivateDSMatch
==============
*/

bool __fastcall Party_IsPrivateDSMatch(const PartyData *party)
{
  return ?Party_IsPrivateDSMatch@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsHostRegistered
==============
*/

bool __fastcall Party_IsHostRegistered(const PartyData *party)
{
  return ?Party_IsHostRegistered@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_Awake
==============
*/

void __fastcall Party_Awake(PartyData *party, const int controllerIndex, const int initialJoin)
{
  ?Party_Awake@@YAXPEAUPartyData@@HH@Z(party, controllerIndex, initialJoin);
}

/*
==============
Party_GetMainActiveController
==============
*/

int __fastcall Party_GetMainActiveController(const PartyData *party)
{
  return ?Party_GetMainActiveController@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetPartyForSession
==============
*/

PartyData *__fastcall Party_GetPartyForSession(const SessionData *session)
{
  return ?Party_GetPartyForSession@@YAPEAUPartyData@@PEBUSessionData@@@Z(session);
}

/*
==============
Party_StopPartyOnBackout
==============
*/

void __fastcall Party_StopPartyOnBackout(PartyData *party)
{
  ?Party_StopPartyOnBackout@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetMemberStatus
==============
*/

const char *__fastcall Party_GetMemberStatus(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberStatus@@YAPEBDPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_GetCrossplayEnabled
==============
*/

bool __fastcall Party_GetCrossplayEnabled(const PartyData *party)
{
  return ?Party_GetCrossplayEnabled@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsGameBattleMatch
==============
*/

bool __fastcall Party_IsGameBattleMatch(const PartyData *party)
{
  return ?Party_IsGameBattleMatch@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsGameHostInPrivateParty
==============
*/

int __fastcall Party_IsGameHostInPrivateParty()
{
  return ?Party_IsGameHostInPrivateParty@@YAHXZ();
}

/*
==============
Party_IsMemberPresent
==============
*/

bool __fastcall Party_IsMemberPresent(const PartyData *party, const int clientNum)
{
  return ?Party_IsMemberPresent@@YA_NPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_UsingSquads
==============
*/

bool __fastcall Party_UsingSquads(const PartyData *party)
{
  return ?Party_UsingSquads@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_SetTeamAssignmentEnabled
==============
*/

void __fastcall Party_SetTeamAssignmentEnabled(PartyData *party, int teamAssignmentEnabled)
{
  ?Party_SetTeamAssignmentEnabled@@YAXPEAUPartyData@@H@Z(party, teamAssignmentEnabled);
}

/*
==============
Party_SetDesiredTeamSelection
==============
*/

void __fastcall Party_SetDesiredTeamSelection(PartyData *party, const int localControllerIndex, int team)
{
  ?Party_SetDesiredTeamSelection@@YAXPEAUPartyData@@HH@Z(party, localControllerIndex, team);
}

/*
==============
Party_IsMemberOnPlatform
==============
*/

bool __fastcall Party_IsMemberOnPlatform(const PartyMember *member, const ClientPlatform platform)
{
  return ?Party_IsMemberOnPlatform@@YA_NPEBUPartyMember@@W4ClientPlatform@@@Z(member, platform);
}

/*
==============
Party_CompressMessage
==============
*/

int __fastcall Party_CompressMessage(const PartyData *party, const bool useCompression, const msg_t *payload, msg_t *compressedMsg)
{
  return ?Party_CompressMessage@@YAHPEBUPartyData@@_NPEBUmsg_t@@PEAU2@@Z(party, useCompression, payload, compressedMsg);
}

/*
==============
Party_AreWePlatformSessionHost
==============
*/

bool __fastcall Party_AreWePlatformSessionHost(const PartyData *party)
{
  return ?Party_AreWePlatformSessionHost@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetStartingControllerIndex
==============
*/

int __fastcall Party_GetStartingControllerIndex(const PartyData *party)
{
  return ?Party_GetStartingControllerIndex@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyMatchmakingInfo::Reset
==============
*/

void __fastcall PartyMatchmakingInfo::Reset(PartyMatchmakingInfo *this)
{
  ?Reset@PartyMatchmakingInfo@@QEAAXXZ(this);
}

/*
==============
Party_SetLocalMLGFollowerIndex
==============
*/

void __fastcall Party_SetLocalMLGFollowerIndex(PartyData *party, const int localControllerIndex, int indexMLGFollower)
{
  ?Party_SetLocalMLGFollowerIndex@@YAXPEAUPartyData@@HH@Z(party, localControllerIndex, indexMLGFollower);
}

/*
==============
Party_GetHostConnection
==============
*/

NetConnection *__fastcall Party_GetHostConnection(PartyData *party, LocalClientNum_t localClientNum)
{
  return ?Party_GetHostConnection@@YAAEAVNetConnection@@PEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_IsGameFull
==============
*/

bool __fastcall Party_IsGameFull(const PartyData *party)
{
  return ?Party_IsGameFull@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsHostDataAvailable
==============
*/

int __fastcall Party_IsHostDataAvailable(const PartyData *party)
{
  return ?Party_IsHostDataAvailable@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_HandlePacket
==============
*/

int __fastcall Party_HandlePacket(PartyData *party, const char *c, const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  return ?Party_HandlePacket@@YAHPEAUPartyData@@PEBDW4LocalClientNum_t@@Unetadr_t@@PEAUmsg_t@@@Z(party, c, localClientNum, from, msg);
}

/*
==============
Party_HandleComError
==============
*/

void __fastcall Party_HandleComError(errorParm_t errorCode, const char *errorMessage)
{
  ?Party_HandleComError@@YAXW4errorParm_t@@PEBD@Z(errorCode, errorMessage);
}

/*
==============
Party_PrivateMatchmakingAllowed
==============
*/

int __fastcall Party_PrivateMatchmakingAllowed(const PartyData *party)
{
  return ?Party_PrivateMatchmakingAllowed@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsJoiningAGameInProgress
==============
*/

bool __fastcall Party_IsJoiningAGameInProgress(const PartyData *party)
{
  return ?Party_IsJoiningAGameInProgress@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberIndexCommitted
==============
*/

int __fastcall Party_IsMemberIndexCommitted(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberIndexCommitted@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Live_CurrentFullPartyMapPackFlags
==============
*/

int __fastcall Live_CurrentFullPartyMapPackFlags(PartyData *party)
{
  return ?Live_CurrentFullPartyMapPackFlags@@YAHPEAUPartyData@@@Z(party);
}

/*
==============
Party_CountAllMembersEvenIfInactive
==============
*/

unsigned int __fastcall Party_CountAllMembersEvenIfInactive(const PartyData *party)
{
  return ?Party_CountAllMembersEvenIfInactive@@YAIPEBUPartyData@@@Z(party);
}

/*
==============
Party_AllMembersCanPlaySubscriptionRequiredContent
==============
*/

bool __fastcall Party_AllMembersCanPlaySubscriptionRequiredContent(PartyData *party, bitarray<224> *freePlayersInParty)
{
  return ?Party_AllMembersCanPlaySubscriptionRequiredContent@@YA_NPEAUPartyData@@AEAV?$bitarray@$0OA@@@@Z(party, freePlayersInParty);
}

/*
==============
Party_PrivateDedicatedServerAllowed
==============
*/

int __fastcall Party_PrivateDedicatedServerAllowed(const PartyData *party)
{
  return ?Party_PrivateDedicatedServerAllowed@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetConnectionType
==============
*/

NetConnection::Type __fastcall Party_GetConnectionType(const PartyData *party)
{
  return ?Party_GetConnectionType@@YA?AW4Type@NetConnection@@PEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberAway
==============
*/

int __fastcall Party_IsMemberAway(const PartyMember *member)
{
  return ?Party_IsMemberAway@@YAHPEBUPartyMember@@@Z(member);
}

/*
==============
Party_CountTeamMembers
==============
*/

int __fastcall Party_CountTeamMembers(const PartyData *party, int team, PartyMemberTypes partyMembersOfType)
{
  return ?Party_CountTeamMembers@@YAHPEBUPartyData@@HW4PartyMemberTypes@@@Z(party, team, partyMembersOfType);
}

/*
==============
Party_AreAllMembersLocal
==============
*/

bool __fastcall Party_AreAllMembersLocal(const PartyData *party)
{
  return ?Party_AreAllMembersLocal@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsStoppingAfterRound
==============
*/

bool __fastcall Party_IsStoppingAfterRound(PartyData *party)
{
  return ?Party_IsStoppingAfterRound@@YA_NPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetSecondaryActiveClient
==============
*/

int __fastcall Party_GetSecondaryActiveClient(const PartyData *party, PartyActiveClient *outPartyActiveClient)
{
  return ?Party_GetSecondaryActiveClient@@YAHPEBUPartyData@@PEAUPartyActiveClient@@@Z(party, outPartyActiveClient);
}

/*
==============
Party_PartyMembersMissingMapPack
==============
*/

bool __fastcall Party_PartyMembersMissingMapPack(PartyData *party, int *playerSlot, int *mapPackIndex)
{
  return ?Party_PartyMembersMissingMapPack@@YA_NPEAUPartyData@@PEAH1@Z(party, playerSlot, mapPackIndex);
}

/*
==============
Party_GetGameFlags
==============
*/

int __fastcall Party_GetGameFlags(const PartyData *party)
{
  return ?Party_GetGameFlags@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetDraftRigTimer
==============
*/

int __fastcall Party_GetDraftRigTimer(const PartyData *party)
{
  return ?Party_GetDraftRigTimer@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetSplitscreenClientNumAtSameAddress
==============
*/

int __fastcall Party_GetSplitscreenClientNumAtSameAddress(const PartyData *party, const netadr_t *addr)
{
  return ?Party_GetSplitscreenClientNumAtSameAddress@@YAHPEBUPartyData@@Unetadr_t@@@Z(party, addr);
}

/*
==============
Party_IsHostAway
==============
*/

int __fastcall Party_IsHostAway(const PartyData *party)
{
  return ?Party_IsHostAway@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IndexPlayerMLGFollower
==============
*/

int __fastcall Party_IndexPlayerMLGFollower(XUID playerXuid)
{
  return ?Party_IndexPlayerMLGFollower@@YAHUXUID@@@Z(playerXuid);
}

/*
==============
Party_AreWeHost
==============
*/

int __fastcall Party_AreWeHost(const PartyData *party)
{
  return ?Party_AreWeHost@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_SetInviteJoinsDisabledForNoJIP
==============
*/

void __fastcall Party_SetInviteJoinsDisabledForNoJIP(PartyData *party, const bool value)
{
  ?Party_SetInviteJoinsDisabledForNoJIP@@YAXPEAUPartyData@@_N@Z(party, value);
}

/*
==============
Party_CancelWaitingDialog
==============
*/

void __fastcall Party_CancelWaitingDialog(const unsigned int partyAbortType)
{
  ?Party_CancelWaitingDialog@@YAXI@Z(partyAbortType);
}

/*
==============
Party_GetPrivacySetting
==============
*/

PartyPrivacySetting __fastcall Party_GetPrivacySetting(const PartyData *party)
{
  return ?Party_GetPrivacySetting@@YA?AW4PartyPrivacySetting@@PEBUPartyData@@@Z(party);
}

/*
==============
Party_GetClientXNAddr
==============
*/

int __fastcall Party_GetClientXNAddr(const PartyData *party, const int clientNum, XNADDR *xnaddr)
{
  return ?Party_GetClientXNAddr@@YAHPEBUPartyData@@HPEAUXNADDR@@@Z(party, clientNum, xnaddr);
}

/*
==============
Party_GetClientSkill
==============
*/

int __fastcall Party_GetClientSkill(const PartyData *party, const int clientNum)
{
  return ?Party_GetClientSkill@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_HasVotePassed
==============
*/

bool __fastcall Party_HasVotePassed()
{
  return ?Party_HasVotePassed@@YA_NXZ();
}

/*
==============
Party_GetSplitscreenClientNumAtSameAddress
==============
*/

int __fastcall Party_GetSplitscreenClientNumAtSameAddress(const PartyData *party, const int clientNum)
{
  return ?Party_GetSplitscreenClientNumAtSameAddress@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_SetDisbandAfterRound
==============
*/

void __fastcall Party_SetDisbandAfterRound(PartyData *party)
{
  ?Party_SetDisbandAfterRound@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_HasVoteBeenCast
==============
*/

bool __fastcall Party_HasVoteBeenCast()
{
  return ?Party_HasVoteBeenCast@@YA_NXZ();
}

/*
==============
Party_ResetTweakDvars
==============
*/

void Party_ResetTweakDvars(void)
{
  ?Party_ResetTweakDvars@@YAXXZ();
}

/*
==============
Party_GetMemberConnection
==============
*/

const NetConnection *__fastcall Party_GetMemberConnection(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberConnection@@YAAEBVNetConnection@@PEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_ClearOtherSplitscreenClient
==============
*/

void __fastcall Party_ClearOtherSplitscreenClient(PartySplitscreenData *splitscreenData)
{
  ?Party_ClearOtherSplitscreenClient@@YAXPEAUPartySplitscreenData@@@Z(splitscreenData);
}

/*
==============
Party_SetLocalReadyUpFlag
==============
*/

void Party_SetLocalReadyUpFlag(void)
{
  ?Party_SetLocalReadyUpFlag@@YAXXZ();
}

/*
==============
Party_CountMembersEvenIfInactive
==============
*/

int __fastcall Party_CountMembersEvenIfInactive(const PartyData *party, PartyMemberTypes partyMembersOfType)
{
  return ?Party_CountMembersEvenIfInactive@@YAHPEBUPartyData@@W4PartyMemberTypes@@@Z(party, partyMembersOfType);
}

/*
==============
Party_InitMapSelectionEntries
==============
*/

void __fastcall Party_InitMapSelectionEntries(PartyData *party)
{
  ?Party_InitMapSelectionEntries@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_SetupSplitscreenData
==============
*/

void __fastcall Party_SetupSplitscreenData(PartySplitscreenData *splitscreenData, const int mainControllerIndex, const LocalClientNum_t mainClientNum)
{
  ?Party_SetupSplitscreenData@@YAXPEAUPartySplitscreenData@@HW4LocalClientNum_t@@@Z(splitscreenData, mainControllerIndex, mainClientNum);
}

/*
==============
Party_SetCodcastingEnabled
==============
*/

void __fastcall Party_SetCodcastingEnabled(PartyData *party, int codcastingEnabled)
{
  ?Party_SetCodcastingEnabled@@YAXPEAUPartyData@@H@Z(party, codcastingEnabled);
}

/*
==============
Party_AreWeServer
==============
*/

int __fastcall Party_AreWeServer(const PartyData *party)
{
  return ?Party_AreWeServer@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_CountRegisteredMembers
==============
*/

int __fastcall Party_CountRegisteredMembers(const PartyData *party)
{
  return ?Party_CountRegisteredMembers@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_MigrateHostConnections
==============
*/

void __fastcall Party_MigrateHostConnections(PartyData *party, NetConnection *memberConnection)
{
  ?Party_MigrateHostConnections@@YAXPEAUPartyData@@AEAVNetConnection@@@Z(party, memberConnection);
}

/*
==============
Party_MemberHasHostAddress
==============
*/

int __fastcall Party_MemberHasHostAddress(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_MemberHasHostAddress@@YAHPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_IsGameClientPrivatePartyHost
==============
*/

int __fastcall Party_IsGameClientPrivatePartyHost(const int clientNum)
{
  return ?Party_IsGameClientPrivatePartyHost@@YAHH@Z(clientNum);
}

/*
==============
Party_FindMemberByXUID_AllowNotPresent
==============
*/

int __fastcall Party_FindMemberByXUID_AllowNotPresent(const PartyData *party, const XUID player)
{
  return ?Party_FindMemberByXUID_AllowNotPresent@@YAHPEBUPartyData@@UXUID@@@Z(party, player);
}

/*
==============
Party_ClearPrivateMatchId
==============
*/

void __fastcall Party_ClearPrivateMatchId(PartyData *party)
{
  ?Party_ClearPrivateMatchId@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_InParty
==============
*/

int __fastcall Party_InParty(const PartyData *party)
{
  return ?Party_InParty@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_ReadAvailableMapPackFlags
==============
*/

int __fastcall Party_ReadAvailableMapPackFlags(msg_t *msg)
{
  return ?Party_ReadAvailableMapPackFlags@@YAHPEAUmsg_t@@@Z(msg);
}

/*
==============
Party_IsMemberPresent
==============
*/

int __fastcall Party_IsMemberPresent(const PartyMember *member)
{
  return ?Party_IsMemberPresent@@YAHPEBUPartyMember@@@Z(member);
}

/*
==============
Party_MigrateHostConnection
==============
*/

void __fastcall Party_MigrateHostConnection(PartyData *party, const LocalClientNum_t localClientNum, NetConnection *memberConnection)
{
  ?Party_MigrateHostConnection@@YAXPEAUPartyData@@W4LocalClientNum_t@@AEAVNetConnection@@@Z(party, localClientNum, memberConnection);
}

/*
==============
Party_GetDraftLoadoutTimer
==============
*/

int __fastcall Party_GetDraftLoadoutTimer(const PartyData *party)
{
  return ?Party_GetDraftLoadoutTimer@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetAssignedSquad
==============
*/

int __fastcall Party_GetAssignedSquad(const PartyData *party, const XUID player)
{
  return ?Party_GetAssignedSquad@@YAHPEBUPartyData@@UXUID@@@Z(party, player);
}

/*
==============
Party_IsMLGSpectator
==============
*/

int __fastcall Party_IsMLGSpectator(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMLGSpectator@@YAHPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_IsWaitingForMembers
==============
*/

int __fastcall Party_IsWaitingForMembers(const PartyData *party)
{
  return ?Party_IsWaitingForMembers@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsPlayerMLGFollower
==============
*/

int __fastcall Party_IsPlayerMLGFollower(XUID playerXuid)
{
  return ?Party_IsPlayerMLGFollower@@YAHUXUID@@@Z(playerXuid);
}

/*
==============
Party_SetPrivacySetting
==============
*/

void __fastcall Party_SetPrivacySetting(PartyData *party, PartyPrivacySetting setting)
{
  ?Party_SetPrivacySetting@@YAXPEAUPartyData@@W4PartyPrivacySetting@@@Z(party, setting);
}

/*
==============
Party_IsMemberGuestAccount
==============
*/

int __fastcall Party_IsMemberGuestAccount(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMemberGuestAccount@@YAHPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_GetNextMapCount
==============
*/

int __fastcall Party_GetNextMapCount(const PartyData *party)
{
  return ?Party_GetNextMapCount@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_DlogDisconnect
==============
*/

bool __fastcall Party_DlogDisconnect(PartyData *party, const LocalClientNum_t localClientNum, const char *message, const PartyDisconnectReason reason, const PartyJoinResponse joinResponse)
{
  return ?Party_DlogDisconnect@@YA_NPEAUPartyData@@W4LocalClientNum_t@@PEBDW4PartyDisconnectReason@@W4PartyJoinResponse@@@Z(party, localClientNum, message, reason, joinResponse);
}

/*
==============
Party_IsPlayerOurPrivatePartyHost
==============
*/

int __fastcall Party_IsPlayerOurPrivatePartyHost(XUID playerXuid)
{
  return ?Party_IsPlayerOurPrivatePartyHost@@YAHUXUID@@@Z(playerXuid);
}

/*
==============
Party_FindMemberByXUID_Internal
==============
*/

bool __fastcall Party_FindMemberByXUID_Internal(const PartyData *const party, const XUID player, int *outMemberIndex)
{
  return ?Party_FindMemberByXUID_Internal@@YA_NQEBUPartyData@@UXUID@@PEAH@Z(party, player, outMemberIndex);
}

/*
==============
Party_GetRandomMapCount
==============
*/

int __fastcall Party_GetRandomMapCount(const PartyData *party)
{
  return ?Party_GetRandomMapCount@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsCrossplayParty
==============
*/

bool __fastcall Party_IsCrossplayParty(const PartyData *party)
{
  return ?Party_IsCrossplayParty@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Live_CurrentDesiredLobbyMapPackFlags
==============
*/

int __fastcall Live_CurrentDesiredLobbyMapPackFlags(const int playlistId)
{
  return ?Live_CurrentDesiredLobbyMapPackFlags@@YAHH@Z(playlistId);
}

/*
==============
Party_GetPlatformSessionHostXUIDForCurrentPlatform
==============
*/

XUID *__fastcall Party_GetPlatformSessionHostXUIDForCurrentPlatform(XUID *result, const PartyData *party)
{
  return ?Party_GetPlatformSessionHostXUIDForCurrentPlatform@@YA?AUXUID@@PEBUPartyData@@@Z(result, party);
}

/*
==============
Party_GetLocalMLGFollower
==============
*/

int __fastcall Party_GetLocalMLGFollower(PartyData *party, const int localControllerIndex)
{
  return ?Party_GetLocalMLGFollower@@YAHPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_RandomizeParty
==============
*/

void __fastcall Party_RandomizeParty(PartyData *party)
{
  ?Party_RandomizeParty@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_ChooseNextPlaylist
==============
*/

void __fastcall Party_ChooseNextPlaylist(const int localControllerIndex)
{
  ?Party_ChooseNextPlaylist@@YAXH@Z(localControllerIndex);
}

/*
==============
Party_PartyMemberHasOnlineSubscription
==============
*/

bool __fastcall Party_PartyMemberHasOnlineSubscription(PartyData *party, int playerSlot)
{
  return ?Party_PartyMemberHasOnlineSubscription@@YA_NPEAUPartyData@@H@Z(party, playerSlot);
}

/*
==============
Party_SetNatTypeForXuid
==============
*/

void __fastcall Party_SetNatTypeForXuid(PartyData *party, const XUID xuid, int natType)
{
  ?Party_SetNatTypeForXuid@@YAXPEAUPartyData@@UXUID@@H@Z(party, xuid, natType);
}

/*
==============
Party_SetUsesMLGRules
==============
*/

void __fastcall Party_SetUsesMLGRules(PartyData *party, int usesMLGRules)
{
  ?Party_SetUsesMLGRules@@YAXPEAUPartyData@@H@Z(party, usesMLGRules);
}

/*
==============
Party_IsAnyMemberSplitscreened
==============
*/

int __fastcall Party_IsAnyMemberSplitscreened(const PartyData *party)
{
  return ?Party_IsAnyMemberSplitscreened@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsHost
==============
*/

bool __fastcall Party_IsHost(const PartyData *party, const int memberIndex)
{
  return ?Party_IsHost@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_SetMuted
==============
*/

void __fastcall Party_SetMuted(PartyData *party, const int memberIndex, const bool muted)
{
  ?Party_SetMuted@@YAXPEAUPartyData@@H_N@Z(party, memberIndex, muted);
}

/*
==============
Party_IsHostDedicated
==============
*/

bool __fastcall Party_IsHostDedicated(const PartyData *party)
{
  return ?Party_IsHostDedicated@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsMemberSplitscreenPrimary
==============
*/

bool __fastcall Party_IsMemberSplitscreenPrimary(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberSplitscreenPrimary@@YA_NPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
Party_LostPrivatePartyPlayer
==============
*/

void __fastcall Party_LostPrivatePartyPlayer(const int controllerIndex, XUID removedPlayerXuid, const int clearImmediately, const int tellThem)
{
  ?Party_LostPrivatePartyPlayer@@YAXHUXUID@@HH@Z(controllerIndex, removedPlayerXuid, clearImmediately, tellThem);
}

/*
==============
Party_CanAllMembersInPartyPlayGameType
==============
*/

bool __fastcall Party_CanAllMembersInPartyPlayGameType(const PartyData *party, const char *gameType)
{
  return ?Party_CanAllMembersInPartyPlayGameType@@YA_NPEBUPartyData@@PEBD@Z(party, gameType);
}

/*
==============
Party_IndexMLGFollower
==============
*/

int __fastcall Party_IndexMLGFollower(const PartyData *party, const int memberIndex)
{
  return ?Party_IndexMLGFollower@@YAHPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_IsServerRunning
==============
*/

int __fastcall Party_IsServerRunning(const PartyData *party)
{
  return ?Party_IsServerRunning@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_CheckUsesMLGRules
==============
*/

int __fastcall Party_CheckUsesMLGRules(const PartyData *party)
{
  return ?Party_CheckUsesMLGRules@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsPlatformIdInAnyParty
==============
*/

bool __fastcall Party_IsPlatformIdInAnyParty(const unsigned __int64 platformId, PartyType *typeOfPartyTheUserIsIn)
{
  return ?Party_IsPlatformIdInAnyParty@@YA_N_KAEAW4PartyType@@@Z(platformId, typeOfPartyTheUserIsIn);
}

/*
==============
Party_GetActiveParty
==============
*/

PartyData *__fastcall Party_GetActiveParty()
{
  return ?Party_GetActiveParty@@YAPEAUPartyData@@XZ();
}

/*
==============
Party_GetSplitscreenData
==============
*/

PartySplitscreenData *__fastcall Party_GetSplitscreenData(PartyData *party)
{
  return ?Party_GetSplitscreenData@@YAPEAUPartySplitscreenData@@PEAUPartyData@@@Z(party);
}

/*
==============
Party_RegisterVoice
==============
*/

void __fastcall Party_RegisterVoice(PartyData *party, const int clientNum)
{
  ?Party_RegisterVoice@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_HostNum
==============
*/

int __fastcall Party_HostNum(const PartyData *party)
{
  return ?Party_HostNum@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetMemberHeadset
==============
*/

bool __fastcall Party_GetMemberHeadset(const PartyData *party, const int memberIndex)
{
  return ?Party_GetMemberHeadset@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_DumpInfo
==============
*/

void __fastcall Party_DumpInfo(PartyData *party, const char *reasonMsg)
{
  ?Party_DumpInfo@@YAXPEAUPartyData@@PEBD@Z(party, reasonMsg);
}

/*
==============
Party_AreMembersInSameSubparty
==============
*/

bool __fastcall Party_AreMembersInSameSubparty(const PartyData *party, const int memberIndex1, const int memberIndex2)
{
  return ?Party_AreMembersInSameSubparty@@YA_NPEBUPartyData@@HH@Z(party, memberIndex1, memberIndex2);
}

/*
==============
Party_SetXb3SessionId
==============
*/

void __fastcall Party_SetXb3SessionId(PartyData *party, const _GUID *sessionId)
{
  ?Party_SetXb3SessionId@@YAXPEAUPartyData@@U_GUID@@@Z(party, sessionId);
}

/*
==============
Party_IsHostCommitted
==============
*/

int __fastcall Party_IsHostCommitted(const PartyData *party)
{
  return ?Party_IsHostCommitted@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetActiveClientForLocalClientNum
==============
*/

PartyActiveClient __fastcall Party_GetActiveClientForLocalClientNum(const PartyData *party, const LocalClientNum_t localClientNum)
{
  return ?Party_GetActiveClientForLocalClientNum@@YA?AUPartyActiveClient@@PEBUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_CompareSession
==============
*/

bool __fastcall Party_CompareSession(const PartyData *party, const XSESSION_INFO *sessionInfo)
{
  return ?Party_CompareSession@@YA_NPEBUPartyData@@PEBVXSESSION_INFO@@@Z(party, sessionInfo);
}

/*
==============
Party_CountMembers
==============
*/

int __fastcall Party_CountMembers(const PartyData *party, PartyMemberTypes partyMembersOfType)
{
  return ?Party_CountMembers@@YAHPEBUPartyData@@W4PartyMemberTypes@@@Z(party, partyMembersOfType);
}

/*
==============
Party_GetXUIDFromBattleNetGameAccountId
==============
*/

bool __fastcall Party_GetXUIDFromBattleNetGameAccountId(const PartyData *party, const int gameAccountId, XUID *xuidOut)
{
  return ?Party_GetXUIDFromBattleNetGameAccountId@@YA_NPEBUPartyData@@HAEAUXUID@@@Z(party, gameAccountId, xuidOut);
}

/*
==============
Party_GetXuidOfTheFirstMemberInPartyOnCurrentPlatform
==============
*/

XUID *__fastcall Party_GetXuidOfTheFirstMemberInPartyOnCurrentPlatform(XUID *result, const PartyData *party)
{
  return ?Party_GetXuidOfTheFirstMemberInPartyOnCurrentPlatform@@YA?AUXUID@@PEBUPartyData@@@Z(result, party);
}

/*
==============
Party_GetLocalMLGFollowerIndex
==============
*/

int __fastcall Party_GetLocalMLGFollowerIndex(PartyData *party, const int localControllerIndex)
{
  return ?Party_GetLocalMLGFollowerIndex@@YAHPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
Party_IsPlayerInAnyParty
==============
*/

bool __fastcall Party_IsPlayerInAnyParty(XUID userId, PartyType *typeOfPartyTheUserIsIn)
{
  return ?Party_IsPlayerInAnyParty@@YA_NUXUID@@AEAW4PartyType@@@Z(userId, typeOfPartyTheUserIsIn);
}

/*
==============
Party_IsRegisteredForVoice
==============
*/

bool __fastcall Party_IsRegisteredForVoice(const PartyData *party, const int clientNum)
{
  return ?Party_IsRegisteredForVoice@@YA_NPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_IsMemberInfoVisible
==============
*/

int __fastcall Party_IsMemberInfoVisible(const PartyData *party, XUID myXuid, const unsigned int memberIndex)
{
  return ?Party_IsMemberInfoVisible@@YAHPEBUPartyData@@UXUID@@I@Z(party, myXuid, memberIndex);
}

/*
==============
Party_GetLocalReadyUpFlag
==============
*/

bool __fastcall Party_GetLocalReadyUpFlag()
{
  return ?Party_GetLocalReadyUpFlag@@YA_NXZ();
}

/*
==============
Party_GetHostXuid
==============
*/

XUID *__fastcall Party_GetHostXuid(XUID *result, const PartyData *party)
{
  return ?Party_GetHostXuid@@YA?AUXUID@@PEBUPartyData@@@Z(result, party);
}

/*
==============
Party_IsPrivatePresence
==============
*/

bool __fastcall Party_IsPrivatePresence(const PartyData *party)
{
  return ?Party_IsPrivatePresence@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_SetMapPackFlags
==============
*/

void __fastcall Party_SetMapPackFlags(PartyData *party, const int flags)
{
  ?Party_SetMapPackFlags@@YAXPEAUPartyData@@H@Z(party, flags);
}

/*
==============
Party_UpdateMissingMapPackDvar
==============
*/

void Party_UpdateMissingMapPackDvar(void)
{
  ?Party_UpdateMissingMapPackDvar@@YAXXZ();
}

/*
==============
PartyHost_SetPrivateDediReady
==============
*/

void __fastcall PartyHost_SetPrivateDediReady(PartyData *party, const bool isReady)
{
  ?PartyHost_SetPrivateDediReady@@YAXPEAUPartyData@@_N@Z(party, isReady);
}

/*
==============
Party_UsingLobbyMerge
==============
*/

bool __fastcall Party_UsingLobbyMerge(const PartyData *party)
{
  return ?Party_UsingLobbyMerge@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_PrimaryMapVetoed
==============
*/

void __fastcall Party_PrimaryMapVetoed(const int localControllerIndex, VoteType vote)
{
  ?Party_PrimaryMapVetoed@@YAXHW4VoteType@@@Z(localControllerIndex, vote);
}

/*
==============
Party_ValidateUIRoot
==============
*/

void __fastcall Party_ValidateUIRoot(const PartyData *party)
{
  ?Party_ValidateUIRoot@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsTheActiveParty
==============
*/

int __fastcall Party_IsTheActiveParty(PartyData *party)
{
  return ?Party_IsTheActiveParty@@YAHPEAUPartyData@@@Z(party);
}

/*
==============
Party_CountMembersWithDataAvailable
==============
*/

int __fastcall Party_CountMembersWithDataAvailable(const PartyData *party)
{
  return ?Party_CountMembersWithDataAvailable@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetOurPrivatePartyId
==============
*/

bool __fastcall Party_GetOurPrivatePartyId(bdSecurityID *outKid)
{
  return ?Party_GetOurPrivatePartyId@@YA_NAEAVbdSecurityID@@@Z(outKid);
}

/*
==============
Party_IsMuted
==============
*/

bool __fastcall Party_IsMuted(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMuted@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_IsServer
==============
*/

bool __fastcall Party_IsServer(const PartyData *party, const int memberIndex)
{
  return ?Party_IsServer@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_SetDraftRigTimer
==============
*/

void __fastcall Party_SetDraftRigTimer(PartyData *party, int timer)
{
  ?Party_SetDraftRigTimer@@YAXPEAUPartyData@@H@Z(party, timer);
}

/*
==============
Party_GetMemberGamertagSuffix
==============
*/

unsigned int __fastcall Party_GetMemberGamertagSuffix(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberGamertagSuffix@@YAIPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_PlayPlayerLeaveSound
==============
*/

void __fastcall Party_PlayPlayerLeaveSound(PartyData *party, const LocalClientNum_t localClientNum)
{
  ?Party_PlayPlayerLeaveSound@@YAXPEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
Party_ClearLocalReadyUpFlag
==============
*/

void Party_ClearLocalReadyUpFlag(void)
{
  ?Party_ClearLocalReadyUpFlag@@YAXXZ();
}

/*
==============
Party_GetXuid
==============
*/

XUID *__fastcall Party_GetXuid(XUID *result, const PartyData *party, const int memberIndex)
{
  return ?Party_GetXuid@@YA?AUXUID@@PEBUPartyData@@H@Z(result, party, memberIndex);
}

/*
==============
Party_SetPlatformSessionHandledByHost
==============
*/

void __fastcall Party_SetPlatformSessionHandledByHost(PartyData *party, const ClientPlatform platform, bool value)
{
  ?Party_SetPlatformSessionHandledByHost@@YAXPEAUPartyData@@W4ClientPlatform@@_N@Z(party, platform, value);
}

/*
==============
PartyHostDetails::Init
==============
*/

void __fastcall PartyHostDetails::Init(PartyHostDetails *this, PartyData *party, NetConnection *joinConnections)
{
  ?Init@PartyHostDetails@@QEAAXPEAUPartyData@@QEAVNetConnection@@@Z(this, party, joinConnections);
}

/*
==============
Party_SetDraftLoadoutTimer
==============
*/

void __fastcall Party_SetDraftLoadoutTimer(PartyData *party, int timer)
{
  ?Party_SetDraftLoadoutTimer@@YAXPEAUPartyData@@H@Z(party, timer);
}

/*
==============
Party_IsPrivateParty
==============
*/

bool __fastcall Party_IsPrivateParty(const PartyData *party)
{
  return ?Party_IsPrivateParty@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_SetupVoteEntries
==============
*/

void __fastcall Party_SetupVoteEntries(const int firstEntry, const int secondEntry, const int randomEntry)
{
  ?Party_SetupVoteEntries@@YAXHHH@Z(firstEntry, secondEntry, randomEntry);
}

/*
==============
Party_SaveGameLobbyId
==============
*/

void __fastcall Party_SaveGameLobbyId(PartyData *party)
{
  ?Party_SaveGameLobbyId@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_StopPartyRollOver
==============
*/

void __fastcall Party_StopPartyRollOver(PartyData *party)
{
  ?Party_StopPartyRollOver@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_IsActiveLocalPlayer
==============
*/

int __fastcall Party_IsActiveLocalPlayer(const PartyData *party, const XUID playerXuid)
{
  return ?Party_IsActiveLocalPlayer@@YAHPEBUPartyData@@UXUID@@@Z(party, playerXuid);
}

/*
==============
Party_WriteAvailableMapPackFlags
==============
*/

void __fastcall Party_WriteAvailableMapPackFlags(int mapPackFlags, msg_t *msg)
{
  ?Party_WriteAvailableMapPackFlags@@YAXHPEAUmsg_t@@@Z(mapPackFlags, msg);
}

/*
==============
Party_FindMemberByXUID
==============
*/

int __fastcall Party_FindMemberByXUID(const PartyData *party, const XUID player)
{
  return ?Party_FindMemberByXUID@@YAHPEBUPartyData@@UXUID@@@Z(party, player);
}

/*
==============
Party_IsMemberF2PUser
==============
*/

bool __fastcall Party_IsMemberF2PUser(const PartyData *party, const unsigned int memberIndex)
{
  return ?Party_IsMemberF2PUser@@YA_NPEBUPartyData@@I@Z(party, memberIndex);
}

/*
==============
PartyClient_RestoreCachedGameSettingsForDedi
==============
*/

void __fastcall PartyClient_RestoreCachedGameSettingsForDedi(PartyData *party)
{
  ?PartyClient_RestoreCachedGameSettingsForDedi@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_ClearGameLobbyId
==============
*/

void __fastcall Party_ClearGameLobbyId(PartyData *party)
{
  ?Party_ClearGameLobbyId@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_CheckCodcastingEnabled
==============
*/

int __fastcall Party_CheckCodcastingEnabled(const PartyData *party)
{
  return ?Party_CheckCodcastingEnabled@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_GetMemberSquad
==============
*/

int __fastcall Party_GetMemberSquad(const PartyData *party, const int clientNum)
{
  return ?Party_GetMemberSquad@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_CountLocalMembers
==============
*/

int __fastcall Party_CountLocalMembers(const PartyData *party)
{
  return ?Party_CountLocalMembers@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_FindFirstMemberAtAddr
==============
*/

int __fastcall Party_FindFirstMemberAtAddr(PartyData *party, const netadr_t *playerAddr)
{
  return ?Party_FindFirstMemberAtAddr@@YAHPEAUPartyData@@Unetadr_t@@@Z(party, playerAddr);
}

/*
==============
Party_IsInGameLobbyMigrationAllowed
==============
*/

int __fastcall Party_IsInGameLobbyMigrationAllowed(const PartyData *party)
{
  return ?Party_IsInGameLobbyMigrationAllowed@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_UsingPartyBasedTeams
==============
*/

int __fastcall Party_UsingPartyBasedTeams(const PartyData *party)
{
  return ?Party_UsingPartyBasedTeams@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_CompareMemberAddrs
==============
*/

bool __fastcall Party_CompareMemberAddrs(const PartyData *party, const unsigned int memberIndex1, const unsigned int memberIndex2)
{
  return ?Party_CompareMemberAddrs@@YA_NPEBUPartyData@@II@Z(party, memberIndex1, memberIndex2);
}

/*
==============
Party_DecompressMessage
==============
*/

int __fastcall Party_DecompressMessage(const PartyData *party, msg_t *msg, msg_t *decompressedMsg)
{
  return ?Party_DecompressMessage@@YAHPEBUPartyData@@PEAUmsg_t@@1@Z(party, msg, decompressedMsg);
}

/*
==============
Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor
==============
*/

int __fastcall Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor(const PartyData *party)
{
  return ?Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
Party_IsPrivateMatchLobby
==============
*/

bool __fastcall Party_IsPrivateMatchLobby(const PartyData *party)
{
  return ?Party_IsPrivateMatchLobby@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_StopAfterRound
==============
*/

void __fastcall Party_StopAfterRound(PartyData *party)
{
  ?Party_StopAfterRound@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
Party_GetClientPrivatePartyId
==============
*/

const bdSecurityID *__fastcall Party_GetClientPrivatePartyId(const PartyData *party, const int clientNum)
{
  return ?Party_GetClientPrivatePartyId@@YAPEBVbdSecurityID@@PEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
Party_IsMemberHost
==============
*/

bool __fastcall Party_IsMemberHost(const PartyData *party, const int memberIndex)
{
  return ?Party_IsMemberHost@@YA_NPEBUPartyData@@H@Z(party, memberIndex);
}

/*
==============
Party_GetPartyRestrictsF2PUsersFlag
==============
*/

bool __fastcall Party_GetPartyRestrictsF2PUsersFlag(const PartyData *party)
{
  return ?Party_GetPartyRestrictsF2PUsersFlag@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
Party_Backout
==============
*/

int __fastcall Party_Backout(const PartyActiveClient *mainActiveClient)
{
  return ?Party_Backout@@YAHPEBUPartyActiveClient@@@Z(mainActiveClient);
}

/*
==============
PartyAtomic_HandleJoinFailed
==============
*/
void PartyAtomic_HandleJoinFailed(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v8; 
  const char *v9; 
  int addrHandleIndex; 
  const char *v11; 
  int Long; 
  __int64 v13; 
  int Byte; 
  int v15; 
  int v16; 
  const char *v17; 
  const char *v18; 
  PartyDisconnectReason v19; 
  Online_Error_CAT_PARTY_JOIN_t v20; 
  const char *v21; 
  Online_Error_CAT_PARTY_JOIN_t v22; 
  Online_Error_CAT_PARTY_JOIN_t v23; 
  Online_Error_CAT_PARTY_JOIN_t v24; 
  int v25; 
  const char *v26; 
  char *fmtb; 
  char *fmt; 
  char *fmta; 
  __int64 v30; 
  netadr_t v31; 
  char dest[256]; 
  char buffer[256]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4308, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( PartyAtomicClient_ShouldHandleJoinFailed(&g_partyJoinInfo) )
  {
    if ( PartyAtomic_PacketIsFromPotentialHost(&g_partyJoinInfo, (const LocalClientNum_t)destClient->localClientNum, (const PartyType)party->partyId, from) )
    {
      if ( PartyAtomic_HasErrorOccured(&g_partyJoinInfo) )
      {
        addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
        v31.addrHandleIndex = addrHandleIndex;
        v11 = NET_AdrToString(&v31);
        Com_Printf(25, "[%s] PartyAtomicJoin - Ignoring duplicate 'pa_joinfailed' message (%s)\n", party->partyName, v11);
      }
      else
      {
        Long = MSG_ReadLong(msg);
        v13 = Long;
        if ( (unsigned int)(Long - 2) > 0x4C )
        {
          v25 = from->addrHandleIndex;
          *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
          v31.addrHandleIndex = v25;
          v26 = NET_AdrToString(&v31);
          Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_joinfailed' with invalid response '%i' from %s\n", party->partyName, (unsigned int)v13, v26);
        }
        else
        {
          Byte = MSG_ReadByte(msg);
          v15 = Byte;
          if ( (unsigned int)(Byte - 1) <= 0xFE )
            MSG_ReadData(msg, Byte, buffer, 255);
          if ( msg->overflowed )
          {
            Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_joinfailed' with invalid payload (ignored)\n", party->partyName);
          }
          else
          {
            v16 = from->addrHandleIndex;
            v17 = s_joinResponseStrings[v13];
            *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
            v31.addrHandleIndex = v16;
            v18 = NET_AdrToString(&v31);
            LODWORD(v30) = v13;
            Com_Printf(25, "[%s] PartyAtomicJoin - Received 'pa_joinfailed' from (%s) with error '%s' (code %i, payload %i)\n", party->partyName, v18, v17, v30, v15);
            LODWORD(fmtb) = g_partyJoinInfo.joinType;
            g_partyJoinInfo.errorResponse = v13;
            Com_sprintf(dest, 0x100ui64, "%d,%d", (unsigned int)g_partyJoinInfo.partyType, fmtb);
            if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) && (_DWORD)v13 != 23 )
              InviteJoinHSM::HandlePartyJoinRequestDenied(&g_invitationHSM);
            LODWORD(fmt) = InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM);
            Com_sprintf(dest, 0x100ui64, "%s,%d", dest, fmt);
            switch ( (int)v13 )
            {
              case 4:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 8:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 9:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 12:
                v20 = DODGE;
                goto LABEL_21;
              case 13:
                v20 = COUNT;
LABEL_21:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v20, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/HOST_JOINING";
                goto LABEL_22;
              case 15:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN2_t)16, dest);
                LOBYTE(v19) = 41;
                v21 = (const char *)&stru_143DD5890;
                goto LABEL_22;
              case 16:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 17:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 18:
                LODWORD(fmta) = g_partyJoinInfo.memberCount;
                Com_Printf(25, "[%s] Received bad request error with joinType %i, memberCount %i\n", party->partyName, (unsigned int)g_partyJoinInfo.joinType, fmta);
                v22 = 16;
                goto LABEL_30;
              case 19:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 20:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 21:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 22:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 23:
                if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
                {
                  InviteJoinHSM::HandlePartyJoinNotApprovedByMatchMakerError(&g_invitationHSM, &g_partyJoinInfo);
                }
                else
                {
                  v24 = MOVEMENT;
LABEL_80:
                  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v24, dest);
                  LOBYTE(v19) = 41;
                  v21 = (const char *)&stru_143DD5890;
LABEL_22:
                  PartyAtomic_JoinAttemptFailed(&g_partyJoinInfo, v21, v19);
                }
                break;
              case 24:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x200000, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/CANTJOINSESSION_HOST_MM";
                goto LABEL_22;
              case 26:
                Playlist_MarkAsOutOfDate();
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)64, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/PLAYLISTISOLD";
                goto LABEL_22;
              case 27:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)128, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/PLAYLISTISNEW";
                goto LABEL_22;
              case 28:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 29:
                v23 = 512;
                goto LABEL_40;
              case 30:
                v23 = 1024;
                goto LABEL_40;
              case 31:
                LODWORD(fmta) = g_partyJoinInfo.memberCount;
                Com_Printf(25, "[%s] Received bad request error with joinType %i, memberCount %i\n", party->partyName, (unsigned int)g_partyJoinInfo.joinType, fmta);
                v22 = 32;
LABEL_30:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v22, dest);
                LOBYTE(v19) = 41;
                v21 = "MENU/JOIN_SESSION_INVITE_ONLY";
                goto LABEL_22;
              case 32:
                v23 = 2048;
                goto LABEL_40;
              case 33:
                v23 = 4096;
                goto LABEL_40;
              case 34:
                v23 = 0x2000;
                goto LABEL_40;
              case 35:
                v23 = 0x4000;
                goto LABEL_40;
              case 36:
                v23 = 0x8000;
LABEL_40:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v23, dest);
                LOBYTE(v19) = 41;
                v21 = "EXE/SERVERISFULL";
                goto LABEL_22;
              case 38:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 41:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)8, dest);
                LOBYTE(v19) = 41;
                v21 = "EXE/GAMEISENDING";
                goto LABEL_22;
              case 42:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)4, dest);
                LOBYTE(v19) = 41;
                v21 = "EXE/GAMEISMIGRATING";
                goto LABEL_22;
              case 43:
                v24 = 0x40000;
                goto LABEL_80;
              case 44:
                v24 = 0x20000;
                goto LABEL_80;
              case 47:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 48:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 49:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 50:
                v24 = MOVEMENT;
                goto LABEL_80;
              case 51:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x10000, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/CANTJOINSESSION_MAXPARTY_EXCEEDED";
                goto LABEL_22;
              case 52:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x80000, dest);
                LOBYTE(v19) = 41;
                v21 = "PLATFORM/PLAYLIST_REQUIRES_DLC";
                goto LABEL_22;
              case 53:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x80000, dest);
                LOBYTE(v19) = 41;
                v21 = "PLATFORM/PRIVATE_MATCH_REQUIRES_DLC";
                goto LABEL_22;
              case 54:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x80000, dest);
                LOBYTE(v19) = 41;
                v21 = "PLATFORM/PRIVATE_MATCH_REQUIRES_CP2_DLC";
                goto LABEL_22;
              case 64:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x400000, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/GAMEBATTLE_NOT_IN_MATCH";
                goto LABEL_22;
              case 65:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, dest);
                LOBYTE(v19) = 41;
                v21 = "XBOXLIVE/TOURNAMENT_NOT_IN_MATCH";
                goto LABEL_22;
              case 66:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, dest);
                LOBYTE(v19) = 41;
                v21 = (const char *)&stru_143DD5890;
                goto LABEL_22;
              case 67:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, COUNT, dest);
                LOBYTE(v19) = 41;
                v21 = "ONLINE/JOIN_FAILED_NOT_IN_INVITERS_TOURNAMENT_TEAM";
                goto LABEL_22;
              case 69:
                LODWORD(fmta) = g_partyJoinInfo.memberCount;
                Com_Printf(25, "[%s] Received bad request error with joinType %i, memberCount %i\n", party->partyName, (unsigned int)g_partyJoinInfo.joinType, fmta);
                LOBYTE(v19) = 41;
                v21 = "ONLINE/JOIN_SESSION_CLOSED";
                goto LABEL_22;
              case 70:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN2_t)4, dest);
                LOBYTE(v19) = 41;
                v21 = "LUA_MENU/MISSING_DLC_MP";
                goto LABEL_22;
              case 71:
                OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN2_t)8, dest);
                LOBYTE(v19) = 41;
                v21 = "LUA_MENU/MISSING_DLC_CP";
                goto LABEL_22;
              case 72:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/CROSSPLAY_PARTY_JOIN_FAILED_NO_PERMISSIONS";
                goto LABEL_22;
              case 73:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/ACCESS_DENIED_FOR_GAME_TYPE";
                goto LABEL_22;
              case 74:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/CROSSPLAY_PARTY_JOIN_FAILED_HOST_HAS_NO_PERMISSIONS";
                goto LABEL_22;
              case 75:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/SPLITSCREEN_NOT_SUPPORTED_IN_CURRENT_GAMEMODE";
                goto LABEL_22;
              case 76:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/USER_IN_HOSTS_BLOCKLIST";
                goto LABEL_22;
              case 77:
                LOBYTE(v19) = 41;
                v21 = "ONLINE/F2P_USERS_NOT_PERMITTED";
                goto LABEL_22;
              case 78:
                LOBYTE(v19) = 41;
                v21 = "PLATFORM/SUBSCRIPTIONLESS_USERS_NOT_PERMITTED";
                goto LABEL_22;
              default:
                v24 = 0x1000000;
                goto LABEL_80;
            }
          }
        }
      }
    }
    else
    {
      v8 = from->addrHandleIndex;
      *(_OWORD *)&v31.type = *(_OWORD *)&from->type;
      v31.addrHandleIndex = v8;
      v9 = NET_AdrToString(&v31);
      Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_joinfailed' from someone other than the potential host (%s)\n", party->partyName, v9);
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_joinfailed' but we aren't looking for a reply.\n", party->partyName);
  }
}

/*
==============
Party_HandleVoiceFailMsg
==============
*/
void Party_HandleVoiceFailMsg(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v5; 

  v5 = Cmd_ArgInt(1);
  PeerMesh_ClientDisconnected(party, v5);
}

/*
==============
PartyMatchmakingInfo::Deserialize
==============
*/
void PartyMatchmakingInfo::Deserialize(PartyMatchmakingInfo *this, msg_t *msg)
{
  this->matchmakingToken = MSG_ReadInt64(msg);
  this->isPrimaryAccount = MSG_ReadBit(msg) != 0;
}

/*
==============
PartyHostDetails::Init
==============
*/
void PartyHostDetails::Init(PartyHostDetails *this, PartyData *party, NetConnection *joinConnections)
{
  __int64 v6; 
  __int64 LocalClient; 
  NetConnection *v8; 
  const char *String; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  PartyData *PartyData; 
  NetEndpoint *Endpoint; 
  const char *v13; 
  __int64 v14; 
  char dest[128]; 

  v6 = 2i64;
  do
  {
    if ( NetConnection::IsOpened(joinConnections) )
    {
      LocalClient = NetConnection::GetLocalClient(joinConnections);
      v8 = &party->currentHost.connections[LocalClient];
      String = NetConnection::GetString(v8);
      Core_strcpy(dest, 0x80ui64, String);
      if ( !NetConnection::IsOpened(v8) )
      {
        LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)LocalClient);
        PartyData = Lobby_GetPartyData();
        NetConnection::Set(v8, LocalNetIDFromLocalClientNum, NS_MAXCLIENTS, (const NetConnection::Type)((party == PartyData) + 1));
      }
      Endpoint = NetConnection::GetEndpoint(joinConnections);
      NetConnection::operator=(v8, Endpoint);
      v13 = NetConnection::GetString(v8);
      LODWORD(v14) = LocalClient;
      Com_Printf(25, "[%s] Migrated host connection from %s to %s for client %d\n", party->partyName, dest, v13, v14);
    }
    ++joinConnections;
    --v6;
  }
  while ( v6 );
  this->lastPacketSentTime = 0;
  this->lastPacketTime = Sys_Milliseconds();
  this->hostNum = 0;
  this->accepted = 0;
}

/*
==============
Live_CurrentDesiredLobbyMapPackFlags
==============
*/
__int64 Live_CurrentDesiredLobbyMapPackFlags(const int playlistId)
{
  const dvar_t *v1; 
  unsigned int AvailableContentPacks; 
  int MapPacksUsedByPlaylist; 
  int v6; 
  int v7; 
  int v8; 
  int *p_availableMapPackFlags; 
  char *gamertag; 
  __int64 v11; 
  __int64 v12; 

  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    AvailableContentPacks = Content_GetAvailableContentPacks();
    if ( (!AvailableContentPacks || (AvailableContentPacks & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1535, ASSERT_TYPE_ASSERT, "(mapPackSearchFlags && !( mapPackSearchFlags & (1 << 0) ))", (const char *)&queryFormat, "mapPackSearchFlags && !( mapPackSearchFlags & CONTENT_UNKNOWN )") )
    {
      __debugbreak();
      return AvailableContentPacks;
    }
  }
  else
  {
    MapPacksUsedByPlaylist = Playlist_GetMapPacksUsedByPlaylist(playlistId);
    v6 = Content_GetAvailableContentPacks();
    v7 = v6;
    if ( (!v6 || (v6 & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1535, ASSERT_TYPE_ASSERT, "(mapPackSearchFlags && !( mapPackSearchFlags & (1 << 0) ))", (const char *)&queryFormat, "mapPackSearchFlags && !( mapPackSearchFlags & CONTENT_UNKNOWN )") )
      __debugbreak();
    v8 = 0;
    p_availableMapPackFlags = &g_partyData.partyMembers[0].info.availableMapPackFlags;
    gamertag = g_partyData.partyMembers[0].info.gamertag;
    do
    {
      if ( *((_BYTE *)p_availableMapPackFlags + 402) >= 5u )
      {
        if ( !*p_availableMapPackFlags )
        {
          if ( (unsigned int)v8 >= 0xC8 )
          {
            LODWORD(v12) = 200;
            LODWORD(v11) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v12) )
              __debugbreak();
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1551, ASSERT_TYPE_ASSERT, "(partyMember->info.availableMapPackFlags)", "%s\n\tmember is %s", "partyMember->info.availableMapPackFlags", gamertag) )
            __debugbreak();
        }
        v7 &= *p_availableMapPackFlags;
      }
      ++v8;
      gamertag += 504;
      p_availableMapPackFlags += 126;
    }
    while ( v8 < 200 );
    if ( !v7 )
      v7 = 2;
    AvailableContentPacks = MapPacksUsedByPlaylist & v7;
    if ( (MapPacksUsedByPlaylist & v7) == 0 )
    {
      LODWORD(v12) = MapPacksUsedByPlaylist;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1573, ASSERT_TYPE_ASSERT, "(desiredLobbyMapPackFlags & mapPacksUsedByPlaylist)", "%s\n\tplaylist uses map packs %i, party supports playlists %i", "desiredLobbyMapPackFlags & mapPacksUsedByPlaylist", v12, v7) )
        __debugbreak();
    }
  }
  return AvailableContentPacks;
}

/*
==============
Live_CurrentFullPartyMapPackFlags
==============
*/
__int64 Live_CurrentFullPartyMapPackFlags(PartyData *party)
{
  int AvailableContentPacks; 
  unsigned int v3; 
  int v4; 
  int *p_availableMapPackFlags; 
  const char *MemberName; 

  AvailableContentPacks = Content_GetAvailableContentPacks();
  v3 = AvailableContentPacks;
  if ( (!AvailableContentPacks || (AvailableContentPacks & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1535, ASSERT_TYPE_ASSERT, "(mapPackSearchFlags && !( mapPackSearchFlags & (1 << 0) ))", (const char *)&queryFormat, "mapPackSearchFlags && !( mapPackSearchFlags & CONTENT_UNKNOWN )") )
    __debugbreak();
  v4 = 0;
  p_availableMapPackFlags = &party->partyMembers[0].info.availableMapPackFlags;
  do
  {
    if ( *((_BYTE *)p_availableMapPackFlags + 402) >= 5u )
    {
      if ( !*p_availableMapPackFlags )
      {
        MemberName = Party_GetMemberName(party, v4);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1551, ASSERT_TYPE_ASSERT, "(partyMember->info.availableMapPackFlags)", "%s\n\tmember is %s", "partyMember->info.availableMapPackFlags", MemberName) )
          __debugbreak();
      }
      v3 &= *p_availableMapPackFlags;
    }
    ++v4;
    p_availableMapPackFlags += 126;
  }
  while ( v4 < 200 );
  if ( !v3 )
    return 2;
  return v3;
}

/*
==============
Live_CurrentLocalMapPackFlags
==============
*/
int Live_CurrentLocalMapPackFlags()
{
  int result; 
  int v1; 

  result = Content_GetAvailableContentPacks();
  v1 = result;
  if ( !result || (result & 1) != 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1535, ASSERT_TYPE_ASSERT, "(mapPackSearchFlags && !( mapPackSearchFlags & (1 << 0) ))", (const char *)&queryFormat, "mapPackSearchFlags && !( mapPackSearchFlags & CONTENT_UNKNOWN )") )
      __debugbreak();
    return v1;
  }
  return result;
}

/*
==============
Lobby_DumpInfo_f
==============
*/
void Lobby_DumpInfo_f()
{
  const PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  Party_DumpInfoImmediately(PartyData, NULL);
}

/*
==============
RotatingClientNums::NextClientNum
==============
*/
__int64 RotatingClientNums::NextClientNum(RotatingClientNums *this)
{
  __int64 result; 

  result = (unsigned int)this->m_currentClientNum;
  this->m_currentClientNum = (this->m_currentClientNum + 1) % 200;
  return result;
}

/*
==============
PartyClient_RestoreCachedGameSettingsForDedi
==============
*/
void PartyClient_RestoreCachedGameSettingsForDedi(PartyData *party)
{
  GameStateInfo *v1; 
  LobbyMapRotationEntry *NextMapSelection; 

  BG_GameStateInfo_RestoreArchivedState();
  v1 = GameStateInfo_Get();
  NextMapSelection = PrivateMapRotation_GetNextMapSelection(v1->mapRotation);
  Dvar_SetString_Internal(DVARSTR_ui_mapname, NextMapSelection->name);
}

/*
==============
PartyHost_CachePrivateGameSettingsForDedi
==============
*/
void PartyHost_CachePrivateGameSettingsForDedi(PartyData *party)
{
  GameStateInfo *v2; 
  const dvar_t *v3; 

  v2 = GameStateInfo_Get();
  PrivateMapRotation_ClearAll(v2->mapRotation);
  v3 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  PrivateMapRotation_AddNewEntry(v2->mapRotation, v3->current.string);
  PartyHost_ArchiveGameSettings(party);
}

/*
==============
PartyHost_SetMigrateBackToPrivateHost
==============
*/
void PartyHost_SetMigrateBackToPrivateHost(PartyData *party)
{
  party->migrateBackToPrivateHost = 1;
}

/*
==============
PartyHost_SetPrivateDediReady
==============
*/
void PartyHost_SetPrivateDediReady(PartyData *party, const bool isReady)
{
  party->privateDSReady = isReady;
}

/*
==============
PartyHost_SetPrivateMatchId
==============
*/
void PartyHost_SetPrivateMatchId(PartyData *party, const PrivateMatchId matchId)
{
  if ( matchId.m_id != party->privateMatchId.m_id )
  {
    party->privateMatchId = matchId;
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
PartyHost_SetXb3SessionId
==============
*/
void PartyHost_SetXb3SessionId(PartyData *party, const _GUID *sessionId)
{
  party->mpsdSessionID = *sessionId;
  PartyHost_GamestateChanged(party);
}

/*
==============
Party_AddRecentPlayers
==============
*/
void Party_AddRecentPlayers(PartyData *party, const int localControllerIndex)
{
  const dvar_t *v4; 
  const XUID *v5; 
  XUID *p_playerUID; 
  unsigned int TimeAsSeconds; 
  unsigned int i; 
  Online_Friends *Instance; 
  Online_Friends *v10; 
  Online_MetPlayer *v11; 
  unsigned __int64 m_id; 
  Online_MetPlayer *v13; 
  const char *MemberName; 
  __int64 v15; 
  __int64 v16; 
  XUID xuid; 
  XUID v18; 
  XUID result; 

  XUID::XUID(&v18);
  v4 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && Live_IsUserSignedInToLive(localControllerIndex) && !Live_UserIsGuest(localControllerIndex) && party->inParty )
  {
    v5 = Live_GetXuid(&result, localControllerIndex);
    XUID::operator=(&v18, v5);
    p_playerUID = &party->partyMembers[0].playerUID;
    TimeAsSeconds = Sys_GetTimeAsSeconds();
    for ( i = 0; (int)i < 200; ++i )
    {
      if ( !Party_IsMemberLocalPlayer(party, i) )
      {
        xuid.m_id = v18.m_id;
        if ( i >= 0xC8 )
        {
          LODWORD(v16) = 200;
          LODWORD(v15) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6498, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        if ( Party_IsMemberUIVisible(party, i) )
        {
          if ( i >= 0xC8 )
          {
            LODWORD(v16) = 200;
            LODWORD(v15) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v16) )
              __debugbreak();
          }
          result.m_id = p_playerUID->m_id;
          if ( XUID::operator==(&result, &xuid) || (party->lobbyFlags & 2) == 0 || Party_IsPlayerInPrivateParty(result) )
          {
            if ( i >= 0xC8 )
            {
              LODWORD(v16) = 200;
              LODWORD(v15) = i;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7396, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v16) )
                __debugbreak();
            }
            if ( !Party_IsMemberIndexDataAvailable(party, i) || !LODWORD(p_playerUID[2].m_id) )
            {
              Instance = Online_Friends::GetInstance();
              if ( !Online_Friends::IsFriendByID(Instance, localControllerIndex, (XUID)p_playerUID->m_id) )
              {
                v10 = Online_Friends::GetInstance();
                if ( Online_Friends::Crossplay_FindIndex(v10, localControllerIndex, (XUID)p_playerUID->m_id) == -1 )
                {
                  v11 = Online_MetPlayer::GetInstance();
                  if ( Online_MetPlayer::ShouldUpdateMember(v11, localControllerIndex, (const XUID)p_playerUID->m_id, TimeAsSeconds) )
                  {
                    m_id = 0i64;
                    if ( BYTE4(p_playerUID[-33].m_id) == 3 )
                      m_id = p_playerUID[-32].m_id;
                    v13 = Online_MetPlayer::GetInstance();
                    MemberName = Party_GetMemberName(party, i);
                    Online_MetPlayer::UpdateMemberXB3(v13, localControllerIndex, (const XUID)p_playerUID->m_id, m_id, MemberName);
                  }
                }
              }
            }
          }
        }
      }
      p_playerUID += 63;
    }
  }
}

/*
==============
Party_AllMembersCanPlaySubscriptionRequiredContent
==============
*/
bool Party_AllMembersCanPlaySubscriptionRequiredContent(PartyData *party, bitarray<224> *freePlayersInParty)
{
  char v4; 
  bool *p_hasOnlineSubscription; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8335, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost )
    goto LABEL_29;
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3924, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !party->areWeHost || !party->inParty )
  {
LABEL_29:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8336, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
      __debugbreak();
  }
  v4 = 0;
  p_hasOnlineSubscription = &party->partyMembers[0].info.hasOnlineSubscription;
  v6 = 0;
  *(_QWORD *)freePlayersInParty->array = 0i64;
  *(_QWORD *)&freePlayersInParty->array[2] = 0i64;
  *(_QWORD *)&freePlayersInParty->array[4] = 0i64;
  freePlayersInParty->array[6] = 0;
  do
  {
    if ( p_hasOnlineSubscription[228] == 3 )
    {
      v4 = 1;
      if ( v6 >= 0xE0 )
      {
        LODWORD(v11) = 224;
        LODWORD(v10) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
          __debugbreak();
      }
      freePlayersInParty->array[(unsigned __int64)v6 >> 5] |= 0x80000000 >> (v6 & 0x1F);
    }
    else
    {
      if ( v6 >= 0xC8 )
      {
        LODWORD(v9) = 200;
        LODWORD(v8) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( Party_IsMemberDataAvailable(&party->partyMembers[v6]) && !*p_hasOnlineSubscription && (unsigned __int8)(*(p_hasOnlineSubscription - 26) - 3) <= 1u )
      {
        v4 = 1;
        bitarray_base<bitarray<224>>::setBit(freePlayersInParty, v6);
      }
    }
    ++v6;
    p_hasOnlineSubscription += 504;
  }
  while ( (int)v6 < 200 );
  return v4 == 0;
}

/*
==============
Party_AllMembersPaid
==============
*/
bool Party_AllMembersPaid(PartyData *party, bitarray<224> *freePlayersInParty)
{
  char v4; 
  bool *p_isPaidUser; 
  unsigned int v6; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8280, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0;
  p_isPaidUser = &party->partyMembers[0].info.isPaidUser;
  v6 = 0;
  *(_QWORD *)freePlayersInParty->array = 0i64;
  *(_QWORD *)&freePlayersInParty->array[2] = 0i64;
  *(_QWORD *)&freePlayersInParty->array[4] = 0i64;
  freePlayersInParty->array[6] = 0;
  do
  {
    if ( p_isPaidUser[229] == 3 )
    {
      v4 = 1;
      if ( v6 >= 0xE0 )
      {
        LODWORD(v11) = 224;
        LODWORD(v10) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v10, v11) )
          __debugbreak();
      }
      freePlayersInParty->array[(unsigned __int64)v6 >> 5] |= 0x80000000 >> (v6 & 0x1F);
    }
    else
    {
      if ( v6 >= 0xC8 )
      {
        LODWORD(v9) = 200;
        LODWORD(v8) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( Party_IsMemberDataAvailable(&party->partyMembers[v6]) && !*p_isPaidUser )
      {
        v4 = 1;
        bitarray_base<bitarray<224>>::setBit(freePlayersInParty, v6);
      }
    }
    ++v6;
    p_isPaidUser += 504;
  }
  while ( (int)v6 < 200 );
  return v4 == 0;
}

/*
==============
Party_AnyMemberOnPlatform
==============
*/
char Party_AnyMemberOnPlatform(const PartyData *party, const ClientPlatform platform)
{
  char v2; 
  __int64 v4; 
  unsigned __int8 *i; 

  v2 = platform;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 667, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0i64;
  for ( i = &party->partyMembers[0].status; ; i += 504 )
  {
    if ( i == (unsigned __int8 *)410 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 654, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
    }
    if ( ((*i & 0xFC) != 0 || *i == 1) && *(i - 254) == v2 )
      break;
    if ( ++v4 >= 200 )
      return 0;
  }
  return 1;
}

/*
==============
Party_AreAllMembersLocal
==============
*/
bool Party_AreAllMembersLocal(const PartyData *party)
{
  int v1; 
  int v3; 
  int v4; 
  XUID *p_playerUID; 
  int v6; 
  unsigned __int8 *p_status; 
  bool v8; 
  int v9; 
  __int64 v11; 
  __int64 v12; 

  v1 = 0;
  v3 = 0;
  if ( party->inParty )
  {
    v4 = 0;
    p_playerUID = &party->partyMembers[0].playerUID;
    do
    {
      if ( Party_IsMemberPresent(party, v4) && Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
        ++v3;
      ++v4;
      p_playerUID += 63;
    }
    while ( v4 < 200 );
    if ( party->inParty )
    {
      v6 = 0;
      p_status = &party->partyMembers[0].status;
      v8 = 1;
      v9 = 0;
      do
      {
        if ( !v8 )
        {
          LODWORD(v12) = 200;
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        v1 = v9 + 1;
        if ( (unsigned __int8)(*p_status - 4) > 1u )
          v1 = v9;
        ++v6;
        p_status += 504;
        v9 = v1;
        v8 = (unsigned int)v6 < 0xC8;
      }
      while ( v6 < 200 );
    }
  }
  return v3 == v1;
}

/*
==============
Party_AreMembersInSameSubparty
==============
*/
bool Party_AreMembersInSameSubparty(const PartyData *party, const int memberIndex1, const int memberIndex2)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  v3 = memberIndex1;
  v5 = memberIndex2;
  if ( (unsigned int)memberIndex1 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1498, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex1 ) < (unsigned)( 200 )", "memberIndex1 doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex1, 200) )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v8) = 200;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1499, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex2 ) < (unsigned)( 200 )", "memberIndex2 doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return party->partyMembers[v3].subpartyIndex == party->partyMembers[v5].subpartyIndex;
}

/*
==============
Party_AreTeamsVisible
==============
*/
__int64 Party_AreTeamsVisible()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_party_teamsVisible;
  if ( !DVARBOOL_party_teamsVisible && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamsVisible") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Party_AreWeHost
==============
*/
_BOOL8 Party_AreWeHost(const PartyData *party)
{
  if ( !party->areWeHost )
    return 0i64;
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3924, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  return party->areWeHost && party->inParty;
}

/*
==============
Party_AreWePlatformSessionHost
==============
*/
bool Party_AreWePlatformSessionHost(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5970, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Live_XUIDIsLocalPlayer(party->xb3PlatformHostXUID);
}

/*
==============
Party_AreWeServer
==============
*/
_BOOL8 Party_AreWeServer(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3952, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return party->areWeHost && party->inParty;
}

/*
==============
Party_Awake
==============
*/
void Party_Awake(PartyData *party, const int controllerIndex, const int initialJoin)
{
  const char *partyName; 
  PartyActiveClient v7; 
  bool v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int integer; 
  int v12; 
  GameStateInfo *v13; 
  GameStateInfo *v14; 
  const dvar_t *v15; 
  PartyType partyId; 
  int v17; 
  int v18; 
  PartyType v19; 
  int localControllerIndex; 
  unsigned int v21; 
  unsigned __int8 *p_status; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  __int64 v25; 
  PartyActiveClient mainActiveClient; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5129, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->party_systemActive )
  {
    PartyRequestBuffer::ProcessRequests(&party->requestBuffer, party);
    if ( Com_IsGameLocalServerRunningOrLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5137, ASSERT_TYPE_ASSERT, "(!Party_IsServerRunning( party ))", (const char *)&queryFormat, "!Party_IsServerRunning( party )") )
      __debugbreak();
    partyName = party->partyName;
    party->party_systemActive = 1;
    party->joiningAGameInProgress = 0;
    Com_Printf(25, "[%s] Party_Awake() called\n", partyName);
    if ( party->inParty )
    {
      v7 = Party_GetMainActiveClient(party, controllerIndex);
      v8 = party->stopAfterRound == 0;
      mainActiveClient = v7;
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5151, ASSERT_TYPE_ASSERT, "(!party->stopAfterRound)", "%s\n\tDid not properly stop the party before turning it back on", "!party->stopAfterRound") )
        __debugbreak();
      if ( party->migrateData.migrateActive )
      {
        Com_Printf(25, "[%s] Party_Awake() called with migration active.  Resetting the timeout\n", party->partyName);
        PartyMigrate_StartTimeout(party);
      }
      if ( !party->areWeHost )
      {
        if ( !GameBattles_IsGameBattleActive() )
        {
          v17 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_party_minLobbyTime, "party_minLobbyTime");
          party->interEndTime = v17 + Sys_Milliseconds();
        }
        if ( party->partyId == PRIVATE_PARTY_ID && !initialJoin )
          PartyClient_DemoteRemotePartyMembers(party);
        v18 = PartyClient_SendHeartbeatAck(party, &mainActiveClient);
        if ( !v18 )
          goto LABEL_62;
        if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
          v18 = PartyClient_SendHeartbeatAck(party, &outPartyActiveClient);
        if ( !v18 )
LABEL_62:
          Com_PrintWarning(25, "[%s] Party - Awake - Failed to send heartbeat ack to the host.\n", party->partyName);
        goto LABEL_63;
      }
      if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5163, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
        __debugbreak();
      party->gameFlags |= 0x1000u;
      PartyHost_ResetState(party, &mainActiveClient, 0);
      v9 = DVARINT_party_timer;
      if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
        __debugbreak();
      Dvar_Reset(v9, DVAR_SOURCE_INTERNAL);
      party->voting.votePassed = 0;
      v10 = DVARINT_party_minVoteTime;
      if ( !DVARINT_party_minVoteTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minVoteTime") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      integer = v10->current.integer;
      party->voting.voteEndTime = 1000 * integer + Sys_Milliseconds();
      PartyHost_ClearVotes(party);
      if ( party->partyId == PRIVATE_PARTY_ID )
      {
        if ( !Live_IsInSystemlinkLobby() && !Com_GameStart_IsRestarting() )
          PartyHost_AskPartyMembersToBackOut(party);
        party->interEndTime = 0;
        if ( Lobby_IsInRunningLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5205, ASSERT_TYPE_ASSERT, "(!Lobby_IsInRunningLobby())", "%s\n\tawaking the private party while the lobby is running", "!Lobby_IsInRunningLobby()") )
          __debugbreak();
        if ( Lobby_IsInRunningLobby() )
          goto LABEL_43;
      }
      else
      {
        if ( !Live_IsInGameBattlesGame() )
        {
          v12 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_party_minLobbyTime, "party_minLobbyTime");
          party->interEndTime = v12 + Sys_Milliseconds();
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") )
        {
          v13 = GameStateInfo_Get();
          v14 = v13;
          if ( v13->usingRotation )
          {
            if ( !v13->mapRotation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5237, ASSERT_TYPE_ASSERT, "(gInfo->mapRotation)", (const char *)&queryFormat, "gInfo->mapRotation") )
              __debugbreak();
            PrivateMapRotation_ClearNextMapSelection(v14->mapRotation);
            PrivateMapRotation_GetNextMapSelection(v14->mapRotation);
          }
        }
        else
        {
          Party_ChooseNextPlaylist(mainActiveClient.localControllerIndex);
          BG_GameStateInfo_DisableGameLaunchWithBots();
          OnlineMatchmakerOmniscient::EndGame(&OnlineMatchmakerOmniscient::ms_instance);
        }
      }
      PartyHost_SyncVoiceDataForAllPlayers(party);
LABEL_43:
      v15 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( v15->current.enabled && ((partyId = party->partyId, partyId == PRIVATE_PARTY_ID) || partyId == GAME_LOBBY_ID && Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch")) )
        PartyHost_CopyPartyPrivacyFromPlayerDataToParty(party);
      else
        party->privacySetting = PUBLIC;
      PartyHost_CopyCrossplaySettingsToParty(party);
      PartyClientTaskService::ResetTask(&party->clientTaskService, party, PARTY_CLIENT_TASK_CREATE_SESSION_PS4);
      PartyClientTaskService::ResetTask(&party->clientTaskService, party, PARTY_CLIENT_TASK_CREATE_SESSION_XB3);
LABEL_63:
      Voice_EnableMicIfAllowed(party, mainActiveClient.localControllerIndex);
      if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
        Voice_EnableMicIfAllowed(party, outPartyActiveClient.localControllerIndex);
      Party_SetUIPlayerCount(party);
      v19 = party->partyId;
      if ( v19 )
      {
        if ( v19 != PRIVATE_PARTY_ID )
        {
          LODWORD(v25) = party->partyId;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5334, ASSERT_TYPE_ASSERT, "( ( Party_IsPrivateParty( party ) ) )", "( party->partyId ) = %i", v25) )
            __debugbreak();
        }
        if ( party->partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2550, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
          __debugbreak();
        v21 = 0;
        p_status = &party->partyMembers[0].status;
        do
        {
          if ( *p_status != 6 )
          {
            if ( p_status == (unsigned __int8 *)410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 323, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
              __debugbreak();
            if ( *p_status == 1 || *p_status == 6 )
            {
              Com_PrintWarning(25, "[%s] Party - RemoveAwayPlayers - Removing away member at index %i.\n", party->partyName, v21);
              Party_ClearMemberFromParty(party, &mainActiveClient, v21, 0);
            }
          }
          ++v21;
          p_status += 504;
        }
        while ( v21 < 0xC8 );
      }
      else
      {
        party->lobbyFlags &= 0xFFFFFFDB;
        party->lobbyFlags |= 0x40u;
        if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
          LiveAntiCheat_InfractionCheck_Squads(mainActiveClient.localControllerIndex);
        if ( party->areWeHost && party->specificData.hostData.migrateAfterRound )
        {
          localControllerIndex = mainActiveClient.localControllerIndex;
          party->specificData.hostData.migrateAfterRound = 0;
          PartyMigrate_RequestFindBestHost(party, localControllerIndex);
        }
      }
      party->currentHost.lastPacketSentTime = Sys_Milliseconds();
      party->currentHost.lastPacketTime = Sys_Milliseconds();
      party->vote = PARTY_VOTE_NO_VOTE;
      v23 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v23);
      if ( v23->current.enabled )
      {
        v24 = DVARBOOL_xblive_privatematch;
        if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( !v24->current.enabled )
          *(_QWORD *)party->desiredTeamSelection = 0i64;
      }
      *(_QWORD *)party->partyLocalIsMLGSpectator = 0i64;
      Party_ClearLocalMLGFollower(party);
      v8 = party->partyId == GAME_LOBBY_ID;
      party->chosenToShowSurvey = 0;
      if ( v8 && party->areWeHost && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch") && !Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch_solo, "xblive_privatematch_solo") )
        PartyHost_RollDiceForSurveyAndStoreResultInParty(party);
      party->inviteJoinsDisabledForNoJIP = 0;
    }
  }
}

/*
==============
Party_Backout
==============
*/
__int64 Party_Backout(const PartyActiveClient *mainActiveClient)
{
  PartyDisconnectReason v3; 
  const dvar_t *v4; 
  int v5; 
  PartyData *PartyData; 
  PartyDisconnectReason fmt; 
  PartyActiveClient activeClient; 

  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2436, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( g_partyData.stopAfterRound )
  {
    Com_Printf(25, "[%s] Party - Backout - Received backout request but we already decided to stop the party.\n", g_partyData.partyName);
    return 0i64;
  }
  if ( g_partyData.backingOut )
  {
    Com_Printf(25, "[%s] Party - Backout - Received backout request but we're already backing out, ignoring.\n", g_partyData.partyName);
    return 1i64;
  }
  Com_Printf(25, "[%s] Party - Backout - Going back to the party screen\n", g_partyData.partyName);
  LOBYTE(v3) = 23;
  g_partyData.backingOut = 1;
  PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v3);
  PartyMigrate_StopMigration(&g_partyData);
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    if ( Lobby_IsInLobby() || !g_partyData.party_systemActive )
    {
      if ( Live_IsInSystemlinkLobby() )
      {
        Com_Printf(25, "[%s] Party - Backout - Stopping lobby and backing out to systemlink lobby menu.\n", g_partyData.partyName);
      }
      else
      {
        PartyData = Lobby_GetPartyData();
        Com_Printf(25, "[%s] Party - Backout - Stopping lobby and backing out to private party menu.\n", PartyData->partyName);
      }
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)mainActiveClient->localClientNum, mainActiveClient->localControllerIndex, "xstoplobbybackout", 0, 0);
    }
    else
    {
      g_partyData.backingOut = 0;
      if ( g_partyData.areWeHost )
      {
        Com_Printf(25, "[%s] Party - Backout - Already at the party screen, nothing to do.\n", g_partyData.partyName);
        return 1i64;
      }
      Com_Printf(25, "[%s] Party - Backout - Already at the party screen, sending heartbeat.\n", g_partyData.partyName);
      v5 = PartyClient_SendHeartbeatAck(&g_partyData, mainActiveClient);
      if ( !v5 )
        goto LABEL_34;
      if ( g_partyData.inParty && g_partyData.splitscreenData.otherClientActive )
      {
        if ( g_partyData.splitscreenData.otherClient.localControllerIndex == g_partyData.splitscreenData.mainClient.localControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7229, ASSERT_TYPE_ASSERT, "(party->splitscreenData.otherClient.localControllerIndex != party->splitscreenData.mainClient.localControllerIndex)", (const char *)&queryFormat, "party->splitscreenData.otherClient.localControllerIndex != party->splitscreenData.mainClient.localControllerIndex") )
          __debugbreak();
        if ( g_partyData.splitscreenData.otherClient.localClientNum == g_partyData.splitscreenData.mainClient.localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7230, ASSERT_TYPE_ASSERT, "(party->splitscreenData.otherClient.localClientNum != party->splitscreenData.mainClient.localClientNum)", (const char *)&queryFormat, "party->splitscreenData.otherClient.localClientNum != party->splitscreenData.mainClient.localClientNum") )
          __debugbreak();
        activeClient = g_partyData.splitscreenData.otherClient;
        v5 = PartyClient_SendHeartbeatAck(&g_partyData, &activeClient);
      }
      if ( !v5 )
      {
LABEL_34:
        Com_Printf(25, "[%s] Party - Backout - Could not send packet, disconnecting from host.\n", g_partyData.partyName);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x4000000, NULL);
        LOBYTE(fmt) = 37;
        PartyClient_DisconnectFromHost(&g_partyData, mainActiveClient, "@EXE/TRANSMITERROR", 0, fmt);
        return 1i64;
      }
    }
    return 1i64;
  }
  else
  {
    v4 = DVARBOOL_party_followPartyHostOutOfGames;
    if ( !DVARBOOL_party_followPartyHostOutOfGames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_followPartyHostOutOfGames") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      Lobby_GetPartyData()->stopAfterRound = 1;
      if ( Com_IsGameLocalServerRunningOrLoading() )
      {
        Com_Printf(25, "[%s] Party - Backout - Ending game, requesting migration.\n", g_partyData.partyName);
        Cbuf_AddText(mainActiveClient->localClientNum, "hostmigration_start_backout\n");
        return 1i64;
      }
      else
      {
        if ( Com_GameStart_IsRestarting() )
        {
          Com_Printf(25, "[%s] Party - Backout - Ending play again.\n", g_partyData.partyName);
          Cbuf_AddText(mainActiveClient->localClientNum, "playagainabort 1");
        }
        else
        {
          Com_Printf(25, "[%s] Party - Backout - Ending game, disconnecting.\n", g_partyData.partyName);
          Cbuf_AddText(mainActiveClient->localClientNum, "xpartybackout; disconnect\n");
        }
        return 1i64;
      }
    }
    else
    {
      Com_Printf(25, "[%s] Party - Backout - Not backing out since party_followPartyHostOutOfGames is disabled.\n", g_partyData.partyName);
      return 0i64;
    }
  }
}

/*
==============
Party_CanAllMembersInPartyPlayGameType
==============
*/
char Party_CanAllMembersInPartyPlayGameType(const PartyData *party, const char *gameType)
{
  __int64 v4; 
  unsigned __int8 *i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 684, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0i64;
  for ( i = &party->partyMembers[0].status; ; i += 504 )
  {
    if ( i == (unsigned __int8 *)410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
      __debugbreak();
    if ( ((*i & 0xFC) != 0 || *i == 1) && !Live_CanGameTypeBePlayedOnPlatform(gameType, (ClientPlatform)*(i - 254)) )
      break;
    if ( ++v4 >= 200 )
      return 1;
  }
  return 0;
}

/*
==============
Party_CanHostServer
==============
*/
_BOOL8 Party_CanHostServer(const PartyData *party, int playerCount)
{
  return party->currentHost.hostNum == -2 || Online_CanHostServer(playerCount);
}

/*
==============
Party_CanSignInLocalPlayers
==============
*/
bool Party_CanSignInLocalPlayers(const PartyData *party)
{
  return party->privacySetting != 3;
}

/*
==============
Party_CancelWaitingDialog
==============
*/
void Party_CancelWaitingDialog(const unsigned int partyAbortType)
{
  Com_PrintWarning(13, "Party - CancelWaitingDialog - Unhandled abort type '%i'\n", partyAbortType);
}

/*
==============
Party_CheckCodcastingEnabled
==============
*/
__int64 Party_CheckCodcastingEnabled(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->codcastingEnabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7759, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56BE8];
}

/*
==============
Party_CheckTeamAssignmentEnabled
==============
*/
__int64 Party_CheckTeamAssignmentEnabled(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->teamAssignmentEnabled;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7777, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56C08];
}

/*
==============
Party_CheckUpdatedPartyMemberPartyId
==============
*/
void Party_CheckUpdatedPartyMemberPartyId(const PartyData *party, const int localControllerIndex, const unsigned int memberIndex)
{
  __int64 v3; 
  const char *v6; 
  __int64 v7; 
  XUID playerXuid; 
  __int64 v9; 
  bdSecurityID v10; 

  v9 = -2i64;
  v3 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2402, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2403, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, 200) )
      __debugbreak();
  }
  if ( party->partyId == GAME_LOBBY_ID && g_partyData.inParty && !g_partyData.party_systemActive )
  {
    if ( !XUID::IsValid(&party->partyMembers[v3].playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2412, ASSERT_TYPE_ASSERT, "(member->playerUID.IsValid())", "%s\n\tChecking party on unknown member", "member->playerUID.IsValid()") )
      __debugbreak();
    bdSecurityID::bdSecurityID(&v10);
    if ( g_partyData.inParty )
      v10 = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
    else
      v10 = g_noPrivatePartyId;
    playerXuid.m_id = party->partyMembers[v3].playerUID.m_id;
    if ( bdSecurityID::operator==(&v10, &party->partyMembers[v3].info.privatePartyId) )
    {
      Party_ReviveLostPrivatePartyMember(playerXuid);
    }
    else
    {
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_party_reduce_print_spam, "online_party_reduce_print_spam") )
      {
        v6 = XUID::ToDevString(&playerXuid);
        Com_Printf(25, "[%s] Party - CheckUpdatedPartyMemberPartyId - Private party for lobby client %i changed and does not match ours, checking if we should drop from private party (%s).\n", party->partyName, (unsigned int)v3, v6);
      }
      Party_LostPrivatePartyPlayer(localControllerIndex, playerXuid, 1, 1);
    }
    bdSecurityID::~bdSecurityID(&v10);
  }
}

/*
==============
Party_CheckUsesMLGRules
==============
*/
__int64 Party_CheckUsesMLGRules(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->usesMLGRules;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7730, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56BE4];
}

/*
==============
Party_ChooseNextPlaylist
==============
*/
void Party_ChooseNextPlaylist(const int localControllerIndex)
{
  const dvar_t *v1; 
  int v3; 
  PartyData *PartyData; 
  int PlaylistEntry; 
  int v6; 
  const dvar_t *v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int i; 
  PartyData *v11; 
  char v12; 
  __int64 currentEntry; 
  const char *partyName; 
  const char *v15; 
  PartyData *v16; 
  const char *StringSafe; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  char *fmt; 
  __int64 v24; 
  __int64 v25; 

  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( !v1->current.enabled )
  {
    v3 = 0;
    Com_DPrintf(16, "Playlists: Choosing next default, alternate and random playlist entries.\n");
    PartyData = Lobby_GetPartyData();
    PlaylistEntry = Party_GetPlaylistEntry(PartyData);
    v6 = Playlist_ChooseEntry(PlaylistEntry, 1);
    v7 = DVARINT_playlistMode;
    v8 = v6;
    if ( !DVARINT_playlistMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlistMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.integer == 1 )
    {
      v9 = Playlist_ChooseEntry(v8, 0);
      for ( i = Playlist_ChooseEntry(v9, 0); i == v8; i = Playlist_ChooseEntry(v9, 0) )
      {
        if ( v3 >= 5 )
          break;
        ++v3;
      }
    }
    else
    {
      v9 = v8;
      i = v8;
    }
    v11 = Lobby_GetPartyData();
    if ( v11->currentEntry >= 8u )
    {
      LODWORD(v25) = 8;
      LODWORD(v24) = v11->currentEntry;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3262, ASSERT_TYPE_ASSERT, "(unsigned)( party->currentEntry ) < (unsigned)( 8 )", "party->currentEntry doesn't index NUM_LAST_ENTRIES\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    v12 = 0;
    currentEntry = v11->currentEntry;
    if ( v11->alternateMap != v9 )
    {
      partyName = v11->partyName;
      v11->alternateMap = v9;
      Com_DPrintf(16, "[%s] Playlists: SetPlaylistEntries alternateMap = entryB %i.\n", partyName, v9);
      v12 = 1;
    }
    if ( v11->randomMap != i )
    {
      v15 = v11->partyName;
      v11->randomMap = i;
      Com_DPrintf(16, "[%s] Playlists: SetPlaylistEntries randomMap = entryC %i.\n", v15, i);
      v12 = 1;
    }
    if ( v11->lastEntries[currentEntry] != v8 )
    {
      v11->currentEntry = ((unsigned __int8)v11->currentEntry + 1) & 7;
      if ( v8 >= 0x100 )
      {
        LODWORD(v25) = 256;
        LODWORD(v24) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3285, ASSERT_TYPE_ASSERT, "(unsigned)( playlistEntryA ) < (unsigned)( 256 )", "playlistEntryA doesn't index 256\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      LODWORD(fmt) = v8;
      v11->lastEntries[v11->currentEntry] = v8;
      Com_DPrintf(16, "[%s] Playlists: SetPlaylistEntries currentEntry at index %i for MAP_VOTE_ENTRY_FIRST %i.\n", v11->partyName, (unsigned int)v11->currentEntry, fmt);
      v12 = 1;
    }
    if ( v11->areWeHost )
    {
      if ( v12 )
      {
        Com_Printf(15, "[%s] Gamestate changing due to playlist entry change\n", v11->partyName);
        PartyHost_GamestateChanged(v11);
      }
    }
    v16 = Lobby_GetPartyData();
    Party_SetUpRulesAndUIDVarsForCurrentMap(v16, localControllerIndex, v8);
    UI_SetDVarsForVoteEntry(v8, 0);
    UI_SetDVarsForVoteEntry(v9, 1);
    UI_SetDVarsForVoteEntry(i, 2);
    StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
    Party_SetEntryADisplayMapName(StringSafe);
    v18 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
    Party_SetEntryBDisplayMapName(v18);
    v19 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
    Party_SetEntryCDisplayMapName(v19);
    v20 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
    v21 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
    v22 = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
    Online_Telemetry_SetVoteSelection(localControllerIndex, v22, v21, v20);
  }
}

/*
==============
Party_ClearActiveClientData
==============
*/
void Party_ClearActiveClientData(PartySplitscreenData *splitscreenData)
{
  if ( !splitscreenData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7139, ASSERT_TYPE_ASSERT, "(splitscreenData)", (const char *)&queryFormat, "splitscreenData") )
    __debugbreak();
  splitscreenData->mainClient = 0i64;
  splitscreenData->otherClient = 0i64;
  *(_QWORD *)&splitscreenData->otherClientActive = 0i64;
}

/*
==============
Party_ClearDesiredTeamSelection
==============
*/
void Party_ClearDesiredTeamSelection(PartyData *party)
{
  *(_QWORD *)party->desiredTeamSelection = 0i64;
}

/*
==============
Party_ClearGameLobbyId
==============
*/
void Party_ClearGameLobbyId(PartyData *party)
{
  if ( party )
  {
    party->m_prevLobbyId = 0i64;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8418, ASSERT_TYPE_ASSERT, "(party != nullptr)", (const char *)&queryFormat, "party != nullptr") )
      __debugbreak();
    MEMORY[0x4CC98] = 0i64;
  }
}

/*
==============
Party_ClearLocalMLGFollower
==============
*/
void Party_ClearLocalMLGFollower(PartyData *party)
{
  int i; 
  LocalClientNum_t outLocalClientNum; 

  for ( i = 0; i < 2; ++i )
  {
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7707, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) )
    {
      party->partyLocalIsMLGFollower[outLocalClientNum] = 0;
      party->partyLocalMLGFollowerIndex[outLocalClientNum] = 63;
    }
  }
}

/*
==============
Party_ClearLocalMLGFollower
==============
*/
void Party_ClearLocalMLGFollower(PartyData *party, const int localControllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7707, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) )
  {
    party->partyLocalIsMLGFollower[outLocalClientNum] = 0;
    party->partyLocalMLGFollowerIndex[outLocalClientNum] = 63;
  }
}

/*
==============
Party_ClearLocalMLGSpectator
==============
*/
void Party_ClearLocalMLGSpectator(PartyData *party)
{
  *(_QWORD *)party->partyLocalIsMLGSpectator = 0i64;
}

/*
==============
Party_ClearLocalReadyUpFlag
==============
*/
void Party_ClearLocalReadyUpFlag(void)
{
  g_partyLocalReadyUpFlag = 0;
}

/*
==============
Party_ClearMember
==============
*/
void Party_ClearMember(PartyData *party, const int memberIndex, const NetCloseStyle closeStyle)
{
  __int64 v3; 
  char *v6; 
  const dvar_t *v7; 
  unsigned __int8 v8; 
  void *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 
  unsigned __int64 r_keyVal; 
  ntl::integral_constant<bool,1> v18; 

  v3 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4700, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( ( sizeof( *array_counter( party->partyMembers ) ) + 0 ) )", "memberIndex doesn't index ARRAY_COUNT( party->partyMembers )\n\t%i not in [0, %i)", memberIndex, 200) )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5578, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v16) = 200;
    LODWORD(v15) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5579, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v6 = (char *)party + 504 * v3;
  NetConnection::Close((NetConnection *)v6 + 76, closeStyle);
  if ( Party_IsMemberIndexDataAvailable(party, v3) )
  {
    v7 = DVARBOOL_party_unregister_matchmaker_player_on_clear;
    if ( !DVARBOOL_party_unregister_matchmaker_player_on_clear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_unregister_matchmaker_player_on_clear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      Party_UnregisterPlayerFromMatchmaker(party, v3);
    Voice_UnregisterRemotePlayer(party, v3);
    PartyChat_ClearMemberPartyChataData(party, v3);
    Party_TrackMemberDumpInfo(v3);
    Party_DumpInfo(party, "Party_UnregisterPlayer");
  }
  else
  {
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3881, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( v6[2414] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5585, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( party, clientNum ))", (const char *)&queryFormat, "!Party_IsRegisteredForVoice( party, clientNum )") )
      __debugbreak();
  }
  v8 = v6[2602];
  v9 = v6 + 2192;
  if ( v8 )
  {
    LODWORD(fmt) = v3;
    Com_Printf(15, "[%s] Clearing party member '%s' (%u): status %s\n", party->partyName, v6 + 2244, fmt, s_partyStatusStrings[v8]);
  }
  r_keyVal = XUID::ToUint64((XUID *)v6 + 326);
  v10 = ((unsigned int)r_keyVal ^ HIDWORD(r_keyVal)) % 0x185;
  if ( v10 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v11 = ntl::internal::hash_table<unsigned __int64,int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,int>,202,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int>>,389>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(&party->memberMap, &party->memberMap.m_buckets.m_data[v10], &r_keyVal, v18);
  if ( v11 > party->memberMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
    __debugbreak();
  party->memberMap.m_currentNumItems -= v11;
  if ( XUID::IsValid((XUID *)v6 + 327) )
  {
    r_keyVal = XUID::ToUint64((XUID *)v6 + 327);
    v12 = ((unsigned int)r_keyVal ^ HIDWORD(r_keyVal)) % 0x185;
    if ( v12 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v13 = ntl::internal::hash_table<unsigned __int64,int,ntl::fixed_pool_allocator<ntl::internal::hash_table_node<unsigned __int64,int>,202,8>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int>>,389>,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>,ntl::integral_constant<bool,1>>::find_and_remove_nodes(&party->memberMap, &party->memberMap.m_buckets.m_data[v12], &r_keyVal, v18);
    if ( v13 > party->memberMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 192, ASSERT_TYPE_ASSERT, "( removed <= m_currentNumItems )", (const char *)&queryFormat, "removed <= m_currentNumItems") )
      __debugbreak();
    party->memberMap.m_currentNumItems -= v13;
  }
  memset_0(v9, 0, 0x1F8ui64);
  PeerMesh_ClientDisconnected(party, v3);
}

/*
==============
Party_ClearMemberFromParty
==============
*/
void Party_ClearMemberFromParty(PartyData *party, const PartyActiveClient *mainActiveClient, const unsigned int memberIndex, const int tellThem)
{
  int localControllerIndex; 
  bool IsHost; 
  const char *partyName; 
  PartyDisconnectReason v11; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2304, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2305, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  localControllerIndex = mainActiveClient->localControllerIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7256, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) && outPartyActiveClient.localControllerIndex == localControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2306, ASSERT_TYPE_ASSERT, "(Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex ))", (const char *)&queryFormat, "Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex )") )
    __debugbreak();
  if ( party->partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2307, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  IsHost = Party_IsHost(party, memberIndex);
  partyName = party->partyName;
  if ( IsHost )
  {
    Com_Printf(25, "[%s] Party - ClearMemberFromParty - Removing party host from private party at index '%i'\n", partyName, memberIndex);
    if ( party->areWeHost )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2313, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
        __debugbreak();
    }
    LOBYTE(v11) = 47;
    PartyClient_LostConnectionToHost(party, mainActiveClient, v11, NULL);
  }
  else
  {
    Com_Printf(25, "[%s] Party - ClearMemberFromParty - Removing player from private party at index '%i'.\n", partyName, memberIndex);
    if ( party->areWeHost )
      PartyHost_RemovePlayer(party, memberIndex, tellThem, "clearMemberFromParty");
    else
      PartyClient_RemovePartyMember(party, memberIndex);
  }
}

/*
==============
Party_ClearMembers
==============
*/
void Party_ClearMembers(PartyData *party)
{
  int i; 
  const dvar_t *v3; 
  __int64 v4; 
  __int64 v5; 

  for ( i = 0; i < 200; ++i )
  {
    v3 = DVARBOOL_party_unregister_matchmaker_player_on_clear;
    if ( !DVARBOOL_party_unregister_matchmaker_player_on_clear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_unregister_matchmaker_player_on_clear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled )
    {
      if ( (unsigned int)i >= 0xC8 )
      {
        LODWORD(v5) = 200;
        LODWORD(v4) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v4, v5) )
          __debugbreak();
      }
      if ( Party_IsMemberDataAvailable(&party->partyMembers[i]) )
        Party_UnregisterPlayerFromMatchmaker(party, i);
    }
    Party_ClearMember(party, i, NET_CLOSE_SOFT);
  }
  if ( party->memberMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4748, ASSERT_TYPE_ASSERT, "(party->memberMap.empty())", (const char *)&queryFormat, "party->memberMap.empty()") )
    __debugbreak();
  party->subpartyCount = 0;
}

/*
==============
Party_ClearOtherSplitscreenClient
==============
*/
void Party_ClearOtherSplitscreenClient(PartySplitscreenData *splitscreenData)
{
  if ( splitscreenData )
  {
    splitscreenData->otherClientActive = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7146, ASSERT_TYPE_ASSERT, "(splitscreenData)", (const char *)&queryFormat, "splitscreenData") )
      __debugbreak();
    MEMORY[0x10] = 0;
  }
}

/*
==============
Party_ClearPrivateMatchId
==============
*/
void Party_ClearPrivateMatchId(PartyData *party)
{
  party->privateMatchId.m_id = 0i64;
}

/*
==============
Party_ClearXb3SessionId
==============
*/
void Party_ClearXb3SessionId(PartyData *party)
{
  --party->platformSessionVersionNumber;
  *(_QWORD *)&party->mpsdSessionID.Data1 = 0i64;
  *(_QWORD *)party->mpsdSessionID.Data4 = 0i64;
}

/*
==============
Party_ClientIsInMyParty
==============
*/
int Party_ClientIsInMyParty(int clientNum)
{
  __int64 v1; 
  const PartyData *PartyData; 
  __int64 v4; 
  __int64 v6; 
  int v7; 
  XUID playerXuid; 
  XUID xuid; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v7 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7855, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v7) )
      __debugbreak();
  }
  XUID::XUID(&playerXuid);
  PartyData = Lobby_GetPartyData();
  if ( !Party_IsMemberRegistered(PartyData, v1) )
    return 0;
  if ( (unsigned int)v1 >= 0xC8 )
  {
    LODWORD(v6) = 200;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  xuid.m_id = PartyData->partyMembers[v1].playerUID.m_id;
  XUID::operator=(&playerXuid, &xuid);
  return Party_IsPlayerInPrivateParty(playerXuid);
}

/*
==============
Party_CompareMemberAddrs
==============
*/
bool Party_CompareMemberAddrs(const PartyData *party, const unsigned int memberIndex1, const unsigned int memberIndex2)
{
  NetConnection *MemberConnection; 
  NetConnection *v6; 

  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, memberIndex1);
  v6 = (NetConnection *)Party_GetMemberConnection(party, memberIndex2);
  return NetConnection::IsOpened(MemberConnection) && NetConnection::IsOpened(v6) && NetConnection::CompareAddr(MemberConnection, v6);
}

/*
==============
Party_CompareSession
==============
*/
bool Party_CompareSession(const PartyData *party, const XSESSION_INFO *sessionInfo)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 842, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !sessionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 843, ASSERT_TYPE_ASSERT, "(sessionInfo)", (const char *)&queryFormat, "sessionInfo") )
    __debugbreak();
  return XSESSION_INFO::operator==(&party->session->dyn.sessionInfo, sessionInfo);
}

/*
==============
Party_CompressMessage
==============
*/
_BOOL8 Party_CompressMessage(const PartyData *party, const bool useCompression, const msg_t *payload, msg_t *compressedMsg)
{
  int cursize; 
  int v8; 
  int v9; 
  int v10; 
  BOOL v11; 
  int v12; 
  const dvar_t *v13; 
  char *fmt; 

  if ( !payload && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8006, ASSERT_TYPE_ASSERT, "(payload)", (const char *)&queryFormat, "payload") )
    __debugbreak();
  if ( !compressedMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8007, ASSERT_TYPE_ASSERT, "(compressedMsg)", (const char *)&queryFormat, "compressedMsg") )
    __debugbreak();
  MSG_WriteBool(compressedMsg, useCompression);
  if ( !compressedMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 238, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( compressedMsg->readOnly && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 239, ASSERT_TYPE_ASSERT, "(!msg->readOnly)", (const char *)&queryFormat, "!msg->readOnly") )
    __debugbreak();
  compressedMsg->bit = 8 * compressedMsg->cursize;
  cursize = payload->cursize;
  if ( useCompression )
  {
    MSG_WriteLong(compressedMsg, cursize);
    v8 = compressedMsg->cursize;
    v9 = j_LZ4_compress_fast((const char *)payload->data, (char *)&compressedMsg->data[v8], payload->cursize, compressedMsg->maxsize - v8, 1);
    v10 = 0;
    v11 = v9 > 0;
    if ( v9 > 0 )
    {
      v12 = v8 + v9;
      compressedMsg->cursize = v12;
      if ( v12 > compressedMsg->maxsize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8028, ASSERT_TYPE_ASSERT, "(compressedMsg->cursize <= compressedMsg->maxsize)", "%s\n\tCompressed message overflow", "compressedMsg->cursize <= compressedMsg->maxsize") )
        __debugbreak();
      LOBYTE(v10) = compressedMsg->cursize > compressedMsg->maxsize;
      compressedMsg->overflowed = v10;
    }
  }
  else
  {
    MSG_WriteData(compressedMsg, payload->data, cursize);
    v11 = 1;
  }
  v13 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    LODWORD(fmt) = compressedMsg->cursize;
    Com_Printf(14, "%s - Compressed msg size %d to size %d\n", "Party_CompressMessage", (unsigned int)payload->cursize, fmt);
  }
  return v11;
}

/*
==============
Party_CountActivePlayersInSubparty
==============
*/
__int64 Party_CountActivePlayersInSubparty(const PartyData *party, int subpartyIndex)
{
  __int64 v3; 
  unsigned int v4; 
  __int64 v5; 
  int v6; 
  SubpartyInfo *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v11; 
  __int64 v12; 

  v3 = subpartyIndex;
  if ( subpartyIndex >= party->subpartyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3329, ASSERT_TYPE_ASSERT, "(unsigned)( subpartyIndex ) < (unsigned)( party->subpartyCount )", "subpartyIndex doesn't index party->subpartyCount\n\t%i not in [0, %i)", subpartyIndex, party->subpartyCount) )
    __debugbreak();
  v4 = 0;
  v5 = v3;
  v6 = 0;
  if ( party->subparties[v3].count > 0 )
  {
    v7 = &party->subparties[v5];
    do
    {
      v8 = v7->members[0];
      if ( (unsigned int)v8 >= 0xC8 )
      {
        LODWORD(v12) = 200;
        LODWORD(v11) = v7->members[0];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3335, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v9 = v4 + 1;
      if ( party->partyMembers[v8].status < 5u )
        v9 = v4;
      ++v6;
      v7 = (SubpartyInfo *)((char *)v7 + 4);
      v4 = v9;
    }
    while ( v6 < party->subparties[v5].count );
  }
  return v4;
}

/*
==============
Party_CountAllMembersEvenIfInactive
==============
*/
__int64 Party_CountAllMembersEvenIfInactive(const PartyData *party)
{
  unsigned int v2; 
  NetConnection *p_connection; 
  unsigned int i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6817, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v2 = 0;
  if ( party->inParty )
  {
    p_connection = &party->partyMembers[0].connection;
    for ( i = 0; i < 0xC8; ++i )
    {
      if ( Party_IsMemberDataAvailable((const PartyMember *)&p_connection[-8].m_localId) && NetConnection::IsOpened(p_connection) )
        ++v2;
      p_connection = (NetConnection *)((char *)p_connection + 504);
    }
  }
  return v2;
}

/*
==============
Party_CountLocalMembers
==============
*/
__int64 Party_CountLocalMembers(const PartyData *party)
{
  unsigned int v2; 
  int v3; 
  XUID *p_playerUID; 
  PartyMember *partyMembers; 
  bool v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !party->inParty )
    return 0i64;
  v2 = 0;
  v3 = 0;
  p_playerUID = &party->partyMembers[0].playerUID;
  partyMembers = party->partyMembers;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      LODWORD(v8) = 200;
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    if ( !partyMembers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
      __debugbreak();
    if ( partyMembers->status >= 5u && Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
      ++v2;
    ++v3;
    p_playerUID += 63;
    ++partyMembers;
    v6 = (unsigned int)v3 < 0xC8;
  }
  while ( v3 < 200 );
  return v2;
}

/*
==============
Party_CountMembers
==============
*/
int Party_CountMembers(const PartyData *party, PartyMemberTypes partyMembersOfType)
{
  if ( party->party_systemActive )
    return Party_CountMembersEvenIfInactive(party, partyMembersOfType);
  else
    return 0;
}

/*
==============
Party_CountMembersEvenIfInactive
==============
*/
__int64 Party_CountMembersEvenIfInactive(const PartyData *party, PartyMemberTypes partyMembersOfType)
{
  unsigned int v2; 
  int i; 
  bool IsMemberPresent; 
  char _Buffer[128]; 

  v2 = 0;
  if ( !party->inParty )
    return 0i64;
  for ( i = 0; i < 200; ++i )
  {
    if ( partyMembersOfType )
    {
      if ( partyMembersOfType == PARTY_MEMBER_TYPE_PLAYER_ONLY )
      {
        IsMemberPresent = Party_IsMemberPresent(party, i);
      }
      else
      {
        if ( partyMembersOfType != PARTY_MEMBER_TYPE_AI_ONLY )
          continue;
LABEL_10:
        IsMemberPresent = BG_GameStateInfo_IsBotMemberPresent(i);
      }
      if ( !IsMemberPresent )
        continue;
      goto LABEL_12;
    }
    if ( !Party_IsMemberPresent(party, i) )
      goto LABEL_10;
LABEL_12:
    ++v2;
  }
  if ( s_lastLoggedPartyCount != v2 && partyMembersOfType == PARTY_MEMBER_TYPE_PLAYER_ONLY )
  {
    j_sprintf_s(_Buffer, 0x80ui64, "%d", v2);
    CrashReport_AddKVP("PartySize", _Buffer);
    s_lastLoggedPartyCount = v2;
  }
  return v2;
}

/*
==============
Party_CountMembersWithDataAvailable
==============
*/
__int64 Party_CountMembersWithDataAvailable(const PartyData *party)
{
  unsigned int v3; 
  int v4; 
  bool v5; 
  __int64 v6; 
  __int64 v7; 

  if ( !party->inParty )
    return 0i64;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v7) = 200;
      LODWORD(v6) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( Party_IsMemberDataAvailable(&party->partyMembers[v4]) )
      ++v3;
    v5 = (unsigned int)++v4 < 0xC8;
  }
  while ( v4 < 200 );
  return v3;
}

/*
==============
Party_CountRegisteredMembers
==============
*/
__int64 Party_CountRegisteredMembers(const PartyData *party)
{
  unsigned __int8 *p_status; 
  unsigned int v3; 
  int v4; 
  bool v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !party->inParty )
    return 0i64;
  p_status = &party->partyMembers[0].status;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  do
  {
    if ( !v5 )
    {
      LODWORD(v8) = 200;
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    v6 = v3 + 1;
    if ( (unsigned __int8)(*p_status - 4) > 1u )
      v6 = v3;
    ++v4;
    p_status += 504;
    v3 = v6;
    v5 = (unsigned int)v4 < 0xC8;
  }
  while ( v4 < 200 );
  return v6;
}

/*
==============
Party_CountTeamMembers
==============
*/
__int64 Party_CountTeamMembers(const PartyData *party, int team, PartyMemberTypes partyMembersOfType)
{
  int *p_team; 
  unsigned int v8; 
  int i; 
  bool v10; 

  if ( !party->inParty )
    return 0i64;
  p_team = &party->partyMembers[0].team;
  v8 = 0;
  for ( i = 0; i < 200; ++i )
  {
    if ( partyMembersOfType )
    {
      if ( partyMembersOfType == PARTY_MEMBER_TYPE_PLAYER_ONLY )
      {
        if ( !Party_IsMemberPresent(party, i) )
          goto LABEL_17;
        v10 = *p_team == team;
LABEL_15:
        if ( !v10 )
          goto LABEL_17;
LABEL_16:
        ++v8;
        goto LABEL_17;
      }
      if ( partyMembersOfType != PARTY_MEMBER_TYPE_AI_ONLY )
        goto LABEL_17;
    }
    else if ( Party_IsMemberPresent(party, i) && *p_team == team )
    {
      goto LABEL_16;
    }
    if ( !Party_IsMemberPresent(party, i) && BG_GameStateInfo_IsBotMemberPresent(i) )
    {
      v10 = BG_GameStateInfo_GetBotMemberReadOnly(i)->botPlayerData.aiTeam == team;
      goto LABEL_15;
    }
LABEL_17:
    p_team += 126;
  }
  return v8;
}

/*
==============
Party_CountUIVisibleMembers
==============
*/
__int64 Party_CountUIVisibleMembers(const PartyData *party)
{
  unsigned int v2; 
  unsigned int i; 
  BOOL v4; 
  unsigned int v5; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7033, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty || party->areWeHost && !party->specificData.hostData.partyCreationDoneTime )
    return 0i64;
  v2 = 0;
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7016, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    v4 = Party_IsMemberPresent(party, i) || Party_IsWaitingForPartyMember(party, i) != 0;
    v5 = v2 + 1;
    if ( !v4 )
      v5 = v2;
    v2 = v5;
  }
  return v5;
}

/*
==============
Party_DecompressMessage
==============
*/
__int64 Party_DecompressMessage(const PartyData *party, msg_t *msg, msg_t *decompressedMsg)
{
  unsigned int v6; 
  bool v7; 
  __int64 readcount; 
  int Long; 
  int maxsize; 
  int v11; 
  const dvar_t *v12; 
  char *fmt; 

  v6 = 0;
  v7 = MSG_ReadBit(msg) != 0;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\msg.h", 245, ASSERT_TYPE_ASSERT, "(msg != nullptr)", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  readcount = msg->readcount;
  msg->bit = 8 * readcount;
  if ( v7 )
  {
    Long = MSG_ReadLong(msg);
    maxsize = decompressedMsg->maxsize;
    if ( Long > maxsize )
    {
      LODWORD(fmt) = decompressedMsg->maxsize;
      Com_PrintError(25, "[%s] Failed to decompress message - original size overflow: %d bytes, maxsize %d bytes\n", party->partyName, (unsigned int)Long, fmt);
    }
    else
    {
      v11 = j_LZ4_decompress_safe((const char *)&msg->data[msg->readcount], (char *)decompressedMsg->data, msg->cursize - msg->readcount, maxsize);
      decompressedMsg->cursize = v11;
      LOBYTE(v6) = v11 > 0;
    }
  }
  else
  {
    MSG_WriteData(decompressedMsg, &msg->data[readcount], msg->cursize - readcount);
    LOBYTE(v6) = decompressedMsg->overflowed == 0;
  }
  v12 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    LODWORD(fmt) = decompressedMsg->cursize;
    Com_Printf(14, "%s - Decompressed msg size %d to size %d\n", "Party_DecompressMessage", (unsigned int)msg->cursize, fmt);
  }
  return v6;
}

/*
==============
Party_DlogDisconnect
==============
*/
bool Party_DlogDisconnect(PartyData *party, const LocalClientNum_t localClientNum, const char *message, const PartyDisconnectReason reason, const PartyJoinResponse joinResponse)
{
  unsigned __int8 v5; 
  __int64 v6; 
  const dvar_t *v9; 
  int hostNum; 
  int integer; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  char v15; 
  bool v16; 
  __int64 v17; 
  __int64 v18; 
  DLogContext context; 
  char buffer[4096]; 

  v5 = reason;
  v6 = localClientNum;
  if ( (unsigned __int8)(reason - 5) <= 1u || (_BYTE)reason == 43 )
    return 0;
  v9 = DVARINT_party_client_disconnect_dlog_mode;
  hostNum = party->currentHost.hostNum;
  if ( !DVARINT_party_client_disconnect_dlog_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_client_disconnect_dlog_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  switch ( integer )
  {
    case 0:
      return 0;
    case 1:
      if ( hostNum != -2 )
        return 0;
      break;
    case 2:
      break;
    default:
      LODWORD(v17) = v9->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_local.h", 291, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled disconnect dlog mode %d", v17) )
        __debugbreak();
      return 0;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
  UserId = DLog_GetUserId(ControllerFromClient);
  if ( DLog_CreateContext(&context, UserId, buffer, 4096) )
  {
    if ( (joinResponse < JOINRESPONSE_NONE || (unsigned int)joinResponse > (JOINRESPONSE_COUNT|JOINRESPONSE_ERROR_BAD_COMMIT_PARTYID|0x80)) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum PartyJoinResponse>(enum PartyJoinResponse)", "unsigned", (unsigned __int8)joinResponse, "signed", joinResponse) )
      __debugbreak();
    if ( DLog_IsActive() )
    {
      v16 = DLog_BeginEvent(&context, "dlog_event_client_disconnect");
      context.autoEndEvent = 1;
      if ( v16 && DLog_String(&context, "message", message, 0) && DLog_UInt8(&context, "reason", v5) && DLog_UInt8(&context, "join_response", joinResponse) )
      {
        v15 = 1;
        goto LABEL_21;
      }
    }
    else
    {
      context.error = DLOG_ERROR_NOT_ACTIVE;
    }
  }
  v15 = 0;
LABEL_21:
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v18) = 2;
    LODWORD(v17) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1853, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( party->currentHost.connections ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( party->currentHost.connections )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  return v15 && NetConnection::GetTelemetry(&party->currentHost.connections[v6], &context, "host", party->currentHost.hostNum == -2) && NET_DlogTelemetry(&context, "net") && DLog_RecordContext(&context);
}

/*
==============
Party_DoDisbandAfterRound
==============
*/
void Party_DoDisbandAfterRound(PartyData *party)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  int ControllerFromClient; 
  PartyActiveClient v5; 
  bool v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  LocalClientNum_t localClientNum; 
  PartyDisconnectReason fmt; 
  PartyActiveClient mainActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6902, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6903, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6904, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6905, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ))", (const char *)&queryFormat, "Dvar_GetBool( onlinegame )") )
    __debugbreak();
  v3 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6906, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_xblive_privatematch, \"xblive_privatematch\" ))", (const char *)&queryFormat, "!Dvar_GetBool( xblive_privatematch )") )
    __debugbreak();
  if ( !party->m_disbandAfterRound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6907, ASSERT_TYPE_ASSERT, "(party->m_disbandAfterRound)", (const char *)&queryFormat, "party->m_disbandAfterRound") )
    __debugbreak();
  party->m_disbandAfterRound = 0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v5 = Party_GetMainActiveClient(party, ControllerFromClient);
  v6 = party->areWeHost == 0;
  mainActiveClient = v5;
  if ( v6 )
  {
    if ( party->inParty )
    {
      LOBYTE(fmt) = 1;
      PartyClient_DisconnectFromHostNoUIScreenChange(party, &mainActiveClient, (const char *)&queryFormat.fmt + 3, 1, fmt);
      v5.localClientNum = mainActiveClient.localClientNum;
    }
    localClientNum = v5.localClientNum;
    goto LABEL_41;
  }
  Party_StopPartyInternal(party, PARTY_END_STOPPED, 0);
  v7 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( !v8->current.enabled )
    {
      if ( g_partyData.party_systemActive )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6921, ASSERT_TYPE_ASSERT, "(!g_partyData.party_systemActive)", (const char *)&queryFormat, "!g_partyData.party_systemActive") )
          __debugbreak();
      }
      Com_Printf(14, "[%s] PartyClient - DisconnectFromHost - Since we're the party host, start our own lobby for people to join\n", party->partyName);
      localClientNum = mainActiveClient.localClientNum;
LABEL_41:
      Cbuf_ExecuteBufferInternal(localClientNum, mainActiveClient.localControllerIndex, "xstartlobby", 0, 0);
    }
  }
}

/*
==============
Party_DumpInfo
==============
*/
void Party_DumpInfo(PartyData *party, const char *reasonMsg)
{
  const dvar_t *v3; 
  const dvar_t *v5; 

  if ( party )
  {
    v3 = DVARBOOL_party_dumpInfoImmediately;
    if ( !DVARBOOL_party_dumpInfoImmediately && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_dumpInfoImmediately") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      Party_DumpInfoImmediately(party, reasonMsg);
    }
    else
    {
      v5 = DVARBOOL_online_party_reduce_print_spam;
      if ( !DVARBOOL_online_party_reduce_print_spam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_reduce_print_spam") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( !v5->current.enabled )
        Com_Printf(25, "[%s] '%s' deferring dump info to end of frame.\n", party->partyName, reasonMsg);
      party->dumpInfoRequested = 1;
    }
  }
}

/*
==============
Party_DumpInfoImmediately
==============
*/
void Party_DumpInfoImmediately(const PartyData *party, const char *reasonMsg)
{
  unsigned int NumGameSlots; 
  const char *String; 
  int hostNum; 
  unsigned int v7; 
  int v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *MemberName; 
  int v14; 
  unsigned int v15; 
  int i; 
  const dvar_t *v17; 
  int v18; 
  int *p_subpartyIndex; 
  int v20; 
  char v21; 
  int *v22; 
  __int64 v23; 
  __int64 v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  const char *v30; 
  const char *v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  int ClientConnectivity; 
  int *v40; 
  char _Buffer[128]; 

  if ( party )
  {
    Com_Printf(25, "======================== Party Dump =====================\n");
    if ( reasonMsg )
      Com_Printf(25, "%s\n", reasonMsg);
    Com_Printf(25, "Party Name: %s\n", party->partyName);
    Com_Printf(25, "Game Flags: %i\n", (unsigned int)party->gameFlags);
    Com_Printf(25, "Lobby Flags: %i\n", party->lobbyFlags);
    Com_Printf(25, "Migration bits: %i\n", (unsigned int)party->migrateData.indexBits);
    Com_Printf(25, "Map Pack Flags: %i\n", (unsigned int)party->mapPackFlags);
    NumGameSlots = Party_GetNumGameSlots(party);
    Com_Printf(25, "Game Slots: %i\n", NumGameSlots);
    if ( party->session )
    {
      String = XSESSION_INFO::GetString(&party->session->dyn.sessionInfo);
      Com_Printf(25, "Session: %s\n", String);
      Session_DumpInfo_XB3(party->session);
    }
    hostNum = party->currentHost.hostNum;
    v7 = -2;
    if ( hostNum != -2 )
    {
      v8 = Party_HostNum(party);
      v9 = I_clamp(v8, 0, 200);
      hostNum = party->currentHost.hostNum;
      v7 = v9;
    }
    v10 = NetConnection::GetString(party->currentHost.connections);
    v11 = v10;
    if ( hostNum == -2 )
    {
      v12 = j_va("dedicated, %s", v10);
    }
    else
    {
      if ( party->currentHost.hostNum == -2 )
      {
        MemberName = NetConnection::GetString(party->currentHost.connections);
      }
      else
      {
        v14 = Party_HostNum(party);
        MemberName = Party_GetMemberName(party, v14);
      }
      v12 = j_va("%s (%d), %s\n", MemberName, v7, v11);
    }
    Com_Printf(25, "Host: %s\n", v12);
    v15 = 0;
    if ( party->inParty )
    {
      for ( i = 0; i < 200; ++i )
      {
        if ( Party_IsMemberPresent(party, i) )
          ++v15;
      }
      if ( s_lastLoggedPartyCount != v15 )
      {
        j_sprintf_s(_Buffer, 0x80ui64, "%d", v15);
        CrashReport_AddKVP("PartySize", _Buffer);
        s_lastLoggedPartyCount = v15;
      }
    }
    Com_Printf(25, " Member count:   %i\n", v15);
    v17 = DVARBOOL_online_party_reduce_print_spam;
    if ( !DVARBOOL_online_party_reduce_print_spam && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_reduce_print_spam") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    if ( !v17->current.enabled )
    {
      v18 = s_partyMemberDumpClientNumsCount;
      p_subpartyIndex = &party->partyMembers[0].subpartyIndex;
      v20 = 0;
      v40 = &party->partyMembers[0].subpartyIndex;
      do
      {
        v21 = 0;
        if ( v18 > 0 )
        {
          v22 = s_partyMemberDumpClientNums;
          v23 = (unsigned int)v18;
          do
          {
            if ( v20 == *v22++ )
              v21 = 1;
            --v23;
          }
          while ( v23 );
          if ( v21 && *((_BYTE *)p_subpartyIndex + 14) )
          {
            ClientConnectivity = 0;
            if ( (unsigned int)v20 >= 0xC8 )
            {
              LODWORD(v33) = 200;
              LODWORD(v32) = v20;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, v33) )
                __debugbreak();
            }
            if ( (unsigned __int8)(*((_BYTE *)p_subpartyIndex + 14) - 4) <= 1u )
              ClientConnectivity = PeerMesh_GetClientConnectivity(party, v20);
            v25 = *(_QWORD *)(p_subpartyIndex - 99);
            v26 = *p_subpartyIndex;
            v27 = p_subpartyIndex[2];
            v28 = p_subpartyIndex[1];
            v29 = *(p_subpartyIndex - 25);
            v30 = NetConnection::GetString((NetConnection *)(p_subpartyIndex - 39));
            v31 = XUID::ToDevString((XUID *)(v40 + 5));
            LODWORD(v38) = v26;
            LODWORD(v37) = v27;
            LODWORD(v36) = v28;
            LODWORD(v35) = ClientConnectivity;
            LODWORD(v34) = v29;
            Com_Printf(25, "  %2i. %s\t\"%s\" (%s)\t%s, nat %d, voice 0x%x, party-id %zx, team %d, squad %d, subparty %d\n", (unsigned int)v20, s_partyStatusStrings[*((unsigned __int8 *)v40 + 14)], (const char *)v40 - 344, v31, v30, v34, v35, v25, v36, v37, v38);
            v18 = s_partyMemberDumpClientNumsCount;
            p_subpartyIndex = v40;
          }
        }
        p_subpartyIndex += 126;
        ++v20;
        v40 = p_subpartyIndex;
      }
      while ( v20 < 200 );
    }
    Com_Printf(25, "======================== End Party Dump =====================\n");
    s_partyMemberDumpClientNumsCount = 0;
  }
}

/*
==============
Party_DumpInfo_f
==============
*/
void Party_DumpInfo_f()
{
  Party_DumpInfoImmediately(&g_partyData, NULL);
}

/*
==============
Party_FillInMemberAccountInfo
==============
*/
void Party_FillInMemberAccountInfo(int localControllerIndex, ClientAuthoritativeMemberInfo *memberInfo)
{
  const char *LocalClientName; 
  const dvar_t *v5; 
  bdSecurityID v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  bool v9; 
  Online_Commerce *Instance; 
  Online_Commerce *v11; 
  char v12; 
  Online_Commerce *v13; 
  bool HavePaidEntitlement; 
  bdSecurityID v15; 

  bdSecurityID::bdSecurityID(&v15);
  LocalClientName = Live_GetLocalClientName(localControllerIndex);
  Core_strcpy(memberInfo->gamertag, 0x24ui64, LocalClientName);
  v5 = DVARBOOL_party_store_gamertag_suffix;
  if ( !DVARBOOL_party_store_gamertag_suffix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_store_gamertag_suffix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
    memberInfo->gamertagSuffix = Live_GetLocaClientGamertagSuffix(localControllerIndex);
  else
    memberInfo->gamertagSuffix = 0;
  if ( g_partyData.inParty )
    v6 = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
  else
    v6 = g_noPrivatePartyId;
  v15 = v6;
  memberInfo->privatePartyId = v6;
  memberInfo->bnetGameAccountId = 0;
  memberInfo->isHeadless = 0;
  memberInfo->platform[0] = GetClientPlatform();
  memberInfo->platformId = Live_GetPlatformUserId(localControllerIndex);
  v7 = DVARBOOL_com_force_free_to_play;
  if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
    goto LABEL_28;
  v8 = DVARBOOL_com_force_premium;
  if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
    __debugbreak();
  if ( (Dvar_CheckFrontendServerThread(v8), v8->current.enabled) || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() || ((Instance = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(Instance, localControllerIndex) == ENTITLEMENT_STATE_COMPLETE) || (v11 = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(v11, localControllerIndex) == ENTITLEMENT_STATE_ERROR) ? (v12 = 1) : (v12 = 0), (v13 = Online_Commerce::GetInstance(), HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v13, localControllerIndex), Live_IsUserSignedInToLive(localControllerIndex)) && v12 && HavePaidEntitlement) )
    v9 = 1;
  else
LABEL_28:
    v9 = 0;
  memberInfo->isPaidUser = v9;
  memberInfo->hasOnlineSubscription = Live_HasOnlineSubscription(localControllerIndex);
  bdSecurityID::~bdSecurityID(&v15);
}

/*
==============
Party_FillInOurMemberInfo
==============
*/
void Party_FillInOurMemberInfo(PartyData *party, int localControllerIndex, ClientAuthoritativeMemberInfo *memberInfo)
{
  __int64 ClientFromController; 
  const char *ClanTag; 
  const XUID *v8; 
  unsigned __int8 UpdateNumber; 
  char ActiveGameMode; 
  bool v11; 
  int v12; 
  int v13; 
  int AvailableContentPacks; 
  int v15; 
  XUID result; 
  LocalClientNum_t outLocalClientNum; 
  LocalClientNum_t v18; 
  XUID xuid; 

  XUID::XUID(&xuid);
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  Party_FillInMemberAccountInfo(localControllerIndex, memberInfo);
  CL_PlayerData_ValidateClanChecksum(localControllerIndex);
  ClanTag = CL_PlayerData_GetClanTag(localControllerIndex);
  Core_strcpy(memberInfo->clanAbbrev, 6ui64, ClanTag);
  memberInfo->clanTagType = CL_PlayerData_GetClanTagType(localControllerIndex);
  memberInfo->gameBattlesCommitReady = GameBattles_GetLocalCommitReady(localControllerIndex);
  if ( Live_IsUserSignedInToDemonware(localControllerIndex) )
  {
    v8 = Live_GetXuid(&result, localControllerIndex);
    XUID::operator=(&xuid, v8);
    UpdateNumber = PlayercardCache_GetUpdateNumber(xuid);
  }
  else
  {
    UpdateNumber = 0;
  }
  memberInfo->playerCardUpdate = UpdateNumber;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG && LiveStorage_DoWeHaveStats(localControllerIndex) )
  {
    memberInfo->zombie_consumable0 = CL_PlayerData_GetZombieConsumable(localControllerIndex, 0);
    memberInfo->zombie_consumable1 = CL_PlayerData_GetZombieConsumable(localControllerIndex, 1);
    memberInfo->zombie_consumable2 = CL_PlayerData_GetZombieConsumable(localControllerIndex, 2);
    memberInfo->zombie_consumable3 = CL_PlayerData_GetZombieConsumable(localControllerIndex, 3);
    memberInfo->zombie_consumable4 = CL_PlayerData_GetZombieConsumable(localControllerIndex, 4);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    v11 = 0;
    if ( ActiveGameMode == 3 )
      v11 = g_partyLocalReadyUpFlag;
    memberInfo->alien_readyUpFlag = v11;
    memberInfo->cpFieldUpgradeRowNum = CL_PlayerData_GetCPFieldUpgradeRowNum(localControllerIndex);
  }
  else
  {
    *(_QWORD *)&memberInfo->zombie_consumable0 = 0i64;
    *(_QWORD *)&memberInfo->zombie_consumable2 = 0i64;
    *(_QWORD *)&memberInfo->zombie_consumable4 = 0i64;
    memberInfo->cpFieldUpgradeRowNum = 0;
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7622, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( !CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) || !MLG_IsCoDCasterEnabled() || (v12 = 1, !party->partyLocalIsMLGSpectator[outLocalClientNum]) )
      v12 = 0;
    memberInfo->mlgSpectator = v12;
    memberInfo->mlgFollower = Party_GetLocalMLGFollower(party, localControllerIndex);
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7680, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &v18) )
    {
      if ( Party_GetLocalMLGFollower(party, localControllerIndex) )
        v13 = party->partyLocalMLGFollowerIndex[v18];
      else
        v13 = 63;
    }
    else
    {
      v13 = 63;
    }
    memberInfo->mlgFollowerIndex = v13;
  }
  Online_PlayerData_GetLobbyComparisonData(localControllerIndex, memberInfo);
  AvailableContentPacks = Content_GetAvailableContentPacks();
  if ( (!AvailableContentPacks || (AvailableContentPacks & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1535, ASSERT_TYPE_ASSERT, "(mapPackSearchFlags && !( mapPackSearchFlags & (1 << 0) ))", (const char *)&queryFormat, "mapPackSearchFlags && !( mapPackSearchFlags & CONTENT_UNKNOWN )") )
    __debugbreak();
  memberInfo->availableMapPackFlags = AvailableContentPacks & 0xFFFFFFFE;
  memberInfo->vote = party->vote;
  if ( (_DWORD)ClientFromController == -1 )
    v15 = 0;
  else
    v15 = party->desiredTeamSelection[ClientFromController];
  memberInfo->clientDesiredTeamSelection = v15;
  memberInfo->serverOverwroteInfo = 0;
  memberInfo->headsetPresent = Voice_IsHeadsetPresent(localControllerIndex);
  memberInfo->usingGamepad = CL_Input_IsGamepadEnabled((LocalClientNum_t)ClientFromController);
  memberInfo->trueSkill = 0;
}

/*
==============
Party_FillMatchmakingInfo
==============
*/
__int64 Party_FillMatchmakingInfo(const PartyData *party, const PartyActiveClient *activeClient, const XUID uid, PartyMatchmakingInfo *outMatchmakingInfo)
{
  unsigned int v8; 
  int localControllerIndex; 
  const XUID *Xuid; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1306, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1307, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !outMatchmakingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1308, ASSERT_TYPE_ASSERT, "(outMatchmakingInfo)", (const char *)&queryFormat, "outMatchmakingInfo") )
    __debugbreak();
  v8 = 0;
  outMatchmakingInfo->matchmakingToken = 0i64;
  outMatchmakingInfo->isPrimaryAccount = 0;
  localControllerIndex = activeClient->localControllerIndex;
  outLocalClientNum = LOCAL_CLIENT_0;
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) && OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    if ( outLocalClientNum )
    {
      Xuid = Live_GetXuid(&result, party->splitscreenData.mainClient.localControllerIndex);
      outMatchmakingInfo->matchmakingToken = OnlineMatchmakerOmniscient::GetCachedMatchmakingTokenForUID(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)Xuid->m_id, &outMatchmakingInfo->isPrimaryAccount);
      OnlineMatchmakerOmniscient::GetCachedMatchmakingTokenForUID(&OnlineMatchmakerOmniscient::ms_instance, uid, &outMatchmakingInfo->isPrimaryAccount);
    }
    else
    {
      outMatchmakingInfo->matchmakingToken = OnlineMatchmakerOmniscient::GetCachedMatchmakingTokenForUID(&OnlineMatchmakerOmniscient::ms_instance, uid, &outMatchmakingInfo->isPrimaryAccount);
    }
  }
  LOBYTE(v8) = outMatchmakingInfo->matchmakingToken != 0;
  return v8;
}

/*
==============
Party_FindFirstMemberAtAddr
==============
*/
int Party_FindFirstMemberAtAddr(PartyData *party, const netadr_t *playerAddr)
{
  __int128 v2; 
  netadr_t v4; 

  v2 = *(_OWORD *)&playerAddr->type;
  v4.addrHandleIndex = playerAddr->addrHandleIndex;
  *(_OWORD *)&v4.type = v2;
  return Party_FindNextMemberAtAddrInternal(party, &v4, 0);
}

/*
==============
Party_FindMemberByXUID
==============
*/
__int64 Party_FindMemberByXUID(const PartyData *party, const XUID player)
{
  __int64 result; 
  int outMemberIndex; 

  if ( !Party_FindMemberByXUID_Internal(party, player, &outMemberIndex) )
    return 0xFFFFFFFFi64;
  result = outMemberIndex;
  if ( party->partyMembers[outMemberIndex].status < 5u )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
Party_FindMemberByXUID_AllowNotPresent
==============
*/
__int64 Party_FindMemberByXUID_AllowNotPresent(const PartyData *party, const XUID player)
{
  __int64 result; 
  XUID playera; 
  int outMemberIndex; 

  playera.m_id = player.m_id;
  if ( XUID::IsNull(&playera) )
    return 0xFFFFFFFFi64;
  if ( !Party_FindMemberByXUID_Internal(party, playera, &outMemberIndex) )
    return 0xFFFFFFFFi64;
  result = outMemberIndex;
  if ( (party->partyMembers[outMemberIndex].status & 0xFD) == 0 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
Party_FindMemberByXUID_Internal
==============
*/
char Party_FindMemberByXUID_Internal(const PartyData *const party, const XUID player, int *outMemberIndex)
{
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *p_m_buckets; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *v8; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *mp_next; 
  int *v10; 
  unsigned __int64 v11; 
  __int64 v13; 
  XUID v14; 

  v14.m_id = player.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2125, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !outMemberIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2126, ASSERT_TYPE_ASSERT, "(outMemberIndex)", (const char *)&queryFormat, "outMemberIndex") )
    __debugbreak();
  p_m_buckets = &party->memberMap.m_buckets;
  v6 = XUID::ToUint64(&v14);
  v7 = ((unsigned int)v6 ^ HIDWORD(v6)) % 0x185;
  if ( v7 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 80, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v8 = &p_m_buckets->m_data[v7];
  mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)v8->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)v8->m_listHead.m_sentinel.mp_next == v8 )
  {
LABEL_16:
    mp_next = NULL;
  }
  else
  {
    while ( 1 )
    {
      if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( mp_next[1].m_listHead.m_sentinel.mp_next == (ntl::internal::slist_node_base *)v6 )
        break;
      mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)mp_next->m_listHead.m_sentinel.mp_next;
      if ( mp_next == v8 )
        goto LABEL_16;
    }
  }
  if ( mp_next )
  {
    v10 = (int *)&mp_next[2];
    if ( LODWORD(mp_next[2].m_listHead.m_sentinel.mp_next) >= 0xC8 )
    {
      LODWORD(v13) = *v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2131, ASSERT_TYPE_ASSERT, "(unsigned)( memberEntry->second ) < (unsigned)( 200 )", "memberEntry->second doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, 200) )
        __debugbreak();
    }
    if ( mp_next[1].m_listHead.m_sentinel.mp_next != (ntl::internal::slist_node_base *)XUID::ToUint64(&v14) )
    {
      v11 = XUID::ToUint64(&v14);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2132, ASSERT_TYPE_ASSERT, "( memberEntry->first ) == ( player.ToUint64() )", "%s == %s\n\t%llu, %llu", "memberEntry->first", "player.ToUint64()", mp_next[1].m_listHead.m_sentinel.mp_next, v11) )
        __debugbreak();
    }
    *outMemberIndex = *v10;
    return 1;
  }
  else
  {
    *outMemberIndex = -1;
    return 0;
  }
}

/*
==============
Party_FindNextMemberAtAddrInternal
==============
*/
__int64 Party_FindNextMemberAtAddrInternal(PartyData *party, const netadr_t *playerAddr, const int startingSlot)
{
  unsigned int v3; 
  int v6; 
  int v7; 
  bool v9; 
  unsigned __int8 *i; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = startingSlot;
  if ( playerAddr->localNetID != NS_MAXCLIENTS )
  {
    if ( startingSlot < 200 )
    {
      v9 = (unsigned int)startingSlot < 0xC8;
      for ( i = &party->partyMembers[startingSlot].status; ; i += 504 )
      {
        if ( !v9 )
        {
          LODWORD(v13) = 200;
          LODWORD(v11) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_local.h", 269, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v13) )
            __debugbreak();
          LODWORD(v14) = 200;
          LODWORD(v12) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, v14) )
            __debugbreak();
        }
        if ( (unsigned __int8)(*i - 4) <= 1u )
        {
          if ( v3 >= 0xC8 )
          {
            LODWORD(v13) = 200;
            LODWORD(v11) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v13) )
              __debugbreak();
          }
          if ( NetConnection::operator==(&party->partyMembers[v3].connection, playerAddr) )
            break;
        }
        v9 = ++v3 < 0xC8;
        if ( (int)v3 >= 200 )
          return 0xFFFFFFFFi64;
      }
      goto LABEL_13;
    }
    return 0xFFFFFFFFi64;
  }
  if ( NetConnection::IsOpened(&party->currentHost.connections[1]) )
  {
    v6 = 0;
    if ( party->inParty )
    {
      v7 = NetConnection::operator==(party->currentHost.connections, playerAddr);
      if ( party->inParty )
        v6 = NetConnection::operator==(&party->currentHost.connections[1], playerAddr);
    }
    else
    {
      v7 = 0;
    }
    if ( v7 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3110, ASSERT_TYPE_ASSERT, "(!party->currentHost.connections[LOCAL_CLIENT_1].IsOpened() || Party_PacketIsFromHost( party, LOCAL_CLIENT_0, playerAddr ) == Party_PacketIsFromHost( party, LOCAL_CLIENT_1, playerAddr ))", "%s\n\tHost connection mismatch between splitscreen players", "!party->currentHost.connections[LOCAL_CLIENT_1].IsOpened() || Party_PacketIsFromHost( party, LOCAL_CLIENT_0, playerAddr ) == Party_PacketIsFromHost( party, LOCAL_CLIENT_1, playerAddr )") )
      __debugbreak();
  }
  if ( !party->inParty || !NetConnection::operator==(party->currentHost.connections, playerAddr) )
    return 0xFFFFFFFFi64;
  v3 = Party_HostNum(party);
LABEL_13:
  if ( v3 != -1 )
  {
    if ( v3 >= 0xC8 )
    {
      LODWORD(v13) = 200;
      LODWORD(v11) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v13) )
        __debugbreak();
    }
    if ( (unsigned __int8)(party->partyMembers[v3].status - 4) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3130, ASSERT_TYPE_ASSERT, "(slot == -1 || Party_IsMemberRegistered( party, slot ))", (const char *)&queryFormat, "slot == -1 || Party_IsMemberRegistered( party, slot )") )
      __debugbreak();
  }
  return v3;
}

/*
==============
Party_Frame
==============
*/
void Party_Frame(PartyData *party, int controllerIndex, const int msec)
{
  bool v6; 
  PartyType partyId; 
  bool CanStartGame; 
  const char *MapName; 
  const char *v10; 
  const char *v11; 
  unsigned int v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  int inParty; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  const char *v20; 
  unsigned int v21; 
  unsigned __int8 *p_status; 
  PartyData *PartyData; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  PartyData *v26; 
  int PlaylistEntry; 
  int MemberByXUID; 
  const char *v29; 
  const char *partyName; 
  int v31; 
  char *fmt; 
  __int64 v33; 
  __int64 v34; 
  PartyActiveClient mainActiveClient; 
  XUID result; 

  Profile_Begin(816);
  mainActiveClient = Party_GetMainActiveClient(party, controllerIndex);
  Party_PrintPartyStatus(party);
  Party_ValidateMemberMap(party);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5931, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v6 = Live_IsInSystemlinkLobby();
  partyId = party->partyId;
  if ( v6 )
  {
    if ( partyId != PRIVATE_PARTY_ID || !party->areWeHost || !Party_AreWeServer(party) )
      goto LABEL_28;
  }
  else if ( partyId || !party->areWeHost || !Party_AreWeServer(party) )
  {
    goto LABEL_28;
  }
  if ( party->specificData.hostData.preloadingMapStage != PRELOAD_MAP_INITIATED )
    goto LABEL_28;
  if ( Com_GameStart_UseNewLoadingSystem() )
  {
    CanStartGame = Com_GameStart_CanStartGame();
  }
  else
  {
    if ( !Com_FastFile_IsGameWorkComplete() )
      goto LABEL_28;
    CanStartGame = DB_AreFastfileLoadsCompleted();
  }
  if ( CanStartGame )
  {
    MapName = Party_GetMapName();
    if ( !DB_Zones_IsFinishedLoading(MapName) || (v10 = Party_GetMapName(), DB_Zones_IsPreloadZoneName(v10)) )
    {
      v11 = Party_GetMapName();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5960, ASSERT_TYPE_ASSERT, "(DB_Zones_IsFinishedLoading( Party_GetMapName() ) && !DB_Zones_IsPreloadZoneName( Party_GetMapName() ))", "%s\n\tExpected map '%s' is not loaded", "DB_Zones_IsFinishedLoading( Party_GetMapName() ) && !DB_Zones_IsPreloadZoneName( Party_GetMapName() )", v11) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v12 = cmd_funcCount[0];
    if ( cmd_funcCount[0] < 0x20 )
      goto LABEL_26;
    LODWORD(v34) = 32;
    LODWORD(v33) = cmd_funcCount[0];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 380, ASSERT_TYPE_ASSERT, "(unsigned)( cmd_funcCount[localClientNum] ) < (unsigned)( ( sizeof( *array_counter( cmd_funcArray[localClientNum] ) ) + 0 ) )", "cmd_funcCount[localClientNum] doesn't index ARRAY_COUNT( cmd_funcArray[localClientNum] )\n\t%i not in [0, %i)", v33, v34) )
      __debugbreak();
    v12 = cmd_funcCount[0];
    if ( cmd_funcCount[0] < 0x20 )
    {
LABEL_26:
      cmd_funcCount[0] = v12 + 1;
      cmd_funcArray[0][v12] = PartyHost_StartServer;
    }
    Sys_LeaveCriticalSection(CRITSECT_CBUF);
    party->specificData.hostData.preloadingMapStage = PRELOAD_MAP_STARTED;
  }
LABEL_28:
  if ( PartyMigrate_MigrateActive(party) )
    PartyMigrate_Frame(party, &mainActiveClient, msec);
  if ( party->partyId == GAME_LOBBY_ID )
    Party_SanityCheckPartyMembersInLobby();
  PartyRequestBuffer::ProcessRequests(&party->requestBuffer, party);
  PartyChat_Frame(party, controllerIndex);
  v13 = DVARINT_online_party_host_crossplay_change_toast_display_mode;
  if ( !DVARINT_online_party_host_crossplay_change_toast_display_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_host_crossplay_change_toast_display_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer && party->partyId == PRIVATE_PARTY_ID )
    PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame(party);
  if ( party->party_systemActive )
  {
    if ( Live_IsUserSignedInToLive(mainActiveClient.localControllerIndex) )
      goto LABEL_44;
    v14 = DVARBOOL_systemlink;
    if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
    {
LABEL_44:
      PartyMatchmaking_Frame(party, mainActiveClient.localControllerIndex);
      if ( Com_IsGameLocalServerRunningOrLoading() && party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6401, ASSERT_TYPE_ASSERT, "(!Party_IsServerRunning( party ) || !party->inParty)", (const char *)&queryFormat, "!Party_IsServerRunning( party ) || !party->inParty") )
        __debugbreak();
      if ( party->areWeHost && !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6402, ASSERT_TYPE_ASSERT, "(!party->areWeHost || party->inParty)", (const char *)&queryFormat, "!party->areWeHost || party->inParty") )
        __debugbreak();
      inParty = party->inParty;
      if ( party->areWeHost )
      {
        if ( !inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6406, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
          __debugbreak();
        if ( Session_IsValid(party->session) && (party->gameFlags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6407, ASSERT_TYPE_ASSERT, "(!Session_IsValid( party->session ) || party->gameFlags & 0x00000001)", (const char *)&queryFormat, "!Session_IsValid( party->session ) || party->gameFlags & XSESSION_CREATE_HOST") )
          __debugbreak();
        PartyHost_Frame(party, &mainActiveClient);
      }
      else if ( inParty )
      {
        if ( (party->gameFlags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6413, ASSERT_TYPE_ASSERT, "(!( party->gameFlags & 0x00000001 ))", (const char *)&queryFormat, "!( party->gameFlags & XSESSION_CREATE_HOST )") )
          __debugbreak();
        PartyClient_Frame(party, &mainActiveClient);
      }
      if ( !party->inParty )
        goto LABEL_92;
      v16 = DVARINT_party_simulateInAndOutOfLobbies;
      if ( !DVARINT_party_simulateInAndOutOfLobbies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_simulateInAndOutOfLobbies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.integer )
        goto LABEL_92;
      v17 = Sys_Milliseconds();
      v18 = DVARINT_party_simulateInAndOutOfLobbies;
      v19 = v17;
      if ( !DVARINT_party_simulateInAndOutOfLobbies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_simulateInAndOutOfLobbies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( dword_14BCA9AA8 + v18->current.integer > v19 )
        goto LABEL_92;
      if ( party->partyId == PRIVATE_PARTY_ID )
      {
        if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6990, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
          __debugbreak();
        if ( Party_CountAllMembersEvenIfInactive(party) )
        {
          v21 = 0;
          p_status = &party->partyMembers[0].status;
          while ( *p_status == 6 || !Party_IsWaitingForPartyMember(party, v21) )
          {
            ++v21;
            p_status += 504;
            if ( v21 >= 0xC8 )
            {
              v20 = "xstartlobby";
              goto LABEL_90;
            }
          }
          goto LABEL_92;
        }
        if ( party->partyId == GAME_LOBBY_ID )
        {
LABEL_92:
          if ( Com_FrontEnd_IsInFrontEnd() )
          {
            PartyData = Lobby_GetPartyData();
            if ( PartyData )
            {
              v24 = DVARBOOL_onlinegame;
              if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v24);
              if ( v24->current.enabled )
              {
                v25 = DVARBOOL_xblive_privatematch;
                if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
                  __debugbreak();
                Dvar_CheckFrontendServerThread(v25);
                if ( !v25->current.enabled && PartyData->m_disbandAfterRound && Lobby_IsInLobby() )
                {
                  v26 = Lobby_GetPartyData();
                  Party_DoDisbandAfterRound(v26);
                }
              }
            }
            else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6886, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
            {
              __debugbreak();
            }
          }
          if ( party->shouldRunPlaylistRules && Playlist_CanRunRules() )
          {
            if ( party->partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6436, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
              __debugbreak();
            PlaylistEntry = Party_GetPlaylistEntry(party);
            Playlist_RunRules(party->splitscreenData.mainClient.localControllerIndex, PlaylistEntry);
            party->shouldRunPlaylistRules = 0;
          }
          if ( party->currentHost.hostNum == -2 && party->privateMatchId.m_id )
          {
            if ( PartyClientTaskService::Completed(&party->clientTaskService) )
              party->privateDSReady = 1;
            if ( party->migrateBackToPrivateHost && !Com_IsGameLocalServerRunningOrLoading() && !PartyMigrate_MigrateActive(party) )
            {
              OnlineMatchmakerOmniscient::GetPrivateMatchHost(&OnlineMatchmakerOmniscient::ms_instance, &result);
              MemberByXUID = Party_FindMemberByXUID(party, result);
              v29 = XUID::ToDevString(&result);
              partyName = party->partyName;
              if ( MemberByXUID == -1 )
              {
                LODWORD(fmt) = -1;
                Com_Printf(25, "[%s] Game ended - private DS ending with no valid host (xuid %s, clientNum %i).  Killing Game.\n", partyName, v29, fmt);
                Party_StopPartyInternal(party, PARTY_END_STOPPED, 1);
              }
              else
              {
                Com_Printf(25, "[%s] Game ended - private DS ending with valid host.  Migrating to XUID(%s).\n", partyName, v29);
                PartyMigrate_StopMigration(party);
                PartyMigrate_AskArbitratorToChangeHost(party, MemberByXUID, result);
              }
              party->migrateBackToPrivateHost = 0;
            }
          }
          if ( party->dumpInfoRequested )
          {
            Party_DumpInfoImmediately(party, "Deferred Info Dump");
            party->dumpInfoRequested = 0;
          }
          v31 = Sys_Milliseconds();
          PartyProfile_RecordInterval(v31, &party->profileState);
          goto LABEL_129;
        }
        v20 = "xstartlobby";
      }
      else
      {
        if ( g_partyData.inParty && !g_partyData.areWeHost )
          goto LABEL_91;
        v20 = "xstoplobbybackout";
      }
LABEL_90:
      Cbuf_ExecuteBufferInternal((const LocalClientNum_t)mainActiveClient.localClientNum, mainActiveClient.localControllerIndex, v20, 0, 0);
LABEL_91:
      dword_14BCA9AA8 = v19;
      goto LABEL_92;
    }
  }
  if ( party->inParty )
    Party_InactiveFrame(party, &mainActiveClient);
LABEL_129:
  Profile_EndInternal(NULL);
}

/*
==============
Party_Frame_PlatformSessions
==============
*/
void Party_Frame_PlatformSessions(PartyData *privateParty, PartyData *gameLobby)
{
  int v4; 
  PlatformSessionType v5; 
  bool ShouldCurrentSessionBeClosed; 
  SessionData *session; 
  const dvar_t *v8; 
  PrivatePartySessionHSM *Instance; 
  PrivatePartySessionHSM *v10; 
  PrivatePartySessionHSM *v11; 
  PrivatePartySessionHSM *v12; 
  int Int_Internal_DebugName; 
  PrivatePartySessionHSM *v14; 
  bool IsHost; 
  PrivatePartySessionHSM *v16; 
  PrivatePartySessionHSM *v17; 
  Online_ErrorReporting *InstancePtr; 
  bool v19; 
  SessionData *v20; 
  const dvar_t *v21; 
  bool v22; 
  bool m_isMatchReady; 
  const dvar_t *v24; 
  GameLobbySessionHSM *v25; 
  GameLobbySessionHSM *v26; 
  GameLobbySessionHSM *v27; 
  GameLobbySessionHSM *v28; 
  int v29; 
  GameLobbySessionHSM *v30; 
  bool IsClient; 
  GameLobbySessionHSM *v32; 
  GameLobbySessionHSM *v33; 
  GameLobbySessionHSM *v34; 
  GameLobbyFrameStatusCodes v35; 
  Online_ErrorReporting *v36; 
  PrivatePartySessionHSM *v37; 
  sessionParameters *v38; 
  GameLobbySessionHSM *v39; 
  sessionParameters *v40; 
  char *fmt; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  PrivatePartyFrameStatusCodes FrameStatusCode; 
  XUID xuid; 
  __int64 v47; 
  sessionParameters v48; 
  sessionParameters __that; 
  sessionParameters sessionIdStringOut; 

  v47 = -2i64;
  if ( PlatformSessionsHSMEnabled() )
  {
    sessionParameters::sessionParameters(&__that);
    sessionParameters::sessionParameters(&v48);
    if ( InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) || PartyAtomic_GetJoinState(&g_partyJoinInfo) )
      goto LABEL_67;
    v4 = 0;
    if ( gameLobby->inParty )
      v5 = GAME_LOBBY_SESSION;
    else
      v5 = privateParty->inParty != 0;
    __that.m_activeSessionType = v5;
    __that.m_mainController = Party_GetStartingControllerIndex(privateParty);
    if ( privateParty->inParty && privateParty->splitscreenData.otherClientActive )
      __that.m_secondaryController = Party_GetSecondaryActiveController(privateParty);
    __that.m_isHost = Party_AreWePlatformSessionHost(privateParty);
    xuid.m_id = privateParty->xb3PlatformHostXUID.m_id;
    XUID::operator=(&__that.m_hostXUID, &xuid);
    __that.m_platformSessionHandledByPartyHost = ((unsigned __int8)(1 << GetClientPlatform()) & privateParty->platformsWhoseSessionsAreHandledByHost) != 0;
    if ( (unsigned int)(privateParty->privacySetting - 2) <= 1 || Live_ShouldPlatformSessionBeInviteOnly(privateParty) || (ShouldCurrentSessionBeClosed = Party_ShouldCurrentSessionBeClosed(privateParty), __that.m_isInviteOnly = 0, ShouldCurrentSessionBeClosed) )
      __that.m_isInviteOnly = 1;
    __that.m_numSlots = Party_GetNumGameSlots(privateParty);
    __that.m_joinInfo.gameMode[0] = Com_GameMode_GetActiveGameMode();
    session = privateParty->session;
    *(__m256i *)__that.m_joinInfo.communicationInfo.session.m_address.addrBuff = *(__m256i *)privateParty->session->dyn.sessionInfo.m_address.addrBuff;
    *(__m256i *)&__that.m_joinInfo.communicationInfo.session.m_address.addrBuff[32] = *(__m256i *)&session->dyn.sessionInfo.m_address.addrBuff[32];
    *(__m256i *)&__that.m_joinInfo.communicationInfo.session.m_address.addrBuff[64] = *(__m256i *)&session->dyn.sessionInfo.m_address.addrBuff[64];
    *(_QWORD *)&__that.m_joinInfo.communicationInfo.session.m_security.m_key.ab[4] = *(_QWORD *)&session->dyn.sessionInfo.m_security.m_key.ab[4];
    *(_DWORD *)&__that.m_joinInfo.communicationInfo.session.m_security.m_key.ab[12] = *(_DWORD *)&session->dyn.sessionInfo.m_security.m_key.ab[12];
    __that.m_sessionName = privateParty->partyName;
    __that.m_partyVersionNumber = privateParty->partyVersionNumber;
    v8 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && v5 == PRIVATE_PARTY_SESSION )
    {
      if ( Party_AreWeHost(privateParty) )
      {
        if ( __that.m_isHost )
        {
          Instance = PrivatePartySessionHSM::GetInstance();
          if ( PrivatePartySessionHSM::GetCurrentSessionVersion(Instance) != privateParty->platformSessionVersionNumber )
          {
            v10 = PrivatePartySessionHSM::GetInstance();
            if ( PrivatePartySessionHSM::GetCurrentSessionIdIfActiveAndHost(v10, &privateParty->mpsdSessionID) )
            {
              v11 = PrivatePartySessionHSM::GetInstance();
              PrivatePartySessionHSM::GetCurrentSessionIdString(v11, (char *)&sessionIdStringOut);
              Com_Printf(25, "Copied the session id %s into the private party\n", (const char *)&sessionIdStringOut);
              v12 = PrivatePartySessionHSM::GetInstance();
              privateParty->platformSessionVersionNumber = PrivatePartySessionHSM::GetCurrentSessionVersion(v12);
              PartyHost_GamestateChanged(privateParty);
            }
          }
        }
      }
      if ( s_lastPrivatePartyVersionCheckedForReportingError != privateParty->partyVersionNumber )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_platform_session_max_wait_time_before_sending_error_ms, "online_platform_session_max_wait_time_before_sending_error_ms");
        if ( Sys_Milliseconds() - privateParty->partyModifyTime > Int_Internal_DebugName )
        {
          s_lastPrivatePartyVersionCheckedForReportingError = privateParty->partyVersionNumber;
          if ( __that.m_isHost )
          {
            v14 = PrivatePartySessionHSM::GetInstance();
            IsHost = PrivatePartySessionHSM::IsHost(v14);
          }
          else
          {
            if ( __that.m_platformSessionHandledByPartyHost )
              goto LABEL_32;
            v16 = PrivatePartySessionHSM::GetInstance();
            IsHost = PrivatePartySessionHSM::IsClient(v16);
          }
          if ( !IsHost )
          {
            v17 = PrivatePartySessionHSM::GetInstance();
            FrameStatusCode = PrivatePartySessionHSM::GetFrameStatusCode(v17);
            LODWORD(v43) = privateParty->currentHost.hostNum == -2;
            LODWORD(v42) = Party_AreWeHost(privateParty);
            LODWORD(fmt) = __that.m_isHost;
            Com_sprintf((char *)&sessionIdStringOut, 0x100ui64, "%d,%d,%d,%d,%d", (unsigned int)privateParty->partyId, fmt, v42, v43, FrameStatusCode);
            InstancePtr = Online_ErrorReporting::GetInstancePtr();
            Online_ErrorReporting::ReportError(InstancePtr, DODGE, (const char *)&sessionIdStringOut);
          }
        }
      }
    }
LABEL_32:
    __that.xb3SessionId = privateParty->mpsdSessionID;
    __that.m_createSessionForPartyRequest = &privateParty->createSessionForPartyRequestData;
    v48.m_activeSessionType = v5;
    v48.m_mainController = Party_GetStartingControllerIndex(gameLobby);
    if ( gameLobby->inParty && gameLobby->splitscreenData.otherClientActive )
      v48.m_secondaryController = Party_GetSecondaryActiveController(gameLobby);
    v48.m_isHost = Party_AreWePlatformSessionHost(gameLobby);
    xuid.m_id = gameLobby->xb3PlatformHostXUID.m_id;
    XUID::operator=(&v48.m_hostXUID, &xuid);
    v48.m_platformSessionHandledByPartyHost = ((unsigned __int8)(1 << GetClientPlatform()) & gameLobby->platformsWhoseSessionsAreHandledByHost) != 0;
    if ( (unsigned int)(gameLobby->privacySetting - 2) <= 1 || Live_ShouldPlatformSessionBeInviteOnly(gameLobby) || (v19 = Party_ShouldCurrentSessionBeClosed(gameLobby), v48.m_isInviteOnly = 0, v19) )
      v48.m_isInviteOnly = 1;
    v48.m_numSlots = Party_GetNumGameSlots(gameLobby);
    v48.m_joinInfo.gameMode[0] = Com_GameMode_GetActiveGameMode();
    v20 = gameLobby->session;
    *(__m256i *)v48.m_joinInfo.communicationInfo.session.m_address.addrBuff = *(__m256i *)gameLobby->session->dyn.sessionInfo.m_address.addrBuff;
    *(__m256i *)&v48.m_joinInfo.communicationInfo.session.m_address.addrBuff[32] = *(__m256i *)&v20->dyn.sessionInfo.m_address.addrBuff[32];
    *(__m256i *)&v48.m_joinInfo.communicationInfo.session.m_address.addrBuff[64] = *(__m256i *)&v20->dyn.sessionInfo.m_address.addrBuff[64];
    *(_QWORD *)&v48.m_joinInfo.communicationInfo.session.m_security.m_key.ab[4] = *(_QWORD *)&v20->dyn.sessionInfo.m_security.m_key.ab[4];
    *(_DWORD *)&v48.m_joinInfo.communicationInfo.session.m_security.m_key.ab[12] = *(_DWORD *)&v20->dyn.sessionInfo.m_security.m_key.ab[12];
    v48.m_sessionName = gameLobby->partyName;
    v48.m_partyVersionNumber = gameLobby->partyVersionNumber;
    v21 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v21);
    if ( v21->current.enabled )
    {
      v48.m_isMatchReady = 1;
    }
    else
    {
      v22 = OnlineMatchmakerOmniscient::IsInDWLobby(&OnlineMatchmakerOmniscient::ms_instance);
      m_isMatchReady = v48.m_isMatchReady;
      if ( v22 )
        m_isMatchReady = 1;
      v48.m_isMatchReady = m_isMatchReady;
    }
    v24 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( !v24->current.enabled || v5 != GAME_LOBBY_SESSION )
      goto LABEL_66;
    if ( Party_AreWeHost(gameLobby) )
    {
      if ( v48.m_isHost )
      {
        v25 = GameLobbySessionHSM::GetInstance();
        if ( GameLobbySessionHSM::GetCurrentSessionVersion(v25) != gameLobby->platformSessionVersionNumber )
        {
          v26 = GameLobbySessionHSM::GetInstance();
          if ( GameLobbySessionHSM::GetCurrentSessionIdIfActiveAndHost(v26, &gameLobby->mpsdSessionID) )
          {
            v27 = GameLobbySessionHSM::GetInstance();
            GameLobbySessionHSM::GetCurrentSessionIdString(v27, (char *)&sessionIdStringOut);
            Com_Printf(25, "Copied the session id %s into the game lobby\n", (const char *)&sessionIdStringOut);
            v28 = GameLobbySessionHSM::GetInstance();
            gameLobby->platformSessionVersionNumber = GameLobbySessionHSM::GetCurrentSessionVersion(v28);
            PartyHost_GamestateChanged(gameLobby);
          }
        }
      }
    }
    if ( s_lastGameLobbyVersionCheckedForReportingError == gameLobby->partyVersionNumber )
      goto LABEL_66;
    v29 = Dvar_GetInt_Internal_DebugName(DVARINT_online_platform_session_max_wait_time_before_sending_error_ms, "online_platform_session_max_wait_time_before_sending_error_ms");
    if ( Sys_Milliseconds() - gameLobby->partyModifyTime <= v29 )
      goto LABEL_66;
    s_lastGameLobbyVersionCheckedForReportingError = gameLobby->partyVersionNumber;
    if ( v48.m_isHost )
    {
      v30 = GameLobbySessionHSM::GetInstance();
      IsClient = GameLobbySessionHSM::IsHost(v30);
    }
    else
    {
      if ( v48.m_platformSessionHandledByPartyHost )
      {
LABEL_66:
        v48.xb3SessionId = gameLobby->mpsdSessionID;
        v48.m_createSessionForPartyRequest = &gameLobby->createSessionForPartyRequestData;
        v48.m_lobbyId = gameLobby->m_lobbyId;
        v37 = PrivatePartySessionHSM::GetInstance();
        sessionParameters::sessionParameters(&sessionIdStringOut, &__that);
        PrivatePartySessionHSM::setSessionParams(v37, v38);
        v39 = GameLobbySessionHSM::GetInstance();
        sessionParameters::sessionParameters(&sessionIdStringOut, &v48);
        GameLobbySessionHSM::setSessionParams(v39, v40);
LABEL_67:
        bdSecurityKey::~bdSecurityKey(&v48.m_joinInfo.communicationInfo.session.m_security.m_key);
        bdSecurityID::~bdSecurityID(&v48.m_joinInfo.communicationInfo.session.m_security.m_id);
        bdSecurityKey::~bdSecurityKey(&__that.m_joinInfo.communicationInfo.session.m_security.m_key);
        bdSecurityID::~bdSecurityID(&__that.m_joinInfo.communicationInfo.session.m_security.m_id);
        return;
      }
      v32 = GameLobbySessionHSM::GetInstance();
      IsClient = GameLobbySessionHSM::IsClient(v32);
    }
    if ( !IsClient )
    {
      v33 = GameLobbySessionHSM::GetInstance();
      if ( GameLobbySessionHSM::GetFrameStatusCode(v33) != INACTIVE_FRAME_GAME_LOBBY_PARTY_NOT_ENABLED )
      {
        v34 = GameLobbySessionHSM::GetInstance();
        v35 = GameLobbySessionHSM::GetFrameStatusCode(v34);
        LOBYTE(v4) = gameLobby->currentHost.hostNum == -2;
        LODWORD(v44) = v35;
        LODWORD(v43) = v4;
        LODWORD(v42) = Party_AreWeHost(gameLobby);
        LODWORD(fmt) = v48.m_isHost;
        Com_sprintf((char *)&sessionIdStringOut, 0x100ui64, "%d,%d,%d,%d,%d", (unsigned int)gameLobby->partyId, fmt, v42, v43, v44);
        v36 = Online_ErrorReporting::GetInstancePtr();
        Online_ErrorReporting::ReportError(v36, DODGE, (const char *)&sessionIdStringOut);
      }
    }
    goto LABEL_66;
  }
}

/*
==============
Party_GetActiveClientForLocalClientNum
==============
*/
PartyActiveClient Party_GetActiveClientForLocalClientNum(const PartyData *party, const LocalClientNum_t localClientNum)
{
  PartyActiveClient result; 
  int ControllerFromClient; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7270, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_GetSecondaryActiveClient(party, &outPartyActiveClient) || (result = outPartyActiveClient, outPartyActiveClient.localClientNum != localClientNum) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    return Party_GetMainActiveClient(party, ControllerFromClient);
  }
  return result;
}

/*
==============
Party_GetActiveParty
==============
*/
PartyData *Party_GetActiveParty()
{
  if ( g_partyData.party_systemActive && g_partyData.inParty )
    return &g_partyData;
  else
    return Lobby_GetPartyData();
}

/*
==============
Party_GetAliensDifficulty
==============
*/
__int64 Party_GetAliensDifficulty(PartyData *party)
{
  if ( party )
    return party->aliensDifficulty;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7848, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56C0C];
}

/*
==============
Party_GetAlternateMapCount
==============
*/
__int64 Party_GetAlternateMapCount(const PartyData *party)
{
  __int64 result; 
  __int64 v2; 
  VoteType *p_vote; 

  result = 0i64;
  v2 = 200i64;
  p_vote = &party->partyMembers[0].info.vote;
  do
  {
    if ( *((_BYTE *)p_vote + 306) >= 5u && *p_vote == PARTY_VOTE_ALTERNATE_MAP )
      result = (unsigned int)(result + 1);
    p_vote += 126;
    --v2;
  }
  while ( v2 );
  return result;
}

/*
==============
Party_GetAssignedSquad
==============
*/
int Party_GetAssignedSquad(const PartyData *party, const XUID player)
{
  const char *v4; 
  XUID v5; 
  int outMemberIndex; 

  v5.m_id = player.m_id;
  if ( Party_FindMemberByXUID_Internal(party, player, &outMemberIndex) && party->partyMembers[outMemberIndex].status >= 5u && outMemberIndex != -1 )
    return Party_GetMemberSquad(party, outMemberIndex);
  if ( nextPrintTime_3 < Sys_Milliseconds() )
  {
    v4 = XUID::ToDevString(&v5);
    Com_Printf(25, "[%s] Unable to find player (%s) in party.\n", party->partyName, v4);
    nextPrintTime_3 = Sys_Milliseconds() + 500;
  }
  return -1;
}

/*
==============
Party_GetAssignedTeam
==============
*/
__int64 Party_GetAssignedTeam(const PartyData *party, const XUID player)
{
  __int64 v3; 
  int v5; 
  const char *v6; 
  XUID v7; 
  int outMemberIndex; 

  v7.m_id = player.m_id;
  if ( Party_FindMemberByXUID_Internal(party, player, &outMemberIndex) )
  {
    v3 = outMemberIndex;
    if ( party->partyMembers[v3].status >= 5u && outMemberIndex != -1 )
      return (unsigned int)party->partyMembers[v3].team;
  }
  v5 = Sys_Milliseconds();
  if ( v5 - lastPrintTime > 500 && Session_IsValid(party->session) )
  {
    v6 = XUID::ToDevString(&v7);
    Com_PrintWarning(25, "[%s] Unable to find player (%s) in party.\n", party->partyName, v6);
  }
  lastPrintTime = v5;
  return 0i64;
}

/*
==============
Party_GetClientPrivatePartyId
==============
*/
PartyMember *Party_GetClientPrivatePartyId(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1870, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  if ( party->inParty && Party_IsMemberIndexDataAvailable(party, v2) )
    return &party->partyMembers[v2];
  else
    return (PartyMember *)&g_noPrivatePartyId;
}

/*
==============
Party_GetClientSkill
==============
*/
int Party_GetClientSkill(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 
  __int64 v6; 
  float performanceValue; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1882, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1883, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  if ( !Party_IsMatchmakingLobby(party) )
    return party->partyMembers[v2].info.trueSkill;
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v6) = 200;
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  if ( OnlineMatchmakerOmniscient::GetPerformanceValueForPlayer(&OnlineMatchmakerOmniscient::ms_instance, party->partyMembers[v2].playerUID, &performanceValue) )
    return Online_Skill_ConvertPerformanceToInt(performanceValue);
  else
    return party->partyMembers[v2].info.trueSkill;
}

/*
==============
Party_GetClientXNAddr
==============
*/
_BOOL8 Party_GetClientXNAddr(const PartyData *party, const int clientNum, XNADDR *xnaddr)
{
  NetConnection *MemberConnection; 
  __int64 v8; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1860, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    LODWORD(v8) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1861, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, 200) )
      __debugbreak();
  }
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, clientNum);
  return NetConnection::GetXnaddr(MemberConnection, xnaddr);
}

/*
==============
Party_GetConnectionType
==============
*/
__int64 Party_GetConnectionType(const PartyData *party)
{
  return (unsigned int)(party == Lobby_GetPartyData()) + 1;
}

/*
==============
Party_GetCountForVoteType
==============
*/
__int64 Party_GetCountForVoteType(const PartyData *party, VoteType voteType)
{
  __int64 result; 
  __int64 v3; 
  VoteType *p_vote; 

  result = 0i64;
  v3 = 200i64;
  p_vote = &party->partyMembers[0].info.vote;
  do
  {
    if ( *((_BYTE *)p_vote + 306) >= 5u && *p_vote == voteType )
      result = (unsigned int)(result + 1);
    p_vote += 126;
    --v3;
  }
  while ( v3 );
  return result;
}

/*
==============
Party_GetCrossplayEnabled
==============
*/
_BOOL8 Party_GetCrossplayEnabled(const PartyData *party)
{
  return party->isCrossplayEnabled;
}

/*
==============
Party_GetDraftLoadoutTimer
==============
*/
__int64 Party_GetDraftLoadoutTimer(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->draftLoadoutTimer;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7783, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56C10];
}

/*
==============
Party_GetDraftRigTimer
==============
*/
__int64 Party_GetDraftRigTimer(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->draftRigTimer;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7795, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56C18];
}

/*
==============
Party_GetDraftWeaponTimer
==============
*/
__int64 Party_GetDraftWeaponTimer(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->draftWeaponTimer;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7789, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x56C14];
}

/*
==============
Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor
==============
*/
__int64 Party_GetFirstPrivatePartyMemberIndexTheHostIsWaitingFor(const PartyData *party)
{
  unsigned int v2; 
  unsigned __int8 *i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6964, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6965, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6966, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  v2 = 0;
  for ( i = &party->partyMembers[0].status; ; i += 504 )
  {
    if ( *i != 6 )
    {
      if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6942, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
        __debugbreak();
      if ( i == (unsigned __int8 *)410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 323, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
      if ( (*i == 1 || *i == 6 || Party_IsMemberIndexCommitted(party, v2)) && (party->partyId || Party_IsPrivateOrSystemlinkGame(party) || Party_IsPlayerInPrivateParty(party->partyMembers[v2].playerUID)) )
        break;
    }
    if ( ++v2 >= 0xC8 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
Party_GetGameFlags
==============
*/
__int64 Party_GetGameFlags(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->gameFlags;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3484, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x4CCDC];
}

/*
==============
Party_GetGameStartTime
==============
*/
__int64 Party_GetGameStartTime(const PartyData *party)
{
  int gameStartTime; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3806, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3807, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  gameStartTime = party->gameStartTime;
  if ( !party->areWeHost && party->specificData.hostData.matchRulesChangeTime > gameStartTime )
    return (unsigned int)party->specificData.hostData.matchRulesChangeTime;
  return (unsigned int)gameStartTime;
}

/*
==============
Party_GetGametype
==============
*/
const char *Party_GetGametype()
{
  const dvar_t *v0; 
  _BYTE *integer64; 
  __int64 v2; 
  GameStateInfo *v3; 
  GameStateInfo *v4; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 

  v0 = DVARSTR_online_matchmaking_gametype;
  if ( !DVARSTR_online_matchmaking_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchmaking_gametype") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer64 = (_BYTE *)v0->current.integer64;
  v2 = -1i64;
  do
    ++v2;
  while ( integer64[v2] );
  if ( (_DWORD)v2 && Live_IsOnlineGame() )
    return integer64;
  v3 = GameStateInfo_Get();
  v4 = v3;
  if ( !v3->usingRecipe )
  {
    v6 = DVARSTR_ui_gametype;
    if ( !DVARSTR_ui_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_gametype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer64 = (_BYTE *)v6->current.integer64;
    if ( !integer64 || !*integer64 )
    {
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF_HALF )
      {
        v7 = DVARSTR_default_gametype_mp;
        if ( !DVARSTR_default_gametype_mp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "default_gametype_mp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( !*(_BYTE *)v7->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3407, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_default_gametype_mp, \"default_gametype_mp\" )[0])", (const char *)&queryFormat, "Dvar_GetString( default_gametype_mp )[0]") )
          __debugbreak();
        v8 = DVARSTR_default_gametype_mp;
        if ( !DVARSTR_default_gametype_mp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "default_gametype_mp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        return v8->current.string;
      }
      else if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
      {
        v9 = DVARSTR_default_gametype_cp;
        if ( !DVARSTR_default_gametype_cp && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "default_gametype_cp") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v9);
        if ( !*(_BYTE *)v9->current.integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3412, ASSERT_TYPE_ASSERT, "(Dvar_GetString_Internal_DebugName( DVARSTR_default_gametype_cp, \"default_gametype_cp\" )[0])", (const char *)&queryFormat, "Dvar_GetString( default_gametype_cp )[0]") )
          __debugbreak();
        return Dvar_GetString_Internal_DebugName(DVARSTR_default_gametype_cp, "default_gametype_cp");
      }
    }
    return integer64;
  }
  if ( !v3->matchRules && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3394, ASSERT_TYPE_ASSERT, "(gInfo->matchRules)", (const char *)&queryFormat, "gInfo->matchRules") )
    __debugbreak();
  return BG_MatchRulesData_GetGameType(v4->matchRules);
}

/*
==============
Party_GetHostConnection
==============
*/
NetConnection *Party_GetHostConnection(PartyData *party, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1853, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( party->currentHost.connections ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( party->currentHost.connections )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  return (NetConnection *)((char *)&party->currentHost + 32 * v2);
}

/*
==============
Party_GetHostConnection
==============
*/
const NetConnection *Party_GetHostConnection(const PartyData *party, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1846, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( party->currentHost.connections ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( party->currentHost.connections )\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  return (const NetConnection *)((char *)&party->currentHost + 32 * v2);
}

/*
==============
Party_GetHostName
==============
*/
const char *Party_GetHostName(const PartyData *party)
{
  int v3; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1437, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->currentHost.hostNum == -2 )
    return NetConnection::GetString(party->currentHost.connections);
  v3 = Party_HostNum(party);
  return Party_GetMemberName(party, v3);
}

/*
==============
Party_GetHostStatus
==============
*/
const char *Party_GetHostStatus(const PartyData *party)
{
  int v3; 

  if ( party->currentHost.hostNum == -2 )
    return s_shortPartyStatusStrings[5];
  v3 = Party_HostNum(party);
  return Party_GetMemberStatus(party, v3);
}

/*
==============
Party_GetHostXuid
==============
*/
XUID *Party_GetHostXuid(XUID *result, const PartyData *party)
{
  int v5; 

  if ( party->currentHost.hostNum == -2 )
  {
    XUID::NullXUID(result);
  }
  else
  {
    v5 = Party_HostNum(party);
    Party_GetXuid(result, party, v5);
  }
  return result;
}

/*
==============
Party_GetInviteJoinsDisabledForNoJIP
==============
*/
_BOOL8 Party_GetInviteJoinsDisabledForNoJIP(const PartyData *party)
{
  return party->inviteJoinsDisabledForNoJIP;
}

/*
==============
Party_GetLobbyState_f
==============
*/
void Party_GetLobbyState_f()
{
  char v0; 
  PartyData *PartyData; 
  const char *v2; 

  v0 = Lobby_GetPartyData()->lobbyFlags & 0x64;
  PartyData = Lobby_GetPartyData();
  if ( v0 == 4 )
  {
    v2 = "Lobby state is WAITING, flags = 0x%x\n";
  }
  else
  {
    v2 = "Unknown lobby state, flags = 0x%x\n";
    if ( v0 == 32 )
      v2 = "Lobby state is STARTREADY, flags = 0x%x\n";
  }
  Com_Printf(25, v2, PartyData->lobbyFlags);
}

/*
==============
Party_GetLocalMLGFollower
==============
*/
_BOOL8 Party_GetLocalMLGFollower(PartyData *party, const int localControllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7656, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) && MLG_IsCoDCasterEnabled() && party->partyLocalIsMLGFollower[outLocalClientNum];
}

/*
==============
Party_GetLocalMLGFollowerIndex
==============
*/
__int64 Party_GetLocalMLGFollowerIndex(PartyData *party, const int localControllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7680, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) && Party_GetLocalMLGFollower(party, localControllerIndex) )
    return (unsigned int)party->partyLocalMLGFollowerIndex[outLocalClientNum];
  else
    return 63i64;
}

/*
==============
Party_GetLocalMLGSpectator
==============
*/
_BOOL8 Party_GetLocalMLGSpectator(PartyData *party, const int localControllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7622, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) && MLG_IsCoDCasterEnabled() && party->partyLocalIsMLGSpectator[outLocalClientNum];
}

/*
==============
Party_GetLocalReadyUpFlag
==============
*/
__int64 Party_GetLocalReadyUpFlag()
{
  char ActiveGameMode; 
  unsigned __int8 v1; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 0;
  if ( ActiveGameMode == 3 )
    return g_partyLocalReadyUpFlag;
  return v1;
}

/*
==============
Party_GetMainActiveClient
==============
*/
PartyActiveClient Party_GetMainActiveClient(const PartyData *party, const int originalControllerNum)
{
  __int64 v2; 
  PartyActiveClient result; 
  bool IsControllerMappedToClient; 
  bool v6; 
  LocalClientNum_t v7; 
  char *fmt; 
  __int64 v9; 
  LocalClientNum_t outLocalClientNum; 
  __int64 v11; 

  v2 = originalControllerNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7158, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( (_DWORD)v2 == party->splitscreenData.mainClient.localControllerIndex )
    {
      if ( (unsigned int)v2 >= 8 )
      {
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7176, ASSERT_TYPE_ASSERT, "(unsigned)( originalControllerNum ) < (unsigned)( ( sizeof( *array_counter( lastPrintState ) ) + 0 ) )", "originalControllerNum doesn't index ARRAY_COUNT( lastPrintState )\n\t%i not in [0, %i)", v9, 8) )
          __debugbreak();
      }
      if ( lastPrintState[v2] )
      {
        LODWORD(fmt) = v2;
        Com_Printf(25, "[%s] Party - GetMainControllerAndClientNum - Swapping controller to use the main controller %i instead of %i. - END\n", party->partyName, (unsigned int)party->splitscreenData.mainClient.localControllerIndex, fmt);
        lastPrintState[v2] = 0;
      }
    }
    else
    {
      if ( (unsigned int)v2 >= 8 )
      {
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7167, ASSERT_TYPE_ASSERT, "(unsigned)( originalControllerNum ) < (unsigned)( ( sizeof( *array_counter( lastPrintState ) ) + 0 ) )", "originalControllerNum doesn't index ARRAY_COUNT( lastPrintState )\n\t%i not in [0, %i)", v9, 8) )
          __debugbreak();
      }
      if ( lastPrintState[v2] != 1 )
      {
        LODWORD(fmt) = v2;
        Com_Printf(25, "[%s] Party - GetMainControllerAndClientNum - Swapping controller to use the main controller %i instead of %i. - START\n", party->partyName, (unsigned int)party->splitscreenData.mainClient.localControllerIndex, fmt);
        result = party->splitscreenData.mainClient;
        lastPrintState[v2] = 1;
        return result;
      }
    }
    return party->splitscreenData.mainClient;
  }
  else
  {
    IsControllerMappedToClient = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
    HIDWORD(v11) = v2;
    if ( IsControllerMappedToClient )
    {
      LODWORD(v11) = outLocalClientNum;
      return (PartyActiveClient)v11;
    }
    else
    {
      v6 = CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum);
      v7 = LOCAL_CLIENT_0;
      if ( v6 )
        v7 = outLocalClientNum;
      LODWORD(v11) = v7;
      return (PartyActiveClient)v11;
    }
  }
}

/*
==============
Party_GetMainActiveController
==============
*/
__int64 Party_GetMainActiveController(const PartyData *party)
{
  return (unsigned int)party->splitscreenData.mainClient.localControllerIndex;
}

/*
==============
Party_GetMapName
==============
*/
const char *Party_GetMapName()
{
  const dvar_t *v0; 

  v0 = DVARSTR_ui_mapname;
  if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.string;
}

/*
==============
Party_GetMemberConnection
==============
*/
NetConnection *Party_GetMemberConnection(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  int v6; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v6) )
      __debugbreak();
  }
  return &party->partyMembers[v2].connection;
}

/*
==============
Party_GetMemberFullName
==============
*/
void Party_GetMemberFullName(const PartyData *party, const int clientNum, char *nameBufferIn, const int nameBufferSizeIn)
{
  unsigned __int64 v4; 
  __int64 v6; 
  unsigned int gamertagSuffix; 
  const char *MemberName; 
  char *fmt; 
  __int64 v11; 
  __int64 v12; 

  v4 = nameBufferSizeIn;
  v6 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1403, ASSERT_TYPE_SANITY, "( party )", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0xC8 )
  {
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1404, ASSERT_TYPE_SANITY, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, 200) )
      __debugbreak();
  }
  if ( !nameBufferIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1405, ASSERT_TYPE_SANITY, "( nameBufferIn )", (const char *)&queryFormat, "nameBufferIn") )
    __debugbreak();
  if ( (int)v4 < 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1406, ASSERT_TYPE_SANITY, "( nameBufferSizeIn >= 64 )", (const char *)&queryFormat, "nameBufferSizeIn >= MAX_FULL_PLAYERNAME_LENGTH") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1413, ASSERT_TYPE_SANITY, "( party )", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v6 >= 0xC8 )
  {
    LODWORD(v12) = 200;
    LODWORD(v11) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1414, ASSERT_TYPE_SANITY, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  gamertagSuffix = party->partyMembers[v6].info.gamertagSuffix;
  MemberName = Party_GetMemberName(party, v6);
  LODWORD(fmt) = gamertagSuffix;
  Com_sprintf(nameBufferIn, v4, "%s#%u", MemberName, fmt);
}

/*
==============
Party_GetMemberGamertagSuffix
==============
*/
__int64 Party_GetMemberGamertagSuffix(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1413, ASSERT_TYPE_SANITY, "( party )", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1414, ASSERT_TYPE_SANITY, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return party->partyMembers[v2].info.gamertagSuffix;
}

/*
==============
Party_GetMemberHeadset
==============
*/
_BOOL8 Party_GetMemberHeadset(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1484, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return party->partyMembers[v2].info.headsetPresent;
}

/*
==============
Party_GetMemberIndex
==============
*/
unsigned int Party_GetMemberIndex(const PartyData *party, const PartyMember *member)
{
  unsigned __int64 v2; 
  unsigned int result; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 

  v2 = (__int64)((char *)member - (char *)party - 2192 + ((unsigned __int128)(((char *)member - (char *)party - 2192) * (__int128)(__int64)0x8208208208208209ui64) >> 64)) >> 8;
  result = truncate_cast<int,__int64>(v2 + (v2 >> 63));
  v4 = result;
  if ( result >= 0xC8 )
  {
    v6 = 200;
    v5 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1388, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
    return v4;
  }
  return result;
}

/*
==============
Party_GetMemberName
==============
*/
char *Party_GetMemberName(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1395, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return party->partyMembers[v2].info.gamertag;
}

/*
==============
Party_GetMemberNatType
==============
*/
__int64 Party_GetMemberNatType(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v4; 
  PartyMember *v5; 
  unsigned __int8 status; 
  int *p_natType; 
  __int64 v9; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1475, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, 200) )
      __debugbreak();
  }
  v4 = (unsigned int)v2;
  v5 = &party->partyMembers[v4];
  if ( (const PartyData *)((char *)party + v4 * 504) == (const PartyData *)-2192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  status = v5->status;
  if ( (status & 0xFC) == 0 && status != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1476, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  p_natType = &party->partyMembers[v2].natType;
  if ( (unsigned int)(*p_natType - 1) <= 2 )
    return (unsigned int)*p_natType;
  LODWORD(v9) = *p_natType;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1477, ASSERT_TYPE_ASSERT, "( ( party->partyMembers[clientNum].natType > 0 && party->partyMembers[clientNum].natType <= XONLINE_NAT_STRICT ) )", "( party->partyMembers[clientNum].natType ) = %i", v9) )
    __debugbreak();
  return (unsigned int)*p_natType;
}

/*
==============
Party_GetMemberPlatform
==============
*/
int Party_GetMemberPlatform(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  int result; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 630, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 631, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  result = Party_IsMemberIndexDataAvailable(party, v2);
  if ( result )
    return (unsigned __int8)party->partyMembers[v2].info.platform[0];
  return result;
}

/*
==============
Party_GetMemberSquad
==============
*/
__int64 Party_GetMemberSquad(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1429, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1430, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return (unsigned int)party->partyMembers[v2].squad;
}

/*
==============
Party_GetMemberStatus
==============
*/
const char *Party_GetMemberStatus(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  unsigned __int8 *p_status; 
  __int64 v6; 
  __int64 v7; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1507, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1508, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, 200) )
      __debugbreak();
  }
  p_status = &party->partyMembers[v2].status;
  if ( *p_status >= 7u )
  {
    LODWORD(v7) = 7;
    LODWORD(v6) = *p_status;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1509, ASSERT_TYPE_ASSERT, "(unsigned)( party->partyMembers[clientNum].status ) < (unsigned)( PARTYSTATUS_COUNT )", "party->partyMembers[clientNum].status doesn't index PARTYSTATUS_COUNT\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return s_shortPartyStatusStrings[*p_status];
}

/*
==============
Party_GetMemberTeam
==============
*/
__int64 Party_GetMemberTeam(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1421, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1422, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return (unsigned int)party->partyMembers[v2].team;
}

/*
==============
Party_GetMemberUsingGamepad
==============
*/
_BOOL8 Party_GetMemberUsingGamepad(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1491, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return party->partyMembers[v2].info.usingGamepad;
}

/*
==============
Party_GetNatType
==============
*/
__int64 Party_GetNatType(const PartyData *party, const XUID xuid)
{
  __int64 v3; 
  __int64 v4; 
  int natType; 
  int outMemberIndex; 

  if ( !Party_FindMemberByXUID_Internal(party, xuid, &outMemberIndex) )
    return 3i64;
  v3 = outMemberIndex;
  v4 = outMemberIndex;
  if ( party->partyMembers[v3].status < 5u || outMemberIndex < 0 )
    return 3i64;
  if ( (unsigned int)(party->partyMembers[v3].natType - 1) > 2 )
  {
    natType = party->partyMembers[v3].natType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3831, ASSERT_TYPE_ASSERT, "( ( party->partyMembers[slot].natType > 0 && party->partyMembers[slot].natType <= XONLINE_NAT_STRICT ) )", "( party->partyMembers[slot].natType ) = %i", natType) )
      __debugbreak();
  }
  return (unsigned int)party->partyMembers[v4].natType;
}

/*
==============
Party_GetNextMapCount
==============
*/
__int64 Party_GetNextMapCount(const PartyData *party)
{
  __int64 result; 
  __int64 v2; 
  VoteType *p_vote; 

  result = 0i64;
  v2 = 200i64;
  p_vote = &party->partyMembers[0].info.vote;
  do
  {
    if ( *((_BYTE *)p_vote + 306) >= 5u && *p_vote == PARTY_VOTE_NEXT_MAP )
      result = (unsigned int)(result + 1);
    p_vote += 126;
    --v2;
  }
  while ( v2 );
  return result;
}

/*
==============
Party_GetNumGameSlots
==============
*/
__int64 Party_GetNumGameSlots(const PartyData *party)
{
  if ( party )
    return (unsigned int)party->maxGameSlots;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3501, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return MEMORY[0x4CC64];
}

/*
==============
Party_GetOurPrivatePartyId
==============
*/
bool Party_GetOurPrivatePartyId(bdSecurityID *outKid)
{
  bool result; 
  bdSecurityID v3; 

  if ( g_partyData.inParty )
  {
    v3 = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
    result = 1;
    *outKid = v3;
  }
  else
  {
    *outKid = g_noPrivatePartyId;
    return 0;
  }
  return result;
}

/*
==============
Party_GetPartyForSession
==============
*/
PartyData *Party_GetPartyForSession(const SessionData *session)
{
  PartyData *result; 

  if ( !session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4120, ASSERT_TYPE_ASSERT, "(session)", (const char *)&queryFormat, "session") )
    __debugbreak();
  result = Lobby_GetPartyData();
  if ( result->session != session )
  {
    if ( g_partyData.session == session )
      return &g_partyData;
    else
      return 0i64;
  }
  return result;
}

/*
==============
Party_GetPartyReadyUpStatus
==============
*/
_BOOL8 Party_GetPartyReadyUpStatus()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  __int64 v3; 
  int v4; 
  int v5; 
  PartyMember *partyMembers; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG || !Lobby_IsInLobby() )
    return 1i64;
  v0 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( !v0->current.enabled )
    return 1i64;
  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( !Dvar_GetInt_Internal_DebugName(DVARINT_pt_AliensReadyUpPrivateInUse, "pt_AliensReadyUpPrivateInUse") )
      return 1i64;
  }
  else if ( !Dvar_GetInt_Internal_DebugName(DVARINT_pt_AliensReadyUpPublicInUse, "pt_AliensReadyUpPublicInUse") )
  {
    return 1i64;
  }
  v3 = 200i64;
  v4 = 0;
  v5 = 0;
  partyMembers = Lobby_GetPartyData()->partyMembers;
  do
  {
    if ( Party_IsMemberDataAvailable(partyMembers) )
    {
      ++v4;
      if ( partyMembers->info.alien_readyUpFlag )
        ++v5;
    }
    ++partyMembers;
    --v3;
  }
  while ( v3 );
  return v4 <= 1 || v5 > v4 / 2;
}

/*
==============
Party_GetPartyRestrictsF2PUsersFlag
==============
*/
_BOOL8 Party_GetPartyRestrictsF2PUsersFlag(const PartyData *party)
{
  return party->restrictsF2PUsers;
}

/*
==============
Party_GetPlatformSessionHandledByHost
==============
*/
bool Party_GetPlatformSessionHandledByHost(const PartyData *party, const ClientPlatform platform)
{
  return ((unsigned __int8)(1 << platform) & party->platformsWhoseSessionsAreHandledByHost) != 0;
}

/*
==============
Party_GetPlatformSessionHostXUID
==============
*/
XUID *Party_GetPlatformSessionHostXUID(XUID *result, const PartyData *party, ClientPlatform platform)
{
  char v3; 

  v3 = platform;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6005, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( v3 == 4 )
  {
    result->m_id = (unsigned __int64)party->ps4PlatformHostXUID;
    return result;
  }
  else
  {
    if ( v3 == 3 )
      result->m_id = (unsigned __int64)party->xb3PlatformHostXUID;
    else
      XUID::NullXUID(result);
    return result;
  }
}

/*
==============
Party_GetPlatformSessionHostXUIDForCurrentPlatform
==============
*/
XUID *Party_GetPlatformSessionHostXUIDForCurrentPlatform(XUID *result, const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5990, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result->m_id = (unsigned __int64)party->xb3PlatformHostXUID;
  return result;
}

/*
==============
Party_GetPlaylistEntry
==============
*/
__int64 Party_GetPlaylistEntry(PartyData *party)
{
  int currentEntry; 
  int v4; 

  if ( OnlineTournament_IsInTournament() || Live_IsInGameBattlesGame() )
    return 0i64;
  if ( party->currentEntry >= 8u )
  {
    v4 = 8;
    currentEntry = party->currentEntry;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3316, ASSERT_TYPE_ASSERT, "(unsigned)( party->currentEntry ) < (unsigned)( 8 )", "party->currentEntry doesn't index NUM_LAST_ENTRIES\n\t%i not in [0, %i)", currentEntry, v4) )
      __debugbreak();
  }
  return party->lastEntries[party->currentEntry];
}

/*
==============
Party_GetPrivacySetting
==============
*/
__int64 Party_GetPrivacySetting(const PartyData *party)
{
  return (unsigned int)party->privacySetting;
}

/*
==============
Party_GetPrivateMatchId
==============
*/
PrivateMatchId *Party_GetPrivateMatchId(PrivateMatchId *result, const PartyData *party)
{
  result->m_id = (unsigned __int64)party->privateMatchId;
  return result;
}

/*
==============
Party_GetRandomMapCount
==============
*/
__int64 Party_GetRandomMapCount(const PartyData *party)
{
  __int64 result; 
  __int64 v2; 
  VoteType *p_vote; 

  result = 0i64;
  v2 = 200i64;
  p_vote = &party->partyMembers[0].info.vote;
  do
  {
    if ( *((_BYTE *)p_vote + 306) >= 5u && *p_vote == PARTY_VOTE_RANDOM_MAP )
      result = (unsigned int)(result + 1);
    p_vote += 126;
    --v2;
  }
  while ( v2 );
  return result;
}

/*
==============
Party_GetRetailDebug
==============
*/
void Party_GetRetailDebug(char *destString, const int maxLength)
{
  unsigned __int64 v2; 
  PartyData *ActiveParty; 
  PartyData *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  int NumGameSlots; 
  unsigned __int64 v9; 
  int v10; 
  unsigned int v11; 
  int *p_lastVoicePacketReceivedTime; 
  const char *v13; 
  int v14; 
  bool ShouldSendPeerVoiceData; 
  int v16; 
  bool v17; 
  unsigned __int8 MemberPlatform; 
  const char *MatchmakingStringForClientPlatform; 
  const char *MemberName; 
  const char *v21; 
  const char *v22; 
  unsigned int MemberSquad; 
  __int64 v24; 
  const char *v25; 
  unsigned int v26; 
  int v27; 
  char *v28; 
  int v29; 
  bool CanClientsConnect; 
  const char *v31; 
  unsigned int v32; 
  const char *String; 
  const char *v34; 
  const dvar_t *v35; 
  char v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  const char *v39; 
  unsigned int packetsPerSec; 
  int v41; 
  const char *v42; 
  __int64 v43; 
  __int64 v44; 
  bool IsEnabled; 
  int outMemberIndex[2]; 
  XUID result; 
  int v48; 
  char v49[4]; 
  int routeList[32]; 

  v2 = maxLength;
  ActiveParty = Live_GetActiveParty();
  v5 = ActiveParty;
  if ( ActiveParty->inParty )
  {
    v6 = v2;
    v7 = j_va("[%s]\n", ActiveParty->partyName);
    I_strcat_truncate(destString, v2, v7);
    NumGameSlots = Party_GetNumGameSlots(v5);
    v9 = NumGameSlots;
    v48 = NumGameSlots;
    IsEnabled = PeerMesh_IsEnabled(v5);
    memset_0(routeList, 0, sizeof(routeList));
    if ( IsEnabled )
    {
      Live_GetXuid(&result, v5->splitscreenData.mainClient.localControllerIndex);
      if ( !Party_FindMemberByXUID_Internal(v5, result, outMemberIndex) || (v10 = outMemberIndex[0], v5->partyMembers[outMemberIndex[0]].status < 5u) )
        v10 = -1;
      PeerMesh_BuildRouteList(v5, LOCAL_CLIENT_0, v10, routeList, 0x20u);
    }
    v11 = 0;
    if ( (int)v9 > 0 )
    {
      p_lastVoicePacketReceivedTime = &v5->partyMembers[0].lastVoicePacketReceivedTime;
      *(_QWORD *)outMemberIndex = &v5->partyMembers[0].lastVoicePacketReceivedTime;
      result.m_id = v9;
      do
      {
        if ( v11 >= 0xC8 )
        {
          LODWORD(v44) = 200;
          LODWORD(v43) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v43, v44) )
            __debugbreak();
        }
        if ( (unsigned __int8)(*((_BYTE *)p_lastVoicePacketReceivedTime + 186) - 4) <= 1u )
        {
          if ( *p_lastVoicePacketReceivedTime )
          {
            v14 = Sys_Milliseconds();
            v13 = j_va("%i", (unsigned int)((v14 - *p_lastVoicePacketReceivedTime) / 1000));
          }
          else
          {
            v13 = "-";
          }
          ShouldSendPeerVoiceData = CL_CGameMP_ShouldSendPeerVoiceData(v5, LOCAL_CLIENT_0, v11);
          v16 = *(p_lastVoicePacketReceivedTime - 54);
          v17 = ShouldSendPeerVoiceData;
          if ( Voice_IsMemberTalking(v5, v11) )
            v13 = "Talking";
          MemberPlatform = Party_GetMemberPlatform(v5, v11);
          MatchmakingStringForClientPlatform = Com_GetMatchmakingStringForClientPlatform((const ClientPlatform)MemberPlatform);
          MemberName = Party_GetMemberName(v5, v11);
          LODWORD(v44) = v16;
          v21 = "NoSendV";
          if ( v17 )
            v21 = "YesSendV";
          v22 = j_va("[%i] %s %s %s %s %i", v11, MemberName, MatchmakingStringForClientPlatform, v21, v13, v44);
          I_strcat_truncate(destString, v6, v22);
          if ( v5->partyId )
          {
            p_lastVoicePacketReceivedTime = *(int **)outMemberIndex;
            v25 = "\n";
          }
          else
          {
            MemberSquad = Party_GetMemberSquad(v5, v11);
            if ( v11 >= 0xC8 )
            {
              LODWORD(v44) = 200;
              LODWORD(v43) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1422, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v43, v44) )
                __debugbreak();
            }
            v24 = MemberSquad;
            p_lastVoicePacketReceivedTime = *(int **)outMemberIndex;
            v25 = j_va(" (%i,%i)\n", *(unsigned int *)(*(_QWORD *)outMemberIndex + 176i64), v24);
          }
          I_strcat_truncate(destString, v6, v25);
          if ( IsEnabled )
          {
            if ( v5->currentHost.hostNum == -2 )
              v26 = -1;
            else
              v26 = Party_HostNum(v5);
            v27 = v48 - 1;
            if ( v48 - 1 >= 0 )
            {
              v28 = &v49[4 * v48];
              v29 = __ROL4__(1, v11);
              do
              {
                if ( v11 == v27 || (CanClientsConnect = PeerMesh_CanClientsConnect(v5, v11, v27), v31 = "0", CanClientsConnect) )
                  v31 = "1";
                I_strcat_truncate(destString, v6, v31);
                v32 = v27;
                if ( (v29 & *(_DWORD *)v28) == 0 )
                  v32 = v26;
                v28 -= 4;
                --v27;
                v26 = v32;
              }
              while ( v27 >= 0 );
            }
            if ( v11 >= 0xC8 )
            {
              LODWORD(v44) = 200;
              LODWORD(v43) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v43, v44) )
                __debugbreak();
            }
            String = NetConnection::GetString(&v5->partyMembers[v11].connection);
            v34 = j_va(" [%i], %s\n", v26, String);
            I_strcat_truncate(destString, v6, v34);
            p_lastVoicePacketReceivedTime = *(int **)outMemberIndex;
          }
        }
        p_lastVoicePacketReceivedTime += 126;
        ++v11;
        *(_QWORD *)outMemberIndex = p_lastVoicePacketReceivedTime;
        --result.m_id;
      }
      while ( result.m_id );
    }
    v35 = DVARBOOL_voice_proximity_team;
    if ( !DVARBOOL_voice_proximity_team )
      goto LABEL_59;
    v36 = 0;
    if ( !DVARBOOL_voice_proximity_team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_team") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    if ( v35->current.enabled )
    {
      I_strcat_truncate(destString, v6, "team proximity enabled\n");
      v36 = 1;
    }
    v37 = DVARBOOL_voice_proximity_enemy;
    if ( !DVARBOOL_voice_proximity_enemy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_enemy") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.enabled )
    {
      I_strcat_truncate(destString, v6, "enemy proximity enabled\n");
    }
    else if ( !v36 )
    {
LABEL_59:
      packetsPerSec = cl_voiceCommunication[0].packetsPerSec;
      v41 = Sys_Milliseconds();
      v42 = j_va("\npkt count: %i, last sent: %i, pkt per sec: %i\n", (unsigned int)cl_voiceCommunication[0].voicePacketCount, (unsigned int)((v41 - cl_voiceCommunication[0].voicePacketLastTransmit) / 1000), packetsPerSec);
      I_strcat_truncate(destString, v6, v42);
      return;
    }
    v38 = DVARINT_voice_proximity_radius;
    if ( !DVARINT_voice_proximity_radius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_proximity_radius") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = j_va("proximity radius %i", v38->current.unsignedInt);
    I_strcat_truncate(destString, v6, v39);
    goto LABEL_59;
  }
}

/*
==============
Party_GetSavedLobbyId
==============
*/
bool Party_GetSavedLobbyId(const PartyData *party, unsigned __int64 *outLobbyId)
{
  unsigned __int64 m_prevLobbyId; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8401, ASSERT_TYPE_ASSERT, "(party != nullptr)", (const char *)&queryFormat, "party != nullptr") )
    __debugbreak();
  m_prevLobbyId = party->m_prevLobbyId;
  *outLobbyId = m_prevLobbyId;
  return m_prevLobbyId != 0;
}

/*
==============
Party_GetSecondaryActiveClient
==============
*/
__int64 Party_GetSecondaryActiveClient(const PartyData *party, PartyActiveClient *outPartyActiveClient)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7223, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !outPartyActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7224, ASSERT_TYPE_ASSERT, "(outPartyActiveClient)", (const char *)&queryFormat, "outPartyActiveClient") )
    __debugbreak();
  if ( !party->inParty || !party->splitscreenData.otherClientActive )
    return 0i64;
  if ( party->splitscreenData.otherClient.localControllerIndex == party->splitscreenData.mainClient.localControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7229, ASSERT_TYPE_ASSERT, "(party->splitscreenData.otherClient.localControllerIndex != party->splitscreenData.mainClient.localControllerIndex)", (const char *)&queryFormat, "party->splitscreenData.otherClient.localControllerIndex != party->splitscreenData.mainClient.localControllerIndex") )
    __debugbreak();
  if ( party->splitscreenData.otherClient.localClientNum == party->splitscreenData.mainClient.localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7230, ASSERT_TYPE_ASSERT, "(party->splitscreenData.otherClient.localClientNum != party->splitscreenData.mainClient.localClientNum)", (const char *)&queryFormat, "party->splitscreenData.otherClient.localClientNum != party->splitscreenData.mainClient.localClientNum") )
    __debugbreak();
  *outPartyActiveClient = party->splitscreenData.otherClient;
  return 1i64;
}

/*
==============
Party_GetSecondaryActiveController
==============
*/
__int64 Party_GetSecondaryActiveController(const PartyData *party)
{
  if ( party->inParty )
    return (unsigned int)party->splitscreenData.otherClient.localControllerIndex;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7243, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  return (unsigned int)party->splitscreenData.otherClient.localControllerIndex;
}

/*
==============
Party_GetSplitscreenClientNumAtSameAddress
==============
*/
__int64 Party_GetSplitscreenClientNumAtSameAddress(const PartyData *party, const int clientNum)
{
  unsigned int v4; 

  if ( !Party_IsMemberRegistered(party, clientNum) )
    return 0xFFFFFFFFi64;
  v4 = 0;
  while ( clientNum == v4 || !Party_IsMemberRegistered(party, v4) || !Party_CompareMemberAddrs(party, clientNum, v4) )
  {
    if ( (int)++v4 >= 200 )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

/*
==============
Party_GetSplitscreenClientNumAtSameAddress
==============
*/
__int64 Party_GetSplitscreenClientNumAtSameAddress(const PartyData *party, const netadr_t *addr)
{
  __int128 v2; 
  NetConnection *p_connection; 
  unsigned int v4; 
  __int64 v5; 
  netadr_t addra; 

  v2 = *(_OWORD *)&addr->type;
  p_connection = &party->partyMembers[0].connection;
  v4 = 0;
  addra.addrHandleIndex = addr->addrHandleIndex;
  *(_OWORD *)&addra.type = v2;
  v5 = 0i64;
  while ( BYTE2(p_connection[5].m_channel) < 3u || !NetConnection::CompareAddr(p_connection, &addra) )
  {
    ++v4;
    ++v5;
    p_connection = (NetConnection *)((char *)p_connection + 504);
    if ( v5 >= 200 )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

/*
==============
Party_GetSplitscreenData
==============
*/
PartySplitscreenData *Party_GetSplitscreenData(PartyData *party)
{
  return &party->splitscreenData;
}

/*
==============
Party_GetSquadAutofill
==============
*/
_BOOL8 Party_GetSquadAutofill()
{
  return g_partyData.squadAutofillEnabled;
}

/*
==============
Party_GetStartingControllerIndex
==============
*/
int Party_GetStartingControllerIndex(const PartyData *party)
{
  const dvar_t *v2; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 776, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 777, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  v2 = DVARBOOL_online_is_devmapping;
  if ( !DVARBOOL_online_is_devmapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_is_devmapping") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  else
    return party->splitscreenData.mainClient.localControllerIndex;
}

/*
==============
Party_GetUIRoot
==============
*/
__int64 Party_GetUIRoot(const PartyData *party)
{
  return (unsigned __int8)party->uiRoot;
}

/*
==============
Party_GetXUIDFromBattleNetGameAccountId
==============
*/
char Party_GetXUIDFromBattleNetGameAccountId(const PartyData *party, const int gameAccountId, XUID *xuidOut)
{
  unsigned int v3; 
  int *p_bnetGameAccountId; 
  __int64 v5; 
  unsigned int v9; 
  int v10; 
  XUID xuid; 

  v3 = 0;
  p_bnetGameAccountId = &party->partyMembers[0].info.bnetGameAccountId;
  v5 = 0i64;
  while ( *((_BYTE *)p_bnetGameAccountId + 258) < 5u || *p_bnetGameAccountId != gameAccountId )
  {
    ++v3;
    ++v5;
    p_bnetGameAccountId += 126;
    if ( v5 >= 200 )
      return 0;
  }
  if ( v3 >= 0xC8 )
  {
    v10 = 200;
    v9 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  xuid.m_id = party->partyMembers[v3].playerUID.m_id;
  XUID::operator=(xuidOut, &xuid);
  return 1;
}

/*
==============
Party_GetXuid
==============
*/
XUID *Party_GetXuid(XUID *result, const PartyData *party, const int memberIndex)
{
  __int64 v3; 
  int v8; 

  v3 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v8 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v8) )
      __debugbreak();
  }
  result->m_id = (unsigned __int64)party->partyMembers[v3].playerUID;
  return result;
}

/*
==============
Party_GetXuidOfTheFirstMemberInPartyOnCurrentPlatform
==============
*/
XUID *Party_GetXuidOfTheFirstMemberInPartyOnCurrentPlatform(XUID *result, const PartyData *party)
{
  unsigned int v4; 
  unsigned __int8 *i; 
  char ClientPlatform; 

  XUID::NullXUID(result);
  v4 = 0;
  for ( i = &party->partyMembers[0].status; ; i += 504 )
  {
    ClientPlatform = GetClientPlatform();
    if ( i == (unsigned __int8 *)410 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 654, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
    }
    if ( ((*i & 0xFC) != 0 || *i == 1) && *(i - 254) == ClientPlatform && !Party_IsMemberLocalPlayer(party, v4) )
      break;
    if ( (int)++v4 >= 200 )
      return result;
  }
  XUID::operator=(result, (const XUID *)(i + 6));
  return result;
}

/*
==============
Party_HandleComError
==============
*/
void Party_HandleComError(errorParm_t errorCode, const char *errorMessage)
{
  PartyData *PartyData; 
  int ControllerFromClient; 
  const dvar_t *v6; 
  int v7; 
  PartyDisconnectReason v8; 
  PartyDisconnectReason v9; 
  PartyActiveClient mainActiveClient; 

  Com_Printf(16, "Party - HandleComError - Error Code %i, Error Message %s\n", (unsigned int)errorCode, errorMessage);
  PartyAtomic_HandleComError();
  PartyData = Lobby_GetPartyData();
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    Party_StopPartyInternal(PartyData, PARTY_END_STOPPED, 1);
    Party_StopPartyInternal(&g_partyData, PARTY_END_STOPPED, 1);
    return;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v6 = DVARBOOL_onlinegame;
  v7 = ControllerFromClient;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled || !Live_IsUserSignedInToLive(v7) )
  {
    Party_StopPartyInternal(PartyData, PARTY_END_STOPPED, 1);
    if ( !Live_IsInSystemlinkLobby() )
      goto LABEL_32;
  }
  PartyMigrate_StopMigration(PartyData);
  PartyMigrate_StopMigration(&g_partyData);
  if ( Lobby_IsInRunningLobby() )
    Party_Sleep_Internal(PartyData, 1);
  if ( g_partyData.party_systemActive && g_partyData.inParty )
    Party_Sleep_Internal(&g_partyData, 1);
  if ( PartyData->inParty && PartyData->areWeHost )
    PartyHost_ClearStartMatch(PartyData);
  if ( g_partyData.inParty && g_partyData.areWeHost )
    PartyHost_ClearStartMatch(&g_partyData);
  if ( errorCode == ERR_DROP )
  {
    if ( Lobby_AreWeHost() || !Lobby_IsInLobby() || Party_IsHostRegistered(PartyData) )
    {
      if ( PartyData->inParty )
      {
        LOBYTE(v8) = 27;
        Party_DlogDisconnect(PartyData, LOCAL_CLIENT_0, errorMessage, v8, JOINRESPONSE_NONE);
      }
      Party_StopPartyInternal(PartyData, PARTY_END_STOPPED, 1);
    }
    else
    {
      mainActiveClient = Party_GetMainActiveClient(PartyData, v7);
      LOBYTE(v9) = 27;
      PartyClient_LostConnectionToHost(PartyData, &mainActiveClient, v9, errorMessage);
    }
    if ( Live_IsInSystemlinkLobby() )
    {
      if ( g_partyData.inParty )
      {
        if ( g_partyData.areWeHost )
          PartyHost_ClearStartMatch(&g_partyData);
      }
LABEL_32:
      Party_StopPartyInternal(&g_partyData, PARTY_END_STOPPED, 1);
    }
  }
}

/*
==============
Party_HandleMatchmakingInvalidPlayerInfo
==============
*/
void Party_HandleMatchmakingInvalidPlayerInfo(PartyData *party, const int localControllerIndex)
{
  unsigned int v4; 
  int NumGameSlots; 
  PartyDisconnectReason v6; 
  __int64 v7; 
  unsigned __int8 *p_status; 
  LocalClientNum_t ClientFromController; 
  __int64 v10; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8366, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_AreWeHost(party) )
  {
    Com_Printf(25, "[%s] %s - kicking all party members and resetting matchmaking as this requires a fresh SetPlayerInfo and DC QoS\n", party->partyName, "Party_HandleMatchmakingInvalidPlayerInfo");
    v4 = 0;
    NumGameSlots = Party_GetNumGameSlots(party);
    v7 = NumGameSlots;
    if ( NumGameSlots > 0 )
    {
      p_status = &party->partyMembers[0].status;
      do
      {
        if ( v4 >= 0xC8 )
        {
          LODWORD(v11) = 200;
          LODWORD(v10) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( (unsigned __int8)(*p_status - 4) <= 1u )
        {
          LOBYTE(v6) = 48;
          PartyHost_KickPlayer(party, v4, v6);
        }
        ++v4;
        p_status += 504;
        --v7;
      }
      while ( v7 );
    }
    RMsg_SendMessages();
    ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
    LUI_OpenMenu(ClientFromController, "mm_invalid_player_info_popup", 1, 0, 1);
  }
  OnlineMatchmakerOmniscient::ResetCachedLocalPlayerInfos(&OnlineMatchmakerOmniscient::ms_instance);
  Online_DcQos_Request(2u, 1);
}

/*
==============
Party_HandlePacket
==============
*/
int Party_HandlePacket(PartyData *party, const char *c, const LocalClientNum_t localClientNum, netadr_t *from, msg_t *msg)
{
  int v5; 
  PartyActiveClient MainActiveClient; 
  int ControllerFromClient; 
  const char *string; 
  __int64 v13; 
  __int64 v14; 
  const char *v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  int v20; 
  const dvar_t *v21; 
  __int128 v22; 
  __int128 v24; 
  msg_t *v25; 
  __int128 v26; 
  __int128 v27; 
  PartyActiveClient outPartyActiveClient; 
  netadr_t v29[3]; 
  PartyActiveClient v30; 

  v5 = 0;
  if ( *c == 50 )
  {
    if ( Com_IsGameLocalServerRunningOrLoading() || party->party_systemActive && party->inParty )
      goto LABEL_5;
    return 0;
  }
  if ( *c - 48 != party->partyId )
    return 0;
LABEL_5:
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7270, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_GetSecondaryActiveClient(party, &outPartyActiveClient) || (MainActiveClient = outPartyActiveClient, outPartyActiveClient.localClientNum != localClientNum) )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    MainActiveClient = Party_GetMainActiveClient(party, ControllerFromClient);
  }
  string = messageHandlers[0].string;
  v30 = MainActiveClient;
  if ( *messageHandlers[0].string )
  {
    v13 = 0i64;
    while ( 2 )
    {
      v14 = 0x7FFFFFFFi64;
      if ( c == (const char *)-1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v15 = (const char *)(c + 1 - string);
      while ( 1 )
      {
        v16 = (unsigned __int8)string[(_QWORD)v15];
        v17 = v14;
        v18 = *(unsigned __int8 *)string++;
        --v14;
        if ( !v17 )
        {
LABEL_28:
          v21 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v21->current.enabled )
            Com_Printf(25, "oob: %s\n", c);
          if ( !messageHandlers[v5].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4803, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
            __debugbreak();
          v22 = *(_OWORD *)&from->type;
          v29[0].addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&v29[0].type = v22;
          ((void (__fastcall *)(PartyData *, PartyActiveClient *, netadr_t *, msg_t *))messageHandlers[v5].func)(party, &v30, v29, msg);
          return 1;
        }
        if ( v16 != v18 )
        {
          v19 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v19 = v16;
          v16 = v19;
          v20 = v18 + 32;
          if ( (unsigned int)(v18 - 65) > 0x19 )
            v20 = v18;
          if ( v16 != v20 )
            break;
        }
        if ( !v16 )
          goto LABEL_28;
      }
      ++v13;
      ++v5;
      string = messageHandlers[v13].string;
      if ( *string )
        continue;
      break;
    }
  }
  v24 = *(_OWORD *)&from->type;
  v25 = msg;
  v29[0].addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v29[0].type = v24;
  if ( PartyHost_HandlePacket(party, c, &v30, v29, msg) )
    return 1;
  v26 = *(_OWORD *)&from->type;
  v29[0].addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v29[0].type = v26;
  if ( PartyMigrate_HandlePacket(party, c, &v30, v29, v25) )
    return 1;
  v27 = *(_OWORD *)&from->type;
  v29[0].addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v29[0].type = v27;
  return PartyClient_HandlePacket(party, c, &v30, v29, v25);
}

/*
==============
Party_HasPrivateMatchId
==============
*/
bool Party_HasPrivateMatchId(const PartyData *party)
{
  return party->privateMatchId.m_id != 0;
}

/*
==============
Party_HasVoteBeenCast
==============
*/
bool Party_HasVoteBeenCast()
{
  bool result; 

  result = Lobby_IsInRunningLobby();
  if ( result )
    return Lobby_GetPartyData()->vote != PARTY_VOTE_NO_VOTE;
  return result;
}

/*
==============
Party_HasVotePassed
==============
*/
bool Party_HasVotePassed()
{
  return Lobby_IsInLobby() && Lobby_GetPartyData()->voting.votePassed;
}

/*
==============
Party_HideTeams
==============
*/
void Party_HideTeams(const LocalClientNum_t localClientNum)
{
  if ( Party_AreTeamsVisible() )
    Dvar_SetBool_Internal(DVARBOOL_party_teamsVisible, 0);
}

/*
==============
Party_HostNum
==============
*/
__int64 Party_HostNum(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 555, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->currentHost.hostNum == -2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 556, ASSERT_TYPE_ASSERT, "(!Party_IsHostDedicated( party ))", (const char *)&queryFormat, "!Party_IsHostDedicated( party )") )
    __debugbreak();
  if ( party->inParty )
    return (unsigned int)party->currentHost.hostNum;
  else
    return 0i64;
}

/*
==============
Party_InParty
==============
*/
_BOOL8 Party_InParty(const PartyData *party)
{
  return party->party_systemActive && party->inParty;
}

/*
==============
Party_InactiveFrame
==============
*/
void Party_InactiveFrame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  const PartyActiveClient *v3; 
  const dvar_t *v4; 
  int integer; 
  int maxGameSlots; 
  int v7; 
  unsigned int v8; 
  LocalClientNum_t localClientNum; 
  NetConnection *p_connection; 
  const char *v11; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const char *v13; 
  const dvar_t *v14; 
  int v15; 
  int v16; 
  unsigned __int8 *p_status; 
  signed int i; 
  char *fmt; 
  __int64 v20; 
  __int64 v21; 

  v3 = mainActiveClient;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5905, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5906, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5907, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( party->partyId == PRIVATE_PARTY_ID && party->currentHost.hostNum != -2 && Live_GetGameParty() != party )
  {
    v4 = DVARINT_party_inactiveHeartbeatPeriod;
    if ( !DVARINT_party_inactiveHeartbeatPeriod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_inactiveHeartbeatPeriod") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    if ( Sys_Milliseconds() - party->inactiveKeepaliveTime >= integer )
    {
      maxGameSlots = party->maxGameSlots;
      v7 = 0;
      v8 = 0;
      localClientNum = v3->localClientNum;
      if ( maxGameSlots > 0 )
      {
        p_connection = &party->partyMembers[0].connection;
        do
        {
          if ( v8 >= 0xC8 )
          {
            LODWORD(v21) = 200;
            LODWORD(v20) = v8;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v20, v21) )
              __debugbreak();
          }
          if ( NetConnection::IsOpened(p_connection) && !NetConnection::IsLocal(p_connection) )
          {
            if ( Party_AreWeHost(party) )
            {
              v11 = j_va("%ikeepalive", (unsigned int)party->partyId);
              NetConnection::SendUnreliable(p_connection, v11);
            }
            else
            {
              LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
              v13 = j_va("%ikeepalive", (unsigned int)party->partyId);
              NetConnection::SendP2P(p_connection, LocalNetIDFromLocalClientNum, v13);
            }
            ++v7;
          }
          ++v8;
          p_connection = (NetConnection *)((char *)p_connection + 504);
        }
        while ( (int)v8 < maxGameSlots );
        v3 = mainActiveClient;
      }
      party->inactiveKeepaliveTime = Sys_Milliseconds();
      if ( v7 > 0 )
      {
        LODWORD(fmt) = Sys_Milliseconds();
        Com_Printf(25, "[%s] Sent party keepalives to %i connections at time %i\n", party->partyName, (unsigned int)v7, fmt);
      }
    }
  }
  Party_UpdateMemberInfoFromGame(party, v3);
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2574, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->partyId )
  {
    v14 = DVARINT_pt_memberTimeout;
    if ( !DVARINT_pt_memberTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_memberTimeout") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.integer;
    v16 = Sys_Milliseconds() - v15;
    p_status = &party->partyMembers[0].status;
    for ( i = 0; i < 200; ++i )
    {
      if ( *p_status != 6 && Party_IsMemberAway((const PartyMember *)(p_status - 410)) && !Live_XUIDIsLocalPlayer(*(const XUID *)(p_status + 6)) && v16 >= *(_DWORD *)(p_status - 138) )
      {
        LODWORD(v20) = *p_status;
        LODWORD(fmt) = i;
        Com_Printf(25, "[%s] Party - TimeoutAwayPlayers - Party member '%s' ( slot %i, status %i ) is timing out.\n", party->partyName, (const char *)p_status - 358, fmt, v20);
        Party_ClearMemberFromParty(party, v3, i, 1);
      }
      p_status += 504;
    }
  }
  if ( g_svSubparties.dirty && party->partyId == GAME_LOBBY_ID && Lobby_AreWeHost() )
  {
    if ( ((unsigned __int8)&g_svSubparties.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &g_svSubparties.lock) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&g_svSubparties.lock, 1, 0) )
    {
      memcpy_0(&g_svSubparties.info[1], &g_svSubparties, sizeof(g_svSubparties.info[1]));
      g_svSubparties.lock = 0;
      g_svSubparties.dirty = 0;
    }
  }
}

/*
==============
Party_IndexMLGFollower
==============
*/
__int64 Party_IndexMLGFollower(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7379, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7380, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  if ( Party_IsMemberIndexDataAvailable(party, v2) )
    return (unsigned int)party->partyMembers[v2].info.mlgFollowerIndex;
  else
    return 63i64;
}

/*
==============
Party_IndexPlayerMLGFollower
==============
*/
__int64 Party_IndexPlayerMLGFollower(XUID playerXuid)
{
  PartyData *CurrentParty; 
  __int64 v2; 
  XUID v4; 
  int outMemberIndex; 
  XUID player; 

  v4.m_id = playerXuid.m_id;
  if ( XUID::IsNull(&v4) )
    return 63i64;
  CurrentParty = Live_GetCurrentParty();
  if ( !CurrentParty->inParty )
    return 63i64;
  player.m_id = v4.m_id;
  if ( XUID::IsNull(&player) )
    return 63i64;
  if ( !Party_FindMemberByXUID_Internal(CurrentParty, player, &outMemberIndex) )
    return 63i64;
  v2 = outMemberIndex;
  if ( (CurrentParty->partyMembers[outMemberIndex].status & 0xFD) == 0 || outMemberIndex < 0 || !Party_IsMemberIndexDataAvailable(CurrentParty, outMemberIndex) )
    return 63i64;
  if ( (unsigned int)v2 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7380, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v2, 200) )
    __debugbreak();
  if ( Party_IsMemberIndexDataAvailable(CurrentParty, v2) )
    return (unsigned int)CurrentParty->partyMembers[v2].info.mlgFollowerIndex;
  else
    return 63i64;
}

/*
==============
Party_Init
==============
*/
void Party_Init(void)
{
  int v0; 
  unsigned int *v1; 
  unsigned __int64 v2; 
  __int64 v12; 

  memset_0(&g_partyData.migrateData, 0, 0x4CC18ui64);
  *((_DWORD *)&g_partyData.partyId + 1) = 0;
  memset_0(&g_partyData.connectivityBits, 0, 0x10180ui64);
  g_partyData.partyId = PRIVATE_PARTY_ID;
  g_partyData.session = &g_partySession;
  g_partyData.partyName = "PrivateParty";
  ntl::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>::fixed_hash_map<unsigned __int64,int,202,389,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64>>(&g_partyData.memberMap);
  PartyAtomic_ResetPartyJoinInfo(&g_partyJoinInfo, NONE);
  PartyClientTaskService::Init(&g_partyData.clientTaskService);
  v0 = 0;
  v1 = &sortedIndices[8];
  g_noPrivatePartyId = 0i64;
  LODWORD(v2) = 8;
  do
  {
    _XMM0 = (unsigned int)v0;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v1 - 2) = _XMM1;
    _XMM0 = (unsigned int)(v2 - 4);
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *((_OWORD *)v1 - 1) = _XMM1;
    _XMM0 = (unsigned int)v2;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    *(_OWORD *)v1 = _XMM1;
    v12 = (unsigned int)(v2 + 4);
    v0 += 16;
    _XMM0 = (unsigned int)v12;
    __asm
    {
      vpshufd xmm0, xmm0, 0
      vpaddd  xmm1, xmm0, xmm2
    }
    v2 = (unsigned int)(v2 + 16);
    *((_OWORD *)v1 + 1) = _XMM1;
    v1 += 16;
  }
  while ( (int)v2 < 200 );
  if ( v0 < 200 )
  {
    v12 = v0;
    v2 = (unsigned __int64)&sortedIndices[v0];
    do
    {
      *(_DWORD *)v2 = v0;
      v2 += 4i64;
      ++v0;
    }
    while ( v0 < 200 );
  }
  Party_RegisterDvars(v12, v2, v1);
  Cmd_AddCommandInternal("party_testTeamCreation", Party_TestTeamCreation_f, &Party_TestTeamCreation_f_VAR);
  Cmd_AddCommandInternal("party_getLobbyState", Party_GetLobbyState_f, &Party_GetLobbyState_f_VAR);
  Cmd_AddCommandInternal("lobby_dumpInfo", Lobby_DumpInfo_f, &Lobby_DumpInfo_f_VAR);
  Cmd_AddCommandInternal("party_dumpInfo", Party_DumpInfo_f, &Party_DumpInfo_f_VAR);
  Cmd_AddCommandInternal("party_addTestClients", Party_AddTestClients_f, &Party_AddTestClients_f_VAR);
  Cmd_AddCommandInternal("party_removeTestClient", Party_RemoveTestClient_f, &Party_RemoveTestClient_f_VAR);
  Cmd_AddCommandInternal("party_removeTestClients", Party_RemoveTestClients_f, &Party_RemoveTestClients_f_VAR);
  Cmd_AddCommandInternal("party_privateDSGame", Party_SetPrivateDsGame_f, &Party_SetPrivateDsGame_f_VAR);
  PartyMigrate_Init();
  PartyMatchmaking_Init();
  InviteJoinHSM::RegisterCallbackFromExternalSystem(&g_invitationHSM, Party_OnInviteJoinEvent);
}

/*
==============
Party_InitMapSelectionEntries
==============
*/
void Party_InitMapSelectionEntries(PartyData *party)
{
  Com_DPrintf(16, "Playlists: Initializing map selection entries list.\n");
  party->currentEntry = 0;
  *(_DWORD *)&party->lastEntries[6] = 0xFFFF;
  *(_DWORD *)party->lastEntries = -1;
  *(_WORD *)&party->lastEntries[4] = -1;
}

/*
==============
Party_IsActiveLocalPlayer
==============
*/
int Party_IsActiveLocalPlayer(const PartyData *party, const XUID playerXuid)
{
  int PortForLocalXUID; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 563, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 564, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  PortForLocalXUID = Live_GetPortForLocalXUID(playerXuid);
  if ( PortForLocalXUID >= 0 )
    return Party_IsControllerAnActiveClient(party, PortForLocalXUID);
  else
    return 0;
}

/*
==============
Party_IsAnyMemberMissingMapPack
==============
*/
bool Party_IsAnyMemberMissingMapPack()
{
  const dvar_t *v0; 
  PartyData *PartyData; 
  int mapPackIndex; 
  int playerSlot; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    PartyData = Lobby_GetPartyData();
  else
    PartyData = &g_partyData;
  return Party_PartyMembersMissingMapPack(PartyData, &playerSlot, &mapPackIndex);
}

/*
==============
Party_IsAnyMemberSplitscreened
==============
*/
__int64 Party_IsAnyMemberSplitscreened(const PartyData *party)
{
  PartyMember *partyMembers; 
  int v3; 
  __int64 v5; 
  __int64 v6; 

  partyMembers = party->partyMembers;
  v3 = 0;
  while ( 1 )
  {
    if ( !partyMembers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
      __debugbreak();
    if ( partyMembers->status >= 5u )
    {
      if ( (unsigned int)v3 >= 0xC8 )
      {
        LODWORD(v6) = 200;
        LODWORD(v5) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      if ( NetConnection::IsSplitscreen(&party->partyMembers[v3].connection) )
        break;
    }
    ++v3;
    ++partyMembers;
    if ( v3 >= 200 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
Party_IsControllerAnActiveClient
==============
*/
_BOOL8 Party_IsControllerAnActiveClient(const PartyData *party, const int controllerIndex)
{
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7284, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_GetSecondaryActiveClient(party, &outPartyActiveClient) && outPartyActiveClient.localControllerIndex == controllerIndex || Party_GetMainActiveClient(party, controllerIndex).localControllerIndex == controllerIndex;
}

/*
==============
Party_IsControllerMainActiveClient
==============
*/
_BOOL8 Party_IsControllerMainActiveClient(const PartyData *party, const int controllerIndex)
{
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7256, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return !Party_GetSecondaryActiveClient(party, &outPartyActiveClient) || outPartyActiveClient.localControllerIndex != controllerIndex;
}

/*
==============
Party_IsCrossplayParty
==============
*/
_BOOL8 Party_IsCrossplayParty(const PartyData *party)
{
  return party->iscrossplayParty;
}

/*
==============
Party_IsGameBattleMatch
==============
*/
bool Party_IsGameBattleMatch(const PartyData *party)
{
  return GameBattles_IsValidMatchId(party->gamebattleMatchId);
}

/*
==============
Party_IsGameClientPrivatePartyHost
==============
*/
_BOOL8 Party_IsGameClientPrivatePartyHost(const int clientNum)
{
  __int64 v1; 
  PartyData *GameParty; 
  int v3; 
  int v5; 
  int v6; 
  int outMemberIndex; 
  XUID v8; 
  XUID player; 

  v1 = clientNum;
  GameParty = Live_GetGameParty();
  if ( !Session_IsValid(GameParty->session) || !Party_IsMemberRegistered(GameParty, v1) )
    return 0i64;
  if ( (unsigned int)v1 >= 0xC8 )
  {
    v6 = 200;
    v5 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  v8.m_id = GameParty->partyMembers[v1].playerUID.m_id;
  if ( g_partyData.inParty && !XUID::IsNull(&v8) && (player.m_id = v8.m_id, !XUID::IsNull(&player)) && Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) && (v3 = outMemberIndex, (g_partyData.partyMembers[outMemberIndex].status & 0xFD) != 0) && outMemberIndex >= 0 && Party_IsMemberIndexDataAvailable(&g_partyData, outMemberIndex) )
    return Party_IsHost(&g_partyData, v3);
  else
    return 0i64;
}

/*
==============
Party_IsGameFull
==============
*/
bool Party_IsGameFull(const PartyData *party)
{
  unsigned int v2; 
  int i; 
  char _Buffer[128]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3508, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v2 = 0;
  if ( party->inParty )
  {
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsMemberPresent(party, i) )
        ++v2;
    }
    if ( s_lastLoggedPartyCount != v2 )
    {
      j_sprintf_s(_Buffer, 0x80ui64, "%d", v2);
      CrashReport_AddKVP("PartySize", _Buffer);
      s_lastLoggedPartyCount = v2;
    }
  }
  return v2 == party->maxGameSlots;
}

/*
==============
Party_IsGameHostInPrivateParty
==============
*/
int Party_IsGameHostInPrivateParty()
{
  PartyData *GameParty; 
  int v1; 
  int v3; 
  __int64 v4; 
  XUID result; 

  GameParty = Live_GetGameParty();
  if ( !Session_IsValid(GameParty->session) )
    return 0;
  if ( GameParty->currentHost.hostNum == -2 )
  {
LABEL_6:
    XUID::NullXUID(&result);
    return Party_IsPlayerInPrivateParty(result);
  }
  v1 = Party_HostNum(GameParty);
  if ( v1 < 0 || !Party_IsMemberRegistered(GameParty, v1) )
    return 0;
  if ( GameParty->currentHost.hostNum == -2 )
    goto LABEL_6;
  v3 = Party_HostNum(GameParty);
  v4 = v3;
  if ( (unsigned int)v3 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v3, 200) )
    __debugbreak();
  return Party_IsPlayerInPrivateParty(GameParty->partyMembers[v4].playerUID);
}

/*
==============
Party_IsGameLobby
==============
*/
bool Party_IsGameLobby(const PartyData *party)
{
  return party->partyId == GAME_LOBBY_ID;
}

/*
==============
Party_IsHost
==============
*/
bool Party_IsHost(const PartyData *party, const int memberIndex)
{
  int hostNum; 

  if ( (unsigned int)memberIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 526, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, 200) )
    __debugbreak();
  hostNum = party->currentHost.hostNum;
  return hostNum != -2 && hostNum == memberIndex;
}

/*
==============
Party_IsHostAway
==============
*/
int Party_IsHostAway(const PartyData *party)
{
  unsigned int v3; 

  if ( party->currentHost.hostNum == -2 )
    return 0;
  v3 = Party_HostNum(party);
  return Party_IsMemberIndexAway(party, v3);
}

/*
==============
Party_IsHostCommitted
==============
*/
int Party_IsHostCommitted(const PartyData *party)
{
  unsigned int v3; 

  if ( party->currentHost.hostNum == -2 )
    return 0;
  v3 = Party_HostNum(party);
  return Party_IsMemberIndexCommitted(party, v3);
}

/*
==============
Party_IsHostDataAvailable
==============
*/
int Party_IsHostDataAvailable(const PartyData *party)
{
  int v3; 

  if ( party->currentHost.hostNum == -2 )
    return 1;
  v3 = Party_HostNum(party);
  return Party_IsMemberDataAvailable(&party->partyMembers[v3]);
}

/*
==============
Party_IsHostDedicated
==============
*/
bool Party_IsHostDedicated(const PartyData *party)
{
  return party->currentHost.hostNum == -2;
}

/*
==============
Party_IsHostPresent
==============
*/
int Party_IsHostPresent(const PartyData *party)
{
  int v3; 

  if ( party->currentHost.hostNum == -2 )
    return 1;
  v3 = Party_HostNum(party);
  return Party_IsMemberPresent(&party->partyMembers[v3]);
}

/*
==============
Party_IsHostRegistered
==============
*/
bool Party_IsHostRegistered(const PartyData *party)
{
  int v3; 

  if ( party->currentHost.hostNum == -2 )
    return 1;
  v3 = Party_HostNum(party);
  return v3 >= 0 && Party_IsMemberRegistered(party, v3);
}

/*
==============
Party_IsInGameLobbyMigrationAllowed
==============
*/
_BOOL8 Party_IsInGameLobbyMigrationAllowed(const PartyData *party)
{
  return party->partyId == PRIVATE_PARTY_ID;
}

/*
==============
Party_IsInviteOnly
==============
*/
bool Party_IsInviteOnly(const PartyData *party)
{
  return (unsigned int)(party->privacySetting - 2) <= 1;
}

/*
==============
Party_IsJoiningAGameInProgress
==============
*/
_BOOL8 Party_IsJoiningAGameInProgress(const PartyData *party)
{
  return party->joiningAGameInProgress;
}

/*
==============
Party_IsLoadingServer
==============
*/
int Party_IsLoadingServer(const PartyData *party)
{
  int result; 

  result = Party_AreWeHost(party);
  if ( result )
    return party->specificData.hostData.preloadingMapStage > PRELOAD_MAP_IDLE;
  return result;
}

/*
==============
Party_IsMLGFollower
==============
*/
int Party_IsMLGFollower(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int result; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7368, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7369, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  result = Party_IsMemberIndexDataAvailable(party, v2);
  if ( result )
    return party->partyMembers[v2].info.mlgFollower;
  return result;
}

/*
==============
Party_IsMLGSpectator
==============
*/
int Party_IsMLGSpectator(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int result; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7357, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7358, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  result = Party_IsMemberIndexDataAvailable(party, v2);
  if ( result )
    return party->partyMembers[v2].info.mlgSpectator;
  return result;
}

/*
==============
Party_IsMatchmakingLobby
==============
*/
bool Party_IsMatchmakingLobby(const PartyData *party)
{
  const dvar_t *v2; 

  if ( party->partyId )
    return 0;
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && party->m_lobbyId;
}

/*
==============
Party_IsMemberAway
==============
*/
_BOOL8 Party_IsMemberAway(const PartyMember *member)
{
  unsigned __int8 status; 

  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 323, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  status = member->status;
  return status == 1 || status == 6;
}

/*
==============
Party_IsMemberCommitted
==============
*/
_BOOL8 Party_IsMemberCommitted(const PartyMember *member)
{
  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 348, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  return member->status == 4;
}

/*
==============
Party_IsMemberDataAvailable
==============
*/
int Party_IsMemberDataAvailable(const PartyMember *member)
{
  int result; 

  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  if ( member->status >= 5u )
    return 1;
  if ( Party_IsMemberAway(member) )
    return 1;
  result = Party_IsMemberCommitted(member);
  if ( result )
    return 1;
  return result;
}

/*
==============
Party_IsMemberF2PUser
==============
*/
bool Party_IsMemberF2PUser(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 706, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 707, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return !Party_IsMemberIndexDataAvailable(party, v2) || !party->partyMembers[v2].info.isPaidUser;
}

/*
==============
Party_IsMemberGuestAccount
==============
*/
int Party_IsMemberGuestAccount(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int result; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7395, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7396, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  result = Party_IsMemberIndexDataAvailable(party, v2);
  if ( result )
    return party->partyMembers[v2].isGuestAccount;
  return result;
}

/*
==============
Party_IsMemberHeadless
==============
*/
int Party_IsMemberHeadless(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  int result; 
  __int64 v5; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 615, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 616, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  result = Party_IsMemberIndexDataAvailable(party, v2);
  if ( result )
    return party->partyMembers[v2].info.isHeadless;
  return result;
}

/*
==============
Party_IsMemberHost
==============
*/
bool Party_IsMemberHost(const PartyData *party, const int memberIndex)
{
  return Party_MemberHasHostAddress(party, memberIndex) != 0;
}

/*
==============
Party_IsMemberIndexAway
==============
*/
int Party_IsMemberIndexAway(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 341, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return Party_IsMemberAway(&party->partyMembers[v2]);
}

/*
==============
Party_IsMemberIndexCommitted
==============
*/
_BOOL8 Party_IsMemberIndexCommitted(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  PartyMember *v4; 

  v2 = memberIndex;
  if ( memberIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 355, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, 200) )
    __debugbreak();
  v4 = &party->partyMembers[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 348, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  return v4->status == 4;
}

/*
==============
Party_IsMemberIndexDataAvailable
==============
*/
int Party_IsMemberIndexDataAvailable(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return Party_IsMemberDataAvailable(&party->partyMembers[v2]);
}

/*
==============
Party_IsMemberInfoVisible
==============
*/
int Party_IsMemberInfoVisible(const PartyData *party, XUID myXuid, const unsigned int memberIndex)
{
  __int64 v3; 
  int result; 
  __int64 v6; 
  __int64 v7; 
  XUID playerXuid; 
  XUID xuid; 

  xuid.m_id = myXuid.m_id;
  v3 = (int)memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6497, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6498, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, 200) )
      __debugbreak();
  }
  result = Party_IsMemberUIVisible(party, v3);
  if ( result )
  {
    if ( (unsigned int)v3 >= 0xC8 )
    {
      LODWORD(v7) = 200;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    playerXuid.m_id = party->partyMembers[v3].playerUID.m_id;
    if ( XUID::operator==(&playerXuid, &xuid) || (party->lobbyFlags & 2) == 0 )
      return 1;
    else
      return Party_IsPlayerInPrivateParty(playerXuid);
  }
  return result;
}

/*
==============
Party_IsMemberLocalPlayer
==============
*/
_BOOL8 Party_IsMemberLocalPlayer(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  unsigned __int64 PlatformId; 
  char MemberPlatform; 
  __int64 v7; 
  __int64 v8; 
  XUID player; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 576, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 577, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, 200) )
      __debugbreak();
  }
  if ( !Party_IsMemberIndexDataAvailable(party, v2) )
    return 0i64;
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v8) = 200;
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( Live_XUIDIsLocalPlayer(party->partyMembers[(int)v2].playerUID) )
    return 1i64;
  player.m_id = party->partyMembers[v2].playerUpdatedUID.m_id;
  if ( XUID::IsValid(&player) && Live_XUIDIsLocalPlayer(player) )
    return 1i64;
  PlatformId = Party_GetPlatformId(party, v2);
  MemberPlatform = Party_GetMemberPlatform(party, v2);
  return MemberPlatform == (unsigned __int8)GetClientPlatform() && Live_PlatformIdIsLocalPlayer(PlatformId);
}

/*
==============
Party_IsMemberOnPlatform
==============
*/
bool Party_IsMemberOnPlatform(const PartyData *party, const unsigned int memberIndex, const ClientPlatform platform)
{
  __int64 v3; 
  unsigned __int8 v4; 
  int IsMemberIndexDataAvailable; 
  __int64 v8; 

  v3 = memberIndex;
  v4 = platform;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 642, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 643, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, 200) )
      __debugbreak();
  }
  IsMemberIndexDataAvailable = Party_IsMemberIndexDataAvailable(party, v3);
  if ( IsMemberIndexDataAvailable )
    LOBYTE(IsMemberIndexDataAvailable) = party->partyMembers[v3].info.platform[0] == v4;
  return IsMemberIndexDataAvailable;
}

/*
==============
Party_IsMemberOnPlatform
==============
*/
bool Party_IsMemberOnPlatform(const PartyMember *member, const ClientPlatform platform)
{
  unsigned __int8 v2; 
  int IsMemberDataAvailable; 

  v2 = platform;
  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 654, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  IsMemberDataAvailable = Party_IsMemberDataAvailable(member);
  if ( IsMemberDataAvailable )
    LOBYTE(IsMemberDataAvailable) = member->info.platform[0] == v2;
  return IsMemberDataAvailable;
}

/*
==============
Party_IsMemberPresent
==============
*/
_BOOL8 Party_IsMemberPresent(const PartyMember *member)
{
  if ( !member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  return member->status >= 5u;
}

/*
==============
Party_IsMemberPresent
==============
*/
bool Party_IsMemberPresent(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  PartyMember *v4; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, 200) )
    __debugbreak();
  v4 = &party->partyMembers[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  return v4->status >= 5u;
}

/*
==============
Party_IsMemberRegistered
==============
*/
bool Party_IsMemberRegistered(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return (unsigned __int8)(party->partyMembers[v2].status - 4) <= 1u;
}

/*
==============
Party_IsMemberSplitscreen
==============
*/
char Party_IsMemberSplitscreen(const PartyData *party, const unsigned int memberIndex)
{
  unsigned int v4; 
  int v7; 

  if ( memberIndex >= 0xC8 )
  {
    v7 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 415, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v7) )
      __debugbreak();
  }
  if ( !Party_IsMemberRegistered(party, memberIndex) )
    return 0;
  v4 = 0;
  while ( v4 == memberIndex || !Party_IsMemberRegistered(party, v4) || !Party_CompareMemberAddrs(party, memberIndex, v4) )
  {
    if ( ++v4 >= 0xC8 )
      return 0;
  }
  return 1;
}

/*
==============
Party_IsMemberSplitscreenPrimary
==============
*/
bool Party_IsMemberSplitscreenPrimary(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 465, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return !Party_IsMemberRegistered(party, v2) || NetConnection::GetNetId(&party->partyMembers[v2].connection) == NS_CLIENT1;
}

/*
==============
Party_IsMemberUIVisible
==============
*/
int Party_IsMemberUIVisible(const PartyData *party, const unsigned int memberIndex)
{
  int result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7015, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7016, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( Party_IsMemberPresent(party, memberIndex) )
    return 1;
  result = Party_IsWaitingForPartyMember(party, memberIndex);
  if ( result )
    return 1;
  return result;
}

/*
==============
Party_IsMuted
==============
*/
_BOOL8 Party_IsMuted(const PartyData *party, const int memberIndex)
{
  __int64 v2; 
  int v6; 

  v2 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3859, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v6) )
      __debugbreak();
  }
  return party->partyMembers[v2].muted;
}

/*
==============
Party_IsPlatformIdInAnyParty
==============
*/
char Party_IsPlatformIdInAnyParty(const unsigned __int64 platformId, PartyType *typeOfPartyTheUserIsIn)
{
  const PartyData *GameParty; 

  if ( !platformId )
    return 0;
  if ( g_partyData.party_systemActive && g_partyData.inParty )
  {
    if ( !g_partyData.session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6684, ASSERT_TYPE_ASSERT, "(g_partyData.session)", (const char *)&queryFormat, "g_partyData.session") )
      __debugbreak();
    if ( Party_FindMemberByPlatformId(&g_partyData, platformId) >= 0 )
    {
      *typeOfPartyTheUserIsIn = PRIVATE_PARTY_ID;
      return 1;
    }
  }
  GameParty = Live_GetGameParty();
  if ( Party_FindMemberByPlatformId(GameParty, platformId) < 0 )
    return 0;
  *typeOfPartyTheUserIsIn = GAME_LOBBY_ID;
  return 1;
}

/*
==============
Party_IsPlayerInAnyParty
==============
*/
char Party_IsPlayerInAnyParty(XUID userId, PartyType *typeOfPartyTheUserIsIn)
{
  const PartyData *GameParty; 
  XUID player; 
  int outMemberIndex; 

  player.m_id = userId.m_id;
  if ( !XUID::IsValid(&player) )
    return 0;
  if ( g_partyData.party_systemActive && g_partyData.inParty )
  {
    if ( !g_partyData.session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6655, ASSERT_TYPE_ASSERT, "(g_partyData.session)", (const char *)&queryFormat, "g_partyData.session") )
      __debugbreak();
    if ( Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) && g_partyData.partyMembers[outMemberIndex].status >= 5u && outMemberIndex >= 0 )
    {
      *typeOfPartyTheUserIsIn = PRIVATE_PARTY_ID;
      return 1;
    }
  }
  GameParty = Live_GetGameParty();
  if ( !Party_FindMemberByXUID_Internal(GameParty, player, &outMemberIndex) || GameParty->partyMembers[outMemberIndex].status < 5u || outMemberIndex < 0 )
    return 0;
  *typeOfPartyTheUserIsIn = GAME_LOBBY_ID;
  return 1;
}

/*
==============
Party_IsPlayerInPrivateParty
==============
*/
_BOOL8 Party_IsPlayerInPrivateParty(XUID playerXuid)
{
  __int64 v1; 
  int outMemberIndex; 
  XUID player; 

  if ( !g_partyData.inParty )
    return 0i64;
  player.m_id = playerXuid.m_id;
  if ( XUID::IsNull(&player) )
    return 0i64;
  if ( !Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) )
    return 0i64;
  v1 = (unsigned int)outMemberIndex;
  if ( (g_partyData.partyMembers[outMemberIndex].status & 0xFD) == 0 || outMemberIndex < 0 )
    return 0i64;
  if ( (unsigned int)outMemberIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", outMemberIndex, 200) )
    __debugbreak();
  return Party_IsMemberDataAvailable(&g_partyData.partyMembers[v1]) != 0;
}

/*
==============
Party_IsPlayerMLGFollower
==============
*/
__int64 Party_IsPlayerMLGFollower(XUID playerXuid)
{
  PartyData *CurrentParty; 
  __int64 v2; 
  XUID v4; 
  int outMemberIndex; 
  XUID player; 

  v4.m_id = playerXuid.m_id;
  if ( XUID::IsNull(&v4) )
    return 0i64;
  CurrentParty = Live_GetCurrentParty();
  if ( !CurrentParty->inParty )
    return 0i64;
  player.m_id = v4.m_id;
  if ( XUID::IsNull(&player) )
    return 0i64;
  if ( !Party_FindMemberByXUID_Internal(CurrentParty, player, &outMemberIndex) )
    return 0i64;
  v2 = outMemberIndex;
  if ( (CurrentParty->partyMembers[outMemberIndex].status & 0xFD) == 0 || outMemberIndex < 0 || !Party_IsMemberIndexDataAvailable(CurrentParty, outMemberIndex) )
    return 0i64;
  if ( (unsigned int)v2 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7369, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v2, 200) )
    __debugbreak();
  if ( Party_IsMemberIndexDataAvailable(CurrentParty, v2) )
    return (unsigned int)CurrentParty->partyMembers[v2].info.mlgFollower;
  else
    return 0i64;
}

/*
==============
Party_IsPlayerMLGSpectator
==============
*/
__int64 Party_IsPlayerMLGSpectator(XUID playerXuid)
{
  PartyData *CurrentParty; 
  __int64 v2; 
  XUID v4; 
  int outMemberIndex; 
  XUID player; 

  v4.m_id = playerXuid.m_id;
  if ( XUID::IsNull(&v4) )
    return 0i64;
  CurrentParty = Live_GetCurrentParty();
  if ( !CurrentParty->inParty )
    return 0i64;
  player.m_id = v4.m_id;
  if ( XUID::IsNull(&player) )
    return 0i64;
  if ( !Party_FindMemberByXUID_Internal(CurrentParty, player, &outMemberIndex) )
    return 0i64;
  v2 = outMemberIndex;
  if ( (CurrentParty->partyMembers[outMemberIndex].status & 0xFD) == 0 || outMemberIndex < 0 || !Party_IsMemberIndexDataAvailable(CurrentParty, outMemberIndex) )
    return 0i64;
  if ( (unsigned int)v2 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7358, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v2, 200) )
    __debugbreak();
  if ( Party_IsMemberIndexDataAvailable(CurrentParty, v2) )
    return (unsigned int)CurrentParty->partyMembers[v2].info.mlgSpectator;
  else
    return 0i64;
}

/*
==============
Party_IsPlayerOurPrivatePartyHost
==============
*/
_BOOL8 Party_IsPlayerOurPrivatePartyHost(XUID playerXuid)
{
  int v1; 
  XUID v3; 
  int outMemberIndex; 
  XUID player; 

  v3.m_id = playerXuid.m_id;
  if ( g_partyData.inParty && !XUID::IsNull(&v3) && (player.m_id = v3.m_id, !XUID::IsNull(&player)) && Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) && (v1 = outMemberIndex, (g_partyData.partyMembers[outMemberIndex].status & 0xFD) != 0) && outMemberIndex >= 0 && Party_IsMemberIndexDataAvailable(&g_partyData, outMemberIndex) )
    return Party_IsHost(&g_partyData, v1);
  else
    return 0i64;
}

/*
==============
Party_IsPrivateDSMatch
==============
*/
bool Party_IsPrivateDSMatch(const PartyData *party)
{
  return party->currentHost.hostNum == -2 && party->privateMatchId.m_id;
}

/*
==============
Party_IsPrivateDSMatchHost
==============
*/
bool Party_IsPrivateDSMatchHost(const PartyData *party, const int memberSlot)
{
  __int64 v2; 
  unsigned __int64 m_id; 
  const XUID *v5; 
  bool v6; 
  int v8; 
  XUID result; 

  v2 = memberSlot;
  if ( (unsigned int)memberSlot >= 0xC8 )
  {
    v8 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7919, ASSERT_TYPE_ASSERT, "(unsigned)( memberSlot ) < (unsigned)( 200 )", "memberSlot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberSlot, v8) )
      __debugbreak();
  }
  m_id = party->privateMatchId.m_id;
  v6 = 0;
  if ( m_id )
  {
    v5 = XUID::FromUniversalId(&result, m_id);
    if ( XUID::operator==(&party->partyMembers[v2].playerUID, v5) )
      return 1;
  }
  return v6;
}

/*
==============
Party_IsPrivateMatchLobby
==============
*/
bool Party_IsPrivateMatchLobby(const PartyData *party)
{
  const dvar_t *v1; 

  if ( party->partyId )
    return 0;
  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return v1->current.enabled;
}

/*
==============
Party_IsPrivateOrSystemlinkGame
==============
*/
bool Party_IsPrivateOrSystemlinkGame(const PartyData *party)
{
  const dvar_t *v1; 
  bool result; 

  v1 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    return 1;
  result = Live_IsInSystemlinkLobby();
  if ( result )
    return 1;
  return result;
}

/*
==============
Party_IsPrivateParty
==============
*/
bool Party_IsPrivateParty(const PartyData *party)
{
  return party->partyId == PRIVATE_PARTY_ID;
}

/*
==============
Party_IsPrivatePresence
==============
*/
bool Party_IsPrivatePresence(const PartyData *party)
{
  return party && (party->gameFlags & 8) == 0 || g_partyData.party_systemActive && g_partyData.inParty && &g_partyData == party;
}

/*
==============
Party_IsRegisteredForVoice
==============
*/
_BOOL8 Party_IsRegisteredForVoice(const PartyData *party, const int clientNum)
{
  __int64 v2; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3881, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return party->partyMembers[v2].voiceRegistered;
}

/*
==============
Party_IsRegisteredForVoiceInAnyParty
==============
*/
bool Party_IsRegisteredForVoiceInAnyParty(const XUID xuid)
{
  __int64 v2; 
  const PartyData *PartyData; 
  __int64 v4; 
  bool result; 
  int outMemberIndex; 
  XUID player; 

  player.m_id = xuid.m_id;
  result = 1;
  if ( XUID::IsNull(&player) || !Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) || (v2 = outMemberIndex, (g_partyData.partyMembers[v2].status & 0xFD) == 0) || outMemberIndex == -1 || !g_partyData.partyMembers[v2].voiceRegistered )
  {
    player.m_id = xuid.m_id;
    PartyData = Lobby_GetPartyData();
    if ( XUID::IsNull(&player) )
      return 0;
    if ( !Party_FindMemberByXUID_Internal(PartyData, player, &outMemberIndex) )
      return 0;
    v4 = outMemberIndex;
    if ( (PartyData->partyMembers[v4].status & 0xFD) == 0 || outMemberIndex == -1 || !g_partyData.partyMembers[v4].voiceRegistered )
      return 0;
  }
  return result;
}

/*
==============
Party_IsRunning
==============
*/
__int64 Party_IsRunning(const PartyData *party)
{
  return (unsigned int)party->party_systemActive;
}

/*
==============
Party_IsSearchingForPlaylistsThatDisabledInviteJoins
==============
*/
bool Party_IsSearchingForPlaylistsThatDisabledInviteJoins()
{
  const dvar_t *v0; 
  PartyData *v1; 
  int Playlist; 
  unsigned int PlaylistCategory; 
  bool result; 

  v0 = DVARBOOL_online_should_block_invite_joins_if_searching_invite_join_disabled_playlists;
  if ( !DVARBOOL_online_should_block_invite_joins_if_searching_invite_join_disabled_playlists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_block_invite_joins_if_searching_invite_join_disabled_playlists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  result = 0;
  if ( v0->current.enabled )
  {
    v1 = g_partyData.party_systemActive && g_partyData.inParty ? &g_partyData : Lobby_GetPartyData();
    if ( !Party_IsMatchmakingLobby(v1) && v1->partyId == GAME_LOBBY_ID && OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) && !Live_IsInGameBattlesGame() )
    {
      Playlist = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance);
      PlaylistCategory = OnlineMatchmakerOmniscient::GetPlaylistCategory(&OnlineMatchmakerOmniscient::ms_instance);
      if ( Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress(Playlist, PlaylistCategory) )
        return 1;
    }
  }
  return result;
}

/*
==============
Party_IsServer
==============
*/
bool Party_IsServer(const PartyData *party, const int memberIndex)
{
  int hostNum; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v9 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v9) )
      __debugbreak();
  }
  if ( party->currentHost.hostNum == -2 )
    return 0;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    LODWORD(v8) = 200;
    LODWORD(v6) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 526, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  hostNum = party->currentHost.hostNum;
  if ( hostNum != -2 && hostNum == memberIndex )
    return 1;
  return Party_MemberHasHostAddress(party, memberIndex) != 0;
}

/*
==============
Party_IsServerDedicated
==============
*/
_BOOL8 Party_IsServerDedicated(const PartyData *party)
{
  return party->currentHost.hostNum == -2;
}

/*
==============
Party_IsServerRunning
==============
*/
_BOOL8 Party_IsServerRunning(const PartyData *party)
{
  return Com_IsGameLocalServerRunningOrLoading();
}

/*
==============
Party_IsSessionSharable
==============
*/
_BOOL8 Party_IsSessionSharable(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3995, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return party->party_systemActive && party->inParty && (Party_AreWeHost(party) || !PartyClient_IsHostAway(party) && !PartyClient_IsHostTimingOut(party));
}

/*
==============
Party_IsStoppingAfterRound
==============
*/
bool Party_IsStoppingAfterRound(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6836, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return !party->inParty || party->stopAfterRound;
}

/*
==============
Party_IsTheActiveParty
==============
*/
_BOOL8 Party_IsTheActiveParty(PartyData *party)
{
  PartyType partyId; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1594, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty )
    return 0i64;
  if ( party->party_systemActive )
    return 1i64;
  partyId = party->partyId;
  if ( partyId )
  {
    if ( partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1616, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
      __debugbreak();
    return !Lobby_IsInLobby();
  }
  if ( !g_partyData.party_systemActive )
    return 1i64;
  if ( !g_partyData.inParty )
  {
    if ( g_partyData.party_systemActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1608, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", (const char *)&queryFormat, "!Party_IsRunning( &g_partyData )") )
    {
      __debugbreak();
      return 1i64;
    }
    return 1i64;
  }
  return 0i64;
}

/*
==============
Party_IsWaitingForMembers
==============
*/
__int64 Party_IsWaitingForMembers(const PartyData *party)
{
  unsigned int v2; 
  unsigned __int8 *i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6989, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6990, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  v2 = 0;
  if ( Party_CountAllMembersEvenIfInactive(party) )
  {
    for ( i = &party->partyMembers[0].status; *i == 6 || !Party_IsWaitingForPartyMember(party, v2); i += 504 )
    {
      if ( ++v2 >= 0xC8 )
        return 0i64;
    }
    return 1i64;
  }
  else
  {
    LOBYTE(v2) = party->partyId == GAME_LOBBY_ID;
    return v2;
  }
}

/*
==============
Party_IsWaitingForPartyMember
==============
*/
_BOOL8 Party_IsWaitingForPartyMember(const PartyData *party, const unsigned int partyClientNum)
{
  __int64 v2; 
  __int64 v5; 

  v2 = (int)partyClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6941, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6942, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !Party_IsMemberIndexAway(party, v2) && !Party_IsMemberIndexCommitted(party, v2) )
    return 0i64;
  if ( party->partyId || Party_IsPrivateOrSystemlinkGame(party) )
    return 1i64;
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v5, 200) )
      __debugbreak();
  }
  return Party_IsPlayerInPrivateParty(party->partyMembers[v2].playerUID) != 0;
}

/*
==============
Party_LostPrivatePartyPlayer
==============
*/
void Party_LostPrivatePartyPlayer(const int controllerIndex, XUID removedPlayerXuid, const int clearImmediately, const int tellThem)
{
  __int64 v7; 
  int PortForLocalXUID; 
  BOOL v9; 
  const char *v10; 
  __int64 v11; 
  const char *v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  int outMemberIndex[2]; 
  XUID player; 
  XUID v20; 

  v20.m_id = removedPlayerXuid.m_id;
  if ( !XUID::IsValid(&v20) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2336, ASSERT_TYPE_ASSERT, "(removedPlayerXuid.IsValid())", (const char *)&queryFormat, "removedPlayerXuid.IsValid()") )
    __debugbreak();
  if ( g_partyData.inParty )
  {
    if ( g_partyData.party_systemActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2341, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", "%s\n\tShouldn't be deriving party member status while the party is active", "!Party_IsRunning( &g_partyData )") )
      __debugbreak();
    player.m_id = v20.m_id;
    if ( !XUID::IsNull(&player) && Party_FindMemberByXUID_Internal(&g_partyData, player, outMemberIndex) )
    {
      v7 = outMemberIndex[0];
      if ( (g_partyData.partyMembers[outMemberIndex[0]].status & 0xFD) != 0 && outMemberIndex[0] >= 0 )
      {
        PortForLocalXUID = Live_GetPortForLocalXUID(v20);
        if ( PortForLocalXUID < 0 )
        {
          if ( clearImmediately || !Party_IsMemberPresent(&g_partyData, v7) )
          {
            player.m_id = (unsigned __int64)Party_GetMainActiveClient(&g_partyData, controllerIndex);
            Party_ClearMemberFromParty(&g_partyData, (const PartyActiveClient *)&player, v7, tellThem);
          }
          else
          {
            if ( (unsigned int)v7 >= 0xC8 )
            {
              LODWORD(v14) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2363, ASSERT_TYPE_ASSERT, "(unsigned)( privatePartyMemberIndex ) < (unsigned)( 200 )", "privatePartyMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v14, 200) )
                __debugbreak();
              LODWORD(v17) = 200;
              LODWORD(v15) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v17) )
                __debugbreak();
            }
            v11 = v7;
            *(_QWORD *)outMemberIndex = g_partyData.partyMembers[v7].playerUID.m_id;
            v12 = XUID::ToDevString((XUID *)outMemberIndex);
            if ( (unsigned int)v7 >= 0xC8 )
            {
              LODWORD(v16) = 200;
              LODWORD(v14) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v14, v16) )
                __debugbreak();
            }
            Com_Printf(25, "[%s] Party - LostPrivatePartyPlayer - Setting private party member at index %i (%s, %s) to ZOMBIE status.\n", g_partyData.partyName, (unsigned int)v7, g_partyData.partyMembers[v11].info.gamertag, v12);
            g_partyData.partyMembers[v11].status = 1;
            g_partyData.partyMembers[v11].lastPacketTime = Sys_Milliseconds();
          }
        }
        else
        {
          v9 = Party_GetSecondaryActiveClient(&g_partyData, (PartyActiveClient *)&player) && HIDWORD(player.m_id) == PortForLocalXUID || Party_GetMainActiveClient(&g_partyData, PortForLocalXUID).localControllerIndex == PortForLocalXUID;
          v10 = XUID::ToDevString(&v20);
          LODWORD(v14) = v9;
          LODWORD(fmt) = PortForLocalXUID;
          Com_PrintWarning(25, "[%s] Party - LostPrivatePartyPlayer - XUID %s is local with controller %i. Active Client = %i.\n", g_partyData.partyName, v10, fmt, v14);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2351, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Host told us about a local player being lost, who's in our private party. Please report with host and client console log.") )
            __debugbreak();
        }
      }
    }
  }
}

/*
==============
Party_MemberHasHostAddress
==============
*/
_BOOL8 Party_MemberHasHostAddress(const PartyData *party, const unsigned int memberIndex)
{
  NetConnection *MemberConnection; 
  bool v5; 
  int v8; 

  if ( memberIndex >= 0xC8 )
  {
    v8 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7296, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v8) )
      __debugbreak();
  }
  if ( party->currentHost.hostNum == -2 )
    return 0i64;
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, memberIndex);
  if ( !NetConnection::IsOpened(MemberConnection) )
    return 0i64;
  if ( NetConnection::IsOpened(&party->currentHost.connections[1]) )
  {
    v5 = NetConnection::CompareAddr(party->currentHost.connections, MemberConnection);
    if ( v5 != NetConnection::CompareAddr(&party->currentHost.connections[1], MemberConnection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7309, ASSERT_TYPE_ASSERT, "(!party->currentHost.connections[LOCAL_CLIENT_1].IsOpened() || party->currentHost.connections[LOCAL_CLIENT_0].CompareAddr( connection ) == party->currentHost.connections[LOCAL_CLIENT_1].CompareAddr( connection ))", "%s\n\tHost connection mismatch between splitscreen players", "!party->currentHost.connections[LOCAL_CLIENT_1].IsOpened() || party->currentHost.connections[LOCAL_CLIENT_0].CompareAddr( connection ) == party->currentHost.connections[LOCAL_CLIENT_1].CompareAddr( connection )") )
      __debugbreak();
  }
  return NetConnection::CompareAddr(party->currentHost.connections, MemberConnection);
}

/*
==============
Party_MemberHasLoopbackAddr
==============
*/
bool Party_MemberHasLoopbackAddr(const PartyData *party, const int clientNum)
{
  __int64 v2; 
  NetConnection *MemberConnection; 
  __int64 v6; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1458, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, 200) )
      __debugbreak();
  }
  if ( (unsigned __int8)(party->partyMembers[v2].status - 4) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1459, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientNum )") )
    __debugbreak();
  MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v2);
  if ( NetConnection::IsOpened(MemberConnection) )
    return NetConnection::IsLoopback(MemberConnection);
  if ( PeerMesh_IsEnabled(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1465, ASSERT_TYPE_ASSERT, "(!PeerMesh_IsEnabled( party ))", "%s\n\tConnection should be opened for registered players", "!PeerMesh_IsEnabled( party )") )
    __debugbreak();
  return 0;
}

/*
==============
Party_MemberIsInHostPrivateParty
==============
*/
_BOOL8 Party_MemberIsInHostPrivateParty(const PartyData *party, const unsigned int memberIndex)
{
  __int64 v2; 
  PartyMember *v4; 
  PartyMember *v5; 
  int v6; 
  __int64 v8; 

  v2 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7319, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7320, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v8, 200) )
      __debugbreak();
  }
  if ( Party_MemberHasHostAddress(party, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7321, ASSERT_TYPE_ASSERT, "(!Party_MemberHasHostAddress( party, memberIndex ))", (const char *)&queryFormat, "!Party_MemberHasHostAddress( party, memberIndex )") )
    __debugbreak();
  if ( party->partyId == PRIVATE_PARTY_ID )
    return 1i64;
  if ( !Party_IsMemberIndexDataAvailable(party, v2) )
    return 0i64;
  if ( party->currentHost.hostNum == -2 )
    return 0i64;
  v4 = &party->partyMembers[v2];
  if ( *(_QWORD *)&v4->info.privatePartyId == g_noPrivatePartyId )
    return 0i64;
  v5 = &party->partyMembers[Party_HostNum(party)];
  if ( party->currentHost.hostNum != -2 )
  {
    v6 = Party_HostNum(party);
    if ( !Party_IsMemberDataAvailable(&party->partyMembers[v6]) )
    {
      Com_PrintWarning(25, "[%s] Party - MemberIsInHostPrivateParty - Accessing host's private party information, but he's no longer registered. This is okay if it happens during a host migration. PartyId is %zx\n", party->partyName, *(_QWORD *)&v5->info.privatePartyId);
      if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7344, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
        __debugbreak();
    }
  }
  return *(_QWORD *)&v4->info.privatePartyId == *(_QWORD *)&v5->info.privatePartyId;
}

/*
==============
Party_MigrateClientConnections
==============
*/
void Party_MigrateClientConnections(PartyData *party, netsrc_t localId)
{
  int maxGameSlots; 
  NetConnection *p_connection; 
  __int64 v6; 
  netsrc_t NetId; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3501, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  maxGameSlots = party->maxGameSlots;
  if ( maxGameSlots > 0 )
  {
    p_connection = &party->partyMembers[0].connection;
    v6 = (unsigned int)maxGameSlots;
    do
    {
      if ( NetConnection::IsOpened(p_connection) )
      {
        NetId = NetConnection::GetNetId(p_connection);
        NetConnection::Migrate(p_connection, localId, NetId);
      }
      p_connection = (NetConnection *)((char *)p_connection + 504);
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
Party_MigrateHostConnection
==============
*/
void Party_MigrateHostConnection(PartyData *party, const LocalClientNum_t localClientNum, NetConnection *memberConnection)
{
  NetConnection *v6; 
  const char *String; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  PartyData *PartyData; 
  NetEndpoint *Endpoint; 
  const char *v11; 
  char dest[128]; 

  v6 = &party->currentHost.connections[localClientNum];
  String = NetConnection::GetString(v6);
  Core_strcpy(dest, 0x80ui64, String);
  if ( !NetConnection::IsOpened(v6) )
  {
    LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
    PartyData = Lobby_GetPartyData();
    NetConnection::Set(v6, LocalNetIDFromLocalClientNum, NS_MAXCLIENTS, (const NetConnection::Type)((party == PartyData) + 1));
  }
  Endpoint = NetConnection::GetEndpoint(memberConnection);
  NetConnection::operator=(v6, Endpoint);
  v11 = NetConnection::GetString(v6);
  Com_Printf(25, "[%s] Migrated host connection from %s to %s for client %d\n", party->partyName, dest, v11, localClientNum);
}

/*
==============
Party_MigrateHostConnections
==============
*/
void Party_MigrateHostConnections(PartyData *party, NetConnection *memberConnection)
{
  unsigned int i; 
  __int64 LocalClient; 
  NetConnection *v6; 
  const char *String; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  PartyData *PartyData; 
  NetEndpoint *Endpoint; 
  const char *v11; 
  __int64 v12; 
  char dest[128]; 

  if ( !NetConnection::IsOpened(party->currentHost.connections) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1830, ASSERT_TYPE_ASSERT, "(party->currentHost.connections[LOCAL_CLIENT_0].IsOpened())", "%s\n\tMain host connection should have always been opened", "party->currentHost.connections[LOCAL_CLIENT_0].IsOpened()") )
    __debugbreak();
  for ( i = 0; i < 2; ++i )
  {
    if ( NetConnection::IsOpened(&party->currentHost.connections[i]) )
    {
      LocalClient = NetConnection::GetLocalClient(&party->currentHost.connections[i]);
      v6 = &party->currentHost.connections[LocalClient];
      String = NetConnection::GetString(v6);
      Core_strcpy(dest, 0x80ui64, String);
      if ( !NetConnection::IsOpened(v6) )
      {
        LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)LocalClient);
        PartyData = Lobby_GetPartyData();
        NetConnection::Set(v6, LocalNetIDFromLocalClientNum, NS_MAXCLIENTS, (const NetConnection::Type)((party == PartyData) + 1));
      }
      Endpoint = NetConnection::GetEndpoint(memberConnection);
      NetConnection::operator=(v6, Endpoint);
      v11 = NetConnection::GetString(v6);
      LODWORD(v12) = LocalClient;
      Com_Printf(25, "[%s] Migrated host connection from %s to %s for client %d\n", party->partyName, dest, v11, v12);
    }
  }
}

/*
==============
Party_OnInviteJoinEvent
==============
*/
void Party_OnInviteJoinEvent(const int controllerIndex, const InviteJoinHSMResult result, const char *errorCode)
{
  InviteJoinHSMResult v3; 

  v3 = result;
  if ( (unsigned int)(result - 4) <= 1 || result == DODGE )
  {
    if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4141, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( &g_partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomic_IsJoiningActive( &g_partyJoinInfo )") )
      __debugbreak();
  }
  else
  {
    LOBYTE(result) = 25;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, (const PartyDisconnectReason)result);
    if ( v3 >= COUNT )
      PartyUI_RecoverFromError();
  }
}

/*
==============
Party_PartiesAcrossGamemodesFeatureEnabled
==============
*/
__int64 Party_PartiesAcrossGamemodesFeatureEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_parties_in_main_menu_feature_enabled;
  if ( !DVARBOOL_online_parties_in_main_menu_feature_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_parties_in_main_menu_feature_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
Party_PartyMemberHasMapPack
==============
*/
bool Party_PartyMemberHasMapPack(const PartyData *party, int playerSlot, int mapPackIndex)
{
  __int64 v3; 

  v3 = playerSlot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1630, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return (int)v3 < 200 && party->partyMembers[v3].status >= 5u && (mapPackIndex & party->partyMembers[v3].info.availableMapPackFlags) != 0;
}

/*
==============
Party_PartyMemberHasOnlineSubscription
==============
*/
bool Party_PartyMemberHasOnlineSubscription(PartyData *party, int playerSlot)
{
  __int64 v2; 

  v2 = playerSlot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8316, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_IsMemberIndexDataAvailable(party, v2) && party->partyMembers[v2].info.hasOnlineSubscription;
}

/*
==============
Party_PartyMemberIsPaid
==============
*/
bool Party_PartyMemberIsPaid(PartyData *party, int playerSlot)
{
  __int64 v2; 

  v2 = playerSlot;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8261, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_IsMemberIndexDataAvailable(party, v2) && party->partyMembers[v2].info.isPaidUser;
}

/*
==============
Party_PartyMembersHaveMapPack
==============
*/
char Party_PartyMembersHaveMapPack(const PartyData *party, int mapPackIndex)
{
  __int64 v4; 
  int *i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1651, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = 0i64;
  for ( i = &party->partyMembers[0].info.availableMapPackFlags; *((_BYTE *)i + 402) < 5u || (mapPackIndex & *i) != 0; i += 126 )
  {
    if ( ++v4 >= 200 )
      return 1;
  }
  return 0;
}

/*
==============
Party_PartyMembersMissingMapPack
==============
*/
char Party_PartyMembersMissingMapPack(PartyData *party, int *playerSlot, int *mapPackIndex)
{
  int v6; 
  int *p_availableMapPackFlags; 
  int v8; 
  int *v9; 
  int v10; 
  const char *MemberName; 
  int v12; 
  int v13; 
  const char *v14; 
  int v15; 
  int v17; 

  v6 = 0;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1676, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !playerSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1677, ASSERT_TYPE_ASSERT, "(playerSlot)", (const char *)&queryFormat, "playerSlot") )
    __debugbreak();
  if ( !mapPackIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1678, ASSERT_TYPE_ASSERT, "(mapPackIndex)", (const char *)&queryFormat, "mapPackIndex") )
    __debugbreak();
  p_availableMapPackFlags = &party->partyMembers[0].info.availableMapPackFlags;
  v8 = 0;
  v9 = &party->partyMembers[0].info.availableMapPackFlags;
  do
  {
    if ( *((_BYTE *)v9 + 402) >= 5u )
    {
      v10 = *v9;
      if ( !*v9 )
      {
        MemberName = Party_GetMemberName(party, v8);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1688, ASSERT_TYPE_ASSERT, "(playerAvailablePacks)", "%s\n\tmember is %s", "playerAvailablePacks", MemberName) )
          __debugbreak();
      }
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
        v10 &= 2u;
      v6 |= v10;
    }
    ++v8;
    v9 += 126;
  }
  while ( v8 < 200 );
  v12 = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)p_availableMapPackFlags + 402) >= 5u )
    {
      v13 = *p_availableMapPackFlags;
      if ( !*p_availableMapPackFlags )
      {
        v14 = Party_GetMemberName(party, v12);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1707, ASSERT_TYPE_ASSERT, "(playerAvailablePacks)", "%s\n\tmember is %s", "playerAvailablePacks", v14) )
          __debugbreak();
      }
      *playerSlot = v12;
      v15 = v6 & ~v13;
      if ( v15 )
        break;
    }
    ++v12;
    p_availableMapPackFlags += 126;
    if ( v12 >= 200 )
      return 0;
  }
  v17 = 64;
  while ( (v17 & v15) == 0 )
  {
    v17 *= 2;
    if ( v17 > 1024 )
      return 1;
  }
  *mapPackIndex = v17;
  return 1;
}

/*
==============
Party_PlayCountdownSound
==============
*/
void Party_PlayCountdownSound(const int countdownTimer)
{
  int v1; 
  int v2; 

  v1 = countdownTimer - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == 1 )
        SND_PlayLocalSoundAliasAsync(LOCAL_CLIENT_0, "match_countdown_tick_in3", SASYS_UI);
      else
        SND_PlayLocalSoundAliasAsync(LOCAL_CLIENT_0, "match_countdown_tick", SASYS_UI);
    }
    else
    {
      SND_PlayLocalSoundAliasAsync(LOCAL_CLIENT_0, "match_countdown_tick_in2", SASYS_UI);
    }
  }
  else
  {
    SND_PlayLocalSoundAliasAsync(LOCAL_CLIENT_0, "match_countdown_tick_in1", SASYS_UI);
  }
}

/*
==============
Party_PlayPlayerJoinSound
==============
*/
void Party_PlayPlayerJoinSound(PartyData *party, const LocalClientNum_t localClientNum)
{
  int v4; 
  const dvar_t *v5; 
  int v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1930, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = Sys_Milliseconds();
  v5 = DVARINT_party_joinSoundDelay;
  v6 = v4;
  if ( !DVARINT_party_joinSoundDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_joinSoundDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( party->lastJoinSoundTime + v5->current.integer <= v6 )
  {
    party->lastJoinSoundTime = v6;
    SND_PlaySoundAlias("ui_mp_player_join_lobby", localClientNum, 2047, &vec3_origin, 0, SASYS_UI);
  }
}

/*
==============
Party_PlayPlayerLeaveSound
==============
*/
void Party_PlayPlayerLeaveSound(PartyData *party, const LocalClientNum_t localClientNum)
{
  int v4; 
  const dvar_t *v5; 
  int v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1945, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v4 = Sys_Milliseconds();
  v5 = DVARINT_party_leaveSoundDelay;
  v6 = v4;
  if ( !DVARINT_party_leaveSoundDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_leaveSoundDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( party->lastLeaveSoundTime + v5->current.integer <= v6 )
  {
    party->lastLeaveSoundTime = v6;
    SND_PlaySoundAlias("ui_mp_player_leave_lobby", localClientNum, 2047, &vec3_origin, 0, SASYS_UI);
  }
}

/*
==============
Party_PrimaryMapVetoed
==============
*/
void Party_PrimaryMapVetoed(const int localControllerIndex, VoteType vote)
{
  PartyData *PartyData; 
  PartyData *v5; 
  int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 alternateMap; 
  int PlaylistEntry; 

  if ( vote == PARTY_VOTE_NEXT_MAP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5076, ASSERT_TYPE_ASSERT, "(vote != PARTY_VOTE_NEXT_MAP)", (const char *)&queryFormat, "vote != PARTY_VOTE_NEXT_MAP") )
    __debugbreak();
  PartyData = Lobby_GetPartyData();
  v5 = PartyData;
  v6 = (PartyData->currentEntry + 1) % 8;
  PartyData->currentEntry = v6;
  v7 = &PartyData->lastEntries[v6];
  if ( vote == PARTY_VOTE_ALTERNATE_MAP )
    alternateMap = PartyData->alternateMap;
  else
    alternateMap = PartyData->randomMap;
  *v7 = alternateMap;
  PlaylistEntry = Party_GetPlaylistEntry(v5);
  Party_ResetTweakDvars();
  Playlist_RunRules(localControllerIndex, PlaylistEntry);
  Playlist_HandleMapVoteSucceeded(PlaylistEntry);
}

/*
==============
Party_PrintPartyStatus
==============
*/
void Party_PrintPartyStatus(PartyData *party)
{
  const char *v1; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  SessionDynamicData *p_dyn; 
  __int64 v7; 
  unsigned int v8; 
  const char *v9; 
  const char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  int NumGameSlots; 
  __int64 v14; 
  XUID *p_playerUID; 
  const char *v16; 
  const char *MemberStatus; 
  const char *v18; 
  const char *MemberName; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  XUID v24; 

  v1 = "party";
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5792, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    v3 = Sys_Milliseconds();
    v4 = DVARINT_party_printPartyStatusFrequency;
    v5 = v3;
    if ( !DVARINT_party_printPartyStatusFrequency && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_printPartyStatusFrequency") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v5 - v4->current.integer - party->lastStatusPrintTime >= 0 )
    {
      p_dyn = &party->session->dyn;
      party->lastStatusPrintTime = v5;
      v7 = (__int64)*XSESSION_INFO::GetSecurityId(&p_dyn->sessionInfo);
      v8 = Party_CountAllMembersEvenIfInactive(party);
      v9 = "client";
      if ( party->areWeHost )
        v9 = "host";
      LODWORD(v22) = v8;
      v10 = "sleeping";
      if ( party->partyId == GAME_LOBBY_ID )
        v1 = "lobby";
      if ( party->party_systemActive )
        v10 = "active";
      Com_Printf(25, "[%s] [%s %s] %s with %i members. sessionID %zx:\n", party->partyName, v10, v1, v9, v22, v7);
      v11 = 0;
      v12 = 0;
      NumGameSlots = Party_GetNumGameSlots(party);
      v14 = NumGameSlots;
      if ( NumGameSlots > 0 )
      {
        p_playerUID = &party->partyMembers[0].playerUID;
        do
        {
          if ( v12 >= 0xC8 )
          {
            LODWORD(v23) = 200;
            LODWORD(v21) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v21, v23) )
              __debugbreak();
          }
          if ( Party_IsMemberDataAvailable(&party->partyMembers[v12]) )
          {
            v16 = (char *)&queryFormat.fmt + 3;
            if ( Party_IsHost(party, v12) )
              v16 = "(host)";
            MemberStatus = Party_GetMemberStatus(party, v12);
            if ( v12 >= 0xC8 )
            {
              LODWORD(v23) = 200;
              LODWORD(v21) = v12;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v21, v23) )
                __debugbreak();
            }
            v24.m_id = p_playerUID->m_id;
            v18 = XUID::ToDevString(&v24);
            MemberName = Party_GetMemberName(party, v12);
            LODWORD(fmt) = v12;
            Com_Printf(25, "[%s] %i. (%i) %s (%s) %s %s\n", party->partyName, v11++, fmt, MemberName, v18, MemberStatus, v16);
          }
          ++v12;
          p_playerUID += 63;
          --v14;
        }
        while ( v14 );
      }
    }
  }
}

/*
==============
Party_PrivateDedicatedServerAllowed
==============
*/
_BOOL8 Party_PrivateDedicatedServerAllowed(const PartyData *party)
{
  return party->privateMatchId.m_id != 0;
}

/*
==============
Party_PrivateMatchmakingAllowed
==============
*/
_BOOL8 Party_PrivateMatchmakingAllowed(const PartyData *party)
{
  return party->privateMatchId.m_id != 0;
}

/*
==============
Party_RandomizeParty
==============
*/
void Party_RandomizeParty(PartyData *party)
{
  int v2; 
  unsigned int *v3; 
  int v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1920, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1921, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tCalling Party_RandomizeParty on something other than the game lobby is not supported, since sortedIndices is a global variable", "Party_IsGameLobby( party )") )
    __debugbreak();
  v2 = 0;
  v3 = sortedIndices;
  do
  {
    v4 = I_irand(v2, 200);
    v5 = v4;
    if ( v4 < v2 || v4 >= 200 )
    {
      LODWORD(v7) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1910, ASSERT_TYPE_ASSERT, "( ( randIdx >= i && randIdx < size ) )", "( randIdx ) = %i", v7) )
        __debugbreak();
    }
    v6 = *v3;
    ++v2;
    *v3++ = sortedIndices[v5];
    sortedIndices[v5] = v6;
  }
  while ( v2 < 200 );
}

/*
==============
Party_ReadAvailableMapPackFlags
==============
*/
__int64 Party_ReadAvailableMapPackFlags(msg_t *msg)
{
  int KnownContentPackCount; 
  __int64 Bits; 
  int v5; 

  KnownContentPackCount = Content_GetKnownContentPackCount();
  if ( KnownContentPackCount - 1 > 10 )
  {
    v5 = KnownContentPackCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3463, ASSERT_TYPE_ASSERT, "( ( contentPackCount + 1 - 2 <= 10 ) )", "( contentPackCount ) = %i", v5) )
      __debugbreak();
  }
  Bits = MSG_ReadBits(msg, 0xAu);
  return (4 * truncate_cast<int,__int64>(Bits)) | 2u;
}

/*
==============
Party_ReadMemberInfo
==============
*/
void Party_ReadMemberInfo(msg_t *msg, ClientAuthoritativeMemberInfo *memberInfo, XUID xuid)
{
  int KnownContentPackCount; 
  __int64 Bits; 
  __int64 v7; 
  char v8; 
  __int64 v9; 
  unsigned __int64 Byte; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  ClientAuthoritativeMemberInfo buffer; 

  bdSecurityID::bdSecurityID(&buffer.privatePartyId);
  if ( !memberInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1342, ASSERT_TYPE_ASSERT, "(memberInfo)", (const char *)&queryFormat, "memberInfo") )
    __debugbreak();
  buffer = *memberInfo;
  KnownContentPackCount = Content_GetKnownContentPackCount();
  if ( KnownContentPackCount - 1 > 10 )
  {
    LODWORD(v15) = KnownContentPackCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3463, ASSERT_TYPE_ASSERT, "( ( contentPackCount + 1 - 2 <= 10 ) )", "( contentPackCount ) = %i", v15) )
      __debugbreak();
  }
  Bits = MSG_ReadBits(msg, 0xAu);
  buffer.availableMapPackFlags = (4 * truncate_cast<int,__int64>(Bits)) | 2;
  v7 = MSG_ReadBits(msg, 3u);
  v8 = v7;
  if ( (unsigned __int64)(v7 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum ClientPlatform __cdecl truncate_cast_impl<enum ClientPlatform,__int64>(__int64)", "signed", (char)v7, "signed", v7) )
    __debugbreak();
  buffer.platform[0] = v8;
  buffer.platformId = MSG_ReadInt64(msg);
  MSG_ReadData(msg, 8, &buffer, 8);
  buffer.headsetPresent = MSG_ReadBit(msg) != 0;
  buffer.usingGamepad = MSG_ReadBit(msg) != 0;
  v9 = MSG_ReadBits(msg, 8u);
  buffer.clientDesiredTeamSelection = truncate_cast<int,__int64>(v9);
  buffer.isHeadless = MSG_ReadBit(msg) != 0;
  buffer.isPaidUser = MSG_ReadBit(msg) != 0;
  buffer.hasOnlineSubscription = MSG_ReadBit(msg) != 0;
  Byte = MSG_ReadByte(msg);
  v11 = MSG_ReadByte(msg);
  v12 = v11;
  if ( (Byte & 0x80000000) != 0i64 || Byte >= 0x24 )
  {
    Com_PrintError(14, "Party_ReadMemberInfo - Invalid gamertag len (%i)\n", (unsigned int)Byte);
    goto LABEL_21;
  }
  if ( v11 < 0 || (unsigned __int64)v11 >= 6 )
  {
    Com_PrintError(14, "Party_ReadMemberInfo - Invalid clanAbbrev len (%i)\n", (unsigned int)v11);
LABEL_21:
    MSG_Discard(msg);
    goto LABEL_22;
  }
  memset(buffer.gamertag, 0, sizeof(buffer.gamertag));
  if ( (int)Byte > 0 )
    MSG_ReadData(msg, Byte, buffer.gamertag, 36);
  buffer.gamertag[Byte] = 0;
  if ( (int)v12 > 0 )
    MSG_ReadData(msg, v12, buffer.clanAbbrev, 6);
  buffer.clanAbbrev[v12] = 0;
  v13 = MSG_ReadByte(msg);
  buffer.clanTagType = truncate_cast<unsigned char,int>(v13);
  buffer.gamertagSuffix = MSG_ReadLong(msg);
  v14 = MSG_ReadByte(msg);
  buffer.playerCardUpdate = truncate_cast<unsigned char,int>(v14);
LABEL_22:
  if ( !msg->overflowed )
  {
    Party_ReadMemberInfo_NonEssentialConnection(msg, (const ClientPlatform)(unsigned __int8)buffer.platform[0], &buffer);
    if ( !msg->overflowed )
      *memberInfo = buffer;
  }
  bdSecurityID::~bdSecurityID(&buffer.privatePartyId);
}

/*
==============
Party_ReadMemberInfo_NonEssentialConnection
==============
*/
void Party_ReadMemberInfo_NonEssentialConnection(msg_t *msg, const ClientPlatform clientPlatform, ClientAuthoritativeMemberInfo *memberInfo)
{
  char v4; 
  const dvar_t *v6; 
  __int64 Bits; 
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

  v4 = clientPlatform;
  if ( !memberInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1223, ASSERT_TYPE_ASSERT, "(memberInfo)", (const char *)&queryFormat, "memberInfo") )
    __debugbreak();
  if ( MSG_ReadBit(msg) )
  {
    Bits = MSG_ReadBits(msg, 2u);
    if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum VoteType __cdecl truncate_cast_impl<enum VoteType,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
      __debugbreak();
    memberInfo->vote = Bits;
    if ( MSG_ReadBit(msg) )
    {
      v8 = MSG_ReadBits(msg, 8u);
      memberInfo->zombie_consumable0 = truncate_cast<unsigned int,__int64>(v8);
      v9 = MSG_ReadBits(msg, 8u);
      memberInfo->zombie_consumable1 = truncate_cast<unsigned int,__int64>(v9);
      v10 = MSG_ReadBits(msg, 8u);
      memberInfo->zombie_consumable2 = truncate_cast<unsigned int,__int64>(v10);
      v11 = MSG_ReadBits(msg, 8u);
      memberInfo->zombie_consumable3 = truncate_cast<unsigned int,__int64>(v11);
      v12 = MSG_ReadBits(msg, 8u);
      memberInfo->zombie_consumable4 = truncate_cast<unsigned int,__int64>(v12);
      v13 = MSG_ReadBits(msg, 1u);
      memberInfo->alien_readyUpFlag = truncate_cast<unsigned int,__int64>(v13);
      v14 = MSG_ReadBits(msg, 8u);
      memberInfo->cpFieldUpgradeRowNum = truncate_cast<unsigned int,__int64>(v14);
      memberInfo->alienRevives = MSG_ReadUnsignedShort(msg);
      memberInfo->alienEscapes = MSG_ReadUnsignedShort(msg);
      memberInfo->alienNerfEscapes = MSG_ReadUnsignedShort(msg);
      memberInfo->aliensKilled = MSG_ReadUnsignedShort(msg);
    }
    else
    {
      memberInfo->gameBattlesCommitReady = MSG_ReadBit(msg) != 0;
      memberInfo->mlgSpectator = MSG_ReadBit(msg) != 0;
      memberInfo->mlgFollower = MSG_ReadBit(msg) != 0;
      v15 = MSG_ReadBits(msg, 6u);
      memberInfo->mlgFollowerIndex = truncate_cast<unsigned int,__int64>(v15);
    }
    memberInfo->serverOverwroteInfo = MSG_ReadBit(msg) != 0;
    v16 = MSG_ReadBits(msg, 9u);
    memberInfo->bestWeaponIndex = truncate_cast<int,__int64>(v16);
    memberInfo->wins = MSG_ReadShort(msg);
    memberInfo->kdRatio = MSG_ReadLong(msg);
    v17 = MSG_ReadBits(msg, 0xAu);
    memberInfo->currentWinStreak = truncate_cast<int,__int64>(v17);
    memberInfo->gamesPlayed = MSG_ReadShort(msg);
    memberInfo->winLossRatio = MSG_ReadLong(msg);
    memberInfo->timePlayedTotal = MSG_ReadLong(msg);
    memberInfo->trueSkill = MSG_ReadShort(msg);
    MSG_ReadData(msg, 5, memberInfo->killsHistory, 5);
    MSG_ReadData(msg, 5, memberInfo->deathsHistory, 5);
    if ( v4 == 2 )
      memberInfo->bnetGameAccountId = MSG_ReadLong(msg);
  }
  else
  {
    v6 = DVARBOOL_party_debug;
    if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      Com_Printf(14, "Party_ReadMemberInfo_NonEssentialConnection - Server is running so connection non essential member info will be read via in Party_UpdateMemberInfoFromGame\n");
  }
}

/*
==============
Party_ReadPrivatePartyChatData
==============
*/
void Party_ReadPrivatePartyChatData(PartyData *party, msg_t *msg)
{
  int Byte; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3579, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3580, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  Byte = MSG_ReadByte(msg);
  if ( Byte != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3587, ASSERT_TYPE_ASSERT, "(onlineIdSize == sizeof( partyChat->chatId ))", (const char *)&queryFormat, "onlineIdSize == sizeof( partyChat->chatId )") )
    __debugbreak();
  MSG_ReadData(msg, Byte, &party->partyChatData.chats[0].chatId, 8);
  party->partyChatData.chats[0].chatState = MSG_ReadByte(msg);
  XUID::Deserialize(&party->partyChatData.chats[0].owner, msg);
}

/*
==============
Party_RecordVote
==============
*/
void Party_RecordVote(PartyData *party, const VoteType vote)
{
  party->vote = vote;
}

/*
==============
Party_RegisterDvars
==============
*/
void Party_RegisterDvars()
{
  Dvar_BeginPermanentRegistration();
  DVARBOOL_pt_allMembersDoQoS = Dvar_RegisterBool("SKMNNRROM", 1, 0, "Whether to send search results to all party/lobby members to get QoS data");
  DVARINT_pt_allMembersDoQoSTimeout = Dvar_RegisterInt("NPSTTQLLN", 4000, 0, 60000, 0, "Timeout, from the start of our search, for other party members' QoS results with partyTweak_allMembersDoQoS");
  DVARINT_pt_reservedAnonymousSlotTime = Dvar_RegisterInt("LNMQKKKOOS", 2000, 0, 0x7FFFFFFF, 0, "Time in milliseconds that ANONYMOUS slots will be reserved.");
  DVARINT_pt_reservedJoiningSlotTime = Dvar_RegisterInt("MRRQRQRQP", 8000, 0, 0x7FFFFFFF, 0, "Time in milliseconds that JOINING slots will be reserved");
  DVARINT_pt_reservedCommittedSlotTime = Dvar_RegisterInt("LORLKNROQR", 12000, 0, 0x7FFFFFFF, 0, "Time in milliseconds that COMMITTED slots will be reserved");
  DVARINT_pt_stillConnectingWaitTime = Dvar_RegisterInt("MLKNRQSKSK", 4000, 0, 60000, 0, "Amount of time to wait for someone to finish connecting before searching for lobbies to merge with");
  DVARINT_pt_gameStartTimerLength = Dvar_RegisterInt("MNNNSLPQKR", 8, 0, 60, 0, "Time in seconds before a game starts once enough party members are ready");
  DVARINT_pt_pregameStartTimerLength = Dvar_RegisterInt("NKRQRSLKMO", 5, 0, 60, 0, "Time in seconds before showing and starting the game start timer");
  DVARINT_pt_searchConnectAttempts = Dvar_RegisterInt("OLPNMRSNLM", 5, 0, 50, 0, "Connect timeout when joining another game through matchmaking, per attempt");
  DVARINT_pt_connectAttempts = Dvar_RegisterInt("NMONONKPK", 8, 0, 50, 0, "Connect timeout when joining another game/party through presence, per attempt. Keep this smaller than DTLS timeout (30s) since chances are the DTLS will timeout anyways in unsuccesful join cases, i.e. we're not receiving any packets back.");
  DVARINT_pt_connectTimeout = Dvar_RegisterInt("LNOKQOSNQN", 3000, 0, 60000, 0, "Connect timeout when joining another game/party, per attempt");
  DVARINT_pt_memberTimeout = Dvar_RegisterInt("MORSPLQMP", 25000, 0, 120000, 0, "Client timeout time in the general case");
  DVARINT_pt_backoutOnClientPresence = Dvar_RegisterInt("OKOKPKSTOQ", 2, 0, 2, 0, "Whether the host should backout the party on client presence. 0=fully disabled, 1=out of game only, 2=in-game also");
  DVARINT_pt_privateGameStartTimerLength = Dvar_RegisterInt("NMQNNPQPRS", 5, 0, 60, 0, "Time in seconds before a game starts once preload is finished (private games)");
  DVARINT_pt_privatePregameStartTimerLength = Dvar_RegisterInt("LTLOQSNSOT", 3, 0, 60, 0, "Time in seconds before showing and starting the game start timer (private games)");
  DVARBOOL_partytweak_kickoldhostsplitscreenclient = Dvar_RegisterBool("LOTLRKKPTS", 1, 0, "Killswitch for kicking the old host's splitscreen client during migration");
  DVARFLT_pt_migrationBandwidthBonusThreshold = Dvar_RegisterFloat("MRNPKTSLMN", 0.5, 0.0, 10.0, 0, "The required excess % upload bandwidth to get a bonus when scoring hosts.");
  DVARINT_pt_migrationBandwidthBonusPing = Dvar_RegisterInt("NKTLQSPOPQ", 25, 0, 500, 0, "The ping rewarded to the bonus bandwidth threshold when scoring hosts.");
  DVARBOOL_pt_useMigrationWeights = Dvar_RegisterBool("MSPSQSNRPO", 1, 0, "Killswitch to turn on or off the host selection by weights");
  DVARFLT_pt_migrationThreshold = Dvar_RegisterFloat("NPQSQOOKRR", 1.0, 0.0, 10000.0, 0, "Minimum amount which another client must be better than the current host to trigger a migration");
  DVARFLT_pt_logHostSelectionChance = Dvar_RegisterFloat("LLQRPQSTNM", 0.0, 0.0, 1.0, 0, "Sets the probability that we log our host selection results");
  DVARFLT_pt_migrationPingWeight = Dvar_RegisterFloat("MLKSLMKNNO", 10.0, 0.0, 10000.0, 0, "How important ping is when selecting a new host");
  DVARFLT_pt_migrationPingBad = Dvar_RegisterFloat("MOTMNRSPOT", 200.0, 0.0, 1000.0, 0, "How important ping is when selecting a new host");
  DVARFLT_pt_migrationUploadWeight = Dvar_RegisterFloat("NSMRKOLRNN", 10.0, 0.0, 10000.0, 0, "How important upload rate is when selecting a new host");
  DVARFLT_pt_migrationUploadBad = Dvar_RegisterFloat("NTKMQMQOPS", 0.60000002, 0.0, 1.0, 0, "How important upload rate is when selecting a new host");
  DVARFLT_pt_migrationQuitsWeight = Dvar_RegisterFloat("MTROKOMNSO", 10.0, 0.0, 10000.0, 0, "How important migrateable quits are when selecting a new host");
  DVARFLT_pt_migrationQuitsBad = Dvar_RegisterFloat("NQKOOORKKN", 0.40000001, 0.0, 1.0, 0, "How important migrateable quits are when selecting a new host");
  DVARFLT_pt_migrationCPUWeight = Dvar_RegisterFloat("NNTQKRROOK", 0.0, 0.0, 10000.0, 0, "How important CPU speed is when selecting a new host");
  DVARFLT_pt_migrationRAMPenalty = Dvar_RegisterFloat("NOQLOKRPSN", -1.0, -100.0, 100.0, 0, "Penalty applied if PC does not have enough RAM");
  DVARFLT_pt_migrationWifiPenalty = Dvar_RegisterFloat("NKTONKRNLQ", 0.89999998, 0.0, 1.0, 0, "How important Wifi is when selecting a new host");
  DVARFLT_pt_migrationNotInstalledWeight = Dvar_RegisterFloat("LPRRKQMKTP", 5.0, 0.0, 10000.0, 0, "How important not being done installing is when selecting a new host");
  DVARINT_pt_AliensReadyUpPrivateInUse = Dvar_RegisterInt("MTOLMTQNN", 0, 0, 1, 0, "Do we use the Aliens Ready Up feature in private lobbies?");
  DVARINT_pt_AliensReadyUpPublicInUse = Dvar_RegisterInt("RTMSSLROP", 0, 0, 1, 0, "Do we use the Aliens Ready Up feature in public lobbies?");
  DVARINT_pt_AliensReadyUpPublicStartTimerLength = Dvar_RegisterInt("NSTTTKLKPO", 5, 0, 0x7FFFFFFF, 0, "Aliens Ready Up start timer length in seconds");
  DVARINT_party_printPartyStatusFrequency = Dvar_RegisterInt("LPQSQNQKPL", 1500000, 1000, 0x7FFFFFFF, 0, "Time (in ms) to print out party status updates");
  DVARINT_pt_htbtmaxperframe = Dvar_RegisterInt("MQKLPTOKPO", 18, 1, 200, 0, "Max number of heartbeats/state updates that can take place in a frame");
  DVARBOOL_party_updateAssignedTeamInLocalAndSystemLink = Dvar_RegisterBool("MLQRONPPSK", 1, 0, "This allows to reassign the team when in a private or local game. Fixes the team chat assignment");
  DVARBOOL_party_teamsVisible = Dvar_RegisterBool("MPKKNQPOQO", 0, 0, "teams are visible in UI");
  DVARINT_party_timer = Dvar_RegisterInt("NLRMQTTNON", 0, 0, 99999, 0, "Time until game begins in seconds, for UI display");
  DVARINT_party_minVoteTime = Dvar_RegisterInt("LQNTPTNTON", 30, 0, 2147483, 0, "Minimum time (in seconds) for a lobby to vote");
  DVARBOOL_party_debug = Dvar_RegisterBool("NSNSSOTMOL", 0, 0, "Debug party functionality");
  DVARBOOL_party_startHosting = Dvar_RegisterBool("MPNTPOROMS", 0, 0, "Debug being the host by launching a game as a host without waiting for more players");
  DVARBOOL_party_forceMeAsHost = Dvar_RegisterBool("LOKRTRMNTP", 0, 0, "Make this machine win all lobby migration elections");
  DVARBOOL_party_am_I_host = Dvar_RegisterBool("MKPKPMNLPN", 0, 0x2000u, "True if we are the host of the party");
  DVARBOOL_party_editingsettings = Dvar_RegisterBool("NNMQRNNNLR", 0, 0, "True if the host is editing game settings");
  DVARSTR_party_hostname = Dvar_RegisterString("LROLLRPRPT", (const char *)&queryFormat.fmt + 3, 0x2000u, "The name of the host (player or server)");
  DVARBOOL_party_sendFullMemberInfoWhenServerRunning = Dvar_RegisterBool("NTLONPSTSN", 0, 0, "Send full party state member info even if server is running");
  DVARSTR_party_gamesize = Dvar_RegisterString("MPNLQMOSNT", (const char *)&queryFormat.fmt + 3, 0x2000u, "Current maximum game size");
  DVARSTR_party_mapvote_entrya_mapname = Dvar_RegisterString("MTPKOMSKQQ", (const char *)&queryFormat.fmt + 3, 0x2000u, "Primary map vote entry name");
  DVARSTR_party_mapvote_entryb_mapname = Dvar_RegisterString("MOSMTTQPPN", (const char *)&queryFormat.fmt + 3, 0x2000u, "Alternate map vote entry name");
  DVARSTR_party_mapvote_entryc_mapname = Dvar_RegisterString("MQLNKOMPMS", (const char *)&queryFormat.fmt + 3, 0x2000u, "Random map vote entry name");
  DVARSTR_party_kickplayerquestion = Dvar_RegisterString("NRSMRTQN", (const char *)&queryFormat.fmt + 3, 0x2000u, "String to store the question about kicking the selected player");
  DVARSTR_party_lobbyPlayerCount = Dvar_RegisterString("LNMMMOOLQQ", (const char *)&queryFormat.fmt + 3, 0x2000u, "Number of players currently in the party/lobby in lobby format (x/y players)");
  DVARSTR_party_partyPlayerCount = Dvar_RegisterString("OKNMMNTQOM", (const char *)&queryFormat.fmt + 3, 0x2000u, "Number of players currently in the party/lobby in party format (x players in y's party)");
  DVARINT_party_teamCount = Dvar_RegisterInt("MOPMSORRMM", 2, 0, 200, 0, "Number of teams players should be grouped as. 0 = FFA");
  DVARINT_party_matchedPlayerCount = Dvar_RegisterInt("TKQPORQNK", 4, 0, 200, 0, "Number of matched players before revealing their true names");
  DVARBOOL_party_checkForHostInUsingTeams = Dvar_RegisterBool("LPKSMNTNTK", 0, 0, "Killswitch to go back to the old behavior in Party_UsingTeams");
  DVARINT_party_maxTeamDiff = Dvar_RegisterInt("NNMQNKPLTQ", 1, -1, 100, 0, "Maximum difference allowed between teams before starting a match");
  DVARINT_party_minLobbyTime = Dvar_RegisterInt("LSKLSLTLQT", 60, 0, 2147483, 0, "Minimum time (in seconds) for a lobby to be open before auto starting a match");
  DVARBOOL_party_playervisible = Dvar_RegisterBool("OLNTOPTTNR", 0, 0x2000u, "Whether selected player in party is showing true info or not.  Only valid when used with party feeders.");
  DVARBOOL_party_IsLocalClientSelected = Dvar_RegisterBool("MTQTOKNLMR", 0, 0x2000u, "True if selected player is a local client.  Only valid when used with party feeders.");
  DVARINT_party_selectedIndex = Dvar_RegisterInt("LKOPPSLNNT", 0, 0, 200, 0x2000u, "Current selected player index in the feeder.");
  DVARINT_party_selectedIndexChangedTime = Dvar_RegisterInt("NRNRSQOLNQ", 0, 0, 0x7FFFFFFF, 0x2000u, "Time stamp in milliseconds when the selected index last changed.");
  DVARINT_party_firstSubpartyIndex = Dvar_RegisterInt("OMMONRSOM", 0, 0, 200, 0, "Determines sort order and coloring of parties in lobbies.  Randomly set by code.  Dvar provided for debugging.");
  DVARINT_party_maxPrivatePartyPlayers = Dvar_RegisterInt("ROMTTTNL", 20, 0, 200, 0, "Max number of players allowed in a private party.");
  DVARBOOL_party_membersMissingMapPack = Dvar_RegisterBool("LTRPQSNOTO", 0, 0x2000u, "Whether any party member is missing one of the enabled map packs. Only valid after running partyUpdateMissingMapPackDvar");
  DVARBOOL_party_followPartyHostOutOfGames = Dvar_RegisterBool("NKMRNQMONN", 1, 0, "Whether we should follow our party host out of a game in progress.");
  DVARINT_party_inactiveHeartbeatPeriod = Dvar_RegisterInt("MQQRORRLTK", 10000, 1000, 1800000, 0, "How often to send inactive party keep alive packets in milliseconds.");
  DVARBOOL_party_hostmigration = Dvar_RegisterBool("MKKNPOPOQO", 1, 0, "Whether to use host migration in lobbies");
  DVARBOOL_party_simulateManySearchResults = Dvar_RegisterBool("LKTPKOMLST", 0, 0, "Sends extra, fake search results when party_allMembersDoQoS is enabled.");
  DVARINT_party_simulateInAndOutOfLobbies = Dvar_RegisterInt("LNTLSRRMOP", 0, 0, 10000, 0, "Simulate a host going in and out of lobbies as fast as it can. 0 to disable, any other value to set the time before actions");
  DVARBOOL_partymigrate_pingtest_active = Dvar_RegisterBool("LSSRORTPLQ", 1, 0, "Whether to do a ping test when lobby migrating");
  DVARINT_partymigrate_pingtest_retry = Dvar_RegisterInt("MRONPMNKQO", 200, 0, 0x7FFFFFFF, 0, "Time between ping tests when migrating lobby");
  DVARINT_partymigrate_pingtest_timeout = Dvar_RegisterInt("NTSPNTQPRL", 1000, 0, 0x7FFFFFFF, 0, "Time to give up on ping tests when migrating lobby");
  DVARINT_partymigrate_selectiontime = Dvar_RegisterInt("LSPKTNTQRQ", 2200, 0, 0x7FFFFFFF, 0, "Time before requiring a host selection when migrating lobby");
  DVARINT_partymigrate_pingtest_filterThreshold = Dvar_RegisterInt("NONSPLRQTL", 50, 0, 1000, 0, "Acceptable ping difference from best ping host for host selection (ms)");
  DVARBOOL_partymigrate_pingtest_debug = Dvar_RegisterBool("MRRPQSKNSL", 1, 0, "Whether to print ping test results (spams when migrations occur)");
  DVARFLT_partymigrate_cpuBonusThreshold = Dvar_RegisterFloat("SQOQOLLST", 0.5, -3.4028235e38, 3.4028235e38, 0, "The required excess %CPU speed to get a bonus when scoring hosts.");
  DVARINT_partymigrate_cpuBonusPing = Dvar_RegisterInt("LNPONQTLPK", 25, -2147483647, 0x7FFFFFFF, 0, "The ping rewarded to a CPU meeting the bonus threshold when scoring hosts.");
  DVARINT_partymigrate_logResults = Dvar_RegisterInt("LSLOPQPLLL", 1, 0, 3, 0, "Instrumentation - Whether to log the best host calculation results. 0 is disabled, 1 for games, 2 for parties, 3 for both.");
  DVARINT_partymigrate_broadcast_interval = Dvar_RegisterInt("LPNQSMOPQM", 200, 0, 0x7FFFFFFF, 0, "Time between telling people who the new host is when migrating lobby");
  DVARINT_partymigrate_timeout = Dvar_RegisterInt("NQTTRSLOOQ", 8000, 1000, 30000, 0, "Time before giving up on lobby migration if we hear nothing");
  DVARINT_partymigrate_timeoutmax = Dvar_RegisterInt("MKTMNMONOM", 15000, 1000, 30000, 0, "Time before giving up on lobby migration, even if the arbitrator is telling us to keep waiting");
  DVARINT_partymigrate_makeHostTimeout = Dvar_RegisterInt("OTMRKSLNQ", 2000, 1000, 30000, 0, "Time before giving up on makeHost requests");
  DVARINT_partymigrate_makePrivateDSHostTimeout = Dvar_RegisterInt("NMSKTMOTTS", 60000, 1000, 120000, 0, "Time before giving up on makeHost request when migrating after a private DS match");
  DVARINT_partymigrate_uploadtest_minThreshold = Dvar_RegisterInt("MSRNPNLPMQ", 5000, 0, 2000000, 0, "Minimum meaningful upload bandwidth delta for host selection (bps)");
  DVARBOOL_partymigrate_preferSameHost = Dvar_RegisterBool("MRRTQSKMKP", 1, 0, "When possible, prefer keeping the same host on migrations");
  DVARBOOL_partymigrate_preferConsoleOverPC = Dvar_RegisterBool("NPSNRSKPOT", 1, 0, "When possible choose a console as a host over a PC (for security)");
  DVARBOOL_party_rejectLobbyJoinRequests = Dvar_RegisterBool("MLQKNQQKLN", 0, 0, "Whether we should accept incoming join requests as the host of a lobby");
  DVARBOOL_party_rejectLobbyMemberJoin = Dvar_RegisterBool("QTTQOMKPT", 0, 0, "Whether we should accept incoming members joining after a request");
  DVARBOOL_party_debugClientIgnoreHostPresence = Dvar_RegisterBool("LKOLNQRPOT", 0, 0, "Whether a party client should ignore his host's presence for testing");
  DVARBOOL_party_aliensUseDedicatedServer = Dvar_RegisterBool("RRTPOQNNR", 0, 0, "Whether the aliens mode should attempt to grab a dedicated server or not.");
  DVARINT_partychat_check_sent_data_freq_ms = Dvar_RegisterInt("MKMTQOMPSQ", 500, 0, 0x7FFFFFFF, 0, "Time between the host sending party data to clients");
  DVARINT_partychat_check_team_creation_freq_ms = Dvar_RegisterInt("LRRQPKLSPK", 3000, 0, 0x7FFFFFFF, 0, "Time between the host checking if team chat creation is needed");
  DVARINT_partychat_assign_timeout_ms = Dvar_RegisterInt("SNSMOORLS", 20000, 0, 0x7FFFFFFF, 0, "Time between the host assigning a chat creation to client and them timing out");
  DVARINT_partychat_attempt_retry_join_thottle = Dvar_RegisterInt("NLKTQONRQS", 1000, 0, 0x7FFFFFFF, 0, "The multiplier for retrying to join a chat in case a join failed");
  DVARINT_partychat_max_retry_join_attempts = Dvar_RegisterInt("MRKRSSONLR", 3, 0, 0x7FFFFFFF, 0, "The max numbner of attempts to retry joining a chat");
  DVARINT_dlc_intended_map_flags = Dvar_RegisterInt("NLRMLRKNLP", 0, 0, 0x7FFFFFFF, 0, "Intended map pack flags [DEBUG]");
  DVARBOOL_party_dumpInfoImmediately = Dvar_RegisterBool("TTTPMSKOM", 0, 0, "If true will dump the party info on every call, otherwise will dump at end of frame if requested at least once");
  DVARINT_party_profile_frame_delay = Dvar_RegisterInt("MMKTNNQRPL", 2000, 0, 0x7FFFFFFF, 0, "Time (in ms) that party profile will batch up frame profiles.");
  DVARBOOL_party_profile_enabled = Dvar_RegisterBool("MLQRQMSQNN", 0, 0, "Profile system enable/disable");
  DVARINT_party_profile_print_output = Dvar_RegisterInt("POQTNSSSP", 0, 0, 0x7FFFFFFF, 0, "Profile print output settings (uses bitflags to enable/disable types)");
  DVARINT_party_profile_send_output = Dvar_RegisterInt("LSRQKTSKOS", 0, 0, 0x7FFFFFFF, 0, "Profile dlog output settings (uses bitflags to enable/disable types)");
  DVARINT_party_client_task_timeout = Dvar_RegisterInt("LRPQNKTLLL", 10000, 1, 0x7FFFFFFF, 0, "Time in milliseconds before considering a client task timed out.");
  DVARINT_party_client_task_max_retries = Dvar_RegisterInt("MMSMNNTQRR", 0x7FFFFFFF, 1, 0x7FFFFFFF, 0, "Failsafe switch to limit the number of retries before giving up on a client task.");
  DVARINT_party_client_hostresolver_retry_period = Dvar_RegisterInt("NTLPPQLOLN", 20000, 1000, 0x7FFFFFFF, 0, "Time in milliseconds before retrying on a previously attempted host.");
  DVARINT_party_client_disconnect_dlog_mode = Dvar_RegisterInt("NRLKKKLQQP", 1, 0, 2, 0, "Whether to send telemetry via dlog on disconnect");
  DVARINT_party_join_failure_dlog_mode = Dvar_RegisterInt("NMTLKMTKRK", 1, 0, 2, 0, "Whether to send telemetry via dlog on join failure");
  DVARINT_party_joinSoundDelay = Dvar_RegisterInt("MQSMPSNLOO", 1000, 0, 0x7FFFFFFF, 0, "Minimum amount of time before we can play another join sound");
  DVARINT_party_leaveSoundDelay = Dvar_RegisterInt("SKPNQTRRR", 1000, 0, 0x7FFFFFFF, 0, "Minimum amount of time before we can play another leave sound");
  DVARBOOL_party_unregister_matchmaker_player_on_clear = Dvar_RegisterBool("OTKNMOLTO", 0, 0, "Whether to unregister player from matchmaker on clear or just when host removes the player");
  DVARBOOL_party_store_gamertag_suffix = Dvar_RegisterBool("OMOPTSMLSM", 1, 0, "Whether to store the gamertag suffix in the party member info and replicate to everybody");
  DVARINT_party_debugJoinLatency = Dvar_RegisterInt("MLKKKMTNSN", 250, 0, 5000, 0, "Party Debug: Introduces fake latency in the joining process (in ms)");
  DVARINT_party_debugClientFailJoining = Dvar_RegisterInt("LKKQKTOSKS", 0, 0, 2, 0, "Party Debug: Party members always fail to join. 0 disabled, 1 always enabled, 2 lobby merging only");
  DVARINT_party_debugClientFailCommit = Dvar_RegisterInt("SRNSPMSN", 0, 0, 2, 0, "Party Debug: Party members always fail to commit. 0 disabled, 1 always enabled, 2 lobby merging only");
  DVARINT_party_debugHostMembersFailing = Dvar_RegisterInt("NNLPLSMMQO", 0, 0, 2, 0, "Party Debug: Causes the host to think someone failed. 0 disabled, 1 hard fail, 2 timeout");
  Dvar_EndPermanentRegistration();
}

/*
==============
Party_RegisterPlayer
==============
*/
void Party_RegisterPlayer(PartyData *party, const int localControllerIndex, const int clientNum, const XNADDR *xnaddr)
{
  __int64 v4; 
  __int64 v8; 
  unsigned __int8 status; 
  __int64 v10; 
  unsigned __int64 m_id; 
  bool v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int outMemberIndex; 

  v4 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5513, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, 200) )
      __debugbreak();
  }
  v8 = (unsigned int)v4;
  if ( (PartyData *)((char *)party + v8 * 504) == (PartyData *)-2192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  status = party->partyMembers[v8].status;
  if ( (status & 0xFC) == 0 && status != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5514, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", "%s\n\tPlayers should be registered only upon member data being available", "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(v15) = 200;
    LODWORD(v13) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5515, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
    LODWORD(v16) = 200;
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  v10 = v4;
  m_id = party->partyMembers[v4].playerUID.m_id;
  if ( (!Party_FindMemberByXUID_Internal(party, (const XUID)m_id, &outMemberIndex) || outMemberIndex != (_DWORD)v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5518, ASSERT_TYPE_ASSERT, "(Party_FindMemberByXUID_Internal( party, memberXuid, &foundMember ) && (foundMember == clientNum))", (const char *)&queryFormat, "Party_FindMemberByXUID_Internal( party, memberXuid, &foundMember ) && (foundMember == clientNum)") )
    __debugbreak();
  if ( OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) && party->partyMembers[v10].status != 6 )
  {
    if ( (unsigned int)v4 >= 0xC8 )
    {
      LODWORD(v15) = 200;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 465, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v12 = Party_IsMemberRegistered(party, v4) && NetConnection::GetNetId(&party->partyMembers[v8].connection) != NS_CLIENT1;
    OnlineMatchmakerOmniscient::AddPlayerFromLocal(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)m_id, xnaddr, localControllerIndex, v12);
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3881, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->partyMembers[v10].voiceRegistered )
  {
    Voice_RegisterRemotePlayer(party, localControllerIndex, v4);
    PeerMesh_ClientConnected(party, v4);
  }
  Party_TrackMemberDumpInfo(v4);
  Party_DumpInfo(party, "Party_RegisterPlayer");
}

/*
==============
Party_RegisterPlayerJip
==============
*/
void Party_RegisterPlayerJip(PartyData *party, const int localControllerIndex, const int clientNum, const BG_SynchronizedPlayerInfo *playerInfo)
{
  __int64 v5; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *v11; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  PartyData *GameParty; 
  const char *v15; 
  __int64 v16; 
  __int64 v17; 
  XUID playerXuid[2]; 
  __int64 v19; 
  int outMemberIndex[2]; 

  v19 = -2i64;
  v5 = (unsigned int)clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5617, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v16) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5618, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( party->partyMembers ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( party->partyMembers )\n\t%i not in [0, %i)", v16, 200) )
      __debugbreak();
  }
  if ( party->areWeHost )
  {
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3924, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    if ( party->areWeHost && party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5619, ASSERT_TYPE_ASSERT, "(!Party_AreWeHost( party ))", "%s\n\tHosts shouldn't call this because they could be overwriting members that were set during the join process.", "!Party_AreWeHost( party )") )
      __debugbreak();
  }
  if ( !playerInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5620, ASSERT_TYPE_ASSERT, "(playerInfo != nullptr)", (const char *)&queryFormat, "playerInfo != nullptr") )
    __debugbreak();
  Party_ClearMember(party, v5, NET_CLOSE_DTLS);
  if ( Party_FindMemberByXUID_Internal(party, playerInfo->xuid, outMemberIndex) && outMemberIndex[0] != (_DWORD)v5 )
    Party_ClearMember(party, outMemberIndex[0], NET_CLOSE_SOFT);
  party->partyMembers[(int)v5].info.availableMapPackFlags |= 2u;
  party->partyMembers[(int)v5].status = 5;
  party->partyMembers[(int)v5].natType = playerInfo->natType;
  XUID::operator=(&party->partyMembers[(int)v5].playerUID, &playerInfo->xuid);
  party->partyMembers[(int)v5].isGuestAccount = playerInfo->isGuestAccount;
  party->partyMembers[(int)v5].info.privatePartyId = playerInfo->partyId;
  party->partyMembers[(int)v5].info.platformId = playerInfo->platformId;
  party->partyMembers[(int)v5].info.isHeadless = playerInfo->isHeadless;
  party->partyMembers[(int)v5].info.platform[0] = playerInfo->clientPlatform[0];
  if ( !XUID::IsValid(&party->partyMembers[(int)v5].playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5650, ASSERT_TYPE_ASSERT, "(member->playerUID.IsValid())", (const char *)&queryFormat, "member->playerUID.IsValid()") )
    __debugbreak();
  if ( Party_FindMemberByXUID_Internal(party, party->partyMembers[(int)v5].playerUID, outMemberIndex) && outMemberIndex[0] != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5651, ASSERT_TYPE_ASSERT, "(!Party_FindMemberByXUID_Internal( party, member->playerUID, &foundMember ) || (foundMember == clientNum))", (const char *)&queryFormat, "!Party_FindMemberByXUID_Internal( party, member->playerUID, &foundMember ) || (foundMember == clientNum)") )
    __debugbreak();
  v8 = XUID::ToUint64(&party->partyMembers[(int)v5].playerUID);
  v9 = (((unsigned int)v8 ^ HIDWORD(v8)) * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64;
  v10 = ((unsigned int)v8 ^ HIDWORD(v8)) - 389 * ((v9 + (((unsigned __int64)((unsigned int)v8 ^ HIDWORD(v8)) - v9) >> 1)) >> 8);
  if ( v10 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v11 = &party->memberMap.m_buckets.m_data[v10];
  mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_listHead.m_sentinel.mp_next;
  if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)v11->m_listHead.m_sentinel.mp_next == v11 )
  {
LABEL_38:
    playerXuid[0].m_id = v8;
    LODWORD(playerXuid[1].m_id) = 0;
    if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
    {
LABEL_44:
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
      mp_next->mp_next = NULL;
      *(_OWORD *)&mp_next[1].mp_next = *(_OWORD *)&playerXuid[0].m_id;
      mp_next->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_listHead.m_sentinel.mp_next;
      v11->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)mp_next;
    }
    else
    {
      while ( 1 )
      {
        if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8 )
          break;
        mp_next = mp_next->mp_next;
        if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
          goto LABEL_44;
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
      if ( mp_next[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v8 )
        break;
      mp_next = mp_next->mp_next;
      if ( mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11 )
      {
        mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v11->m_listHead.m_sentinel.mp_next;
        goto LABEL_38;
      }
    }
  }
  LODWORD(mp_next[2].mp_next) = v5;
  GameParty = Live_GetGameParty();
  if ( !GameParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2402, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v5 >= 0xC8 )
  {
    LODWORD(v17) = 200;
    LODWORD(v16) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2403, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( GameParty->partyId == GAME_LOBBY_ID && g_partyData.inParty && !g_partyData.party_systemActive )
  {
    if ( !XUID::IsValid(&GameParty->partyMembers[v5].playerUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2412, ASSERT_TYPE_ASSERT, "(member->playerUID.IsValid())", "%s\n\tChecking party on unknown member", "member->playerUID.IsValid()") )
      __debugbreak();
    bdSecurityID::bdSecurityID((bdSecurityID *)outMemberIndex);
    if ( g_partyData.inParty )
      *(bdSecurityID *)outMemberIndex = *XSESSION_INFO::GetSecurityId(&g_partyData.session->dyn.sessionInfo);
    else
      *(bdSecurityID *)outMemberIndex = g_noPrivatePartyId;
    playerXuid[0] = GameParty->partyMembers[v5].playerUID;
    if ( bdSecurityID::operator==((bdSecurityID *)outMemberIndex, &GameParty->partyMembers[v5].info.privatePartyId) )
    {
      Party_ReviveLostPrivatePartyMember(playerXuid[0]);
    }
    else
    {
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_party_reduce_print_spam, "online_party_reduce_print_spam") )
      {
        v15 = XUID::ToDevString(playerXuid);
        Com_Printf(25, "[%s] Party - CheckUpdatedPartyMemberPartyId - Private party for lobby client %i changed and does not match ours, checking if we should drop from private party (%s).\n", GameParty->partyName, (unsigned int)v5, v15);
      }
      Party_LostPrivatePartyPlayer(localControllerIndex, playerXuid[0], 1, 1);
    }
    bdSecurityID::~bdSecurityID((bdSecurityID *)outMemberIndex);
  }
  PartyClient_RegisterPlayer(party, localControllerIndex, v5, &playerInfo->xnaddr, (const netsrc_t)playerInfo->localNetId);
}

/*
==============
Party_RegisterVoice
==============
*/
void Party_RegisterVoice(PartyData *party, const int clientNum)
{
  __int64 v2; 
  __int64 v4; 
  PartyMember *v5; 
  unsigned __int8 status; 
  __int64 v7; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3866, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, 200) )
      __debugbreak();
  }
  v4 = (unsigned int)v2;
  v5 = &party->partyMembers[v4];
  if ( (PartyData *)((char *)party + v4 * 504) == (PartyData *)-2192i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
    __debugbreak();
  status = v5->status;
  if ( (status & 0xFC) == 0 && status != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3867, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  party->partyMembers[v2].voiceRegistered = 1;
}

/*
==============
Party_ResetTweakDvars
==============
*/
void Party_ResetTweakDvars(void)
{
  SvGameModeApplication *ActiveServerApplication; 

  Dvar_Reset(DVARBOOL_pt_allMembersDoQoS, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_allMembersDoQoSTimeout, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_reservedAnonymousSlotTime, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_reservedJoiningSlotTime, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_reservedCommittedSlotTime, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_stillConnectingWaitTime, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_gameStartTimerLength, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_pregameStartTimerLength, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_searchConnectAttempts, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_connectAttempts, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_connectTimeout, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_memberTimeout, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_backoutOnClientPresence, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_privateGameStartTimerLength, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_privatePregameStartTimerLength, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARBOOL_partytweak_kickoldhostsplitscreenclient, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationBandwidthBonusThreshold, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_migrationBandwidthBonusPing, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARBOOL_pt_useMigrationWeights, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationThreshold, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_logHostSelectionChance, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationPingWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationPingBad, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationUploadWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationUploadBad, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationQuitsWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationQuitsBad, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationCPUWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationRAMPenalty, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationWifiPenalty, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARFLT_pt_migrationNotInstalledWeight, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_AliensReadyUpPrivateInUse, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_AliensReadyUpPublicInUse, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_AliensReadyUpPublicStartTimerLength, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_party_printPartyStatusFrequency, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARINT_pt_htbtmaxperframe, DVAR_SOURCE_INTERNAL);
  Dvar_Reset(DVARBOOL_party_updateAssignedTeamInLocalAndSystemLink, DVAR_SOURCE_INTERNAL);
  PartyMigrate_ResetTweakDvars();
  if ( SvGameModeApplication::HasActiveServerApplication() )
  {
    ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
    ActiveServerApplication->ResetDvars(ActiveServerApplication);
  }
}

/*
==============
Party_ReviveLostPrivatePartyMember
==============
*/
void Party_ReviveLostPrivatePartyMember(const XUID playerXuid)
{
  __int64 v1; 
  const char *v2; 
  __int64 v3; 
  __int64 v4; 
  XUID v5; 
  int outMemberIndex; 
  XUID player; 

  v5.m_id = playerXuid.m_id;
  if ( !XUID::IsValid(&v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2376, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", (const char *)&queryFormat, "playerXuid.IsValid()") )
    __debugbreak();
  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2377, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( g_partyData.party_systemActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2378, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", "%s\n\tShouldn't be deriving party member status while the party is active", "!Party_IsRunning( &g_partyData )") )
    __debugbreak();
  player.m_id = v5.m_id;
  if ( !XUID::IsNull(&player) && Party_FindMemberByXUID_Internal(&g_partyData, player, &outMemberIndex) && (v1 = outMemberIndex, (g_partyData.partyMembers[outMemberIndex].status & 0xFD) != 0) && outMemberIndex >= 0 )
  {
    if ( (unsigned int)outMemberIndex >= 0xC8 )
    {
      LODWORD(v3) = outMemberIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2387, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v3, 200) )
        __debugbreak();
    }
    if ( Party_IsMemberAway(&g_partyData.partyMembers[v1]) )
    {
      if ( Live_XUIDIsLocalPlayer(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2392, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( playerXuid ))", "%s\n\tWe should not have set ourself away!", "!Live_XUIDIsLocalPlayer( playerXuid )") )
        __debugbreak();
      if ( (unsigned int)v1 >= 0xC8 )
      {
        LODWORD(v4) = 200;
        LODWORD(v3) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      Com_Printf(25, "[%s] Party - Party_ReviveLostPrivatePartyMember - Setting away private party member at index %i (%s) to PRESENT status.\n", g_partyData.partyName, (unsigned int)v1, g_partyData.partyMembers[v1].info.gamertag);
      g_partyData.partyMembers[v1].status = 5;
      g_partyData.partyMembers[v1].lastPacketTime = Sys_Milliseconds();
    }
  }
  else
  {
    v2 = XUID::ToDevString(&v5);
    Com_Printf(25, "[%s] Party - Party_ReviveLostPrivatePartyMember - Trying to revive someone who has been removed already (%s). This may happen if they sent a disconnect but the server doesn't know yet.\n", g_partyData.partyName, v2);
  }
}

/*
==============
Party_SanityCheckPartyMembersInLobby
==============
*/
void Party_SanityCheckPartyMembersInLobby()
{
  PartyData *PartyData; 
  unsigned int v1; 
  char *gamertag; 
  XUID *p_playerUID; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  int outMemberIndex; 
  XUID player; 

  if ( g_partyData.inParty )
  {
    if ( Lobby_IsInLobby() )
    {
      PartyData = Lobby_GetPartyData();
      if ( Session_IsValid(PartyData->session) )
      {
        v1 = 0;
        gamertag = g_partyData.partyMembers[0].info.gamertag;
        p_playerUID = &g_partyData.partyMembers[0].playerUID;
        do
        {
          if ( Party_IsMemberPresent(&g_partyData, v1) && BYTE2(p_playerUID[-1].m_id) != 6 )
          {
            if ( v1 >= 0xC8 )
            {
              LODWORD(v7) = 200;
              LODWORD(v6) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v7) )
                __debugbreak();
            }
            player.m_id = p_playerUID->m_id;
            if ( Party_FindMemberByXUID_Internal(PartyData, player, &outMemberIndex) && PartyData->partyMembers[outMemberIndex].status >= 5u && outMemberIndex >= 0 )
            {
              if ( Party_IsMemberIndexAway(PartyData, outMemberIndex) )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5764, ASSERT_TYPE_ASSERT, "(!Party_IsMemberIndexAway( lobbyParty, lobbyClientNum ))", (const char *)&queryFormat, "!Party_IsMemberIndexAway( lobbyParty, lobbyClientNum )") )
                  __debugbreak();
              }
            }
            else if ( Party_FindMemberByXUID_AllowNotPresent(PartyData, player) >= 0 )
            {
              if ( !Lobby_IsInRunningLobby() )
              {
                v5 = XUID::ToDevString(&player);
                if ( v1 >= 0xC8 )
                {
                  LODWORD(v7) = 200;
                  LODWORD(v6) = v1;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v7) )
                    __debugbreak();
                }
                Com_PrintWarning(14, "[%s] Party member at slot %i (%s - '%s') is not fully present in our lobby!\n", PartyData->partyName, v1, gamertag, v5);
              }
            }
            else
            {
              v4 = XUID::ToDevString(&player);
              if ( v1 >= 0xC8 )
              {
                LODWORD(v7) = 200;
                LODWORD(v6) = v1;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1396, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v6, v7) )
                  __debugbreak();
              }
              Com_PrintWarning(14, "[%s] Party member at slot %i (%s - '%s') is not in our lobby!\n", PartyData->partyName, v1, gamertag, v4);
            }
          }
          ++v1;
          gamertag += 504;
          p_playerUID += 63;
        }
        while ( (int)v1 < 200 );
      }
    }
  }
}

/*
==============
Party_SaveGameLobbyId
==============
*/
void Party_SaveGameLobbyId(PartyData *party)
{
  if ( party )
  {
    party->m_prevLobbyId = party->m_lobbyId;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8410, ASSERT_TYPE_ASSERT, "(party != nullptr)", (const char *)&queryFormat, "party != nullptr") )
      __debugbreak();
    MEMORY[0x4CC98] = MEMORY[0x4CC90];
  }
}

/*
==============
Party_SendKeepAlives
==============
*/
void Party_SendKeepAlives(PartyData *party, const LocalClientNum_t localClientNum)
{
  int v2; 
  int maxGameSlots; 
  unsigned int v6; 
  NetConnection *p_connection; 
  const char *v8; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const char *v10; 
  char *fmt; 
  __int64 v12; 
  __int64 v13; 

  v2 = 0;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3501, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  maxGameSlots = party->maxGameSlots;
  v6 = 0;
  if ( maxGameSlots > 0 )
  {
    p_connection = &party->partyMembers[0].connection;
    do
    {
      if ( v6 >= 0xC8 )
      {
        LODWORD(v13) = 200;
        LODWORD(v12) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1451, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( NetConnection::IsOpened(p_connection) && !NetConnection::IsLocal(p_connection) )
      {
        if ( Party_AreWeHost(party) )
        {
          v8 = j_va("%ikeepalive", (unsigned int)party->partyId);
          NetConnection::SendUnreliable(p_connection, v8);
        }
        else
        {
          LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum(localClientNum);
          v10 = j_va("%ikeepalive", (unsigned int)party->partyId);
          NetConnection::SendP2P(p_connection, LocalNetIDFromLocalClientNum, v10);
        }
        ++v2;
      }
      ++v6;
      p_connection = (NetConnection *)((char *)p_connection + 504);
    }
    while ( (int)v6 < maxGameSlots );
  }
  party->inactiveKeepaliveTime = Sys_Milliseconds();
  if ( v2 > 0 )
  {
    LODWORD(fmt) = Sys_Milliseconds();
    Com_Printf(25, "[%s] Sent party keepalives to %i connections at time %i\n", party->partyName, (unsigned int)v2, fmt);
  }
}

/*
==============
Party_SetAliensDifficulty
==============
*/
void Party_SetAliensDifficulty(PartyData *party, int difficulty)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7835, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)difficulty > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7836, ASSERT_TYPE_ASSERT, "(difficulty >= 0 && difficulty < 256)", (const char *)&queryFormat, "difficulty >= 0 && difficulty < 256") )
    __debugbreak();
  if ( party->areWeHost && (_BYTE)difficulty != party->aliensDifficulty )
    PartyHost_GamestateChanged(party);
  party->aliensDifficulty = difficulty;
}

/*
==============
Party_SetCodcastingEnabled
==============
*/
void Party_SetCodcastingEnabled(PartyData *party, int codcastingEnabled)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7748, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && codcastingEnabled != party->codcastingEnabled )
    PartyHost_GamestateChanged(party);
  party->codcastingEnabled = codcastingEnabled;
}

/*
==============
Party_SetCrossplayEnabled
==============
*/
void Party_SetCrossplayEnabled(PartyData *party, const bool value)
{
  party->isCrossplayEnabled = value;
}

/*
==============
Party_SetDesiredTeamSelection
==============
*/
void Party_SetDesiredTeamSelection(PartyData *party, const int localControllerIndex, int team)
{
  LocalClientNum_t ClientFromController; 

  if ( (!team || (unsigned int)(team - 201) <= 1 && MLG_IsCoDCasterEnabled() || (unsigned int)(team - 1) <= 0xC9 && Live_IsLobbyTeamSelectEnabled()) && CL_Mgr_IsControllerActive(localControllerIndex) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
    if ( ClientFromController != LOCAL_CLIENT_INVALID )
      party->desiredTeamSelection[ClientFromController] = team;
  }
}

/*
==============
Party_SetDisbandAfterRound
==============
*/
void Party_SetDisbandAfterRound(PartyData *party)
{
  if ( party )
  {
    party->m_disbandAfterRound = 1;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6864, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
  {
    __debugbreak();
  }
}

/*
==============
Party_SetDraftLoadoutTimer
==============
*/
void Party_SetDraftLoadoutTimer(PartyData *party, int timer)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7801, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && timer != party->draftLoadoutTimer )
    PartyHost_GamestateChanged(party);
  party->draftLoadoutTimer = timer;
}

/*
==============
Party_SetDraftRigTimer
==============
*/
void Party_SetDraftRigTimer(PartyData *party, int timer)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7823, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && timer != party->draftRigTimer )
    PartyHost_GamestateChanged(party);
  party->draftRigTimer = timer;
}

/*
==============
Party_SetDraftWeaponTimer
==============
*/
void Party_SetDraftWeaponTimer(PartyData *party, int timer)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7812, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && timer != party->draftWeaponTimer )
    PartyHost_GamestateChanged(party);
  party->draftWeaponTimer = timer;
}

/*
==============
Party_SetGameFlags
==============
*/
void Party_SetGameFlags(PartyData *party, const int flags)
{
  if ( party )
  {
    party->gameFlags = flags;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3477, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    MEMORY[0x4CCDC] = flags;
  }
}

/*
==============
Party_SetInviteJoinsDisabledForNoJIP
==============
*/
void Party_SetInviteJoinsDisabledForNoJIP(PartyData *party, const bool value)
{
  party->inviteJoinsDisabledForNoJIP = value;
}

/*
==============
Party_SetLastVoicePacketTime
==============
*/
void Party_SetLastVoicePacketTime(PartyData *party, const int clientNum, const int timeReceivedMs)
{
  party->partyMembers[clientNum].lastVoicePacketReceivedTime = timeReceivedMs;
}

/*
==============
Party_SetLocalMLGFollower
==============
*/
void Party_SetLocalMLGFollower(PartyData *party, const int localControllerIndex, int isMLGFollower)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7668, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) )
    party->partyLocalIsMLGFollower[outLocalClientNum] = isMLGFollower;
}

/*
==============
Party_SetLocalMLGFollowerIndex
==============
*/
void Party_SetLocalMLGFollowerIndex(PartyData *party, const int localControllerIndex, int indexMLGFollower)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7695, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) )
    party->partyLocalMLGFollowerIndex[outLocalClientNum] = indexMLGFollower;
}

/*
==============
Party_SetLocalMLGSpectator
==============
*/
void Party_SetLocalMLGSpectator(PartyData *party, const int localControllerIndex, int isMLGSpectator)
{
  LocalClientNum_t outLocalClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7634, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( CL_Mgr_IsControllerMappedToClient(localControllerIndex, &outLocalClientNum) )
    party->partyLocalIsMLGSpectator[outLocalClientNum] = isMLGSpectator;
}

/*
==============
Party_SetLocalReadyUpFlag
==============
*/
void Party_SetLocalReadyUpFlag(void)
{
  g_partyLocalReadyUpFlag = 1;
}

/*
==============
Party_SetMapPackFlags
==============
*/
void Party_SetMapPackFlags(PartyData *party, const int flags)
{
  party->mapPackFlags = flags;
}

/*
==============
Party_SetMuted
==============
*/
void Party_SetMuted(PartyData *party, const int memberIndex, const bool muted)
{
  __int64 v3; 
  int v7; 

  v3 = memberIndex;
  if ( (unsigned int)memberIndex >= 0xC8 )
  {
    v7 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3852, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", memberIndex, v7) )
      __debugbreak();
  }
  party->partyMembers[v3].muted = muted;
}

/*
==============
Party_SetNatTypeForXuid
==============
*/
void Party_SetNatTypeForXuid(PartyData *party, const XUID xuid, int natType)
{
  const char *v5; 
  int v6; 
  XUID v7; 
  int outMemberIndex; 

  v7.m_id = xuid.m_id;
  if ( Party_FindMemberByXUID_Internal(party, xuid, &outMemberIndex) && party->partyMembers[outMemberIndex].status >= 5u && outMemberIndex >= 0 )
  {
    if ( (unsigned int)(natType - 1) > 2 )
    {
      v6 = natType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3845, ASSERT_TYPE_ASSERT, "( ( natType > 0 && natType <= XONLINE_NAT_STRICT ) )", "( natType ) = %i", v6) )
        __debugbreak();
    }
    party->partyMembers[outMemberIndex].natType = natType;
  }
  else
  {
    v5 = XUID::ToDevString(&v7);
    Com_PrintWarning(25, "[%s] Unable to set nat type for XUID %s\n", party->partyName, v5);
  }
}

/*
==============
Party_SetNumGameSlots
==============
*/
void Party_SetNumGameSlots(PartyData *party, const int numGameSlots)
{
  int MinBitCountForNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3491, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  party->maxGameSlots = numGameSlots;
  MinBitCountForNum = GetMinBitCountForNum(numGameSlots - 1);
  if ( MinBitCountForNum < 1 )
    MinBitCountForNum = 1;
  party->partyMembersBits = MinBitCountForNum;
}

/*
==============
Party_SetPS4SessionId
==============
*/
void Party_SetPS4SessionId(PartyData *party, const SceNpSessionId *sessionId)
{
  if ( sessionId )
  {
    party->ps4SessionId = *sessionId;
  }
  else
  {
    --party->platformSessionVersionNumber;
    *(_QWORD *)party->ps4SessionId.data = 0i64;
    *(_QWORD *)&party->ps4SessionId.data[8] = 0i64;
    *(_QWORD *)&party->ps4SessionId.data[16] = 0i64;
    *(_QWORD *)&party->ps4SessionId.data[24] = 0i64;
    *(_QWORD *)&party->ps4SessionId.data[32] = 0i64;
    *(_QWORD *)&party->ps4SessionId.data[40] = 0i64;
  }
}

/*
==============
Party_SetPlatformSessionHandledByHost
==============
*/
void Party_SetPlatformSessionHandledByHost(PartyData *party, const ClientPlatform platform, bool value)
{
  char v3; 
  int platformsWhoseSessionsAreHandledByHost; 
  int v7; 

  v3 = platform;
  if ( (unsigned __int8)(platform - 3) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 724, ASSERT_TYPE_ASSERT, "(platform == ClientPlatform::PLATFORM_PS4 || platform == ClientPlatform::PLATFORM_XB3)", (const char *)&queryFormat, "platform == ClientPlatform::PLATFORM_PS4 || platform == ClientPlatform::PLATFORM_XB3") )
    __debugbreak();
  platformsWhoseSessionsAreHandledByHost = party->platformsWhoseSessionsAreHandledByHost;
  if ( value )
    v7 = platformsWhoseSessionsAreHandledByHost | (1 << v3);
  else
    v7 = platformsWhoseSessionsAreHandledByHost & ~(1 << v3);
  party->platformsWhoseSessionsAreHandledByHost = v7;
}

/*
==============
Party_SetPlatformSessionHostXUID
==============
*/
void Party_SetPlatformSessionHostXUID(PartyData *party, XUID hostXuid, ClientPlatform platform)
{
  int v4; 
  const char *v5; 
  XUID *p_ps4PlatformHostXUID; 
  XUID xuid; 

  xuid.m_id = hostXuid.m_id;
  v4 = (char)platform;
  v5 = XUID::ToDevString(&xuid);
  Com_Printf(131097, "[%s] Party_SetPlatformSessionHostXUID called with XUID %s and platform %d\n", party->partyName, v5, v4);
  if ( (_BYTE)v4 == 4 )
  {
    p_ps4PlatformHostXUID = &party->ps4PlatformHostXUID;
  }
  else
  {
    if ( (_BYTE)v4 != 3 )
      return;
    p_ps4PlatformHostXUID = &party->xb3PlatformHostXUID;
  }
  XUID::operator=(p_ps4PlatformHostXUID, &xuid);
  PartyHost_GamestateChanged(party);
}

/*
==============
Party_SetPrivacySetting
==============
*/
void Party_SetPrivacySetting(PartyData *party, PartyPrivacySetting setting)
{
  party->privacySetting = setting;
}

/*
==============
Party_SetPrivateDsGame_f
==============
*/
void Party_SetPrivateDsGame_f()
{
  XUID *v0; 
  unsigned __int64 v1; 
  PartyData *PartyData; 
  XUID result; 

  v0 = XUID::NullXUID(&result);
  v1 = XUID::ToUint64(v0);
  if ( Cmd_Argc() > 1 )
    v1 = Cmd_ArgInt(1);
  PartyData = Lobby_GetPartyData();
  if ( v1 != PartyData->privateMatchId.m_id )
  {
    PartyData->privateMatchId.m_id = v1;
    PartyHost_GamestateChanged(PartyData);
  }
}

/*
==============
Party_SetSquadAutofill
==============
*/
void Party_SetSquadAutofill(const bool enabled)
{
  g_partyData.squadAutofillEnabled = enabled;
}

/*
==============
Party_SetTeamAssignmentEnabled
==============
*/
void Party_SetTeamAssignmentEnabled(PartyData *party, int teamAssignmentEnabled)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7767, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && teamAssignmentEnabled != party->teamAssignmentEnabled )
    PartyHost_GamestateChanged(party);
  party->teamAssignmentEnabled = teamAssignmentEnabled;
}

/*
==============
Party_SetUIRoot
==============
*/
void Party_SetUIRoot(PartyData *party, PartyUIRoot uiRoot)
{
  bool v2; 
  PartyData *PartyData; 

  v2 = party->areWeHost == 0;
  party->uiRoot = uiRoot;
  if ( !v2 )
  {
    if ( g_partyData.party_systemActive && g_partyData.inParty )
      PartyData = &g_partyData;
    else
      PartyData = Lobby_GetPartyData();
    if ( party == PartyData && !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
      Party_ValidateUIRoot(party);
    PartyHost_GamestateChanged(party);
  }
}

/*
==============
Party_SetUpRulesAndUIDVarsForCurrentMap
==============
*/
void Party_SetUpRulesAndUIDVarsForCurrentMap(PartyData *party, const int localControllerIndex, int entry)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4994, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  Party_ResetTweakDvars();
  Playlist_RunRules(localControllerIndex, entry);
}

/*
==============
Party_SetUsesMLGRules
==============
*/
void Party_SetUsesMLGRules(PartyData *party, int usesMLGRules)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7737, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && usesMLGRules != party->usesMLGRules )
    PartyHost_GamestateChanged(party);
  party->usesMLGRules = usesMLGRules;
}

/*
==============
Party_SetXb3SessionId
==============
*/
void Party_SetXb3SessionId(PartyData *party, const _GUID *sessionId)
{
  party->mpsdSessionID = *sessionId;
}

/*
==============
Party_SetupSplitscreenData
==============
*/
void Party_SetupSplitscreenData(PartySplitscreenData *splitscreenData, const int mainControllerIndex, const LocalClientNum_t mainClientNum)
{
  int NumActiveSplitscreenControllers; 
  int LocalClientActiveCount; 
  const dvar_t *v8; 
  unsigned int v9; 
  unsigned int v10; 
  const dvar_t *v11; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  char *fmt; 

  if ( !splitscreenData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7069, ASSERT_TYPE_ASSERT, "(splitscreenData)", (const char *)&queryFormat, "splitscreenData") )
    __debugbreak();
  splitscreenData->mainClient.localClientNum = mainClientNum;
  splitscreenData->mainClient.localControllerIndex = mainControllerIndex;
  splitscreenData->waitingForStats = 0;
  NumActiveSplitscreenControllers = CL_Mgr_GetNumActiveSplitscreenControllers();
  LocalClientActiveCount = CL_GetLocalClientActiveCount();
  v8 = DVARBOOL_splitscreen;
  v9 = LocalClientActiveCount;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  LODWORD(fmt) = NumActiveSplitscreenControllers;
  Com_Printf(25, "Party - SetupSplitscreenData - Splitscreen is %i. ActiveClients = %i. ActiveControllers = %i.\n", v8->current.color[0], v9, fmt);
  if ( mainClientNum )
    Com_PrintError(25, "Party - SetupSplitscreenData - Main client should be local client index 0, this may cause issues (%i).\n", (unsigned int)mainClientNum);
  v10 = 0;
  while ( 1 )
  {
    if ( mainControllerIndex == v10 )
      goto LABEL_25;
    v11 = DVARBOOL_splitscreen;
    if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && CL_Mgr_GetMode() != CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7089, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Party - SetupSplitscreenData - Created party while splitscreen controls have been disabled. Check the logs to determine what menu or function turned off splitscreen controls") )
      __debugbreak();
    if ( !CL_Mgr_IsControllerMappedToClient(v10, NULL) )
      goto LABEL_25;
    ClientFromController = CL_Mgr_GetClientFromController(v10);
    v13 = ClientFromController;
    if ( ClientFromController != mainClientNum )
      break;
    Com_PrintError(25, "Party - SetupSplitscreenData - Splitscreen client should be different than the main client (%i). Skipping this client.(%i).\n", (unsigned int)mainClientNum, (unsigned int)ClientFromController);
LABEL_25:
    if ( (int)++v10 >= 8 )
    {
      v14 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7128, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_splitscreen, \"splitscreen\" ))", "%s\n\tSplitscreen should not be enabled when we have a single-client party", "!Dvar_GetBool( splitscreen )") )
        __debugbreak();
      Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
      Com_Printf(25, "Party - SetupSplitscreenData - Splitscreen not enabled.\n");
      splitscreenData->otherClientActive = 0;
      return;
    }
  }
  if ( !Live_IsSignedIn(v10) || !Live_IsInSystemlinkLobby() && !Live_IsUserSignedInToLive(v10) )
  {
    Com_PrintWarning(25, "Party - SetupSplitscreenData - Controller %i is active but not signed in, cannot be carried over.\n", v10);
    goto LABEL_25;
  }
  if ( v13 != LOCAL_CLIENT_1 )
    Com_PrintWarning(25, "Party - SetupSplitscreenData - Splitscreen client should be local client index 1, this may cause issues (%i).\n", (unsigned int)v13);
  Com_Printf(25, "Party - SetupSplitscreenData - Main controller %i has client num %i.\n", (unsigned int)mainControllerIndex, (unsigned int)mainClientNum);
  Com_Printf(25, "Party - SetupSplitscreenData - Adding controller %i as the other party controller with client num %i.\n", v10, (unsigned int)v13);
  v15 = DVARBOOL_splitscreen;
  if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  if ( !v15->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7118, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_splitscreen, \"splitscreen\" ))", "%s\n\tSplitscreen should be enabled when we have a multi-client party", "Dvar_GetBool( splitscreen )") )
    __debugbreak();
  Dvar_SetBool_Internal(DVARBOOL_splitscreen, 1);
  splitscreenData->otherClient.localClientNum = v13;
  splitscreenData->otherClient.localControllerIndex = v10;
  splitscreenData->otherClientActive = 1;
}

/*
==============
Party_SetupVoteEntries
==============
*/
void Party_SetupVoteEntries(const int firstEntry, const int secondEntry, const int randomEntry)
{
  const char *StringSafe; 
  const char *v6; 
  const char *v7; 

  UI_SetDVarsForVoteEntry(firstEntry, 0);
  UI_SetDVarsForVoteEntry(secondEntry, 1);
  UI_SetDVarsForVoteEntry(randomEntry, 2);
  StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
  Party_SetEntryADisplayMapName(StringSafe);
  v6 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
  Party_SetEntryBDisplayMapName(v6);
  v7 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
  Party_SetEntryCDisplayMapName(v7);
}

/*
==============
Party_ShouldCurrentSessionBeClosed
==============
*/
char Party_ShouldCurrentSessionBeClosed(const PartyData *party)
{
  const dvar_t *v2; 
  int Int_Internal_DebugName; 
  int PlaylistIdForNum; 
  const dvar_t *v5; 
  PartyData *PartyData; 
  int Playlist; 
  unsigned int PlaylistCategory; 

  if ( party->privacySetting == 3 || OnlineTournament_ShouldSessionBeClosed() )
    return 1;
  v2 = DVARBOOL_xblive_privatematch_solo;
  if ( !DVARBOOL_xblive_privatematch_solo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch_solo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
    return 1;
  if ( GameBattles_IsGameBattleActive() )
    return 0;
  if ( party->inviteJoinsDisabledForNoJIP )
    return 1;
  if ( party->partyId == GAME_LOBBY_ID && Party_IsMatchmakingLobby(party) )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
    PlaylistIdForNum = Playlist_GetPlaylistIdForNum(Int_Internal_DebugName);
    if ( Playlist_JoinViaPresenceDisabled(PlaylistIdForNum) )
      return 1;
  }
  v5 = DVARBOOL_online_should_block_invite_joins_if_searching_invite_join_disabled_playlists;
  if ( !DVARBOOL_online_should_block_invite_joins_if_searching_invite_join_disabled_playlists && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_block_invite_joins_if_searching_invite_join_disabled_playlists") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled && (!g_partyData.party_systemActive || !g_partyData.inParty ? (PartyData = Lobby_GetPartyData()) : (PartyData = &g_partyData), !Party_IsMatchmakingLobby(PartyData) && PartyData->partyId == GAME_LOBBY_ID && OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) && !Live_IsInGameBattlesGame() && (Playlist = OnlineMatchmakerOmniscient::GetPlaylist(&OnlineMatchmakerOmniscient::ms_instance), PlaylistCategory = OnlineMatchmakerOmniscient::GetPlaylistCategory(&OnlineMatchmakerOmniscient::ms_instance), Playlist_AnyPlaylistInCategoryRestrictsJoinInProgress(Playlist, PlaylistCategory))) )
    return 1;
  else
    return 0;
}

/*
==============
Party_ShouldDisbandAfterRound
==============
*/
bool Party_ShouldDisbandAfterRound(PartyData *party)
{
  const dvar_t *v3; 
  const dvar_t *v4; 

  if ( !party )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6886, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    return 0;
  }
  v3 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( !v3->current.enabled )
    return 0;
  v4 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
    return 0;
  return party->m_disbandAfterRound;
}

/*
==============
Party_ShowTeams
==============
*/
void Party_ShowTeams(const LocalClientNum_t localClientNum)
{
  if ( !Party_AreTeamsVisible() )
    Dvar_SetBool_Internal(DVARBOOL_party_teamsVisible, 1);
}

/*
==============
Party_Sleep
==============
*/
void Party_Sleep(PartyData *party)
{
  Party_Sleep_Internal(party, 1);
}

/*
==============
Party_SleepForMatch
==============
*/
void Party_SleepForMatch(PartyData *party)
{
  Party_Sleep_Internal(party, 0);
}

/*
==============
Party_Sleep_Internal
==============
*/
void Party_Sleep_Internal(PartyData *party, int releaseVoice)
{
  int v3; 
  bool v4; 

  if ( party->party_systemActive )
  {
    Com_Printf(25, "[%s] Party_Sleep called\n", party->partyName);
    if ( PartyAtomic_IsJoiningActiveForSpecificParty(&g_partyJoinInfo, party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4962, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party ))", "%s\n\tPutting party to sleep while we're joining on another party", "!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party )") )
      __debugbreak();
    party->party_systemActive = 0;
    v3 = Sys_Milliseconds();
    v4 = party->partyId == PRIVATE_PARTY_ID;
    party->inactiveKeepaliveTime = v3;
    if ( v4 )
      PartyMigrate_AbortMakeHost(party);
  }
}

/*
==============
Party_StopAfterRound
==============
*/
void Party_StopAfterRound(PartyData *party)
{
  const dvar_t *v2; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6843, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6844, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  if ( party->partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6845, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( party->inParty && !party->stopAfterRound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6846, ASSERT_TYPE_ASSERT, "(Party_IsStoppingAfterRound( party ))", (const char *)&queryFormat, "Party_IsStoppingAfterRound( party )") )
    __debugbreak();
  Party_StopPartyInternal(party, PARTY_END_STOPPED, 1);
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && !g_partyData.inParty && !Live_Invitation_HasAcceptedInvite() )
  {
    Com_Printf(25, "[%s] Party - StopAfterRound - Queuing xstartprivateparty\n", party->partyName);
    Cbuf_AddText(LOCAL_CLIENT_0, "xstartprivateparty\n");
  }
}

/*
==============
Party_StopParty
==============
*/
void Party_StopParty(PartyData *party)
{
  Party_StopPartyInternal(party, PARTY_END_STOPPED, 1);
}

/*
==============
Party_StopPartyInternal
==============
*/
void Party_StopPartyInternal(PartyData *party, PartyEndType partyEndType, bool changeUIScreen)
{
  bool v6; 
  int v7; 
  unsigned __int8 *p_status; 
  bool v9; 
  int ControllerFromClient; 
  PartyType partyId; 
  int StartingControllerIndex; 
  int v13; 
  unsigned __int8 *v14; 
  NetConnection *MemberConnection; 
  const dvar_t *v16; 
  char v17; 
  int v18; 
  unsigned __int8 *v19; 
  const dvar_t *v20; 
  unsigned __int64 *p_m_currentNumItems; 
  unsigned int i; 
  int areWeHost; 
  PartyType v24; 
  const dvar_t *v25; 
  PartyType v26; 
  int v27; 
  bool *p_invited; 
  bool v29; 
  int v30; 
  unsigned int v31; 
  OnlineChatId *p_chatId; 
  unsigned int *v33; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v35; 
  OnlineChatManager *v36; 
  OnlineChatManager *v37; 
  OnlineChatManager *v38; 
  OnlineChatManager *v39; 
  const XUID *v40; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *j; 
  ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *k; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v43; 
  PartyDisconnectReason fmt; 
  __int64 v45; 
  __int64 v46; 
  OnlineChatType v47; 
  OnlineChatType v48; 
  OnlineChatType v49; 
  OnlineChatId chatId; 
  XUID result; 
  PartyActiveClient localClientNum; 
  OnlineChatType chatType; 
  OnlineChatType v54; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2632, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)partyEndType >= PARTY_END_COUNT )
  {
    LODWORD(v45) = partyEndType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2633, ASSERT_TYPE_ASSERT, "(unsigned)( partyEndType ) < (unsigned)( PARTY_END_COUNT )", "partyEndType doesn't index PARTY_END_COUNT\n\t%i not in [0, %i)", v45, 4) )
      __debugbreak();
  }
  if ( PartyAtomic_IsJoiningActiveForSpecificParty(&g_partyJoinInfo, party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2635, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party ))", "%s\n\tCalling Party_StopParty() while a join operation is in progress for that party.", "!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party )") )
    __debugbreak();
  Com_Printf(25, "[%s] Party_StopParty called, active [%i].\n", party->partyName, (unsigned int)party->party_systemActive);
  --party->platformSessionVersionNumber;
  *(_QWORD *)party->ps4SessionId.data = 0i64;
  *(_QWORD *)&party->ps4SessionId.data[8] = 0i64;
  *(_QWORD *)&party->ps4SessionId.data[16] = 0i64;
  *(_QWORD *)&party->ps4SessionId.data[24] = 0i64;
  *(_QWORD *)&party->ps4SessionId.data[32] = 0i64;
  *(_QWORD *)&party->ps4SessionId.data[40] = 0i64;
  --party->platformSessionVersionNumber;
  *(_QWORD *)&party->mpsdSessionID.Data1 = 0i64;
  *(_QWORD *)party->mpsdSessionID.Data4 = 0i64;
  if ( OnlineTournament_IsInTournament() )
    changeUIScreen = 0;
  v6 = changeUIScreen;
  if ( Com_GameStart_IsRestarting() )
    v6 = 0;
  if ( !party->inParty )
    goto LABEL_88;
  if ( party->partyId == GAME_LOBBY_ID )
  {
    if ( !OnlineTournament_IsInTournament() )
    {
      v7 = 0;
      p_status = &party->partyMembers[0].status;
      v9 = 1;
      while ( 1 )
      {
        if ( !v9 )
        {
          LODWORD(v46) = 200;
          LODWORD(v45) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v45, v46) )
            __debugbreak();
        }
        if ( p_status == (unsigned __int8 *)410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
          __debugbreak();
        if ( (*p_status & 0xFC) != 0 || *p_status == 1 )
        {
          if ( (unsigned int)v7 >= 0xC8 )
          {
            LODWORD(v46) = 200;
            LODWORD(v45) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v45, v46) )
              __debugbreak();
          }
          if ( !Party_IsPlayerInPrivateParty(*(XUID *)(p_status + 6)) && !Live_XUIDIsLocalPlayer(party->partyMembers[v7].playerUID) )
            break;
        }
        ++v7;
        p_status += 504;
        v9 = (unsigned int)v7 < 0xC8;
        if ( v7 >= 200 )
        {
          OnlineMatchmakerOmniscient::ResetDisband(&OnlineMatchmakerOmniscient::ms_instance);
          goto LABEL_33;
        }
      }
      OnlineMatchmakerOmniscient::ResetLobby(&OnlineMatchmakerOmniscient::ms_instance);
    }
LABEL_33:
    if ( party->gamebattleMatchId )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      GameBattles_NotifyMatchEnded(ControllerFromClient);
    }
  }
  if ( !party->party_systemActive )
  {
    partyId = party->partyId;
    if ( partyId != PRIVATE_PARTY_ID )
    {
      if ( partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2746, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
        __debugbreak();
      Com_PrintWarning(14, "[%s] Shutting down lobby while it is not active, unsafe to do while the game is running!\n", party->partyName);
      goto LABEL_88;
    }
  }
  if ( party->inParty )
    StartingControllerIndex = Party_GetStartingControllerIndex(party);
  else
    StartingControllerIndex = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  localClientNum = Party_GetMainActiveClient(party, StartingControllerIndex);
  if ( !party->areWeHost )
  {
    if ( partyEndType )
    {
      switch ( partyEndType )
      {
        case PARTY_END_REMOVED:
          v17 = 4;
          break;
        case PARTY_END_BACKOUT:
          v17 = 6;
          break;
        case PARTY_END_ROLLOVER:
          v17 = 43;
          break;
        default:
          LODWORD(v45) = partyEndType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_local.h", 310, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected party end type %d", v45) )
            __debugbreak();
          v17 = 0;
          break;
      }
    }
    else
    {
      v17 = 5;
    }
    LOBYTE(fmt) = v17;
    if ( v6 )
      PartyClient_DisconnectFromHost(party, &localClientNum, (const char *)&queryFormat.fmt + 3, 1, fmt);
    else
      PartyClient_DisconnectFromHostNoUIScreenChange(party, &localClientNum, (const char *)&queryFormat.fmt + 3, 1, fmt);
LABEL_88:
    if ( party->partyId == GAME_LOBBY_ID && BG_GameStateInfo_BotsCountTowardsGameLaunch() )
      BG_GameStateInfo_DisableGameLaunchWithBots();
    goto LABEL_91;
  }
  v13 = 0;
  v14 = &party->partyMembers[0].status;
  do
  {
    if ( *v14 != 6 && Party_IsMemberIndexDataAvailable(party, v13) && Party_IsMemberRegistered(party, v13) && !Party_IsHost(party, v13) )
    {
      if ( (unsigned int)v13 >= 0xC8 )
      {
        LODWORD(v46) = 200;
        LODWORD(v45) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      if ( (unsigned __int8)(*v14 - 4) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1459, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientNum )") )
        __debugbreak();
      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v13);
      if ( NetConnection::IsOpened(MemberConnection) )
      {
        if ( NetConnection::IsLoopback(MemberConnection) )
          goto LABEL_63;
      }
      else if ( PeerMesh_IsEnabled(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1465, ASSERT_TYPE_ASSERT, "(!PeerMesh_IsEnabled( party ))", "%s\n\tConnection should be opened for registered players", "!PeerMesh_IsEnabled( party )") )
      {
        __debugbreak();
      }
      PartyHost_TellPlayerToEndParty(party, v13, "@XBOXLIVE/PARTYENDED", partyEndType, 0);
    }
LABEL_63:
    ++v13;
    v14 += 504;
  }
  while ( v13 < 200 );
  RMsg_SendMessages();
  if ( party->partyId == GAME_LOBBY_ID )
  {
    if ( !g_partyData.inParty )
    {
      v16 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( v16->current.enabled )
      {
        if ( localClientNum.localClientNum )
        {
          LODWORD(v45) = localClientNum.localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2728, ASSERT_TYPE_ASSERT, "( ( mainActiveClient.localClientNum == LOCAL_CLIENT_0 ) )", "( mainActiveClient.localClientNum ) = %i", v45) )
            __debugbreak();
        }
        Com_Printf(25, "[%s] Party - StopPartyInternal - Executing xstartprivateparty\n", party->partyName);
        Cbuf_ExecuteBufferInternal((const LocalClientNum_t)localClientNum.localClientNum, localClientNum.localControllerIndex, "xstartprivateparty", 0, 0);
      }
    }
    goto LABEL_88;
  }
LABEL_91:
  if ( party->areWeHost && party->inParty )
  {
    PartyHost_ClearStartMatch(party);
    PartyHost_ArchiveGameSettings(party);
  }
  if ( Session_IsValid(party->session) )
    Session_DeleteSession(party->session);
  v18 = 0;
  v19 = &party->partyMembers[0].status;
  do
  {
    v20 = DVARBOOL_party_unregister_matchmaker_player_on_clear;
    if ( !DVARBOOL_party_unregister_matchmaker_player_on_clear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_unregister_matchmaker_player_on_clear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( !v20->current.enabled )
    {
      if ( (unsigned int)v18 >= 0xC8 )
      {
        LODWORD(v46) = 200;
        LODWORD(v45) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      if ( v19 == (unsigned __int8 *)410 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 309, ASSERT_TYPE_ASSERT, "(member)", (const char *)&queryFormat, "member") )
        __debugbreak();
      if ( (*v19 & 0xFC) != 0 || *v19 == 1 )
        Party_UnregisterPlayerFromMatchmaker(party, v18);
    }
    Party_ClearMember(party, v18++, NET_CLOSE_SOFT);
    v19 += 504;
  }
  while ( v18 < 200 );
  p_m_currentNumItems = &party->memberMap.m_currentNumItems;
  if ( party->memberMap.m_currentNumItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 4748, ASSERT_TYPE_ASSERT, "(party->memberMap.empty())", (const char *)&queryFormat, "party->memberMap.empty()") )
    __debugbreak();
  party->subpartyCount = 0;
  for ( i = 0; i < 2; ++i )
    NetConnection::Close(&party->currentHost.connections[i], NET_CLOSE_SOFT);
  areWeHost = party->areWeHost;
  *(_QWORD *)&party->areWeHost = 0i64;
  party->m_disbandAfterRound = 0;
  PartyRequestBuffer::ClearRequests(&party->requestBuffer);
  if ( areWeHost )
    party->specificData.hostData.m_partyStateClientNums.m_currentClientNum = 0;
  PartyProfile_Reset(&party->profileState);
  PartyMigrate_StopMigration(party);
  if ( !party->inParty )
    goto LABEL_130;
  if ( party->party_systemActive )
    goto LABEL_134;
  v24 = party->partyId;
  if ( v24 )
  {
    if ( v24 != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1616, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
      __debugbreak();
    if ( Lobby_IsInLobby() )
      goto LABEL_130;
    goto LABEL_134;
  }
  if ( !g_partyData.party_systemActive )
    goto LABEL_134;
  if ( !g_partyData.inParty )
  {
    if ( g_partyData.party_systemActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1608, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", (const char *)&queryFormat, "!Party_IsRunning( &g_partyData )") )
      __debugbreak();
    goto LABEL_134;
  }
LABEL_130:
  v25 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled )
  {
LABEL_134:
    Dvar_SetBool_Internal(DVARBOOL_party_am_I_host, 0);
    Dvar_SetString_Internal(DVARSTR_party_hostname, (const char *)&queryFormat.fmt + 3);
  }
  *(_QWORD *)party->desiredTeamSelection = 0i64;
  *(_QWORD *)party->partyLocalIsMLGSpectator = 0i64;
  Party_ClearLocalMLGFollower(party);
  v26 = party->partyId;
  if ( v26 )
  {
    if ( v26 != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2820, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
      __debugbreak();
    Dvar_SetString_Internal(DVARSTR_party_partyPlayerCount, (const char *)&queryFormat.fmt + 3);
    Dvar_SetInt_Internal(DVARINT_party_partyPlayerCountNum, 0);
    g_partyChatQuitting = 0;
    party->hostPresenceIndex = 0;
  }
  else
  {
    Dvar_SetString_Internal(DVARSTR_party_lobbyPlayerCount, (const char *)&queryFormat.fmt + 3);
  }
  *(_WORD *)&party->axisWins = 0;
  party->stopAfterRound = 0;
  party->backingOut = 0;
  party->disableGo = 0;
  party->joiningAGameInProgress = 0;
  *(_QWORD *)&party->lastJoinSoundTime = 0i64;
  if ( party == (PartyData *)-314424i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 7139, ASSERT_TYPE_ASSERT, "(splitscreenData)", (const char *)&queryFormat, "splitscreenData") )
    __debugbreak();
  party->splitscreenData.mainClient = 0i64;
  party->splitscreenData.otherClient = 0i64;
  *(_QWORD *)&party->splitscreenData.otherClientActive = 0i64;
  *(_QWORD *)&party->specificData.hostData.partyStateChangeTime = 0i64;
  *(_QWORD *)party->specificData.clientData.m_matchmakingTokenSent = 0i64;
  *((_QWORD *)&party->specificData.clientData + 2) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 3) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 4) = 0i64;
  if ( Com_FrontEnd_IsInFrontEnd() || CL_AllLocalClientsDisconnected() )
  {
    v27 = 0;
    p_invited = &clientUIActives[0].invited;
    v29 = 1;
    do
    {
      if ( !v29 )
      {
        LODWORD(v46) = 2;
        LODWORD(v45) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v45, v46) )
          __debugbreak();
      }
      *p_invited = 0;
      if ( CL_Mgr_IsClientActive((LocalClientNum_t)v27) )
      {
        v30 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v27);
        Live_Disconnected(v30);
      }
      ++v27;
      p_invited += 440;
      v29 = (unsigned int)v27 < 2;
    }
    while ( v27 < 2 );
  }
  if ( Com_FrontEnd_IsInFrontEnd() )
    party->chosenToShowSurvey = 0;
  v31 = 0;
  p_chatId = &party->partyChatData.chats[0].chatId;
  v33 = &party->partyChatData.chats[0].ackedMembers.array[2];
  do
  {
    chatId.m_id = p_chatId->m_id;
    if ( chatId.m_id )
    {
      Instance = OnlineChatManager::GetInstance();
      chatType = COUNT|DODGE;
      if ( OnlineChatManager::IsChatActive(Instance, &chatId, &chatType) )
      {
        v35 = OnlineChatManager::GetInstance();
        localClientNum.localClientNum = LOCAL_CLIENT_COUNT|LOCAL_CLIENT_LAST;
        OnlineChatManager::LeaveChat(v35, &chatId, (const OnlineChatType *)&localClientNum);
      }
      v36 = OnlineChatManager::GetInstance();
      v54 = 4;
      if ( OnlineChatManager::IsChatActive(v36, &chatId, &v54) )
      {
        v37 = OnlineChatManager::GetInstance();
        v47 = 4;
        OnlineChatManager::LeaveChat(v37, &chatId, &v47);
      }
      v38 = OnlineChatManager::GetInstance();
      v48 = 5;
      if ( OnlineChatManager::IsChatActive(v38, &chatId, &v48) )
      {
        v39 = OnlineChatManager::GetInstance();
        v49 = 5;
        OnlineChatManager::LeaveChat(v39, &chatId, &v49);
      }
    }
    p_chatId->m_id = 0i64;
    v40 = XUID::NullXUID(&result);
    XUID::operator=(&party->partyChatData.chats[(__int64)(int)v31].owner, v40);
    LODWORD(p_chatId[-3].m_id) = 0;
    ++v31;
    *((_QWORD *)v33 - 1) = 0i64;
    p_chatId += 8;
    *(_QWORD *)v33 = 0i64;
    *((_QWORD *)v33 + 1) = 0i64;
    *((_QWORD *)v33 + 2) = 0i64;
    v33 += 16;
  }
  while ( v31 < 0xCB );
  party->createSessionForPartyRequestData.m_taskData.party = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.localClientNum = 0i64;
  party->createSessionForPartyRequestData.m_taskData.payload = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.payloadSize = 0i64;
  PartyClientTaskService::Stop(&party->clientTaskService);
  for ( j = &party->memberMap.m_buckets; j != (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *)p_m_currentNumItems; j = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *)((char *)j + 8) )
  {
    for ( k = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *)j->m_data[0].m_listHead.m_sentinel.mp_next; k != j; party->memberMap.m_freelist.m_head.mp_next = v43 )
    {
      if ( !k && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v43 = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)k;
      if ( !k && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      k = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *)k->m_data[0].m_listHead.m_sentinel.mp_next;
      v43->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)party->memberMap.m_freelist.m_head;
    }
    j->m_data[0].m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)j;
  }
  *p_m_currentNumItems = 0i64;
  party->m_lobbyId = 0i64;
  *(_WORD *)&party->iscrossplayParty = 0;
  *(_WORD *)&party->inviteJoinsDisabledForNoJIP = 256;
  party->platformsWhoseSessionsAreHandledByHost = 0;
  *(_WORD *)&party->privateDSReady = 0;
  party->privateMatchId.m_id = 0i64;
}

/*
==============
Party_StopPartyNoUIScreenChange
==============
*/
void Party_StopPartyNoUIScreenChange(PartyData *party)
{
  Party_StopPartyInternal(party, PARTY_END_STOPPED, 0);
}

/*
==============
Party_StopPartyOnBackout
==============
*/
void Party_StopPartyOnBackout(PartyData *party)
{
  Party_StopPartyInternal(party, PARTY_END_BACKOUT, 1);
}

/*
==============
Party_StopPartyOnBackoutNoUIScreenChange
==============
*/
void Party_StopPartyOnBackoutNoUIScreenChange(PartyData *party)
{
  Party_StopPartyInternal(party, PARTY_END_BACKOUT, 0);
}

/*
==============
Party_StopPartyRollOver
==============
*/
void Party_StopPartyRollOver(PartyData *party)
{
  Party_StopPartyInternal(party, PARTY_END_ROLLOVER, 1);
}

/*
==============
Party_TrackMemberDumpInfo
==============
*/
void Party_TrackMemberDumpInfo(const int clientNum)
{
  int v1; 
  int v3; 
  int *v4; 

  v1 = s_partyMemberDumpClientNumsCount;
  if ( (unsigned __int64)s_partyMemberDumpClientNumsCount >= 0xC8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2013, ASSERT_TYPE_ASSERT, "(s_partyMemberDumpClientNumsCount < ( sizeof( *array_counter( s_partyMemberDumpClientNums ) ) + 0 ))", (const char *)&queryFormat, "s_partyMemberDumpClientNumsCount < ARRAY_COUNT( s_partyMemberDumpClientNums )") )
      __debugbreak();
    v1 = s_partyMemberDumpClientNumsCount;
  }
  v3 = 0;
  if ( v1 <= 0 )
  {
LABEL_9:
    s_partyMemberDumpClientNumsCount = v1 + 1;
    s_partyMemberDumpClientNums[v1] = clientNum;
  }
  else
  {
    v4 = s_partyMemberDumpClientNums;
    while ( *v4 != clientNum )
    {
      ++v3;
      ++v4;
      if ( v3 >= v1 )
        goto LABEL_9;
    }
  }
}

/*
==============
Party_UnRegisterVoice
==============
*/
void Party_UnRegisterVoice(PartyData *party, const int clientNum)
{
  __int64 v2; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3874, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  party->partyMembers[v2].voiceRegistered = 0;
}

/*
==============
Party_UnregisterPlayer
==============
*/
void Party_UnregisterPlayer(PartyData *party, const int clientNum, const NetCloseStyle closeStyle)
{
  __int64 v3; 
  const dvar_t *v6; 
  __int64 v7; 

  v3 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5578, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5579, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v7, 200) )
      __debugbreak();
  }
  NetConnection::Close(&party->partyMembers[v3].connection, closeStyle);
  if ( Party_IsMemberIndexDataAvailable(party, v3) )
  {
    v6 = DVARBOOL_party_unregister_matchmaker_player_on_clear;
    if ( !DVARBOOL_party_unregister_matchmaker_player_on_clear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_unregister_matchmaker_player_on_clear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
      Party_UnregisterPlayerFromMatchmaker(party, v3);
    Voice_UnregisterRemotePlayer(party, v3);
    PartyChat_ClearMemberPartyChataData(party, v3);
    Party_TrackMemberDumpInfo(v3);
    Party_DumpInfo(party, "Party_UnregisterPlayer");
  }
  else
  {
    if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3881, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
      __debugbreak();
    if ( party->partyMembers[v3].voiceRegistered && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5585, ASSERT_TYPE_ASSERT, "(!Party_IsRegisteredForVoice( party, clientNum ))", (const char *)&queryFormat, "!Party_IsRegisteredForVoice( party, clientNum )") )
      __debugbreak();
  }
}

/*
==============
Party_UnregisterPlayerFromMatchmaker
==============
*/
void Party_UnregisterPlayerFromMatchmaker(PartyData *party, const int clientNum)
{
  __int64 v3; 
  const PartyData *PartyData; 
  char *v5; 
  unsigned __int64 v6; 
  int outMemberIndex; 
  XUID player; 

  v3 = clientNum;
  if ( OnlineMatchmakerOmniscient::IsActive(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    if ( party->partyId == PRIVATE_PARTY_ID )
      PartyData = Lobby_GetPartyData();
    else
      PartyData = &g_partyData;
    if ( (unsigned int)v3 >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2186, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v3, 200) )
      __debugbreak();
    v5 = (char *)party + 504 * v3;
    v6 = *((_QWORD *)v5 + 326);
    player.m_id = v6;
    if ( (XUID::IsNull(&player) || !Party_FindMemberByXUID_Internal(PartyData, player, &outMemberIndex) || (PartyData->partyMembers[outMemberIndex].status & 0xFD) == 0 || outMemberIndex < 0) && v5[2602] != 6 )
      OnlineMatchmakerOmniscient::RemovePlayerFromLocal(&OnlineMatchmakerOmniscient::ms_instance, (const XUID)v6);
  }
}

/*
==============
Party_UnsetDisbandAfterRound
==============
*/
void Party_UnsetDisbandAfterRound(PartyData *party)
{
  if ( party )
  {
    party->m_disbandAfterRound = 0;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6875, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
  {
    __debugbreak();
  }
}

/*
==============
Party_UpdateMemberInfoFromGame
==============
*/
void Party_UpdateMemberInfoFromGame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  __int64 localClientNum; 
  __int64 v5; 
  __int64 v6; 
  CgStatic *v7; 
  unsigned __int8 *p_clanTagType; 
  char v9; 
  unsigned int v10; 
  __int64 v11; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  int v15; 
  unsigned int v16; 
  int v17; 
  const char *MemberName; 
  __int64 v19; 
  int v20; 
  int v21; 
  const char *v22; 
  unsigned __int8 *v23; 
  __int64 v24; 
  char *v25; 
  unsigned __int8 v26; 
  __int64 v27; 
  char v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  char v33; 
  __int64 v35; 
  CgStatic *v36; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5401, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5402, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( Live_GetGameParty() == party )
  {
    localClientNum = mainActiveClient->localClientNum;
    if ( (unsigned int)localClientNum >= 2 )
    {
      LODWORD(v29) = mainActiveClient->localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, 2) )
        __debugbreak();
      LODWORD(v32) = 2;
      LODWORD(v30) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v30, v32) )
        __debugbreak();
    }
    if ( !clientUIActives[localClientNum].frontEndSceneState[0] )
    {
      if ( (unsigned int)localClientNum >= 2 )
      {
        LODWORD(v31) = 2;
        LODWORD(v29) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v31) )
          __debugbreak();
      }
      if ( clientUIActives[localClientNum].connectionState >= CA_PRIMED )
      {
        v5 = mainActiveClient->localClientNum;
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v31) = 2;
          LODWORD(v29) = mainActiveClient->localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v31) )
            __debugbreak();
        }
        if ( clientUIActives[v5].migrationState == CMSTATE_INACTIVE )
        {
          v6 = mainActiveClient->localClientNum;
          if ( !(_BYTE)CgStatic::ms_allocatedType )
          {
            LODWORD(v31) = mainActiveClient->localClientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v31) )
              __debugbreak();
          }
          if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
          {
            *(float *)&v31 = CgStatic::ms_allocatedCount;
            LODWORD(v29) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v29, v31) )
              __debugbreak();
          }
          if ( !CgStatic::ms_cgameStaticsArray[v6] )
          {
            LODWORD(v31) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v31) )
              __debugbreak();
          }
          v7 = CgStatic::ms_cgameStaticsArray[v6];
          p_clanTagType = &party->partyMembers[0].info.clanTagType;
          v9 = 0;
          v36 = v7;
          v10 = 0;
          v33 = 0;
          v11 = 0i64;
          v35 = 0i64;
          do
          {
            if ( p_clanTagType[312] == 5 )
            {
              LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7->m_localClientNum);
              if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
                __debugbreak();
              if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
              {
                if ( v10 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(v31) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(v29) = v10;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v29, v31) )
                    __debugbreak();
                }
                CharacterInfo = (characterInfo_t *)(v11 + *(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62]);
              }
              else
              {
                CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v10);
              }
              if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5427, ASSERT_TYPE_ASSERT, "(memberInfo)", (const char *)&queryFormat, "memberInfo") )
                __debugbreak();
              if ( CharacterInfo->infoValid )
              {
                if ( party->joiningAGameInProgress && Live_XUIDIsLocalPlayer(*(const XUID *)(p_clanTagType + 318)) )
                {
                  Com_Printf(25, "[%s] %s We received our own memberInfo, setting joiningAGameInProgress to false, voice will be allowed to send\n", party->partyName, "Party_UpdateMemberInfoFromGame");
                  party->joiningAGameInProgress = 0;
                }
                team = CharacterInfo->team;
                v15 = *(_DWORD *)(p_clanTagType + 302);
                if ( v15 != team && (unsigned int)(team - 1) <= 0xC7 )
                {
                  if ( (v16 = v15 - 1, Party_UsingTeams(party)) && v16 > 0xC7 || Party_IsPrivateOrSystemlinkGame(party) && (Dvar_GetBool_Internal_DebugName(DVARBOOL_party_updateAssignedTeamInLocalAndSystemLink, "party_updateAssignedTeamInLocalAndSystemLink") || v16 > 0xC7) )
                  {
                    v17 = *(_DWORD *)(p_clanTagType + 302);
                    MemberName = Party_GetMemberName(party, v10);
                    LODWORD(v31) = v17;
                    LODWORD(v29) = team;
                    Com_Printf(0, "[%s] Assigning party member %u %s team %u (old %u) based on server team\n", party->partyName, v10, MemberName, v29, v31);
                    *(_DWORD *)(p_clanTagType + 302) = CharacterInfo->team;
                  }
                }
                v19 = (__int64)v7->GetClientInfo(v7, v10);
                if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 5467, ASSERT_TYPE_ASSERT, "(player)", (const char *)&queryFormat, rowName) )
                  __debugbreak();
                v20 = *(_DWORD *)(v19 + 160);
                if ( v20 != *(_DWORD *)(p_clanTagType + 306) && Party_UsingTeams(party) )
                {
                  v21 = *(_DWORD *)(p_clanTagType + 306);
                  v22 = Party_GetMemberName(party, v10);
                  LODWORD(v31) = v21;
                  LODWORD(v29) = v20;
                  Com_Printf(0, "[%s] Assigning party member %u %s squad %u (old %u) based on server squad\n", party->partyName, v10, v22, v29, v31);
                  *(_DWORD *)(p_clanTagType + 306) = v20;
                }
                v23 = p_clanTagType - 46;
                v24 = 0x7FFFFFFFi64;
                v25 = (char *)(v19 + 4);
                if ( p_clanTagType == (unsigned __int8 *)46 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)((_DWORD)v23 + 1), "( s0 )", (const char *)&queryFormat, "s0") )
                  __debugbreak();
                if ( v19 == -4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
                  __debugbreak();
                while ( 1 )
                {
                  v26 = v23[(_QWORD)v25 - 4 - v19];
                  v27 = v24;
                  v28 = *v25++;
                  --v24;
                  if ( !v27 )
                  {
LABEL_72:
                    v7 = v36;
                    v11 = v35;
                    goto LABEL_73;
                  }
                  if ( v26 != v28 )
                    break;
                  if ( !v26 )
                    goto LABEL_72;
                }
                Core_strcpy((char *)p_clanTagType - 46, 0x24ui64, (const char *)(v19 + 4));
                Core_strcpy((char *)p_clanTagType - 6, 6ui64, (const char *)(v19 + 124));
                *p_clanTagType = *(_BYTE *)(v19 + 133);
                if ( Party_IsHost(party, v10) )
                  Dvar_SetString_Internal(DVARSTR_party_hostname, (const char *)(v19 + 4));
                v11 = v35;
                v9 = 1;
                v7 = v36;
                v33 = 1;
              }
              else
              {
LABEL_73:
                v9 = v33;
              }
            }
            v11 += 14792i64;
            ++v10;
            p_clanTagType += 504;
            v35 = v11;
          }
          while ( (int)v10 < 200 );
          if ( v9 )
            PlayercardCache_MarkPartyDirty(mainActiveClient->localControllerIndex, 2);
        }
      }
    }
  }
}

/*
==============
Party_UpdateMissingMapPackDvar
==============
*/
void Party_UpdateMissingMapPackDvar(void)
{
  const dvar_t *v0; 
  PartyData *PartyData; 
  bool v2; 
  int mapPackIndex; 
  int playerSlot; 

  v0 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    PartyData = Lobby_GetPartyData();
  else
    PartyData = &g_partyData;
  v2 = Party_PartyMembersMissingMapPack(PartyData, &playerSlot, &mapPackIndex);
  Dvar_SetBool_Internal(DVARBOOL_party_membersMissingMapPack, v2);
}

/*
==============
Party_UsingLobbyMerge
==============
*/
bool Party_UsingLobbyMerge(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 2297, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return !Live_AreWeAcceptingInvite() && party->partyId == GAME_LOBBY_ID && Party_AreWeHost(party);
}

/*
==============
Party_UsingPartyBasedTeams
==============
*/
_BOOL8 Party_UsingPartyBasedTeams(const PartyData *party)
{
  const dvar_t *v2; 
  const dvar_t *v3; 
  int PlaylistIdForNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 8146, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v2 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled || party->partyId )
    return 0i64;
  v3 = DVARINT_playlist;
  if ( !DVARINT_playlist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "playlist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  PlaylistIdForNum = Playlist_GetPlaylistIdForNum(v3->current.integer);
  return Playlist_PartyBasedTeams(PlaylistIdForNum);
}

/*
==============
Party_UsingReadyUpFeature
==============
*/
char Party_UsingReadyUpFeature()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  int v3; 
  PartyData *PartyData; 
  int v5; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG || !Lobby_IsInLobby() )
    return 0;
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
  if ( v1->current.enabled )
  {
    if ( !Dvar_GetInt_Internal_DebugName(DVARINT_pt_AliensReadyUpPrivateInUse, "pt_AliensReadyUpPrivateInUse") )
      return 0;
  }
  else if ( !Dvar_GetInt_Internal_DebugName(DVARINT_pt_AliensReadyUpPublicInUse, "pt_AliensReadyUpPublicInUse") )
  {
    return 0;
  }
  v3 = 0;
  PartyData = Lobby_GetPartyData();
  v5 = 0;
  while ( 1 )
  {
    if ( Party_IsMemberDataAvailable(&PartyData->partyMembers[v5]) )
    {
      if ( ++v3 > 1 )
        break;
    }
    if ( ++v5 >= 200 )
      return 0;
  }
  return 1;
}

/*
==============
Party_UsingSquads
==============
*/
bool Party_UsingSquads(const PartyData *party)
{
  const dvar_t *v2; 

  if ( party->partyId )
    return 0;
  v2 = DVARINT_party_maxSquadSize;
  if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.integer > 1;
}

/*
==============
Party_UsingTeams
==============
*/
_BOOL8 Party_UsingTeams(const PartyData *party)
{
  const dvar_t *v2; 

  if ( party->partyId )
    return 0i64;
  if ( Live_IsInGameBattlesGame() )
    return 1i64;
  v2 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled || !party->areWeHost && Dvar_GetBool_Internal_DebugName(DVARBOOL_party_checkForHostInUsingTeams, "party_checkForHostInUsingTeams") )
    return 0i64;
  return Dvar_GetInt_Internal_DebugName(DVARINT_party_teamCount, "party_teamCount") != 0;
}

/*
==============
Party_ValidateMemberMap
==============
*/
void Party_ValidateMemberMap(PartyData *party)
{
  unsigned int v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  XUID *p_playerUpdatedUID; 
  unsigned __int64 v5; 
  unsigned int v6; 
  unsigned __int64 m_id; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *mp_bucket; 
  ntl::internal::hash_table_node<unsigned __int64,int> *mp_next; 
  XUID *v10; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  char v19; 
  XUID v20; 
  ntl::internal::hash_table_iterator<ntl::pair<unsigned __int64,int>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389>,ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,ntl::internal::hash_table_node<unsigned __int64,int>,ntl::pair<unsigned __int64,int> *,ntl::pair<unsigned __int64,int> &> v21; 
  XUID xuid; 
  XUID v23; 
  XUID result; 
  __int64 v25[3]; 
  int v26; 
  __int64 v27[3]; 
  int v28; 

  v20.m_id = (unsigned __int64)party;
  v19 = 1;
  v1 = 0;
  memset(v25, 0, sizeof(v25));
  v2 = 0;
  v3 = 0i64;
  v26 = 0;
  p_playerUpdatedUID = &party->partyMembers[0].playerUpdatedUID;
  memset(v27, 0, sizeof(v27));
  v28 = 0;
  do
  {
    v5 = v3 >> 5;
    v6 = 0x80000000 >> (v2 & 0x1F);
    if ( XUID::IsValid(p_playerUpdatedUID - 1) )
      *((_DWORD *)v25 + v5) |= v6;
    if ( XUID::IsValid(p_playerUpdatedUID) )
      *((_DWORD *)v25 + v5) |= v6;
    ++v2;
    ++v3;
    p_playerUpdatedUID += 63;
  }
  while ( v2 < 0xC8 );
  m_id = v20.m_id;
  if ( v20.m_id + 107848 != v20.m_id + 110960 )
  {
    mp_bucket = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)(v20.m_id + 107848);
    while ( 1 )
    {
      mp_next = (ntl::internal::hash_table_node<unsigned __int64,int> *)mp_bucket->m_listHead.m_sentinel.mp_next;
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)mp_bucket->m_listHead.m_sentinel.mp_next != mp_bucket )
        break;
      if ( ++mp_bucket == (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)(v20.m_id + 110960) )
        goto LABEL_35;
    }
    if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 305, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
      __debugbreak();
    v21.mp_array = (ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> >,389> *)(v20.m_id + 107848);
    v21.mp_bucket = mp_bucket;
    while ( mp_next )
    {
      v10 = XUID::FromUInt64(&result, mp_next->first);
      if ( !XUID::IsValid(v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6296, ASSERT_TYPE_ASSERT, "(XUID::FromUInt64( memberEntry->first ).IsValid())", (const char *)&queryFormat, "XUID::FromUInt64( memberEntry->first ).IsValid()") )
        __debugbreak();
      if ( mp_next->second >= 0xC8u )
      {
        LODWORD(v18) = 200;
        LODWORD(v17) = mp_next->second;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6297, ASSERT_TYPE_ASSERT, "(unsigned)( memberEntry->second ) < (unsigned)( 200 )", "memberEntry->second doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      XUID::FromUInt64(&v20, mp_next->first);
      xuid.m_id = *(_QWORD *)(504i64 * mp_next->second + m_id + 2608);
      v23.m_id = *(_QWORD *)(504i64 * mp_next->second + m_id + 2616);
      if ( !XUID::operator==(&v20, &xuid) && !XUID::operator==(&v20, &v23) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6301, ASSERT_TYPE_ASSERT, "((mapUID == playerUID) || (mapUID == playerUpdatedUID))", (const char *)&queryFormat, "(mapUID == playerUID) || (mapUID == playerUpdatedUID)") )
        __debugbreak();
      *((_DWORD *)v27 + ((__int64)mp_next->second >> 5)) |= 0x80000000 >> (mp_next->second & 0x1F);
      mp_next = (ntl::internal::hash_table_node<unsigned __int64,int> *)mp_next->mp_next;
      v21.mp_node = mp_next;
      if ( !mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 130, ASSERT_TYPE_ASSERT, "( mp_bucket )", (const char *)&queryFormat, "mp_bucket") )
        __debugbreak();
      if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)mp_bucket->m_listHead.m_sentinel.mp_next == mp_bucket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table_iterator.h", 131, ASSERT_TYPE_ASSERT, "( mp_bucket->empty() == false )", (const char *)&queryFormat, "mp_bucket->empty() == false") )
        __debugbreak();
      if ( mp_next == (ntl::internal::hash_table_node<unsigned __int64,int> *)mp_bucket )
      {
        ntl::internal::hash_table_iterator<ntl::pair<unsigned __int64,int>,ntl::fixed_array<ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int>>,389>,ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int>>,ntl::internal::hash_table_node<unsigned __int64,int>,ntl::pair<unsigned __int64,int> *,ntl::pair<unsigned __int64,int> &>::set_next_used_bucket(&v21);
        mp_bucket = v21.mp_bucket;
        mp_next = v21.mp_node;
      }
    }
  }
LABEL_35:
  v11 = 0i64;
  do
  {
    v12 = *(_DWORD *)((char *)v27 + v11) ^ *(_DWORD *)((char *)v25 + v11);
    if ( v12 )
    {
      v19 = 0;
      do
      {
        v13 = __lzcnt(v12);
        v14 = v12;
        v15 = v1 + v13;
        if ( v13 >= 0x20 )
        {
          LODWORD(v18) = 32;
          LODWORD(v17) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v16 = 0x80000000 >> v13;
        if ( ((0x80000000 >> v13) & *(_DWORD *)((_BYTE *)v25 + v11)) != 0 )
          Com_Printf(25, "PartyMemberMap Invalid Member[%d] -- Member xuid valid but not present in member map\n", v15);
        if ( v13 >= 0x20 )
        {
          LODWORD(v18) = 32;
          LODWORD(v17) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( (v16 & *(_DWORD *)((_BYTE *)v27 + v11)) != 0 )
          Com_Printf(25, "PartyMemberMap Invalid Member[%d] -- Member map contains xuid but member not in party\n", v15);
        if ( v13 >= 0x20 )
        {
          LODWORD(v18) = 32;
          LODWORD(v17) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v12 ^= v16;
      }
      while ( v16 != v14 );
    }
    v1 += 32;
    v11 += 4i64;
  }
  while ( v1 < 0xE0 );
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 6331, ASSERT_TYPE_ASSERT, "(mapIsValid)", "%s\n\tPartyMemberMap Invalid -- See console log for details\n", "mapIsValid") )
    __debugbreak();
}

/*
==============
Party_ValidateUIRoot
==============
*/
void Party_ValidateUIRoot(const PartyData *party)
{
  PartyUIRoot uiRoot; 
  const char *v3; 
  int v4; 
  const char *v5; 
  const char *v6; 
  int v7; 
  const char *v8; 

  if ( !Com_FrontEnd_IsInFrontEnd() )
    return;
  uiRoot = party->uiRoot;
  switch ( uiRoot )
  {
    case 0:
      v3 = "uiRoot != PartyUIRoot::FREE";
      v4 = 3218;
      v5 = "(uiRoot != PartyUIRoot::FREE)";
      goto LABEL_16;
    case 1:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_NONE_MENUS_START";
      v4 = 3219;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_NONE_MENUS_START)";
      goto LABEL_16;
    case 3:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_NONE_MENUS_END";
      v4 = 3220;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_NONE_MENUS_END)";
      goto LABEL_16;
    case 4:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_MP_MENUS_START";
      v4 = 3221;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_MP_MENUS_START)";
      goto LABEL_16;
    case 23:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_MP_MENUS_END";
      v4 = 3222;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_MP_MENUS_END)";
      goto LABEL_16;
    case 24:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_CP_MENUS_START";
      v4 = 3223;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_CP_MENUS_START)";
      goto LABEL_16;
    case 30:
      v3 = "uiRoot != PartyUIRoot::GAMEMODE_CP_MENUS_END";
      v4 = 3224;
      v5 = "(uiRoot != PartyUIRoot::GAMEMODE_CP_MENUS_END)";
LABEL_16:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
        __debugbreak();
      break;
  }
  if ( party == Lobby_GetPartyData() )
  {
    switch ( uiRoot )
    {
      case 5:
        v6 = "uiRoot != PartyUIRoot::MP_MAIN_MENU";
        v7 = 3227;
        v8 = "(uiRoot != PartyUIRoot::MP_MAIN_MENU)";
        break;
      case 25:
        v6 = "uiRoot != PartyUIRoot::CP_MAIN_MENU";
        v7 = 3228;
        v8 = "(uiRoot != PartyUIRoot::CP_MAIN_MENU)";
        break;
      case 8:
        v6 = "uiRoot != PartyUIRoot::MP_SYSTEM_LINK";
        v7 = 3229;
        v8 = "(uiRoot != PartyUIRoot::MP_SYSTEM_LINK)";
        break;
      case 28:
        v6 = "uiRoot != PartyUIRoot::CP_SYSTEM_LINK";
        v7 = 3230;
        v8 = "(uiRoot != PartyUIRoot::CP_SYSTEM_LINK)";
        break;
      case 15:
        v6 = "uiRoot != PartyUIRoot::TOURNAMENT_MATCHMAKING";
        v7 = 3231;
        v8 = "(uiRoot != PartyUIRoot::TOURNAMENT_MATCHMAKING)";
        break;
      default:
        return;
    }
  }
  else
  {
    if ( party != &g_partyData )
      return;
    switch ( uiRoot )
    {
      case 7:
        Com_PrintWarning(25, "Party_ValidateUIRoot, Private party has the UI root set to MP_PUBLIC_MATCH_LOBBY\n");
        return;
      case 27:
        Com_PrintWarning(25, "Party_ValidateUIRoot, Private party has the UI root set to CP_PUBLIC_MATCH_LOBBY\n");
        return;
      case 10:
        v6 = "uiRoot != PartyUIRoot::MP_TRIALS";
        v7 = 3245;
        v8 = "(uiRoot != PartyUIRoot::MP_TRIALS)";
        break;
      case 37:
        v6 = "uiRoot != PartyUIRoot::MP_TRIAL_EVENT";
        v7 = 3246;
        v8 = "(uiRoot != PartyUIRoot::MP_TRIAL_EVENT)";
        break;
      case 21:
        v6 = "uiRoot != PartyUIRoot::BATTLE_ROYALE_MENU_TUTORIAL";
        v7 = 3247;
        v8 = "(uiRoot != PartyUIRoot::BATTLE_ROYALE_MENU_TUTORIAL)";
        break;
      default:
        return;
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
    __debugbreak();
}

/*
==============
Party_WaitAsyncRequests
==============
*/
void Party_WaitAsyncRequests(PartyData *party)
{
  PartyRequestBuffer::SyncRequests(&party->requestBuffer, party);
}

/*
==============
Party_WriteAvailableMapPackFlags
==============
*/
void Party_WriteAvailableMapPackFlags(int mapPackFlags, msg_t *msg)
{
  int KnownContentPackCount; 
  int v5; 
  int v6; 

  KnownContentPackCount = Content_GetKnownContentPackCount();
  if ( KnownContentPackCount - 1 > 10 )
  {
    v6 = KnownContentPackCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3441, ASSERT_TYPE_ASSERT, "( ( contentPackCount + 1 - 2 <= 10 ) )", "( contentPackCount ) = %i", v6) )
      __debugbreak();
  }
  if ( (mapPackFlags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3445, ASSERT_TYPE_ASSERT, "(mapPackFlags & (1 << 1))", (const char *)&queryFormat, "mapPackFlags & CONTENT_ORIGINALMAPS") )
    __debugbreak();
  if ( (mapPackFlags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3446, ASSERT_TYPE_ASSERT, "((mapPackFlags & (1 << 0)) == 0)", (const char *)&queryFormat, "(mapPackFlags & CONTENT_UNKNOWN) == 0") )
    __debugbreak();
  v5 = mapPackFlags >> 2;
  if ( v5 >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3450, ASSERT_TYPE_ASSERT, "(mapPackFlags < (1 << (10)))", (const char *)&queryFormat, "mapPackFlags < (1 << (CONTENT_PACK_BITS))") )
    __debugbreak();
  MSG_WriteBits(msg, v5, 0xAu);
}

/*
==============
Party_WriteMemberInfo
==============
*/
void Party_WriteMemberInfo(PartyData *party, msg_t *msg, ClientAuthoritativeMemberInfo *memberInfo)
{
  int availableMapPackFlags; 
  int KnownContentPackCount; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  availableMapPackFlags = memberInfo->availableMapPackFlags;
  KnownContentPackCount = Content_GetKnownContentPackCount();
  if ( KnownContentPackCount - 1 > 10 )
  {
    v14 = KnownContentPackCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3441, ASSERT_TYPE_ASSERT, "( ( contentPackCount + 1 - 2 <= 10 ) )", "( contentPackCount ) = %i", v14) )
      __debugbreak();
  }
  if ( (availableMapPackFlags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3445, ASSERT_TYPE_ASSERT, "(mapPackFlags & (1 << 1))", (const char *)&queryFormat, "mapPackFlags & CONTENT_ORIGINALMAPS") )
    __debugbreak();
  if ( (availableMapPackFlags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3446, ASSERT_TYPE_ASSERT, "((mapPackFlags & (1 << 0)) == 0)", (const char *)&queryFormat, "(mapPackFlags & CONTENT_UNKNOWN) == 0") )
    __debugbreak();
  v8 = availableMapPackFlags >> 2;
  if ( v8 >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3450, ASSERT_TYPE_ASSERT, "(mapPackFlags < (1 << (10)))", (const char *)&queryFormat, "mapPackFlags < (1 << (CONTENT_PACK_BITS))") )
    __debugbreak();
  MSG_WriteBits(msg, v8, 0xAu);
  MSG_WriteBits(msg, (char)memberInfo->platform[0], 3u);
  MSG_WriteInt64(msg, memberInfo->platformId);
  MSG_WriteData(msg, memberInfo, 8);
  MSG_WriteBool(msg, memberInfo->headsetPresent);
  MSG_WriteBool(msg, memberInfo->usingGamepad);
  MSG_WriteBits(msg, memberInfo->clientDesiredTeamSelection, 8u);
  MSG_WriteBool(msg, memberInfo->isHeadless);
  MSG_WriteBool(msg, memberInfo->isPaidUser);
  MSG_WriteBool(msg, memberInfo->hasOnlineSubscription);
  v9 = -1i64;
  v10 = -1i64;
  do
    ++v10;
  while ( memberInfo->gamertag[v10] );
  v11 = (unsigned int)v10;
  if ( (unsigned int)v10 >= 0x24ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1117, ASSERT_TYPE_ASSERT, "( ( gamertagLen < 36 ) )", "( gamertagLen ) = %zu", (unsigned int)v10) )
    __debugbreak();
  MSG_WriteByte(msg, v11);
  do
    ++v9;
  while ( memberInfo->clanAbbrev[v9] );
  if ( (unsigned int)v9 >= 6ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 1128, ASSERT_TYPE_ASSERT, "( ( clanLen < (5 + 1) ) )", "( clanLen ) = %zu", (unsigned int)v9) )
    __debugbreak();
  MSG_WriteByte(msg, (unsigned int)v9);
  if ( v11 )
  {
    v12 = truncate_cast<int,unsigned __int64>(v11);
    MSG_WriteData(msg, memberInfo->gamertag, v12);
  }
  if ( (_DWORD)v9 )
  {
    v13 = truncate_cast<int,unsigned __int64>((unsigned int)v9);
    MSG_WriteData(msg, memberInfo->clanAbbrev, v13);
  }
  MSG_WriteByte(msg, memberInfo->clanTagType);
  MSG_WriteLong(msg, memberInfo->gamertagSuffix);
  MSG_WriteByte(msg, memberInfo->playerCardUpdate);
  Party_WriteMemberInfo_NonEssentialConnection(party, msg, memberInfo);
}

/*
==============
Party_WriteMemberInfo_NonEssentialConnection
==============
*/
void Party_WriteMemberInfo_NonEssentialConnection(PartyData *party, msg_t *msg, ClientAuthoritativeMemberInfo *memberInfo)
{
  bool IsGameLocalServerRunningOrLoading; 
  const dvar_t *v7; 
  BOOL v8; 
  BOOL v9; 
  const dvar_t *v10; 
  char ActiveGameMode; 

  IsGameLocalServerRunningOrLoading = Com_IsGameLocalServerRunningOrLoading();
  v7 = DVARBOOL_party_sendFullMemberInfoWhenServerRunning;
  v8 = IsGameLocalServerRunningOrLoading;
  if ( !DVARBOOL_party_sendFullMemberInfoWhenServerRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_sendFullMemberInfoWhenServerRunning") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v9 = 0;
  if ( !v7->current.enabled )
    v9 = v8;
  if ( v9 )
  {
    v10 = DVARBOOL_party_debug;
    if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
      Com_Printf(14, "[%s] Party_WriteMemberInfo_NonEssentialConnection - skipping non essential member info because server is running\n", party->partyName);
    MSG_WriteBool(msg, 0);
  }
  else
  {
    MSG_WriteBool(msg, 1);
    MSG_WriteBits(msg, memberInfo->vote, 2u);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    MSG_WriteBool(msg, ActiveGameMode == 3);
    if ( ActiveGameMode == 3 )
    {
      MSG_WriteBits(msg, memberInfo->zombie_consumable0, 8u);
      MSG_WriteBits(msg, memberInfo->zombie_consumable1, 8u);
      MSG_WriteBits(msg, memberInfo->zombie_consumable2, 8u);
      MSG_WriteBits(msg, memberInfo->zombie_consumable3, 8u);
      MSG_WriteBits(msg, memberInfo->zombie_consumable4, 8u);
      MSG_WriteBits(msg, memberInfo->alien_readyUpFlag, 1u);
      MSG_WriteBits(msg, memberInfo->cpFieldUpgradeRowNum, 8u);
      MSG_WriteShort(msg, memberInfo->alienRevives);
      MSG_WriteShort(msg, memberInfo->alienEscapes);
      MSG_WriteShort(msg, memberInfo->alienNerfEscapes);
      MSG_WriteShort(msg, memberInfo->aliensKilled);
    }
    else
    {
      MSG_WriteBool(msg, memberInfo->gameBattlesCommitReady);
      MSG_WriteBool(msg, memberInfo->mlgSpectator == 1);
      MSG_WriteBool(msg, memberInfo->mlgFollower == 1);
      MSG_WriteBits(msg, memberInfo->mlgFollowerIndex, 6u);
    }
    MSG_WriteBool(msg, memberInfo->serverOverwroteInfo);
    MSG_WriteBits(msg, memberInfo->bestWeaponIndex, 9u);
    MSG_WriteShort(msg, memberInfo->wins);
    MSG_WriteLong(msg, memberInfo->kdRatio);
    MSG_WriteBits(msg, memberInfo->currentWinStreak, 0xAu);
    MSG_WriteShort(msg, memberInfo->gamesPlayed);
    MSG_WriteLong(msg, memberInfo->winLossRatio);
    MSG_WriteLong(msg, memberInfo->timePlayedTotal);
    MSG_WriteShort(msg, memberInfo->trueSkill);
    MSG_WriteData(msg, memberInfo->killsHistory, 5);
    MSG_WriteData(msg, memberInfo->deathsHistory, 5);
    if ( memberInfo->platform[0] == 2 )
      MSG_WriteLong(msg, memberInfo->bnetGameAccountId);
  }
}

/*
==============
Party_WritePrivatePartyChatData
==============
*/
void Party_WritePrivatePartyChatData(PartyData *party, msg_t *msg)
{
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partycommon.cpp", 3564, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_WriteByte(msg, 8i64);
  MSG_WriteData(msg, &party->partyChatData.chats[0].chatId, 8);
  MSG_WriteByte(msg, party->partyChatData.chats[0].chatState);
  XUID::Serialize(&party->partyChatData.chats[0].owner, msg);
}

/*
==============
PartyMatchmakingInfo::Reset
==============
*/
void PartyMatchmakingInfo::Reset(PartyMatchmakingInfo *this)
{
  this->matchmakingToken = 0i64;
  this->isPrimaryAccount = 0;
}

/*
==============
RotatingClientNums::Reset
==============
*/
void RotatingClientNums::Reset(RotatingClientNums *this)
{
  this->m_currentClientNum = 0;
}

/*
==============
PartyMatchmakingInfo::Serialize
==============
*/
void PartyMatchmakingInfo::Serialize(PartyMatchmakingInfo *this, msg_t *msg)
{
  MSG_WriteInt64(msg, this->matchmakingToken);
  MSG_WriteBool(msg, this->isPrimaryAccount);
}

