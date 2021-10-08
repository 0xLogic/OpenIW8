/*
==============
bdMW4Service::uploadGroupFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::uploadGroupFile(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUploadGroupFileRequest *request, bdClansUploadGroupFileResponse *response)
{
  return ?uploadGroupFile@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansUploadGroupFileRequest@@PEAVbdClansUploadGroupFileResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::removeProposals
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::removeProposals(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansRemoveProposalsRequest *request, bdClansRemoveProposalsResponse *response)
{
  return ?removeProposals@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansRemoveProposalsRequest@@PEAVbdClansRemoveProposalsResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::setActiveGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::setActiveGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansSetActiveGroupRequest *request)
{
  return ?setActiveGroup@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansSetActiveGroupRequest@@@Z(this, result, request);
}

/*
==============
bdMW4Service::getGroupMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getGroupMembers(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupMembersRequest *request, bdClansGetGroupMembersResponse *response)
{
  return ?getGroupMembers@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetGroupMembersRequest@@PEAVbdClansGetGroupMembersResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::deleteGroupFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::deleteGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansDeleteGroupFilesRequest *request, bdClansDeleteGroupFilesResponse *response)
{
  return ?deleteGroupFiles@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansDeleteGroupFilesRequest@@PEAVbdClansDeleteGroupFilesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::updateGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::updateGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUpdateGroupRequest *request, bdClansGroupInfo *response)
{
  return ?updateGroup@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansUpdateGroupRequest@@PEAVbdClansGroupInfo@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::uploadGroupFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::uploadGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUploadGroupFilesRequest *request, bdClansUploadGroupFilesResponse *response)
{
  return ?uploadGroupFiles@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansUploadGroupFilesRequest@@PEAVbdClansUploadGroupFilesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::getGroupFile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getGroupFile(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupFileRequest *request, bdClansGetGroupFileResponse *response)
{
  return ?getGroupFile@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetGroupFileRequest@@PEAVbdClansGetGroupFileResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::addOrUpdateGroupMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::addOrUpdateGroupMember(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansAddOrUpdateGroupMemberRequest *request, bdClansAddOrUpdateGroupMemberResponse *response)
{
  return ?addOrUpdateGroupMember@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansAddOrUpdateGroupMemberRequest@@PEAVbdClansAddOrUpdateGroupMemberResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::getMembershipProposalsByGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getMembershipProposalsByGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipProposalsByGroupRequest *request, bdClansGetMembershipProposalsByGroupResponse *response)
{
  return ?getMembershipProposalsByGroup@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetMembershipProposalsByGroupRequest@@PEAVbdClansGetMembershipProposalsByGroupResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::findGroups
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::findGroups(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansFindGroupsRequest *request, bdClansFindGroupsResponse *response)
{
  return ?findGroups@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansFindGroupsRequest@@PEAVbdClansFindGroupsResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::startTask
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::startTask(bdMW4Service *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  return ?startTask@bdMW4Service@@IEAA?AV?$bdReference@VbdRemoteTask@@@@EAEBVbdStructBufferSerializable@@PEAV3@@Z(this, result, taskID, request, response);
}

/*
==============
bdMW4Service::bdMW4Service
==============
*/

void __fastcall bdMW4Service::bdMW4Service(bdMW4Service *this, bdRemoteTaskManager *const remoteTaskManager)
{
  ??0bdMW4Service@@QEAA@QEAVbdRemoteTaskManager@@@Z(this, remoteTaskManager);
}

/*
==============
bdMW4Service::getGroupFiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupFilesRequest *request, bdClansGetGroupFilesResponse *response)
{
  return ?getGroupFiles@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetGroupFilesRequest@@PEAVbdClansGetGroupFilesResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::createGroup
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::createGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansCreateGroupRequest *request, bdClansGroupInfo *response)
{
  return ?createGroup@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansCreateGroupRequest@@PEAVbdClansGroupInfo@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::getMembershipProposalsByUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getMembershipProposalsByUser(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipProposalsByUserRequest *request, bdClansGetMembershipProposalsByUserResponse *response)
{
  return ?getMembershipProposalsByUser@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetMembershipProposalsByUserRequest@@PEAVbdClansGetMembershipProposalsByUserResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::proposeMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::proposeMemberships(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansProposeMembershipsRequest *request, bdClansProposeMembershipsResponse *response)
{
  return ?proposeMemberships@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansProposeMembershipsRequest@@PEAVbdClansProposeMembershipsResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::getGroupInfos
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getGroupInfos(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupInfosRequest *request, bdClansGetGroupInfosResponse *response)
{
  return ?getGroupInfos@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetGroupInfosRequest@@PEAVbdClansGetGroupInfosResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::removeGroupMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::removeGroupMember(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansRemoveGroupMemberRequest *request, bdClansRemoveGroupMemberResponse *response)
{
  return ?removeGroupMember@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansRemoveGroupMemberRequest@@PEAVbdClansRemoveGroupMemberResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::getMembershipsByUsers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdMW4Service::getMembershipsByUsers(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipsByUsersRequest *request, bdClansGetMembershipsByUsersResponse *response)
{
  return ?getMembershipsByUsers@bdMW4Service@@QEAA?AV?$bdReference@VbdRemoteTask@@@@AEBVbdClansGetMembershipsByUsersRequest@@PEAVbdClansGetMembershipsByUsersResponse@@@Z(this, result, request, response);
}

/*
==============
bdMW4Service::bdMW4Service
==============
*/
void bdMW4Service::bdMW4Service(bdMW4Service *this, bdRemoteTaskManager *const remoteTaskManager)
{
  this->m_remoteTaskManager = remoteTaskManager;
}

/*
==============
bdMW4Service::addOrUpdateGroupMember
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::addOrUpdateGroupMember(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansAddOrUpdateGroupMemberRequest *request, bdClansAddOrUpdateGroupMemberResponse *response)
{
  bdMW4Service::startTask(this, result, 0x17u, request, response);
  return result;
}

/*
==============
bdMW4Service::createGroup
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::createGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansCreateGroupRequest *request, bdClansGroupInfo *response)
{
  bdMW4Service::startTask(this, result, 0x14u, request, response);
  return result;
}

/*
==============
bdMW4Service::deleteGroupFiles
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::deleteGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansDeleteGroupFilesRequest *request, bdClansDeleteGroupFilesResponse *response)
{
  bdMW4Service::startTask(this, result, 0x23u, request, response);
  return result;
}

/*
==============
bdMW4Service::findGroups
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::findGroups(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansFindGroupsRequest *request, bdClansFindGroupsResponse *response)
{
  bdMW4Service::startTask(this, result, 0x24u, request, response);
  return result;
}

/*
==============
bdMW4Service::getGroupFile
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getGroupFile(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupFileRequest *request, bdClansGetGroupFileResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Fu, request, response);
  return result;
}

/*
==============
bdMW4Service::getGroupFiles
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupFilesRequest *request, bdClansGetGroupFilesResponse *response)
{
  bdMW4Service::startTask(this, result, 0x21u, request, response);
  return result;
}

/*
==============
bdMW4Service::getGroupInfos
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getGroupInfos(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupInfosRequest *request, bdClansGetGroupInfosResponse *response)
{
  bdMW4Service::startTask(this, result, 0x15u, request, response);
  return result;
}

/*
==============
bdMW4Service::getGroupMembers
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getGroupMembers(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetGroupMembersRequest *request, bdClansGetGroupMembersResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Du, request, response);
  return result;
}

/*
==============
bdMW4Service::getMembershipProposalsByGroup
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getMembershipProposalsByGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipProposalsByGroupRequest *request, bdClansGetMembershipProposalsByGroupResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Bu, request, response);
  return result;
}

/*
==============
bdMW4Service::getMembershipProposalsByUser
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getMembershipProposalsByUser(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipProposalsByUserRequest *request, bdClansGetMembershipProposalsByUserResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Cu, request, response);
  return result;
}

/*
==============
bdMW4Service::getMembershipsByUsers
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::getMembershipsByUsers(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansGetMembershipsByUsersRequest *request, bdClansGetMembershipsByUsersResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Eu, request, response);
  return result;
}

/*
==============
bdMW4Service::proposeMemberships
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::proposeMemberships(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansProposeMembershipsRequest *request, bdClansProposeMembershipsResponse *response)
{
  bdMW4Service::startTask(this, result, 0x19u, request, response);
  return result;
}

/*
==============
bdMW4Service::removeGroupMember
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::removeGroupMember(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansRemoveGroupMemberRequest *request, bdClansRemoveGroupMemberResponse *response)
{
  bdMW4Service::startTask(this, result, 0x18u, request, response);
  return result;
}

/*
==============
bdMW4Service::removeProposals
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::removeProposals(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansRemoveProposalsRequest *request, bdClansRemoveProposalsResponse *response)
{
  bdMW4Service::startTask(this, result, 0x1Au, request, response);
  return result;
}

/*
==============
bdMW4Service::setActiveGroup
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::setActiveGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansSetActiveGroupRequest *request)
{
  bdMW4Service::startTask(this, result, 0x25u, request, NULL);
  return result;
}

/*
==============
bdMW4Service::startTask
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::startTask(bdMW4Service *this, bdReference<bdRemoteTask> *result, unsigned __int8 taskID, const bdStructBufferSerializable *request, bdStructBufferSerializable *response)
{
  bdLobbyErrorCode started; 
  bdStructBufferTask *m_ptr; 
  int v10; 
  bdLobbyErrorCode v11; 
  bdReference<bdStructBufferTask> v12; 

  v12.m_ptr = NULL;
  started = bdRemoteTaskManager::startStructTask(this->m_remoteTaskManager, &v12, 0xC5u, taskID, request, response, NULL);
  if ( started )
  {
    v11 = started;
    v10 = taskID;
    bdLogMessage(BD_LOG_WARNING, "warn/", "bdMW4Service", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdmw4\\bdmw4service.cpp", "bdMW4Service::startTask", 0x93u, "Failed to start bdMW4Service task: %d: Error %i", v10, v11);
  }
  m_ptr = v12.m_ptr;
  result->m_ptr = v12.m_ptr;
  if ( m_ptr )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 1u);
    m_ptr = v12.m_ptr;
  }
  if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v12.m_ptr )
    ((void (__fastcall *)(bdStructBufferTask *, __int64))v12.m_ptr->~bdReferencable)(v12.m_ptr, 1i64);
  return result;
}

/*
==============
bdMW4Service::updateGroup
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::updateGroup(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUpdateGroupRequest *request, bdClansGroupInfo *response)
{
  bdMW4Service::startTask(this, result, 0x16u, request, response);
  return result;
}

/*
==============
bdMW4Service::uploadGroupFile
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::uploadGroupFile(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUploadGroupFileRequest *request, bdClansUploadGroupFileResponse *response)
{
  bdMW4Service::startTask(this, result, 0x20u, request, response);
  return result;
}

/*
==============
bdMW4Service::uploadGroupFiles
==============
*/
bdReference<bdRemoteTask> *bdMW4Service::uploadGroupFiles(bdMW4Service *this, bdReference<bdRemoteTask> *result, const bdClansUploadGroupFilesRequest *request, bdClansUploadGroupFilesResponse *response)
{
  bdMW4Service::startTask(this, result, 0x22u, request, response);
  return result;
}

