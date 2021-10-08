/*
==============
Xb3MultiplayerManager::SessionPropertyChanged
==============
*/

void __fastcall Xb3MultiplayerManager::SessionPropertyChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?SessionPropertyChanged@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::UpdatePrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::UpdatePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?UpdatePrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::MemberLeft
==============
*/

void __fastcall Xb3MultiplayerManager::MemberLeft(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?MemberLeft@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::CompareSessionNameInGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CompareSessionNameInGameLobbySession(Xb3MultiplayerManager *this, _GUID *sessionId)
{
  return ?CompareSessionNameInGameLobbySession@Xb3MultiplayerManager@@QEAA_NU_GUID@@@Z(this, sessionId);
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/

bool __fastcall Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, int *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  return ?GetCustomSessionProperty@Xb3MultiplayerManager@@QEAA_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAHAEAV?$shared_ptr@Vmultiplayer_session@multiplayer@services@xbox@@@3@@Z(this, propertyName, result, mp_session);
}

/*
==============
Xb3MultiplayerManager::GetGameSessionName
==============
*/

void __fastcall Xb3MultiplayerManager::GetGameSessionName(Xb3MultiplayerManager *this, char *sessionIdStringOut)
{
  ?GetGameSessionName@Xb3MultiplayerManager@@QEAAXPEAD@Z(this, sessionIdStringOut);
}

/*
==============
Xb3MultiplayerManager::CreatePrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CreatePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?CreatePrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::UserAdded
==============
*/

void __fastcall Xb3MultiplayerManager::UserAdded(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?UserAdded@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::MemberJoined
==============
*/

void __fastcall Xb3MultiplayerManager::MemberJoined(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?MemberJoined@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::LeaveGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::LeaveGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?LeaveGameLobbySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::Shutdown
==============
*/

void __fastcall Xb3MultiplayerManager::Shutdown(Xb3MultiplayerManager *this)
{
  ?Shutdown@Xb3MultiplayerManager@@QEAAXXZ(this);
}

/*
==============
Xb3MultiplayerManager::GetCurrentPrivatePartySessionID
==============
*/

_GUID *__fastcall Xb3MultiplayerManager::GetCurrentPrivatePartySessionID(Xb3MultiplayerManager *this, _GUID *result)
{
  return ?GetCurrentPrivatePartySessionID@Xb3MultiplayerManager@@QEAA?AU_GUID@@XZ(this, result);
}

/*
==============
Xb3MultiplayerManager::InviteUsers
==============
*/

bool __fastcall Xb3MultiplayerManager::InviteUsers(Xb3MultiplayerManager *this, const int localControllerIndex, const std::vector<std::wstring> *usersToInvite)
{
  return ?InviteUsers@Xb3MultiplayerManager@@QEAA_NHAEBV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@@Z(this, localControllerIndex, usersToInvite);
}

/*
==============
Xb3MultiplayerManager::GetLobbySessionName
==============
*/

void __fastcall Xb3MultiplayerManager::GetLobbySessionName(Xb3MultiplayerManager *this, char *sessionIdStringOut)
{
  ?GetLobbySessionName@Xb3MultiplayerManager@@QEAAXPEAD@Z(this, sessionIdStringOut);
}

/*
==============
Xb3MultiplayerManager::IsLocalPlayerInSession
==============
*/

bool __fastcall Xb3MultiplayerManager::IsLocalPlayerInSession(Xb3MultiplayerManager *this, const int controllerIndex, const SessionType sessionType)
{
  return ?IsLocalPlayerInSession@Xb3MultiplayerManager@@QEBA_NHW4SessionType@@@Z(this, controllerIndex, sessionType);
}

/*
==============
Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle
==============
*/

bool __fastcall Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs *args)
{
  return ?JoinPrivatePartySessionUsingInviteHandle@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@PE$AAUIProtocolActivatedEventArgs@Activation@ApplicationModel@Windows@@@Z(this, taskParams, args);
}

/*
==============
Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID
==============
*/

void __fastcall Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID(Xb3MultiplayerManager *this)
{
  ?CopyPrivatePartySessionMPSDID@Xb3MultiplayerManager@@QEAAXXZ(this);
}

/*
==============
Xb3MultiplayerManager::GetCorrelationId
==============
*/

bool __fastcall Xb3MultiplayerManager::GetCorrelationId(Xb3MultiplayerManager *this, const SessionType sessionType, std::wstring *correlationId)
{
  return ?GetCorrelationId@Xb3MultiplayerManager@@QEAA_NW4SessionType@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z(this, sessionType, correlationId);
}

/*
==============
Xb3MultiplayerManager::JoinLobbyCompleted
==============
*/

void __fastcall Xb3MultiplayerManager::JoinLobbyCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?JoinLobbyCompleted@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::RemoveUserFromSession
==============
*/

XB3SessionTaskRequestResult *__fastcall Xb3MultiplayerManager::RemoveUserFromSession(Xb3MultiplayerManager *this, XB3SessionTaskRequestResult *result, sessionTaskParameters *taskParams)
{
  return ?RemoveUserFromSession@Xb3MultiplayerManager@@QEAA?AUXB3SessionTaskRequestResult@@PEAUsessionTaskParameters@@@Z(this, result, taskParams);
}

/*
==============
Xb3MultiplayerManager::SessionPropertyWriteCompleted
==============
*/

void __fastcall Xb3MultiplayerManager::SessionPropertyWriteCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?SessionPropertyWriteCompleted@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::Update
==============
*/

void __fastcall Xb3MultiplayerManager::Update(Xb3MultiplayerManager *this, bool bUpdateFromSessionFrame)
{
  ?Update@Xb3MultiplayerManager@@QEAAX_N@Z(this, bUpdateFromSessionFrame);
}

/*
==============
Xb3MultiplayerManager::GetMultiplayerEventHandler
==============
*/

const MultiplayerEventHandler *__fastcall Xb3MultiplayerManager::GetMultiplayerEventHandler(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  return ?GetMultiplayerEventHandler@Xb3MultiplayerManager@@AEAAPEBUMultiplayerEventHandler@@AEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(this, event);
}

/*
==============
Xb3MultiplayerManager::Xb3MultiplayerManager
==============
*/

void __fastcall Xb3MultiplayerManager::Xb3MultiplayerManager(Xb3MultiplayerManager *this)
{
  ??0Xb3MultiplayerManager@@QEAA@XZ(this);
}

/*
==============
Xb3MultiplayerManager::HostChanged
==============
*/

void __fastcall Xb3MultiplayerManager::HostChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?HostChanged@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::GetCurrentGameLobbySessionID
==============
*/

_GUID *__fastcall Xb3MultiplayerManager::GetCurrentGameLobbySessionID(Xb3MultiplayerManager *this, _GUID *result)
{
  return ?GetCurrentGameLobbySessionID@Xb3MultiplayerManager@@QEAA?AU_GUID@@XZ(this, result);
}

/*
==============
Xb3MultiplayerManager::CopyGameLobbySessionMPSDID
==============
*/

void __fastcall Xb3MultiplayerManager::CopyGameLobbySessionMPSDID(Xb3MultiplayerManager *this)
{
  ?CopyGameLobbySessionMPSDID@Xb3MultiplayerManager@@QEAAXXZ(this);
}

/*
==============
Xb3MultiplayerManager::LeaveGameCompleted
==============
*/

void __fastcall Xb3MultiplayerManager::LeaveGameCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?LeaveGameCompleted@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::Init
==============
*/

void __fastcall Xb3MultiplayerManager::Init(Xb3MultiplayerManager *this, bool calledFromEvent)
{
  ?Init@Xb3MultiplayerManager@@QEAAX_N@Z(this, calledFromEvent);
}

/*
==============
Xb3MultiplayerManager::CompareSessionProperties
==============
*/

bool __fastcall Xb3MultiplayerManager::CompareSessionProperties(Xb3MultiplayerManager *this, int maxPlayers, OnlineJoinInfo *joinInfo, PlatformSessionType sessionType)
{
  return ?CompareSessionProperties@Xb3MultiplayerManager@@QEAA_NHAEAUOnlineJoinInfo@@W4PlatformSessionType@@@Z(this, maxPlayers, joinInfo, sessionType);
}

/*
==============
Xb3MultiplayerManager::MemberPropertyChanged
==============
*/

void __fastcall Xb3MultiplayerManager::MemberPropertyChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?MemberPropertyChanged@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::GetSessionMemberByPlatformId
==============
*/

std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *__fastcall Xb3MultiplayerManager::GetSessionMemberByPlatformId(Xb3MultiplayerManager *this, std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *result, const unsigned __int64 platformId, const SessionType sessionType)
{
  return ?GetSessionMemberByPlatformId@Xb3MultiplayerManager@@AEBA?AV?$shared_ptr@Vmultiplayer_member@manager@multiplayer@services@xbox@@@std@@_KW4SessionType@@@Z(this, result, platformId, sessionType);
}

/*
==============
Xb3MultiplayerManager::CompareSessionNameInPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CompareSessionNameInPrivatePartySession(Xb3MultiplayerManager *this, _GUID *sessionId)
{
  return ?CompareSessionNameInPrivatePartySession@Xb3MultiplayerManager@@QEAA_NU_GUID@@@Z(this, sessionId);
}

/*
==============
Session_GetSessionType
==============
*/

SessionType __fastcall Session_GetSessionType(const SessionData *sessionData)
{
  return ?Session_GetSessionType@@YA?AW4SessionType@@PEBUSessionData@@@Z(sessionData);
}

/*
==============
Xb3MultiplayerManager::Deallocate
==============
*/

void __fastcall Xb3MultiplayerManager::Deallocate(Xb3MultiplayerManager *this)
{
  ?Deallocate@Xb3MultiplayerManager@@QEAAXXZ(this);
}

/*
==============
Xb3MultiplayerManager::ClearMpManagerEventQueue
==============
*/

void __fastcall Xb3MultiplayerManager::ClearMpManagerEventQueue(Xb3MultiplayerManager *this)
{
  ?ClearMpManagerEventQueue@Xb3MultiplayerManager@@AEAAXXZ(this);
}

/*
==============
Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?AddSplitscreenUserToPrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyControllerIsInPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CheckIfAnyControllerIsInPrivatePartySession(Xb3MultiplayerManager *this)
{
  return ?CheckIfAnyControllerIsInPrivatePartySession@Xb3MultiplayerManager@@QEAA_NXZ(this);
}

/*
==============
mpManager
==============
*/

std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *__fastcall mpManager(std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *result)
{
  return ?mpManager@@YA?AV?$shared_ptr@Vmultiplayer_manager@manager@multiplayer@services@xbox@@@std@@XZ(result);
}

/*
==============
Xb3MultiplayerManager::JoinGameCompleted
==============
*/

void __fastcall Xb3MultiplayerManager::JoinGameCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?JoinGameCompleted@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::IsLocalMemberHost
==============
*/

bool __fastcall Xb3MultiplayerManager::IsLocalMemberHost(Xb3MultiplayerManager *this)
{
  return ?IsLocalMemberHost@Xb3MultiplayerManager@@AEBA_NXZ(this);
}

/*
==============
Xb3MultiplayerManager::UpdateGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::UpdateGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?UpdateGameLobbySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::CheckIfAllActiveClientsAreInGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CheckIfAllActiveClientsAreInGameLobbySession(Xb3MultiplayerManager *this)
{
  return ?CheckIfAllActiveClientsAreInGameLobbySession@Xb3MultiplayerManager@@QEAA_NXZ(this);
}

/*
==============
Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService
==============
*/

void __fastcall Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?ClientDisconnectedFromMultiplayerService@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::InviteSent
==============
*/

void __fastcall Xb3MultiplayerManager::InviteSent(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?InviteSent@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::GetSessionTypeFromEvent
==============
*/

SessionType __fastcall Xb3MultiplayerManager::GetSessionTypeFromEvent(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  return ?GetSessionTypeFromEvent@Xb3MultiplayerManager@@CA?AW4SessionType@@AEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::MultiplayerEventHasError
==============
*/

bool __fastcall Xb3MultiplayerManager::MultiplayerEventHasError(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  return ?MultiplayerEventHasError@Xb3MultiplayerManager@@AEAA_NAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(this, event);
}

/*
==============
Xb3MultiplayerManager::Allocate
==============
*/

void __fastcall Xb3MultiplayerManager::Allocate(Xb3MultiplayerManager *this)
{
  ?Allocate@Xb3MultiplayerManager@@QEAAXXZ(this);
}

/*
==============
GetActivitySessionsDetailComplete
==============
*/

void __fastcall GetActivitySessionsDetailComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?GetActivitySessionsDetailComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
Xb3MultiplayerManager::IsInSession
==============
*/

bool __fastcall Xb3MultiplayerManager::IsInSession(Xb3MultiplayerManager *this, const SessionType sessionType)
{
  return ?IsInSession@Xb3MultiplayerManager@@QEBA_NW4SessionType@@@Z(this, sessionType);
}

/*
==============
Xb3MultiplayerManager::UserRemoved
==============
*/

void __fastcall Xb3MultiplayerManager::UserRemoved(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?UserRemoved@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::JoinGameLobbyFromPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::JoinGameLobbyFromPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?JoinGameLobbyFromPrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::JoinGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::JoinGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?JoinGameLobbySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::CreateGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CreateGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?CreateGameLobbySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?RemoveSplitscreenUserFromPrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession(Xb3MultiplayerManager *this)
{
  return ?CheckIfAnyActiveClientsAreInPrivatePartySession@Xb3MultiplayerManager@@QEAA_NXZ(this);
}

/*
==============
Xb3MultiplayerManager::WritePendingChangedFailed
==============
*/

void __fastcall Xb3MultiplayerManager::WritePendingChangedFailed(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?WritePendingChangedFailed@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(event);
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/

bool __fastcall Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, std::wstring *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  return ?GetCustomSessionProperty@Xb3MultiplayerManager@@QEAA_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAV23@AEAV?$shared_ptr@Vmultiplayer_session@multiplayer@services@xbox@@@3@@Z(this, propertyName, result, mp_session);
}

/*
==============
Xb3MultiplayerManager::CopySessionMPSDID
==============
*/

void __fastcall Xb3MultiplayerManager::CopySessionMPSDID(xbox::services::multiplayer::manager::multiplayer_event *event, const bool fromJoin)
{
  ?CopySessionMPSDID@Xb3MultiplayerManager@@SAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@_N@Z(event, fromJoin);
}

/*
==============
Xb3MultiplayerManager::ProcessMultiplayerEvent
==============
*/

void __fastcall Xb3MultiplayerManager::ProcessMultiplayerEvent(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  ?ProcessMultiplayerEvent@Xb3MultiplayerManager@@AEAAXAEAVmultiplayer_event@manager@multiplayer@services@xbox@@@Z(this, event);
}

/*
==============
Xb3MultiplayerManager::UpdateSession
==============
*/

bool __fastcall Xb3MultiplayerManager::UpdateSession(Xb3MultiplayerManager *this, PlatformSessionType sessionType, const int maxSlots, OnlineJoinInfo *joinInfo)
{
  return ?UpdateSession@Xb3MultiplayerManager@@QEAA_NW4PlatformSessionType@@HAEAUOnlineJoinInfo@@@Z(this, sessionType, maxSlots, joinInfo);
}

/*
==============
Xb3MultiplayerManager::JoinPrivatePartySessionByFetchingHandleIdFromActivity
==============
*/

bool __fastcall Xb3MultiplayerManager::JoinPrivatePartySessionByFetchingHandleIdFromActivity(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?JoinPrivatePartySessionByFetchingHandleIdFromActivity@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin
==============
*/

bool __fastcall Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin(Xb3MultiplayerManager *this, const int controllerIndex, XUID xuid)
{
  return ?FetchHandleIdFromActivitySessionForPrivatePartyJoin@Xb3MultiplayerManager@@QEAA_NHUXUID@@@Z(this, controllerIndex, xuid);
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession(Xb3MultiplayerManager *this)
{
  return ?CheckIfAnyActiveClientsAreInGameLobbySession@Xb3MultiplayerManager@@QEAA_NXZ(this);
}

/*
==============
Xb3MultiplayerManager::WriteCustomSessionProperty
==============
*/

bool __fastcall Xb3MultiplayerManager::WriteCustomSessionProperty(Xb3MultiplayerManager *this, const PlatformSessionType sessionType, const std::wstring *propertyName, const std::wstring *value)
{
  return ?WriteCustomSessionProperty@Xb3MultiplayerManager@@QEAA_NW4PlatformSessionType@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@1@Z(this, sessionType, propertyName, value);
}

/*
==============
Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(Xb3MultiplayerManager *this)
{
  return ?CheckIfAllActiveClientsAreInPrivatePartySession@Xb3MultiplayerManager@@QEAA_NXZ(this);
}

/*
==============
Xb3MultiplayerManager::LeavePrivatePartySession
==============
*/

bool __fastcall Xb3MultiplayerManager::LeavePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  return ?LeavePrivatePartySession@Xb3MultiplayerManager@@QEAA_NPEAUsessionTaskParameters@@@Z(this, taskParams);
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/

bool __fastcall Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, unsigned int *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  return ?GetCustomSessionProperty@Xb3MultiplayerManager@@QEAA_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAIAEAV?$shared_ptr@Vmultiplayer_session@multiplayer@services@xbox@@@3@@Z(this, propertyName, result, mp_session);
}

/*
==============
Xb3MultiplayerManager::SessionPropertyChanged
==============
*/
void Xb3MultiplayerManager::SessionPropertyChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::session_property_changed_event_args *Ptr; 
  std::_Ref_count_base *Rep; 
  const std::string *v4; 
  const char *v5; 
  unsigned int Myval; 
  web::json::value *v7; 
  std::wstring *v8; 
  unsigned __int64 v9; 
  wchar_t *v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v11; 
  std::wstring result; 

  Ptr = (xbox::services::multiplayer::manager::session_property_changed_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v11)->_Ptr;
  Rep = v11._Rep;
  if ( v11._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = (web::json::value *)xbox::services::multiplayer::manager::session_property_changed_event_args::properties(Ptr);
    v8 = web::json::value::to_string(v7, &result);
    if ( v8->_Mypair._Myval2._Myres >= 8 )
      v8 = (std::wstring *)v8->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::SessionPropertyChanged (%S) - err (%d - %s)\n", v8->_Mypair._Myval2._Bx._Buf, Myval, v5);
    if ( result._Mypair._Myval2._Myres >= 8 )
    {
      v9 = 2 * result._Mypair._Myval2._Myres + 2;
      v10 = result._Mypair._Myval2._Bx._Ptr;
      if ( v9 >= 0x1000 )
      {
        v9 = 2 * result._Mypair._Myval2._Myres + 41;
        v10 = (wchar_t *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)result._Mypair._Myval2._Bx._Ptr - (char *)v10 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v10, v9);
    }
  }
}

/*
==============
Xb3MultiplayerManager::UserRemoved
==============
*/
void Xb3MultiplayerManager::UserRemoved(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::user_removed_event_args **v2; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::user_removed_event_args *v4; 
  const std::string *v5; 
  const char *Ptr; 
  unsigned int Myval; 
  const std::wstring *v8; 
  Windows::Xbox::System::User *xboxLiveUser; 
  bool v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> *v11; 
  std::_Ref_count_base *v12; 
  xbox::services::multiplayer::manager::multiplayer_event_args *v13; 
  sessionTaskParameters *v14; 
  __int128 *v17; 
  int v20; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *v22; 
  signed int Uses; 
  const std::error_code *v24; 
  Online_ErrorReporting *InstancePtr; 
  _BYTE v26[24]; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v29; 
  __int128 v30; 
  __int128 v32; 
  __int128 v34; 
  char dest[256]; 

  v2 = (xbox::services::multiplayer::manager::user_removed_event_args **)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &result);
  Rep = result._Rep;
  v4 = *v2;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( v4 )
  {
    v5 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    Ptr = (const char *)v5;
    if ( v5->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = v5->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v8 = xbox::services::multiplayer::manager::user_removed_event_args::xbox_user_id(v4);
    if ( v8->_Mypair._Myval2._Myres >= 8 )
      v8 = (const std::wstring *)v8->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::UserRemoved - %S err (%d - %s)\n", v8->_Mypair._Myval2._Bx._Buf, Myval, Ptr);
  }
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v26 = -1;
    *(_OWORD *)&v26[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 445, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v26) )
      __debugbreak();
    xboxLiveUser = s_currentSessionTaskParams_0->xboxLiveUser;
    v10 = xboxLiveUser && Plat_IsUserInGraveyard(xboxLiveUser);
    v26[20] = 1;
    *(_DWORD *)v26 = s_currentSessionTaskParams_0->m_controllerIndex;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+200h+var_1D0]
        vmovsd  xmm1, qword ptr [rsp+40h]
      }
      v14 = s_currentSessionTaskParams_0;
      v17 = &v34;
      __asm
      {
        vmovups [rbp+100h+var_140], xmm0
        vmovsd  [rbp+100h+var_130], xmm1
      }
    }
    else
    {
      v11 = xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v28);
      v12 = v28._Rep;
      v13 = v11->_Ptr;
      if ( v28._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v12->_Destroy(v12);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
            v12->_Delete_this(v12);
        }
      }
      v14 = s_currentSessionTaskParams_0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+200h+var_1D0]
        vmovsd  xmm1, qword ptr [rsp+40h]
      }
      if ( v13 )
      {
        __asm
        {
          vmovups [rbp+100h+var_180], xmm0
          vmovsd  [rbp+100h+var_170], xmm1
        }
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v30);
LABEL_37:
        s_currentSessionTaskParams_0 = NULL;
        return;
      }
      __asm
      {
        vmovups [rbp+100h+var_160], xmm0
        vmovsd  [rbp+100h+var_150], xmm1
      }
      v17 = &v32;
    }
    ((void (__fastcall *)(__int128 *))v14->m_failedCallback)(v17);
    v20 = 0;
    while ( 1 )
    {
      PlatformUserId = Live_GetPlatformUserId(v20);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &v29, PlatformUserId, UNKNOWN);
      v22 = v29._Rep;
      if ( v29._Rep )
      {
        Uses = v29._Rep->_Uses;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v22->_Destroy(v22);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22->_Weaks, 0xFFFFFFFF) == 1 )
            v22->_Delete_this(v22);
        }
        if ( Uses > 0 )
          break;
      }
      if ( ++v20 >= 8 )
      {
        if ( !v10 )
          goto LABEL_37;
        break;
      }
    }
    v24 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
    Com_sprintf(dest, 0x100ui64, "%d", (unsigned int)v24->_Myval);
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_SESSIONS_t)16, dest);
    Com_Printf(25, "Xb3MultiplayerManager::UserRemoved We are going to wipe out the mpmanager because it is not clearing on failures\n");
    Xb3MultiplayerManager::Init(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, 1);
    goto LABEL_37;
  }
  Com_PrintWarning(25, "Xb3MultiplayerManager::UserRemoved , the s_currentSessionTaskParams is null\n");
}

/*
==============
Xb3MultiplayerManager::UserAdded
==============
*/
void Xb3MultiplayerManager::UserAdded(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::user_added_event_args **v2; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::user_added_event_args *v4; 
  const std::string *v5; 
  const char *Ptr; 
  unsigned int Myval; 
  const std::wstring *v8; 
  sessionTaskParameters *v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> *v10; 
  std::_Ref_count_base *v11; 
  xbox::services::multiplayer::manager::multiplayer_event_args *v12; 
  _BYTE v17[24]; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v19; 
  __int128 v20; 
  __int128 v22; 
  __int128 v24; 

  v2 = (xbox::services::multiplayer::manager::user_added_event_args **)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &result);
  Rep = result._Rep;
  v4 = *v2;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( v4 )
  {
    v5 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    Ptr = (const char *)v5;
    if ( v5->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = v5->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v8 = xbox::services::multiplayer::manager::user_added_event_args::xbox_user_id(v4);
    if ( v8->_Mypair._Myval2._Myres >= 8 )
      v8 = (const std::wstring *)v8->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::UserAdded - %S  err (%d - %s)\n", v8->_Mypair._Myval2._Bx._Buf, Myval, Ptr);
  }
  v9 = s_currentSessionTaskParams_0;
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v17 = -1;
    *(_OWORD *)&v17[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 518, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v17) )
        __debugbreak();
      v9 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v17 = v9->m_controllerIndex;
    v17[20] = 1;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+57h+var_B0]
        vmovsd  xmm1, qword ptr [rbp-49h]
        vmovups [rbp+57h+var_30], xmm0
        vmovsd  [rbp+57h+var_20], xmm1
      }
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v24);
      s_currentSessionTaskParams_0 = NULL;
    }
    else
    {
      v10 = xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v19);
      v11 = v19._Rep;
      v12 = v10->_Ptr;
      if ( v19._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v11->_Destroy(v11);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
            v11->_Delete_this(v11);
        }
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+57h+var_B0]
        vmovsd  xmm1, qword ptr [rbp-49h]
      }
      if ( v12 )
      {
        __asm
        {
          vmovups [rbp+57h+var_70], xmm0
          vmovsd  [rbp+57h+var_60], xmm1
        }
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v20);
      }
      else
      {
        __asm
        {
          vmovups [rbp+57h+var_50], xmm0
          vmovsd  [rbp+57h+var_40], xmm1
        }
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v22);
      }
      s_currentSessionTaskParams_0 = NULL;
    }
  }
  else
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::UserRemoved , the s_currentSessionTaskParams is null\n");
  }
}

/*
==============
Xb3MultiplayerManager::MemberJoined
==============
*/
void Xb3MultiplayerManager::MemberJoined(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::member_joined_event_args *Ptr; 
  std::_Ref_count_base *Rep; 
  const std::string *v4; 
  const char *v5; 
  unsigned int Myval; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v7; 
  char *Myfirst; 
  unsigned __int64 v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v10; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> result; 

  Ptr = (xbox::services::multiplayer::manager::member_joined_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v10)->_Ptr;
  Rep = v10._Rep;
  if ( v10._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = xbox::services::multiplayer::manager::member_joined_event_args::members(Ptr, &result);
    Com_Printf(25, "Xb3MultiplayerManager::MemberJoined (%d) - err (%d - %s)\n", v7->_Mypair._Myval2._Mylast - v7->_Mypair._Myval2._Myfirst, Myval, v5);
    if ( result._Mypair._Myval2._Myfirst )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(result._Mypair._Myval2._Myfirst, result._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&result);
      Myfirst = (char *)result._Mypair._Myval2._Myfirst;
      v9 = ((char *)result._Mypair._Myval2._Myend - (char *)result._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
      if ( v9 >= 0x1000 )
      {
        v9 += 39i64;
        Myfirst = (char *)result._Mypair._Myval2._Myfirst[-1]._Rep;
        if ( (unsigned __int64)((char *)result._Mypair._Myval2._Myfirst - Myfirst - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(Myfirst, v9);
    }
  }
}

/*
==============
Xb3MultiplayerManager::MemberLeft
==============
*/
void Xb3MultiplayerManager::MemberLeft(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::member_left_event_args *Ptr; 
  std::_Ref_count_base *Rep; 
  const std::string *v4; 
  const char *v5; 
  unsigned int Myval; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v7; 
  char *Myfirst; 
  unsigned __int64 v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v10; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> result; 

  Ptr = (xbox::services::multiplayer::manager::member_left_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v10)->_Ptr;
  Rep = v10._Rep;
  if ( v10._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = xbox::services::multiplayer::manager::member_left_event_args::members(Ptr, &result);
    Com_Printf(25, "Xb3MultiplayerManager::MemberLeft (%d) - err (%d - %s)\n", v7->_Mypair._Myval2._Mylast - v7->_Mypair._Myval2._Myfirst, Myval, v5);
    if ( result._Mypair._Myval2._Myfirst )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(result._Mypair._Myval2._Myfirst, result._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&result);
      Myfirst = (char *)result._Mypair._Myval2._Myfirst;
      v9 = ((char *)result._Mypair._Myval2._Myend - (char *)result._Mypair._Myval2._Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
      if ( v9 >= 0x1000 )
      {
        v9 += 39i64;
        Myfirst = (char *)result._Mypair._Myval2._Myfirst[-1]._Rep;
        if ( (unsigned __int64)((char *)result._Mypair._Myval2._Myfirst - Myfirst - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(Myfirst, v9);
    }
  }
}

/*
==============
Xb3MultiplayerManager::MemberPropertyChanged
==============
*/
void Xb3MultiplayerManager::MemberPropertyChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::member_property_changed_event_args *Ptr; 
  std::_Ref_count_base *Rep; 
  const std::string *v4; 
  const char *v5; 
  unsigned int Myval; 
  web::json::value *v7; 
  std::wstring *v8; 
  unsigned __int64 v9; 
  wchar_t *v10; 
  web::json::value result; 
  __int64 v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v14; 
  std::wstring v15; 

  v13 = -2i64;
  Ptr = (xbox::services::multiplayer::manager::member_property_changed_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v14)->_Ptr;
  Rep = v14._Rep;
  if ( v14._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = xbox::services::multiplayer::manager::member_property_changed_event_args::properties(Ptr, &result);
    v8 = web::json::value::to_string(v7, &v15);
    if ( v8->_Mypair._Myval2._Myres >= 8 )
      v8 = (std::wstring *)v8->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::MemberPropertyChanged (%S) - err (%d - %s)\n", v8->_Mypair._Myval2._Bx._Buf, Myval, v5);
    if ( v15._Mypair._Myval2._Myres >= 8 )
    {
      v9 = 2 * v15._Mypair._Myval2._Myres + 2;
      v10 = v15._Mypair._Myval2._Bx._Ptr;
      if ( v9 >= 0x1000 )
      {
        v9 = 2 * v15._Mypair._Myval2._Myres + 41;
        v10 = (wchar_t *)*((_QWORD *)v15._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v15._Mypair._Myval2._Bx._Ptr - (char *)v10 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v10, v9);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rsp+60h], xmm0
    }
    v15._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( result.m_value._Mypair._Myval2 )
      ((void (__fastcall *)(web::json::details::_Value *, __int64))result.m_value._Mypair._Myval2->~_Value)(result.m_value._Mypair._Myval2, 1i64);
  }
}

/*
==============
Xb3MultiplayerManager::HostChanged
==============
*/
void Xb3MultiplayerManager::HostChanged(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  xbox::services::multiplayer::manager::host_changed_event_args *Ptr; 
  std::_Ref_count_base *Rep; 
  const std::string *v4; 
  const char *v5; 
  int Myval; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v7; 
  const char *v8; 
  const char *v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v11; 
  const std::wstring *v12; 
  std::_Ref_count_base *v13; 
  std::_Ref_count_base *v14; 
  std::_Ref_count_base *v15; 
  int v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 

  Ptr = (xbox::services::multiplayer::manager::host_changed_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v17)->_Ptr;
  Rep = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = xbox::services::multiplayer::manager::host_changed_event_args::host_member(Ptr, &result);
    v8 = "false";
    v9 = "false";
    if ( xbox::services::multiplayer::manager::multiplayer_member::is_in_game(v7->_Ptr) )
      v9 = "true";
    v10 = xbox::services::multiplayer::manager::host_changed_event_args::host_member(Ptr, &v19);
    if ( xbox::services::multiplayer::manager::multiplayer_member::is_in_lobby(v10->_Ptr) )
      v8 = "true";
    v11 = xbox::services::multiplayer::manager::host_changed_event_args::host_member(Ptr, &v18);
    v12 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v11->_Ptr);
    if ( v12->_Mypair._Myval2._Myres >= 8 )
      v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
    v16 = Myval;
    Com_Printf(25, "Xb3MultiplayerManager::HostChanged ( %S is in lobby - %s is in game - %s) - err (%d - %s)\n", v12->_Mypair._Myval2._Bx._Buf, v8, v9, v16, v5);
    v13 = v18._Rep;
    if ( v18._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v13->_Destroy(v13);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
          v13->_Delete_this(v13);
      }
    }
    v14 = v19._Rep;
    if ( v19._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
    }
    v15 = result._Rep;
    if ( result._Rep && _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v15->_Destroy(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
        v15->_Delete_this(v15);
    }
  }
}

/*
==============
Xb3MultiplayerManager::JoinGameCompleted
==============
*/
void Xb3MultiplayerManager::JoinGameCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v2; 
  const char *Ptr; 
  unsigned int Myval; 
  unsigned int v5; 
  sessionTaskParameters *v6; 
  bool v9; 
  _BYTE v10[24]; 
  __int128 v11; 

  v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  Ptr = (const char *)v2;
  if ( v2->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = v2->_Mypair._Myval2._Bx._Ptr;
  Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
  v5 = Sys_Milliseconds();
  Com_Printf(25, "%i Xb3MultiplayerManager::JoinGameCompleted - err (%d - %s)\n", v5, Myval, Ptr);
  v6 = s_currentSessionTaskParams_0;
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v10 = -1;
    *(_OWORD *)&v10[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 644, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v10) )
        __debugbreak();
      v6 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v10 = v6->m_controllerIndex;
    v10[20] = 1;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+78h+var_48]
      vmovsd  xmm1, qword ptr [rsp+40h]
    }
    v9 = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval == 0;
    __asm
    {
      vmovups [rsp+78h+var_28], xmm0
      vmovsd  [rsp+78h+var_18], xmm1
    }
    if ( v9 )
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v11);
    else
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v11);
    s_currentSessionTaskParams_0 = NULL;
  }
  else
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::JoinGameCompleted , the s_currentSessionTaskParams is null\n");
  }
}

/*
==============
Xb3MultiplayerManager::JoinLobbyCompleted
==============
*/
void Xb3MultiplayerManager::JoinLobbyCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v2; 
  const char *Ptr; 
  unsigned int Myval; 
  unsigned int v5; 
  sessionTaskParameters *v6; 
  bool v9; 
  _BYTE v10[24]; 
  __int128 v11; 

  v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  Ptr = (const char *)v2;
  if ( v2->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = v2->_Mypair._Myval2._Bx._Ptr;
  Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
  v5 = Sys_Milliseconds();
  Com_Printf(25, "Xb3MultiplayerManager::JoinLobbyCompleted time %d - err (%d - %s)\n", v5, Myval, Ptr);
  v6 = s_currentSessionTaskParams_0;
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v10 = -1;
    *(_OWORD *)&v10[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 681, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v10) )
        __debugbreak();
      v6 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v10 = v6->m_controllerIndex;
    v10[20] = 1;
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+78h+var_48]
      vmovsd  xmm1, qword ptr [rsp+40h]
    }
    v9 = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval == 0;
    __asm
    {
      vmovups [rsp+78h+var_28], xmm0
      vmovsd  [rsp+78h+var_18], xmm1
    }
    if ( v9 )
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v11);
    else
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v11);
    s_currentSessionTaskParams_0 = NULL;
  }
  else
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::JoinLobbyCompleted , the s_currentSessionTaskParams is null\n");
  }
}

/*
==============
Xb3MultiplayerManager::InviteSent
==============
*/
void Xb3MultiplayerManager::InviteSent(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v2; 
  const char *Ptr; 
  const std::error_code *v4; 
  int Myval; 
  Online_InvitationManager *Instance; 

  v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  Ptr = (const char *)v2;
  if ( v2->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = v2->_Mypair._Myval2._Bx._Ptr;
  v4 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
  Com_Printf(25, "Xb3MultiplayerManager::InviteSent - err (%d - %s)\n", (unsigned int)v4->_Myval, Ptr);
  Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
  Instance = Online_InvitationManager::GetInstance();
  Online_InvitationManager::OnInvitationSent(Instance, Myval == 0);
}

/*
==============
Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService
==============
*/
void Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  _BYTE v3[24]; 
  __int128 v4; 

  Com_PrintWarning(25, "Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService: Connection to LIVE multiplayer service lost. This means we're tearing down the MP manager entirely.\n");
  if ( s_currentSessionTaskParams_0 )
  {
    v3[20] = 1;
    *(_QWORD *)&v3[12] = 0i64;
    __asm { vmovsd  xmm1, qword ptr [rsp+30h] }
    *(_DWORD *)&v3[8] = 0;
    *(_QWORD *)v3 = (unsigned int)s_currentSessionTaskParams_0->m_controllerIndex;
    __asm
    {
      vmovups xmm0, [rsp+68h+var_48]
      vmovups [rsp+68h+var_28], xmm0
      vmovsd  [rsp+68h+var_18], xmm1
    }
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v4);
    s_currentSessionTaskParams_0 = NULL;
    Xb3MultiplayerManager::Init(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, 1);
  }
  else
  {
    Plat_FirstPartyRemovedSession();
    Xb3MultiplayerManager::Init(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, 1);
  }
}

/*
==============
Xb3MultiplayerManager::SessionPropertyWriteCompleted
==============
*/
void Xb3MultiplayerManager::SessionPropertyWriteCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v4; 
  const char *Ptr; 
  const std::error_code *v6; 
  _BYTE v9[24]; 
  __int128 v10; 

  v9[20] = 1;
  *(_OWORD *)&v9[4] = 0ui64;
  *(_DWORD *)v9 = s_currentSessionTaskParams_0->m_controllerIndex;
  if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    Ptr = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = v4->_Mypair._Myval2._Bx._Ptr;
    v6 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
    Com_Printf(25, "The write failed due to %d and %s\n", (unsigned int)v6->_Myval, Ptr);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+68h+var_48]
      vmovsd  xmm1, qword ptr [rsp+30h]
      vmovups [rsp+68h+var_28], xmm0
      vmovsd  [rsp+68h+var_18], xmm1
    }
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v10);
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+68h+var_48]
      vmovsd  xmm1, qword ptr [rsp+30h]
      vmovups [rsp+68h+var_28], xmm0
      vmovsd  [rsp+68h+var_18], xmm1
    }
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v10);
  }
}

/*
==============
Xb3MultiplayerManager::LeaveGameCompleted
==============
*/
void Xb3MultiplayerManager::LeaveGameCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v4; 
  const char *Ptr; 
  const std::error_code *v6; 
  _BYTE v9[24]; 
  __int128 v10; 

  *(_OWORD *)&v9[4] = 0ui64;
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v9 = s_currentSessionTaskParams_0->m_controllerIndex;
    v9[20] = 1;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
      Ptr = (const char *)v4;
      if ( v4->_Mypair._Myval2._Myres >= 0x10 )
        Ptr = v4->_Mypair._Myval2._Bx._Ptr;
      v6 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
      Com_Printf(25, "Xb3MultiplayerManager::LeaveGameCompleted failed due to %d and %s\n", (unsigned int)v6->_Myval, Ptr);
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+68h+var_48]
        vmovsd  xmm1, qword ptr [rsp+30h]
        vmovups [rsp+68h+var_28], xmm0
        vmovsd  [rsp+68h+var_18], xmm1
      }
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v10);
      s_currentSessionTaskParams_0 = NULL;
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+68h+var_48]
        vmovsd  xmm1, qword ptr [rsp+30h]
        vmovups [rsp+68h+var_28], xmm0
        vmovsd  [rsp+68h+var_18], xmm1
      }
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v10);
      s_currentSessionTaskParams_0 = NULL;
    }
  }
  else
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::LeaveGameCompleted, the s_currentSessionTaskParams is null\n");
  }
}

/*
==============
Xb3MultiplayerManager::Xb3MultiplayerManager
==============
*/
void Xb3MultiplayerManager::Xb3MultiplayerManager(Xb3MultiplayerManager *this)
{
  this->m_callbackInfo.mp_session._Ptr = NULL;
  this->m_callbackInfo.mp_session._Rep = NULL;
  this->m_callbackInfo.handleId._Mypair._Myval2._Mysize = 0i64;
  this->m_callbackInfo.handleId._Mypair._Myval2._Myres = 7i64;
  this->m_callbackInfo.handleId._Mypair._Myval2._Bx._Buf[0] = 0;
}

/*
==============
Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession
==============
*/
char Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  unsigned int m_controllerIndex; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  Windows::Xbox::System::User *CachedXboxUser; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v14; 
  std::_Ref_count_base *v15; 
  std::_Ref_count_base *v16; 
  std::string *p_m_errorMessage; 
  std::string *v18; 
  unsigned __int64 v19; 
  char *v20; 
  unsigned __int64 v23; 
  char *v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v27; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v29; 
  __int64 v30; 
  Windows::Xbox::System::User *v31; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v32; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v33; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v34; 
  xbox::services::xbox_live_result<void> v35; 
  char _Buffer[256]; 

  v30 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( taskParams->m_controllerIndex >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1550, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", taskParams->m_controllerIndex, 8) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1552, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v27);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v27._Ptr, &v32)->_Ptr;
  v8 = v32._Rep;
  if ( v32._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v32._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v27._Rep;
  if ( v27._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1553, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v28);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v28._Ptr, &v33)->_Ptr;
  v11 = v33._Rep;
  if ( v33._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v33._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v28._Rep;
  if ( v28._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  if ( v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1554, ASSERT_TYPE_ASSERT, "(!mpManager()->game_session())", (const char *)&queryFormat, "!mpManager()->game_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1555, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  if ( Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1557, ASSERT_TYPE_ASSERT, "(!IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY ))", (const char *)&queryFormat, "!IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY )") )
    __debugbreak();
  if ( Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, (const SessionType)1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1558, ASSERT_TYPE_ASSERT, "(!IsLocalPlayerInSession( controllerIndex, SessionType::GAME ))", (const char *)&queryFormat, "!IsLocalPlayerInSession( controllerIndex, SessionType::GAME )") )
    __debugbreak();
  Com_Printf(25, "Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession called\n");
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v31 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v29);
  v14 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v29._Ptr, &v34)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::add_local_user(v14, &v35, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v15 = v34._Rep;
  if ( v34._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v34._Rep->_Uses) )
    {
      v15->_Destroy(v15);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v15->_Weaks) )
        v15->_Delete_this(v15);
    }
  }
  v16 = v29._Rep;
  if ( v29._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v29._Rep->_Uses) )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  if ( v35.m_errorCode._Myval )
  {
    p_m_errorMessage = &v35.m_errorMessage;
    if ( v35.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v35.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %s", m_controllerIndex, p_m_errorMessage->_Mypair._Myval2._Bx._Buf);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    if ( v35.m_errorCode._Myval == 1006 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1573, ASSERT_TYPE_ASSERT, "(result.err().value() != USER_ALREADY_ADDED)", (const char *)&queryFormat, "result.err().value() != USER_ALREADY_ADDED") )
      __debugbreak();
    v18 = &v35.m_errorMessage;
    if ( v35.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)v35.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession : add_local_user failed - %s [%x].\n", v18->_Mypair._Myval2._Bx._Buf, (unsigned int)v35.m_errorCode._Myval);
    if ( v35.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v19 = v35.m_errorMessage._Mypair._Myval2._Myres + 1;
      v20 = v35.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v35.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v19 = v35.m_errorMessage._Mypair._Myval2._Myres + 40;
        v20 = (char *)*((_QWORD *)v35.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v35.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v20, v19);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp-18h], xmm0
    }
    v35.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v35.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v23 = v35.m_errorMessage._Mypair._Myval2._Myres + 1;
      v24 = v35.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v35.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v23 = v35.m_errorMessage._Mypair._Myval2._Myres + 40;
        v24 = (char *)*((_QWORD *)v35.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v35.m_errorMessage._Mypair._Myval2._Bx._Ptr - v24 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v24, v23);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp-18h], xmm0
    }
    v35.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::Allocate
==============
*/
void Xb3MultiplayerManager::Allocate(Xb3MultiplayerManager *this)
{
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v1; 

  if ( !g_mpManagerEventQueue )
  {
    Com_Printf(25, "Xb3MultiplayerManager::Allocate - allocating g_mpManagerEventQueue\n");
    v1 = (std::vector<xbox::services::multiplayer::manager::multiplayer_event> *)operator new(0x18ui64);
    if ( v1 )
    {
      v1->_Mypair._Myval2._Myfirst = NULL;
      v1->_Mypair._Myval2._Mylast = NULL;
      v1->_Mypair._Myval2._Myend = NULL;
      g_mpManagerEventQueue = v1;
    }
    else
    {
      g_mpManagerEventQueue = NULL;
    }
  }
}

/*
==============
Xb3MultiplayerManager::CheckIfAllActiveClientsAreInGameLobbySession
==============
*/
char Xb3MultiplayerManager::CheckIfAllActiveClientsAreInGameLobbySession(Xb3MultiplayerManager *this)
{
  unsigned int v2; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) )
    {
      PlatformUserId = Live_GetPlatformUserId(v2);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, (const SessionType)1);
      Rep = result._Rep;
      if ( !result._Rep )
        break;
      Uses = result._Rep->_Uses;
      if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
      {
        Rep->_Destroy(Rep);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
          Rep->_Delete_this(Rep);
      }
      if ( Uses <= 0 )
        break;
    }
    if ( (int)++v2 >= 8 )
      return 1;
  }
  Com_Printf(25, "CheckIfAllActiveClientsAreInGameLobbySession, %d is active, but not in the game lobby session\n", v2);
  return 0;
}

/*
==============
Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession
==============
*/
char Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(Xb3MultiplayerManager *this)
{
  unsigned int v2; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) )
    {
      PlatformUserId = Live_GetPlatformUserId(v2);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, UNKNOWN);
      Rep = result._Rep;
      if ( !result._Rep )
        break;
      Uses = result._Rep->_Uses;
      if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
      {
        Rep->_Destroy(Rep);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
          Rep->_Delete_this(Rep);
      }
      if ( Uses <= 0 )
        break;
    }
    if ( (int)++v2 >= 8 )
      return 1;
  }
  Com_Printf(25, "VerifyAllActiveClientsAreInPrivatePartySession, %d is active, but not in the private party session\n", v2);
  return 0;
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession
==============
*/
char Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession(Xb3MultiplayerManager *this)
{
  unsigned int v2; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) )
    {
      PlatformUserId = Live_GetPlatformUserId(v2);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, (const SessionType)1);
      Rep = result._Rep;
      if ( result._Rep )
      {
        Uses = result._Rep->_Uses;
        if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
        {
          Rep->_Destroy(Rep);
          if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
            Rep->_Delete_this(Rep);
        }
        if ( Uses > 0 )
          break;
      }
    }
    if ( (int)++v2 >= 8 )
      return 0;
  }
  Com_Printf(25, "CheckIfAnyActiveClientsAreInGameLobbySession, %d is active and in the game lobby session\n", v2);
  return 1;
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession
==============
*/
char Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession(Xb3MultiplayerManager *this)
{
  int v2; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 
  LocalClientNum_t outLocalClientNum; 

  v2 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) )
    {
      PlatformUserId = Live_GetPlatformUserId(v2);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, UNKNOWN);
      Rep = result._Rep;
      if ( result._Rep )
      {
        Uses = result._Rep->_Uses;
        if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
        {
          Rep->_Destroy(Rep);
          if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
            Rep->_Delete_this(Rep);
        }
        if ( Uses > 0 )
          break;
      }
    }
    if ( ++v2 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Xb3MultiplayerManager::CheckIfAnyControllerIsInPrivatePartySession
==============
*/
char Xb3MultiplayerManager::CheckIfAnyControllerIsInPrivatePartySession(Xb3MultiplayerManager *this)
{
  int v2; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 

  v2 = 0;
  while ( 1 )
  {
    PlatformUserId = Live_GetPlatformUserId(v2);
    Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, UNKNOWN);
    Rep = result._Rep;
    if ( result._Rep )
    {
      Uses = result._Rep->_Uses;
      if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
      {
        Rep->_Destroy(Rep);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
          Rep->_Delete_this(Rep);
      }
      if ( Uses > 0 )
        break;
    }
    if ( ++v2 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Xb3MultiplayerManager::ClearMpManagerEventQueue
==============
*/
void Xb3MultiplayerManager::ClearMpManagerEventQueue(Xb3MultiplayerManager *this)
{
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v1; 
  xbox::services::multiplayer::manager::multiplayer_event *Myfirst; 
  std::_Ref_count_base *v6; 
  unsigned int v7; 
  const MultiplayerEventHandler *v8; 
  const MultiplayerEventHandler *v9; 
  __int64 v10; 
  xbox::services::multiplayer::manager::multiplayer_session_type v11; 
  std::_Ref_count_base *Rep; 
  unsigned __int64 v13; 
  char *Ptr; 
  __int64 v15; 
  xbox::services::multiplayer::manager::multiplayer_event v16; 

  if ( g_mpManagerEventQueue )
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::ClearEventQueue : dump remaining events coming from mpManager this frame: Losing %d events, hope these weren't important:\n", g_mpManagerEventQueue->_Mypair._Myval2._Mylast - g_mpManagerEventQueue->_Mypair._Myval2._Myfirst);
    v1 = g_mpManagerEventQueue;
    Myfirst = g_mpManagerEventQueue->_Mypair._Myval2._Myfirst;
    if ( g_mpManagerEventQueue->_Mypair._Myval2._Myfirst != g_mpManagerEventQueue->_Mypair._Myval2._Mylast )
    {
      _R14 = &Myfirst->m_eventArgs._Rep;
      do
      {
        v16.m_pContext = Myfirst->m_pContext;
        __asm
        {
          vmovups xmm0, xmmword ptr [r14-40h]
          vmovups xmmword ptr [rsp+0B8h+var_78.m_errorCode._Myval], xmm0
        }
        std::string::string(&v16.m_errorMessage, (const std::string *)(_R14 - 6));
        v16.m_eventType = *((_DWORD *)_R14 - 4);
        v16.m_sessionType = *((_DWORD *)_R14 - 3);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rsp+0B8h+var_78.m_eventArgs.baseclass_0._Ptr], xmm0
        }
        v6 = *_R14;
        if ( *_R14 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v6->_Uses);
          v6 = *_R14;
        }
        v16.m_eventArgs._Ptr = (xbox::services::multiplayer::manager::multiplayer_event_args *)*(_R14 - 1);
        v16.m_eventArgs._Rep = v6;
        v7 = 0;
        v8 = MultiplayerEventHandlers;
        while ( xbox::services::multiplayer::manager::multiplayer_event::event_type(&v16) != v8->eventType )
        {
          ++v7;
          ++v8;
          if ( v7 >= 0x12 )
          {
            LODWORD(v15) = xbox::services::multiplayer::manager::multiplayer_event::event_type(&v16);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 769, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetMultiplayerEventHandler: Unknown multiplayer manager event of type: %u.\n", v15) )
              __debugbreak();
            goto LABEL_17;
          }
        }
        v9 = &MultiplayerEventHandlers[v7];
        if ( v9 )
        {
          if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(&v16) == pending_subscribe )
          {
            v10 = 0i64;
          }
          else
          {
            v11 = xbox::services::multiplayer::manager::multiplayer_event::session_type(&v16);
            v10 = 2i64;
            if ( v11 == subscribed )
              v10 = 1i64;
          }
          Com_PrintWarning(25, "Xb3MultiplayerManager::ClearEventQueue : DROPPING event of type: %s, for sessionType: %i\n", v9->eventString, v10);
        }
LABEL_17:
        ++Myfirst;
        _R14 += 10;
        Rep = v16.m_eventArgs._Rep;
        if ( v16.m_eventArgs._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_eventArgs._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            Rep->_Destroy(Rep);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
              Rep->_Delete_this(Rep);
          }
        }
        if ( v16.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
        {
          v13 = v16.m_errorMessage._Mypair._Myval2._Myres + 1;
          Ptr = v16.m_errorMessage._Mypair._Myval2._Bx._Ptr;
          if ( v16.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            v13 = v16.m_errorMessage._Mypair._Myval2._Myres + 40;
            Ptr = (char *)*((_QWORD *)v16.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)(v16.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(Ptr, v13);
        }
        v1 = g_mpManagerEventQueue;
      }
      while ( Myfirst != g_mpManagerEventQueue->_Mypair._Myval2._Mylast );
    }
    std::vector<xbox::services::multiplayer::manager::multiplayer_event>::clear(v1);
  }
}

/*
==============
Xb3MultiplayerManager::CompareSessionNameInGameLobbySession
==============
*/
bool Xb3MultiplayerManager::CompareSessionNameInGameLobbySession(Xb3MultiplayerManager *this, _GUID *sessionId)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  const std::wstring *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  __int64 v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  __int64 v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v20; 
  _GUID iid; 
  wchar_t _Buffer[256]; 

  v18 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1865, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v16._Ptr, &v19)->_Ptr;
  v6 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1866, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v17._Ptr, &v20);
  v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v8->_Ptr);
  v10 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
  if ( v10->_Mypair._Myval2._Myres >= 8 )
    v10 = (const std::wstring *)v10->_Mypair._Myval2._Bx._Ptr;
  swprintf(_Buffer, L"{%s}", v10);
  v11 = v20._Rep;
  if ( v20._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  IIDFromString(_Buffer, &iid);
  v13 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&sessionId->Data1;
  if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&sessionId->Data1 )
    v13 = *(_QWORD *)iid.Data4 - *(_QWORD *)sessionId->Data4;
  return v13 == 0;
}

/*
==============
Xb3MultiplayerManager::CompareSessionNameInPrivatePartySession
==============
*/
bool Xb3MultiplayerManager::CompareSessionNameInPrivatePartySession(Xb3MultiplayerManager *this, _GUID *sessionId)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  const std::wstring *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  __int64 v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  __int64 v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v20; 
  _GUID iid; 
  wchar_t _Buffer[256]; 

  v18 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1850, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v16._Ptr, &v19)->_Ptr;
  v6 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1851, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v17._Ptr, &v20);
  v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v8->_Ptr);
  v10 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
  if ( v10->_Mypair._Myval2._Myres >= 8 )
    v10 = (const std::wstring *)v10->_Mypair._Myval2._Bx._Ptr;
  swprintf(_Buffer, L"{%s}", v10);
  v11 = v20._Rep;
  if ( v20._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  IIDFromString(_Buffer, &iid);
  v13 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&sessionId->Data1;
  if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&sessionId->Data1 )
    v13 = *(_QWORD *)iid.Data4 - *(_QWORD *)sessionId->Data4;
  return v13 == 0;
}

/*
==============
Xb3MultiplayerManager::CompareSessionProperties
==============
*/
__int64 Xb3MultiplayerManager::CompareSessionProperties(Xb3MultiplayerManager *this, int maxPlayers, OnlineJoinInfo *joinInfo, PlatformSessionType sessionType)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v13; 
  const web::json::value *v14; 
  std::_Ref_count_base *v15; 
  std::_Ref_count_base *v16; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v17; 
  std::_Ref_count_base *v18; 
  std::_Ref_count_base *v19; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v20; 
  std::_Ref_count_base *v21; 
  std::_Ref_count_base *v22; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v23; 
  const web::json::value *v24; 
  std::_Ref_count_base *v25; 
  char v26; 
  web::json::value *v27; 
  const std::wstring *v28; 
  unsigned __int64 Mysize; 
  unsigned __int64 v30; 
  wchar_t *v31; 
  std::wstring *v32; 
  std::wstring *v33; 
  std::wstring *v34; 
  __int64 v35; 
  unsigned __int64 v36; 
  char v37; 
  unsigned __int64 v38; 
  std::string *v39; 
  unsigned int v40; 
  std::string *v41; 
  unsigned int v42; 
  unsigned __int64 v43; 
  char *v44; 
  unsigned __int8 v45; 
  unsigned __int64 v46; 
  char *v47; 
  unsigned __int64 v48; 
  wchar_t *v49; 
  web::json::value v52; 
  __int64 v53[2]; 
  XSECURITY_INFO *p_m_security; 
  std::wstring key; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v57; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v58; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v59; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v60; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v61; 
  std::wstring v62; 
  std::wstring v63; 
  __int64 v64; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v65; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v66; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v67; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v68; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v69; 
  std::string v70; 
  std::wstring v71; 
  OnlineJoinInfo v72; 
  char dest[256]; 

  v64 = -2i64;
  web::json::value::value(&v52);
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+290h+var_1E8.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v71._Mypair._Myval2._Bx._Buf[0] = 0;
  v53[0] = 0i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1790, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  if ( sessionType == PRIVATE_PARTY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v57);
    v10 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v57._Ptr, &v65)->_Ptr;
    v11 = v65._Rep;
    if ( v65._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v65._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v11->_Destroy(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
          v11->_Delete_this(v11);
      }
    }
    v12 = v57._Rep;
    if ( v57._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v57._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v12->_Destroy(v12);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
          v12->_Delete_this(v12);
      }
    }
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1794, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v58);
    v13 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v58._Ptr, &v66);
    v14 = xbox::services::multiplayer::manager::multiplayer_lobby_session::properties(v13->_Ptr);
    web::json::value::operator=(&v52, v14);
    v15 = v66._Rep;
    if ( v66._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v66._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v15->_Destroy(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
          v15->_Delete_this(v15);
      }
    }
    v16 = v58._Rep;
LABEL_53:
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Uses, 0xFFFFFFFF) == 1 )
      {
        v16->_Destroy(v16);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
          v16->_Delete_this(v16);
      }
    }
    goto LABEL_59;
  }
  if ( sessionType == GAME_LOBBY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v59);
    v17 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v59._Ptr, &v67)->_Ptr;
    v18 = v67._Rep;
    if ( v67._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v67._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v18->_Destroy(v18);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->_Weaks, 0xFFFFFFFF) == 1 )
          v18->_Delete_this(v18);
      }
    }
    v19 = v59._Rep;
    if ( v59._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v59._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v19->_Destroy(v19);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19->_Weaks, 0xFFFFFFFF) == 1 )
          v19->_Delete_this(v19);
      }
    }
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1799, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v60);
    v20 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v60._Ptr, &v68)->_Ptr;
    v21 = v68._Rep;
    if ( v68._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v68._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v21->_Destroy(v21);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21->_Weaks, 0xFFFFFFFF) == 1 )
          v21->_Delete_this(v21);
      }
    }
    v22 = v60._Rep;
    if ( v60._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v60._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v22->_Destroy(v22);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22->_Weaks, 0xFFFFFFFF) == 1 )
          v22->_Delete_this(v22);
      }
    }
    if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1800, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v61);
    v23 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v61._Ptr, &v69);
    v24 = xbox::services::multiplayer::manager::multiplayer_game_session::properties(v23->_Ptr);
    web::json::value::operator=(&v52, v24);
    v25 = v69._Rep;
    if ( v69._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v69._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v25->_Destroy(v25);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25->_Weaks, 0xFFFFFFFF) == 1 )
          v25->_Delete_this(v25);
      }
    }
    v16 = v61._Rep;
    goto LABEL_53;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1805, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid platform session type in CompareSessionProperties") )
    __debugbreak();
LABEL_59:
  v62._Mypair._Myval2._Mysize = 0i64;
  v62._Mypair._Myval2._Myres = 7i64;
  v62._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&v62, L"max_players", 0xBui64);
  if ( !GetIntPropertyValueFromSessionProperties(&v62, &v52, (int *)v53) )
    goto LABEL_108;
  v63._Mypair._Myval2._Mysize = 0i64;
  v63._Mypair._Myval2._Myres = 7i64;
  v63._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&v63, L"public_slots", 0xCui64);
  if ( !GetIntPropertyValueFromSessionProperties(&v63, &v52, (int *)v53 + 1) )
    goto LABEL_108;
  key._Mypair._Myval2._Mysize = 0i64;
  key._Mypair._Myval2._Myres = 7i64;
  key._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&key, L"join_info", 9ui64);
  v53[1] = (__int64)&key;
  v26 = 0;
  if ( v52.m_value._Mypair._Myval2->has_field(v52.m_value._Mypair._Myval2, &key) )
  {
    v27 = web::json::value::at(&v52, &key);
    v28 = web::json::value::as_string(v27);
    if ( &v71 != v28 )
    {
      Mysize = v28->_Mypair._Myval2._Mysize;
      if ( v28->_Mypair._Myval2._Myres >= 8 )
        v28 = (const std::wstring *)v28->_Mypair._Myval2._Bx._Ptr;
      std::wstring::assign(&v71, v28->_Mypair._Myval2._Bx._Buf, Mysize);
    }
    v26 = 1;
  }
  if ( key._Mypair._Myval2._Myres >= 8 )
  {
    v30 = 2 * key._Mypair._Myval2._Myres + 2;
    v31 = key._Mypair._Myval2._Bx._Ptr;
    if ( v30 >= 0x1000 )
    {
      v30 = 2 * key._Mypair._Myval2._Myres + 41;
      v31 = (wchar_t *)*((_QWORD *)key._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)key._Mypair._Myval2._Bx._Ptr - (char *)v31 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v31, v30);
  }
  key._Mypair._Myval2._Myres = 7i64;
  if ( !v26 )
    goto LABEL_108;
  v32 = &v71;
  if ( v71._Mypair._Myval2._Myres >= 8 )
    v32 = (std::wstring *)v71._Mypair._Myval2._Bx._Ptr;
  v33 = (std::wstring *)((char *)v32 + 2 * v71._Mypair._Myval2._Mysize);
  v34 = &v71;
  if ( v71._Mypair._Myval2._Myres >= 8 )
    v34 = (std::wstring *)v71._Mypair._Myval2._Bx._Ptr;
  p_m_security = (XSECURITY_INFO *)v34;
  v70._Mypair._Myval2._Mysize = 0i64;
  v70._Mypair._Myval2._Myres = 15i64;
  v70._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::reserve(&v70, ((char *)v33 - (char *)v34) >> 1);
  v35 = 0i64;
  v36 = (unsigned __int64)((char *)v33 - (char *)v34 + 1) >> 1;
  if ( v34 > v33 )
    v36 = 0i64;
  if ( v36 )
  {
    do
    {
      v37 = v34->_Mypair._Myval2._Bx._Alias[0];
      v38 = v70._Mypair._Myval2._Mysize;
      if ( v70._Mypair._Myval2._Mysize >= v70._Mypair._Myval2._Myres )
      {
        std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(&v70, 1ui64, 0, v37);
      }
      else
      {
        ++v70._Mypair._Myval2._Mysize;
        v39 = &v70;
        if ( v70._Mypair._Myval2._Myres >= 0x10 )
          v39 = (std::string *)v70._Mypair._Myval2._Bx._Ptr;
        v39->_Mypair._Myval2._Bx._Buf[v38] = v37;
        v39->_Mypair._Myval2._Bx._Buf[v38 + 1] = 0;
      }
      v34 = (std::wstring *)((char *)v34 + 2);
      ++v35;
    }
    while ( v35 != v36 );
  }
  p_m_security = &v72.communicationInfo.session.m_security;
  bdSecurityID::bdSecurityID(&v72.communicationInfo.session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&v72.communicationInfo.session.m_security.m_key);
  v40 = v70._Mypair._Myval2._Mysize;
  if ( v70._Mypair._Myval2._Mysize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", LODWORD(v70._Mypair._Myval2._Mysize), "unsigned", v70._Mypair._Myval2._Mysize) )
    __debugbreak();
  v41 = &v70;
  if ( v70._Mypair._Myval2._Myres >= 0x10 )
    v41 = (std::string *)v70._Mypair._Myval2._Bx._Ptr;
  v42 = bdBase64::decode(v41->_Mypair._Myval2._Bx._Buf, v40, dest, 0x100u);
  if ( v42 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1830, ASSERT_TYPE_ASSERT, "(len < 256)", (const char *)&queryFormat, "len < DECODED_XSESSION_INFO_MAX_SIZE") )
    __debugbreak();
  OnlineJoinInfo::Deserialize(&v72, (const unsigned __int8 *)dest, v42);
  if ( LODWORD(v53[0]) != maxPlayers || HIDWORD(v53[0]) != maxPlayers || !XSESSION_INFO::operator==(&joinInfo->communicationInfo.session, &v72.communicationInfo.session) )
  {
    bdSecurityKey::~bdSecurityKey(&v72.communicationInfo.session.m_security.m_key);
    bdSecurityID::~bdSecurityID(&v72.communicationInfo.session.m_security.m_id);
    if ( v70._Mypair._Myval2._Myres >= 0x10 )
    {
      v46 = v70._Mypair._Myval2._Myres + 1;
      v47 = v70._Mypair._Myval2._Bx._Ptr;
      if ( v70._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v46 = v70._Mypair._Myval2._Myres + 40;
        v47 = (char *)*((_QWORD *)v70._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v70._Mypair._Myval2._Bx._Ptr - v47 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v47, v46);
    }
LABEL_108:
    v45 = 0;
    goto LABEL_109;
  }
  bdSecurityKey::~bdSecurityKey(&v72.communicationInfo.session.m_security.m_key);
  bdSecurityID::~bdSecurityID(&v72.communicationInfo.session.m_security.m_id);
  if ( v70._Mypair._Myval2._Myres >= 0x10 )
  {
    v43 = v70._Mypair._Myval2._Myres + 1;
    v44 = v70._Mypair._Myval2._Bx._Ptr;
    if ( v70._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v43 = v70._Mypair._Myval2._Myres + 40;
      v44 = (char *)*((_QWORD *)v70._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v70._Mypair._Myval2._Bx._Ptr - v44 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v44, v43);
  }
  v45 = 1;
LABEL_109:
  if ( v71._Mypair._Myval2._Myres >= 8 )
  {
    v48 = 2 * v71._Mypair._Myval2._Myres + 2;
    v49 = v71._Mypair._Myval2._Bx._Ptr;
    if ( v48 >= 0x1000 )
    {
      v48 = 2 * v71._Mypair._Myval2._Myres + 41;
      v49 = (wchar_t *)*((_QWORD *)v71._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)v71._Mypair._Myval2._Bx._Ptr - (char *)v49 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v49, v48);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+290h+var_1E8.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v71._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v52.m_value._Mypair._Myval2 )
    ((void (__fastcall *)(web::json::details::_Value *, __int64))v52.m_value._Mypair._Myval2->~_Value)(v52.m_value._Mypair._Myval2, 1i64);
  return v45;
}

/*
==============
Xb3MultiplayerManager::CopyGameLobbySessionMPSDID
==============
*/
void Xb3MultiplayerManager::CopyGameLobbySessionMPSDID(Xb3MultiplayerManager *this)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v3; 
  std::_Ref_count_base *v4; 
  std::_Ref_count_base *v5; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v6; 
  xbox::services::multiplayer::multiplayer_session_reference *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  const std::wstring *v10; 
  PartyData *PartyData; 
  const std::wstring *v14; 
  const std::wstring *v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v19; 
  __int64 v20; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v21; 
  _GUID v22; 
  _GUID iid; 
  wchar_t _Buffer[256]; 

  v20 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1960, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v18);
  v3 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v18._Ptr, &v16)->_Ptr;
  v4 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v4->_Destroy(v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->_Weaks, 0xFFFFFFFF) == 1 )
        v4->_Delete_this(v4);
    }
  }
  v5 = v18._Rep;
  if ( v18._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v5->_Destroy(v5);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
        v5->_Delete_this(v5);
    }
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1961, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v19);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v19._Ptr, &v21);
  v7 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v6->_Ptr);
  v8 = v21._Rep;
  if ( v21._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1965, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
    __debugbreak();
  if ( !Lobby_GetPartyData()->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1967, ASSERT_TYPE_ASSERT, "(Lobby_GetPartyData()->areWeHost)", (const char *)&queryFormat, "Lobby_GetPartyData()->areWeHost") )
    __debugbreak();
  v10 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
  if ( v10->_Mypair._Myval2._Myres >= 8 )
    v10 = (const std::wstring *)v10->_Mypair._Myval2._Bx._Ptr;
  if ( swprintf(_Buffer, L"{%s}", v10) )
  {
    IIDFromString(_Buffer, &iid);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+2C8h+iid.Data1]
      vmovups xmmword ptr [rsp+2C8h+var_298.baseclass_0._Ptr], xmm0
    }
    PartyData = Lobby_GetPartyData();
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+2C8h+var_298.baseclass_0._Ptr]
      vmovups [rsp+2C8h+var_238], xmm0
    }
    PartyHost_SetXb3SessionId(PartyData, &v22);
    v14 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v14->_Mypair._Myval2._Myres >= 8 )
      v14 = (const std::wstring *)v14->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::CopyGameLobbySessionMPSDID: Session MPSDID is: %S\n", v14->_Mypair._Myval2._Bx._Buf);
  }
  else
  {
    v15 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v15->_Mypair._Myval2._Myres >= 8 )
      v15 = (const std::wstring *)v15->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1979, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::CopyGameLobbySessionMPSDID, swprintf failed to write %S!", v15->_Mypair._Myval2._Bx._Buf) )
      __debugbreak();
  }
}

/*
==============
Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID
==============
*/
void Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID(Xb3MultiplayerManager *this)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v3; 
  std::_Ref_count_base *v4; 
  std::_Ref_count_base *v5; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v6; 
  xbox::services::multiplayer::multiplayer_session_reference *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  const std::wstring *v10; 
  const std::wstring *v12; 
  const std::wstring *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  __int64 v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v19; 
  _GUID v20; 
  _GUID iid; 
  wchar_t _Buffer[256]; 

  v17 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1930, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
  v3 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v15._Ptr, &v18)->_Ptr;
  v4 = v18._Rep;
  if ( v18._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v4->_Destroy(v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->_Weaks, 0xFFFFFFFF) == 1 )
        v4->_Delete_this(v4);
    }
  }
  v5 = v15._Rep;
  if ( v15._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v5->_Destroy(v5);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
        v5->_Delete_this(v5);
    }
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1931, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v16._Ptr, &v19);
  v7 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v6->_Ptr);
  v8 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1935, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
    __debugbreak();
  if ( !g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1937, ASSERT_TYPE_ASSERT, "(g_partyData.areWeHost)", (const char *)&queryFormat, "g_partyData.areWeHost") )
    __debugbreak();
  v10 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
  if ( v10->_Mypair._Myval2._Myres >= 8 )
    v10 = (const std::wstring *)v10->_Mypair._Myval2._Bx._Ptr;
  if ( swprintf(_Buffer, L"{%s}", v10) )
  {
    IIDFromString(_Buffer, &iid);
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+2C8h+iid.Data1]
      vmovdqa [rsp+2C8h+var_238], xmm0
    }
    PartyHost_SetXb3SessionId(&g_partyData, &v20);
    v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v12->_Mypair._Myval2._Myres >= 8 )
      v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID: Session MPSDID is: %S\n", v12->_Mypair._Myval2._Bx._Buf);
  }
  else
  {
    v13 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v13->_Mypair._Myval2._Myres >= 8 )
      v13 = (const std::wstring *)v13->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1949, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID, swprintf failed to write %S!", v13->_Mypair._Myval2._Bx._Buf) )
      __debugbreak();
  }
}

/*
==============
Xb3MultiplayerManager::CopySessionMPSDID
==============
*/
void Xb3MultiplayerManager::CopySessionMPSDID(xbox::services::multiplayer::manager::multiplayer_event *event, const bool fromJoin)
{
  int v5; 
  xbox::services::multiplayer::multiplayer_session_reference *v6; 
  bool v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  std::_Ref_count_base *v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v14; 
  const std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v15; 
  std::_Ref_count_base *v16; 
  std::_Ref_count_base *v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Myfirst; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v19; 
  const std::wstring *v20; 
  const char *v21; 
  const std::wstring *v22; 
  const wchar_t *v23; 
  const std::wstring *v24; 
  std::_Ref_count_base *v25; 
  std::_Ref_count_base *v26; 
  unsigned __int64 v27; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v28; 
  bool v29; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v31; 
  std::_Ref_count_base *v32; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v33; 
  std::_Ref_count_base *v34; 
  std::_Ref_count_base *v35; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v36; 
  const std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v37; 
  std::_Ref_count_base *v38; 
  std::_Ref_count_base *v39; 
  xbox::services::multiplayer::manager::joinability v40; 
  std::_Ref_count_base *v41; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *Ptr; 
  const std::wstring *v43; 
  const char *v44; 
  const std::wstring *v45; 
  const wchar_t *v46; 
  const std::wstring *v47; 
  std::_Ref_count_base *v48; 
  std::_Ref_count_base *v49; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v50; 
  const std::wstring *v51; 
  int GameFlags; 
  const std::wstring *v54; 
  const wchar_t *v55; 
  bool IsValidSessionId; 
  const std::string *v57; 
  const char *v58; 
  const std::error_code *v59; 
  int v60; 
  unsigned int v61; 
  int v62; 
  int v63; 
  unsigned int v64; 
  int v65; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> v66; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> v67; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v68; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v70; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v71; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v72; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v73; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v74; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v75; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v76; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v77; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  __int64 v85; 
  char v86; 
  int v87; 
  __int64 v88; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v89; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v90; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v91; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v92; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v93; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v94; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v95; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v96; 
  _GUID iid; 
  char str[40]; 
  wchar_t _Buffer[256]; 

  v88 = -2i64;
  _RSI = NULL;
  if ( !xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
  {
    v82 = 0i64;
    v79 = -1i64;
    v83 = 0i64;
    v80 = 0i64;
    v81 = 0i64;
    v84 = 0i64;
    v85 = 0i64;
    v86 = 1;
    v87 = 0;
    v5 = 2;
    if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == pending_subscribe )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v74);
      v63 = 65;
      v29 = 0;
      if ( v74._Ptr )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v73);
        v63 = 199;
        if ( xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v73._Ptr, &v93)->_Ptr )
          v29 = 1;
      }
      if ( (v63 & 4) != 0 )
      {
        v63 &= ~4u;
        Rep = v93._Rep;
        if ( v93._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v93._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            Rep->_Destroy(Rep);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
              Rep->_Delete_this(Rep);
          }
        }
      }
      if ( (v63 & 2) != 0 )
      {
        v63 &= ~2u;
        v31 = v73._Rep;
        if ( v73._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v73._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v31->_Destroy(v31);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
              v31->_Delete_this(v31);
          }
        }
      }
      v64 = v63 & 0xFFFFFFFE;
      v32 = v74._Rep;
      if ( v74._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v74._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v32->_Destroy(v32);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v32->_Weaks, 0xFFFFFFFF) == 1 )
            v32->_Delete_this(v32);
        }
      }
      v6 = NULL;
      if ( !v29 )
        goto LABEL_133;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v75);
      v33 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v75._Ptr, &v94);
      v6 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v33->_Ptr);
      v34 = v94._Rep;
      if ( v94._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v94._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v34->_Destroy(v34);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34->_Weaks, 0xFFFFFFFF) == 1 )
            v34->_Delete_this(v34);
        }
      }
      v35 = v75._Rep;
      if ( v75._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v75._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v35->_Destroy(v35);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v35->_Weaks, 0xFFFFFFFF) == 1 )
            v35->_Delete_this(v35);
        }
      }
      _RSI = &g_partyData;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v76);
      v36 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v76._Ptr, &v95);
      v37 = xbox::services::multiplayer::manager::multiplayer_lobby_session::members(v36->_Ptr);
      std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>(&v66, v37);
      v38 = v95._Rep;
      if ( v95._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v95._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v38->_Destroy(v38);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v38->_Weaks, 0xFFFFFFFF) == 1 )
            v38->_Delete_this(v38);
        }
      }
      v39 = v76._Rep;
      if ( v76._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v76._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v39->_Destroy(v39);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v39->_Weaks, 0xFFFFFFFF) == 1 )
            v39->_Delete_this(v39);
        }
      }
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v77);
      v65 = v64 | 0x700;
      v40 = xbox::services::multiplayer::manager::multiplayer_manager::joinability(v77._Ptr);
      Myfirst = v66._Mypair._Myval2._Myfirst;
      Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - lobby (private party) session - there are %d members. Joinability = %d\n", v66._Mypair._Myval2._Mylast - v66._Mypair._Myval2._Myfirst, (unsigned int)v40);
      v41 = v77._Rep;
      if ( v77._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v77._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v41->_Destroy(v41);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v41->_Weaks, 0xFFFFFFFF) == 1 )
            v41->_Delete_this(v41);
        }
        Myfirst = v66._Mypair._Myval2._Myfirst;
      }
      if ( Myfirst != v66._Mypair._Myval2._Mylast )
      {
        do
        {
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v78);
          v65 |= 0x800u;
          Ptr = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v78._Ptr, &v96)->_Ptr;
          v43 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
          v44 = "NOT HOST";
          if ( xbox::services::multiplayer::manager::multiplayer_lobby_session::is_host(Ptr, v43) )
            v44 = "HOST";
          v45 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
          v46 = (const wchar_t *)v45;
          if ( v45->_Mypair._Myval2._Myres >= 8 )
            v46 = v45->_Mypair._Myval2._Bx._Ptr;
          v47 = xbox::services::multiplayer::manager::multiplayer_member::debug_gamertag(Myfirst->_Ptr);
          if ( v47->_Mypair._Myval2._Myres >= 8 )
            v47 = (const std::wstring *)v47->_Mypair._Myval2._Bx._Ptr;
          Com_Printf(25, "\t--%S - %S (%s)\n", v47->_Mypair._Myval2._Bx._Buf, v46, v44);
          v48 = v96._Rep;
          if ( v96._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v96._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v48->_Destroy(v48);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v48->_Weaks, 0xFFFFFFFF) == 1 )
                v48->_Delete_this(v48);
            }
          }
          v49 = v78._Rep;
          if ( v78._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v78._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v49->_Destroy(v49);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v49->_Weaks, 0xFFFFFFFF) == 1 )
                v49->_Delete_this(v49);
            }
          }
          ++Myfirst;
        }
        while ( Myfirst != v66._Mypair._Myval2._Mylast );
        Myfirst = v66._Mypair._Myval2._Myfirst;
      }
      if ( !Myfirst )
        goto LABEL_124;
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(Myfirst, v66._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&v66);
      v27 = ((char *)v66._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
      v50 = Myfirst;
      if ( v27 >= 0x1000 )
      {
        v27 += 39i64;
        Myfirst = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *)Myfirst[-1]._Rep;
        if ( (unsigned __int64)((char *)v50 - (char *)Myfirst - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
    }
    else
    {
      if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == subscribed )
        v5 = 1;
      v6 = NULL;
      if ( v5 != 1 )
        goto LABEL_133;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
      v60 = 4104;
      v7 = 0;
      if ( result._Ptr )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v68);
        v60 = 12344;
        if ( xbox::services::multiplayer::manager::multiplayer_manager::game_session(v68._Ptr, &v89)->_Ptr )
          v7 = 1;
      }
      if ( (v60 & 0x20) != 0 )
      {
        v60 &= ~0x20u;
        v8 = v89._Rep;
        if ( v89._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v89._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v8->_Destroy(v8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
              v8->_Delete_this(v8);
          }
        }
      }
      if ( (v60 & 0x10) != 0 )
      {
        v60 &= ~0x10u;
        v9 = v68._Rep;
        if ( v68._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v68._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v9->_Destroy(v9);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
              v9->_Delete_this(v9);
          }
        }
      }
      v61 = v60 & 0xFFFFFFF7;
      v10 = result._Rep;
      if ( result._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v10->_Destroy(v10);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
            v10->_Delete_this(v10);
        }
      }
      if ( !v7 )
        goto LABEL_133;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v70);
      v11 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v70._Ptr, &v90);
      v6 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v11->_Ptr);
      v12 = v90._Rep;
      if ( v90._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v90._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v12->_Destroy(v12);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
            v12->_Delete_this(v12);
        }
      }
      v13 = v70._Rep;
      if ( v70._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v70._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v13->_Destroy(v13);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
            v13->_Delete_this(v13);
        }
      }
      _RSI = Lobby_GetPartyData();
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v71);
      v62 = v61 | 0xC000;
      v14 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v71._Ptr, &v91);
      v15 = xbox::services::multiplayer::manager::multiplayer_game_session::members(v14->_Ptr);
      std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>(&v67, v15);
      v16 = v91._Rep;
      if ( v91._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v91._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v16->_Destroy(v16);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
            v16->_Delete_this(v16);
        }
      }
      v17 = v71._Rep;
      if ( v71._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v71._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v17->_Destroy(v17);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
            v17->_Delete_this(v17);
        }
      }
      Myfirst = v67._Mypair._Myval2._Myfirst;
      Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - game session - there are %d members.\n", v67._Mypair._Myval2._Mylast - v67._Mypair._Myval2._Myfirst);
      if ( Myfirst != v67._Mypair._Myval2._Mylast )
      {
        do
        {
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v72);
          v62 |= 0x10000u;
          v19 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v72._Ptr, &v92)->_Ptr;
          v20 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
          v21 = "NOT HOST";
          if ( xbox::services::multiplayer::manager::multiplayer_game_session::is_host(v19, v20) )
            v21 = "HOST";
          v22 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
          v23 = (const wchar_t *)v22;
          if ( v22->_Mypair._Myval2._Myres >= 8 )
            v23 = v22->_Mypair._Myval2._Bx._Ptr;
          v24 = xbox::services::multiplayer::manager::multiplayer_member::debug_gamertag(Myfirst->_Ptr);
          if ( v24->_Mypair._Myval2._Myres >= 8 )
            v24 = (const std::wstring *)v24->_Mypair._Myval2._Bx._Ptr;
          Com_Printf(25, "\t--%S - %S (%s)\n", v24->_Mypair._Myval2._Bx._Buf, v23, v21);
          v25 = v92._Rep;
          if ( v92._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v92._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v25->_Destroy(v25);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25->_Weaks, 0xFFFFFFFF) == 1 )
                v25->_Delete_this(v25);
            }
          }
          v26 = v72._Rep;
          if ( v72._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v72._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v26->_Destroy(v26);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->_Weaks, 0xFFFFFFFF) == 1 )
                v26->_Delete_this(v26);
            }
          }
          ++Myfirst;
        }
        while ( Myfirst != v67._Mypair._Myval2._Mylast );
        Myfirst = v67._Mypair._Myval2._Myfirst;
      }
      if ( !Myfirst )
      {
LABEL_124:
        if ( v6 && _RSI )
        {
          v51 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v6);
          if ( v51->_Mypair._Myval2._Myres >= 8 )
            v51 = (const std::wstring *)v51->_Mypair._Myval2._Bx._Ptr;
          swprintf(_Buffer, L"{%s}", v51);
          IIDFromString(_Buffer, &iid);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+350h+iid.Data1]
            vmovups xmmword ptr [rsi+56C68h], xmm0
          }
          if ( !fromJoin )
          {
            GameFlags = Party_GetGameFlags(_RSI);
            Party_SetGameFlags(_RSI, GameFlags | 0x1000);
          }
          MPSDIDToString(&iid, str);
          v54 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v6);
          v55 = (const wchar_t *)v54;
          if ( v54->_Mypair._Myval2._Myres >= 8 )
            v55 = v54->_Mypair._Myval2._Bx._Ptr;
          IsValidSessionId = XSESSION_INFO::IsValidSessionId(&_RSI->session->dyn.sessionInfo);
          Com_Printf(16, "Xb3MultiplayerManager::CopySessionMPSDID: %s(%d) Session MPSDID is: %S - %s\n", _RSI->partyName, IsValidSessionId, v55, str);
          return;
        }
LABEL_133:
        Com_Printf(16, "Xb3MultiplayerManager::CopySessionMPSDID: sessionReference = %p party = %p\n", v6, _RSI);
        return;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(Myfirst, v67._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&v67);
      v27 = ((char *)v67._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
      v28 = Myfirst;
      if ( v27 >= 0x1000 )
      {
        v27 += 39i64;
        Myfirst = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *)Myfirst[-1]._Rep;
        if ( (unsigned __int64)((char *)v28 - (char *)Myfirst - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
    }
    operator delete(Myfirst, v27);
    goto LABEL_124;
  }
  v57 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  v58 = (const char *)v57;
  if ( v57->_Mypair._Myval2._Myres >= 0x10 )
    v58 = v57->_Mypair._Myval2._Bx._Ptr;
  v59 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
  Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - err (%d - %s)\n", (unsigned int)v59->_Myval, v58);
}

/*
==============
Xb3MultiplayerManager::CreateGameLobbySession
==============
*/
__int64 Xb3MultiplayerManager::CreateGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  xbox::services::multiplayer::manager::multiplayer_manager *v9; 
  unsigned __int64 v11; 
  wchar_t *v12; 
  std::_Ref_count_base *v14; 
  int Myval; 
  std::string *p_m_errorMessage; 
  unsigned int v17; 
  unsigned __int8 v18; 
  unsigned __int64 v19; 
  char *v20; 
  char *fmt; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v25; 
  __int64 v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v27; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v29; 

  v26 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1292, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v24);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v24._Ptr, &v27)->_Ptr;
  v7 = v27._Rep;
  if ( v27._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = v24._Rep;
  if ( v24._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1293, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1295, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1297, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v25);
  v9 = v25._Ptr;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+57h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  xbox::services::multiplayer::manager::multiplayer_manager::join_game_from_lobby(v9, &v29, &sessionTemplateName);
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v11 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v12 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v11 >= 0x1000 )
    {
      v11 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v12 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v12 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v12, v11);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+57h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  v14 = v25._Rep;
  if ( v25._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v14->_Destroy(v14);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
        v14->_Delete_this(v14);
    }
  }
  Myval = v29.m_errorCode._Myval;
  if ( v29.m_errorCode._Myval )
  {
    p_m_errorMessage = &v29.m_errorMessage;
    if ( v29.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v29.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    v17 = Sys_Milliseconds();
    LODWORD(fmt) = Myval;
    Com_PrintError(25, "%i Xb3MultiplayerManager::CreateGameLobbySession - join_game_from_lobby failed - %s [%x].", v17, p_m_errorMessage->_Mypair._Myval2._Bx._Buf, fmt);
    v18 = 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    v18 = 1;
  }
  if ( v29.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v19 = v29.m_errorMessage._Mypair._Myval2._Myres + 1;
    v20 = v29.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v29.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v19 = v29.m_errorMessage._Mypair._Myval2._Myres + 40;
      v20 = (char *)*((_QWORD *)v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v20, v19);
  }
  return v18;
}

/*
==============
Xb3MultiplayerManager::CreatePrivatePartySession
==============
*/
char Xb3MultiplayerManager::CreatePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  unsigned int m_controllerIndex; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  Windows::Xbox::System::User *CachedXboxUser; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v14; 
  std::_Ref_count_base *v15; 
  std::_Ref_count_base *v16; 
  int Myval; 
  std::string *p_m_errorMessage; 
  unsigned int v19; 
  unsigned __int64 v20; 
  char *v21; 
  unsigned __int64 v24; 
  char *v25; 
  char *fmt; 
  __int64 v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v30; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v31; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v32; 
  __int64 v33; 
  Windows::Xbox::System::User *v34; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v35; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v36; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v37; 
  xbox::services::xbox_live_result<void> v38; 

  v33 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1224, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  if ( m_controllerIndex >= 8 )
  {
    LODWORD(v28) = m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1225, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v28, 8) )
      __debugbreak();
  }
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1227, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v30);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v30._Ptr, &v35)->_Ptr;
  v8 = v35._Rep;
  if ( v35._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v35._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v30._Rep;
  if ( v30._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1228, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v31);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v31._Ptr, &v36)->_Ptr;
  v11 = v36._Rep;
  if ( v36._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v36._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v31._Rep;
  if ( v31._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  if ( v10 )
    Com_Printf(25, "Xb3MultiplayerManager: CreatePrivatePartySession, found an unexpected game_session\n");
  if ( Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1237, ASSERT_TYPE_ASSERT, "(!CheckIfAnyActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "!CheckIfAnyActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  if ( Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession(this) )
    Com_Printf(25, "Xb3MultiplayerManager: CreatePrivatePartySession, found users in the game session\n");
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v34 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v32);
  v14 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v32._Ptr, &v37)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::add_local_user(v14, &v38, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v15 = v37._Rep;
  if ( v37._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v37._Rep->_Uses) )
    {
      v15->_Destroy(v15);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v15->_Weaks) )
        v15->_Delete_this(v15);
    }
  }
  v16 = v32._Rep;
  if ( v32._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v32._Rep->_Uses) )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  Myval = v38.m_errorCode._Myval;
  if ( v38.m_errorCode._Myval )
  {
    p_m_errorMessage = &v38.m_errorMessage;
    if ( v38.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v38.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    v19 = Sys_Milliseconds();
    LODWORD(fmt) = Myval;
    Com_PrintError(25, "%i Xb3MultiplayerManager::CreatePrivatePartySession : add_local_user failed - %s [%x].\n", v19, p_m_errorMessage->_Mypair._Myval2._Bx._Buf, fmt);
    if ( v38.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v20 = v38.m_errorMessage._Mypair._Myval2._Myres + 1;
      v21 = v38.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v38.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v20 = v38.m_errorMessage._Mypair._Myval2._Myres + 40;
        v21 = (char *)*((_QWORD *)v38.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v38.m_errorMessage._Mypair._Myval2._Bx._Ptr - v21 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v21, v20);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+1Fh], xmm0
    }
    v38.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v38.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v24 = v38.m_errorMessage._Mypair._Myval2._Myres + 1;
      v25 = v38.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v38.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v24 = v38.m_errorMessage._Mypair._Myval2._Myres + 40;
        v25 = (char *)*((_QWORD *)v38.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v38.m_errorMessage._Mypair._Myval2._Bx._Ptr - v25 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v25, v24);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+1Fh], xmm0
    }
    v38.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::Deallocate
==============
*/
void Xb3MultiplayerManager::Deallocate(Xb3MultiplayerManager *this)
{
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v1; 

  Com_Printf(25, "Xb3MultiplayerManager::Deallocate\n");
  v1 = g_mpManagerEventQueue;
  if ( g_mpManagerEventQueue )
  {
    std::vector<xbox::services::multiplayer::manager::multiplayer_event>::~vector<xbox::services::multiplayer::manager::multiplayer_event>(g_mpManagerEventQueue);
    operator delete(v1, 0x18ui64);
    g_mpManagerEventQueue = NULL;
  }
}

/*
==============
Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin
==============
*/
char Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin(Xb3MultiplayerManager *this, const int controllerIndex, XUID xuid)
{
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v6; 
  unsigned __int64 PlatformIdFromXuid; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v8; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v9; 
  int ActivationFactoryByPCWSTR; 
  int v11; 
  HSTRING v12; 
  int v13; 
  HSTRING v14; 
  int v15; 
  HSTRING v16; 
  int v17; 
  HSTRING v18; 
  int v19; 
  HSTRING v20; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v24; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  __int64 v28; 
  Windows::Foundation::IAsyncInfo *v29; 
  int v30; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *v33; 
  Windows::Foundation::IAsyncInfo *v34; 
  Platform::String *stringXUID; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v37; 
  Platform::Guid pGuid; 
  TaskCreateRequest pTaskCreateRequest; 
  int v40; 
  HSTRING string; 
  void *ppActivationFactory; 
  __int64 v43; 
  __int64 v44; 
  HSTRING v45; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v46; 
  Windows::Foundation::IAsyncInfo *v47; 
  HSTRING newString; 
  HSTRING v49; 
  HSTRING v50; 
  HSTRING v51; 
  HSTRING v52; 
  Microsoft::Xbox::Services::XboxLiveContext *v53; 
  __int64 v54; 
  __int64 v55; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v56; 
  __int64 v57; 
  __int64 v58; 
  __int64 v59; 
  TaskCreateResult pTaskCreateResult; 

  v54 = -2i64;
  v40 = controllerIndex;
  stringXUID = NULL;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v6 = (__int64)UsersXboxLiveContext;
  v53 = UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v55 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
  if ( v6 )
  {
    PlatformIdFromXuid = XUID::GetPlatformIdFromXuid(xuid);
    ConvertPlatformIdToPlatformString(PlatformIdFromXuid, &stringXUID);
    v46 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
    Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v46);
    v9 = v8;
    v46 = v8;
    if ( v8 )
      v8->__abi_AddRef(v8);
    v56 = v9;
    if ( v9 )
      v9->__abi_Release(v9);
    j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v9, stringXUID);
    Com_Printf(25, "Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin: [MPSD] GetActivitiesForUsersAsync getting session data for users XUID %llu\n", xuid.m_id);
    pGuid.__vftable = (Platform::Object_vtbl *)0x4C676A8400193376i64;
    *(_DWORD *)&pGuid.__d = -1975802492;
    *(_DWORD *)&pGuid.__h = 312979082;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Services.XboxLiveConfiguration", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    string = NULL;
    v11 = (*(__int64 (__fastcall **)(void *, HSTRING *))(*(_QWORD *)ppActivationFactory + 56i64))(ppActivationFactory, &string);
    if ( v11 < 0 )
      __abi_WinRTraiseException(v11);
    v12 = string;
    if ( string )
    {
      v13 = WindowsDuplicateString_0(string, &newString);
      if ( v13 < 0 )
        __abi_WinRTraiseException(v13);
      v14 = newString;
      v12 = string;
    }
    else
    {
      v14 = NULL;
    }
    WindowsDeleteString_0(v12);
    v45 = v14;
    if ( v14 )
    {
      v15 = WindowsDuplicateString_0(v14, &v49);
      if ( v15 < 0 )
        __abi_WinRTraiseException(v15);
      v16 = v49;
    }
    else
    {
      v16 = NULL;
    }
    v37 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)v16;
    WindowsDeleteString_0(v14);
    if ( v16 )
    {
      v17 = WindowsDuplicateString_0(v16, &v50);
      if ( v17 < 0 )
        __abi_WinRTraiseException(v17);
      v18 = v50;
    }
    else
    {
      v18 = NULL;
    }
    WindowsDeleteString_0(v16);
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v45 = v18;
    if ( v18 )
    {
      v19 = WindowsDuplicateString_0(v18, &v51);
      if ( v19 < 0 )
        __abi_WinRTraiseException(v19);
      v20 = v51;
      v52 = v51;
    }
    else
    {
      v20 = NULL;
      v52 = NULL;
    }
    WindowsDeleteString_0(v18);
    pTaskCreateRequest.m_appTaskType = -1;
    memset(&pTaskCreateRequest.m_appData, 0, 32);
    pTaskCreateRequest.m_onUpdateCallback = NULL;
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = GetActivitySessionsDetailComplete;
    v43 = 0i64;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 112i64))(v6, &v43);
    if ( v21 < 0 )
      __abi_WinRTraiseException(v21);
    v22 = v43;
    v23 = v43;
    v45 = (HSTRING)v43;
    if ( v43 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8i64))(v43);
      v22 = v43;
    }
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16i64))(v22);
    v57 = v23;
    v37 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
    Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v37, &v9->m_ctr, &v9->m_vec);
    v25 = (__int64)v24;
    v37 = v24;
    if ( v24 )
      v24->__abi_AddRef(v24);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
    v58 = v25;
    v44 = 0i64;
    v26 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v23 + 216i64))(v23, v20, v25, &v44);
    if ( v26 < 0 )
      __abi_WinRTraiseException(v26);
    v27 = v44;
    v28 = v44;
    if ( v44 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 8i64))(v44);
      v27 = v44;
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16i64))(v27);
    v59 = v28;
    v29 = NULL;
    v37 = NULL;
    if ( v28 )
    {
      v30 = (**(__int64 (__fastcall ***)(__int64, void *, Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> **))v28)(v28, &_uuidof__AUIAsyncInfo_Foundation_Windows__, &v37);
      if ( v30 < 0 )
        __abi_WinRTraiseException(v30);
      v29 = (Windows::Foundation::IAsyncInfo *)v37;
    }
    v47 = v29;
    m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    if ( v29 != pTaskCreateRequest.m_asyncInfo )
    {
      if ( v29 )
      {
        v29->__abi_AddRef(v29);
        m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
      }
      if ( m_asyncInfo )
        m_asyncInfo->__abi_Release(m_asyncInfo);
      pTaskCreateRequest.m_asyncInfo = v29;
    }
    if ( v29 )
      v29->__abi_Release(v29);
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16i64))(v28);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v45 + 16i64))(v45);
    Instance = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      pTaskCreateRequest.m_onCompletionCallback = NULL;
      pTaskCreateRequest.m_onUpdateCallback = NULL;
      pTaskCreateRequest.m_appSecondaryCallback = NULL;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      v34 = pTaskCreateRequest.m_asyncInfo;
      if ( pTaskCreateRequest.m_asyncInfo )
      {
        pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
        v34 = NULL;
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
        v34 = pTaskCreateRequest.m_asyncInfo;
      }
      if ( v34 )
        v34->__abi_Release(v34);
      WindowsDeleteString_0(v20);
      if ( v9 )
        v9->__abi_Release(v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      WindowsDeleteString_0((HSTRING)stringXUID);
      return 1;
    }
    else
    {
      Com_Printf(25, "Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin CreateTask failed!\n");
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, NULL);
      pTaskCreateRequest.m_onCompletionCallback = NULL;
      pTaskCreateRequest.m_onUpdateCallback = NULL;
      pTaskCreateRequest.m_appSecondaryCallback = NULL;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      v33 = pTaskCreateRequest.m_asyncInfo;
      if ( pTaskCreateRequest.m_asyncInfo )
      {
        pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
        v33 = NULL;
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
        v33 = pTaskCreateRequest.m_asyncInfo;
      }
      if ( v33 )
        v33->__abi_Release(v33);
      WindowsDeleteString_0(v20);
      if ( v9 )
        v9->__abi_Release(v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6);
      WindowsDeleteString_0((HSTRING)stringXUID);
      return 0;
    }
  }
  else
  {
    Com_Printf(25, "Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin when controller %d has no LiveContext!\n", (unsigned int)controllerIndex);
    WindowsDeleteString_0((HSTRING)stringXUID);
    return 0;
  }
}

/*
==============
GetActivitySessionsDetailComplete
==============
*/
void GetActivitySessionsDetailComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  HSTRING v3; 
  unsigned int m_controllerIndex; 
  char v5; 
  HSTRING CachedXboxUser; 
  Windows::Xbox::System::User *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  HSTRING v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  HSTRING v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  __int64 i; 
  int v18; 
  __int64 v19; 
  HSTRING v20; 
  int v21; 
  HSTRING v22; 
  int v23; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v25; 
  std::wstring *p_handleId; 
  std::_Ref_count_base *Rep; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v29; 
  char *Ptr; 
  unsigned __int64 v31; 
  wchar_t *v32; 
  __int64 v33; 
  char *fmt; 
  __int64 v37; 
  HSTRING string; 
  HSTRING newString; 
  unsigned int v40; 
  unsigned int v41; 
  __int64 v42; 
  HSTRING v43; 
  _BYTE v44[24]; 
  HSTRING v45; 
  __int64 v46; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  HSTRING v48; 
  __int64 v49; 
  __int64 v50; 
  Windows::Xbox::System::User *v51; 
  HSTRING v52; 
  HSTRING v53; 
  HSTRING v54; 
  HSTRING v55; 
  HSTRING v56; 
  __int64 v57; 
  __int128 v58; 
  std::wstring handleId; 
  xbox::services::xbox_live_result<void> v61; 
  char _Buffer[256]; 
  char contextString[256]; 

  v50 = -2i64;
  v3 = NULL;
  m_controllerIndex = pTask->m_controllerIndex;
  v41 = m_controllerIndex;
  v5 = 0;
  if ( taskState )
  {
    j_sprintf_s(contextString, 0x100ui64, "%d %d", m_controllerIndex, taskState);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, contextString);
LABEL_77:
    *(_DWORD *)v44 = -1;
    memset(&v44[4], 0, 17);
    if ( !s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1411, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams != nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams != nullptr") )
      __debugbreak();
    *(_DWORD *)v44 = s_currentSessionTaskParams_0->m_controllerIndex;
    v44[20] = 1;
    Com_Printf(25, "The join attempt failed because the GetActivitySessionsDetailComplete failed");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsp+3A0h+var_338]
      vmovups [rbp+2A0h+var_2B0], xmm0
      vmovsd  xmm1, qword ptr [rsp+78h]
      vmovsd  [rbp+2A0h+var_2A0], xmm1
    }
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v58);
    s_currentSessionTaskParams_0 = NULL;
    return;
  }
  CachedXboxUser = (HSTRING)Live_GetCachedXboxUser(m_controllerIndex);
  v7 = (Windows::Xbox::System::User *)CachedXboxUser;
  newString = CachedXboxUser;
  if ( CachedXboxUser )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)CachedXboxUser + 8i64))(CachedXboxUser);
  v51 = v7;
  if ( v7 )
    v7->__abi_Release(v7);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1373, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr", 0) )
    __debugbreak();
  m_asyncInfo = pTask->m_asyncInfo;
  v9 = NULL;
  v43 = NULL;
  if ( m_asyncInfo )
  {
    v10 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVMultiplayerActivityDetails_Multiplayer_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)&v43);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v9 = v43;
  }
  newString = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8i64))(v9);
  v52 = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  v42 = 0i64;
  v11 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v9 + 64i64))(v9, &v42);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  v12 = v42;
  v13 = (HSTRING)v42;
  if ( v42 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8i64))(v42);
    v12 = v42;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
  newString = v13;
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v53 = v13;
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v56 = v13;
  v57 = 0i64;
  v14 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v13 + 56i64))(v13, &v40);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  v15 = v40;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v48 = v13;
  v49 = v15;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v45 = v13;
  v46 = 0i64;
  v16 = 7;
  if ( v15 )
  {
    v37 = 0i64;
    for ( i = 0i64; ; i = (unsigned int)v33 )
    {
      v18 = (*(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)v13 + 48i64))(v13, i, &v37);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = v37;
      v20 = (HSTRING)v37;
      if ( v37 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8i64))(v37);
        v19 = v37;
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16i64))(v19);
      string = v20;
      if ( v20 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8i64))(v20);
      if ( v20 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16i64))(v20);
      string = v20;
      if ( v20 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8i64))(v20);
      v54 = v20;
      if ( v20 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16i64))(v20);
      string = NULL;
      v21 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v20 + 56i64))(v20, &string);
      if ( v21 < 0 )
        __abi_WinRTraiseException(v21);
      v22 = string;
      if ( string )
      {
        v23 = WindowsDuplicateString_0(string, &newString);
        if ( v23 < 0 )
          __abi_WinRTraiseException(v23);
        v3 = newString;
        v22 = string;
      }
      WindowsDeleteString_0(v22);
      v55 = v3;
      StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v3, NULL);
      handleId._Mypair._Myval2._Mysize = 0i64;
      handleId._Mypair._Myval2._Myres = 7i64;
      handleId._Mypair._Myval2._Bx._Buf[0] = 0;
      v25 = -1i64;
      do
        ++v25;
      while ( StringRawBuffer_0[v25] );
      std::wstring::assign(&handleId, StringRawBuffer_0, v25);
      WindowsDeleteString_0(v3);
      p_handleId = &handleId;
      if ( handleId._Mypair._Myval2._Myres >= 8 )
        p_handleId = (std::wstring *)handleId._Mypair._Myval2._Bx._Ptr;
      Com_Printf(25, "GetActivitySessionsDetailComplete: Joining on handle id %s\n", (const char *)p_handleId);
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
      v16 |= 8u;
      xbox::services::multiplayer::manager::multiplayer_manager::join_lobby(result._Ptr, &v61, &handleId, v7);
      Rep = result._Rep;
      if ( result._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      if ( v61.m_errorCode._Myval )
      {
        LODWORD(fmt) = v61.m_errorCode._Myval;
        j_sprintf_s(_Buffer, 0x100ui64, "%d %x", v41, fmt);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
        p_m_errorMessage = &v61.m_errorMessage;
        if ( v61.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
          p_m_errorMessage = (std::string *)v61.m_errorMessage._Mypair._Myval2._Bx._Ptr;
        Com_PrintError(25, "Xb3MultiplayerManager::JoinPrivatePartySession failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v61.m_errorCode._Myval);
      }
      else
      {
        v5 = 1;
      }
      if ( v61.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      {
        v29 = v61.m_errorMessage._Mypair._Myval2._Myres + 1;
        Ptr = v61.m_errorMessage._Mypair._Myval2._Bx._Ptr;
        if ( v61.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          v29 = v61.m_errorMessage._Mypair._Myval2._Myres + 40;
          Ptr = (char *)*((_QWORD *)v61.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)(v61.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(Ptr, v29);
      }
      v3 = NULL;
      v61.m_errorMessage._Mypair._Myval2._Mysize = 0i64;
      v61.m_errorMessage._Mypair._Myval2._Myres = 15i64;
      v61.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( handleId._Mypair._Myval2._Myres >= 8 )
      {
        v31 = 2 * handleId._Mypair._Myval2._Myres + 2;
        v32 = handleId._Mypair._Myval2._Bx._Ptr;
        if ( v31 >= 0x1000 )
        {
          v31 = 2 * handleId._Mypair._Myval2._Myres + 41;
          v32 = (wchar_t *)*((_QWORD *)handleId._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)handleId._Mypair._Myval2._Bx._Ptr - (char *)v32 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v32, v31);
      }
      handleId._Mypair._Myval2._Mysize = 0i64;
      handleId._Mypair._Myval2._Myres = 7i64;
      handleId._Mypair._Myval2._Bx._Buf[0] = 0;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 16i64))(v20);
      v33 = v46 + 1;
      v46 = v33;
      if ( v33 == v49 )
        break;
      v37 = 0i64;
    }
  }
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  if ( v7 )
    v7->__abi_Release(v7);
  if ( !v5 )
    goto LABEL_77;
}

/*
==============
Xb3MultiplayerManager::GetCorrelationId
==============
*/
char Xb3MultiplayerManager::GetCorrelationId(Xb3MultiplayerManager *this, const SessionType sessionType, std::wstring *correlationId)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v10; 
  const std::wstring *v11; 
  unsigned __int64 v12; 
  std::_Ref_count_base *v13; 
  std::_Ref_count_base *v14; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v15; 
  std::_Ref_count_base *v16; 
  std::_Ref_count_base *v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v18; 
  const std::wstring *v19; 
  unsigned __int64 Mysize; 
  std::_Ref_count_base *v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v25; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v27; 
  __int64 v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v29; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v30; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v31; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v32; 

  v28 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
    {
      Rep->_Destroy(Rep);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&Rep->_Weaks) )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr )
    return 0;
  if ( sessionType )
  {
    if ( sessionType == 1 )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v26);
      v15 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v26._Ptr, &v31)->_Ptr;
      v16 = v31._Rep;
      if ( v31._Rep )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v31._Rep->_Uses) )
        {
          v16->_Destroy(v16);
          if ( !_InterlockedDecrement((volatile signed __int32 *)&v16->_Weaks) )
            v16->_Delete_this(v16);
        }
      }
      v17 = v26._Rep;
      if ( v26._Rep )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v26._Rep->_Uses) )
        {
          v17->_Destroy(v17);
          if ( !_InterlockedDecrement((volatile signed __int32 *)&v17->_Weaks) )
            v17->_Delete_this(v17);
        }
      }
      if ( v15 )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v27);
        v18 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v27._Ptr, &v32);
        v19 = xbox::services::multiplayer::manager::multiplayer_game_session::correlation_id(v18->_Ptr);
        if ( correlationId != v19 )
        {
          Mysize = v19->_Mypair._Myval2._Mysize;
          if ( v19->_Mypair._Myval2._Myres >= 8 )
            v19 = (const std::wstring *)v19->_Mypair._Myval2._Bx._Ptr;
          std::wstring::assign(correlationId, v19->_Mypair._Myval2._Bx._Buf, Mysize);
        }
        v21 = v32._Rep;
        if ( v32._Rep )
        {
          if ( !_InterlockedDecrement((volatile signed __int32 *)&v32._Rep->_Uses) )
          {
            v21->_Destroy(v21);
            if ( !_InterlockedDecrement((volatile signed __int32 *)&v21->_Weaks) )
              v21->_Delete_this(v21);
          }
        }
        v14 = v27._Rep;
        goto LABEL_45;
      }
      Com_PrintWarning(25, "Xb3MultiplayerManager::GetCorrelationId - failed to get the correlation id because we don't have a game session.\n");
    }
    return 0;
  }
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v24);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v24._Ptr, &v29)->_Ptr;
  v8 = v29._Rep;
  if ( v29._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v29._Rep->_Uses) )
    {
      v8->_Destroy(v8);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v8->_Weaks) )
        v8->_Delete_this(v8);
    }
  }
  v9 = v24._Rep;
  if ( v24._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v24._Rep->_Uses) )
    {
      v9->_Destroy(v9);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v9->_Weaks) )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 )
  {
    Com_PrintWarning(25, "Xb3MultiplayerManager::GetCorrelationId - failed to get the correlation id because we don't have a lobby session.\n");
    return 0;
  }
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v25);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v25._Ptr, &v30);
  v11 = xbox::services::multiplayer::manager::multiplayer_lobby_session::correlation_id(v10->_Ptr);
  if ( correlationId != v11 )
  {
    v12 = v11->_Mypair._Myval2._Mysize;
    if ( v11->_Mypair._Myval2._Myres >= 8 )
      v11 = (const std::wstring *)v11->_Mypair._Myval2._Bx._Ptr;
    std::wstring::assign(correlationId, v11->_Mypair._Myval2._Bx._Buf, v12);
  }
  v13 = v30._Rep;
  if ( v30._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v30._Rep->_Uses) )
    {
      v13->_Destroy(v13);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v13->_Weaks) )
        v13->_Delete_this(v13);
    }
  }
  v14 = v25._Rep;
LABEL_45:
  if ( v14 && !_InterlockedDecrement((volatile signed __int32 *)&v14->_Uses) )
  {
    v14->_Destroy(v14);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
      v14->_Delete_this(v14);
  }
  return 1;
}

/*
==============
Xb3MultiplayerManager::GetCurrentGameLobbySessionID
==============
*/
_GUID *Xb3MultiplayerManager::GetCurrentGameLobbySessionID(Xb3MultiplayerManager *this, _GUID *result)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  const std::wstring *v12; 
  const std::wstring *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  __int64 v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v20; 
  wchar_t _Buffer[256]; 

  v18 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
  Ptr = resulta._Ptr;
  Rep = resulta._Rep;
  if ( resulta._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2018, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v16._Ptr, &v19)->_Ptr;
  v6 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2019, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v17._Ptr, &v20);
  v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v8->_Ptr);
  v10 = v20._Rep;
  if ( v20._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  v11 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2023, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
    __debugbreak();
  *(_QWORD *)&result->Data1 = 0i64;
  *(_QWORD *)result->Data4 = 0i64;
  v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
  if ( v12->_Mypair._Myval2._Myres >= 8 )
    v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
  if ( swprintf(_Buffer, L"{%s}", v12) )
  {
    IIDFromString(_Buffer, result);
  }
  else
  {
    v13 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
    if ( v13->_Mypair._Myval2._Myres >= 8 )
      v13 = (const std::wstring *)v13->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2033, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetCurrentGameLobbySessionID, swprintf failed to write %S!", v13->_Mypair._Myval2._Bx._Buf) )
      __debugbreak();
  }
  return result;
}

/*
==============
Xb3MultiplayerManager::GetCurrentPrivatePartySessionID
==============
*/
_GUID *Xb3MultiplayerManager::GetCurrentPrivatePartySessionID(Xb3MultiplayerManager *this, _GUID *result)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  const std::wstring *v12; 
  const std::wstring *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  __int64 v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v20; 
  wchar_t _Buffer[256]; 

  v18 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
  Ptr = resulta._Ptr;
  Rep = resulta._Rep;
  if ( resulta._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1990, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v16._Ptr, &v19)->_Ptr;
  v6 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1991, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v17._Ptr, &v20);
  v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v8->_Ptr);
  v10 = v20._Rep;
  if ( v20._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  v11 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1995, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
    __debugbreak();
  *(_QWORD *)&result->Data1 = 0i64;
  *(_QWORD *)result->Data4 = 0i64;
  v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
  if ( v12->_Mypair._Myval2._Myres >= 8 )
    v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
  if ( swprintf(_Buffer, L"{%s}", v12) )
  {
    IIDFromString(_Buffer, result);
  }
  else
  {
    v13 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
    if ( v13->_Mypair._Myval2._Myres >= 8 )
      v13 = (const std::wstring *)v13->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2005, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetCurrentPrivatePartySessionID, swprintf failed to write %S!", v13->_Mypair._Myval2._Bx._Buf) )
      __debugbreak();
  }
  return result;
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/
__int64 Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, int *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  unsigned __int8 v6; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> *v7; 
  char v8; 
  const web::json::value *v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v10; 
  web::json::value *v11; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v13; 
  std::_Ref_count_base *v14; 
  web::json::value *v15; 
  const std::wstring *Ptr; 
  int *v17; 
  int *v18; 
  int v19; 
  std::wstring *v20; 
  std::wstring *v21; 
  unsigned __int64 Myres; 
  unsigned __int64 v23; 
  wchar_t *v24; 
  wchar_t *EndPtr; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  __int64 v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v29; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> v30; 
  std::wstring *v31; 

  v28 = -2i64;
  v31 = propertyName;
  v6 = 0;
  if ( mp_session->_Ptr )
  {
    v7 = xbox::services::multiplayer::multiplayer_session::session_properties(mp_session->_Ptr, &v30);
    v8 = 1;
    v9 = xbox::services::multiplayer::multiplayer_session_properties::session_custom_properties_json(v7->_Ptr);
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
    v10 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(resulta._Ptr, &v29);
    v8 = 14;
    v9 = xbox::services::multiplayer::manager::multiplayer_lobby_session::properties(v10->_Ptr);
  }
  v11 = (web::json::value *)v9;
  if ( (v8 & 4) != 0 )
  {
    v8 &= ~4u;
    Rep = v29._Rep;
    if ( v29._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
  }
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    v13 = resulta._Rep;
    if ( resulta._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v13->_Destroy(v13);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
          v13->_Delete_this(v13);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v14 = v30._Rep;
    if ( v30._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
    }
  }
  if ( v11->m_value._Mypair._Myval2->has_field(v11->m_value._Mypair._Myval2, propertyName) )
  {
    v15 = (web::json::value *)web::json::value::at(v11, propertyName);
    Ptr = web::json::value::as_string(v15);
    v17 = _errno();
    v18 = v17;
    if ( Ptr->_Mypair._Myval2._Myres >= 8 )
      Ptr = (const std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
    *v17 = 0;
    v19 = wcstol(Ptr->_Mypair._Myval2._Bx._Buf, &EndPtr, 10);
    if ( Ptr == (const std::wstring *)EndPtr )
    {
      std::_Xinvalid_argument("invalid stoi argument");
      JUMPOUT(0x1428A929Bi64);
    }
    if ( *v18 == 34 )
    {
      std::_Xout_of_range("stoi argument out of range");
      __debugbreak();
    }
    *result = v19;
    v6 = 1;
    if ( !PlatformSessionsHSMEnabled() )
    {
      v20 = propertyName;
      if ( propertyName->_Mypair._Myval2._Myres >= 8 )
        v20 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
      Com_Printf(25, "Xb3MultiplayerManager::GetCustomSessionProperty - getting INT %S returned value = %d\n", v20->_Mypair._Myval2._Bx._Buf, (unsigned int)*result);
    }
  }
  else if ( !PlatformSessionsHSMEnabled() )
  {
    v21 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v21 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_PrintWarning(25, "Xb3MultiplayerManager::GetCustomSessionProperty - Failed to find INT value %S in the properties.\n", v21->_Mypair._Myval2._Bx._Buf);
  }
  Myres = propertyName->_Mypair._Myval2._Myres;
  if ( Myres >= 8 )
  {
    v23 = 2 * Myres + 2;
    v24 = propertyName->_Mypair._Myval2._Bx._Ptr;
    if ( v23 >= 0x1000 )
    {
      v23 += 39i64;
      if ( (unsigned __int64)v24 - *((_QWORD *)v24 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v24 = (wchar_t *)*((_QWORD *)v24 - 1);
    }
    operator delete(v24, v23);
  }
  propertyName->_Mypair._Myval2._Mysize = 0i64;
  propertyName->_Mypair._Myval2._Myres = 7i64;
  propertyName->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v6;
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/
__int64 Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, unsigned int *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  unsigned __int8 v6; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> *v7; 
  char v8; 
  const web::json::value *v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v10; 
  web::json::value *v11; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v13; 
  std::_Ref_count_base *v14; 
  web::json::value *v15; 
  const std::wstring *Ptr; 
  int *v17; 
  int *v18; 
  unsigned int v19; 
  std::wstring *v20; 
  std::wstring *v21; 
  unsigned __int64 Myres; 
  unsigned __int64 v23; 
  wchar_t *v24; 
  wchar_t *EndPtr; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  __int64 v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v29; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> v30; 
  std::wstring *v31; 

  v28 = -2i64;
  v31 = propertyName;
  v6 = 0;
  if ( mp_session->_Ptr )
  {
    v7 = xbox::services::multiplayer::multiplayer_session::session_properties(mp_session->_Ptr, &v30);
    v8 = 1;
    v9 = xbox::services::multiplayer::multiplayer_session_properties::session_custom_properties_json(v7->_Ptr);
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
    v10 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(resulta._Ptr, &v29);
    v8 = 14;
    v9 = xbox::services::multiplayer::manager::multiplayer_lobby_session::properties(v10->_Ptr);
  }
  v11 = (web::json::value *)v9;
  if ( (v8 & 4) != 0 )
  {
    v8 &= ~4u;
    Rep = v29._Rep;
    if ( v29._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
  }
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    v13 = resulta._Rep;
    if ( resulta._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v13->_Destroy(v13);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
          v13->_Delete_this(v13);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v14 = v30._Rep;
    if ( v30._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
    }
  }
  if ( v11->m_value._Mypair._Myval2->has_field(v11->m_value._Mypair._Myval2, propertyName) )
  {
    v15 = (web::json::value *)web::json::value::at(v11, propertyName);
    Ptr = web::json::value::as_string(v15);
    v17 = _errno();
    v18 = v17;
    if ( Ptr->_Mypair._Myval2._Myres >= 8 )
      Ptr = (const std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
    *v17 = 0;
    v19 = wcstoul(Ptr->_Mypair._Myval2._Bx._Buf, &EndPtr, 10);
    if ( Ptr == (const std::wstring *)EndPtr )
    {
      std::_Xinvalid_argument("invalid stoul argument");
      JUMPOUT(0x1428A960Bi64);
    }
    if ( *v18 == 34 )
    {
      std::_Xout_of_range("stoul argument out of range");
      __debugbreak();
    }
    *result = v19;
    v6 = 1;
    if ( !PlatformSessionsHSMEnabled() )
    {
      v20 = propertyName;
      if ( propertyName->_Mypair._Myval2._Myres >= 8 )
        v20 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
      Com_Printf(25, "Xb3MultiplayerManager::GetCustomSessionProperty - getting UINT %S returned value = %u\n", v20->_Mypair._Myval2._Bx._Buf, *result);
    }
  }
  else if ( !PlatformSessionsHSMEnabled() )
  {
    v21 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v21 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_PrintWarning(25, "Xb3MultiplayerManager::GetCustomSessionProperty - Failed to find UINT value %S in the properties.\n", v21->_Mypair._Myval2._Bx._Buf);
  }
  Myres = propertyName->_Mypair._Myval2._Myres;
  if ( Myres >= 8 )
  {
    v23 = 2 * Myres + 2;
    v24 = propertyName->_Mypair._Myval2._Bx._Ptr;
    if ( v23 >= 0x1000 )
    {
      v23 += 39i64;
      if ( (unsigned __int64)v24 - *((_QWORD *)v24 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v24 = (wchar_t *)*((_QWORD *)v24 - 1);
    }
    operator delete(v24, v23);
  }
  propertyName->_Mypair._Myval2._Mysize = 0i64;
  propertyName->_Mypair._Myval2._Myres = 7i64;
  propertyName->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v6;
}

/*
==============
Xb3MultiplayerManager::GetCustomSessionProperty
==============
*/
__int64 Xb3MultiplayerManager::GetCustomSessionProperty(Xb3MultiplayerManager *this, std::wstring *propertyName, std::wstring *result, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *mp_session)
{
  std::wstring *v5; 
  unsigned __int8 v7; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> *v8; 
  char v9; 
  const web::json::value *v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v11; 
  char v12; 
  web::json::value *v13; 
  char v14; 
  std::_Ref_count_base *Rep; 
  char v16; 
  std::_Ref_count_base *v17; 
  std::_Ref_count_base *v18; 
  web::json::value *v19; 
  const std::wstring *Ptr; 
  unsigned __int64 Mysize; 
  std::wstring *v22; 
  std::wstring *v23; 
  unsigned __int64 Myres; 
  unsigned __int64 v25; 
  wchar_t *v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v28; 
  __int64 v29; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v30; 
  std::shared_ptr<xbox::services::multiplayer::multiplayer_session_properties> resulta; 
  std::wstring *v32; 

  v29 = -2i64;
  v5 = result;
  v32 = propertyName;
  v7 = 0;
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1059, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result", 0) )
    __debugbreak();
  if ( mp_session->_Ptr )
  {
    v8 = xbox::services::multiplayer::multiplayer_session::session_properties(mp_session->_Ptr, &resulta);
    v9 = 1;
    v10 = xbox::services::multiplayer::multiplayer_session_properties::session_custom_properties_json(v8->_Ptr);
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v28);
    v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v28._Ptr, &v30);
    v9 = 14;
    v10 = xbox::services::multiplayer::manager::multiplayer_lobby_session::properties(v11->_Ptr);
  }
  v12 = v9;
  v13 = (web::json::value *)v10;
  if ( (v9 & 4) != 0 )
  {
    v12 = v9 & 0xFB;
    v14 = v9 & 0xFB;
    Rep = v30._Rep;
    if ( v30._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        v12 = v14;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        {
          Rep->_Delete_this(Rep);
          v12 = v14;
        }
      }
    }
  }
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    v16 = v12;
    v17 = v28._Rep;
    if ( v28._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v17->_Destroy(v17);
        v12 = v16;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
        {
          v17->_Delete_this(v17);
          v12 = v16;
        }
      }
    }
  }
  if ( (v12 & 1) != 0 )
  {
    v18 = resulta._Rep;
    if ( resulta._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v18->_Destroy(v18);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->_Weaks, 0xFFFFFFFF) == 1 )
          v18->_Delete_this(v18);
      }
    }
  }
  if ( v13->m_value._Mypair._Myval2->has_field(v13->m_value._Mypair._Myval2, propertyName) )
  {
    v19 = (web::json::value *)web::json::value::at(v13, propertyName);
    Ptr = web::json::value::as_string(v19);
    if ( v5 != Ptr )
    {
      Mysize = Ptr->_Mypair._Myval2._Mysize;
      if ( Ptr->_Mypair._Myval2._Myres >= 8 )
        Ptr = (const std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
      std::wstring::assign(v5, Ptr->_Mypair._Myval2._Bx._Buf, Mysize);
    }
    v7 = 1;
    if ( !PlatformSessionsHSMEnabled() )
    {
      if ( v5->_Mypair._Myval2._Myres >= 8 )
        v5 = (std::wstring *)v5->_Mypair._Myval2._Bx._Ptr;
      v22 = propertyName;
      if ( propertyName->_Mypair._Myval2._Myres >= 8 )
        v22 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
      Com_Printf(25, "Xb3MultiplayerManager::GetCustomSessionProperty - getting %S returned value = %S\n", v22->_Mypair._Myval2._Bx._Buf, v5->_Mypair._Myval2._Bx._Buf);
    }
  }
  else if ( !PlatformSessionsHSMEnabled() )
  {
    v23 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v23 = (std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_PrintWarning(25, "Xb3MultiplayerManager::GetCustomSessionProperty - Failed to find value %S in the properties.\n", v23->_Mypair._Myval2._Bx._Buf);
  }
  Myres = propertyName->_Mypair._Myval2._Myres;
  if ( Myres >= 8 )
  {
    v25 = 2 * Myres + 2;
    v26 = propertyName->_Mypair._Myval2._Bx._Ptr;
    if ( v25 >= 0x1000 )
    {
      v25 += 39i64;
      if ( (unsigned __int64)v26 - *((_QWORD *)v26 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v26 = (wchar_t *)*((_QWORD *)v26 - 1);
    }
    operator delete(v26, v25);
  }
  propertyName->_Mypair._Myval2._Mysize = 0i64;
  propertyName->_Mypair._Myval2._Myres = 7i64;
  propertyName->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v7;
}

/*
==============
Xb3MultiplayerManager::GetGameSessionName
==============
*/
void Xb3MultiplayerManager::GetGameSessionName(Xb3MultiplayerManager *this, char *sessionIdStringOut)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  const std::wstring *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v14; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v17; 

  if ( !sessionIdStringOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2125, ASSERT_TYPE_ASSERT, "(sessionIdStringOut)", (const char *)&queryFormat, "sessionIdStringOut", -2i64) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2126, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v14);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v14._Ptr, &v16)->_Ptr;
  v6 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v14._Rep;
  if ( v14._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( v5 )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
    v8 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v15._Ptr, &v17);
    v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v8->_Ptr);
    v10 = v17._Rep;
    if ( v17._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v10->_Destroy(v10);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
          v10->_Delete_this(v10);
      }
    }
    v11 = v15._Rep;
    if ( v15._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v11->_Destroy(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
          v11->_Delete_this(v11);
      }
    }
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2130, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
      __debugbreak();
    v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
    if ( v12->_Mypair._Myval2._Myres >= 8 )
      v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
    wcstombs(sessionIdStringOut, v12->_Mypair._Myval2._Bx._Buf, 0x100ui64);
  }
}

/*
==============
GetIntPropertyValueFromSessionProperties
==============
*/
__int64 GetIntPropertyValueFromSessionProperties(std::wstring *propertyName, web::json::value *properties, int *resultOut)
{
  unsigned __int8 v6; 
  web::json::value *v7; 
  const std::wstring *Ptr; 
  int *v9; 
  int *v10; 
  int v11; 
  unsigned __int64 Myres; 
  unsigned __int64 v13; 
  wchar_t *v14; 
  wchar_t *EndPtr[3]; 

  EndPtr[1] = (wchar_t *)-2i64;
  EndPtr[2] = (wchar_t *)propertyName;
  v6 = 0;
  if ( !resultOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2078, ASSERT_TYPE_ASSERT, "(resultOut)", (const char *)&queryFormat, "resultOut") )
    __debugbreak();
  if ( properties->m_value._Mypair._Myval2->has_field(properties->m_value._Mypair._Myval2, propertyName) )
  {
    v7 = web::json::value::at(properties, propertyName);
    Ptr = web::json::value::as_string(v7);
    v9 = _errno();
    v10 = v9;
    if ( Ptr->_Mypair._Myval2._Myres >= 8 )
      Ptr = (const std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
    *v9 = 0;
    v11 = wcstol(Ptr->_Mypair._Myval2._Bx._Buf, EndPtr, 10);
    if ( Ptr == (const std::wstring *)EndPtr[0] )
    {
      std::_Xinvalid_argument("invalid stoi argument");
      JUMPOUT(0x1428A9E98i64);
    }
    if ( *v10 == 34 )
    {
      std::_Xout_of_range("stoi argument out of range");
      __debugbreak();
    }
    *resultOut = v11;
    v6 = 1;
  }
  Myres = propertyName->_Mypair._Myval2._Myres;
  if ( Myres >= 8 )
  {
    v13 = 2 * Myres + 2;
    v14 = propertyName->_Mypair._Myval2._Bx._Ptr;
    if ( v13 >= 0x1000 )
    {
      v13 += 39i64;
      if ( (unsigned __int64)v14 - *((_QWORD *)v14 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v14 = (wchar_t *)*((_QWORD *)v14 - 1);
    }
    operator delete(v14, v13);
  }
  propertyName->_Mypair._Myval2._Mysize = 0i64;
  propertyName->_Mypair._Myval2._Myres = 7i64;
  propertyName->_Mypair._Myval2._Bx._Buf[0] = 0;
  return v6;
}

/*
==============
Xb3MultiplayerManager::GetLobbySessionName
==============
*/
void Xb3MultiplayerManager::GetLobbySessionName(Xb3MultiplayerManager *this, char *sessionIdStringOut)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v8; 
  xbox::services::multiplayer::multiplayer_session_reference *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  const std::wstring *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v14; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v17; 

  if ( !sessionIdStringOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2110, ASSERT_TYPE_ASSERT, "(sessionIdStringOut)", (const char *)&queryFormat, "sessionIdStringOut", -2i64) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2111, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v14);
  v5 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v14._Ptr, &v16)->_Ptr;
  v6 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v6->_Destroy(v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
        v6->_Delete_this(v6);
    }
  }
  v7 = v14._Rep;
  if ( v14._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2112, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v15._Ptr, &v17);
  v9 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v8->_Ptr);
  v10 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  v11 = v15._Rep;
  if ( v15._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 2115, ASSERT_TYPE_ASSERT, "(sessionReference)", (const char *)&queryFormat, "sessionReference") )
    __debugbreak();
  v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v9);
  if ( v12->_Mypair._Myval2._Myres >= 8 )
    v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
  wcstombs(sessionIdStringOut, v12->_Mypair._Myval2._Bx._Buf, 0x100ui64);
}

/*
==============
Xb3MultiplayerManager::GetMultiplayerEventHandler
==============
*/
const MultiplayerEventHandler *Xb3MultiplayerManager::GetMultiplayerEventHandler(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const MultiplayerEventHandler *v3; 
  unsigned int i; 
  xbox::services::multiplayer::manager::multiplayer_event_type v6; 

  v3 = MultiplayerEventHandlers;
  for ( i = 0; i < 0x12; ++i )
  {
    if ( xbox::services::multiplayer::manager::multiplayer_event::event_type(event) == v3->eventType )
      return &MultiplayerEventHandlers[i];
    ++v3;
  }
  v6 = xbox::services::multiplayer::manager::multiplayer_event::event_type(event);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 769, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetMultiplayerEventHandler: Unknown multiplayer manager event of type: %u.\n", v6) )
    __debugbreak();
  return 0i64;
}

/*
==============
Xb3MultiplayerManager::GetSessionMemberByPlatformId
==============
*/
std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Xb3MultiplayerManager::GetSessionMemberByPlatformId(Xb3MultiplayerManager *this, std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *result, const unsigned __int64 platformId, const SessionType sessionType)
{
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v9; 
  const std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  xbox::services::multiplayer::manager::multiplayer_game_session *Ptr; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v16; 
  std::_Ref_count_base *v17; 
  wchar_t *v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Myfirst; 
  const std::wstring *v22; 
  __int64 v23; 
  std::wstring *v24; 
  std::wstring *v25; 
  unsigned __int64 Mysize; 
  unsigned __int16 v27; 
  bool v28; 
  unsigned __int16 v29; 
  std::_Ref_count_base *v30; 
  std::_Ref_count_base *v31; 
  unsigned __int64 v32; 
  wchar_t *v33; 
  int v35; 
  int v36; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v38; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v39; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v40; 
  __int64 v41; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v42; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Mylast; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v44; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v45; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v46; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v47; 
  std::wstring v48; 
  std::wstring v49; 
  char v50[6]; 

  v41 = -2i64;
  v42 = result;
  result->_Ptr = NULL;
  result->_Rep = NULL;
  if ( sessionType )
  {
    if ( sessionType != 1 )
      return result;
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v39);
    Ptr = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v39._Ptr, &v46)->_Ptr;
    Rep = v46._Rep;
    if ( v46._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v46._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    v15 = v39._Rep;
    if ( v39._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v39._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v15->_Destroy(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
          v15->_Delete_this(v15);
      }
    }
    if ( !Ptr )
      return result;
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v40);
    v35 = 25;
    v16 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v40._Ptr, &v47);
    v10 = xbox::services::multiplayer::manager::multiplayer_game_session::members(v16->_Ptr);
    v17 = v47._Rep;
    if ( v47._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v47._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v17->_Destroy(v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
          v17->_Delete_this(v17);
      }
    }
    v12 = v40._Rep;
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
    v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(resulta._Ptr, &v44)->_Ptr;
    v7 = v44._Rep;
    if ( v44._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v44._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v7->_Destroy(v7);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
          v7->_Delete_this(v7);
      }
    }
    v8 = resulta._Rep;
    if ( resulta._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v8->_Destroy(v8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
          v8->_Delete_this(v8);
      }
    }
    if ( !v6 )
      return result;
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v38);
    v35 = 7;
    v9 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v38._Ptr, &v45);
    v10 = xbox::services::multiplayer::manager::multiplayer_lobby_session::members(v9->_Ptr);
    v11 = v45._Rep;
    if ( v45._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v45._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v11->_Destroy(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
          v11->_Delete_this(v11);
      }
    }
    v12 = v38._Rep;
  }
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  if ( v10 )
  {
    v49._Mypair._Myval2._Mysize = 0i64;
    v49._Mypair._Myval2._Myres = 7i64;
    v49._Mypair._Myval2._Bx._Buf[0] = 0;
    v18 = (wchar_t *)v50;
    do
    {
      *--v18 = platformId % 0xA + 48;
      platformId /= 0xAui64;
    }
    while ( platformId );
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+50h+var_90.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    v48._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v18 != (wchar_t *)v50 )
      std::wstring::assign(&v48, v18, (v50 - (char *)v18) >> 1);
    v36 = v35 | 0x60;
    std::wstring::_Tidy_deallocate(&v49);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+50h+var_90.baseclass_0._Mypair._Myval2._Bx]
      vmovups ymmword ptr [rbp+50h+var_70.baseclass_0._Mypair._Myval2._Bx], ymm0
    }
    Myfirst = v10->_Mypair._Myval2._Myfirst;
    if ( v10->_Mypair._Myval2._Myfirst != v10->_Mypair._Myval2._Mylast )
    {
      do
      {
        v22 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
        v24 = (std::wstring *)v22;
        v25 = &v49;
        if ( v48._Mypair._Myval2._Myres >= 8 )
          v25 = (std::wstring *)v48._Mypair._Myval2._Bx._Ptr;
        Mysize = v22->_Mypair._Myval2._Mysize;
        if ( v22->_Mypair._Myval2._Myres >= 8 )
          v24 = (std::wstring *)v22->_Mypair._Myval2._Bx._Ptr;
        if ( Mysize == v48._Mypair._Myval2._Mysize )
        {
          if ( Mysize )
          {
            v27 = v24->_Mypair._Myval2._Bx._Buf[0];
            v23 = v25->_Mypair._Myval2._Bx._Buf[0];
            if ( v24->_Mypair._Myval2._Bx._Buf[0] >= (unsigned __int16)v23 )
            {
              v24 = (std::wstring *)((char *)v24 - (__int64)v25);
              v28 = v27 <= (unsigned __int16)v23;
              do
              {
                if ( !v28 )
                  break;
                if ( Mysize == 1 )
                  goto LABEL_53;
                --Mysize;
                v25 = (std::wstring *)((char *)v25 + 2);
                v29 = *(wchar_t *)((char *)v24->_Mypair._Myval2._Bx._Buf + (_QWORD)v25);
                v23 = v25->_Mypair._Myval2._Bx._Buf[0];
                v28 = v29 <= (unsigned __int16)v23;
              }
              while ( v29 >= (unsigned __int16)v23 );
            }
          }
          else
          {
LABEL_53:
            v30 = Myfirst->_Rep;
            if ( v30 )
            {
              _InterlockedIncrement((volatile signed __int32 *)&v30->_Uses);
              v30 = Myfirst->_Rep;
            }
            result->_Ptr = Myfirst->_Ptr;
            v31 = result->_Rep;
            result->_Rep = v30;
            if ( v31 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Uses, 0xFFFFFFFF) == 1 )
              {
                ((void (__fastcall *)(std::_Ref_count_base *, unsigned __int64, __int64, std::wstring *, int))v31->_Destroy)(v31, Mysize, v23, v24, v36);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
                  v31->_Delete_this(v31);
              }
            }
          }
        }
        ++Myfirst;
        Mylast = v10->_Mypair._Myval2._Mylast;
      }
      while ( Myfirst != Mylast );
    }
    if ( v48._Mypair._Myval2._Myres >= 8 )
    {
      v32 = 2 * v48._Mypair._Myval2._Myres + 2;
      v33 = v48._Mypair._Myval2._Bx._Ptr;
      if ( v32 >= 0x1000 )
      {
        v32 = 2 * v48._Mypair._Myval2._Myres + 41;
        v33 = (wchar_t *)*((_QWORD *)v48._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v48._Mypair._Myval2._Bx._Ptr - (char *)v33 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v33, v32);
    }
  }
  return result;
}

/*
==============
Xb3MultiplayerManager::GetSessionTypeFromEvent
==============
*/
__int64 Xb3MultiplayerManager::GetSessionTypeFromEvent(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  unsigned int v2; 

  v2 = 2;
  if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == pending_subscribe )
    return 0i64;
  if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == subscribed )
    return 1;
  return v2;
}

/*
==============
Xb3MultiplayerManager::Init
==============
*/
void Xb3MultiplayerManager::Init(Xb3MultiplayerManager *this, bool calledFromEvent)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  unsigned int v6; 
  const void **v7; 
  unsigned int i; 
  __int64 v9; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::wstring v11; 

  Com_Printf(25, "Xb3MultiplayerManager::Init\n");
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  v11._Mypair._Myval2._Mysize = 0i64;
  v11._Mypair._Myval2._Myres = 7i64;
  v11._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&v11, L"LobbySession", 0xCui64);
  xbox::services::multiplayer::manager::multiplayer_manager::initialize(Ptr, &v11);
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  Com_Printf(25, "Xb3MultiplayerManager - WipeAllOutstandingTasks\n");
  v6 = 0;
  v7 = (const void **)s_tasks[0];
  do
  {
    for ( i = 0; i < 0x17; ++i )
    {
      if ( *v7 )
      {
        LODWORD(v9) = *((_DWORD *)*v7 + 6);
        Com_Printf(25, "\t%d (%d) wiping type = %d (%p)\n", i, v6, v9, *v7);
        *((_DWORD *)*v7 + 4) = 1;
        *v7 = NULL;
      }
      ++v7;
    }
    ++v6;
  }
  while ( v6 < 2 );
  memset_0(s_tasks, 0, sizeof(s_tasks));
  if ( calledFromEvent )
  {
    g_eventDumpRemainingEvents = 1;
  }
  else if ( g_mpManagerEventQueue )
  {
    if ( g_mpManagerEventQueue->_Mypair._Myval2._Mylast - g_mpManagerEventQueue->_Mypair._Myval2._Myfirst )
      Xb3MultiplayerManager::ClearMpManagerEventQueue(this);
  }
}

/*
==============
Xb3MultiplayerManager::InviteUsers
==============
*/
char Xb3MultiplayerManager::InviteUsers(Xb3MultiplayerManager *this, const int localControllerIndex, const std::vector<std::wstring> *usersToInvite)
{
  Windows::Xbox::System::User *UserFromControllerIndex; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v7; 
  HSTRING v8; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v11; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v13; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v15; 
  std::_Ref_count_base *v16; 
  xbox::services::multiplayer::multiplayer_session_reference *v17; 
  const std::wstring *v18; 
  unsigned __int64 Mysize; 
  __int64 v22; 
  void **v23; 
  const std::wstring *v24; 
  unsigned __int64 v25; 
  void *v26; 
  std::string *p_m_errorMessage; 
  std::_Ref_count_base *v28; 
  std::_Ref_count_base *v29; 
  unsigned __int64 v30; 
  char *v31; 
  const std::wstring *v32; 
  unsigned __int64 v34; 
  wchar_t *v35; 
  unsigned __int64 v37; 
  wchar_t *v38; 
  std::_Ref_count_base *v41; 
  std::_Ref_count_base *v42; 
  unsigned __int64 v43; 
  char *v44; 
  unsigned __int64 v46; 
  wchar_t *v47; 
  unsigned __int64 v49; 
  wchar_t *v50; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v52; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v53; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v55; 
  __int64 v56; 
  Windows::Xbox::System::User *v57; 
  Microsoft::Xbox::Services::XboxLiveContext *v58; 
  __int64 v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  unsigned __int64 v63; 
  wchar_t *v64; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v65; 
  void *ptr[2]; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  std::wstring customActivationContext; 
  std::wstring contextStringId; 
  xbox::services::xbox_live_result<void> v71; 

  v56 = -2i64;
  UserFromControllerIndex = GetUserFromControllerIndex(localControllerIndex);
  v57 = UserFromControllerIndex;
  if ( !UserFromControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1159, ASSERT_TYPE_ASSERT, "(currentUser != nullptr)", (const char *)&queryFormat, "currentUser != nullptr", 0i64) )
    __debugbreak();
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
  v58 = UsersXboxLiveContext;
  LOBYTE(v7) = 1;
  v8 = (HSTRING)__abi_details::__abi_ObjectToString(UsersXboxLiveContext, v7);
  WindowsDeleteString_0(NULL);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v8, NULL);
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+0A0h+var_B0.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  customActivationContext._Mypair._Myval2._Bx._Buf[0] = 0;
  v11 = -1i64;
  do
    ++v11;
  while ( StringRawBuffer_0[v11] );
  std::wstring::assign(&customActivationContext, StringRawBuffer_0, v11);
  WindowsDeleteString_0(v8);
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+0A0h+contextStringId.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  v13 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(result._Ptr, &v65)->_Ptr;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::invite_users(v13, &v71, UserFromControllerIndex, usersToInvite, &contextStringId, &customActivationContext);
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
  Rep = v65._Rep;
  if ( v65._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v65._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  v15 = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v15->_Destroy(v15);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
        v15->_Delete_this(v15);
    }
  }
  Com_Printf(25, "Xb3MultiplayerManager::InviteUsers - inviting some people...\n");
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v55);
  xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v55._Ptr, &v52);
  v16 = v55._Rep;
  if ( v55._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v55._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  if ( !v52._Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1172, ASSERT_TYPE_ASSERT, "(lobbySession)", (const char *)&queryFormat, "lobbySession", UserFromControllerIndex) )
    __debugbreak();
  v17 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v52._Ptr);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v52._Ptr, &v53);
  if ( v53._Ptr )
  {
    v18 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v53._Ptr);
    _R14 = v18;
    v67 = 0i64;
    v68 = 0i64;
    Mysize = v18->_Mypair._Myval2._Mysize;
    if ( v18->_Mypair._Myval2._Myres >= 8 )
      _R14 = (const std::wstring *)v18->_Mypair._Myval2._Bx._Ptr;
    if ( Mysize >= 8 )
    {
      v59 = 8i64;
      v60 = 0x7FFFFFFFFFFFFFFEi64;
      v61 = 0x7FFFFFFFFFFFFFFFi64;
      v62 = 0x7FFFFFFFFFFFFFFEi64;
      v22 = Mysize | 7;
      v63 = Mysize | 7;
      if ( (Mysize | 7) > 0x7FFFFFFFFFFFFFFEi64 )
        v22 = 0x7FFFFFFFFFFFFFFEi64;
      v64 = std::allocator<wchar_t>::allocate((std::allocator<wchar_t> *)ptr, v22 + 1);
      ptr[0] = v64;
      memcpy_0(v64, _R14, 2 * Mysize + 2);
      v68 = v22;
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rbp+0A0h+ptr], xmm0
      }
      v68 = 7i64;
    }
    v67 = Mysize;
    if ( !Mysize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1180, ASSERT_TYPE_ASSERT, "(hostXUID.length())", (const char *)&queryFormat, "hostXUID.length()") )
      __debugbreak();
    v23 = ptr;
    if ( v68 >= 8 )
      v23 = (void **)ptr[0];
    v24 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v17);
    if ( v24->_Mypair._Myval2._Myres >= 8 )
      v24 = (const std::wstring *)v24->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "\t\tsession_name = %S\n\t\thandleid = %S\n", v24->_Mypair._Myval2._Bx._Buf, (const wchar_t *)v23);
    if ( v68 >= 8 )
    {
      v25 = 2 * v68 + 2;
      v26 = ptr[0];
      if ( v25 >= 0x1000 )
      {
        v25 = 2 * v68 + 41;
        v26 = (void *)*((_QWORD *)ptr[0] - 1);
        if ( (unsigned __int64)(ptr[0] - v26 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v26, v25);
    }
  }
  else
  {
    v32 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v17);
    if ( v32->_Mypair._Myval2._Myres >= 8 )
      v32 = (const std::wstring *)v32->_Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "\t\tsession_name = %S\n\t\thandleid = NO HOST!\n", v32->_Mypair._Myval2._Bx._Buf);
  }
  if ( v71.m_errorCode._Myval )
  {
    p_m_errorMessage = &v71.m_errorMessage;
    if ( v71.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v71.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::InviteUsers - InviteUsers failed - %s [%x].", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v71.m_errorCode._Myval);
    v28 = v53._Rep;
    if ( v53._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v53._Rep->_Uses) )
      {
        v28->_Destroy(v28);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v28->_Weaks) )
          v28->_Delete_this(v28);
      }
    }
    v29 = v52._Rep;
    if ( v52._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v52._Rep->_Uses) )
      {
        v29->_Destroy(v29);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29->_Weaks, 0xFFFFFFFF) == 1 )
          v29->_Delete_this(v29);
      }
    }
    if ( v71.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v30 = v71.m_errorMessage._Mypair._Myval2._Myres + 1;
      v31 = v71.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v71.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v30 = v71.m_errorMessage._Mypair._Myval2._Myres + 40;
        v31 = (char *)*((_QWORD *)v71.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v71.m_errorMessage._Mypair._Myval2._Bx._Ptr - v31 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v31, v30);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+50h], xmm0
    }
    v71.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( contextStringId._Mypair._Myval2._Myres >= 8 )
    {
      v34 = 2 * contextStringId._Mypair._Myval2._Myres + 2;
      v35 = contextStringId._Mypair._Myval2._Bx._Ptr;
      if ( v34 >= 0x1000 )
      {
        v34 = 2 * contextStringId._Mypair._Myval2._Myres + 41;
        v35 = (wchar_t *)*((_QWORD *)contextStringId._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)contextStringId._Mypair._Myval2._Bx._Ptr - (char *)v35 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v35, v34);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+0A0h+contextStringId.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( customActivationContext._Mypair._Myval2._Myres >= 8 )
    {
      v37 = 2 * customActivationContext._Mypair._Myval2._Myres + 2;
      v38 = customActivationContext._Mypair._Myval2._Bx._Ptr;
      if ( v37 >= 0x1000 )
      {
        v37 = 2 * customActivationContext._Mypair._Myval2._Myres + 41;
        v38 = (wchar_t *)*((_QWORD *)customActivationContext._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)customActivationContext._Mypair._Myval2._Bx._Ptr - (char *)v38 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v38, v37);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+0A0h+var_B0.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    customActivationContext._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    if ( UserFromControllerIndex )
      UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
    return 0;
  }
  else
  {
    v41 = v53._Rep;
    if ( v53._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v53._Rep->_Uses) )
      {
        v41->_Destroy(v41);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v41->_Weaks) )
          v41->_Delete_this(v41);
      }
    }
    v42 = v52._Rep;
    if ( v52._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v52._Rep->_Uses) )
      {
        v42->_Destroy(v42);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v42->_Weaks, 0xFFFFFFFF) == 1 )
          v42->_Delete_this(v42);
      }
    }
    if ( v71.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v43 = v71.m_errorMessage._Mypair._Myval2._Myres + 1;
      v44 = v71.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v71.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v43 = v71.m_errorMessage._Mypair._Myval2._Myres + 40;
        v44 = (char *)*((_QWORD *)v71.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v71.m_errorMessage._Mypair._Myval2._Bx._Ptr - v44 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v44, v43);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+50h], xmm0
    }
    v71.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( contextStringId._Mypair._Myval2._Myres >= 8 )
    {
      v46 = 2 * contextStringId._Mypair._Myval2._Myres + 2;
      v47 = contextStringId._Mypair._Myval2._Bx._Ptr;
      if ( v46 >= 0x1000 )
      {
        v46 = 2 * contextStringId._Mypair._Myval2._Myres + 41;
        v47 = (wchar_t *)*((_QWORD *)contextStringId._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)contextStringId._Mypair._Myval2._Bx._Ptr - (char *)v47 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v47, v46);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+0A0h+contextStringId.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( customActivationContext._Mypair._Myval2._Myres >= 8 )
    {
      v49 = 2 * customActivationContext._Mypair._Myval2._Myres + 2;
      v50 = customActivationContext._Mypair._Myval2._Bx._Ptr;
      if ( v49 >= 0x1000 )
      {
        v49 = 2 * customActivationContext._Mypair._Myval2._Myres + 41;
        v50 = (wchar_t *)*((_QWORD *)customActivationContext._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)customActivationContext._Mypair._Myval2._Bx._Ptr - (char *)v50 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v50, v49);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+0A0h+var_B0.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    customActivationContext._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    if ( UserFromControllerIndex )
      UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::IsInSession
==============
*/
_BOOL8 Xb3MultiplayerManager::IsInSession(Xb3MultiplayerManager *this, const SessionType sessionType)
{
  bool v2; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v3; 
  std::_Ref_count_base *v4; 
  std::_Ref_count_base *v5; 
  std::_Ref_count_base *v6; 
  std::_Ref_count_base *v7; 
  xbox::services::multiplayer::manager::multiplayer_game_session *Ptr; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  std::_Ref_count_base *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  __int64 v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v20; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v22; 

  v18 = -2i64;
  v2 = 0;
  if ( sessionType )
  {
    if ( sessionType == 1 )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
      Ptr = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v16._Ptr, &v21)->_Ptr;
      Rep = v21._Rep;
      if ( v21._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          Rep->_Destroy(Rep);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
            Rep->_Delete_this(Rep);
        }
      }
      v10 = v16._Rep;
      if ( v16._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v10->_Destroy(v10);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
            v10->_Delete_this(v10);
        }
      }
      if ( Ptr )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
        v2 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v17._Ptr, &v22)->_Ptr != NULL;
        v11 = v22._Rep;
        if ( v22._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v11->_Destroy(v11);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
              v11->_Delete_this(v11);
          }
        }
        v12 = v17._Rep;
        if ( v17._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v12->_Destroy(v12);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
              v12->_Delete_this(v12);
          }
        }
      }
    }
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
    v3 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(result._Ptr, &v19)->_Ptr;
    v4 = v19._Rep;
    if ( v19._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v4->_Destroy(v4);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->_Weaks, 0xFFFFFFFF) == 1 )
          v4->_Delete_this(v4);
      }
    }
    v5 = result._Rep;
    if ( result._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v5->_Destroy(v5);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
          v5->_Delete_this(v5);
      }
    }
    if ( v3 )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
      v2 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v15._Ptr, &v20)->_Ptr != NULL;
      v6 = v20._Rep;
      if ( v20._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v6->_Destroy(v6);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v6->_Weaks, 0xFFFFFFFF) == 1 )
            v6->_Delete_this(v6);
        }
      }
      v7 = v15._Rep;
      if ( v15._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v7->_Destroy(v7);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
            v7->_Delete_this(v7);
        }
      }
    }
  }
  return v2;
}

/*
==============
Xb3MultiplayerManager::IsLocalMemberHost
==============
*/
__int64 Xb3MultiplayerManager::IsLocalMemberHost(Xb3MultiplayerManager *this)
{
  unsigned __int8 v1; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v2; 
  const std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> *v3; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v5; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Myfirst; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *Ptr; 
  const std::wstring *v8; 
  bool is_host; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  unsigned __int64 v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v18; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> v19; 

  v1 = 0;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
  v2 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v15._Ptr, &result);
  v3 = xbox::services::multiplayer::manager::multiplayer_lobby_session::local_members(v2->_Ptr);
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>(&v19, v3);
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  v5 = v15._Rep;
  if ( v15._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v5->_Destroy(v5);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
        v5->_Delete_this(v5);
    }
  }
  Myfirst = v19._Mypair._Myval2._Myfirst;
  if ( v19._Mypair._Myval2._Myfirst != v19._Mypair._Myval2._Mylast )
  {
    while ( 1 )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
      Ptr = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v16._Ptr, &v18)->_Ptr;
      v8 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
      is_host = xbox::services::multiplayer::manager::multiplayer_lobby_session::is_host(Ptr, v8);
      v10 = v18._Rep;
      if ( v18._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v10->_Destroy(v10);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
            v10->_Delete_this(v10);
        }
      }
      v11 = v16._Rep;
      if ( v16._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v11->_Destroy(v11);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
            v11->_Delete_this(v11);
        }
      }
      if ( is_host )
        break;
      if ( ++Myfirst == v19._Mypair._Myval2._Mylast )
        goto LABEL_22;
    }
    v1 = 1;
LABEL_22:
    Myfirst = v19._Mypair._Myval2._Myfirst;
  }
  if ( Myfirst )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(Myfirst, v19._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&v19);
    v12 = ((char *)v19._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
    v13 = Myfirst;
    if ( v12 >= 0x1000 )
    {
      v12 += 39i64;
      Myfirst = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *)Myfirst[-1]._Rep;
      if ( (unsigned __int64)((char *)v13 - (char *)Myfirst - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(Myfirst, v12);
  }
  return v1;
}

/*
==============
Xb3MultiplayerManager::IsLocalPlayerInSession
==============
*/
_BOOL8 Xb3MultiplayerManager::IsLocalPlayerInSession(Xb3MultiplayerManager *this, const int controllerIndex, const SessionType sessionType)
{
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *Rep; 
  signed int Uses; 
  bool v8; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> result; 

  PlatformUserId = Live_GetPlatformUserId(controllerIndex);
  Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &result, PlatformUserId, sessionType);
  Rep = result._Rep;
  if ( result._Rep )
    Uses = result._Rep->_Uses;
  else
    Uses = 0;
  v8 = Uses > 0;
  if ( !result._Rep )
    return v8;
  if ( !_InterlockedDecrement((volatile signed __int32 *)&result._Rep->_Uses) )
  {
    Rep->_Destroy(Rep);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
      Rep->_Delete_this(Rep);
  }
  return v8;
}

/*
==============
Xb3MultiplayerManager::JoinGameLobbyFromPrivatePartySession
==============
*/
__int64 Xb3MultiplayerManager::JoinGameLobbyFromPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  unsigned __int8 v4; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  unsigned __int64 v7; 
  wchar_t *v8; 
  std::_Ref_count_base *Rep; 
  std::string *p_m_errorMessage; 
  unsigned int v12; 
  unsigned __int64 v13; 
  char *v14; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  __int64 v17; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v19; 

  v17 = -2i64;
  v4 = 0;
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1525, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  if ( Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1526, ASSERT_TYPE_ASSERT, "(!CheckIfAnyActiveClientsAreInGameLobbySession())", (const char *)&queryFormat, "!CheckIfAnyActiveClientsAreInGameLobbySession()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1527, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rsp+0A8h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  xbox::services::multiplayer::manager::multiplayer_manager::join_game_from_lobby(Ptr, &v19, &sessionTemplateName);
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v7 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v8 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v7 >= 0x1000 )
    {
      v7 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v8 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v8 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v8, v7);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rsp+0A8h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( v19.m_errorCode._Myval )
  {
    p_m_errorMessage = &v19.m_errorMessage;
    if ( v19.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v19.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinGameLobbySession - join_game failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v19.m_errorCode._Myval);
  }
  else
  {
    v12 = Sys_Milliseconds();
    Com_Printf(25, "Xb3MultiplayerManager::JoinGameLobbySession : joining lobby at time %d\n", v12);
    s_currentSessionTaskParams_0 = taskParams;
    v4 = 1;
  }
  if ( v19.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v13 = v19.m_errorMessage._Mypair._Myval2._Myres + 1;
    v14 = v19.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v19.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v13 = v19.m_errorMessage._Mypair._Myval2._Myres + 40;
      v14 = (char *)*((_QWORD *)v19.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v19.m_errorMessage._Mypair._Myval2._Bx._Ptr - v14 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v14, v13);
  }
  return v4;
}

/*
==============
Xb3MultiplayerManager::JoinGameLobbySession
==============
*/
char Xb3MultiplayerManager::JoinGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  HSTRING v11; 
  xbox::services::multiplayer::manager::multiplayer_manager *v12; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v17; 
  unsigned __int64 v22; 
  char *v23; 
  unsigned __int64 v25; 
  wchar_t *v26; 
  unsigned __int64 v28; 
  wchar_t *v29; 
  std::_Ref_count_base *v31; 
  std::string *v32; 
  unsigned __int64 v33; 
  char *v34; 
  unsigned __int64 v36; 
  char *v37; 
  __int128 v38; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v40; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v41; 
  std::vector<std::wstring> xboxUserIds; 
  __int64 v43; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v44; 
  __int128 v45; 
  std::string v46; 
  std::wstring sessionName; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v49; 

  v43 = -2i64;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1498, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1500, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v40);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v40._Ptr, &v44)->_Ptr;
  v7 = v44._Rep;
  if ( v44._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v44._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = v40._Rep;
  if ( v40._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v40._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1501, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1503, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  LODWORD(v45) = 0;
  std::_Execute_once(&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag, (int (__stdcall *)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>, &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage);
  *((_QWORD *)&v45 + 1) = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
    vmovdqu xmmword ptr [rbp+70h+var_B8.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v46._Mypair._Myval2._Bx._Buf[0] = 0;
  LODWORD(v38) = 0;
  *((_QWORD *)&v38 + 1) = xbox::services::xbox_services_error_code_category();
  __asm
  {
    vmovups xmm0, [rsp+170h+var_140+8]
    vmovups [rbp+70h+var_C8], xmm0
  }
  v11 = (HSTRING)MPSDIDToPlatformString(&taskParams->m_sessionParams->xb3SessionId);
  WindowsDeleteString_0(NULL);
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v41);
  v12 = v41._Ptr;
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+170h+xboxUserIds.baseclass_0._Mypair._Myval2._Myfirst], xmm0
  }
  xboxUserIds._Mypair._Myval2._Myend = NULL;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+70h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v11, NULL);
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+70h+sessionName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionName._Mypair._Myval2._Bx._Buf[0] = 0;
  v17 = -1i64;
  do
    ++v17;
  while ( StringRawBuffer_0[v17] );
  std::wstring::assign(&sessionName, StringRawBuffer_0, v17);
  _RAX = xbox::services::multiplayer::manager::multiplayer_manager::join_game(v12, &v49, &sessionName, &sessionTemplateName, &xboxUserIds);
  if ( &v45 != (__int128 *)_RAX )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups [rbp+70h+var_C8], xmm0
    }
    _RDI = &_RAX->m_errorMessage;
    if ( &v46 != &_RAX->m_errorMessage )
    {
      std::string::_Tidy_deallocate(&v46);
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups ymmword ptr [rbp+70h+var_B8.baseclass_0._Mypair._Myval2._Bx], ymm0
      }
      _RDI->_Mypair._Myval2._Mysize = 0i64;
      _RDI->_Mypair._Myval2._Myres = 15i64;
      _RDI->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
  }
  if ( v49.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v22 = v49.m_errorMessage._Mypair._Myval2._Myres + 1;
    v23 = v49.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v49.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v22 = v49.m_errorMessage._Mypair._Myval2._Myres + 40;
      v23 = (char *)*((_QWORD *)v49.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v49.m_errorMessage._Mypair._Myval2._Bx._Ptr - v23 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v23, v22);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
    vmovdqu xmmword ptr [rbp+38h], xmm0
  }
  v49.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( sessionName._Mypair._Myval2._Myres >= 8 )
  {
    v25 = 2 * sessionName._Mypair._Myval2._Myres + 2;
    v26 = sessionName._Mypair._Myval2._Bx._Ptr;
    if ( v25 >= 0x1000 )
    {
      v25 = 2 * sessionName._Mypair._Myval2._Myres + 41;
      v26 = (wchar_t *)*((_QWORD *)sessionName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionName._Mypair._Myval2._Bx._Ptr - (char *)v26 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v26, v25);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+70h+sessionName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionName._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v28 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v29 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v28 >= 0x1000 )
    {
      v28 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v29 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v29 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v29, v28);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+70h+sessionTemplateName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::vector<std::wstring>::~vector<std::wstring>(&xboxUserIds);
  v31 = v41._Rep;
  if ( v41._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v41._Rep->_Uses) )
    {
      v31->_Destroy(v31);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
        v31->_Delete_this(v31);
    }
  }
  if ( (_DWORD)v45 )
  {
    v32 = &v46;
    if ( v46._Mypair._Myval2._Myres >= 0x10 )
      v32 = (std::string *)v46._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinGameLobbySession - join_game failed - %s [%x].\n", v32->_Mypair._Myval2._Bx._Buf, (unsigned int)v45);
    WindowsDeleteString_0(v11);
    if ( v46._Mypair._Myval2._Myres >= 0x10 )
    {
      v33 = v46._Mypair._Myval2._Myres + 1;
      v34 = v46._Mypair._Myval2._Bx._Ptr;
      if ( v46._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v33 = v46._Mypair._Myval2._Myres + 40;
        v34 = (char *)*((_QWORD *)v46._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v46._Mypair._Myval2._Bx._Ptr - v34 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v34, v33);
    }
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    WindowsDeleteString_0(v11);
    if ( v46._Mypair._Myval2._Myres >= 0x10 )
    {
      v36 = v46._Mypair._Myval2._Myres + 1;
      v37 = v46._Mypair._Myval2._Bx._Ptr;
      if ( v46._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v36 = v46._Mypair._Myval2._Myres + 40;
        v37 = (char *)*((_QWORD *)v46._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v46._Mypair._Myval2._Bx._Ptr - v37 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v37, v36);
    }
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::JoinPrivatePartySessionByFetchingHandleIdFromActivity
==============
*/
char Xb3MultiplayerManager::JoinPrivatePartySessionByFetchingHandleIdFromActivity(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  int m_controllerIndex; 
  unsigned __int64 m_id; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v8; 
  std::_Ref_count_base *v9; 
  std::_Ref_count_base *v10; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v19; 

  m_controllerIndex = taskParams->m_controllerIndex;
  m_id = taskParams->m_sessionParams->m_hostXUID.m_id;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1477, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr", -2i64) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1478, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v8 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v16._Ptr, &v18)->_Ptr;
  v9 = v18._Rep;
  if ( v18._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  v10 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1479, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v17._Ptr, &v19)->_Ptr;
  v12 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  v13 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1480, ASSERT_TYPE_ASSERT, "(!mpManager()->game_session())", (const char *)&queryFormat, "!mpManager()->game_session()") )
    __debugbreak();
  if ( Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1482, ASSERT_TYPE_ASSERT, "(!IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY ))", (const char *)&queryFormat, "!IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY )") )
    __debugbreak();
  if ( Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, (const SessionType)1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1483, ASSERT_TYPE_ASSERT, "(!IsLocalPlayerInSession( controllerIndex, SessionType::GAME ))", (const char *)&queryFormat, "!IsLocalPlayerInSession( controllerIndex, SessionType::GAME )") )
    __debugbreak();
  if ( Xb3MultiplayerManager::FetchHandleIdFromActivitySessionForPrivatePartyJoin(this, m_controllerIndex, (XUID)m_id) )
  {
    s_currentSessionTaskParams_0 = taskParams;
    return 1;
  }
  else
  {
    Com_PrintError(25, "Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle failed\n");
    return 0;
  }
}

/*
==============
Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle
==============
*/
char Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams, Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs *args)
{
  unsigned int m_controllerIndex; 
  Windows::Xbox::System::User *CachedXboxUser; 
  std::_Ref_count_base *Rep; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v9; 
  char *Ptr; 
  unsigned __int64 v13; 
  char *v14; 
  char *fmt; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  __int64 v18; 
  Windows::Xbox::System::User *v19; 
  xbox::services::xbox_live_result<void> v20; 
  char _Buffer[256]; 

  v18 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1342, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v19 = CachedXboxUser;
  result._Ptr = NULL;
  if ( !CachedXboxUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1345, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr", result._Ptr) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  xbox::services::multiplayer::manager::multiplayer_manager::join_lobby(result._Ptr, &v20, args, CachedXboxUser);
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( v20.m_errorCode._Myval )
  {
    LODWORD(fmt) = v20.m_errorCode._Myval;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %x", m_controllerIndex, fmt);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    p_m_errorMessage = &v20.m_errorMessage;
    if ( v20.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v20.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v20.m_errorCode._Myval);
    if ( v20.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v9 = v20.m_errorMessage._Mypair._Myval2._Myres + 1;
      Ptr = v20.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v20.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v9 = v20.m_errorMessage._Mypair._Myval2._Myres + 40;
        Ptr = (char *)*((_QWORD *)v20.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v20.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(Ptr, v9);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rsp+70h], xmm0
    }
    v20.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v20.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v13 = v20.m_errorMessage._Mypair._Myval2._Myres + 1;
      v14 = v20.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v20.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v13 = v20.m_errorMessage._Mypair._Myval2._Myres + 40;
        v14 = (char *)*((_QWORD *)v20.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v20.m_errorMessage._Mypair._Myval2._Bx._Ptr - v14 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v14, v13);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rsp+70h], xmm0
    }
    v20.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::LeaveGameLobbySession
==============
*/
__int64 Xb3MultiplayerManager::LeaveGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  unsigned int v12; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *v14; 
  signed int Uses; 
  std::_Ref_count_base *v16; 
  std::string *p_m_errorMessage; 
  unsigned __int8 v18; 
  unsigned __int64 v19; 
  char *v20; 
  LocalClientNum_t outLocalClientNum[2]; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v25; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v26; 
  __int64 v27; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v29; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v30; 
  xbox::services::xbox_live_result<void> v31; 

  v27 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1314, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v24);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v24._Ptr, &v28)->_Ptr;
  v7 = v28._Rep;
  if ( v28._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = v24._Rep;
  if ( v24._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1315, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v25);
  v9 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v25._Ptr, &v29)->_Ptr;
  v10 = v29._Rep;
  if ( v29._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  v11 = v25._Rep;
  if ( v25._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1316, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1318, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  v12 = 0;
  while ( 1 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(v12, outLocalClientNum) )
    {
      PlatformUserId = Live_GetPlatformUserId(v12);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(this, &v30, PlatformUserId, (const SessionType)1);
      v14 = v30._Rep;
      if ( !v30._Rep )
        break;
      Uses = v30._Rep->_Uses;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
      if ( Uses <= 0 )
        break;
    }
    if ( (int)++v12 >= 8 )
      goto LABEL_44;
  }
  Com_Printf(25, "CheckIfAllActiveClientsAreInGameLobbySession, %d is active, but not in the game lobby session\n", v12);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1319, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInGameLobbySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInGameLobbySession()") )
    __debugbreak();
LABEL_44:
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1321, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  Com_Printf(25, "Xb3MultiplayerManager::LeaveGameLobbySession called\n");
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v26);
  xbox::services::multiplayer::manager::multiplayer_manager::leave_game(v26._Ptr, &v31);
  v16 = v26._Rep;
  if ( v26._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  if ( v31.m_errorCode._Myval )
  {
    p_m_errorMessage = &v31.m_errorMessage;
    if ( v31.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v31.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::LeaveGameLobbySession - failed to remove local user from lobby - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v31.m_errorCode._Myval);
    v18 = 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    v18 = 1;
  }
  if ( v31.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v19 = v31.m_errorMessage._Mypair._Myval2._Myres + 1;
    v20 = v31.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v31.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v19 = v31.m_errorMessage._Mypair._Myval2._Myres + 40;
      v20 = (char *)*((_QWORD *)v31.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v31.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v20, v19);
  }
  return v18;
}

/*
==============
Xb3MultiplayerManager::LeavePrivatePartySession
==============
*/
char Xb3MultiplayerManager::LeavePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  int m_controllerIndex; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  Windows::Xbox::System::User *CachedXboxUser; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v15; 
  char *v16; 
  unsigned __int64 v19; 
  char *v20; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v23; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v24; 
  __int64 v25; 
  Windows::Xbox::System::User *v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v27; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v28; 
  xbox::services::xbox_live_result<void> v29; 

  v25 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( taskParams->m_controllerIndex >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1264, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", taskParams->m_controllerIndex, 8) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1266, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v23);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v23._Ptr, &v27)->_Ptr;
  v8 = v27._Rep;
  if ( v27._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v23._Rep;
  if ( v23._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1267, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1268, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1270, ASSERT_TYPE_ASSERT, "(IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY ))", (const char *)&queryFormat, "IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY )") )
    __debugbreak();
  Com_Printf(25, "Xb3MultiplayerManager::LeavePrivatePartySession called\n");
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v26 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v24);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v24._Ptr, &v28)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::remove_local_user(v11, &v29, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v12 = v28._Rep;
  if ( v28._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v28._Rep->_Uses) )
    {
      v12->_Destroy(v12);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v12->_Weaks) )
        v12->_Delete_this(v12);
    }
  }
  v13 = v24._Rep;
  if ( v24._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v24._Rep->_Uses) )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v29.m_errorCode._Myval )
  {
    p_m_errorMessage = &v29.m_errorMessage;
    if ( v29.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v29.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::LeavePrivatePartySession - failed to remove local user from lobby - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v29.m_errorCode._Myval);
    if ( v29.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v29.m_errorMessage._Mypair._Myval2._Myres + 1;
      v16 = v29.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v29.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v15 = v29.m_errorMessage._Mypair._Myval2._Myres + 40;
        v16 = (char *)*((_QWORD *)v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - v16 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v16, v15);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+1Fh], xmm0
    }
    v29.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v29.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v19 = v29.m_errorMessage._Mypair._Myval2._Myres + 1;
      v20 = v29.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v29.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v19 = v29.m_errorMessage._Mypair._Myval2._Myres + 40;
        v20 = (char *)*((_QWORD *)v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v29.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v20, v19);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+1Fh], xmm0
    }
    v29.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::MultiplayerEventHasError
==============
*/
bool Xb3MultiplayerManager::MultiplayerEventHasError(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  return xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval != 0;
}

/*
==============
Xb3MultiplayerManager::ProcessMultiplayerEvent
==============
*/
void Xb3MultiplayerManager::ProcessMultiplayerEvent(Xb3MultiplayerManager *this, xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const MultiplayerEventHandler *MultiplayerEventHandler; 
  int v4; 
  unsigned int v5; 
  overlappedTask **v6; 
  overlappedTask *v7; 
  xbox::services::multiplayer::manager::multiplayer_event_type v8; 
  xbox::services::multiplayer::manager::multiplayer_session_type v9; 
  __int64 v10; 
  xbox::services::multiplayer::manager::multiplayer_session_type v11; 
  __int64 v12; 
  overlappedTask *v13; 
  int Myval; 
  const std::string *Ptr; 
  const std::string *v16; 
  void (__fastcall *customEventHandler)(xbox::services::multiplayer::manager::multiplayer_event *); 

  MultiplayerEventHandler = Xb3MultiplayerManager::GetMultiplayerEventHandler(this, event);
  v4 = 2;
  if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == pending_subscribe )
  {
    v5 = 0;
  }
  else
  {
    v5 = 2;
    if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == subscribed )
      v5 = 1;
  }
  Com_Printf(25, "Xb3MultiplayerManager - GetTaskForEvent\n");
  v6 = s_tasks[0];
  if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) != pending_subscribe )
    v6 = s_tasks[1];
  v7 = v6[xbox::services::multiplayer::manager::multiplayer_event::event_type(event)];
  v8 = xbox::services::multiplayer::manager::multiplayer_event::event_type(event);
  v9 = xbox::services::multiplayer::manager::multiplayer_event::session_type(event);
  Com_Printf(25, "\tsessionType : %d eventType : %d (%p)\n", v9 != pending_subscribe, (unsigned int)v8, v7);
  v10 = (unsigned int)xbox::services::multiplayer::manager::multiplayer_event::event_type(event);
  v11 = xbox::services::multiplayer::manager::multiplayer_event::session_type(event);
  v12 = 1i64;
  if ( v11 == pending_subscribe )
    v12 = 0i64;
  v13 = s_tasks[v12][v10];
  Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
  if ( v13 )
  {
    if ( Myval )
    {
      if ( MultiplayerEventHandler )
      {
        Ptr = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
        if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
          Ptr = (const std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
        Com_PrintWarning(25, "Xb3MultiplayerManager::ProcessMultiplayerEvent: Event of type: %s for session type:%i, returned with error: %s\n", MultiplayerEventHandler->eventString, v5, Ptr->_Mypair._Myval2._Bx._Buf);
      }
    }
    else
    {
      if ( MultiplayerEventHandler )
        Com_Printf(25, "Xb3MultiplayerManager::ProcessMultiplayerEvent: Event of type: %s for session type:%i - complete just fine.\n", MultiplayerEventHandler->eventString, v5);
      v4 = 1;
    }
    v13->u.rest_results = v4;
    s_tasks[v5][xbox::services::multiplayer::manager::multiplayer_event::event_type(event)] = NULL;
  }
  else
  {
    v16 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    if ( v16->_Mypair._Myval2._Myres >= 0x10 )
      v16 = (const std::string *)v16->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::ProcessMultiplayerEvent: No task for event of type: %s for session type:%i - returned with error: \"%s\" - %d\n", MultiplayerEventHandler->eventString, v5, v16->_Mypair._Myval2._Bx._Buf, Myval);
  }
  if ( MultiplayerEventHandler )
  {
    customEventHandler = MultiplayerEventHandler->customEventHandler;
    if ( customEventHandler )
      customEventHandler(event);
  }
}

/*
==============
Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession
==============
*/
char Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  unsigned int m_controllerIndex; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  Windows::Xbox::System::User *CachedXboxUser; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  std::string *p_m_errorMessage; 
  std::string *v15; 
  unsigned __int64 v16; 
  char *v17; 
  unsigned __int64 v20; 
  char *v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v25; 
  __int64 v26; 
  Windows::Xbox::System::User *v27; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v29; 
  xbox::services::xbox_live_result<void> v30; 
  char _Buffer[256]; 

  v26 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( taskParams->m_controllerIndex >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1588, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", taskParams->m_controllerIndex, 8) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1590, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v24);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v24._Ptr, &v28)->_Ptr;
  v8 = v28._Rep;
  if ( v28._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v24._Rep;
  if ( v24._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1591, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1592, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::IsLocalPlayerInSession(this, m_controllerIndex, UNKNOWN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1594, ASSERT_TYPE_ASSERT, "(IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY ))", (const char *)&queryFormat, "IsLocalPlayerInSession( controllerIndex, SessionType::LOBBY )") )
    __debugbreak();
  Com_Printf(25, "Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession called\n");
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v27 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v25);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v25._Ptr, &v29)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::remove_local_user(v11, &v30, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v12 = v29._Rep;
  if ( v29._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v29._Rep->_Uses) )
    {
      v12->_Destroy(v12);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v12->_Weaks) )
        v12->_Delete_this(v12);
    }
  }
  v13 = v25._Rep;
  if ( v25._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v25._Rep->_Uses) )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v30.m_errorCode._Myval )
  {
    p_m_errorMessage = &v30.m_errorMessage;
    if ( v30.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v30.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %s", m_controllerIndex, p_m_errorMessage->_Mypair._Myval2._Bx._Buf);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    v15 = &v30.m_errorMessage;
    if ( v30.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      v15 = (std::string *)v30.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession - failed to remove local user from lobby - %s [%x].\n", v15->_Mypair._Myval2._Bx._Buf, (unsigned int)v30.m_errorCode._Myval);
    if ( v30.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v30.m_errorMessage._Mypair._Myval2._Myres + 1;
      v17 = v30.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v30.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v16 = v30.m_errorMessage._Mypair._Myval2._Myres + 40;
        v17 = (char *)*((_QWORD *)v30.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v30.m_errorMessage._Mypair._Myval2._Bx._Ptr - v17 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v17, v16);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp-38h], xmm0
    }
    v30.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v30.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v20 = v30.m_errorMessage._Mypair._Myval2._Myres + 1;
      v21 = v30.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v30.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v20 = v30.m_errorMessage._Mypair._Myval2._Myres + 40;
        v21 = (char *)*((_QWORD *)v30.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v30.m_errorMessage._Mypair._Myval2._Bx._Ptr - v21 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v21, v20);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp-38h], xmm0
    }
    v30.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 1;
  }
}

/*
==============
Xb3MultiplayerManager::RemoveUserFromSession
==============
*/
XB3SessionTaskRequestResult *Xb3MultiplayerManager::RemoveUserFromSession(Xb3MultiplayerManager *this, XB3SessionTaskRequestResult *result, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v7; 
  std::_Ref_count_base *v8; 
  std::_Ref_count_base *v9; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v10; 
  Windows::Xbox::System::User *xboxLiveUser; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v15; 
  char *v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v20; 
  __int64 v21; 
  Windows::Xbox::System::User *v22; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v23; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v24; 
  xbox::services::xbox_live_result<void> v25; 

  v21 = -2i64;
  *result = 0;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
  Ptr = resulta._Ptr;
  Rep = resulta._Rep;
  if ( resulta._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&resulta._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1620, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v19);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v19._Ptr, &v23)->_Ptr;
  v8 = v23._Rep;
  if ( v23._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v19._Rep;
  if ( v19._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v19._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1621, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1622, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  Com_Printf(25, "Xb3MultiplayerManager::RemoveUserFromSession called\n");
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v20);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v20._Ptr, &v24)->_Ptr;
  xboxLiveUser = taskParams->xboxLiveUser;
  if ( xboxLiveUser )
    xboxLiveUser->__abi_AddRef(taskParams->xboxLiveUser);
  v22 = xboxLiveUser;
  xbox::services::multiplayer::manager::multiplayer_lobby_session::remove_local_user(v10, &v25, xboxLiveUser);
  if ( xboxLiveUser )
    xboxLiveUser->__abi_Release(xboxLiveUser);
  v12 = v24._Rep;
  if ( v24._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  v13 = v20._Rep;
  if ( v20._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v25.m_errorCode._Myval )
  {
    if ( v25.m_errorCode._Myval == 1006 )
    {
      *result = (XB3SessionTaskRequestResult)257;
      Com_PrintWarning(25, "Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession - failed to remove local user from lobby because that user was not in the lobby, this is expected in some cases\n");
    }
    else
    {
      p_m_errorMessage = &v25.m_errorMessage;
      if ( v25.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
        p_m_errorMessage = (std::string *)v25.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      Com_PrintError(25, "Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession - failed to remove local user from lobby - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v25.m_errorCode._Myval);
    }
  }
  else
  {
    result->m_wasRequestSuccessful = 1;
    s_currentSessionTaskParams_0 = taskParams;
  }
  if ( v25.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v15 = v25.m_errorMessage._Mypair._Myval2._Myres + 1;
    v16 = v25.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v25.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v15 = v25.m_errorMessage._Mypair._Myval2._Myres + 40;
      v16 = (char *)*((_QWORD *)v25.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v25.m_errorMessage._Mypair._Myval2._Bx._Ptr - v16 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v16, v15);
  }
  return result;
}

/*
==============
Session_GetSessionType
==============
*/
__int64 Session_GetSessionType(const SessionData *sessionData)
{
  unsigned int v2; 
  PartyData *PartyForSession; 
  PartyType partyId; 

  if ( !sessionData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1202, ASSERT_TYPE_ASSERT, "(sessionData)", (const char *)&queryFormat, "sessionData") )
    __debugbreak();
  v2 = 2;
  PartyForSession = Party_GetPartyForSession(sessionData);
  if ( PartyForSession )
  {
    partyId = PartyForSession->partyId;
    if ( partyId == GAME_LOBBY_ID )
      return 1i64;
    if ( partyId == PRIVATE_PARTY_ID )
      return 0;
  }
  return v2;
}

/*
==============
Xb3MultiplayerManager::Shutdown
==============
*/
void Xb3MultiplayerManager::Shutdown(Xb3MultiplayerManager *this)
{
  ;
}

/*
==============
Xb3MultiplayerManager::Update
==============
*/
void Xb3MultiplayerManager::Update(Xb3MultiplayerManager *this, bool bUpdateFromSessionFrame)
{
  bool v2; 
  Xb3MultiplayerManager *v3; 
  xbox::services::multiplayer::manager::joinability v4; 
  unsigned int v5; 
  const void **v6; 
  unsigned int i; 
  _DWORD *v8; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_event *Mylast; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v11; 
  signed __int64 v12; 
  xbox::services::multiplayer::manager::multiplayer_event *Myfirst; 
  xbox::services::multiplayer::manager::multiplayer_event *j; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v15; 
  std::_Ref_count_base *v19; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v20; 
  xbox::services::multiplayer::manager::multiplayer_event *v21; 
  unsigned __int64 v27; 
  _QWORD *v28; 
  unsigned __int64 v29; 
  __int64 v31; 
  __int64 v32; 
  volatile signed __int32 *v33; 
  unsigned int v34; 
  const MultiplayerEventHandler *v35; 
  const MultiplayerEventHandler *v36; 
  __int64 v37; 
  xbox::services::multiplayer::manager::multiplayer_session_type v38; 
  std::_Ref_count_base *v39; 
  unsigned __int64 v40; 
  char *Ptr; 
  std::_Ref_count_base *v42; 
  __int64 v43; 
  void (__fastcall *callback)(bool, const std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *, const std::wstring); 
  unsigned __int64 Mysize; 
  unsigned __int64 v48; 
  const dvar_t *v49; 
  char v50; 
  char v51; 
  std::_Ref_count_base *v52; 
  bool v53; 
  std::_Ref_count_base *v54; 
  std::_Ref_count_base *v55; 
  const PartyData *ActiveParty; 
  PartyData *v57; 
  const PartyData *v58; 
  const PartyData *v59; 
  bool v60; 
  std::_Ref_count_base *v61; 
  std::_Ref_count_base *v62; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v64; 
  char *v65; 
  char *fmt; 
  __int64 v67; 
  int v69; 
  xbox::services::multiplayer::manager::multiplayer_event *v70; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> v71; 
  _QWORD v72[3]; 
  unsigned __int64 v73; 
  unsigned __int64 v74; 
  xbox::services::multiplayer::manager::multiplayer_event *v75; 
  xbox::services::multiplayer::manager::multiplayer_event *v76; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v77; 
  xbox::services::multiplayer::manager::multiplayer_event *v78; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v80; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v81; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v82; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v83; 
  __int64 v84; 
  __int64 v85; 
  __int64 v86; 
  xbox::services::multiplayer::manager::multiplayer_event *v87; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 
  __int64 v91; 
  __int64 v92; 
  unsigned __int64 v93; 
  wchar_t *v94; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v95; 
  tXb3MultiplayerCallback v96; 
  xbox::services::multiplayer::manager::multiplayer_event event; 
  xbox::services::xbox_live_result<void> v98; 

  v84 = -2i64;
  v2 = bUpdateFromSessionFrame;
  v3 = this;
  v72[0] = this;
  v4 = none;
  if ( g_mpManagerEventQueue )
  {
    v69 = Sys_Milliseconds();
    v5 = 0;
    v6 = (const void **)s_tasks[0];
    do
    {
      for ( i = 0; i < 0x17; ++i )
      {
        v8 = *v6;
        if ( *v6 && v8[4] == 1 )
        {
          LODWORD(fmt) = v8[6];
          Com_Printf(25, "\tWipeCompletedTasks - %d (%d) wiping type = %d (%p)\n", i, v5, fmt, *v6);
          *v6 = NULL;
        }
        ++v6;
      }
      ++v5;
    }
    while ( v5 < 2 );
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
    xbox::services::multiplayer::manager::multiplayer_manager::do_work(result._Ptr, &v71);
    Rep = result._Rep;
    if ( result._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    Mylast = v71._Mypair._Myval2._Mylast;
    if ( v71._Mypair._Myval2._Mylast - v71._Mypair._Myval2._Myfirst )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update : returned eventQueue with %u events.\n", v71._Mypair._Myval2._Mylast - v71._Mypair._Myval2._Myfirst);
      Mylast = v71._Mypair._Myval2._Mylast;
    }
    v11 = g_mpManagerEventQueue;
    v12 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast - g_mpManagerEventQueue->_Mypair._Myval2._Myfirst;
    if ( v12 )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update : still has eventQueue with %u events to process from previous frame.\n", v12);
      Mylast = v71._Mypair._Myval2._Mylast;
      v11 = g_mpManagerEventQueue;
    }
    Myfirst = v71._Mypair._Myval2._Myfirst;
    v75 = Mylast;
    if ( v71._Mypair._Myval2._Myfirst != Mylast )
    {
      while ( 1 )
      {
        if ( v11->_Mypair._Myval2._Myend == v11->_Mypair._Myval2._Mylast )
        {
          std::vector<xbox::services::multiplayer::manager::multiplayer_event>::_Emplace_reallocate<xbox::services::multiplayer::manager::multiplayer_event const &>(v11, v11->_Mypair._Myval2._Mylast, Myfirst);
        }
        else
        {
          xbox::services::multiplayer::manager::multiplayer_event::multiplayer_event(v11->_Mypair._Myval2._Mylast, Myfirst);
          ++v11->_Mypair._Myval2._Mylast;
        }
        ++Myfirst;
        Mylast = v71._Mypair._Myval2._Mylast;
        v75 = v71._Mypair._Myval2._Mylast;
        if ( Myfirst == v71._Mypair._Myval2._Mylast )
          break;
        v11 = g_mpManagerEventQueue;
      }
    }
    for ( j = v71._Mypair._Myval2._Myfirst; j != Mylast; ++j )
      xbox::services::multiplayer::manager::multiplayer_event::~multiplayer_event(j);
    v71._Mypair._Myval2._Mylast = v71._Mypair._Myval2._Myfirst;
    std::vector<xbox::services::multiplayer::manager::multiplayer_event>::~vector<xbox::services::multiplayer::manager::multiplayer_event>(&v71);
    v15 = g_mpManagerEventQueue;
    _RSI = g_mpManagerEventQueue->_Mypair._Myval2._Myfirst;
    v70 = _RSI;
    v78 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
    if ( _RSI != v78 )
    {
      while ( 1 )
      {
        event.m_pContext = _RSI->m_pContext;
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi+8]
          vmovups xmmword ptr [rbp+160h+event.m_errorCode._Myval], xmm0
        }
        std::string::string(&event.m_errorMessage, &_RSI->m_errorMessage);
        event.m_eventType = _RSI->m_eventType;
        event.m_sessionType = _RSI->m_sessionType;
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu xmmword ptr [rbp+160h+event.m_eventArgs.baseclass_0._Ptr], xmm0
        }
        v19 = _RSI->m_eventArgs._Rep;
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)&v19->_Uses);
        event.m_eventArgs = _RSI->m_eventArgs;
        v20 = g_mpManagerEventQueue;
        v77 = g_mpManagerEventQueue;
        v76 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
        v21 = _RSI;
        if ( &_RSI[1] != v76 )
        {
          _RDI = &_RSI[1].m_eventArgs._Rep;
          _RSI = &_RSI->m_errorMessage._Mypair._Myval2._Myres;
          do
          {
            v21->m_pContext = *(_RDI - 9);
            __asm
            {
              vmovups xmm0, xmmword ptr [rdi-40h]
              vmovups xmmword ptr [rsi-28h], xmm0
            }
            _RBX = (void **)(_RSI - 3);
            _R15 = _RDI - 6;
            if ( _RSI - 3 != (unsigned __int64 *)(_RDI - 6) )
            {
              v27 = *_RSI;
              if ( *_RSI >= 0x10 )
              {
                v28 = *_RBX;
                v29 = v27 + 1;
                if ( v27 + 1 >= 0x1000 )
                {
                  v29 = v27 + 40;
                  if ( (unsigned __int64)v28 - *(v28 - 1) - 8 > 0x1F )
                    _invalid_parameter_noinfo_noreturn();
                  v28 = (_QWORD *)*(v28 - 1);
                }
                operator delete(v28, v29);
              }
              *(_RSI - 1) = 0i64;
              *_RSI = 15i64;
              *(_BYTE *)_RBX = 0;
              __asm
              {
                vmovups ymm0, ymmword ptr [r15]
                vmovups ymmword ptr [rbx], ymm0
              }
              *(_RDI - 4) = NULL;
              *(_RDI - 3) = (std::_Ref_count_base *)15;
              *(_BYTE *)_R15 = 0;
            }
            *((_DWORD *)_RSI + 2) = *((_DWORD *)_RDI - 4);
            *((_DWORD *)_RSI + 3) = *((_DWORD *)_RDI - 3);
            v31 = (__int64)*(_RDI - 1);
            v32 = (__int64)*_RDI;
            *(_RDI - 1) = NULL;
            *_RDI = NULL;
            v85 = v31;
            _RSI[2] = v31;
            v86 = v32;
            v33 = (volatile signed __int32 *)_RSI[3];
            _RSI[3] = v32;
            if ( v33 )
            {
              if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
                if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8i64))(v33);
              }
            }
            ++v21;
            _RSI += 10;
            _RDI += 10;
          }
          while ( _RDI - 9 != (std::_Ref_count_base **)v76 );
          v20 = v77;
          _RSI = v70;
          v3 = (Xb3MultiplayerManager *)v72[0];
        }
        xbox::services::multiplayer::manager::multiplayer_event::~multiplayer_event(v20->_Mypair._Myval2._Mylast - 1);
        --v20->_Mypair._Myval2._Mylast;
        v87 = _RSI;
        v34 = 0;
        v35 = MultiplayerEventHandlers;
        while ( xbox::services::multiplayer::manager::multiplayer_event::event_type(&event) != v35->eventType )
        {
          ++v34;
          ++v35;
          if ( v34 >= 0x12 )
          {
            LODWORD(v67) = xbox::services::multiplayer::manager::multiplayer_event::event_type(&event);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 769, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetMultiplayerEventHandler: Unknown multiplayer manager event of type: %u.\n", v67) )
              __debugbreak();
            goto LABEL_54;
          }
        }
        v36 = &MultiplayerEventHandlers[v34];
        if ( v36 )
        {
          if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(&event) == pending_subscribe )
          {
            v37 = 0i64;
          }
          else
          {
            v38 = xbox::services::multiplayer::manager::multiplayer_event::session_type(&event);
            v37 = 2i64;
            if ( v38 == subscribed )
              v37 = 1i64;
          }
          Com_Printf(25, "Xb3MultiplayerManager::Update : Processing event of type: %s, for sessionType: %i\n", v36->eventString, v37);
        }
LABEL_54:
        Xb3MultiplayerManager::ProcessMultiplayerEvent(v3, &event);
        if ( g_eventDumpRemainingEvents )
          break;
        v39 = event.m_eventArgs._Rep;
        if ( event.m_eventArgs._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&event.m_eventArgs._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v39->_Destroy(v39);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v39->_Weaks, 0xFFFFFFFF) == 1 )
              v39->_Delete_this(v39);
          }
        }
        if ( event.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
        {
          v40 = event.m_errorMessage._Mypair._Myval2._Myres + 1;
          Ptr = event.m_errorMessage._Mypair._Myval2._Bx._Ptr;
          if ( event.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            v40 = event.m_errorMessage._Mypair._Myval2._Myres + 40;
            Ptr = (char *)*((_QWORD *)event.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)(event.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(Ptr, v40);
        }
        v15 = g_mpManagerEventQueue;
        v78 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
        if ( _RSI == v78 )
          goto LABEL_68;
      }
      xbox::services::multiplayer::manager::multiplayer_event::~multiplayer_event(&event);
      v15 = g_mpManagerEventQueue;
LABEL_68:
      v2 = bUpdateFromSessionFrame;
    }
    if ( g_eventDumpRemainingEvents && v15->_Mypair._Myval2._Mylast - v15->_Mypair._Myval2._Myfirst )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update calling ClearMpManagerEventQueue due to g_eventDumpRemainingEvents\n");
      Xb3MultiplayerManager::ClearMpManagerEventQueue(v3);
    }
    g_eventDumpRemainingEvents = 0;
    if ( v3->m_callbackInfo.state > eNEW )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update callback ready to roll. callback = %p\n", v3->m_callbackInfo.callback);
      if ( v3->m_callbackInfo.callback )
      {
        v96.callback = v3->m_callbackInfo.callback;
        v96.mp_session._Ptr = NULL;
        v96.mp_session._Rep = NULL;
        v42 = v3->m_callbackInfo.mp_session._Rep;
        if ( v42 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v42->_Uses);
          v42 = v3->m_callbackInfo.mp_session._Rep;
        }
        v96.mp_session._Ptr = v3->m_callbackInfo.mp_session._Ptr;
        v96.mp_session._Rep = v42;
        std::wstring::wstring(&v96.handleId, &v3->m_callbackInfo.handleId);
        v96.state = v3->m_callbackInfo.state;
        v3->m_callbackInfo.callback = NULL;
        v3->m_callbackInfo.state = eIDLE;
        callback = v96.callback;
        v73 = 0i64;
        v74 = 0i64;
        Mysize = v96.handleId._Mypair._Myval2._Mysize;
        _RSI = &v96.handleId;
        if ( v96.handleId._Mypair._Myval2._Myres >= 8 )
          _RSI = (std::wstring *)v96.handleId._Mypair._Myval2._Bx._Ptr;
        if ( v96.handleId._Mypair._Myval2._Mysize >= 8 )
        {
          v88 = 0x7FFFFFFFFFFFFFFFi64;
          v89 = 8i64;
          v90 = 0x7FFFFFFFFFFFFFFEi64;
          v91 = 0x7FFFFFFFFFFFFFFFi64;
          v92 = 0x7FFFFFFFFFFFFFFEi64;
          v48 = v96.handleId._Mypair._Myval2._Mysize | 7;
          v93 = v96.handleId._Mypair._Myval2._Mysize | 7;
          if ( (v96.handleId._Mypair._Myval2._Mysize | 7) > 0x7FFFFFFFFFFFFFFEi64 )
            v48 = 0x7FFFFFFFFFFFFFFEi64;
          v94 = std::allocator<wchar_t>::allocate((std::allocator<wchar_t> *)&v72[1], v48 + 1);
          v72[1] = v94;
          memcpy_0(v94, _RSI, 2 * Mysize + 2);
          v74 = v48;
        }
        else
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups xmmword ptr [rsp+260h+var_1F0+8], xmm0
          }
          v74 = 7i64;
        }
        v73 = Mysize;
        LOBYTE(v43) = v96.state == eADDING_LOCAL_PLAYER_TO_DW;
        ((void (__fastcall *)(__int64, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *, _QWORD *))callback)(v43, &v96.mp_session, &v72[1]);
        tXb3MultiplayerCallback::~tXb3MultiplayerCallback(&v96);
        v3 = (Xb3MultiplayerManager *)v72[0];
      }
    }
    if ( v2 )
    {
      if ( s_nextJoinabilityCalltime >= v69 )
        goto LABEL_92;
      v49 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v49);
      if ( v49->current.enabled )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v80);
        v50 = 25;
        if ( v80._Ptr )
        {
          v51 = 1;
          goto LABEL_94;
        }
      }
      else
      {
LABEL_92:
        v50 = 8;
      }
      v51 = 0;
LABEL_94:
      if ( (v50 & 1) != 0 )
      {
        v52 = v80._Rep;
        if ( v80._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v80._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v52->_Destroy(v52);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v52->_Weaks, 0xFFFFFFFF) == 1 )
              v52->_Delete_this(v52);
          }
        }
      }
      if ( v51 )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v81);
        v53 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v81._Ptr, &v95)->_Ptr && g_partyData.inParty && Party_AreWePlatformSessionHost(&g_partyData) && Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession(v3);
        v54 = v95._Rep;
        if ( v95._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v95._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v54->_Destroy(v54);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v54->_Weaks, 0xFFFFFFFF) == 1 )
              v54->_Delete_this(v54);
          }
        }
        v55 = v81._Rep;
        if ( v81._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v81._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v55->_Destroy(v55);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v55->_Weaks, 0xFFFFFFFF) == 1 )
              v55->_Delete_this(v55);
          }
        }
        if ( v53 )
        {
          ActiveParty = Party_GetActiveParty();
          if ( Party_ShouldCurrentSessionBeClosed(ActiveParty) )
          {
            v4 = 4;
          }
          else
          {
            v57 = Party_GetActiveParty();
            if ( Live_ShouldPlatformSessionBeInviteOnly(v57) || (v58 = Party_GetActiveParty(), Party_IsInviteOnly(v58)) )
            {
              v4 = server;
            }
            else
            {
              v59 = Party_GetActiveParty();
              if ( Party_GetPrivacySetting(v59) == PRIVATE )
                v4 = arbitration;
            }
          }
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v82);
          v60 = v4 != xbox::services::multiplayer::manager::multiplayer_manager::joinability(v82._Ptr);
          v61 = v82._Rep;
          if ( v82._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v82._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v61->_Destroy(v61);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v61->_Weaks, 0xFFFFFFFF) == 1 )
                v61->_Delete_this(v61);
            }
          }
          if ( v60 )
          {
            Com_Printf(25, "Xb3MultiplayerManager::Update calling set_joinability at time %d\n", (unsigned int)v69);
            xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v83);
            xbox::services::multiplayer::manager::multiplayer_manager::set_joinability(v83._Ptr, &v98, v4, NULL);
            v62 = v83._Rep;
            if ( v83._Rep )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v83._Rep->_Uses, 0xFFFFFFFF) == 1 )
              {
                v62->_Destroy(v62);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v62->_Weaks, 0xFFFFFFFF) == 1 )
                  v62->_Delete_this(v62);
              }
            }
            if ( v98.m_errorCode._Myval )
            {
              s_nextJoinabilityCalltime = xb3_mp_joinability_failure_backoff->current.integer + Sys_Milliseconds();
              p_m_errorMessage = &v98.m_errorMessage;
              if ( v98.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
                p_m_errorMessage = (std::string *)v98.m_errorMessage._Mypair._Myval2._Bx._Ptr;
              Com_PrintError(25, "Xb3MultiplayerManager::Update - failed to set_joinability - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v98.m_errorCode._Myval);
            }
            else
            {
              s_nextJoinabilityCalltime = xb3_mp_joinability_success_backoff->current.integer + Sys_Milliseconds();
            }
            if ( v98.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
            {
              v64 = v98.m_errorMessage._Mypair._Myval2._Myres + 1;
              v65 = v98.m_errorMessage._Mypair._Myval2._Bx._Ptr;
              if ( v98.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
              {
                v64 = v98.m_errorMessage._Mypair._Myval2._Myres + 40;
                v65 = (char *)*((_QWORD *)v98.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
                if ( (unsigned __int64)(v98.m_errorMessage._Mypair._Myval2._Bx._Ptr - v65 - 8) > 0x1F )
                  _invalid_parameter_noinfo_noreturn();
              }
              operator delete(v65, v64);
            }
          }
        }
      }
    }
  }
}

/*
==============
Xb3MultiplayerManager::UpdateGameLobbySession
==============
*/
bool Xb3MultiplayerManager::UpdateGameLobbySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  bool updated; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v17; 

  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v13);
  Ptr = v13._Ptr;
  Rep = v13._Rep;
  if ( v13._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1669, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()", -2i64) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(result._Ptr, &v16)->_Ptr;
  v7 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1670, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
  v9 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v15._Ptr, &v17)->_Ptr;
  v10 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v10->_Destroy(v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
        v10->_Delete_this(v10);
    }
  }
  v11 = v15._Rep;
  if ( v15._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1671, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1672, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  updated = Xb3MultiplayerManager::UpdateSession(this, GAME_LOBBY_SESSION, taskParams->m_sessionParams->m_numSlots, &taskParams->m_sessionParams->m_joinInfo);
  if ( updated )
  {
    s_currentSessionTaskParams_0 = taskParams;
    return 1;
  }
  return updated;
}

/*
==============
Xb3MultiplayerManager::UpdatePrivatePartySession
==============
*/
bool Xb3MultiplayerManager::UpdatePrivatePartySession(Xb3MultiplayerManager *this, sessionTaskParameters *taskParams)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v6; 
  std::_Ref_count_base *v7; 
  std::_Ref_count_base *v8; 
  bool updated; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v10; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v12; 

  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v10);
  Ptr = v10._Ptr;
  Rep = v10._Rep;
  if ( v10._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1653, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()", -2i64) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(result._Ptr, &v12)->_Ptr;
  v7 = v12._Rep;
  if ( v12._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1654, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1655, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  updated = Xb3MultiplayerManager::UpdateSession(this, PRIVATE_PARTY_SESSION, taskParams->m_sessionParams->m_numSlots, &taskParams->m_sessionParams->m_joinInfo);
  if ( updated )
  {
    s_currentSessionTaskParams_0 = taskParams;
    return 1;
  }
  return updated;
}

/*
==============
Xb3MultiplayerManager::UpdateSession
==============
*/
_BOOL8 Xb3MultiplayerManager::UpdateSession(Xb3MultiplayerManager *this, PlatformSessionType sessionType, const int maxSlots, OnlineJoinInfo *joinInfo)
{
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  unsigned __int64 v9; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  unsigned int v14; 
  bool v17; 
  unsigned __int64 v18; 
  wchar_t *v19; 
  bool v20; 
  bool v22; 
  unsigned __int64 v23; 
  wchar_t *v24; 
  unsigned int ProtocolVersion; 
  wchar_t *v26; 
  bool v29; 
  unsigned __int64 v30; 
  wchar_t *v31; 
  bool v33; 
  unsigned __int64 v34; 
  wchar_t *v35; 
  unsigned __int64 v36; 
  wchar_t *v37; 
  unsigned __int64 v39; 
  wchar_t *v40; 
  unsigned __int64 v42; 
  wchar_t *v43; 
  unsigned __int64 v45; 
  wchar_t *v46; 
  std::input_iterator_tag v48; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v50; 
  __int64 v51; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v52; 
  std::wstring v53; 
  std::wstring value; 
  std::wstring propertyName; 
  std::wstring v56; 
  std::wstring v57; 
  std::wstring v58; 
  std::wstring v59; 
  std::wstring v60; 
  char v61[6]; 
  char dest[1376]; 
  unsigned __int8 buffer[1024]; 

  v51 = -2i64;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  v9 = -1i64;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1691, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v50);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v50._Ptr, &v52)->_Ptr;
  v12 = v52._Rep;
  if ( v52._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v52._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  v13 = v50._Rep;
  if ( v50._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v50._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1692, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1694, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  if ( !joinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1696, ASSERT_TYPE_ASSERT, "(&joinInfo)", (const char *)&queryFormat, "&joinInfo") )
    __debugbreak();
  v14 = OnlineJoinInfo::Serialize(joinInfo, buffer, 0x400u);
  bdBase64::encode((const char *)buffer, v14, dest, 0x559u);
  do
    ++v9;
  while ( dest[v9] );
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+0A30h+value.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  value._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::reserve(&value, v9);
  std::wstring::_Construct<char *>(&value, dest, &dest[v9], v48);
  __asm
  {
    vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
    vmovdqu xmmword ptr [rbp+0A30h+propertyName.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  propertyName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&propertyName, L"join_info", 9ui64);
  v17 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &propertyName, &value);
  if ( propertyName._Mypair._Myval2._Myres >= 8 )
  {
    v18 = 2 * propertyName._Mypair._Myval2._Myres + 2;
    v19 = propertyName._Mypair._Myval2._Bx._Ptr;
    if ( v18 >= 0x1000 )
    {
      v18 = 2 * propertyName._Mypair._Myval2._Myres + 41;
      v19 = (wchar_t *)*((_QWORD *)propertyName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)propertyName._Mypair._Myval2._Bx._Ptr - (char *)v19 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v19, v18);
  }
  if ( v17 )
  {
    v20 = 0;
  }
  else
  {
    std::to_wstring(&v60, maxSlots);
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+0A30h+var_A60.baseclass_0._Mypair._Myval2._Mysize], xmm0
    }
    v56._Mypair._Myval2._Bx._Buf[0] = 0;
    std::wstring::assign(&v56, L"max_players", 0xBui64);
    v22 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v56, &v60);
    if ( v56._Mypair._Myval2._Myres >= 8 )
    {
      v23 = 2 * v56._Mypair._Myval2._Myres + 2;
      v24 = v56._Mypair._Myval2._Bx._Ptr;
      if ( v23 >= 0x1000 )
      {
        v23 = 2 * v56._Mypair._Myval2._Myres + 41;
        v24 = (wchar_t *)*((_QWORD *)v56._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v56._Mypair._Myval2._Bx._Ptr - (char *)v24 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v24, v23);
    }
    if ( v22 )
    {
      v20 = 0;
    }
    else
    {
      ProtocolVersion = GetProtocolVersion();
      v26 = (wchar_t *)v61;
      do
      {
        *--v26 = ProtocolVersion % 0xA + 48;
        ProtocolVersion /= 0xAu;
      }
      while ( ProtocolVersion );
      __asm
      {
        vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
        vmovdqu xmmword ptr [rbp+0A30h+var_AC0.baseclass_0._Mypair._Myval2._Mysize], xmm0
      }
      v53._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v26 != (wchar_t *)v61 )
        std::wstring::assign(&v53, v26, (v61 - (char *)v26) >> 1);
      __asm
      {
        vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
        vmovdqu xmmword ptr [rbp+0A30h+var_A40.baseclass_0._Mypair._Myval2._Mysize], xmm0
      }
      v57._Mypair._Myval2._Bx._Buf[0] = 0;
      std::wstring::assign(&v57, L"netcode_version", 0xFui64);
      v29 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v57, &v53);
      if ( v57._Mypair._Myval2._Myres >= 8 )
      {
        v30 = 2 * v57._Mypair._Myval2._Myres + 2;
        v31 = v57._Mypair._Myval2._Bx._Ptr;
        if ( v30 >= 0x1000 )
        {
          v30 = 2 * v57._Mypair._Myval2._Myres + 41;
          v31 = (wchar_t *)*((_QWORD *)v57._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)v57._Mypair._Myval2._Bx._Ptr - (char *)v31 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v31, v30);
      }
      if ( v29 )
      {
        v20 = 0;
      }
      else
      {
        std::to_wstring(&v59, maxSlots);
        __asm
        {
          vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
          vmovdqu xmmword ptr [rbp+0A30h+var_A20.baseclass_0._Mypair._Myval2._Mysize], xmm0
        }
        v58._Mypair._Myval2._Bx._Buf[0] = 0;
        std::wstring::assign(&v58, L"public_slots", 0xCui64);
        v33 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v58, &v59);
        if ( v58._Mypair._Myval2._Myres >= 8 )
        {
          v34 = 2 * v58._Mypair._Myval2._Myres + 2;
          v35 = v58._Mypair._Myval2._Bx._Ptr;
          if ( v34 >= 0x1000 )
          {
            v34 = 2 * v58._Mypair._Myval2._Myres + 41;
            v35 = (wchar_t *)*((_QWORD *)v58._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)((char *)v58._Mypair._Myval2._Bx._Ptr - (char *)v35 - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(v35, v34);
        }
        v20 = !v33;
        if ( v59._Mypair._Myval2._Myres >= 8 )
        {
          v36 = 2 * v59._Mypair._Myval2._Myres + 2;
          v37 = v59._Mypair._Myval2._Bx._Ptr;
          if ( v36 >= 0x1000 )
          {
            v36 = 2 * v59._Mypair._Myval2._Myres + 41;
            v37 = (wchar_t *)*((_QWORD *)v59._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)((char *)v59._Mypair._Myval2._Bx._Ptr - (char *)v37 - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(v37, v36);
        }
        __asm
        {
          vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
          vmovdqu xmmword ptr [rbp+40h], xmm0
        }
        v59._Mypair._Myval2._Bx._Buf[0] = 0;
      }
      if ( v53._Mypair._Myval2._Myres >= 8 )
      {
        v39 = 2 * v53._Mypair._Myval2._Myres + 2;
        v40 = v53._Mypair._Myval2._Bx._Ptr;
        if ( v39 >= 0x1000 )
        {
          v39 = 2 * v53._Mypair._Myval2._Myres + 41;
          v40 = (wchar_t *)*((_QWORD *)v53._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)v53._Mypair._Myval2._Bx._Ptr - (char *)v40 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v40, v39);
      }
      __asm
      {
        vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
        vmovdqu xmmword ptr [rbp+0A30h+var_AC0.baseclass_0._Mypair._Myval2._Mysize], xmm0
      }
      v53._Mypair._Myval2._Bx._Buf[0] = 0;
    }
    if ( v60._Mypair._Myval2._Myres >= 8 )
    {
      v42 = 2 * v60._Mypair._Myval2._Myres + 2;
      v43 = v60._Mypair._Myval2._Bx._Ptr;
      if ( v42 >= 0x1000 )
      {
        v42 = 2 * v60._Mypair._Myval2._Myres + 41;
        v43 = (wchar_t *)*((_QWORD *)v60._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v60._Mypair._Myval2._Bx._Ptr - (char *)v43 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v43, v42);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@00000000000000070000000000000000
      vmovdqu xmmword ptr [rbp+60h], xmm0
    }
    v60._Mypair._Myval2._Bx._Buf[0] = 0;
  }
  if ( value._Mypair._Myval2._Myres >= 8 )
  {
    v45 = 2 * value._Mypair._Myval2._Myres + 2;
    v46 = value._Mypair._Myval2._Bx._Ptr;
    if ( v45 >= 0x1000 )
    {
      v45 = 2 * value._Mypair._Myval2._Myres + 41;
      v46 = (wchar_t *)*((_QWORD *)value._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)value._Mypair._Myval2._Bx._Ptr - (char *)v46 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v46, v45);
  }
  return v20;
}

/*
==============
Xb3MultiplayerManager::WriteCustomSessionProperty
==============
*/
__int64 Xb3MultiplayerManager::WriteCustomSessionProperty(Xb3MultiplayerManager *this, const PlatformSessionType sessionType, const std::wstring *propertyName, const std::wstring *value)
{
  const std::wstring *v4; 
  std::wstring *v7; 
  std::_Ref_count_base *v9; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v13; 
  std::_Ref_count_base *v14; 
  std::_Ref_count_base *v15; 
  char v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v18; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v19; 
  const std::wstring *v20; 
  const wchar_t *v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v22; 
  xbox::services::multiplayer::multiplayer_session_reference *v23; 
  const std::wstring *v24; 
  const std::wstring *v25; 
  std::_Ref_count_base *v26; 
  std::_Ref_count_base *v27; 
  std::_Ref_count_base *v28; 
  std::_Ref_count_base *v29; 
  std::_Ref_count_base *v30; 
  std::_Ref_count_base *v31; 
  std::_Ref_count_base *v32; 
  std::_Ref_count_base *v33; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v34; 
  unsigned __int64 v39; 
  char *v40; 
  std::_Ref_count_base *v42; 
  std::_Ref_count_base *v43; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v44; 
  std::_Ref_count_base *v45; 
  std::_Ref_count_base *v46; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v47; 
  std::_Ref_count_base *v48; 
  std::_Ref_count_base *v49; 
  char v50; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v51; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v52; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v53; 
  const std::wstring *v54; 
  const wchar_t *v55; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v56; 
  xbox::services::multiplayer::multiplayer_session_reference *v57; 
  const std::wstring *v58; 
  const std::wstring *v59; 
  std::_Ref_count_base *v60; 
  std::_Ref_count_base *v61; 
  std::_Ref_count_base *v62; 
  std::_Ref_count_base *v63; 
  std::_Ref_count_base *v64; 
  std::_Ref_count_base *v65; 
  std::_Ref_count_base *v66; 
  std::_Ref_count_base *v67; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v68; 
  unsigned __int64 v73; 
  char *v74; 
  std::_Ref_count_base *v76; 
  std::string *v77; 
  unsigned __int8 v78; 
  unsigned __int64 v79; 
  char *v80; 
  char v83; 
  char v84; 
  web::json::value valueJson; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v87; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v88; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v89; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v90; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v91; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v92; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v93; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v94; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v95; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v96; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v97; 
  __int64 v98; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v99; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v100; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v101; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v102; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v103; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v104; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v105; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v106; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v107; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v108; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v109; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v110; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v111; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v112; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v113; 
  std::wstring v114; 
  __int128 v115; 
  std::string v116; 
  xbox::services::xbox_live_result<void> v117; 
  xbox::services::xbox_live_result<void> v118; 

  v98 = -2i64;
  v4 = value;
  std::wstring::wstring(&v114, value);
  web::json::value::value(&valueJson, v7);
  LODWORD(v115) = 0;
  std::_Execute_once(&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag, (int (__stdcall *)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>, &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage);
  *((_QWORD *)&v115 + 1) = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  __asm
  {
    vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
    vmovdqu xmmword ptr [rbp+1E0h+var_B8.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v116._Mypair._Myval2._Bx._Buf[0] = 0;
  v9 = (std::_Ref_count_base *)xbox::services::xbox_services_error_code_category();
  LODWORD(result._Ptr) = 0;
  result._Rep = v9;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+2E0h+result.baseclass_0._Ptr]
    vmovups [rbp+1E0h+var_C8], xmm0
  }
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  Rep = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1737, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  if ( sessionType == PRIVATE_PARTY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v88);
    v13 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v88._Ptr, &v99)->_Ptr;
    v14 = v99._Rep;
    if ( v99._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v99._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
    }
    v15 = v88._Rep;
    if ( v88._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v88._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v15->_Destroy(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
          v15->_Delete_this(v15);
      }
    }
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1741, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v91);
    v16 = -64;
    v17 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v91._Ptr, &v104);
    if ( xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v17->_Ptr, &v103)->_Ptr )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v90);
      v18 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v90._Ptr, &v102);
      v19 = xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v18->_Ptr, &v101);
      v16 = -57;
      v20 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v19->_Ptr);
      v21 = (const wchar_t *)v20;
      if ( v20->_Mypair._Myval2._Myres >= 8 )
        v21 = v20->_Mypair._Myval2._Bx._Ptr;
    }
    else
    {
      v21 = L"NO HOST";
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v89);
    v83 = v16;
    v22 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v89._Ptr, &v100);
    v23 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v22->_Ptr);
    v24 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v23);
    if ( v24->_Mypair._Myval2._Myres >= 8 )
      v24 = (const std::wstring *)v24->_Mypair._Myval2._Bx._Ptr;
    if ( v4->_Mypair._Myval2._Myres >= 8 )
      v4 = (const std::wstring *)v4->_Mypair._Myval2._Bx._Ptr;
    v25 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v25 = (const std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - writing %S with value = %S (session_name = %S host = %S)\n", v25->_Mypair._Myval2._Bx._Buf, v4->_Mypair._Myval2._Bx._Buf, v24->_Mypair._Myval2._Bx._Buf, v21);
    v26 = v100._Rep;
    if ( v100._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v100._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v26->_Destroy(v26);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->_Weaks, 0xFFFFFFFF) == 1 )
          v26->_Delete_this(v26);
      }
    }
    v27 = v89._Rep;
    if ( v89._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v89._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v27->_Destroy(v27);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27->_Weaks, 0xFFFFFFFF) == 1 )
          v27->_Delete_this(v27);
      }
    }
    if ( (v16 & 4) != 0 )
    {
      v83 = v16 & 0xFB;
      v28 = v101._Rep;
      if ( v101._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v101._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v28->_Destroy(v28);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28->_Weaks, 0xFFFFFFFF) == 1 )
            v28->_Delete_this(v28);
        }
      }
    }
    if ( (v83 & 2) != 0 )
    {
      v83 &= ~2u;
      v29 = v102._Rep;
      if ( v102._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v102._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v29->_Destroy(v29);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29->_Weaks, 0xFFFFFFFF) == 1 )
            v29->_Delete_this(v29);
        }
      }
    }
    if ( (v83 & 1) != 0 )
    {
      v30 = v90._Rep;
      if ( v90._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v90._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v30->_Destroy(v30);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30->_Weaks, 0xFFFFFFFF) == 1 )
            v30->_Delete_this(v30);
        }
      }
    }
    v31 = v103._Rep;
    if ( v103._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v103._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v31->_Destroy(v31);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
          v31->_Delete_this(v31);
      }
    }
    v32 = v104._Rep;
    if ( v104._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v104._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v32->_Destroy(v32);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v32->_Weaks, 0xFFFFFFFF) == 1 )
          v32->_Delete_this(v32);
      }
    }
    v33 = v91._Rep;
    if ( v91._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v91._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v33->_Destroy(v33);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v33->_Weaks, 0xFFFFFFFF) == 1 )
          v33->_Delete_this(v33);
      }
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v92);
    v34 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v92._Ptr, &v105);
    _RAX = xbox::services::multiplayer::manager::multiplayer_lobby_session::set_properties(v34->_Ptr, &v117, propertyName, &valueJson, NULL);
    if ( &v115 != (__int128 *)_RAX )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups [rbp+1E0h+var_C8], xmm0
      }
      _RDI = &_RAX->m_errorMessage;
      if ( &v116 != &_RAX->m_errorMessage )
      {
        std::string::_Tidy_deallocate(&v116);
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [rbp+1E0h+var_B8.baseclass_0._Mypair._Myval2._Bx], ymm0
        }
        _RDI->_Mypair._Myval2._Mysize = 0i64;
        _RDI->_Mypair._Myval2._Myres = 15i64;
        _RDI->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
    }
    if ( v117.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v39 = v117.m_errorMessage._Mypair._Myval2._Myres + 1;
      v40 = v117.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v117.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v39 = v117.m_errorMessage._Mypair._Myval2._Myres + 40;
        v40 = (char *)*((_QWORD *)v117.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v117.m_errorMessage._Mypair._Myval2._Bx._Ptr - v40 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v40, v39);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+168h], xmm0
    }
    v117.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    v42 = v105._Rep;
    if ( v105._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v105._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v42->_Destroy(v42);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v42->_Weaks, 0xFFFFFFFF) == 1 )
          v42->_Delete_this(v42);
      }
    }
    v43 = v92._Rep;
LABEL_159:
    if ( v43 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43->_Uses, 0xFFFFFFFF) == 1 )
      {
        v43->_Destroy(v43);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43->_Weaks, 0xFFFFFFFF) == 1 )
          v43->_Delete_this(v43);
      }
    }
    goto LABEL_165;
  }
  if ( sessionType == GAME_LOBBY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v93);
    v44 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v93._Ptr, &v106)->_Ptr;
    v45 = v106._Rep;
    if ( v106._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v106._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v45->_Destroy(v45);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v45->_Weaks, 0xFFFFFFFF) == 1 )
          v45->_Delete_this(v45);
      }
    }
    v46 = v93._Rep;
    if ( v93._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v93._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v46->_Destroy(v46);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v46->_Weaks, 0xFFFFFFFF) == 1 )
          v46->_Delete_this(v46);
      }
    }
    if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1751, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v94);
    v47 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v94._Ptr, &v107)->_Ptr;
    v48 = v107._Rep;
    if ( v107._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v107._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v48->_Destroy(v48);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v48->_Weaks, 0xFFFFFFFF) == 1 )
          v48->_Delete_this(v48);
      }
    }
    v49 = v94._Rep;
    if ( v94._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v94._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v49->_Destroy(v49);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v49->_Weaks, 0xFFFFFFFF) == 1 )
          v49->_Delete_this(v49);
      }
    }
    if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1752, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v97);
    v50 = 64;
    v51 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v97._Ptr, &v112);
    if ( xbox::services::multiplayer::manager::multiplayer_game_session::host(v51->_Ptr, &v111)->_Ptr )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v96);
      v52 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v96._Ptr, &v110);
      v53 = xbox::services::multiplayer::manager::multiplayer_game_session::host(v52->_Ptr, &v109);
      v50 = 120;
      v54 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v53->_Ptr);
      v55 = (const wchar_t *)v54;
      if ( v54->_Mypair._Myval2._Myres >= 8 )
        v55 = v54->_Mypair._Myval2._Bx._Ptr;
    }
    else
    {
      v55 = L"NO HOST";
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v95);
    v84 = v50;
    v56 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v95._Ptr, &v108);
    v57 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v56->_Ptr);
    v58 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v57);
    if ( v58->_Mypair._Myval2._Myres >= 8 )
      v58 = (const std::wstring *)v58->_Mypair._Myval2._Bx._Ptr;
    if ( v4->_Mypair._Myval2._Myres >= 8 )
      v4 = (const std::wstring *)v4->_Mypair._Myval2._Bx._Ptr;
    v59 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v59 = (const std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - writing %S with value = %S (session_name = %S host = %S)\n", v59->_Mypair._Myval2._Bx._Buf, v4->_Mypair._Myval2._Bx._Buf, v58->_Mypair._Myval2._Bx._Buf, v55);
    v60 = v108._Rep;
    if ( v108._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v108._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v60->_Destroy(v60);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v60->_Weaks, 0xFFFFFFFF) == 1 )
          v60->_Delete_this(v60);
      }
    }
    v61 = v95._Rep;
    if ( v95._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v95._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v61->_Destroy(v61);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v61->_Weaks, 0xFFFFFFFF) == 1 )
          v61->_Delete_this(v61);
      }
    }
    if ( (v50 & 0x20) != 0 )
    {
      v84 = v50 & 0xDF;
      v62 = v109._Rep;
      if ( v109._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v109._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v62->_Destroy(v62);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v62->_Weaks, 0xFFFFFFFF) == 1 )
            v62->_Delete_this(v62);
        }
      }
    }
    if ( (v84 & 0x10) != 0 )
    {
      v84 &= ~0x10u;
      v63 = v110._Rep;
      if ( v110._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v110._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v63->_Destroy(v63);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v63->_Weaks, 0xFFFFFFFF) == 1 )
            v63->_Delete_this(v63);
        }
      }
    }
    if ( (v84 & 8) != 0 )
    {
      v64 = v96._Rep;
      if ( v96._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v96._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v64->_Destroy(v64);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v64->_Weaks, 0xFFFFFFFF) == 1 )
            v64->_Delete_this(v64);
        }
      }
    }
    v65 = v111._Rep;
    if ( v111._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v111._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v65->_Destroy(v65);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v65->_Weaks, 0xFFFFFFFF) == 1 )
          v65->_Delete_this(v65);
      }
    }
    v66 = v112._Rep;
    if ( v112._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v112._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v66->_Destroy(v66);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v66->_Weaks, 0xFFFFFFFF) == 1 )
          v66->_Delete_this(v66);
      }
    }
    v67 = v97._Rep;
    if ( v97._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v97._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v67->_Destroy(v67);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v67->_Weaks, 0xFFFFFFFF) == 1 )
          v67->_Delete_this(v67);
      }
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v87);
    v68 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v87._Ptr, &v113);
    _RAX = xbox::services::multiplayer::manager::multiplayer_game_session::set_properties(v68->_Ptr, &v118, propertyName, &valueJson, NULL);
    if ( &v115 != (__int128 *)_RAX )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rax]
        vmovups [rbp+1E0h+var_C8], xmm0
      }
      _RDI = &_RAX->m_errorMessage;
      if ( &v116 != &_RAX->m_errorMessage )
      {
        std::string::_Tidy_deallocate(&v116);
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi]
          vmovups ymmword ptr [rbp+1E0h+var_B8.baseclass_0._Mypair._Myval2._Bx], ymm0
        }
        _RDI->_Mypair._Myval2._Mysize = 0i64;
        _RDI->_Mypair._Myval2._Myres = 15i64;
        _RDI->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
    }
    if ( v118.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v73 = v118.m_errorMessage._Mypair._Myval2._Myres + 1;
      v74 = v118.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v118.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v73 = v118.m_errorMessage._Mypair._Myval2._Myres + 40;
        v74 = (char *)*((_QWORD *)v118.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v118.m_errorMessage._Mypair._Myval2._Bx._Ptr - v74 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v74, v73);
    }
    __asm
    {
      vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
      vmovdqu xmmword ptr [rbp+198h], xmm0
    }
    v118.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    v76 = v113._Rep;
    if ( v113._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v113._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v76->_Destroy(v76);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v76->_Weaks, 0xFFFFFFFF) == 1 )
          v76->_Delete_this(v76);
      }
    }
    v43 = v87._Rep;
    goto LABEL_159;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1762, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::WriteCustomSessionProperty, unknown session type") )
    __debugbreak();
LABEL_165:
  if ( (_DWORD)v115 )
  {
    v77 = &v116;
    if ( v116._Mypair._Myval2._Myres >= 0x10 )
      v77 = (std::string *)v116._Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - failed with err \"%s\" (%x)\n", v77->_Mypair._Myval2._Bx._Buf, (unsigned int)v115);
    v78 = 0;
  }
  else
  {
    v78 = 1;
  }
  if ( v116._Mypair._Myval2._Myres >= 0x10 )
  {
    v79 = v116._Mypair._Myval2._Myres + 1;
    v80 = v116._Mypair._Myval2._Bx._Ptr;
    if ( v116._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v79 = v116._Mypair._Myval2._Myres + 40;
      v80 = (char *)*((_QWORD *)v116._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v116._Mypair._Myval2._Bx._Ptr - v80 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v80, v79);
  }
  __asm
  {
    vmovdqu xmm0, cs:__xmm@000000000000000f0000000000000000
    vmovdqu xmmword ptr [rbp+1E0h+var_B8.baseclass_0._Mypair._Myval2._Mysize], xmm0
  }
  v116._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( valueJson.m_value._Mypair._Myval2 )
    ((void (__fastcall *)(web::json::details::_Value *, __int64))valueJson.m_value._Mypair._Myval2->~_Value)(valueJson.m_value._Mypair._Myval2, 1i64);
  return v78;
}

/*
==============
Xb3MultiplayerManager::WritePendingChangedFailed
==============
*/
void Xb3MultiplayerManager::WritePendingChangedFailed(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v2; 
  const char *Ptr; 
  const std::error_code *v4; 

  v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  Ptr = (const char *)v2;
  if ( v2->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = v2->_Mypair._Myval2._Bx._Ptr;
  v4 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
  Com_Printf(25, "Xb3MultiplayerManager::WritePendingChangedFailed - err (%d - %s)\n", (unsigned int)v4->_Myval, Ptr);
}

/*
==============
mpManager
==============
*/
std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *mpManager(std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *result)
{
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(result);
  return result;
}

