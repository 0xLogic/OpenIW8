/*
==============
OnlineTournament_ResetCBufTracking
==============
*/

void OnlineTournament_ResetCBufTracking(void)
{
  ?OnlineTournament_ResetCBufTracking@@YAXXZ();
}

/*
==============
OnlineTournament_GetWinner
==============
*/

team_t __fastcall OnlineTournament_GetWinner(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_GetWinner@@YA?AW4team_t@@GG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_HandleCancelMatchmakingForBracket
==============
*/

void OnlineTournament_HandleCancelMatchmakingForBracket(void)
{
  ?OnlineTournament_HandleCancelMatchmakingForBracket@@YAXXZ();
}

/*
==============
OnlineTournament_GetStatusUpdateIndex
==============
*/

void __fastcall OnlineTournament_GetStatusUpdateIndex(int *statusUpdateIndex)
{
  ?OnlineTournament_GetStatusUpdateIndex@@YAXPEAH@Z(statusUpdateIndex);
}

/*
==============
OnlineTournament_SetupMatchmakingParams
==============
*/

void __fastcall OnlineTournament_SetupMatchmakingParams(OmniscientMatchmakingParams *outParams)
{
  ?OnlineTournament_SetupMatchmakingParams@@YAXPEAUOmniscientMatchmakingParams@@@Z(outParams);
}

/*
==============
OnlineTournament_CanSendMessages
==============
*/

bool __fastcall OnlineTournament_CanSendMessages()
{
  return ?OnlineTournament_CanSendMessages@@YA_NXZ();
}

/*
==============
OnlineTournament_LobbyHostTaskInProgress
==============
*/

bool __fastcall OnlineTournament_LobbyHostTaskInProgress()
{
  return ?OnlineTournament_LobbyHostTaskInProgress@@YA_NXZ();
}

/*
==============
OnlineTournament_DoLeaveAllTournaments
==============
*/

void __fastcall OnlineTournament_DoLeaveAllTournaments(const int controllerIndex)
{
  ?OnlineTournament_DoLeaveAllTournaments@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_GetTimeUntilNextTournament
==============
*/

int __fastcall OnlineTournament_GetTimeUntilNextTournament(int aheadCount)
{
  return ?OnlineTournament_GetTimeUntilNextTournament@@YAHH@Z(aheadCount);
}

/*
==============
OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket
==============
*/

bool __fastcall OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket(XUID xuid)
{
  return ?OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket@@YA_NUXUID@@@Z(xuid);
}

/*
==============
OnlineTournament_GetNextTournamentTime
==============
*/

int __fastcall OnlineTournament_GetNextTournamentTime(int aheadCount)
{
  return ?OnlineTournament_GetNextTournamentTime@@YAHH@Z(aheadCount);
}

/*
==============
OnlineTournament_GetMapNameForRound
==============
*/

const char *__fastcall OnlineTournament_GetMapNameForRound(unsigned __int16 roundIndex)
{
  return ?OnlineTournament_GetMapNameForRound@@YAPEBDG@Z(roundIndex);
}

/*
==============
OnlineTournament_Rejoin
==============
*/

void __fastcall OnlineTournament_Rejoin(int prevAttempts)
{
  ?OnlineTournament_Rejoin@@YAXH@Z(prevAttempts);
}

/*
==============
OnlineTournament_Init
==============
*/

void OnlineTournament_Init(void)
{
  ?OnlineTournament_Init@@YAXXZ();
}

/*
==============
OnlineTournament_PrepareAndStoreMapsForTournament
==============
*/

void __fastcall OnlineTournament_PrepareAndStoreMapsForTournament(const unsigned __int64 tournamentID)
{
  ?OnlineTournament_PrepareAndStoreMapsForTournament@@YAX_K@Z(tournamentID);
}

/*
==============
OnlineTournament_ProcessCBufCommand
==============
*/

void OnlineTournament_ProcessCBufCommand(void)
{
  ?OnlineTournament_ProcessCBufCommand@@YAXXZ();
}

/*
==============
OnlineTournament_IsQueuedUpForNextTournament
==============
*/

bool __fastcall OnlineTournament_IsQueuedUpForNextTournament()
{
  return ?OnlineTournament_IsQueuedUpForNextTournament@@YA_NXZ();
}

/*
==============
OnlineTournament_GetLobbyId
==============
*/

unsigned __int64 __fastcall OnlineTournament_GetLobbyId(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_GetLobbyId@@YA_KGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetTournamentLobbyTaskStringForTaskType
==============
*/

const char *__fastcall OnlineTournament_GetTournamentLobbyTaskStringForTaskType(LobbyTaskType taskType)
{
  return ?OnlineTournament_GetTournamentLobbyTaskStringForTaskType@@YAPEBDW4LobbyTaskType@@@Z(taskType);
}

/*
==============
OnlineTournament_Enter
==============
*/

void __fastcall OnlineTournament_Enter(const int controllerIndex)
{
  ?OnlineTournament_Enter@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_FenceDCQoSUpdated
==============
*/

void __fastcall OnlineTournament_FenceDCQoSUpdated(const int controllerIndex, const bool value)
{
  ?OnlineTournament_FenceDCQoSUpdated@@YAXH_N@Z(controllerIndex, value);
}

/*
==============
OnlineTournament_SetQueuedUpForNextTournament
==============
*/

void __fastcall OnlineTournament_SetQueuedUpForNextTournament(const int controllerIndex, bool queuedUp)
{
  ?OnlineTournament_SetQueuedUpForNextTournament@@YAXH_N@Z(controllerIndex, queuedUp);
}

/*
==============
OnlineTournament_UIFrame
==============
*/

void OnlineTournament_UIFrame(void)
{
  ?OnlineTournament_UIFrame@@YAXXZ();
}

/*
==============
OnlineTournament_LeaveCommunicationChannel
==============
*/

void OnlineTournament_LeaveCommunicationChannel(void)
{
  ?OnlineTournament_LeaveCommunicationChannel@@YAXXZ();
}

/*
==============
OnlineTournament_OnComErrorCleanup
==============
*/

void __fastcall OnlineTournament_OnComErrorCleanup(const errorParm_t errorCode)
{
  ?OnlineTournament_OnComErrorCleanup@@YAXW4errorParm_t@@@Z(errorCode);
}

/*
==============
OnlineTournament_OnUserSignedIntoDemonware
==============
*/

void __fastcall OnlineTournament_OnUserSignedIntoDemonware(const int controllerIndex)
{
  ?OnlineTournament_OnUserSignedIntoDemonware@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_IsUserReadyToStart
==============
*/

bool __fastcall OnlineTournament_IsUserReadyToStart(XUID xuid, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_IsUserReadyToStart@@YA_NUXUID@@GG@Z(xuid, roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetParticipant
==============
*/

XUID *__fastcall OnlineTournament_GetParticipant(XUID *result, int index)
{
  return ?OnlineTournament_GetParticipant@@YA?AUXUID@@H@Z(result, index);
}

/*
==============
OnlineTournament_GetTournamentChatChannelCommunicationStateStringForState
==============
*/

const char *__fastcall OnlineTournament_GetTournamentChatChannelCommunicationStateStringForState(LobbyCommunicationState lobbyCommunicationState)
{
  return ?OnlineTournament_GetTournamentChatChannelCommunicationStateStringForState@@YAPEBDW4LobbyCommunicationState@@@Z(lobbyCommunicationState);
}

/*
==============
OnlineTournament_GetCurrentTournamentLobbyTaskString
==============
*/

const char *__fastcall OnlineTournament_GetCurrentTournamentLobbyTaskString()
{
  return ?OnlineTournament_GetCurrentTournamentLobbyTaskString@@YAPEBDXZ();
}

/*
==============
OnlineTournament_OnTournamentDisbanded
==============
*/

void __fastcall OnlineTournament_OnTournamentDisbanded(unsigned __int64 tournamentID, int reason, const char *message)
{
  ?OnlineTournament_OnTournamentDisbanded@@YAX_KHPEBD@Z(tournamentID, reason, message);
}

/*
==============
OnlineTournament_IsNavigatingUI
==============
*/

bool __fastcall OnlineTournament_IsNavigatingUI()
{
  return ?OnlineTournament_IsNavigatingUI@@YA_NXZ();
}

/*
==============
OnlineTournament_HasReceivedBracket
==============
*/

bool __fastcall OnlineTournament_HasReceivedBracket()
{
  return ?OnlineTournament_HasReceivedBracket@@YA_NXZ();
}

/*
==============
OnlineTournament_GetMyParticipationStatus
==============
*/

ParticipationStatus __fastcall OnlineTournament_GetMyParticipationStatus()
{
  return ?OnlineTournament_GetMyParticipationStatus@@YA?AW4ParticipationStatus@@XZ();
}

/*
==============
OnlineTournament_AreMatchPrereqsComplete
==============
*/

bool __fastcall OnlineTournament_AreMatchPrereqsComplete(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_AreMatchPrereqsComplete@@YA_NGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_MarkUserReadyToStart
==============
*/

void __fastcall OnlineTournament_MarkUserReadyToStart(XUID xuid, unsigned __int16 roundIndex, int matchStorageIndex, bool ready)
{
  ?OnlineTournament_MarkUserReadyToStart@@YAXUXUID@@GH_N@Z(xuid, roundIndex, matchStorageIndex, ready);
}

/*
==============
OnlineTournament_FindTeamForUser
==============
*/

int __fastcall OnlineTournament_FindTeamForUser(XUID xuid, int *out_memberIndex)
{
  return ?OnlineTournament_FindTeamForUser@@YAHUXUID@@PEAH@Z(xuid, out_memberIndex);
}

/*
==============
OnlineTournament_GetMyTourneyDataString
==============
*/

const char *__fastcall OnlineTournament_GetMyTourneyDataString()
{
  return ?OnlineTournament_GetMyTourneyDataString@@YAPEBDXZ();
}

/*
==============
OnlineTournament_SubmitTournamentMatchResults
==============
*/

void __fastcall OnlineTournament_SubmitTournamentMatchResults(int prevAttempts, unsigned __int64 mmLobbyID, unsigned __int64 winningTeamID, unsigned __int16 *scores)
{
  ?OnlineTournament_SubmitTournamentMatchResults@@YAXH_K0QEAG@Z(prevAttempts, mmLobbyID, winningTeamID, scores);
}

/*
==============
OnlineTournament_PublisherVariablesFetched
==============
*/

void __fastcall OnlineTournament_PublisherVariablesFetched()
{
  ?OnlineTournament_PublisherVariablesFetched@@YAXXZ();
}

/*
==============
OnlineTournament_GetTeamCount
==============
*/

int __fastcall OnlineTournament_GetTeamCount()
{
  return ?OnlineTournament_GetTeamCount@@YAHXZ();
}

/*
==============
OnlineTournament_SendMessage
==============
*/

void __fastcall OnlineTournament_SendMessage(XUID recipient, const void *message, unsigned __int64 messageSize, LobbyMessageType messageType, int prevAttempts)
{
  ?OnlineTournament_SendMessage@@YAXUXUID@@PEBX_KW4LobbyMessageType@@H@Z(recipient, message, messageSize, messageType, prevAttempts);
}

/*
==============
OnlineTournament_CanContinueInviteJoin
==============
*/

InviteHSMApplicationSpecificPreJoinCheckReturnValue __fastcall OnlineTournament_CanContinueInviteJoin(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  return ?OnlineTournament_CanContinueInviteJoin@@YA?AW4InviteHSMApplicationSpecificPreJoinCheckReturnValue@@UInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_HasPendingWork
==============
*/

bool __fastcall OnlineTournament_HasPendingWork()
{
  return ?OnlineTournament_HasPendingWork@@YA_NXZ();
}

/*
==============
OnlineTournament_SetPartyHostIsQueuedForTournament
==============
*/

void __fastcall OnlineTournament_SetPartyHostIsQueuedForTournament(bool isQueued)
{
  ?OnlineTournament_SetPartyHostIsQueuedForTournament@@YAX_N@Z(isQueued);
}

/*
==============
OnlineTournament_UpdateMatchStatus
==============
*/

void __fastcall OnlineTournament_UpdateMatchStatus(int matchStorageIndex, const MatchStatusUpdate *matchStatus)
{
  ?OnlineTournament_UpdateMatchStatus@@YAXHPEBUMatchStatusUpdate@@@Z(matchStorageIndex, matchStatus);
}

/*
==============
PossibleTournamentMapNames::ParseListAndStoreNames
==============
*/

void __fastcall PossibleTournamentMapNames::ParseListAndStoreNames(PossibleTournamentMapNames *this, char *delimitedList)
{
  ?ParseListAndStoreNames@PossibleTournamentMapNames@@QEAAXPEAD@Z(this, delimitedList);
}

/*
==============
OnlineTournament_SetBracket
==============
*/

void __fastcall OnlineTournament_SetBracket(const OnlineTournamentBracket *fakeBracket)
{
  ?OnlineTournament_SetBracket@@YAXAEBUOnlineTournamentBracket@@@Z(fakeBracket);
}

/*
==============
OnlineTournament_IsPrivatePartyHost
==============
*/

bool __fastcall OnlineTournament_IsPrivatePartyHost()
{
  return ?OnlineTournament_IsPrivatePartyHost@@YA_NXZ();
}

/*
==============
OnlineTournament_OnUserBecameActiveClient
==============
*/

void __fastcall OnlineTournament_OnUserBecameActiveClient(const int controllerIndex)
{
  ?OnlineTournament_OnUserBecameActiveClient@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_GetTeamForMatch
==============
*/

int __fastcall OnlineTournament_GetTeamForMatch(XUID xuid, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_GetTeamForMatch@@YAHUXUID@@GG@Z(xuid, roundIndex, matchIndex);
}

/*
==============
OnlineTournament_IsActive
==============
*/

bool __fastcall OnlineTournament_IsActive()
{
  return ?OnlineTournament_IsActive@@YA_NXZ();
}

/*
==============
OnlineTournament_GetMyCurrentRound
==============
*/

unsigned __int16 __fastcall OnlineTournament_GetMyCurrentRound()
{
  return ?OnlineTournament_GetMyCurrentRound@@YAGXZ();
}

/*
==============
OnlineTournament_IsEveryoneReadyToStart
==============
*/

bool __fastcall OnlineTournament_IsEveryoneReadyToStart(int matchStorageIndex)
{
  return ?OnlineTournament_IsEveryoneReadyToStart@@YA_NH@Z(matchStorageIndex);
}

/*
==============
OnlineTournament_InviteJoinStartedWithUniveralID
==============
*/

void __fastcall OnlineTournament_InviteJoinStartedWithUniveralID(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  ?OnlineTournament_InviteJoinStartedWithUniveralID@@YAXUInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_IsPresentInAllParties
==============
*/

bool __fastcall OnlineTournament_IsPresentInAllParties()
{
  return ?OnlineTournament_IsPresentInAllParties@@YA_NXZ();
}

/*
==============
OnlineTournament_OnChatChannelUpdate
==============
*/

void __fastcall OnlineTournament_OnChatChannelUpdate(const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  ?OnlineTournament_OnChatChannelUpdate@@YAXPEBVbdChannelInfo@@PEBVbdChannelMember@@E@Z(channel, member, status);
}

/*
==============
OnlineTournament_GetParticipantHealthByTeam
==============
*/

int __fastcall OnlineTournament_GetParticipantHealthByTeam(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team, int memberIndex)
{
  return ?OnlineTournament_GetParticipantHealthByTeam@@YAHGGW4TournamentTeam@@H@Z(roundIndex, matchIndex, team, memberIndex);
}

/*
==============
OnlineTournament_SetPartyHostIsInTournament
==============
*/

void __fastcall OnlineTournament_SetPartyHostIsInTournament(bool isInTournament)
{
  ?OnlineTournament_SetPartyHostIsInTournament@@YAX_N@Z(isInTournament);
}

/*
==============
OnlineTournament_CanContinueInviteJoinWithLobbyId
==============
*/

InviteHSMApplicationSpecificPreJoinCheckReturnValue __fastcall OnlineTournament_CanContinueInviteJoinWithLobbyId(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  return ?OnlineTournament_CanContinueInviteJoinWithLobbyId@@YA?AW4InviteHSMApplicationSpecificPreJoinCheckReturnValue@@UInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_GetMyCurrentMatch
==============
*/

unsigned __int16 __fastcall OnlineTournament_GetMyCurrentMatch()
{
  return ?OnlineTournament_GetMyCurrentMatch@@YAGXZ();
}

/*
==============
OnlineTournament_GetMyParticipationStatusString
==============
*/

const char *__fastcall OnlineTournament_GetMyParticipationStatusString()
{
  return ?OnlineTournament_GetMyParticipationStatusString@@YAPEBDXZ();
}

/*
==============
OnlineTournament_Frame
==============
*/

void OnlineTournament_Frame(void)
{
  ?OnlineTournament_Frame@@YAXXZ();
}

/*
==============
OnlineTournament_GetNavigationDestination
==============
*/

int __fastcall OnlineTournament_GetNavigationDestination()
{
  return ?OnlineTournament_GetNavigationDestination@@YAHXZ();
}

/*
==============
OnlineTournament_RegisterForTournament
==============
*/

void __fastcall OnlineTournament_RegisterForTournament(int prevAttempts)
{
  ?OnlineTournament_RegisterForTournament@@YAXH@Z(prevAttempts);
}

/*
==============
OnlineTournament_GetMyTournamentTime
==============
*/

int __fastcall OnlineTournament_GetMyTournamentTime()
{
  return ?OnlineTournament_GetMyTournamentTime@@YAHXZ();
}

/*
==============
OnlineTournament_MarkMatchReadyToStart
==============
*/

void __fastcall OnlineTournament_MarkMatchReadyToStart(unsigned __int16 round, unsigned __int16 match)
{
  ?OnlineTournament_MarkMatchReadyToStart@@YAXGG@Z(round, match);
}

/*
==============
OnlineTournament_OnBracketDisbanded
==============
*/

void __fastcall OnlineTournament_OnBracketDisbanded(unsigned __int64 tournamentID)
{
  ?OnlineTournament_OnBracketDisbanded@@YAX_K@Z(tournamentID);
}

/*
==============
OnlineTournament_CanContinueInviteJoinWithUniversalId
==============
*/

InviteHSMApplicationSpecificPreJoinCheckReturnValue __fastcall OnlineTournament_CanContinueInviteJoinWithUniversalId(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  return ?OnlineTournament_CanContinueInviteJoinWithUniversalId@@YA?AW4InviteHSMApplicationSpecificPreJoinCheckReturnValue@@UInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_IsPrivatePartyClient
==============
*/

bool __fastcall OnlineTournament_IsPrivatePartyClient()
{
  return ?OnlineTournament_IsPrivatePartyClient@@YA_NXZ();
}

/*
==============
OnlineTournament_RequestMatchmakingBracket
==============
*/

void OnlineTournament_RequestMatchmakingBracket(void)
{
  ?OnlineTournament_RequestMatchmakingBracket@@YAXXZ();
}

/*
==============
OnlineTournament_GetCurrentMatchTime
==============
*/

int __fastcall OnlineTournament_GetCurrentMatchTime(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_GetCurrentMatchTime@@YAHGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetStatusUpdate
==============
*/

void __fastcall OnlineTournament_GetStatusUpdate(MatchStatusUpdate *statusUpdate)
{
  ?OnlineTournament_GetStatusUpdate@@YAXPEAUMatchStatusUpdate@@@Z(statusUpdate);
}

/*
==============
OnlineTournament_Leave
==============
*/

void OnlineTournament_Leave(void)
{
  ?OnlineTournament_Leave@@YAXXZ();
}

/*
==============
PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom
==============
*/

int __fastcall PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom(PossibleTournamentMapNames *this, const int roundIndexToStartOmittingMapsFrom, int *mapIndicesAvailableForCurrentSelection, int sizeOfMapIndicesArray)
{
  return ?GetListOfMapsAvailableToChooseFrom@PossibleTournamentMapNames@@QEAAHHPEAHH@Z(this, roundIndexToStartOmittingMapsFrom, mapIndicesAvailableForCurrentSelection, sizeOfMapIndicesArray);
}

/*
==============
OnlineTournament_JoinCommunicationChannel_Internal
==============
*/

void __fastcall OnlineTournament_JoinCommunicationChannel_Internal(int prevAttempts)
{
  ?OnlineTournament_JoinCommunicationChannel_Internal@@YAXH@Z(prevAttempts);
}

/*
==============
OnlineTournament_OnJoinLobby
==============
*/

void OnlineTournament_OnJoinLobby(void)
{
  ?OnlineTournament_OnJoinLobby@@YAXXZ();
}

/*
==============
OnlineTournament_RegisterCommands
==============
*/

void OnlineTournament_RegisterCommands(void)
{
  ?OnlineTournament_RegisterCommands@@YAXXZ();
}

/*
==============
OnlineTournament_InviteJoinStarted
==============
*/

void __fastcall OnlineTournament_InviteJoinStarted(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  ?OnlineTournament_InviteJoinStarted@@YAXUInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_CheckForExistingTournamentsAndHandle
==============
*/

void __fastcall OnlineTournament_CheckForExistingTournamentsAndHandle(const int controllerIndex)
{
  ?OnlineTournament_CheckForExistingTournamentsAndHandle@@YAXH@Z(controllerIndex);
}

/*
==============
Onlinetournament_GetFullTournamentCount
==============
*/

int __fastcall Onlinetournament_GetFullTournamentCount()
{
  return ?Onlinetournament_GetFullTournamentCount@@YAHXZ();
}

/*
==============
OnlineTournament_IsScreenDebugEnabled
==============
*/

bool __fastcall OnlineTournament_IsScreenDebugEnabled()
{
  return ?OnlineTournament_IsScreenDebugEnabled@@YA_NXZ();
}

/*
==============
OnlineTournament_IsMatchInProgress
==============
*/

bool __fastcall OnlineTournament_IsMatchInProgress(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_IsMatchInProgress@@YA_NGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_ShouldSessionBeClosed
==============
*/

bool __fastcall OnlineTournament_ShouldSessionBeClosed()
{
  return ?OnlineTournament_ShouldSessionBeClosed@@YA_NXZ();
}

/*
==============
OnlineTournament_GetRoundCount
==============
*/

int __fastcall OnlineTournament_GetRoundCount()
{
  return ?OnlineTournament_GetRoundCount@@YAHXZ();
}

/*
==============
OnlineTournament_HasValidDatacenter
==============
*/

bool __fastcall OnlineTournament_HasValidDatacenter()
{
  return ?OnlineTournament_HasValidDatacenter@@YA_NXZ();
}

/*
==============
OnlineTournament_IsCBufClear
==============
*/

bool __fastcall OnlineTournament_IsCBufClear()
{
  return ?OnlineTournament_IsCBufClear@@YA_NXZ();
}

/*
==============
OnlineTournament_SetMyTournamentTime
==============
*/

void __fastcall OnlineTournament_SetMyTournamentTime(int time)
{
  ?OnlineTournament_SetMyTournamentTime@@YAXH@Z(time);
}

/*
==============
OnlineTournament_OnCreateNewLobby
==============
*/

void OnlineTournament_OnCreateNewLobby(void)
{
  ?OnlineTournament_OnCreateNewLobby@@YAXXZ();
}

/*
==============
OnlineTournament_IsJoiningCommunicationChannel
==============
*/

bool __fastcall OnlineTournament_IsJoiningCommunicationChannel()
{
  return ?OnlineTournament_IsJoiningCommunicationChannel@@YA_NXZ();
}

/*
==============
OnlineTournament_GetScoreForBracket
==============
*/

unsigned __int16 __fastcall OnlineTournament_GetScoreForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team)
{
  return ?OnlineTournament_GetScoreForBracket@@YAGGGW4TournamentTeam@@@Z(roundIndex, matchIndex, team);
}

/*
==============
OnlineTournament_UpdateMyCurrentStatus
==============
*/

void OnlineTournament_UpdateMyCurrentStatus(void)
{
  ?OnlineTournament_UpdateMyCurrentStatus@@YAXXZ();
}

/*
==============
OnlineTournament_CanReceiveMessages
==============
*/

bool __fastcall OnlineTournament_CanReceiveMessages()
{
  return ?OnlineTournament_CanReceiveMessages@@YA_NXZ();
}

/*
==============
OnlineTournament_OnNavigationComplete
==============
*/

void OnlineTournament_OnNavigationComplete(void)
{
  ?OnlineTournament_OnNavigationComplete@@YAXXZ();
}

/*
==============
PossibleTournamentMapNames::GetRandomMapIndexForTournamentID
==============
*/

int __fastcall PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(PossibleTournamentMapNames *this, unsigned __int64 tournamentID)
{
  return ?GetRandomMapIndexForTournamentID@PossibleTournamentMapNames@@QEAAH_K@Z(this, tournamentID);
}

/*
==============
OnlineTournament_OnJoinTournament
==============
*/

void __fastcall OnlineTournament_OnJoinTournament(unsigned __int64 matchmakingID, const char *tournamentState, int tournamentStateLength)
{
  ?OnlineTournament_OnJoinTournament@@YAX_KPEBDH@Z(matchmakingID, tournamentState, tournamentStateLength);
}

/*
==============
OnlineTournament_GetParticipantCount
==============
*/

int __fastcall OnlineTournament_GetParticipantCount()
{
  return ?OnlineTournament_GetParticipantCount@@YAHXZ();
}

/*
==============
OnlineTournament_DoRequestTournamentState
==============
*/

void __fastcall OnlineTournament_DoRequestTournamentState(const int controllerIndex)
{
  ?OnlineTournament_DoRequestTournamentState@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_StartSim
==============
*/

void OnlineTournament_StartSim(void)
{
  ?OnlineTournament_StartSim@@YAXXZ();
}

/*
==============
OnlineTournament_IsDoingPostGameCleanup
==============
*/

bool __fastcall OnlineTournament_IsDoingPostGameCleanup()
{
  return ?OnlineTournament_IsDoingPostGameCleanup@@YA_NXZ();
}

/*
==============
OnlineTournament_Reset
==============
*/

void OnlineTournament_Reset(void)
{
  ?OnlineTournament_Reset@@YAXXZ();
}

/*
==============
OnlineTournament_GetTournamentStateStringForState
==============
*/

const char *__fastcall OnlineTournament_GetTournamentStateStringForState(TournamentState state)
{
  return ?OnlineTournament_GetTournamentStateStringForState@@YAPEBDW4TournamentState@@@Z(state);
}

/*
==============
OnlineTournament_IsMyMatchReadyToStart
==============
*/

bool __fastcall OnlineTournament_IsMyMatchReadyToStart()
{
  return ?OnlineTournament_IsMyMatchReadyToStart@@YA_NXZ();
}

/*
==============
OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString
==============
*/

const char *__fastcall OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString()
{
  return ?OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString@@YAPEBDXZ();
}

/*
==============
OnlineTournament_GetBracket
==============
*/

void __fastcall OnlineTournament_GetBracket(OnlineTournamentBracket *bracket)
{
  ?OnlineTournament_GetBracket@@YAXAEAUOnlineTournamentBracket@@@Z(bracket);
}

/*
==============
OnlineTournament_OnUpdateTournament
==============
*/

void __fastcall OnlineTournament_OnUpdateTournament(const char *tournamentState, int tournamentStateLength)
{
  ?OnlineTournament_OnUpdateTournament@@YAXPEBDH@Z(tournamentState, tournamentStateLength);
}

/*
==============
OnlineTournament_JoinCommunicationChannel
==============
*/

void OnlineTournament_JoinCommunicationChannel(void)
{
  ?OnlineTournament_JoinCommunicationChannel@@YAXXZ();
}

/*
==============
OnlineTournament_GetScoreHistoryEntryForBracket
==============
*/

int __fastcall OnlineTournament_GetScoreHistoryEntryForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, int subMatch)
{
  return ?OnlineTournament_GetScoreHistoryEntryForBracket@@YAHGGH@Z(roundIndex, matchIndex, subMatch);
}

/*
==============
OnlineTournament_ParseAndStorePossibleMapnames
==============
*/

void OnlineTournament_ParseAndStorePossibleMapnames(void)
{
  ?OnlineTournament_ParseAndStorePossibleMapnames@@YAXXZ();
}

/*
==============
OnlineTournament_AreTeamsFlippedForBracket
==============
*/

bool __fastcall OnlineTournament_AreTeamsFlippedForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_AreTeamsFlippedForBracket@@YA_NGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetCurrentTournamentStateString
==============
*/

const char *__fastcall OnlineTournament_GetCurrentTournamentStateString()
{
  return ?OnlineTournament_GetCurrentTournamentStateString@@YAPEBDXZ();
}

/*
==============
OnlineTournament_RequestedMatchmakingBracket
==============
*/

bool __fastcall OnlineTournament_RequestedMatchmakingBracket()
{
  return ?OnlineTournament_RequestedMatchmakingBracket@@YA_NXZ();
}

/*
==============
OnlineTournament_EnqueueCBufCommand
==============
*/

void OnlineTournament_EnqueueCBufCommand(void)
{
  ?OnlineTournament_EnqueueCBufCommand@@YAXXZ();
}

/*
==============
OnlineTournament_SubmitMatchResults
==============
*/

void __fastcall OnlineTournament_SubmitMatchResults(const unsigned __int64 lobbyID, const unsigned __int64 winningTeamID, const unsigned __int16 *scores)
{
  ?OnlineTournament_SubmitMatchResults@@YAX_K0QEBG@Z(lobbyID, winningTeamID, scores);
}

/*
==============
OnlineTournament_OnPlayerQuit
==============
*/

void OnlineTournament_OnPlayerQuit(void)
{
  ?OnlineTournament_OnPlayerQuit@@YAXXZ();
}

/*
==============
OnlineTournament_GetTournamentId
==============
*/

unsigned __int64 __fastcall OnlineTournament_GetTournamentId()
{
  return ?OnlineTournament_GetTournamentId@@YA_KXZ();
}

/*
==============
OnlineTournament_LobbyTaskInProgress
==============
*/

bool __fastcall OnlineTournament_LobbyTaskInProgress()
{
  return ?OnlineTournament_LobbyTaskInProgress@@YA_NXZ();
}

/*
==============
OnlineTournament_GetTeamSize
==============
*/

int __fastcall OnlineTournament_GetTeamSize()
{
  return ?OnlineTournament_GetTeamSize@@YAHXZ();
}

/*
==============
OnlineTournament_CreateBracketFromMatchmakerData
==============
*/

void OnlineTournament_CreateBracketFromMatchmakerData(void)
{
  ?OnlineTournament_CreateBracketFromMatchmakerData@@YAXXZ();
}

/*
==============
OnlineTournament_IsWaitingForMatchmakingBracket
==============
*/

bool __fastcall OnlineTournament_IsWaitingForMatchmakingBracket()
{
  return ?OnlineTournament_IsWaitingForMatchmakingBracket@@YA_NXZ();
}

/*
==============
OnlineTournament_IsInTournament
==============
*/

bool __fastcall OnlineTournament_IsInTournament()
{
  return ?OnlineTournament_IsInTournament@@YA_NXZ();
}

/*
==============
OnlineTournament_InviteJoinStartedWithLobbyID
==============
*/

void __fastcall OnlineTournament_InviteJoinStartedWithLobbyID(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  ?OnlineTournament_InviteJoinStartedWithLobbyID@@YAXUInviteHSMApplicationSpecificPreJoinCheckData@@@Z(data);
}

/*
==============
OnlineTournament_GetMyMatchReadyTimer
==============
*/

int __fastcall OnlineTournament_GetMyMatchReadyTimer()
{
  return ?OnlineTournament_GetMyMatchReadyTimer@@YAHXZ();
}

/*
==============
OnlineTournament_GetParticipantByTeam
==============
*/

XUID *__fastcall OnlineTournament_GetParticipantByTeam(XUID *result, int teamIndex, int memberIndex)
{
  return ?OnlineTournament_GetParticipantByTeam@@YA?AUXUID@@HH@Z(result, teamIndex, memberIndex);
}

/*
==============
OnlineTournament_GetPartyHostIsQueuedForTournament
==============
*/

bool __fastcall OnlineTournament_GetPartyHostIsQueuedForTournament()
{
  return ?OnlineTournament_GetPartyHostIsQueuedForTournament@@YA_NXZ();
}

/*
==============
OnlineTournament_JoinMatchToSpectate
==============
*/

void __fastcall OnlineTournament_JoinMatchToSpectate(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  ?OnlineTournament_JoinMatchToSpectate@@YAXGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetMMTournamentStatus
==============
*/

MMTournamentStatus __fastcall OnlineTournament_GetMMTournamentStatus()
{
  return ?OnlineTournament_GetMMTournamentStatus@@YA?AW4MMTournamentStatus@@XZ();
}

/*
==============
OnlineTournament_LeaveCommunicationChannel_Internal
==============
*/

void __fastcall OnlineTournament_LeaveCommunicationChannel_Internal(int prevAttempts)
{
  ?OnlineTournament_LeaveCommunicationChannel_Internal@@YAXH@Z(prevAttempts);
}

/*
==============
OnlineTournament_PushRecentEventsForMatchToLUI
==============
*/

void __fastcall OnlineTournament_PushRecentEventsForMatchToLUI(lua_State *luaVM, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  ?OnlineTournament_PushRecentEventsForMatchToLUI@@YAXPEAUlua_State@@GG@Z(luaVM, roundIndex, matchIndex);
}

/*
==============
OnlineTournament_HostSendDirectMessage
==============
*/

void __fastcall OnlineTournament_HostSendDirectMessage(XUID recipient, const void *message, unsigned __int64 messageSize, LobbyMessageType messageType)
{
  ?OnlineTournament_HostSendDirectMessage@@YAXUXUID@@PEBX_KW4LobbyMessageType@@@Z(recipient, message, messageSize, messageType);
}

/*
==============
OnlineTournament_DoRegisterForTournament
==============
*/

void __fastcall OnlineTournament_DoRegisterForTournament(const int controllerIndex)
{
  ?OnlineTournament_DoRegisterForTournament@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_OnChatChannelMessage
==============
*/

void __fastcall OnlineTournament_OnChatChannelMessage(unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?OnlineTournament_OnChatChannelMessage@@YAX_K0PEADIPEAXI@Z(channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
OnlineTournament_IsMatchComplete
==============
*/

bool __fastcall OnlineTournament_IsMatchComplete(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_IsMatchComplete@@YA_NGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_GetTimeUntilMyTournament
==============
*/

int __fastcall OnlineTournament_GetTimeUntilMyTournament()
{
  return ?OnlineTournament_GetTimeUntilMyTournament@@YAHXZ();
}

/*
==============
OnlineTournament_DoMatchmakingReadyUp
==============
*/

bool __fastcall OnlineTournament_DoMatchmakingReadyUp()
{
  return ?OnlineTournament_DoMatchmakingReadyUp@@YA_NXZ();
}

/*
==============
OnlineTournament_HasTournamentDoc
==============
*/

bool __fastcall OnlineTournament_HasTournamentDoc()
{
  return ?OnlineTournament_HasTournamentDoc@@YA_NXZ();
}

/*
==============
OnlineTournament_MatchmakingReadyUp
==============
*/

void __fastcall OnlineTournament_MatchmakingReadyUp(int prevAttempts)
{
  ?OnlineTournament_MatchmakingReadyUp@@YAXH@Z(prevAttempts);
}

/*
==============
OnlineTournament_GetTeamName
==============
*/

void __fastcall OnlineTournament_GetTeamName(int teamIndex, char *out_NameBuff, int nameBuffLength)
{
  ?OnlineTournament_GetTeamName@@YAXHPEADH@Z(teamIndex, out_NameBuff, nameBuffLength);
}

/*
==============
OnlineTournament_UpdateBestDatacenter
==============
*/

void OnlineTournament_UpdateBestDatacenter(void)
{
  ?OnlineTournament_UpdateBestDatacenter@@YAXXZ();
}

/*
==============
OnlineTournament_DoRejoinProcess
==============
*/

void __fastcall OnlineTournament_DoRejoinProcess(const int controllerIndex)
{
  ?OnlineTournament_DoRejoinProcess@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_UpdateNextTournamentTime
==============
*/

bool __fastcall OnlineTournament_UpdateNextTournamentTime()
{
  return ?OnlineTournament_UpdateNextTournamentTime@@YA_NXZ();
}

/*
==============
OnlineTournament_IsJoiningOnLobbyId
==============
*/

bool __fastcall OnlineTournament_IsJoiningOnLobbyId()
{
  return ?OnlineTournament_IsJoiningOnLobbyId@@YA_NXZ();
}

/*
==============
OnlineTournament_GetCurrentSubMatchIndex
==============
*/

int __fastcall OnlineTournament_GetCurrentSubMatchIndex(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  return ?OnlineTournament_GetCurrentSubMatchIndex@@YAHGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournament_DoRejoin
==============
*/

void __fastcall OnlineTournament_DoRejoin(const int controllerIndex)
{
  ?OnlineTournament_DoRejoin@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineTournament_Leave_Offline
==============
*/

void OnlineTournament_Leave_Offline(void)
{
  ?OnlineTournament_Leave_Offline@@YAXXZ();
}

/*
==============
OnlineTournament_GetTeamIdForBracket
==============
*/

team_t __fastcall OnlineTournament_GetTeamIdForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team)
{
  return ?OnlineTournament_GetTeamIdForBracket@@YA?AW4team_t@@GGW4TournamentTeam@@@Z(roundIndex, matchIndex, team);
}

/*
==============
OnlineTournament_DoAckJoinTournament
==============
*/

void OnlineTournament_DoAckJoinTournament(void)
{
  ?OnlineTournament_DoAckJoinTournament@@YAXXZ();
}

/*
==============
OnlineTournament_DoReminderProcess
==============
*/

void __fastcall OnlineTournament_DoReminderProcess(const int controllerIndex)
{
  ?OnlineTournament_DoReminderProcess@@YAXH@Z(controllerIndex);
}

/*
==============
AckJoinTournamentComplete
==============
*/
void AckJoinTournamentComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _DWORD *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v10; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1389, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState != TASKSTATE_ERROR )
  {
    if ( taskState == TASKSTATE_SUCCESS )
      goto LABEL_7;
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_16;
    if ( taskState <= TASKSTATE_TIMEDOUT )
      goto LABEL_15;
    if ( taskState == TASKSTATE_PENDING )
    {
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1424, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "AckJoinTournamentComplete called when in TASKSTATE_PENDING") )
        goto LABEL_8;
    }
    else
    {
LABEL_16:
      LODWORD(v10) = taskState;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1428, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
        goto LABEL_8;
    }
    __debugbreak();
    goto LABEL_8;
  }
  if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) != BD_AMM_TOURNAMENT_DUPLICATE_ACK_JOIN )
  {
LABEL_15:
    Com_Printf(25, "Tournament: Failed to ack tournament join\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *m_appData;
    v7 = (unsigned int)(2000 << *m_appData);
    m_appData[1] = v7;
    *m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v8);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x8000, dest);
    goto LABEL_8;
  }
  Com_Printf(25, "Tournament: Treating BD_AMM_TOURNAMENT_DUPLICATE_ACK_JOIN as a success.\n");
LABEL_7:
  Com_Printf(25, "Tournament: Acked tournament join\n");
  *((_BYTE *)m_appData + 8) = 0;
LABEL_8:
  s_lobbyTaskID = 0;
}

/*
==============
DoKillUpdate_f
==============
*/
void DoKillUpdate_f()
{
  const char *v0; 
  unsigned __int64 v1; 
  __int64 v2; 
  const char *v3; 
  const char *v4; 
  const XUID *v5; 
  const XUID *v6; 
  int v7; 
  int v8; 
  __int64 v9; 
  XUID *v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  bool v13; 
  XUID result; 
  XUID xuid; 
  XUID v16; 

  XUID::XUID(&xuid);
  XUID::XUID(&v16);
  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui64_hex(v0);
    v2 = Cmd_ArgInt(2);
    v3 = Cmd_Argv(3);
    v4 = Cmd_Argv(4);
    v5 = XUID::FromHexString(&result, v3);
    XUID::operator=(&xuid, v5);
    v6 = XUID::FromHexString(&result, v4);
    XUID::operator=(&v16, v6);
    v7 = Cmd_ArgInt(5);
    LODWORD(result.m_id) = Cmd_ArgInt(6);
    Com_Printf(25, "Tournament: reporting that %s killed %s with weapon %d.\n", v3, v4, v7);
    v8 = 0;
    v9 = 168 * v2;
    while ( 1 )
    {
      v10 = (XUID *)((char *)&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[v8].xuid + v9);
      if ( XUID::operator==(v10, &xuid) || XUID::IsNull(v10) )
        break;
      if ( ++v8 >= 5 )
        goto LABEL_6;
    }
    XUID::operator=(v10, &xuid);
    if ( v8 >= 0 )
    {
      s_currentMatchStatus.mmLobbyID = v1;
      v11 = 32i64 * v8 + v9;
      XUID::operator=((XUID *)((char *)&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[0].killer + v11), &v16);
      v12 = truncate_cast<unsigned short,int>(v7);
      v13 = LODWORD(result.m_id) == 0;
      *(unsigned __int16 *)((char *)&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[0].killerWeapon + v11) = v12;
      s_currentMatchStatusDirty = 1;
      *(&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[0].killerHeadshot + v11) = !v13;
      return;
    }
LABEL_6:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 5168, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: attempting to send a kill update for a victim (%s) that doesn't fit on the requested team (%d)\n", v3, v2) )
      __debugbreak();
  }
}

/*
==============
DoScoreUpdate_f
==============
*/
void DoScoreUpdate_f()
{
  const char *v0; 
  __int64 v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  int teamSize; 
  int v8; 
  const XUID *v9; 
  XUID result; 

  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = 2i64;
    v2 = I_atoui64_hex(v0);
    v3 = Cmd_ArgInt(2);
    v4 = Cmd_ArgInt(3);
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 5088, ASSERT_TYPE_ASSERT, "(unsigned)( team ) < (unsigned)( 2 )", "team doesn't index 2\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    v5 = s_currentMatchStatus.statusUpdate.teamStatus[1].score + (unsigned int)s_currentMatchStatus.statusUpdate.teamStatus[0].score;
    v6 = v3;
    if ( s_currentMatchStatus.statusUpdate.teamStatus[v3].score < truncate_cast<unsigned short,int>(v4) )
    {
      s_currentMatchStatus.statusUpdate.scoreHistory[v5] = truncate_cast<signed char,int>(v3);
      s_currentMatchStatus.statusUpdate.teamStatus[v6].score = truncate_cast<unsigned short,int>(v4);
    }
    teamSize = s_currentBracket.teamSize;
    s_currentMatchStatus.mmLobbyID = v2;
    do
    {
      v8 = 0;
      if ( teamSize > 0 )
      {
        do
        {
          v9 = XUID::NullXUID(&result);
          XUID::operator=((XUID *)((char *)&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[v8].killer + v6 * 168), v9);
          teamSize = s_currentBracket.teamSize;
          ++v8;
        }
        while ( v8 < s_currentBracket.teamSize );
      }
      --v1;
    }
    while ( v1 );
    s_currentMatchStatusDirty = 1;
  }
}

/*
==============
PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom
==============
*/
__int64 PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom(PossibleTournamentMapNames *this, const int roundIndexToStartOmittingMapsFrom, int *mapIndicesAvailableForCurrentSelection, int sizeOfMapIndicesArray)
{
  signed int v4; 
  unsigned int v5; 
  int *v7; 
  int v8; 
  _DWORD *v10; 
  int v11; 
  int i; 
  __int64 v13; 
  __int64 v15; 
  __int64 v16; 
  _QWORD v18[2]; 

  v4 = 0;
  v18[0] = 0i64;
  v5 = 0;
  v18[1] = 0i64;
  v7 = mapIndicesAvailableForCurrentSelection;
  v8 = roundIndexToStartOmittingMapsFrom;
  if ( roundIndexToStartOmittingMapsFrom < this->m_roundIndex )
  {
    v10 = v18;
    do
    {
      v11 = 0;
      if ( this->m_numPossibleMaps > 0 )
      {
        while ( strcmp(s_mapsChosenForCurrentTournament[v8], this->m_possibleMapnamesList[v11]) )
        {
          if ( ++v11 >= this->m_numPossibleMaps )
            goto LABEL_11;
        }
        if ( (unsigned int)v4 >= 4 )
        {
          LODWORD(v16) = 4;
          LODWORD(v15) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 417, ASSERT_TYPE_ASSERT, "(unsigned)( currentPointerToOmittedList ) < (unsigned)( ( sizeof( *array_counter( indicesOfMapsToBeOmitted ) ) + 0 ) )", "currentPointerToOmittedList doesn't index ARRAY_COUNT( indicesOfMapsToBeOmitted )\n\t%i not in [0, %i)", v15, v16) )
            __debugbreak();
        }
        ++v4;
        *v10++ = v11;
      }
LABEL_11:
      ++v8;
    }
    while ( v8 < this->m_roundIndex );
    v7 = mapIndicesAvailableForCurrentSelection;
  }
  for ( i = 0; i < this->m_numPossibleMaps; ++i )
  {
    v13 = 0i64;
    if ( v4 <= 0i64 )
    {
LABEL_17:
      if ( v5 >= sizeOfMapIndicesArray )
      {
        LODWORD(v16) = sizeOfMapIndicesArray;
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 442, ASSERT_TYPE_ASSERT, "(unsigned)( numMapsAvailableForCurrentSelection ) < (unsigned)( sizeOfMapIndicesArray )", "numMapsAvailableForCurrentSelection doesn't index sizeOfMapIndicesArray\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      ++v5;
      *v7++ = i;
    }
    else
    {
      while ( *((_DWORD *)v18 + v13) != i )
      {
        if ( ++v13 >= v4 )
          goto LABEL_17;
      }
    }
  }
  return v5;
}

/*
==============
PossibleTournamentMapNames::GetRandomMapIndexForTournamentID
==============
*/
__int64 PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(PossibleTournamentMapNames *this, unsigned __int64 tournamentID)
{
  int ListOfMapsAvailableToChooseFrom; 
  int m_roundIndex; 
  __int64 v7; 
  int mapIndicesAvailableForCurrentSelection[2]; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !this->m_numPossibleMaps )
    return 0xFFFFFFFFi64;
  if ( this->m_numPossibleMaps == 1 )
  {
    if ( !this->m_possibleMapnamesList[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 460, ASSERT_TYPE_ASSERT, "(m_possibleMapnamesList[0][0] != '\\0')", (const char *)&queryFormat, "m_possibleMapnamesList[0][0] != '\\0'") )
      __debugbreak();
    return 0i64;
  }
  *(_QWORD *)mapIndicesAvailableForCurrentSelection = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  v11 = 0i64;
  ListOfMapsAvailableToChooseFrom = PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom(this, 0, mapIndicesAvailableForCurrentSelection, 8);
  if ( !ListOfMapsAvailableToChooseFrom )
  {
    m_roundIndex = this->m_roundIndex;
    if ( m_roundIndex )
    {
      *(_QWORD *)mapIndicesAvailableForCurrentSelection = 0i64;
      v9 = 0i64;
      v10 = 0i64;
      v11 = 0i64;
      ListOfMapsAvailableToChooseFrom = PossibleTournamentMapNames::GetListOfMapsAvailableToChooseFrom(this, m_roundIndex - 1, mapIndicesAvailableForCurrentSelection, 8);
      if ( ListOfMapsAvailableToChooseFrom <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 486, ASSERT_TYPE_ASSERT, "(numMapsAvailableForCurrentSelection > 0)", (const char *)&queryFormat, "numMapsAvailableForCurrentSelection > 0") )
        __debugbreak();
      goto LABEL_12;
    }
    return 0xFFFFFFFFi64;
  }
LABEL_12:
  v7 = mapIndicesAvailableForCurrentSelection[((tournamentID & (0xFFFFi64 << (16 * (unsigned __int8)this->m_roundIndex))) >> (16 * (unsigned __int8)this->m_roundIndex)) % ListOfMapsAvailableToChooseFrom];
  if ( !this->m_possibleMapnamesList[v7][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 495, ASSERT_TYPE_ASSERT, "(m_possibleMapnamesList[indexChosenFromOriginalList][0] != '\\0')", (const char *)&queryFormat, "m_possibleMapnamesList[indexChosenFromOriginalList][0] != '\\0'") )
    __debugbreak();
  return (unsigned int)v7;
}

/*
==============
JoinCommunicationChannelComplete
==============
*/
void JoinCommunicationChannelComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  TournamentState v5; 
  unsigned __int64 v6; 
  unsigned __int64 TransactionID; 
  int v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  bdLobbyErrorCode ErrorCode; 
  TournamentState v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 984, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    LOBYTE(s_lobbyCommunicationState) = 2;
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 8i64);
    LOBYTE(v12) = 8;
    LOBYTE(s_tournamentState) = 8;
    OnlineTournament_OnStateEnter(v12);
    v13 = s_chatLobbyID;
    m_appData[8] = 0;
    Com_Printf(25, "Tournament: Joined communication channel id %llu\n", v13);
    goto LABEL_17;
  }
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_CHANNEL_ALREADY_SUBSCRIBED )
    {
      LOBYTE(v5) = 8;
      LOBYTE(s_lobbyCommunicationState) = 2;
      OnlineTournament_SetTournamentState(v5);
      v6 = s_chatLobbyID;
      m_appData[8] = 0;
      Com_PrintWarning(25, "Tournament: Received error that we are already subscribed to channel id %llu.  Proceeding as if we succeeded.\n", v6);
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( taskState <= TASKSTATE_ERROR )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
LABEL_15:
    Com_Printf(25, "Tournament: Failed to join communication channel id %llu\n", s_chatLobbyID);
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v8 = *(_DWORD *)m_appData;
    v9 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v9;
    *(_DWORD *)m_appData = v8 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v9);
    v10 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v10);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)2048, dest);
    goto LABEL_17;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v14) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1024, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v14) )
      goto LABEL_17;
    goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1020, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "JoinCommunicationChannelComplete called when in TASKSTATE_PENDING") )
LABEL_10:
    __debugbreak();
LABEL_17:
  s_lobbyTaskID = 0;
}

/*
==============
JoinLobby_f
==============
*/

void __fastcall JoinLobby_f()
{
  OnlineTournament_JoinCommunicationChannel();
}

/*
==============
LeaveAllTournamentsComplete
==============
*/
void LeaveAllTournamentsComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v10; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1302, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Tournament: Left all tournaments\n");
    m_appData[8] = 0;
    goto LABEL_15;
  }
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_12;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
    Com_Printf(25, "Tournament: Failed to leave all tournaments\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *(_DWORD *)m_appData;
    v7 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v7;
    *(_DWORD *)m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    if ( (_BYTE)s_tournamentState )
    {
      v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v8);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x4000, dest);
    }
    goto LABEL_15;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_12:
    LODWORD(v10) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1334, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
      goto LABEL_15;
    goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1330, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LeaveAllTournamentsComplete called when in TASKSTATE_PENDING") )
LABEL_9:
    __debugbreak();
LABEL_15:
  s_lobbyTaskID = 0;
}

/*
==============
LeaveCommunicationChannelComplete
==============
*/
void LeaveCommunicationChannelComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  int *m_appData; 
  bool v5; 
  unsigned __int64 TransactionID; 
  int v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v11; 
  char dest[256]; 

  m_appData = (int *)task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1090, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( (_BYTE)s_lobbyCommunicationState != LONG && (_BYTE)s_lobbyCommunicationState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1092, ASSERT_TYPE_ASSERT, "(s_lobbyCommunicationState == LobbyCommunicationState::LEAVING || s_lobbyCommunicationState == LobbyCommunicationState::NONE)", (const char *)&queryFormat, "s_lobbyCommunicationState == LobbyCommunicationState::LEAVING || s_lobbyCommunicationState == LobbyCommunicationState::NONE") )
    __debugbreak();
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_CHANNEL_NOT_SUBSCRIBED )
    {
LABEL_10:
      Com_Printf(25, "Tournament: Left communication channel id %llu\n", s_chatLobbyID);
      s_chatLobbyID = 0i64;
      OnlineTournament_Reset();
      goto LABEL_11;
    }
LABEL_20:
    Com_Printf(25, "Tournament: Failed to leave communication channel id %llu\n", s_chatLobbyID);
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v7 = *m_appData;
    v8 = (unsigned int)(2000 << *m_appData);
    m_appData[1] = v8;
    *m_appData = v7 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v8);
    v9 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v9);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)4096, dest);
    goto LABEL_11;
  }
  if ( taskState == TASKSTATE_SUCCESS )
    goto LABEL_10;
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_21;
  if ( taskState <= TASKSTATE_TIMEDOUT )
    goto LABEL_20;
  if ( taskState == TASKSTATE_PENDING )
  {
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1124, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "LeaveCommunicationChannelComplete called when in TASKSTATE_PENDING");
  }
  else
  {
LABEL_21:
    LODWORD(v11) = taskState;
    v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1128, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v11);
  }
  if ( v5 )
    __debugbreak();
LABEL_11:
  s_lobbyTaskID = 0;
}

/*
==============
LeaveLobby_f
==============
*/

void __fastcall LeaveLobby_f()
{
  OnlineTournament_LeaveCommunicationChannel();
}

/*
==============
MatchmakingReadyUpComplete
==============
*/
void MatchmakingReadyUpComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v10; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1481, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Tournament: sent matchmaking ready up\n");
    m_appData[8] = 0;
    goto LABEL_17;
  }
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_AMM_TOURNAMENT_MATCH_IN_PROGRESS )
    {
      m_appData[8] = 0;
      Com_PrintWarning(25, "Tournament: Could not ready up because the match is already in progress.  We should receive a msgJoinTournament soon, otherwise we need to join the match in progress.\n");
      goto LABEL_17;
    }
    goto LABEL_15;
  }
  if ( taskState <= TASKSTATE_ERROR )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
LABEL_15:
    Com_Printf(25, "Tournament: Failed send matchmaking ready up\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *(_DWORD *)m_appData;
    v7 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v7;
    *(_DWORD *)m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v8);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x10000, dest);
    goto LABEL_17;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v10) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1517, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
      goto LABEL_17;
    goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1513, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MatchmakingReadyUpComplete called when in TASKSTATE_PENDING") )
LABEL_10:
    __debugbreak();
LABEL_17:
  s_lobbyTaskID = 0;
}

/*
==============
MatchmakingRegisterComplete
==============
*/
void MatchmakingRegisterComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  int m_controllerIndex; 
  _BYTE *m_appData; 
  unsigned int NextTournamentTime; 
  unsigned int v7; 
  const dvar_t *v8; 
  int integer; 
  const dvar_t *v10; 
  unsigned __int64 TransactionID; 
  int v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  bdLobbyErrorCode ErrorCode; 
  unsigned __int64 UserId; 
  int v17; 
  bool v18; 
  PartyData *ActiveParty; 
  __int64 v24; 
  float value; 
  __int64 v26; 
  bdJSONDeserializer v27; 
  DLogContext context; 
  char dest[256]; 
  char buffer[4096]; 

  v26 = -2i64;
  m_controllerIndex = task->m_controllerIndex;
  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1764, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    UserId = DLog_GetUserId(m_controllerIndex);
    v17 = s_myTournamentTime;
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) )
    {
      if ( DLog_IsActive() )
      {
        v18 = DLog_BeginEvent(&context, "dlog_event_tournament_sign_up");
        context.autoEndEvent = 1;
        if ( v18 && DLog_String(&context, "best_dc", s_bestDatacenterName, 0) && DLog_Int32(&context, "tournament_time", v17) )
          DLog_RecordContext(&context);
      }
      else
      {
        context.error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    Com_Printf(25, "Tournament: registered for upcoming tournament.\n");
    m_appData[8] = 0;
    bdJSONDeserializer::bdJSONDeserializer(&v27, *(const char **)s_tournamentRegistrationResult._bytes_20);
    if ( !bdJSONDeserializer::getFloat32(&v27, "start_search_offset_seconds", &value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1787, ASSERT_TYPE_ASSERT, "(resultDoc.getFloat32( \"start_search_offset_seconds\", startSearchOffset ))", (const char *)&queryFormat, "resultDoc.getFloat32( \"start_search_offset_seconds\", startSearchOffset )") )
      __debugbreak();
    __asm
    {
      vmovss  xmm2, [rsp+12F8h+value]
      vcvtss2sd xmm2, xmm2, xmm2
      vmovq   r8, xmm2
    }
    Com_Printf(25, "Tournament: start search offset = %f\n", *(double *)&_XMM2);
    __asm { vcvttss2si eax, [rsp+12F8h+value] }
    s_matchmakingStartOffset = _EAX;
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 2i64);
    LOBYTE(s_tournamentState) = 2;
    ActiveParty = Party_GetActiveParty();
    if ( Party_AreWeHost(ActiveParty) )
      PartyHost_GamestateChanged(ActiveParty);
    s_myTournamentTime += s_matchmakingStartOffset;
    bdJSONDeserializer::~bdJSONDeserializer(&v27);
    goto LABEL_37;
  }
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_AMM_TOURNAMENT_FULL )
    {
      NextTournamentTime = OnlineTournament_GetNextTournamentTime(s_nextTournamentFullCount + 1);
      v7 = OnlineTournament_GetNextTournamentTime(s_nextTournamentFullCount);
      Com_PrintWarning(25, "Tournament: The tournament we're interested in (%d) is full.  We will try again for the following tournament (%d).", v7, NextTournamentTime);
      v8 = DVARINT_online_tournament_time_interval;
      if ( !DVARINT_online_tournament_time_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_time_interval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      integer = v8->current.integer;
      ++s_nextTournamentFullCount;
      v10 = DVARINT_online_tournament_early_registration_limit;
      if ( !DVARINT_online_tournament_early_registration_limit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_early_registration_limit") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( integer * s_nextTournamentFullCount > v10->current.integer )
      {
        OnlineTournament_Reset();
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x400000, NULL);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87B80);
      }
      goto LABEL_37;
    }
    goto LABEL_22;
  }
  if ( taskState <= TASKSTATE_ERROR )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
LABEL_22:
    Com_Printf(25, "Tournament: Failed to register for tournament\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v12 = *(_DWORD *)m_appData;
    v13 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v13;
    *(_DWORD *)m_appData = v12 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v13);
    s_myTournamentTime = 0;
    v14 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v14);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x80000, dest);
    goto LABEL_37;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v24) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1845, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v24) )
      goto LABEL_37;
    goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1841, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MatchmakingRegisterComplete called when in TASKSTATE_PENDING") )
LABEL_10:
    __debugbreak();
LABEL_37:
  s_lobbyTaskID = 0;
}

/*
==============
MatchmakingRejoinComplete
==============
*/
void MatchmakingRejoinComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v10; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1680, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Tournament: rejoined tournament.\n");
    m_appData[8] = 0;
    OnlineMatchmakerOmniscient::SetTournamentID(&OnlineMatchmakerOmniscient::ms_instance, s_rejoinTournamentID);
    goto LABEL_14;
  }
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
    Com_Printf(25, "Tournament: Failed to rejoin tournament\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *(_DWORD *)m_appData;
    v7 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v7;
    *(_DWORD *)m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v8);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x40000, dest);
    goto LABEL_14;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v10) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1710, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
      goto LABEL_14;
    goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1706, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "MatchmakingRejoinComplete called when in TASKSTATE_PENDING") )
LABEL_9:
    __debugbreak();
LABEL_14:
  s_lobbyTaskID = 0;
}

/*
==============
OnlineTournament_AckJoinTournament
==============
*/
void OnlineTournament_AckJoinTournament(int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v3; 
  DWServicesAccess *v4; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
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
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1441, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID", -2i64) )
    __debugbreak();
  if ( !s_currentBracket.tournamentID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1442, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID != 0)", (const char *)&queryFormat, "s_currentBracket.tournamentID != 0") )
    __debugbreak();
  if ( s_lobbyController < 0 )
  {
    Com_PrintWarning(25, "Tournament: We can't ack a tournament if we have no lobby controller set!\n");
    goto LABEL_30;
  }
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = AckJoinTournamentComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 6;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v3 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v3, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_28:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting ack join tournament task for tournament id %llu.\n", s_currentBracket.tournamentID);
    goto LABEL_30;
  }
  v4 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v4, s_lobbyController);
  v6 = (TaskCreateRequest *)DWAsyncMatchMaking::ackJoinTournament(AsyncMatchmaking, &result, s_currentBracket.tournamentID, 1);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_AckJoinTournament");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_AckJoinTournament");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_AckJoinTournament");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_28;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)1024, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87180, 5827i64);
LABEL_30:
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

/*
==============
OnlineTournament_AreMatchPrereqsComplete
==============
*/
bool OnlineTournament_AreMatchPrereqsComplete(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 MatchStorageIndex; 
  int v7; 
  bool result; 
  __int64 v9; 
  int totalRounds; 

  if ( s_currentBracket.participantCount / s_currentBracket.teamSize != s_currentBracket.teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4107, ASSERT_TYPE_ASSERT, "(s_currentBracket.participantCount / s_currentBracket.teamSize == s_currentBracket.teamCount)", (const char *)&queryFormat, "s_currentBracket.participantCount / s_currentBracket.teamSize == s_currentBracket.teamCount") )
    __debugbreak();
  if ( (unsigned int)roundIndex >= s_currentBracket.totalRounds )
  {
    totalRounds = s_currentBracket.totalRounds;
    LODWORD(v9) = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4108, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds )", "roundIndex doesn't index s_currentBracket.totalRounds\n\t%i not in [0, %i)", v9, totalRounds) )
      __debugbreak();
  }
  result = 1;
  if ( roundIndex )
  {
    v4 = 2 * matchIndex;
    v5 = roundIndex - 1;
    MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(v5, v4);
    v7 = OnlineTournament_GetMatchStorageIndex(v5, v4 + 1);
    if ( s_currentBracket.matchStatus[MatchStorageIndex].winner == TEAM_ZERO || s_currentBracket.matchStatus[v7].winner == TEAM_ZERO )
      return 0;
  }
  return result;
}

/*
==============
OnlineTournament_AreTeamsFlippedForBracket
==============
*/
unsigned __int8 OnlineTournament_AreTeamsFlippedForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  unsigned int v4; 
  __int64 MatchStorageIndex; 
  team_t v6; 
  unsigned int v7; 
  team_t v9; 
  unsigned int v10; 

  v4 = roundIndex;
  if ( roundIndex >= (unsigned int)(s_currentBracket.totalRounds + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4308, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds + 1 )", "roundIndex doesn't index s_currentBracket.totalRounds + 1\n\t%i not in [0, %i)", roundIndex, s_currentBracket.totalRounds + 1) )
    __debugbreak();
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v6 = s_currentBracket.matchStatus[MatchStorageIndex].teams[0];
  if ( v6 )
  {
    v7 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(v6);
    return _bittest((const int *)&v7, v4);
  }
  else
  {
    v9 = s_currentBracket.matchStatus[MatchStorageIndex].teams[1];
    if ( v9 )
    {
      v10 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(v9);
      return !_bittest((const int *)&v10, v4);
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
OnlineTournament_CanContinueInviteJoin
==============
*/
__int64 OnlineTournament_CanContinueInviteJoin(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  InitialDataTypeForJoining m_initialDataTypeForJoining; 
  const char *v3; 
  int v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  PartyData *ActiveParty; 
  __m256i controllerIndex; 

  m_initialDataTypeForJoining = data->m_initialDataTypeForJoining;
  if ( m_initialDataTypeForJoining != LOBBY_ID )
  {
    if ( m_initialDataTypeForJoining )
    {
      Com_PrintError(25, "Tournament: OnlineTournament_CanContinueInviteJoin Unsupported join type\n");
      return 2i64;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx]
      vmovups ymmword ptr [rsp+68h+controllerIndex], ymm0
    }
    v5 = Sys_Milliseconds();
    if ( !(_BYTE)s_tournamentState )
    {
      if ( !controllerIndex.m256i_i64[2] )
      {
        Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId The invite has no tournament id set and we are not active, so let the invite join continue\n");
        return 1;
      }
      v6 = DVARINT_online_tournament_invite_join_refresh_time_to_wait_for_tournament_state;
      if ( !DVARINT_online_tournament_invite_join_refresh_time_to_wait_for_tournament_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_invite_join_refresh_time_to_wait_for_tournament_state") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v5 - s_lastTimeTournamentStateFetched < v6->current.integer )
      {
        if ( s_rejoinTournamentID )
        {
          Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId There is a rejoin id, so starting rejoin process and cancelling the invite\n");
          if ( s_uiNavigationDestination && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3782, ASSERT_TYPE_ASSERT, "(s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE))", (const char *)&queryFormat, "s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE)") )
            __debugbreak();
          v7 = 3;
          if ( !OnlineTournament_CanDoRejoin(controllerIndex.m256i_i32[0]) )
          {
            Com_PrintError(25, "Tournament: not doing rejoin because the target controller is not active.");
            return 3i64;
          }
          s_lobbyController = controllerIndex.m256i_i32[0];
          s_uiNavigationDestination = 14;
          s_enteredStateTime = Sys_Milliseconds();
          Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 3i64);
          LOBYTE(s_tournamentState) = 3;
          ActiveParty = Party_GetActiveParty();
          if ( Party_AreWeHost(ActiveParty) )
          {
            PartyHost_GamestateChanged(ActiveParty);
            return 3i64;
          }
          return v7;
        }
        Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId There is no rejoin id, so letting the invite join process continuing as usual\n");
        return 1;
      }
      if ( !s_haveRequestedTournamentStateForCurrentInvite )
      {
        Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId Requesting tournament state\n");
        s_haveRequestedTournamentStateForCurrentInvite = 1;
        OnlineTournament_DoRequestTournamentState(controllerIndex.m256i_i32[0]);
      }
    }
    return 0i64;
  }
  if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
  {
    Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId In Tournament\n");
    return 1i64;
  }
  else
  {
    v3 = "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId Not in tournament but active\n";
    if ( !(_BYTE)s_tournamentState )
      v3 = "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId Inactive\n";
    Com_Printf(25, v3);
    return 1i64;
  }
}

/*
==============
OnlineTournament_CanContinueInviteJoinWithLobbyId
==============
*/
__int64 OnlineTournament_CanContinueInviteJoinWithLobbyId(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  const char *v2; 

  if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
  {
    Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId In Tournament\n");
    return 1i64;
  }
  else
  {
    v2 = "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId Not in tournament but active\n";
    if ( !(_BYTE)s_tournamentState )
      v2 = "Tournament: OnlineTournament_CanContinueInviteJoinWithLobbyId Inactive\n";
    Com_Printf(25, v2);
    return 1i64;
  }
}

/*
==============
OnlineTournament_CanContinueInviteJoinWithUniversalId
==============
*/
__int64 OnlineTournament_CanContinueInviteJoinWithUniversalId(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  int v2; 
  const dvar_t *v3; 
  int v4; 
  PartyData *ActiveParty; 
  int m_controllerIndex; 

  v2 = Sys_Milliseconds();
  if ( (_BYTE)s_tournamentState )
    return 0i64;
  if ( !data->m_tournamentId )
  {
    Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId The invite has no tournament id set and we are not active, so let the invite join continue\n");
    return 1i64;
  }
  v3 = DVARINT_online_tournament_invite_join_refresh_time_to_wait_for_tournament_state;
  if ( !DVARINT_online_tournament_invite_join_refresh_time_to_wait_for_tournament_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_invite_join_refresh_time_to_wait_for_tournament_state") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v2 - s_lastTimeTournamentStateFetched >= v3->current.integer )
  {
    if ( !s_haveRequestedTournamentStateForCurrentInvite )
    {
      Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId Requesting tournament state\n");
      m_controllerIndex = data->m_controllerIndex;
      s_haveRequestedTournamentStateForCurrentInvite = 1;
      OnlineTournament_DoRequestTournamentState(m_controllerIndex);
    }
    return 0i64;
  }
  if ( s_rejoinTournamentID )
  {
    Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId There is a rejoin id, so starting rejoin process and cancelling the invite\n");
    v4 = data->m_controllerIndex;
    if ( s_uiNavigationDestination )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3782, ASSERT_TYPE_ASSERT, "(s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE))", (const char *)&queryFormat, "s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE)") )
        __debugbreak();
    }
    if ( OnlineTournament_CanDoRejoin(v4) )
    {
      s_lobbyController = v4;
      s_uiNavigationDestination = 14;
      s_enteredStateTime = Sys_Milliseconds();
      Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 3i64);
      LOBYTE(s_tournamentState) = 3;
      ActiveParty = Party_GetActiveParty();
      if ( Party_AreWeHost(ActiveParty) )
      {
        PartyHost_GamestateChanged(ActiveParty);
        return 3i64;
      }
    }
    else
    {
      Com_PrintError(25, "Tournament: not doing rejoin because the target controller is not active.");
    }
    return 3i64;
  }
  else
  {
    Com_Printf(25, "Tournament: OnlineTournament_CanContinueInviteJoinWithUniversalId There is no rejoin id, so letting the invite join process continuing as usual\n");
    return 1i64;
  }
}

/*
==============
OnlineTournament_CanDoRejoin
==============
*/
bool OnlineTournament_CanDoRejoin(const int controllerIndex)
{
  const dvar_t *v2; 
  LocalClientNum_t outLocalClientNum; 

  if ( !g_partyData.inParty )
    return 0;
  v2 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum);
}

/*
==============
OnlineTournament_CanReceiveMessages
==============
*/
bool OnlineTournament_CanReceiveMessages()
{
  return s_chatLobbyID != 0;
}

/*
==============
OnlineTournament_CanSendMessages
==============
*/
bool OnlineTournament_CanSendMessages()
{
  return (_BYTE)s_lobbyCommunicationState == HALF_HALF;
}

/*
==============
OnlineTournament_CheckForExistingTournamentsAndHandle
==============
*/

void __fastcall OnlineTournament_CheckForExistingTournamentsAndHandle(const int controllerIndex)
{
  OnlineTournament_DoRequestTournamentState(controllerIndex);
}

/*
==============
OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket
==============
*/
bool OnlineTournament_CheckIfXuidInOurTournamentTeamIfHasBracket(XUID xuid)
{
  int v2; 
  int v3; 
  XUID xuida; 

  if ( s_currentBracket.tournamentID != OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) || (unsigned __int8)s_tournamentState < 8u )
    return 0;
  xuida.m_id = xuid.m_id;
  v2 = 0;
  if ( s_currentBracket.participantCount <= 0 )
  {
LABEL_6:
    v3 = -1;
  }
  else
  {
    while ( !XUID::operator==(&s_currentBracket.participants[v2], &xuida) )
    {
      if ( ++v2 >= s_currentBracket.participantCount )
        goto LABEL_6;
    }
    v3 = v2 / s_currentBracket.teamSize;
  }
  return s_myTeamID == v3;
}

/*
==============
OnlineTournament_CreateBracketFromMatchmakerData
==============
*/
void OnlineTournament_CreateBracketFromMatchmakerData(void)
{
  s_mmLobbyID = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  s_currentBracket.tournamentID = OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
OnlineTournament_CreateTemporaryLobby
==============
*/
void OnlineTournament_CreateTemporaryLobby()
{
  LocalClientNum_t ClientFromController; 
  PartyData *ActiveParty; 

  if ( g_partyData.inParty && Party_AreWeHost(&g_partyData) )
  {
    ClientFromController = CL_Mgr_GetClientFromController(s_lobbyController);
    Cbuf_ExecuteBufferInternal(ClientFromController, s_lobbyController, "xstartlobby", 0, 0);
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 12i64);
    LOBYTE(s_tournamentState) = 12;
    ActiveParty = Party_GetActiveParty();
    if ( Party_AreWeHost(ActiveParty) )
      PartyHost_GamestateChanged(ActiveParty);
  }
}

/*
==============
OnlineTournament_DoAckJoinTournament
==============
*/
void OnlineTournament_DoAckJoinTournament(void)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.taskType[0] = 6;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_DoLeaveAllTournaments
==============
*/
void OnlineTournament_DoLeaveAllTournaments(const int controllerIndex)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.controllerIndex = controllerIndex;
  task.taskType[0] = 5;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_DoMatchmakingReadyUp
==============
*/
char OnlineTournament_DoMatchmakingReadyUp()
{
  LobbyQueuedTask task; 

  if ( (_BYTE)s_tournamentState != 8 && (unsigned __int8)(s_tournamentState - 15) > 2u )
    return 0;
  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.taskType[0] = 7;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
  return 1;
}

/*
==============
OnlineTournament_DoRegisterForTournament
==============
*/
void OnlineTournament_DoRegisterForTournament(const int controllerIndex)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  s_nextTournamentFullCount = 0;
  s_rejoinTournamentID = 0i64;
  s_lobbyController = controllerIndex;
  task.taskType[0] = 10;
  task.controllerIndex = controllerIndex;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_DoRejoin
==============
*/
void OnlineTournament_DoRejoin(const int controllerIndex)
{
  PartyData *ActiveParty; 
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  s_lobbyController = controllerIndex;
  task.taskType[0] = 9;
  task.controllerIndex = controllerIndex;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 6i64);
  LOBYTE(s_tournamentState) = 6;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_DoRejoinProcess
==============
*/
void OnlineTournament_DoRejoinProcess(const int controllerIndex)
{
  PartyData *ActiveParty; 

  if ( s_uiNavigationDestination && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3782, ASSERT_TYPE_ASSERT, "(s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE))", (const char *)&queryFormat, "s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE)") )
    __debugbreak();
  if ( OnlineTournament_CanDoRejoin(controllerIndex) )
  {
    s_lobbyController = controllerIndex;
    s_uiNavigationDestination = 14;
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 3i64);
    LOBYTE(s_tournamentState) = 3;
    ActiveParty = Party_GetActiveParty();
    if ( Party_AreWeHost(ActiveParty) )
      PartyHost_GamestateChanged(ActiveParty);
  }
  else
  {
    Com_PrintError(25, "Tournament: not doing rejoin because the target controller is not active.");
  }
}

/*
==============
OnlineTournament_DoReminderProcess
==============
*/
void OnlineTournament_DoReminderProcess(const int controllerIndex)
{
  PartyData *ActiveParty; 

  if ( controllerIndex != s_lobbyController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3772, ASSERT_TYPE_ASSERT, "(controllerIndex == s_lobbyController)", (const char *)&queryFormat, "controllerIndex == s_lobbyController") )
    __debugbreak();
  if ( s_uiNavigationDestination && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3773, ASSERT_TYPE_ASSERT, "(s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE))", (const char *)&queryFormat, "s_uiNavigationDestination == static_cast<int>(PartyUIRoot::FREE)") )
    __debugbreak();
  s_uiNavigationDestination = 14;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 4i64);
  LOBYTE(s_tournamentState) = 4;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
}

/*
==============
OnlineTournament_DoRequestTournamentState
==============
*/
void OnlineTournament_DoRequestTournamentState(const int controllerIndex)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.controllerIndex = controllerIndex;
  task.taskType[0] = 4;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_EnqueueCBufCommand
==============
*/
void OnlineTournament_EnqueueCBufCommand(void)
{
  ++s_cbufTaskQueuedCount;
}

/*
==============
OnlineTournament_EnqueueTask
==============
*/
void OnlineTournament_EnqueueTask(const LobbyQueuedTask *task)
{
  int v1; 
  __int64 v2; 
  __int64 v3; 

  v1 = 0;
  while ( 1 )
  {
    v2 = ((_BYTE)s_lobbyTaskQueueNextSend + (_BYTE)v1) & 7;
    if ( !s_lobbyTaskQueue[v2].taskType[0] )
      break;
    if ( (unsigned int)++v1 >= 8 )
    {
      Com_PrintError(25, "Tournament: Dropping message because the message queue is full!\n");
      return;
    }
  }
  v3 = 8i64;
  _RAX = &s_lobbyTaskQueue[v2];
  do
  {
    _RAX = (LobbyQueuedTask *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    task = (const LobbyQueuedTask *)((char *)task + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v3;
  }
  while ( v3 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx]
    vmovups xmmword ptr [rax], xmm0
    vmovups xmm1, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rax+10h], xmm1
    vmovups xmm0, xmmword ptr [rcx+20h]
    vmovups xmmword ptr [rax+20h], xmm0
    vmovups xmm1, xmmword ptr [rcx+30h]
    vmovups xmmword ptr [rax+30h], xmm1
    vmovups xmm0, xmmword ptr [rcx+40h]
    vmovups xmmword ptr [rax+40h], xmm0
    vmovups xmm1, xmmword ptr [rcx+50h]
    vmovups xmmword ptr [rax+50h], xmm1
  }
  _RAX->messageSize = task->messageSize;
}

/*
==============
OnlineTournament_Enter
==============
*/
void OnlineTournament_Enter(const int controllerIndex)
{
  PartyData *ActiveParty; 

  s_lobbyController = controllerIndex;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 5i64);
  LOBYTE(s_tournamentState) = 5;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  s_lastFrameTime = Sys_Milliseconds();
}

/*
==============
OnlineTournament_FenceDCQoSUpdated
==============
*/
void OnlineTournament_FenceDCQoSUpdated(const int controllerIndex, const bool value)
{
  char destString[64]; 

  if ( value && Online_DcQos_GetBestDatacenterName(destString, 64) )
    Core_strcpy(s_bestDatacenterName, 0x40ui64, destString);
}

/*
==============
OnlineTournament_FindTeamForUser
==============
*/
__int64 OnlineTournament_FindTeamForUser(XUID xuid, int *out_memberIndex)
{
  int v2; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  v2 = 0;
  if ( s_currentBracket.participantCount <= 0 )
    return 0xFFFFFFFFi64;
  while ( !XUID::operator==(&s_currentBracket.participants[v2], &xuida) )
  {
    if ( ++v2 >= s_currentBracket.participantCount )
      return 0xFFFFFFFFi64;
  }
  if ( out_memberIndex )
    *out_memberIndex = v2 % s_currentBracket.teamSize;
  return (unsigned int)(v2 / s_currentBracket.teamSize);
}

/*
==============
OnlineTournament_Frame
==============
*/
void OnlineTournament_Frame(void)
{
  int v0; 
  int v1; 
  int v2; 
  bool *v3; 
  bool CanDoRejoin; 
  bool v5; 
  int v6; 
  const dvar_t *v7; 
  const XUID *v8; 
  __int64 v11; 
  PartyData *PartyData; 
  XUID result; 
  LobbyQueuedTask task; 

  v0 = Sys_Milliseconds();
  v1 = v0 - s_lastFrameTime;
  v2 = 0;
  v3 = s_wasControllerActive;
  do
  {
    CanDoRejoin = OnlineTournament_CanDoRejoin(v2);
    v5 = CanDoRejoin;
    if ( !*v3 && CanDoRejoin )
      OnlineTournament_DoRequestTournamentState(v2);
    *v3 = v5;
    ++v2;
    ++v3;
  }
  while ( v2 < 8 );
  v6 = Sys_Milliseconds();
  if ( s_currentMatchStatusDirty )
  {
    v7 = DVARINT_online_tournament_match_status_delay;
    if ( !DVARINT_online_tournament_match_status_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_match_status_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v6 - s_lastMatchStatusSent > v7->current.integer )
    {
      bdFileData::bdFileData(&task.fileData);
      XUID::XUID(&task.recipient);
      task.taskType[0] = 2;
      v8 = XUID::NullXUID(&result);
      XUID::operator=(&task.recipient, v8);
      _RAX = task.message;
      _RCX = &s_currentMatchStatus;
      v11 = 3i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm0, ymmword ptr [rcx+20h]
          vmovups ymmword ptr [rax+20h], ymm0
          vmovups ymm0, ymmword ptr [rcx+40h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups xmm0, xmmword ptr [rcx+60h]
          vmovups xmmword ptr [rax+60h], xmm0
        }
        _RAX += 128;
        __asm
        {
          vmovups xmm1, xmmword ptr [rcx+70h]
          vmovups xmmword ptr [rax-10h], xmm1
        }
        _RCX = (LobbyMessageMatchUpdate *)((char *)_RCX + 128);
        --v11;
      }
      while ( v11 );
      task.messageSize = 384i64;
      task.messageType[0] = 0;
      OnlineTournament_EnqueueTask(&task);
      s_currentMatchStatusDirty = 0;
      s_lastMatchStatusSent = v6;
      bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
      bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
    }
  }
  OnlineTournament_UpdateSendFrame(v1);
  OnlineTournament_UpdateStateFrame();
  OnlineTournament_UIFrame();
  if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
  {
    if ( OnlineTournament_AreMatchPrereqsComplete(s_myCurrentRound, s_myCurrentMatch) )
      s_myMatchReadyTimer += v1;
    else
      s_myMatchReadyTimer = 0;
  }
  if ( !s_partyHostWasInTournament )
    goto LABEL_33;
  if ( !s_partyHostIsInTournament )
  {
    if ( !g_partyData.inParty || Party_AreWeHost(&g_partyData) || ((PartyData = Lobby_GetPartyData(), g_partyData.inParty) || Lobby_IsInLobby()) && (!Lobby_IsInLobby() || PartyData->lastPartyStateTime) && (!g_partyData.inParty || g_partyData.lastPartyStateTime) )
    {
      Com_Printf(25, "Tournament: Private party client is leaving because the host is not in the tournament anymore!\n");
      if ( s_lobbyController < 0 )
      {
        s_lobbyController = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        if ( s_lobbyController == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 525, ASSERT_TYPE_ASSERT, "(s_lobbyController != (-1))", (const char *)&queryFormat, "s_lobbyController != INVALID_CONTROLLER_PORT") )
          __debugbreak();
      }
      OnlineTournament_Leave();
LABEL_33:
      s_partyHostWasInTournament = s_partyHostIsInTournament;
    }
  }
  s_lastFrameTime = v0;
}

/*
==============
OnlineTournament_GetBracket
==============
*/
void OnlineTournament_GetBracket(OnlineTournamentBracket *bracket)
{
  __int64 v2; 

  _RAX = &s_currentBracket;
  v2 = 9i64;
  do
  {
    bracket = (OnlineTournamentBracket *)((char *)bracket + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (OnlineTournamentBracket *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v2;
  }
  while ( v2 );
}

/*
==============
OnlineTournament_GetCurrentMatchTime
==============
*/
__int64 OnlineTournament_GetCurrentMatchTime(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  int MatchStorageIndex; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned __int8 v6; 
  int v8; 

  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0i64;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v3 = MatchStorageIndex;
  if ( (unsigned int)MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4401, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  v4 = v3;
  v5 = 376 * (s_statusUpdateIndex[v3] + 6 * v3);
  v6 = *((_BYTE *)&s_statusUpdates.timeMode + v5);
  if ( v6 )
    return (unsigned int)-v6;
  if ( !s_statusTimeUpdates[v4] )
    return 0i64;
  v8 = *(_DWORD *)&s_statusUpdates.scoreHistory[v5 + 32];
  return (unsigned int)(v8 + s_statusTimeUpdates[v4] - Sys_Milliseconds());
}

/*
==============
OnlineTournament_GetCurrentSubMatchIndex
==============
*/
__int64 OnlineTournament_GetCurrentSubMatchIndex(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  int MatchStorageIndex; 
  __int64 v4; 

  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0i64;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v4 = MatchStorageIndex;
  if ( (unsigned int)MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4300, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  return (unsigned int)*(&s_statusUpdates.roundNumber + 2256 * v4 + 376 * s_statusUpdateIndex[v4]);
}

/*
==============
OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString
==============
*/
const char *OnlineTournament_GetCurrentTournamentChatChannelCommunicationStateString()
{
  return s_tournamentChatChannelCommunicationStateNames[(unsigned __int8)s_lobbyCommunicationState];
}

/*
==============
OnlineTournament_GetCurrentTournamentLobbyTaskString
==============
*/
const char *OnlineTournament_GetCurrentTournamentLobbyTaskString()
{
  return s_tournamentTaskTypeNames[(unsigned __int8)s_lobbyTaskData.queuedTask.taskType[0]];
}

/*
==============
OnlineTournament_GetCurrentTournamentStateString
==============
*/
const char *OnlineTournament_GetCurrentTournamentStateString()
{
  return s_tournamentStateNames[(unsigned __int8)s_tournamentState];
}

/*
==============
OnlineTournament_GetLoadingScreenLobby
==============
*/
const char *OnlineTournament_GetLoadingScreenLobby()
{
  const dvar_t *v0; 
  const char *result; 

  v0 = DVARBOOL_ui_is_magma_gamemode;
  if ( !DVARBOOL_ui_is_magma_gamemode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_is_magma_gamemode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  result = "WZTournamentLoadingScreen";
  if ( !v0->current.enabled )
    return "TournamentLoadingScreen";
  return result;
}

/*
==============
OnlineTournament_GetLobbyId
==============
*/
unsigned __int64 OnlineTournament_GetLobbyId(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  int MatchStorageIndex; 
  __int64 v3; 

  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v3 = MatchStorageIndex;
  if ( (unsigned int)MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4099, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  return s_currentBracket.matchStatus[v3].lobbyID;
}

/*
==============
OnlineTournament_GetMMTournamentStatus
==============
*/
__int64 OnlineTournament_GetMMTournamentStatus()
{
  return (unsigned __int8)s_currentBracket.mmStatus;
}

/*
==============
OnlineTournament_GetMapNameForRound
==============
*/
char *OnlineTournament_GetMapNameForRound(unsigned __int16 roundIndex)
{
  int v3; 
  int v4; 

  if ( roundIndex >= 4u )
  {
    v4 = 4;
    v3 = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4387, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( 4 )", "roundIndex doesn't index MAX_TOURNAMENT_ROUNDS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_mapsChosenForCurrentTournament[roundIndex];
}

/*
==============
OnlineTournament_GetMatchStorageIndex
==============
*/
__int64 OnlineTournament_GetMatchStorageIndex(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  char totalRounds; 
  char v5; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  if ( s_currentBracket.participantCount / s_currentBracket.teamSize != s_currentBracket.teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 602, ASSERT_TYPE_ASSERT, "(s_currentBracket.participantCount / s_currentBracket.teamSize == s_currentBracket.teamCount)", (const char *)&queryFormat, "s_currentBracket.participantCount / s_currentBracket.teamSize == s_currentBracket.teamCount") )
    __debugbreak();
  totalRounds = s_currentBracket.totalRounds;
  if ( (unsigned int)roundIndex >= s_currentBracket.totalRounds )
  {
    v11 = s_currentBracket.totalRounds;
    LODWORD(v9) = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 603, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds )", "roundIndex doesn't index s_currentBracket.totalRounds\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
    totalRounds = s_currentBracket.totalRounds;
  }
  v5 = totalRounds - roundIndex;
  v6 = 1 << (v5 - 1);
  if ( matchIndex >= v6 )
  {
    LODWORD(v10) = 1 << (v5 - 1);
    LODWORD(v9) = matchIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 607, ASSERT_TYPE_ASSERT, "(unsigned)( matchIndex ) < (unsigned)( roundSize )", "matchIndex doesn't index roundSize\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = matchIndex + v6 - 1;
  if ( v7 >= 0xF )
  {
    LODWORD(v10) = 15;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 611, ASSERT_TYPE_SANITY, "(unsigned)( resultIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "resultIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  return v7;
}

/*
==============
OnlineTournament_GetMyCurrentMatch
==============
*/
__int64 OnlineTournament_GetMyCurrentMatch()
{
  return s_myCurrentMatch;
}

/*
==============
OnlineTournament_GetMyCurrentRound
==============
*/
__int64 OnlineTournament_GetMyCurrentRound()
{
  return s_myCurrentRound;
}

/*
==============
OnlineTournament_GetMyMatchReadyTimer
==============
*/
__int64 OnlineTournament_GetMyMatchReadyTimer()
{
  return (unsigned int)s_myMatchReadyTimer;
}

/*
==============
OnlineTournament_GetMyParticipationStatus
==============
*/
__int64 OnlineTournament_GetMyParticipationStatus()
{
  return (unsigned __int8)s_myParticipationStatus;
}

/*
==============
OnlineTournament_GetMyParticipationStatusString
==============
*/
char *OnlineTournament_GetMyParticipationStatusString()
{
  return j_va((const char *)&queryFormat, s_tournamentParticipationStatusNames[(unsigned __int8)s_myParticipationStatus]);
}

/*
==============
OnlineTournament_GetMyTournamentTime
==============
*/
__int64 OnlineTournament_GetMyTournamentTime()
{
  return (unsigned int)s_myTournamentTime;
}

/*
==============
OnlineTournament_GetMyTourneyDataString
==============
*/
char *OnlineTournament_GetMyTourneyDataString()
{
  unsigned __int16 v0; 
  unsigned __int16 v1; 
  const char *v2; 
  unsigned int MatchStorageIndex; 
  __int64 v4; 
  bool matched; 
  const char *v6; 

  v0 = s_myCurrentRound;
  v1 = s_myCurrentMatch;
  v2 = "Unavailable";
  if ( s_currentBracket.tournamentID == OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) && (unsigned __int8)s_tournamentState >= 8u )
  {
    if ( v0 >= s_currentBracket.totalRounds )
      goto LABEL_18;
    MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(v0, v1);
    v4 = (int)MatchStorageIndex;
    if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4358, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
      __debugbreak();
    if ( s_currentBracket.matchStatus[v4].winner || s_currentBracket.matchStatus[v4].expired )
    {
      v2 = "Complete";
    }
    else
    {
LABEL_18:
      if ( OnlineTournament_IsMatchInProgress(v0, v1) )
      {
        v2 = "In progress";
      }
      else
      {
        matched = OnlineTournament_AreMatchPrereqsComplete(v0, v1);
        v6 = "Available";
        if ( !matched )
          v6 = "Unavailable";
        v2 = v6;
      }
    }
  }
  return j_va("Round: %d, Match: %d, Match Status: %s", v0, v1, v2);
}

/*
==============
OnlineTournament_GetNavigationDestination
==============
*/
__int64 OnlineTournament_GetNavigationDestination()
{
  return (unsigned int)s_uiNavigationDestination;
}

/*
==============
OnlineTournament_GetNextTournamentTime
==============
*/
__int64 OnlineTournament_GetNextTournamentTime(int aheadCount)
{
  const dvar_t *v1; 

  v1 = DVARINT_online_tournament_time_interval;
  if ( !DVARINT_online_tournament_time_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_time_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (unsigned int)(s_nextTournamentTime + aheadCount * v1->current.integer);
}

/*
==============
OnlineTournament_GetParticipant
==============
*/
XUID *OnlineTournament_GetParticipant(XUID *result, int index)
{
  __int64 v3; 
  int participantCount; 

  v3 = index;
  if ( (unsigned int)index >= s_currentBracket.participantCount )
  {
    participantCount = s_currentBracket.participantCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4079, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_currentBracket.participantCount )", "index doesn't index s_currentBracket.participantCount\n\t%i not in [0, %i)", index, participantCount) )
      __debugbreak();
  }
  result->m_id = (unsigned __int64)s_currentBracket.participants[v3];
  return result;
}

/*
==============
OnlineTournament_GetParticipantByTeam
==============
*/
XUID *OnlineTournament_GetParticipantByTeam(XUID *result, int teamIndex, int memberIndex)
{
  int teamSize; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v11; 
  int teamCount; 

  if ( (unsigned int)teamIndex >= s_currentBracket.teamCount )
  {
    teamCount = s_currentBracket.teamCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4068, ASSERT_TYPE_ASSERT, "(unsigned)( teamIndex ) < (unsigned)( s_currentBracket.teamCount )", "teamIndex doesn't index s_currentBracket.teamCount\n\t%i not in [0, %i)", teamIndex, teamCount) )
      __debugbreak();
  }
  teamSize = s_currentBracket.teamSize;
  if ( (unsigned int)memberIndex >= s_currentBracket.teamSize )
  {
    LODWORD(v11) = s_currentBracket.teamSize;
    LODWORD(v9) = memberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4069, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( s_currentBracket.teamSize )", "memberIndex doesn't index s_currentBracket.teamSize\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
    teamSize = s_currentBracket.teamSize;
  }
  v7 = memberIndex + teamIndex * teamSize;
  if ( v7 >= s_currentBracket.participantCount )
  {
    LODWORD(v11) = s_currentBracket.participantCount;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4079, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( s_currentBracket.participantCount )", "index doesn't index s_currentBracket.participantCount\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  result->m_id = (unsigned __int64)s_currentBracket.participants[v7];
  return result;
}

/*
==============
OnlineTournament_GetParticipantCount
==============
*/
__int64 OnlineTournament_GetParticipantCount()
{
  return (unsigned int)s_currentBracket.participantCount;
}

/*
==============
OnlineTournament_GetParticipantHealthByTeam
==============
*/
__int64 OnlineTournament_GetParticipantHealthByTeam(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team, int memberIndex)
{
  __int64 v4; 
  unsigned int MatchStorageIndex; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = memberIndex;
  if ( (unsigned __int8)team >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4334, ASSERT_TYPE_ASSERT, "(unsigned)( teamByte ) < (unsigned)( 2 )", "teamByte doesn't index 2\n\t%i not in [0, %i)", (unsigned __int8)team, 2) )
    __debugbreak();
  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0i64;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v10 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF )
  {
    LODWORD(v12) = 15;
    LODWORD(v11) = MatchStorageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4343, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  return (unsigned __int8)s_statusUpdates.scoreHistory[2256 * v10 - 320 + 376 * s_statusUpdateIndex[v10] + 168 * (unsigned __int8)team + 32 * v4];
}

/*
==============
OnlineTournament_GetPartyHostIsQueuedForTournament
==============
*/
_BOOL8 OnlineTournament_GetPartyHostIsQueuedForTournament()
{
  return s_partyHostIsQueuedForTournament;
}

/*
==============
OnlineTournament_GetRoundCount
==============
*/
__int64 OnlineTournament_GetRoundCount()
{
  return (unsigned int)s_currentBracket.totalRounds;
}

/*
==============
OnlineTournament_GetScoreForBracket
==============
*/
__int64 OnlineTournament_GetScoreForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team)
{
  unsigned int MatchStorageIndex; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  if ( (unsigned __int8)team >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4253, ASSERT_TYPE_ASSERT, "(unsigned)( teamByte ) < (unsigned)( 2 )", "teamByte doesn't index 2\n\t%i not in [0, %i)", (unsigned __int8)team, 2) )
    __debugbreak();
  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0i64;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v8 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF )
  {
    LODWORD(v10) = 15;
    LODWORD(v9) = MatchStorageIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4262, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( s_currentBracket.matchStatus[v8].winner )
    return s_currentBracket.matchStatus[v8].scores[(unsigned __int8)team];
  else
    return *(&s_statusUpdates.teamStatus[0].score + 1128 * v8 + 188 * s_statusUpdateIndex[v8] + 84 * (unsigned __int8)team);
}

/*
==============
OnlineTournament_GetScoreHistoryEntryForBracket
==============
*/
__int64 OnlineTournament_GetScoreHistoryEntryForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, int subMatch)
{
  __int64 v3; 
  unsigned int MatchStorageIndex; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = subMatch;
  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0xFFFFFFFFi64;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v6 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4284, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x20 )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4286, ASSERT_TYPE_ASSERT, "(unsigned)( subMatch ) < (unsigned)( ( sizeof( *array_counter( s_statusUpdates[matchStorageIndex][s_statusUpdateIndex[matchStorageIndex]].scoreHistory ) ) + 0 ) )", "subMatch doesn't index ARRAY_COUNT( s_statusUpdates[matchStorageIndex][s_statusUpdateIndex[matchStorageIndex]].scoreHistory )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  return (unsigned int)s_statusUpdates.scoreHistory[2256 * v6 + 376 * s_statusUpdateIndex[v6] + v3];
}

/*
==============
OnlineTournament_GetStatusUpdate
==============
*/
void OnlineTournament_GetStatusUpdate(MatchStatusUpdate *statusUpdate)
{
  memcpy_0(statusUpdate, &s_statusUpdates, 0x8430ui64);
}

/*
==============
OnlineTournament_GetStatusUpdateIndex
==============
*/
void OnlineTournament_GetStatusUpdateIndex(int *statusUpdateIndex)
{
  __asm
  {
    vmovups ymm0, cs:s_statusUpdateIndex
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, cs:xmmword_14B6B3B78
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, cs:qword_14B6B3B88
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  statusUpdateIndex[14] = dword_14B6B3B90;
}

/*
==============
OnlineTournament_GetTeamCount
==============
*/
__int64 OnlineTournament_GetTeamCount()
{
  return (unsigned int)s_currentBracket.teamCount;
}

/*
==============
OnlineTournament_GetTeamForMatch
==============
*/
__int64 OnlineTournament_GetTeamForMatch(XUID xuid, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  int v3; 
  int v6; 
  __int64 result; 
  __int64 MatchStorageIndex; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  XUID xuida; 

  v3 = 0;
  xuida.m_id = xuid.m_id;
  if ( s_currentBracket.participantCount <= 0 )
    return 0xFFFFFFFFi64;
  while ( !XUID::operator==(&s_currentBracket.participants[v3], &xuida) )
  {
    if ( ++v3 >= s_currentBracket.participantCount )
      return 0xFFFFFFFFi64;
  }
  v6 = v3 / s_currentBracket.teamSize;
  if ( v3 / s_currentBracket.teamSize < 0 )
    return 0xFFFFFFFFi64;
  if ( roundIndex >= (unsigned int)(s_currentBracket.totalRounds + 1) )
  {
    v12 = s_currentBracket.totalRounds + 1;
    v10 = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4241, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds + 1 )", "roundIndex doesn't index s_currentBracket.totalRounds + 1\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( v6 == s_currentBracket.matchStatus[(int)OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex)].teams[0] )
    return 0i64;
  if ( roundIndex >= (unsigned int)(s_currentBracket.totalRounds + 1) )
  {
    LODWORD(v11) = s_currentBracket.totalRounds + 1;
    LODWORD(v9) = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4241, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds + 1 )", "roundIndex doesn't index s_currentBracket.totalRounds + 1\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  MatchStorageIndex = (int)OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  result = 1i64;
  if ( v6 != s_currentBracket.matchStatus[MatchStorageIndex].teams[1] )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
OnlineTournament_GetTeamIdForBracket
==============
*/
__int64 OnlineTournament_GetTeamIdForBracket(unsigned __int16 roundIndex, unsigned __int16 matchIndex, TournamentTeam team)
{
  __int64 v7; 
  int v8; 
  __int64 v9; 
  int v10; 

  if ( (unsigned __int8)team >= 2u )
  {
    v10 = 2;
    v8 = (unsigned __int8)team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4240, ASSERT_TYPE_ASSERT, "(unsigned)( teamByte ) < (unsigned)( 2 )", "teamByte doesn't index 2\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( roundIndex >= (unsigned int)(s_currentBracket.totalRounds + 1) )
  {
    LODWORD(v9) = s_currentBracket.totalRounds + 1;
    LODWORD(v7) = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4241, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( s_currentBracket.totalRounds + 1 )", "roundIndex doesn't index s_currentBracket.totalRounds + 1\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned int)s_currentBracket.matchStatus[(int)OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex)].teams[(unsigned __int8)team];
}

/*
==============
OnlineTournament_GetTeamName
==============
*/
void OnlineTournament_GetTeamName(int teamIndex, char *out_NameBuff, int nameBuffLength)
{
  if ( teamIndex >= 0 )
    j_snprintf(out_NameBuff, nameBuffLength, "MPUI/TOURNAMENT_TEAM_NAME_%d", (unsigned int)teamIndex);
  else
    j_snprintf(out_NameBuff, nameBuffLength, (const char *const)&queryFormat.fmt + 3);
}

/*
==============
OnlineTournament_GetTeamSize
==============
*/
__int64 OnlineTournament_GetTeamSize()
{
  return (unsigned int)s_currentBracket.teamSize;
}

/*
==============
OnlineTournament_GetTimeUntilMyTournament
==============
*/
__int64 OnlineTournament_GetTimeUntilMyTournament()
{
  int v0; 

  v0 = s_myTournamentTime;
  return v0 - LiveStorage_GetUTC();
}

/*
==============
OnlineTournament_GetTimeUntilNextTournament
==============
*/
__int64 OnlineTournament_GetTimeUntilNextTournament(int aheadCount)
{
  int NextTournamentTime; 

  NextTournamentTime = OnlineTournament_GetNextTournamentTime(aheadCount);
  return NextTournamentTime - LiveStorage_GetUTC();
}

/*
==============
OnlineTournament_GetTournamentChatChannelCommunicationStateStringForState
==============
*/
const char *OnlineTournament_GetTournamentChatChannelCommunicationStateStringForState(LobbyCommunicationState lobbyCommunicationState)
{
  return s_tournamentChatChannelCommunicationStateNames[(unsigned __int8)lobbyCommunicationState];
}

/*
==============
OnlineTournament_GetTournamentId
==============
*/
unsigned __int64 OnlineTournament_GetTournamentId()
{
  return s_currentBracket.tournamentID;
}

/*
==============
OnlineTournament_GetTournamentLobbyTaskStringForTaskType
==============
*/
const char *OnlineTournament_GetTournamentLobbyTaskStringForTaskType(LobbyTaskType taskType)
{
  return s_tournamentTaskTypeNames[(unsigned __int8)taskType];
}

/*
==============
OnlineTournament_GetTournamentStateStringForState
==============
*/
const char *OnlineTournament_GetTournamentStateStringForState(TournamentState state)
{
  return s_tournamentStateNames[(unsigned __int8)state];
}

/*
==============
OnlineTournament_GetWinner
==============
*/
__int64 OnlineTournament_GetWinner(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  unsigned int MatchStorageIndex; 
  __int64 v3; 

  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v3 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4089, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus)\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  return (unsigned int)s_currentBracket.matchStatus[v3].winner;
}

/*
==============
OnlineTournament_HandleCancelMatchmakingForBracket
==============
*/
void OnlineTournament_HandleCancelMatchmakingForBracket(void)
{
  OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
OnlineTournament_HasPendingWork
==============
*/
bool OnlineTournament_HasPendingWork()
{
  const dvar_t *v0; 
  int v1; 
  LobbyQueuedTask *v2; 
  unsigned int i; 
  bool v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  v0 = DVARBOOL_online_tournament_wait_for_pending_tasks_before_dedi_shutdown_disabled;
  if ( !DVARBOOL_online_tournament_wait_for_pending_tasks_before_dedi_shutdown_disabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_wait_for_pending_tasks_before_dedi_shutdown_disabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    return 0;
  if ( s_cbufTaskQueuedCount != s_cbufTaskProcessedCount )
    return 1;
  v1 = 0;
  v2 = &s_lobbyTaskQueue[1];
  for ( i = 0; i < 8; i += 8 )
  {
    v4 = v2[-1].taskType[0] == 0;
    v5 = v1 + 1;
    v2 += 8;
    if ( v4 )
      v5 = v1;
    v6 = v5 + 1;
    if ( !v2[-8].taskType[0] )
      v6 = v5;
    v7 = v6 + 1;
    if ( !v2[-7].taskType[0] )
      v7 = v6;
    v8 = v7 + 1;
    if ( !v2[-6].taskType[0] )
      v8 = v7;
    v9 = v8 + 1;
    if ( !v2[-5].taskType[0] )
      v9 = v8;
    v10 = v9 + 1;
    if ( !v2[-4].taskType[0] )
      v10 = v9;
    v11 = v10 + 1;
    if ( !v2[-3].taskType[0] )
      v11 = v10;
    v1 = v11 + 1;
    if ( !v2[-2].taskType[0] )
      v1 = v11;
  }
  if ( s_lobbyTaskData.queuedTask.taskType[0] )
    ++v1;
  return v1 > 0;
}

/*
==============
OnlineTournament_HasReceivedBracket
==============
*/
bool OnlineTournament_HasReceivedBracket()
{
  return s_currentBracket.tournamentID == OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) && (unsigned __int8)s_tournamentState >= 8u;
}

/*
==============
OnlineTournament_HasTournamentDoc
==============
*/
bool OnlineTournament_HasTournamentDoc()
{
  return s_currentBracket.tournamentID && (unsigned __int8)s_tournamentState > 7u;
}

/*
==============
OnlineTournament_HasValidDatacenter
==============
*/
bool OnlineTournament_HasValidDatacenter()
{
  char destString[64]; 

  if ( Online_DcQos_GetBestDatacenterName(destString, 64) )
    Core_strcpy(s_bestDatacenterName, 0x40ui64, destString);
  return s_bestDatacenterName[0] != 0;
}

/*
==============
OnlineTournament_HostSendDirectMessage
==============
*/
void OnlineTournament_HostSendDirectMessage(XUID recipient, const void *message, unsigned __int64 messageSize, LobbyMessageType messageType)
{
  unsigned __int8 v4; 
  TaskManager *Instance; 
  TaskManager *v8; 
  DWServicesAccess *v9; 
  DWMessaging *Messaging; 
  unsigned int v11; 
  unsigned __int64 UniversalId; 
  TaskCreateRequest *v13; 
  bdRemoteTask *v14; 
  TaskManager *v15; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  void *messagea; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  __int64 v22; 
  char dest[128]; 
  XUID xuid; 

  xuid.m_id = recipient.m_id;
  v22 = -2i64;
  v4 = messageType;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( (_BYTE)s_lobbyCommunicationState != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3684, ASSERT_TYPE_ASSERT, "(OnlineTournament_CanSendMessages())", (const char *)&queryFormat, "OnlineTournament_CanSendMessages()") )
    __debugbreak();
  if ( s_lobbyHostTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3685, ASSERT_TYPE_ASSERT, "(s_lobbyHostTaskID == 0)", (const char *)&queryFormat, "s_lobbyHostTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = SendDirectMessageComplete;
  XUID::operator=(&s_lobbyHostTaskData.recipient, &xuid);
  pTaskCreateRequest.m_appData = &s_lobbyHostTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v8 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v8, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
  }
  else
  {
    v9 = DWServicesAccess::GetInstance();
    Messaging = DWServicesAccess::GetMessaging(v9, s_lobbyController);
    v11 = truncate_cast<unsigned int,unsigned __int64>(messageSize);
    UniversalId = XUID::GetUniversalId(&xuid);
    v13 = (TaskCreateRequest *)DWMessaging::whisperToChannelMember(Messaging, &result, "tournament", s_chatLobbyID, UniversalId, message, v11, v4);
    if ( v13 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v14 = *(bdRemoteTask **)&v13->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v14;
      if ( v14 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      v15 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        pTaskCreateResult.m_resultType = SUCCESS;
        Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_HostSendDirectMessage");
      }
      else
      {
        pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
        Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_HostSendDirectMessage");
      }
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
      Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_HostSendDirectMessage");
    }
    if ( pTaskCreateResult.m_resultType )
    {
      Com_PrintError(25, "Tournament: Starting send direct message task failed.\n");
      goto LABEL_29;
    }
  }
  s_lobbyHostTaskID = pTaskCreateResult.m_localTaskId;
  if ( v4 )
  {
    if ( v4 == 1 )
      Core_strcpy_truncate(dest, 0x80ui64, (const char *)message);
    else
      Core_strcpy_truncate(dest, 0x80ui64, "Unable to convert message to string!");
  }
  else
  {
    LODWORD(messagea) = *((unsigned __int16 *)message + 88);
    LODWORD(fmt) = *((unsigned __int16 *)message + 4);
    Com_sprintf_truncate(dest, 0x80ui64, "Match Update: mmLobbyID %llu, team 0 %d, team 1 %d", *(_QWORD *)message, fmt, messagea);
  }
  Com_Printf(25, "Tournament: Sending direct message: %s\n", dest);
LABEL_29:
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

/*
==============
OnlineTournament_Init
==============
*/
void OnlineTournament_Init(void)
{
  PublisherVariableManager *Instance; 

  OnlineTournament_Reset();
  Cmd_AddCommandInternal("tournament_joinlobby", JoinLobby_f, &JoinLobby_f_VAR);
  Cmd_AddCommandInternal("tournament_leavelobby", LeaveLobby_f, &LeaveLobby_f_VAR);
  Cmd_AddCommandInternal("tournament_sendmessage", SendMessage_f, &SendMessage_f_VAR);
  Cmd_AddCommandInternal("tournament_healthupdate", SendHealthUpdate_f, &SendHealthUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_timeupdate", SendTimeUpdate_f, &SendTimeUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_sendresult", SendResult_f, &SendResult_f_VAR);
  Cmd_AddCommandInternal("tournament_killupdate", DoKillUpdate_f, &DoKillUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_scoreupdate", DoScoreUpdate_f, &DoScoreUpdate_f_VAR);
  OnlineTournamentSim_Init();
  Instance = PublisherVariableManager::GetInstance();
  PublisherVariableManager::AddRetrievedCallback(Instance, OnlineTournament_PublisherVariablesFetched);
  InviteJoinHSM::RegisterApplicationSpecificPreJoinChecks(&g_invitationHSM, MOVEMENT, OnlineTournament_InviteJoinStarted, OnlineTournament_CanContinueInviteJoin);
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_DCQOS, (void (__fastcall *)(int, bool))OnlineTournament_FenceDCQoSUpdated);
}

/*
==============
OnlineTournament_InviteJoinStarted
==============
*/
void OnlineTournament_InviteJoinStarted(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  __int64 m_initialDataTypeForJoining; 

  m_initialDataTypeForJoining = (unsigned int)data->m_initialDataTypeForJoining;
  if ( (_DWORD)m_initialDataTypeForJoining == 1 )
  {
    Com_Printf(25, "Tournament: OnlineTournament_InviteJoinStarted with type LOBBY_ID\n");
    s_haveRequestedTournamentStateForCurrentInvite = 0;
    return;
  }
  if ( (_DWORD)m_initialDataTypeForJoining )
  {
    Com_PrintError(25, "Tournament: Unexpected invite join type %d\n", m_initialDataTypeForJoining);
  }
  else
  {
    Com_Printf(25, "Tournament: OnlineTournament_InviteJoinStarted with type UNIVERSAL_ID\n");
    if ( (_BYTE)s_tournamentState )
    {
      Com_Printf(25, "Tournament: OnlineTournament_InviteJoinStartedWithUniveralID Leaving because we are active\n");
      OnlineTournament_Leave();
      s_haveRequestedTournamentStateForCurrentInvite = 0;
      return;
    }
  }
  s_haveRequestedTournamentStateForCurrentInvite = 0;
}

/*
==============
OnlineTournament_InviteJoinStartedWithLobbyID
==============
*/
void OnlineTournament_InviteJoinStartedWithLobbyID(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  ;
}

/*
==============
OnlineTournament_InviteJoinStartedWithUniveralID
==============
*/
void OnlineTournament_InviteJoinStartedWithUniveralID(InviteHSMApplicationSpecificPreJoinCheckData *data)
{
  if ( (_BYTE)s_tournamentState )
  {
    Com_Printf(25, "Tournament: OnlineTournament_InviteJoinStartedWithUniveralID Leaving because we are active\n");
    OnlineTournament_Leave();
  }
}

/*
==============
OnlineTournament_IsActive
==============
*/
bool OnlineTournament_IsActive()
{
  return (_BYTE)s_tournamentState != INACTIVE;
}

/*
==============
OnlineTournament_IsCBufClear
==============
*/
bool OnlineTournament_IsCBufClear()
{
  return s_cbufTaskQueuedCount == s_cbufTaskProcessedCount;
}

/*
==============
OnlineTournament_IsDoingPostGameCleanup
==============
*/
bool OnlineTournament_IsDoingPostGameCleanup()
{
  return (unsigned __int8)s_tournamentState > 0xEu;
}

/*
==============
OnlineTournament_IsEveryoneReadyToStart
==============
*/
bool OnlineTournament_IsEveryoneReadyToStart(int matchStorageIndex)
{
  __int64 v1; 
  unsigned __int8 v2; 

  v1 = matchStorageIndex;
  v2 = (1 << SLOBYTE(s_currentBracket.teamSize)) - 1;
  return (v2 & s_currentBracket.matchStatus[v1].readyStatus[0]) == v2 && (v2 & s_currentBracket.matchStatus[v1].readyStatus[1]) == v2;
}

/*
==============
OnlineTournament_IsInTournament
==============
*/
bool OnlineTournament_IsInTournament()
{
  return (_BYTE)s_lobbyCommunicationState == HALF_HALF;
}

/*
==============
OnlineTournament_IsJoiningCommunicationChannel
==============
*/
bool OnlineTournament_IsJoiningCommunicationChannel()
{
  return (_BYTE)s_tournamentState == 7;
}

/*
==============
OnlineTournament_IsJoiningOnLobbyId
==============
*/
bool OnlineTournament_IsJoiningOnLobbyId()
{
  return (_BYTE)s_tournamentState == 10;
}

/*
==============
OnlineTournament_IsMatchComplete
==============
*/
bool OnlineTournament_IsMatchComplete(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  unsigned int MatchStorageIndex; 
  __int64 v4; 

  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v4 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4358, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  return s_currentBracket.matchStatus[v4].winner || s_currentBracket.matchStatus[v4].expired;
}

/*
==============
OnlineTournament_IsMatchInProgress
==============
*/
bool OnlineTournament_IsMatchInProgress(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  unsigned int MatchStorageIndex; 
  __int64 v3; 
  __int64 v4; 

  if ( roundIndex >= s_currentBracket.totalRounds )
    return 0;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  v3 = (int)MatchStorageIndex;
  if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4378, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
    __debugbreak();
  v4 = v3;
  return s_currentBracket.matchStatus[v3].hasStarted && s_currentBracket.matchStatus[v4].winner == TEAM_ZERO && !s_currentBracket.matchStatus[v4].expired;
}

/*
==============
OnlineTournament_IsMyMatchReadyToStart
==============
*/
bool OnlineTournament_IsMyMatchReadyToStart()
{
  unsigned __int16 v0; 
  unsigned __int16 v1; 
  int MatchStorageIndex; 
  unsigned __int8 v3; 
  __int64 v4; 
  bool result; 

  if ( (((_BYTE)s_tournamentState - 8) & 0xFA) != 0 || (_BYTE)s_tournamentState == 9 )
    return 0;
  v0 = s_myCurrentRound;
  v1 = s_myCurrentMatch;
  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(s_myCurrentRound, s_myCurrentMatch);
  result = 0;
  if ( (_BYTE)s_myParticipationStatus == ACTIVE )
  {
    v3 = (1 << SLOBYTE(s_currentBracket.teamSize)) - 1;
    v4 = MatchStorageIndex;
    if ( (v3 & s_currentBracket.matchStatus[v4].readyStatus[0]) == v3 && (v3 & s_currentBracket.matchStatus[v4].readyStatus[1]) == v3 && OnlineTournament_AreMatchPrereqsComplete(v0, v1) )
      return 1;
  }
  return result;
}

/*
==============
OnlineTournament_IsNavigatingUI
==============
*/
bool OnlineTournament_IsNavigatingUI()
{
  return (unsigned __int8)(s_tournamentState - 3) <= 1u;
}

/*
==============
OnlineTournament_IsPresentInAllParties
==============
*/
bool OnlineTournament_IsPresentInAllParties()
{
  PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  return (g_partyData.inParty || Lobby_IsInLobby()) && (!Lobby_IsInLobby() || PartyData->lastPartyStateTime) && (!g_partyData.inParty || g_partyData.lastPartyStateTime);
}

/*
==============
OnlineTournament_IsPrivatePartyClient
==============
*/
bool OnlineTournament_IsPrivatePartyClient()
{
  return g_partyData.inParty && !Party_AreWeHost(&g_partyData);
}

/*
==============
OnlineTournament_IsPrivatePartyHost
==============
*/
bool OnlineTournament_IsPrivatePartyHost()
{
  return g_partyData.inParty && Party_AreWeHost(&g_partyData);
}

/*
==============
OnlineTournament_IsQueuedUpForNextTournament
==============
*/
bool OnlineTournament_IsQueuedUpForNextTournament()
{
  return (_BYTE)s_tournamentState == 2;
}

/*
==============
OnlineTournament_IsScreenDebugEnabled
==============
*/
__int64 OnlineTournament_IsScreenDebugEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_tournament_screen_debug_enabled;
  if ( !DVARBOOL_online_tournament_screen_debug_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_screen_debug_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
OnlineTournament_IsUserReadyToStart
==============
*/
bool OnlineTournament_IsUserReadyToStart(XUID xuid, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  __int64 v3; 
  int v4; 
  int v8; 
  int v9; 
  int MatchStorageIndex; 
  XUID xuida; 

  v3 = 0i64;
  xuida.m_id = xuid.m_id;
  v4 = 0;
  if ( s_currentBracket.participantCount <= 0 )
    goto LABEL_4;
  while ( !XUID::operator==(&s_currentBracket.participants[v4], &xuida) )
  {
    if ( ++v4 >= s_currentBracket.participantCount )
      goto LABEL_4;
  }
  v8 = v4 % s_currentBracket.teamSize;
  v9 = v4 / s_currentBracket.teamSize;
  if ( v9 < 0 )
  {
LABEL_4:
    Com_PrintWarning(25, "Tournament: User is not ready to start because he's not in the tournament.\n");
    return 0;
  }
  else
  {
    MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
    LOBYTE(v3) = _bittest(&v9, (unsigned __int8)roundIndex);
    return ((unsigned __int8)(1 << v8) & s_currentBracket.matchStatus[MatchStorageIndex].readyStatus[v3]) != 0;
  }
}

/*
==============
OnlineTournament_IsWaitingForMatchmakingBracket
==============
*/
bool OnlineTournament_IsWaitingForMatchmakingBracket()
{
  return (_BYTE)s_tournamentState == 6;
}

/*
==============
OnlineTournament_JoinCommunicationChannel
==============
*/
void OnlineTournament_JoinCommunicationChannel(void)
{
  PartyData *ActiveParty; 
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.taskType[0] = 1;
  OnlineTournament_EnqueueTask(&task);
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 7i64);
  LOBYTE(s_tournamentState) = 7;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_JoinCommunicationChannel_Internal
==============
*/
void OnlineTournament_JoinCommunicationChannel_Internal(int prevAttempts)
{
  DWServicesAccess *Instance; 
  TaskManager *v3; 
  TaskManager *v4; 
  DWServicesAccess *v5; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v7; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
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
  if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1037, ASSERT_TYPE_ASSERT, "(s_lobbyCommunicationState != LobbyCommunicationState::AVAILABLE)", (const char *)&queryFormat, "s_lobbyCommunicationState != LobbyCommunicationState::AVAILABLE", -2i64) )
    __debugbreak();
  if ( s_chatLobbyID && prevAttempts <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1038, ASSERT_TYPE_ASSERT, "(s_chatLobbyID == 0 || prevAttempts > 0)", (const char *)&queryFormat, "s_chatLobbyID == 0 || prevAttempts > 0") )
    __debugbreak();
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1039, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  if ( !s_currentBracket.tournamentID )
  {
    Com_PrintWarning(LODWORD(s_currentBracket.tournamentID) + 25, "Tournament: ignoring a request to join communication channel 0 since that's an invalid channel id\n");
    goto LABEL_36;
  }
  s_chatLobbyID = s_currentBracket.tournamentID;
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = JoinCommunicationChannelComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 1;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, s_lobbyController) )
  {
    OnlineTournament_Reset();
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)2048, NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E86350, 6493i64, (unsigned int)s_lobbyController);
    goto LABEL_36;
  }
  v3 = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(v3, TOURNAMENT_CHAT) )
  {
    v4 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v4, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_34:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    LOBYTE(s_lobbyCommunicationState) = 1;
    Com_Printf(25, "Tournament: Starting join communication channel task with channelId (%zu).\n", s_chatLobbyID);
    goto LABEL_36;
  }
  v5 = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(v5, s_lobbyController);
  v7 = (TaskCreateRequest *)DWMessaging::createChatChannelWithID(Messaging, &result, "tournament", s_chatLobbyID, &s_createChannelResponse_0);
  if ( v7 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v8 = *(bdRemoteTask **)&v7->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v8;
    if ( v8 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v9 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_JoinCommunicationChannel_Internal");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_JoinCommunicationChannel_Internal");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_JoinCommunicationChannel_Internal");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_34;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, COUNT, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E86570, 234i64);
LABEL_36:
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

/*
==============
OnlineTournament_JoinMatchToSpectate
==============
*/
void OnlineTournament_JoinMatchToSpectate(unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  if ( OnlineTournament_IsMatchInProgress(roundIndex, matchIndex) )
  {
    if ( (_BYTE)s_tournamentState == 8 )
    {
      s_spectateRound = roundIndex;
      s_spectateMatch = matchIndex;
    }
    else
    {
      Com_PrintWarning(25, "Tournament: attempting to join match to spectate but in state %d instead of BRACKET? Ignoring.\n", (unsigned __int8)s_tournamentState);
    }
  }
  else
  {
    Com_PrintWarning(25, "Tournament: Attempting to spectate a match that can't be spectated.\n");
  }
}

/*
==============
OnlineTournament_Leave
==============
*/
void OnlineTournament_Leave(void)
{
  unsigned __int64 UserId; 
  char v1; 
  unsigned __int64 v2; 
  unsigned __int8 v3; 
  unsigned __int8 v4; 
  bool v5; 
  DLogContext context; 
  char buffer[4096]; 

  if ( s_lobbyController >= 0 )
  {
    Com_Printf(25, "Tournament: Leaving all tournament related things.\n");
    UserId = DLog_GetUserId(s_lobbyController);
    v1 = s_myCurrentRound;
    v2 = UserId;
    v3 = s_myParticipationStatus;
    if ( (s_myCurrentRound > 0x7FFFu || (unsigned __int16)(s_myCurrentRound + 128) > 0xFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,unsigned short>(unsigned short)", "signed", (char)s_myCurrentRound, "unsigned", s_myCurrentRound) )
      __debugbreak();
    v4 = s_tournamentState;
    if ( DLog_IsActive() && DLog_CreateContext(&context, v2, buffer, 4096) && DLog_IsActive() )
    {
      v5 = DLog_BeginEvent(&context, "dlog_event_tournament_back_out");
      context.autoEndEvent = 1;
      if ( v5 && DLog_UInt8(&context, "state", v4) && DLog_Int8(&context, "round", v1) && DLog_UInt8(&context, "participation_state", v3) )
        DLog_RecordContext(&context);
    }
    OnlineTournament_DoLeaveAllTournaments(s_lobbyController);
    OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
    OnlineMatchmakerOmniscient::ResetDisband(&OnlineMatchmakerOmniscient::ms_instance);
    if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
      OnlineTournament_LeaveCommunicationChannel();
    else
      OnlineTournament_Reset();
  }
}

/*
==============
OnlineTournament_LeaveAllTournaments
==============
*/
void OnlineTournament_LeaveAllTournaments(const int controllerIndex, int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v5; 
  DWServicesAccess *v6; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v8; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
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
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1347, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1348, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = LeaveAllTournamentsComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 5;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v5 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v5, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_26:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting leave all tournaments task.\n");
    goto LABEL_30;
  }
  v6 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v6, controllerIndex);
  v8 = (TaskCreateRequest *)DWAsyncMatchMaking::leaveAllTournaments(AsyncMatchmaking, &result);
  if ( v8 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v9 = *(bdRemoteTask **)&v8->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v10 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveAllTournaments");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveAllTournaments");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveAllTournaments");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_26;
  OnlineTournament_Reset();
  if ( (_BYTE)s_tournamentState )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E86E50, 5826i64);
  }
  else
  {
    Com_PrintError(25, "Tournament: Leave all tournaments failed - could not allocate a task!.\n");
  }
LABEL_30:
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

/*
==============
OnlineTournament_LeaveCommunicationChannel
==============
*/
void OnlineTournament_LeaveCommunicationChannel(void)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.taskType[0] = 3;
  LOBYTE(s_lobbyCommunicationState) = 3;
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_LeaveCommunicationChannel_Internal
==============
*/
void OnlineTournament_LeaveCommunicationChannel_Internal(int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v3; 
  DWServicesAccess *v4; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
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
  if ( (_BYTE)s_lobbyCommunicationState != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1141, ASSERT_TYPE_ASSERT, "(s_lobbyCommunicationState == LobbyCommunicationState::LEAVING)", (const char *)&queryFormat, "s_lobbyCommunicationState == LobbyCommunicationState::LEAVING", -2i64) )
    __debugbreak();
  if ( !s_chatLobbyID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1142, ASSERT_TYPE_ASSERT, "(s_chatLobbyID != 0)", (const char *)&queryFormat, "s_chatLobbyID != 0") )
    __debugbreak();
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1146, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = LeaveCommunicationChannelComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 3;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v3 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v3, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_29:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    LOBYTE(s_lobbyCommunicationState) = 0;
    Com_Printf(25, "Tournament: Starting leave communication channel task with channelId (%zu).\n", s_chatLobbyID);
    goto LABEL_31;
  }
  v4 = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(v4, s_lobbyController);
  v6 = (TaskCreateRequest *)DWMessaging::unsubscribeFromChannel(Messaging, &result, "tournament", s_chatLobbyID);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveCommunicationChannel_Internal");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveCommunicationChannel_Internal");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_LeaveCommunicationChannel_Internal");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_29;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)4, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E86980, 235i64);
LABEL_31:
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

/*
==============
OnlineTournament_Leave_Offline
==============
*/
void OnlineTournament_Leave_Offline(void)
{
  if ( s_lobbyController >= 0 )
  {
    Com_Printf(25, "Tournament: Leaving all offline tournament related things.\n");
    OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
    OnlineMatchmakerOmniscient::ResetDisband(&OnlineMatchmakerOmniscient::ms_instance);
    OnlineTournament_Reset();
  }
}

/*
==============
OnlineTournament_LobbyHostTaskInProgress
==============
*/
bool OnlineTournament_LobbyHostTaskInProgress()
{
  return s_lobbyHostTaskID != 0;
}

/*
==============
OnlineTournament_LobbyTaskInProgress
==============
*/
bool OnlineTournament_LobbyTaskInProgress()
{
  return s_lobbyTaskID != 0;
}

/*
==============
OnlineTournament_MarkMatchReadyToStart
==============
*/
void OnlineTournament_MarkMatchReadyToStart(unsigned __int16 round, unsigned __int16 match)
{
  int MatchStorageIndex; 
  unsigned __int8 v3; 
  __int64 v4; 

  MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(round, match);
  v3 = (1 << SLOBYTE(s_currentBracket.teamSize)) - 1;
  v4 = MatchStorageIndex;
  s_currentBracket.matchStatus[v4].readyStatus[0] = v3;
  s_currentBracket.matchStatus[v4].readyStatus[1] = v3;
}

/*
==============
OnlineTournament_MarkUserReadyToStart
==============
*/
void OnlineTournament_MarkUserReadyToStart(XUID xuid, unsigned __int16 roundIndex, int matchStorageIndex, bool ready)
{
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned __int8 v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  XUID xuida; 

  v4 = 0i64;
  v5 = matchStorageIndex;
  v6 = 0;
  xuida.m_id = xuid.m_id;
  v8 = roundIndex;
  if ( s_currentBracket.participantCount <= 0 )
    goto LABEL_4;
  while ( !XUID::operator==(&s_currentBracket.participants[v6], &xuida) )
  {
    if ( ++v6 >= s_currentBracket.participantCount )
      goto LABEL_4;
  }
  v10 = v6 % s_currentBracket.teamSize;
  if ( v6 / s_currentBracket.teamSize < 0 )
  {
LABEL_4:
    Com_PrintWarning(25, "Tournament: Could not mark user ready to start because he's not in the tournament.\n");
  }
  else
  {
    v9 = v6 / s_currentBracket.teamSize;
    LOBYTE(v4) = _bittest(&v9, v8);
    v11 = 32 * v5 + v4;
    v12 = s_currentBracket.matchStatus[0].readyStatus[v11];
    if ( ready )
      s_currentBracket.matchStatus[0].readyStatus[v11] = v12 | (1 << v10);
    else
      s_currentBracket.matchStatus[0].readyStatus[v11] = v12 & ~(1 << v10);
  }
}

/*
==============
OnlineTournament_MatchmakingReadyUp
==============
*/
void OnlineTournament_MatchmakingReadyUp(int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v3; 
  DWServicesAccess *v4; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
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
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1530, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID", -2i64) )
    __debugbreak();
  if ( !s_currentBracket.tournamentID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1531, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID != 0)", (const char *)&queryFormat, "s_currentBracket.tournamentID != 0") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = MatchmakingReadyUpComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 7;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v3 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v3, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_26:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting matchmaking ready up task.\n");
    goto LABEL_28;
  }
  v4 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v4, s_lobbyController);
  v6 = (TaskCreateRequest *)DWAsyncMatchMaking::readyUpTournament(AsyncMatchmaking, &result, s_currentBracket.tournamentID);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_MatchmakingReadyUp");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_MatchmakingReadyUp");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_MatchmakingReadyUp");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_26;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)16, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E873E0, 5828i64);
LABEL_28:
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

/*
==============
OnlineTournament_OnBracketDisbanded
==============
*/
void OnlineTournament_OnBracketDisbanded(unsigned __int64 tournamentID)
{
  if ( s_currentBracket.tournamentID == tournamentID )
  {
    if ( (unsigned __int8)s_tournamentState >= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3442, ASSERT_TYPE_ASSERT, "(s_tournamentState < TournamentState::JOINING_BRACKET)", (const char *)&queryFormat, "s_tournamentState < TournamentState::JOINING_BRACKET") )
      __debugbreak();
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x800000, NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E89D58);
  }
  else
  {
    Com_PrintWarning(25, "Tournament: received bracket disband for tournament id %llu but our bracket id is %llu so ignoring it.\n", tournamentID, s_currentBracket.tournamentID);
  }
}

/*
==============
OnlineTournament_OnChatChannelMessage
==============
*/
void OnlineTournament_OnChatChannelMessage(unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message)
{
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 *p_lobbyID; 
  unsigned int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  __int64 v32; 
  char dest[128]; 

  v6 = chatMessageType;
  if ( channelID == s_chatLobbyID )
  {
    if ( (_BYTE)chatMessageType )
    {
      if ( (unsigned __int8)chatMessageType == 1 )
        Core_strcpy_truncate(dest, 0x80ui64, (const char *)message);
      else
        Core_strcpy_truncate(dest, 0x80ui64, "Unable to convert message to string!");
    }
    else
    {
      Com_sprintf_truncate(dest, 0x80ui64, "Match Update: mmLobbyID %llu, team 0 %d, team 1 %d", *(_QWORD *)message, *((unsigned __int16 *)message + 4), *((unsigned __int16 *)message + 88));
    }
    Com_Printf(25, "Tournament: Received Chat: %s:%s\n", senderName, dest);
    if ( (unsigned int)v6 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum LobbyMessageType __cdecl truncate_cast_impl<enum LobbyMessageType,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v6, "unsigned", v6) )
      __debugbreak();
    if ( !(_BYTE)v6 )
    {
      v7 = *(_QWORD *)message;
      p_lobbyID = &s_currentBracket.matchStatus[0].lobbyID;
      v9 = 0;
      while ( *p_lobbyID != v7 )
      {
        ++v9;
        p_lobbyID += 4;
        if ( v9 >= 0xF )
        {
          Com_PrintWarning(25, "Tournament: Received a match update for an unknown lobby id %llu.  Ignoring it.\n", v7);
          return;
        }
      }
      v10 = (int)v9;
      v11 = s_statusUpdateIndex[v9];
      if ( s_currentBracket.teamSize > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4852, ASSERT_TYPE_ASSERT, "(s_currentBracket.teamSize <= 5)", (const char *)&queryFormat, "s_currentBracket.teamSize <= MAX_TOURNAMENT_TEAM_SIZE") )
        __debugbreak();
      v12 = 2i64;
      v13 = ((int)v11 + 1) % 6;
      s_statusUpdateIndex[v10] = v13;
      v14 = 376 * (6 * v10 + v13);
      _RAX = (char *)message + 8;
      _RCX = (char *)&s_statusUpdates + v14;
      do
      {
        _RCX += 128;
        __asm { vmovups xmm0, xmmword ptr [rax] }
        _RAX += 128;
        __asm
        {
          vmovups xmmword ptr [rcx-80h], xmm0
          vmovups xmm1, xmmword ptr [rax-70h]
          vmovups xmmword ptr [rcx-70h], xmm1
          vmovups xmm0, xmmword ptr [rax-60h]
          vmovups xmmword ptr [rcx-60h], xmm0
          vmovups xmm1, xmmword ptr [rax-50h]
          vmovups xmmword ptr [rcx-50h], xmm1
          vmovups xmm0, xmmword ptr [rax-40h]
          vmovups xmmword ptr [rcx-40h], xmm0
          vmovups xmm1, xmmword ptr [rax-30h]
          vmovups xmmword ptr [rcx-30h], xmm1
          vmovups xmm0, xmmword ptr [rax-20h]
          vmovups xmmword ptr [rcx-20h], xmm0
          vmovups xmm1, xmmword ptr [rax-10h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        --v12;
      }
      while ( v12 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [rax+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [rax+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [rax+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
        vmovups xmm0, xmmword ptr [rax+40h]
        vmovups xmmword ptr [rcx+40h], xmm0
        vmovups xmm1, xmmword ptr [rax+50h]
        vmovups xmmword ptr [rcx+50h], xmm1
        vmovups xmm0, xmmword ptr [rax+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      *((_QWORD *)_RCX + 14) = *((_QWORD *)_RAX + 14);
      v32 = 376 * (6 * v10 + v11);
      if ( *(_DWORD *)&s_statusUpdates.scoreHistory[v14 + 32] != *(_DWORD *)&s_statusUpdates.scoreHistory[v32 + 32] || *((_BYTE *)&s_statusUpdates.timeMode + v14) != *((_BYTE *)&s_statusUpdates.timeMode + v32) || *(&s_statusUpdates.roundNumber + v14) != *(&s_statusUpdates.roundNumber + v32) )
        s_statusTimeUpdates[v10] = Sys_Milliseconds();
      s_currentBracket.matchStatus[v10].hasStarted = 1;
    }
  }
  else
  {
    Com_Printf(25, "Tournament: Ignoring chat channel message because it isn't for our chat channel (%llu != %llu)\n", channelID, s_chatLobbyID);
  }
}

/*
==============
OnlineTournament_OnChatChannelUpdate
==============
*/
void OnlineTournament_OnChatChannelUpdate(const bdChannelInfo *channel, const bdChannelMember *member, unsigned __int8 status)
{
  unsigned __int64 m_channelID; 
  XUID *v7; 
  int v8; 
  XUID result; 
  XUID v10; 

  m_channelID = channel->m_channelID;
  if ( m_channelID == s_chatLobbyID )
  {
    if ( status )
    {
      if ( status == 1 )
      {
        Live_GetXuid(&result, s_lobbyController);
        Com_Printf(25, "Tournament: %s (%llu) has joined our chat channel\n", &member->_bytes_20[8], *(_QWORD *)member->_bytes_20);
        v7 = XUID::FromUniversalId(&v10, channel->m_adminID);
        XUID::operator==(v7, &result);
      }
      else
      {
        v8 = status;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2758, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown status %d in OnlineTournament_OnChatChannelUpdate\n", v8) )
          __debugbreak();
      }
    }
    else
    {
      Com_Printf(25, "Tournament: %s (%llu) has left our chat channel\n", &member->_bytes_20[8]);
    }
  }
  else
  {
    Com_Printf(25, "Tournament: Ignoring chat channel update because it isn't for our chat channel (%llu != %llu)\n", m_channelID);
  }
}

/*
==============
OnlineTournament_OnComErrorCleanup
==============
*/
void OnlineTournament_OnComErrorCleanup(const errorParm_t errorCode)
{
  if ( errorCode == ERR_DROP )
  {
    if ( (((_BYTE)s_tournamentState - 5) & 0xFD) != 0 && (_BYTE)s_lobbyCommunicationState != HALF_HALF )
      OnlineTournament_Reset();
    else
      OnlineTournament_Leave();
  }
}

/*
==============
OnlineTournament_OnCreateNewLobby
==============
*/
void OnlineTournament_OnCreateNewLobby(void)
{
  if ( (_BYTE)s_tournamentState != 10 )
    OnlineTournament_CreateTemporaryLobby();
}

/*
==============
OnlineTournament_OnJoinLobby
==============
*/
void OnlineTournament_OnJoinLobby(void)
{
  if ( (_BYTE)s_tournamentState != 10 )
    OnlineTournament_CreateTemporaryLobby();
}

/*
==============
OnlineTournament_OnJoinTournament
==============
*/
void OnlineTournament_OnJoinTournament(unsigned __int64 matchmakingID, const char *tournamentState, int tournamentStateLength)
{
  XUID *v5; 
  __int64 v6; 
  unsigned int v7; 
  const XUID *v8; 
  XUID *v9; 
  unsigned int v10; 
  int v11; 
  unsigned __int64 id; 
  XUID result; 
  __int64 v14; 
  char v15; 
  XUID v16; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer value; 
  bdJSONDeserializer v19; 
  XUID xuid[80]; 

  v14 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v19);
  v5 = xuid;
  v6 = 80i64;
  do
  {
    XUID::XUID(v5++);
    --v6;
  }
  while ( v6 );
  if ( !(_BYTE)s_tournamentState && g_partyData.inParty && Party_AreWeHost(&g_partyData) )
  {
    Com_PrintWarning(25, "Tournament: Received a join tournament message after we decided to cancel.  Sucks, but we can't accept the tournament now.\n");
    goto LABEL_28;
  }
  if ( bdJSONDeserializer::parse(&v19, tournamentState) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&value);
    if ( bdJSONDeserializer::getArray(&v19, "players", &value) )
    {
      v7 = 0;
      while ( 1 )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v17);
        if ( !bdJSONDeserializer::getObject(&value, v7, &v17) )
          break;
        if ( !bdJSONDeserializer::getUInt64(&v17, "playerID", &id) )
        {
          v9 = (XUID *)&v15;
LABEL_15:
          v8 = XUID::NullXUID(v9);
          goto LABEL_16;
        }
        v8 = XUID::FromUInt64(&result, id);
LABEL_16:
        XUID::operator=(&xuid[v7], v8);
        bdJSONDeserializer::~bdJSONDeserializer(&v17);
        if ( ++v7 >= 0x50 )
          goto LABEL_17;
      }
      v9 = &v16;
      goto LABEL_15;
    }
LABEL_17:
    bdJSONDeserializer::~bdJSONDeserializer(&value);
  }
  v10 = 0;
  while ( !Live_IsUserSignedInToDemonware(v10) )
  {
LABEL_26:
    if ( (int)++v10 >= 8 )
    {
      Com_PrintWarning(25, "Tournament: received a tournament doc, but none of our active local clients are in it.  Ignoring it.\n");
      goto LABEL_28;
    }
  }
  Live_GetXuid(&result, v10);
  v11 = 0;
  while ( !XUID::operator==(&result, &xuid[v11]) )
  {
    if ( (unsigned int)++v11 >= 0x50 )
      goto LABEL_26;
  }
  if ( !CL_Mgr_IsControllerMappedToClient(v10, (LocalClientNum_t *)&id) )
  {
    Com_PrintWarning(25, "Tournament: Tournament doc contains a local user who is not active on controller %d?\n", v10);
    goto LABEL_26;
  }
  if ( g_partyData.inParty && Party_AreWeHost(&g_partyData) )
  {
    if ( s_lobbyController != v10 )
      Com_PrintWarning(25, "Tournament: Primary controller for the tournament is set to %d but the first active client in the doc is controller %d\n", (unsigned int)s_lobbyController, v10);
  }
  else
  {
    s_lobbyController = v10;
  }
  OnlineTournament_ProcessDoc_MMTournamentState(tournamentState, tournamentStateLength);
  OnlineTournament_AckJoinTournament(0);
LABEL_28:
  bdJSONDeserializer::~bdJSONDeserializer(&v19);
}

/*
==============
OnlineTournament_OnNavigationComplete
==============
*/
void OnlineTournament_OnNavigationComplete(void)
{
  s_uiNavigationDestination = 0;
}

/*
==============
OnlineTournament_OnPlayerQuit
==============
*/
void OnlineTournament_OnPlayerQuit(void)
{
  PartyData *ActiveParty; 

  if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
  {
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 15i64);
    LOBYTE(s_tournamentState) = 15;
    ActiveParty = Party_GetActiveParty();
    if ( Party_AreWeHost(ActiveParty) )
      PartyHost_GamestateChanged(ActiveParty);
  }
}

/*
==============
OnlineTournament_OnStateEnter
==============
*/
void OnlineTournament_OnStateEnter(TournamentState newState)
{
  char v1; 
  PartyData *ActiveParty; 
  unsigned __int64 tournamentID; 
  int RandomMapIndexForTournamentID; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  int v10; 
  const char *v11; 
  int v12; 
  int i; 

  v1 = newState;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  if ( v1 == 8 )
  {
    tournamentID = s_currentBracket.tournamentID;
    if ( !s_currentBracket.tournamentID )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 546, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID)", (const char *)&queryFormat, "s_currentBracket.tournamentID") )
        __debugbreak();
      tournamentID = s_currentBracket.tournamentID;
    }
    RandomMapIndexForTournamentID = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(s_possibleTournamentMapnames, tournamentID);
    v5 = (char *)&queryFormat.fmt + 3;
    if ( RandomMapIndexForTournamentID < 0 || RandomMapIndexForTournamentID >= s_possibleTournamentMapnames[0].m_numPossibleMaps )
      v6 = (char *)&queryFormat.fmt + 3;
    else
      v6 = s_possibleTournamentMapnames[0].m_possibleMapnamesList[RandomMapIndexForTournamentID];
    v7 = s_mapsChosenForCurrentTournament[0];
    Core_strcpy(s_mapsChosenForCurrentTournament[0], 0x20ui64, v6);
    v8 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[1], tournamentID);
    if ( v8 < 0 || v8 >= s_possibleTournamentMapnames[1].m_numPossibleMaps )
      v9 = (char *)&queryFormat.fmt + 3;
    else
      v9 = s_possibleTournamentMapnames[1].m_possibleMapnamesList[v8];
    Core_strcpy(s_mapsChosenForCurrentTournament[1], 0x20ui64, v9);
    v10 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[2], tournamentID);
    if ( v10 < 0 || v10 >= s_possibleTournamentMapnames[2].m_numPossibleMaps )
      v11 = (char *)&queryFormat.fmt + 3;
    else
      v11 = s_possibleTournamentMapnames[2].m_possibleMapnamesList[v10];
    Core_strcpy(s_mapsChosenForCurrentTournament[2], 0x20ui64, v11);
    v12 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[3], tournamentID);
    if ( v12 >= 0 && v12 < s_possibleTournamentMapnames[3].m_numPossibleMaps )
      v5 = s_possibleTournamentMapnames[3].m_possibleMapnamesList[v12];
    Core_strcpy(s_mapsChosenForCurrentTournament[3], 0x20ui64, v5);
    Com_Printf(25, "Tournament: OnlineTournament_PrepareAndStoreMapsForTournament chosen maps for tournament id %llu are\n", tournamentID);
    for ( i = 0; i < 4; ++i )
    {
      Com_Printf(25, "Tournament: Map for Round %d: %s\n", (unsigned int)i, v7);
      v7 += 32;
    }
    s_bracketStateNotReadyTime = Sys_Milliseconds();
  }
}

/*
==============
OnlineTournament_OnTournamentDisbanded
==============
*/
void OnlineTournament_OnTournamentDisbanded(unsigned __int64 tournamentID, int reason, const char *message)
{
  if ( s_currentBracket.tournamentID == tournamentID )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x1000000, NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E89E10);
  }
  else
  {
    Com_PrintWarning(25, "Tournament: received tournament disband for tournament id %llu but our bracket id is %llu so ignoring it.\n", tournamentID, s_currentBracket.tournamentID);
  }
}

/*
==============
OnlineTournament_OnUpdateTournament
==============
*/
void OnlineTournament_OnUpdateTournament(const char *tournamentState, int tournamentStateLength)
{
  if ( (_BYTE)s_tournamentState || !g_partyData.inParty || !Party_AreWeHost(&g_partyData) )
    OnlineTournament_ProcessDoc_MMTournamentState(tournamentState, tournamentStateLength);
}

/*
==============
OnlineTournament_OnUserBecameActiveClient
==============
*/

void __fastcall OnlineTournament_OnUserBecameActiveClient(const int controllerIndex)
{
  OnlineTournament_DoRequestTournamentState(controllerIndex);
}

/*
==============
OnlineTournament_OnUserSignedIntoDemonware
==============
*/
void OnlineTournament_OnUserSignedIntoDemonware(const int controllerIndex)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_online_tournament_cleanup_leave_calls_enabled;
  if ( !DVARBOOL_online_tournament_cleanup_leave_calls_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_cleanup_leave_calls_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    OnlineTournament_DoLeaveAllTournaments(controllerIndex);
}

/*
==============
OnlineTournament_ParseAndStorePossibleMapnames
==============
*/
void OnlineTournament_ParseAndStorePossibleMapnames(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  char dest[256]; 

  memset_0(dest, 0, sizeof(dest));
  v0 = DVARSTR_online_tournament_round_0_mapnames;
  if ( !DVARSTR_online_tournament_round_0_mapnames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_round_0_mapnames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  Core_strcpy(dest, 0x100ui64, v0->current.string);
  s_possibleTournamentMapnames[0].m_roundIndex = 0;
  PossibleTournamentMapNames::ParseListAndStoreNames(s_possibleTournamentMapnames, dest);
  v1 = DVARSTR_online_tournament_round_1_mapnames;
  if ( !DVARSTR_online_tournament_round_1_mapnames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_round_1_mapnames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  Core_strcpy(dest, 0x100ui64, v1->current.string);
  s_possibleTournamentMapnames[1].m_roundIndex = 1;
  PossibleTournamentMapNames::ParseListAndStoreNames(&s_possibleTournamentMapnames[1], dest);
  v2 = DVARSTR_online_tournament_round_2_mapnames;
  if ( !DVARSTR_online_tournament_round_2_mapnames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_round_2_mapnames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  Core_strcpy(dest, 0x100ui64, v2->current.string);
  s_possibleTournamentMapnames[2].m_roundIndex = 2;
  PossibleTournamentMapNames::ParseListAndStoreNames(&s_possibleTournamentMapnames[2], dest);
  v3 = DVARSTR_online_tournament_round_3_mapnames;
  if ( !DVARSTR_online_tournament_round_3_mapnames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_round_3_mapnames") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  Core_strcpy(dest, 0x100ui64, v3->current.string);
  s_possibleTournamentMapnames[3].m_roundIndex = 3;
  PossibleTournamentMapNames::ParseListAndStoreNames(&s_possibleTournamentMapnames[3], dest);
}

/*
==============
OnlineTournament_PrepareAndStoreMapsForTournament
==============
*/
void OnlineTournament_PrepareAndStoreMapsForTournament(const unsigned __int64 tournamentID)
{
  int RandomMapIndexForTournamentID; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  int v6; 
  const char *v7; 
  int v8; 
  const char *v9; 
  int v10; 
  int i; 

  RandomMapIndexForTournamentID = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(s_possibleTournamentMapnames, tournamentID);
  v3 = (char *)&queryFormat.fmt + 3;
  if ( RandomMapIndexForTournamentID < 0 || RandomMapIndexForTournamentID >= s_possibleTournamentMapnames[0].m_numPossibleMaps )
    v4 = (char *)&queryFormat.fmt + 3;
  else
    v4 = s_possibleTournamentMapnames[0].m_possibleMapnamesList[RandomMapIndexForTournamentID];
  v5 = s_mapsChosenForCurrentTournament[0];
  Core_strcpy(s_mapsChosenForCurrentTournament[0], 0x20ui64, v4);
  v6 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[1], tournamentID);
  if ( v6 < 0 || v6 >= s_possibleTournamentMapnames[1].m_numPossibleMaps )
    v7 = (char *)&queryFormat.fmt + 3;
  else
    v7 = s_possibleTournamentMapnames[1].m_possibleMapnamesList[v6];
  Core_strcpy(s_mapsChosenForCurrentTournament[1], 0x20ui64, v7);
  v8 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[2], tournamentID);
  if ( v8 < 0 || v8 >= s_possibleTournamentMapnames[2].m_numPossibleMaps )
    v9 = (char *)&queryFormat.fmt + 3;
  else
    v9 = s_possibleTournamentMapnames[2].m_possibleMapnamesList[v8];
  Core_strcpy(s_mapsChosenForCurrentTournament[2], 0x20ui64, v9);
  v10 = PossibleTournamentMapNames::GetRandomMapIndexForTournamentID(&s_possibleTournamentMapnames[3], tournamentID);
  if ( v10 >= 0 && v10 < s_possibleTournamentMapnames[3].m_numPossibleMaps )
    v3 = s_possibleTournamentMapnames[3].m_possibleMapnamesList[v10];
  Core_strcpy(s_mapsChosenForCurrentTournament[3], 0x20ui64, v3);
  Com_Printf(25, "Tournament: OnlineTournament_PrepareAndStoreMapsForTournament chosen maps for tournament id %llu are\n", tournamentID);
  for ( i = 0; i < 4; ++i )
  {
    Com_Printf(25, "Tournament: Map for Round %d: %s\n", (unsigned int)i, v5);
    v5 += 32;
  }
}

/*
==============
OnlineTournament_ProcessCBufCommand
==============
*/
void OnlineTournament_ProcessCBufCommand(void)
{
  ++s_cbufTaskProcessedCount;
}

/*
==============
OnlineTournament_ProcessDoc_MMTournamentState
==============
*/
void OnlineTournament_ProcessDoc_MMTournamentState(const char *tournamentState, int tournamentStateLength)
{
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  char v6; 
  char v7; 
  XUID *v9; 
  __int64 v10; 
  int v11; 
  unsigned __int16 i; 
  const XUID *v13; 
  const dvar_t *v14; 
  int j; 
  int v16; 
  __int64 v17; 
  char v18; 
  char v19; 
  __int64 v21; 
  __int64 v22; 
  char v23; 
  char v24; 
  LocalClientNum_t ClientFromController; 
  CmdText *v27; 
  int v28; 
  int v29; 
  __int64 cmdsize; 
  scrContext_t *v31; 
  int v32; 
  int v33; 
  __int64 v34; 
  scrContext_t *v35; 
  int integer; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  int teamCount; 
  __int64 v40; 
  bool v41; 
  __int64 v42; 
  unsigned int k; 
  const XUID *v44; 
  int m; 
  int v46; 
  const XUID *v47; 
  int v48; 
  int v49; 
  unsigned __int16 v50; 
  unsigned int v51; 
  unsigned __int16 v52; 
  int v53; 
  __int64 MatchStorageIndex; 
  team_t v55; 
  __int64 v56; 
  team_t *p_winner; 
  PartyData *ActiveParty; 
  PartyData *v59; 
  unsigned int n; 
  __int64 v61; 
  const dvar_t *v62; 
  const char *v63; 
  signed int v64; 
  team_t *teams; 
  signed int v66; 
  const XUID *v67; 
  int v68; 
  int v69; 
  int v70; 
  unsigned __int64 v71; 
  unsigned __int16 v72; 
  __int64 v73; 
  team_t winner; 
  unsigned int v75; 
  bool v76; 
  int v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  unsigned __int16 v81; 
  int v82; 
  unsigned __int16 v83[4]; 
  unsigned __int64 id; 
  XUID result; 
  unsigned int v86[2]; 
  int v87; 
  unsigned int dwTeam; 
  bdJSONDeserializer v89; 
  bdJSONDeserializer v90; 
  XUID v91; 
  bdJSONDeserializer v92; 
  unsigned __int64 v93; 
  bdJSONDeserializer v94; 
  bdJSONDeserializer v95; 
  bdJSONDeserializer v96; 
  bdJSONDeserializer v97; 
  bdJSONDeserializer v98; 
  __int64 v99; 
  XUID v100; 
  bdJSONDeserializer v101; 
  bdJSONDeserializer v102; 
  bdJSONDeserializer v103; 
  bdJSONDeserializer v104; 
  XUID xuid[80]; 
  char value[64]; 

  v99 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&v92);
  Com_Printf(25, "%s\n", tournamentState);
  ++s_tournamentStateUpdateCount;
  if ( !bdJSONDeserializer::parse(&v92, tournamentState) )
    goto LABEL_215;
  bdJSONDeserializer::bdJSONDeserializer(&v96);
  bdJSONDeserializer::bdJSONDeserializer(&v98);
  bdJSONDeserializer::bdJSONDeserializer(&v95);
  bdJSONDeserializer::bdJSONDeserializer(&v94);
  if ( !bdJSONDeserializer::getUInt64(&v92, "tournamentID", &s_currentBracket.tournamentID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2984, ASSERT_TYPE_ASSERT, "(jsonDeserializer.getUInt64( \"tournamentID\", s_currentBracket.tournamentID ))", (const char *)&queryFormat, "jsonDeserializer.getUInt64( \"tournamentID\", s_currentBracket.tournamentID )") )
    __debugbreak();
  if ( !bdJSONDeserializer::getString(&v92, "tournamentStatus", value, 0x40u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2985, ASSERT_TYPE_ASSERT, "(jsonDeserializer.getString( \"tournamentStatus\", tournamentStatus, ( sizeof( *array_counter( tournamentStatus ) ) + 0 ) ))", (const char *)&queryFormat, "jsonDeserializer.getString( \"tournamentStatus\", tournamentStatus, ARRAY_COUNT( tournamentStatus ) )") )
    __debugbreak();
  v3 = 7i64;
  v4 = 7i64;
  v5 = 0i64;
  while ( 1 )
  {
    v6 = value[v5];
    v7 = aForming[v5++];
    if ( !v4-- )
    {
LABEL_12:
      s_currentBracket.mmStatus = FORMING;
      goto LABEL_13;
    }
    if ( v6 != v7 )
      break;
    if ( !v6 )
      goto LABEL_12;
  }
  v17 = 0i64;
  while ( 1 )
  {
    v18 = value[v17];
    v19 = aPlaying_0[v17++];
    if ( !v3-- )
    {
LABEL_36:
      s_currentBracket.mmStatus = PLAYING;
      goto LABEL_13;
    }
    if ( v18 != v19 )
      break;
    if ( !v18 )
      goto LABEL_36;
  }
  v21 = 4i64;
  v22 = 0i64;
  while ( 1 )
  {
    v23 = value[v22];
    v24 = aDone[v22++];
    if ( !v21-- )
    {
LABEL_41:
      s_currentBracket.mmStatus = DONE;
      goto LABEL_13;
    }
    if ( v23 != v24 )
      break;
    if ( !v23 )
      goto LABEL_41;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3001, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: unknown tournament status received from tournament status doc: %s", value) )
    __debugbreak();
LABEL_13:
  if ( bdJSONDeserializer::getArray(&v92, "players", &v95) )
  {
    bdJSONDeserializer::bdJSONDeserializer(&v90);
    v9 = xuid;
    v10 = 80i64;
    do
    {
      XUID::XUID(v9++);
      --v10;
    }
    while ( v10 );
    memset_0(xuid, 0, sizeof(xuid));
    v11 = 0;
    for ( i = 0; bdJSONDeserializer::getObject(&v95, i, &v90); ++i )
    {
      if ( !bdJSONDeserializer::getUInt64(&v90, "playerID", &id) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3017, ASSERT_TYPE_ASSERT, "(playerObject.getUInt64( \"playerID\", xuidTemp ))", (const char *)&queryFormat, "playerObject.getUInt64( \"playerID\", xuidTemp )") )
        __debugbreak();
      v13 = XUID::FromUInt64(&result, id);
      XUID::operator=(&xuid[i], v13);
      ++v11;
    }
    v14 = DVARINT_online_tournament_state_update_count_to_start_checking_party_togetherness;
    if ( !DVARINT_online_tournament_state_update_count_to_start_checking_party_togetherness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_state_update_count_to_start_checking_party_togetherness") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( s_tournamentStateUpdateCount >= v14->current.integer )
    {
      for ( j = 0; j < 200; ++j )
      {
        if ( Party_IsMemberIndexDataAvailable(&g_partyData, j) )
        {
          Party_GetXuid((XUID *)&id, &g_partyData, j);
          v16 = 0;
          if ( v11 <= 0 )
          {
LABEL_30:
            if ( s_currentBracket.mmStatus )
            {
              Com_PrintWarning(25, "Tournament: leaving private party and forming a new one because the bracket is no longer FORMING but my party isn't intact.  This actually shouldn't happen under normal circumstances!\n");
              ClientFromController = CL_Mgr_GetClientFromController(s_lobbyController);
              v27 = &s_cmd_textArray[ClientFromController];
              if ( 16i64 * (int)ClientFromController == 0xFFFFFFFEB363A3A0ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
                __debugbreak();
              Sys_EnterCriticalSection(CRITSECT_CBUF);
              v28 = strlen_noncrt("xstopprivateparty\n");
              v29 = v28;
              cmdsize = v27->cmdsize;
              if ( (int)cmdsize + v28 < v27->maxsize )
              {
                memcpy_noncrt(&v27->data[cmdsize], "xstopprivateparty\n", v28 + 1);
                v27->cmdsize += v29;
                v31 = ScriptContext_Server();
                Scr_MonitorCommand(v31, "xstopprivateparty\n");
              }
              else
              {
                Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "xstopprivateparty\n");
              }
              Sys_LeaveCriticalSection(CRITSECT_CBUF);
              if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 329, ASSERT_TYPE_ASSERT, "(cmd_text)", (const char *)&queryFormat, "cmd_text") )
                __debugbreak();
              Sys_EnterCriticalSection(CRITSECT_CBUF);
              v32 = strlen_noncrt("xstartprivateparty\n");
              v33 = v32;
              v34 = v27->cmdsize;
              if ( (int)v34 + v32 < v27->maxsize )
              {
                memcpy_noncrt(&v27->data[v34], "xstartprivateparty\n", v32 + 1);
                v27->cmdsize += v33;
                v35 = ScriptContext_Server();
                Scr_MonitorCommand(v35, "xstartprivateparty\n");
              }
              else
              {
                Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", "xstartprivateparty\n");
              }
              Sys_LeaveCriticalSection(CRITSECT_CBUF);
            }
            else
            {
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E88CF8);
            }
          }
          else
          {
            while ( !XUID::operator==((XUID *)&id, &xuid[v16]) )
            {
              if ( ++v16 >= v11 )
                goto LABEL_30;
            }
          }
        }
      }
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v90);
  }
  if ( s_currentBracket.mmStatus == FORMING )
    goto LABEL_214;
  if ( bdJSONDeserializer::getObject(&v92, "tournamentDefinition", &v94) )
  {
    if ( !bdJSONDeserializer::getInt32(&v94, "teamSize", &s_currentBracket.teamSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3076, ASSERT_TYPE_ASSERT, "(tournamentDefinitionObject.getInt32( \"teamSize\", s_currentBracket.teamSize ))", (const char *)&queryFormat, "tournamentDefinitionObject.getInt32( \"teamSize\", s_currentBracket.teamSize )") )
      __debugbreak();
    if ( !bdJSONDeserializer::getInt32(&v94, "numTeams", &s_currentBracket.teamCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3077, ASSERT_TYPE_ASSERT, "(tournamentDefinitionObject.getInt32( \"numTeams\", s_currentBracket.teamCount ))", (const char *)&queryFormat, "tournamentDefinitionObject.getInt32( \"numTeams\", s_currentBracket.teamCount )") )
      __debugbreak();
    if ( !bdJSONDeserializer::getInt32(&v94, "numPlayers", &s_currentBracket.participantCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3078, ASSERT_TYPE_ASSERT, "(tournamentDefinitionObject.getInt32( \"numPlayers\", s_currentBracket.participantCount ))", (const char *)&queryFormat, "tournamentDefinitionObject.getInt32( \"numPlayers\", s_currentBracket.participantCount )") )
      __debugbreak();
    integer = 8;
    v37 = DVARINT_online_tournament_min_bracket_team_count;
    if ( !DVARINT_online_tournament_min_bracket_team_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_min_bracket_team_count") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    if ( v37->current.integer > 8 )
    {
      v38 = DVARINT_online_tournament_min_bracket_team_count;
      if ( !DVARINT_online_tournament_min_bracket_team_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_min_bracket_team_count") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v38);
      integer = v38->current.integer;
    }
    teamCount = s_currentBracket.teamCount;
    if ( s_currentBracket.teamCount > 16 )
    {
      LODWORD(v80) = s_currentBracket.teamCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3089, ASSERT_TYPE_ASSERT, "(s_currentBracket.teamCount <= 16)", "%s\n\tTournament: Unexpectedly large team count (%d), we only support up to (%d) teams!", "s_currentBracket.teamCount <= TOURNAMENT_UI_BRACKET_TEAM_COUNT_BIG", v80, 16) )
        __debugbreak();
      teamCount = s_currentBracket.teamCount;
    }
    if ( teamCount < integer )
    {
      Com_Printf(25, "Tournament: Faking tournament teamCount from %d to 8\n", (unsigned int)teamCount);
      teamCount = integer;
      s_currentBracket.teamCount = integer;
    }
    if ( teamCount > 8 )
    {
      Com_Printf(25, "Tournament: Too many teams for small bracket, so using big bracket (%d).\n", (unsigned int)teamCount);
      teamCount = 16;
      s_currentBracket.teamCount = 16;
    }
    v40 = (unsigned int)(teamCount * s_currentBracket.teamSize);
    if ( s_currentBracket.participantCount < (int)v40 )
    {
      Com_Printf(25, "Tournament: Faking tournament participantCount from %d to %d\n", (unsigned int)s_currentBracket.participantCount, v40);
      teamCount = s_currentBracket.teamCount;
      s_currentBracket.participantCount = s_currentBracket.teamCount * s_currentBracket.teamSize;
    }
    if ( teamCount <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3109, ASSERT_TYPE_ASSERT, "(s_currentBracket.teamCount > 0)", (const char *)&queryFormat, "s_currentBracket.teamCount > 0") )
        __debugbreak();
      teamCount = s_currentBracket.teamCount;
    }
    if ( ((teamCount - 1) & teamCount) != 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3110, ASSERT_TYPE_ASSERT, "((s_currentBracket.teamCount & (s_currentBracket.teamCount - 1)) == 0)", (const char *)&queryFormat, "(s_currentBracket.teamCount & (s_currentBracket.teamCount - 1)) == 0") )
        __debugbreak();
      teamCount = s_currentBracket.teamCount;
    }
    if ( s_currentBracket.teamSize <= 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3111, ASSERT_TYPE_ASSERT, "(s_currentBracket.teamSize > 0)", (const char *)&queryFormat, "s_currentBracket.teamSize > 0") )
        __debugbreak();
      teamCount = s_currentBracket.teamCount;
    }
    if ( s_currentBracket.participantCount == teamCount * s_currentBracket.teamSize )
      goto LABEL_105;
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3112, ASSERT_TYPE_ASSERT, "(s_currentBracket.participantCount == s_currentBracket.teamSize * s_currentBracket.teamCount)", (const char *)&queryFormat, "s_currentBracket.participantCount == s_currentBracket.teamSize * s_currentBracket.teamCount");
  }
  else
  {
    v41 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: received tournament state without a tournament definition");
  }
  if ( v41 )
    __debugbreak();
LABEL_105:
  v42 = 0i64;
  for ( k = 0; k < 0x50; ++k )
  {
    v44 = XUID::NullXUID(&result);
    XUID::operator=(&s_currentBracket.participants[k], v44);
  }
  if ( !bdJSONDeserializer::getArray(&v92, "teams", &v98) )
    goto LABEL_214;
  bdJSONDeserializer::bdJSONDeserializer(&v89);
  for ( m = 0; m < s_currentBracket.teamCount; ++m )
  {
    if ( !bdJSONDeserializer::getObject(&v98, m, &v89) )
      break;
    bdJSONDeserializer::bdJSONDeserializer(&v90);
    if ( !bdJSONDeserializer::getInt32(&v89, "teamID", &v82) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3134, ASSERT_TYPE_ASSERT, "(teamObject.getInt32( \"teamID\", teamID ))", (const char *)&queryFormat, "teamObject.getInt32( \"teamID\", teamID )") )
      __debugbreak();
    if ( bdJSONDeserializer::getArray(&v89, "playerIDs", &v90) )
    {
      if ( bdJSONDeserializer::getUInt64(&v90, 0, (unsigned __int64 *)v86) )
      {
        do
        {
          v46 = v42 + v82 * s_currentBracket.teamSize;
          v47 = XUID::FromUInt64(&result, *(unsigned __int64 *)v86);
          XUID::operator=(&s_currentBracket.participants[v46], v47);
          LODWORD(v42) = v42 + 1;
        }
        while ( bdJSONDeserializer::getUInt64(&v90, v42, (unsigned __int64 *)v86) );
      }
      v42 = 0i64;
    }
    bdJSONDeserializer::~bdJSONDeserializer(&v90);
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v89);
  if ( !bdJSONDeserializer::getArray(&v92, "rounds", &v96) )
    goto LABEL_214;
  bdJSONDeserializer::bdJSONDeserializer(&v90);
  v48 = 0;
  s_currentBracket.totalRounds = 0;
  v49 = s_currentBracket.teamCount;
  if ( s_currentBracket.teamCount > 1 )
  {
    do
    {
      ++v48;
      v49 >>= 1;
    }
    while ( v49 > 1 );
    s_currentBracket.totalRounds = v48;
  }
  s_currentBracket.bracketSize = s_currentBracket.teamCount / 2;
  v50 = 0;
  v81 = 0;
  if ( bdJSONDeserializer::getObject(&v96, 0, &v90) )
  {
    v51 = 0;
    do
    {
      bdJSONDeserializer::bdJSONDeserializer(&v97);
      if ( !bdJSONDeserializer::getInt32(&v90, "roundID", &v87) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3175, ASSERT_TYPE_ASSERT, "(roundObject.getInt32( \"roundID\", roundID ))", (const char *)&queryFormat, "roundObject.getInt32( \"roundID\", roundID )") )
        __debugbreak();
      if ( v51 != v87 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3176, ASSERT_TYPE_SANITY, "( round == roundID )", (const char *)&queryFormat, "round == roundID") )
        __debugbreak();
      if ( bdJSONDeserializer::getArray(&v90, "matches", &v97) )
      {
        bdJSONDeserializer::bdJSONDeserializer(&v89);
        v52 = 0;
        if ( bdJSONDeserializer::getObject(&v97, 0, &v89) )
        {
          v53 = 0;
          while ( 1 )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v104);
            bdJSONDeserializer::bdJSONDeserializer(&v103);
            bdJSONDeserializer::bdJSONDeserializer(&v102);
            MatchStorageIndex = (int)OnlineTournament_GetMatchStorageIndex(v50, v52);
            if ( bdJSONDeserializer::getInt32(&v89, "winningTeamID", (int *)&dwTeam) )
              break;
            v56 = MatchStorageIndex;
            s_currentBracket.matchStatus[MatchStorageIndex].winner = TEAM_ZERO;
LABEL_152:
            if ( bdJSONDeserializer::getObject(&v89, "matchResultPayload", &v102) )
            {
              bdJSONDeserializer::bdJSONDeserializer(&v101);
              if ( bdJSONDeserializer::getArray(&v102, "scores", &v101) )
              {
                for ( n = 0; n < 2; ++n )
                {
                  if ( bdJSONDeserializer::getUInt16(&v101, n, v83) )
                    s_currentBracket.matchStatus[v56].scores[v42] = v83[0];
                  ++v42;
                }
              }
              bdJSONDeserializer::~bdJSONDeserializer(&v101);
            }
            v61 = v56;
            if ( bdJSONDeserializer::getBoolean(&v89, "expired", &s_currentBracket.matchStatus[v61].expired) )
            {
              if ( v50 == s_myCurrentRound && v52 == s_myCurrentMatch )
              {
                if ( bdJSONDeserializer::getInt32(&v89, "expireReason", &v82) )
                {
                  Com_Printf(25, "Tournament: my match expired with reason %d\n", (unsigned int)v82);
                  if ( s_currentBracket.tournamentID == OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) && (unsigned __int8)s_tournamentState >= 8u )
                  {
                    v62 = DVARBOOL_online_tournament_com_error_on_expire_disabled;
                    if ( !DVARBOOL_online_tournament_com_error_on_expire_disabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_com_error_on_expire_disabled") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v62);
                    if ( !v62->current.enabled )
                    {
                      v63 = j_va("%d", (unsigned int)v82);
                      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x2000000, v63);
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87E68);
                    }
                  }
                }
                else
                {
                  Com_PrintWarning(25, "Tournament: match expired with no reason given!\n");
                }
              }
            }
            else
            {
              s_currentBracket.matchStatus[v61].expired = 0;
            }
            bdJSONDeserializer::getUInt64(&v89, "lobbyID", &s_currentBracket.matchStatus[v61].lobbyID);
            if ( bdJSONDeserializer::getArray(&v89, "teamIDs", &v104) )
            {
              v64 = 0;
              teams = s_currentBracket.matchStatus[v61].teams;
              do
              {
                if ( bdJSONDeserializer::getUInt32(&v104, v64, v86) )
                  *teams = OnlineMatchmakerOmniscient::ConvertDWTeamtoGameTeam(v86[0]);
                else
                  *teams = TEAM_ZERO;
                ++v64;
                ++teams;
              }
              while ( v64 < 2 );
            }
            if ( bdJSONDeserializer::getArray(&v89, "readyPlayerIDs", &v103) )
            {
              v66 = 0;
              if ( 2 * s_currentBracket.teamSize > 0 )
              {
                do
                {
                  if ( bdJSONDeserializer::getUInt64(&v103, v66, &v93) )
                  {
                    XUID::XUID(&v91);
                    v67 = XUID::FromUInt64(&v100, v93);
                    XUID::operator=(&v91, v67);
                    result.m_id = v91.m_id;
                    v68 = 0;
                    if ( s_currentBracket.participantCount <= 0 )
                      goto LABEL_184;
                    while ( !XUID::operator==(&s_currentBracket.participants[v68], &result) )
                    {
                      if ( ++v68 >= s_currentBracket.participantCount )
                        goto LABEL_184;
                    }
                    if ( v68 / s_currentBracket.teamSize < 0 )
                    {
LABEL_184:
                      Com_PrintWarning(25, "Tournament: Could not mark user ready to start because he's not in the tournament.\n");
                    }
                    else
                    {
                      v77 = v68 / s_currentBracket.teamSize;
                      v78 = v61 * 32 + _bittest(&v77, v51);
                      s_currentBracket.matchStatus[0].readyStatus[v78] |= 1 << (v68 % s_currentBracket.teamSize);
                    }
                  }
                  ++v66;
                }
                while ( v66 < 2 * s_currentBracket.teamSize );
                v50 = v81;
              }
            }
            bdJSONDeserializer::~bdJSONDeserializer(&v102);
            bdJSONDeserializer::~bdJSONDeserializer(&v103);
            bdJSONDeserializer::~bdJSONDeserializer(&v104);
            v53 = ++v52;
            v42 = 0i64;
            if ( !bdJSONDeserializer::getObject(&v97, v52, &v89) )
              goto LABEL_188;
          }
          v55 = OnlineMatchmakerOmniscient::ConvertDWTeamtoGameTeam(dwTeam);
          v56 = MatchStorageIndex;
          p_winner = &s_currentBracket.matchStatus[MatchStorageIndex].winner;
          if ( *p_winner && *p_winner != v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3199, ASSERT_TYPE_ASSERT, "(s_currentBracket.matchStatus[matchStorageIndex].winner == TEAM_FREE || s_currentBracket.matchStatus[matchStorageIndex].winner == winningGameTeam)", "%s\n\tTournament: received a different winner than we had previously recorded for a match?", "s_currentBracket.matchStatus[matchStorageIndex].winner == TEAM_FREE || s_currentBracket.matchStatus[matchStorageIndex].winner == winningGameTeam") )
            __debugbreak();
          *p_winner = v55;
          if ( v50 == s_myCurrentRound && v52 == s_myCurrentMatch )
          {
            if ( (_BYTE)s_tournamentState == 14 )
            {
              v42 = 0i64;
              s_myMatchReadyTimer = 0;
              Com_Printf(25, "Tournament: beginning to break lobby\n");
              s_enteredStateTime = Sys_Milliseconds();
              Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 15i64);
              LOBYTE(s_tournamentState) = 15;
              ActiveParty = Party_GetActiveParty();
              if ( Party_AreWeHost(ActiveParty) )
                PartyHost_GamestateChanged(ActiveParty);
              goto LABEL_145;
            }
            Com_PrintWarning(25, "Tournament: Received match result for my current match but I'm not playing.\n");
          }
          v42 = 0i64;
LABEL_145:
          if ( (_BYTE)s_tournamentState == 11 && v51 == s_spectateRound && v53 == s_spectateMatch )
          {
            s_enteredStateTime = Sys_Milliseconds();
            Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 15i64);
            LOBYTE(s_tournamentState) = 15;
            v59 = Party_GetActiveParty();
            if ( Party_AreWeHost(v59) )
              PartyHost_GamestateChanged(v59);
          }
          goto LABEL_152;
        }
LABEL_188:
        bdJSONDeserializer::~bdJSONDeserializer(&v89);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v97);
      v81 = ++v50;
      v51 = v50;
    }
    while ( bdJSONDeserializer::getObject(&v96, v50, &v90) );
  }
  Live_GetXuid((XUID *)&id, s_lobbyController);
  result.m_id = id;
  v69 = 0;
  if ( s_currentBracket.participantCount <= 0 )
  {
LABEL_193:
    v70 = -1;
  }
  else
  {
    while ( !XUID::operator==(&s_currentBracket.participants[v69], &result) )
    {
      if ( ++v69 >= s_currentBracket.participantCount )
        goto LABEL_193;
    }
    v70 = v69 / s_currentBracket.teamSize;
  }
  s_myTeamID = v70;
  if ( v70 < 0 )
  {
    v71 = XUID::ToUint64((XUID *)&id);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3318, ASSERT_TYPE_ASSERT, "(s_myTeamID >= 0)", "%s\n\tUnable to find xuid %llu in bracket data\n", "s_myTeamID >= 0", v71) )
      __debugbreak();
  }
  if ( (unsigned int)s_myTeamID >= s_currentBracket.teamCount )
  {
    LODWORD(v80) = s_currentBracket.teamCount;
    LODWORD(v79) = s_myTeamID;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3961, ASSERT_TYPE_ASSERT, "(unsigned)( s_myTeamID ) < (unsigned)( s_currentBracket.teamCount )", "s_myTeamID doesn't index s_currentBracket.teamCount\n\t%i not in [0, %i)", v79, v80) )
      __debugbreak();
  }
  LOBYTE(s_myParticipationStatus) = 1;
  s_myCurrentRound = 0;
  v72 = truncate_cast<unsigned short,int>(s_myTeamID / 2);
  s_myCurrentMatch = v72;
  LOWORD(v73) = s_myCurrentRound;
  while ( 1 )
  {
    winner = s_currentBracket.matchStatus[(int)OnlineTournament_GetMatchStorageIndex(v73, v72)].winner;
    v75 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(winner);
    v76 = v75 == s_myTeamID;
    if ( v75 != s_myTeamID )
      break;
    v73 = s_myCurrentRound;
    if ( s_myCurrentRound == s_currentBracket.totalRounds - 1 )
    {
      LOBYTE(s_myParticipationStatus) = 3;
      goto LABEL_213;
    }
    LOWORD(v73) = ++s_myCurrentRound;
    v72 = s_myCurrentMatch >> 1;
    s_myCurrentMatch >>= 1;
LABEL_209:
    if ( !v76 )
      goto LABEL_213;
  }
  if ( winner == TEAM_ZERO )
  {
    v73 = s_myCurrentRound;
    v72 = s_myCurrentMatch;
    goto LABEL_209;
  }
  LOBYTE(s_myParticipationStatus) = 2;
LABEL_213:
  Com_Printf(25, "Tournament: bracket updated from matchmaking tournament state doc.\n", v73);
  bdJSONDeserializer::~bdJSONDeserializer(&v90);
LABEL_214:
  bdJSONDeserializer::~bdJSONDeserializer(&v94);
  bdJSONDeserializer::~bdJSONDeserializer(&v95);
  bdJSONDeserializer::~bdJSONDeserializer(&v98);
  bdJSONDeserializer::~bdJSONDeserializer(&v96);
LABEL_215:
  bdJSONDeserializer::~bdJSONDeserializer(&v92);
}

/*
==============
OnlineTournament_PublisherVariablesFetched
==============
*/

void OnlineTournament_PublisherVariablesFetched(void)
{
  OnlineTournament_ParseAndStorePossibleMapnames();
}

/*
==============
OnlineTournament_PushDetectedMatchStatusEventsToLUI
==============
*/
void OnlineTournament_PushDetectedMatchStatusEventsToLUI(lua_State *luaVM, unsigned __int16 roundIndex, unsigned __int16 matchIndex, const MatchStatusUpdate *prevStatus, const MatchStatusUpdate *newStatus, unsigned int *tableIndex)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int teamSize; 
  int v10; 
  int v11; 
  XUID *v12; 
  __int64 v13; 
  XUID *v14; 
  __int64 v15; 
  const XUID *v16; 
  const XUID *v17; 
  int participantCount; 
  char *v19; 
  int v20; 
  bool v21; 
  int v22; 
  int v23; 
  int v24; 
  char v25; 
  int v26; 
  int v27; 
  int v28; 
  __int64 v29; 
  XUID xuid; 
  __int64 v31; 
  __int64 v32; 
  XUID result; 
  XUID v34; 
  const MatchStatusUpdate *v38; 

  v38 = prevStatus;
  v6 = 0i64;
  v25 = roundIndex;
  v7 = 0i64;
  v8 = 2i64;
  v27 = roundIndex;
  v26 = roundIndex;
  teamSize = s_currentBracket.teamSize;
  v31 = 0i64;
  v29 = 0i64;
  v32 = 2i64;
  do
  {
    v10 = 0;
    v28 = 0;
    if ( teamSize > 0 )
    {
      do
      {
        v11 = 0;
        if ( teamSize > 0 )
        {
          v12 = (XUID *)((char *)prevStatus + 32 * v10 + v7);
          v13 = 0i64;
          v14 = v12 + 1;
          do
          {
            v15 = v7 + 32i64 * v11;
            if ( !XUID::operator!=(v14, (const XUID *)((char *)&newStatus->teamStatus[0].playerStatus[0].xuid + v15)) )
            {
              v16 = XUID::NullXUID(&result);
              if ( XUID::operator==(v12 + 3, v16) )
              {
                v17 = XUID::NullXUID(&v34);
                if ( XUID::operator!=((XUID *)((char *)&newStatus->teamStatus[0].playerStatus[0].killer + v15), v17) )
                {
                  participantCount = s_currentBracket.participantCount;
                  v19 = (char *)newStatus + v6 + v13;
                  v20 = 0;
                  xuid.m_id = *((_QWORD *)v19 + 3);
                  if ( s_currentBracket.participantCount <= 0 )
                  {
LABEL_11:
                    v22 = -1;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v21 = XUID::operator==(&s_currentBracket.participants[v20], &xuid);
                      participantCount = s_currentBracket.participantCount;
                      if ( v21 )
                        break;
                      if ( ++v20 >= s_currentBracket.participantCount )
                        goto LABEL_11;
                    }
                    v27 = v20 % s_currentBracket.teamSize;
                    v22 = v20 / s_currentBracket.teamSize;
                  }
                  v23 = 0;
                  xuid.m_id = *((_QWORD *)v19 + 1);
                  if ( participantCount <= 0 )
                  {
LABEL_15:
                    v24 = -1;
                  }
                  else
                  {
                    while ( !XUID::operator==(&s_currentBracket.participants[v23], &xuid) )
                    {
                      if ( ++v23 >= s_currentBracket.participantCount )
                        goto LABEL_15;
                    }
                    v26 = v23 % s_currentBracket.teamSize;
                    v24 = v23 / s_currentBracket.teamSize;
                  }
                  LUI_BeginTable(*tableIndex, luaVM);
                  LUI_SetTableInt("round", roundIndex, LUI_luaVM);
                  LUI_SetTableInt("match", matchIndex, LUI_luaVM);
                  LUI_SetTableInt("victim", v26, LUI_luaVM);
                  LUI_SetTableInt("victimTeam", ((1 << v25) & v24) != 0, LUI_luaVM);
                  LUI_SetTableInt("killer", v27, LUI_luaVM);
                  LUI_SetTableInt("killerTeam", ((1 << v25) & v22) != 0, LUI_luaVM);
                  LUI_SetTableInt("killerWeapon", *((unsigned __int16 *)v19 + 16), LUI_luaVM);
                  LUI_SetTableBool("killerHeadshot", v19[34], LUI_luaVM);
                  LUI_EndTable(luaVM);
                  v6 = v31;
                  ++*tableIndex;
                }
              }
            }
            teamSize = s_currentBracket.teamSize;
            v14 = v12 + 1;
            v7 = v29;
            ++v11;
            v13 += 32i64;
          }
          while ( v11 < s_currentBracket.teamSize );
          v10 = v28;
          prevStatus = v38;
        }
        v28 = ++v10;
      }
      while ( v10 < teamSize );
      v8 = v32;
    }
    v7 += 168i64;
    v6 += 168i64;
    --v8;
    v29 = v7;
    v32 = v8;
    v31 = v6;
  }
  while ( v8 );
}

/*
==============
OnlineTournament_PushRecentEventsForMatchToLUI
==============
*/
void OnlineTournament_PushRecentEventsForMatchToLUI(lua_State *luaVM, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  __int64 MatchStorageIndex; 
  int *v7; 
  int v8; 
  __int64 v9; 
  unsigned int tableIndex; 

  MatchStorageIndex = (int)OnlineTournament_GetMatchStorageIndex(roundIndex, matchIndex);
  j_lua_createtable(luaVM, 0, 0);
  tableIndex = 1;
  v7 = &s_statusUpdateIndex[MatchStorageIndex];
  v8 = 6;
  v9 = 6 * MatchStorageIndex;
  do
  {
    OnlineTournament_PushDetectedMatchStatusEventsToLUI(luaVM, roundIndex, matchIndex, &s_statusUpdates + v9 + (v8 + *v7 - 1) % 6, &s_statusUpdates + v9 + (v8 + *v7) % 6, &tableIndex);
    --v8;
  }
  while ( v8 > 0 );
}

/*
==============
OnlineTournament_RegisterCommands
==============
*/
void OnlineTournament_RegisterCommands(void)
{
  Cmd_AddCommandInternal("tournament_joinlobby", JoinLobby_f, &JoinLobby_f_VAR);
  Cmd_AddCommandInternal("tournament_leavelobby", LeaveLobby_f, &LeaveLobby_f_VAR);
  Cmd_AddCommandInternal("tournament_sendmessage", SendMessage_f, &SendMessage_f_VAR);
  Cmd_AddCommandInternal("tournament_healthupdate", SendHealthUpdate_f, &SendHealthUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_timeupdate", SendTimeUpdate_f, &SendTimeUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_sendresult", SendResult_f, &SendResult_f_VAR);
  Cmd_AddCommandInternal("tournament_killupdate", DoKillUpdate_f, &DoKillUpdate_f_VAR);
  Cmd_AddCommandInternal("tournament_scoreupdate", DoScoreUpdate_f, &DoScoreUpdate_f_VAR);
}

/*
==============
OnlineTournament_RegisterForTournament
==============
*/
void OnlineTournament_RegisterForTournament(int prevAttempts)
{
  int NextTournamentTime; 
  int v3; 
  const dvar_t *v4; 
  PartyData *ActiveParty; 
  unsigned int v6; 
  bool v7; 
  const char *v8; 
  TaskManager *Instance; 
  TaskManager *v10; 
  DWServicesAccess *v11; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v13; 
  bdRemoteTask *v14; 
  TaskManager *v15; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  __int64 v20; 
  char destString[64]; 
  char src[64]; 
  char dest[256]; 
  char buf[256]; 

  v20 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1892, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  if ( s_currentBracket.tournamentID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1893, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID == 0)", (const char *)&queryFormat, "s_currentBracket.tournamentID == 0") )
    __debugbreak();
  NextTournamentTime = OnlineTournament_GetNextTournamentTime(s_nextTournamentFullCount);
  v3 = NextTournamentTime - LiveStorage_GetUTC();
  v4 = DVARINT_online_tournament_registration_cutoff_time;
  if ( !DVARINT_online_tournament_registration_cutoff_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_registration_cutoff_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v3 < v4->current.integer )
    ++s_nextTournamentFullCount;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 1i64);
  LOBYTE(s_tournamentState) = 1;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  s_myTournamentTime = OnlineTournament_GetNextTournamentTime(s_nextTournamentFullCount);
  s_lobbyTaskData.queuedTask.taskType[0] = 10;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  if ( Online_DcQos_GetBestDatacenterName(destString, 64) )
    Core_strcpy(s_bestDatacenterName, 0x40ui64, destString);
  v6 = s_myTournamentTime;
  if ( Online_DcQos_GetBestDatacenterName(src, 64) )
    Core_strcpy(s_bestDatacenterName, 0x40ui64, src);
  v7 = s_bestDatacenterName[0] != 0;
  v8 = j_va("%d", v6);
  bdSnprintf(buf, 0x100ui64, "{ \"data_center\":\"%s\", \"tournament_name\":\"%s\" }", s_bestDatacenterName, v8);
  if ( !v7 )
  {
    Com_sprintf(dest, 0x100ui64, "DCQoS%d", (unsigned int)s_lobbyTaskData.prevAttempts);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x80000, dest);
    s_lobbyTaskData.retryDelay = 2000 << SLOBYTE(s_lobbyTaskData.prevAttempts);
    ++s_lobbyTaskData.prevAttempts;
    Com_Printf(25, "Tournament: waiting for DCQoS to complete before registering for tournament\n");
    goto LABEL_37;
  }
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = MatchmakingRegisterComplete;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  *(_QWORD *)s_tournamentRegistrationResult._bytes_20 = s_tournamentDocData;
  *(_DWORD *)&s_tournamentRegistrationResult._bytes_20[8] = 0x4000;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v10 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v10, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_35:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting matchmaking register task.\n");
    goto LABEL_37;
  }
  v11 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v11, s_lobbyController);
  v13 = (TaskCreateRequest *)DWAsyncMatchMaking::registerForTournament(AsyncMatchmaking, &result, buf, 0x100u, &s_tournamentRegistrationResult);
  if ( v13 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v14 = *(bdRemoteTask **)&v13->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v14;
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v15 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RegisterForTournament");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RegisterForTournament");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RegisterForTournament");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_35;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)64, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87D40, 6016i64);
LABEL_37:
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

/*
==============
OnlineTournament_Rejoin
==============
*/
void OnlineTournament_Rejoin(int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v3; 
  DWServicesAccess *v4; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *v6; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
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
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1723, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID", -2i64) )
    __debugbreak();
  if ( s_currentBracket.tournamentID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1724, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID == 0)", (const char *)&queryFormat, "s_currentBracket.tournamentID == 0") )
    __debugbreak();
  if ( !s_rejoinTournamentID )
  {
    Com_PrintWarning(25, "Tournament: Attempting to rejoin tournament but s_rejoinTournamentID == %llu.  Aborting.\n", 0i64);
    goto LABEL_30;
  }
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = MatchmakingRejoinComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 9;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v3 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v3, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_28:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting matchmaking rejoin task with tournamentID %llu\n", s_rejoinTournamentID);
    goto LABEL_30;
  }
  v4 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v4, s_lobbyController);
  v6 = (TaskCreateRequest *)DWAsyncMatchMaking::rejoinTournament(AsyncMatchmaking, &result, s_rejoinTournamentID);
  if ( v6 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v7 = *(bdRemoteTask **)&v6->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
    if ( v7 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v8 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_Rejoin");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_Rejoin");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_Rejoin");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_28;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)64, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E878E0, 5830i64);
LABEL_30:
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

/*
==============
OnlineTournament_RequestMatchmakingBracket
==============
*/
void OnlineTournament_RequestMatchmakingBracket(void)
{
  PartyData *ActiveParty; 

  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 5i64);
  LOBYTE(s_tournamentState) = 5;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
}

/*
==============
OnlineTournament_RequestTournamentState
==============
*/
void OnlineTournament_RequestTournamentState(const int controllerIndex, int prevAttempts)
{
  TaskManager *Instance; 
  TaskManager *v5; 
  DWServicesAccess *v6; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  TaskCreateRequest *TournamentState; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
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
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1257, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1258, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = RequestTournamentStateComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 4;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  *(_QWORD *)s_tournamentStateResult._bytes_20 = s_tournamentDocData;
  *(_DWORD *)&s_tournamentStateResult._bytes_20[8] = 0x4000;
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v5 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v5, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_26:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(25, "Tournament: Starting request tournament state task.\n");
    goto LABEL_30;
  }
  v6 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v6, controllerIndex);
  TournamentState = (TaskCreateRequest *)DWAsyncMatchMaking::getTournamentState(AsyncMatchmaking, &result, &s_tournamentStateResult);
  if ( TournamentState != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v9 = *(bdRemoteTask **)&TournamentState->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v9;
    if ( v9 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v9->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v10 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RequestTournamentState");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RequestTournamentState");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_RequestTournamentState");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_26;
  OnlineTournament_Reset();
  if ( (_BYTE)s_tournamentState )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)8, NULL);
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E86C60, 5825i64);
  }
  else
  {
    Com_PrintError(25, "Tournament: Request tournament state failed - could not allocate a task!.\n");
  }
LABEL_30:
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

/*
==============
OnlineTournament_RequestedMatchmakingBracket
==============
*/
bool OnlineTournament_RequestedMatchmakingBracket()
{
  return (_BYTE)s_tournamentState == 5;
}

/*
==============
OnlineTournament_Reset
==============
*/
void OnlineTournament_Reset(void)
{
  const XUID *v0; 
  unsigned int v1; 
  LobbyQueuedTask *v2; 
  PartyData *ActiveParty; 
  unsigned int v4; 
  char *v5; 
  const dvar_t *v6; 
  int integer; 
  int v8; 
  XUID result; 

  s_lobbyTaskData.queuedTask.messageType[0] = 2;
  v0 = XUID::NullXUID(&result);
  XUID::operator=(&s_lobbyTaskData.queuedTask.recipient, v0);
  s_lobbyTaskData.queuedTask.taskType[0] = 0;
  v1 = 0;
  v2 = &s_lobbyTaskQueue[1];
  do
  {
    v1 += 8;
    v2[-1].taskType[0] = 0;
    v2->taskType[0] = 0;
    v2[1].taskType[0] = 0;
    v2[2].taskType[0] = 0;
    v2[3].taskType[0] = 0;
    v2[4].taskType[0] = 0;
    v2[5].taskType[0] = 0;
    v2[6].taskType[0] = 0;
    v2 += 8;
  }
  while ( v1 < 8 );
  s_lobbyTaskQueueNextSend = 0;
  s_chatLobbyID = 0i64;
  s_lobbyController = -1;
  LOBYTE(s_lobbyCommunicationState) = 0;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 0i64);
  LOBYTE(s_tournamentState) = 0;
  ActiveParty = Party_GetActiveParty();
  if ( Party_AreWeHost(ActiveParty) )
    PartyHost_GamestateChanged(ActiveParty);
  s_currentBracket.tournamentID = 0i64;
  *(_QWORD *)&s_currentBracket.participantCount = 0i64;
  *(_QWORD *)&s_currentBracket.teamCount = 0i64;
  s_currentBracket.totalRounds = 0;
  s_currentBracket.mmStatus = FORMING;
  memset_0(s_currentBracket.matchStatus, 0, sizeof(s_currentBracket.matchStatus));
  memset_0(&s_statusUpdates, 0, 0x8430ui64);
  s_myTeamID = -1;
  *(_QWORD *)s_statusUpdateIndex = 0i64;
  *(_QWORD *)&s_statusUpdateIndex[2] = 0i64;
  *(_QWORD *)&s_statusUpdateIndex[4] = 0i64;
  *(_QWORD *)&s_statusUpdateIndex[6] = 0i64;
  xmmword_14B6B3B78 = 0ui64;
  qword_14B6B3B88 = 0i64;
  dword_14B6B3B90 = 0;
  LOBYTE(s_myParticipationStatus) = 0;
  s_myCurrentRound = 0;
  s_myCurrentMatch = 0;
  s_myMatchReadyTimer = 0;
  memset_0(&s_currentMatchStatus, 0, sizeof(s_currentMatchStatus));
  v4 = 0;
  v5 = &s_currentMatchStatus.statusUpdate.scoreHistory[1];
  do
  {
    v4 += 32;
    *(_QWORD *)(v5 - 1) = -1i64;
    *(_QWORD *)(v5 + 7) = -1i64;
    *(_QWORD *)(v5 + 15) = -1i64;
    *(_QWORD *)(v5 + 23) = -1i64;
    v5 += 32;
  }
  while ( v4 < 0x20 );
  v6 = DVARINT_online_tournament_match_status_delay;
  if ( !DVARINT_online_tournament_match_status_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_match_status_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  v8 = Sys_Milliseconds();
  s_lastTimeUntilMyTournamentStart = 0;
  s_lastMatchStatusSent = v8 - integer;
  s_nextTournamentFullCount = 0;
  s_myTournamentTime = 0;
  s_rejoinTournamentID = 0i64;
  s_uiNavigationDestination = 0;
  s_tournamentStateUpdateCount = 0;
  memset_0(s_mapsChosenForCurrentTournament, 0, sizeof(s_mapsChosenForCurrentTournament));
}

/*
==============
OnlineTournament_ResetCBufTracking
==============
*/
void OnlineTournament_ResetCBufTracking(void)
{
  s_cbufTaskQueuedCount = 0;
  s_cbufTaskProcessedCount = 0;
}

/*
==============
OnlineTournament_SendMessage
==============
*/
void OnlineTournament_SendMessage(XUID recipient, const void *message, unsigned __int64 messageSize, LobbyMessageType messageType, int prevAttempts)
{
  unsigned __int8 v5; 
  TaskManager *Instance; 
  TaskManager *v9; 
  DWServicesAccess *v10; 
  DWMessaging *Messaging; 
  unsigned int v12; 
  unsigned __int64 UniversalId; 
  const bdReference<bdRemoteTask> *v14; 
  bdRemoteTask *m_ptr; 
  TaskManager *v16; 
  TaskManager *v17; 
  DWServicesAccess *v18; 
  DWMessaging *v19; 
  unsigned int v20; 
  const bdReference<bdRemoteTask> *v21; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  void *messagea; 
  __int64 messageSizea; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v29; 
  __int64 v30; 
  char dest[128]; 
  XUID xuid; 

  xuid.m_id = recipient.m_id;
  v30 = -2i64;
  v5 = messageType;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( (_BYTE)s_lobbyCommunicationState != HALF_HALF )
  {
    Com_PrintWarning(25, "Tournament: being asked to send message of type %d, but can't send messages.  Ignoring.\n", (unsigned __int8)messageType);
    goto LABEL_38;
  }
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3589, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  if ( messageSize <= 0x400 )
  {
    pTaskCreateRequest.m_controllerIndex = s_lobbyController;
    pTaskCreateRequest.m_onCompletionCallback = SendMessageComplete;
    s_lobbyTaskData.queuedTask.taskType[0] = 2;
    XUID::operator=(&s_lobbyTaskData.queuedTask.recipient, &xuid);
    s_lobbyTaskData.prevAttempts = prevAttempts;
    s_lobbyTaskData.queuedTask.messageType[0] = v5;
    s_lobbyTaskData.queuedTask.messageSize = messageSize;
    memcpy_0(s_lobbyTaskData.queuedTask.message, message, messageSize);
    pTaskCreateRequest.m_appData = &s_lobbyTaskData;
    if ( XUID::IsValid(&xuid) )
    {
      Instance = TaskManager::GetInstance();
      if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
      {
LABEL_15:
        v9 = TaskManager::GetInstance();
        TaskManager::CreateBreakerTask(v9, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
        pTaskCreateResult.m_resultType = SUCCESS;
LABEL_31:
        s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
        if ( v5 )
        {
          if ( v5 == 1 )
            Core_strcpy_truncate(dest, 0x80ui64, (const char *)message);
          else
            Core_strcpy_truncate(dest, 0x80ui64, "Unable to convert message to string!");
        }
        else
        {
          LODWORD(messagea) = *((unsigned __int16 *)message + 88);
          LODWORD(fmt) = *((unsigned __int16 *)message + 4);
          Com_sprintf_truncate(dest, 0x80ui64, "Match Update: mmLobbyID %llu, team 0 %d, team 1 %d", *(_QWORD *)message, fmt, messagea);
        }
        Com_Printf(25, "Tournament: Sending message: %s\n", dest);
        goto LABEL_38;
      }
      v10 = DWServicesAccess::GetInstance();
      Messaging = DWServicesAccess::GetMessaging(v10, s_lobbyController);
      v12 = truncate_cast<unsigned int,unsigned __int64>(messageSize);
      UniversalId = XUID::GetUniversalId(&xuid);
      v14 = DWMessaging::whisperToChannelMember(Messaging, &result, "tournament", s_chatLobbyID, UniversalId, message, v12, v5);
      bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v14);
      if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        m_ptr = result.m_ptr;
        goto LABEL_19;
      }
    }
    else
    {
      v17 = TaskManager::GetInstance();
      if ( TaskManager::ShouldRunTaskBreaker(v17, TOURNAMENT_CHAT) )
        goto LABEL_15;
      v18 = DWServicesAccess::GetInstance();
      v19 = DWServicesAccess::GetMessaging(v18, s_lobbyController);
      v20 = truncate_cast<unsigned int,unsigned __int64>(messageSize);
      v21 = DWMessaging::sendToChannel(v19, &v29, "tournament", s_chatLobbyID, message, v20, v5);
      bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v21);
      if ( v29.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v29.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        m_ptr = v29.m_ptr;
LABEL_19:
        if ( m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
      }
    }
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      v16 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v16, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        pTaskCreateResult.m_resultType = SUCCESS;
        Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SendMessage");
      }
      else
      {
        pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
        Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SendMessage");
      }
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
      Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SendMessage");
    }
    if ( pTaskCreateResult.m_resultType )
    {
      OnlineTournament_Reset();
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)128, NULL);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E8A0B0, 238i64);
      goto LABEL_38;
    }
    goto LABEL_31;
  }
  if ( (messageSize > 0x7FFFFFFFFFFFFFFFi64 || messageSize + 0x80000000 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)messageSize, "unsigned", messageSize) )
    __debugbreak();
  LODWORD(messageSizea) = 1024;
  LODWORD(messagea) = messageSize;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3593, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: Cannot send a message of size %d because it is too big (limit is %d)!", messagea, messageSizea) )
    __debugbreak();
LABEL_38:
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

/*
==============
OnlineTournament_SetBracket
==============
*/
void OnlineTournament_SetBracket(const OnlineTournamentBracket *fakeBracket)
{
  __int64 v2; 

  _RAX = &s_currentBracket;
  v2 = 9i64;
  do
  {
    _RAX = (OnlineTournamentBracket *)((char *)_RAX + 128);
    __asm { vmovups xmm0, xmmword ptr [rcx] }
    fakeBracket = (const OnlineTournamentBracket *)((char *)fakeBracket + 128);
    __asm
    {
      vmovups xmmword ptr [rax-80h], xmm0
      vmovups xmm1, xmmword ptr [rcx-70h]
      vmovups xmmword ptr [rax-70h], xmm1
      vmovups xmm0, xmmword ptr [rcx-60h]
      vmovups xmmword ptr [rax-60h], xmm0
      vmovups xmm1, xmmword ptr [rcx-50h]
      vmovups xmmword ptr [rax-50h], xmm1
      vmovups xmm0, xmmword ptr [rcx-40h]
      vmovups xmmword ptr [rax-40h], xmm0
      vmovups xmm1, xmmword ptr [rcx-30h]
      vmovups xmmword ptr [rax-30h], xmm1
      vmovups xmm0, xmmword ptr [rcx-20h]
      vmovups xmmword ptr [rax-20h], xmm0
      vmovups xmm1, xmmword ptr [rcx-10h]
      vmovups xmmword ptr [rax-10h], xmm1
    }
    --v2;
  }
  while ( v2 );
}

/*
==============
OnlineTournament_SetMyTournamentTime
==============
*/
void OnlineTournament_SetMyTournamentTime(int time)
{
  s_myTournamentTime = time;
}

/*
==============
OnlineTournament_SetPartyHostIsInTournament
==============
*/
void OnlineTournament_SetPartyHostIsInTournament(bool isInTournament)
{
  s_partyHostIsInTournament = isInTournament;
}

/*
==============
OnlineTournament_SetPartyHostIsQueuedForTournament
==============
*/
void OnlineTournament_SetPartyHostIsQueuedForTournament(bool isQueued)
{
  s_partyHostIsQueuedForTournament = isQueued;
}

/*
==============
OnlineTournament_SetQueuedUpForNextTournament
==============
*/
void OnlineTournament_SetQueuedUpForNextTournament(const int controllerIndex, bool queuedUp)
{
  const dvar_t *v3; 
  PartyData *ActiveParty; 
  LobbyQueuedTask task; 

  if ( queuedUp )
  {
    if ( (_BYTE)s_tournamentState )
    {
      Com_PrintWarning(25, "Tournament: cannot queue up for tournament when in state %d\n", (unsigned __int8)s_tournamentState);
    }
    else
    {
      s_lobbyController = controllerIndex;
      v3 = DVARBOOL_online_tournament_cleanup_leave_calls_enabled;
      if ( !DVARBOOL_online_tournament_cleanup_leave_calls_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_cleanup_leave_calls_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled )
        OnlineTournament_DoLeaveAllTournaments(controllerIndex);
      bdFileData::bdFileData(&task.fileData);
      XUID::XUID(&task.recipient);
      s_nextTournamentFullCount = 0;
      s_rejoinTournamentID = 0i64;
      s_lobbyController = controllerIndex;
      task.taskType[0] = 10;
      task.controllerIndex = controllerIndex;
      OnlineTournament_EnqueueTask(&task);
      bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
      bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
    }
  }
  else if ( (_BYTE)s_tournamentState == 2 )
  {
    s_enteredStateTime = Sys_Milliseconds();
    Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 0i64);
    LOBYTE(s_tournamentState) = 0;
    ActiveParty = Party_GetActiveParty();
    if ( Party_AreWeHost(ActiveParty) )
      PartyHost_GamestateChanged(ActiveParty);
  }
  else
  {
    Com_PrintWarning(25, "Tournament: cannot un queue for tournament when in state %d\n", (unsigned __int8)s_tournamentState);
  }
}

/*
==============
OnlineTournament_SetTournamentState
==============
*/
void OnlineTournament_SetTournamentState(TournamentState newState)
{
  unsigned int v1; 

  v1 = (unsigned __int8)newState;
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, v1);
  LOBYTE(s_tournamentState) = v1;
  OnlineTournament_OnStateEnter((TournamentState)(unsigned __int8)v1);
}

/*
==============
OnlineTournament_SetupMatchmakingParams
==============
*/
void OnlineTournament_SetupMatchmakingParams(OmniscientMatchmakingParams *outParams)
{
  const dvar_t *v1; 
  int PlaylistNumForId; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int v12; 

  outParams->m_localControllerIndex = s_lobbyController;
  v1 = DVARINT_online_tournament_playlist_id;
  if ( !DVARINT_online_tournament_playlist_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_playlist_id") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  PlaylistNumForId = Playlist_GetPlaylistNumForId(v1->current.integer);
  Live_SetPlaylistNum(s_lobbyController, PlaylistNumForId);
  outParams->m_playlistId = Playlist_GetPlaylistIdForNum(selectedPlaylist);
  outParams->m_playlistCategory = -1;
  outParams->m_netcodeVersion = GetProtocolVersion();
  outParams->m_playlistVersion = Playlist_GetVersionNumber();
  v4 = DVARINT_online_tournament_matchmaking_game_type;
  if ( !DVARINT_online_tournament_matchmaking_game_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_matchmaking_game_type") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  outParams->m_gameType = v4->current.integer;
  v5 = DVARINT_online_tournament_definition_teamcount;
  if ( !DVARINT_online_tournament_definition_teamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_teamcount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  v7 = DVARINT_online_tournament_definition_partysize;
  if ( !DVARINT_online_tournament_definition_partysize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_partysize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  v9 = DVARINT_online_tournament_definition_partysize;
  v10 = integer * v8;
  if ( !DVARINT_online_tournament_definition_partysize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_partysize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  outParams->m_tournamentTeamSize = v9->current.integer;
  v11 = DVARINT_online_tournament_definition_min_teams;
  if ( !DVARINT_online_tournament_definition_min_teams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_min_teams") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = outParams->m_tournamentTeamSize * v11->current.integer;
  outParams->m_maxPlayers = v10;
  outParams->m_minPlayerNeeded = v12;
  Dvar_SetInt_Internal(DVARINT_party_minplayers, v12);
  Dvar_SetInt_Internal(DVARINT_party_maxplayers, outParams->m_maxPlayers);
}

/*
==============
OnlineTournament_ShouldSessionBeClosed
==============
*/
bool OnlineTournament_ShouldSessionBeClosed()
{
  const dvar_t *v0; 

  if ( !(_BYTE)s_tournamentState )
    return 0;
  v0 = DVARBOOL_online_tournament_rejoin_enabled;
  if ( !DVARBOOL_online_tournament_rejoin_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_rejoin_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return !v0->current.enabled || s_currentBracket.tournamentID != OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) || (unsigned __int8)s_tournamentState < 8u || s_currentBracket.teamSize <= 1;
}

/*
==============
OnlineTournament_StartSim
==============
*/
void OnlineTournament_StartSim(void)
{
  TournamentState v0; 
  OnlineTournamentBracket result; 

  if ( !OnlineTournamentSim_IsSimModeEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2857, ASSERT_TYPE_ASSERT, "(OnlineTournamentSim_IsSimModeEnabled())", (const char *)&queryFormat, "OnlineTournamentSim_IsSimModeEnabled()") )
    __debugbreak();
  OnlineTournament_Reset();
  OnlinetTournamentSim_SetupFakeDoc(&result, &s_currentBracket);
  s_enteredStateTime = Sys_Milliseconds();
  Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 8i64);
  LOBYTE(v0) = 8;
  LOBYTE(s_tournamentState) = 8;
  OnlineTournament_OnStateEnter(v0);
}

/*
==============
OnlineTournament_SubmitMatchResults
==============
*/
void OnlineTournament_SubmitMatchResults(const unsigned __int64 lobbyID, const unsigned __int64 winningTeamID, const unsigned __int16 *scores)
{
  LobbyQueuedTask task; 

  bdFileData::bdFileData(&task.fileData);
  XUID::XUID(&task.recipient);
  task.taskType[0] = 8;
  task.mmLobbyID = lobbyID;
  task.winningTeamID = truncate_cast<unsigned char,unsigned __int64>(winningTeamID);
  task.scores[0] = *scores;
  task.scores[1] = scores[1];
  OnlineTournament_EnqueueTask(&task);
  bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
  bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
}

/*
==============
OnlineTournament_SubmitTournamentMatchResults
==============
*/
void OnlineTournament_SubmitTournamentMatchResults(int prevAttempts, unsigned __int64 mmLobbyID, unsigned __int64 winningTeamID, unsigned __int16 *scores)
{
  TaskManager *Instance; 
  TaskManager *v9; 
  DWServicesAccess *v10; 
  DWAsyncMatchMaking *AsyncMatchmaking; 
  __int64 v12; 
  TaskCreateRequest *matched; 
  bdRemoteTask *v14; 
  TaskManager *v15; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 
  __int64 v20; 
  char buf[256]; 

  v20 = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( s_lobbyTaskID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1640, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == 0)", (const char *)&queryFormat, "s_lobbyTaskID == TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  if ( !s_currentBracket.tournamentID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1641, ASSERT_TYPE_ASSERT, "(s_currentBracket.tournamentID != 0)", (const char *)&queryFormat, "s_currentBracket.tournamentID != 0") )
    __debugbreak();
  pTaskCreateRequest.m_controllerIndex = s_lobbyController;
  pTaskCreateRequest.m_onCompletionCallback = SubmitTournamentMatchResultsComplete;
  s_lobbyTaskData.queuedTask.taskType[0] = 8;
  s_lobbyTaskData.prevAttempts = prevAttempts;
  s_lobbyTaskData.queuedTask.mmLobbyID = mmLobbyID;
  s_lobbyTaskData.queuedTask.winningTeamID = truncate_cast<unsigned char,unsigned __int64>(winningTeamID);
  s_lobbyTaskData.queuedTask.scores[0] = *scores;
  s_lobbyTaskData.queuedTask.scores[1] = scores[1];
  pTaskCreateRequest.m_appData = &s_lobbyTaskData;
  bdSnprintf(buf, 0x100ui64, "{\"tournamentID\": %llu, \"lobbyID\" : %llu, \"winningTeamID\" : %llu, \"matchResultPayload\" : { \"scores\" : [ %d, %d ] } }", s_currentBracket.tournamentID, mmLobbyID, winningTeamID, *scores, scores[1]);
  Instance = TaskManager::GetInstance();
  if ( TaskManager::ShouldRunTaskBreaker(Instance, TOURNAMENT_CHAT) )
  {
    v9 = TaskManager::GetInstance();
    TaskManager::CreateBreakerTask(v9, TOURNAMENT_CHAT, &pTaskCreateRequest, &pTaskCreateResult);
    pTaskCreateResult.m_resultType = SUCCESS;
LABEL_24:
    s_lobbyTaskID = pTaskCreateResult.m_localTaskId;
    Com_Printf(131097, "Tournament: Starting submit match results task.\n");
    goto LABEL_26;
  }
  v10 = DWServicesAccess::GetInstance();
  AsyncMatchmaking = DWServicesAccess::GetAsyncMatchmaking(v10, s_lobbyController);
  v12 = -1i64;
  do
    ++v12;
  while ( buf[v12] );
  matched = (TaskCreateRequest *)DWAsyncMatchMaking::submitTournamentMatchResults(AsyncMatchmaking, &result, buf, (int)v12 + 1);
  if ( matched != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v14 = *(bdRemoteTask **)&matched->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v14;
    if ( v14 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v14->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    v15 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateResult.m_resultType = SUCCESS;
      Com_Printf(16, "Task Manager created task %d for controllerIndex %d in %s\n", pTaskCreateResult.m_localTaskId, (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SubmitTournamentMatchResults");
    }
    else
    {
      pTaskCreateResult.m_resultType = TASK_CREATE_FAIL;
      Com_PrintError(16, "Task Manager unable to create DW task for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SubmitTournamentMatchResults");
    }
  }
  else
  {
    pTaskCreateResult.m_resultType = TASK_LOGIC_FAIL;
    Com_PrintError(16, "Unable to create bdRemoteTaskRef for controllerIndex %d in %s\n", (unsigned int)pTaskCreateRequest.m_controllerIndex, "OnlineTournament_SubmitTournamentMatchResults");
  }
  if ( pTaskCreateResult.m_resultType == SUCCESS )
    goto LABEL_24;
  OnlineTournament_Reset();
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)32, NULL);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87680, 5829i64);
LABEL_26:
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

/*
==============
OnlineTournament_UIFrame
==============
*/
void OnlineTournament_UIFrame(void)
{
  int v0; 
  signed int v1; 
  LocalClientNum_t ClientFromController; 
  int ServerTime; 
  int v4; 
  int v5; 
  int v6; 

  if ( LiveStorage_IsTimeSynced() )
  {
    if ( (_BYTE)s_lobbyCommunicationState == HALF_HALF )
      LUI_DataBindingLobby_PushTournamentDataToModel();
    v0 = s_myTournamentTime;
    if ( s_myTournamentTime )
    {
      v1 = 1000 * (v0 - LiveStorage_GetUTC());
      if ( (_BYTE)s_tournamentState == 2 )
      {
        if ( s_lobbyController < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2610, ASSERT_TYPE_ASSERT, "(s_lobbyController >= 0)", (const char *)&queryFormat, "s_lobbyController >= 0") )
          __debugbreak();
        ClientFromController = CL_Mgr_GetClientFromController(s_lobbyController);
        ServerTime = Sys_Milliseconds();
        if ( !LUI_CoD_InFrontend() )
          ServerTime = Game_GetServerTime(ClientFromController);
        if ( OnlineTournament_CanDoRejoin(s_lobbyController) && Dvar_GetBool_Internal_DebugName(DVARBOOL_online_tournament_reminders_enabled, "online_tournament_reminders_enabled") )
        {
          v4 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_reminder_toast_notify_time, "online_tournament_reminder_toast_notify_time");
          if ( v1 <= v4 && s_lastTimeUntilMyTournamentStart > v4 && LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
          {
            LUI_BeginTable("options", 0, 2, LUI_luaVM);
            LUI_SetTableString("genEventName", "genTournamentReminder", LUI_luaVM);
            LUI_SetTableInt("timerEndTime", ServerTime + v1, LUI_luaVM);
            LUI_SetTableInt("controllerIndex", s_lobbyController, LUI_luaVM);
            LUI_EndTable(LUI_luaVM);
            LUI_EndEvent(LUI_luaVM);
          }
          v5 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_callback_toast_notify_time, "online_tournament_callback_toast_notify_time");
          v6 = 1000 * Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_callback_toast_notify_duration, "online_tournament_callback_toast_notify_duration");
          if ( v1 <= v5 && s_lastTimeUntilMyTournamentStart > v5 && LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
          {
            LUI_BeginTable("options", 0, 2, LUI_luaVM);
            LUI_SetTableString("genEventName", "genJoinTournamentCallback", LUI_luaVM);
            LUI_SetTableInt("timerEndTime", v6 + ServerTime, LUI_luaVM);
            LUI_SetTableInt("controllerIndex", s_lobbyController, LUI_luaVM);
            LUI_EndTable(LUI_luaVM);
            LUI_EndEvent(LUI_luaVM);
          }
        }
      }
      s_lastTimeUntilMyTournamentStart = v1;
    }
  }
}

/*
==============
OnlineTournament_UpdateBestDatacenter
==============
*/
void OnlineTournament_UpdateBestDatacenter(void)
{
  char destString[64]; 

  if ( Online_DcQos_GetBestDatacenterName(destString, 64) )
    Core_strcpy(s_bestDatacenterName, 0x40ui64, destString);
}

/*
==============
OnlineTournament_UpdateMatchStatus
==============
*/
void OnlineTournament_UpdateMatchStatus(int matchStorageIndex, const MatchStatusUpdate *matchStatus)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v24; 

  v2 = matchStorageIndex;
  _RBX = matchStatus;
  v4 = s_statusUpdateIndex[matchStorageIndex];
  if ( (unsigned int)matchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4851, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_statusUpdates ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_statusUpdates )\n\t%i not in [0, %i)", matchStorageIndex, 15) )
    __debugbreak();
  if ( s_currentBracket.teamSize > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4852, ASSERT_TYPE_ASSERT, "(s_currentBracket.teamSize <= 5)", (const char *)&queryFormat, "s_currentBracket.teamSize <= MAX_TOURNAMENT_TEAM_SIZE") )
    __debugbreak();
  v5 = ((int)v4 + 1) % 6;
  s_statusUpdateIndex[v2] = v5;
  v6 = 376 * (6 * v2 + v5);
  v7 = 2i64;
  _RCX = (char *)&s_statusUpdates + v6;
  do
  {
    _RCX += 128;
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    _RBX = (const MatchStatusUpdate *)((char *)_RBX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rbx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rbx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rbx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rbx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rbx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rbx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v7;
  }
  while ( v7 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rbx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rbx+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rbx+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rbx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rbx+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rbx+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
  }
  *((_QWORD *)_RCX + 14) = *(_QWORD *)&_RBX->teamStatus[0].playerStatus[3].health;
  v24 = 376 * (6 * v2 + v4);
  if ( *(_DWORD *)&s_statusUpdates.scoreHistory[v6 + 32] != *(_DWORD *)&s_statusUpdates.scoreHistory[v24 + 32] || *((_BYTE *)&s_statusUpdates.timeMode + v6) != *((_BYTE *)&s_statusUpdates.timeMode + v24) || *(&s_statusUpdates.roundNumber + v6) != *(&s_statusUpdates.roundNumber + v24) )
    s_statusTimeUpdates[v2] = Sys_Milliseconds();
  s_currentBracket.matchStatus[v2].hasStarted = 1;
}

/*
==============
OnlineTournament_UpdateMyCurrentStatus
==============
*/
void OnlineTournament_UpdateMyCurrentStatus(void)
{
  int v0; 
  unsigned __int16 v1; 
  unsigned __int16 v2; 
  team_t winner; 
  unsigned int v4; 
  bool v5; 

  v0 = s_myTeamID;
  if ( (unsigned int)s_myTeamID >= s_currentBracket.teamCount )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3961, ASSERT_TYPE_ASSERT, "(unsigned)( s_myTeamID ) < (unsigned)( s_currentBracket.teamCount )", "s_myTeamID doesn't index s_currentBracket.teamCount\n\t%i not in [0, %i)", s_myTeamID, s_currentBracket.teamCount) )
      __debugbreak();
    v0 = s_myTeamID;
  }
  LOBYTE(s_myParticipationStatus) = 1;
  s_myCurrentRound = 0;
  v1 = truncate_cast<unsigned short,int>(v0 / 2);
  v2 = s_myCurrentRound;
  s_myCurrentMatch = v1;
  while ( 1 )
  {
    winner = s_currentBracket.matchStatus[(int)OnlineTournament_GetMatchStorageIndex(v2, v1)].winner;
    v4 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(winner);
    v5 = v4 == s_myTeamID;
    if ( v4 != s_myTeamID )
      break;
    if ( s_myCurrentRound == s_currentBracket.totalRounds - 1 )
    {
      LOBYTE(s_myParticipationStatus) = 3;
      return;
    }
    v2 = s_myCurrentRound + 1;
    v1 = s_myCurrentMatch >> 1;
    s_myCurrentMatch >>= 1;
    ++s_myCurrentRound;
LABEL_11:
    if ( !v5 )
      return;
  }
  if ( winner == TEAM_ZERO )
  {
    v2 = s_myCurrentRound;
    v1 = s_myCurrentMatch;
    goto LABEL_11;
  }
  LOBYTE(s_myParticipationStatus) = 2;
}

/*
==============
OnlineTournament_UpdateNextTournamentTime
==============
*/
bool OnlineTournament_UpdateNextTournamentTime()
{
  const dvar_t *v0; 
  int integer; 
  unsigned int UTC; 
  const dvar_t *v3; 
  int v4; 
  int v5; 
  bool result; 

  if ( !LiveStorage_IsTimeSynced() )
    return 0;
  v0 = DVARINT_online_tournament_time_interval;
  if ( !DVARINT_online_tournament_time_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_time_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  integer = v0->current.integer;
  UTC = LiveStorage_GetUTC();
  v3 = DVARINT_online_tournament_time;
  v4 = UTC;
  if ( !DVARINT_online_tournament_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  v5 = v3->current.integer;
  s_nextTournamentTime = v5;
  if ( !v5 )
    return 0;
  if ( v5 - v4 < 0 )
    s_nextTournamentTime = integer + v4 - (v4 - v5) % integer;
  if ( v4 - s_myTournamentTime < 0 || s_myTournamentTime - s_myLastTimeChecked <= 0 )
  {
    result = 0;
    s_myLastTimeChecked = v4;
  }
  else
  {
    result = 1;
    s_myLastTimeChecked = v4;
  }
  return result;
}

/*
==============
OnlineTournament_UpdateSendFrame
==============
*/
void OnlineTournament_UpdateSendFrame(const int frameTime)
{
  PublisherVariableManager *Instance; 
  unsigned __int8 v3; 
  int prevAttempts; 
  int v5; 
  LobbyMessageType v6; 
  __int64 v7; 
  char v8; 
  LobbyMessageType v9; 
  __int64 v10; 

  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) )
  {
    v3 = s_lobbyTaskData.queuedTask.taskType[0];
    prevAttempts = s_lobbyTaskData.prevAttempts;
    if ( s_lobbyTaskData.queuedTask.taskType[0] && s_lobbyTaskData.prevAttempts >= 3 )
    {
      if ( s_lobbyController >= 0 )
      {
        Com_Printf(25, "Tournament: Leaving all offline tournament related things.\n");
        OnlineMatchmakerOmniscient::ResetMatchmaking(&OnlineMatchmakerOmniscient::ms_instance);
        OnlineMatchmakerOmniscient::ResetDisband(&OnlineMatchmakerOmniscient::ms_instance);
        OnlineTournament_Reset();
        v3 = s_lobbyTaskData.queuedTask.taskType[0];
      }
      if ( (_BYTE)s_tournamentState )
      {
        Live_ThrowError(ERR_DROP, "XBOXLIVE/LIVEERROR");
      }
      else
      {
        Com_PrintError(25, "Tournaments: The current task %d exceeded the number of retries, but since we are not in tournament, we are not com erroring\n", v3);
        OnlineTournament_Reset();
      }
      prevAttempts = s_lobbyTaskData.prevAttempts;
      v3 = s_lobbyTaskData.queuedTask.taskType[0];
    }
    v5 = s_lobbyTaskData.retryDelay - frameTime;
    s_lobbyTaskData.retryDelay -= frameTime;
    if ( !s_lobbyTaskID )
    {
      if ( v3 )
      {
        if ( v5 >= 0 )
          return;
        switch ( v3 )
        {
          case 1u:
            OnlineTournament_JoinCommunicationChannel_Internal(prevAttempts);
            return;
          case 2u:
            v6 = (unsigned __int8)s_lobbyTaskData.queuedTask.messageType[0];
            if ( s_lobbyTaskData.queuedTask.messageType[0] != 2 )
              goto LABEL_19;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2437, ASSERT_TYPE_ASSERT, "(s_lobbyTaskData.queuedTask.messageType != LobbyMessageType::NONE)", (const char *)&queryFormat, "s_lobbyTaskData.queuedTask.messageType != LobbyMessageType::NONE") )
              __debugbreak();
            v6 = (unsigned __int8)s_lobbyTaskData.queuedTask.messageType[0];
            if ( s_lobbyTaskData.queuedTask.messageType[0] != 2 )
            {
              prevAttempts = s_lobbyTaskData.prevAttempts;
LABEL_19:
              OnlineTournament_SendMessage(s_lobbyTaskData.queuedTask.recipient, s_lobbyTaskData.queuedTask.message, s_lobbyTaskData.queuedTask.messageSize, v6, prevAttempts);
              return;
            }
            break;
          case 3u:
            OnlineTournament_LeaveCommunicationChannel_Internal(prevAttempts);
            return;
          case 4u:
            OnlineTournament_RequestTournamentState(s_lobbyTaskData.queuedTask.controllerIndex, prevAttempts);
            return;
          case 5u:
            OnlineTournament_LeaveAllTournaments(s_lobbyTaskData.queuedTask.controllerIndex, prevAttempts);
            return;
          case 6u:
            OnlineTournament_AckJoinTournament(prevAttempts);
            return;
          case 7u:
            OnlineTournament_MatchmakingReadyUp(prevAttempts);
            return;
          case 8u:
            OnlineTournament_SubmitTournamentMatchResults(prevAttempts, s_lobbyTaskData.queuedTask.mmLobbyID, s_lobbyTaskData.queuedTask.winningTeamID, s_lobbyTaskQueue[s_lobbyTaskQueueNextSend].scores);
            return;
          case 9u:
            OnlineTournament_Rejoin(prevAttempts);
            return;
          case 0xAu:
            OnlineTournament_RegisterForTournament(prevAttempts);
            return;
          default:
            return;
        }
      }
      else
      {
        v7 = s_lobbyTaskQueueNextSend;
        v8 = s_lobbyTaskQueue[v7].taskType[0];
        if ( v8 )
        {
          switch ( v8 )
          {
            case 1:
              OnlineTournament_JoinCommunicationChannel_Internal(0);
              break;
            case 2:
              v9 = (unsigned __int8)s_lobbyTaskQueue[v7].messageType[0];
              if ( (_BYTE)v9 != HALF_HALF )
              {
                OnlineTournament_SendMessage(s_lobbyTaskQueue[v7].recipient, s_lobbyTaskQueue[v7].message, s_lobbyTaskQueue[v7].messageSize, v9, 0);
                s_lobbyTaskQueue[s_lobbyTaskQueueNextSend].messageType[0] = 2;
              }
              break;
            case 3:
              OnlineTournament_LeaveCommunicationChannel_Internal(0);
              break;
            case 4:
              OnlineTournament_RequestTournamentState(s_lobbyTaskQueue[v7].controllerIndex, 0);
              break;
            case 5:
              OnlineTournament_LeaveAllTournaments(s_lobbyTaskQueue[v7].controllerIndex, 0);
              break;
            case 6:
              OnlineTournament_AckJoinTournament(0);
              break;
            case 7:
              OnlineTournament_MatchmakingReadyUp(0);
              break;
            case 8:
              OnlineTournament_SubmitTournamentMatchResults(0, s_lobbyTaskQueue[v7].mmLobbyID, s_lobbyTaskQueue[v7].winningTeamID, s_lobbyTaskQueue[v7].scores);
              break;
            case 9:
              OnlineTournament_Rejoin(0);
              break;
            case 10:
              OnlineTournament_RegisterForTournament(0);
              break;
            default:
              break;
          }
          v10 = s_lobbyTaskQueueNextSend;
          s_lobbyTaskQueueNextSend = ((_BYTE)s_lobbyTaskQueueNextSend + 1) & 7;
          s_lobbyTaskQueue[v10].taskType[0] = 0;
        }
      }
    }
  }
}

/*
==============
OnlineTournament_UpdateStateFrame
==============
*/
void OnlineTournament_UpdateStateFrame()
{
  const PartyData *v0; 
  LocalClientNum_t localClientNum; 
  const char *LoadingScreenLobby; 
  TournamentState v3; 
  int v4; 
  PartyData *ActiveParty; 
  int v6; 
  LocalClientNum_t ClientFromController; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  int MatchStorageIndex; 
  unsigned __int8 v11; 
  __int64 v12; 
  int Int_Internal_DebugName; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned __int64 lobbyID; 
  bool IsMatchInProgress; 
  const dvar_t *v20; 
  const PartyData *v21; 
  int v22; 
  PartyActiveClient MainActiveClient; 
  unsigned int v24; 
  int v25; 
  TournamentState v26; 
  LocalClientNum_t v27; 
  int v28; 
  LocalClientNum_t v29; 
  const PartyData *PartyData; 
  int v31; 
  unsigned int v32; 
  unsigned int v33; 
  int v34; 
  LocalClientNum_t v35; 
  unsigned int v36; 
  int v37; 
  LobbyQueuedTask task; 

  switch ( (char)s_tournamentState )
  {
    case 0:
      OnlineTournament_UpdateNextTournamentTime();
      if ( s_currentBracket.teamCount > 0 && OnlineTournament_IsPrivatePartyClient() && s_partyHostIsInTournament )
      {
        s_rejoinTournamentID = 0i64;
        Com_Printf(25, "Tournament: party client joining tournament id: %llu\n", s_currentBracket.tournamentID);
        OnlineTournament_JoinCommunicationChannel();
      }
      break;
    case 2:
      if ( OnlineTournament_UpdateNextTournamentTime() )
        goto LABEL_7;
      break;
    case 3:
      if ( !s_uiNavigationDestination && OnlineMatchmakerOmniscient::IsInited(&OnlineMatchmakerOmniscient::ms_instance) )
      {
        v4 = s_lobbyController;
        bdFileData::bdFileData(&task.fileData);
        XUID::XUID(&task.recipient);
        s_lobbyController = v4;
        task.taskType[0] = 9;
        task.controllerIndex = v4;
        s_enteredStateTime = Sys_Milliseconds();
        Com_Printf(25, "Tournament: changing state from %d to %d\n", (unsigned __int8)s_tournamentState, 6i64);
        LOBYTE(s_tournamentState) = 6;
        ActiveParty = Party_GetActiveParty();
        if ( Party_AreWeHost(ActiveParty) )
          PartyHost_GamestateChanged(ActiveParty);
        OnlineTournament_EnqueueTask(&task);
        bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
        bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
      }
      break;
    case 4:
      if ( !s_uiNavigationDestination )
      {
LABEL_7:
        v0 = Party_GetActiveParty();
        localClientNum = Party_GetMainActiveClient(v0, s_lobbyController).localClientNum;
        LoadingScreenLobby = OnlineTournament_GetLoadingScreenLobby();
        if ( !LUI_IsMenuInStack(localClientNum, LoadingScreenLobby) )
        {
          v3 = INACTIVE;
          goto LABEL_86;
        }
        OnlineTournament_Enter(s_lobbyController);
      }
      break;
    case 5:
    case 6:
      OnlineTournament_UpdateNextTournamentTime();
      if ( s_currentBracket.mmStatus == PLAYING && OnlineTournament_IsPrivatePartyHost() )
      {
        Com_Printf(25, "Tournament: party host joining tournament id: %llu\n", s_currentBracket.tournamentID);
        OnlineTournament_JoinCommunicationChannel();
      }
      break;
    case 8:
      v6 = Sys_Milliseconds();
      ClientFromController = CL_Mgr_GetClientFromController(s_lobbyController);
      if ( CL_IsLocalClientConnectedToGameServer(ClientFromController) )
      {
        s_bracketStateNotReadyTime = v6;
        LOBYTE(v3) = 14;
        goto LABEL_86;
      }
      if ( (((_BYTE)s_tournamentState - 8) & 0xFA) == 0 && (_BYTE)s_tournamentState != 9 && (v8 = s_myCurrentRound, v9 = s_myCurrentMatch, MatchStorageIndex = OnlineTournament_GetMatchStorageIndex(s_myCurrentRound, s_myCurrentMatch), (_BYTE)s_myParticipationStatus == ACTIVE) && (v11 = (1 << SLOBYTE(s_currentBracket.teamSize)) - 1, v12 = MatchStorageIndex, (v11 & s_currentBracket.matchStatus[v12].readyStatus[0]) == v11) && (v11 & s_currentBracket.matchStatus[v12].readyStatus[1]) == v11 && OnlineTournament_AreMatchPrereqsComplete(v8, v9) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_force_start_time, "online_tournament_force_start_time");
        if ( v6 - s_bracketStateNotReadyTime > Int_Internal_DebugName + Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_lobby_connect_timeout, "online_tournament_lobby_connect_timeout") )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87E68);
      }
      else
      {
        s_bracketStateNotReadyTime = v6;
      }
      if ( s_rejoinTournamentID && (_BYTE)s_myParticipationStatus == ACTIVE )
      {
        v14 = s_myCurrentRound;
        v15 = s_myCurrentMatch;
        v16 = OnlineTournament_GetMatchStorageIndex(s_myCurrentRound, s_myCurrentMatch);
        v17 = (int)v16;
        if ( v16 >= 0xF )
        {
          v37 = 15;
          v36 = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4099, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( s_currentBracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( s_currentBracket.matchStatus )\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
        }
        lobbyID = s_currentBracket.matchStatus[v17].lobbyID;
        IsMatchInProgress = OnlineTournament_IsMatchInProgress(v14, v15);
        if ( lobbyID )
        {
          if ( IsMatchInProgress )
          {
            Com_Printf(25, "Tournament: we're still in the bracket state but our round is in progress.  We need to join our match that is in progress!\n");
            if ( InviteJoinHSM::StartJoiningLobby(&g_invitationHSM, s_lobbyController, lobbyID) )
            {
              s_rejoinTournamentID = 0i64;
              LOBYTE(v3) = 10;
              goto LABEL_86;
            }
          }
        }
      }
      break;
    case 9:
      if ( !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
      {
        if ( InviteJoinHSM::DidInvitationFail(&g_invitationHSM) )
        {
          s_spectateRound = -1;
          s_spectateMatch = -1;
          LOBYTE(v26) = 8;
          OnlineTournament_SetTournamentState(v26);
          Com_Printf(25, "Tournament: Invitation HSM errored. Going back to bracket state.\n");
        }
        else
        {
          if ( !Lobby_IsInLobby() )
          {
            Com_PrintWarning(25, "Tournament: not handling an invitation, but not in a lobby? Going back to bracket.\n");
            LOBYTE(v3) = 8;
            goto LABEL_86;
          }
          v27 = CL_Mgr_GetClientFromController(s_lobbyController);
          if ( CL_IsLocalClientConnectedToGameServer(v27) )
          {
            Com_Printf(25, "Tournament: Successfully started spectating match!\n");
            LOBYTE(v3) = 11;
            goto LABEL_86;
          }
        }
      }
      break;
    case 10:
    case 13:
      v28 = Sys_Milliseconds();
      if ( v28 - s_enteredStateTime > Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_lobby_connect_timeout, "online_tournament_lobby_connect_timeout") )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E87E68);
      v29 = CL_Mgr_GetClientFromController(s_lobbyController);
      if ( CL_IsLocalClientConnectedToGameServer(v29) )
      {
        LOBYTE(v3) = 14;
        goto LABEL_86;
      }
      break;
    case 11:
      v35 = CL_Mgr_GetClientFromController(s_lobbyController);
      if ( !CL_IsLocalClientConnectedToGameServer(v35) )
      {
        Com_Printf(25, "Tournament: SPECTATING but not connected to game server, so bailing\n");
        LOBYTE(v3) = 15;
        goto LABEL_86;
      }
      break;
    case 12:
      PartyData = Lobby_GetPartyData();
      if ( (!g_partyData.inParty || !Party_AreWeHost(&g_partyData)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2283, ASSERT_TYPE_ASSERT, "(OnlineTournament_IsPrivatePartyHost())", (const char *)&queryFormat, "OnlineTournament_IsPrivatePartyHost()") )
        __debugbreak();
      v31 = Party_CountRegisteredMembers(PartyData);
      if ( v31 == Party_CountMembersWithDataAvailable(&g_partyData) )
      {
        v32 = 0;
        while ( !Party_IsMemberIndexCommitted(PartyData, v32) )
        {
          if ( ++v32 >= 0xC8 )
          {
            v33 = Party_CountMembersWithDataAvailable(&g_partyData);
            Com_Printf(25, "Tournament: all %d private party members present in lobby! Connecting to the dedi.", v33);
            v34 = CL_Mgr_GetClientFromController(s_lobbyController);
            Playlist_RunRules(v34, 0);
            OnlineMatchmakerOmniscient::EnqueueJoinLobbyCallback(&OnlineMatchmakerOmniscient::ms_instance);
            LOBYTE(v3) = 13;
            goto LABEL_86;
          }
        }
      }
      break;
    case 15:
      v20 = DVARBOOL_online_tournament_ignore_rollover;
      if ( !DVARBOOL_online_tournament_ignore_rollover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_ignore_rollover") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      if ( v20->current.enabled && Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 2129, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_online_tournament_ignore_rollover, \"online_tournament_ignore_rollover\" ) || !Lobby_IsInLobby())", (const char *)&queryFormat, "!Dvar_GetBool( online_tournament_ignore_rollover ) || !Lobby_IsInLobby()") )
        __debugbreak();
      if ( !Lobby_IsInLobby() )
      {
        Com_Printf(25, "Tournament: no lobby, so moving on to private party\n");
        Party_Awake(&g_partyData, s_lobbyController, 0);
        LOBYTE(v3) = 16;
        goto LABEL_86;
      }
      v21 = Lobby_GetPartyData();
      if ( !Lobby_AreWeHost() || (v22 = Party_CountLocalMembers(v21), Party_CountRegisteredMembers(v21) <= v22) )
      {
        CL_Mgr_GetClientFromController(s_lobbyController);
        if ( Com_FrontEnd_IsInFrontEnd() )
        {
          MainActiveClient = Party_GetMainActiveClient(v21, s_lobbyController);
          if ( OnlineTournament_IsPrivatePartyHost() )
          {
            Com_Printf(25, "Tournament: stopping lobby\n");
            Cbuf_ExecuteBufferInternal((const LocalClientNum_t)MainActiveClient.localClientNum, MainActiveClient.localControllerIndex, "xstoplobbybackout", 0, 0);
            LOBYTE(v3) = 16;
            goto LABEL_86;
          }
        }
      }
      break;
    case 16:
      if ( !OnlineTournament_IsPrivatePartyHost() )
      {
        Com_Printf(25, "Tournament: Private party client going to wait to join my host's lobby.\n");
        LOBYTE(v3) = 17;
        goto LABEL_86;
      }
      v24 = 0;
      while ( !Party_IsMemberIndexCommitted(&g_partyData, v24) )
      {
        if ( ++v24 >= 0xC8 )
        {
          Com_Printf(25, "Tournament: everyone in our private party is not committed, so we seem ready.\n ");
          LOBYTE(v3) = 17;
          goto LABEL_86;
        }
      }
      Com_Printf(25, "Tournament: waiting for everyone to ack party state.\n");
      break;
    case 17:
      v25 = OnlineTournament_GetMatchStorageIndex(s_myCurrentRound, s_myCurrentMatch);
      if ( (_BYTE)s_myParticipationStatus != ACTIVE || !OnlineTournament_IsEveryoneReadyToStart(v25) )
      {
        LOBYTE(v3) = 8;
LABEL_86:
        OnlineTournament_SetTournamentState(v3);
      }
      break;
    default:
      return;
  }
}

/*
==============
Onlinetournament_GetFullTournamentCount
==============
*/
__int64 Onlinetournament_GetFullTournamentCount()
{
  return (unsigned int)s_nextTournamentFullCount;
}

/*
==============
PossibleTournamentMapNames::ParseListAndStoreNames
==============
*/
void PossibleTournamentMapNames::ParseListAndStoreNames(PossibleTournamentMapNames *this, char *delimitedList)
{
  __int64 v3; 
  __int64 m_numPossibleMaps; 
  char *v5; 

  this->m_numPossibleMaps = 0;
  v3 = 8i64;
  do
  {
    m_numPossibleMaps = this->m_numPossibleMaps;
    *(_QWORD *)&this->m_possibleMapnamesList[m_numPossibleMaps][0] = 0i64;
    *(_QWORD *)&this->m_possibleMapnamesList[m_numPossibleMaps][8] = 0i64;
    *(_QWORD *)&this->m_possibleMapnamesList[m_numPossibleMaps][16] = 0i64;
    *(_QWORD *)&this->m_possibleMapnamesList[m_numPossibleMaps][24] = 0i64;
    --v3;
  }
  while ( v3 );
  v5 = strtok(delimitedList, ",");
  if ( v5 )
  {
    while ( 1 )
    {
      Core_strncpy(this->m_possibleMapnamesList[this->m_numPossibleMaps], 0x20ui64, v5, 0x20ui64);
      if ( ++this->m_numPossibleMaps >= 8 )
        break;
      v5 = strtok(NULL, ",");
      if ( !v5 )
        return;
    }
    Com_PrintWarning(25, "Tournament: map pool exceeded our MAX_TOURNAMENT_MAPS_FOR_ROUND (%d)", 8i64);
  }
}

/*
==============
RequestTournamentStateComplete
==============
*/
void RequestTournamentStateComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  const dvar_t *v10; 
  __int64 v11; 
  bdJSONDeserializer v12; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1179, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  s_rejoinTournamentID = 0i64;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Tournament: Received tournament state\n");
    Com_Printf(25, "%s\n", *(const char **)s_tournamentStateResult._bytes_20);
    bdJSONDeserializer::bdJSONDeserializer(&v12, *(const char **)s_tournamentStateResult._bytes_20);
    if ( !bdJSONDeserializer::getUInt64(&v12, "tournamentID", &s_rejoinTournamentID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1190, ASSERT_TYPE_ASSERT, "(tournamentState.getUInt64( \"tournamentID\", s_rejoinTournamentID ))", (const char *)&queryFormat, "tournamentState.getUInt64( \"tournamentID\", s_rejoinTournamentID )") )
      __debugbreak();
    v10 = DVARBOOL_online_tournament_rejoin_enabled;
    if ( !DVARBOOL_online_tournament_rejoin_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_rejoin_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && LUI_BeginEvent(LOCAL_CLIENT_0, "send_toast_notification", LUI_luaVM) )
    {
      LUI_BeginTable("options", 0, 2, LUI_luaVM);
      LUI_SetTableString("genEventName", "genRejoinTournamentCallback", LUI_luaVM);
      LUI_SetTableInt("controllerIndex", task->m_controllerIndex, LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
    s_lastTimeTournamentStateFetched = Sys_Milliseconds();
    m_appData[8] = 0;
    bdJSONDeserializer::~bdJSONDeserializer(&v12);
    goto LABEL_27;
  }
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_AMM_TOURNAMENT_PLAYER_NOT_IN_TOURNAMENT )
    {
      Com_Printf(25, "Tournament: Received tournament state - player not in tournament\n");
      s_lastTimeTournamentStateFetched = Sys_Milliseconds();
      m_appData[8] = 0;
      goto LABEL_27;
    }
    goto LABEL_15;
  }
  if ( taskState <= TASKSTATE_ERROR )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
LABEL_15:
    Com_Printf(25, "Tournament: Failed to get tournament state\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *(_DWORD *)m_appData;
    v7 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v7;
    *(_DWORD *)m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    if ( (_BYTE)s_tournamentState )
    {
      v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_sprintf(dest, 0x100ui64, "%d, %llu", (unsigned int)ErrorCode, v8);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x2000, dest);
    }
    goto LABEL_27;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v11) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1244, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v11) )
      goto LABEL_27;
    goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1240, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "RequestTournamentState called when in TASKSTATE_PENDING") )
LABEL_10:
    __debugbreak();
LABEL_27:
  s_lobbyTaskID = 0;
}

/*
==============
SendDirectMessageComplete
==============
*/
void SendDirectMessageComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  XUID *m_appData; 
  const char *v5; 
  unsigned __int64 TransactionID; 
  unsigned __int64 v7; 
  bdLobbyErrorCode ErrorCode; 
  const char *v9; 
  __int64 v10; 
  char dest[256]; 

  m_appData = (XUID *)task->m_appData;
  if ( s_lobbyHostTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3646, ASSERT_TYPE_ASSERT, "(s_lobbyHostTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyHostTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    v9 = XUID::ToDevString(m_appData);
    Com_Printf(25, "Tournament: Sent direct message successfully to user id %s\n", v9);
    goto LABEL_14;
  }
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
    v5 = XUID::ToDevString(m_appData);
    Com_Printf(25, "Tournament: Failed to send direct message to %s\n", v5);
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v7 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v7);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x200000, dest);
    goto LABEL_14;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v10) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3670, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
      goto LABEL_14;
    goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3666, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SendDirectMessageComplete called when in TASKSTATE_PENDING") )
LABEL_9:
    __debugbreak();
LABEL_14:
  s_lobbyHostTaskID = 0;
}

/*
==============
SendHealthUpdate_f
==============
*/
void SendHealthUpdate_f()
{
  const char *v0; 
  unsigned __int64 v1; 
  int v2; 
  __int64 v3; 
  int v4; 
  unsigned __int8 v5; 
  const PartyData *PartyData; 
  const PartyData *v7; 
  int v8; 
  __int64 v9; 
  XUID *v10; 
  const char *v11; 
  __int64 v12; 
  char *fmt; 
  __int64 v14; 
  __int64 v15; 
  XUID result; 

  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui64_hex(v0);
    v2 = Cmd_ArgInt(2);
    v3 = Cmd_ArgInt(3);
    v4 = Cmd_ArgInt(4);
    v5 = v4;
    if ( (v4 < 0 || (unsigned int)v4 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v4, "signed", v4) )
      __debugbreak();
    s_currentMatchStatus.mmLobbyID = v1;
    if ( Lobby_GetPartyData()->inParty )
    {
      PartyData = Lobby_GetPartyData();
      if ( Party_IsMemberUIVisible(PartyData, v2) )
      {
        v7 = Lobby_GetPartyData();
        Party_GetXuid(&result, v7, v2);
        if ( !XUID::IsValid(&result) )
        {
          LODWORD(v15) = v2;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4976, ASSERT_TYPE_ASSERT, "(playerXuid.IsValid())", "%s\n\tTournament: Lobby client id %d has no xuid", "playerXuid.IsValid()", v15) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v15) = 2;
          LODWORD(v14) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 4978, ASSERT_TYPE_ASSERT, "(unsigned)( playerTeam ) < (unsigned)( 2 )", "playerTeam doesn't index 2\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        v8 = 0;
        v9 = 168 * v3;
        while ( 1 )
        {
          v10 = (XUID *)((char *)&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[v8].xuid + v9);
          if ( XUID::operator==(v10, &result) || XUID::IsNull(v10) )
            break;
          if ( ++v8 >= 5 )
            goto LABEL_18;
        }
        XUID::operator=(v10, &result);
        if ( v8 < 0 )
        {
LABEL_18:
          v11 = XUID::ToString(&result);
          LODWORD(v15) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 5006, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: Attempting to send a health update for a player (%s) who doesn't fit on his team (%d)\n", v11, v15) )
            __debugbreak();
          return;
        }
        v12 = v9 + 32i64 * v8;
        if ( *(&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[0].health + v12) != v5 )
        {
          LODWORD(v14) = v5;
          LODWORD(fmt) = v8;
          Com_Printf(25, "Tournament: Sending player health update for match %llu team %d member %d health %d\n", v1, (unsigned int)v3, fmt, v14);
          *(&s_currentMatchStatus.statusUpdate.teamStatus[0].playerStatus[0].health + v12) = v5;
          s_currentMatchStatusDirty = 1;
        }
      }
    }
  }
}

/*
==============
SendMessageComplete
==============
*/
void SendMessageComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  unsigned __int64 TransactionID; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  __int64 v10; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3540, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(25, "Tournament: Sent message successfully to lobby id %llu\n", s_chatLobbyID);
    m_appData[96] = 2;
    m_appData[8] = 0;
    goto LABEL_14;
  }
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
    Com_Printf(25, "Tournament: Failed to send message lobby id %llu\n", s_chatLobbyID);
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(25, "Tournament: Transaction id: %llu\n", TransactionID);
    v6 = *(_DWORD *)m_appData;
    v7 = (unsigned int)(2000 << *(_DWORD *)m_appData);
    *((_DWORD *)m_appData + 1) = v7;
    *(_DWORD *)m_appData = v6 + 1;
    Com_Printf(25, "Tournament: Retrying in %d ms\n", v7);
    v8 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)ErrorCode, v8);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x100000, dest);
    goto LABEL_14;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v10) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3570, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v10) )
      goto LABEL_14;
    goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 3566, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SendMessageComplete called when in TASKSTATE_PENDING") )
LABEL_9:
    __debugbreak();
LABEL_14:
  s_lobbyTaskID = 0;
}

/*
==============
SendMessage_f
==============
*/
void SendMessage_f()
{
  const char *v0; 
  const char *v1; 
  __int64 v2; 
  unsigned int v3; 
  XUID *v4; 
  LobbyMessageType v5; 
  XUID result; 

  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = v0;
    v2 = -1i64;
    do
      ++v2;
    while ( v0[v2] );
    v3 = v2;
    v4 = XUID::NullXUID(&result);
    LOBYTE(v5) = 1;
    OnlineTournament_SendMessage((XUID)v4->m_id, v1, v3, v5, 0);
  }
}

/*
==============
SendResult_f
==============
*/
void SendResult_f()
{
  const char *v0; 
  unsigned __int64 v1; 
  team_t v2; 
  unsigned __int16 score; 
  unsigned __int16 v4; 
  unsigned int v5; 
  LobbyQueuedTask task; 
  __int64 v7; 
  bdFileData v8; 

  bdFileData::bdFileData((bdFileData *)&v7);
  XUID::XUID((XUID *)&v8.__vftable + 2);
  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui64_hex(v0);
    v2 = Cmd_ArgInt(2);
    if ( v2 == TEAM_ZERO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 5062, ASSERT_TYPE_ASSERT, "(winner != TEAM_FREE)", (const char *)&queryFormat, "winner != TEAM_FREE", -2i64) )
      __debugbreak();
    score = s_currentMatchStatus.statusUpdate.teamStatus[0].score;
    v4 = s_currentMatchStatus.statusUpdate.teamStatus[1].score;
    v5 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(v2);
    bdFileData::bdFileData(&task.fileData);
    XUID::XUID(&task.recipient);
    task.taskType[0] = 8;
    task.mmLobbyID = v1;
    task.winningTeamID = truncate_cast<unsigned char,unsigned __int64>(v5);
    task.scores[0] = score;
    task.scores[1] = v4;
    OnlineTournament_EnqueueTask(&task);
    bdFileData::~bdFileData((bdFileData *)task.fileData.gap20);
    bdReferencable::~bdReferencable((bdReferencable *)task.fileData.gap20);
  }
  bdFileData::~bdFileData(&v8);
  bdReferencable::~bdReferencable((bdReferencable *)&v8);
}

/*
==============
SendTimeUpdate_f
==============
*/
void SendTimeUpdate_f()
{
  const char *v0; 
  unsigned __int64 v1; 
  int v2; 
  int v3; 
  MatchTimeMode v4; 
  int v5; 
  char v6; 

  if ( s_lobbyController >= 0 )
  {
    v0 = Cmd_Argv(1);
    v1 = I_atoui64_hex(v0);
    v2 = Cmd_ArgInt(2);
    v3 = Cmd_ArgInt(3);
    v4 = (char)v3;
    if ( (v3 < 0 || (unsigned int)v3 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum MatchTimeMode __cdecl truncate_cast_impl<enum MatchTimeMode,int>(int)", "unsigned", (unsigned __int8)v3, "signed", v3) )
      __debugbreak();
    v5 = Cmd_ArgInt(4);
    v6 = truncate_cast<signed char,int>(v5);
    s_currentMatchStatus.mmLobbyID = v1;
    s_currentMatchStatus.statusUpdate.roundTime = v2;
    s_currentMatchStatus.statusUpdate.timeMode = v4;
    s_currentMatchStatus.statusUpdate.roundNumber = v6;
    s_currentMatchStatusDirty = 1;
  }
}

/*
==============
SubmitTournamentMatchResultsComplete
==============
*/
void SubmitTournamentMatchResultsComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  _BYTE *m_appData; 
  char v5; 
  unsigned __int64 TransactionID; 
  int v7; 
  __int64 v8; 
  bdLobbyErrorCode ErrorCode; 
  unsigned __int64 v10; 
  bdLobbyErrorCode v11; 
  __int64 v12; 
  char dest[256]; 

  m_appData = task->m_appData;
  if ( s_lobbyTaskID != task->m_localTaskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1565, ASSERT_TYPE_ASSERT, "(s_lobbyTaskID == task->m_localTaskId)", (const char *)&queryFormat, "s_lobbyTaskID == task->m_localTaskId") )
    __debugbreak();
  v5 = 1;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Com_Printf(131097, "Tournament: submitted match results to matchmaker\n");
    m_appData[8] = 0;
    goto LABEL_21;
  }
  if ( taskState == TASKSTATE_ERROR )
  {
    if ( bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_AMM_TOURNAMENT_MATCH_ALREADY_HAS_RESULT || bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_AMM_TOURNAMENT_INVALID_TOURNAMENT_ID )
      v5 = 0;
    goto LABEL_16;
  }
  if ( taskState <= TASKSTATE_ERROR )
    goto LABEL_11;
  if ( taskState <= TASKSTATE_TIMEDOUT )
  {
LABEL_16:
    Com_Printf(131097, "Tournament: Failed to submit match results to matchmaker\n");
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_Printf(131097, "Tournament: Transaction id: %llu\n", TransactionID);
    if ( v5 )
    {
      v7 = *(_DWORD *)m_appData;
      v8 = (unsigned int)(2000 << *(_DWORD *)m_appData);
      *((_DWORD *)m_appData + 1) = v8;
      *(_DWORD *)m_appData = v7 + 1;
      Com_Printf(131097, "Tournament: Retrying in %d ms\n", v8);
    }
    else
    {
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_Printf(131097, "Tournament: no retry due to error code %d\n", (unsigned int)ErrorCode);
      m_appData[8] = 0;
    }
    v10 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    v11 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_sprintf(dest, 0x100ui64, "%d,%llu", (unsigned int)v11, v10);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_TOURNAMENT_t)0x20000, dest);
    goto LABEL_21;
  }
  if ( taskState != TASKSTATE_PENDING )
  {
LABEL_11:
    LODWORD(v12) = taskState;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1610, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
      goto LABEL_21;
    goto LABEL_10;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament.cpp", 1606, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "SubmitTournamentMatchResultsComplete called when in TASKSTATE_PENDING") )
LABEL_10:
    __debugbreak();
LABEL_21:
  s_lobbyTaskID = 0;
}

