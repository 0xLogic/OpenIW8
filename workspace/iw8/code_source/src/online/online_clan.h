/*
==============
OnlineClan::OnlineClan
==============
*/

void __fastcall OnlineClan::OnlineClan(OnlineClan *this)
{
  ??0OnlineClan@@QEAA@XZ(this);
}

/*
==============
OnlineClan::OnlineClan
==============
*/
void OnlineClan::OnlineClan(OnlineClan *this)
{
  this->m_state = IDLE;
  *(_WORD *)&this->m_updatingClan = 0;
  this->m_controllerIndex = -1;
  this->m_id = 0i64;
  this->m_createdTimestamp = 0;
  *(_WORD *)&this->m_activateAfterInit = 0;
  *(_QWORD *)&this->m_deactivatedNumMembers = 0i64;
  XUID::XUID(&this->m_owner);
  bdClansGroupInfo::bdClansGroupInfo(&this->m_groupInfoResponse);
  bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse(&this->m_getGroupInfoResponse);
  bdClansGetGroupMembersResponse::bdClansGetGroupMembersResponse(&this->m_getGroupMembersResponse);
  bdClansGetMembershipProposalsByGroupResponse::bdClansGetMembershipProposalsByGroupResponse(&this->m_getMembershipProposalsByGroupResponse);
  bdClansProposeMembershipsResponse::bdClansProposeMembershipsResponse(&this->m_proposeMembershipsResponse);
  bdClansRemoveProposalsResponse::bdClansRemoveProposalsResponse(&this->m_removeProposalsResponse);
  bdClansAddOrUpdateGroupMemberResponse::bdClansAddOrUpdateGroupMemberResponse(&this->m_addOrUpdateGroupMemberResponse);
  bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse(&this->m_leaveClanResponse);
  bdClansGetGroupFileResponse::bdClansGetGroupFileResponse(&this->m_getGroupFileResponse);
  bdClansUploadGroupFileResponse::bdClansUploadGroupFileResponse(&this->m_uploadGroupFileResponse);
  bdChannelCreateChannelResponse::bdChannelCreateChannelResponse(&this->m_createChannelResponse);
  bdClansRemoveGroupMemberResponse::bdClansRemoveGroupMemberResponse(&this->m_removeMemberData.removeGroupMemberResponse);
  XUID::XUID(&this->m_removeMemberData.removedMember);
}

