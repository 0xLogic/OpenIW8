/*
==============
OnlineGroupsManager::GetApplicationCount
==============
*/

int __fastcall OnlineGroupsManager::GetApplicationCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetApplicationCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::AutoJoin
==============
*/

void __fastcall OnlineGroupsManager::AutoJoin(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId)
{
  ?AutoJoin@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, groupId);
}

/*
==============
OnlineGroupsManager::AcceptInvitations
==============
*/

void __fastcall OnlineGroupsManager::AcceptInvitations(OnlineGroupsManager *this, const int controllerIndex, const int *invitationIndices, int numInvitations)
{
  ?AcceptInvitations@OnlineGroupsManager@@QEAAXHQEBHH@Z(this, controllerIndex, invitationIndices, numInvitations);
}

/*
==============
OnlineGroupsManager::GetTotalMemberCount
==============
*/

int __fastcall OnlineGroupsManager::GetTotalMemberCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetTotalMemberCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::RegisterLuaFunctions
==============
*/

void __fastcall OnlineGroupsManager::RegisterLuaFunctions(OnlineGroupsManager *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineGroupsManager@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineGroupsManager::GetMembershipCount
==============
*/

int __fastcall OnlineGroupsManager::GetMembershipCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetMembershipCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::GetSearchResultId
==============
*/

unsigned __int64 __fastcall OnlineGroupsManager::GetSearchResultId(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  return ?GetSearchResultId@OnlineGroupsManager@@QEAA_KHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineGroupsManager::RejectInvitations
==============
*/

void __fastcall OnlineGroupsManager::RejectInvitations(OnlineGroupsManager *this, const int controllerIndex, const int *invitationIndices, int numInvitations)
{
  ?RejectInvitations@OnlineGroupsManager@@QEAAXHQEBHH@Z(this, controllerIndex, invitationIndices, numInvitations);
}

/*
==============
OnCreateNewGroupComplete
==============
*/

void __fastcall OnCreateNewGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnCreateNewGroupComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnSetTeamAutoJoinComplete
==============
*/

void __fastcall OnSetTeamAutoJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnSetTeamAutoJoinComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::KickMember
==============
*/

void __fastcall OnlineGroupsManager::KickMember(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int memberIndex)
{
  ?KickMember@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, memberIndex);
}

/*
==============
OnGetMembersComplete
==============
*/

void __fastcall OnGetMembersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetMembersComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::GetInstancePtr
==============
*/

OnlineGroupsManager *__fastcall OnlineGroupsManager::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineGroupsManager@@SAPEAV1@XZ();
}

/*
==============
OnRetrieveGroupMembershipsComplete
==============
*/

void __fastcall OnRetrieveGroupMembershipsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRetrieveGroupMembershipsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::Uninit
==============
*/

void __fastcall OnlineGroupsManager::Uninit(OnlineGroupsManager *this)
{
  ?Uninit@OnlineGroupsManager@@UEAAXXZ(this);
}

/*
==============
OnlineGroupsManager::GetInstance
==============
*/

OnlineGroupsManager *__fastcall OnlineGroupsManager::GetInstance()
{
  return ?GetInstance@OnlineGroupsManager@@SAAEAV1@XZ();
}

/*
==============
OnlineGroupsManager::GetSearchResultCount
==============
*/

int __fastcall OnlineGroupsManager::GetSearchResultCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetSearchResultCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnInviteUsersComplete
==============
*/

void __fastcall OnInviteUsersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnInviteUsersComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::GetSearchResultName
==============
*/

const char *__fastcall OnlineGroupsManager::GetSearchResultName(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  return ?GetSearchResultName@OnlineGroupsManager@@QEAAPEBDHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineGroupsManager::OnUnregistered
==============
*/

void __fastcall OnlineGroupsManager::OnUnregistered(OnlineGroupsManager *this)
{
  ?OnUnregistered@OnlineGroupsManager@@UEAAXXZ(this);
}

/*
==============
OnAcceptInvitationsComplete
==============
*/

void __fastcall OnAcceptInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnAcceptInvitationsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::InviteUsersToGroup
==============
*/

void __fastcall OnlineGroupsManager::InviteUsersToGroup(OnlineGroupsManager *this, const int controllerIndex, const int teamIndex, XUID *xuids, int numXuids)
{
  ?InviteUsersToGroup@OnlineGroupsManager@@QEAAXHHQEAUXUID@@H@Z(this, controllerIndex, teamIndex, xuids, numXuids);
}

/*
==============
OnlineGroupsManager::GetMembers
==============
*/

void __fastcall OnlineGroupsManager::GetMembers(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId, const int offset)
{
  ?GetMembers@OnlineGroupsManager@@QEAAXHW4FenceChannel@@HH@Z(this, controllerIndex, fenceChannel, groupId, offset);
}

/*
==============
OnlineGroupsManager::GetMemberCount
==============
*/

int __fastcall OnlineGroupsManager::GetMemberCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetMemberCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnRetrieveGroupInvitationsComplete
==============
*/

void __fastcall OnRetrieveGroupInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRetrieveGroupInvitationsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnAcceptApplicationComplete
==============
*/

void __fastcall OnAcceptApplicationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnAcceptApplicationComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnLeaveGroupComplete
==============
*/

void __fastcall OnLeaveGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnLeaveGroupComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::GetTotalApplicationCount
==============
*/

int __fastcall OnlineGroupsManager::GetTotalApplicationCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetTotalApplicationCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::GetTotalSearchResultCount
==============
*/

int __fastcall OnlineGroupsManager::GetTotalSearchResultCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return ?GetTotalSearchResultCount@OnlineGroupsManager@@QEAAHH@Z(this, controllerIndex);
}

/*
==============
OnApplyToJoinComplete
==============
*/

void __fastcall OnApplyToJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnApplyToJoinComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnRejectApplicationComplete
==============
*/

void __fastcall OnRejectApplicationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRejectApplicationComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::ControllerFrame
==============
*/

void __fastcall OnlineGroupsManager::ControllerFrame(OnlineGroupsManager *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineGroupsManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::OnDisconnect
==============
*/

void __fastcall OnlineGroupsManager::OnDisconnect(OnlineGroupsManager *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineGroupsManager@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineGroupsManager::AcceptApplication
==============
*/

void __fastcall OnlineGroupsManager::AcceptApplication(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int applicationIndex)
{
  ?AcceptApplication@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, applicationIndex);
}

/*
==============
OnlineGroupsManager::RetrieveGroupInvitations
==============
*/

void __fastcall OnlineGroupsManager::RetrieveGroupInvitations(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int offset)
{
  ?RetrieveGroupInvitations@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, offset);
}

/*
==============
OnlineGroupsManager::GetSearchResultType
==============
*/

int __fastcall OnlineGroupsManager::GetSearchResultType(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  return ?GetSearchResultType@OnlineGroupsManager@@QEAAHHH@Z(this, controllerIndex, index);
}

/*
==============
OnlineGroupsManager::OutputCurrentState
==============
*/

void __fastcall OnlineGroupsManager::OutputCurrentState(OnlineGroupsManager *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineGroupsManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineGroupsManager::GetApplications
==============
*/

void __fastcall OnlineGroupsManager::GetApplications(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int *teamIndex, const int numTeams, const int offset)
{
  ?GetApplications@OnlineGroupsManager@@QEAAXHW4FenceChannel@@QEBHHH@Z(this, controllerIndex, fenceChannel, teamIndex, numTeams, offset);
}

/*
==============
OnlineGroupsManager::RetrieveGroupMemberships
==============
*/

void __fastcall OnlineGroupsManager::RetrieveGroupMemberships(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel)
{
  ?RetrieveGroupMemberships@OnlineGroupsManager@@QEAAXHW4FenceChannel@@@Z(this, controllerIndex, fenceChannel);
}

/*
==============
OnlineGroupsManager::GetGroupName
==============
*/

const char *__fastcall OnlineGroupsManager::GetGroupName(OnlineGroupsManager *this, const int controllerIndex, const int teamIndex)
{
  return ?GetGroupName@OnlineGroupsManager@@QEAAPEBDHH@Z(this, controllerIndex, teamIndex);
}

/*
==============
OnlineGroupsManager::CreateNewGroup
==============
*/

void __fastcall OnlineGroupsManager::CreateNewGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const char *name, bool publicType, const char *description, const char *emblem)
{
  ?CreateNewGroup@OnlineGroupsManager@@QEAAXHW4FenceChannel@@PEBD_N11@Z(this, controllerIndex, fenceChannel, name, publicType, description, emblem);
}

/*
==============
OnlineGroupsManager::GetApplicationName
==============
*/

const char *__fastcall OnlineGroupsManager::GetApplicationName(OnlineGroupsManager *this, const int controllerIndex, const int applicationIndex)
{
  return ?GetApplicationName@OnlineGroupsManager@@QEAAPEBDHH@Z(this, controllerIndex, applicationIndex);
}

/*
==============
OnlineGroupsManager::LeaveGroup
==============
*/

void __fastcall OnlineGroupsManager::LeaveGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupIndex)
{
  ?LeaveGroup@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, groupIndex);
}

/*
==============
OnRejectInvitationsComplete
==============
*/

void __fastcall OnRejectInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnRejectInvitationsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::Frame
==============
*/

void __fastcall OnlineGroupsManager::Frame(OnlineGroupsManager *this)
{
  ?Frame@OnlineGroupsManager@@UEAAXXZ(this);
}

/*
==============
OnlineGroupsManager::SearchForGroup
==============
*/

void __fastcall OnlineGroupsManager::SearchForGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const char *name, bool publicType)
{
  ?SearchForGroup@OnlineGroupsManager@@QEAAXHW4FenceChannel@@PEBD_N@Z(this, controllerIndex, fenceChannel, name, publicType);
}

/*
==============
OnlineGroupsManager::ApplyToJoin
==============
*/

void __fastcall OnlineGroupsManager::ApplyToJoin(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId)
{
  ?ApplyToJoin@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, groupId);
}

/*
==============
OnAutoJoinComplete
==============
*/

void __fastcall OnAutoJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnAutoJoinComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::GetMemberName
==============
*/

const char *__fastcall OnlineGroupsManager::GetMemberName(OnlineGroupsManager *this, const int controllerIndex, const int memberIndex)
{
  return ?GetMemberName@OnlineGroupsManager@@QEAAPEBDHH@Z(this, controllerIndex, memberIndex);
}

/*
==============
OnlineGroupsManager::OnRegistered
==============
*/

void __fastcall OnlineGroupsManager::OnRegistered(OnlineGroupsManager *this)
{
  ?OnRegistered@OnlineGroupsManager@@UEAAXXZ(this);
}

/*
==============
OnlineGroupsManager::OnSignedIn
==============
*/

void __fastcall OnlineGroupsManager::OnSignedIn(OnlineGroupsManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineGroupsManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineGroupsManager::RejectApplication
==============
*/

void __fastcall OnlineGroupsManager::RejectApplication(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int applicationIndex)
{
  ?RejectApplication@OnlineGroupsManager@@QEAAXHW4FenceChannel@@H@Z(this, controllerIndex, fenceChannel, applicationIndex);
}

/*
==============
OnGetApplicationsComplete
==============
*/

void __fastcall OnGetApplicationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnGetApplicationsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnSearchForGroupComplete
==============
*/

void __fastcall OnSearchForGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnSearchForGroupComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::Init
==============
*/

bool __fastcall OnlineGroupsManager::Init(OnlineGroupsManager *this)
{
  return ?Init@OnlineGroupsManager@@UEAA_NXZ(this);
}

/*
==============
OnlineGroupsManager::OnSignedOut
==============
*/

void __fastcall OnlineGroupsManager::OnSignedOut(OnlineGroupsManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineGroupsManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnKickMemberComplete
==============
*/

void __fastcall OnKickMemberComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnKickMemberComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineGroupsManager::OnRegistered
==============
*/
void OnlineGroupsManager::OnRegistered(OnlineGroupsManager *this)
{
  ;
}

/*
==============
OnlineGroupsManager::OnUnregistered
==============
*/
void OnlineGroupsManager::OnUnregistered(OnlineGroupsManager *this)
{
  ;
}

/*
==============
OnlineGroupsManager::Init
==============
*/
__int64 OnlineGroupsManager::Init(OnlineGroupsManager *this)
{
  __int64 result; 

  result = 1i64;
  s_taskData[0].taskId = 0;
  s_taskData[1].taskId = 0;
  s_taskData[2].taskId = 0;
  s_taskData[3].taskId = 0;
  s_taskData[4].taskId = 0;
  s_taskData[5].taskId = 0;
  s_taskData[6].taskId = 0;
  s_taskData[7].taskId = 0;
  return result;
}

/*
==============
OnlineGroupsManager::Uninit
==============
*/
void OnlineGroupsManager::Uninit(OnlineGroupsManager *this)
{
  ;
}

/*
==============
OnlineGroupsManager::Frame
==============
*/
void OnlineGroupsManager::Frame(OnlineGroupsManager *this)
{
  ;
}

/*
==============
OnlineGroupsManager::ControllerFrame
==============
*/
void OnlineGroupsManager::ControllerFrame(OnlineGroupsManager *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineGroupsManager::OnSignedIn
==============
*/
void OnlineGroupsManager::OnSignedIn(OnlineGroupsManager *this, const int controllerIndex, GenericSignInState signinState)
{
  __int64 v3; 
  GroupTaskData *UnusedTaskDataSlot; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 

  if ( signinState == SignedInToDemonWare )
  {
    v3 = controllerIndex;
    *(_QWORD *)&request.m_controllerIndex = -1i64;
    memset(&request.m_appData, 0, 48);
    request.m_cancelTaskOnSignoutEvent = 1;
    request.m_timeoutInSeconds = 0;
    UnusedTaskDataSlot = GetUnusedTaskDataSlot();
    if ( UnusedTaskDataSlot )
    {
      UnusedTaskDataSlot->fenceChannel = FENCE_CHANNEL_NONE;
      request.m_appData = UnusedTaskDataSlot;
      request.m_controllerIndex = v3;
      request.m_onCompletionCallback = OnRetrieveGroupMembershipsComplete;
      UnusedTaskDataSlot->taskId = dwGetMemberships(&request, s_groupData[v3].teamInfo, 10);
      request.m_onCompletionCallback = NULL;
      request.m_onUpdateCallback = NULL;
      request.m_appSecondaryCallback = NULL;
      request.m_timeoutInSeconds = 0;
      m_asyncInfo = request.m_asyncInfo;
      if ( request.m_asyncInfo )
      {
        request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
        m_asyncInfo = NULL;
        request.m_asyncInfo = NULL;
      }
      if ( request.m_remoteDemonwareTask.m_ptr )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( request.m_remoteDemonwareTask.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
          request.m_remoteDemonwareTask.m_ptr = NULL;
        }
        m_asyncInfo = request.m_asyncInfo;
      }
      if ( m_asyncInfo )
        m_asyncInfo->__abi_Release(m_asyncInfo);
    }
    else
    {
      request.m_onCompletionCallback = NULL;
      request.m_onUpdateCallback = NULL;
      request.m_appSecondaryCallback = NULL;
      request.m_timeoutInSeconds = 0;
    }
  }
}

/*
==============
OnlineGroupsManager::OnSignedOut
==============
*/
void OnlineGroupsManager::OnSignedOut(OnlineGroupsManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineGroupsManager::OnDisconnect
==============
*/
void OnlineGroupsManager::OnDisconnect(OnlineGroupsManager *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineGroupsManager::RegisterLuaFunctions
==============
*/
void OnlineGroupsManager::RegisterLuaFunctions(OnlineGroupsManager *this, lua_State *luaVM)
{
  ;
}

/*
==============
OnlineGroupsManager::OutputCurrentState
==============
*/
void OnlineGroupsManager::OutputCurrentState(OnlineGroupsManager *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineGroupsManager::AcceptApplication
==============
*/
void OnlineGroupsManager::AcceptApplication(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int applicationIndex)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  __int64 v8; 
  bdUserAccountID *v9; 
  unsigned int v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest v14; 
  __int128 v15; 
  FenceChannel v16; 
  __int64 v17; 
  FenceStartParameters v18; 
  bdUserAccountID v19; 

  v17 = -2i64;
  v4 = applicationIndex;
  v6 = controllerIndex;
  *(_QWORD *)&v14.m_controllerIndex = -1i64;
  memset(&v14.m_appData, 0, 48);
  v14.m_cancelTaskOnSignoutEvent = 1;
  v14.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  if ( UnusedTaskDataSlot )
  {
    v14.m_controllerIndex = v6;
    v14.m_onCompletionCallback = OnAcceptApplicationComplete;
    v14.m_appData = UnusedTaskDataSlot;
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    v8 = 27880 * v6 + 288 * v4;
    bdUserAccountID::bdUserAccountID(&v19, (const bdUserAccountID *)((char *)&s_groupData[0].applications[0].__vftable + v8 + 24));
    v10 = dwAcceptApplication(&v14, *(unsigned __int64 *)((char *)&s_groupData[0].applications[0].__vftable + v8 + 16), v9);
    UnusedTaskDataSlot->taskId = v10;
    if ( v10 )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v15) = 0;
        v16 = fenceChannel;
        *((_QWORD *)&v15 + 1) = "searching for groups";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_C0]
          vmovups [rbp+57h+var_90], xmm0
          vmovsd  xmm1, [rbp+57h+var_B0]
          vmovsd  [rbp+57h+var_80], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v18);
      }
    }
  }
  v14.m_onCompletionCallback = NULL;
  v14.m_onUpdateCallback = NULL;
  v14.m_appSecondaryCallback = NULL;
  v14.m_timeoutInSeconds = 0;
  m_asyncInfo = v14.m_asyncInfo;
  if ( v14.m_asyncInfo )
  {
    v14.m_asyncInfo->__abi_Release(v14.m_asyncInfo);
    m_asyncInfo = NULL;
    v14.m_asyncInfo = NULL;
  }
  if ( v14.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v14.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_remoteDemonwareTask.m_ptr->~bdReferencable)(v14.m_remoteDemonwareTask.m_ptr, 1i64);
      v14.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = v14.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::AcceptInvitations
==============
*/
void OnlineGroupsManager::AcceptInvitations(OnlineGroupsManager *this, const int controllerIndex, const int *invitationIndices, int numInvitations)
{
  int v4; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 *acceptMemberships; 
  __int64 v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v11; 
  __int64 v12; 
  TaskCreateRequest request; 

  v4 = numInvitations;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  if ( numInvitations > 0 )
  {
    v7 = controllerIndex;
    acceptMemberships = s_groupData[v7].acceptMemberships;
    v9 = (unsigned int)numInvitations;
    do
    {
      if ( *invitationIndices >= (unsigned int)s_groupData[v7].teamProposalCount )
      {
        LODWORD(v12) = s_groupData[v7].teamProposalCount;
        LODWORD(v11) = *invitationIndices;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 458, ASSERT_TYPE_ASSERT, "(unsigned)( invitationIndices[invitationIndex] ) < (unsigned)( s_groupData[controllerIndex].teamProposalCount )", "invitationIndices[invitationIndex] doesn't index s_groupData[controllerIndex].teamProposalCount\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      *acceptMemberships++ = *(_QWORD *)&s_groupData[0].teamProposal[*invitationIndices++].m_userID[v7 * 27880 + 56];
      --v9;
    }
    while ( v9 );
    v4 = numInvitations;
  }
  request.m_controllerIndex = v6;
  request.m_onCompletionCallback = OnAcceptInvitationsComplete;
  dwAcceptMemberships(&request, s_groupData[v6].acceptMemberships, s_groupData[v6].failedAccepts, v4);
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::ApplyToJoin
==============
*/
void OnlineGroupsManager::ApplyToJoin(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v8; 
  unsigned int v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v14; 
  FenceChannel v15; 
  __int64 v16; 
  FenceStartParameters v17; 

  v16 = -2i64;
  v4 = groupId;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v8 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v6;
    request.m_onCompletionCallback = OnApplyToJoinComplete;
    if ( (unsigned int)v4 >= s_groupData[v6].searchResultCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 915, ASSERT_TYPE_ASSERT, "(unsigned)( groupId ) < (unsigned)( s_groupData[controllerIndex].searchResultCount )", "groupId doesn't index s_groupData[controllerIndex].searchResultCount\n\t%i not in [0, %i)", v4, s_groupData[v6].searchResultCount) )
      __debugbreak();
    v9 = dwAddApplication(&request, *((_QWORD *)&s_groupData[v6].searchResults[v4].__vftable + 2));
    v8->taskId = v9;
    if ( v9 && fenceChannel != FENCE_CHANNEL_NONE )
    {
      LOBYTE(v14) = 0;
      v15 = fenceChannel;
      *((_QWORD *)&v14 + 1) = "applying to group";
      __asm
      {
        vmovups xmm0, [rbp+57h+var_60]
        vmovups [rbp+57h+var_40], xmm0
        vmovsd  xmm1, [rbp+57h+var_50]
        vmovsd  [rbp+57h+var_30], xmm1
      }
      OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v17);
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::AutoJoin
==============
*/
void OnlineGroupsManager::AutoJoin(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v8; 
  __int64 v9; 
  unsigned __int64 *v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v15; 
  FenceChannel v16; 
  __int64 v17; 
  FenceStartParameters v18; 

  v17 = -2i64;
  v4 = groupId;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v8 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v6;
    request.m_onCompletionCallback = OnAutoJoinComplete;
    v9 = v6;
    if ( (unsigned int)v4 >= s_groupData[v6].searchResultCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1023, ASSERT_TYPE_ASSERT, "(unsigned)( groupId ) < (unsigned)( s_groupData[controllerIndex].searchResultCount )", "groupId doesn't index s_groupData[controllerIndex].searchResultCount\n\t%i not in [0, %i)", v4, s_groupData[v6].searchResultCount) )
      __debugbreak();
    v10 = (unsigned __int64 *)((char *)&s_groupData[0].searchResults[v4].__vftable + v9 * 27880 + 16);
    v8->taskId = dwAutoJoinTeam(&request, *v10);
    s_groupData[v9].autoJoinTeamId = *v10;
    if ( v8->taskId && fenceChannel != FENCE_CHANNEL_NONE )
    {
      LOBYTE(v15) = 0;
      v16 = fenceChannel;
      *((_QWORD *)&v15 + 1) = "joining group";
      __asm
      {
        vmovups xmm0, [rbp+57h+var_60]
        vmovups [rbp+57h+var_40], xmm0
        vmovsd  xmm1, [rbp+57h+var_50]
        vmovsd  [rbp+57h+var_30], xmm1
      }
      OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v18);
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::CreateNewGroup
==============
*/
void OnlineGroupsManager::CreateNewGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const char *name, bool publicType)
{
  __int64 v7; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v14; 
  FenceChannel v15; 
  __int64 v16; 
  FenceStartParameters v17; 

  v16 = -2i64;
  v7 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v9 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v7;
    request.m_onCompletionCallback = OnCreateNewGroupComplete;
    UnusedTaskDataSlot->taskId = dwCreateTeam(&request, name, &s_groupData[v7].newTeamProfile, 1, &s_groupData[v7].newTeamInfo);
    s_groupData[v7].createAutoJoin = publicType;
    if ( v9->taskId )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v14) = 0;
        v15 = fenceChannel;
        *((_QWORD *)&v14 + 1) = "creating new group";
        __asm
        {
          vmovups xmm0, [rbp+3Fh+var_60]
          vmovups [rbp+3Fh+var_40], xmm0
          vmovsd  xmm1, [rbp+3Fh+var_50]
          vmovsd  [rbp+3Fh+var_30], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v7, &v17);
      }
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::GetApplicationCount
==============
*/
__int64 OnlineGroupsManager::GetApplicationCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].applicationCount;
}

/*
==============
OnlineGroupsManager::GetApplicationName
==============
*/
char *OnlineGroupsManager::GetApplicationName(OnlineGroupsManager *this, const int controllerIndex, const int applicationIndex)
{
  return s_groupData[controllerIndex].applications[applicationIndex].m_userName;
}

/*
==============
OnlineGroupsManager::GetApplications
==============
*/
void OnlineGroupsManager::GetApplications(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int *teamIndex, const int numTeams, const int offset)
{
  __int64 v8; 
  GroupTaskData *UnusedTaskDataSlot; 
  __int64 v10; 
  unsigned __int64 *applicationTeams; 
  unsigned int ApplicationsByTeamPaginated; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v17; 
  FenceChannel v18; 
  __int64 v19; 
  FenceStartParameters v20; 

  v19 = -2i64;
  v8 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  if ( UnusedTaskDataSlot )
  {
    if ( numTeams > 0 )
    {
      v10 = 0i64;
      applicationTeams = s_groupData[v8].applicationTeams;
      do
        *applicationTeams++ = *((_QWORD *)&s_groupData[0].teamInfo[teamIndex[v10++]].__vftable + 2);
      while ( v10 < numTeams );
    }
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_controllerIndex = v8;
    request.m_onCompletionCallback = OnGetApplicationsComplete;
    request.m_appData = UnusedTaskDataSlot;
    ApplicationsByTeamPaginated = dwGetApplicationsByTeamPaginated(&request, s_groupData[v8].applicationTeams, numTeams, s_groupData[v8].applications, 0x10u, offset);
    UnusedTaskDataSlot->taskId = ApplicationsByTeamPaginated;
    if ( ApplicationsByTeamPaginated && fenceChannel != FENCE_CHANNEL_NONE )
    {
      LOBYTE(v17) = 0;
      v18 = fenceChannel;
      *((_QWORD *)&v17 + 1) = "searching for groups";
      __asm
      {
        vmovups xmm0, [rbp+47h+var_50]
        vmovups [rbp+47h+var_30], xmm0
        vmovsd  xmm1, [rbp+47h+var_40]
        vmovsd  [rbp+47h+var_20], xmm1
      }
      OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v8, &v20);
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::GetGroupName
==============
*/
char *OnlineGroupsManager::GetGroupName(OnlineGroupsManager *this, const int controllerIndex, const int teamIndex)
{
  __int64 v3; 

  v3 = controllerIndex;
  if ( s_groupData[v3].teamInfoValid )
    return &s_groupData[0].teamInfo[teamIndex].m_teamName[v3 * 27880];
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
OnlineGroupsManager::GetInstance
==============
*/
OnlineGroupsManager *OnlineGroupsManager::GetInstance()
{
  return &OnlineGroupsManager::s_instance;
}

/*
==============
OnlineGroupsManager::GetInstancePtr
==============
*/
OnlineGroupsManager *OnlineGroupsManager::GetInstancePtr()
{
  return &OnlineGroupsManager::s_instance;
}

/*
==============
OnlineGroupsManager::GetMemberCount
==============
*/
__int64 OnlineGroupsManager::GetMemberCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].memberCount;
}

/*
==============
OnlineGroupsManager::GetMemberName
==============
*/
char *OnlineGroupsManager::GetMemberName(OnlineGroupsManager *this, const int controllerIndex, const int memberIndex)
{
  return s_groupData[controllerIndex].memberList[memberIndex].m_userName;
}

/*
==============
OnlineGroupsManager::GetMembers
==============
*/
void OnlineGroupsManager::GetMembers(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupId, const int offset)
{
  __int64 v5; 
  __int64 v7; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v9; 
  unsigned int Members; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v15; 
  FenceChannel v16; 
  __int64 v17; 
  FenceStartParameters v18; 

  v17 = -2i64;
  v5 = groupId;
  v7 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v9 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v7;
    request.m_onCompletionCallback = OnGetMembersComplete;
    if ( (unsigned int)v5 >= s_groupData[v7].teamInfoCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1122, ASSERT_TYPE_ASSERT, "(unsigned)( groupId ) < (unsigned)( s_groupData[controllerIndex].teamInfoCount )", "groupId doesn't index s_groupData[controllerIndex].teamInfoCount\n\t%i not in [0, %i)", v5, s_groupData[v7].teamInfoCount) )
      __debugbreak();
    Members = dwGetMembers(&request, *((_QWORD *)&s_groupData[v7].teamInfo[v5].__vftable + 2), s_groupData[v7].memberList, 0x14u, offset, 0);
    v9->taskId = Members;
    if ( Members && fenceChannel != FENCE_CHANNEL_NONE )
    {
      LOBYTE(v15) = 0;
      v16 = fenceChannel;
      *((_QWORD *)&v15 + 1) = "getting group members";
      __asm
      {
        vmovups xmm0, [rbp+4Fh+var_60]
        vmovups [rbp+4Fh+var_40], xmm0
        vmovsd  xmm1, [rbp+4Fh+var_50]
        vmovsd  [rbp+4Fh+var_30], xmm1
      }
      OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v7, &v18);
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::GetMembershipCount
==============
*/
__int64 OnlineGroupsManager::GetMembershipCount(OnlineGroupsManager *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( s_groupData[v2].teamInfoValid )
    return (unsigned int)s_groupData[v2].teamInfoCount;
  else
    return 0i64;
}

/*
==============
OnlineGroupsManager::GetSearchResultCount
==============
*/
__int64 OnlineGroupsManager::GetSearchResultCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].searchResultCount;
}

/*
==============
OnlineGroupsManager::GetSearchResultId
==============
*/
unsigned __int64 OnlineGroupsManager::GetSearchResultId(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  __int64 v3; 
  __int64 v4; 
  int v7; 

  v3 = index;
  v4 = controllerIndex;
  if ( (unsigned int)index >= 0x14 )
  {
    v7 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 828, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_groupData[controllerIndex].searchResults ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_groupData[controllerIndex].searchResults )\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  return *((_QWORD *)&s_groupData[v4].searchResults[v3].__vftable + 2);
}

/*
==============
OnlineGroupsManager::GetSearchResultName
==============
*/
char *OnlineGroupsManager::GetSearchResultName(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  __int64 v3; 
  __int64 v4; 
  int v7; 

  v3 = index;
  v4 = controllerIndex;
  if ( (unsigned int)index >= 0x14 )
  {
    v7 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 821, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_groupData[controllerIndex].searchResults ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_groupData[controllerIndex].searchResults )\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  return s_groupData[v4].searchResults[v3].m_teamName;
}

/*
==============
OnlineGroupsManager::GetSearchResultType
==============
*/
__int64 OnlineGroupsManager::GetSearchResultType(OnlineGroupsManager *this, const int controllerIndex, const int index)
{
  __int64 v3; 
  __int64 v4; 
  int v7; 

  v3 = index;
  v4 = controllerIndex;
  if ( (unsigned int)index >= 0x14 )
  {
    v7 = 20;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 835, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_groupData[controllerIndex].searchResults ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_groupData[controllerIndex].searchResults )\n\t%i not in [0, %i)", index, v7) )
      __debugbreak();
  }
  return s_groupData[v4].searchResults[v3].m_teamType;
}

/*
==============
OnlineGroupsManager::GetTotalApplicationCount
==============
*/
__int64 OnlineGroupsManager::GetTotalApplicationCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].totalApplicationCount;
}

/*
==============
OnlineGroupsManager::GetTotalMemberCount
==============
*/
__int64 OnlineGroupsManager::GetTotalMemberCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].totalMemberCount;
}

/*
==============
OnlineGroupsManager::GetTotalSearchResultCount
==============
*/
__int64 OnlineGroupsManager::GetTotalSearchResultCount(OnlineGroupsManager *this, const int controllerIndex)
{
  return (unsigned int)s_groupData[controllerIndex].totalSearchResultCount;
}

/*
==============
GetUnusedTaskDataSlot
==============
*/
GroupTaskData *GetUnusedTaskDataSlot()
{
  int v0; 
  unsigned int *p_taskId; 

  v0 = 0;
  p_taskId = &s_taskData[0].taskId;
  do
  {
    if ( !*p_taskId )
      return &s_taskData[v0];
    ++v0;
    p_taskId += 4;
  }
  while ( (__int64)p_taskId < (__int64)&unk_14A1D6398 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 195, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ran out of group task data slots!") )
    __debugbreak();
  return 0i64;
}

/*
==============
OnlineGroupsManager::InviteUsersToGroup
==============
*/
void OnlineGroupsManager::InviteUsersToGroup(OnlineGroupsManager *this, const int controllerIndex, const int teamIndex, XUID *xuids, int numXuids)
{
  int v6; 
  __int64 v8; 
  bdUserAccountID *proposedMembers; 
  __int64 v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  unsigned __int64 userID[2]; 
  bdUserAccountID other; 

  userID[1] = -2i64;
  v6 = teamIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  v8 = controllerIndex;
  if ( numXuids > 0 )
  {
    proposedMembers = s_groupData[controllerIndex].proposedMembers;
    v10 = (unsigned int)numXuids;
    do
    {
      userID[0] = XUID::GetUniversalId(xuids);
      bdUserAccountID::bdUserAccountID(&other, userID);
      bdUserAccountID::operator=(proposedMembers, &other);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
      ++xuids;
      ++proposedMembers;
      --v10;
    }
    while ( v10 );
    v6 = teamIndex;
  }
  request.m_controllerIndex = controllerIndex;
  request.m_onCompletionCallback = OnInviteUsersComplete;
  dwProposeMultipleMemberships(&request, s_groupData[v8].failedProposals, *((_QWORD *)&s_groupData[v8].teamInfo[v6].__vftable + 2), numXuids, s_groupData[v8].proposedMembers);
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::KickMember
==============
*/
void OnlineGroupsManager::KickMember(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int memberIndex)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  __int64 v8; 
  bdUserAccountID *v9; 
  unsigned int v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest v14; 
  __int128 v15; 
  FenceChannel v16; 
  __int64 v17; 
  FenceStartParameters v18; 
  bdUserAccountID v19; 

  v17 = -2i64;
  v4 = memberIndex;
  v6 = controllerIndex;
  *(_QWORD *)&v14.m_controllerIndex = -1i64;
  memset(&v14.m_appData, 0, 48);
  v14.m_cancelTaskOnSignoutEvent = 1;
  v14.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  if ( UnusedTaskDataSlot )
  {
    v14.m_controllerIndex = v6;
    v14.m_onCompletionCallback = OnKickMemberComplete;
    v14.m_appData = UnusedTaskDataSlot;
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    v8 = 27880 * v6 + 184 * v4;
    bdUserAccountID::bdUserAccountID(&v19, (const bdUserAccountID *)((char *)&s_groupData[0].memberList[0].__vftable + v8 + 24));
    v10 = dwKickMember(&v14, *(unsigned __int64 *)((char *)&s_groupData[0].memberList[0].__vftable + v8 + 16), v9);
    UnusedTaskDataSlot->taskId = v10;
    if ( v10 )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v15) = 0;
        v16 = fenceChannel;
        *((_QWORD *)&v15 + 1) = "kicking member";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_C0]
          vmovups [rbp+57h+var_90], xmm0
          vmovsd  xmm1, [rbp+57h+var_B0]
          vmovsd  [rbp+57h+var_80], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v18);
      }
    }
  }
  v14.m_onCompletionCallback = NULL;
  v14.m_onUpdateCallback = NULL;
  v14.m_appSecondaryCallback = NULL;
  v14.m_timeoutInSeconds = 0;
  m_asyncInfo = v14.m_asyncInfo;
  if ( v14.m_asyncInfo )
  {
    v14.m_asyncInfo->__abi_Release(v14.m_asyncInfo);
    m_asyncInfo = NULL;
    v14.m_asyncInfo = NULL;
  }
  if ( v14.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v14.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_remoteDemonwareTask.m_ptr->~bdReferencable)(v14.m_remoteDemonwareTask.m_ptr, 1i64);
      v14.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = v14.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::LeaveGroup
==============
*/
void OnlineGroupsManager::LeaveGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int groupIndex)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v8; 
  unsigned int v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v14; 
  FenceChannel v15; 
  __int64 v16; 
  FenceStartParameters v17; 

  v16 = -2i64;
  v4 = groupIndex;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v8 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v6;
    request.m_onCompletionCallback = OnLeaveGroupComplete;
    v9 = dwLeaveTeam(&request, *((_QWORD *)&s_groupData[v6].teamInfo[v4].__vftable + 2));
    v8->taskId = v9;
    if ( v9 )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v14) = 0;
        v15 = fenceChannel;
        *((_QWORD *)&v14 + 1) = "leaving group";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_50]
          vmovups [rbp+57h+var_30], xmm0
          vmovsd  xmm1, [rbp+57h+var_40]
          vmovsd  [rbp+57h+var_20], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v17);
      }
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnAcceptApplicationComplete
==============
*/
void OnAcceptApplicationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel fenceChannel; 
  const char *v6; 
  FenceChannel v8; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1320, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      if ( taskState <= TASKSTATE_CANCELED )
      {
LABEL_10:
        fenceChannel = m_appData->fenceChannel;
        if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
        {
          v15.m_statusIsCustomErrorString = 0;
          v15.m_statusString = "accepting application";
          v15.m_failureAction = FAILURE_FENCE;
          v15.m_channel = fenceChannel;
          v6 = j_va("%zu", 0x100ui64);
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
          __asm
          {
            vmovups ymm0, [rsp+78h+var_28]
            vmovups [rsp+78h+var_28], ymm0
          }
          OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
        }
        Com_PrintError(25, "Canceled accepting application for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        goto LABEL_19;
      }
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1353, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
      goto LABEL_10;
    }
    v8 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "accepting application";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v8;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)256, NULL);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Error accepting application for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
  else
  {
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v14 = m_appData->fenceChannel;
      __asm { vmovsd  xmm1, [rsp+78h+var_38] }
      *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
      BYTE8(v13) = 0;
      __asm
      {
        vmovups xmm0, [rsp+78h+var_48]
        vmovups xmmword ptr [rsp+78h+var_28], xmm0
        vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
      }
      OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
    }
    Com_Printf(25, "Accept application complete for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
LABEL_19:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnAcceptInvitationsComplete
==============
*/
void OnAcceptInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 v3; 

  if ( taskState == TASKSTATE_PENDING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 429, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
  }
  else
  {
    if ( taskState == TASKSTATE_SUCCESS )
    {
      Com_Printf(25, "Group memberships accepted for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      return;
    }
    if ( taskState > TASKSTATE_SUCCESS )
    {
      if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
      {
        Com_PrintError(25, "Error accepting group memberships for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        return;
      }
      if ( taskState <= TASKSTATE_CANCELED )
      {
        Com_PrintError(25, "Canceled accepting group memberships for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        return;
      }
    }
  }
  LODWORD(v3) = taskState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 446, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v3) )
    __debugbreak();
}

/*
==============
OnApplyToJoinComplete
==============
*/
void OnApplyToJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel fenceChannel; 
  const char *v6; 
  FenceChannel v8; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 844, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      if ( taskState <= TASKSTATE_CANCELED )
      {
LABEL_10:
        fenceChannel = m_appData->fenceChannel;
        if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
        {
          v15.m_statusIsCustomErrorString = 0;
          v15.m_statusString = "applying to group";
          v15.m_failureAction = FAILURE_FENCE;
          v15.m_channel = fenceChannel;
          v6 = j_va("%zu", 0x20ui64);
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
          __asm
          {
            vmovups ymm0, [rsp+78h+var_28]
            vmovups [rsp+78h+var_28], ymm0
          }
          OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
        }
        Com_PrintError(25, "Canceled applying to group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        goto LABEL_19;
      }
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 877, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
      goto LABEL_10;
    }
    v8 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_statusString = "applying to group";
      v15.m_channel = v8;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)32, NULL);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Error applying to group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
  else
  {
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v14 = m_appData->fenceChannel;
      __asm { vmovsd  xmm1, [rsp+78h+var_38] }
      *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
      BYTE8(v13) = 0;
      __asm
      {
        vmovups xmm0, [rsp+78h+var_48]
        vmovups xmmword ptr [rsp+78h+var_28], xmm0
        vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
      }
      OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
    }
    Com_Printf(25, "Group application succeeded for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
LABEL_19:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnAutoJoinComplete
==============
*/
void OnAutoJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  void (__fastcall *v5)(GenericTask *, eTaskManagerTaskState); 
  const char *v6; 
  void (__fastcall *v8)(GenericTask *, eTaskManagerTaskState); 
  __int64 v12; 
  __int128 v13; 
  FenceChannel fenceChannel; 
  TaskCreateRequest request; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 935, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING", -2i64) )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
      BYTE8(v13) = 0;
      fenceChannel = m_appData->fenceChannel;
      __asm
      {
        vmovups xmm0, [rbp+57h+var_58]
        vmovups xmmword ptr [rbp+57h+request.m_controllerIndex], xmm0
        vmovsd  xmm1, [rbp+57h+var_48]
        vmovsd  [rbp+57h+request.m_appSecondaryCallback], xmm1
      }
      OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&request);
    }
    Com_Printf(25, "Group autojoin succeeded for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
    goto LABEL_21;
  }
  if ( taskState <= TASKSTATE_SUCCESS )
    goto LABEL_8;
  if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
  {
    if ( taskState <= TASKSTATE_CANCELED )
    {
LABEL_10:
      v5 = (void (__fastcall *)(GenericTask *, eTaskManagerTaskState))m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(request.m_asyncInfo) = 0;
        *(_QWORD *)&request.m_controllerIndex = "join group";
        request.m_appData = (void *)1;
        request.m_appSecondaryCallback = v5;
        v6 = j_va("%zu", 0x20ui64);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
        __asm
        {
          vmovups ymm0, ymmword ptr [rbp+57h+request.m_controllerIndex]
          vmovups ymmword ptr [rbp+57h+request.m_controllerIndex], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, (FenceFailureParameters *)&request);
      }
      Com_PrintError(25, "Canceled autojoining group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_21;
    }
LABEL_8:
    LODWORD(v12) = taskState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 986, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
      __debugbreak();
    goto LABEL_10;
  }
  if ( bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr) == BD_AUTO_JOINING_DISABLED )
  {
    request.m_appTaskType = -1;
    memset(&request.m_appSecondaryCallback, 0, 24);
    request.m_onUpdateCallback = NULL;
    request.m_cancelTaskOnSignoutEvent = 1;
    request.m_timeoutInSeconds = 0;
    request.m_appData = m_appData;
    request.m_controllerIndex = pTask->m_controllerIndex;
    request.m_onCompletionCallback = OnApplyToJoinComplete;
    m_appData->taskId = dwAddApplication(&request, s_groupData[request.m_controllerIndex].autoJoinTeamId);
    Com_Printf(25, "Group autojoin failed.  Sending application because auto joining is disabled for this group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
    TaskCreateRequest::~TaskCreateRequest(&request);
    return;
  }
  v8 = (void (__fastcall *)(GenericTask *, eTaskManagerTaskState))m_appData->fenceChannel;
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    LOBYTE(request.m_asyncInfo) = 0;
    *(_QWORD *)&request.m_controllerIndex = "join group";
    request.m_appData = (void *)1;
    request.m_appSecondaryCallback = v8;
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)32, NULL);
    __asm
    {
      vmovups ymm0, ymmword ptr [rbp+57h+request.m_controllerIndex]
      vmovups ymmword ptr [rbp+57h+request.m_controllerIndex], ymm0
    }
    OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, (FenceFailureParameters *)&request);
  }
  Com_PrintError(25, "Error autojoining group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_21:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnCreateNewGroupComplete
==============
*/
void OnCreateNewGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  unsigned int v10; 
  FenceChannel v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v14; 
  FenceFailureParameters v15; 
  TaskCreateRequest request; 
  __int64 v17; 
  FenceFailureParameters v18; 
  FenceFailureParameters v19; 

  v17 = -2i64;
  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 579, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_statusString = "create group";
        v15.m_failureAction = FAILURE_FENCE;
        v15.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)8, NULL);
        __asm
        {
          vmovups ymm0, [rbp+57h+var_B0]
          vmovups [rbp+57h+var_B0], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      }
      Com_PrintError(25, "Error creating group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_16;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v14) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 633, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v14) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "create group";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 8ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rbp+57h+var_B0]
        vmovups [rbp+57h+var_40], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v18);
    }
    Com_PrintError(25, "Canceled creating group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_16:
    ReleaseTaskDataSlot(m_appData);
    return;
  }
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  Com_Printf(25, "Group created for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  request.m_appData = pTask->m_appData;
  request.m_controllerIndex = pTask->m_controllerIndex;
  request.m_onCompletionCallback = OnSetTeamAutoJoinComplete;
  v10 = dwSetTeamAutoJoin(&request, *((_QWORD *)&s_groupData[request.m_controllerIndex].newTeamInfo.__vftable + 2), s_groupData[request.m_controllerIndex].createAutoJoin);
  m_appData->taskId = v10;
  if ( !v10 )
  {
    v11 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "retrieve memberships";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v11;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)128, NULL);
      __asm
      {
        vmovups ymm0, [rbp+57h+var_B0]
        vmovups [rbp+57h+var_20], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v19);
    }
    ReleaseTaskDataSlot(m_appData);
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnGetApplicationsComplete
==============
*/
void OnGetApplicationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1202, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_statusString = "search for groups";
        v15.m_failureAction = FAILURE_FENCE;
        v15.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)4096, NULL);
        __asm
        {
          vmovups ymm0, [rsp+78h+var_28]
          vmovups [rsp+78h+var_28], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      }
      Com_PrintError(25, "Error getting applications for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_16;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1239, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "search for groups";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 0x1000ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Canceled getting applications for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_16:
    s_groupData[pTask->m_controllerIndex].applicationCount = 0;
    s_groupData[pTask->m_controllerIndex].totalApplicationCount = 0;
    goto LABEL_20;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v14 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
    BYTE8(v13) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
  }
  Com_Printf(25, "GetApplications complete for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  s_groupData[pTask->m_controllerIndex].applicationCount = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
  s_groupData[pTask->m_controllerIndex].totalApplicationCount = bdRemoteTask::getTotalNumResults(pTask->m_remoteDemonwareTask.m_ptr);
LABEL_20:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnGetMembersComplete
==============
*/
void OnGetMembersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1045, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_failureAction = FAILURE_FENCE;
        v15.m_statusString = "getting group members";
        v15.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)64, NULL);
        __asm
        {
          vmovups ymm0, [rsp+78h+var_28]
          vmovups [rsp+78h+var_28], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      }
      Com_PrintError(25, "Error getting members for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_16;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1082, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "getting group members";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 0x40ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Canceled getting members for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_16:
    s_groupData[pTask->m_controllerIndex].memberCount = 0;
    s_groupData[pTask->m_controllerIndex].totalMemberCount = 0;
    goto LABEL_20;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v14 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
    BYTE8(v13) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
  }
  Com_Printf(25, "Get Members succeeded for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  s_groupData[pTask->m_controllerIndex].memberCount = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
  s_groupData[pTask->m_controllerIndex].totalMemberCount = bdRemoteTask::getTotalNumResults(pTask->m_remoteDemonwareTask.m_ptr);
LABEL_20:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnInviteUsersComplete
==============
*/
void OnInviteUsersComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 v4; 

  if ( taskState == TASKSTATE_PENDING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1158, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
    goto LABEL_4;
  }
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_4;
    if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      if ( taskState <= TASKSTATE_CANCELED )
      {
LABEL_6:
        Com_PrintError(25, "Canceled inviting users for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        return;
      }
LABEL_4:
      LODWORD(v4) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1171, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v4) )
        __debugbreak();
      goto LABEL_6;
    }
    Com_PrintError(25, "Error inviting users for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
  else
  {
    Com_Printf(25, "Invite users for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
}

/*
==============
OnKickMemberComplete
==============
*/
void OnKickMemberComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  Online_Error_CAT_GROUPS_t v7; 
  FenceChannel fenceChannel; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1497, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_statusString = "kicking member";
        v6 = NULL;
        v15.m_failureAction = FAILURE_FENCE;
        v7 = 1024;
        v15.m_channel = fenceChannel;
        goto LABEL_14;
      }
LABEL_15:
      Com_PrintError(25, "Error kicking member for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_19;
    }
    if ( taskState != TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1530, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "kicking member";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 0x400ui64);
      v7 = 2048;
LABEL_14:
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v7, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v14 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
    BYTE8(v13) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
  }
  Com_Printf(25, "Kick member complete for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_19:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnLeaveGroupComplete
==============
*/
void OnLeaveGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel fenceChannel; 
  const char *v6; 
  FenceChannel v8; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1585, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      if ( taskState == TASKSTATE_CANCELED )
      {
LABEL_10:
        fenceChannel = m_appData->fenceChannel;
        if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
        {
          v15.m_statusIsCustomErrorString = 0;
          v15.m_statusString = "leave group";
          v15.m_failureAction = FAILURE_FENCE;
          v15.m_channel = fenceChannel;
          v6 = j_va("%zu", 0x10ui64);
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
          __asm
          {
            vmovups ymm0, [rsp+78h+var_28]
            vmovups [rsp+78h+var_28], ymm0
          }
          OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
        }
        Com_PrintError(25, "Canceled leaving group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        goto LABEL_19;
      }
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1619, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
      goto LABEL_10;
    }
    v8 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_statusString = "leave group";
      v15.m_channel = v8;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)16, NULL);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Error leaving group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
  else
  {
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v14 = m_appData->fenceChannel;
      __asm { vmovsd  xmm1, [rsp+78h+var_38] }
      *(_QWORD *)&v13 = "successfully left group";
      BYTE8(v13) = 0;
      __asm
      {
        vmovups xmm0, [rsp+78h+var_48]
        vmovups xmmword ptr [rsp+78h+var_28], xmm0
        vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
      }
      OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
    }
    Com_Printf(25, "group left for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
LABEL_19:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnRejectApplicationComplete
==============
*/
void OnRejectApplicationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel fenceChannel; 
  const char *v6; 
  FenceChannel v8; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1409, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState > TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      if ( taskState == TASKSTATE_CANCELED )
      {
LABEL_10:
        fenceChannel = m_appData->fenceChannel;
        if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
        {
          v15.m_statusIsCustomErrorString = 0;
          v15.m_statusString = "rejecting application";
          v15.m_failureAction = FAILURE_FENCE;
          v15.m_channel = fenceChannel;
          v6 = j_va("%zu", 0x200ui64);
          OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
          __asm
          {
            vmovups ymm0, [rsp+78h+var_28]
            vmovups [rsp+78h+var_28], ymm0
          }
          OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
        }
        Com_PrintError(25, "Canceled rejecting application for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        goto LABEL_19;
      }
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 1442, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
      goto LABEL_10;
    }
    v8 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "rejecting application";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v8;
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)512, NULL);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Error rejecting application for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
  else
  {
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v14 = m_appData->fenceChannel;
      __asm { vmovsd  xmm1, [rsp+78h+var_38] }
      *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
      BYTE8(v13) = 0;
      __asm
      {
        vmovups xmm0, [rsp+78h+var_48]
        vmovups xmmword ptr [rsp+78h+var_28], xmm0
        vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
      }
      OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
    }
    Com_Printf(25, "Reject application complete for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  }
LABEL_19:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnRejectInvitationsComplete
==============
*/
void OnRejectInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 v3; 

  if ( taskState == TASKSTATE_PENDING )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 471, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
      __debugbreak();
  }
  else
  {
    if ( taskState == TASKSTATE_SUCCESS )
    {
      Com_Printf(25, "Group memberships rejected for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      return;
    }
    if ( taskState > TASKSTATE_SUCCESS )
    {
      if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
      {
        Com_PrintError(25, "Error rejecting group membership for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        return;
      }
      if ( taskState <= TASKSTATE_CANCELED )
      {
        Com_PrintError(25, "Canceled rejecting group membership for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
        return;
      }
    }
  }
  LODWORD(v3) = taskState;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 488, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v3) )
    __debugbreak();
}

/*
==============
OnRetrieveGroupInvitationsComplete
==============
*/
void OnRetrieveGroupInvitationsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 331, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_failureAction = FAILURE_FENCE;
        v15.m_statusString = "retrieve group invitations";
        v15.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)4, NULL);
        __asm
        {
          vmovups ymm0, [rsp+78h+var_28]
          vmovups [rsp+78h+var_28], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      }
      Com_PrintError(25, "Error fetching group invitations for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_16;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 371, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "retrieve group invitations";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 4ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Canceled fetching group invitations for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_16:
    s_groupData[pTask->m_controllerIndex].teamProposalValid = 0;
    s_groupData[pTask->m_controllerIndex].teamProposalCount = 0;
    s_groupData[pTask->m_controllerIndex].totalTeamProposalCount = 0;
    goto LABEL_20;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v14 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v13 = "successfully retrieved group invitations";
    BYTE8(v13) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
  }
  Com_Printf(25, "Group invitations fetched for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  s_groupData[pTask->m_controllerIndex].teamProposalValid = 1;
  s_groupData[pTask->m_controllerIndex].teamProposalCount = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
  s_groupData[pTask->m_controllerIndex].totalTeamProposalCount = bdRemoteTask::getTotalNumResults(pTask->m_remoteDemonwareTask.m_ptr);
LABEL_20:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnRetrieveGroupMembershipsComplete
==============
*/
void OnRetrieveGroupMembershipsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  bdRemoteTask *m_ptr; 
  unsigned int NumResults; 
  __int64 v14; 
  __int128 v15; 
  FenceChannel v16; 
  FenceFailureParameters v17; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 213, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v17.m_statusIsCustomErrorString = 0;
        v17.m_failureAction = FAILURE_FENCE;
        v17.m_statusString = "retrieve group memberships";
        v17.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
        __asm
        {
          vmovups ymm0, [rsp+78h+var_28]
          vmovups [rsp+78h+var_28], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v17);
      }
      Com_PrintError(25, "Error fetching group membership for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_13;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v14) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 252, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v14) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v17.m_statusIsCustomErrorString = 0;
      v17.m_statusString = "retrieve group memberships";
      v17.m_failureAction = FAILURE_FENCE;
      v17.m_channel = v5;
      v6 = j_va("%zu", 1ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v17);
    }
    Com_PrintError(25, "Canceled fetching  group membership for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_13:
    s_groupData[pTask->m_controllerIndex].teamInfoValid = 0;
    s_groupData[pTask->m_controllerIndex].teamInfoCount = 0;
    goto LABEL_22;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v16 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v15 = "successfully retrieved group memberships";
    BYTE8(v15) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v17);
  }
  Com_Printf(25, "Group membership fetched for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  s_groupData[pTask->m_controllerIndex].teamInfoValid = 1;
  s_groupData[pTask->m_controllerIndex].teamInfoCount = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
  m_ptr = pTask->m_remoteDemonwareTask.m_ptr;
  NumResults = bdRemoteTask::getNumResults(m_ptr);
  if ( NumResults != bdRemoteTask::getTotalNumResults(m_ptr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 233, ASSERT_TYPE_ASSERT, "(pTask->m_remoteDemonwareTask->getNumResults() == pTask->m_remoteDemonwareTask->getTotalNumResults())", (const char *)&queryFormat, "pTask->m_remoteDemonwareTask->getNumResults() == pTask->m_remoteDemonwareTask->getTotalNumResults()") )
    __debugbreak();
LABEL_22:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnSearchForGroupComplete
==============
*/
void OnSearchForGroupComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel v5; 
  const char *v6; 
  FenceChannel fenceChannel; 
  __int64 v12; 
  __int128 v13; 
  FenceChannel v14; 
  FenceFailureParameters v15; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 693, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( taskState <= TASKSTATE_SUCCESS )
      goto LABEL_8;
    if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v15.m_statusIsCustomErrorString = 0;
        v15.m_failureAction = FAILURE_FENCE;
        v15.m_statusString = "search for groups";
        v15.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, DODGE, NULL);
        __asm
        {
          vmovups ymm0, [rsp+78h+var_28]
          vmovups [rsp+78h+var_28], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
      }
      Com_PrintError(25, "Error searching for groups for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      goto LABEL_16;
    }
    if ( taskState > TASKSTATE_CANCELED )
    {
LABEL_8:
      LODWORD(v12) = taskState;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 734, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled task state %d", v12) )
        __debugbreak();
    }
    v5 = m_appData->fenceChannel;
    if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
    {
      v15.m_statusIsCustomErrorString = 0;
      v15.m_statusString = "search for groups";
      v15.m_failureAction = FAILURE_FENCE;
      v15.m_channel = v5;
      v6 = j_va("%zu", 1ui64);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)2048, v6);
      __asm
      {
        vmovups ymm0, [rsp+78h+var_28]
        vmovups [rsp+78h+var_28], ymm0
      }
      OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v15);
    }
    Com_PrintError(25, "Canceled searching for groups for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
LABEL_16:
    s_groupData[pTask->m_controllerIndex].searchResultCount = 0;
    s_groupData[pTask->m_controllerIndex].totalSearchResultCount = 0;
    goto LABEL_20;
  }
  if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
  {
    v14 = m_appData->fenceChannel;
    __asm { vmovsd  xmm1, [rsp+78h+var_38] }
    *(_QWORD *)&v13 = (char *)&queryFormat.fmt + 3;
    BYTE8(v13) = 0;
    __asm
    {
      vmovups xmm0, [rsp+78h+var_48]
      vmovups xmmword ptr [rsp+78h+var_28], xmm0
      vmovsd  qword ptr [rsp+78h+var_28+10h], xmm1
    }
    OnlineErrorManager::FenceSuccess(&g_onlineMgr.m_errorManager, -1, (FenceSuccessParameters *)&v15);
  }
  Com_Printf(25, "Group search succeeded for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
  s_groupData[pTask->m_controllerIndex].searchResultCount = bdRemoteTask::getNumResults(pTask->m_remoteDemonwareTask.m_ptr);
  s_groupData[pTask->m_controllerIndex].totalSearchResultCount = bdRemoteTask::getTotalNumResults(pTask->m_remoteDemonwareTask.m_ptr);
LABEL_20:
  ReleaseTaskDataSlot(m_appData);
}

/*
==============
OnSetTeamAutoJoinComplete
==============
*/
void OnSetTeamAutoJoinComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  GroupTaskData *m_appData; 
  FenceChannel fenceChannel; 
  unsigned int Memberships; 
  FenceChannel v8; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  FenceFailureParameters v12; 
  __int64 v13; 
  FenceFailureParameters v14; 

  v13 = -2i64;
  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 515, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_appData = (GroupTaskData *)pTask->m_appData;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      fenceChannel = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v12.m_statusIsCustomErrorString = 0;
        v12.m_statusString = "create group";
        v12.m_failureAction = FAILURE_FENCE;
        v12.m_channel = fenceChannel;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)8, NULL);
        __asm
        {
          vmovups ymm0, [rbp+57h+var_50]
          vmovups [rbp+57h+var_50], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v12);
      }
      Com_PrintError(25, "Error creating group for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
      ReleaseTaskDataSlot(m_appData);
    }
  }
  else
  {
    *(_QWORD *)&request.m_controllerIndex = -1i64;
    memset(&request.m_appData, 0, 48);
    request.m_cancelTaskOnSignoutEvent = 1;
    request.m_timeoutInSeconds = 0;
    Com_Printf(25, "auto join set for controller %d.\n", (unsigned int)pTask->m_controllerIndex);
    request.m_appData = pTask->m_appData;
    request.m_controllerIndex = pTask->m_controllerIndex;
    request.m_onCompletionCallback = OnRetrieveGroupMembershipsComplete;
    Memberships = dwGetMemberships(&request, s_groupData[request.m_controllerIndex].teamInfo, 10);
    m_appData->taskId = Memberships;
    if ( !Memberships )
    {
      v8 = m_appData->fenceChannel;
      if ( m_appData->fenceChannel != FENCE_CHANNEL_NONE )
      {
        v12.m_statusIsCustomErrorString = 0;
        v12.m_statusString = "setting auto join";
        v12.m_failureAction = FAILURE_FENCE;
        v12.m_channel = v8;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_GROUPS_t)128, NULL);
        __asm
        {
          vmovups ymm0, [rbp+57h+var_50]
          vmovups [rbp+57h+var_20], ymm0
        }
        OnlineErrorManager::FenceFailure(&g_onlineMgr.m_errorManager, &v14);
      }
      ReleaseTaskDataSlot(m_appData);
    }
    request.m_onCompletionCallback = NULL;
    request.m_onUpdateCallback = NULL;
    request.m_appSecondaryCallback = NULL;
    request.m_timeoutInSeconds = 0;
    m_asyncInfo = request.m_asyncInfo;
    if ( request.m_asyncInfo )
    {
      request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
      m_asyncInfo = NULL;
      request.m_asyncInfo = NULL;
    }
    if ( request.m_remoteDemonwareTask.m_ptr )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
      {
        if ( request.m_remoteDemonwareTask.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
        request.m_remoteDemonwareTask.m_ptr = NULL;
      }
      m_asyncInfo = request.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
  }
}

/*
==============
OnlineGroupsManager::RejectApplication
==============
*/
void OnlineGroupsManager::RejectApplication(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int applicationIndex)
{
  __int64 v4; 
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  __int64 v8; 
  bdUserAccountID *v9; 
  unsigned int v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest v14; 
  __int128 v15; 
  FenceChannel v16; 
  __int64 v17; 
  FenceStartParameters v18; 
  bdUserAccountID v19; 

  v17 = -2i64;
  v4 = applicationIndex;
  v6 = controllerIndex;
  *(_QWORD *)&v14.m_controllerIndex = -1i64;
  memset(&v14.m_appData, 0, 48);
  v14.m_cancelTaskOnSignoutEvent = 1;
  v14.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  if ( UnusedTaskDataSlot )
  {
    v14.m_controllerIndex = v6;
    v14.m_onCompletionCallback = OnRejectApplicationComplete;
    v14.m_appData = UnusedTaskDataSlot;
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    v8 = 27880 * v6 + 288 * v4;
    bdUserAccountID::bdUserAccountID(&v19, (const bdUserAccountID *)((char *)&s_groupData[0].applications[0].__vftable + v8 + 24));
    v10 = dwRejectApplication(&v14, *(unsigned __int64 *)((char *)&s_groupData[0].applications[0].__vftable + v8 + 16), v9);
    UnusedTaskDataSlot->taskId = v10;
    if ( v10 )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v15) = 0;
        v16 = fenceChannel;
        *((_QWORD *)&v15 + 1) = "searching for groups";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_C0]
          vmovups [rbp+57h+var_90], xmm0
          vmovsd  xmm1, [rbp+57h+var_B0]
          vmovsd  [rbp+57h+var_80], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v18);
      }
    }
  }
  v14.m_onCompletionCallback = NULL;
  v14.m_onUpdateCallback = NULL;
  v14.m_appSecondaryCallback = NULL;
  v14.m_timeoutInSeconds = 0;
  m_asyncInfo = v14.m_asyncInfo;
  if ( v14.m_asyncInfo )
  {
    v14.m_asyncInfo->__abi_Release(v14.m_asyncInfo);
    m_asyncInfo = NULL;
    v14.m_asyncInfo = NULL;
  }
  if ( v14.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v14.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( v14.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v14.m_remoteDemonwareTask.m_ptr->~bdReferencable)(v14.m_remoteDemonwareTask.m_ptr, 1i64);
      v14.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = v14.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::RejectInvitations
==============
*/
void OnlineGroupsManager::RejectInvitations(OnlineGroupsManager *this, const int controllerIndex, const int *invitationIndices, int numInvitations)
{
  int v4; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int64 *acceptMemberships; 
  __int64 v9; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v11; 
  __int64 v12; 
  TaskCreateRequest request; 

  v4 = numInvitations;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  if ( numInvitations > 0 )
  {
    v7 = controllerIndex;
    acceptMemberships = s_groupData[v7].acceptMemberships;
    v9 = (unsigned int)numInvitations;
    do
    {
      if ( *invitationIndices >= (unsigned int)s_groupData[v7].teamProposalCount )
      {
        LODWORD(v12) = s_groupData[v7].teamProposalCount;
        LODWORD(v11) = *invitationIndices;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 500, ASSERT_TYPE_ASSERT, "(unsigned)( invitationIndices[invitationIndex] ) < (unsigned)( s_groupData[controllerIndex].teamProposalCount )", "invitationIndices[invitationIndex] doesn't index s_groupData[controllerIndex].teamProposalCount\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      *acceptMemberships++ = *(_QWORD *)&s_groupData[0].teamProposal[*invitationIndices++].m_userID[v7 * 27880 + 56];
      --v9;
    }
    while ( v9 );
    v4 = numInvitations;
  }
  request.m_controllerIndex = v6;
  request.m_onCompletionCallback = OnRejectInvitationsComplete;
  dwRejectMemberships(&request, s_groupData[v6].acceptMemberships, s_groupData[v6].failedAccepts, v4);
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
ReleaseTaskDataSlot
==============
*/
void ReleaseTaskDataSlot(GroupTaskData *taskData)
{
  unsigned int *p_taskId; 
  signed __int64 v3; 
  __int64 v4; 

  if ( !taskData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 202, ASSERT_TYPE_ASSERT, "(taskData)", (const char *)&queryFormat, "taskData") )
    __debugbreak();
  p_taskId = &taskData->taskId;
  if ( !taskData->taskId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 203, ASSERT_TYPE_ASSERT, "(taskData->taskId != 0)", (const char *)&queryFormat, "taskData->taskId != TASK_MANAGER_INVALID_TASK_ID") )
    __debugbreak();
  v3 = taskData - s_taskData;
  if ( (unsigned int)v3 >= 8 )
  {
    LODWORD(v4) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_groups.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( taskData - s_taskData ) < (unsigned)( 8 )", "taskData - s_taskData doesn't index MAX_GROUP_TASKS_IN_PROGRESS\n\t%i not in [0, %i)", v4, 8) )
      __debugbreak();
  }
  *p_taskId = 0;
}

/*
==============
OnlineGroupsManager::RetrieveGroupInvitations
==============
*/
void OnlineGroupsManager::RetrieveGroupInvitations(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const int offset)
{
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v8; 
  unsigned int IncomingProposals; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v14; 
  FenceChannel v15; 
  __int64 v16; 
  FenceStartParameters v17; 

  v16 = -2i64;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v8 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v6;
    request.m_onCompletionCallback = OnRetrieveGroupInvitationsComplete;
    IncomingProposals = dwGetIncomingProposals(&request, s_groupData[v6].teamProposal, 16, offset);
    v8->taskId = IncomingProposals;
    if ( IncomingProposals )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v14) = 0;
        v15 = fenceChannel;
        *((_QWORD *)&v14 + 1) = "retrieving invitations";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_50]
          vmovups [rbp+57h+var_30], xmm0
          vmovsd  xmm1, [rbp+57h+var_40]
          vmovsd  [rbp+57h+var_20], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v17);
      }
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::RetrieveGroupMemberships
==============
*/
void OnlineGroupsManager::RetrieveGroupMemberships(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel)
{
  __int64 v4; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v6; 
  unsigned int Memberships; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v12; 
  FenceChannel v13; 
  __int64 v14; 
  FenceStartParameters v15; 

  v14 = -2i64;
  v4 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v6 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v4;
    request.m_onCompletionCallback = OnRetrieveGroupMembershipsComplete;
    Memberships = dwGetMemberships(&request, s_groupData[v4].teamInfo, 10);
    v6->taskId = Memberships;
    if ( Memberships )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v12) = 0;
        v13 = fenceChannel;
        *((_QWORD *)&v12 + 1) = "retrieving memberships";
        __asm
        {
          vmovups xmm0, [rbp+57h+var_50]
          vmovups [rbp+57h+var_30], xmm0
          vmovsd  xmm1, [rbp+57h+var_40]
          vmovsd  [rbp+57h+var_20], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v4, &v15);
      }
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

/*
==============
OnlineGroupsManager::SearchForGroup
==============
*/
void OnlineGroupsManager::SearchForGroup(OnlineGroupsManager *this, const int controllerIndex, FenceChannel fenceChannel, const char *name)
{
  __int64 v6; 
  GroupTaskData *UnusedTaskDataSlot; 
  GroupTaskData *v8; 
  unsigned int numProfileFilters; 
  __int64 v10; 
  unsigned int v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest request; 
  __int128 v16; 
  FenceChannel v17; 
  __int64 v18; 
  FenceStartParameters v19; 

  v18 = -2i64;
  v6 = controllerIndex;
  *(_QWORD *)&request.m_controllerIndex = -1i64;
  memset(&request.m_appData, 0, 48);
  request.m_cancelTaskOnSignoutEvent = 1;
  request.m_timeoutInSeconds = 0;
  UnusedTaskDataSlot = GetUnusedTaskDataSlot();
  v8 = UnusedTaskDataSlot;
  if ( UnusedTaskDataSlot )
  {
    UnusedTaskDataSlot->fenceChannel = fenceChannel;
    request.m_appData = UnusedTaskDataSlot;
    request.m_controllerIndex = v6;
    request.m_onCompletionCallback = OnSearchForGroupComplete;
    numProfileFilters = 0;
    if ( name && *name )
    {
      v10 = v6;
      strncpy(s_groupData[v6].searchFilters[0]._bytes_20, "teamName", 0x40ui64);
      strncpy(s_groupData[v6].searchFilters[0].m_searchOperator, "LIKE", 0xAui64);
      j_snprintf(s_groupData[v6].searchFilters[0].m_value, 0x40ui64, "%%%s%%", name);
      numProfileFilters = 1;
    }
    else
    {
      v10 = v6;
    }
    v11 = dwSearchTeams(&request, s_groupData[v10].searchResults, 0, 0, numProfileFilters, NULL, NULL, s_groupData[v10].searchFilters, 0, 0x14u);
    v8->taskId = v11;
    if ( v11 )
    {
      if ( fenceChannel != FENCE_CHANNEL_NONE )
      {
        LOBYTE(v16) = 0;
        v17 = fenceChannel;
        *((_QWORD *)&v16 + 1) = "searching for groups";
        __asm
        {
          vmovups xmm0, [rbp+4Fh+var_60]
          vmovups [rbp+4Fh+var_40], xmm0
          vmovsd  xmm1, [rbp+4Fh+var_50]
          vmovsd  [rbp+4Fh+var_30], xmm1
        }
        OnlineErrorManager::StartFence(&g_onlineMgr.m_errorManager, v6, &v19);
      }
    }
  }
  request.m_onCompletionCallback = NULL;
  request.m_onUpdateCallback = NULL;
  request.m_appSecondaryCallback = NULL;
  request.m_timeoutInSeconds = 0;
  m_asyncInfo = request.m_asyncInfo;
  if ( request.m_asyncInfo )
  {
    request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
    m_asyncInfo = NULL;
    request.m_asyncInfo = NULL;
  }
  if ( request.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( request.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
      request.m_remoteDemonwareTask.m_ptr = NULL;
    }
    m_asyncInfo = request.m_asyncInfo;
  }
  if ( m_asyncInfo )
    m_asyncInfo->__abi_Release(m_asyncInfo);
}

