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
  __int128 *v15; 
  int v16; 
  unsigned __int64 PlatformUserId; 
  std::_Ref_count_base *v18; 
  signed int Uses; 
  const std::error_code *v20; 
  Online_ErrorReporting *InstancePtr; 
  _BYTE v22[24]; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v25; 
  __int128 v26; 
  __int64 v27; 
  __int128 v28; 
  __int64 v29; 
  __int128 v30; 
  __int64 v31; 
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
    *(_DWORD *)v22 = -1;
    *(_OWORD *)&v22[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 445, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v22) )
      __debugbreak();
    xboxLiveUser = s_currentSessionTaskParams_0->xboxLiveUser;
    v10 = xboxLiveUser && Plat_IsUserInGraveyard(xboxLiveUser);
    v22[20] = 1;
    *(_DWORD *)v22 = s_currentSessionTaskParams_0->m_controllerIndex;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      v14 = s_currentSessionTaskParams_0;
      v15 = &v30;
      v30 = *(_OWORD *)v22;
      v31 = *(__int64 *)&v22[16];
    }
    else
    {
      v11 = xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v24);
      v12 = v24._Rep;
      v13 = v11->_Ptr;
      if ( v24._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v12->_Destroy(v12);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
            v12->_Delete_this(v12);
        }
      }
      v14 = s_currentSessionTaskParams_0;
      if ( v13 )
      {
        v26 = *(_OWORD *)v22;
        v27 = *(__int64 *)&v22[16];
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v26);
LABEL_37:
        s_currentSessionTaskParams_0 = NULL;
        return;
      }
      v28 = *(_OWORD *)v22;
      v29 = *(__int64 *)&v22[16];
      v15 = &v28;
    }
    ((void (__fastcall *)(__int128 *))v14->m_failedCallback)(v15);
    v16 = 0;
    while ( 1 )
    {
      PlatformUserId = Live_GetPlatformUserId(v16);
      Xb3MultiplayerManager::GetSessionMemberByPlatformId(&Xb3MultiplayerManager::ms_xb3MultiplayerManager, &v25, PlatformUserId, UNKNOWN);
      v18 = v25._Rep;
      if ( v25._Rep )
      {
        Uses = v25._Rep->_Uses;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v18->_Destroy(v18);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->_Weaks, 0xFFFFFFFF) == 1 )
            v18->_Delete_this(v18);
        }
        if ( Uses > 0 )
          break;
      }
      if ( ++v16 >= 8 )
      {
        if ( !v10 )
          goto LABEL_37;
        break;
      }
    }
    v20 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
    Com_sprintf(dest, 0x100ui64, "%d", (unsigned int)v20->_Myval);
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
  _BYTE v13[24]; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v15; 
  __int128 v16; 
  __int64 v17; 
  __int128 v18; 
  __int64 v19; 
  __int128 v20; 
  __int64 v21; 

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
    *(_DWORD *)v13 = -1;
    *(_OWORD *)&v13[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 518, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v13) )
        __debugbreak();
      v9 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v13 = v9->m_controllerIndex;
    v13[20] = 1;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      v20 = *(_OWORD *)v13;
      v21 = *(__int64 *)&v13[16];
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v20);
      s_currentSessionTaskParams_0 = NULL;
    }
    else
    {
      v10 = xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v15);
      v11 = v15._Rep;
      v12 = v10->_Ptr;
      if ( v15._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v11->_Destroy(v11);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
            v11->_Delete_this(v11);
        }
      }
      if ( v12 )
      {
        v16 = *(_OWORD *)v13;
        v17 = *(__int64 *)&v13[16];
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v16);
      }
      else
      {
        v18 = *(_OWORD *)v13;
        v19 = *(__int64 *)&v13[16];
        ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v18);
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
  __int64 v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_event_args> v13; 
  std::wstring v14; 

  v12 = -2i64;
  Ptr = (xbox::services::multiplayer::manager::member_property_changed_event_args *)xbox::services::multiplayer::manager::multiplayer_event::event_args(event, &v13)->_Ptr;
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
  if ( Ptr )
  {
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    v5 = (const char *)v4;
    if ( v4->_Mypair._Myval2._Myres >= 0x10 )
      v5 = v4->_Mypair._Myval2._Bx._Ptr;
    Myval = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval;
    v7 = xbox::services::multiplayer::manager::member_property_changed_event_args::properties(Ptr, &result);
    v8 = web::json::value::to_string(v7, &v14);
    if ( v8->_Mypair._Myval2._Myres >= 8 )
      v8 = (std::wstring *)v8->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::MemberPropertyChanged (%S) - err (%d - %s)\n", v8->_Mypair._Myval2._Bx._Buf, Myval, v5);
    if ( v14._Mypair._Myval2._Myres >= 8 )
    {
      v9 = 2 * v14._Mypair._Myval2._Myres + 2;
      v10 = v14._Mypair._Myval2._Bx._Ptr;
      if ( v9 >= 0x1000 )
      {
        v9 = 2 * v14._Mypair._Myval2._Myres + 41;
        v10 = (wchar_t *)*((_QWORD *)v14._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v14._Mypair._Myval2._Bx._Ptr - (char *)v10 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v10, v9);
    }
    *(_OWORD *)&v14._Mypair._Myval2._Mysize = _xmm;
    v14._Mypair._Myval2._Bx._Buf[0] = 0;
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
  bool v7; 
  _BYTE v8[24]; 
  __int128 v9; 
  __int64 v10; 

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
    *(_DWORD *)v8 = -1;
    *(_OWORD *)&v8[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 644, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v8) )
        __debugbreak();
      v6 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v8 = v6->m_controllerIndex;
    v8[20] = 1;
    v7 = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval == 0;
    v9 = *(_OWORD *)v8;
    v10 = *(__int64 *)&v8[16];
    if ( v7 )
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v9);
    else
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v9);
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
  bool v7; 
  _BYTE v8[24]; 
  __int128 v9; 
  __int64 v10; 

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
    *(_DWORD *)v8 = -1;
    *(_OWORD *)&v8[4] = 0ui64;
    if ( s_currentSessionTaskParams_0->m_controllerIndex > 7u )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 681, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams->IsInUse())", (const char *)&queryFormat, "s_currentSessionTaskParams->IsInUse()", *(_QWORD *)v8) )
        __debugbreak();
      v6 = s_currentSessionTaskParams_0;
    }
    *(_DWORD *)v8 = v6->m_controllerIndex;
    v8[20] = 1;
    v7 = xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval == 0;
    v9 = *(_OWORD *)v8;
    v10 = *(__int64 *)&v8[16];
    if ( v7 )
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v9);
    else
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v9);
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
  __int64 v1; 
  __int128 m_controllerIndex; 
  __int64 v3; 

  Com_PrintWarning(25, "Xb3MultiplayerManager::ClientDisconnectedFromMultiplayerService: Connection to LIVE multiplayer service lost. This means we're tearing down the MP manager entirely.\n");
  if ( s_currentSessionTaskParams_0 )
  {
    BYTE4(v1) = 1;
    LODWORD(v1) = 0;
    m_controllerIndex = (unsigned int)s_currentSessionTaskParams_0->m_controllerIndex;
    v3 = v1;
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&m_controllerIndex);
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
  const std::string *v2; 
  const char *Ptr; 
  const std::error_code *v4; 
  _BYTE v5[24]; 
  __int128 v6; 
  __int64 v7; 

  v5[20] = 1;
  *(_OWORD *)&v5[4] = 0ui64;
  *(_DWORD *)v5 = s_currentSessionTaskParams_0->m_controllerIndex;
  if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
  {
    v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
    Ptr = (const char *)v2;
    if ( v2->_Mypair._Myval2._Myres >= 0x10 )
      Ptr = v2->_Mypair._Myval2._Bx._Ptr;
    v4 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
    Com_Printf(25, "The write failed due to %d and %s\n", (unsigned int)v4->_Myval, Ptr);
    v6 = *(_OWORD *)v5;
    v7 = *(__int64 *)&v5[16];
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v6);
  }
  else
  {
    v6 = *(_OWORD *)v5;
    v7 = *(__int64 *)&v5[16];
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v6);
  }
}

/*
==============
Xb3MultiplayerManager::LeaveGameCompleted
==============
*/
void Xb3MultiplayerManager::LeaveGameCompleted(xbox::services::multiplayer::manager::multiplayer_event *event)
{
  const std::string *v2; 
  const char *Ptr; 
  const std::error_code *v4; 
  _BYTE v5[24]; 
  __int128 v6; 
  __int64 v7; 

  *(_OWORD *)&v5[4] = 0ui64;
  if ( s_currentSessionTaskParams_0 )
  {
    *(_DWORD *)v5 = s_currentSessionTaskParams_0->m_controllerIndex;
    v5[20] = 1;
    if ( xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
    {
      v2 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
      Ptr = (const char *)v2;
      if ( v2->_Mypair._Myval2._Myres >= 0x10 )
        Ptr = v2->_Mypair._Myval2._Bx._Ptr;
      v4 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
      Com_Printf(25, "Xb3MultiplayerManager::LeaveGameCompleted failed due to %d and %s\n", (unsigned int)v4->_Myval, Ptr);
      v6 = *(_OWORD *)v5;
      v7 = *(__int64 *)&v5[16];
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v6);
      s_currentSessionTaskParams_0 = NULL;
    }
    else
    {
      v6 = *(_OWORD *)v5;
      v7 = *(__int64 *)&v5[16];
      ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_successCallback)(&v6);
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
  unsigned __int64 v22; 
  char *v23; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v25; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v27; 
  __int64 v28; 
  Windows::Xbox::System::User *v29; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v30; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v31; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v32; 
  xbox::services::xbox_live_result<void> v33; 
  char _Buffer[256]; 

  v28 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v25);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v25._Ptr, &v30)->_Ptr;
  v8 = v30._Rep;
  if ( v30._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v25._Rep;
  if ( v25._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1553, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v26);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v26._Ptr, &v31)->_Ptr;
  v11 = v31._Rep;
  if ( v31._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v26._Rep;
  if ( v26._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  v29 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v27);
  v14 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v27._Ptr, &v32)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::add_local_user(v14, &v33, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v15 = v32._Rep;
  if ( v32._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v32._Rep->_Uses) )
    {
      v15->_Destroy(v15);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v15->_Weaks) )
        v15->_Delete_this(v15);
    }
  }
  v16 = v27._Rep;
  if ( v27._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v27._Rep->_Uses) )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  if ( v33.m_errorCode._Myval )
  {
    p_m_errorMessage = &v33.m_errorMessage;
    if ( v33.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v33.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %s", m_controllerIndex, p_m_errorMessage->_Mypair._Myval2._Bx._Buf);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    if ( v33.m_errorCode._Myval == 1006 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1573, ASSERT_TYPE_ASSERT, "(result.err().value() != USER_ALREADY_ADDED)", (const char *)&queryFormat, "result.err().value() != USER_ALREADY_ADDED") )
      __debugbreak();
    v18 = &v33.m_errorMessage;
    if ( v33.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)v33.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::AddSplitscreenUserToPrivatePartySession : add_local_user failed - %s [%x].\n", v18->_Mypair._Myval2._Bx._Buf, (unsigned int)v33.m_errorCode._Myval);
    if ( v33.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v19 = v33.m_errorMessage._Mypair._Myval2._Myres + 1;
      v20 = v33.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v33.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v19 = v33.m_errorMessage._Mypair._Myval2._Myres + 40;
        v20 = (char *)*((_QWORD *)v33.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v33.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v20, v19);
    }
    *(_OWORD *)&v33.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v33.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v33.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v22 = v33.m_errorMessage._Mypair._Myval2._Myres + 1;
      v23 = v33.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v33.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v22 = v33.m_errorMessage._Mypair._Myval2._Myres + 40;
        v23 = (char *)*((_QWORD *)v33.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v33.m_errorMessage._Mypair._Myval2._Bx._Ptr - v23 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v23, v22);
    }
    *(_OWORD *)&v33.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v33.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
  std::_Ref_count_base **p_Rep; 
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
      p_Rep = &Myfirst->m_eventArgs._Rep;
      do
      {
        v16.m_pContext = Myfirst->m_pContext;
        _XMM0 = (std::error_code)*((_OWORD *)p_Rep - 4);
        v16.m_errorCode = _XMM0;
        std::string::string(&v16.m_errorMessage, (const std::string *)(p_Rep - 6));
        v16.m_eventType = *((_DWORD *)p_Rep - 4);
        v16.m_sessionType = *((_DWORD *)p_Rep - 3);
        __asm { vpxor   xmm0, xmm0, xmm0 }
        v16.m_eventArgs = _XMM0;
        v6 = *p_Rep;
        if ( *p_Rep )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v6->_Uses);
          v6 = *p_Rep;
        }
        v16.m_eventArgs._Ptr = (xbox::services::multiplayer::manager::multiplayer_event_args *)*(p_Rep - 1);
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
        p_Rep += 10;
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
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v9; 
  std::_Ref_count_base *v10; 
  std::_Ref_count_base *v11; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v12; 
  const web::json::value *v13; 
  std::_Ref_count_base *v14; 
  std::_Ref_count_base *v15; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v16; 
  std::_Ref_count_base *v17; 
  std::_Ref_count_base *v18; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v19; 
  std::_Ref_count_base *v20; 
  std::_Ref_count_base *v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v22; 
  const web::json::value *v23; 
  std::_Ref_count_base *v24; 
  char v25; 
  web::json::value *v26; 
  const std::wstring *v27; 
  unsigned __int64 Mysize; 
  unsigned __int64 v29; 
  wchar_t *v30; 
  std::wstring *v31; 
  std::wstring *v32; 
  std::wstring *v33; 
  __int64 v34; 
  unsigned __int64 v35; 
  char v36; 
  unsigned __int64 v37; 
  std::string *v38; 
  unsigned int v39; 
  std::string *v40; 
  unsigned int v41; 
  unsigned __int64 v42; 
  char *v43; 
  unsigned __int8 v44; 
  unsigned __int64 v45; 
  char *v46; 
  unsigned __int64 v47; 
  wchar_t *v48; 
  web::json::value v50; 
  __int64 v51[2]; 
  XSECURITY_INFO *p_m_security; 
  std::wstring key; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v55; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v56; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v57; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v58; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v59; 
  std::wstring v60; 
  std::wstring v61; 
  __int64 v62; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v63; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v64; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v65; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v66; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v67; 
  std::string v68; 
  std::wstring v69; 
  OnlineJoinInfo v70; 
  char dest[256]; 

  v62 = -2i64;
  web::json::value::value(&v50);
  *(_OWORD *)&v69._Mypair._Myval2._Mysize = _xmm;
  v69._Mypair._Myval2._Bx._Buf[0] = 0;
  v51[0] = 0i64;
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
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v55);
    v9 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v55._Ptr, &v63)->_Ptr;
    v10 = v63._Rep;
    if ( v63._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v63._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v10->_Destroy(v10);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v10->_Weaks, 0xFFFFFFFF) == 1 )
          v10->_Delete_this(v10);
      }
    }
    v11 = v55._Rep;
    if ( v55._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v55._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v11->_Destroy(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
          v11->_Delete_this(v11);
      }
    }
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1794, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v56);
    v12 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v56._Ptr, &v64);
    v13 = xbox::services::multiplayer::manager::multiplayer_lobby_session::properties(v12->_Ptr);
    web::json::value::operator=(&v50, v13);
    v14 = v64._Rep;
    if ( v64._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v64._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v14->_Destroy(v14);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
          v14->_Delete_this(v14);
      }
    }
    v15 = v56._Rep;
LABEL_53:
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Uses, 0xFFFFFFFF) == 1 )
      {
        v15->_Destroy(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
          v15->_Delete_this(v15);
      }
    }
    goto LABEL_59;
  }
  if ( sessionType == GAME_LOBBY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v57);
    v16 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v57._Ptr, &v65)->_Ptr;
    v17 = v65._Rep;
    if ( v65._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v65._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v17->_Destroy(v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
          v17->_Delete_this(v17);
      }
    }
    v18 = v57._Rep;
    if ( v57._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v57._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v18->_Destroy(v18);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18->_Weaks, 0xFFFFFFFF) == 1 )
          v18->_Delete_this(v18);
      }
    }
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1799, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v58);
    v19 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v58._Ptr, &v66)->_Ptr;
    v20 = v66._Rep;
    if ( v66._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v66._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v20->_Destroy(v20);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v20->_Weaks, 0xFFFFFFFF) == 1 )
          v20->_Delete_this(v20);
      }
    }
    v21 = v58._Rep;
    if ( v58._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v58._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v21->_Destroy(v21);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21->_Weaks, 0xFFFFFFFF) == 1 )
          v21->_Delete_this(v21);
      }
    }
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1800, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v59);
    v22 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v59._Ptr, &v67);
    v23 = xbox::services::multiplayer::manager::multiplayer_game_session::properties(v22->_Ptr);
    web::json::value::operator=(&v50, v23);
    v24 = v67._Rep;
    if ( v67._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v67._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v24->_Destroy(v24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24->_Weaks, 0xFFFFFFFF) == 1 )
          v24->_Delete_this(v24);
      }
    }
    v15 = v59._Rep;
    goto LABEL_53;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1805, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid platform session type in CompareSessionProperties") )
    __debugbreak();
LABEL_59:
  v60._Mypair._Myval2._Mysize = 0i64;
  v60._Mypair._Myval2._Myres = 7i64;
  v60._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&v60, L"max_players", 0xBui64);
  if ( !GetIntPropertyValueFromSessionProperties(&v60, &v50, (int *)v51) )
    goto LABEL_108;
  v61._Mypair._Myval2._Mysize = 0i64;
  v61._Mypair._Myval2._Myres = 7i64;
  v61._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&v61, L"public_slots", 0xCui64);
  if ( !GetIntPropertyValueFromSessionProperties(&v61, &v50, (int *)v51 + 1) )
    goto LABEL_108;
  key._Mypair._Myval2._Mysize = 0i64;
  key._Mypair._Myval2._Myres = 7i64;
  key._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&key, L"join_info", 9ui64);
  v51[1] = (__int64)&key;
  v25 = 0;
  if ( v50.m_value._Mypair._Myval2->has_field(v50.m_value._Mypair._Myval2, &key) )
  {
    v26 = web::json::value::at(&v50, &key);
    v27 = web::json::value::as_string(v26);
    if ( &v69 != v27 )
    {
      Mysize = v27->_Mypair._Myval2._Mysize;
      if ( v27->_Mypair._Myval2._Myres >= 8 )
        v27 = (const std::wstring *)v27->_Mypair._Myval2._Bx._Ptr;
      std::wstring::assign(&v69, v27->_Mypair._Myval2._Bx._Buf, Mysize);
    }
    v25 = 1;
  }
  if ( key._Mypair._Myval2._Myres >= 8 )
  {
    v29 = 2 * key._Mypair._Myval2._Myres + 2;
    v30 = key._Mypair._Myval2._Bx._Ptr;
    if ( v29 >= 0x1000 )
    {
      v29 = 2 * key._Mypair._Myval2._Myres + 41;
      v30 = (wchar_t *)*((_QWORD *)key._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)key._Mypair._Myval2._Bx._Ptr - (char *)v30 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v30, v29);
  }
  key._Mypair._Myval2._Myres = 7i64;
  if ( !v25 )
    goto LABEL_108;
  v31 = &v69;
  if ( v69._Mypair._Myval2._Myres >= 8 )
    v31 = (std::wstring *)v69._Mypair._Myval2._Bx._Ptr;
  v32 = (std::wstring *)((char *)v31 + 2 * v69._Mypair._Myval2._Mysize);
  v33 = &v69;
  if ( v69._Mypair._Myval2._Myres >= 8 )
    v33 = (std::wstring *)v69._Mypair._Myval2._Bx._Ptr;
  p_m_security = (XSECURITY_INFO *)v33;
  v68._Mypair._Myval2._Mysize = 0i64;
  v68._Mypair._Myval2._Myres = 15i64;
  v68._Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::reserve(&v68, ((char *)v32 - (char *)v33) >> 1);
  v34 = 0i64;
  v35 = (unsigned __int64)((char *)v32 - (char *)v33 + 1) >> 1;
  if ( v33 > v32 )
    v35 = 0i64;
  if ( v35 )
  {
    do
    {
      v36 = v33->_Mypair._Myval2._Bx._Alias[0];
      v37 = v68._Mypair._Myval2._Mysize;
      if ( v68._Mypair._Myval2._Mysize >= v68._Mypair._Myval2._Myres )
      {
        std::string::_Reallocate_grow_by<_lambda_319d5e083f45f90dcdce5dce53cbb275_,char>(&v68, 1ui64, 0, v36);
      }
      else
      {
        ++v68._Mypair._Myval2._Mysize;
        v38 = &v68;
        if ( v68._Mypair._Myval2._Myres >= 0x10 )
          v38 = (std::string *)v68._Mypair._Myval2._Bx._Ptr;
        v38->_Mypair._Myval2._Bx._Buf[v37] = v36;
        v38->_Mypair._Myval2._Bx._Buf[v37 + 1] = 0;
      }
      v33 = (std::wstring *)((char *)v33 + 2);
      ++v34;
    }
    while ( v34 != v35 );
  }
  p_m_security = &v70.communicationInfo.session.m_security;
  bdSecurityID::bdSecurityID(&v70.communicationInfo.session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&v70.communicationInfo.session.m_security.m_key);
  v39 = v68._Mypair._Myval2._Mysize;
  if ( v68._Mypair._Myval2._Mysize > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", LODWORD(v68._Mypair._Myval2._Mysize), "unsigned", v68._Mypair._Myval2._Mysize) )
    __debugbreak();
  v40 = &v68;
  if ( v68._Mypair._Myval2._Myres >= 0x10 )
    v40 = (std::string *)v68._Mypair._Myval2._Bx._Ptr;
  v41 = bdBase64::decode(v40->_Mypair._Myval2._Bx._Buf, v39, dest, 0x100u);
  if ( v41 >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1830, ASSERT_TYPE_ASSERT, "(len < 256)", (const char *)&queryFormat, "len < DECODED_XSESSION_INFO_MAX_SIZE") )
    __debugbreak();
  OnlineJoinInfo::Deserialize(&v70, (const unsigned __int8 *)dest, v41);
  if ( LODWORD(v51[0]) != maxPlayers || HIDWORD(v51[0]) != maxPlayers || !XSESSION_INFO::operator==(&joinInfo->communicationInfo.session, &v70.communicationInfo.session) )
  {
    bdSecurityKey::~bdSecurityKey(&v70.communicationInfo.session.m_security.m_key);
    bdSecurityID::~bdSecurityID(&v70.communicationInfo.session.m_security.m_id);
    if ( v68._Mypair._Myval2._Myres >= 0x10 )
    {
      v45 = v68._Mypair._Myval2._Myres + 1;
      v46 = v68._Mypair._Myval2._Bx._Ptr;
      if ( v68._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v45 = v68._Mypair._Myval2._Myres + 40;
        v46 = (char *)*((_QWORD *)v68._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v68._Mypair._Myval2._Bx._Ptr - v46 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v46, v45);
    }
LABEL_108:
    v44 = 0;
    goto LABEL_109;
  }
  bdSecurityKey::~bdSecurityKey(&v70.communicationInfo.session.m_security.m_key);
  bdSecurityID::~bdSecurityID(&v70.communicationInfo.session.m_security.m_id);
  if ( v68._Mypair._Myval2._Myres >= 0x10 )
  {
    v42 = v68._Mypair._Myval2._Myres + 1;
    v43 = v68._Mypair._Myval2._Bx._Ptr;
    if ( v68._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v42 = v68._Mypair._Myval2._Myres + 40;
      v43 = (char *)*((_QWORD *)v68._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v68._Mypair._Myval2._Bx._Ptr - v43 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v43, v42);
  }
  v44 = 1;
LABEL_109:
  if ( v69._Mypair._Myval2._Myres >= 8 )
  {
    v47 = 2 * v69._Mypair._Myval2._Myres + 2;
    v48 = v69._Mypair._Myval2._Bx._Ptr;
    if ( v47 >= 0x1000 )
    {
      v47 = 2 * v69._Mypair._Myval2._Myres + 41;
      v48 = (wchar_t *)*((_QWORD *)v69._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)v69._Mypair._Myval2._Bx._Ptr - (char *)v48 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v48, v47);
  }
  *(_OWORD *)&v69._Mypair._Myval2._Mysize = _xmm;
  v69._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v50.m_value._Mypair._Myval2 )
    ((void (__fastcall *)(web::json::details::_Value *, __int64))v50.m_value._Mypair._Myval2->~_Value)(v50.m_value._Mypair._Myval2, 1i64);
  return v44;
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
  const std::wstring *v12; 
  const std::wstring *v13; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v14; 
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
  if ( !Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1960, ASSERT_TYPE_ASSERT, "(mpManager())", (const char *)&queryFormat, "mpManager()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v16);
  v3 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v16._Ptr, &v14)->_Ptr;
  v4 = v14._Rep;
  if ( v14._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v4->_Destroy(v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->_Weaks, 0xFFFFFFFF) == 1 )
        v4->_Delete_this(v4);
    }
  }
  v5 = v16._Rep;
  if ( v16._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v5->_Destroy(v5);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
        v5->_Delete_this(v5);
    }
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1961, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v17);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v17._Ptr, &v19);
  v7 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v6->_Ptr);
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
  v9 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
    v14 = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session>)iid;
    PartyData = Lobby_GetPartyData();
    v20 = v14;
    PartyHost_SetXb3SessionId(PartyData, (const _GUID *)&v20);
    v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v12->_Mypair._Myval2._Myres >= 8 )
      v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::CopyGameLobbySessionMPSDID: Session MPSDID is: %S\n", v12->_Mypair._Myval2._Bx._Buf);
  }
  else
  {
    v13 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v13->_Mypair._Myval2._Myres >= 8 )
      v13 = (const std::wstring *)v13->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1979, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::CopyGameLobbySessionMPSDID, swprintf failed to write %S!", v13->_Mypair._Myval2._Bx._Buf) )
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
  const std::wstring *v11; 
  const std::wstring *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v14; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v15; 
  __int64 v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v17; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v18; 
  _GUID v19; 
  _GUID iid; 
  wchar_t _Buffer[256]; 

  v16 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v14);
  v3 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v14._Ptr, &v17)->_Ptr;
  v4 = v17._Rep;
  if ( v17._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v4->_Destroy(v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v4->_Weaks, 0xFFFFFFFF) == 1 )
        v4->_Delete_this(v4);
    }
  }
  v5 = v14._Rep;
  if ( v14._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v5->_Destroy(v5);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v5->_Weaks, 0xFFFFFFFF) == 1 )
        v5->_Delete_this(v5);
    }
  }
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1931, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v15);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v15._Ptr, &v18);
  v7 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v6->_Ptr);
  v8 = v18._Rep;
  if ( v18._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v18._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v15._Rep;
  if ( v15._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
    v19 = iid;
    PartyHost_SetXb3SessionId(&g_partyData, &v19);
    v11 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v11->_Mypair._Myval2._Myres >= 8 )
      v11 = (const std::wstring *)v11->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID: Session MPSDID is: %S\n", v11->_Mypair._Myval2._Bx._Buf);
  }
  else
  {
    v12 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v7);
    if ( v12->_Mypair._Myval2._Myres >= 8 )
      v12 = (const std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1949, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::CopyPrivatePartySessionMPSDID, swprintf failed to write %S!", v12->_Mypair._Myval2._Bx._Buf) )
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
  PartyData *PartyData; 
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
  const std::wstring *v53; 
  const wchar_t *v54; 
  bool IsValidSessionId; 
  const std::string *v56; 
  const char *v57; 
  const std::error_code *v58; 
  int v59; 
  unsigned int v60; 
  int v61; 
  int v62; 
  unsigned int v63; 
  int v64; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> v65; 
  std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>> v66; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v67; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v69; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v70; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v71; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v72; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v73; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v74; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v75; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v76; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  __int64 v84; 
  char v85; 
  int v86; 
  __int64 v87; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v88; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v89; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v90; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v91; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v92; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v93; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v94; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v95; 
  _GUID iid; 
  char str[40]; 
  wchar_t _Buffer[256]; 

  v87 = -2i64;
  PartyData = NULL;
  if ( !xbox::services::multiplayer::manager::multiplayer_event::err(event)->_Myval )
  {
    v81 = 0i64;
    v78 = -1i64;
    v82 = 0i64;
    v79 = 0i64;
    v80 = 0i64;
    v83 = 0i64;
    v84 = 0i64;
    v85 = 1;
    v86 = 0;
    v5 = 2;
    if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(event) == pending_subscribe )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v73);
      v62 = 65;
      v29 = 0;
      if ( v73._Ptr )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v72);
        v62 = 199;
        if ( xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v72._Ptr, &v92)->_Ptr )
          v29 = 1;
      }
      if ( (v62 & 4) != 0 )
      {
        v62 &= ~4u;
        Rep = v92._Rep;
        if ( v92._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v92._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            Rep->_Destroy(Rep);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
              Rep->_Delete_this(Rep);
          }
        }
      }
      if ( (v62 & 2) != 0 )
      {
        v62 &= ~2u;
        v31 = v72._Rep;
        if ( v72._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v72._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v31->_Destroy(v31);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
              v31->_Delete_this(v31);
          }
        }
      }
      v63 = v62 & 0xFFFFFFFE;
      v32 = v73._Rep;
      if ( v73._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v73._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v32->_Destroy(v32);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v32->_Weaks, 0xFFFFFFFF) == 1 )
            v32->_Delete_this(v32);
        }
      }
      v6 = NULL;
      if ( !v29 )
        goto LABEL_133;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v74);
      v33 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v74._Ptr, &v93);
      v6 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v33->_Ptr);
      v34 = v93._Rep;
      if ( v93._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v93._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v34->_Destroy(v34);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34->_Weaks, 0xFFFFFFFF) == 1 )
            v34->_Delete_this(v34);
        }
      }
      v35 = v74._Rep;
      if ( v74._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v74._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v35->_Destroy(v35);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v35->_Weaks, 0xFFFFFFFF) == 1 )
            v35->_Delete_this(v35);
        }
      }
      PartyData = &g_partyData;
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v75);
      v36 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v75._Ptr, &v94);
      v37 = xbox::services::multiplayer::manager::multiplayer_lobby_session::members(v36->_Ptr);
      std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>(&v65, v37);
      v38 = v94._Rep;
      if ( v94._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v94._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v38->_Destroy(v38);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v38->_Weaks, 0xFFFFFFFF) == 1 )
            v38->_Delete_this(v38);
        }
      }
      v39 = v75._Rep;
      if ( v75._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v75._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v39->_Destroy(v39);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v39->_Weaks, 0xFFFFFFFF) == 1 )
            v39->_Delete_this(v39);
        }
      }
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v76);
      v64 = v63 | 0x700;
      v40 = xbox::services::multiplayer::manager::multiplayer_manager::joinability(v76._Ptr);
      Myfirst = v65._Mypair._Myval2._Myfirst;
      Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - lobby (private party) session - there are %d members. Joinability = %d\n", v65._Mypair._Myval2._Mylast - v65._Mypair._Myval2._Myfirst, (unsigned int)v40);
      v41 = v76._Rep;
      if ( v76._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v76._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v41->_Destroy(v41);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v41->_Weaks, 0xFFFFFFFF) == 1 )
            v41->_Delete_this(v41);
        }
        Myfirst = v65._Mypair._Myval2._Myfirst;
      }
      if ( Myfirst != v65._Mypair._Myval2._Mylast )
      {
        do
        {
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v77);
          v64 |= 0x800u;
          Ptr = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v77._Ptr, &v95)->_Ptr;
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
          v48 = v95._Rep;
          if ( v95._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v95._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v48->_Destroy(v48);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v48->_Weaks, 0xFFFFFFFF) == 1 )
                v48->_Delete_this(v48);
            }
          }
          v49 = v77._Rep;
          if ( v77._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v77._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v49->_Destroy(v49);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v49->_Weaks, 0xFFFFFFFF) == 1 )
                v49->_Delete_this(v49);
            }
          }
          ++Myfirst;
        }
        while ( Myfirst != v65._Mypair._Myval2._Mylast );
        Myfirst = v65._Mypair._Myval2._Myfirst;
      }
      if ( !Myfirst )
        goto LABEL_124;
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(Myfirst, v65._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&v65);
      v27 = ((char *)v65._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
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
      v59 = 4104;
      v7 = 0;
      if ( result._Ptr )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v67);
        v59 = 12344;
        if ( xbox::services::multiplayer::manager::multiplayer_manager::game_session(v67._Ptr, &v88)->_Ptr )
          v7 = 1;
      }
      if ( (v59 & 0x20) != 0 )
      {
        v59 &= ~0x20u;
        v8 = v88._Rep;
        if ( v88._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v88._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v8->_Destroy(v8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
              v8->_Delete_this(v8);
          }
        }
      }
      if ( (v59 & 0x10) != 0 )
      {
        v59 &= ~0x10u;
        v9 = v67._Rep;
        if ( v67._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v67._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v9->_Destroy(v9);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
              v9->_Delete_this(v9);
          }
        }
      }
      v60 = v59 & 0xFFFFFFF7;
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
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v69);
      v11 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v69._Ptr, &v89);
      v6 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v11->_Ptr);
      v12 = v89._Rep;
      if ( v89._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v89._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v12->_Destroy(v12);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
            v12->_Delete_this(v12);
        }
      }
      v13 = v69._Rep;
      if ( v69._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v69._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v13->_Destroy(v13);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
            v13->_Delete_this(v13);
        }
      }
      PartyData = Lobby_GetPartyData();
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v70);
      v61 = v60 | 0xC000;
      v14 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v70._Ptr, &v90);
      v15 = xbox::services::multiplayer::manager::multiplayer_game_session::members(v14->_Ptr);
      std::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>::vector<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>(&v66, v15);
      v16 = v90._Rep;
      if ( v90._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v90._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v16->_Destroy(v16);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
            v16->_Delete_this(v16);
        }
      }
      v17 = v70._Rep;
      if ( v70._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v70._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v17->_Destroy(v17);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
            v17->_Delete_this(v17);
        }
      }
      Myfirst = v66._Mypair._Myval2._Myfirst;
      Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - game session - there are %d members.\n", v66._Mypair._Myval2._Mylast - v66._Mypair._Myval2._Myfirst);
      if ( Myfirst != v66._Mypair._Myval2._Mylast )
      {
        do
        {
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v71);
          v61 |= 0x10000u;
          v19 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v71._Ptr, &v91)->_Ptr;
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
          v25 = v91._Rep;
          if ( v91._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v91._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v25->_Destroy(v25);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25->_Weaks, 0xFFFFFFFF) == 1 )
                v25->_Delete_this(v25);
            }
          }
          v26 = v71._Rep;
          if ( v71._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v71._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v26->_Destroy(v26);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->_Weaks, 0xFFFFFFFF) == 1 )
                v26->_Delete_this(v26);
            }
          }
          ++Myfirst;
        }
        while ( Myfirst != v66._Mypair._Myval2._Mylast );
        Myfirst = v66._Mypair._Myval2._Myfirst;
      }
      if ( !Myfirst )
      {
LABEL_124:
        if ( v6 && PartyData )
        {
          v51 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v6);
          if ( v51->_Mypair._Myval2._Myres >= 8 )
            v51 = (const std::wstring *)v51->_Mypair._Myval2._Bx._Ptr;
          swprintf(_Buffer, L"{%s}", v51);
          IIDFromString(_Buffer, &iid);
          PartyData->mpsdSessionID = iid;
          if ( !fromJoin )
          {
            GameFlags = Party_GetGameFlags(PartyData);
            Party_SetGameFlags(PartyData, GameFlags | 0x1000);
          }
          MPSDIDToString(&iid, str);
          v53 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v6);
          v54 = (const wchar_t *)v53;
          if ( v53->_Mypair._Myval2._Myres >= 8 )
            v54 = v53->_Mypair._Myval2._Bx._Ptr;
          IsValidSessionId = XSESSION_INFO::IsValidSessionId(&PartyData->session->dyn.sessionInfo);
          Com_Printf(16, "Xb3MultiplayerManager::CopySessionMPSDID: %s(%d) Session MPSDID is: %S - %s\n", PartyData->partyName, IsValidSessionId, v54, str);
          return;
        }
LABEL_133:
        Com_Printf(16, "Xb3MultiplayerManager::CopySessionMPSDID: sessionReference = %p party = %p\n", v6, PartyData);
        return;
      }
      std::_Destroy_range<std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member>>>(Myfirst, v66._Mypair._Myval2._Mylast, (std::allocator<std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> > *)&v66);
      v27 = ((char *)v66._Mypair._Myval2._Myend - (char *)Myfirst) & 0xFFFFFFFFFFFFFFF0ui64;
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
  v56 = xbox::services::multiplayer::manager::multiplayer_event::err_message(event);
  v57 = (const char *)v56;
  if ( v56->_Mypair._Myval2._Myres >= 0x10 )
    v57 = v56->_Mypair._Myval2._Bx._Ptr;
  v58 = xbox::services::multiplayer::manager::multiplayer_event::err(event);
  Com_Printf(25, "Xb3MultiplayerManager::CopySessionMPSDID - err (%d - %s)\n", (unsigned int)v58->_Myval, v57);
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
  unsigned __int64 v10; 
  wchar_t *v11; 
  std::_Ref_count_base *v12; 
  int Myval; 
  std::string *p_m_errorMessage; 
  unsigned int v15; 
  unsigned __int8 v16; 
  unsigned __int64 v17; 
  char *v18; 
  char *fmt; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v22; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v23; 
  __int64 v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v25; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v27; 

  v24 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v22);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v22._Ptr, &v25)->_Ptr;
  v7 = v25._Rep;
  if ( v25._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
  v8 = v22._Rep;
  if ( v22._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v23);
  v9 = v23._Ptr;
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  xbox::services::multiplayer::manager::multiplayer_manager::join_game_from_lobby(v9, &v27, &sessionTemplateName);
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v10 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v11 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v10 >= 0x1000 )
    {
      v10 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v11 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v11 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v11, v10);
  }
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  v12 = v23._Rep;
  if ( v23._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  Myval = v27.m_errorCode._Myval;
  if ( v27.m_errorCode._Myval )
  {
    p_m_errorMessage = &v27.m_errorMessage;
    if ( v27.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v27.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    v15 = Sys_Milliseconds();
    LODWORD(fmt) = Myval;
    Com_PrintError(25, "%i Xb3MultiplayerManager::CreateGameLobbySession - join_game_from_lobby failed - %s [%x].", v15, p_m_errorMessage->_Mypair._Myval2._Bx._Buf, fmt);
    v16 = 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    v16 = 1;
  }
  if ( v27.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v17 = v27.m_errorMessage._Mypair._Myval2._Myres + 1;
    v18 = v27.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v27.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v17 = v27.m_errorMessage._Mypair._Myval2._Myres + 40;
      v18 = (char *)*((_QWORD *)v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - v18 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v18, v17);
  }
  return v16;
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
  unsigned __int64 v23; 
  char *v24; 
  char *fmt; 
  __int64 v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v28; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v29; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v30; 
  __int64 v31; 
  Windows::Xbox::System::User *v32; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v33; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v34; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v35; 
  xbox::services::xbox_live_result<void> v36; 

  v31 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1224, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  if ( m_controllerIndex >= 8 )
  {
    LODWORD(v26) = m_controllerIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1225, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v26, 8) )
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v28);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v28._Ptr, &v33)->_Ptr;
  v8 = v33._Rep;
  if ( v33._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v33._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v28._Rep;
  if ( v28._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v9->_Destroy(v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v9->_Weaks, 0xFFFFFFFF) == 1 )
        v9->_Delete_this(v9);
    }
  }
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1228, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v29);
  v10 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v29._Ptr, &v34)->_Ptr;
  v11 = v34._Rep;
  if ( v34._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v34._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v11->_Destroy(v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
        v11->_Delete_this(v11);
    }
  }
  v12 = v29._Rep;
  if ( v29._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  v32 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v30);
  v14 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v30._Ptr, &v35)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::add_local_user(v14, &v36, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v15 = v35._Rep;
  if ( v35._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v35._Rep->_Uses) )
    {
      v15->_Destroy(v15);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v15->_Weaks) )
        v15->_Delete_this(v15);
    }
  }
  v16 = v30._Rep;
  if ( v30._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v30._Rep->_Uses) )
    {
      v16->_Destroy(v16);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v16->_Weaks, 0xFFFFFFFF) == 1 )
        v16->_Delete_this(v16);
    }
  }
  Myval = v36.m_errorCode._Myval;
  if ( v36.m_errorCode._Myval )
  {
    p_m_errorMessage = &v36.m_errorMessage;
    if ( v36.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v36.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    v19 = Sys_Milliseconds();
    LODWORD(fmt) = Myval;
    Com_PrintError(25, "%i Xb3MultiplayerManager::CreatePrivatePartySession : add_local_user failed - %s [%x].\n", v19, p_m_errorMessage->_Mypair._Myval2._Bx._Buf, fmt);
    if ( v36.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v20 = v36.m_errorMessage._Mypair._Myval2._Myres + 1;
      v21 = v36.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v36.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v20 = v36.m_errorMessage._Mypair._Myval2._Myres + 40;
        v21 = (char *)*((_QWORD *)v36.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v36.m_errorMessage._Mypair._Myval2._Bx._Ptr - v21 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v21, v20);
    }
    *(_OWORD *)&v36.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v36.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v36.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v23 = v36.m_errorMessage._Mypair._Myval2._Myres + 1;
      v24 = v36.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v36.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v23 = v36.m_errorMessage._Mypair._Myval2._Myres + 40;
        v24 = (char *)*((_QWORD *)v36.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v36.m_errorMessage._Mypair._Myval2._Bx._Ptr - v24 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v24, v23);
    }
    *(_OWORD *)&v36.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v36.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
  __int64 v35; 
  HSTRING string; 
  HSTRING newString; 
  unsigned int v38; 
  unsigned int v39; 
  __int64 v40; 
  HSTRING v41; 
  _BYTE v42[24]; 
  HSTRING v43; 
  __int64 v44; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  HSTRING v46; 
  __int64 v47; 
  __int64 v48; 
  Windows::Xbox::System::User *v49; 
  HSTRING v50; 
  HSTRING v51; 
  HSTRING v52; 
  HSTRING v53; 
  HSTRING v54; 
  __int64 v55; 
  __int128 v56; 
  __int64 v57; 
  std::wstring handleId; 
  xbox::services::xbox_live_result<void> v59; 
  char _Buffer[256]; 
  char contextString[256]; 

  v48 = -2i64;
  v3 = NULL;
  m_controllerIndex = pTask->m_controllerIndex;
  v39 = m_controllerIndex;
  v5 = 0;
  if ( taskState )
  {
    j_sprintf_s(contextString, 0x100ui64, "%d %d", m_controllerIndex, taskState);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, contextString);
LABEL_77:
    *(_DWORD *)v42 = -1;
    memset(&v42[4], 0, 17);
    if ( !s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1411, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams != nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams != nullptr") )
      __debugbreak();
    *(_DWORD *)v42 = s_currentSessionTaskParams_0->m_controllerIndex;
    v42[20] = 1;
    Com_Printf(25, "The join attempt failed because the GetActivitySessionsDetailComplete failed");
    v56 = *(_OWORD *)v42;
    v57 = *(__int64 *)&v42[16];
    ((void (__fastcall *)(__int128 *))s_currentSessionTaskParams_0->m_failedCallback)(&v56);
    s_currentSessionTaskParams_0 = NULL;
    return;
  }
  CachedXboxUser = (HSTRING)Live_GetCachedXboxUser(m_controllerIndex);
  v7 = (Windows::Xbox::System::User *)CachedXboxUser;
  newString = CachedXboxUser;
  if ( CachedXboxUser )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)CachedXboxUser + 8i64))(CachedXboxUser);
  v49 = v7;
  if ( v7 )
    v7->__abi_Release(v7);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1373, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr", 0) )
    __debugbreak();
  m_asyncInfo = pTask->m_asyncInfo;
  v9 = NULL;
  v41 = NULL;
  if ( m_asyncInfo )
  {
    v10 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVMultiplayerActivityDetails_Multiplayer_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)&v41);
    if ( v10 < 0 )
      __abi_WinRTraiseException(v10);
    v9 = v41;
  }
  newString = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 8i64))(v9);
  v50 = v9;
  if ( v9 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v9 + 16i64))(v9);
  v40 = 0i64;
  v11 = (*(__int64 (__fastcall **)(HSTRING, __int64 *))(*(_QWORD *)v9 + 64i64))(v9, &v40);
  if ( v11 < 0 )
    __abi_WinRTraiseException(v11);
  v12 = v40;
  v13 = (HSTRING)v40;
  if ( v40 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8i64))(v40);
    v12 = v40;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16i64))(v12);
  newString = v13;
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v51 = v13;
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  if ( v13 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v54 = v13;
  v55 = 0i64;
  v14 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v13 + 56i64))(v13, &v38);
  if ( v14 < 0 )
    __abi_WinRTraiseException(v14);
  v15 = v38;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v46 = v13;
  v47 = v15;
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 16i64))(v13);
  (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v13 + 8i64))(v13);
  v43 = v13;
  v44 = 0i64;
  v16 = 7;
  if ( v15 )
  {
    v35 = 0i64;
    for ( i = 0i64; ; i = (unsigned int)v33 )
    {
      v18 = (*(__int64 (__fastcall **)(HSTRING, __int64, __int64 *))(*(_QWORD *)v13 + 48i64))(v13, i, &v35);
      if ( v18 < 0 )
        __abi_WinRTraiseException(v18);
      v19 = v35;
      v20 = (HSTRING)v35;
      if ( v35 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8i64))(v35);
        v19 = v35;
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
      v52 = v20;
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
      v53 = v3;
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
      xbox::services::multiplayer::manager::multiplayer_manager::join_lobby(result._Ptr, &v59, &handleId, v7);
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
      if ( v59.m_errorCode._Myval )
      {
        LODWORD(fmt) = v59.m_errorCode._Myval;
        j_sprintf_s(_Buffer, 0x100ui64, "%d %x", v39, fmt);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
        p_m_errorMessage = &v59.m_errorMessage;
        if ( v59.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
          p_m_errorMessage = (std::string *)v59.m_errorMessage._Mypair._Myval2._Bx._Ptr;
        Com_PrintError(25, "Xb3MultiplayerManager::JoinPrivatePartySession failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v59.m_errorCode._Myval);
      }
      else
      {
        v5 = 1;
      }
      if ( v59.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      {
        v29 = v59.m_errorMessage._Mypair._Myval2._Myres + 1;
        Ptr = v59.m_errorMessage._Mypair._Myval2._Bx._Ptr;
        if ( v59.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
        {
          v29 = v59.m_errorMessage._Mypair._Myval2._Myres + 40;
          Ptr = (char *)*((_QWORD *)v59.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)(v59.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(Ptr, v29);
      }
      v3 = NULL;
      v59.m_errorMessage._Mypair._Myval2._Mysize = 0i64;
      v59.m_errorMessage._Mypair._Myval2._Myres = 15i64;
      v59.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
      v33 = v44 + 1;
      v44 = v33;
      if ( v33 == v47 )
        break;
      v35 = 0i64;
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
  const std::wstring *v20; 
  __int64 v21; 
  std::wstring *v22; 
  std::wstring *v23; 
  unsigned __int64 Mysize; 
  unsigned __int16 v25; 
  bool v26; 
  unsigned __int16 v27; 
  std::_Ref_count_base *v28; 
  std::_Ref_count_base *v29; 
  unsigned __int64 v30; 
  wchar_t *v31; 
  int v33; 
  int v34; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> resulta; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v36; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v37; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v38; 
  __int64 v39; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v40; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *Mylast; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v42; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v43; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v44; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v45; 
  std::wstring v46; 
  std::wstring v47; 
  char v48[6]; 

  v39 = -2i64;
  v40 = result;
  result->_Ptr = NULL;
  result->_Rep = NULL;
  if ( sessionType )
  {
    if ( sessionType != 1 )
      return result;
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v37);
    Ptr = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v37._Ptr, &v44)->_Ptr;
    Rep = v44._Rep;
    if ( v44._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v44._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        Rep->_Destroy(Rep);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
          Rep->_Delete_this(Rep);
      }
    }
    v15 = v37._Rep;
    if ( v37._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v37._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v15->_Destroy(v15);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v15->_Weaks, 0xFFFFFFFF) == 1 )
          v15->_Delete_this(v15);
      }
    }
    if ( !Ptr )
      return result;
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v38);
    v33 = 25;
    v16 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v38._Ptr, &v45);
    v10 = xbox::services::multiplayer::manager::multiplayer_game_session::members(v16->_Ptr);
    v17 = v45._Rep;
    if ( v45._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v45._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v17->_Destroy(v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v17->_Weaks, 0xFFFFFFFF) == 1 )
          v17->_Delete_this(v17);
      }
    }
    v12 = v38._Rep;
  }
  else
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&resulta);
    v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(resulta._Ptr, &v42)->_Ptr;
    v7 = v42._Rep;
    if ( v42._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v42._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v36);
    v33 = 7;
    v9 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v36._Ptr, &v43);
    v10 = xbox::services::multiplayer::manager::multiplayer_lobby_session::members(v9->_Ptr);
    v11 = v43._Rep;
    if ( v43._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v11->_Destroy(v11);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v11->_Weaks, 0xFFFFFFFF) == 1 )
          v11->_Delete_this(v11);
      }
    }
    v12 = v36._Rep;
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
    v47._Mypair._Myval2._Mysize = 0i64;
    v47._Mypair._Myval2._Myres = 7i64;
    v47._Mypair._Myval2._Bx._Buf[0] = 0;
    v18 = (wchar_t *)v48;
    do
    {
      *--v18 = platformId % 0xA + 48;
      platformId /= 0xAui64;
    }
    while ( platformId );
    *(_OWORD *)&v46._Mypair._Myval2._Mysize = _xmm;
    v46._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( v18 != (wchar_t *)v48 )
      std::wstring::assign(&v46, v18, (v48 - (char *)v18) >> 1);
    v34 = v33 | 0x60;
    std::wstring::_Tidy_deallocate(&v47);
    v47 = v46;
    Myfirst = v10->_Mypair._Myval2._Myfirst;
    if ( v10->_Mypair._Myval2._Myfirst != v10->_Mypair._Myval2._Mylast )
    {
      do
      {
        v20 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(Myfirst->_Ptr);
        v22 = (std::wstring *)v20;
        v23 = &v47;
        if ( v46._Mypair._Myval2._Myres >= 8 )
          v23 = (std::wstring *)v46._Mypair._Myval2._Bx._Ptr;
        Mysize = v20->_Mypair._Myval2._Mysize;
        if ( v20->_Mypair._Myval2._Myres >= 8 )
          v22 = (std::wstring *)v20->_Mypair._Myval2._Bx._Ptr;
        if ( Mysize == v46._Mypair._Myval2._Mysize )
        {
          if ( Mysize )
          {
            v25 = v22->_Mypair._Myval2._Bx._Buf[0];
            v21 = v23->_Mypair._Myval2._Bx._Buf[0];
            if ( v22->_Mypair._Myval2._Bx._Buf[0] >= (unsigned __int16)v21 )
            {
              v22 = (std::wstring *)((char *)v22 - (__int64)v23);
              v26 = v25 <= (unsigned __int16)v21;
              do
              {
                if ( !v26 )
                  break;
                if ( Mysize == 1 )
                  goto LABEL_53;
                --Mysize;
                v23 = (std::wstring *)((char *)v23 + 2);
                v27 = *(wchar_t *)((char *)v22->_Mypair._Myval2._Bx._Buf + (_QWORD)v23);
                v21 = v23->_Mypair._Myval2._Bx._Buf[0];
                v26 = v27 <= (unsigned __int16)v21;
              }
              while ( v27 >= (unsigned __int16)v21 );
            }
          }
          else
          {
LABEL_53:
            v28 = Myfirst->_Rep;
            if ( v28 )
            {
              _InterlockedIncrement((volatile signed __int32 *)&v28->_Uses);
              v28 = Myfirst->_Rep;
            }
            result->_Ptr = Myfirst->_Ptr;
            v29 = result->_Rep;
            result->_Rep = v28;
            if ( v29 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29->_Uses, 0xFFFFFFFF) == 1 )
              {
                ((void (__fastcall *)(std::_Ref_count_base *, unsigned __int64, __int64, std::wstring *, int))v29->_Destroy)(v29, Mysize, v21, v22, v34);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29->_Weaks, 0xFFFFFFFF) == 1 )
                  v29->_Delete_this(v29);
              }
            }
          }
        }
        ++Myfirst;
        Mylast = v10->_Mypair._Myval2._Mylast;
      }
      while ( Myfirst != Mylast );
    }
    if ( v46._Mypair._Myval2._Myres >= 8 )
    {
      v30 = 2 * v46._Mypair._Myval2._Myres + 2;
      v31 = v46._Mypair._Myval2._Bx._Ptr;
      if ( v30 >= 0x1000 )
      {
        v30 = 2 * v46._Mypair._Myval2._Myres + 41;
        v31 = (wchar_t *)*((_QWORD *)v46._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v46._Mypair._Myval2._Bx._Ptr - (char *)v31 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v31, v30);
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
  unsigned __int64 v10; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v11; 
  std::_Ref_count_base *Rep; 
  std::_Ref_count_base *v13; 
  std::_Ref_count_base *v14; 
  xbox::services::multiplayer::multiplayer_session_reference *v15; 
  const std::wstring *v16; 
  const std::wstring *v17; 
  unsigned __int64 Mysize; 
  __int64 v19; 
  void **v20; 
  const std::wstring *v21; 
  unsigned __int64 v22; 
  void *v23; 
  std::string *p_m_errorMessage; 
  std::_Ref_count_base *v25; 
  std::_Ref_count_base *v26; 
  unsigned __int64 v27; 
  char *v28; 
  const std::wstring *v29; 
  unsigned __int64 v30; 
  wchar_t *v31; 
  unsigned __int64 v32; 
  wchar_t *v33; 
  std::_Ref_count_base *v35; 
  std::_Ref_count_base *v36; 
  unsigned __int64 v37; 
  char *v38; 
  unsigned __int64 v39; 
  wchar_t *v40; 
  unsigned __int64 v41; 
  wchar_t *v42; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v43; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v44; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v46; 
  __int64 v47; 
  Windows::Xbox::System::User *v48; 
  Microsoft::Xbox::Services::XboxLiveContext *v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  unsigned __int64 v54; 
  wchar_t *v55; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v56; 
  void *ptr[2]; 
  unsigned __int64 v58; 
  unsigned __int64 v59; 
  std::wstring customActivationContext; 
  std::wstring contextStringId; 
  xbox::services::xbox_live_result<void> v62; 

  v47 = -2i64;
  UserFromControllerIndex = GetUserFromControllerIndex(localControllerIndex);
  v48 = UserFromControllerIndex;
  if ( !UserFromControllerIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1159, ASSERT_TYPE_ASSERT, "(currentUser != nullptr)", (const char *)&queryFormat, "currentUser != nullptr", 0i64) )
    __debugbreak();
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(localControllerIndex);
  v49 = UsersXboxLiveContext;
  LOBYTE(v7) = 1;
  v8 = (HSTRING)__abi_details::__abi_ObjectToString(UsersXboxLiveContext, v7);
  WindowsDeleteString_0(NULL);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v8, NULL);
  *(_OWORD *)&customActivationContext._Mypair._Myval2._Mysize = _xmm;
  customActivationContext._Mypair._Myval2._Bx._Buf[0] = 0;
  v10 = -1i64;
  do
    ++v10;
  while ( StringRawBuffer_0[v10] );
  std::wstring::assign(&customActivationContext, StringRawBuffer_0, v10);
  WindowsDeleteString_0(v8);
  *(_OWORD *)&contextStringId._Mypair._Myval2._Mysize = _xmm;
  contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(result._Ptr, &v56)->_Ptr;
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_AddRef(UserFromControllerIndex);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::invite_users(v11, &v62, UserFromControllerIndex, usersToInvite, &contextStringId, &customActivationContext);
  if ( UserFromControllerIndex )
    UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
  Rep = v56._Rep;
  if ( v56._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v56._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      Rep->_Destroy(Rep);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Rep->_Weaks, 0xFFFFFFFF) == 1 )
        Rep->_Delete_this(Rep);
    }
  }
  v13 = result._Rep;
  if ( result._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&result._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  Com_Printf(25, "Xb3MultiplayerManager::InviteUsers - inviting some people...\n");
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v46);
  xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v46._Ptr, &v43);
  v14 = v46._Rep;
  if ( v46._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v46._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v14->_Destroy(v14);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14->_Weaks, 0xFFFFFFFF) == 1 )
        v14->_Delete_this(v14);
    }
  }
  if ( !v43._Ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1172, ASSERT_TYPE_ASSERT, "(lobbySession)", (const char *)&queryFormat, "lobbySession", UserFromControllerIndex) )
    __debugbreak();
  v15 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v43._Ptr);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v43._Ptr, &v44);
  if ( v44._Ptr )
  {
    v16 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v44._Ptr);
    v17 = v16;
    v58 = 0i64;
    v59 = 0i64;
    Mysize = v16->_Mypair._Myval2._Mysize;
    if ( v16->_Mypair._Myval2._Myres >= 8 )
      v17 = (const std::wstring *)v16->_Mypair._Myval2._Bx._Ptr;
    if ( Mysize >= 8 )
    {
      v50 = 8i64;
      v51 = 0x7FFFFFFFFFFFFFFEi64;
      v52 = 0x7FFFFFFFFFFFFFFFi64;
      v53 = 0x7FFFFFFFFFFFFFFEi64;
      v19 = Mysize | 7;
      v54 = Mysize | 7;
      if ( (Mysize | 7) > 0x7FFFFFFFFFFFFFFEi64 )
        v19 = 0x7FFFFFFFFFFFFFFEi64;
      v55 = std::allocator<wchar_t>::allocate((std::allocator<wchar_t> *)ptr, v19 + 1);
      ptr[0] = v55;
      memcpy_0(v55, v17, 2 * Mysize + 2);
      v59 = v19;
    }
    else
    {
      *(std::_String_val<std::_Simple_types<wchar_t> >::_Bxty *)ptr = v17->_Mypair._Myval2._Bx;
      v59 = 7i64;
    }
    v58 = Mysize;
    if ( !Mysize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1180, ASSERT_TYPE_ASSERT, "(hostXUID.length())", (const char *)&queryFormat, "hostXUID.length()") )
      __debugbreak();
    v20 = ptr;
    if ( v59 >= 8 )
      v20 = (void **)ptr[0];
    v21 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v15);
    if ( v21->_Mypair._Myval2._Myres >= 8 )
      v21 = (const std::wstring *)v21->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "\t\tsession_name = %S\n\t\thandleid = %S\n", v21->_Mypair._Myval2._Bx._Buf, (const wchar_t *)v20);
    if ( v59 >= 8 )
    {
      v22 = 2 * v59 + 2;
      v23 = ptr[0];
      if ( v22 >= 0x1000 )
      {
        v22 = 2 * v59 + 41;
        v23 = (void *)*((_QWORD *)ptr[0] - 1);
        if ( (unsigned __int64)(ptr[0] - v23 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v23, v22);
    }
  }
  else
  {
    v29 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v15);
    if ( v29->_Mypair._Myval2._Myres >= 8 )
      v29 = (const std::wstring *)v29->_Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "\t\tsession_name = %S\n\t\thandleid = NO HOST!\n", v29->_Mypair._Myval2._Bx._Buf);
  }
  if ( v62.m_errorCode._Myval )
  {
    p_m_errorMessage = &v62.m_errorMessage;
    if ( v62.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v62.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::InviteUsers - InviteUsers failed - %s [%x].", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v62.m_errorCode._Myval);
    v25 = v44._Rep;
    if ( v44._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v44._Rep->_Uses) )
      {
        v25->_Destroy(v25);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v25->_Weaks) )
          v25->_Delete_this(v25);
      }
    }
    v26 = v43._Rep;
    if ( v43._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v43._Rep->_Uses) )
      {
        v26->_Destroy(v26);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->_Weaks, 0xFFFFFFFF) == 1 )
          v26->_Delete_this(v26);
      }
    }
    if ( v62.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v27 = v62.m_errorMessage._Mypair._Myval2._Myres + 1;
      v28 = v62.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v62.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v27 = v62.m_errorMessage._Mypair._Myval2._Myres + 40;
        v28 = (char *)*((_QWORD *)v62.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v62.m_errorMessage._Mypair._Myval2._Bx._Ptr - v28 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v28, v27);
    }
    *(_OWORD *)&v62.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v62.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( contextStringId._Mypair._Myval2._Myres >= 8 )
    {
      v30 = 2 * contextStringId._Mypair._Myval2._Myres + 2;
      v31 = contextStringId._Mypair._Myval2._Bx._Ptr;
      if ( v30 >= 0x1000 )
      {
        v30 = 2 * contextStringId._Mypair._Myval2._Myres + 41;
        v31 = (wchar_t *)*((_QWORD *)contextStringId._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)contextStringId._Mypair._Myval2._Bx._Ptr - (char *)v31 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v31, v30);
    }
    *(_OWORD *)&contextStringId._Mypair._Myval2._Mysize = _xmm;
    contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( customActivationContext._Mypair._Myval2._Myres >= 8 )
    {
      v32 = 2 * customActivationContext._Mypair._Myval2._Myres + 2;
      v33 = customActivationContext._Mypair._Myval2._Bx._Ptr;
      if ( v32 >= 0x1000 )
      {
        v32 = 2 * customActivationContext._Mypair._Myval2._Myres + 41;
        v33 = (wchar_t *)*((_QWORD *)customActivationContext._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)customActivationContext._Mypair._Myval2._Bx._Ptr - (char *)v33 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v33, v32);
    }
    *(_OWORD *)&customActivationContext._Mypair._Myval2._Mysize = _xmm;
    customActivationContext._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( UsersXboxLiveContext )
      UsersXboxLiveContext->__abi_Release(UsersXboxLiveContext);
    if ( UserFromControllerIndex )
      UserFromControllerIndex->__abi_Release(UserFromControllerIndex);
    return 0;
  }
  else
  {
    v35 = v44._Rep;
    if ( v44._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v44._Rep->_Uses) )
      {
        v35->_Destroy(v35);
        if ( !_InterlockedDecrement((volatile signed __int32 *)&v35->_Weaks) )
          v35->_Delete_this(v35);
      }
    }
    v36 = v43._Rep;
    if ( v43._Rep )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v43._Rep->_Uses) )
      {
        v36->_Destroy(v36);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v36->_Weaks, 0xFFFFFFFF) == 1 )
          v36->_Delete_this(v36);
      }
    }
    if ( v62.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v37 = v62.m_errorMessage._Mypair._Myval2._Myres + 1;
      v38 = v62.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v62.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v37 = v62.m_errorMessage._Mypair._Myval2._Myres + 40;
        v38 = (char *)*((_QWORD *)v62.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v62.m_errorMessage._Mypair._Myval2._Bx._Ptr - v38 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v38, v37);
    }
    *(_OWORD *)&v62.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v62.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( contextStringId._Mypair._Myval2._Myres >= 8 )
    {
      v39 = 2 * contextStringId._Mypair._Myval2._Myres + 2;
      v40 = contextStringId._Mypair._Myval2._Bx._Ptr;
      if ( v39 >= 0x1000 )
      {
        v39 = 2 * contextStringId._Mypair._Myval2._Myres + 41;
        v40 = (wchar_t *)*((_QWORD *)contextStringId._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)contextStringId._Mypair._Myval2._Bx._Ptr - (char *)v40 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v40, v39);
    }
    *(_OWORD *)&contextStringId._Mypair._Myval2._Mysize = _xmm;
    contextStringId._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( customActivationContext._Mypair._Myval2._Myres >= 8 )
    {
      v41 = 2 * customActivationContext._Mypair._Myval2._Myres + 2;
      v42 = customActivationContext._Mypair._Myval2._Bx._Ptr;
      if ( v41 >= 0x1000 )
      {
        v41 = 2 * customActivationContext._Mypair._Myval2._Myres + 41;
        v42 = (wchar_t *)*((_QWORD *)customActivationContext._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)customActivationContext._Mypair._Myval2._Bx._Ptr - (char *)v42 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v42, v41);
    }
    *(_OWORD *)&customActivationContext._Mypair._Myval2._Mysize = _xmm;
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
  unsigned __int64 v6; 
  wchar_t *v7; 
  std::_Ref_count_base *Rep; 
  std::string *p_m_errorMessage; 
  unsigned int v10; 
  unsigned __int64 v11; 
  char *v12; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  __int64 v15; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v17; 

  v15 = -2i64;
  v4 = 0;
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1525, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  if ( Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInGameLobbySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1526, ASSERT_TYPE_ASSERT, "(!CheckIfAnyActiveClientsAreInGameLobbySession())", (const char *)&queryFormat, "!CheckIfAnyActiveClientsAreInGameLobbySession()") )
    __debugbreak();
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1527, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  Ptr = result._Ptr;
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  xbox::services::multiplayer::manager::multiplayer_manager::join_game_from_lobby(Ptr, &v17, &sessionTemplateName);
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v6 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v7 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v6 >= 0x1000 )
    {
      v6 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v7 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v7 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v7, v6);
  }
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
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
  if ( v17.m_errorCode._Myval )
  {
    p_m_errorMessage = &v17.m_errorMessage;
    if ( v17.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v17.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinGameLobbySession - join_game failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v17.m_errorCode._Myval);
  }
  else
  {
    v10 = Sys_Milliseconds();
    Com_Printf(25, "Xb3MultiplayerManager::JoinGameLobbySession : joining lobby at time %d\n", v10);
    s_currentSessionTaskParams_0 = taskParams;
    v4 = 1;
  }
  if ( v17.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v11 = v17.m_errorMessage._Mypair._Myval2._Myres + 1;
    v12 = v17.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v17.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v11 = v17.m_errorMessage._Mypair._Myval2._Myres + 40;
      v12 = (char *)*((_QWORD *)v17.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v17.m_errorMessage._Mypair._Myval2._Bx._Ptr - v12 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v12, v11);
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
  HSTRING v10; 
  xbox::services::multiplayer::manager::multiplayer_manager *v11; 
  const wchar_t *StringRawBuffer_0; 
  unsigned __int64 v14; 
  xbox::services::xbox_live_result<void> *v15; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v17; 
  char *v18; 
  unsigned __int64 v19; 
  wchar_t *v20; 
  unsigned __int64 v21; 
  wchar_t *v22; 
  std::_Ref_count_base *v23; 
  std::string *v24; 
  unsigned __int64 v25; 
  char *v26; 
  unsigned __int64 v28; 
  char *v29; 
  __int128 v30; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v32; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v33; 
  std::vector<std::wstring> xboxUserIds; 
  __int64 v35; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v36; 
  __int128 m_errorCode; 
  std::string v38; 
  std::wstring sessionName; 
  std::wstring sessionTemplateName; 
  xbox::services::xbox_live_result<void> v41; 

  v35 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v32);
  v6 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v32._Ptr, &v36)->_Ptr;
  v7 = v36._Rep;
  if ( v36._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v36._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v7->_Destroy(v7);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v7->_Weaks, 0xFFFFFFFF) == 1 )
        v7->_Delete_this(v7);
    }
  }
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
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1501, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
    __debugbreak();
  if ( !Xb3MultiplayerManager::CheckIfAllActiveClientsAreInPrivatePartySession(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1503, ASSERT_TYPE_ASSERT, "(CheckIfAllActiveClientsAreInPrivatePartySession())", (const char *)&queryFormat, "CheckIfAllActiveClientsAreInPrivatePartySession()") )
    __debugbreak();
  LODWORD(m_errorCode) = 0;
  std::_Execute_once(&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag, (int (__stdcall *)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>, &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage);
  *((_QWORD *)&m_errorCode + 1) = &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  *(_OWORD *)&v38._Mypair._Myval2._Mysize = _xmm;
  v38._Mypair._Myval2._Bx._Buf[0] = 0;
  LODWORD(v30) = 0;
  *((_QWORD *)&v30 + 1) = xbox::services::xbox_services_error_code_category();
  _XMM0 = v30;
  m_errorCode = v30;
  v10 = (HSTRING)MPSDIDToPlatformString(&taskParams->m_sessionParams->xb3SessionId);
  WindowsDeleteString_0(NULL);
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v33);
  v11 = v33._Ptr;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&xboxUserIds._Mypair._Myval2._Myfirst = _XMM0;
  xboxUserIds._Mypair._Myval2._Myend = NULL;
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&sessionTemplateName, L"GameSession", 0xBui64);
  StringRawBuffer_0 = WindowsGetStringRawBuffer_0(v10, NULL);
  *(_OWORD *)&sessionName._Mypair._Myval2._Mysize = _xmm;
  sessionName._Mypair._Myval2._Bx._Buf[0] = 0;
  v14 = -1i64;
  do
    ++v14;
  while ( StringRawBuffer_0[v14] );
  std::wstring::assign(&sessionName, StringRawBuffer_0, v14);
  v15 = xbox::services::multiplayer::manager::multiplayer_manager::join_game(v11, &v41, &sessionName, &sessionTemplateName, &xboxUserIds);
  if ( &m_errorCode != (__int128 *)v15 )
  {
    m_errorCode = (__int128)v15->m_errorCode;
    p_m_errorMessage = &v15->m_errorMessage;
    if ( &v38 != &v15->m_errorMessage )
    {
      std::string::_Tidy_deallocate(&v38);
      v38 = *p_m_errorMessage;
      p_m_errorMessage->_Mypair._Myval2._Mysize = 0i64;
      p_m_errorMessage->_Mypair._Myval2._Myres = 15i64;
      p_m_errorMessage->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
  }
  if ( v41.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
  {
    v17 = v41.m_errorMessage._Mypair._Myval2._Myres + 1;
    v18 = v41.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    if ( v41.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v17 = v41.m_errorMessage._Mypair._Myval2._Myres + 40;
      v18 = (char *)*((_QWORD *)v41.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v41.m_errorMessage._Mypair._Myval2._Bx._Ptr - v18 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v18, v17);
  }
  *(_OWORD *)&v41.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
  v41.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( sessionName._Mypair._Myval2._Myres >= 8 )
  {
    v19 = 2 * sessionName._Mypair._Myval2._Myres + 2;
    v20 = sessionName._Mypair._Myval2._Bx._Ptr;
    if ( v19 >= 0x1000 )
    {
      v19 = 2 * sessionName._Mypair._Myval2._Myres + 41;
      v20 = (wchar_t *)*((_QWORD *)sessionName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionName._Mypair._Myval2._Bx._Ptr - (char *)v20 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v20, v19);
  }
  *(_OWORD *)&sessionName._Mypair._Myval2._Mysize = _xmm;
  sessionName._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( sessionTemplateName._Mypair._Myval2._Myres >= 8 )
  {
    v21 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 2;
    v22 = sessionTemplateName._Mypair._Myval2._Bx._Ptr;
    if ( v21 >= 0x1000 )
    {
      v21 = 2 * sessionTemplateName._Mypair._Myval2._Myres + 41;
      v22 = (wchar_t *)*((_QWORD *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)sessionTemplateName._Mypair._Myval2._Bx._Ptr - (char *)v22 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v22, v21);
  }
  *(_OWORD *)&sessionTemplateName._Mypair._Myval2._Mysize = _xmm;
  sessionTemplateName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::vector<std::wstring>::~vector<std::wstring>(&xboxUserIds);
  v23 = v33._Rep;
  if ( v33._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v33._Rep->_Uses) )
    {
      v23->_Destroy(v23);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v23->_Weaks, 0xFFFFFFFF) == 1 )
        v23->_Delete_this(v23);
    }
  }
  if ( (_DWORD)m_errorCode )
  {
    v24 = &v38;
    if ( v38._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)v38._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinGameLobbySession - join_game failed - %s [%x].\n", v24->_Mypair._Myval2._Bx._Buf, (unsigned int)m_errorCode);
    WindowsDeleteString_0(v10);
    if ( v38._Mypair._Myval2._Myres >= 0x10 )
    {
      v25 = v38._Mypair._Myval2._Myres + 1;
      v26 = v38._Mypair._Myval2._Bx._Ptr;
      if ( v38._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v25 = v38._Mypair._Myval2._Myres + 40;
        v26 = (char *)*((_QWORD *)v38._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v38._Mypair._Myval2._Bx._Ptr - v26 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v26, v25);
    }
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    WindowsDeleteString_0(v10);
    if ( v38._Mypair._Myval2._Myres >= 0x10 )
    {
      v28 = v38._Mypair._Myval2._Myres + 1;
      v29 = v38._Mypair._Myval2._Bx._Ptr;
      if ( v38._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v28 = v38._Mypair._Myval2._Myres + 40;
        v29 = (char *)*((_QWORD *)v38._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v38._Mypair._Myval2._Bx._Ptr - v29 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v29, v28);
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
  unsigned __int64 v12; 
  char *v13; 
  char *fmt; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  __int64 v16; 
  Windows::Xbox::System::User *v17; 
  xbox::services::xbox_live_result<void> v18; 
  char _Buffer[256]; 

  v16 = -2i64;
  m_controllerIndex = taskParams->m_controllerIndex;
  if ( s_currentSessionTaskParams_0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1342, ASSERT_TYPE_ASSERT, "(s_currentSessionTaskParams == nullptr)", (const char *)&queryFormat, "s_currentSessionTaskParams == nullptr") )
    __debugbreak();
  CachedXboxUser = Live_GetCachedXboxUser(m_controllerIndex);
  v17 = CachedXboxUser;
  result._Ptr = NULL;
  if ( !CachedXboxUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1345, ASSERT_TYPE_ASSERT, "(user != nullptr)", (const char *)&queryFormat, "user != nullptr", result._Ptr) )
    __debugbreak();
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&result);
  xbox::services::multiplayer::manager::multiplayer_manager::join_lobby(result._Ptr, &v18, args, CachedXboxUser);
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
  if ( v18.m_errorCode._Myval )
  {
    LODWORD(fmt) = v18.m_errorCode._Myval;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %x", m_controllerIndex, fmt);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    p_m_errorMessage = &v18.m_errorMessage;
    if ( v18.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v18.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::JoinPrivatePartySessionUsingInviteHandle failed - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v18.m_errorCode._Myval);
    if ( v18.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v9 = v18.m_errorMessage._Mypair._Myval2._Myres + 1;
      Ptr = v18.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v18.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v9 = v18.m_errorMessage._Mypair._Myval2._Myres + 40;
        Ptr = (char *)*((_QWORD *)v18.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v18.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(Ptr, v9);
    }
    *(_OWORD *)&v18.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v18.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v18.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v12 = v18.m_errorMessage._Mypair._Myval2._Myres + 1;
      v13 = v18.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v18.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v12 = v18.m_errorMessage._Mypair._Myval2._Myres + 40;
        v13 = (char *)*((_QWORD *)v18.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v18.m_errorMessage._Mypair._Myval2._Bx._Ptr - v13 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v13, v12);
    }
    *(_OWORD *)&v18.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v18.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
  unsigned __int64 v18; 
  char *v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v21; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v22; 
  __int64 v23; 
  Windows::Xbox::System::User *v24; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v25; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v26; 
  xbox::services::xbox_live_result<void> v27; 

  v23 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v21);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v21._Ptr, &v25)->_Ptr;
  v8 = v25._Rep;
  if ( v25._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v21._Rep;
  if ( v21._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v21._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  v24 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v22);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v22._Ptr, &v26)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::remove_local_user(v11, &v27, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v12 = v26._Rep;
  if ( v26._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v26._Rep->_Uses) )
    {
      v12->_Destroy(v12);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v12->_Weaks) )
        v12->_Delete_this(v12);
    }
  }
  v13 = v22._Rep;
  if ( v22._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v22._Rep->_Uses) )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v27.m_errorCode._Myval )
  {
    p_m_errorMessage = &v27.m_errorMessage;
    if ( v27.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v27.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::LeavePrivatePartySession - failed to remove local user from lobby - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v27.m_errorCode._Myval);
    if ( v27.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v15 = v27.m_errorMessage._Mypair._Myval2._Myres + 1;
      v16 = v27.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v27.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v15 = v27.m_errorMessage._Mypair._Myval2._Myres + 40;
        v16 = (char *)*((_QWORD *)v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - v16 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v16, v15);
    }
    *(_OWORD *)&v27.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v27.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v27.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v18 = v27.m_errorMessage._Mypair._Myval2._Myres + 1;
      v19 = v27.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v27.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v18 = v27.m_errorMessage._Mypair._Myval2._Myres + 40;
        v19 = (char *)*((_QWORD *)v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v27.m_errorMessage._Mypair._Myval2._Bx._Ptr - v19 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v19, v18);
    }
    *(_OWORD *)&v27.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v27.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
  unsigned __int64 v19; 
  char *v20; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v22; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v23; 
  __int64 v24; 
  Windows::Xbox::System::User *v25; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v26; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v27; 
  xbox::services::xbox_live_result<void> v28; 
  char _Buffer[256]; 

  v24 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v22);
  v7 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v22._Ptr, &v26)->_Ptr;
  v8 = v26._Rep;
  if ( v26._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v8->_Destroy(v8);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v8->_Weaks, 0xFFFFFFFF) == 1 )
        v8->_Delete_this(v8);
    }
  }
  v9 = v22._Rep;
  if ( v22._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  v25 = CachedXboxUser;
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v23);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v23._Ptr, &v27)->_Ptr;
  if ( CachedXboxUser )
    CachedXboxUser->__abi_AddRef(CachedXboxUser);
  xbox::services::multiplayer::manager::multiplayer_lobby_session::remove_local_user(v11, &v28, CachedXboxUser);
  if ( CachedXboxUser )
    CachedXboxUser->__abi_Release(CachedXboxUser);
  v12 = v27._Rep;
  if ( v27._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v27._Rep->_Uses) )
    {
      v12->_Destroy(v12);
      if ( !_InterlockedDecrement((volatile signed __int32 *)&v12->_Weaks) )
        v12->_Delete_this(v12);
    }
  }
  v13 = v23._Rep;
  if ( v23._Rep )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)&v23._Rep->_Uses) )
    {
      v13->_Destroy(v13);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
        v13->_Delete_this(v13);
    }
  }
  if ( v28.m_errorCode._Myval )
  {
    p_m_errorMessage = &v28.m_errorMessage;
    if ( v28.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      p_m_errorMessage = (std::string *)v28.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    j_sprintf_s(_Buffer, 0x100ui64, "%d %s", m_controllerIndex, p_m_errorMessage->_Mypair._Myval2._Bx._Buf);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, MOVEMENT, _Buffer);
    v15 = &v28.m_errorMessage;
    if ( v28.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
      v15 = (std::string *)v28.m_errorMessage._Mypair._Myval2._Bx._Ptr;
    Com_PrintError(25, "Xb3MultiplayerManager::RemoveSplitscreenUserFromPrivatePartySession - failed to remove local user from lobby - %s [%x].\n", v15->_Mypair._Myval2._Bx._Buf, (unsigned int)v28.m_errorCode._Myval);
    if ( v28.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v16 = v28.m_errorMessage._Mypair._Myval2._Myres + 1;
      v17 = v28.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v28.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v16 = v28.m_errorMessage._Mypair._Myval2._Myres + 40;
        v17 = (char *)*((_QWORD *)v28.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v28.m_errorMessage._Mypair._Myval2._Bx._Ptr - v17 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v17, v16);
    }
    *(_OWORD *)&v28.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v28.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    if ( CachedXboxUser )
      CachedXboxUser->__abi_Release(CachedXboxUser);
    return 0;
  }
  else
  {
    s_currentSessionTaskParams_0 = taskParams;
    if ( v28.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v19 = v28.m_errorMessage._Mypair._Myval2._Myres + 1;
      v20 = v28.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v28.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v19 = v28.m_errorMessage._Mypair._Myval2._Myres + 40;
        v20 = (char *)*((_QWORD *)v28.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v28.m_errorMessage._Mypair._Myval2._Bx._Ptr - v20 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v20, v19);
    }
    *(_OWORD *)&v28.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v28.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
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
  xbox::services::multiplayer::manager::multiplayer_event *v16; 
  std::_Ref_count_base *v19; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v20; 
  xbox::services::multiplayer::manager::multiplayer_event *v21; 
  std::_Ref_count_base **p_Rep; 
  unsigned __int64 *p_Myres; 
  void **v24; 
  __m256i *v25; 
  unsigned __int64 v26; 
  _QWORD *v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  volatile signed __int32 *v31; 
  unsigned int v32; 
  const MultiplayerEventHandler *v33; 
  const MultiplayerEventHandler *v34; 
  __int64 v35; 
  xbox::services::multiplayer::manager::multiplayer_session_type v36; 
  std::_Ref_count_base *v37; 
  unsigned __int64 v38; 
  char *Ptr; 
  std::_Ref_count_base *v40; 
  __int64 v41; 
  void (__fastcall *callback)(bool, const std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *, const std::wstring); 
  unsigned __int64 Mysize; 
  std::wstring *p_handleId; 
  unsigned __int64 v45; 
  const dvar_t *v46; 
  char v47; 
  char v48; 
  std::_Ref_count_base *v49; 
  bool v50; 
  std::_Ref_count_base *v51; 
  std::_Ref_count_base *v52; 
  const PartyData *ActiveParty; 
  PartyData *v54; 
  const PartyData *v55; 
  const PartyData *v56; 
  bool v57; 
  std::_Ref_count_base *v58; 
  std::_Ref_count_base *v59; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v61; 
  char *v62; 
  char *fmt; 
  __int64 v64; 
  int v66; 
  xbox::services::multiplayer::manager::multiplayer_event *v67; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> v68; 
  _QWORD v69[3]; 
  unsigned __int64 v70; 
  unsigned __int64 v71; 
  xbox::services::multiplayer::manager::multiplayer_event *v72; 
  xbox::services::multiplayer::manager::multiplayer_event *v73; 
  std::vector<xbox::services::multiplayer::manager::multiplayer_event> *v74; 
  xbox::services::multiplayer::manager::multiplayer_event *v75; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v77; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v78; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v79; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  xbox::services::multiplayer::manager::multiplayer_event *v84; 
  __int64 v85; 
  __int64 v86; 
  __int64 v87; 
  __int64 v88; 
  __int64 v89; 
  unsigned __int64 v90; 
  wchar_t *v91; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v92; 
  tXb3MultiplayerCallback v93; 
  xbox::services::multiplayer::manager::multiplayer_event event; 
  xbox::services::xbox_live_result<void> v95; 

  v81 = -2i64;
  v2 = bUpdateFromSessionFrame;
  v3 = this;
  v69[0] = this;
  v4 = none;
  if ( g_mpManagerEventQueue )
  {
    v66 = Sys_Milliseconds();
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
    xbox::services::multiplayer::manager::multiplayer_manager::do_work(result._Ptr, &v68);
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
    Mylast = v68._Mypair._Myval2._Mylast;
    if ( v68._Mypair._Myval2._Mylast - v68._Mypair._Myval2._Myfirst )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update : returned eventQueue with %u events.\n", v68._Mypair._Myval2._Mylast - v68._Mypair._Myval2._Myfirst);
      Mylast = v68._Mypair._Myval2._Mylast;
    }
    v11 = g_mpManagerEventQueue;
    v12 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast - g_mpManagerEventQueue->_Mypair._Myval2._Myfirst;
    if ( v12 )
    {
      Com_Printf(25, "Xb3MultiplayerManager::Update : still has eventQueue with %u events to process from previous frame.\n", v12);
      Mylast = v68._Mypair._Myval2._Mylast;
      v11 = g_mpManagerEventQueue;
    }
    Myfirst = v68._Mypair._Myval2._Myfirst;
    v72 = Mylast;
    if ( v68._Mypair._Myval2._Myfirst != Mylast )
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
        Mylast = v68._Mypair._Myval2._Mylast;
        v72 = v68._Mypair._Myval2._Mylast;
        if ( Myfirst == v68._Mypair._Myval2._Mylast )
          break;
        v11 = g_mpManagerEventQueue;
      }
    }
    for ( j = v68._Mypair._Myval2._Myfirst; j != Mylast; ++j )
      xbox::services::multiplayer::manager::multiplayer_event::~multiplayer_event(j);
    v68._Mypair._Myval2._Mylast = v68._Mypair._Myval2._Myfirst;
    std::vector<xbox::services::multiplayer::manager::multiplayer_event>::~vector<xbox::services::multiplayer::manager::multiplayer_event>(&v68);
    v15 = g_mpManagerEventQueue;
    v16 = g_mpManagerEventQueue->_Mypair._Myval2._Myfirst;
    v67 = v16;
    v75 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
    if ( v16 != v75 )
    {
      while ( 1 )
      {
        event.m_pContext = v16->m_pContext;
        _XMM0 = v16->m_errorCode;
        event.m_errorCode = _XMM0;
        std::string::string(&event.m_errorMessage, &v16->m_errorMessage);
        event.m_eventType = v16->m_eventType;
        event.m_sessionType = v16->m_sessionType;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        event.m_eventArgs = _XMM0;
        v19 = v16->m_eventArgs._Rep;
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)&v19->_Uses);
        event.m_eventArgs = v16->m_eventArgs;
        v20 = g_mpManagerEventQueue;
        v74 = g_mpManagerEventQueue;
        v73 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
        v21 = v16;
        if ( &v16[1] != v73 )
        {
          p_Rep = &v16[1].m_eventArgs._Rep;
          p_Myres = &v16->m_errorMessage._Mypair._Myval2._Myres;
          do
          {
            v21->m_pContext = *(p_Rep - 9);
            *(_OWORD *)(p_Myres - 5) = *((_OWORD *)p_Rep - 4);
            v24 = (void **)(p_Myres - 3);
            v25 = (__m256i *)(p_Rep - 6);
            if ( p_Myres - 3 != (unsigned __int64 *)(p_Rep - 6) )
            {
              v26 = *p_Myres;
              if ( *p_Myres >= 0x10 )
              {
                v27 = *v24;
                v28 = v26 + 1;
                if ( v26 + 1 >= 0x1000 )
                {
                  v28 = v26 + 40;
                  if ( (unsigned __int64)v27 - *(v27 - 1) - 8 > 0x1F )
                    _invalid_parameter_noinfo_noreturn();
                  v27 = (_QWORD *)*(v27 - 1);
                }
                operator delete(v27, v28);
              }
              *(p_Myres - 1) = 0i64;
              *p_Myres = 15i64;
              *(_BYTE *)v24 = 0;
              *(__m256i *)v24 = *v25;
              *(p_Rep - 4) = NULL;
              *(p_Rep - 3) = (std::_Ref_count_base *)15;
              v25->m256i_i8[0] = 0;
            }
            *((_DWORD *)p_Myres + 2) = *((_DWORD *)p_Rep - 4);
            *((_DWORD *)p_Myres + 3) = *((_DWORD *)p_Rep - 3);
            v29 = (__int64)*(p_Rep - 1);
            v30 = (__int64)*p_Rep;
            *(p_Rep - 1) = NULL;
            *p_Rep = NULL;
            v82 = v29;
            p_Myres[2] = v29;
            v83 = v30;
            v31 = (volatile signed __int32 *)p_Myres[3];
            p_Myres[3] = v30;
            if ( v31 )
            {
              if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
                if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8i64))(v31);
              }
            }
            ++v21;
            p_Myres += 10;
            p_Rep += 10;
          }
          while ( p_Rep - 9 != (std::_Ref_count_base **)v73 );
          v20 = v74;
          v16 = v67;
          v3 = (Xb3MultiplayerManager *)v69[0];
        }
        xbox::services::multiplayer::manager::multiplayer_event::~multiplayer_event(v20->_Mypair._Myval2._Mylast - 1);
        --v20->_Mypair._Myval2._Mylast;
        v84 = v16;
        v32 = 0;
        v33 = MultiplayerEventHandlers;
        while ( xbox::services::multiplayer::manager::multiplayer_event::event_type(&event) != v33->eventType )
        {
          ++v32;
          ++v33;
          if ( v32 >= 0x12 )
          {
            LODWORD(v64) = xbox::services::multiplayer::manager::multiplayer_event::event_type(&event);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 769, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::GetMultiplayerEventHandler: Unknown multiplayer manager event of type: %u.\n", v64) )
              __debugbreak();
            goto LABEL_54;
          }
        }
        v34 = &MultiplayerEventHandlers[v32];
        if ( v34 )
        {
          if ( xbox::services::multiplayer::manager::multiplayer_event::session_type(&event) == pending_subscribe )
          {
            v35 = 0i64;
          }
          else
          {
            v36 = xbox::services::multiplayer::manager::multiplayer_event::session_type(&event);
            v35 = 2i64;
            if ( v36 == subscribed )
              v35 = 1i64;
          }
          Com_Printf(25, "Xb3MultiplayerManager::Update : Processing event of type: %s, for sessionType: %i\n", v34->eventString, v35);
        }
LABEL_54:
        Xb3MultiplayerManager::ProcessMultiplayerEvent(v3, &event);
        if ( g_eventDumpRemainingEvents )
          break;
        v37 = event.m_eventArgs._Rep;
        if ( event.m_eventArgs._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&event.m_eventArgs._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v37->_Destroy(v37);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v37->_Weaks, 0xFFFFFFFF) == 1 )
              v37->_Delete_this(v37);
          }
        }
        if ( event.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
        {
          v38 = event.m_errorMessage._Mypair._Myval2._Myres + 1;
          Ptr = event.m_errorMessage._Mypair._Myval2._Bx._Ptr;
          if ( event.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
          {
            v38 = event.m_errorMessage._Mypair._Myval2._Myres + 40;
            Ptr = (char *)*((_QWORD *)event.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)(event.m_errorMessage._Mypair._Myval2._Bx._Ptr - Ptr - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(Ptr, v38);
        }
        v15 = g_mpManagerEventQueue;
        v75 = g_mpManagerEventQueue->_Mypair._Myval2._Mylast;
        if ( v16 == v75 )
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
        v93.callback = v3->m_callbackInfo.callback;
        v93.mp_session._Ptr = NULL;
        v93.mp_session._Rep = NULL;
        v40 = v3->m_callbackInfo.mp_session._Rep;
        if ( v40 )
        {
          _InterlockedIncrement((volatile signed __int32 *)&v40->_Uses);
          v40 = v3->m_callbackInfo.mp_session._Rep;
        }
        v93.mp_session._Ptr = v3->m_callbackInfo.mp_session._Ptr;
        v93.mp_session._Rep = v40;
        std::wstring::wstring(&v93.handleId, &v3->m_callbackInfo.handleId);
        v93.state = v3->m_callbackInfo.state;
        v3->m_callbackInfo.callback = NULL;
        v3->m_callbackInfo.state = eIDLE;
        callback = v93.callback;
        v70 = 0i64;
        v71 = 0i64;
        Mysize = v93.handleId._Mypair._Myval2._Mysize;
        p_handleId = &v93.handleId;
        if ( v93.handleId._Mypair._Myval2._Myres >= 8 )
          p_handleId = (std::wstring *)v93.handleId._Mypair._Myval2._Bx._Ptr;
        if ( v93.handleId._Mypair._Myval2._Mysize >= 8 )
        {
          v85 = 0x7FFFFFFFFFFFFFFFi64;
          v86 = 8i64;
          v87 = 0x7FFFFFFFFFFFFFFEi64;
          v88 = 0x7FFFFFFFFFFFFFFFi64;
          v89 = 0x7FFFFFFFFFFFFFFEi64;
          v45 = v93.handleId._Mypair._Myval2._Mysize | 7;
          v90 = v93.handleId._Mypair._Myval2._Mysize | 7;
          if ( (v93.handleId._Mypair._Myval2._Mysize | 7) > 0x7FFFFFFFFFFFFFFEi64 )
            v45 = 0x7FFFFFFFFFFFFFFEi64;
          v91 = std::allocator<wchar_t>::allocate((std::allocator<wchar_t> *)&v69[1], v45 + 1);
          v69[1] = v91;
          memcpy_0(v91, p_handleId, 2 * Mysize + 2);
          v71 = v45;
        }
        else
        {
          *(std::_String_val<std::_Simple_types<wchar_t> >::_Bxty *)&v69[1] = p_handleId->_Mypair._Myval2._Bx;
          v71 = 7i64;
        }
        v70 = Mysize;
        LOBYTE(v41) = v93.state == eADDING_LOCAL_PLAYER_TO_DW;
        ((void (__fastcall *)(__int64, std::shared_ptr<xbox::services::multiplayer::multiplayer_session> *, _QWORD *))callback)(v41, &v93.mp_session, &v69[1]);
        tXb3MultiplayerCallback::~tXb3MultiplayerCallback(&v93);
        v3 = (Xb3MultiplayerManager *)v69[0];
      }
    }
    if ( v2 )
    {
      if ( s_nextJoinabilityCalltime >= v66 )
        goto LABEL_92;
      v46 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v46);
      if ( v46->current.enabled )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v77);
        v47 = 25;
        if ( v77._Ptr )
        {
          v48 = 1;
          goto LABEL_94;
        }
      }
      else
      {
LABEL_92:
        v47 = 8;
      }
      v48 = 0;
LABEL_94:
      if ( (v47 & 1) != 0 )
      {
        v49 = v77._Rep;
        if ( v77._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v77._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v49->_Destroy(v49);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v49->_Weaks, 0xFFFFFFFF) == 1 )
              v49->_Delete_this(v49);
          }
        }
      }
      if ( v48 )
      {
        xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v78);
        v50 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v78._Ptr, &v92)->_Ptr && g_partyData.inParty && Party_AreWePlatformSessionHost(&g_partyData) && Xb3MultiplayerManager::CheckIfAnyActiveClientsAreInPrivatePartySession(v3);
        v51 = v92._Rep;
        if ( v92._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v92._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v51->_Destroy(v51);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v51->_Weaks, 0xFFFFFFFF) == 1 )
              v51->_Delete_this(v51);
          }
        }
        v52 = v78._Rep;
        if ( v78._Rep )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v78._Rep->_Uses, 0xFFFFFFFF) == 1 )
          {
            v52->_Destroy(v52);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v52->_Weaks, 0xFFFFFFFF) == 1 )
              v52->_Delete_this(v52);
          }
        }
        if ( v50 )
        {
          ActiveParty = Party_GetActiveParty();
          if ( Party_ShouldCurrentSessionBeClosed(ActiveParty) )
          {
            v4 = 4;
          }
          else
          {
            v54 = Party_GetActiveParty();
            if ( Live_ShouldPlatformSessionBeInviteOnly(v54) || (v55 = Party_GetActiveParty(), Party_IsInviteOnly(v55)) )
            {
              v4 = server;
            }
            else
            {
              v56 = Party_GetActiveParty();
              if ( Party_GetPrivacySetting(v56) == PRIVATE )
                v4 = arbitration;
            }
          }
          xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v79);
          v57 = v4 != xbox::services::multiplayer::manager::multiplayer_manager::joinability(v79._Ptr);
          v58 = v79._Rep;
          if ( v79._Rep )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v79._Rep->_Uses, 0xFFFFFFFF) == 1 )
            {
              v58->_Destroy(v58);
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v58->_Weaks, 0xFFFFFFFF) == 1 )
                v58->_Delete_this(v58);
            }
          }
          if ( v57 )
          {
            Com_Printf(25, "Xb3MultiplayerManager::Update calling set_joinability at time %d\n", (unsigned int)v66);
            xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v80);
            xbox::services::multiplayer::manager::multiplayer_manager::set_joinability(v80._Ptr, &v95, v4, NULL);
            v59 = v80._Rep;
            if ( v80._Rep )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v80._Rep->_Uses, 0xFFFFFFFF) == 1 )
              {
                v59->_Destroy(v59);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v59->_Weaks, 0xFFFFFFFF) == 1 )
                  v59->_Delete_this(v59);
              }
            }
            if ( v95.m_errorCode._Myval )
            {
              s_nextJoinabilityCalltime = xb3_mp_joinability_failure_backoff->current.integer + Sys_Milliseconds();
              p_m_errorMessage = &v95.m_errorMessage;
              if ( v95.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
                p_m_errorMessage = (std::string *)v95.m_errorMessage._Mypair._Myval2._Bx._Ptr;
              Com_PrintError(25, "Xb3MultiplayerManager::Update - failed to set_joinability - %s [%x].\n", p_m_errorMessage->_Mypair._Myval2._Bx._Buf, (unsigned int)v95.m_errorCode._Myval);
            }
            else
            {
              s_nextJoinabilityCalltime = xb3_mp_joinability_success_backoff->current.integer + Sys_Milliseconds();
            }
            if ( v95.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
            {
              v61 = v95.m_errorMessage._Mypair._Myval2._Myres + 1;
              v62 = v95.m_errorMessage._Mypair._Myval2._Bx._Ptr;
              if ( v95.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
              {
                v61 = v95.m_errorMessage._Mypair._Myval2._Myres + 40;
                v62 = (char *)*((_QWORD *)v95.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
                if ( (unsigned __int64)(v95.m_errorMessage._Mypair._Myval2._Bx._Ptr - v62 - 8) > 0x1F )
                  _invalid_parameter_noinfo_noreturn();
              }
              operator delete(v62, v61);
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
  bool v15; 
  unsigned __int64 v16; 
  wchar_t *v17; 
  bool v18; 
  bool v19; 
  unsigned __int64 v20; 
  wchar_t *v21; 
  unsigned int ProtocolVersion; 
  wchar_t *v23; 
  bool v24; 
  unsigned __int64 v25; 
  wchar_t *v26; 
  bool v27; 
  unsigned __int64 v28; 
  wchar_t *v29; 
  unsigned __int64 v30; 
  wchar_t *v31; 
  unsigned __int64 v32; 
  wchar_t *v33; 
  unsigned __int64 v34; 
  wchar_t *v35; 
  unsigned __int64 v36; 
  wchar_t *v37; 
  std::input_iterator_tag v39; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v41; 
  __int64 v42; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v43; 
  std::wstring v44; 
  std::wstring value; 
  std::wstring propertyName; 
  std::wstring v47; 
  std::wstring v48; 
  std::wstring v49; 
  std::wstring v50; 
  std::wstring v51; 
  char v52[6]; 
  char dest[1376]; 
  unsigned __int8 buffer[1024]; 

  v42 = -2i64;
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
  xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v41);
  v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v41._Ptr, &v43)->_Ptr;
  v12 = v43._Rep;
  if ( v43._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43._Rep->_Uses, 0xFFFFFFFF) == 1 )
    {
      v12->_Destroy(v12);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v12->_Weaks, 0xFFFFFFFF) == 1 )
        v12->_Delete_this(v12);
    }
  }
  v13 = v41._Rep;
  if ( v41._Rep )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v41._Rep->_Uses, 0xFFFFFFFF) == 1 )
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
  *(_OWORD *)&value._Mypair._Myval2._Mysize = _xmm;
  value._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::reserve(&value, v9);
  std::wstring::_Construct<char *>(&value, dest, &dest[v9], v39);
  *(_OWORD *)&propertyName._Mypair._Myval2._Mysize = _xmm;
  propertyName._Mypair._Myval2._Bx._Buf[0] = 0;
  std::wstring::assign(&propertyName, L"join_info", 9ui64);
  v15 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &propertyName, &value);
  if ( propertyName._Mypair._Myval2._Myres >= 8 )
  {
    v16 = 2 * propertyName._Mypair._Myval2._Myres + 2;
    v17 = propertyName._Mypair._Myval2._Bx._Ptr;
    if ( v16 >= 0x1000 )
    {
      v16 = 2 * propertyName._Mypair._Myval2._Myres + 41;
      v17 = (wchar_t *)*((_QWORD *)propertyName._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)propertyName._Mypair._Myval2._Bx._Ptr - (char *)v17 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v17, v16);
  }
  if ( v15 )
  {
    v18 = 0;
  }
  else
  {
    std::to_wstring(&v51, maxSlots);
    *(_OWORD *)&v47._Mypair._Myval2._Mysize = _xmm;
    v47._Mypair._Myval2._Bx._Buf[0] = 0;
    std::wstring::assign(&v47, L"max_players", 0xBui64);
    v19 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v47, &v51);
    if ( v47._Mypair._Myval2._Myres >= 8 )
    {
      v20 = 2 * v47._Mypair._Myval2._Myres + 2;
      v21 = v47._Mypair._Myval2._Bx._Ptr;
      if ( v20 >= 0x1000 )
      {
        v20 = 2 * v47._Mypair._Myval2._Myres + 41;
        v21 = (wchar_t *)*((_QWORD *)v47._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v47._Mypair._Myval2._Bx._Ptr - (char *)v21 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v21, v20);
    }
    if ( v19 )
    {
      v18 = 0;
    }
    else
    {
      ProtocolVersion = GetProtocolVersion();
      v23 = (wchar_t *)v52;
      do
      {
        *--v23 = ProtocolVersion % 0xA + 48;
        ProtocolVersion /= 0xAu;
      }
      while ( ProtocolVersion );
      *(_OWORD *)&v44._Mypair._Myval2._Mysize = _xmm;
      v44._Mypair._Myval2._Bx._Buf[0] = 0;
      if ( v23 != (wchar_t *)v52 )
        std::wstring::assign(&v44, v23, (v52 - (char *)v23) >> 1);
      *(_OWORD *)&v48._Mypair._Myval2._Mysize = _xmm;
      v48._Mypair._Myval2._Bx._Buf[0] = 0;
      std::wstring::assign(&v48, L"netcode_version", 0xFui64);
      v24 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v48, &v44);
      if ( v48._Mypair._Myval2._Myres >= 8 )
      {
        v25 = 2 * v48._Mypair._Myval2._Myres + 2;
        v26 = v48._Mypair._Myval2._Bx._Ptr;
        if ( v25 >= 0x1000 )
        {
          v25 = 2 * v48._Mypair._Myval2._Myres + 41;
          v26 = (wchar_t *)*((_QWORD *)v48._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)v48._Mypair._Myval2._Bx._Ptr - (char *)v26 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v26, v25);
      }
      if ( v24 )
      {
        v18 = 0;
      }
      else
      {
        std::to_wstring(&v50, maxSlots);
        *(_OWORD *)&v49._Mypair._Myval2._Mysize = _xmm;
        v49._Mypair._Myval2._Bx._Buf[0] = 0;
        std::wstring::assign(&v49, L"public_slots", 0xCui64);
        v27 = !Xb3MultiplayerManager::WriteCustomSessionProperty(this, sessionType, &v49, &v50);
        if ( v49._Mypair._Myval2._Myres >= 8 )
        {
          v28 = 2 * v49._Mypair._Myval2._Myres + 2;
          v29 = v49._Mypair._Myval2._Bx._Ptr;
          if ( v28 >= 0x1000 )
          {
            v28 = 2 * v49._Mypair._Myval2._Myres + 41;
            v29 = (wchar_t *)*((_QWORD *)v49._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)((char *)v49._Mypair._Myval2._Bx._Ptr - (char *)v29 - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(v29, v28);
        }
        v18 = !v27;
        if ( v50._Mypair._Myval2._Myres >= 8 )
        {
          v30 = 2 * v50._Mypair._Myval2._Myres + 2;
          v31 = v50._Mypair._Myval2._Bx._Ptr;
          if ( v30 >= 0x1000 )
          {
            v30 = 2 * v50._Mypair._Myval2._Myres + 41;
            v31 = (wchar_t *)*((_QWORD *)v50._Mypair._Myval2._Bx._Ptr - 1);
            if ( (unsigned __int64)((char *)v50._Mypair._Myval2._Bx._Ptr - (char *)v31 - 8) > 0x1F )
              _invalid_parameter_noinfo_noreturn();
          }
          operator delete(v31, v30);
        }
        *(_OWORD *)&v50._Mypair._Myval2._Mysize = _xmm;
        v50._Mypair._Myval2._Bx._Buf[0] = 0;
      }
      if ( v44._Mypair._Myval2._Myres >= 8 )
      {
        v32 = 2 * v44._Mypair._Myval2._Myres + 2;
        v33 = v44._Mypair._Myval2._Bx._Ptr;
        if ( v32 >= 0x1000 )
        {
          v32 = 2 * v44._Mypair._Myval2._Myres + 41;
          v33 = (wchar_t *)*((_QWORD *)v44._Mypair._Myval2._Bx._Ptr - 1);
          if ( (unsigned __int64)((char *)v44._Mypair._Myval2._Bx._Ptr - (char *)v33 - 8) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        operator delete(v33, v32);
      }
      *(_OWORD *)&v44._Mypair._Myval2._Mysize = _xmm;
      v44._Mypair._Myval2._Bx._Buf[0] = 0;
    }
    if ( v51._Mypair._Myval2._Myres >= 8 )
    {
      v34 = 2 * v51._Mypair._Myval2._Myres + 2;
      v35 = v51._Mypair._Myval2._Bx._Ptr;
      if ( v34 >= 0x1000 )
      {
        v34 = 2 * v51._Mypair._Myval2._Myres + 41;
        v35 = (wchar_t *)*((_QWORD *)v51._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)((char *)v51._Mypair._Myval2._Bx._Ptr - (char *)v35 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v35, v34);
    }
    *(_OWORD *)&v51._Mypair._Myval2._Mysize = _xmm;
    v51._Mypair._Myval2._Bx._Buf[0] = 0;
  }
  if ( value._Mypair._Myval2._Myres >= 8 )
  {
    v36 = 2 * value._Mypair._Myval2._Myres + 2;
    v37 = value._Mypair._Myval2._Bx._Ptr;
    if ( v36 >= 0x1000 )
    {
      v36 = 2 * value._Mypair._Myval2._Myres + 41;
      v37 = (wchar_t *)*((_QWORD *)value._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)((char *)value._Mypair._Myval2._Bx._Ptr - (char *)v37 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v37, v36);
  }
  return v18;
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
  std::_Ref_count_base *v8; 
  xbox::services::multiplayer::manager::multiplayer_manager *Ptr; 
  std::_Ref_count_base *Rep; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v11; 
  std::_Ref_count_base *v12; 
  std::_Ref_count_base *v13; 
  char v14; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v15; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v16; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v17; 
  const std::wstring *v18; 
  const wchar_t *v19; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v20; 
  xbox::services::multiplayer::multiplayer_session_reference *v21; 
  const std::wstring *v22; 
  const std::wstring *v23; 
  std::_Ref_count_base *v24; 
  std::_Ref_count_base *v25; 
  std::_Ref_count_base *v26; 
  std::_Ref_count_base *v27; 
  std::_Ref_count_base *v28; 
  std::_Ref_count_base *v29; 
  std::_Ref_count_base *v30; 
  std::_Ref_count_base *v31; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> *v32; 
  xbox::services::xbox_live_result<void> *v33; 
  std::string *p_m_errorMessage; 
  unsigned __int64 v35; 
  char *v36; 
  std::_Ref_count_base *v37; 
  std::_Ref_count_base *v38; 
  xbox::services::multiplayer::manager::multiplayer_lobby_session *v39; 
  std::_Ref_count_base *v40; 
  std::_Ref_count_base *v41; 
  xbox::services::multiplayer::manager::multiplayer_game_session *v42; 
  std::_Ref_count_base *v43; 
  std::_Ref_count_base *v44; 
  char v45; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v46; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v47; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> *v48; 
  const std::wstring *v49; 
  const wchar_t *v50; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v51; 
  xbox::services::multiplayer::multiplayer_session_reference *v52; 
  const std::wstring *v53; 
  const std::wstring *v54; 
  std::_Ref_count_base *v55; 
  std::_Ref_count_base *v56; 
  std::_Ref_count_base *v57; 
  std::_Ref_count_base *v58; 
  std::_Ref_count_base *v59; 
  std::_Ref_count_base *v60; 
  std::_Ref_count_base *v61; 
  std::_Ref_count_base *v62; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> *v63; 
  xbox::services::xbox_live_result<void> *v64; 
  std::string *v65; 
  unsigned __int64 v66; 
  char *v67; 
  std::_Ref_count_base *v68; 
  std::string *v69; 
  unsigned __int8 v70; 
  unsigned __int64 v71; 
  char *v72; 
  char v74; 
  char v75; 
  web::json::value valueJson; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> result; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v78; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v79; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v80; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v81; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v82; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v83; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v84; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v85; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v86; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v87; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> v88; 
  __int64 v89; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v90; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v91; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v92; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v93; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v94; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v95; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v96; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_lobby_session> v97; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v98; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v99; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v100; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v101; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_member> v102; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v103; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_game_session> v104; 
  std::wstring v105; 
  std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> m_errorCode; 
  std::string v107; 
  xbox::services::xbox_live_result<void> v108; 
  xbox::services::xbox_live_result<void> v109; 

  v89 = -2i64;
  v4 = value;
  std::wstring::wstring(&v105, value);
  web::json::value::value(&valueJson, v7);
  LODWORD(m_errorCode._Ptr) = 0;
  std::_Execute_once(&`std::_Immortalize<std::_System_error_category>'::`2'::_Flag, (int (__stdcall *)(void *, void *, void **))std::_Immortalize_impl<std::_System_error_category>, &`std::_Immortalize<std::_System_error_category>'::`2'::_Storage);
  m_errorCode._Rep = (std::_Ref_count_base *)&`std::_Immortalize<std::_System_error_category>'::`2'::_Storage;
  *(_OWORD *)&v107._Mypair._Myval2._Mysize = _xmm;
  v107._Mypair._Myval2._Bx._Buf[0] = 0;
  v8 = (std::_Ref_count_base *)xbox::services::xbox_services_error_code_category();
  LODWORD(result._Ptr) = 0;
  result._Rep = v8;
  m_errorCode = result;
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
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v79);
    v11 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v79._Ptr, &v90)->_Ptr;
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
    v13 = v79._Rep;
    if ( v79._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v79._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v13->_Destroy(v13);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v13->_Weaks, 0xFFFFFFFF) == 1 )
          v13->_Delete_this(v13);
      }
    }
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1741, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v82);
    v14 = -64;
    v15 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v82._Ptr, &v95);
    if ( xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v15->_Ptr, &v94)->_Ptr )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v81);
      v16 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v81._Ptr, &v93);
      v17 = xbox::services::multiplayer::manager::multiplayer_lobby_session::host(v16->_Ptr, &v92);
      v14 = -57;
      v18 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v17->_Ptr);
      v19 = (const wchar_t *)v18;
      if ( v18->_Mypair._Myval2._Myres >= 8 )
        v19 = v18->_Mypair._Myval2._Bx._Ptr;
    }
    else
    {
      v19 = L"NO HOST";
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v80);
    v74 = v14;
    v20 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v80._Ptr, &v91);
    v21 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_lobby_session::session_reference(v20->_Ptr);
    v22 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v21);
    if ( v22->_Mypair._Myval2._Myres >= 8 )
      v22 = (const std::wstring *)v22->_Mypair._Myval2._Bx._Ptr;
    if ( v4->_Mypair._Myval2._Myres >= 8 )
      v4 = (const std::wstring *)v4->_Mypair._Myval2._Bx._Ptr;
    v23 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v23 = (const std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - writing %S with value = %S (session_name = %S host = %S)\n", v23->_Mypair._Myval2._Bx._Buf, v4->_Mypair._Myval2._Bx._Buf, v22->_Mypair._Myval2._Bx._Buf, v19);
    v24 = v91._Rep;
    if ( v91._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v91._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v24->_Destroy(v24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v24->_Weaks, 0xFFFFFFFF) == 1 )
          v24->_Delete_this(v24);
      }
    }
    v25 = v80._Rep;
    if ( v80._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v80._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v25->_Destroy(v25);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v25->_Weaks, 0xFFFFFFFF) == 1 )
          v25->_Delete_this(v25);
      }
    }
    if ( (v14 & 4) != 0 )
    {
      v74 = v14 & 0xFB;
      v26 = v92._Rep;
      if ( v92._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v92._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v26->_Destroy(v26);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v26->_Weaks, 0xFFFFFFFF) == 1 )
            v26->_Delete_this(v26);
        }
      }
    }
    if ( (v74 & 2) != 0 )
    {
      v74 &= ~2u;
      v27 = v93._Rep;
      if ( v93._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v93._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v27->_Destroy(v27);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v27->_Weaks, 0xFFFFFFFF) == 1 )
            v27->_Delete_this(v27);
        }
      }
    }
    if ( (v74 & 1) != 0 )
    {
      v28 = v81._Rep;
      if ( v81._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v81._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v28->_Destroy(v28);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v28->_Weaks, 0xFFFFFFFF) == 1 )
            v28->_Delete_this(v28);
        }
      }
    }
    v29 = v94._Rep;
    if ( v94._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v94._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v29->_Destroy(v29);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29->_Weaks, 0xFFFFFFFF) == 1 )
          v29->_Delete_this(v29);
      }
    }
    v30 = v95._Rep;
    if ( v95._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v95._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v30->_Destroy(v30);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v30->_Weaks, 0xFFFFFFFF) == 1 )
          v30->_Delete_this(v30);
      }
    }
    v31 = v82._Rep;
    if ( v82._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v82._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v31->_Destroy(v31);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v31->_Weaks, 0xFFFFFFFF) == 1 )
          v31->_Delete_this(v31);
      }
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v83);
    v32 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v83._Ptr, &v96);
    v33 = xbox::services::multiplayer::manager::multiplayer_lobby_session::set_properties(v32->_Ptr, &v108, propertyName, &valueJson, NULL);
    if ( &m_errorCode != (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *)v33 )
    {
      m_errorCode = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager>)v33->m_errorCode;
      p_m_errorMessage = &v33->m_errorMessage;
      if ( &v107 != &v33->m_errorMessage )
      {
        std::string::_Tidy_deallocate(&v107);
        v107 = *p_m_errorMessage;
        p_m_errorMessage->_Mypair._Myval2._Mysize = 0i64;
        p_m_errorMessage->_Mypair._Myval2._Myres = 15i64;
        p_m_errorMessage->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
    }
    if ( v108.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v35 = v108.m_errorMessage._Mypair._Myval2._Myres + 1;
      v36 = v108.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v108.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v35 = v108.m_errorMessage._Mypair._Myval2._Myres + 40;
        v36 = (char *)*((_QWORD *)v108.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v108.m_errorMessage._Mypair._Myval2._Bx._Ptr - v36 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v36, v35);
    }
    *(_OWORD *)&v108.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v108.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    v37 = v96._Rep;
    if ( v96._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v96._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v37->_Destroy(v37);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v37->_Weaks, 0xFFFFFFFF) == 1 )
          v37->_Delete_this(v37);
      }
    }
    v38 = v83._Rep;
LABEL_159:
    if ( v38 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v38->_Uses, 0xFFFFFFFF) == 1 )
      {
        v38->_Destroy(v38);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v38->_Weaks, 0xFFFFFFFF) == 1 )
          v38->_Delete_this(v38);
      }
    }
    goto LABEL_165;
  }
  if ( sessionType == GAME_LOBBY_SESSION )
  {
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v84);
    v39 = xbox::services::multiplayer::manager::multiplayer_manager::lobby_session(v84._Ptr, &v97)->_Ptr;
    v40 = v97._Rep;
    if ( v97._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v97._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v40->_Destroy(v40);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v40->_Weaks, 0xFFFFFFFF) == 1 )
          v40->_Delete_this(v40);
      }
    }
    v41 = v84._Rep;
    if ( v84._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v84._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v41->_Destroy(v41);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v41->_Weaks, 0xFFFFFFFF) == 1 )
          v41->_Delete_this(v41);
      }
    }
    if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1751, ASSERT_TYPE_ASSERT, "(mpManager()->lobby_session())", (const char *)&queryFormat, "mpManager()->lobby_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v85);
    v42 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v85._Ptr, &v98)->_Ptr;
    v43 = v98._Rep;
    if ( v98._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v98._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v43->_Destroy(v43);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v43->_Weaks, 0xFFFFFFFF) == 1 )
          v43->_Delete_this(v43);
      }
    }
    v44 = v85._Rep;
    if ( v85._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v85._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v44->_Destroy(v44);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v44->_Weaks, 0xFFFFFFFF) == 1 )
          v44->_Delete_this(v44);
      }
    }
    if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1752, ASSERT_TYPE_ASSERT, "(mpManager()->game_session())", (const char *)&queryFormat, "mpManager()->game_session()") )
      __debugbreak();
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v88);
    v45 = 64;
    v46 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v88._Ptr, &v103);
    if ( xbox::services::multiplayer::manager::multiplayer_game_session::host(v46->_Ptr, &v102)->_Ptr )
    {
      xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v87);
      v47 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v87._Ptr, &v101);
      v48 = xbox::services::multiplayer::manager::multiplayer_game_session::host(v47->_Ptr, &v100);
      v45 = 120;
      v49 = xbox::services::multiplayer::manager::multiplayer_member::xbox_user_id(v48->_Ptr);
      v50 = (const wchar_t *)v49;
      if ( v49->_Mypair._Myval2._Myres >= 8 )
        v50 = v49->_Mypair._Myval2._Bx._Ptr;
    }
    else
    {
      v50 = L"NO HOST";
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v86);
    v75 = v45;
    v51 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v86._Ptr, &v99);
    v52 = (xbox::services::multiplayer::multiplayer_session_reference *)xbox::services::multiplayer::manager::multiplayer_game_session::session_reference(v51->_Ptr);
    v53 = xbox::services::multiplayer::multiplayer_session_reference::session_name(v52);
    if ( v53->_Mypair._Myval2._Myres >= 8 )
      v53 = (const std::wstring *)v53->_Mypair._Myval2._Bx._Ptr;
    if ( v4->_Mypair._Myval2._Myres >= 8 )
      v4 = (const std::wstring *)v4->_Mypair._Myval2._Bx._Ptr;
    v54 = propertyName;
    if ( propertyName->_Mypair._Myval2._Myres >= 8 )
      v54 = (const std::wstring *)propertyName->_Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - writing %S with value = %S (session_name = %S host = %S)\n", v54->_Mypair._Myval2._Bx._Buf, v4->_Mypair._Myval2._Bx._Buf, v53->_Mypair._Myval2._Bx._Buf, v50);
    v55 = v99._Rep;
    if ( v99._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v99._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v55->_Destroy(v55);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v55->_Weaks, 0xFFFFFFFF) == 1 )
          v55->_Delete_this(v55);
      }
    }
    v56 = v86._Rep;
    if ( v86._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v86._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v56->_Destroy(v56);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v56->_Weaks, 0xFFFFFFFF) == 1 )
          v56->_Delete_this(v56);
      }
    }
    if ( (v45 & 0x20) != 0 )
    {
      v75 = v45 & 0xDF;
      v57 = v100._Rep;
      if ( v100._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v100._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v57->_Destroy(v57);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v57->_Weaks, 0xFFFFFFFF) == 1 )
            v57->_Delete_this(v57);
        }
      }
    }
    if ( (v75 & 0x10) != 0 )
    {
      v75 &= ~0x10u;
      v58 = v101._Rep;
      if ( v101._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v101._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v58->_Destroy(v58);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v58->_Weaks, 0xFFFFFFFF) == 1 )
            v58->_Delete_this(v58);
        }
      }
    }
    if ( (v75 & 8) != 0 )
    {
      v59 = v87._Rep;
      if ( v87._Rep )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v87._Rep->_Uses, 0xFFFFFFFF) == 1 )
        {
          v59->_Destroy(v59);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v59->_Weaks, 0xFFFFFFFF) == 1 )
            v59->_Delete_this(v59);
        }
      }
    }
    v60 = v102._Rep;
    if ( v102._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v102._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v60->_Destroy(v60);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v60->_Weaks, 0xFFFFFFFF) == 1 )
          v60->_Delete_this(v60);
      }
    }
    v61 = v103._Rep;
    if ( v103._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v103._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v61->_Destroy(v61);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v61->_Weaks, 0xFFFFFFFF) == 1 )
          v61->_Delete_this(v61);
      }
    }
    v62 = v88._Rep;
    if ( v88._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v88._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v62->_Destroy(v62);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v62->_Weaks, 0xFFFFFFFF) == 1 )
          v62->_Delete_this(v62);
      }
    }
    xbox::services::multiplayer::manager::multiplayer_manager::get_singleton_instance(&v78);
    v63 = xbox::services::multiplayer::manager::multiplayer_manager::game_session(v78._Ptr, &v104);
    v64 = xbox::services::multiplayer::manager::multiplayer_game_session::set_properties(v63->_Ptr, &v109, propertyName, &valueJson, NULL);
    if ( &m_errorCode != (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager> *)v64 )
    {
      m_errorCode = (std::shared_ptr<xbox::services::multiplayer::manager::multiplayer_manager>)v64->m_errorCode;
      v65 = &v64->m_errorMessage;
      if ( &v107 != &v64->m_errorMessage )
      {
        std::string::_Tidy_deallocate(&v107);
        v107 = *v65;
        v65->_Mypair._Myval2._Mysize = 0i64;
        v65->_Mypair._Myval2._Myres = 15i64;
        v65->_Mypair._Myval2._Bx._Buf[0] = 0;
      }
    }
    if ( v109.m_errorMessage._Mypair._Myval2._Myres >= 0x10 )
    {
      v66 = v109.m_errorMessage._Mypair._Myval2._Myres + 1;
      v67 = v109.m_errorMessage._Mypair._Myval2._Bx._Ptr;
      if ( v109.m_errorMessage._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        v66 = v109.m_errorMessage._Mypair._Myval2._Myres + 40;
        v67 = (char *)*((_QWORD *)v109.m_errorMessage._Mypair._Myval2._Bx._Ptr - 1);
        if ( (unsigned __int64)(v109.m_errorMessage._Mypair._Myval2._Bx._Ptr - v67 - 8) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      operator delete(v67, v66);
    }
    *(_OWORD *)&v109.m_errorMessage._Mypair._Myval2._Mysize = _xmm;
    v109.m_errorMessage._Mypair._Myval2._Bx._Buf[0] = 0;
    v68 = v104._Rep;
    if ( v104._Rep )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v104._Rep->_Uses, 0xFFFFFFFF) == 1 )
      {
        v68->_Destroy(v68);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v68->_Weaks, 0xFFFFFFFF) == 1 )
          v68->_Delete_this(v68);
      }
    }
    v38 = v78._Rep;
    goto LABEL_159;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_mpmanager.cpp", 1762, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Xb3MultiplayerManager::WriteCustomSessionProperty, unknown session type") )
    __debugbreak();
LABEL_165:
  if ( LODWORD(m_errorCode._Ptr) )
  {
    v69 = &v107;
    if ( v107._Mypair._Myval2._Myres >= 0x10 )
      v69 = (std::string *)v107._Mypair._Myval2._Bx._Ptr;
    Com_Printf(25, "Xb3MultiplayerManager::WriteCustomSessionProperty - failed with err \"%s\" (%x)\n", v69->_Mypair._Myval2._Bx._Buf, LODWORD(m_errorCode._Ptr));
    v70 = 0;
  }
  else
  {
    v70 = 1;
  }
  if ( v107._Mypair._Myval2._Myres >= 0x10 )
  {
    v71 = v107._Mypair._Myval2._Myres + 1;
    v72 = v107._Mypair._Myval2._Bx._Ptr;
    if ( v107._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      v71 = v107._Mypair._Myval2._Myres + 40;
      v72 = (char *)*((_QWORD *)v107._Mypair._Myval2._Bx._Ptr - 1);
      if ( (unsigned __int64)(v107._Mypair._Myval2._Bx._Ptr - v72 - 8) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    operator delete(v72, v71);
  }
  *(_OWORD *)&v107._Mypair._Myval2._Mysize = _xmm;
  v107._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( valueJson.m_value._Mypair._Myval2 )
    ((void (__fastcall *)(web::json::details::_Value *, __int64))valueJson.m_value._Mypair._Myval2->~_Value)(valueJson.m_value._Mypair._Myval2, 1i64);
  return v70;
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

