/*
==============
PlatformSessionsHSMEnabled
==============
*/

bool __fastcall PlatformSessionsHSMEnabled()
{
  return ?PlatformSessionsHSMEnabled@@YA_NXZ();
}

/*
==============
Plat_ShouldHostSyncPrivatePartyVersionsBeforeSleeping
==============
*/

bool __fastcall Plat_ShouldHostSyncPrivatePartyVersionsBeforeSleeping()
{
  return ?Plat_ShouldHostSyncPrivatePartyVersionsBeforeSleeping@@YA_NXZ();
}

/*
==============
Plat_FollowPrivatePartyHostToGameLobby
==============
*/

void __fastcall Plat_FollowPrivatePartyHostToGameLobby(const int controllerIndex, sessionParameters *params)
{
  ?Plat_FollowPrivatePartyHostToGameLobby@@YAXHPEAUsessionParameters@@@Z(controllerIndex, params);
}

/*
==============
LeavePrivatePartySession_CompletedSuccessfully
==============
*/

void __fastcall LeavePrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?LeavePrivatePartySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_RemoveFirstUserInGraveyardFromSession
==============
*/

void __fastcall Plat_RemoveFirstUserInGraveyardFromSession(const int controllerIndex)
{
  ?Plat_RemoveFirstUserInGraveyardFromSession@@YAXH@Z(controllerIndex);
}

/*
==============
CreatePrivatePartySession_Failed
==============
*/

void __fastcall CreatePrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  ?CreatePrivatePartySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_CheckIfGameLobbySessionExistsForController
==============
*/

bool __fastcall Plat_CheckIfGameLobbySessionExistsForController(const int controllerIndex)
{
  return ?Plat_CheckIfGameLobbySessionExistsForController@@YA_NH@Z(controllerIndex);
}

/*
==============
Plat_JoinPrivatePartySession
==============
*/

void __fastcall Plat_JoinPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_JoinPrivatePartySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
UpdateGameLobbySessionData_CompletedSuccessfully
==============
*/

void __fastcall UpdateGameLobbySessionData_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?UpdateGameLobbySessionData_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_RemoveSplitscreenUserFromGameLobbySession
==============
*/

void __fastcall Plat_RemoveSplitscreenUserFromGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_RemoveSplitscreenUserFromGameLobbySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_UpdateGameLobbySessionInfo
==============
*/

void __fastcall Plat_UpdateGameLobbySessionInfo(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_UpdateGameLobbySessionInfo@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_DoesASessionExistPerParty
==============
*/

bool __fastcall Plat_DoesASessionExistPerParty()
{
  return ?Plat_DoesASessionExistPerParty@@YA_NXZ();
}

/*
==============
JoinPrivatePartySession_Failed
==============
*/

void __fastcall JoinPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  ?JoinPrivatePartySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_CheckIfSessionIdMatchesInPrivatePartySessionForControllers
==============
*/

bool __fastcall Plat_CheckIfSessionIdMatchesInPrivatePartySessionForControllers(const int controllerIndex1, const int controllerIndex2)
{
  return ?Plat_CheckIfSessionIdMatchesInPrivatePartySessionForControllers@@YA_NHH@Z(controllerIndex1, controllerIndex2);
}

/*
==============
LeaveGameLobbySession_Failed
==============
*/

void __fastcall LeaveGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  ?LeaveGameLobbySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_GetCurrentGameLobbySessionId
==============
*/

void __fastcall Plat_GetCurrentGameLobbySessionId(const int controllerIndex, _GUID *sessionId)
{
  ?Plat_GetCurrentGameLobbySessionId@@YAXHPEAU_GUID@@@Z(controllerIndex, sessionId);
}

/*
==============
CreatePrivatePartySession_CompletedSuccessfully
==============
*/

void __fastcall CreatePrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?CreatePrivatePartySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_SessionTaskFailed
==============
*/

void Plat_SessionTaskFailed(void)
{
  ?Plat_SessionTaskFailed@@YAXXZ();
}

/*
==============
GetCurrentGameLobbySessionIdString
==============
*/

void __fastcall GetCurrentGameLobbySessionIdString(const int controllerIndex, char *sessionIdStringOut)
{
  ?GetCurrentGameLobbySessionIdString@@YAXHPEAD@Z(controllerIndex, sessionIdStringOut);
}

/*
==============
FollowPrivatePartyHostToGameLobby_CompletedSuccessfully
==============
*/

void __fastcall FollowPrivatePartyHostToGameLobby_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?FollowPrivatePartyHostToGameLobby_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
GetCurrentPrivatePartySessionIdString
==============
*/

void __fastcall GetCurrentPrivatePartySessionIdString(const int controllerIndex, char *sessionIdStringOut)
{
  ?GetCurrentPrivatePartySessionIdString@@YAXHPEAD@Z(controllerIndex, sessionIdStringOut);
}

/*
==============
JoinGameLobbySession_CompletedSuccessfully
==============
*/

void __fastcall JoinGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?JoinGameLobbySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_ClearSessionCacheForController
==============
*/

void __fastcall Plat_ClearSessionCacheForController(const int controllerIndex)
{
  ?Plat_ClearSessionCacheForController@@YAXH@Z(controllerIndex);
}

/*
==============
Plat_SetPlatformInviteJoinAcceptData
==============
*/

void __fastcall Plat_SetPlatformInviteJoinAcceptData(PlatformInviteJoinAcceptData joinData)
{
  ?Plat_SetPlatformInviteJoinAcceptData@@YAXUPlatformInviteJoinAcceptData@@@Z(joinData);
}

/*
==============
Plat_UpdateGameLobbySessionData
==============
*/

void __fastcall Plat_UpdateGameLobbySessionData(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_UpdateGameLobbySessionData@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_ResetSessionTaskFailureCount
==============
*/

void Plat_ResetSessionTaskFailureCount(void)
{
  ?Plat_ResetSessionTaskFailureCount@@YAXXZ();
}

/*
==============
JoinGameLobbySession_Failed
==============
*/

void __fastcall JoinGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  ?JoinGameLobbySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
UpdatePrivatePartySessionData_CompletedSuccessfully
==============
*/

void __fastcall UpdatePrivatePartySessionData_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?UpdatePrivatePartySessionData_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_IsPlatformInviteJoinAcceptDataValid
==============
*/

bool __fastcall Plat_IsPlatformInviteJoinAcceptDataValid()
{
  return ?Plat_IsPlatformInviteJoinAcceptDataValid@@YA_NXZ();
}

/*
==============
Plat_LeavePrivatePartySession
==============
*/

void __fastcall Plat_LeavePrivatePartySession(const int controllerIndex)
{
  ?Plat_LeavePrivatePartySession@@YAXH@Z(controllerIndex);
}

/*
==============
AddSplitscreenUserToPrivatePartySession_Failed
==============
*/

void __fastcall AddSplitscreenUserToPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  ?AddSplitscreenUserToPrivatePartySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
CreateGameLobbySession_CompletedSuccessfully
==============
*/

void __fastcall CreateGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?CreateGameLobbySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_UpdatePrivatePartySessionInfo
==============
*/

void __fastcall Plat_UpdatePrivatePartySessionInfo(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_UpdatePrivatePartySessionInfo@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_IsCachedSessionInfoDifferentInGameLobbySession
==============
*/

bool __fastcall Plat_IsCachedSessionInfoDifferentInGameLobbySession(sessionParameters *params)
{
  return ?Plat_IsCachedSessionInfoDifferentInGameLobbySession@@YA_NPEAUsessionParameters@@@Z(params);
}

/*
==============
CleanupSession_Failed
==============
*/

void __fastcall CleanupSession_Failed(SessionTaskResponseData *failureData)
{
  ?CleanupSession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
CleanupSession_CompletedSuccessfully
==============
*/

void __fastcall CleanupSession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?CleanupSession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_CheckIfPrivatePartySessionExistsForController
==============
*/

bool __fastcall Plat_CheckIfPrivatePartySessionExistsForController(const int controllerIndex)
{
  return ?Plat_CheckIfPrivatePartySessionExistsForController@@YA_NH@Z(controllerIndex);
}

/*
==============
Plat_AddSplitscreenUserToPrivatePartySession
==============
*/

void __fastcall Plat_AddSplitscreenUserToPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_AddSplitscreenUserToPrivatePartySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
LeavePrivatePartySession_Failed
==============
*/

void __fastcall LeavePrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  ?LeavePrivatePartySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_FirstPartyRemovedSession
==============
*/

void Plat_FirstPartyRemovedSession(void)
{
  ?Plat_FirstPartyRemovedSession@@YAXXZ();
}

/*
==============
LeaveGameLobbySession_CompletedSuccessfully
==============
*/

void __fastcall LeaveGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?LeaveGameLobbySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_IsGraveyardEmpty
==============
*/

bool __fastcall Plat_IsGraveyardEmpty()
{
  return ?Plat_IsGraveyardEmpty@@YA_NXZ();
}

/*
==============
Plat_IsUserInGraveyard
==============
*/

bool __fastcall Plat_IsUserInGraveyard(Windows::Xbox::System::User *user)
{
  return ?Plat_IsUserInGraveyard@@YA_NPE$AAVUser@System@Xbox@Windows@@@Z(user);
}

/*
==============
Plat_JoinGameLobbySession
==============
*/

void __fastcall Plat_JoinGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_JoinGameLobbySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully
==============
*/

void __fastcall AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_CheckIfSessionIdMatchesInGameLobbySessionForControllers
==============
*/

bool __fastcall Plat_CheckIfSessionIdMatchesInGameLobbySessionForControllers(const int controllerIndex1, const int controllerIndex2)
{
  return ?Plat_CheckIfSessionIdMatchesInGameLobbySessionForControllers@@YA_NHH@Z(controllerIndex1, controllerIndex2);
}

/*
==============
RemoveFirstUserInGraveyard_CompletedSuccessfully
==============
*/

void __fastcall RemoveFirstUserInGraveyard_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?RemoveFirstUserInGraveyard_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_PerformSessionsComError
==============
*/

void __fastcall Plat_PerformSessionsComError(sessionParameters *params)
{
  ?Plat_PerformSessionsComError@@YAXPEAUsessionParameters@@@Z(params);
}

/*
==============
UpdatePrivatePartySessionData_Failed
==============
*/

void __fastcall UpdatePrivatePartySessionData_Failed(SessionTaskResponseData *failureData)
{
  ?UpdatePrivatePartySessionData_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_CheckIfGameLobbySessionExistsForAnyController
==============
*/

bool __fastcall Plat_CheckIfGameLobbySessionExistsForAnyController()
{
  return ?Plat_CheckIfGameLobbySessionExistsForAnyController@@YA_NXZ();
}

/*
==============
Plat_CompareJoinInfoInGameLobbySession
==============
*/

bool __fastcall Plat_CompareJoinInfoInGameLobbySession(sessionParameters *params)
{
  return ?Plat_CompareJoinInfoInGameLobbySession@@YA_NPEAUsessionParameters@@@Z(params);
}

/*
==============
UpdateGameLobbySessionData_Failed
==============
*/

void __fastcall UpdateGameLobbySessionData_Failed(SessionTaskResponseData *failureData)
{
  ?UpdateGameLobbySessionData_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
RemoveFirstUserInGraveyard_Failed
==============
*/

void __fastcall RemoveFirstUserInGraveyard_Failed(SessionTaskResponseData *failureData)
{
  ?RemoveFirstUserInGraveyard_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_CanMakePlatformSessionCall
==============
*/

bool __fastcall Plat_CanMakePlatformSessionCall()
{
  return ?Plat_CanMakePlatformSessionCall@@YA_NXZ();
}

/*
==============
Plat_ClearSessionCacheForAllControllers
==============
*/

void Plat_ClearSessionCacheForAllControllers(void)
{
  ?Plat_ClearSessionCacheForAllControllers@@YAXXZ();
}

/*
==============
Plat_SessionTaskAttempted
==============
*/

void Plat_SessionTaskAttempted(void)
{
  ?Plat_SessionTaskAttempted@@YAXXZ();
}

/*
==============
FollowPrivatePartyHostToGameLobby_Failed
==============
*/

void __fastcall FollowPrivatePartyHostToGameLobby_Failed(SessionTaskResponseData *failureData)
{
  ?FollowPrivatePartyHostToGameLobby_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_RemoveSplitscreenUserFromPrivatePartySession
==============
*/

void __fastcall Plat_RemoveSplitscreenUserFromPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_RemoveSplitscreenUserFromPrivatePartySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_IsSessionIdValid
==============
*/

bool __fastcall Plat_IsSessionIdValid(const sessionParameters *params)
{
  return ?Plat_IsSessionIdValid@@YA_NPEBUsessionParameters@@@Z(params);
}

/*
==============
Plat_CompareJoinInfoInPrivatePartySession
==============
*/

bool __fastcall Plat_CompareJoinInfoInPrivatePartySession(sessionParameters *params)
{
  return ?Plat_CompareJoinInfoInPrivatePartySession@@YA_NPEAUsessionParameters@@@Z(params);
}

/*
==============
JoinPrivatePartySession_CompletedSuccessfully
==============
*/

void __fastcall JoinPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?JoinPrivatePartySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_UpdatePrivatePartySessionData
==============
*/

void __fastcall Plat_UpdatePrivatePartySessionData(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_UpdatePrivatePartySessionData@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
Plat_IsCachedSessionInfoDifferentInPrivatePartySession
==============
*/

bool __fastcall Plat_IsCachedSessionInfoDifferentInPrivatePartySession(sessionParameters *params)
{
  return ?Plat_IsCachedSessionInfoDifferentInPrivatePartySession@@YA_NPEAUsessionParameters@@@Z(params);
}

/*
==============
Plat_CleanupSessions
==============
*/

void __fastcall Plat_CleanupSessions(const int controllerIndex)
{
  ?Plat_CleanupSessions@@YAXH@Z(controllerIndex);
}

/*
==============
Plat_LeaveGameLobbySession
==============
*/

void __fastcall Plat_LeaveGameLobbySession(const int controllerIndex, sessionParameters *params)
{
  ?Plat_LeaveGameLobbySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, params);
}

/*
==============
Plat_AddUserToGraveyard
==============
*/

void __fastcall Plat_AddUserToGraveyard(Windows::Xbox::System::User *user)
{
  ?Plat_AddUserToGraveyard@@YAXPE$AAVUser@System@Xbox@Windows@@@Z(user);
}

/*
==============
Plat_SessionTaskSucceeded
==============
*/

void Plat_SessionTaskSucceeded(void)
{
  ?Plat_SessionTaskSucceeded@@YAXXZ();
}

/*
==============
Plat_CreateGameLobbySession
==============
*/

void __fastcall Plat_CreateGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_CreateGameLobbySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully
==============
*/

void __fastcall RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  ?RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully@@YAXUSessionTaskResponseData@@@Z(successData);
}

/*
==============
Plat_GetFirstUserInGraveyard
==============
*/

Windows::Xbox::System::User *__fastcall Plat_GetFirstUserInGraveyard()
{
  return ?Plat_GetFirstUserInGraveyard@@YAPE$AAVUser@System@Xbox@Windows@@XZ();
}

/*
==============
Plat_ClearPlatformInviteJoinAcceptData
==============
*/

void Plat_ClearPlatformInviteJoinAcceptData(void)
{
  ?Plat_ClearPlatformInviteJoinAcceptData@@YAXXZ();
}

/*
==============
Plat_CheckIfPrivatePartySessionExistsForAnyController
==============
*/

bool __fastcall Plat_CheckIfPrivatePartySessionExistsForAnyController()
{
  return ?Plat_CheckIfPrivatePartySessionExistsForAnyController@@YA_NXZ();
}

/*
==============
Plat_AddSplitscreenUserToGameLobbySession
==============
*/

void __fastcall Plat_AddSplitscreenUserToGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_AddSplitscreenUserToGameLobbySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
CreateGameLobbySession_Failed
==============
*/

void __fastcall CreateGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  ?CreateGameLobbySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_SendResponseToDSAfterCreatingPrivatePartySession
==============
*/

void __fastcall Plat_SendResponseToDSAfterCreatingPrivatePartySession(const int controllerIndex, sessionParameters *params, bool isSuccess, unsigned int partyVersionNumber)
{
  ?Plat_SendResponseToDSAfterCreatingPrivatePartySession@@YAXHPEAUsessionParameters@@_NI@Z(controllerIndex, params, isSuccess, partyVersionNumber);
}

/*
==============
RemoveSplitscreenUserFromPrivatePartySession_Failed
==============
*/

void __fastcall RemoveSplitscreenUserFromPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  ?RemoveSplitscreenUserFromPrivatePartySession_Failed@@YAXUSessionTaskResponseData@@@Z(failureData);
}

/*
==============
Plat_GetCurrentPrivatePartySessionId
==============
*/

void __fastcall Plat_GetCurrentPrivatePartySessionId(const int controllerIndex, _GUID *sessionId)
{
  ?Plat_GetCurrentPrivatePartySessionId@@YAXHPEAU_GUID@@@Z(controllerIndex, sessionId);
}

/*
==============
Plat_CheckIfSessionIdMatchesCurrentSessionIdInPrivatePartySession
==============
*/

bool __fastcall Plat_CheckIfSessionIdMatchesCurrentSessionIdInPrivatePartySession(const int controllerIndex, sessionParameters *params)
{
  return ?Plat_CheckIfSessionIdMatchesCurrentSessionIdInPrivatePartySession@@YA_NHPEAUsessionParameters@@@Z(controllerIndex, params);
}

/*
==============
Plat_CheckIfSessionIdMatchesCurrentSessionIdInGameLobbySession
==============
*/

bool __fastcall Plat_CheckIfSessionIdMatchesCurrentSessionIdInGameLobbySession(const int controllerIndex, sessionParameters *params)
{
  return ?Plat_CheckIfSessionIdMatchesCurrentSessionIdInGameLobbySession@@YA_NHPEAUsessionParameters@@@Z(controllerIndex, params);
}

/*
==============
Plat_SendResponseToDSAfterCreatingGameLobbySession
==============
*/

void __fastcall Plat_SendResponseToDSAfterCreatingGameLobbySession(const int controllerIndex, sessionParameters *params, bool isSuccess, unsigned int partyVersionNumber)
{
  ?Plat_SendResponseToDSAfterCreatingGameLobbySession@@YAXHPEAUsessionParameters@@_NI@Z(controllerIndex, params, isSuccess, partyVersionNumber);
}

/*
==============
ConvertSessionIdInParamsToString
==============
*/

void __fastcall ConvertSessionIdInParamsToString(sessionParameters *params, char *sessionIdStringOut)
{
  ?ConvertSessionIdInParamsToString@@YAXPEAUsessionParameters@@PEAD@Z(params, sessionIdStringOut);
}

/*
==============
Plat_CreatePrivatePartySession
==============
*/

void __fastcall Plat_CreatePrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  ?Plat_CreatePrivatePartySession@@YAXHPEAUsessionParameters@@@Z(controllerIndex, sessionParams);
}

/*
==============
AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully
==============
*/
void AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex == s_currentSessionTaskParams.m_sessionParams->m_mainController && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 792, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex != s_currentSessionTaskParams.m_sessionParams->m_mainController)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex != s_currentSessionTaskParams.m_sessionParams->m_mainController") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 793, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 794, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::AddSplitscreenUserToSession_CompletedSuccessfully(Instance);
}

/*
==============
AddSplitscreenUserToPrivatePartySession_Failed
==============
*/
void AddSplitscreenUserToPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 808, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 809, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::AddSplitscreenUserToSession_Failed(Instance);
}

/*
==============
CleanupSession_CompletedSuccessfully
==============
*/
void CleanupSession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 922, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 923, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::LeaveSession_CompletedSuccessfully(Instance);
}

/*
==============
CleanupSession_Failed
==============
*/
void CleanupSession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 937, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 938, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::LeaveSession_Failed(Instance);
}

/*
==============
ConvertSessionIdInParamsToString
==============
*/
void ConvertSessionIdInParamsToString(sessionParameters *params, char *sessionIdStringOut)
{
  MPSDIDToString(&params->xb3SessionId, sessionIdStringOut);
}

/*
==============
CreateGameLobbySession_CompletedSuccessfully
==============
*/
void CreateGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 323, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 324, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::CreateSession_CompletedSuccessfully(Instance);
}

/*
==============
CreateGameLobbySession_Failed
==============
*/
void CreateGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 338, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 339, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::CreateSession_Failed(Instance);
}

/*
==============
CreatePrivatePartySession_CompletedSuccessfully
==============
*/
void CreatePrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 273, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 274, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::CreateSession_CompletedSuccessfully(Instance);
}

/*
==============
CreatePrivatePartySession_Failed
==============
*/
void CreatePrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 288, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 289, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::CreateSession_Failed(Instance);
}

/*
==============
FollowPrivatePartyHostToGameLobby_CompletedSuccessfully
==============
*/
void FollowPrivatePartyHostToGameLobby_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 733, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 734, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::JoinSession_CompletedSuccessfully(Instance);
}

/*
==============
FollowPrivatePartyHostToGameLobby_Failed
==============
*/
void FollowPrivatePartyHostToGameLobby_Failed(SessionTaskResponseData *failureData)
{
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 748, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 749, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::JoinSession_Failed(Instance);
}

/*
==============
GetCurrentGameLobbySessionIdString
==============
*/
void GetCurrentGameLobbySessionIdString(const int controllerIndex, char *sessionIdStringOut)
{
  Xb3MultiplayerManager::GetGameSessionName(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, sessionIdStringOut);
}

/*
==============
GetCurrentPrivatePartySessionIdString
==============
*/
void GetCurrentPrivatePartySessionIdString(const int controllerIndex, char *sessionIdStringOut)
{
  Xb3MultiplayerManager::GetLobbySessionName(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, sessionIdStringOut);
}

/*
==============
JoinGameLobbySession_CompletedSuccessfully
==============
*/
void JoinGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 684, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 685, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::JoinSession_CompletedSuccessfully(Instance);
}

/*
==============
JoinGameLobbySession_Failed
==============
*/
void JoinGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 699, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 700, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::JoinSession_Failed(Instance);
}

/*
==============
JoinPrivatePartySession_CompletedSuccessfully
==============
*/
void JoinPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 619, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 620, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::JoinSession_CompletedSuccessfully(Instance);
}

/*
==============
JoinPrivatePartySession_Failed
==============
*/
void JoinPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 634, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 635, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::JoinSession_Failed(Instance);
}

/*
==============
LeaveGameLobbySession_CompletedSuccessfully
==============
*/
void LeaveGameLobbySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 558, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 559, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::LeaveSession_CompletedSuccessfully(Instance);
}

/*
==============
LeaveGameLobbySession_Failed
==============
*/
void LeaveGameLobbySession_Failed(SessionTaskResponseData *failureData)
{
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 573, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 574, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::LeaveSession_Failed(Instance);
}

/*
==============
LeavePrivatePartySession_CompletedSuccessfully
==============
*/
void LeavePrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 498, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 499, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::LeaveSession_CompletedSuccessfully(Instance);
}

/*
==============
LeavePrivatePartySession_Failed
==============
*/
void LeavePrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 513, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 514, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::LeaveSession_Failed(Instance);
}

/*
==============
Plat_AddSplitscreenUserToGameLobbySession
==============
*/
void Plat_AddSplitscreenUserToGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  GameLobbySessionHSM *Instance; 
  int v5; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 843, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v5) )
      __debugbreak();
  }
  if ( (!Live_IsSignedIn(controllerIndex) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 844, ASSERT_TYPE_ASSERT, "(Plat_CheckIfGameLobbySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "Plat_CheckIfGameLobbySessionExistsForController( controllerIndex )") )
    __debugbreak();
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::AddSplitscreenUserToSession_CompletedSuccessfully(Instance);
}

/*
==============
Plat_AddSplitscreenUserToPrivatePartySession
==============
*/
void Plat_AddSplitscreenUserToPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  __int64 v7; 
  _BYTE v8[24]; 
  SessionTaskResponseData v9; 

  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 820, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v7) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 821, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v7, 8) )
      __debugbreak();
  }
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 822, ASSERT_TYPE_ASSERT, "(!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))AddSplitscreenUserToPrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))AddSplitscreenUserToPrivatePartySession_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( !Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
  {
    *(_DWORD *)v8 = controllerIndex;
    memset(&v8[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    AddSplitscreenUserToPrivatePartySession_Failed(&v9);
  }
}

/*
==============
Plat_AddUserToGraveyard
==============
*/
void Plat_AddUserToGraveyard(Windows::Xbox::System::User *user)
{
  Windows::Xbox::System::User **v2; 
  int v3; 
  Windows::Xbox::System::User *v4; 
  Windows::Xbox::System::User **v5; 

  v2 = s_usersInGraveyard;
  v3 = 0;
  while ( *v2 )
  {
    ++v3;
    if ( (__int64)++v2 >= (__int64)&unk_14D63E560 )
      goto LABEL_4;
  }
  if ( v3 < 0 )
  {
LABEL_4:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1027, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Plat_AddUserToGraveyard no free slots to be added in graveyard\n") )
      __debugbreak();
    return;
  }
  v4 = s_usersInGraveyard[v3];
  v5 = &s_usersInGraveyard[v3];
  if ( user != v4 )
  {
    if ( user )
    {
      user->__abi_AddRef(user);
      v4 = *v5;
    }
    if ( v4 )
      v4->__abi_Release(v4);
    *v5 = user;
  }
}

/*
==============
Plat_CanMakePlatformSessionCall
==============
*/
bool Plat_CanMakePlatformSessionCall()
{
  int v0; 
  const dvar_t *v1; 
  int v2; 
  int v3; 
  int integer; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v8; 

  v0 = Sys_Milliseconds();
  v1 = DVARINT_online_platform_session_call_throttle_time;
  v2 = v0;
  v3 = 1 << s_platformCallFailureCount;
  if ( !DVARINT_online_platform_session_call_throttle_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_session_call_throttle_time") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v3 * v1->current.integer;
  v5 = DVARINT_online_platform_session_call_max_delay;
  if ( !DVARINT_online_platform_session_call_max_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_session_call_max_delay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( integer > v5->current.integer )
  {
    v6 = DVARINT_online_platform_session_call_max_delay;
    if ( !DVARINT_online_platform_session_call_max_delay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_session_call_max_delay") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
  }
  if ( v2 - s_lastPlatformCallAttemptTime <= 1000 * integer )
  {
    v8 = DVARINT_online_platform_session_max_calls_within_throttle_time;
    if ( !DVARINT_online_platform_session_max_calls_within_throttle_time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_session_max_calls_within_throttle_time") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    return s_numTasksAttempted < v8->current.integer;
  }
  else
  {
    s_numTasksAttempted = 0;
    return 1;
  }
}

/*
==============
Plat_CheckIfGameLobbySessionExistsForAnyController
==============
*/
char Plat_CheckIfGameLobbySessionExistsForAnyController()
{
  int v0; 

  v0 = 0;
  while ( !Live_IsSignedIn(v0) || !Live_IsSignedIn(v0) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, v0, (const SessionType)1) )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Plat_CheckIfGameLobbySessionExistsForController
==============
*/
bool Plat_CheckIfGameLobbySessionExistsForController(const int controllerIndex)
{
  bool result; 

  result = Live_IsSignedIn(controllerIndex);
  if ( result )
    return Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1);
  return result;
}

/*
==============
Plat_CheckIfPrivatePartySessionExistsForAnyController
==============
*/
char Plat_CheckIfPrivatePartySessionExistsForAnyController()
{
  int v0; 

  v0 = 0;
  while ( !Live_IsSignedIn(v0) || !Live_IsSignedIn(v0) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, v0, UNKNOWN) )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Plat_CheckIfPrivatePartySessionExistsForController
==============
*/
bool Plat_CheckIfPrivatePartySessionExistsForController(const int controllerIndex)
{
  bool result; 

  result = Live_IsSignedIn(controllerIndex);
  if ( result )
    return Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN);
  return result;
}

/*
==============
Plat_CheckIfSessionIdMatchesCurrentSessionIdInGameLobbySession
==============
*/
bool Plat_CheckIfSessionIdMatchesCurrentSessionIdInGameLobbySession(const int controllerIndex, sessionParameters *params)
{
  _GUID v4; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+0A4h]
    vmovups xmmword ptr [rsp+38h+var_18.Data1], xmm0
  }
  return Xb3MultiplayerManager::CompareSessionNameInGameLobbySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &v4);
}

/*
==============
Plat_CheckIfSessionIdMatchesCurrentSessionIdInPrivatePartySession
==============
*/
bool Plat_CheckIfSessionIdMatchesCurrentSessionIdInPrivatePartySession(const int controllerIndex, sessionParameters *params)
{
  _GUID v4; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx+0A4h]
    vmovups xmmword ptr [rsp+38h+var_18.Data1], xmm0
  }
  return Xb3MultiplayerManager::CompareSessionNameInPrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &v4);
}

/*
==============
Plat_CheckIfSessionIdMatchesInGameLobbySessionForControllers
==============
*/
char Plat_CheckIfSessionIdMatchesInGameLobbySessionForControllers(const int controllerIndex1, const int controllerIndex2)
{
  __int64 v4; 
  __int64 v6; 
  int v7; 

  if ( (unsigned int)controllerIndex1 >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 232, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex1 ) < (unsigned)( 8 )", "controllerIndex1 doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex1, v7) )
      __debugbreak();
  }
  if ( (unsigned int)controllerIndex2 >= 8 )
  {
    LODWORD(v6) = 8;
    LODWORD(v4) = controllerIndex2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 233, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex2 ) < (unsigned)( 8 )", "controllerIndex2 doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return 1;
}

/*
==============
Plat_CheckIfSessionIdMatchesInPrivatePartySessionForControllers
==============
*/
char Plat_CheckIfSessionIdMatchesInPrivatePartySessionForControllers(const int controllerIndex1, const int controllerIndex2)
{
  __int64 v4; 
  __int64 v6; 
  int v7; 

  if ( (unsigned int)controllerIndex1 >= 8 )
  {
    v7 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex1 ) < (unsigned)( 8 )", "controllerIndex1 doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex1, v7) )
      __debugbreak();
  }
  if ( (unsigned int)controllerIndex2 >= 8 )
  {
    LODWORD(v6) = 8;
    LODWORD(v4) = controllerIndex2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 224, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex2 ) < (unsigned)( 8 )", "controllerIndex2 doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  return 1;
}

/*
==============
Plat_CleanupSessions
==============
*/
void Plat_CleanupSessions(const int controllerIndex)
{
  int v2; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  _BYTE v10[24]; 
  SessionTaskResponseData v11; 

  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 949, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v7) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 950, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v7, 8) )
      __debugbreak();
    LODWORD(v9) = 8;
    LODWORD(v8) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 526, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))LeavePrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))LeavePrivatePartySession_Failed;
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) )
  {
    v2 = s_numTasksAttempted;
    if ( !s_numTasksAttempted )
    {
      s_lastPlatformCallAttemptTime = Sys_Milliseconds();
      v2 = s_numTasksAttempted;
    }
    s_numTasksAttempted = v2 + 1;
    if ( !Xb3MultiplayerManager::LeavePrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
    {
      *(_DWORD *)v10 = controllerIndex;
      memset(&v10[4], 0, 17);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+88h+var_48]
        vmovsd  xmm1, qword ptr [rsp+50h]
        vmovups [rsp+88h+var_28], xmm0
        vmovsd  [rsp+88h+var_18], xmm1
      }
      LeavePrivatePartySession_Failed(&v11);
    }
  }
  else
  {
    *(_DWORD *)v10 = controllerIndex;
    memset(&v10[4], 0, 17);
    Com_PrintWarning(25, "Plat_LeavePrivatePartySession called without a valid session to leave\n");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    LeavePrivatePartySession_CompletedSuccessfully(&v11);
  }
}

/*
==============
Plat_ClearPlatformInviteJoinAcceptData
==============
*/
void Plat_ClearPlatformInviteJoinAcceptData(void)
{
  if ( s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs )
  {
    s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs->__abi_Release(s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs);
    s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs = NULL;
  }
}

/*
==============
Plat_ClearSessionCacheForAllControllers
==============
*/
void Plat_ClearSessionCacheForAllControllers(void)
{
  ;
}

/*
==============
Plat_ClearSessionCacheForController
==============
*/
void Plat_ClearSessionCacheForController(const int controllerIndex)
{
  ;
}

/*
==============
Plat_CompareJoinInfoInGameLobbySession
==============
*/
char Plat_CompareJoinInfoInGameLobbySession(sessionParameters *params)
{
  return 1;
}

/*
==============
Plat_CompareJoinInfoInPrivatePartySession
==============
*/
char Plat_CompareJoinInfoInPrivatePartySession(sessionParameters *params)
{
  return 1;
}

/*
==============
Plat_CreateGameLobbySession
==============
*/
void Plat_CreateGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  _BYTE v7[24]; 
  SessionTaskResponseData v8; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 350, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (!Live_IsSignedIn(controllerIndex) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 351, ASSERT_TYPE_ASSERT, "(Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 352, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))CreateGameLobbySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))CreateGameLobbySession_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( !Xb3MultiplayerManager::CreateGameLobbySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
  {
    *(_DWORD *)v7 = controllerIndex;
    memset(&v7[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    CreateGameLobbySession_Failed(&v8);
  }
}

/*
==============
Plat_CreatePrivatePartySession
==============
*/
void Plat_CreatePrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  _BYTE v7[24]; 
  SessionTaskResponseData v8; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 301, ASSERT_TYPE_ASSERT, "(!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 302, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))CreatePrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))CreatePrivatePartySession_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( !Xb3MultiplayerManager::CreatePrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
  {
    *(_DWORD *)v7 = controllerIndex;
    memset(&v7[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    CreatePrivatePartySession_Failed(&v8);
  }
}

/*
==============
Plat_DoesASessionExistPerParty
==============
*/
char Plat_DoesASessionExistPerParty()
{
  return 1;
}

/*
==============
Plat_FirstPartyRemovedSession
==============
*/
void Plat_FirstPartyRemovedSession(void)
{
  PrivatePartySessionHSM *Instance; 
  GameLobbySessionHSM *v1; 

  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::FirstPartyRemovedSession(Instance);
  v1 = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::FirstPartyRemovedSession(v1);
}

/*
==============
Plat_FollowPrivatePartyHostToGameLobby
==============
*/
void Plat_FollowPrivatePartyHostToGameLobby(const int controllerIndex, sessionParameters *params)
{
  int v4; 
  _BYTE v10[24]; 
  SessionTaskResponseData v11; 

  _RDI = params;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 760, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 761, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))FollowPrivatePartyHostToGameLobby_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))FollowPrivatePartyHostToGameLobby_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = _RDI;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( !Live_IsSignedIn(controllerIndex) )
    goto LABEL_17;
  if ( !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1) )
    goto LABEL_17;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi+0A4h]
    vmovups xmmword ptr [rsp+88h+var_48], xmm0
  }
  if ( Xb3MultiplayerManager::CompareSessionNameInGameLobbySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, (_GUID *)v10) )
  {
    *(_DWORD *)v10 = controllerIndex;
    memset(&v10[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    FollowPrivatePartyHostToGameLobby_CompletedSuccessfully(&v11);
  }
  else
  {
LABEL_17:
    if ( !Xb3MultiplayerManager::JoinGameLobbyFromPrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
    {
      *(_DWORD *)v10 = controllerIndex;
      memset(&v10[4], 0, 17);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+88h+var_48]
        vmovsd  xmm1, qword ptr [rsp+50h]
        vmovups [rsp+88h+var_28], xmm0
        vmovsd  [rsp+88h+var_18], xmm1
      }
      FollowPrivatePartyHostToGameLobby_Failed(&v11);
    }
  }
}

/*
==============
Plat_GetCurrentGameLobbySessionId
==============
*/
void Plat_GetCurrentGameLobbySessionId(const int controllerIndex, _GUID *sessionId)
{
  _GUID result; 

  _RBX = sessionId;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 117, ASSERT_TYPE_ASSERT, "(sessionId)", (const char *)&queryFormat, "sessionId") )
    __debugbreak();
  _RAX = Xb3MultiplayerManager::GetCurrentGameLobbySessionID(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &result);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
  }
}

/*
==============
Plat_GetCurrentPrivatePartySessionId
==============
*/
void Plat_GetCurrentPrivatePartySessionId(const int controllerIndex, _GUID *sessionId)
{
  _GUID result; 

  _RBX = sessionId;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 109, ASSERT_TYPE_ASSERT, "(sessionId)", (const char *)&queryFormat, "sessionId") )
    __debugbreak();
  _RAX = Xb3MultiplayerManager::GetCurrentPrivatePartySessionID(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &result);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rbx], xmm0
  }
}

/*
==============
Plat_GetFirstUserInGraveyard
==============
*/
Windows::Xbox::System::User *Plat_GetFirstUserInGraveyard()
{
  Windows::Xbox::System::User **v0; 
  Windows::Xbox::System::User *v1; 

  v0 = s_usersInGraveyard;
  while ( 1 )
  {
    v1 = *v0;
    if ( *v0 )
      break;
    if ( (__int64)++v0 >= (__int64)&unk_14D63E560 )
      return 0i64;
  }
  v1->__abi_AddRef(*v0);
  return v1;
}

/*
==============
Plat_IsCachedSessionInfoDifferentInGameLobbySession
==============
*/
bool Plat_IsCachedSessionInfoDifferentInGameLobbySession(sessionParameters *params)
{
  return 0;
}

/*
==============
Plat_IsCachedSessionInfoDifferentInPrivatePartySession
==============
*/
bool Plat_IsCachedSessionInfoDifferentInPrivatePartySession(sessionParameters *params)
{
  return 0;
}

/*
==============
Plat_IsGraveyardEmpty
==============
*/
_BOOL8 Plat_IsGraveyardEmpty()
{
  Windows::Xbox::System::User **v0; 
  Windows::Xbox::System::User *v1; 

  v0 = s_usersInGraveyard;
  while ( 1 )
  {
    v1 = *v0;
    if ( *v0 )
      break;
    if ( (__int64)++v0 >= (__int64)&unk_14D63E560 )
      goto LABEL_6;
  }
  v1->__abi_AddRef(v1);
LABEL_6:
  if ( v1 )
    v1->__abi_Release(v1);
  return v1 == NULL;
}

/*
==============
Plat_IsPlatformInviteJoinAcceptDataValid
==============
*/
bool Plat_IsPlatformInviteJoinAcceptDataValid()
{
  return s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs != NULL;
}

/*
==============
Plat_IsSessionIdValid
==============
*/
bool Plat_IsSessionIdValid(const sessionParameters *params)
{
  __int64 v1; 

  v1 = -*(_QWORD *)&params->xb3SessionId.Data1;
  if ( !*(_QWORD *)&params->xb3SessionId.Data1 )
    v1 = -*(_QWORD *)params->xb3SessionId.Data4;
  return v1 != 0;
}

/*
==============
Plat_IsUserInGraveyard
==============
*/
char Plat_IsUserInGraveyard(Windows::Xbox::System::User *user)
{
  Windows::Xbox::System::User **v2; 

  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 997, ASSERT_TYPE_ASSERT, "(user)", (const char *)&queryFormat, "user") )
    __debugbreak();
  v2 = s_usersInGraveyard;
  while ( *v2 != user )
  {
    if ( (__int64)++v2 >= (__int64)&unk_14D63E560 )
      return 0;
  }
  return 1;
}

/*
==============
Plat_JoinGameLobbySession
==============
*/
void Plat_JoinGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  _BYTE v7[24]; 
  SessionTaskResponseData v8; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 711, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 712, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))JoinGameLobbySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))JoinGameLobbySession_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( !Xb3MultiplayerManager::JoinGameLobbySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
  {
    *(_DWORD *)v7 = controllerIndex;
    memset(&v7[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    JoinGameLobbySession_Failed(&v8);
  }
}

/*
==============
Plat_JoinPrivatePartySession
==============
*/
void Plat_JoinPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  bool v5; 
  _BYTE v8[24]; 
  SessionTaskResponseData v9; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 646, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 647, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 648, ASSERT_TYPE_ASSERT, "(!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "!Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 649, ASSERT_TYPE_ASSERT, "(!Plat_CheckIfGameLobbySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "!Plat_CheckIfGameLobbySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( !XUID::IsValid(&sessionParams->m_hostXUID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 650, ASSERT_TYPE_ASSERT, "(sessionParams->m_hostXUID.IsValid())", (const char *)&queryFormat, "sessionParams->m_hostXUID.IsValid()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))JoinPrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))JoinPrivatePartySession_Failed;
  v4 = s_numTasksAttempted;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  if ( !s_numTasksAttempted )
  {
    s_lastPlatformCallAttemptTime = Sys_Milliseconds();
    v4 = s_numTasksAttempted;
  }
  s_numTasksAttempted = v4 + 1;
  if ( s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs )
    v5 = Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams, s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs);
  else
    v5 = Xb3MultiplayerManager::JoinPrivatePartySessionByFetchingHandleIdFromActivity(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams);
  if ( !v5 )
  {
    *(_DWORD *)v8 = controllerIndex;
    memset(&v8[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    JoinPrivatePartySession_Failed(&v9);
  }
}

/*
==============
Plat_LeaveGameLobbySession
==============
*/
void Plat_LeaveGameLobbySession(const int controllerIndex, sessionParameters *params)
{
  int v3; 
  _BYTE v8[24]; 
  SessionTaskResponseData v9; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 585, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 586, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))LeaveGameLobbySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))LeaveGameLobbySession_Failed;
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1) && Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) )
  {
    v3 = s_numTasksAttempted;
    if ( !s_numTasksAttempted )
    {
      s_lastPlatformCallAttemptTime = Sys_Milliseconds();
      v3 = s_numTasksAttempted;
    }
    s_numTasksAttempted = v3 + 1;
    if ( !Xb3MultiplayerManager::LeaveGameLobbySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
    {
      *(_DWORD *)v8 = controllerIndex;
      memset(&v8[4], 0, 17);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+88h+var_48]
        vmovsd  xmm1, qword ptr [rsp+50h]
        vmovups [rsp+88h+var_28], xmm0
        vmovsd  [rsp+88h+var_18], xmm1
      }
      LeaveGameLobbySession_Failed(&v9);
    }
  }
  else
  {
    *(_DWORD *)v8 = controllerIndex;
    memset(&v8[4], 0, 17);
    Com_PrintWarning(25, "Plat_LeaveGameLobbySession called without a valid session to leave\n");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    LeaveGameLobbySession_CompletedSuccessfully(&v9);
  }
}

/*
==============
Plat_LeavePrivatePartySession
==============
*/
void Plat_LeavePrivatePartySession(const int controllerIndex)
{
  int v2; 
  _BYTE v7[24]; 
  SessionTaskResponseData v8; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 526, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))LeavePrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))LeavePrivatePartySession_Failed;
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) )
  {
    v2 = s_numTasksAttempted;
    if ( !s_numTasksAttempted )
    {
      s_lastPlatformCallAttemptTime = Sys_Milliseconds();
      v2 = s_numTasksAttempted;
    }
    s_numTasksAttempted = v2 + 1;
    if ( !Xb3MultiplayerManager::LeavePrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
    {
      *(_DWORD *)v7 = controllerIndex;
      memset(&v7[4], 0, 17);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+88h+var_48]
        vmovsd  xmm1, qword ptr [rsp+50h]
        vmovups [rsp+88h+var_28], xmm0
        vmovsd  [rsp+88h+var_18], xmm1
      }
      LeavePrivatePartySession_Failed(&v8);
    }
  }
  else
  {
    *(_DWORD *)v7 = controllerIndex;
    memset(&v7[4], 0, 17);
    Com_PrintWarning(25, "Plat_LeavePrivatePartySession called without a valid session to leave\n");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    LeavePrivatePartySession_CompletedSuccessfully(&v8);
  }
}

/*
==============
Plat_PerformSessionsComError
==============
*/
void Plat_PerformSessionsComError(sessionParameters *params)
{
  DWServicesAccess *Instance; 
  DWLobbyService *DWLobbyService; 

  Instance = DWServicesAccess::GetInstance();
  DWLobbyService = DWServicesAccess::GetDWLobbyService(Instance, 0);
  DWLobbyService::disconnect(DWLobbyService);
  Live_ShutdownDueToTerminalError(params->m_mainController);
  Live_ThrowError(ERR_DROP, "XBOXLIVE/WAN_FAILURE_MSG");
}

/*
==============
Plat_RemoveFirstUserInGraveyardFromSession
==============
*/
void Plat_RemoveFirstUserInGraveyardFromSession(const int controllerIndex)
{
  Windows::Xbox::System::User **v2; 
  Windows::Xbox::System::User *v3; 
  Windows::Xbox::System::User *xboxLiveUser; 
  int v5; 
  __int64 v10; 
  _BYTE v11[24]; 
  SessionTaskResponseData v12; 
  XB3SessionTaskRequestResult result; 
  Windows::Xbox::System::User *v14; 

  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1063, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v10) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1064, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v10, 8) )
      __debugbreak();
  }
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))RemoveFirstUserInGraveyard_CompletedSuccessfully;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))RemoveFirstUserInGraveyard_Failed;
  v2 = s_usersInGraveyard;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
      break;
    if ( (__int64)++v2 >= (__int64)&unk_14D63E560 )
      goto LABEL_12;
  }
  v3->__abi_AddRef(v3);
LABEL_12:
  v14 = v3;
  xboxLiveUser = s_currentSessionTaskParams.xboxLiveUser;
  if ( v3 != s_currentSessionTaskParams.xboxLiveUser )
  {
    if ( v3 )
    {
      v3->__abi_AddRef(v3);
      xboxLiveUser = s_currentSessionTaskParams.xboxLiveUser;
    }
    if ( xboxLiveUser )
      xboxLiveUser->__abi_Release(xboxLiveUser);
    xboxLiveUser = v3;
    s_currentSessionTaskParams.xboxLiveUser = v3;
  }
  if ( v3 )
  {
    v3->__abi_Release(v3);
    xboxLiveUser = s_currentSessionTaskParams.xboxLiveUser;
  }
  if ( xboxLiveUser )
  {
    v5 = s_numTasksAttempted;
    if ( !s_numTasksAttempted )
    {
      s_lastPlatformCallAttemptTime = Sys_Milliseconds();
      v5 = s_numTasksAttempted;
    }
    s_numTasksAttempted = v5 + 1;
    Xb3MultiplayerManager::RemoveUserFromSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &result, &s_currentSessionTaskParams);
    if ( !result.m_wasRequestSuccessful )
    {
      memset(&v11[4], 0, 17);
      *(_DWORD *)v11 = controllerIndex;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+var_38]
        vmovups [rbp+var_20], xmm0
        vmovsd  xmm1, qword ptr [rbp-28h]
        vmovsd  [rbp+var_10], xmm1
      }
      RemoveFirstUserInGraveyard_Failed(&v12);
      return;
    }
    if ( !result.m_shouldCallCallbackImmediately )
      return;
    memset(&v11[4], 0, 17);
    *(_DWORD *)v11 = controllerIndex;
  }
  else
  {
    memset(&v11[4], 0, 17);
    *(_DWORD *)v11 = controllerIndex;
    Com_PrintWarning(25, "Plat_RemoveFirstUserInGraveyardFromSession called but there are not users in the graveyard\n");
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+var_38]
    vmovsd  xmm1, qword ptr [rbp-28h]
    vmovups [rbp+var_20], xmm0
    vmovsd  [rbp+var_10], xmm1
  }
  RemoveFirstUserInGraveyard_CompletedSuccessfully(&v12);
}

/*
==============
Plat_RemoveSplitscreenUserFromGameLobbySession
==============
*/
void Plat_RemoveSplitscreenUserFromGameLobbySession(const int controllerIndex, sessionParameters *sessionParams)
{
  GameLobbySessionHSM *Instance; 
  __int64 v4; 
  int v5; 

  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 912, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v5 = 8;
    LODWORD(v4) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 913, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, (const SessionType)1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 914, ASSERT_TYPE_ASSERT, "(!Plat_CheckIfGameLobbySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "!Plat_CheckIfGameLobbySessionExistsForController( controllerIndex )") )
    __debugbreak();
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::RemoveSplitscreenUserFromSession_CompletedSuccessfully(Instance);
}

/*
==============
Plat_RemoveSplitscreenUserFromPrivatePartySession
==============
*/
void Plat_RemoveSplitscreenUserFromPrivatePartySession(const int controllerIndex, sessionParameters *sessionParams)
{
  int v4; 
  __int64 v9; 
  _BYTE v10[24]; 
  SessionTaskResponseData v11; 

  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 879, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( (unsigned int)controllerIndex >= 8 )
  {
    LODWORD(v9) = controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 880, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v9, 8) )
      __debugbreak();
  }
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully;
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))RemoveSplitscreenUserFromPrivatePartySession_Failed;
  if ( Live_IsSignedIn(controllerIndex) && Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN) )
  {
    v4 = s_numTasksAttempted;
    if ( !s_numTasksAttempted )
    {
      s_lastPlatformCallAttemptTime = Sys_Milliseconds();
      v4 = s_numTasksAttempted;
    }
    s_numTasksAttempted = v4 + 1;
    if ( !Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &s_currentSessionTaskParams) )
    {
      *(_DWORD *)v10 = controllerIndex;
      memset(&v10[4], 0, 17);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+88h+var_48]
        vmovsd  xmm1, qword ptr [rsp+50h]
        vmovups [rsp+88h+var_28], xmm0
        vmovsd  [rsp+88h+var_18], xmm1
      }
      RemoveSplitscreenUserFromPrivatePartySession_Failed(&v11);
    }
  }
  else
  {
    *(_DWORD *)v10 = controllerIndex;
    memset(&v10[4], 0, 17);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+88h+var_48]
      vmovsd  xmm1, qword ptr [rsp+50h]
      vmovups [rsp+88h+var_28], xmm0
      vmovsd  [rsp+88h+var_18], xmm1
    }
    RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully(&v11);
  }
}

/*
==============
Plat_ResetSessionTaskFailureCount
==============
*/
void Plat_ResetSessionTaskFailureCount(void)
{
  s_platformCallFailureCount = 0;
}

/*
==============
Plat_SendResponseToDSAfterCreatingGameLobbySession
==============
*/
void Plat_SendResponseToDSAfterCreatingGameLobbySession(const int controllerIndex, sessionParameters *params, bool isSuccess, unsigned int partyVersionNumber)
{
  void (__fastcall *m_completeCallback)(PlatformSessionType, _GUID, bool, unsigned int); 
  _BOOL8 v9; 
  __int128 v12; 
  _GUID result; 

  if ( !params->m_createSessionForPartyRequest->m_completeCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1114, ASSERT_TYPE_ASSERT, "(params->m_createSessionForPartyRequest->m_completeCallback)", (const char *)&queryFormat, "params->m_createSessionForPartyRequest->m_completeCallback") )
    __debugbreak();
  m_completeCallback = params->m_createSessionForPartyRequest->m_completeCallback;
  if ( isSuccess )
  {
    _RAX = Xb3MultiplayerManager::GetCurrentGameLobbySessionID(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &result);
    v9 = isSuccess;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rsp+78h+var_48], xmm0
    }
  }
  else
  {
    v12 = 0ui64;
    v9 = 0i64;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovdqa [rsp+78h+var_48], xmm0
    }
  }
  ((void (__fastcall *)(__int64, __int128 *, _BOOL8, _QWORD))m_completeCallback)(2i64, &v12, v9, partyVersionNumber);
}

/*
==============
Plat_SendResponseToDSAfterCreatingPrivatePartySession
==============
*/
void Plat_SendResponseToDSAfterCreatingPrivatePartySession(const int controllerIndex, sessionParameters *params, bool isSuccess, unsigned int partyVersionNumber)
{
  void (__fastcall *m_completeCallback)(PlatformSessionType, _GUID, bool, unsigned int); 
  __int128 v10; 
  _GUID result; 

  if ( !params->m_createSessionForPartyRequest->m_completeCallback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1107, ASSERT_TYPE_ASSERT, "(params->m_createSessionForPartyRequest->m_completeCallback)", (const char *)&queryFormat, "params->m_createSessionForPartyRequest->m_completeCallback") )
    __debugbreak();
  m_completeCallback = params->m_createSessionForPartyRequest->m_completeCallback;
  _RAX = Xb3MultiplayerManager::GetCurrentPrivatePartySessionID(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &result);
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups [rsp+78h+var_48], xmm0
  }
  ((void (__fastcall *)(__int64, __int128 *, bool, _QWORD))m_completeCallback)(1i64, &v10, isSuccess, partyVersionNumber);
}

/*
==============
Plat_SessionTaskAttempted
==============
*/
void Plat_SessionTaskAttempted(void)
{
  int v0; 

  if ( s_numTasksAttempted )
  {
    ++s_numTasksAttempted;
  }
  else
  {
    v0 = Sys_Milliseconds();
    ++s_numTasksAttempted;
    s_lastPlatformCallAttemptTime = v0;
  }
}

/*
==============
Plat_SessionTaskFailed
==============
*/
void Plat_SessionTaskFailed(void)
{
  ++s_platformCallFailureCount;
}

/*
==============
Plat_SessionTaskSucceeded
==============
*/
void Plat_SessionTaskSucceeded(void)
{
  s_platformCallFailureCount = 0;
}

/*
==============
Plat_SetPlatformInviteJoinAcceptData
==============
*/
void Plat_SetPlatformInviteJoinAcceptData(PlatformInviteJoinAcceptData joinData)
{
  Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs *v2; 
  Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs *m_sessionJoinProtocolArgs; 

  v2 = (Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs *)joinData.m_sessionJoinProtocolArgs->__vftable;
  m_sessionJoinProtocolArgs = s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs;
  if ( v2 != s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs )
  {
    if ( v2 )
    {
      v2->__abi_AddRef(v2);
      m_sessionJoinProtocolArgs = s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs;
    }
    if ( m_sessionJoinProtocolArgs )
      m_sessionJoinProtocolArgs->__abi_Release(m_sessionJoinProtocolArgs);
    s_platformInviteJoinAcceptData.m_sessionJoinProtocolArgs = v2;
  }
  if ( joinData.m_sessionJoinProtocolArgs->__vftable )
    (*((void (__fastcall **)(Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs_vtbl *))joinData.m_sessionJoinProtocolArgs->__abi_QueryInterface + 2))(joinData.m_sessionJoinProtocolArgs->__vftable);
}

/*
==============
Plat_ShouldHostSyncPrivatePartyVersionsBeforeSleeping
==============
*/
char Plat_ShouldHostSyncPrivatePartyVersionsBeforeSleeping()
{
  return 1;
}

/*
==============
Plat_UpdateGameLobbySessionData
==============
*/
void Plat_UpdateGameLobbySessionData(const int controllerIndex, sessionParameters *sessionParams)
{
  _BYTE v6[24]; 
  SessionTaskResponseData v7; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 456, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (!Live_IsSignedIn(controllerIndex) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 457, ASSERT_TYPE_ASSERT, "(Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 458, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  *(_DWORD *)v6 = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))UpdateGameLobbySessionData_CompletedSuccessfully;
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))UpdateGameLobbySessionData_Failed;
  memset(&v6[4], 0, 17);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+var_48]
    vmovsd  xmm1, qword ptr [rsp+50h]
    vmovups [rsp+88h+var_28], xmm0
    vmovsd  [rsp+88h+var_18], xmm1
  }
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  UpdateGameLobbySessionData_CompletedSuccessfully(&v7);
}

/*
==============
Plat_UpdateGameLobbySessionInfo
==============
*/
void Plat_UpdateGameLobbySessionInfo(const int controllerIndex, sessionParameters *sessionParams)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 492, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Plat_UpdateGameLobbySessionInfo :: This code path is not expected") )
    __debugbreak();
}

/*
==============
Plat_UpdatePrivatePartySessionData
==============
*/
void Plat_UpdatePrivatePartySessionData(const int controllerIndex, sessionParameters *sessionParams)
{
  _BYTE v6[24]; 
  SessionTaskResponseData v7; 

  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 400, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  if ( (!Live_IsSignedIn(controllerIndex) || !Xb3MultiplayerManager::IsLocalPlayerInSession(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, controllerIndex, UNKNOWN)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 401, ASSERT_TYPE_ASSERT, "(Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex ))", (const char *)&queryFormat, "Plat_CheckIfPrivatePartySessionExistsForController( controllerIndex )") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex <= 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 402, ASSERT_TYPE_ASSERT, "(!s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "!s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  *(_DWORD *)v6 = controllerIndex;
  s_currentSessionTaskParams.m_successCallback = (void (__fastcall *)(SessionTaskResponseData))UpdatePrivatePartySessionData_CompletedSuccessfully;
  s_currentSessionTaskParams.m_controllerIndex = controllerIndex;
  s_currentSessionTaskParams.m_failedCallback = (void (__fastcall *)(SessionTaskResponseData))UpdatePrivatePartySessionData_Failed;
  memset(&v6[4], 0, 17);
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+88h+var_48]
    vmovsd  xmm1, qword ptr [rsp+50h]
    vmovups [rsp+88h+var_28], xmm0
    vmovsd  [rsp+88h+var_18], xmm1
  }
  s_currentSessionTaskParams.m_sessionParams = sessionParams;
  UpdatePrivatePartySessionData_CompletedSuccessfully(&v7);
}

/*
==============
Plat_UpdatePrivatePartySessionInfo
==============
*/
void Plat_UpdatePrivatePartySessionInfo(const int controllerIndex, sessionParameters *sessionParams)
{
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 486, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Plat_UpdatePrivatePartySessionInfo :: This code path is not expected") )
    __debugbreak();
}

/*
==============
PlatformSessionsHSMEnabled
==============
*/
__int64 PlatformSessionsHSMEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_platform_sessions_manager_enabled;
  if ( !DVARBOOL_online_platform_sessions_manager_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_platform_sessions_manager_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
RemoveFirstUserInGraveyard_CompletedSuccessfully
==============
*/
void RemoveFirstUserInGraveyard_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  Windows::Xbox::System::User *xboxLiveUser; 
  bool v4; 
  Windows::Xbox::System::User **v5; 
  Windows::Xbox::System::User *v6; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1034, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1035, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  xboxLiveUser = s_currentSessionTaskParams.xboxLiveUser;
  v4 = !successData->m_shouldBeConsideredForThrottle;
  v5 = s_usersInGraveyard;
  if ( !v4 )
    v2 = 0;
  s_platformCallFailureCount = v2;
  do
  {
    v6 = *v5;
    if ( *v5 == xboxLiveUser && v6 )
    {
      v6->__abi_Release(v6);
      *v5 = NULL;
    }
    ++v5;
  }
  while ( (__int64)v5 < (__int64)&unk_14D63E560 );
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::RemoveFirstUserInGraveyardFromSession_CompletedSuccessfully(Instance);
}

/*
==============
RemoveFirstUserInGraveyard_Failed
==============
*/
void RemoveFirstUserInGraveyard_Failed(SessionTaskResponseData *failureData)
{
  Windows::Xbox::System::User **v2; 
  Windows::Xbox::System::User *xboxLiveUser; 
  Windows::Xbox::System::User *v4; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1050, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 1051, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  v2 = s_usersInGraveyard;
  xboxLiveUser = s_currentSessionTaskParams.xboxLiveUser;
  do
  {
    v4 = *v2;
    if ( *v2 == xboxLiveUser && v4 )
    {
      v4->__abi_Release(v4);
      *v2 = NULL;
    }
    ++v2;
  }
  while ( (__int64)v2 < (__int64)&unk_14D63E560 );
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::RemoveFirstUserInGraveyardFromSession_Failed(Instance);
}

/*
==============
RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully
==============
*/
void RemoveSplitscreenUserFromPrivatePartySession_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 852, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 853, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::RemoveSplitscreenUserFromSession_CompletedSuccessfully(Instance);
}

/*
==============
RemoveSplitscreenUserFromPrivatePartySession_Failed
==============
*/
void RemoveSplitscreenUserFromPrivatePartySession_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 867, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 868, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::RemoveSplitscreenUserFromSession_Failed(Instance);
}

/*
==============
UpdateGameLobbySessionData_CompletedSuccessfully
==============
*/
void UpdateGameLobbySessionData_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 429, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 430, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::UpdateSessionData_CompletedSuccessfully(Instance);
}

/*
==============
UpdateGameLobbySessionData_Failed
==============
*/
void UpdateGameLobbySessionData_Failed(SessionTaskResponseData *failureData)
{
  GameLobbySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 444, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 445, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = GameLobbySessionHSM::GetInstance();
  GameLobbySessionHSM::UpdateSessionData_Failed(Instance);
}

/*
==============
UpdatePrivatePartySessionData_CompletedSuccessfully
==============
*/
void UpdatePrivatePartySessionData_CompletedSuccessfully(SessionTaskResponseData *successData)
{
  int v2; 
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 373, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != successData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 374, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == successData.m_controllerIndex") )
    __debugbreak();
  v2 = s_platformCallFailureCount;
  if ( successData->m_shouldBeConsideredForThrottle )
    v2 = 0;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_platformCallFailureCount = v2;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    ((void (*)(void))s_currentSessionTaskParams.xboxLiveUser->__abi_Release)();
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::UpdateSessionData_CompletedSuccessfully(Instance);
}

/*
==============
UpdatePrivatePartySessionData_Failed
==============
*/
void UpdatePrivatePartySessionData_Failed(SessionTaskResponseData *failureData)
{
  PrivatePartySessionHSM *Instance; 

  if ( s_currentSessionTaskParams.m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 388, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams.IsInUse()") )
    __debugbreak();
  if ( s_currentSessionTaskParams.m_controllerIndex != failureData->m_controllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\sessions\\platformsessions_xb3.cpp", 389, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex)", (const char *)&queryFormat, "s_currentSessionTaskParams.m_controllerIndex == failureData.m_controllerIndex") )
    __debugbreak();
  ++s_platformCallFailureCount;
  s_currentSessionTaskParams.m_controllerIndex = -1;
  s_currentSessionTaskParams.m_sessionParams = NULL;
  s_currentSessionTaskParams.m_successCallback = NULL;
  s_currentSessionTaskParams.m_failedCallback = NULL;
  if ( s_currentSessionTaskParams.xboxLiveUser )
  {
    s_currentSessionTaskParams.xboxLiveUser->__abi_Release(s_currentSessionTaskParams.xboxLiveUser);
    s_currentSessionTaskParams.xboxLiveUser = NULL;
  }
  Instance = PrivatePartySessionHSM::GetInstance();
  PrivatePartySessionHSM::UpdateSessionData_Failed(Instance);
}

