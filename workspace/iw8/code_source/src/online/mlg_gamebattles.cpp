/*
==============
GameBattles_LeaveMatchLobby
==============
*/

unsigned int __fastcall GameBattles_LeaveMatchLobby(const int __formal)
{
  return ?GameBattles_LeaveMatchLobby@@YAIH@Z(__formal);
}

/*
==============
GameBattles_OnNavigationComplete
==============
*/

void GameBattles_OnNavigationComplete(void)
{
  ?GameBattles_OnNavigationComplete@@YAXXZ();
}

/*
==============
GameBattles_Init
==============
*/

void GameBattles_Init(void)
{
  ?GameBattles_Init@@YAXXZ();
}

/*
==============
GameBattles_SetLocalIsUsingGamepad
==============
*/

void __fastcall GameBattles_SetLocalIsUsingGamepad(const int controllerIndex, bool usingGamePad)
{
  ?GameBattles_SetLocalIsUsingGamepad@@YAXH_N@Z(controllerIndex, usingGamePad);
}

/*
==============
GameBattles_GetCompletedGameFlags
==============
*/

int __fastcall GameBattles_GetCompletedGameFlags(const int controllerIndex)
{
  return ?GameBattles_GetCompletedGameFlags@@YAHH@Z(controllerIndex);
}

/*
==============
GameBattles_SetMatchStats
==============
*/

void __fastcall GameBattles_SetMatchStats(const char *map, const char *mode, const char *victor, int alliesScore, int axisScore, int matchStart, int matchEnd)
{
  ?GameBattles_SetMatchStats@@YAXPEBD00HHHH@Z(map, mode, victor, alliesScore, axisScore, matchStart, matchEnd);
}

/*
==============
GameBattles_RefreshSchedule
==============
*/

unsigned int __fastcall GameBattles_RefreshSchedule(const int controllerIndex)
{
  return ?GameBattles_RefreshSchedule@@YAIH@Z(controllerIndex);
}

/*
==============
GameBattles_PushPartyMembersToModel
==============
*/

void __fastcall GameBattles_PushPartyMembersToModel(const PartyData *partyData, const unsigned __int16 baseModel, int *partyMemberOrder, int *teamCount)
{
  ?GameBattles_PushPartyMembersToModel@@YAXPEBUPartyData@@GPEAH1@Z(partyData, baseModel, partyMemberOrder, teamCount);
}

/*
==============
LUI_DataBindingMLG_UpdateMLG
==============
*/

void LUI_DataBindingMLG_UpdateMLG(void)
{
  ?LUI_DataBindingMLG_UpdateMLG@@YAXXZ();
}

/*
==============
GameBattles_IsValidMatchId
==============
*/

bool __fastcall GameBattles_IsValidMatchId(const unsigned int matchId)
{
  return ?GameBattles_IsValidMatchId@@YA_NI@Z(matchId);
}

/*
==============
GameBattles_GetCheckMatchLobbyResult
==============
*/

GameBattleMatchCheckResult __fastcall GameBattles_GetCheckMatchLobbyResult(const int controllerIndex)
{
  return ?GameBattles_GetCheckMatchLobbyResult@@YA?AW4GameBattleMatchCheckResult@@H@Z(controllerIndex);
}

/*
==============
GameBattles_CheckMatchLobby
==============
*/

void __fastcall GameBattles_CheckMatchLobby(const int controllerIndex, const unsigned int matchId)
{
  ?GameBattles_CheckMatchLobby@@YAXHI@Z(controllerIndex, matchId);
}

/*
==============
GameBattles_HandleChatChannelMessage
==============
*/

bool __fastcall GameBattles_HandleChatChannelMessage(const int controllerIndex, const unsigned __int64 channelID, const unsigned __int64 senderId, const unsigned int messageType, const void *message, const unsigned int messageSize)
{
  return ?GameBattles_HandleChatChannelMessage@@YA_NH_K0IPEBXI@Z(controllerIndex, channelID, senderId, messageType, message, messageSize);
}

/*
==============
GameBattles_ClearLocalCommitReady
==============
*/

void __fastcall GameBattles_ClearLocalCommitReady(const int controllerIndex)
{
  ?GameBattles_ClearLocalCommitReady@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_SetActiveGameIndex
==============
*/

void __fastcall GameBattles_SetActiveGameIndex(const unsigned int gameIndex)
{
  ?GameBattles_SetActiveGameIndex@@YAXI@Z(gameIndex);
}

/*
==============
GameBattles_GetScheduleState
==============
*/

GameBattleScheduleState __fastcall GameBattles_GetScheduleState(const int controllerIndex)
{
  return ?GameBattles_GetScheduleState@@YA?AW4GameBattleScheduleState@@H@Z(controllerIndex);
}

/*
==============
GameBattles_RefreshAccount
==============
*/

unsigned int __fastcall GameBattles_RefreshAccount(const int controllerIndex)
{
  return ?GameBattles_RefreshAccount@@YAIH@Z(controllerIndex);
}

/*
==============
GameBattles_GetCurrentPlayerCount
==============
*/

int __fastcall GameBattles_GetCurrentPlayerCount(const int controllerIndex)
{
  return ?GameBattles_GetCurrentPlayerCount@@YAHH@Z(controllerIndex);
}

/*
==============
GameBattles_IsScreenDebugEnabled
==============
*/

bool __fastcall GameBattles_IsScreenDebugEnabled()
{
  return ?GameBattles_IsScreenDebugEnabled@@YA_NXZ();
}

/*
==============
GameBattles_GetCurrentMatchSchedule
==============
*/

void __fastcall GameBattles_GetCurrentMatchSchedule(const int controllerIndex)
{
  ?GameBattles_GetCurrentMatchSchedule@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_GetCurrentMapName
==============
*/

const char *__fastcall GameBattles_GetCurrentMapName(const int controllerIndex)
{
  return ?GameBattles_GetCurrentMapName@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GameBattles_GetMatchReportState
==============
*/

GameBattleMatchReportState __fastcall GameBattles_GetMatchReportState()
{
  return ?GameBattles_GetMatchReportState@@YA?AW4GameBattleMatchReportState@@XZ();
}

/*
==============
GameBattles_RefreshMatchHistory
==============
*/

unsigned int __fastcall GameBattles_RefreshMatchHistory(const int controllerIndex, const unsigned int matchId)
{
  return ?GameBattles_RefreshMatchHistory@@YAIHI@Z(controllerIndex, matchId);
}

/*
==============
GameBattles_SetPlayerStats
==============
*/

void __fastcall GameBattles_SetPlayerStats(const XUID *xuid, const char *team, int score)
{
  ?GameBattles_SetPlayerStats@@YAXAEBUXUID@@PEBDH@Z(xuid, team, score);
}

/*
==============
GameBattles_GetTeamFromPlatformId
==============
*/

team_t __fastcall GameBattles_GetTeamFromPlatformId(const int controllerIndex, unsigned __int64 platformId)
{
  return ?GameBattles_GetTeamFromPlatformId@@YA?AW4team_t@@H_K@Z(controllerIndex, platformId);
}

/*
==============
GameBattles_GetDesiredDialog
==============
*/

UI_LiveDialogState __fastcall GameBattles_GetDesiredDialog()
{
  return ?GameBattles_GetDesiredDialog@@YA?AW4UI_LiveDialogState@@XZ();
}

/*
==============
GameBattles_GetCurrentMatchRecipeName
==============
*/

bool __fastcall GameBattles_GetCurrentMatchRecipeName(const int controllerIndex, char *outRecipeName, const unsigned int outLength)
{
  return ?GameBattles_GetCurrentMatchRecipeName@@YA_NHPEADI@Z(controllerIndex, outRecipeName, outLength);
}

/*
==============
GameBattles_HostInitializeMatch
==============
*/

void __fastcall GameBattles_HostInitializeMatch(unsigned int expectedMatchId)
{
  ?GameBattles_HostInitializeMatch@@YAXI@Z(expectedMatchId);
}

/*
==============
GameBattles_OnStartMatch
==============
*/

void __fastcall GameBattles_OnStartMatch(const int controllerIndex)
{
  ?GameBattles_OnStartMatch@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_NotifyMatchEnded
==============
*/

void __fastcall GameBattles_NotifyMatchEnded(const int __formal)
{
  ?GameBattles_NotifyMatchEnded@@YAXH@Z(__formal);
}

/*
==============
GameBattles_GetMatchHistoryState
==============
*/

GameBattleMatchHistoryState __fastcall GameBattles_GetMatchHistoryState(const int controllerIndex, const unsigned int matchId)
{
  return ?GameBattles_GetMatchHistoryState@@YA?AW4GameBattleMatchHistoryState@@HI@Z(controllerIndex, matchId);
}

/*
==============
GameBattles_IsGameBattleActive
==============
*/

bool __fastcall GameBattles_IsGameBattleActive()
{
  return ?GameBattles_IsGameBattleActive@@YA_NXZ();
}

/*
==============
GameBattles_GetWonByHomeGameFlags
==============
*/

int __fastcall GameBattles_GetWonByHomeGameFlags(const int controllerIndex)
{
  return ?GameBattles_GetWonByHomeGameFlags@@YAHH@Z(controllerIndex);
}

/*
==============
GameBattles_ToogleCDLRecipeCheck
==============
*/

void __fastcall GameBattles_ToogleCDLRecipeCheck(bool isCDLRecipeRuleActive)
{
  ?GameBattles_ToogleCDLRecipeCheck@@YAX_N@Z(isCDLRecipeRuleActive);
}

/*
==============
GameBattles_SendNoShowMatchReport_Internal
==============
*/

void __fastcall GameBattles_SendNoShowMatchReport_Internal(const int controllerIndex)
{
  ?GameBattles_SendNoShowMatchReport_Internal@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_PushMatchToLUI
==============
*/

bool __fastcall GameBattles_PushMatchToLUI(lua_State *luaVM, const int controllerIndex, const unsigned int matchIndex)
{
  return ?GameBattles_PushMatchToLUI@@YA_NPEAUlua_State@@HI@Z(luaVM, controllerIndex, matchIndex);
}

/*
==============
GameBattles_GetTeamFromXUID
==============
*/

team_t __fastcall GameBattles_GetTeamFromXUID(const int controllerIndex, const XUID *playerXuid)
{
  return ?GameBattles_GetTeamFromXUID@@YA?AW4team_t@@HAEBUXUID@@@Z(controllerIndex, playerXuid);
}

/*
==============
GameBattles_AreTeamsRostersComplete
==============
*/

bool __fastcall GameBattles_AreTeamsRostersComplete(const int controllerIndex)
{
  return ?GameBattles_AreTeamsRostersComplete@@YA_NH@Z(controllerIndex);
}

/*
==============
GameBattles_GetCurrentGameTypeName
==============
*/

const char *__fastcall GameBattles_GetCurrentGameTypeName(const int controllerIndex)
{
  return ?GameBattles_GetCurrentGameTypeName@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GameBattles_NotifyMatchStarted
==============
*/

void __fastcall GameBattles_NotifyMatchStarted(const int controllerIndex)
{
  ?GameBattles_NotifyMatchStarted@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_SendNoShowMatchReport
==============
*/

void __fastcall GameBattles_SendNoShowMatchReport(const int controllerIndex)
{
  ?GameBattles_SendNoShowMatchReport@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_SetCurrentMatchId
==============
*/

void __fastcall GameBattles_SetCurrentMatchId(const unsigned int matchId)
{
  ?GameBattles_SetCurrentMatchId@@YAXI@Z(matchId);
}

/*
==============
GameBattles_SetCompletedGameFlags
==============
*/

void __fastcall GameBattles_SetCompletedGameFlags(const int controllerIndex, const int flags)
{
  ?GameBattles_SetCompletedGameFlags@@YAXHH@Z(controllerIndex, flags);
}

/*
==============
GameBattles_GetCDLRuleValue
==============
*/

bool __fastcall GameBattles_GetCDLRuleValue()
{
  return ?GameBattles_GetCDLRuleValue@@YA_NXZ();
}

/*
==============
GameBattles_GetNavigationDestination
==============
*/

int __fastcall GameBattles_GetNavigationDestination()
{
  return ?GameBattles_GetNavigationDestination@@YAHXZ();
}

/*
==============
GameBattles_SendMatchReport
==============
*/

void __fastcall GameBattles_SendMatchReport(const int controllerIndex)
{
  ?GameBattles_SendMatchReport@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_GetLobbyCommitReadyStatus
==============
*/

bool __fastcall GameBattles_GetLobbyCommitReadyStatus()
{
  return ?GameBattles_GetLobbyCommitReadyStatus@@YA_NXZ();
}

/*
==============
GameBattles_IsPlayerWhitelisted
==============
*/

bool __fastcall GameBattles_IsPlayerWhitelisted(const XUID *playerXuid)
{
  return ?GameBattles_IsPlayerWhitelisted@@YA_NAEBUXUID@@@Z(playerXuid);
}

/*
==============
GameBattles_ChatChannelUpdate
==============
*/

bool __fastcall GameBattles_ChatChannelUpdate(const int controllerIndex, const bdChannelInfo *newChannelInfo, const bdChannelMember *changedMember, const bool userAdded)
{
  return ?GameBattles_ChatChannelUpdate@@YA_NHPEBVbdChannelInfo@@PEBVbdChannelMember@@_N@Z(controllerIndex, newChannelInfo, changedMember, userAdded);
}

/*
==============
GameBattles_GetAsyncTaskStateNameDebugString
==============
*/

const char *__fastcall GameBattles_GetAsyncTaskStateNameDebugString(const int controllerIndex)
{
  return ?GameBattles_GetAsyncTaskStateNameDebugString@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GameBattles_SetWonByHomeGameFlags
==============
*/

void __fastcall GameBattles_SetWonByHomeGameFlags(const int controllerIndex, const int flags)
{
  ?GameBattles_SetWonByHomeGameFlags@@YAXHH@Z(controllerIndex, flags);
}

/*
==============
GameBattles_GetScheduleMatchCount
==============
*/

unsigned int __fastcall GameBattles_GetScheduleMatchCount(const int controllerIndex)
{
  return ?GameBattles_GetScheduleMatchCount@@YAIH@Z(controllerIndex);
}

/*
==============
GameBattles_ResetSchedule
==============
*/

void __fastcall GameBattles_ResetSchedule(const int controllerIndex)
{
  ?GameBattles_ResetSchedule@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_SetGameLobbyId
==============
*/

void __fastcall GameBattles_SetGameLobbyId(const unsigned __int64 lobbyid)
{
  ?GameBattles_SetGameLobbyId@@YAX_K@Z(lobbyid);
}

/*
==============
GameBattles_StartMatchMaking
==============
*/

void __fastcall GameBattles_StartMatchMaking(const int controllerIndex)
{
  ?GameBattles_StartMatchMaking@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_ValidateData
==============
*/

void GameBattles_ValidateData(void)
{
  ?GameBattles_ValidateData@@YAXXZ();
}

/*
==============
GameBattles_GetCurrentMatchIndex
==============
*/

int __fastcall GameBattles_GetCurrentMatchIndex(const int controllerIndex)
{
  return ?GameBattles_GetCurrentMatchIndex@@YAHH@Z(controllerIndex);
}

/*
==============
GameBattles_SetLocalCommitReady
==============
*/

void __fastcall GameBattles_SetLocalCommitReady(const int controllerIndex)
{
  ?GameBattles_SetLocalCommitReady@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_GetActiveGameIndex
==============
*/

unsigned int __fastcall GameBattles_GetActiveGameIndex()
{
  return ?GameBattles_GetActiveGameIndex@@YAIXZ();
}

/*
==============
GameBattles_Update
==============
*/

void __fastcall GameBattles_Update(const int controllerIndex)
{
  ?GameBattles_Update@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_UpdateLocalCommitReady
==============
*/

void __fastcall GameBattles_UpdateLocalCommitReady(const int controllerIndex)
{
  ?GameBattles_UpdateLocalCommitReady@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_IsInGameBattleGameMode
==============
*/

bool __fastcall GameBattles_IsInGameBattleGameMode()
{
  return ?GameBattles_IsInGameBattleGameMode@@YA_NXZ();
}

/*
==============
GameBattles_IsPlayerInCurrentMatch
==============
*/

bool __fastcall GameBattles_IsPlayerInCurrentMatch(const int controllerIndex, const XUID *playerXuid)
{
  return ?GameBattles_IsPlayerInCurrentMatch@@YA_NHAEBUXUID@@@Z(controllerIndex, playerXuid);
}

/*
==============
GameBattles_SendMatchReport_Internal
==============
*/

void __fastcall GameBattles_SendMatchReport_Internal(const int controllerIndex)
{
  ?GameBattles_SendMatchReport_Internal@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_GetMatchTime
==============
*/

const char *__fastcall GameBattles_GetMatchTime(const int controllerIndex, const unsigned int matchIndex)
{
  return ?GameBattles_GetMatchTime@@YAPEBDHI@Z(controllerIndex, matchIndex);
}

/*
==============
GameBattles_GetMatchJoinStateNameDebugString
==============
*/

const char *__fastcall GameBattles_GetMatchJoinStateNameDebugString(const int controllerIndex)
{
  return ?GameBattles_GetMatchJoinStateNameDebugString@@YAPEBDH@Z(controllerIndex);
}

/*
==============
GameBattles_GetMatchJoinState
==============
*/

GameBattleMatchJoinState __fastcall GameBattles_GetMatchJoinState(const int controllerIndex)
{
  return ?GameBattles_GetMatchJoinState@@YA?AW4GameBattleMatchJoinState@@H@Z(controllerIndex);
}

/*
==============
GameBattles_TraceState
==============
*/

void __fastcall GameBattles_TraceState(const int controllerIndex, const char *hint, const char *data)
{
  ?GameBattles_TraceState@@YAXHPEBD0@Z(controllerIndex, hint, data);
}

/*
==============
GameBattles_SetupMatchmakingParams
==============
*/

void __fastcall GameBattles_SetupMatchmakingParams(OmniscientMatchmakingParams *outParams, const int localControllerIndex)
{
  ?GameBattles_SetupMatchmakingParams@@YAXPEAUOmniscientMatchmakingParams@@H@Z(outParams, localControllerIndex);
}

/*
==============
GameBattles_GetAccountState
==============
*/

GameBattleAccountState __fastcall GameBattles_GetAccountState(const int controllerIndex)
{
  return ?GameBattles_GetAccountState@@YA?AW4GameBattleAccountState@@H@Z(controllerIndex);
}

/*
==============
GameBattles_InChatChannel
==============
*/

bool __fastcall GameBattles_InChatChannel()
{
  return ?GameBattles_InChatChannel@@YA_NXZ();
}

/*
==============
GameBattles_GetLocalCommitReady
==============
*/

bool __fastcall GameBattles_GetLocalCommitReady(const int controllerIndex)
{
  return ?GameBattles_GetLocalCommitReady@@YA_NH@Z(controllerIndex);
}

/*
==============
GameBattles_LoadGameRules
==============
*/

void __fastcall GameBattles_LoadGameRules(const int controllerIndex)
{
  ?GameBattles_LoadGameRules@@YAXH@Z(controllerIndex);
}

/*
==============
GameBattles_GetCurrentMatchId
==============
*/

unsigned int __fastcall GameBattles_GetCurrentMatchId()
{
  return ?GameBattles_GetCurrentMatchId@@YAIXZ();
}

/*
==============
GameBattles_JoinMatchLobby
==============
*/

unsigned int __fastcall GameBattles_JoinMatchLobby(const int controllerIndex)
{
  return ?GameBattles_JoinMatchLobby@@YAIH@Z(controllerIndex);
}

/*
==============
AcquireRawDataOwnership
==============
*/
void AcquireRawDataOwnership(const int controllerIndex, const GameBattlesRawDataBufferUsage usage)
{
  __int32 v4; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1212, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_rawDataOwner != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1213, ASSERT_TYPE_ASSERT, "(RawDataOwner() == (-1))", (const char *)&queryFormat, "RawDataOwner() == INVALID_CONTROLLER_PORT") )
    __debugbreak();
  if ( s_rawDataUsage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1214, ASSERT_TYPE_ASSERT, "(s_rawDataUsage == GameBattlesRawDataBufferUsage::UNUSED)", (const char *)&queryFormat, "s_rawDataUsage == GameBattlesRawDataBufferUsage::UNUSED") )
    __debugbreak();
  if ( usage == UNUSED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1215, ASSERT_TYPE_ASSERT, "(usage != GameBattlesRawDataBufferUsage::UNUSED)", (const char *)&queryFormat, "usage != GameBattlesRawDataBufferUsage::UNUSED") )
    __debugbreak();
  s_rawDataUsage = usage;
  s_rawDataOwner = controllerIndex;
  v4 = usage - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      s_matchEventInfo[0].m_eventDescLength = 4096;
      *((_QWORD *)&s_matchEventInfo[0].__vftable + 3) = &s_rawDataBuffer;
      *((_QWORD *)&s_matchEventInfo[1].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[1];
      *((_QWORD *)&s_matchEventInfo[2].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[2];
      *((_QWORD *)&s_matchEventInfo[3].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[3];
      *((_QWORD *)&s_matchEventInfo[4].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[4];
      *((_QWORD *)&s_matchEventInfo[5].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[5];
      *((_QWORD *)&s_matchEventInfo[6].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[6];
      *((_QWORD *)&s_matchEventInfo[7].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[7];
      *((_QWORD *)&s_matchEventInfo[8].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[8];
      *((_QWORD *)&s_matchEventInfo[9].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[9];
      *((_QWORD *)&s_matchEventInfo[10].__vftable + 3) = s_rawDataBuffer.matchEventDataArray[10];
      s_matchEventInfo[1].m_eventDescLength = 4096;
      s_matchEventInfo[2].m_eventDescLength = 4096;
      s_matchEventInfo[3].m_eventDescLength = 4096;
      s_matchEventInfo[4].m_eventDescLength = 4096;
      s_matchEventInfo[5].m_eventDescLength = 4096;
      s_matchEventInfo[6].m_eventDescLength = 4096;
      s_matchEventInfo[7].m_eventDescLength = 4096;
      s_matchEventInfo[8].m_eventDescLength = 4096;
      s_matchEventInfo[9].m_eventDescLength = 4096;
      s_matchEventInfo[10].m_eventDescLength = 4096;
    }
  }
  else
  {
    s_scheduledMatchData[0].m_matchMetadataLength = 4096;
    s_scheduledMatchData[0].m_matchMetadata = (unsigned __int8 *)&s_rawDataBuffer;
    s_scheduledMatchData[1].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[1];
    s_scheduledMatchData[2].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[2];
    s_scheduledMatchData[3].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[3];
    s_scheduledMatchData[4].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[4];
    s_scheduledMatchData[5].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[5];
    s_scheduledMatchData[6].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[6];
    s_scheduledMatchData[7].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[7];
    s_scheduledMatchData[8].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[8];
    s_scheduledMatchData[9].m_matchMetadata = s_rawDataBuffer.matchMetaDataArray[9];
    s_scheduledMatchData[1].m_matchMetadataLength = 4096;
    s_scheduledMatchData[2].m_matchMetadataLength = 4096;
    s_scheduledMatchData[3].m_matchMetadataLength = 4096;
    s_scheduledMatchData[4].m_matchMetadataLength = 4096;
    s_scheduledMatchData[5].m_matchMetadataLength = 4096;
    s_scheduledMatchData[6].m_matchMetadataLength = 4096;
    s_scheduledMatchData[7].m_matchMetadataLength = 4096;
    s_scheduledMatchData[8].m_matchMetadataLength = 4096;
    s_scheduledMatchData[9].m_matchMetadataLength = 4096;
  }
}

/*
==============
AsyncTaskActive
==============
*/
bool AsyncTaskActive(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_activeTask[v1].taskType != NONE;
}

/*
==============
AsyncTaskComplete
==============
*/
void AsyncTaskComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  int m_appTaskType; 
  bdRemoteTask *m_ptr; 
  unsigned __int64 TransactionID; 
  const char *AsyncTaskStateNameDebugString; 
  unsigned int numTries; 
  const char *v10; 
  bool v11; 
  unsigned int v12; 
  const char *v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  m_controllerIndex = task->m_controllerIndex;
  m_appTaskType = task->m_appTaskType;
  if ( (unsigned int)m_controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", m_controllerIndex, 8) )
    __debugbreak();
  if ( m_appTaskType != s_activeTask[m_controllerIndex].taskType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2297, ASSERT_TYPE_ASSERT, "(taskType == asyncTask->taskType)", (const char *)&queryFormat, "taskType == asyncTask->taskType") )
    __debugbreak();
  m_ptr = task->m_remoteDemonwareTask.m_ptr;
  if ( m_ptr )
  {
    TransactionID = bdRemoteTask::getTransactionID(m_ptr);
    Com_Printf(131097, "GAMEBATTLES(%i): Async task complete with DW transactionID: %zu.\n", (unsigned int)m_controllerIndex, TransactionID);
  }
  if ( taskState == TASKSTATE_SUCCESS )
  {
    AsyncTaskStateNameDebugString = GameBattles_GetAsyncTaskStateNameDebugString(m_controllerIndex);
    Com_Printf(131097, "GAMEBATTLES(%i): Async task %s succeeded.\n", (unsigned int)m_controllerIndex, AsyncTaskStateNameDebugString);
    HandleTaskSucceeded(m_controllerIndex);
    return;
  }
  if ( taskState != TASKSTATE_ERROR )
    return;
  if ( (unsigned int)m_controllerIndex >= 8 )
  {
    LODWORD(v17) = 8;
    LODWORD(v15) = m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( s_activeTask[m_controllerIndex].taskType == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2311, ASSERT_TYPE_ASSERT, "(AsyncTaskActive( controllerIndex ))", (const char *)&queryFormat, "AsyncTaskActive( controllerIndex )") )
    __debugbreak();
  if ( m_appTaskType <= 0 )
    goto LABEL_24;
  if ( m_appTaskType > 2 )
  {
    if ( m_appTaskType <= 8 )
    {
LABEL_21:
      numTries = s_activeTask[m_controllerIndex].numTries;
      v10 = GameBattles_GetAsyncTaskStateNameDebugString(m_controllerIndex);
      LODWORD(fmt) = numTries;
      Com_PrintError(131097, "GAMEBATTLES(%i): Clearing async %s after %i failures.\n", (unsigned int)m_controllerIndex, v10, fmt);
      HandleTaskFailed(m_controllerIndex, task);
      return;
    }
LABEL_24:
    v11 = 0;
    goto LABEL_25;
  }
  v11 = (signed int)(s_activeTask[m_controllerIndex].numTries + 1) <= 3;
LABEL_25:
  if ( !v11 )
    goto LABEL_21;
  v12 = s_activeTask[m_controllerIndex].numTries;
  v13 = GameBattles_GetAsyncTaskStateNameDebugString(m_controllerIndex);
  LODWORD(fmt) = v12;
  Com_PrintError(131097, "GAMEBATTLES(%i): Async task %s failed.  Starting retry %i.\n", (unsigned int)m_controllerIndex, v13, fmt);
  if ( (unsigned int)m_controllerIndex >= 8 )
  {
    LODWORD(v17) = 8;
    LODWORD(v15) = m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
    if ( (unsigned int)m_controllerIndex >= 8 )
    {
      LODWORD(v18) = 8;
      LODWORD(v16) = m_controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v16, v18) )
        __debugbreak();
    }
  }
  if ( s_activeTask[m_controllerIndex].taskType == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1306, ASSERT_TYPE_ASSERT, "(AsyncTaskActive( controllerIndex ))", (const char *)&queryFormat, "AsyncTaskActive( controllerIndex )") )
    __debugbreak();
  s_activeTask[m_controllerIndex].needsRetry = 1;
}

/*
==============
CacheMatchReport
==============
*/
void CacheMatchReport(const int controllerIndex)
{
  char *m_ptr; 
  unsigned __int64 MatchId; 
  unsigned int CurrentMatchIndex; 
  bool v5; 
  GameBattleMatch *Match; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  GameBattleMatch *v10; 
  int id; 
  int mapId; 
  int v13; 
  int modeId; 
  __int64 v15; 
  int *teamScores; 
  unsigned __int64 *p_platformId; 
  __int64 v18; 
  int *teams; 
  int v20; 
  __int64 v21; 
  __int64 v22; 
  GameBattleMatch *v24; 
  unsigned __int64 *v25; 
  __int64 v26; 
  unsigned __int8 *from; 
  Mem_LargeLocal v28; 
  bdJSONSerializer v29; 

  Mem_LargeLocal::Mem_LargeLocal(&v28, 0x1000ui64, "jsonBuffer jsonMatchData");
  m_ptr = (char *)v28.m_ptr;
  from = (unsigned __int8 *)v28.m_ptr;
  memset_0(v28.m_ptr, 0, 0x1000ui64);
  bdJSONSerializer::bdJSONSerializer(&v29, m_ptr, 0x1000u);
  bdJSONSerializer::writeBeginObject(&v29);
  MatchId = OnlineMatchId::GetMatchId();
  bdJSONSerializer::writeUInt64(&v29, "dw_match_id", MatchId, 0);
  bdJSONSerializer::writeBoolean(&v29, "noShowReport", 0);
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex != -1 )
  {
    Match = GetMatch(controllerIndex, CurrentMatchIndex);
    v7 = 0;
    if ( !Match->teamCount )
    {
LABEL_6:
      v5 = 1;
      goto LABEL_7;
    }
    while ( (unsigned int)GetTeamRosterState(v7, &Match->teams[v7]) > NO_MEMBERS_PRESENT )
    {
      if ( ++v7 >= Match->teamCount )
        goto LABEL_6;
    }
  }
  v5 = 0;
LABEL_7:
  bdJSONSerializer::writeBoolean(&v29, "teamsValidated", v5);
  v8 = GameBattles_GetCurrentMatchIndex(controllerIndex);
  v9 = v8;
  v10 = NULL;
  v24 = NULL;
  if ( v8 != -1 )
  {
    v10 = GetMatch(controllerIndex, v8);
    v24 = v10;
    if ( v10 )
    {
      bdJSONSerializer::writeUInt32(&v29, "gameIndex", s_activeGameIndex, 0);
      bdJSONSerializer::writeUInt32(&v29, "totalGameCount", v10->gameCount, 0);
    }
  }
  bdJSONSerializer::writeInt32(&v29, "winningTeamIndex", s_matchResultData.victorTeamIndex, 0);
  bdJSONSerializer::writeInt32(&v29, "matchId", s_currentMatchId, 0);
  bdJSONSerializer::writeBeginObject(&v29, "map");
  bdJSONSerializer::writeString(&v29, (const char *)&stru_143C9A1A4, s_matchResultData.map);
  id = 0;
  mapId = 0;
  if ( v10 )
  {
    id = v10->games[s_activeGameIndex].map.id;
    mapId = v10->games[s_activeGameIndex].mapId;
  }
  bdJSONSerializer::writeInt32(&v29, (const char *)&valueOut, id, 0);
  bdJSONSerializer::writeInt32(&v29, "mlgId", mapId, 0);
  bdJSONSerializer::writeEndObject(&v29);
  bdJSONSerializer::writeBeginObject(&v29, "mode");
  bdJSONSerializer::writeString(&v29, (const char *)&stru_143C9A1A4, s_matchResultData.mode);
  v13 = 0;
  modeId = 0;
  if ( v10 )
  {
    v13 = v10->games[s_activeGameIndex].gametype.id;
    modeId = v10->games[s_activeGameIndex].modeId;
  }
  bdJSONSerializer::writeInt32(&v29, (const char *)&valueOut, v13, 0);
  bdJSONSerializer::writeInt32(&v29, "mlgId", modeId, 0);
  bdJSONSerializer::writeEndObject(&v29);
  bdJSONSerializer::writeUInt32(&v29, "startTimeUTC", s_matchResultData.matchStartTime, 0);
  bdJSONSerializer::writeUInt32(&v29, "endTimeUTC", s_matchResultData.matchEndTime, 0);
  bdJSONSerializer::writeBoolean(&v29, "fromScheduledMatch", v9 != -1);
  bdJSONSerializer::writeBeginArray(&v29, "teams");
  v15 = 0i64;
  teamScores = s_matchResultData.teamScores;
  p_platformId = &s_lobbyInfo.members[0].platformId;
  v25 = &s_lobbyInfo.members[0].platformId;
  v18 = 6i64;
  teams = (int *)v10->teams;
  v26 = 2i64;
  do
  {
    bdJSONSerializer::writeBeginObject(&v29);
    v20 = 0;
    if ( v10 )
      v20 = *teams;
    bdJSONSerializer::writeInt32(&v29, "teamId", v20, 0);
    bdJSONSerializer::writeInt32(&v29, "playerCount", teamScores[5], 0);
    bdJSONSerializer::writeInt32(&v29, "score", *teamScores, 0);
    bdJSONSerializer::writeBeginArray(&v29, "players");
    v21 = v15;
    if ( v15 < v18 )
    {
      do
      {
        if ( *((_DWORD *)p_platformId + 2) && *p_platformId )
        {
          bdJSONSerializer::writeBeginObject(&v29);
          bdJSONSerializer::writeInt64(&v29, "platformId", *p_platformId, 0);
          bdJSONSerializer::writeInt32(&v29, "score", s_memberScore[v21], 0);
          bdJSONSerializer::writeInt32(&v29, "mlgId", *((_DWORD *)p_platformId + 2), 0);
          bdJSONSerializer::writeEndObject(&v29);
        }
        ++v21;
        p_platformId += 4;
      }
      while ( v21 < v18 );
      v10 = v24;
      p_platformId = v25;
    }
    bdJSONSerializer::writeEndArray(&v29);
    bdJSONSerializer::writeEndObject(&v29);
    v18 += 6i64;
    teams += 132;
    ++teamScores;
    v15 += 6i64;
    p_platformId += 24;
    v25 = p_platformId;
    --v26;
  }
  while ( v26 );
  bdJSONSerializer::writeEndArray(&v29);
  bdJSONSerializer::writeEndObject(&v29);
  v22 = -1i64;
  do
    ++v22;
  while ( from[v22] );
  s_currentMatchReportSize = MemFile_CompressWithZLib(from, v22, s_currentMatchReport, 2048);
  Com_Printf(131097, "GAMEBATTLES(%i): Cached match report (size: %u, compressed size: %u):\n %s\n", (unsigned int)controllerIndex, (unsigned int)v22, s_currentMatchReportSize, (const char *)from);
  bdJSONSerializer::~bdJSONSerializer(&v29);
  Mem_LargeLocal::~Mem_LargeLocal(&v28);
}

/*
==============
CacheNoShowMatchReport
==============
*/
void CacheNoShowMatchReport(const int controllerIndex)
{
  char *m_ptr; 
  __int64 MatchId; 
  GameBattleMatch *Match; 
  unsigned int ScheduleMatchCount; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int64 *p_platformId; 
  __int64 v10; 
  int *teams; 
  __int64 v12; 
  int v13; 
  int v14; 
  unsigned __int64 *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v19; 
  unsigned __int8 *from; 
  Mem_LargeLocal v21; 
  bdJSONSerializer v22; 

  Mem_LargeLocal::Mem_LargeLocal(&v21, 0x1000ui64, "jsonBuffer jsonMatchData");
  m_ptr = (char *)v21.m_ptr;
  from = (unsigned __int8 *)v21.m_ptr;
  memset_0(v21.m_ptr, 0, 0x1000ui64);
  bdJSONSerializer::bdJSONSerializer(&v22, m_ptr, 0x1000u);
  bdJSONSerializer::writeBeginObject(&v22);
  MatchId = OnlineMatchId::GetMatchId();
  bdJSONSerializer::writeInt64(&v22, "dw_match_id", MatchId, 0);
  bdJSONSerializer::writeBoolean(&v22, "noShowReport", 1);
  bdJSONSerializer::writeInt32(&v22, "matchId", s_currentMatchId, 0);
  if ( s_currentMatchId )
  {
    if ( GameBattles_GetScheduleState(controllerIndex) == HAS_ACCOUNT )
    {
      ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
      v6 = s_currentMatchId;
      v7 = 0;
      if ( ScheduleMatchCount )
      {
        while ( v6 != GetMatch(controllerIndex, v7)->matchId )
        {
          if ( ++v7 >= ScheduleMatchCount )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v7 = -1;
      }
      Match = NULL;
      if ( v7 != -1 )
        Match = GetMatch(controllerIndex, v7);
    }
    else
    {
      Match = NULL;
    }
  }
  else
  {
    Match = NULL;
  }
  bdJSONSerializer::writeUInt32(&v22, "gameIndex", s_activeGameIndex, 0);
  bdJSONSerializer::writeBeginArray(&v22, "teams");
  v8 = 0i64;
  p_platformId = &s_lobbyInfo.members[0].platformId;
  v10 = 6i64;
  teams = (int *)Match->teams;
  v12 = 2i64;
  v19 = 2i64;
  do
  {
    bdJSONSerializer::writeBeginObject(&v22);
    v13 = 0;
    if ( Match )
      v13 = *teams;
    v14 = 0;
    bdJSONSerializer::writeInt32(&v22, "teamId", v13, 0);
    bdJSONSerializer::writeBeginArray(&v22, "players");
    if ( v8 < v10 )
    {
      v15 = p_platformId;
      v16 = v10 - v8;
      do
      {
        if ( v15 != (unsigned __int64 *)8 && !*((_BYTE *)v15 + 13) && (*v15 || *((_DWORD *)v15 + 2)) )
        {
          bdJSONSerializer::writeBeginObject(&v22);
          bdJSONSerializer::writeInt64(&v22, "platformId", *v15, 0);
          bdJSONSerializer::writeInt32(&v22, "mlgId", *((_DWORD *)v15 + 2), 0);
          bdJSONSerializer::writeEndObject(&v22);
          ++v14;
        }
        v15 += 4;
        --v16;
      }
      while ( v16 );
      v12 = v19;
    }
    bdJSONSerializer::writeEndArray(&v22);
    bdJSONSerializer::writeInt32(&v22, "playerCount", v14, 0);
    bdJSONSerializer::writeEndObject(&v22);
    v10 += 6i64;
    teams += 132;
    v8 += 6i64;
    p_platformId += 24;
    v19 = --v12;
  }
  while ( v12 );
  bdJSONSerializer::writeEndArray(&v22);
  bdJSONSerializer::writeEndObject(&v22);
  v17 = -1i64;
  do
    ++v17;
  while ( from[v17] );
  s_currentMatchReportSize = MemFile_CompressWithZLib(from, v17, s_currentMatchReport, 2048);
  Com_Printf(25, "GAMEBATTLES(%i): Cached no show match report (size: %u, compressed size: %u):\n %s\n", (unsigned int)controllerIndex, (unsigned int)v17, s_currentMatchReportSize, (const char *)from);
  bdJSONSerializer::~bdJSONSerializer(&v22);
  Mem_LargeLocal::~Mem_LargeLocal(&v21);
}

/*
==============
ChatChannelJoinSucceeded
==============
*/
void ChatChannelJoinSucceeded(const int controllerIndex)
{
  __int64 v1; 
  const XUID *Xuid; 
  unsigned __int64 PlatformUserId; 
  int v4; 
  unsigned __int64 *p_platformId; 
  __int64 v6; 
  char ClientPlatform; 
  bool v8; 
  unsigned __int64 v9; 
  const char *v10; 
  unsigned __int64 m_adminID; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 
  XUID result; 
  XUID v19; 

  v1 = controllerIndex;
  XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID);
  Xuid = Live_GetXuid(&v19, v1);
  if ( XUID::operator==(&result, Xuid) )
  {
    PlatformUserId = Live_GetPlatformUserId(v1);
    v4 = 0;
    p_platformId = &s_lobbyInfo.members[0].platformId;
    while ( *p_platformId != PlatformUserId )
    {
      ++v4;
      p_platformId += 4;
      if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      {
        v4 = -1;
        goto LABEL_7;
      }
    }
    if ( v4 != -1 )
      goto LABEL_9;
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1089, ASSERT_TYPE_ASSERT, "(memberIdx != (-1))", (const char *)&queryFormat, "memberIdx != GAMEBATTLES_CHAT_INVALID_MEMBER_SLOT") )
      __debugbreak();
LABEL_9:
    Live_GetXuid(&result, v1);
    if ( !XUID::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1091, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
      __debugbreak();
    v6 = v4;
    if ( !XUID::operator==(&s_lobbyInfo.members[v6].xuid, &result) && !XUID::IsNull(&s_lobbyInfo.members[v6].xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1092, ASSERT_TYPE_ASSERT, "(s_lobbyInfo.members[memberIdx].xuid == xuid || s_lobbyInfo.members[memberIdx].xuid.IsNull())", (const char *)&queryFormat, "s_lobbyInfo.members[memberIdx].xuid == xuid || s_lobbyInfo.members[memberIdx].xuid.IsNull()") )
      __debugbreak();
    XUID::operator=(&s_lobbyInfo.members[v6].xuid, &result);
    s_lobbyInfo.members[v6].isOnline = 1;
    ClientPlatform = GetClientPlatform();
    v8 = s_matchesCompleted == 0;
    s_lobbyInfo.members[v6].platformType[0] = ClientPlatform;
    if ( !v8 && !s_lobbyInfo.intermissionStartEpochTime )
      s_lobbyInfo.intermissionStartEpochTime = Sys_GetTimeAsSeconds();
    Com_Printf(25, "GAMEBATTLES(%i): Chat Channel join succeeded and we are the new host.  Channel ID is: (%zu).\n", (unsigned int)v1, s_activeChatChannel.m_channelID);
    if ( (unsigned int)v1 >= 8 )
    {
      v16 = 8;
      LODWORD(v14) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    s_matchJoinState[v1] = SEARCHING;
    v9 = DB_HASH_INTERNAL("ChatChannelJoinSucceeded", 1ui64, 0x2F63DE4C8601EFF2ui64);
    v10 = j_va("t %zu jh", v9);
  }
  else
  {
    if ( s_activeChatChannel.m_channelID )
    {
      m_adminID = s_activeChatChannel.m_adminID;
    }
    else
    {
      m_adminID = 0i64;
      s_activeChatChannel.m_channelID = GetExpectedChatChannelIdForCurrentMatch();
      s_activeChatChannel.m_adminID = 0i64;
    }
    XUID::FromUniversalId(&result, m_adminID);
    v12 = XUID::ToUint64(&result);
    Com_Printf(25, "GAMEBATTLES(%i): Chat Channel join succeeded and we are a client.  Channel ID is: (%zu).  Host xuid is: (%zu).\n", (unsigned int)v1, s_activeChatChannel.m_channelID, v12);
    if ( (unsigned int)v1 >= 8 )
    {
      v17 = 8;
      v15 = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v15, v17) )
        __debugbreak();
    }
    s_matchJoinState[v1] = QOSING;
    v13 = DB_HASH_INTERNAL("ChatChannelJoinSucceeded", 1ui64, 0x2F63DE4C8601EFF2ui64);
    v10 = j_va("t %zu jc", v13);
  }
  GameBattles_TraceState(v1, v10, NULL);
  s_lobbyLastKeepAlive = Sys_Milliseconds();
  Com_Printf(25, "GAMEBATTLES(%i): Chat channel join succeeded.\n", (unsigned int)v1);
  MLGLobby_DumpInternalState();
}

/*
==============
CheckChatChannelMembership
==============
*/
void CheckChatChannelMembership(const int controllerIndex)
{
  __int64 v1; 
  const dvar_t *v2; 
  int integer; 
  int v4; 
  int v5; 
  const XUID *Xuid; 
  const XUID *v7; 
  __int64 v8; 
  __int64 v10; 
  int v11; 
  XUID result; 
  XUID v13; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v11 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v11) )
      __debugbreak();
  }
  if ( s_activeTask[v1].taskType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2667, ASSERT_TYPE_ASSERT, "(!AsyncTaskActive( controllerIndex ))", (const char *)&queryFormat, "!AsyncTaskActive( controllerIndex )") )
    __debugbreak();
  if ( s_activeChatChannel.m_channelID )
  {
    if ( s_currentMatchId && s_activeChatChannel.m_channelID == s_currentMatchId )
    {
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v10) = 8;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3254, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v8, v10) )
          __debugbreak();
      }
      v2 = DVARINT_gamebattle_keepalive_interval;
      if ( !DVARINT_gamebattle_keepalive_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_keepalive_interval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v2);
      integer = v2->current.integer;
      if ( integer )
      {
        v4 = s_lobbyLastKeepAlive;
        v5 = Sys_Milliseconds() - v4;
        if ( !v4 || v5 / 1000 >= integer )
        {
          s_lobbyLastKeepAlive = Sys_Milliseconds();
          XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID);
          Xuid = Live_GetXuid(&v13, v1);
          if ( XUID::operator==(&result, Xuid) )
          {
            Com_Printf(25, "GAMEBATTLES(%i): Chat keep alive - channel broadcast channel state.\n", (unsigned int)v1);
            v7 = XUID::FromUInt64(&result, 0i64);
            MLGLobbyMsg_SendLobbyStateUpdate(v1, v7);
          }
        }
      }
    }
    else
    {
      GameBattles_LeaveChannel(v1);
    }
  }
}

/*
==============
ClearAsyncTask
==============
*/
void ClearAsyncTask(const int controllerIndex)
{
  __int64 v1; 
  GameBattleAsyncTask *v2; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  v2 = &s_activeTask[v1];
  v2->taskType = NONE;
  v2->needsRetry = 0;
  *(_QWORD *)&v2->numTries = 0i64;
}

/*
==============
CompleteMatchGame
==============
*/
void CompleteMatchGame(const int controllerIndex, const unsigned int gameIndex, const bool isNoShow)
{
  __int64 v3; 
  unsigned int CurrentMatchIndex; 
  unsigned int v7; 
  GameBattleMatch *Match; 
  char *v9; 
  char v10; 
  char v11; 
  __int64 ClientFromController; 
  char v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 

  v3 = gameIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2908, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  v7 = CurrentMatchIndex;
  if ( CurrentMatchIndex != -1 )
  {
    Match = GetMatch(controllerIndex, CurrentMatchIndex);
    if ( (unsigned int)v3 > Match->gameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2918, ASSERT_TYPE_ASSERT, "(gameIndex <= match->gameCount)", (const char *)&queryFormat, "gameIndex <= match->gameCount") )
      __debugbreak();
    v9 = (char *)&Match->games[v3] + 16;
    v10 = *v9;
    if ( (*v9 & 1) != 0 )
    {
      LODWORD(fmt) = v7;
      Com_PrintWarning(25, "GAMEBATTLES(%i): Completing game with gameindex %u, in matchIndex %u, but it is already completed.\n", (unsigned int)controllerIndex, (unsigned int)v3, fmt);
      v10 = *v9;
    }
    v11 = v10 | 1;
    if ( isNoShow )
    {
      *v9 = v11 | 4;
    }
    else
    {
      *v9 = v11 & 0xFB;
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      if ( (unsigned int)ClientFromController >= cg_t::ms_allocatedCount )
      {
        LODWORD(v16) = cg_t::ms_allocatedCount;
        LODWORD(v15) = ClientFromController;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !cg_t::ms_cgArray[ClientFromController] )
      {
        LODWORD(v16) = ClientFromController;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v16) )
          __debugbreak();
      }
      if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
      {
        LODWORD(v16) = ClientFromController;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v16) )
          __debugbreak();
      }
      v13 = 0;
      if ( cg_t::ms_cgArray[ClientFromController]->teamScores[1] > cg_t::ms_cgArray[ClientFromController]->teamScores[2] )
        v13 = 2;
      *v9 = *v9 & 0xFD | v13;
    }
  }
}

/*
==============
Dev_CheckLobby_f
==============
*/
void Dev_CheckLobby_f()
{
  __int64 v0; 
  unsigned __int64 v1; 
  __int64 v2; 
  __int64 v3; 

  if ( Cmd_Argc() == 3 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = (unsigned int)Cmd_ArgInt(2);
    if ( (unsigned int)v0 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3296, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v0, 8) )
      __debugbreak();
    if ( (_DWORD)v1 )
    {
      s_expiredCheckInProgress = 1;
      s_expiredChatChannel = v1;
      s_expiredCheckFailed = 0;
      if ( (unsigned int)v0 >= 8 )
      {
        LODWORD(v3) = 8;
        LODWORD(v2) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3306, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestCheckMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestCheckMatch )\n\t%i not in [0, %i)", v2, v3) )
          __debugbreak();
      }
      s_requestCheckMatch[v0] = 1;
    }
    else
    {
      Com_Printf(25, "GAMEBATTLES(%i): Ignoring lobby check with invalid match id.\n", (unsigned int)v0);
    }
  }
  else
  {
    Com_Printf(0, "gamebattle_check_lobby requires controllerIndex matchId\n");
  }
}

/*
==============
Dev_CreateOrJoinLobby_f
==============
*/
void Dev_CreateOrJoinLobby_f()
{
  int v0; 
  __int64 v1; 
  int v2; 
  const dvar_t *v3; 
  int v4; 
  int integer; 
  __int64 v6; 
  __int64 v7; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = v0;
    if ( (unsigned int)v0 >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3313, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v0, 8) )
      __debugbreak();
    if ( s_currentMatchId )
    {
      v2 = Sys_Milliseconds();
      v3 = DVARINT_gamebattle_join_match_interval;
      v4 = (v2 - s_lastJoinMatchAttemptTime) / 1000;
      if ( !DVARINT_gamebattle_join_match_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_join_match_interval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      integer = v3->current.integer;
      if ( v4 >= integer )
      {
        SetMatchJoinState(v1, IDLE);
        if ( (unsigned int)v1 >= 8 )
        {
          LODWORD(v7) = 8;
          LODWORD(v6) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3330, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestJoinMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestJoinMatch )\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        s_requestJoinMatch[v1] = 1;
      }
      else
      {
        Com_Printf(25, "GAMEBATTLES(%i): Ignoring create or join match lobby call as we are still within cooldown window.  %i seconds remainding.\n", (unsigned int)v1, (unsigned int)(integer - v4));
      }
    }
    else
    {
      Com_Printf(25, "GAMEBATTLES(%i): Ignoring join match lobby call as we do not have an active game battle set.\n", (unsigned int)v1);
    }
  }
  else
  {
    Com_Printf(0, "gamebattle_join_lobby requires controllerIndex\n");
  }
}

/*
==============
Dev_ForceStartMatch_f
==============
*/
void Dev_ForceStartMatch_f()
{
  unsigned __int64 v0; 
  const char *v1; 

  s_requestStartMatch = 1;
  v0 = DB_HASH_INTERNAL("GameBattles_OnStartMatch", 1ui64, 0x2F63DA4C8601E926ui64);
  v1 = j_va("a %zu s", v0);
  GameBattles_TraceState(0, v1, NULL);
}

/*
==============
Dev_GetMatchHistory_f
==============
*/
void Dev_GetMatchHistory_f()
{
  int v0; 
  unsigned int v1; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_ArgInt(1);
    if ( Cmd_Argc() == 3 )
    {
      v1 = Cmd_ArgInt(2);
      GameBattles_RefreshMatchHistory(v0, v1);
    }
    else
    {
      GameBattles_RefreshMatchHistory(v0, s_currentMatchId);
    }
  }
  else
  {
    Com_Printf(0, "gamebattle_get_matchhistory requires controllerIndex\n");
  }
}

/*
==============
Dev_LeaveLobby_f
==============
*/
void Dev_LeaveLobby_f()
{
  if ( Cmd_Argc() == 2 )
  {
    Cmd_ArgInt(1);
    s_requestLeaveMatchLobby = 1;
  }
  else
  {
    Com_Printf(0, "gamebattle_leave_lobby requires controllerIndex\n");
  }
}

/*
==============
Dev_NoShowMatchReport_f
==============
*/
void Dev_NoShowMatchReport_f()
{
  int v0; 
  const dvar_t *v1; 
  unsigned int v2; 

  if ( Cmd_Argc() >= 2 )
  {
    v0 = Cmd_ArgInt(1);
    v1 = DVARBOOL_gamebattle_allow_noshowreports;
    v2 = v0;
    if ( !DVARBOOL_gamebattle_allow_noshowreports && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_allow_noshowreports") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      if ( s_currentMatchId )
      {
        CacheNoShowMatchReport(v2);
        s_requestUploadMatchReport = 1;
        CompleteMatchGame(v2, s_activeGameIndex, 1);
      }
      else
      {
        Com_PrintError(25, "GAMEBATTLES(%i): Attempting to upload no show match report but no matchId set.\n", v2);
      }
    }
  }
  else
  {
    Com_Printf(0, "gamebattle_noshow_report requires controllerIndex\n");
  }
}

/*
==============
Dev_RefreshAccount_f
==============
*/
void Dev_RefreshAccount_f()
{
  int v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_ArgInt(1);
    GameBattles_RefreshAccount(v0);
  }
  else
  {
    Com_Printf(0, "gamebattle_refresh_account requires controllerIndex\n");
  }
}

/*
==============
Dev_RefreshSchedule_f
==============
*/
void Dev_RefreshSchedule_f()
{
  int v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_ArgInt(1);
    GameBattles_RefreshSchedule(v0);
  }
  else
  {
    Com_Printf(0, "gamebattle_refresh_schedule requires controllerIndex\n");
  }
}

/*
==============
Dev_SetMatchId_f
==============
*/
void Dev_SetMatchId_f()
{
  __int64 v0; 
  PartyData *PartyData; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = (unsigned int)Cmd_ArgInt(1);
    Com_Printf(131097, "GAMEBATTLES: Setting matchId to (%u).\n", v0);
    s_currentMatchId = v0;
    if ( Lobby_AreWeHost() )
    {
      PartyData = Lobby_GetPartyData();
      PartyHost_SetGameBattlesMatchId(PartyData, v0);
    }
  }
  else
  {
    Com_Printf(0, "gamebattle_set_matchid requires matchid\n");
  }
}

/*
==============
FindTeamMemberByPlatformId
==============
*/
__int64 FindTeamMemberByPlatformId(const GameBattleTeam *team, const unsigned __int64 platformId)
{
  unsigned int playerCount; 
  __int64 result; 
  unsigned __int64 *i; 

  if ( !team && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 660, ASSERT_TYPE_ASSERT, "(team)", (const char *)&queryFormat, "team") )
    __debugbreak();
  playerCount = team->playerCount;
  result = 0i64;
  if ( !playerCount )
    return 0xFFFFFFFFi64;
  for ( i = &team->players[0].platformId; *i != platformId; i += 10 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= playerCount )
      return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
GameBattles_AreTeamsRostersComplete
==============
*/
char GameBattles_AreTeamsRostersComplete(const int controllerIndex)
{
  unsigned int CurrentMatchIndex; 
  GameBattleMatch *Match; 
  unsigned int v4; 
  GameBattleMatch *v5; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex != -1 )
  {
    Match = GetMatch(controllerIndex, CurrentMatchIndex);
    v4 = 0;
    v5 = Match;
    if ( !Match->teamCount )
      return 1;
    while ( GetTeamRosterState(v4, &v5->teams[v4]) == ALL_MEMBERS_PRESENT )
    {
      if ( ++v4 >= v5->teamCount )
        return 1;
    }
  }
  return 0;
}

/*
==============
GameBattles_ChatChannelUpdate
==============
*/
char GameBattles_ChatChannelUpdate(const int controllerIndex, const bdChannelInfo *newChannelInfo, const bdChannelMember *changedMember, const bool userAdded)
{
  const char *v9; 
  int v10; 
  unsigned __int64 v11; 
  const char *v12; 
  const XUID *v13; 
  unsigned __int64 v14; 
  const char *v15; 
  unsigned __int64 v16; 
  const char *v17; 
  const XUID *v18; 
  char *fmt; 
  XUID v20; 
  XUID xuid; 
  XUID v22; 
  XUID result; 

  if ( s_activeChatChannel.m_channelID != newChannelInfo->m_channelID )
    return 0;
  v9 = "removed";
  if ( userAdded )
    v9 = "added";
  Com_Printf(25, "GAMEBATTLES(%i): Handling chat channel update.  member: %s(%zu), %s.\n", (unsigned int)controllerIndex, &changedMember->_bytes_20[8], *(_QWORD *)changedMember->_bytes_20, v9);
  XUID::FromUniversalId(&result, *(_QWORD *)changedMember->_bytes_20);
  Live_GetXuid(&v20, controllerIndex);
  if ( userAdded )
  {
    if ( XUID::operator!=(&v20, &result) )
    {
      MLGLobbyMsg_SendLobbyStateUpdate(controllerIndex, &result);
      v11 = DB_HASH_INTERNAL("GameBattles_ChatChannelUpdate", 1ui64, 0x2F63DA4C8601E926ui64);
      v12 = j_va("e %zu 1", v11);
      GameBattles_TraceState(controllerIndex, v12, NULL);
    }
  }
  else if ( !XUID::IsNull(&result) )
  {
    v10 = 0;
    while ( !XUID::operator==(&s_lobbyInfo.members[v10].xuid, &result) )
    {
      if ( ++v10 >= 12 )
        goto LABEL_15;
    }
    if ( v10 != -1 )
      MLGLobby_SetMemberOnlineState(controllerIndex, s_lobbyInfo.members[v10].platformId, &result, 0);
  }
LABEL_15:
  if ( s_activeChatChannel.m_channelID != newChannelInfo->m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1077, ASSERT_TYPE_ASSERT, "(s_activeChatChannel.m_channelID == newChannelInfo->m_channelID)", (const char *)&queryFormat, "s_activeChatChannel.m_channelID == newChannelInfo->m_channelID") )
    __debugbreak();
  LODWORD(fmt) = newChannelInfo->m_dataVersion;
  Com_Printf(25, "GAMEBATTLES: Updating chat channel info.  Host xuid: (%zu), num subscribers: %u, data version: %u.\n", newChannelInfo->m_adminID, newChannelInfo->m_numSubscribers, fmt);
  s_activeChatChannel.m_adminID = newChannelInfo->m_adminID;
  s_activeChatChannel.m_numSubscribers = newChannelInfo->m_numSubscribers;
  s_activeChatChannel.m_dataVersion = newChannelInfo->m_dataVersion;
  XUID::FromUniversalId(&xuid, s_activeChatChannel.m_adminID);
  v13 = Live_GetXuid(&v22, controllerIndex);
  if ( XUID::operator==(&xuid, v13) )
  {
    if ( GameBattles_GetMatchJoinState(controllerIndex) != SEARCHING )
    {
      Com_Printf(25, "GAMEBATTLES(%i): Chat channel host left, and I am the new host. Clearing old host info.\n", (unsigned int)controllerIndex);
      memset_0(&s_hostInfo, 0, sizeof(s_hostInfo));
      SetMatchJoinState(controllerIndex, SEARCHING);
      v14 = DB_HASH_INTERNAL("GameBattles_ChatChannelUpdate", 1ui64, 0x2F63DA4C8601E926ui64);
      v15 = j_va("e %zu 2", v14);
      GameBattles_TraceState(controllerIndex, v15, NULL);
    }
    s_lobbyInfo.isValidLobby = 1;
  }
  else
  {
    xuid.m_id = s_hostInfo.xuid.m_id;
    if ( XUID::operator==(&result, &xuid) && !userAdded )
    {
      Com_Printf(25, "GAMEBATTLES(%i): Chat channel host (%zu) removed.  Clearing current host info and awaiting new host info.\n", (unsigned int)controllerIndex, *(_QWORD *)changedMember->_bytes_20);
      memset_0(&s_hostInfo, 0, sizeof(s_hostInfo));
      v16 = DB_HASH_INTERNAL("GameBattles_ChatChannelUpdate", 1ui64, 0x2F63DA4C8601E926ui64);
      v17 = j_va("e %zu 3", v16);
      GameBattles_TraceState(controllerIndex, v17, NULL);
    }
  }
  v18 = XUID::FromUInt64(&v22, s_activeChatChannel.m_adminID);
  XUID::operator=(&s_hostInfo.xuid, v18);
  return 1;
}

/*
==============
GameBattles_CheckChannel
==============
*/
void GameBattles_CheckChannel(const int controllerIndex)
{
  unsigned __int64 v2; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *ChannelInfo; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  s_lastCheckMatchAttemptTime = Sys_Milliseconds();
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 6;
  StartAsyncTask(controllerIndex, SIZE_T);
  v2 = s_expiredChatChannel;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  ChannelInfo = (TaskCreateRequest *)DWMessaging::getChannelInfo(Messaging, &result, "gamebattles", v2, &s_checkChannelResponse);
  if ( ChannelInfo != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v6 = *(bdRemoteTask **)&ChannelInfo->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Checking if a match channel exists with channelId (%zu).\n", (unsigned int)controllerIndex, v2);
  }
  else
  {
    Com_PrintError(25, "GAMEBATTLES(%i): Channel check failed.\n", (unsigned int)controllerIndex);
    HandleTaskFailed(controllerIndex, NULL);
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

/*
==============
GameBattles_CheckMatchLobby
==============
*/
void GameBattles_CheckMatchLobby(const int controllerIndex, const unsigned int matchId)
{
  __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  v2 = controllerIndex;
  v3 = matchId;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3296, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    s_expiredCheckInProgress = 1;
    s_expiredChatChannel = v3;
    s_expiredCheckFailed = 0;
    if ( (unsigned int)v2 >= 8 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3306, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestCheckMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestCheckMatch )\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    s_requestCheckMatch[v2] = 1;
  }
  else
  {
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring lobby check with invalid match id.\n", (unsigned int)v2);
  }
}

/*
==============
GameBattles_ClearLocalCommitReady
==============
*/
void GameBattles_ClearLocalCommitReady(const int controllerIndex)
{
  unsigned __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 864, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  if ( s_partyLocalCommitReady[v1] )
  {
    s_requestUpdateLocalCommitReady = 1;
    if ( v1 >= 8 )
    {
      j___report_rangecheckfailure(s_partyLocalCommitReady);
      JUMPOUT(0x140B8CA92i64);
    }
    s_partyLocalCommitReady[v1] = 0;
  }
}

/*
==============
GameBattles_ClientUpdate
==============
*/
void GameBattles_ClientUpdate(const int controllerIndex)
{
  unsigned __int64 v1; 
  __int64 v2; 
  const XUID *v3; 
  const XUID *Xuid; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  XUID result; 
  unsigned __int64 message; 
  XUID v19; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2779, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestScheduleRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestScheduleRefresh )\n\t%i not in [0, %i)", controllerIndex, v12) )
      __debugbreak();
    LODWORD(v13) = 8;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2780, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestAccountRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestAccountRefresh )\n\t%i not in [0, %i)", v7, v13) )
      __debugbreak();
    LODWORD(v14) = 8;
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2781, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestMatchHistory ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestMatchHistory )\n\t%i not in [0, %i)", v8, v14) )
      __debugbreak();
    LODWORD(v15) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2782, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestJoinMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestJoinMatch )\n\t%i not in [0, %i)", v9, v15) )
      __debugbreak();
  }
  if ( s_requestScheduleRefresh[v1] && s_rawDataOwner == -1 )
  {
    GameBattles_ListScheduledMatches(v1);
    return;
  }
  if ( s_requestAccountRefresh[v1] )
  {
    if ( GameBattles_GetScheduleState(v1) == HAS_ACCOUNT && GameBattles_GetScheduleMatchCount(v1) )
    {
      SetAccountState(v1, HAS_ACCOUNT);
      if ( v1 < 8 )
      {
        s_requestAccountRefresh[v1] = 0;
        return;
      }
LABEL_75:
      j___report_rangecheckfailure(v2);
      JUMPOUT(0x140B8D0BDi64);
    }
    GameBattles_GetAccount(v1);
  }
  else if ( s_requestCheckMatch[v1] )
  {
    if ( GameBattles_GetMatchJoinState(v1) == IDLE )
      GameBattles_CheckChannel(v1);
    if ( v1 >= 8 )
      goto LABEL_75;
    s_requestCheckMatch[v1] = 0;
  }
  else
  {
    if ( s_requestMatchHistory[v1] && s_rawDataOwner == -1 )
    {
      GameBattles_RetrieveMatchHistory(v1, s_currentMatchHistoryRetrievalId);
      return;
    }
    if ( s_requestJoinMatch[v1] )
    {
      if ( GameBattles_GetMatchJoinState(v1) )
      {
        if ( GameBattles_GetMatchJoinState(v1) == QOSING )
        {
          if ( (unsigned int)v1 >= 8 )
          {
            LODWORD(v11) = 8;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2584, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v11) )
              __debugbreak();
            LODWORD(v16) = 8;
            LODWORD(v10) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2585, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestJoinMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestJoinMatch )\n\t%i not in [0, %i)", v10, v16) )
              __debugbreak();
          }
          if ( v1 >= 8 )
            goto LABEL_75;
          result.m_id = s_hostInfo.xuid.m_id;
          s_requestJoinMatch[v1] = 0;
          if ( XUID::ToUint64(&result) )
          {
            Com_Printf(25, "GAMEBATTLES(%i): Broadcast channel presence to all participants.\n", (unsigned int)v1);
            v3 = XUID::FromUInt64(&result, 0i64);
            MLGLobbyMsg_SendMemberState(v1, v3);
          }
          else
          {
            Com_Printf(25, "GAMEBATTLES(%i): Requesting chat channel current state to current admin.\n", (unsigned int)v1);
            XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID);
            Xuid = Live_GetXuid(&v19, v1);
            if ( XUID::operator==(&result, Xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3567, ASSERT_TYPE_ASSERT, "(!IsChatChannelHost( controllerIndex ))", (const char *)&queryFormat, "!IsChatChannelHost( controllerIndex )") )
              __debugbreak();
            message = Live_GetPlatformUserId(v1);
            XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID);
            MLGLobbyMsg_SendMessage(v1, &result, &message, 8u, MOVEMENT);
          }
        }
        else if ( GameBattles_GetMatchJoinState(v1) == SEARCHING )
        {
          if ( v1 >= 8 )
            goto LABEL_75;
          s_requestJoinMatch[v1] = 0;
        }
      }
      else
      {
        GameBattles_JoinChannel(v1);
      }
    }
    else
    {
      if ( s_requestUploadMatchReport )
      {
        GameBattles_UploadMatchReport(v1);
        s_requestUploadMatchReport = 0;
        return;
      }
      if ( s_requestLeaveMatchLobby )
      {
        if ( (unsigned int)v1 >= 8 )
        {
          LODWORD(v11) = 8;
          LODWORD(v5) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3345, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v11) )
            __debugbreak();
        }
        if ( s_currentMatchId && s_activeChatChannel.m_channelID )
        {
          GameBattles_LeaveChannel(v1);
          s_requestLeaveMatchLobby = 0;
        }
        else
        {
          Com_Printf(25, "GAMEBATTLES(%i): Ignoring leave match lobby call as we do not have an active game battle set.\n", (unsigned int)v1);
          s_requestLeaveMatchLobby = 0;
        }
        return;
      }
      if ( !s_lobbyInfo.isValidLobby )
        goto LABEL_73;
      if ( s_localInputNeedsUpdate )
      {
        if ( (unsigned int)v1 >= 8 )
        {
          LODWORD(v11) = 8;
          LODWORD(v5) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 896, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v11) )
            __debugbreak();
        }
        Live_GetXuid(&result, v1);
        if ( !GameBattles_IsPlayerWhitelisted(&result) )
        {
          message = Live_GetPlatformUserId(v1);
          GameBattles_UpdateLocalMemberState(v1, &message);
        }
        s_localInputNeedsUpdate = 0;
        return;
      }
      if ( s_requestStartMatch )
      {
        GameBattles_StartMatchMaking(v1);
        s_requestStartMatch = 0;
        return;
      }
      if ( !s_requestUpdateLocalCommitReady )
      {
LABEL_73:
        CheckChatChannelMembership(v1);
        return;
      }
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v11) = 8;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v11) )
          __debugbreak();
      }
      Live_GetXuid(&result, v1);
      if ( !GameBattles_IsPlayerWhitelisted(&result) )
      {
        message = Live_GetPlatformUserId(v1);
        GameBattles_UpdateLocalMemberState(v1, &message);
      }
      s_requestUpdateLocalCommitReady = 0;
    }
  }
}

/*
==============
GameBattles_CreateChannelPlayerModel
==============
*/
void GameBattles_CreateChannelPlayerModel(const GameBattlePlayer *currentPlayer, team_t team, int memberIndex, const unsigned __int16 memberModel)
{
  unsigned __int64 *p_platformId; 
  int v6; 
  unsigned __int64 platformId; 
  __int64 v10; 
  int ControllerFromClient; 
  __int64 v12; 
  const XUID *v13; 
  bool v14; 
  bool v15; 
  bool v16; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v18; 
  const char *v19; 
  unsigned __int16 v20; 
  bool v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  int PortForLocalXUID; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  unsigned __int16 v31; 
  unsigned __int16 v32; 
  unsigned __int16 v33; 
  bool v34; 
  unsigned __int16 v35; 
  unsigned __int8 ClientPlatform; 
  unsigned __int16 v37; 
  unsigned __int16 v38; 
  unsigned __int16 v39; 
  bool v40; 
  unsigned __int16 v41; 
  unsigned __int16 v42; 
  XUID xuid; 
  XUID newValue; 
  XUID result[3]; 

  p_platformId = &s_lobbyInfo.members[0].platformId;
  v6 = 0;
  platformId = currentPlayer->platformId;
  LODWORD(newValue.m_id) = memberIndex;
  while ( *p_platformId != platformId )
  {
    ++v6;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
    {
      v6 = -1;
      goto LABEL_6;
    }
  }
  if ( v6 != -1 )
    goto LABEL_8;
LABEL_6:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4205, ASSERT_TYPE_ASSERT, "(memberIdx != (-1))", (const char *)&queryFormat, "memberIdx != GAMEBATTLES_CHAT_INVALID_MEMBER_SLOT") )
    __debugbreak();
LABEL_8:
  v10 = v6;
  xuid.m_id = s_lobbyInfo.members[v10].xuid.m_id;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v12 = ControllerFromClient;
  v13 = Live_GetXuid(result, ControllerFromClient);
  v14 = XUID::operator==(&xuid, v13);
  v15 = v14 && s_partyLocalCommitReady[v12];
  v16 = v14 && s_localInputIsGamepad[v12];
  if ( !XUID::IsValid(&xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4211, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()", xuid.m_id, newValue.m_id) )
    __debugbreak();
  ModelFromPath = LUI_Model_CreateModelFromPath(memberModel, "memberIndex");
  LUI_Model_SetInt(ModelFromPath, newValue.m_id);
  v18 = LUI_Model_CreateModelFromPath(memberModel, "xuid");
  v19 = XUID::ToString(&xuid);
  LUI_Model_SetString(v18, v19);
  v20 = LUI_Model_CreateModelFromPath(memberModel, "isLobbyHost");
  XUID::FromUniversalId(&newValue, s_activeChatChannel.m_adminID);
  v21 = XUID::operator==(&newValue, &xuid);
  LUI_Model_SetBool(v20, v21);
  v22 = LUI_Model_CreateModelFromPath(memberModel, "platformId");
  Com_sprintf<21>((char (*)[21])result, "%zu", currentPlayer->platformId);
  LUI_Model_SetString(v22, (const char *)result);
  v23 = LUI_Model_CreateModelFromPath(memberModel, "controllerIndex");
  PortForLocalXUID = Live_GetPortForLocalXUID(xuid);
  LUI_Model_SetInt(v23, PortForLocalXUID);
  v25 = LUI_Model_CreateModelFromPath(memberModel, "gamertag");
  v26 = LUI_Model_CreateModelFromPath(memberModel, "missingGamertag");
  LUI_Model_SetBool(v26, 1);
  LUI_Model_SetString(v25, currentPlayer->gamertag);
  v27 = LUI_Model_CreateModelFromPath(memberModel, "team");
  LUI_Model_SetInt(v27, team);
  v28 = LUI_Model_CreateModelFromPath(memberModel, "squad");
  LUI_Model_SetInt(v28, -1);
  v29 = LUI_Model_CreateModelFromPath(memberModel, "desiredTeam");
  LUI_Model_SetInt(v29, team);
  result[0].m_id = 0i64;
  LODWORD(result[1].m_id) = 0;
  v30 = LUI_Model_CreateModelFromPath(memberModel, "clanTag");
  LUI_Model_SetString(v30, (const char *)result);
  v31 = LUI_Model_CreateModelFromPath(memberModel, "isMyPlayer");
  LUI_Model_SetBool(v31, v14);
  v32 = LUI_Model_CreateModelFromPath(memberModel, "microphoneState");
  LUI_Model_SetInt(v32, 0);
  v33 = LUI_Model_CreateModelFromPath(memberModel, "usingGamepad");
  v34 = s_lobbyInfo.members[v10].usingGamepad || v16;
  LUI_Model_SetBool(v33, v34);
  v35 = LUI_Model_CreateModelFromPath(memberModel, "isCrossplayPlayer");
  ClientPlatform = GetClientPlatform();
  LUI_Model_SetBool(v35, s_lobbyInfo.members[v10].platformType[0] != ClientPlatform);
  v37 = LUI_Model_CreateModelFromPath(memberModel, "presencePlatform");
  LUI_Model_SetInt(v37, (char)s_lobbyInfo.members[v10].platformType[0]);
  v38 = LUI_Model_CreateModelFromPath(memberModel, "followersCount");
  LUI_Model_SetInt(v38, 0);
  v39 = LUI_Model_CreateModelFromPath(memberModel, "commitReady");
  v40 = s_lobbyInfo.members[v10].isReady || v15;
  LUI_Model_SetBool(v39, v40);
  v41 = LUI_Model_CreateModelFromPath(memberModel, "inGame");
  LUI_Model_SetBool(v41, s_lobbyInfo.members[v10].inGame != 0);
  v42 = LUI_Model_CreateModelFromPath(memberModel, "isPlaceHolderPlayer");
  LUI_Model_SetBool(v42, 0);
}

/*
==============
GameBattles_CreateFakePlayer
==============
*/
void GameBattles_CreateFakePlayer(const GameBattlePlayer *currentPlayer, team_t team, int memberIndex, const unsigned __int16 memberModel)
{
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  unsigned __int16 v14; 
  unsigned __int16 v15; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int16 v18; 
  unsigned __int64 *p_platformId; 
  int v20; 
  bool v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  unsigned __int16 v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned __int64 platformId; 
  int ControllerFromClient; 
  char dest[21]; 

  ModelFromPath = LUI_Model_CreateModelFromPath(memberModel, "memberIndex");
  LUI_Model_SetInt(ModelFromPath, memberIndex);
  v9 = LUI_Model_CreateModelFromPath(memberModel, "xuid");
  LUI_Model_SetString(v9, "0");
  v10 = LUI_Model_CreateModelFromPath(memberModel, "isLobbyHost");
  LUI_Model_SetBool(v10, 0);
  LOWORD(memberIndex) = LUI_Model_CreateModelFromPath(memberModel, "platformId");
  Com_sprintf<21>((char (*)[21])dest, "%zu", currentPlayer->platformId);
  LUI_Model_SetString(memberIndex, dest);
  v11 = LUI_Model_CreateModelFromPath(memberModel, "controllerIndex");
  LUI_Model_SetInt(v11, -1);
  LOWORD(memberIndex) = LUI_Model_CreateModelFromPath(memberModel, "gamertag");
  v12 = LUI_Model_CreateModelFromPath(memberModel, "missingGamertag");
  LUI_Model_SetBool(v12, 1);
  LUI_Model_SetString(memberIndex, currentPlayer->gamertag);
  v13 = LUI_Model_CreateModelFromPath(memberModel, "team");
  LUI_Model_SetInt(v13, team);
  v14 = LUI_Model_CreateModelFromPath(memberModel, "squad");
  LUI_Model_SetInt(v14, -1);
  v15 = LUI_Model_CreateModelFromPath(memberModel, "desiredTeam");
  LUI_Model_SetInt(v15, team);
  *(_QWORD *)dest = 0i64;
  *(_DWORD *)&dest[8] = 0;
  v16 = LUI_Model_CreateModelFromPath(memberModel, "clanTag");
  LUI_Model_SetString(v16, dest);
  v17 = LUI_Model_CreateModelFromPath(memberModel, "presencePlatform");
  LUI_Model_SetInt(v17, 0);
  v18 = LUI_Model_CreateModelFromPath(memberModel, "isMyPlayer");
  p_platformId = &s_lobbyInfo.members[0].platformId;
  v20 = 0;
  while ( *p_platformId != currentPlayer->platformId )
  {
    ++v20;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      goto LABEL_4;
  }
  if ( v20 == -1 )
  {
LABEL_4:
    v21 = 0;
    goto LABEL_5;
  }
  platformId = s_lobbyInfo.members[v20].platformId;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v21 = platformId == Live_GetPlatformUserId(ControllerFromClient);
LABEL_5:
  LUI_Model_SetBool(v18, v21);
  v22 = LUI_Model_CreateModelFromPath(memberModel, "microphoneState");
  LUI_Model_SetInt(v22, 0);
  v23 = LUI_Model_CreateModelFromPath(memberModel, "usingGamepad");
  LUI_Model_SetBool(v23, 0);
  v24 = LUI_Model_CreateModelFromPath(memberModel, "isCrossplayPlayer");
  LUI_Model_SetBool(v24, 0);
  v25 = LUI_Model_CreateModelFromPath(memberModel, "followersCount");
  LUI_Model_SetInt(v25, 0);
  v26 = LUI_Model_CreateModelFromPath(memberModel, "commitReady");
  LUI_Model_SetBool(v26, 0);
  v27 = LUI_Model_CreateModelFromPath(memberModel, "inGame");
  LUI_Model_SetBool(v27, 0);
  v28 = LUI_Model_CreateModelFromPath(memberModel, "isPlaceHolderPlayer");
  LUI_Model_SetBool(v28, 1);
}

/*
==============
GameBattles_GetAccount
==============
*/
void GameBattles_GetAccount(const int controllerIndex)
{
  unsigned __int64 v1; 
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWMLG *MLG; 
  TaskCreateRequest *v5; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2472, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    LODWORD(v12) = 8;
    LODWORD(v10) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  s_accountState[v1] = RETRIEVING;
  s_lastAccountRefreshTime = Sys_Milliseconds();
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v11) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2475, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestAccountRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestAccountRefresh )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( v1 >= 8 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x140B8DE49i64);
  }
  s_requestAccountRefresh[v1] = 0;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = v1;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 5;
  StartAsyncTask(v1, MAX_INT);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v11) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2484, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_accountIsRegisteredReturn ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_accountIsRegisteredReturn )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  Instance = DWServicesAccess::GetInstance();
  MLG = DWServicesAccess::GetMLG(Instance, v1);
  v5 = (TaskCreateRequest *)DWMLG::isUserRegistered(MLG, &result, &s_accountIsRegisteredReturn[v1]);
  if ( v5 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v6 = *(bdRemoteTask **)&v5->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Starting retrieval of account status.\n", (unsigned int)v1);
  }
  else
  {
    Com_PrintError(25, "GAMEBATTLES(%i): Retrieval failed for account status.\n", (unsigned int)v1);
    HandleTaskFailed(v1, NULL);
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

/*
==============
GameBattles_GetAccountState
==============
*/
__int64 GameBattles_GetAccountState(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 915, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_accountState[v1];
}

/*
==============
GameBattles_GetActiveGameIndex
==============
*/
__int64 GameBattles_GetActiveGameIndex()
{
  return s_activeGameIndex;
}

/*
==============
GameBattles_GetAsyncTaskStateNameDebugString
==============
*/
const char *GameBattles_GetAsyncTaskStateNameDebugString(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_asyncTaskTypeNames[s_activeTask[v1].taskType];
}

/*
==============
GameBattles_GetCDLRuleValue
==============
*/
char GameBattles_GetCDLRuleValue()
{
  char v0; 
  int ControllerFromClient; 
  unsigned int CurrentMatchIndex; 
  GameBattleMatch *Match; 

  v0 = 0;
  if ( !s_CDLRuleCheckActive )
    return v0;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(ControllerFromClient);
  if ( CurrentMatchIndex != -1 )
  {
    Match = GetMatch(ControllerFromClient, CurrentMatchIndex);
    if ( Match )
      return Match->recipePreset == RECIPE_CWL;
  }
  return 0;
}

/*
==============
GameBattles_GetCheckMatchLobbyResult
==============
*/
__int64 GameBattles_GetCheckMatchLobbyResult(const int controllerIndex)
{
  if ( s_expiredCheckInProgress )
    return 1i64;
  if ( s_expiredCheckFailed )
    return 0i64;
  return 3 - (unsigned int)(s_expiredChatChannel != 0);
}

/*
==============
GameBattles_GetCompletedGameFlags
==============
*/
__int64 GameBattles_GetCompletedGameFlags(const int controllerIndex)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  GameBattleMatch *Match; 
  unsigned int gameCount; 
  unsigned int v10; 
  _BYTE *v11; 

  if ( !s_currentMatchId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3069, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
      __debugbreak();
    if ( !s_currentMatchId )
      return 0i64;
  }
  if ( GameBattles_GetScheduleState(controllerIndex) != HAS_ACCOUNT )
    return 0i64;
  ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
  v3 = s_currentMatchId;
  v4 = 0;
  v5 = ScheduleMatchCount;
  v6 = 0;
  if ( !ScheduleMatchCount )
    return 0i64;
  while ( v3 != GetMatch(controllerIndex, v6)->matchId )
  {
    if ( ++v6 >= v5 )
      return 0i64;
  }
  if ( v6 == -1 )
    return 0i64;
  Match = GetMatch(controllerIndex, v6);
  if ( Match->gameCount > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3080, ASSERT_TYPE_ASSERT, "(match->gameCount <= (11))", (const char *)&queryFormat, "match->gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
    __debugbreak();
  gameCount = Match->gameCount;
  v10 = 0;
  if ( gameCount )
  {
    v11 = (char *)Match->games + 16;
    do
    {
      if ( (*v11 & 1) != 0 )
        v4 |= 1 << v10;
      ++v10;
      v11 += 20;
    }
    while ( v10 < gameCount );
  }
  return v4;
}

/*
==============
GameBattles_GetCurrentGameTypeName
==============
*/
const char *GameBattles_GetCurrentGameTypeName(const int controllerIndex)
{
  unsigned int CurrentMatchIndex; 
  GameBattleMatch *Match; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 0i64;
  Match = GetMatch(controllerIndex, CurrentMatchIndex);
  if ( !Match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4694, ASSERT_TYPE_ASSERT, "(match)", (const char *)&queryFormat, "match") )
    __debugbreak();
  return MapGameBattleGametypeToString(Match->games[s_activeGameIndex].gametype);
}

/*
==============
GameBattles_GetCurrentMapName
==============
*/
GameBattleMapMapping *GameBattles_GetCurrentMapName(const int controllerIndex)
{
  unsigned int CurrentMatchIndex; 
  GameBattleMatch *Match; 
  int id; 
  int v6; 
  GameBattleMap *i; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 0i64;
  Match = GetMatch(controllerIndex, CurrentMatchIndex);
  if ( !Match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4679, ASSERT_TYPE_ASSERT, "(match)", (const char *)&queryFormat, "match") )
    __debugbreak();
  id = Match->games[s_activeGameIndex].map.id;
  if ( !s_mlgGameMappingLoaded )
    LoadMLGMapping();
  v6 = 0;
  for ( i = &mapNameMap[0].mapIndex; id != i->id; i += 10 )
  {
    if ( (unsigned int)++v6 >= 0x40 )
      return (GameBattleMapMapping *)((char *)&queryFormat.fmt + 3);
  }
  return &mapNameMap[v6];
}

/*
==============
GameBattles_GetCurrentMatchId
==============
*/
__int64 GameBattles_GetCurrentMatchId()
{
  return s_currentMatchId;
}

/*
==============
GameBattles_GetCurrentMatchIndex
==============
*/
__int64 GameBattles_GetCurrentMatchIndex(const int controllerIndex)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( !s_currentMatchId )
    return 0xFFFFFFFFi64;
  if ( GameBattles_GetScheduleState(controllerIndex) != HAS_ACCOUNT )
    return 0xFFFFFFFFi64;
  ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
  v3 = s_currentMatchId;
  v4 = 0;
  v5 = ScheduleMatchCount;
  if ( !ScheduleMatchCount )
    return 0xFFFFFFFFi64;
  while ( v3 != GetMatch(controllerIndex, v4)->matchId )
  {
    if ( ++v4 >= v5 )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

/*
==============
GameBattles_GetCurrentMatchRecipeName
==============
*/
char GameBattles_GetCurrentMatchRecipeName(const int controllerIndex, char *outRecipeName, const unsigned int outLength)
{
  unsigned __int64 v3; 
  unsigned int CurrentMatchIndex; 
  GameBattleMatch *Match; 
  GameBattleRecipePreset recipePreset; 
  const char *v10; 

  v3 = outLength;
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 0;
  Match = GetMatch(controllerIndex, CurrentMatchIndex);
  recipePreset = Match->recipePreset;
  v10 = MapGameBattleGametypeToString(Match->games[s_activeGameIndex].gametype);
  if ( recipePreset == RECIPE_CWL )
  {
    Com_sprintf(outRecipeName, v3, "mlg_%s", v10);
    return 1;
  }
  else
  {
    if ( recipePreset )
      Com_sprintf(outRecipeName, v3, "gb_%s_%d", v10, recipePreset);
    else
      Com_sprintf(outRecipeName, v3, (const char *)&queryFormat, v10);
    return 1;
  }
}

/*
==============
GameBattles_GetCurrentMatchSchedule
==============
*/
void GameBattles_GetCurrentMatchSchedule(const int controllerIndex)
{
  __int64 v1; 
  GameBattleScheduleState state; 
  unsigned int matchCount; 
  const XUID *Xuid; 
  __int64 v5; 
  __int64 v7; 
  int v8; 
  XUID result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  state = s_schedule[v1].state;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  matchCount = s_schedule[v1].matchCount;
  Xuid = Live_GetXuid(&result, v1);
  if ( GameBattles_IsPlayerWhitelisted(Xuid) && state == HAS_ACCOUNT || state == UNAVAILABLE || state != RETRIEVING && !matchCount )
    GameBattles_GetScheduledMatch(v1);
}

/*
==============
GameBattles_GetCurrentPlayerCount
==============
*/
__int64 GameBattles_GetCurrentPlayerCount(const int controllerIndex)
{
  unsigned int CurrentMatchIndex; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 0i64;
  else
    return GetMatch(controllerIndex, CurrentMatchIndex)->totalPlayerCount;
}

/*
==============
GameBattles_GetDesiredDialog
==============
*/
__int64 GameBattles_GetDesiredDialog()
{
  int v0; 
  GameBattleMatchJoinState *v1; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 

  if ( !s_currentMatchId || !Com_FrontEnd_IsInFrontEnd() )
    return 0i64;
  v0 = 0;
  v1 = s_matchJoinState;
  v2 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      LODWORD(v5) = 8;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !s_requestLeaveMatchLobby && *v1 == INITIALIZING )
      break;
    ++v0;
    ++v1;
    v2 = (unsigned int)v0 < 8;
    if ( v0 >= 8 )
      return 0i64;
  }
  return 1i64;
}

/*
==============
GameBattles_GetLobbyCommitReadyStatus
==============
*/
_BOOL8 GameBattles_GetLobbyCommitReadyStatus()
{
  unsigned int *p_mlgId; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int i; 
  __int64 ControllerFromClient; 
  unsigned int ScheduleMatchCount; 
  unsigned int v6; 
  unsigned int v7; 
  GameBattleMatch *Match; 
  int v10; 
  int v11; 

  if ( !s_currentMatchId )
    return 0i64;
  p_mlgId = &s_lobbyInfo.members[0].mlgId;
  v1 = 0;
  v2 = 0;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( XUID::IsValid((XUID *)p_mlgId - 2) && *((_QWORD *)p_mlgId - 1) && *p_mlgId && *((_BYTE *)p_mlgId + 5) && *((_BYTE *)p_mlgId + 6) )
      ++v2;
    p_mlgId += 8;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( !s_currentMatchId )
    return 0i64;
  if ( (unsigned int)ControllerFromClient >= 8 )
  {
    v11 = 8;
    v10 = ControllerFromClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( s_schedule[ControllerFromClient].state != HAS_ACCOUNT )
    return 0i64;
  ScheduleMatchCount = GameBattles_GetScheduleMatchCount(ControllerFromClient);
  v6 = s_currentMatchId;
  v7 = ScheduleMatchCount;
  if ( !ScheduleMatchCount )
    return 0i64;
  while ( v6 != GetMatch(ControllerFromClient, v1)->matchId )
  {
    if ( ++v1 >= v7 )
      return 0i64;
  }
  if ( v1 == -1 )
    return 0i64;
  Match = GetMatch(ControllerFromClient, v1);
  return v2 >= Match->teams[0].playerCount + Match->teams[1].playerCount;
}

/*
==============
GameBattles_GetLocalCommitReady
==============
*/
_BOOL8 GameBattles_GetLocalCommitReady(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 889, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_partyLocalCommitReady[v1];
}

/*
==============
GameBattles_GetMatchHistoryState
==============
*/
GameBattleMatch *GameBattles_GetMatchHistoryState(const int controllerIndex, const unsigned int matchId)
{
  GameBattleMatch *result; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 774, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  result = GetMatchById(controllerIndex, matchId);
  if ( result )
    return (GameBattleMatch *)(unsigned int)result->matchHistoryState;
  return result;
}

/*
==============
GameBattles_GetMatchJoinState
==============
*/
__int64 GameBattles_GetMatchJoinState(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  if ( s_requestLeaveMatchLobby )
    return 0i64;
  else
    return (unsigned int)s_matchJoinState[v1];
}

/*
==============
GameBattles_GetMatchJoinStateNameDebugString
==============
*/
const char *GameBattles_GetMatchJoinStateNameDebugString(const int controllerIndex)
{
  return s_matchJoinStateNames[GameBattles_GetMatchJoinState(controllerIndex)];
}

/*
==============
GameBattles_GetMatchReportState
==============
*/
__int64 GameBattles_GetMatchReportState()
{
  return (unsigned int)s_matchReportState;
}

/*
==============
GameBattles_GetMatchTime
==============
*/
char *GameBattles_GetMatchTime(const int controllerIndex, const unsigned int matchIndex)
{
  GameBattleMatch *Match; 

  Match = GetMatch(controllerIndex, matchIndex);
  return j_va("%u", Match->matchTimeUTC);
}

/*
==============
GameBattles_GetNavigationDestination
==============
*/
__int64 GameBattles_GetNavigationDestination()
{
  return 0i64;
}

/*
==============
GameBattles_GetScheduleMatchCount
==============
*/
__int64 GameBattles_GetScheduleMatchCount(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return s_schedule[v1].matchCount;
}

/*
==============
GameBattles_GetScheduleState
==============
*/
__int64 GameBattles_GetScheduleState(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)s_schedule[v1].state;
}

/*
==============
GameBattles_GetScheduledMatch
==============
*/
void GameBattles_GetScheduledMatch(const int controllerIndex)
{
  __int64 v1; 
  DWServicesAccess *Instance; 
  DWMatchScheduler *MatchScheduler; 
  TaskCreateRequest *ScheduledMatch; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v8; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( !s_currentMatchId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2353, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
    __debugbreak();
  GameBattles_ResetSchedule(v1);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v8) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v8, 8) )
      __debugbreak();
  }
  s_schedule[v1].state = RETRIEVING;
  AcquireRawDataOwnership(v1, MATCH_META_DATA);
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = v1;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 2;
  StartAsyncTask(v1, HALF_HALF);
  Instance = DWServicesAccess::GetInstance();
  MatchScheduler = DWServicesAccess::GetMatchScheduler(Instance, v1);
  ScheduledMatch = (TaskCreateRequest *)DWMatchScheduler::getScheduledMatch(MatchScheduler, &result, s_currentMatchId, s_scheduledMatchData);
  if ( ScheduledMatch != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&ScheduledMatch->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(131097, "GAMEBATTLES(%i): Starting retrieval of single match with matchId %i.\n", (unsigned int)v1, s_currentMatchId);
  }
  else
  {
    Com_PrintError(131097, "GAMEBATTLES(%i): Retrieval failed for single match with matchId (%u).\n", (unsigned int)v1, s_currentMatchId);
    HandleTaskFailed(v1, NULL);
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

/*
==============
GameBattles_GetTeamFromPlatformId
==============
*/
__int64 GameBattles_GetTeamFromPlatformId(const int controllerIndex, unsigned __int64 platformId)
{
  unsigned int CurrentMatchIndex; 
  int v5; 
  unsigned __int64 *p_platformId; 
  GameBattleMatch *Match; 
  __int64 v9; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 201i64;
  v5 = 0;
  p_platformId = &s_lobbyInfo.members[0].platformId;
  while ( *p_platformId != platformId )
  {
    ++v5;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      return 201i64;
  }
  if ( v5 == -1 )
    return 201i64;
  Match = GetMatch(controllerIndex, CurrentMatchIndex);
  v9 = v5;
  if ( (unsigned int)FindTeamMemberByPlatformId(Match->teams, s_lobbyInfo.members[v9].platformId) != -1 )
  {
    if ( (unsigned int)v5 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1411, ASSERT_TYPE_ASSERT, "(playerIndex >= 0 && playerIndex < (6))", (const char *)&queryFormat, "playerIndex >= 0 && playerIndex < GAMEBATTLE_MATCH_MAX_PLAYERS_PER_TEAM") )
      __debugbreak();
    return 1i64;
  }
  if ( (unsigned int)FindTeamMemberByPlatformId(&Match->teams[1], s_lobbyInfo.members[v9].platformId) == -1 )
    return 201i64;
  if ( v5 < 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1417, ASSERT_TYPE_ASSERT, "(playerIndex >= (6))", (const char *)&queryFormat, "playerIndex >= GAMEBATTLE_MATCH_MAX_PLAYERS_PER_TEAM") )
    __debugbreak();
  return 2i64;
}

/*
==============
GameBattles_GetTeamFromXUID
==============
*/
__int64 GameBattles_GetTeamFromXUID(const int controllerIndex, const XUID *playerXuid)
{
  unsigned int CurrentMatchIndex; 
  int MemberByXUID; 
  __int64 v6; 
  GameBattleMatch *Match; 
  unsigned __int64 *p_platformId; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
    return 201i64;
  MemberByXUID = MLGLobby_FindMemberByXUID(playerXuid);
  v6 = MemberByXUID;
  if ( MemberByXUID == -1 )
    return 201i64;
  Match = GetMatch(controllerIndex, CurrentMatchIndex);
  p_platformId = &s_lobbyInfo.members[v6].platformId;
  if ( (unsigned int)FindTeamMemberByPlatformId(Match->teams, *p_platformId) != -1 )
  {
    if ( (unsigned int)v6 > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1443, ASSERT_TYPE_ASSERT, "(playerIndex >= 0 && playerIndex < (6))", (const char *)&queryFormat, "playerIndex >= 0 && playerIndex < GAMEBATTLE_MATCH_MAX_PLAYERS_PER_TEAM") )
      __debugbreak();
    return 1i64;
  }
  if ( (unsigned int)FindTeamMemberByPlatformId(&Match->teams[1], *p_platformId) == -1 )
    return 201i64;
  if ( (int)v6 < 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1449, ASSERT_TYPE_ASSERT, "(playerIndex >= (6))", (const char *)&queryFormat, "playerIndex >= GAMEBATTLE_MATCH_MAX_PLAYERS_PER_TEAM") )
    __debugbreak();
  return 2i64;
}

/*
==============
GameBattles_GetWonByHomeGameFlags
==============
*/
__int64 GameBattles_GetWonByHomeGameFlags(const int controllerIndex)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  GameBattleMatch *Match; 
  unsigned int gameCount; 
  unsigned int v10; 
  _BYTE *v11; 

  if ( !s_currentMatchId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3121, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
      __debugbreak();
    if ( !s_currentMatchId )
      return 0i64;
  }
  if ( GameBattles_GetScheduleState(controllerIndex) != HAS_ACCOUNT )
    return 0i64;
  ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
  v3 = s_currentMatchId;
  v4 = 0;
  v5 = ScheduleMatchCount;
  v6 = 0;
  if ( !ScheduleMatchCount )
    return 0i64;
  while ( v3 != GetMatch(controllerIndex, v6)->matchId )
  {
    if ( ++v6 >= v5 )
      return 0i64;
  }
  if ( v6 == -1 )
    return 0i64;
  Match = GetMatch(controllerIndex, v6);
  if ( Match->gameCount > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3132, ASSERT_TYPE_ASSERT, "(match->gameCount <= (11))", (const char *)&queryFormat, "match->gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
    __debugbreak();
  gameCount = Match->gameCount;
  v10 = 0;
  if ( gameCount )
  {
    v11 = (char *)Match->games + 16;
    do
    {
      if ( (*v11 & 2) != 0 )
        v4 |= 1 << v10;
      ++v10;
      v11 += 20;
    }
    while ( v10 < gameCount );
  }
  return v4;
}

/*
==============
GameBattles_HandleChatChannelMessage
==============
*/
char GameBattles_HandleChatChannelMessage(const int controllerIndex, const unsigned __int64 channelID, const unsigned __int64 senderId, const unsigned int messageType, const void *message, const unsigned int messageSize)
{
  unsigned int v11; 
  const XUID *v12; 
  unsigned __int64 *p_platformId; 
  unsigned int v15; 
  const XUID *v19; 
  MLGLobbyMemberState *v20; 
  __int64 v21; 
  __int64 v23; 
  __int64 v36; 
  __int64 v44; 
  const char *v45; 
  const XUID *v46; 
  unsigned __int64 v48; 
  const char *v49; 
  XUID result; 
  XUID receivingUserId; 
  XUID v52; 
  XUID xuid[4]; 
  XUID v54[4]; 
  __int64 v59[3]; 
  MLGLobbyMemberState v60; 

  _RBX = (char *)message;
  if ( s_activeChatChannel.m_channelID != channelID )
    return 0;
  Com_Printf(25, "GAMEBATTLES(%i): Handling chat channel message of type %s, sender: (%zu).\n", (unsigned int)controllerIndex, s_chatChannelMessageType[messageType], senderId);
  if ( messageType )
  {
    v11 = messageType - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        XUID::FromUniversalId(&result, senderId);
        v12 = Live_GetXuid(&receivingUserId, controllerIndex);
        if ( !XUID::operator==(&result, v12) && !GameBattles_IsPlayerWhitelisted(&result) )
        {
          if ( messageSize != 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3548, ASSERT_TYPE_ASSERT, "(messageSize == sizeof( MLGLobbyMemberState ))", (const char *)&queryFormat, "messageSize == sizeof( MLGLobbyMemberState )") )
            __debugbreak();
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups ymmword ptr [rsp+2B0h+xuid.m_id], ymm0
          }
          if ( !XUID::operator==(&result, xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3550, ASSERT_TYPE_ASSERT, "(xuid == msg.xuid)", (const char *)&queryFormat, "xuid == msg.xuid") )
            __debugbreak();
          Com_Printf(25, "GAMEBATTLES(%i): Finding member puid: %zu.\n", (unsigned int)controllerIndex, xuid[1].m_id);
          p_platformId = &s_lobbyInfo.members[0].platformId;
          v15 = 0;
          while ( *p_platformId != xuid[1].m_id )
          {
            ++v15;
            p_platformId += 4;
            if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
              goto LABEL_21;
          }
          if ( v15 == -1 )
          {
LABEL_21:
            Com_Printf(25, "GAMEBATTLES(%i): Unexpected player in match %zu.\n", (unsigned int)controllerIndex, senderId);
            return 1;
          }
          __asm { vmovups ymm0, ymmword ptr [rbx] }
          _RCX = &s_lobbyInfo;
          _RAX = v15;
          __asm { vmovups ymmword ptr [rax+rcx+18h], ymm0 }
          s_lobbyInfo.members[_RAX].isOnline = 1;
          Com_Printf(25, "GAMEBATTLES(%i): Chat channel update member received from %zu.\n", (unsigned int)controllerIndex, senderId);
          MLGLobby_DumpInternalState();
        }
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3647, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
      {
        __debugbreak();
      }
    }
    else
    {
      XUID::FromUniversalId(&receivingUserId, s_activeChatChannel.m_adminID);
      v19 = Live_GetXuid(&result, controllerIndex);
      if ( !XUID::operator==(&receivingUserId, v19) )
      {
        if ( messageSize != 528 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3597, ASSERT_TYPE_ASSERT, "(messageSize == sizeof( MLGLobbyStateMessage ))", (const char *)&queryFormat, "messageSize == sizeof( MLGLobbyStateMessage )") )
          __debugbreak();
        XUID::XUID(v54);
        v20 = &v60;
        memset(v59, 0, sizeof(v59));
        v21 = 12i64;
        do
        {
          MLGLobbyMemberState::MLGLobbyMemberState(v20++);
          --v21;
        }
        while ( v21 );
        _RAX = v54;
        v23 = 4i64;
        do
        {
          _RAX += 16;
          __asm
          {
            vmovups ymm0, ymmword ptr [rbx]
            vmovups xmm1, xmmword ptr [rbx+70h]
          }
          _RBX += 128;
          __asm
          {
            vmovups ymmword ptr [rax-80h], ymm0
            vmovups ymm0, ymmword ptr [rbx-60h]
            vmovups ymmword ptr [rax-60h], ymm0
            vmovups ymm0, ymmword ptr [rbx-40h]
            vmovups ymmword ptr [rax-40h], ymm0
            vmovups xmm0, xmmword ptr [rbx-20h]
            vmovups xmmword ptr [rax-20h], xmm0
            vmovups xmmword ptr [rax-10h], xmm1
          }
          --v23;
        }
        while ( v23 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx]
          vmovups xmmword ptr [rax], xmm0
          vmovups ymm1, ymmword ptr [rsp+2B0h+var_240.m_id]
          vmovups ymm0, [rbp+1B0h+var_220]
          vmovups ymmword ptr cs:s_hostInfo.xuid.m_id, ymm1
          vmovups ymm1, [rbp+1B0h+var_200]
          vmovups ymmword ptr cs:s_hostInfo.session+38h, ymm1
          vmovsd  xmm1, [rbp+1B0h+var_1D0]
          vmovups ymmword ptr cs:s_hostInfo.session+18h, ymm0
          vmovups xmm0, [rbp+1B0h+var_1E0]
          vmovsd  qword ptr cs:s_hostInfo.session+68h, xmm1
          vmovups xmmword ptr cs:s_hostInfo.session+58h, xmm0
        }
        _RCX = &s_lobbyInfo;
        v36 = 3i64;
        _RAX = v59;
        do
        {
          _RCX = (MLGLobby *)((char *)_RCX + 128);
          __asm
          {
            vmovups ymm0, ymmword ptr [rax]
            vmovups xmm1, xmmword ptr [rax+70h]
          }
          _RAX += 16;
          __asm
          {
            vmovups ymmword ptr [rcx-80h], ymm0
            vmovups ymm0, ymmword ptr [rax-60h]
            vmovups ymmword ptr [rcx-60h], ymm0
            vmovups ymm0, ymmword ptr [rax-40h]
            vmovups ymmword ptr [rcx-40h], ymm0
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rcx-20h], xmm0
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          --v36;
        }
        while ( v36 );
        __asm { vmovups xmm0, xmmword ptr [rax] }
        v44 = _RAX[2];
        __asm { vmovups xmmword ptr [rcx], xmm0 }
        *(_QWORD *)&_RCX->gameIndex = v44;
        s_lobbyLastKeepAlive = Sys_Milliseconds();
        receivingUserId.m_id = s_hostInfo.xuid.m_id;
        v45 = XUID::ToDevString(&receivingUserId);
        Com_Printf(25, "GAMEBATTLES(%i): Lobby state message received. Host xuid: (%s).\n", (unsigned int)controllerIndex, v45);
        MLGLobby_DumpInternalState();
      }
    }
  }
  else
  {
    XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID);
    v46 = Live_GetXuid(&v52, controllerIndex);
    if ( XUID::operator==(&result, v46) )
    {
      XUID::FromUniversalId(&receivingUserId, senderId);
      result.m_id = 0i64;
      if ( messageSize != 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3618, ASSERT_TYPE_ASSERT, "(messageSize == sizeof( PlatformUserId ))", (const char *)&queryFormat, "messageSize == sizeof( PlatformUserId )", result.m_id) )
        __debugbreak();
      __asm
      {
        vmovsd  xmm0, qword ptr [rbx]
        vmovsd  [rsp+2B0h+result.m_id], xmm0
      }
      MLGLobby_SetMemberOnlineState(controllerIndex, result.m_id, &receivingUserId, 1);
      MLGLobbyMsg_SendLobbyStateUpdate(controllerIndex, &receivingUserId);
      v48 = DB_HASH_INTERNAL("MLGLobbyMsg_HandleLobbyUpdateRequest", 1ui64, 0x2F63E04C8601F358ui64);
      v49 = j_va("m %zu h", v48);
      GameBattles_TraceState(controllerIndex, v49, NULL);
    }
    else
    {
      Com_Printf(25, "GAMEBATTLES(%i): Ignoring stray host info request message from (%zu), as we are not the host.\n", (unsigned int)controllerIndex, senderId);
    }
  }
  return 1;
}

/*
==============
GameBattles_HostInitializeMatch
==============
*/
void GameBattles_HostInitializeMatch(unsigned int expectedMatchId)
{
  PartyData *PartyData; 

  Com_Printf(131097, "GAMEBATTLES: Setting matchId to (%u).\n", expectedMatchId);
  s_currentMatchId = expectedMatchId;
  if ( Lobby_AreWeHost() )
  {
    PartyData = Lobby_GetPartyData();
    PartyHost_SetGameBattlesMatchId(PartyData, expectedMatchId);
  }
}

/*
==============
GameBattles_InChatChannel
==============
*/
bool GameBattles_InChatChannel()
{
  return s_activeChatChannel.m_channelID != 0;
}

/*
==============
GameBattles_Init
==============
*/
void GameBattles_Init(void)
{
  Cmd_AddCommandInternal("gamebattle_set_matchid", Dev_SetMatchId_f, &Dev_SetMatchId_f_VAR);
  Cmd_AddCommandInternal("gamebattle_startmatch", Dev_ForceStartMatch_f, &Dev_ForceStartMatch_f_VAR);
  Cmd_AddCommandInternal("gamebattle_refresh_account", Dev_RefreshAccount_f, &Dev_RefreshAccount_f_VAR);
  Cmd_AddCommandInternal("gamebattle_refresh_schedule", Dev_RefreshSchedule_f, &Dev_RefreshSchedule_f_VAR);
  Cmd_AddCommandInternal("gamebattle_check_lobby", Dev_CheckLobby_f, &Dev_CheckLobby_f_VAR);
  Cmd_AddCommandInternal("gamebattle_join_lobby", Dev_CreateOrJoinLobby_f, &Dev_CreateOrJoinLobby_f_VAR);
  Cmd_AddCommandInternal("gamebattle_leave_lobby", Dev_LeaveLobby_f, &Dev_LeaveLobby_f_VAR);
  Cmd_AddCommandInternal("gamebattle_get_matchhistory", Dev_GetMatchHistory_f, &Dev_GetMatchHistory_f_VAR);
  Cmd_AddCommandInternal("gamebattle_noshow_report", Dev_NoShowMatchReport_f, &Dev_NoShowMatchReport_f_VAR);
  s_rawDataOwner = -1;
  s_rawDataUsage = UNUSED;
}

/*
==============
GameBattles_IsGameBattleActive
==============
*/
bool GameBattles_IsGameBattleActive()
{
  return s_currentMatchId != 0;
}

/*
==============
GameBattles_IsInGameBattleGameMode
==============
*/
bool GameBattles_IsInGameBattleGameMode()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_mlg_gamebattles_match;
  if ( !DVARBOOL_mlg_gamebattles_match )
    return 0;
  Dvar_CheckFrontendServerThread(DVARBOOL_mlg_gamebattles_match);
  return v0->current.enabled;
}

/*
==============
GameBattles_IsPlayerInCurrentMatch
==============
*/
bool GameBattles_IsPlayerInCurrentMatch(const int controllerIndex, const XUID *playerXuid)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  if ( !s_currentMatchId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3484, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
      __debugbreak();
    if ( !s_currentMatchId )
      return 1;
  }
  if ( GameBattles_GetScheduleState(controllerIndex) != HAS_ACCOUNT )
    return 1;
  ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
  v5 = s_currentMatchId;
  v6 = 0;
  v7 = ScheduleMatchCount;
  if ( !ScheduleMatchCount )
    return 1;
  while ( v5 != GetMatch(controllerIndex, v6)->matchId )
  {
    if ( ++v6 >= v7 )
      return 1;
  }
  return v6 == -1 || MLGLobby_FindMemberByXUID(playerXuid) != -1;
}

/*
==============
GameBattles_IsPlayerWhitelisted
==============
*/
bool GameBattles_IsPlayerWhitelisted(const XUID *playerXuid)
{
  int v1; 
  int RowCount; 
  int v4; 
  XUID *v5; 
  const char *ColumnValueForRow; 
  const XUID *v7; 
  StringTable *tablePtr; 
  XUID result; 

  v1 = 0;
  if ( !s_whitelistTableLoaded )
  {
    StringTable_GetAsset("mp/gamebattleswhitelist.csv", (const StringTable **)&tablePtr);
    RowCount = StringTable_GetRowCount(tablePtr);
    if ( RowCount > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 513, ASSERT_TYPE_ASSERT, "(rowCount <= 64)", "%s\n\tToo many XUIDs have been added to gamebattleswhitelist.csv", "rowCount <= GAMEBATTLES_MAX_WHITELISTED_XUIDS") )
      __debugbreak();
    v4 = 0;
    if ( RowCount > 0 )
    {
      v5 = s_whitelistedXUIDs;
      do
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v4, 0);
        v7 = XUID::FromString(&result, ColumnValueForRow);
        XUID::operator=(v5, v7);
        ++s_whitelistedXUIDcount;
        ++v4;
        ++v5;
      }
      while ( v4 < RowCount );
    }
    s_whitelistTableLoaded = 1;
  }
  if ( s_whitelistedXUIDcount > 0 )
  {
    do
    {
      if ( XUID::operator==((XUID *)playerXuid, &s_whitelistedXUIDs[v1]) )
        break;
      ++v1;
    }
    while ( v1 < s_whitelistedXUIDcount );
  }
  return 0;
}

/*
==============
GameBattles_IsScreenDebugEnabled
==============
*/
__int64 GameBattles_IsScreenDebugEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_gamebattle_debug_draw;
  if ( !DVARBOOL_gamebattle_debug_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_debug_draw") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
GameBattles_IsValidMatchId
==============
*/
bool GameBattles_IsValidMatchId(const unsigned int matchId)
{
  return matchId != 0;
}

/*
==============
GameBattles_JoinChannel
==============
*/
void GameBattles_JoinChannel(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v5; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  s_matchJoinState[v1] = INITIALIZING;
  s_lastJoinMatchAttemptTime = Sys_Milliseconds();
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = v1;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 7;
  StartAsyncTask(v1, PTRDIFF);
  if ( !s_currentMatchId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 945, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
    __debugbreak();
  v2 = s_currentMatchId;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, v1);
  v5 = (TaskCreateRequest *)DWMessaging::createChatChannelWithID(Messaging, &result, "gamebattles", (unsigned int)v2, &s_createChannelResponse);
  if ( v5 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v6 = *(bdRemoteTask **)&v5->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Starting join match channel task with channelId (%zu).\n", (unsigned int)v1, v2);
  }
  else
  {
    Com_PrintError(25, "GAMEBATTLES(%i): Starting join match channel failed.\n", (unsigned int)v1);
    HandleTaskFailed(v1, NULL);
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

/*
==============
GameBattles_JoinMatchLobby
==============
*/
__int64 GameBattles_JoinMatchLobby(const int controllerIndex)
{
  __int64 v1; 
  __int64 result; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  int integer; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v10; 
  int v11; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v11 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3313, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v11) )
      __debugbreak();
  }
  if ( s_currentMatchId )
  {
    v3 = Sys_Milliseconds();
    v4 = DVARINT_gamebattle_join_match_interval;
    v5 = (v3 - s_lastJoinMatchAttemptTime) / 1000;
    if ( !DVARINT_gamebattle_join_match_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_join_match_interval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    integer = v4->current.integer;
    if ( v5 >= integer )
    {
      SetMatchJoinState(v1, IDLE);
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v10) = 8;
        LODWORD(v8) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3330, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestJoinMatch ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestJoinMatch )\n\t%i not in [0, %i)", v8, v10) )
          __debugbreak();
      }
      result = 0i64;
      s_requestJoinMatch[v1] = 1;
    }
    else
    {
      v7 = integer - v5;
      Com_Printf(25, "GAMEBATTLES(%i): Ignoring create or join match lobby call as we are still within cooldown window.  %i seconds remainding.\n", (unsigned int)v1, v7);
      return v7;
    }
  }
  else
  {
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring join match lobby call as we do not have an active game battle set.\n", (unsigned int)v1);
    return 0xFFFFFFFFi64;
  }
  return result;
}

/*
==============
GameBattles_LeaveChannel
==============
*/
void GameBattles_LeaveChannel(const int controllerIndex)
{
  __int64 v1; 
  unsigned __int64 v2; 
  const char *v3; 
  unsigned __int64 m_channelID; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v7; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v11; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( !s_activeChatChannel.m_channelID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2554, ASSERT_TYPE_ASSERT, "(GameBattles_InChatChannel())", (const char *)&queryFormat, "GameBattles_InChatChannel()") )
    __debugbreak();
  v2 = DB_HASH_INTERNAL("GameBattles_LeaveChannel", 1ui64, 0x2F63DA4C8601E926ui64);
  v3 = j_va("a %zu lc", v2);
  GameBattles_TraceState(v1, v3, NULL);
  m_channelID = s_activeChatChannel.m_channelID;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v11, 8) )
      __debugbreak();
  }
  s_matchJoinState[v1] = IDLE;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = v1;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 8;
  StartAsyncTask(v1, LONG_DOUBLE);
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, v1);
  v7 = (TaskCreateRequest *)DWMessaging::unsubscribeFromChannel(Messaging, &result, "gamebattles", m_channelID);
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
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v9 = TaskManager::GetInstance(), TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Starting leave match channel task with channelId (%zu).\n", (unsigned int)v1, m_channelID);
  }
  else
  {
    Com_PrintError(25, "GAMEBATTLES(%i): Starting leave match channel failed.\n", (unsigned int)v1);
    HandleTaskFailed(v1, NULL);
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

/*
==============
GameBattles_LeaveMatchLobby
==============
*/
__int64 GameBattles_LeaveMatchLobby(const int __formal)
{
  s_requestLeaveMatchLobby = 1;
  return 0i64;
}

/*
==============
GameBattles_ListScheduledMatches
==============
*/
void GameBattles_ListScheduledMatches(const int controllerIndex)
{
  unsigned __int64 v1; 
  __int64 v2; 
  DWServicesAccess *Instance; 
  DWMatchScheduler *MatchScheduler; 
  TaskCreateRequest *v5; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v9; 
  __int64 v10; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2439, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  GameBattles_ResetSchedule(v1);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  s_schedule[v1].state = RETRIEVING;
  AcquireRawDataOwnership(v1, MATCH_META_DATA);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  s_schedule[v1].lastFetchTime = Sys_Milliseconds();
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v10) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2446, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestScheduleRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestScheduleRefresh )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( v1 >= 8 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x140B90BC8i64);
  }
  s_requestScheduleRefresh[v1] = 0;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = v1;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 3;
  StartAsyncTask(v1, LONG);
  Instance = DWServicesAccess::GetInstance();
  MatchScheduler = DWServicesAccess::GetMatchScheduler(Instance, v1);
  v5 = (TaskCreateRequest *)DWMatchScheduler::listScheduledMatches(MatchScheduler, &result, s_scheduledMatchData, 0xAu);
  if ( v5 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v6 = *(bdRemoteTask **)&v5->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Starting retrieval of scheduled matches.\n", (unsigned int)v1);
  }
  else
  {
    Com_PrintError(25, "GAMEBATTLES(%i): Retrieval failed for scheduled matches.\n", (unsigned int)v1);
    HandleTaskFailed(v1, NULL);
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

/*
==============
GameBattles_LoadGameRules
==============
*/
void GameBattles_LoadGameRules(const int controllerIndex)
{
  unsigned int CurrentMatchIndex; 
  const char *v3; 
  GameBattleMapMapping *v4; 
  GameBattleMatch *Match; 
  int id; 
  GameBattleMap *p_mapIndex; 
  unsigned int v8; 
  unsigned int v9; 
  GameBattleMatch *v10; 
  unsigned int v11; 
  GameBattleMatch *v12; 
  GameBattleRecipePreset recipePreset; 
  const char *v14; 
  LocalClientNum_t ClientFromController; 
  unsigned __int8 ActiveGameMode; 
  char *fmt; 
  char dest[32]; 

  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( CurrentMatchIndex == -1 )
  {
    v3 = NULL;
    v4 = NULL;
  }
  else
  {
    Match = GetMatch(controllerIndex, CurrentMatchIndex);
    if ( !Match && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4679, ASSERT_TYPE_ASSERT, "(match)", (const char *)&queryFormat, "match") )
      __debugbreak();
    id = Match->games[s_activeGameIndex].map.id;
    if ( !s_mlgGameMappingLoaded )
      LoadMLGMapping();
    v3 = NULL;
    p_mapIndex = &mapNameMap[0].mapIndex;
    v8 = 0;
    while ( id != p_mapIndex->id )
    {
      ++v8;
      p_mapIndex += 10;
      if ( v8 >= 0x40 )
      {
        v4 = (GameBattleMapMapping *)((char *)&queryFormat.fmt + 3);
        goto LABEL_13;
      }
    }
    v4 = &mapNameMap[v8];
  }
LABEL_13:
  v9 = GameBattles_GetCurrentMatchIndex(controllerIndex);
  if ( v9 != -1 )
  {
    v10 = GetMatch(controllerIndex, v9);
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4694, ASSERT_TYPE_ASSERT, "(match)", (const char *)&queryFormat, "match") )
      __debugbreak();
    v3 = MapGameBattleGametypeToString(v10->games[s_activeGameIndex].gametype);
  }
  if ( v4 && v3 )
  {
    Dvar_SetString_Internal(DVARSTR_ui_mapname, v4->mapString);
    Dvar_SetString_Internal(DVARSTR_ui_gametype, v3);
    v11 = GameBattles_GetCurrentMatchIndex(controllerIndex);
    if ( v11 != -1 )
    {
      v12 = GetMatch(controllerIndex, v11);
      recipePreset = v12->recipePreset;
      v14 = MapGameBattleGametypeToString(v12->games[s_activeGameIndex].gametype);
      if ( recipePreset == RECIPE_CWL )
      {
        Com_sprintf(dest, 0x1Eui64, "mlg_%s", v14);
      }
      else if ( recipePreset )
      {
        LODWORD(fmt) = recipePreset;
        Com_sprintf(dest, 0x1Eui64, "gb_%s_%d", v14, fmt);
      }
      else
      {
        Com_sprintf(dest, 0x1Eui64, (const char *)&queryFormat, v14);
      }
    }
    BG_GameStateInfo_LoadRecipe(dest);
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    Com_ExecLobbyDefaultConfigs(ClientFromController, controllerIndex, (GameModeType)ActiveGameMode);
    OnlineMatchmakerOmniscient::ApplyDvarOverrides(&OnlineMatchmakerOmniscient::ms_instance);
  }
}

/*
==============
GameBattles_NotifyMatchEnded
==============
*/
void GameBattles_NotifyMatchEnded(const int __formal)
{
  unsigned int TimeAsSeconds; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned __int8 *p_inGame; 
  unsigned __int8 *v5; 

  if ( s_lobbyInfo.inGame )
  {
    s_lobbyInfo.lastResultIndex = s_lobbyInfo.gameIndex;
    s_lobbyInfo.inGame = 0;
    TimeAsSeconds = Sys_GetTimeAsSeconds();
    v2 = 0;
    s_lobbyInfo.intermissionStartEpochTime = TimeAsSeconds;
    v3 = 0;
    p_inGame = &s_lobbyInfo.members[1].inGame;
    do
    {
      *(_WORD *)(p_inGame - 33) = 0;
      v3 += 12;
      *(_WORD *)(p_inGame - 1) = 0;
      *(_WORD *)(p_inGame + 31) = 0;
      *(_WORD *)(p_inGame + 63) = 0;
      *(_WORD *)(p_inGame + 95) = 0;
      *(_WORD *)(p_inGame + 127) = 0;
      *(_WORD *)(p_inGame + 159) = 0;
      *(_WORD *)(p_inGame + 191) = 0;
      *(_WORD *)(p_inGame + 223) = 0;
      *(_WORD *)(p_inGame + 255) = 0;
      *(_WORD *)(p_inGame + 287) = 0;
      *(_WORD *)(p_inGame + 319) = 0;
      p_inGame += 384;
    }
    while ( v3 < 0xC );
    *(_QWORD *)s_partyLocalCommitReady = 0i64;
    v5 = &s_lobbyInfo.members[2].inGame;
    do
    {
      *(v5 - 64) = 0;
      v2 += 12;
      *(v5 - 32) = 0;
      *v5 = 0;
      v5[32] = 0;
      v5[64] = 0;
      v5[96] = 0;
      v5[128] = 0;
      v5[160] = 0;
      v5[192] = 0;
      v5[224] = 0;
      v5[256] = 0;
      v5[288] = 0;
      v5 += 384;
    }
    while ( v2 < 0xC );
  }
}

/*
==============
GameBattles_NotifyMatchStarted
==============
*/
void GameBattles_NotifyMatchStarted(const int controllerIndex)
{
  unsigned __int8 *p_inGame; 
  unsigned int i; 
  bool v4; 
  int v5; 
  int v6; 

  s_lobbyInfo.inGame = 1;
  s_lobbyInfo.gameIndex = truncate_cast<unsigned char,unsigned int>(s_activeGameIndex);
  s_lobbyInfo.intermissionStartEpochTime = 0;
  p_inGame = &s_lobbyInfo.members[1].inGame;
  for ( i = 0; i < 0xC; i += 12 )
  {
    v4 = *(p_inGame - 34) == 0;
    p_inGame += 384;
    *(p_inGame - 416) = !v4;
    *(p_inGame - 384) = *(p_inGame - 386) != 0;
    *(p_inGame - 352) = *(p_inGame - 354) != 0;
    *(p_inGame - 320) = *(p_inGame - 322) != 0;
    *(p_inGame - 288) = *(p_inGame - 290) != 0;
    *(p_inGame - 256) = *(p_inGame - 258) != 0;
    *(p_inGame - 224) = *(p_inGame - 226) != 0;
    *(p_inGame - 192) = *(p_inGame - 194) != 0;
    *(p_inGame - 160) = *(p_inGame - 162) != 0;
    *(p_inGame - 128) = *(p_inGame - 130) != 0;
    *(p_inGame - 96) = *(p_inGame - 98) != 0;
    *(p_inGame - 64) = *(p_inGame - 66) != 0;
  }
  if ( !s_lobbyInfo.matchStartTimestamp )
    s_lobbyInfo.matchStartTimestamp = Sys_Milliseconds();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    v5 = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 824, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  s_matchReportState = IDLE;
}

/*
==============
GameBattles_OnNavigationComplete
==============
*/
void GameBattles_OnNavigationComplete(void)
{
  ;
}

/*
==============
GameBattles_OnStartMatch
==============
*/
void GameBattles_OnStartMatch(const int controllerIndex)
{
  unsigned __int64 v2; 
  const char *v3; 

  s_requestStartMatch = 1;
  v2 = DB_HASH_INTERNAL("GameBattles_OnStartMatch", 1ui64, 0x2F63DA4C8601E926ui64);
  v3 = j_va("a %zu s", v2);
  GameBattles_TraceState(controllerIndex, v3, NULL);
}

/*
==============
GameBattles_PushMatchToLUI
==============
*/
char GameBattles_PushMatchToLUI(lua_State *luaVM, const int controllerIndex, const unsigned int matchIndex)
{
  __int64 v3; 
  GameBattleScheduleState ScheduleState; 
  GameBattleMatch *Match; 
  lua_State *v9; 
  const char *v10; 
  lua_State *v11; 
  GameBattleMatch *v12; 
  const char *v13; 
  lua_State *v14; 
  const char *v15; 
  unsigned int v16; 
  __int64 v17; 
  GameBattleTeam *v18; 
  unsigned int i; 
  __int64 v20; 
  __int64 v21; 
  lua_State *v22; 
  const char *v23; 
  lua_State *v24; 
  int v25; 
  unsigned int v26; 
  GameBattleMap *p_mapIndex; 
  GameBattleMapMapping *v28; 
  char v29; 
  __int64 v30; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3401, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    LODWORD(v33) = 8;
    LODWORD(v32) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  if ( s_schedule[v3].state == HAS_ACCOUNT )
  {
    if ( GameBattles_GetScheduleMatchCount(v3) > matchIndex )
    {
      Match = GetMatch(v3, matchIndex);
      j_lua_createtable(luaVM, 0, 0);
      v9 = LUI_luaVM;
      v10 = j_va("%i", Match->matchId);
      LUI_SetTableString("matchId", v10, v9);
      v11 = LUI_luaVM;
      v12 = GetMatch(v3, matchIndex);
      v13 = j_va("%u", v12->matchTimeUTC);
      LUI_SetTableString("matchTime", v13, v11);
      v14 = LUI_luaVM;
      v15 = j_va("%i", s_lobbyInfo.intermissionStartEpochTime);
      LUI_SetTableString("intermissionStartEpochTime", v15, v14);
      LUI_SetTableInt("teamCount", Match->teamCount, LUI_luaVM);
      LUI_SetTableInt("gameCount", Match->gameCount, LUI_luaVM);
      LUI_SetTableInt("totalPlayerCount", Match->totalPlayerCount, LUI_luaVM);
      LUI_SetTableInt("gameStarted", 0i64, LUI_luaVM);
      LUI_SetTableInt("recipePreset", (unsigned int)Match->recipePreset, LUI_luaVM);
      LUI_SetTableInt("inputType", (unsigned __int8)Match->inputType[0], LUI_luaVM);
      s_luiMatchId = Match->matchId;
      s_luiMatchIndex = matchIndex;
      LUI_BeginTable("teams", LUI_luaVM);
      v16 = 0;
      while ( v16 < Match->teamCount )
      {
        v17 = v16++;
        v18 = &Match->teams[v17];
        LUI_BeginTable(v16, LUI_luaVM);
        LUI_SetTableString("teamName", v18->teamName, LUI_luaVM);
        LUI_SetTableInt("teamId", v18->teamId, LUI_luaVM);
        LUI_SetTableInt("playerCount", v18->playerCount, LUI_luaVM);
        LUI_BeginTable("players", LUI_luaVM);
        for ( i = 0; i < v18->playerCount; ++i )
        {
          LUI_BeginTable(i + 1, LUI_luaVM);
          LUI_SetTableString((const char *)&stru_143C9A1A4, v18->players[i].gamertag, LUI_luaVM);
          LUI_EndTable(LUI_luaVM);
        }
        LUI_EndTable(LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
      }
      LUI_EndTable(LUI_luaVM);
      LUI_BeginTable("games", LUI_luaVM);
      v20 = 0i64;
      while ( (unsigned int)v20 < Match->gameCount )
      {
        v21 = (__int64)&Match->games[v20];
        v20 = (unsigned int)(v20 + 1);
        LUI_BeginTable((unsigned int)v20, LUI_luaVM);
        v22 = LUI_luaVM;
        v23 = MapGameBattleGametypeToString(*(const GameBattleGametype *)v21);
        LUI_SetTableString("gametype", v23, v22);
        v24 = LUI_luaVM;
        v25 = *(_DWORD *)(v21 + 4);
        if ( !s_mlgGameMappingLoaded )
          LoadMLGMapping();
        v26 = 0;
        p_mapIndex = &mapNameMap[0].mapIndex;
        while ( v25 != p_mapIndex->id )
        {
          ++v26;
          p_mapIndex += 10;
          if ( v26 >= 0x40 )
          {
            v28 = (GameBattleMapMapping *)((char *)&queryFormat.fmt + 3);
            goto LABEL_22;
          }
        }
        v28 = &mapNameMap[v26];
LABEL_22:
        LUI_SetTableString("map", v28->mapString, v24);
        v29 = *(_BYTE *)(v21 + 16);
        if ( (v29 & 1) != 0 )
        {
          if ( (v29 & 4) != 0 )
            v30 = 3i64;
          else
            v30 = 2i64 - ((v29 & 2) != 0);
        }
        else
        {
          v30 = 0i64;
        }
        LUI_SetTableInt("status", v30, LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
      }
      LUI_EndTable(LUI_luaVM);
      return 1;
    }
    else
    {
      LODWORD(fmt) = GameBattles_GetScheduleMatchCount(v3);
      Com_PrintError(25, "GAMEBATTLES(%i): LUI attempting to get matchindex %i, but there are only %i pending matches in the players schedule.\n", (unsigned int)v3, matchIndex, fmt);
      return 0;
    }
  }
  else
  {
    ScheduleState = GameBattles_GetScheduleState(v3);
    Com_PrintError(25, "GAMEBATTLES(%i): LUI attempting to get match before players pending match schedule has been retrieved.  Current schedule retrieval state is %i.\n", (unsigned int)v3, (unsigned int)ScheduleState);
    return 0;
  }
}

/*
==============
GameBattles_PushPartyMembersToModel
==============
*/
void GameBattles_PushPartyMembersToModel(const PartyData *partyData, const unsigned __int16 baseModel, int *partyMemberOrder, int *teamCount)
{
  int *v4; 
  unsigned __int16 v5; 
  int ControllerFromClient; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  int v9; 
  int *v28; 
  int *v29; 
  __int64 v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  int *v34; 
  __int64 v35; 
  int v36; 
  int v37; 
  __int64 v38; 
  int *v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  unsigned __int64 *p_platformId; 
  int v46; 
  int v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  unsigned int v51; 
  __int64 i; 
  unsigned __int16 ModelFromPath; 
  __int64 v54; 
  unsigned __int16 v55; 
  int v56; 
  GameBattlePlayer *v57; 
  unsigned __int64 *v58; 
  int v59; 
  __int64 v60; 
  unsigned __int16 v61; 
  int *MatchById; 
  int v64; 
  int v66; 
  __int64 v67; 
  int *v68; 
  __int64 v69; 
  int v71[200]; 
  GameBattlePlayer *currentPlayer[200]; 
  char dest[8]; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 

  v4 = partyMemberOrder;
  v5 = baseModel;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  MatchById = (int *)GetMatchById(ControllerFromClient, s_currentMatchId);
  if ( MatchById )
  {
    __asm { vmovdqu xmm2, cs:__xmm@00000003000000020000000100000000 }
    _R8 = v4 + 8;
    _ECX = 0;
    _EDX = 8;
    do
    {
      _EAX = _EDX - 4;
      __asm
      {
        vmovd   xmm0, ecx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8-20h], xmm1
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8-10h], xmm1
        vmovd   xmm0, edx
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
        vmovdqu xmmword ptr [r8], xmm1
      }
      _EAX = _EDX + 4;
      _ECX += 16;
      __asm
      {
        vmovd   xmm0, eax
        vpshufd xmm0, xmm0, 0
        vpaddd  xmm1, xmm0, xmm2
      }
      _EDX += 16;
      __asm { vmovdqu xmmword ptr [r8+10h], xmm1 }
      _R8 += 16;
    }
    while ( _EDX < 200 );
    if ( _ECX < 200 )
    {
      v28 = &v4[_ECX];
      do
        *v28++ = _ECX++;
      while ( _ECX < 200 );
    }
    memset_0(currentPlayer, 0, sizeof(currentPlayer));
    memset_0(v71, 0, sizeof(v71));
    v29 = MatchById;
    v30 = MatchById[266];
    v66 = 6 * v30;
    if ( MatchById[323] > 6 * (int)v30 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4506, ASSERT_TYPE_ASSERT, "(int( gbMatch->totalPlayerCount ) <= maxPlayers)", (const char *)&queryFormat, "int( gbMatch->totalPlayerCount ) <= maxPlayers") )
        __debugbreak();
      v29 = MatchById;
    }
    v31 = 0;
    v64 = 0;
    v32 = 0;
    v69 = v30;
    v33 = v30;
    if ( (int)v30 > 0 )
    {
      v34 = v29 + 132;
      v35 = 0i64;
      v68 = v29 + 132;
      do
      {
        v36 = *v34;
        v37 = 0;
        if ( *v34 > 0 )
        {
          v38 = v31;
          v39 = &v4[v35];
          v67 = v31;
          v40 = 0i64;
          do
          {
            if ( v35 >= 200 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4515, ASSERT_TYPE_ASSERT, "(curPlayer < 200)", (const char *)&queryFormat, "curPlayer < MAX_PARTY_MEMBERS") )
                __debugbreak();
              v29 = MatchById;
              v31 = v64;
              v38 = v67;
            }
            v41 = -1;
            v42 = -1i64;
            if ( v37 < v36 )
            {
              v42 = 0i64;
              v43 = v40 + 528i64 * v32;
              *(int *)((char *)v39 + (char *)v71 - (char *)partyMemberOrder) = v32 + 1;
              v44 = *(_QWORD *)((char *)v29 + v43 + 56);
              currentPlayer[v35] = (GameBattlePlayer *)((char *)v29 + v43 + 48);
              p_platformId = &s_lobbyInfo.members[0].platformId;
              v41 = 0;
              while ( *p_platformId != v44 )
              {
                ++v41;
                ++v42;
                p_platformId += 4;
                if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
                {
                  v41 = -1;
                  v42 = -1i64;
                  break;
                }
              }
            }
            v46 = *v39;
            if ( v41 != *v39 )
            {
              v47 = v31;
              if ( v41 != -1 )
                v47 = v41;
              *v39 = v47;
              v48 = v38;
              if ( v41 != -1 )
                v48 = v42;
              partyMemberOrder[v48] = v46;
              v49 = v31 + 1;
              if ( v41 != -1 )
                v49 = v31;
              v31 = v49;
              v64 = v49;
              v50 = v38 + 1;
              if ( v41 != -1 )
                v50 = v38;
              v38 = v50;
              v67 = v50;
            }
            v29 = MatchById;
            ++v35;
            ++v39;
            ++v37;
            v40 += 80i64;
          }
          while ( v37 < v36 );
          v34 = v68;
          v33 = v69;
          v4 = partyMemberOrder;
        }
        v34 += 132;
        ++v32;
        v68 = v34;
        v69 = --v33;
      }
      while ( v33 );
      v5 = baseModel;
    }
    v51 = 0;
    if ( v66 > 0 )
    {
      for ( i = 0i64; i < v66; ++i )
      {
        *(_QWORD *)dest = 0i64;
        v74 = 0i64;
        v75 = 0i64;
        v76 = 0i64;
        v77 = 0i64;
        v78 = 0i64;
        v79 = 0i64;
        v80 = 0i64;
        Com_sprintf(dest, 0x40ui64, "%i", v51);
        ModelFromPath = LUI_Model_CreateModelFromPath(v5, dest);
        v54 = v71[i];
        v55 = ModelFromPath;
        v56 = v4[i];
        if ( (_DWORD)v54 )
        {
          v57 = currentPlayer[i];
          v58 = &s_lobbyInfo.members[0].platformId;
          v59 = 0;
          v60 = 0i64;
          while ( *v58 != v57->platformId )
          {
            ++v59;
            ++v60;
            v58 += 4;
            if ( (__int64)v58 >= (__int64)&s_hostInfo )
              goto LABEL_45;
          }
          if ( v59 == -1 || XUID::IsNull(&s_lobbyInfo.members[v59].xuid) || !s_lobbyInfo.members[v60].isOnline )
          {
LABEL_45:
            GameBattles_CreateFakePlayer(v57, (team_t)v54, v56, v55);
            goto LABEL_46;
          }
          GameBattles_CreateChannelPlayerModel(v57, (team_t)v54, v56, v55);
          ++teamCount[v54];
LABEL_46:
          v4 = partyMemberOrder;
        }
        v5 = baseModel;
        ++v51;
      }
    }
    v61 = LUI_Model_CreateModelFromPath(baseModel, "GameBattlesTeamRosterAxisCount");
    LUI_Model_SetInt(v61, MatchById[132]);
    v8 = LUI_Model_CreateModelFromPath(baseModel, "GameBattlesTeamRosterAlliesCount");
    v9 = MatchById[264];
  }
  else
  {
    v7 = LUI_Model_CreateModelFromPath(v5, "GameBattlesTeamRosterAxisCount");
    LUI_Model_SetInt(v7, 0);
    v8 = LUI_Model_CreateModelFromPath(v5, "GameBattlesTeamRosterAlliesCount");
    v9 = 0;
  }
  LUI_Model_SetInt(v8, v9);
}

/*
==============
GameBattles_RefreshAccount
==============
*/
__int64 GameBattles_RefreshAccount(const int controllerIndex)
{
  __int64 v1; 
  int v2; 
  const dvar_t *v3; 
  int v4; 
  int integer; 
  unsigned int v6; 
  bool v8; 
  __int64 v9; 
  __int64 v11; 
  int v12; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3200, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v12) )
      __debugbreak();
  }
  v2 = Sys_Milliseconds();
  v3 = DVARINT_gamebattle_account_refresh_interval;
  v4 = (v2 - s_lastAccountRefreshTime) / 1000;
  if ( !DVARINT_gamebattle_account_refresh_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_account_refresh_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  if ( v4 >= integer )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    s_accountState[v1] = UNAVAILABLE;
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3211, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestAccountRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestAccountRefresh )\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    v8 = s_currentMatchId == 0;
    s_requestAccountRefresh[v1] = 1;
    if ( v8 && GameBattles_GetScheduleState(v1) == HAS_ACCOUNT )
      GameBattles_ResetSchedule(v1);
    if ( GameBattles_GetScheduleState(v1) == UNAVAILABLE )
    {
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v11) = 8;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3223, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestScheduleRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestScheduleRefresh )\n\t%i not in [0, %i)", v9, v11) )
          __debugbreak();
      }
      s_requestScheduleRefresh[v1] = 1;
    }
    return 0i64;
  }
  else
  {
    v6 = integer - v4;
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring refresh account call as we are still within cooldown window.  %i seconds remainding.\n", (unsigned int)v1, v6);
    return v6;
  }
}

/*
==============
GameBattles_RefreshMatchHistory
==============
*/
__int64 GameBattles_RefreshMatchHistory(const int controllerIndex, const unsigned int matchId)
{
  __int64 v2; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  int v8; 
  const dvar_t *v9; 
  int v10; 
  int integer; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  unsigned int v16; 
  int Int_Internal_DebugName; 
  unsigned int v18; 
  char *fmt; 
  __int64 v20; 
  __int64 v22; 
  int v23; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v23 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3358, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v23) )
      __debugbreak();
  }
  if ( s_requestMatchHistory[v2] )
    return 0xFFFFFFFFi64;
  if ( s_currentMatchHistoryRetrievalId )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring get match history call as we're processing one.\n", (unsigned int)v2);
    return 0xFFFFFFFFi64;
  }
  if ( GameBattles_GetScheduleState(v2) != HAS_ACCOUNT )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring get match history call as we have not recieved our schedule yet.  Match history currently relies on an available match schedule.\n", (unsigned int)v2);
    return 0xFFFFFFFFi64;
  }
  if ( !GetMatchById(v2, matchId) )
  {
    Com_PrintError(25, "GAMEBATTLES(%i): RefreshMatchHistory called with matchId (%u) that is not in schedule.\n", (unsigned int)v2, matchId);
    return 0xFFFFFFFFi64;
  }
  v5 = Sys_Milliseconds();
  v6 = DVARINT_gamebattle_get_match_history_interval;
  v7 = v5;
  if ( !DVARINT_gamebattle_get_match_history_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_get_match_history_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v8 = 1000 * v6->current.integer;
  v9 = DVARINT_gamebattle_get_match_history_max_calls;
  if ( !DVARINT_gamebattle_get_match_history_max_calls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_get_match_history_max_calls") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = 110;
  integer = 110;
  if ( v9->current.integer < 110 )
    integer = v9->current.integer;
  v12 = 0;
  if ( integer )
    v10 = integer;
  v13 = v10;
  if ( v10 <= 0 )
  {
LABEL_30:
    v16 = (v8 + v12 - v7) / 1000;
    if ( v16 )
    {
      Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_gamebattle_get_match_history_interval, "gamebattle_get_match_history_interval");
      v18 = Dvar_GetInt_Internal_DebugName(DVARINT_gamebattle_get_match_history_max_calls, "gamebattle_get_match_history_max_calls");
      LODWORD(v20) = v16;
      LODWORD(fmt) = Int_Internal_DebugName;
      Com_Printf(25, "GAMEBATTLES(%i): Ignoring get match history call as too many calls have been made recently.  %u calls have been made in %u seconds, please wait at least %u seconds .\n", (unsigned int)v2, v18, fmt, v20);
      return v16;
    }
  }
  else
  {
    v14 = 0i64;
    while ( 1 )
    {
      v15 = s_matchHistoryRequestTimes[v14];
      if ( !v15 || v7 - v15 > v8 )
        break;
      if ( !v12 || v15 < v12 )
        v12 = s_matchHistoryRequestTimes[v14];
      if ( ++v14 >= v13 )
        goto LABEL_30;
    }
  }
  SetMatchHistoryState(v2, matchId, UNAVAILABLE);
  s_currentMatchHistoryRetrievalId = matchId;
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v22) = 8;
    LODWORD(v20) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3393, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestMatchHistory ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestMatchHistory )\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  s_requestMatchHistory[v2] = 1;
  return 0i64;
}

/*
==============
GameBattles_RefreshSchedule
==============
*/
__int64 GameBattles_RefreshSchedule(const int controllerIndex)
{
  __int64 v1; 
  unsigned int lastFetchTime; 
  int v3; 
  const dvar_t *v4; 
  int v5; 
  int integer; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v13 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3233, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v13) )
      __debugbreak();
    LODWORD(v14) = 8;
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v11, v14) )
      __debugbreak();
  }
  lastFetchTime = s_schedule[v1].lastFetchTime;
  v3 = Sys_Milliseconds();
  v4 = DVARINT_gamebattle_schedule_refresh_interval;
  v5 = (int)(v3 - lastFetchTime) / 1000;
  if ( !DVARINT_gamebattle_schedule_refresh_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_schedule_refresh_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( lastFetchTime && (integer = v4->current.integer, v5 < integer) )
  {
    v7 = integer - v5;
    Com_Printf(25, "GAMEBATTLES(%i): Ignoring refresh schedule call as we are still within cooldown window.  %i seconds remainding.\n", (unsigned int)v1, v7);
    return v7;
  }
  else
  {
    GameBattles_ResetSchedule(v1);
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v12) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3246, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestScheduleRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestScheduleRefresh )\n\t%i not in [0, %i)", v9, v12) )
        __debugbreak();
    }
    s_requestScheduleRefresh[v1] = 1;
    return 0i64;
  }
}

/*
==============
GameBattles_ResetSchedule
==============
*/
void GameBattles_ResetSchedule(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v6 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 634, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v6) )
      __debugbreak();
    LODWORD(v7) = 8;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v4, v7) )
      __debugbreak();
  }
  memset_0(&s_schedule[v1], 0, sizeof(GameBattleSchedule));
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v5) = 8;
    LODWORD(v2) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v2, v5) )
      __debugbreak();
  }
  s_schedule[v1].state = UNAVAILABLE;
}

/*
==============
GameBattles_RetrieveMatchHistory
==============
*/
void GameBattles_RetrieveMatchHistory(const int controllerIndex, const unsigned int matchId)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  int integer; 
  int v9; 
  __int64 i; 
  int v11; 
  int v12; 
  int v13; 
  DWServicesAccess *Instance; 
  DWMatchScheduler *MatchScheduler; 
  TaskCreateRequest *matched; 
  bdRemoteTask *v17; 
  TaskManager *v18; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v20; 
  __int64 v21; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  v2 = matchId;
  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2396, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    LODWORD(v21) = 8;
    LODWORD(v20) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2397, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestMatchHistory ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestMatchHistory )\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( GetMatchById(v3, v2) )
  {
    AcquireRawDataOwnership(v3, MATCH_EVENT_DATA);
    SetMatchHistoryState(v3, v2, RETRIEVING);
    v5 = 0;
    v6 = DVARINT_gamebattle_get_match_history_max_calls;
    if ( !DVARINT_gamebattle_get_match_history_max_calls && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_get_match_history_max_calls") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v7 = 110;
    integer = 110;
    if ( v6->current.integer < 110 )
      integer = v6->current.integer;
    if ( integer )
      v7 = integer;
    v9 = 0;
    if ( v7 > 0 )
    {
      for ( i = 0i64; i < v7; ++i )
      {
        v11 = s_matchHistoryRequestTimes[i];
        if ( !v11 )
          break;
        if ( v11 < v5 )
          break;
        v5 = s_matchHistoryRequestTimes[i];
        ++v9;
      }
    }
    v12 = Sys_Milliseconds();
    v13 = 0;
    if ( v9 != v7 )
      v13 = v9;
    s_matchHistoryRequestTimes[v13] = v12;
    if ( v3 >= 8 )
    {
      j___report_rangecheckfailure(v13);
      JUMPOUT(0x140B92C9Ci64);
    }
    s_requestMatchHistory[v3] = 0;
    memset(&pTaskCreateRequest.m_appData, 0, 32);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateRequest.m_controllerIndex = v3;
    pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
    pTaskCreateRequest.m_appTaskType = 4;
    StartAsyncTask(v3, LONG_LONG);
    Instance = DWServicesAccess::GetInstance();
    MatchScheduler = DWServicesAccess::GetMatchScheduler(Instance, v3);
    matched = (TaskCreateRequest *)DWMatchScheduler::listMatchEvents(MatchScheduler, &result, v2, s_matchEventInfo, 0xBu);
    if ( matched != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v17 = *(bdRemoteTask **)&matched->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v17;
      if ( v17 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v17->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v18 = TaskManager::GetInstance(), TaskManager::CreateTask(v18, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      Com_Printf(131097, "GAMEBATTLES(%i): Starting retrieval of match events for matchId (%u).\n", (unsigned int)v3, (unsigned int)v2);
    }
    else
    {
      Com_PrintError(131097, "GAMEBATTLES(%i): Retrieval failed for match events for matchId (%u).\n", (unsigned int)v3, (unsigned int)v2);
      HandleTaskFailed(v3, NULL);
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
    Com_PrintError(131097, "GAMEBATTLES(%i): RetrieveMatchHistory called with matchId (%u) that is not in schedule.\n", (unsigned int)v3, (unsigned int)v2);
    if ( v3 >= 8 )
    {
      j___report_rangecheckfailure(v4);
      __debugbreak();
    }
    s_requestMatchHistory[v3] = 0;
  }
}

/*
==============
GameBattles_SendMatchReport
==============
*/
void GameBattles_SendMatchReport(const int controllerIndex)
{
  if ( s_currentMatchId )
  {
    CacheMatchReport(controllerIndex);
    GameBattles_UploadMatchReport(controllerIndex);
    CompleteMatchGame(controllerIndex, s_activeGameIndex, 0);
  }
  else
  {
    Com_PrintError(131097, "GAMEBATTLES(%i): Attempting to upload match report but no matchId set.\n", (unsigned int)controllerIndex);
  }
}

/*
==============
GameBattles_SendMatchReport_Internal
==============
*/
void GameBattles_SendMatchReport_Internal(const int controllerIndex)
{
  if ( s_currentMatchId )
  {
    CacheMatchReport(controllerIndex);
    GameBattles_UploadMatchReport(controllerIndex);
    CompleteMatchGame(controllerIndex, s_activeGameIndex, 0);
  }
  else
  {
    Com_PrintError(131097, "GAMEBATTLES(%i): Attempting to upload match report but no matchId set.\n", (unsigned int)controllerIndex);
  }
}

/*
==============
GameBattles_SendNoShowMatchReport
==============
*/
void GameBattles_SendNoShowMatchReport(const int controllerIndex)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_gamebattle_allow_noshowreports;
  if ( !DVARBOOL_gamebattle_allow_noshowreports && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_allow_noshowreports") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( s_currentMatchId )
    {
      CacheNoShowMatchReport(controllerIndex);
      s_requestUploadMatchReport = 1;
      CompleteMatchGame(controllerIndex, s_activeGameIndex, 1);
    }
    else
    {
      Com_PrintError(25, "GAMEBATTLES(%i): Attempting to upload no show match report but no matchId set.\n", (unsigned int)controllerIndex);
    }
  }
}

/*
==============
GameBattles_SendNoShowMatchReport_Internal
==============
*/
void GameBattles_SendNoShowMatchReport_Internal(const int controllerIndex)
{
  const dvar_t *v1; 

  v1 = DVARBOOL_gamebattle_allow_noshowreports;
  if ( !DVARBOOL_gamebattle_allow_noshowreports && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_allow_noshowreports") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( s_currentMatchId )
    {
      CacheNoShowMatchReport(controllerIndex);
      s_requestUploadMatchReport = 1;
      CompleteMatchGame(controllerIndex, s_activeGameIndex, 1);
    }
    else
    {
      Com_PrintError(25, "GAMEBATTLES(%i): Attempting to upload no show match report but no matchId set.\n", (unsigned int)controllerIndex);
    }
  }
}

/*
==============
GameBattles_SetActiveGameIndex
==============
*/
void GameBattles_SetActiveGameIndex(const unsigned int gameIndex)
{
  if ( gameIndex >= 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 599, ASSERT_TYPE_ASSERT, "(gameIndex < (11))", (const char *)&queryFormat, "gameIndex < GAMEBATTLE_MATCH_MAX_GAMES") )
    __debugbreak();
  s_activeGameIndex = gameIndex;
  s_lobbyInfo.gameIndex = truncate_cast<unsigned char,unsigned int>(gameIndex);
}

/*
==============
GameBattles_SetCompletedGameFlags
==============
*/
void GameBattles_SetCompletedGameFlags(const int controllerIndex, const int flags)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  GameBattleMatch *Match; 
  __int64 v10; 
  unsigned __int8 v11; 

  if ( s_currentMatchId )
    goto LABEL_18;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3098, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
    __debugbreak();
  if ( s_currentMatchId )
  {
LABEL_18:
    if ( GameBattles_GetScheduleState(controllerIndex) == HAS_ACCOUNT )
    {
      ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
      v5 = s_currentMatchId;
      v6 = 0i64;
      v7 = ScheduleMatchCount;
      v8 = 0;
      if ( ScheduleMatchCount )
      {
        while ( v5 != GetMatch(controllerIndex, v8)->matchId )
        {
          if ( ++v8 >= v7 )
            return;
        }
        if ( v8 != -1 )
        {
          Match = GetMatch(controllerIndex, v8);
          if ( Match->gameCount > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3109, ASSERT_TYPE_ASSERT, "(match->gameCount <= (11))", (const char *)&queryFormat, "match->gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
            __debugbreak();
          if ( Match->gameCount )
          {
            do
            {
              v10 = v6;
              *((_BYTE *)&Match->games[v10] + 16) &= ~1u;
              v11 = _bittest(&flags, v6);
              v6 = (unsigned int)(v6 + 1);
              *((_BYTE *)&Match->games[v10] + 16) |= v11;
            }
            while ( (unsigned int)v6 < Match->gameCount );
          }
        }
      }
    }
  }
}

/*
==============
GameBattles_SetCurrentMatchId
==============
*/
void GameBattles_SetCurrentMatchId(const unsigned int matchId)
{
  PartyData *PartyData; 

  Com_Printf(131097, "GAMEBATTLES: Setting matchId to (%u).\n", matchId);
  s_currentMatchId = matchId;
  if ( Lobby_AreWeHost() )
  {
    PartyData = Lobby_GetPartyData();
    PartyHost_SetGameBattlesMatchId(PartyData, matchId);
  }
}

/*
==============
GameBattles_SetGameLobbyId
==============
*/
void GameBattles_SetGameLobbyId(const unsigned __int64 lobbyid)
{
  s_lobbyInfo.lobbyId = lobbyid;
}

/*
==============
GameBattles_SetLocalCommitReady
==============
*/
void GameBattles_SetLocalCommitReady(const int controllerIndex)
{
  __int64 v1; 
  unsigned __int64 v2; 
  const char *v3; 
  int v5; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 850, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( !s_partyLocalCommitReady[v1] )
  {
    s_partyLocalCommitReady[v1] = 1;
    s_requestUpdateLocalCommitReady = 1;
    v2 = DB_HASH_INTERNAL("GameBattles_SetLocalCommitReady", 1ui64, 0x2F63DA4C8601E926ui64);
    v3 = j_va("a %zu r", v2);
    GameBattles_TraceState(v1, v3, NULL);
  }
}

/*
==============
GameBattles_SetLocalIsUsingGamepad
==============
*/
void GameBattles_SetLocalIsUsingGamepad(const int controllerIndex, bool usingGamePad)
{
  s_localInputNeedsUpdate = 1;
  s_localInputIsGamepad[controllerIndex] = usingGamePad;
}

/*
==============
GameBattles_SetMatchStats
==============
*/
void GameBattles_SetMatchStats(const char *map, const char *mode, const char *victor, int alliesScore, int axisScore, int matchStart, int matchEnd)
{
  int v11; 
  int v12; 
  unsigned int ControllerFromClient; 
  int v14; 

  Com_Printf(131097, "GAMEBATTLES: Pushing match stats (%s, %s), victory:%s, home:%u, visitor:%u, start:%u, end:%u \n", map, mode, victor, axisScore, alliesScore, matchStart, matchEnd);
  s_matchResultData.map = map;
  s_matchResultData.mode = mode;
  if ( I_strcmp(victor, "axis") )
  {
    v12 = I_strcmp(victor, "allies");
    v11 = -1;
    if ( !v12 )
      v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  s_matchResultData.victorTeamIndex = v11;
  s_matchResultData.teamScores[0] = axisScore;
  s_matchResultData.teamScores[1] = alliesScore;
  s_matchResultData.matchStartTime = matchStart;
  s_matchResultData.matchEndTime = matchEnd;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  v14 = ControllerFromClient;
  if ( s_currentMatchId )
  {
    CacheMatchReport(ControllerFromClient);
    GameBattles_UploadMatchReport(v14);
    CompleteMatchGame(v14, s_activeGameIndex, 0);
  }
  else
  {
    Com_PrintError(131097, "GAMEBATTLES(%i): Attempting to upload match report but no matchId set.\n", ControllerFromClient);
  }
}

/*
==============
GameBattles_SetPlayerStats
==============
*/
void GameBattles_SetPlayerStats(const XUID *xuid, const char *team, int score)
{
  const PartyData *PartyData; 
  unsigned __int64 platformId; 
  int v8; 
  unsigned __int64 *p_platformId; 
  int v10; 
  int v11; 
  int fmt; 

  PartyData = Lobby_GetPartyData();
  fmt = score;
  platformId = PartyData->partyMembers[Party_FindMemberByXUID(PartyData, (const XUID)xuid->m_id)].info.platformId;
  Com_Printf(25, "GAMEBATTLES: Pushing player stats xuid:%zu, team:%s, score:%u\n", platformId, team, fmt);
  v8 = 0;
  p_platformId = &s_lobbyInfo.members[0].platformId;
  v10 = 0;
  while ( *p_platformId != platformId )
  {
    ++v10;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      goto LABEL_6;
  }
  if ( v10 == -1 )
  {
LABEL_6:
    Com_Printf(25, "GAMEBATTLES: player %zu not found in MLG lobby\n", platformId);
    return;
  }
  s_memberScore[v10] = score;
  v11 = v10 / 6;
  if ( I_strcmp(team, "axis") )
  {
    v8 = -1;
    if ( !I_strcmp(team, "allies") )
      v8 = 1;
  }
  if ( v8 != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1491, ASSERT_TYPE_ASSERT, "(GetTeamIndexFromName( team ) == expectedTeam)", (const char *)&queryFormat, "GetTeamIndexFromName( team ) == expectedTeam") )
    __debugbreak();
  ++s_matchResultData.playerCount;
  ++s_matchResultData.teamPlayerCount[v11];
}

/*
==============
GameBattles_SetWonByHomeGameFlags
==============
*/
void GameBattles_SetWonByHomeGameFlags(const int controllerIndex, const int flags)
{
  unsigned int ScheduleMatchCount; 
  unsigned int v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  GameBattleMatch *Match; 
  _BYTE *v10; 
  char v11; 

  if ( s_currentMatchId )
    goto LABEL_18;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3150, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
    __debugbreak();
  if ( s_currentMatchId )
  {
LABEL_18:
    if ( GameBattles_GetScheduleState(controllerIndex) == HAS_ACCOUNT )
    {
      ScheduleMatchCount = GameBattles_GetScheduleMatchCount(controllerIndex);
      v5 = s_currentMatchId;
      v6 = 0i64;
      v7 = ScheduleMatchCount;
      v8 = 0;
      if ( ScheduleMatchCount )
      {
        while ( v5 != GetMatch(controllerIndex, v8)->matchId )
        {
          if ( ++v8 >= v7 )
            return;
        }
        if ( v8 != -1 )
        {
          Match = GetMatch(controllerIndex, v8);
          if ( Match->gameCount > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3161, ASSERT_TYPE_ASSERT, "(match->gameCount <= (11))", (const char *)&queryFormat, "match->gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
            __debugbreak();
          if ( Match->gameCount )
          {
            do
            {
              v10 = (char *)&Match->games[v6] + 16;
              *v10 &= ~2u;
              v11 = -((flags & (1 << v6)) != 0);
              v6 = (unsigned int)(v6 + 1);
              *v10 |= v11 & 2;
            }
            while ( (unsigned int)v6 < Match->gameCount );
          }
        }
      }
    }
  }
}

/*
==============
GameBattles_SetupMatchmakingParams
==============
*/
void GameBattles_SetupMatchmakingParams(OmniscientMatchmakingParams *outParams, const int localControllerIndex)
{
  const dvar_t *v3; 
  int PlaylistNumForId; 
  unsigned int CurrentMatchIndex; 
  int totalPlayerCount; 

  outParams->m_localControllerIndex = localControllerIndex;
  v3 = DVARINT_gamebattle_playlist_id;
  if ( !DVARINT_gamebattle_playlist_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_playlist_id") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  PlaylistNumForId = Playlist_GetPlaylistNumForId(v3->current.integer);
  Live_SetPlaylistNum(localControllerIndex, PlaylistNumForId);
  outParams->m_playlistId = Playlist_GetPlaylistIdForNum(selectedPlaylist);
  outParams->m_playlistCategory = -1;
  outParams->m_netcodeVersion = GetProtocolVersion();
  outParams->m_playlistVersion = Playlist_GetVersionNumber();
  outParams->m_gameType = eGAME_TYPE_MULTIPLAYER;
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(localControllerIndex);
  if ( CurrentMatchIndex == -1 )
  {
    totalPlayerCount = 0;
  }
  else
  {
    totalPlayerCount = GetMatch(localControllerIndex, CurrentMatchIndex)->totalPlayerCount;
    if ( totalPlayerCount >= 1 )
      goto LABEL_9;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4156, ASSERT_TYPE_ASSERT, "(totalPlayers >= 1)", (const char *)&queryFormat, "totalPlayers >= 1") )
    __debugbreak();
LABEL_9:
  outParams->m_minPlayerNeeded = 1;
  outParams->m_maxPlayers = totalPlayerCount;
  Dvar_SetInt_Internal(DVARINT_party_minplayers, 1);
  Dvar_SetInt_Internal(DVARINT_party_maxplayers, outParams->m_maxPlayers);
}

/*
==============
GameBattles_StartMatchMaking
==============
*/
void GameBattles_StartMatchMaking(const int controllerIndex)
{
  const PartyData *ActiveParty; 
  const dvar_t *v3; 
  int PlaylistNumForId; 
  unsigned __int64 v5; 
  const char *v6; 
  LocalClientNum_t ClientFromController; 
  unsigned __int64 v8; 
  unsigned int v9; 
  PartyData *PartyData; 
  __int64 v11; 
  __int64 v13; 
  int v14; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1043, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v14) )
      __debugbreak();
  }
  ActiveParty = Party_GetActiveParty();
  if ( !Party_IsGameLobby(ActiveParty) )
  {
    if ( g_partyData.partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1049, ASSERT_TYPE_ASSERT, "(g_partyData.partyId == PRIVATE_PARTY_ID)", (const char *)&queryFormat, "g_partyData.partyId == PRIVATE_PARTY_ID") )
      __debugbreak();
    v3 = DVARINT_gamebattle_playlist_id;
    if ( !DVARINT_gamebattle_playlist_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_playlist_id") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    PlaylistNumForId = Playlist_GetPlaylistNumForId(v3->current.integer);
    Live_SetPlaylistNum(controllerIndex, PlaylistNumForId);
    if ( s_lobbyInfo.inGame && s_lobbyInfo.lobbyId )
    {
      InviteJoinHSM::StartJoiningLobby(&g_invitationHSM, controllerIndex, s_lobbyInfo.lobbyId);
      v5 = DB_HASH_INTERNAL("GameBattles_StartMatchMaking", 1ui64, 0x2F63DA4C8601E926ui64);
      v6 = j_va("f %zu i1", v5);
    }
    else
    {
      Com_Printf(25, "GAMEBATTLES(%i): Starting match lobby creation.\n", (unsigned int)controllerIndex);
      ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
      Cbuf_ExecuteBufferInternal(ClientFromController, controllerIndex, "xstartlobby", 0, 0);
      if ( (unsigned int)controllerIndex >= 8 )
      {
        LODWORD(v13) = 8;
        LODWORD(v11) = controllerIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1066, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_partyLocalCommitReady ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_partyLocalCommitReady )\n\t%i not in [0, %i)", v11, v13) )
          __debugbreak();
      }
      v8 = DB_HASH_INTERNAL("GameBattles_StartMatchMaking", 1ui64, 0x2F63DA4C8601E926ui64);
      v6 = j_va("f %zu m2", v8);
    }
    GameBattles_TraceState(controllerIndex, v6, NULL);
    v9 = s_currentMatchId;
    PartyData = Lobby_GetPartyData();
    PartyHost_SetGameBattlesMatchId(PartyData, v9);
  }
}

/*
==============
GameBattles_ToogleCDLRecipeCheck
==============
*/
void GameBattles_ToogleCDLRecipeCheck(bool isCDLRecipeRuleActive)
{
  s_CDLRuleCheckActive = isCDLRecipeRuleActive;
}

/*
==============
GameBattles_TraceState
==============
*/
void GameBattles_TraceState(const int controllerIndex, const char *hint, const char *data)
{
  int v3; 
  const dvar_t *v4; 
  unsigned __int64 v5; 
  unsigned __int64 PlatformUserId; 
  unsigned int v7; 
  unsigned __int64 *p_platformId; 
  int v9; 
  unsigned __int64 m_id; 
  GameBattleMatchJoinState MatchJoinState; 
  int v12; 
  bool v13; 
  bool v14; 
  unsigned int *p_mlgId; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int *v18; 
  __int64 ControllerFromClient; 
  unsigned int ScheduleMatchCount; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  GameBattleMatch *Match; 
  char v25; 
  unsigned int i; 
  unsigned __int8 *p_inGame; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  __int64 v33; 
  unsigned __int64 v34; 
  int v35; 
  const dvar_t *v36; 
  const char *string; 
  const dvar_t *v38; 
  const char *v39; 
  const dvar_t *v40; 
  char v41; 
  char v42; 
  bool enabled; 
  int v44; 
  int v45; 
  bool v46; 
  char *v47; 
  char *v48; 
  const char *v49; 
  const char *v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  char v58; 
  unsigned __int8 isOnline; 
  char v60; 
  unsigned __int8 inGame; 
  char v62; 
  char v63; 
  char v64; 
  char v65; 
  unsigned __int8 gameIndex; 
  char v67; 
  char v68; 
  bool v69; 
  char v70; 
  char v71; 
  int v72; 
  unsigned int v73; 
  unsigned int v74; 
  XUID v75; 
  XUID result; 
  int *v77; 
  unsigned int value; 
  GameBattleMatchJoinState v79; 
  int CurrentMatchIndex; 
  XUID xuid; 
  char *v82; 
  char *v83; 
  DLogContext context; 
  char dest[1024]; 
  char buffer[4096]; 

  v4 = DVARBOOL_gamebattle_tracing_enabled;
  v82 = (char *)hint;
  v5 = controllerIndex;
  v83 = (char *)data;
  if ( !DVARBOOL_gamebattle_tracing_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_tracing_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    PlatformUserId = Live_GetPlatformUserId(v5);
    v7 = 0;
    p_platformId = &s_lobbyInfo.members[0].platformId;
    v73 = 0;
    v9 = 0;
    while ( *p_platformId != PlatformUserId )
    {
      ++v9;
      p_platformId += 4;
      if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      {
        v9 = -1;
        break;
      }
    }
    v72 = v9;
    if ( v9 == -1 )
    {
      m_id = XUID::NullXUID(&result)->m_id;
    }
    else
    {
      m_id = s_lobbyInfo.members[v9].xuid.m_id;
      result.m_id = m_id;
    }
    xuid.m_id = m_id;
    value = s_currentMatchId;
    MatchJoinState = GameBattles_GetMatchJoinState(v5);
    v12 = v72;
    v79 = MatchJoinState;
    result.m_id = (unsigned __int64)&v72;
    if ( v72 == -1 )
    {
      v58 = -1;
      isOnline = -1;
    }
    else
    {
      XUID::FromUniversalId(&v75, s_activeChatChannel.m_adminID);
      v13 = XUID::operator==(&v75, &xuid);
      v12 = v72;
      v58 = v13;
      if ( v72 == -1 )
        isOnline = -1;
      else
        isOnline = s_lobbyInfo.members[v72].isOnline;
    }
    v14 = s_localInputIsGamepad[v5];
    v63 = s_partyLocalCommitReady[v5];
    v75.m_id = (unsigned __int64)&v72;
    result.m_id = v5;
    v64 = v14;
    if ( v12 == -1 )
      v60 = -1;
    else
      v60 = s_lobbyInfo.members[v12].platformType[0];
    CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(v5);
    v65 = s_activeGameIndex;
    gameIndex = s_lobbyInfo.gameIndex;
    LODWORD(v75.m_id) = GameBattles_GetScheduleMatchCount(v5);
    v77 = &v72;
    v67 = s_requestStartMatch;
    if ( v72 == -1 )
      inGame = -1;
    else
      inGame = s_lobbyInfo.members[v72].inGame;
    p_mlgId = &s_lobbyInfo.members[0].mlgId;
    LOBYTE(v3) = 0;
    v69 = s_lobbyInfo.inGame;
    LODWORD(v77) = v3;
    if ( s_currentMatchId )
    {
      v16 = 0;
      v17 = 0;
      v18 = &s_lobbyInfo.members[0].mlgId;
      do
      {
        if ( XUID::IsValid((XUID *)v18 - 2) && *((_QWORD *)v18 - 1) && *v18 && *((_BYTE *)v18 + 5) && *((_BYTE *)v18 + 6) )
          ++v16;
        ++v17;
        v18 += 8;
      }
      while ( v17 < 0xC );
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      if ( s_currentMatchId )
      {
        if ( (unsigned int)ControllerFromClient >= 8 )
        {
          LODWORD(v52) = 8;
          LODWORD(v51) = ControllerFromClient;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v51, v52) )
            __debugbreak();
        }
        if ( s_schedule[ControllerFromClient].state == HAS_ACCOUNT )
        {
          ScheduleMatchCount = GameBattles_GetScheduleMatchCount(ControllerFromClient);
          v21 = s_currentMatchId;
          v22 = 0;
          v23 = ScheduleMatchCount;
          if ( ScheduleMatchCount )
          {
            while ( v21 != GetMatch(ControllerFromClient, v22)->matchId )
            {
              if ( ++v22 >= v23 )
                goto LABEL_43;
            }
            if ( v22 != -1 )
            {
              Match = GetMatch(ControllerFromClient, v22);
              LODWORD(v77) = v16 >= Match->teams[0].playerCount + Match->teams[1].playerCount;
            }
          }
LABEL_43:
          v7 = 0;
        }
      }
    }
    v25 = 0;
    for ( i = 0; i < 0xC; ++i )
    {
      if ( XUID::IsValid((XUID *)p_mlgId - 2) && *((_QWORD *)p_mlgId - 1) && *p_mlgId && *((_BYTE *)p_mlgId + 5) )
        ++v25;
      p_mlgId += 8;
    }
    v62 = v25;
    memset_0(dest, 0, sizeof(dest));
    LODWORD(v52) = s_activeChatChannel.m_dataVersion;
    LODWORD(v51) = s_activeChatChannel.m_numSubscribers;
    v74 = Com_sprintf(dest, 0x400ui64, "%zu,%zu,%u,%u", s_activeChatChannel.m_channelID, s_activeChatChannel.m_adminID, v51, v52);
    p_inGame = &s_lobbyInfo.members[0].inGame;
    do
    {
      v28 = *(_DWORD *)(p_inGame - 7);
      if ( v28 )
      {
        v29 = *p_inGame;
        v30 = p_inGame[1];
        v31 = *(p_inGame - 1);
        v32 = *(p_inGame - 2);
        v33 = *(_QWORD *)(p_inGame - 15);
        v34 = XUID::ToUint64((XUID *)(p_inGame - 23));
        LODWORD(v57) = v29;
        LODWORD(v56) = v30;
        LODWORD(v55) = v31;
        LODWORD(v54) = v32;
        v7 = v73;
        LODWORD(v53) = v28;
        v35 = Com_sprintf(&dest[v74], 1024i64 - (int)v74, "|%d,%zu(%zu,%u),%d,%d,%d,%d", v73, v34, v33, v53, v54, v55, v56, v57);
        v74 += v35;
        if ( v74 >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4850, ASSERT_TYPE_ASSERT, "(offset < sizeof( state ))", (const char *)&queryFormat, "offset < sizeof( state )") )
          __debugbreak();
      }
      ++v7;
      p_inGame += 32;
      v73 = v7;
    }
    while ( v7 < 0xC );
    v36 = DVARSTR_ui_mapname;
    if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    string = v36->current.string;
    v38 = DVARSTR_ui_gametype;
    if ( !DVARSTR_ui_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_gametype") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    v39 = v38->current.string;
    v40 = DVARBOOL_mlg_gamebattles_match;
    v41 = s_luiMatchIndex;
    v42 = s_luiJoinState;
    v73 = s_luiMatchTime;
    v71 = s_luiCommitReady;
    v70 = s_luiGameInProgress;
    v68 = s_luiGameCount;
    if ( DVARBOOL_mlg_gamebattles_match )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_mlg_gamebattles_match);
      enabled = v40->current.enabled;
    }
    else
    {
      enabled = 0;
    }
    v44 = s_luiMatchId2;
    v45 = s_luiMatchId;
    if ( DLog_IsActive() && DLog_CreateContext(&context, result.m_id, buffer, 4096) && DLog_IsActive() )
    {
      v46 = DLog_BeginEvent(&context, "dlog_event_gb_state");
      context.autoEndEvent = 1;
      if ( v46 && DLog_UInt32(&context, "gamebattle_match_id", value) && DLog_Int32(&context, "state_fe_match_id", v45) && DLog_Int32(&context, "state_fe_match_id2", v44) )
      {
        v47 = (char *)&queryFormat.fmt + 3;
        v48 = (char *)&queryFormat.fmt + 3;
        if ( v82 )
          v48 = v82;
        if ( DLog_String(&context, "state_desc", v48, 0) && DLog_Bool(&context, "state_dvar_gate", enabled) && DLog_Int8(&context, "state_match_join", v79) && DLog_Int8(&context, "state_fe_match_join", v42) && DLog_Int8(&context, "state_host", v58) && DLog_Int8(&context, "state_joined", isOnline) && DLog_Int8(&context, "state_ready", v63) && DLog_Int8(&context, "state_is_gamepad", v64) && DLog_Int8(&context, "state_platform", v60) && DLog_Int8(&context, "state_match_index", CurrentMatchIndex) && DLog_Int8(&context, "state_fe_match_index", v41) && DLog_Int8(&context, "state_game_index", v65) && DLog_Int8(&context, "state_lobby_game_index", gameIndex) && DLog_Int8(&context, "state_match_started", v67) && DLog_Int8(&context, "state_match_count", v75.m_id) && DLog_Int8(&context, "state_fe_game_count", v68) && DLog_Int8(&context, "state_in_game", inGame) && DLog_Int8(&context, "state_in_progress", v69) && DLog_Int8(&context, "state_fe_in_progress", v70) && DLog_Int8(&context, "state_fe_ready", v71) && DLog_Int8(&context, "state_all_ready", (char)v77) && DLog_Int8(&context, "state_player_count", v62) && DLog_UInt32(&context, "state_fe_match_time", v73) && DLog_String(&context, "state_lobby_view", dest, 0) )
        {
          v49 = (char *)&queryFormat.fmt + 3;
          if ( string )
            v49 = string;
          if ( DLog_String(&context, "state_ui_mapname", v49, 0) )
          {
            v50 = (char *)&queryFormat.fmt + 3;
            if ( v39 )
              v50 = v39;
            if ( DLog_String(&context, "state_ui_gametype", v50, 0) )
            {
              if ( v83 )
                v47 = v83;
              if ( DLog_String(&context, "state_fe_data", v47, 0) )
                DLog_RecordContext(&context);
            }
          }
        }
      }
    }
  }
}

/*
==============
GameBattles_Update
==============
*/
void GameBattles_Update(const int controllerIndex)
{
  __int64 v1; 
  signed int totalPlayerCount; 
  int v3; 
  const XUID *Xuid; 
  unsigned int v5; 
  unsigned int CurrentMatchIndex; 
  const dvar_t *v7; 
  PartyData *PartyData; 
  __int64 v9; 
  __int64 v11; 
  int v12; 
  XUID result; 
  XUID v14; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2868, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v12) )
      __debugbreak();
  }
  Live_GetXuid(&result, v1);
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v11) = 8;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2870, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_owningXuid ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_owningXuid )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  totalPlayerCount = 0;
  if ( !XUID::ToUint64(&s_owningXuid[v1]) || XUID::operator!=(&s_owningXuid[v1], &result) )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    s_accountState[v1] = UNAVAILABLE;
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    s_matchJoinState[v1] = IDLE;
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 824, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    s_matchReportState = IDLE;
    GameBattles_ResetSchedule(v1);
    XUID::operator=(&s_owningXuid[v1], &result);
  }
  if ( AsyncTaskActive(v1) )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v11) = 8;
      LODWORD(v9) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( s_activeTask[v1].needsRetry )
    {
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v11) = 8;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v9, v11) )
          __debugbreak();
      }
      if ( s_activeTask[v1].taskType == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2620, ASSERT_TYPE_ASSERT, "(AsyncTaskActive( controllerIndex ))", (const char *)&queryFormat, "AsyncTaskActive( controllerIndex )") )
        __debugbreak();
      v3 = Sys_Milliseconds();
      if ( Live_GetShouldDemonwareRetry((v3 - s_activeTask[v1].lastRetryTime) / 1000, s_activeTask[v1].numTries - 1, 0x10u) )
      {
        switch ( s_activeTask[v1].taskType )
        {
          case HALF:
            GameBattles_UploadMatchReport(v1);
            break;
          case HALF_HALF:
            GameBattles_GetScheduledMatch(v1);
            break;
          case LONG:
            GameBattles_ListScheduledMatches(v1);
            break;
          case LONG_LONG:
            GameBattles_RetrieveMatchHistory(v1, s_currentMatchHistoryRetrievalId);
            break;
          case MAX_INT:
            GameBattles_GetAccount(v1);
            break;
          case SIZE_T:
            GameBattles_CheckChannel(v1);
            break;
          case PTRDIFF:
            GameBattles_JoinChannel(v1);
            break;
          case LONG_DOUBLE:
            GameBattles_LeaveChannel(v1);
            break;
          default:
            return;
        }
      }
    }
    return;
  }
  if ( s_currentMatchId )
    MLGLobby_PopulateLobbyForMatchId(v1, s_currentMatchId);
  GameBattles_ClientUpdate(v1);
  if ( s_currentMatchId )
  {
    Xuid = Live_GetXuid(&v14, v1);
    if ( GameBattles_IsPlayerWhitelisted(Xuid) )
    {
      if ( GameBattles_GetScheduleState(v1) )
      {
        if ( !s_requestFetchScheduleMatch )
          goto LABEL_49;
      }
      else
      {
        s_requestFetchScheduleMatch = 1;
      }
      if ( s_rawDataOwner == -1 )
      {
        GameBattles_GetScheduledMatch(v1);
        v5 = s_currentMatchId;
        s_currentMatchHistoryRetrievalId = s_currentMatchId;
        s_requestFetchScheduleMatch = 0;
        goto LABEL_50;
      }
LABEL_49:
      v5 = s_currentMatchId;
LABEL_50:
      if ( GameBattles_GetMatchHistoryState(v1, v5) == HAS_ACCOUNT )
        GameBattles_GetMatchJoinState(v1);
    }
  }
  CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(v1);
  if ( CurrentMatchIndex != -1 )
    totalPlayerCount = GetMatch(v1, CurrentMatchIndex)->totalPlayerCount;
  if ( s_currentMatchId && totalPlayerCount > 0 )
  {
    v7 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( totalPlayerCount != v7->current.integer )
    {
      PartyData = Lobby_GetPartyData();
      Party_SetNumGameSlots(PartyData, totalPlayerCount);
      Dvar_SetInt_Internal(DVARINT_party_minplayers, 1);
      Dvar_SetInt_Internal(DVARINT_party_maxplayers, totalPlayerCount);
    }
  }
}

/*
==============
GameBattles_UpdateLocalCommitReady
==============
*/
void GameBattles_UpdateLocalCommitReady(const int controllerIndex)
{
  int v3; 
  XUID result; 
  unsigned __int64 platformId; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 877, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  Live_GetXuid(&result, controllerIndex);
  if ( !GameBattles_IsPlayerWhitelisted(&result) )
  {
    platformId = Live_GetPlatformUserId(controllerIndex);
    GameBattles_UpdateLocalMemberState(controllerIndex, &platformId);
  }
}

/*
==============
GameBattles_UpdateLocalMemberState
==============
*/
void GameBattles_UpdateLocalMemberState(const int controllerIndex, const unsigned __int64 *platformId)
{
  __int64 v2; 
  unsigned __int64 *p_platformId; 
  int v5; 
  __int64 v6; 
  const XUID *Xuid; 
  const XUID *v8; 
  XUID result; 
  XUID v10; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 832, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  p_platformId = &s_lobbyInfo.members[0].platformId;
  v5 = 0;
  while ( *p_platformId != *platformId )
  {
    ++v5;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
    {
      v5 = -1;
      goto LABEL_9;
    }
  }
  if ( v5 != -1 )
    goto LABEL_11;
LABEL_9:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 834, ASSERT_TYPE_ASSERT, "(memberIdx != (-1))", (const char *)&queryFormat, "memberIdx != GAMEBATTLES_INVALID_TEAM_MEMBER_INDEX") )
    __debugbreak();
LABEL_11:
  v6 = v5;
  s_lobbyInfo.members[v6].isReady = s_partyLocalCommitReady[v2];
  s_lobbyInfo.members[v6].usingGamepad = s_localInputIsGamepad[v2];
  s_lobbyInfo.members[v6].platformType[0] = GetClientPlatform();
  result.m_id = s_hostInfo.xuid.m_id;
  if ( XUID::ToUint64(&result) || (XUID::FromUniversalId(&result, s_activeChatChannel.m_adminID), Xuid = Live_GetXuid(&v10, v2), XUID::operator==(&result, Xuid)) )
  {
    Com_Printf(25, "GAMEBATTLES(%i): Broadcast member state to the channel.\n", (unsigned int)v2);
    v8 = XUID::FromUInt64(&result, 0i64);
    MLGLobbyMsg_SendMemberState(v2, v8);
  }
}

/*
==============
GameBattles_UploadMatchReport
==============
*/
void GameBattles_UploadMatchReport(const int controllerIndex)
{
  DWServicesAccess *Instance; 
  DWMatchScheduler *MatchScheduler; 
  TaskCreateRequest *matched; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 824, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  s_matchReportState = INITIALIZING;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = AsyncTaskComplete;
  pTaskCreateRequest.m_appTaskType = 1;
  StartAsyncTask(controllerIndex, HALF);
  Instance = DWServicesAccess::GetInstance();
  MatchScheduler = DWServicesAccess::GetMatchScheduler(Instance, controllerIndex);
  matched = (TaskCreateRequest *)DWMatchScheduler::recordScheduledMatchEvent(MatchScheduler, &result, s_currentMatchId, s_currentMatchReport, s_currentMatchReportSize);
  if ( matched != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&matched->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(131097, "GAMEBATTLES(%i): Starting upload of match report with matchId (%u).\n", (unsigned int)controllerIndex, s_currentMatchId);
  }
  else
  {
    Com_PrintError(131097, "GAMEBATTLES(%i): Upload failed for match report with matchId (%u).\n", (unsigned int)controllerIndex, s_currentMatchId);
    HandleTaskFailed(controllerIndex, NULL);
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

/*
==============
GameBattles_ValidateData
==============
*/
void GameBattles_ValidateData(void)
{
  if ( !s_mlgGameMappingLoaded )
    LoadMLGMapping();
}

/*
==============
GetExpectedChatChannelIdForCurrentMatch
==============
*/
unsigned __int64 GetExpectedChatChannelIdForCurrentMatch()
{
  unsigned __int64 result; 

  result = s_currentMatchId;
  if ( !s_currentMatchId )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 945, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
      __debugbreak();
    return s_currentMatchId;
  }
  return result;
}

/*
==============
GetMatch
==============
*/
GameBattleMatch *GetMatch(const int controllerIndex, const unsigned int matchIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 

  v2 = controllerIndex;
  v3 = matchIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 650, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
    LODWORD(v11) = 8;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v8, v11) )
      __debugbreak();
  }
  v4 = v2;
  if ( s_schedule[v2].state != HAS_ACCOUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 651, ASSERT_TYPE_ASSERT, "(GameBattles_GetScheduleState( controllerIndex ) == GameBattleScheduleState::AVAILABLE)", (const char *)&queryFormat, "GameBattles_GetScheduleState( controllerIndex ) == GameBattleScheduleState::AVAILABLE") )
    __debugbreak();
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= s_schedule[v4].matchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 652, ASSERT_TYPE_ASSERT, "(matchIndex < GameBattles_GetScheduleMatchCount( controllerIndex ))", (const char *)&queryFormat, "matchIndex < GameBattles_GetScheduleMatchCount( controllerIndex )") )
    __debugbreak();
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v9) = 8;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  return (GameBattleMatch *)((char *)&s_schedule[0].matches[v3] + v4 * 13136);
}

/*
==============
GetMatchById
==============
*/
GameBattleMatch *GetMatchById(const int controllerIndex, const unsigned int matchId)
{
  __int64 v2; 
  unsigned int v4; 
  unsigned int matchCount; 
  GameBattleMatch *result; 
  int v8; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  v4 = 0;
  matchCount = s_schedule[v2].matchCount;
  if ( !matchCount )
    return 0i64;
  while ( 1 )
  {
    result = GetMatch(v2, v4);
    if ( result->matchId == matchId )
      break;
    if ( ++v4 >= matchCount )
      return 0i64;
  }
  return result;
}

/*
==============
GetTeamRosterState
==============
*/
__int64 GetTeamRosterState(const int teamIndex, const GameBattleTeam *team)
{
  int v2; 
  unsigned int v3; 
  int v5; 
  unsigned int *p_mlgId; 

  v2 = 0;
  v3 = 6 * teamIndex;
  v5 = 0;
  if ( (unsigned int)(6 * teamIndex) < 0xC )
  {
    p_mlgId = &s_lobbyInfo.members[v3].mlgId;
    do
    {
      if ( XUID::IsValid((XUID *)p_mlgId - 2) && *((_QWORD *)p_mlgId - 1) && *p_mlgId && *((_BYTE *)p_mlgId + 5) && *((_BYTE *)p_mlgId + 6) )
        ++v5;
      ++v3;
      p_mlgId += 8;
    }
    while ( v3 < 0xC );
  }
  if ( v5 == team->playerCount )
    return 3i64;
  LOBYTE(v2) = v5 != 0;
  return (unsigned int)(v2 + 1);
}

/*
==============
HandleNewRawMatchData
==============
*/
_BOOL8 HandleNewRawMatchData(const int controllerIndex)
{
  __int64 v1; 
  unsigned __int8 *m_ptr; 
  unsigned int v3; 
  int v4; 
  GameBattleMatch *matches; 
  unsigned __int8 **p_m_matchMetadata; 
  GameBattleMatch *v7; 
  int v8; 
  const unsigned __int8 *v9; 
  unsigned __int64 v10; 
  bool v11; 
  char v12; 
  unsigned int v13; 
  unsigned int v14; 
  signed int v15; 
  char v16; 
  __int64 v17; 
  _DWORD *v18; 
  char v19; 
  char v20; 
  unsigned int v21; 
  signed int v22; 
  char *v23; 
  char v24; 
  char v25; 
  char v26; 
  unsigned int v27; 
  signed int v28; 
  int *p_id; 
  char v30; 
  char v31; 
  char v32; 
  char v33; 
  char v34; 
  __int64 v35; 
  char v36; 
  char v37; 
  char v38; 
  __int64 v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int v45; 
  GameBattleMatch *v46; 
  unsigned __int8 **v47; 
  bdJSONDeserializer v48; 
  bdJSONDeserializer v49; 
  unsigned __int64 v50; 
  unsigned __int8 *v51; 
  bdJSONDeserializer v52; 
  bdJSONDeserializer v53; 
  GameBattleMatch *v54; 
  unsigned __int64 v55; 
  bdJSONDeserializer v56; 
  bdJSONDeserializer value; 
  __int64 v58; 
  Mem_LargeLocal v59; 
  char v61; 
  bool v62; 
  unsigned int v63; 

  v58 = -2i64;
  v1 = controllerIndex;
  if ( s_rawDataOwner != controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1722, ASSERT_TYPE_ASSERT, "(RawDataOwner() == controllerIndex)", (const char *)&queryFormat, "RawDataOwner() == controllerIndex") )
    __debugbreak();
  s_matchesCompleted = 0;
  Mem_LargeLocal::Mem_LargeLocal(&v59, 0x2000ui64, "jsonDecompressionBuffer uncompressedMatchData");
  m_ptr = (unsigned __int8 *)v59.m_ptr;
  v51 = (unsigned __int8 *)v59.m_ptr;
  v3 = 0;
  v63 = 0;
  v61 = 0;
  v4 = 0;
  v42 = 0;
  v55 = 13136 * v1;
  matches = s_schedule[v1].matches;
  v54 = matches;
  p_m_matchMetadata = &s_scheduledMatchData[0].m_matchMetadata;
  v47 = &s_scheduledMatchData[0].m_matchMetadata;
  while ( 1 )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v41) = 8;
      LODWORD(v40) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v40, v41) )
        __debugbreak();
    }
    v7 = &matches[v3];
    v46 = v7;
    if ( *(p_m_matchMetadata - 2) )
    {
      v8 = MemFile_DecompressWithZLib(*p_m_matchMetadata, *((_DWORD *)p_m_matchMetadata + 2), m_ptr, 0x2000);
      if ( v8 )
      {
        v9 = m_ptr;
        m_ptr[v8] = 0;
      }
      else
      {
        Com_PrintWarning(131097, "GAMEBATTLES(%i): HandleNewRawMatchData failed while decompressing match meta data for match %i.  May be uncompressed match data.\n", (unsigned int)v1, (unsigned int)v4);
        v9 = *p_m_matchMetadata;
      }
      v10 = (unsigned __int64)*(p_m_matchMetadata - 2);
      if ( v10 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v10, "unsigned", (intmax_t)*(p_m_matchMetadata - 2)) )
        __debugbreak();
      v7->matchId = v10;
      v7->matchTimeUTC = *((_DWORD *)p_m_matchMetadata - 1);
      Com_Printf(131097, "GAMEBATTLES(%i): HandleNewRawMatchData handling JSON:\n %s\n", (unsigned int)v1, (const char *)v9);
      bdJSONDeserializer::bdJSONDeserializer(&v52);
      v11 = bdJSONDeserializer::parse(&v52, (const char *)v9);
      if ( v11 )
      {
        bdJSONDeserializer::bdJSONDeserializer(&value);
        v12 = bdJSONDeserializer::getArray(&v52, "teams", &value) && v11;
        v13 = 0;
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          bdJSONDeserializer::bdJSONDeserializer(&v48);
          if ( !bdJSONDeserializer::getObject(&value, v15, &v48) )
            break;
          v16 = bdJSONDeserializer::getBoolean(&v48, "isHome", &v62) & v12;
          v17 = 8i64;
          if ( !v62 )
            v17 = 536i64;
          v18 = (unsigned int *)((char *)&v7->matchId + v17);
          v43 = v13 + 1;
          v19 = bdJSONDeserializer::getUInt32(&v48, (const char *const)&valueOut, v18) & v16;
          v20 = bdJSONDeserializer::getString(&v48, (const char *const)&stru_143C9A1A4, (char *const)v18 + 4, 0x20u) & v19;
          bdJSONDeserializer::bdJSONDeserializer(&v53);
          v12 = bdJSONDeserializer::getArray(&v48, "players", &v53) & v20;
          v21 = 0;
          v22 = 0;
          v23 = (char *)(v18 + 12);
          while ( 1 )
          {
            bdJSONDeserializer::bdJSONDeserializer(&v49);
            if ( !bdJSONDeserializer::getObject(&v53, v22, &v49) )
              break;
            ++v21;
            v24 = bdJSONDeserializer::getString(&v49, "gamertag", v23 + 8, 0x40u) & v12;
            v25 = bdJSONDeserializer::getUInt32(&v49, "mlgId", (unsigned int *)v23 - 2) & v24;
            v50 = 0i64;
            v12 = bdJSONDeserializer::getUInt64(&v49, "platformId", &v50) & v25;
            *(_QWORD *)v23 = v50;
            bdJSONDeserializer::~bdJSONDeserializer(&v49);
            ++v22;
            v23 += 80;
            if ( v22 >= 6 )
              goto LABEL_27;
          }
          bdJSONDeserializer::~bdJSONDeserializer(&v49);
LABEL_27:
          if ( v21 > 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1815, ASSERT_TYPE_ASSERT, "(playerCount <= (6))", (const char *)&queryFormat, "playerCount <= GAMEBATTLE_MATCH_MAX_PLAYERS_PER_TEAM") )
            __debugbreak();
          v18[130] = v21;
          v14 += v21;
          bdJSONDeserializer::~bdJSONDeserializer(&v53);
          bdJSONDeserializer::~bdJSONDeserializer(&v48);
          ++v15;
          v7 = v46;
          v13 = v43;
          if ( v15 >= 2 )
            goto LABEL_33;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v48);
LABEL_33:
        if ( v13 > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1826, ASSERT_TYPE_ASSERT, "(teamCount <= (2))", (const char *)&queryFormat, "teamCount <= GAMEBATTLE_MATCH_MAX_TEAMS") )
          __debugbreak();
        v7->teamCount = v13;
        if ( v14 > 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1828, ASSERT_TYPE_ASSERT, "(totalPlayerCount <= ((2) * (6)))", (const char *)&queryFormat, "totalPlayerCount <= GAMEBATTLE_MATCH_MAX_PLAYERS") )
          __debugbreak();
        v7->totalPlayerCount = v14;
        bdJSONDeserializer::bdJSONDeserializer(&v56);
        v26 = bdJSONDeserializer::getArray(&v52, "playlist", &v56) & v12;
        v27 = 0;
        v28 = 0;
        while ( 1 )
        {
          p_id = &v7->games[v28].gametype.id;
          bdJSONDeserializer::bdJSONDeserializer(&v49);
          if ( !bdJSONDeserializer::getObject(&v56, v28, &v49) )
            break;
          ++v27;
          bdJSONDeserializer::bdJSONDeserializer(&v53);
          v30 = bdJSONDeserializer::getObject(&v49, "map", &v53) & v26;
          v31 = bdJSONDeserializer::getInt32(&v53, (const char *const)&valueOut, p_id + 1) & v30;
          v32 = bdJSONDeserializer::getInt32(&v53, "mlgMapId", p_id + 2) & v31;
          bdJSONDeserializer::bdJSONDeserializer(&v48);
          v33 = bdJSONDeserializer::getObject(&v49, "mode", &v48) & v32;
          v34 = bdJSONDeserializer::getInt32(&v48, (const char *const)&valueOut, p_id) & v33;
          v26 = bdJSONDeserializer::getInt32(&v48, "mlgModeId", p_id + 3) & v34;
          bdJSONDeserializer::~bdJSONDeserializer(&v48);
          bdJSONDeserializer::~bdJSONDeserializer(&v53);
          bdJSONDeserializer::~bdJSONDeserializer(&v49);
          ++v28;
          v7 = v46;
          if ( v28 >= 11 )
            goto LABEL_44;
        }
        bdJSONDeserializer::~bdJSONDeserializer(&v49);
LABEL_44:
        if ( v27 > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1860, ASSERT_TYPE_ASSERT, "(gameCount <= (11))", (const char *)&queryFormat, "gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
          __debugbreak();
        v35 = (__int64)v46;
        v46->gameCount = v27;
        v44 = 0;
        v36 = bdJSONDeserializer::getUInt32(&v52, "rulesetId", &v44) & v26;
        *(_DWORD *)(v35 + 1300) = v44;
        v45 = 2;
        v37 = bdJSONDeserializer::getUInt32(&v52, "inputType", &v45) & v36;
        *(_BYTE *)(v35 + 1296) = v45;
        if ( !v37 )
        {
          v4 = v42;
          LODWORD(v1) = controllerIndex;
          Com_PrintError(131097, "GAMEBATTLES(%i): Failed to parse JSON for new match schedule, matchIndex %u.\n", (unsigned int)controllerIndex, v42);
          v38 = 1;
          v61 = 1;
          bdJSONDeserializer::~bdJSONDeserializer(&v56);
          bdJSONDeserializer::~bdJSONDeserializer(&value);
          bdJSONDeserializer::~bdJSONDeserializer(&v52);
          p_m_matchMetadata = v47;
          v3 = v63;
          m_ptr = v51;
          goto LABEL_51;
        }
        v3 = ++v63;
        bdJSONDeserializer::~bdJSONDeserializer(&v56);
        bdJSONDeserializer::~bdJSONDeserializer(&value);
        bdJSONDeserializer::~bdJSONDeserializer(&v52);
        LODWORD(v1) = controllerIndex;
        p_m_matchMetadata = v47;
        v4 = v42;
        m_ptr = v51;
      }
      else
      {
        Com_PrintError(131097, "GAMEBATTLES(%i): HandleNewRawMatchData failed while parsing json for match %i.\n", (unsigned int)v1, (unsigned int)v4);
        bdJSONDeserializer::~bdJSONDeserializer(&v52);
        v3 = v63;
      }
    }
    v38 = v61;
LABEL_51:
    v42 = ++v4;
    p_m_matchMetadata += 14;
    v47 = p_m_matchMetadata;
    if ( v4 >= 10 )
      break;
    matches = v54;
  }
  if ( v3 > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1881, ASSERT_TYPE_ASSERT, "(matchCount <= (10))", (const char *)&queryFormat, "matchCount <= GAMEBATTLES_MAX_PENDING_MATCHES") )
    __debugbreak();
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v41) = 8;
    LODWORD(v40) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  s_schedule[v55 / 0x3350].matchCount = v3;
  Mem_LargeLocal::~Mem_LargeLocal(&v59);
  return v38 == 0;
}

/*
==============
HandleNewRawMatchEventData
==============
*/
char HandleNewRawMatchEventData(const int controllerIndex, const unsigned int matchId)
{
  GameBattleMatch *MatchById; 
  unsigned __int8 *m_ptr; 
  char v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  char *v10; 
  const unsigned int *v11; 
  const char **v12; 
  const char *v13; 
  int v14; 
  const char *v15; 
  char v16; 
  char v17; 
  bool v18; 
  char v19; 
  char v20; 
  char v21; 
  __int64 v22; 
  unsigned __int8 *dest; 
  __int64 v24; 
  bdJSONDeserializer v25; 
  __int64 v26; 
  Mem_LargeLocal v27; 
  Mem_LargeLocal v28; 
  bool v29; 
  unsigned int v30; 
  unsigned int value; 
  int v32; 

  v30 = matchId;
  v26 = -2i64;
  if ( s_rawDataOwner != controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1891, ASSERT_TYPE_ASSERT, "(RawDataOwner() == controllerIndex)", (const char *)&queryFormat, "RawDataOwner() == controllerIndex") )
    __debugbreak();
  MatchById = GetMatchById(controllerIndex, matchId);
  if ( MatchById )
  {
    Mem_LargeLocal::Mem_LargeLocal(&v28, 0x1000ui64, "zippedDecodeBuffer zippedMatchData");
    dest = (unsigned __int8 *)v28.m_ptr;
    Mem_LargeLocal::Mem_LargeLocal(&v27, 0x1000ui64, "jsonDecompressionBuffer uncompressedMatchData");
    m_ptr = (unsigned __int8 *)v27.m_ptr;
    v24 = 0i64;
    v7 = 1;
    bdJSONDeserializer::bdJSONDeserializer(&v25);
    if ( MatchById->gameCount > 0xB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1911, ASSERT_TYPE_ASSERT, "(match->gameCount <= (11))", (const char *)&queryFormat, "match->gameCount <= GAMEBATTLE_MATCH_MAX_GAMES") )
      __debugbreak();
    v8 = 0i64;
    if ( MatchById->gameCount )
    {
      while ( 1 )
      {
        v9 = (unsigned __int64)(unsigned int)v8 << 6;
        v10 = (char *)MatchById + 20 * v8;
        if ( !*(unsigned __int64 *)((char *)&s_matchEventInfo[0].m_globalEventNum + v9) )
          break;
        v11 = (unsigned int *)((char *)&s_matchEventInfo[0].m_eventDescLength + v9);
        v12 = (const char **)((char *)&s_matchEventInfo[0].__vftable + v9 + 24);
        if ( bdBase64::decode(*v12, *v11, dest, 0x1000u) )
        {
          v13 = (const char *)dest;
        }
        else
        {
          Com_PrintWarning(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData failed while decoding match data for match event %u.  May be unencoded match data.\n", (unsigned int)controllerIndex, (unsigned int)v8);
          v13 = *v12;
        }
        v14 = MemFile_DecompressWithZLib((const unsigned __int8 *)v13, *v11, m_ptr, 4096);
        if ( v14 )
        {
          v15 = (const char *)m_ptr;
          m_ptr[v14] = 0;
        }
        else
        {
          Com_PrintWarning(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData failed while decompressing data for match event %u.  May be uncompressed match data.\n", (unsigned int)controllerIndex, (unsigned int)v8);
          v15 = *v12;
        }
        Com_Printf(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData handling JSON:\n %s\n", (unsigned int)controllerIndex, v15);
        v16 = bdJSONDeserializer::parse(&v25, v15) & v7;
        if ( !v16 )
        {
          Com_PrintError(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData failed while parsing json for event index %u.\n", (unsigned int)controllerIndex, (unsigned int)v8);
LABEL_29:
          v21 = 0;
          goto LABEL_32;
        }
        v17 = bdJSONDeserializer::getUInt32(&v25, "matchId", &value) & v16;
        if ( value != v30 )
        {
          LODWORD(v22) = controllerIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1963, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "GAMEBATTLES(%i): HandleNewRawMatchEventData recieved match data for matchId (%u), but expected data from matchId (%u).", v22, value, v30) )
          {
            __debugbreak();
            v21 = 0;
            goto LABEL_32;
          }
          goto LABEL_29;
        }
        v7 = bdJSONDeserializer::getBoolean(&v25, "noShowReport", &v29) & v17;
        v18 = v29;
        if ( v29 )
        {
          v20 = v10[1084];
        }
        else
        {
          v7 &= bdJSONDeserializer::getInt32(&v25, "winningTeamIndex", &v32);
          v19 = 0;
          if ( !v32 )
            v19 = 2;
          v20 = v10[1084] & 0xFD | v19;
          v10[1084] = v20;
          ++*((_DWORD *)&v24 + ((v20 & 2) == 0));
          v18 = v29;
        }
        v10[1084] = v20 ^ (v20 ^ (4 * v18)) & 4 | 1;
        ++s_matchesCompleted;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= MatchById->gameCount )
          goto LABEL_31;
      }
      Com_Printf(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData found no more events, processed %u events.\n", (unsigned int)controllerIndex, (unsigned int)v8);
    }
LABEL_31:
    v21 = 1;
LABEL_32:
    bdJSONDeserializer::~bdJSONDeserializer(&v25);
    Mem_LargeLocal::~Mem_LargeLocal(&v27);
    Mem_LargeLocal::~Mem_LargeLocal(&v28);
    return v21;
  }
  else
  {
    Com_Printf(131097, "GAMEBATTLES(%i): HandleNewRawMatchEventData Attempting to parse match event data for matchId (%u) that is not in the current schedule.\n", (unsigned int)controllerIndex, matchId);
    return 0;
  }
}

/*
==============
HandleTaskFailed
==============
*/
void HandleTaskFailed(const int controllerIndex, const GenericTask *failedTask)
{
  __int64 v3; 
  bdLobbyErrorCode ErrorCode; 
  bdRemoteTask *m_ptr; 
  int v7; 
  bdChannelInfo __that; 

  v3 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v7) )
      __debugbreak();
  }
  ErrorCode = BD_NO_ERROR;
  if ( failedTask )
  {
    m_ptr = failedTask->m_remoteDemonwareTask.m_ptr;
    if ( m_ptr )
      ErrorCode = bdRemoteTask::getErrorCode(m_ptr);
  }
  switch ( s_activeTask[v3].taskType )
  {
    case HALF:
      SetMatchReportState(v3, JOINED_LOBBY);
      break;
    case HALF_HALF:
    case LONG:
      SetScheduleState(v3, NO_ACCOUNT);
      ReleaseRawDataOwnership(v3);
      break;
    case LONG_LONG:
      SetMatchHistoryState(v3, s_currentMatchHistoryRetrievalId, NO_ACCOUNT);
      s_currentMatchHistoryRetrievalId = 0;
      ReleaseRawDataOwnership(v3);
      break;
    case MAX_INT:
      SetAccountState(v3, ACCOUNT_ERROR);
      break;
    case SIZE_T:
      s_expiredCheckFailed = 1;
      s_expiredCheckInProgress = 0;
      break;
    case PTRDIFF:
      if ( ErrorCode == BD_CHANNEL_ALREADY_SUBSCRIBED )
      {
        Com_Printf(25, "GAMEBATTLES(%i): Chat channel joined failed because we are already subscribed to that channel.  Continuing as if successful.\n", (unsigned int)v3);
        ChatChannelJoinSucceeded(v3);
      }
      else if ( ErrorCode == BD_CHANNEL_DOES_NOT_EXIST )
      {
        SetMatchJoinState(v3, ERRORING);
      }
      else
      {
        SetMatchJoinState(v3, JOINED_LOBBY);
      }
      break;
    case LONG_DOUBLE:
      if ( ErrorCode == BD_CHANNEL_DOES_NOT_EXIST )
      {
        memset_0(&s_lobbyInfo, 0, sizeof(s_lobbyInfo));
        SetMatchJoinState(v3, IDLE);
        SetMatchReportState(v3, IDLE);
        GameBattles_ResetSchedule(v3);
        memset_0(&s_hostInfo, 0, sizeof(s_hostInfo));
        bdChannelInfo::bdChannelInfo(&__that);
        bdChannelInfo::operator=(&s_activeChatChannel, &__that);
        bdChannelInfo::~bdChannelInfo((bdChannelInfo *)(&__that.m_dataVersion + 1));
        bdReferencable::~bdReferencable((bdReferencable *)(&__that.m_dataVersion + 1));
      }
      break;
    default:
      break;
  }
  ClearAsyncTask(v3);
}

/*
==============
HandleTaskSucceeded
==============
*/
void HandleTaskSucceeded(const int controllerIndex)
{
  __int64 v1; 
  GameBattleAsyncTask *v2; 
  unsigned __int64 v3; 
  const char *v4; 
  char matched; 
  GameBattleMatchHistoryState v6; 
  unsigned __int64 v7; 
  const char *v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned __int8 *p_isReady; 
  LocalClientNum_t ClientFromController; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  bdChannelInfo __that; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2089, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    LODWORD(v16) = 8;
    LODWORD(v14) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  v2 = &s_activeTask[v1];
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v15) = 8;
    LODWORD(v13) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  if ( v2->taskType == NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2091, ASSERT_TYPE_ASSERT, "(AsyncTaskActive( controllerIndex ))", (const char *)&queryFormat, "AsyncTaskActive( controllerIndex )") )
    __debugbreak();
  switch ( v2->taskType )
  {
    case HALF:
      SetMatchReportState(v1, QOSING);
      break;
    case HALF_HALF:
    case LONG:
      if ( HandleNewRawMatchData(v1) )
      {
        SetScheduleState(v1, HAS_ACCOUNT);
        if ( GameBattles_GetScheduleMatchCount(v1) )
          SetAccountState(v1, HAS_ACCOUNT);
        v3 = DB_HASH_INTERNAL("HandleTaskSucceeded", 1ui64, 0x2F63E54C8601FBD7ui64);
        v4 = j_va("t %zu gm", v3);
        GameBattles_TraceState(v1, v4, NULL);
        ReleaseRawDataOwnership(v1);
      }
      else
      {
        SetScheduleState(v1, NO_ACCOUNT);
        ReleaseRawDataOwnership(v1);
      }
      break;
    case LONG_LONG:
      matched = HandleNewRawMatchEventData(v1, s_currentMatchHistoryRetrievalId);
      v6 = HAS_ACCOUNT;
      if ( !matched )
        v6 = NO_ACCOUNT;
      SetMatchHistoryState(v1, s_currentMatchHistoryRetrievalId, v6);
      s_currentMatchHistoryRetrievalId = 0;
      ReleaseRawDataOwnership(v1);
      v7 = DB_HASH_INTERNAL("HandleTaskSucceeded", 1ui64, 0x2F63E54C8601FBD7ui64);
      v8 = j_va("t %zu gme", v7);
      GameBattles_TraceState(v1, v8, NULL);
      break;
    case MAX_INT:
      if ( (unsigned int)v1 >= 8 )
      {
        LODWORD(v15) = 8;
        LODWORD(v13) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2147, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_accountIsRegisteredReturn ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_accountIsRegisteredReturn )\n\t%i not in [0, %i)", v13, v15) )
          __debugbreak();
      }
      if ( s_accountIsRegisteredReturn[v1]._bytes_20[0] )
      {
        Com_Printf(25, "GAMEBATTLES(%i): Get Account returned, and we have an account.\n", (unsigned int)v1);
        SetAccountState(v1, HAS_ACCOUNT);
      }
      else
      {
        Com_Printf(25, "GAMEBATTLES(%i): Get Account returned, and we do not have an account.\n", (unsigned int)v1);
        SetAccountState(v1, NO_ACCOUNT);
      }
      break;
    case SIZE_T:
      v9 = s_expiredChatChannel;
      if ( *((_DWORD *)&s_checkChannelResponse.__vftable + 7) == 1 )
        v9 = 0i64;
      s_expiredChatChannel = v9;
      s_expiredCheckInProgress = 0;
      break;
    case PTRDIFF:
      if ( !s_currentMatchId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 945, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
        __debugbreak();
      if ( s_currentMatchId != *(_QWORD *)&s_createChannelResponse.m_channelInfo[32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 2173, ASSERT_TYPE_ASSERT, "(GetExpectedChatChannelIdForCurrentMatch() == channelInfo.m_channelID)", (const char *)&queryFormat, "GetExpectedChatChannelIdForCurrentMatch() == channelInfo.m_channelID") )
        __debugbreak();
      bdChannelInfo::operator=(&s_activeChatChannel, (const bdChannelInfo *)(&s_createChannelResponse.__vftable + 2));
      ChatChannelJoinSucceeded(v1);
      break;
    case LONG_DOUBLE:
      bdChannelInfo::bdChannelInfo(&__that);
      bdChannelInfo::operator=(&s_activeChatChannel, &__that);
      bdChannelInfo::~bdChannelInfo((bdChannelInfo *)(&__that.m_dataVersion + 1));
      bdReferencable::~bdReferencable((bdReferencable *)(&__that.m_dataVersion + 1));
      memset_0(&s_hostInfo, 0, sizeof(s_hostInfo));
      SetMatchJoinState(v1, IDLE);
      v10 = 0;
      p_isReady = &s_lobbyInfo.members[1].isReady;
      do
      {
        *(_WORD *)(p_isReady - 33) = 0;
        *(p_isReady - 31) = 0;
        *(_WORD *)(p_isReady - 1) = 0;
        p_isReady[1] = 0;
        *(_WORD *)(p_isReady + 31) = 0;
        p_isReady[33] = 0;
        *(_WORD *)(p_isReady + 63) = 0;
        p_isReady[65] = 0;
        *(_WORD *)(p_isReady + 95) = 0;
        p_isReady[97] = 0;
        *(_WORD *)(p_isReady + 127) = 0;
        p_isReady[129] = 0;
        *(_WORD *)(p_isReady + 159) = 0;
        p_isReady[161] = 0;
        *(_WORD *)(p_isReady + 191) = 0;
        p_isReady[193] = 0;
        *(_WORD *)(p_isReady + 223) = 0;
        p_isReady[225] = 0;
        *(_WORD *)(p_isReady + 255) = 0;
        p_isReady[257] = 0;
        *(_WORD *)(p_isReady + 287) = 0;
        p_isReady[289] = 0;
        *(_WORD *)(p_isReady + 319) = 0;
        p_isReady[321] = 0;
        v10 += 12;
        p_isReady += 384;
      }
      while ( v10 < 0xC );
      s_lobbyInfo.isValidLobby = 0;
      *(_QWORD *)s_partyLocalCommitReady = 0i64;
      ClientFromController = CL_Mgr_GetClientFromController(v1);
      Cbuf_ExecuteBufferInternal(ClientFromController, v1, "xstopparty", 0, 0);
      break;
    default:
      break;
  }
  ClearAsyncTask(v1);
}

/*
==============
LUI_DataBindingMLG_UpdateMLG
==============
*/
void LUI_DataBindingMLG_UpdateMLG(void)
{
  const dvar_t *v0; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  int ControllerFromClient; 
  __int64 v5; 
  GameBattleMatchJoinState v6; 
  unsigned int ScheduleMatchCount; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  GameBattleMatch *Match; 
  unsigned int matchId; 
  GameBattleMatch *MatchById; 
  GameBattleMatchHistoryState matchHistoryState; 
  unsigned int gameCount; 
  signed int v16; 
  signed int v17; 
  unsigned int v18; 
  char *v19; 
  char v20; 
  signed int v21; 
  unsigned __int16 v22; 
  unsigned __int16 v23; 
  unsigned __int16 v24; 
  const char *v25; 
  unsigned __int16 v26; 
  unsigned __int16 v27; 
  unsigned __int16 v28; 
  unsigned __int16 v29; 
  int v30; 
  unsigned __int16 v31; 
  bool v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  unsigned __int16 v37; 
  unsigned __int16 ModelFromPath; 
  char dest[64]; 
  char newValue[64]; 

  v0 = DVARBOOL_mlg_gamebattles_match;
  if ( DVARBOOL_mlg_gamebattles_match )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_mlg_gamebattles_match);
    if ( v0->current.enabled )
    {
      if ( CL_GetLocalClientActiveCount() <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3994, ASSERT_TYPE_ASSERT, "(CL_GetLocalClientActiveCount() > 0)", (const char *)&queryFormat, "CL_GetLocalClientActiveCount() > 0") )
        __debugbreak();
      GlobalModel = LUI_Model_GetGlobalModel();
      ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.mlg");
      v2 = ModelFromPath;
      v37 = LUI_Model_CreateModelFromPath(ModelFromPath, "matches");
      v3 = v37;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      v5 = ControllerFromClient;
      if ( (unsigned int)ControllerFromClient >= 8 )
      {
        LODWORD(v33) = ControllerFromClient;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4003, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v33, 8) )
          __debugbreak();
        LODWORD(v36) = 8;
        LODWORD(v34) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 4004, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( ( sizeof( *array_counter( s_requestScheduleRefresh ) ) + 0 ) )", "controllerIndex doesn't index ARRAY_COUNT( s_requestScheduleRefresh )\n\t%i not in [0, %i)", v34, v36) )
          __debugbreak();
      }
      if ( GameBattles_GetScheduleState(v5) == UNAVAILABLE && !s_requestScheduleRefresh[v5] )
        GameBattles_RefreshSchedule(v5);
      LOBYTE(v6) = 0;
      ScheduleMatchCount = GameBattles_GetScheduleMatchCount(v5);
      v8 = 0;
      v9 = 0;
      if ( ScheduleMatchCount )
      {
        v10 = 0;
        while ( 1 )
        {
          Match = GetMatch(v5, v9);
          matchId = Match->matchId;
          if ( (unsigned int)v5 >= 8 )
          {
            LODWORD(v35) = 8;
            LODWORD(v33) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 774, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v33, v35) )
              __debugbreak();
          }
          MatchById = GetMatchById(v5, matchId);
          if ( !MatchById )
            break;
          matchHistoryState = MatchById->matchHistoryState;
          if ( matchHistoryState == UNAVAILABLE )
            goto LABEL_23;
LABEL_25:
          gameCount = Match->gameCount;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          if ( gameCount )
          {
            v19 = (char *)Match->games + 16;
            do
            {
              v20 = *v19;
              if ( (*v19 & 1) != 0 )
              {
                if ( (v20 & 4) != 0 )
                  goto LABEL_37;
                if ( (v20 & 2) != 0 )
                  ++v16;
                else
                  ++v17;
              }
              ++v18;
              v19 += 20;
            }
            while ( v18 < gameCount );
          }
          v21 = gameCount >> 1;
          if ( v16 <= v21 && v17 <= v21 && matchHistoryState == HAS_ACCOUNT )
          {
            Com_sprintf(dest, 0x40ui64, "%i", v10);
            v22 = LUI_Model_CreateModelFromPath(v3, dest);
            v23 = LUI_Model_CreateModelFromPath(v22, "matchId");
            Com_sprintf(newValue, 0x40ui64, "%i", Match->matchId);
            LUI_Model_SetString(v23, newValue);
            v24 = LUI_Model_CreateModelFromPath(v22, "matchTime");
            v25 = j_va("%u", Match->matchTimeUTC);
            LUI_Model_SetString(v24, v25);
            v26 = LUI_Model_CreateModelFromPath(v22, "gameCount");
            LUI_Model_SetInt(v26, Match->gameCount);
            ++v10;
            v3 = v37;
            s_luiMatchId2 = Match->matchId;
            s_luiGameCount = Match->gameCount;
            s_luiMatchTime = Match->matchTimeUTC;
          }
LABEL_37:
          if ( ++v9 >= ScheduleMatchCount )
          {
            v8 = v10;
            v2 = ModelFromPath;
            goto LABEL_39;
          }
        }
        matchHistoryState = UNAVAILABLE;
LABEL_23:
        if ( !s_currentMatchHistoryRetrievalId )
          GameBattles_RefreshMatchHistory(v5, Match->matchId);
        goto LABEL_25;
      }
LABEL_39:
      v27 = LUI_Model_CreateModelFromPath(v2, "gameInProgress");
      LUI_Model_SetBool(v27, s_lobbyInfo.inGame);
      v28 = LUI_Model_CreateModelFromPath(v2, "count");
      LUI_Model_SetInt(v28, v8);
      v29 = LUI_Model_CreateModelFromPath(v2, "matchJoinState");
      if ( (unsigned int)v5 >= 8 )
      {
        LODWORD(v35) = 8;
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v33, v35) )
          __debugbreak();
      }
      v30 = 0;
      if ( !s_requestLeaveMatchLobby )
        v30 = s_matchJoinState[v5];
      LUI_Model_SetInt(v29, v30);
      v31 = LUI_Model_CreateModelFromPath(v2, "isLocalCommitReady");
      LUI_Model_SetBool(v31, s_partyLocalCommitReady[v5]);
      s_luiGameInProgress = s_lobbyInfo.inGame;
      if ( (unsigned int)v5 >= 8 )
      {
        LODWORD(v35) = 8;
        LODWORD(v33) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 929, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v33, v35) )
          __debugbreak();
      }
      if ( !s_requestLeaveMatchLobby )
        v6 = s_matchJoinState[v5];
      v32 = s_partyLocalCommitReady[v5];
      s_luiJoinState = v6;
      s_luiCommitReady = v32;
    }
  }
}

/*
==============
LoadMLGMapping
==============
*/
void LoadMLGMapping()
{
  int v0; 
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  const char *ColumnValueForRow; 
  const char *v5; 
  unsigned int v6; 
  unsigned int v7; 
  GameBattleGametype *p_gametypeIndex; 
  __int64 v9; 
  GameBattleGametypeMapping *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  const char *v14; 
  const char *v15; 
  unsigned int v16; 
  unsigned int v17; 
  GameBattleMap *p_mapIndex; 
  __int64 v19; 
  GameBattleMapMapping *v20; 
  char *fmt; 
  int RowCount; 
  int v23; 
  StringTable *tablePtr; 

  memset_0(gametypeNameMap, 0, sizeof(gametypeNameMap));
  memset_0(mapNameMap, 0, sizeof(mapNameMap));
  v0 = 0;
  v1 = 0i64;
  StringTable_GetAsset("mp/gameTypesTable.csv", (const StringTable **)&tablePtr);
  v2 = 0;
  RowCount = StringTable_GetRowCount(tablePtr);
  v3 = RowCount;
  if ( RowCount )
  {
    do
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v2, 0);
      v5 = StringTable_GetColumnValueForRow(tablePtr, v2, 21);
      v6 = atoi(v5);
      if ( v6 )
      {
        v7 = 0;
        p_gametypeIndex = &gametypeNameMap[0].gametypeIndex;
        do
        {
          if ( v6 == p_gametypeIndex->id )
          {
            LODWORD(fmt) = v2;
            Com_PrintError(25, "%s: Duplicated game mode mlg_id '%d' in mp/gameTypesTable.csv for row '%d', '%s' but is being used by '%s'\n", "c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", v6, fmt, ColumnValueForRow, gametypeNameMap[v7].gametypeString);
            ++v0;
          }
          ++v7;
          p_gametypeIndex += 10;
        }
        while ( v7 < 0x40 );
        v3 = RowCount;
        if ( (unsigned int)v1 < 0x40 )
        {
          v9 = v1;
          v1 = (unsigned int)(v1 + 1);
          v10 = &gametypeNameMap[v9];
          Core_strcpy(v10->gametypeString, 0x24ui64, ColumnValueForRow);
          v10->gametypeIndex.id = v6;
        }
        else
        {
          Com_PrintError(25, "%s: GAMEBATTLES: Error reading game modes. Bump GAMEBATTLES_MAX_MODES, in %s.\n", "LoadMLGMapping", "c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp");
        }
      }
      ++v2;
    }
    while ( v2 < v3 );
    if ( (unsigned int)v1 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3867, ASSERT_TYPE_ASSERT, "(modeCount < (64))", (const char *)&queryFormat, "modeCount < GAMEBATTLES_MAX_MODES") )
      __debugbreak();
  }
  v11 = 0i64;
  StringTable_GetAsset("mp/mapInfo.csv", (const StringTable **)&tablePtr);
  v12 = 0;
  v23 = StringTable_GetRowCount(tablePtr);
  v13 = v23;
  if ( v23 )
  {
    do
    {
      v14 = StringTable_GetColumnValueForRow(tablePtr, v12, 0);
      v15 = StringTable_GetColumnValueForRow(tablePtr, v12, 29);
      v16 = atoi(v15);
      if ( v16 )
      {
        v17 = 0;
        p_mapIndex = &mapNameMap[0].mapIndex;
        do
        {
          if ( v16 == p_mapIndex->id )
          {
            LODWORD(fmt) = v12;
            Com_PrintError(25, "%s: Duplicated game mode mlg_id '%d' in mp/mapInfo.csv for row '%d', '%s' but is being used by '%s'\n", "c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", v16, fmt, v14, mapNameMap[v17].mapString);
            ++v0;
          }
          ++v17;
          p_mapIndex += 10;
        }
        while ( v17 < 0x40 );
        v13 = v23;
        if ( (unsigned int)v11 < 0x40 )
        {
          v19 = v11;
          v11 = (unsigned int)(v11 + 1);
          v20 = &mapNameMap[v19];
          Core_strcpy(v20->mapString, 0x24ui64, v14);
          v20->mapIndex.id = v16;
        }
        else
        {
          Com_PrintError(25, "%s: GAMEBATTLES: Error reading map names. Too many maps defined, bump GAMEBATTLES_MAX_MAPS, in %s.\n", "LoadMLGMapping", "c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp");
        }
      }
      ++v12;
    }
    while ( v12 < v13 );
    if ( (unsigned int)v11 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3907, ASSERT_TYPE_ASSERT, "(mapCount < (64))", (const char *)&queryFormat, "mapCount < GAMEBATTLES_MAX_MAPS") )
      __debugbreak();
  }
  if ( v0 )
  {
    Com_PrintError(25, "There was an error parsing a csv file, reading the mlg_id field. Please make sure to set it to 0.\n");
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3914, ASSERT_TYPE_ASSERT, "(mlgIdFieldDuplicatedInCsvFile == 0 && \"mlg_id field duplicated in a csv file - set it to 0\")", (const char *)&queryFormat, "mlgIdFieldDuplicatedInCsvFile == 0 && \"mlg_id field duplicated in a csv file - set it to 0\"") )
      __debugbreak();
  }
  s_mlgGameMappingLoaded = 1;
}

/*
==============
MLGLobbyMsg_SendLobbyStateUpdate
==============
*/
void MLGLobbyMsg_SendLobbyStateUpdate(const int controllerIndex, const XUID *receivingUserId)
{
  int MemberByXUID; 
  MLGLobbyMemberState *v6; 
  __int64 v7; 
  const XUID *Xuid; 
  __int64 v10; 
  __int64 v17; 
  const char *v18; 
  XUID result; 
  XUID message; 
  __int64 v21[3]; 
  MLGLobbyMemberState v22; 

  MemberByXUID = MLGLobby_FindMemberByXUID(receivingUserId);
  _RBX = &s_lobbyInfo;
  if ( MemberByXUID != -1 )
    s_lobbyInfo.members[MemberByXUID].isOnline = 1;
  XUID::XUID(&message);
  v6 = &v22;
  memset(v21, 0, sizeof(v21));
  v7 = 12i64;
  do
  {
    MLGLobbyMemberState::MLGLobbyMemberState(v6++);
    --v7;
  }
  while ( v7 );
  Xuid = Live_GetXuid(&result, controllerIndex);
  XUID::operator=(&message, Xuid);
  _RDX = v21;
  s_lobbyInfo.isValidLobby = 1;
  v10 = 3i64;
  do
  {
    _RDX += 16;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups xmm1, xmmword ptr [rbx+70h]
    }
    _RBX = (MLGLobby *)((char *)_RBX + 128);
    __asm
    {
      vmovups ymmword ptr [rdx-80h], ymm0
      vmovups ymm0, ymmword ptr [rbx-60h]
      vmovups ymmword ptr [rdx-60h], ymm0
      vmovups ymm0, ymmword ptr [rbx-40h]
      vmovups ymmword ptr [rdx-40h], ymm0
      vmovups xmm0, xmmword ptr [rbx-20h]
      vmovups xmmword ptr [rdx-20h], xmm0
      vmovups xmmword ptr [rdx-10h], xmm1
    }
    --v10;
  }
  while ( v10 );
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  v17 = *(_QWORD *)&_RBX->gameIndex;
  __asm { vmovups xmmword ptr [rdx], xmm0 }
  _RDX[2] = v17;
  MLGLobbyMsg_SendMessage(controllerIndex, receivingUserId, &message, 0x210u, DODGE);
  v18 = XUID::ToString((XUID *)receivingUserId);
  Com_Printf(25, "GAMEBATTLES(%i): Sending current lobby state to %s .\n", (unsigned int)controllerIndex, v18);
  MLGLobby_DumpInternalState();
}

/*
==============
MLGLobbyMsg_SendMemberState
==============
*/
void MLGLobbyMsg_SendMemberState(const int controllerIndex, const XUID *destUserId)
{
  __int64 v2; 
  unsigned __int64 PlatformUserId; 
  int v5; 
  unsigned __int64 *p_platformId; 
  __int64 v7; 
  unsigned __int64 v10; 
  const char *v11; 
  XUID message[4]; 
  XUID result; 

  v2 = controllerIndex;
  Live_GetXuid(&result, controllerIndex);
  if ( !GameBattles_IsPlayerWhitelisted(&result) )
  {
    PlatformUserId = Live_GetPlatformUserId(v2);
    XUID::NullXUID(message);
    v5 = 0;
    p_platformId = &s_lobbyInfo.members[0].platformId;
    memset(&message[1], 0, 17);
    while ( *p_platformId != PlatformUserId )
    {
      ++v5;
      p_platformId += 4;
      if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      {
        v5 = -1;
        goto LABEL_7;
      }
    }
    if ( v5 != -1 )
      goto LABEL_9;
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3527, ASSERT_TYPE_ASSERT, "(memberIdx != (-1))", (const char *)&queryFormat, "memberIdx != GAMEBATTLES_CHAT_INVALID_MEMBER_SLOT") )
      __debugbreak();
LABEL_9:
    v7 = v5;
    _RBX = &s_lobbyInfo.members[v7];
    s_lobbyInfo.members[v7].platformId = PlatformUserId;
    XUID::operator=(&s_lobbyInfo.members[v7].xuid, &result);
    s_lobbyInfo.members[v7].usingGamepad = s_localInputIsGamepad[v2];
    s_lobbyInfo.members[v7].isOnline = 1;
    s_lobbyInfo.members[v7].platformType[0] = GetClientPlatform();
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx]
      vmovups ymmword ptr [rsp+68h+message.m_id], ymm0
    }
    MLGLobbyMsg_SendMessage(v2, destUserId, message, 0x20u, COUNT);
    Com_Printf(25, "GAMEBATTLES(%i): Sending mameber state.\n", (unsigned int)v2);
    MLGLobby_DumpInternalState();
    v10 = DB_HASH_INTERNAL("MLGLobbyMsg_SendMemberState", 1ui64, 0x2F63E04C8601F358ui64);
    v11 = j_va("m %zu s", v10);
    GameBattles_TraceState(v2, v11, NULL);
  }
}

/*
==============
MLGLobbyMsg_SendMessage
==============
*/
void MLGLobbyMsg_SendMessage(const int controllerIndex, const XUID *recievingUserId, const void *message, const unsigned int messageSize, const MLGLobbyMessageType messageType)
{
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  bdRemoteTask *m_ptr; 
  unsigned __int64 v12; 
  unsigned __int64 UniversalId; 
  char *fmt; 
  __int64 messageSizea; 
  unsigned int v17; 
  bdReference<bdRemoteTask> result; 
  bdReference<bdRemoteTask> v19; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v17 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3501, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v17) )
      __debugbreak();
  }
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  if ( XUID::ToUint64((XUID *)recievingUserId) )
  {
    v12 = XUID::ToUint64((XUID *)recievingUserId);
    LODWORD(messageSizea) = messageType;
    Com_Printf(25, "GAMEBATTLES(%i): Dispatching whisper to chat channel %zu, user %zu, of message type: %u.\n", (unsigned int)controllerIndex, s_activeChatChannel.m_channelID, v12, messageSizea);
    UniversalId = XUID::GetUniversalId((XUID *)recievingUserId);
    DWMessaging::whisperToChannelMember(Messaging, &v19, "gamebattles", s_activeChatChannel.m_channelID, UniversalId, message, messageSize, messageType);
    if ( v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = v19.m_ptr;
LABEL_11:
      if ( m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))m_ptr->~bdReferencable)(m_ptr, 1i64);
    }
  }
  else
  {
    LODWORD(fmt) = messageType;
    Com_Printf(25, "GAMEBATTLES(%i): Dispatching broadcast to chat channel %zu of message type: %u.\n", (unsigned int)controllerIndex, s_activeChatChannel.m_channelID, fmt);
    DWMessaging::sendToChannel(Messaging, &result, "gamebattles", s_activeChatChannel.m_channelID, message, messageSize, messageType);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      m_ptr = result.m_ptr;
      goto LABEL_11;
    }
  }
}

/*
==============
MLGLobby_DumpInternalState
==============
*/
void MLGLobby_DumpInternalState()
{
  unsigned int v0; 
  unsigned __int8 *p_usingGamepad; 
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned int m_numSubscribers; 
  __int64 v10; 
  unsigned int m_dataVersion; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  Com_Printf(25, "GAMEBATTLES: LOBBY STATE BEGIN\n");
  m_dataVersion = s_activeChatChannel.m_dataVersion;
  m_numSubscribers = s_activeChatChannel.m_numSubscribers;
  Com_Printf(25, "GAMEBATTLES: - Channel id: %zu, host xuid: %zu, participants: %u, data version: %u\n", s_activeChatChannel.m_channelID, s_activeChatChannel.m_adminID, m_numSubscribers, m_dataVersion);
  Com_Printf(25, "GAMEBATTLES: - Match start: %d, Intermission start: %d\n", (unsigned int)s_lobbyInfo.matchStartTimestamp, s_lobbyInfo.intermissionStartEpochTime);
  LODWORD(v12) = s_lobbyInfo.inGame;
  LODWORD(v10) = s_lobbyInfo.lastResultIndex;
  Com_Printf(25, "GAMEBATTLES: - Match id: %u, active game: %u, last result: %u, in game: %u\n", s_lobbyInfo.matchId, s_lobbyInfo.gameIndex, v10, v12);
  Com_Printf(25, "GAMEBATTLES: Members:\n");
  v0 = 0;
  p_usingGamepad = &s_lobbyInfo.members[0].usingGamepad;
  do
  {
    v2 = *(p_usingGamepad - 1);
    v3 = *p_usingGamepad;
    v4 = *(p_usingGamepad - 2);
    v5 = *(p_usingGamepad - 3);
    v6 = *((_DWORD *)p_usingGamepad - 2);
    v7 = *((_QWORD *)p_usingGamepad - 2);
    v8 = XUID::ToUint64((XUID *)p_usingGamepad - 3);
    LODWORD(v17) = v2;
    LODWORD(v16) = v3;
    LODWORD(v15) = v4;
    LODWORD(v14) = v5;
    LODWORD(v13) = v6;
    Com_Printf(25, "GAMEBATTLES: \t%2d - xuid: %zu (%zu, %u), online: %d, ready: %d gpad: %d, inGame: %d\n", v0++, v8, v7, v13, v14, v15, v16, v17);
    p_usingGamepad += 32;
  }
  while ( v0 < 0xC );
  Com_Printf(25, "GAMEBATTLES: LOBBY STATE END\n");
}

/*
==============
MLGLobby_FindMemberByXUID
==============
*/
__int64 MLGLobby_FindMemberByXUID(const XUID *xuid)
{
  unsigned int v2; 

  if ( XUID::IsNull((XUID *)xuid) )
    return 0xFFFFFFFFi64;
  v2 = 0;
  while ( !XUID::operator==(&s_lobbyInfo.members[v2].xuid, xuid) )
  {
    if ( (int)++v2 >= 12 )
      return 0xFFFFFFFFi64;
  }
  return v2;
}

/*
==============
MLGLobby_PopulateLobbyForMatchId
==============
*/
void MLGLobby_PopulateLobbyForMatchId(const int controllerIndex, unsigned int matchId)
{
  unsigned int v3; 
  GameBattleMatch *v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  unsigned int v16; 
  GameBattleMatch *MatchById; 

  v3 = matchId;
  if ( !matchId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 692, ASSERT_TYPE_ASSERT, "(matchId != (0))", (const char *)&queryFormat, "matchId != GAMEBATTLE_INVALID_MATCHID") )
    __debugbreak();
  if ( !s_currentMatchId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 693, ASSERT_TYPE_ASSERT, "(GameBattles_IsGameBattleActive())", (const char *)&queryFormat, "GameBattles_IsGameBattleActive()") )
    __debugbreak();
  if ( s_lobbyInfo.matchId != v3 )
  {
    MatchById = GetMatchById(controllerIndex, v3);
    v4 = MatchById;
    if ( MatchById )
    {
      memset_0(&s_lobbyInfo, 0, sizeof(s_lobbyInfo));
      v5 = 0;
      v16 = 0;
      if ( MatchById->teamCount )
      {
        do
        {
          v6 = v5;
          v7 = (__int64)&v4->teams[v6];
          if ( v4->teams[v6].playerCount )
          {
            v8 = 6 * v5;
            v9 = -6 * v5;
            do
            {
              v10 = *(_DWORD *)(v7 + 80i64 * (unsigned int)(v9 + v8) + 40);
              v11 = v7 + 80i64 * (unsigned int)(v9 + v8) + 40;
              if ( (unsigned int)v8 >= 0xC )
              {
                LODWORD(v14) = 12;
                LODWORD(v13) = v8;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 681, ASSERT_TYPE_ASSERT, "(unsigned)( memberIdx ) < (unsigned)( ((2) * (6)) )", "memberIdx doesn't index GAMEBATTLE_MATCH_MAX_PLAYERS\n\t%i not in [0, %i)", v13, v14) )
                  __debugbreak();
              }
              v12 = v8;
              if ( !XUID::IsNull(&s_lobbyInfo.members[v12].xuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 682, ASSERT_TYPE_ASSERT, "(s_lobbyInfo.members[memberIdx].xuid.IsNull())", (const char *)&queryFormat, "s_lobbyInfo.members[memberIdx].xuid.IsNull()") )
                __debugbreak();
              if ( s_lobbyInfo.members[v12].mlgId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 683, ASSERT_TYPE_ASSERT, "(s_lobbyInfo.members[memberIdx].mlgId == 0)", (const char *)&queryFormat, "s_lobbyInfo.members[memberIdx].mlgId == 0") )
                __debugbreak();
              if ( s_lobbyInfo.members[v12].platformId )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 684, ASSERT_TYPE_ASSERT, "(s_lobbyInfo.members[memberIdx].platformId == 0)", (const char *)&queryFormat, "s_lobbyInfo.members[memberIdx].platformId == 0") )
                  __debugbreak();
              }
              ++v8;
              s_lobbyInfo.members[v12].mlgId = v10;
              s_lobbyInfo.members[v12].platformId = *(_QWORD *)(v11 + 8);
            }
            while ( (unsigned int)(v9 + v8) < *(_DWORD *)(v7 + 520) );
            v5 = v16;
            v4 = MatchById;
          }
          v16 = ++v5;
        }
        while ( v5 < v4->teamCount );
        v3 = matchId;
      }
      s_lobbyInfo.matchId = v3;
    }
  }
}

/*
==============
MLGLobby_SetMemberOnlineState
==============
*/
void MLGLobby_SetMemberOnlineState(const int controllerIndex, unsigned __int64 platformUserId, const XUID *xuid, bool isOnline)
{
  unsigned __int64 *p_platformId; 
  int v7; 
  __int64 v8; 

  p_platformId = &s_lobbyInfo.members[0].platformId;
  v7 = 0;
  while ( *p_platformId != platformUserId )
  {
    ++v7;
    p_platformId += 4;
    if ( (__int64)p_platformId >= (__int64)&s_hostInfo )
      goto LABEL_6;
  }
  if ( v7 == -1 )
  {
LABEL_6:
    Com_Printf(25, "GAMEBATTLES(%d): Trying to update an invalid mlg lobby member\n", (unsigned int)controllerIndex);
    return;
  }
  v8 = v7;
  XUID::operator=(&s_lobbyInfo.members[v8].xuid, xuid);
  s_lobbyInfo.members[v8].isOnline = isOnline;
  *(_WORD *)&s_lobbyInfo.members[v8].isReady = 0;
  Com_Printf(25, "GAMEBATTLES(%i): Set Member Online State.\n", (unsigned int)controllerIndex);
  MLGLobby_DumpInternalState();
}

/*
==============
MapGameBattleGametypeToString
==============
*/
GameBattleGametypeMapping *MapGameBattleGametypeToString(const GameBattleGametype gametype)
{
  int v2; 
  GameBattleGametype *i; 

  if ( !s_mlgGameMappingLoaded )
    LoadMLGMapping();
  v2 = 0;
  for ( i = &gametypeNameMap[0].gametypeIndex; gametype.id != i->id; i += 10 )
  {
    if ( (unsigned int)++v2 >= 0x40 )
      return (GameBattleGametypeMapping *)((char *)&queryFormat.fmt + 3);
  }
  if ( v2 != gametype.id - 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 3931, ASSERT_TYPE_ASSERT, "(i == gametype.id - 1)", (const char *)&queryFormat, "i == gametype.id - 1") )
    __debugbreak();
  return &gametypeNameMap[v2];
}

/*
==============
ReleaseRawDataOwnership
==============
*/
void ReleaseRawDataOwnership(const int controllerIndex)
{
  GameBattlesRawDataBufferUsage v1; 
  __int32 v2; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1244, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v1 = s_rawDataUsage;
  if ( s_rawDataUsage == UNUSED )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1245, ASSERT_TYPE_ASSERT, "(s_rawDataUsage != GameBattlesRawDataBufferUsage::UNUSED)", (const char *)&queryFormat, "s_rawDataUsage != GameBattlesRawDataBufferUsage::UNUSED") )
      __debugbreak();
    v1 = s_rawDataUsage;
  }
  v2 = v1 - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      *((_QWORD *)&s_matchEventInfo[0].__vftable + 3) = 0i64;
      s_matchEventInfo[0].m_eventDescLength = 0;
      s_matchEventInfo[0].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[0].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[1].__vftable + 3) = 0i64;
      s_matchEventInfo[1].m_eventDescLength = 0;
      s_matchEventInfo[1].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[1].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[2].__vftable + 3) = 0i64;
      s_matchEventInfo[2].m_eventDescLength = 0;
      s_matchEventInfo[2].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[2].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[3].__vftable + 3) = 0i64;
      s_matchEventInfo[3].m_eventDescLength = 0;
      s_matchEventInfo[3].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[3].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[4].__vftable + 3) = 0i64;
      s_matchEventInfo[4].m_eventDescLength = 0;
      s_matchEventInfo[4].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[4].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[5].__vftable + 3) = 0i64;
      s_matchEventInfo[5].m_eventDescLength = 0;
      s_matchEventInfo[5].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[5].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[6].__vftable + 3) = 0i64;
      s_matchEventInfo[6].m_eventDescLength = 0;
      s_matchEventInfo[6].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[6].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[7].__vftable + 3) = 0i64;
      s_matchEventInfo[7].m_eventDescLength = 0;
      s_matchEventInfo[7].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[7].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[8].__vftable + 3) = 0i64;
      s_matchEventInfo[8].m_eventDescLength = 0;
      s_matchEventInfo[8].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[8].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[9].__vftable + 3) = 0i64;
      s_matchEventInfo[9].m_eventDescLength = 0;
      s_matchEventInfo[9].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[9].__vftable + 2) = 0i64;
      *((_QWORD *)&s_matchEventInfo[10].__vftable + 3) = 0i64;
      s_matchEventInfo[10].m_eventDescLength = 0;
      s_matchEventInfo[10].m_globalEventNum = 0i64;
      *((_QWORD *)&s_matchEventInfo[10].__vftable + 2) = 0i64;
    }
  }
  else
  {
    s_scheduledMatchData[0].m_matchMetadata = NULL;
    s_scheduledMatchData[0].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[0].__vftable + 2) = 0i64;
    s_scheduledMatchData[1].m_matchMetadata = NULL;
    s_scheduledMatchData[1].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[1].__vftable + 2) = 0i64;
    s_scheduledMatchData[2].m_matchMetadata = NULL;
    s_scheduledMatchData[2].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[2].__vftable + 2) = 0i64;
    s_scheduledMatchData[3].m_matchMetadata = NULL;
    s_scheduledMatchData[3].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[3].__vftable + 2) = 0i64;
    s_scheduledMatchData[4].m_matchMetadata = NULL;
    s_scheduledMatchData[4].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[4].__vftable + 2) = 0i64;
    s_scheduledMatchData[5].m_matchMetadata = NULL;
    s_scheduledMatchData[5].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[5].__vftable + 2) = 0i64;
    s_scheduledMatchData[6].m_matchMetadata = NULL;
    s_scheduledMatchData[6].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[6].__vftable + 2) = 0i64;
    s_scheduledMatchData[7].m_matchMetadata = NULL;
    s_scheduledMatchData[7].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[7].__vftable + 2) = 0i64;
    s_scheduledMatchData[8].m_matchMetadata = NULL;
    s_scheduledMatchData[8].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[8].__vftable + 2) = 0i64;
    s_scheduledMatchData[9].m_matchMetadata = NULL;
    s_scheduledMatchData[9].m_matchMetadataLength = 0;
    *((_QWORD *)&s_scheduledMatchData[9].__vftable + 2) = 0i64;
  }
  s_rawDataOwner = -1;
  s_rawDataUsage = UNUSED;
}

/*
==============
SetAccountState
==============
*/
void SetAccountState(const int controllerIndex, const GameBattleAccountState state)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  s_accountState[v2] = state;
}

/*
==============
SetMatchHistoryState
==============
*/
void SetMatchHistoryState(const int controllerIndex, const unsigned int matchId, const GameBattleMatchHistoryState state)
{
  GameBattleMatch *MatchById; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 790, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  MatchById = GetMatchById(controllerIndex, matchId);
  if ( MatchById )
    MatchById->matchHistoryState = state;
  else
    Com_PrintError(131097, "GAMEBATTLES(%i): SetMatchHistoryState called with matchId (%u) that is not in schedule.\n", (unsigned int)controllerIndex, matchId);
}

/*
==============
SetMatchJoinState
==============
*/
void SetMatchJoinState(const int controllerIndex, const GameBattleMatchJoinState state)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 938, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  s_matchJoinState[v2] = state;
}

/*
==============
SetMatchReportState
==============
*/
void SetMatchReportState(const int controllerIndex, const GameBattleMatchReportState state)
{
  int v4; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 824, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  s_matchReportState = state;
}

/*
==============
SetScheduleState
==============
*/
void SetScheduleState(const int controllerIndex, const GameBattleScheduleState state)
{
  __int64 v2; 
  int v5; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 613, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  s_schedule[v2].state = state;
}

/*
==============
StartAsyncTask
==============
*/
void StartAsyncTask(const int controllerIndex, const GameBattleAsyncTaskType taskType)
{
  __int64 v2; 
  GameBattleAsyncTask *v4; 
  int v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v4 = &s_activeTask[v2];
  if ( (unsigned int)v2 >= 8 )
  {
    LODWORD(v7) = 8;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1277, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( (8) )", "controllerIndex doesn't index GAMEBATTLES_MAX_USERS\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( v4->taskType && (!v4->needsRetry || v4->taskType != taskType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\mlg_gamebattles.cpp", 1293, ASSERT_TYPE_ASSERT, "(!AsyncTaskActive( controllerIndex ) || ( asyncTask->needsRetry && asyncTask->taskType == taskType ))", (const char *)&queryFormat, "!AsyncTaskActive( controllerIndex ) || ( asyncTask->needsRetry && asyncTask->taskType == taskType )") )
    __debugbreak();
  v4->taskType = taskType;
  v4->needsRetry = 0;
  v5 = Sys_Milliseconds();
  ++v4->numTries;
  v4->lastRetryTime = v5;
}

