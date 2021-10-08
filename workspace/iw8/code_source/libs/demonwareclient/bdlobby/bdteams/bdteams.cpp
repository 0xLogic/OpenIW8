/*
==============
bdTeams::getIncomingProposals
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getIncomingProposals(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID)
{
  return ?getIncomingProposals@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamProposal@@IVbdUserAccountID@@@Z(this, result, teamProposals, maxNumProposals, userID);
}

/*
==============
bdTeams::promoteMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::promoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?promoteMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::bdTeams
==============
*/

void __fastcall bdTeams::bdTeams(bdTeams *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  ??0bdTeams@@IEAA@QEAVbdRemoteTaskManager@@PEBD@Z(this, remoteTaskManager, context);
}

/*
==============
bdTeams::proposeMultipleMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::proposeMultipleMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamFailedProposal *proposalFailures, const unsigned __int64 teamID, const unsigned int numUsers, const bdUserAccountID *newUserIDs, const void *const attachment, const unsigned int attachmentSize)
{
  return ?proposeMultipleMemberships@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamFailedProposal@@_KIQEBVbdUserAccountID@@QEBXI@Z(this, result, proposalFailures, teamID, numUsers, newUserIDs, attachment, attachmentSize);
}

/*
==============
bdTeams::getMembershipsWithCountsAndTeamType
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembershipsWithCountsAndTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoAndTypeAndCounts *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  return ?getMembershipsWithCountsAndTeamType@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoAndTypeAndCounts@@IIVbdUserAccountID@@@Z(this, result, teamInfos, maxNumTeams, startTeamID, userID);
}

/*
==============
bdTeams::getMembersAndPrivileges
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembersAndPrivileges(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberAndPrivileges *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  return ?getMembersAndPrivileges@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMemberAndPrivileges@@II@Z(this, result, teamID, teamMembers, maxNumTeamMembers, offset);
}

/*
==============
bdTeams::promoteMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::promoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID, const unsigned int privileges)
{
  return ?promoteMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@I@Z(this, result, teamID, userID, privileges);
}

/*
==============
bdTeams::acceptMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::acceptMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamFailedHandleMembership *failures, const unsigned int numTeams, const bdUserAccountID *userID)
{
  return ?acceptMemberships@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamFailedHandleMembership@@IVbdUserAccountID@@@Z(this, result, teamIDs, failures, numTeams, userID);
}

/*
==============
bdTeams::createTeamWithProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeamWithProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  return ?createTeamWithProfiles@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdTeamProfile@@1QEAVbdTeamInfo@@VbdUserAccountID@@@Z(this, result, teamName, publicProfile, privateProfile, teamInfo, userID);
}

/*
==============
bdTeams::autoJoinTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::autoJoinTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?autoJoinTeam@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::promoteMemberToOwner
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::promoteMemberToOwner(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?promoteMemberToOwner@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::proposeMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::proposeMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newUserID, const void *const attachment, const unsigned int attachmentSize)
{
  return ?proposeMembership@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@QEBXI@Z(this, result, teamID, newUserID, attachment, attachmentSize);
}

/*
==============
bdTeams::getApplicationsByTeamPaginated
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getApplicationsByTeamPaginated(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, const unsigned int numOfTeams, bdTeamApplicationWithTeamID *applications, const unsigned int maxApplications, const unsigned int offset, const bool retrieveRejected, const bool retrieveWithdrawn, const bool retrievePending)
{
  return ?getApplicationsByTeamPaginated@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KIQEAVbdTeamApplicationWithTeamID@@II_N22@Z(this, result, teamIDs, numOfTeams, applications, maxApplications, offset, retrieveRejected, retrieveWithdrawn, retrievePending);
}

/*
==============
bdTeams::rejectMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::rejectMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamFailedHandleMembership *failures, const unsigned int numTeams, const bdUserAccountID *userID)
{
  return ?rejectMemberships@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamFailedHandleMembership@@IVbdUserAccountID@@@Z(this, result, teamIDs, failures, numTeams, userID);
}

/*
==============
bdTeams::setRichPresence
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setRichPresence(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const void *const data, const unsigned int dataSize)
{
  return ?setRichPresence@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBXI@Z(this, result, teamID, data, dataSize);
}

/*
==============
bdTeams::getMembersByOnlineStatus
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembersByOnlineStatus(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bool onlineStatus, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  return ?getMembersByOnlineStatus@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_NQEAVbdTeamMember@@II@Z(this, result, teamID, onlineStatus, teamMembers, maxNumTeamMembers, offset);
}

/*
==============
bdTeams::readTeamLeaderboard
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::readTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 firstRank, bdStatsInfo *statsResults, const unsigned int maxResults)
{
  return ?readTeamLeaderboard@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0QEAVbdStatsInfo@@I@Z(this, result, teamID, firstRank, statsResults, maxResults);
}

/*
==============
bdTeams::getPublicProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getPublicProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  return ?getPublicProfiles@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamProfile@@I@Z(this, result, teamIDs, publicProfiles, numTeams);
}

/*
==============
bdTeams::addApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::addApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 replacesTeamID, const bdUserAccountID *userID, const void *const attachment, const unsigned int attachmentSize)
{
  return ?addApplication@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K0VbdUserAccountID@@QEBXI@Z(this, result, teamID, replacesTeamID, userID, attachment, attachmentSize);
}

/*
==============
bdTeams::demoteMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::demoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?demoteMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::createTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  return ?createTeam@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfo@@VbdUserAccountID@@@Z(this, result, teamName, teamInfo, userID);
}

/*
==============
bdTeams::getBannedMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getBannedMembers(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamBannedMember *bannedMembers, const unsigned int offset, const unsigned int maxResults)
{
  return ?getBannedMembers@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamBannedMember@@II@Z(this, result, teamID, bannedMembers, offset, maxResults);
}

/*
==============
bdTeams::promoteMemberToOwnerV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::promoteMemberToOwnerV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID, const bool demoteOwnerToAdmin, const unsigned int privileges)
{
  return ?promoteMemberToOwnerV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@_NI@Z(this, result, teamID, userID, demoteOwnerToAdmin, privileges);
}

/*
==============
bdTeams::~bdTeams
==============
*/

void __fastcall bdTeams::~bdTeams(bdTeams *this)
{
  ??1bdTeams@@UEAA@XZ(this);
}

/*
==============
bdTeams::setPrivateMemberProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setPrivateMemberProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  return ?setPrivateMemberProfile@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamMemberProfile@@@Z(this, result, teamID, teamMemberProfile);
}

/*
==============
bdTeams::getMembers
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembers(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  return ?getMembers@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMember@@II@Z(this, result, teamID, teamMembers, maxNumTeamMembers, offset);
}

/*
==============
bdTeams::getTeamAutoJoin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamAutoJoinInfo *const autoJoinEnabled)
{
  return ?getTeamAutoJoin@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamAutoJoinInfo@@@Z(this, result, teamID, autoJoinEnabled);
}

/*
==============
bdTeams::rejectApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::rejectApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  return ?rejectApplication@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, applicantID);
}

/*
==============
bdTeams::getMembershipsV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembershipsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  return ?getMembershipsV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoV2@@IIVbdUserAccountID@@@Z(this, result, teamInfos, maxNumTeams, startTeamID, userID);
}

/*
==============
bdTeams::getMemberships
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfo *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  return ?getMemberships@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfo@@IIVbdUserAccountID@@@Z(this, result, teamInfos, maxNumTeams, startTeamID, userID);
}

/*
==============
bdTeams::createTeamWithProfilesAndTeamType
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeamWithProfilesAndTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoAndType *const teamInfo, const bdUserAccountID *userID, const unsigned __int8 *const teamType)
{
  return ?createTeamWithProfilesAndTeamType@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdTeamProfile@@1QEAVbdTeamInfoAndType@@VbdUserAccountID@@QEBE@Z(this, result, teamName, publicProfile, privateProfile, teamInfo, userID, teamType);
}

/*
==============
bdTeams::setTeamLeaderboard
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int leaderboardID)
{
  return ?setTeamLeaderboard@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KI@Z(this, result, teamID, leaderboardID);
}

/*
==============
bdTeams::getMembersWithPrivilegesByRole
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembersWithPrivilegesByRole(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int8 memberRole, bdTeamMemberWithPrivileges *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  return ?getMembersWithPrivilegesByRole@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KEQEAVbdTeamMemberWithPrivileges@@II_N@Z(this, result, teamID, memberRole, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
}

/*
==============
bdTeams::setPublicMemberProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setPublicMemberProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  return ?setPublicMemberProfile@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamMemberProfile@@@Z(this, result, teamID, teamMemberProfile);
}

/*
==============
bdTeams::banMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::banMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *bannedUserID, const void *const attachment, const unsigned int attachmentSize)
{
  return ?banMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@QEBXI@Z(this, result, teamID, bannedUserID, attachment, attachmentSize);
}

/*
==============
bdTeams::createTeamV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeamV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const bool autoJoinEnabled)
{
  return ?createTeamV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfoV2@@VbdUserAccountID@@_N@Z(this, result, teamName, teamInfo, userID, autoJoinEnabled);
}

/*
==============
bdTeams::deleteTeamLeaderboard
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::deleteTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  return ?deleteTeamLeaderboard@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K@Z(this, result, teamID);
}

/*
==============
bdTeams::getApplicationsByTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getApplicationsByTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamApplication *applications, const unsigned int maxApplications, const unsigned int offset, const bool retrieveRejected, const bool retrieveWithdrawn, const bool retrievePending)
{
  return ?getApplicationsByTeam@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamApplication@@II_N22@Z(this, result, teamID, applications, maxApplications, offset, retrieveRejected, retrieveWithdrawn, retrievePending);
}

/*
==============
bdTeams::updateTeamType
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::updateTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int8 teamType, const bdUserAccountID *userID)
{
  return ?updateTeamType@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KEVbdUserAccountID@@@Z(this, result, teamID, teamType, userID);
}

/*
==============
bdTeams::acceptApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::acceptApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  return ?acceptApplication@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, applicantID);
}

/*
==============
bdTeams::unbanMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::unbanMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *unbannedUserID)
{
  return ?unbanMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, unbannedUserID);
}

/*
==============
bdTeams::getTeamInfoWithTeamType
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamInfoWithTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoAndType *const teamInfo, const bdUserAccountID *userID)
{
  return ?getTeamInfoWithTeamType@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfoAndType@@VbdUserAccountID@@@Z(this, result, teamName, teamInfo, userID);
}

/*
==============
bdTeams::setPrivateProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setPrivateProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *privateProfile)
{
  return ?setPrivateProfile@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamProfile@@@Z(this, result, teamID, privateProfile);
}

/*
==============
bdTeams::getTeamInfoV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamInfoV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID)
{
  return ?getTeamInfoV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfoV2@@VbdUserAccountID@@@Z(this, result, teamName, teamInfo, userID);
}

/*
==============
bdTeams::rejectMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::rejectMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?rejectMembership@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::leaveTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::leaveTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newOwnerID)
{
  return ?leaveTeam@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, newOwnerID);
}

/*
==============
bdTeams::getMembershipsWithCounts
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembershipsWithCounts(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoAndCounts *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  return ?getMembershipsWithCounts@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoAndCounts@@IIVbdUserAccountID@@@Z(this, result, teamInfos, maxNumTeams, startTeamID, userID);
}

/*
==============
bdTeams::getTeamInfoWithAutoJoin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamInfoWithAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoWithAutoJoin *const teamInfo, const bdUserAccountID *userID)
{
  return ?getTeamInfoWithAutoJoin@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfoWithAutoJoin@@VbdUserAccountID@@@Z(this, result, teamName, teamInfo, userID);
}

/*
==============
bdTeams::getMembersV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembersV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  return ?getMembersV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMember@@II_N@Z(this, result, teamID, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
}

/*
==============
bdTeams::createTeamWithProfilesAndTeamTypeV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeamWithProfilesAndTeamTypeV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const unsigned __int8 *const teamType, const bool autoJoinEnabled)
{
  return ?createTeamWithProfilesAndTeamTypeV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdTeamProfile@@1QEAVbdTeamInfoV2@@VbdUserAccountID@@QEBE_N@Z(this, result, teamName, publicProfile, privateProfile, teamInfo, userID, teamType, autoJoinEnabled);
}

/*
==============
bdTeams::getPublicProfilesV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getPublicProfilesV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  return ?getPublicProfilesV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEB_KQEAVbdTeamProfile@@I@Z(this, result, teamIDs, publicProfiles, numTeams);
}

/*
==============
bdTeams::getIncomingProposalsV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getIncomingProposalsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID, const unsigned int offset)
{
  return ?getIncomingProposalsV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamProposal@@IVbdUserAccountID@@I@Z(this, result, teamProposals, maxNumProposals, userID, offset);
}

/*
==============
bdTeams::searchPublicTeamProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::searchPublicTeamProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int maxNumResults, const bdTeamProfileSearchParams *const searchParams, bdTeamProfile *publicProfiles)
{
  return ?searchPublicTeamProfiles@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@IIQEBVbdTeamProfileSearchParams@@PEAVbdTeamProfile@@@Z(this, result, queryID, maxNumResults, searchParams, publicProfiles);
}

/*
==============
bdTeams::sendInstantMessage
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::sendInstantMessage(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *teamMemberUID, const void *const message, const unsigned int msgSize)
{
  return ?sendInstantMessage@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEBXI@Z(this, result, teamMemberUID, message, msgSize);
}

/*
==============
bdTeams::setPublicProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setPublicProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *publicProfile)
{
  return ?setPublicProfile@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KPEAVbdTeamProfile@@@Z(this, result, teamID, publicProfile);
}

/*
==============
bdTeams::kickMember
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::kickMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?kickMember@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::getOutgoingProposals
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getOutgoingProposals(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID, const unsigned int offset, const unsigned __int64 *filterByUsers, const unsigned int numUsers)
{
  return ?getOutgoingProposals@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamProposal@@IVbdUserAccountID@@IQEB_KI@Z(this, result, teamProposals, maxNumProposals, userID, offset, filterByUsers, numUsers);
}

/*
==============
bdTeams::getPrivateMemberProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getPrivateMemberProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *privateMemberProfiles, const unsigned int numTeamMembers)
{
  return ?getPrivateMemberProfiles@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMemberProfile@@I@Z(this, result, teamID, privateMemberProfiles, numTeamMembers);
}

/*
==============
bdTeams::getTeamMembersFromUserList
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamMembersFromUserList(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *userIDs, const unsigned int numberOfUserIDs, bdTeamMember *teamMemberResults)
{
  return ?getTeamMembersFromUserList@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdUserAccountID@@IQEAVbdTeamMember@@@Z(this, result, teamID, userIDs, numberOfUserIDs, teamMemberResults);
}

/*
==============
bdTeams::createTeamWithProfilesV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::createTeamWithProfilesV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const bool autoJoinEnabled)
{
  return ?createTeamWithProfilesV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDPEAVbdTeamProfile@@1QEAVbdTeamInfoV2@@VbdUserAccountID@@_N@Z(this, result, teamName, publicProfile, privateProfile, teamInfo, userID, autoJoinEnabled);
}

/*
==============
bdTeams::withdrawProposal
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::withdrawProposal(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, const unsigned __int64 teamID)
{
  return ?withdrawProposal@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@_K@Z(this, result, userID, teamID);
}

/*
==============
bdTeams::getPrivateProfile
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getPrivateProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *const privateProfile)
{
  return ?getPrivateProfile@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamProfile@@@Z(this, result, teamID, privateProfile);
}

/*
==============
bdTeams::updateTeamName
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::updateTeamName(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const char *const teamName, const bdUserAccountID *userID)
{
  return ?updateTeamName@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBDVbdUserAccountID@@@Z(this, result, teamID, teamName, userID);
}

/*
==============
bdTeams::getPublicMemberProfiles
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getPublicMemberProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *publicMemberProfiles, const unsigned int numTeamMembers)
{
  return ?getPublicMemberProfiles@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEAVbdTeamMemberProfile@@I@Z(this, result, teamID, publicMemberProfiles, numTeamMembers);
}

/*
==============
bdTeams::unblockApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::unblockApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  return ?unblockApplication@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, applicantID);
}

/*
==============
bdTeams::searchTeamsV3
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::searchTeamsV3(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *results, const bdUserAccountID *searchingUserID, const unsigned __int64 *otherUsers, const unsigned int numOtherUsers, const bdTeamSearchFilter *publicProfileFilter, const unsigned int numProfileFilters, const bdTeamSearchFilter *teamsFilter, const unsigned int numTeamsFilter, const bdTeamSearchOrdering *orderBy, const unsigned int numOrderBy, const unsigned int offset, const unsigned int maxResults, const bool getCurrentTeams)
{
  return ?searchTeamsV3@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoV2@@VbdUserAccountID@@QEB_KIQEBVbdTeamSearchFilter@@I3IQEBVbdTeamSearchOrdering@@III_N@Z(this, result, results, searchingUserID, otherUsers, numOtherUsers, publicProfileFilter, numProfileFilters, teamsFilter, numTeamsFilter, orderBy, numOrderBy, offset, maxResults, getCurrentTeams);
}

/*
==============
bdTeams::searchTeamsV2
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::searchTeamsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const bdUserAccountID *searchingUserID, const unsigned int numOtherUsers, const unsigned int numProfileFilters, const unsigned int numTeamsFilter, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults, const char *const orderByColumn, const char *const sortOrder, const bool getCurrentTeams)
{
  return ?searchTeamsV2@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoV2@@VbdUserAccountID@@IIIQEB_KQEBVbdTeamSearchFilter@@3IIQEBD4_N@Z(this, result, teamInfos, searchingUserID, numOtherUsers, numProfileFilters, numTeamsFilter, otherUsers, publicProfileFilter, teamsFilter, offset, maxResults, orderByColumn, sortOrder, getCurrentTeams);
}

/*
==============
bdTeams::setTeamAutoJoin
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setTeamAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bool enableTeamAutoJoin)
{
  return ?setTeamAutoJoin@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_K_N@Z(this, result, teamID, enableTeamAutoJoin);
}

/*
==============
bdTeams::blockApplication
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::blockApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID, const unsigned int blockUntil)
{
  return ?blockApplication@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@I@Z(this, result, teamID, applicantID, blockUntil);
}

/*
==============
bdTeams::getTeamInfo
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getTeamInfo(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  return ?getTeamInfo@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEBDQEAVbdTeamInfo@@VbdUserAccountID@@@Z(this, result, teamName, teamInfo, userID);
}

/*
==============
bdTeams::acceptMembership
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::acceptMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  return ?acceptMembership@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KVbdUserAccountID@@@Z(this, result, teamID, userID);
}

/*
==============
bdTeams::sendInstantMessageToTeam
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::sendInstantMessageToTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const void *const message, const unsigned int msgSize)
{
  return ?sendInstantMessageToTeam@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@_KQEBXI@Z(this, result, teamID, message, msgSize);
}

/*
==============
bdTeams::setOnline
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::setOnline(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID)
{
  return ?setOnline@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@@Z(this, result, userID);
}

/*
==============
bdTeams::getMostPopularTeams
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMostPopularTeams(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoWithAutoJoin *teamInfos, const unsigned int maxResults, const unsigned int offset)
{
  return ?getMostPopularTeams@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@QEAVbdTeamInfoWithAutoJoin@@II@Z(this, result, teamInfos, maxResults, offset);
}

/*
==============
bdTeams::getMembershipsUser
==============
*/

bdReference<bdRemoteTask> *__fastcall bdTeams::getMembershipsUser(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, bdTeamInfo *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID)
{
  return ?getMembershipsUser@bdTeams@@QEAA?AV?$bdReference@VbdRemoteTask@@@@VbdUserAccountID@@QEAVbdTeamInfo@@II@Z(this, result, userID, teamInfos, maxNumTeams, startTeamID);
}

/*
==============
bdTeams::bdTeams
==============
*/
void bdTeams::bdTeams(bdTeams *this, bdRemoteTaskManager *const remoteTaskManager, const char *context)
{
  this->__vftable = (bdTeams_vtbl *)&bdTeams::`vftable';
  this->m_remoteTaskManager = remoteTaskManager;
  bdStrlcpy(this->m_context, context, 0x10ui64);
}

/*
==============
bdTeams::~bdTeams
==============
*/
void bdTeams::~bdTeams(bdTeams *this)
{
  this->__vftable = (bdTeams_vtbl *)&bdTeams::`vftable';
}

/*
==============
bdTeams::acceptApplication
==============
*/
bdReference<bdRemoteTask> *bdTeams::acceptApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userID[5]; 
  bdTaskParams other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)result;
  userID[3] = (unsigned __int64)applicantID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::acceptApplication", 0x716u, "Calling acceptApplication() with a NULL teamID");
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)applicantID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::acceptApplication", 0x71Au, "Calling acceptApplication() with a NULL applicantID");
  v10 = 0;
  if ( teamID )
  {
    userID[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)applicantID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x41u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, applicantID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
bdTeams::acceptMembership
==============
*/
bdReference<bdRemoteTask> *bdTeams::acceptMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = userID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x25u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::acceptMembership", 0x334u, "Calling acceptMembership() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::acceptMemberships
==============
*/
bdReference<bdRemoteTask> *bdTeams::acceptMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamFailedHandleMembership *failures, const unsigned int numTeams, const bdUserAccountID *userID)
{
  const unsigned __int64 *v7; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdTaskParams taskParams; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  const bdUserAccountID *v19; 

  v17 = -2i64;
  v7 = teamIDs;
  v18 = result;
  v19 = userID;
  result->m_ptr = NULL;
  if ( !teamIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::acceptMemberships", 0x34Du, "Calling acceptMemberships() with a NULL teamIDs");
  if ( !numTeams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::acceptMemberships", 0x351u, "Calling acceptMemberships() with a zero numTeams");
  if ( v7 && numTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x6Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    v13 = numTeams;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v7), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++v7;
      --v13;
    }
    while ( v13 );
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = failures;
      taskParams.m_maxResults = numTeams;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::addApplication
==============
*/
bdReference<bdRemoteTask> *bdTeams::addApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 replacesTeamID, const bdUserAccountID *userID, const void *const attachment, const unsigned int attachmentSize)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  bool v14; 
  unsigned int v15; 
  bdTaskParams taskParams; 
  __int64 v18; 
  bdReference<bdRemoteTask> *v19; 
  const bdUserAccountID *v20; 

  v18 = -2i64;
  v19 = result;
  v20 = userID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x3Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, replacesTeamID), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( attachment )
    {
      v15 = 32;
      if ( attachmentSize < 0x20 )
        v15 = attachmentSize;
      bdBufferParams::addBlob(&taskParams, attachment, v15);
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::addApplication", 0x67Au, "Calling addApplication() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::autoJoinTeam
==============
*/
bdReference<bdRemoteTask> *bdTeams::autoJoinTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = userID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x44u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::autoJoinTeam", 0x731u, "Calling autoJoinTeam() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::banMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::banMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *bannedUserID, const void *const attachment, const unsigned int attachmentSize)
{
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned int v13; 
  unsigned __int64 userID; 
  bdTaskParams taskParams; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  const bdUserAccountID *v19; 
  bdUserAccountID other; 

  v17 = -2i64;
  v18 = result;
  v19 = bannedUserID;
  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::banMember", 0x765u, "Calling banMember() with a NULL teamID");
  userID = 0i64;
  bdUserAccountID::bdUserAccountID(&other, &userID);
  v10 = bdUserAccountID::operator==((bdUserAccountID *)bannedUserID, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  if ( v10 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::banMember", 0x769u, "Calling banMember() with a NULL bannedUserID");
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x49u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, bannedUserID);
  if ( attachment )
  {
    v13 = 32;
    if ( attachmentSize < 0x20 )
      v13 = attachmentSize;
    bdBufferParams::addBlob(&taskParams, attachment, v13);
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)bannedUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)bannedUserID->gap38);
  return result;
}

/*
==============
bdTeams::blockApplication
==============
*/
bdReference<bdRemoteTask> *bdTeams::blockApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID, const unsigned int blockUntil)
{
  _BOOL8 v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v15; 
  bdTaskParams taskParams; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  const bdUserAccountID *v19; 

  v17 = -2i64;
  v18 = result;
  v19 = applicantID;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x4Cu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, applicantID);
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, blockUntil), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v15 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::blockApplication", 0x7BEu, "Failed to start task: Error %i", v15);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
bdTeams::createTeam
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v11; 
  bdReference<bdRemoteTask> *v12; 
  const bdUserAccountID *v13; 

  v11 = -2i64;
  v12 = result;
  v13 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeam", 0x39u, "Calling createTeam() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeam", 0x3Du, "Calling createTeam() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x1Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::createTeamV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeamV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const bool autoJoinEnabled)
{
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams taskParams; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 

  v14 = -2i64;
  v15 = result;
  v16 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamV2", 0x5Du, "Calling createTeamV2() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamV2", 0x61u, "Calling createTeamV2() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x7Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, autoJoinEnabled), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::createTeamWithProfiles
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeamWithProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdUserAccountID *v15; 

  v13 = -2i64;
  v14 = result;
  v15 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfiles", 0x83u, "Calling createTeamWithProfiles() with a NULL teamName");
  if ( !publicProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfiles", 0x87u, "Calling createTeamWithProfiles() with a NULL publicProfile");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfiles", 0x8Bu, "Calling createTeamWithProfile() with a NULL privateProfile");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfiles", 0x8Fu, "Calling createTeamWithProfiles() with a NULL teamInfo");
  if ( teamName && publicProfile && privateProfile && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x46u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&publicProfile->__vftable + 2));
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&privateProfile->__vftable + 2));
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::createTeamWithProfilesAndTeamType
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeamWithProfilesAndTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoAndType *const teamInfo, const bdUserAccountID *userID, const unsigned __int8 *const teamType)
{
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams taskParams; 
  const unsigned __int8 *v16; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  const bdUserAccountID *v19; 

  v17 = -2i64;
  v18 = result;
  v19 = userID;
  v16 = teamType;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamType", 0xDAu, "Calling createTeamWithProfilesAndTeamType() with a NULL teamName");
  if ( !publicProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamType", 0xDEu, "Calling createTeamWithProfilesAndTeamType() with a NULL publicProfile");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamType", 0xE2u, "Calling createTeamWithProfilesAndTeamType() with a NULL privateProfile");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamType", 0xE6u, "Calling createTeamWithProfilesAndTeamType() with a NULL teamInfo");
  if ( teamName && publicProfile && privateProfile && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x56u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, *v16), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&publicProfile->__vftable + 2));
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&privateProfile->__vftable + 2));
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::createTeamWithProfilesAndTeamTypeV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeamWithProfilesAndTeamTypeV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const unsigned __int8 *const teamType, const bool autoJoinEnabled)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams taskParams; 
  bdTeams *v18; 
  __int64 v19; 
  bdReference<bdRemoteTask> *v20; 
  const bdUserAccountID *v21; 

  v19 = -2i64;
  v18 = this;
  v20 = result;
  v21 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamTypeV2", 0x108u, "Calling createTeamWithProfilesAndTeamTypeV2() with a NULL teamName");
  if ( !publicProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamTypeV2", 0x10Cu, "Calling createTeamWithProfilesAndTeamTypeV2() with a NULL publicProfile");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamTypeV2", 0x110u, "Calling createTeamWithProfilesAndTeamTypeV2() with a NULL privateProfile");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesAndTeamTypeV2", 0x114u, "Calling createTeamWithProfilesAndTeamTypeV2() with a NULL teamInfo");
  if ( teamName && publicProfile && privateProfile && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x75u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, v18->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, *teamType), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, autoJoinEnabled), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&publicProfile->__vftable + 2));
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&privateProfile->__vftable + 2));
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(v18->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::createTeamWithProfilesV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::createTeamWithProfilesV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamProfile *publicProfile, bdTeamProfile *privateProfile, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID, const bool autoJoinEnabled)
{
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesV2", 0xAFu, "Calling createTeamWithProfilesV2() with a NULL teamName");
  if ( !publicProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesV2", 0xB3u, "Calling createTeamWithProfilesV2() with a NULL publicProfile");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesV2", 0xB7u, "Calling createTeamWithProfilesV2() with a NULL privateProfile");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::createTeamWithProfilesV2", 0xBBu, "Calling createTeamWithProfilesV2() with a NULL teamInfo");
  if ( teamName && publicProfile && privateProfile && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x7Bu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, autoJoinEnabled), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&publicProfile->__vftable + 2));
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&privateProfile->__vftable + 2));
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::deleteTeamLeaderboard
==============
*/
bdReference<bdRemoteTask> *bdTeams::deleteTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID)
{
  _BOOL8 v6; 
  bool v7; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x65u, 0x400u, 0xFFFFu);
  LOBYTE(v6) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v6) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v7 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v7) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::demoteMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::demoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::demoteMember", 0x247u, "Calling demoteMember() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::demoteMember", 0x24Bu, "Calling demoteMember() with a NULL userID");
  v10 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x32u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getApplicationsByTeam
==============
*/
bdReference<bdRemoteTask> *bdTeams::getApplicationsByTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamApplication *applications, const unsigned int maxApplications, const unsigned int offset, const bool retrieveRejected, const bool retrieveWithdrawn, const bool retrievePending)
{
  int v11; 
  unsigned int v12; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  _BOOL8 v18; 
  bool v19; 
  _BOOL8 v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getApplicationsByTeam", 0x69Cu, "Calling getApplicationsByTeam() with a NULL teamID");
  if ( !maxApplications )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getApplicationsByTeam", 0x6A0u, "Calling getApplicationsByTeam() with zero maxApplications");
  v11 = retrieveRejected + 1;
  if ( !retrieveWithdrawn )
    v11 = retrieveRejected;
  v12 = v11 + 1;
  if ( !retrievePending )
    v12 = v11;
  if ( teamID && maxApplications )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x40u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v17) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v19 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxApplications), taskParams.m_serializeOk = 1, !v19) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v18) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v18) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v12), taskParams.m_serializeOk = 1, !v21) )
        taskParams.m_serializeOk = 0;
    }
    if ( retrieveRejected )
    {
      LOBYTE(v20) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 1u), taskParams.m_serializeOk = 1, !v22) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( retrieveWithdrawn )
    {
      LOBYTE(v20) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v23 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 2u), taskParams.m_serializeOk = 1, !v23) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( retrievePending )
    {
      LOBYTE(v20) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v24) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = applications;
      taskParams.m_maxResults = maxApplications;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getApplicationsByTeamPaginated
==============
*/
bdReference<bdRemoteTask> *bdTeams::getApplicationsByTeamPaginated(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, const unsigned int numOfTeams, bdTeamApplicationWithTeamID *applications, const unsigned int maxApplications, const unsigned int offset, const bool retrieveRejected, const bool retrieveWithdrawn, const bool retrievePending)
{
  __int64 v10; 
  const unsigned __int64 *v11; 
  int v13; 
  unsigned int v14; 
  _BOOL8 v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  _BOOL8 v21; 
  bool v22; 
  _BOOL8 v23; 
  bool v24; 
  bool v25; 
  bool v26; 
  bool v27; 
  bdTaskParams taskParams; 

  v10 = numOfTeams;
  v11 = teamIDs;
  result->m_ptr = NULL;
  if ( !teamIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getApplicationsByTeamPaginated", 0x6D9u, "Calling getApplicationsByTeamPaginated() with a NULL teamIDs");
  if ( !maxApplications )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getApplicationsByTeamPaginated", 0x6DDu, "Calling getApplicationsByTeamPaginated() with zero maxApplications");
  v13 = retrieveRejected + 1;
  if ( !retrieveWithdrawn )
    v13 = retrieveRejected;
  v14 = v13 + 1;
  if ( !retrievePending )
    v14 = v13;
  if ( maxApplications )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x5Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v15) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v10), taskParams.m_serializeOk = 1, !v17) )
        taskParams.m_serializeOk = 0;
    }
    if ( (_DWORD)v10 )
    {
      do
      {
        LOBYTE(v16) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 8u, v16) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v11), taskParams.m_serializeOk = 1, !v18) )
            taskParams.m_serializeOk = 0;
        }
        ++v11;
        --v10;
      }
      while ( v10 );
    }
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v20) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v19) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v19) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxApplications), taskParams.m_serializeOk = 1, !v22) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v21) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v21) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, v14), taskParams.m_serializeOk = 1, !v24) )
        taskParams.m_serializeOk = 0;
    }
    if ( retrieveRejected )
    {
      LOBYTE(v23) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v25 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 1u), taskParams.m_serializeOk = 1, !v25) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( retrieveWithdrawn )
    {
      LOBYTE(v23) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v26 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 2u), taskParams.m_serializeOk = 1, !v26) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( retrievePending )
    {
      LOBYTE(v23) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v27 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, 0), taskParams.m_serializeOk = 1, !v27) )
          taskParams.m_serializeOk = 0;
      }
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = applications;
      taskParams.m_maxResults = maxApplications;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getBannedMembers
==============
*/
bdReference<bdRemoteTask> *bdTeams::getBannedMembers(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamBannedMember *bannedMembers, const unsigned int offset, const unsigned int maxResults)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !bannedMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getBannedMembers", 0x79Cu, "Calling getBannedMembers() with a NULL bannedMembers");
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getBannedMembers", 0x7A0u, "Calling getBannedMembers() with a teamID of 0");
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x70u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = bannedMembers;
    taskParams.m_maxResults = maxResults;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::getIncomingProposals
==============
*/
bdReference<bdRemoteTask> *bdTeams::getIncomingProposals(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdUserAccountID *v15; 

  v13 = -2i64;
  v14 = result;
  v15 = userID;
  result->m_ptr = NULL;
  if ( maxNumProposals )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x35u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumProposals), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamProposals;
      taskParams.m_maxResults = maxNumProposals;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getIncomingProposals", 0x39Fu, "Calling getIncomingProposals() with a zero maxNumProposals");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getIncomingProposalsV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::getIncomingProposalsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID, const unsigned int offset)
{
  _BOOL8 v10; 
  bool v11; 
  _BOOL8 v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( maxNumProposals )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x77u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumProposals), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamProposals;
      taskParams.m_maxResults = maxNumProposals;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getIncomingProposalsV2", 0x3BAu, "Calling getIncomingProposalsV2() with a zero maxNumProposals");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMembers
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembers(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembers", 0x555u, "Calling getMembers() with a NULL teamID");
  if ( !maxNumTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembers", 0x559u, "Calling getMembers() with zero maxNumTeamMembers");
  if ( teamID && maxNumTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeamMembers), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMembers;
      taskParams.m_maxResults = maxNumTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getMembersAndPrivileges
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembersAndPrivileges(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberAndPrivileges *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersAndPrivileges", 0x595u, "Calling getMembersAndPrivileges() with a NULL teamID");
  if ( !maxNumTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersAndPrivileges", 0x599u, "Calling getMembersAndPrivileges() with zero maxNumTeamMembers");
  if ( teamID && maxNumTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x5Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeamMembers), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMembers;
      taskParams.m_maxResults = maxNumTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getMembersByOnlineStatus
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembersByOnlineStatus(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bool onlineStatus, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersByOnlineStatus", 0x5D8u, "Calling getMembersByOnlineStatus() with a NULL teamID");
  if ( !maxNumTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersByOnlineStatus", 0x5DCu, "Calling getMembersByOnlineStatus() with zero maxNumTeamMembers");
  if ( teamID && maxNumTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x71u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, onlineStatus), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v17) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeamMembers), taskParams.m_serializeOk = 1, !v18) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMembers;
      taskParams.m_maxResults = maxNumTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getMembersV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembersV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  _BOOL8 v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersV2", 0x575u, "Calling getMembersV2() with a NULL teamID");
  if ( !maxNumTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersV2", 0x579u, "Calling getMembersV2() with zero maxNumTeamMembers");
  if ( teamID && maxNumTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeamMembers), taskParams.m_serializeOk = 1, !v17) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, getOnlineFirst), taskParams.m_serializeOk = 1, !v18) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMembers;
      taskParams.m_maxResults = maxNumTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getMembersWithPrivilegesByRole
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembersWithPrivilegesByRole(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int8 memberRole, bdTeamMemberWithPrivileges *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  bool v16; 
  _BOOL8 v17; 
  bool v18; 
  _BOOL8 v19; 
  bool v20; 
  bool v21; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersWithPrivilegesByRole", 0x5B6u, "Calling getMembersWithPrivilegesByRole() with a NULL teamID");
  if ( !maxNumTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembersWithPrivilegesByRole", 0x5BAu, "Calling getMembersWithPrivilegesByRole() with zero maxNumTeamMembers");
  if ( teamID && maxNumTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x67u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v12) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v12) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v14) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, memberRole), taskParams.m_serializeOk = 1, !v16) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v15) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v15) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v18) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v17) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v17) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeamMembers), taskParams.m_serializeOk = 1, !v20) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v19) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v19) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, getOnlineFirst), taskParams.m_serializeOk = 1, !v21) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMembers;
      taskParams.m_maxResults = maxNumTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getMemberships
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfo *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( maxNumTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startTeamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamInfos;
      taskParams.m_maxResults = maxNumTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMemberships", 0x50Eu, "Calling getMemberships() with zero maxNumTeams");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMembershipsUser
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembershipsUser(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, bdTeamInfo *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID)
{
  bool v10; 
  bool v11; 
  _BOOL8 v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v10 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v10 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembershipsUser", 0x536u, "Calling getMembershipsUser() with a NULL userID");
  if ( !maxNumTeams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembershipsUser", 0x53Au, "Calling getMembershipsUser() with zero maxNumTeams");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v11 = bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) && maxNumTeams;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v11 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x38u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    bdTaskParams::addContextUser(&other, userID);
    LOBYTE(v12) = 1;
    if ( other.ensureCapacity(&other, 4u, v12) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v14 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, maxNumTeams), other.m_serializeOk = 1, !v14) )
        other.m_serializeOk = 0;
    }
    LOBYTE(v13) = 1;
    if ( other.ensureCapacity(&other, 4u, v13) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, startTeamID), other.m_serializeOk = 1, !v15) )
        other.m_serializeOk = 0;
    }
    if ( other.m_taskResults || other.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      other.m_serializeOk = 0;
    }
    else
    {
      other.m_taskResults = teamInfos;
      other.m_maxResults = maxNumTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMembershipsV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembershipsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( maxNumTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x7Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startTeamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamInfos;
      taskParams.m_maxResults = maxNumTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembershipsV2", 0x528u, "Calling getMembershipsV2() with zero maxNumTeams");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMembershipsWithCounts
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembershipsWithCounts(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoAndCounts *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( maxNumTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x53u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startTeamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamInfos;
      taskParams.m_maxResults = maxNumTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembershipsWithCounts", 0x4D8u, "Calling getMembershipsWithCounts() with zero maxNumTeams");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMembershipsWithCountsAndTeamType
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMembershipsWithCountsAndTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoAndTypeAndCounts *teamInfos, const unsigned int maxNumTeams, const unsigned int startTeamID, const bdUserAccountID *userID)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams taskParams; 
  __int64 v16; 
  bdReference<bdRemoteTask> *v17; 
  const bdUserAccountID *v18; 

  v16 = -2i64;
  v17 = result;
  v18 = userID;
  result->m_ptr = NULL;
  if ( maxNumTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x58u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, startTeamID), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamInfos;
      taskParams.m_maxResults = maxNumTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getMembershipsWithCountsAndTeamType", 0x4F3u, "Calling getMembershipsWithCountsAndTeamType() with zero maxNumTeams");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getMostPopularTeams
==============
*/
bdReference<bdRemoteTask> *bdTeams::getMostPopularTeams(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoWithAutoJoin *teamInfos, const unsigned int maxResults, const unsigned int offset)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x68u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = teamInfos;
    taskParams.m_maxResults = maxResults;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::getOutgoingProposals
==============
*/
bdReference<bdRemoteTask> *bdTeams::getOutgoingProposals(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamProposal *teamProposals, const unsigned int maxNumProposals, const bdUserAccountID *userID, const unsigned int offset, const unsigned __int64 *filterByUsers, const unsigned int numUsers)
{
  const unsigned __int64 *v12; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  _BOOL8 v16; 
  bool v17; 
  _BOOL8 v18; 
  __int64 v19; 
  bool v20; 
  bool v21; 
  bdTaskParams taskParams; 
  int v24; 
  __int64 v25; 
  bdReference<bdRemoteTask> *v26; 
  const bdUserAccountID *v27; 

  v25 = -2i64;
  v26 = result;
  v27 = userID;
  v12 = filterByUsers;
  result->m_ptr = NULL;
  v24 = 1;
  if ( maxNumProposals )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x30u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdTaskParams::addContextUser(&taskParams, userID);
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v17 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumProposals), taskParams.m_serializeOk = 1, !v17) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    v19 = numUsers;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v16) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v20 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numUsers), taskParams.m_serializeOk = 1, !v20) )
        taskParams.m_serializeOk = 0;
    }
    if ( filterByUsers && numUsers )
    {
      do
      {
        LOBYTE(v18) = 1;
        if ( taskParams.ensureCapacity(&taskParams, 8u, v18) )
        {
          if ( taskParams.m_isWritingArray )
            --taskParams.m_arrayWriteCount;
          if ( !taskParams.m_serializeOk || (v21 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v12), taskParams.m_serializeOk = 1, !v21) )
            taskParams.m_serializeOk = 0;
        }
        ++v12;
        --v19;
      }
      while ( v19 );
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamProposals;
      taskParams.m_maxResults = maxNumProposals;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getOutgoingProposals", 0x386u, "Calling getOutgoingProposals() with a zero maxNumProposals");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getPrivateMemberProfiles
==============
*/
bdReference<bdRemoteTask> *bdTeams::getPrivateMemberProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *privateMemberProfiles, const unsigned int numTeamMembers)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPrivateMemberProfiles", 0x4AEu, "Calling getPrivateMemberProfiles() with a NULL teamID");
  if ( !numTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPrivateMemberProfiles", 0x4B2u, "Calling getPrivateMemberProfiles() with a zero numTeamMembers");
  if ( teamID && numTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x29u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = privateMemberProfiles;
      taskParams.m_maxResults = numTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getPrivateProfile
==============
*/
bdReference<bdRemoteTask> *bdTeams::getPrivateProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *const privateProfile)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPrivateProfile", 0x407u, "Calling getPrivateProfile() with a NULL teamID");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPrivateProfile", 0x40Bu, "Calling getPrivateProfile() with a NULL privateProfile");
  if ( teamID && privateProfile )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x27u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = privateProfile;
      taskParams.m_maxResults = 1;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getPublicMemberProfiles
==============
*/
bdReference<bdRemoteTask> *bdTeams::getPublicMemberProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *publicMemberProfiles, const unsigned int numTeamMembers)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicMemberProfiles", 0x491u, "Calling getPublicMemberProfiles() with a NULL teamID");
  if ( !numTeamMembers )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicMemberProfiles", 0x495u, "Calling getPublicMemberProfiles() with a zero numTeamMembers");
  if ( teamID && numTeamMembers )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x28u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = publicMemberProfiles;
      taskParams.m_maxResults = numTeamMembers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getPublicProfiles
==============
*/
bdReference<bdRemoteTask> *bdTeams::getPublicProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  const unsigned __int64 *v6; 
  _BOOL8 v9; 
  __int64 v10; 
  bool v11; 
  bdTaskParams taskParams; 

  v6 = teamIDs;
  result->m_ptr = NULL;
  if ( !teamIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicProfiles", 0x3C7u, "Calling getPublicProfiles() with a NULL teamIDs");
  if ( !numTeams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicProfiles", 0x3CBu, "Calling getPublicProfiles() with a zero numTeams");
  if ( v6 && numTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x26u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    v10 = numTeams;
    do
    {
      LOBYTE(v9) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v6), taskParams.m_serializeOk = 1, !v11) )
          taskParams.m_serializeOk = 0;
      }
      ++v6;
      --v10;
    }
    while ( v10 );
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = publicProfiles;
      taskParams.m_maxResults = numTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getPublicProfilesV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::getPublicProfilesV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamProfile *publicProfiles, const unsigned int numTeams)
{
  const unsigned __int64 *v6; 
  _BOOL8 v9; 
  __int64 v10; 
  bool v11; 
  bdTaskParams taskParams; 

  v6 = teamIDs;
  result->m_ptr = NULL;
  if ( !teamIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicProfilesV2", 0x3E6u, "Calling getPublicProfilesV2() with a NULL teamIDs");
  if ( !numTeams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getPublicProfilesV2", 0x3EAu, "Calling getPublicProfilesV2() with a zero numTeams");
  if ( v6 && numTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x81u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    v10 = numTeams;
    do
    {
      LOBYTE(v9) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v6), taskParams.m_serializeOk = 1, !v11) )
          taskParams.m_serializeOk = 0;
      }
      ++v6;
      --v10;
    }
    while ( v10 );
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = publicProfiles;
      taskParams.m_maxResults = numTeams;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::getTeamAutoJoin
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamAutoJoinInfo *const autoJoinEnabled)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( autoJoinEnabled )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x5Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = autoJoinEnabled;
      taskParams.m_maxResults = 1;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamAutoJoin", 0x874u, "Calling getTeamAutoJoin() with a NULL autoJoinEnabled");
  }
  return result;
}

/*
==============
bdTeams::getTeamInfo
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamInfo(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfo *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v11; 
  bdReference<bdRemoteTask> *v12; 
  const bdUserAccountID *v13; 

  v11 = -2i64;
  v12 = result;
  v13 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfo", 0x132u, "Calling getTeamInfo() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfo", 0x136u, "Calling getTeamInfo() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x34u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getTeamInfoV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamInfoV2(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoV2 *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v11; 
  bdReference<bdRemoteTask> *v12; 
  const bdUserAccountID *v13; 

  v11 = -2i64;
  v12 = result;
  v13 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoV2", 0x14Eu, "Calling getTeamInfoV2() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoV2", 0x152u, "Calling getTeamInfoV2() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x7Eu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getTeamInfoWithAutoJoin
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamInfoWithAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoWithAutoJoin *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v11; 
  bdReference<bdRemoteTask> *v12; 
  const bdUserAccountID *v13; 

  v11 = -2i64;
  v12 = result;
  v13 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoWithAutoJoin", 0x187u, "Calling getTeamInfoWithAutoJoin() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoWithAutoJoin", 0x18Bu, "Calling getTeamInfoWithAutoJoin() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x63u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getTeamInfoWithTeamType
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamInfoWithTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const char *const teamName, bdTeamInfoAndType *const teamInfo, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  __int64 v11; 
  bdReference<bdRemoteTask> *v12; 
  const bdUserAccountID *v13; 

  v11 = -2i64;
  v12 = result;
  v13 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoWithTeamType", 0x16Au, "Calling getTeamInfoWithTeamType() with a NULL teamName");
  if ( !teamInfo )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamInfoWithTeamType", 0x16Eu, "Calling getTeamInfoWithTeamType() with a NULL teamInfo");
  if ( teamName && teamInfo )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x59u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = teamInfo;
      taskParams.m_maxResults = 1;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::getTeamMembersFromUserList
==============
*/
bdReference<bdRemoteTask> *bdTeams::getTeamMembersFromUserList(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdUserAccountID *userIDs, const unsigned int numberOfUserIDs, bdTeamMember *teamMemberResults)
{
  bdUserAccountID *v6; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  __int64 v14; 
  bdTaskParams taskParams; 

  v6 = userIDs;
  result->m_ptr = NULL;
  bdHandleAssert(userIDs != NULL, "(userIDs != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamMembersFromUserList", 0x8CBu, "Cannot call getTeamMembersFromUserList() with a NULL userIDs");
  bdHandleAssert(teamMemberResults != NULL, "(teamMemberResults != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::getTeamMembersFromUserList", 0x8CCu, "Cannot call getTeamMembersFromUserList() with a NULL teamMemberResults");
  if ( numberOfUserIDs )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x7Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numberOfUserIDs), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    v14 = numberOfUserIDs;
    do
    {
      bdTaskParams::addContextUser(&taskParams, v6++);
      --v14;
    }
    while ( v14 );
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = teamMemberResults;
      taskParams.m_maxResults = numberOfUserIDs;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::kickMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::kickMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::kickMember", 0x262u, "Calling kickMember() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::kickMember", 0x266u, "Calling kickMember() with a NULL userID");
  v10 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x21u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::leaveTeam
==============
*/
bdReference<bdRemoteTask> *bdTeams::leaveTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newOwnerID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = newOwnerID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x22u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, newOwnerID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::leaveTeam", 0x27Du, "Calling leaveTeam() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)newOwnerID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)newOwnerID->gap38);
  return result;
}

/*
==============
bdTeams::promoteMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::promoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMember", 0x1D8u, "Calling promoteMember() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMember", 0x1DCu, "Calling promoteMember() with a NULL userID");
  v10 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x20u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::promoteMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::promoteMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID, const unsigned int privileges)
{
  char v9; 
  bool v10; 
  bool v11; 
  _BOOL8 v12; 
  bool v13; 
  _BOOL8 v14; 
  bool v15; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v9 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMember", 0x1F1u, "Calling promoteMember() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v10 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v10 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMember", 0x1F5u, "Calling promoteMember() with a NULL userID");
  v11 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v9 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v11 = 1;
  }
  if ( (v9 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v11 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x20u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v12) = 1;
    if ( other.ensureCapacity(&other, 8u, v12) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v13 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v13) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    LOBYTE(v14) = 1;
    if ( other.ensureCapacity(&other, 4u, v14) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, privileges), other.m_serializeOk = 1, !v15) )
        other.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::promoteMemberToOwner
==============
*/
bdReference<bdRemoteTask> *bdTeams::promoteMemberToOwner(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMemberToOwner", 0x20Du, "Calling promoteMemberToOwner() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMemberToOwner", 0x211u, "Calling promoteMemberToOwner() with a NULL userID");
  v10 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x33u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::promoteMemberToOwnerV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::promoteMemberToOwnerV2(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID, const bool demoteOwnerToAdmin, const unsigned int privileges)
{
  char v10; 
  bool v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  _BOOL8 v15; 
  _BOOL8 v16; 
  bool v17; 
  bool v18; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  v10 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMemberToOwnerV2", 0x22Au, "Calling promoteMemberToOwnerV2() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v11 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v11 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::promoteMemberToOwnerV2", 0x22Eu, "Calling promoteMemberToOwnerV2() with a NULL userID");
  v12 = 0;
  if ( teamID )
  {
    userIDa[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
    v10 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) )
      v12 = 1;
  }
  if ( (v10 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v12 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x79u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v13) = 1;
    if ( other.ensureCapacity(&other, 8u, v13) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v14) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, userID);
    LOBYTE(v15) = 1;
    if ( other.ensureCapacity(&other, 1u, v15) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v17 = bdByteBuffer::writeBool(other.m_buffer.m_ptr, demoteOwnerToAdmin), other.m_serializeOk = 1, !v17) )
        other.m_serializeOk = 0;
    }
    LOBYTE(v16) = 1;
    if ( other.ensureCapacity(&other, 4u, v16) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v18 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, privileges), other.m_serializeOk = 1, !v18) )
        other.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::proposeMembership
==============
*/
bdReference<bdRemoteTask> *bdTeams::proposeMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *newUserID, const void *const attachment, const unsigned int attachmentSize)
{
  char v10; 
  bool v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  unsigned int v15; 
  unsigned __int64 userID[5]; 
  bdTaskParams other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)result;
  userID[3] = (unsigned __int64)newUserID;
  result->m_ptr = NULL;
  v10 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::proposeMembership", 0x296u, "Calling proposeMembership() with a NULL teamID");
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
  v11 = bdUserAccountID::operator==((bdUserAccountID *)newUserID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v11 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::proposeMembership", 0x29Au, "Calling proposeMembership() with a NULL newUserID");
  v12 = 0;
  if ( teamID )
  {
    userID[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
    v10 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)newUserID, (const bdUserAccountID *)&other) )
      v12 = 1;
  }
  if ( (v10 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v12 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x23u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v13) = 1;
    if ( other.ensureCapacity(&other, 8u, v13) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v14) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, newUserID);
    if ( attachment )
    {
      v15 = 32;
      if ( attachmentSize < 0x20 )
        v15 = attachmentSize;
      bdBufferParams::addBlob(&other, attachment, v15);
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)newUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)newUserID->gap38);
  return result;
}

/*
==============
bdTeams::proposeMultipleMemberships
==============
*/
bdReference<bdRemoteTask> *bdTeams::proposeMultipleMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamFailedProposal *proposalFailures, const unsigned __int64 teamID, const unsigned int numUsers, const bdUserAccountID *newUserIDs, const void *const attachment, const unsigned int attachmentSize)
{
  const bdUserAccountID *v12; 
  _BOOL8 v13; 
  _BOOL8 v14; 
  bool v15; 
  bool v16; 
  __int64 v17; 
  unsigned int v18; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::proposeMultipleMemberships", 0x2BAu, "Calling proposeMultipleMemberships() with a NULL teamID");
  v12 = newUserIDs;
  if ( !newUserIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::proposeMultipleMemberships", 0x2BEu, "Calling proposeMultipleMemberships() with a NULL newUserIDs");
  if ( teamID && newUserIDs )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x5Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v13) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v13) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v15) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v14) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v14) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v16 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numUsers), taskParams.m_serializeOk = 1, !v16) )
        taskParams.m_serializeOk = 0;
    }
    if ( numUsers )
    {
      v17 = numUsers;
      do
      {
        bdTaskParams::addContextUser(&taskParams, v12++);
        --v17;
      }
      while ( v17 );
    }
    if ( attachment )
    {
      v18 = 32;
      if ( attachmentSize < 0x20 )
        v18 = attachmentSize;
      bdBufferParams::addBlob(&taskParams, attachment, v18);
    }
    if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    else
    {
      taskParams.m_taskResults = proposalFailures;
      taskParams.m_maxResults = numUsers;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::readTeamLeaderboard
==============
*/
bdReference<bdRemoteTask> *bdTeams::readTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int64 firstRank, bdStatsInfo *statsResults, const unsigned int maxResults)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  _BOOL8 v13; 
  bool v14; 
  bool v15; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x66u, 0x400u, 0xFFFFu);
  LOBYTE(v10) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v12) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v11) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, firstRank), taskParams.m_serializeOk = 1, !v14) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v13) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v13) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v15 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v15) )
      taskParams.m_serializeOk = 0;
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = statsResults;
    taskParams.m_maxResults = maxResults;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::rejectApplication
==============
*/
bdReference<bdRemoteTask> *bdTeams::rejectApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  char v8; 
  bool v9; 
  bool v10; 
  _BOOL8 v11; 
  bool v12; 
  unsigned __int64 userID[5]; 
  bdTaskParams other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)result;
  userID[3] = (unsigned __int64)applicantID;
  result->m_ptr = NULL;
  v8 = 1;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::rejectApplication", 0x748u, "Calling rejectApplication() with a NULL teamID");
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)applicantID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::rejectApplication", 0x74Cu, "Calling rejectApplication() with zero applicantID");
  v10 = 0;
  if ( teamID )
  {
    userID[0] = 0i64;
    bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
    v8 = 3;
    if ( bdUserAccountID::operator!=((bdUserAccountID *)applicantID, (const bdUserAccountID *)&other) )
      v10 = 1;
  }
  if ( (v8 & 2) != 0 )
  {
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
    bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  }
  if ( v10 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x42u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    LOBYTE(v11) = 1;
    if ( other.ensureCapacity(&other, 8u, v11) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v12 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v12) )
        other.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&other, applicantID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
bdTeams::rejectMembership
==============
*/
bdReference<bdRemoteTask> *bdTeams::rejectMembership(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *userID)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 
  __int64 v12; 
  bdReference<bdRemoteTask> *v13; 
  const bdUserAccountID *v14; 

  v12 = -2i64;
  v13 = result;
  v14 = userID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x24u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::rejectMembership", 0x2FBu, "Calling rejectMembership() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::rejectMemberships
==============
*/
bdReference<bdRemoteTask> *bdTeams::rejectMemberships(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 *teamIDs, bdTeamFailedHandleMembership *failures, const unsigned int numTeams, const bdUserAccountID *userID)
{
  const unsigned __int64 *v7; 
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  __int64 v13; 
  bool v14; 
  bdTaskParams taskParams; 
  __int64 v17; 
  bdReference<bdRemoteTask> *v18; 
  const bdUserAccountID *v19; 

  v17 = -2i64;
  v7 = teamIDs;
  v18 = result;
  v19 = userID;
  result->m_ptr = NULL;
  if ( !teamIDs )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::rejectMemberships", 0x314u, "Calling rejectMemberships() with a NULL teamIDs");
  if ( !numTeams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::rejectMemberships", 0x318u, "Calling rejectMemberships() with a zero numTeams");
  if ( v7 && numTeams )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x6Fu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numTeams), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    v13 = numTeams;
    do
    {
      LOBYTE(v11) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v11) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v14 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *v7), taskParams.m_serializeOk = 1, !v14) )
          taskParams.m_serializeOk = 0;
      }
      ++v7;
      --v13;
    }
    while ( v13 );
    bdTaskParams::addContextUser(&taskParams, userID);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = failures;
      taskParams.m_maxResults = numTeams;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::searchPublicTeamProfiles
==============
*/
bdReference<bdRemoteTask> *bdTeams::searchPublicTeamProfiles(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned int queryID, const unsigned int maxNumResults, const bdTeamProfileSearchParams *const searchParams, bdTeamProfile *publicProfiles)
{
  _BOOL8 v10; 
  _BOOL8 v11; 
  bool v12; 
  bool v13; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !queryID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchPublicTeamProfiles", 0x652u, "Calling searchPublicTeamProfiles() with a NULL queryID");
  if ( !maxNumResults )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchPublicTeamProfiles", 0x656u, "Calling searchPublicTeamProfiles() with zero maxNumResults");
  if ( !searchParams )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchPublicTeamProfiles", 0x65Au, "Calling searchPublicTeamProfiles() with a NULL searchParams");
  if ( !publicProfiles )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchPublicTeamProfiles", 0x65Eu, "Calling searchPublicTeamProfiles() with a NULL publicProfiles");
  if ( queryID && maxNumResults && searchParams && publicProfiles )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x3Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, queryID), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v11) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 4u, v11) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v13 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxNumResults), taskParams.m_serializeOk = 1, !v13) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, searchParams);
    if ( *(_OWORD *)&taskParams.m_taskResults == 0i64 )
    {
      taskParams.m_taskResults = publicProfiles;
      taskParams.m_maxResults = maxNumResults;
    }
    else
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      taskParams.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::searchTeamsV2
==============
*/
bdReference<bdRemoteTask> *bdTeams::searchTeamsV2(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *teamInfos, const bdUserAccountID *searchingUserID, const unsigned int numOtherUsers, const unsigned int numProfileFilters, const unsigned int numTeamsFilter, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults, const char *const orderByColumn, const char *const sortOrder, const bool getCurrentTeams)
{
  bdUserAccountID *v15; 
  bool v18; 
  _BOOL8 v19; 
  _BOOL8 v20; 
  bool v21; 
  bool v22; 
  _BOOL8 v23; 
  _BOOL8 v24; 
  bool v25; 
  _BOOL8 v26; 
  __int64 v27; 
  bool v28; 
  bool v29; 
  _BOOL8 v30; 
  __int64 v31; 
  bool v32; 
  const bdSerializable *v33; 
  __int64 v34; 
  bool v35; 
  const bdSerializable *v36; 
  bdLobbyErrorCode started; 
  unsigned __int64 userID; 
  bdTeams *v41; 
  const bdTeamSearchFilter *v42; 
  bdTeamInfoV2 *v43; 
  __int64 v44; 
  bdReference<bdRemoteTask> *v45; 
  const bdUserAccountID *v46; 
  bdTaskParams other; 

  v44 = -2i64;
  v15 = (bdUserAccountID *)searchingUserID;
  v43 = teamInfos;
  v41 = this;
  v45 = result;
  v46 = searchingUserID;
  v42 = teamsFilter;
  result->m_ptr = NULL;
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, &userID);
  LOBYTE(v15) = bdUserAccountID::operator==(v15, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( (_BYTE)v15 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV2", 0x7EAu, " Calling searchTeamsV2() with a NULL searchingUserID");
  if ( !maxResults )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV2", 0x7EEu, "Calling searchTeamsV2() with a zero maxResults");
  userID = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, &userID);
  v18 = bdUserAccountID::operator!=((bdUserAccountID *)searchingUserID, (const bdUserAccountID *)&other) && maxResults;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v18 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x78u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, v41->m_context);
    bdTaskParams::addContextUser(&other, searchingUserID);
    LOBYTE(v19) = 1;
    if ( other.ensureCapacity(&other, 4u, v19) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v21 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, offset), other.m_serializeOk = 1, !v21) )
        other.m_serializeOk = 0;
    }
    LOBYTE(v20) = 1;
    if ( other.ensureCapacity(&other, 4u, v20) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, maxResults), other.m_serializeOk = 1, !v22) )
        other.m_serializeOk = 0;
    }
    bdBufferParams::addString(&other, orderByColumn, 0x40ui64);
    bdBufferParams::addString(&other, sortOrder, 5ui64);
    LOBYTE(v23) = 1;
    if ( other.ensureCapacity(&other, 1u, v23) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v25 = bdByteBuffer::writeBool(other.m_buffer.m_ptr, getCurrentTeams), other.m_serializeOk = 1, !v25) )
        other.m_serializeOk = 0;
    }
    LOBYTE(v24) = 1;
    v27 = numOtherUsers;
    if ( other.ensureCapacity(&other, 4u, v24) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v28 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, numOtherUsers), other.m_serializeOk = 1, !v28) )
        other.m_serializeOk = 0;
    }
    if ( numOtherUsers )
    {
      do
      {
        LOBYTE(v26) = 1;
        if ( other.ensureCapacity(&other, 8u, v26) )
        {
          if ( other.m_isWritingArray )
            --other.m_arrayWriteCount;
          if ( !other.m_serializeOk || (v29 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, *otherUsers), other.m_serializeOk = 1, !v29) )
            other.m_serializeOk = 0;
        }
        ++otherUsers;
        --v27;
      }
      while ( v27 );
    }
    LOBYTE(v26) = 1;
    v31 = numProfileFilters;
    if ( other.ensureCapacity(&other, 4u, v26) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v32 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, numProfileFilters), other.m_serializeOk = 1, !v32) )
        other.m_serializeOk = 0;
    }
    if ( numProfileFilters )
    {
      v33 = (const bdSerializable *)(&publicProfileFilter->__vftable + 2);
      do
      {
        bdBufferParams::addSerializable(&other, v33);
        v33 += 6;
        --v31;
      }
      while ( v31 );
    }
    LOBYTE(v30) = 1;
    v34 = numTeamsFilter;
    if ( other.ensureCapacity(&other, 4u, v30) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v35 = bdByteBuffer::writeUInt32(other.m_buffer.m_ptr, numTeamsFilter), other.m_serializeOk = 1, !v35) )
        other.m_serializeOk = 0;
    }
    if ( numTeamsFilter )
    {
      v36 = (const bdSerializable *)(&v42->__vftable + 2);
      do
      {
        bdBufferParams::addSerializable(&other, v36);
        v36 += 6;
        --v34;
      }
      while ( v34 );
    }
    if ( other.m_taskResults || other.m_taskResultRefs )
    {
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
      other.m_serializeOk = 0;
    }
    else
    {
      other.m_taskResults = v43;
      other.m_maxResults = maxResults;
    }
    started = bdRemoteTaskManager::startTask(v41->m_remoteTaskManager, result, &other);
    if ( started )
      bdLogMessage(BD_LOG_WARNING, "warn/", "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV2", 0x815u, "Failed to start task: Error %i", started);
    bdTaskParams::~bdTaskParams(&other);
  }
  else
  {
    bdLogMessage(BD_LOG_WARNING, "warn/", "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV2", 0x81Au, "Failed to create searchTeams() task");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)searchingUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)searchingUserID->gap38);
  return result;
}

/*
==============
bdTeams::searchTeamsV3
==============
*/
bdReference<bdRemoteTask> *bdTeams::searchTeamsV3(bdTeams *this, bdReference<bdRemoteTask> *result, bdTeamInfoV2 *results, const bdUserAccountID *searchingUserID, const unsigned __int64 *otherUsers, const unsigned int numOtherUsers, const bdTeamSearchFilter *publicProfileFilter, const unsigned int numProfileFilters, const bdTeamSearchFilter *teamsFilter, const unsigned int numTeamsFilter, const bdTeamSearchOrdering *orderBy, const unsigned int numOrderBy, const unsigned int offset, const unsigned int maxResults, const bool getCurrentTeams)
{
  bool v19; 
  _BOOL8 v20; 
  _BOOL8 v21; 
  bool v22; 
  _BOOL8 v23; 
  bool v24; 
  _BOOL8 v25; 
  __int64 v26; 
  bool v27; 
  const bdSerializable *v28; 
  _BOOL8 v29; 
  bool v30; 
  _BOOL8 v31; 
  __int64 v32; 
  bool v33; 
  bool v34; 
  _BOOL8 v35; 
  __int64 v36; 
  bool v37; 
  const bdSerializable *v38; 
  __int64 v39; 
  bool v40; 
  const bdSerializable *v41; 
  bdLobbyErrorCode started; 
  bdTaskParams taskParams; 
  int v45; 
  unsigned __int64 userID; 
  const bdTeamSearchFilter *v47; 
  bdTeamInfoV2 *v48; 
  bdTeams *v49; 
  __int64 v50; 
  bdReference<bdRemoteTask> *v51; 
  const bdUserAccountID *v52; 
  bdUserAccountID other; 

  v50 = -2i64;
  v48 = results;
  v49 = this;
  v51 = result;
  v52 = searchingUserID;
  v47 = teamsFilter;
  result->m_ptr = NULL;
  v45 = 1;
  userID = 0i64;
  bdUserAccountID::bdUserAccountID(&other, &userID);
  v19 = bdUserAccountID::operator!=((bdUserAccountID *)searchingUserID, &other);
  bdHandleAssert(v19, "(searchingUserID != BD_NULL)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV3", 0x830u, "Cannot call searchTeams() with a NULL searchingUserID");
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  bdHandleAssert(maxResults != 0, "(maxResults > 0)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV3", 0x831u, "Cannot call searchTeams() with a zero maxResults");
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x80u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdTaskParams::addContextUser(&taskParams, searchingUserID);
  LOBYTE(v20) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v20) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v22 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, offset), taskParams.m_serializeOk = 1, !v22) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v21) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v21) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v24 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, maxResults), taskParams.m_serializeOk = 1, !v24) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v23) = 1;
  v26 = numOrderBy;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v23) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v27 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numOrderBy), taskParams.m_serializeOk = 1, !v27) )
      taskParams.m_serializeOk = 0;
  }
  if ( numOrderBy )
  {
    v28 = (const bdSerializable *)(&orderBy->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&taskParams, v28);
      v28 = (const bdSerializable *)((char *)v28 + 120);
      --v26;
    }
    while ( v26 );
  }
  LOBYTE(v25) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v25) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v30 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, getCurrentTeams), taskParams.m_serializeOk = 1, !v30) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v29) = 1;
  v32 = numOtherUsers;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v29) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v33 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numOtherUsers), taskParams.m_serializeOk = 1, !v33) )
      taskParams.m_serializeOk = 0;
  }
  if ( numOtherUsers )
  {
    do
    {
      LOBYTE(v31) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v31) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v34 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, *otherUsers), taskParams.m_serializeOk = 1, !v34) )
          taskParams.m_serializeOk = 0;
      }
      ++otherUsers;
      --v32;
    }
    while ( v32 );
  }
  LOBYTE(v31) = 1;
  v36 = numProfileFilters;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v31) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v37 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numProfileFilters), taskParams.m_serializeOk = 1, !v37) )
      taskParams.m_serializeOk = 0;
  }
  if ( numProfileFilters )
  {
    v38 = (const bdSerializable *)(&publicProfileFilter->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&taskParams, v38);
      v38 += 6;
      --v36;
    }
    while ( v36 );
  }
  LOBYTE(v35) = 1;
  v39 = numTeamsFilter;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v35) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v40 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, numTeamsFilter), taskParams.m_serializeOk = 1, !v40) )
      taskParams.m_serializeOk = 0;
  }
  if ( numTeamsFilter )
  {
    v41 = (const bdSerializable *)(&v47->__vftable + 2);
    do
    {
      bdBufferParams::addSerializable(&taskParams, v41);
      v41 += 6;
      --v39;
    }
    while ( v39 );
  }
  if ( taskParams.m_taskResults || taskParams.m_taskResultRefs )
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "bdLobbyCommon/bdTaskParams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdtaskparams.inl", "bdTaskParams::bindResults", 0x25u, "bindResults() failed; only specify task result(s) destination ONCE per task.");
    taskParams.m_serializeOk = 0;
  }
  else
  {
    taskParams.m_taskResults = v48;
    taskParams.m_maxResults = maxResults;
  }
  started = bdRemoteTaskManager::startTask(v49->m_remoteTaskManager, result, &taskParams);
  if ( started )
    bdLogMessage(BD_LOG_WARNING, "warn/", "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::searchTeamsV3", 0x858u, "Failed to start task: Error %i", started);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)searchingUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)searchingUserID->gap38);
  return result;
}

/*
==============
bdTeams::sendInstantMessage
==============
*/
bdReference<bdRemoteTask> *bdTeams::sendInstantMessage(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *teamMemberUID, const void *const message, const unsigned int msgSize)
{
  bool v9; 
  bool v10; 
  unsigned int v11; 
  unsigned __int64 userID[5]; 
  bdTaskParams other; 

  userID[1] = -2i64;
  userID[2] = (unsigned __int64)result;
  userID[3] = (unsigned __int64)teamMemberUID;
  result->m_ptr = NULL;
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
  v9 = bdUserAccountID::operator==((bdUserAccountID *)teamMemberUID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessage", 0x601u, "Calling sendInstanceMessage() with a NULL teamMemberUID");
  if ( !message )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessage", 0x605u, "Calling sendInstanceMessage() with a NULL message");
  userID[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userID);
  v10 = bdUserAccountID::operator!=((bdUserAccountID *)teamMemberUID, (const bdUserAccountID *)&other) && message;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v10 )
  {
    v11 = 1024;
    bdTaskParams::bdTaskParams(&other, 3u, 0x36u, 0x400u, 0xFFFFu);
    if ( msgSize < 0x400 )
      v11 = msgSize;
    if ( v11 < msgSize )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessage", 0x60Fu, "Exceeded maximum message size, message will be truncated.");
    bdTaskParams::addContext(&other, this->m_context);
    bdTaskParams::addContextUser(&other, teamMemberUID);
    bdBufferParams::addBlob(&other, message, v11);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)teamMemberUID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)teamMemberUID->gap38);
  return result;
}

/*
==============
bdTeams::sendInstantMessageToTeam
==============
*/
bdReference<bdRemoteTask> *bdTeams::sendInstantMessageToTeam(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const void *const message, const unsigned int msgSize)
{
  unsigned int v9; 
  _BOOL8 v10; 
  bool v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessageToTeam", 0x62Fu, "Calling sendInstantMessageToTeam() with a NULL teamID");
  if ( !message )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessageToTeam", 0x633u, "Calling sendInstantMessageToTeam() with a NULL message");
  if ( teamID && message )
  {
    v9 = 1024;
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x39u, 0x400u, 0xFFFFu);
    if ( msgSize < 0x400 )
      v9 = msgSize;
    if ( v9 < msgSize )
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::sendInstantMessageToTeam", 0x63Du, "Exceeded maximum message size, message will be truncated.");
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addBlob(&taskParams, message, v9);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::setOnline
==============
*/
bdReference<bdRemoteTask> *bdTeams::setOnline(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID)
{
  bdTaskParams taskParams; 
  const bdUserAccountID *v8; 

  v8 = userID;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x52u, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  bdTaskParams::addContextUser(&taskParams, userID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::setPrivateMemberProfile
==============
*/
bdReference<bdRemoteTask> *bdTeams::setPrivateMemberProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPrivateMemberProfile", 0x473u, "Calling setPrivateMemberProfile() with a NULL teamID");
  if ( !teamMemberProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPrivateMemberProfile", 0x477u, "Calling setPrivateMemberProfile() with a NULL teamMemberProfile");
  if ( teamID && teamMemberProfile )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Du, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&teamMemberProfile->__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::setPrivateProfile
==============
*/
bdReference<bdRemoteTask> *bdTeams::setPrivateProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *privateProfile)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPrivateProfile", 0x43Du, "Calling setPrivateProfile() with a NULL teamID");
  if ( !privateProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPrivateProfile", 0x441u, "Calling setPrivateProfile() with a NULL privateProfile");
  if ( teamID && privateProfile )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Bu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&privateProfile->__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::setPublicMemberProfile
==============
*/
bdReference<bdRemoteTask> *bdTeams::setPublicMemberProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamMemberProfile *teamMemberProfile)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPublicMemberProfile", 0x458u, "Calling setPublicMemberProfile() with a NULL teamID");
  if ( !teamMemberProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPublicMemberProfile", 0x45Cu, "Calling setPublicMemberProfile() with a NULL teamMemberProfile");
  if ( teamID && teamMemberProfile )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Cu, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&teamMemberProfile->__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::setPublicProfile
==============
*/
bdReference<bdRemoteTask> *bdTeams::setPublicProfile(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bdTeamProfile *publicProfile)
{
  _BOOL8 v8; 
  bool v9; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPublicProfile", 0x422u, "Calling setPublicProfile() with a NULL teamID");
  if ( !publicProfile )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setPublicProfile", 0x426u, "Calling setPublicProfile() with a NULL publicProfile");
  if ( teamID && publicProfile )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x2Au, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v8) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
        taskParams.m_serializeOk = 0;
    }
    bdBufferParams::addSerializable(&taskParams, (const bdSerializable *)(&publicProfile->__vftable + 2));
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  return result;
}

/*
==============
bdTeams::setRichPresence
==============
*/
bdReference<bdRemoteTask> *bdTeams::setRichPresence(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const void *const data)
{
  bdReference<bdRemoteTask> *v5; 

  bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::setRichPresence", 0x620u, "bdTeams::setRichPresence is deprecated, use bdRichPresenceService::setInfo instead");
  v5 = result;
  result->m_ptr = NULL;
  return v5;
}

/*
==============
bdTeams::setTeamAutoJoin
==============
*/
bdReference<bdRemoteTask> *bdTeams::setTeamAutoJoin(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, bool enableTeamAutoJoin)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x5Bu, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 1u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeBool(taskParams.m_buffer.m_ptr, enableTeamAutoJoin), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::setTeamLeaderboard
==============
*/
bdReference<bdRemoteTask> *bdTeams::setTeamLeaderboard(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned int leaderboardID)
{
  _BOOL8 v8; 
  _BOOL8 v9; 
  bool v10; 
  bool v11; 
  bdTaskParams taskParams; 

  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x64u, 0x400u, 0xFFFFu);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 4u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt32(taskParams.m_buffer.m_ptr, leaderboardID), taskParams.m_serializeOk = 1, !v11) )
      taskParams.m_serializeOk = 0;
  }
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  return result;
}

/*
==============
bdTeams::unbanMember
==============
*/
bdReference<bdRemoteTask> *bdTeams::unbanMember(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *unbannedUserID)
{
  bool v8; 
  _BOOL8 v9; 
  bool v10; 
  unsigned __int64 userID; 
  bdTaskParams taskParams; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 
  bdUserAccountID other; 

  v14 = -2i64;
  v15 = result;
  v16 = unbannedUserID;
  result->m_ptr = NULL;
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::unbanMember", 0x782u, "Calling unbanMember() with a NULL teamID");
  userID = 0i64;
  bdUserAccountID::bdUserAccountID(&other, &userID);
  v8 = bdUserAccountID::operator==((bdUserAccountID *)unbannedUserID, &other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)other.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)other.gap38);
  if ( v8 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::unbanMember", 0x786u, "Calling unbanMember() with a NULL unbannedUserID");
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x4Au, 0x400u, 0xFFFFu);
  bdTaskParams::addContext(&taskParams, this->m_context);
  LOBYTE(v9) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, unbannedUserID);
  bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)unbannedUserID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)unbannedUserID->gap38);
  return result;
}

/*
==============
bdTeams::unblockApplication
==============
*/
bdReference<bdRemoteTask> *bdTeams::unblockApplication(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const bdUserAccountID *applicantID)
{
  _BOOL8 v8; 
  bool v9; 
  bdLobbyErrorCode started; 
  bdLobbyErrorCode v12; 
  bdTaskParams taskParams; 
  __int64 v14; 
  bdReference<bdRemoteTask> *v15; 
  const bdUserAccountID *v16; 

  v14 = -2i64;
  v15 = result;
  v16 = applicantID;
  result->m_ptr = NULL;
  bdTaskParams::bdTaskParams(&taskParams, 3u, 0x4Eu, 0x400u, 0xFFFFu);
  bdBufferParams::addString(&taskParams, this->m_context, 0x10ui64);
  LOBYTE(v8) = 1;
  if ( taskParams.ensureCapacity(&taskParams, 8u, v8) )
  {
    if ( taskParams.m_isWritingArray )
      --taskParams.m_arrayWriteCount;
    if ( !taskParams.m_serializeOk || (v9 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v9) )
      taskParams.m_serializeOk = 0;
  }
  bdTaskParams::addContextUser(&taskParams, applicantID);
  started = bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
  if ( started )
  {
    v12 = started;
    bdLogMessage(BD_LOG_WARNING, "warn/", "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::unblockApplication", 0x7D3u, "Failed to start task: Error %i", v12);
  }
  bdTaskParams::~bdTaskParams(&taskParams);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return result;
}

/*
==============
bdTeams::updateTeamName
==============
*/
bdReference<bdRemoteTask> *bdTeams::updateTeamName(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const char *const teamName, const bdUserAccountID *userID)
{
  _BOOL8 v9; 
  bool v10; 
  bdTaskParams taskParams; 
  __int64 v13; 
  bdReference<bdRemoteTask> *v14; 
  const bdUserAccountID *v15; 

  v13 = -2i64;
  v14 = result;
  v15 = userID;
  result->m_ptr = NULL;
  if ( !teamName )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::updateTeamName", 0x1A4u, "Calling updateTeamName() with a NULL teamName");
  if ( teamID )
  {
    if ( teamName )
    {
      bdTaskParams::bdTaskParams(&taskParams, 3u, 0x1Fu, 0x400u, 0xFFFFu);
      bdTaskParams::addContext(&taskParams, this->m_context);
      LOBYTE(v9) = 1;
      if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
      {
        if ( taskParams.m_isWritingArray )
          --taskParams.m_arrayWriteCount;
        if ( !taskParams.m_serializeOk || (v10 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v10) )
          taskParams.m_serializeOk = 0;
      }
      bdBufferParams::addString(&taskParams, teamName, 0x40ui64);
      bdTaskParams::addContextUser(&taskParams, userID);
      bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
      bdTaskParams::~bdTaskParams(&taskParams);
    }
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::updateTeamName", 0x1A8u, "Calling updateTeamName() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::updateTeamType
==============
*/
bdReference<bdRemoteTask> *bdTeams::updateTeamType(bdTeams *this, bdReference<bdRemoteTask> *result, const unsigned __int64 teamID, const unsigned __int8 teamType, const bdUserAccountID *userID)
{
  _BOOL8 v9; 
  _BOOL8 v10; 
  bool v11; 
  bool v12; 
  bdTaskParams taskParams; 
  __int64 v15; 
  bdReference<bdRemoteTask> *v16; 
  const bdUserAccountID *v17; 

  v15 = -2i64;
  v16 = result;
  v17 = userID;
  result->m_ptr = NULL;
  if ( teamID )
  {
    bdTaskParams::bdTaskParams(&taskParams, 3u, 0x50u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&taskParams, this->m_context);
    LOBYTE(v9) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 8u, v9) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(taskParams.m_buffer.m_ptr, teamID), taskParams.m_serializeOk = 1, !v11) )
        taskParams.m_serializeOk = 0;
    }
    LOBYTE(v10) = 1;
    if ( taskParams.ensureCapacity(&taskParams, 1u, v10) )
    {
      if ( taskParams.m_isWritingArray )
        --taskParams.m_arrayWriteCount;
      if ( !taskParams.m_serializeOk || (v12 = bdByteBuffer::writeUByte8(taskParams.m_buffer.m_ptr, teamType), taskParams.m_serializeOk = 1, !v12) )
        taskParams.m_serializeOk = 0;
    }
    bdTaskParams::addContextUser(&taskParams, userID);
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &taskParams);
    bdTaskParams::~bdTaskParams(&taskParams);
  }
  else
  {
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::updateTeamType", 0x1CDu, "Calling updateTeamType() with a NULL teamID");
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

/*
==============
bdTeams::withdrawProposal
==============
*/
bdReference<bdRemoteTask> *bdTeams::withdrawProposal(bdTeams *this, bdReference<bdRemoteTask> *result, const bdUserAccountID *userID, const unsigned __int64 teamID)
{
  bool v8; 
  bool v9; 
  _BOOL8 v10; 
  bool v11; 
  unsigned __int64 userIDa[5]; 
  bdTaskParams other; 

  userIDa[1] = -2i64;
  userIDa[2] = (unsigned __int64)result;
  userIDa[3] = (unsigned __int64)userID;
  result->m_ptr = NULL;
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v8 = bdUserAccountID::operator==((bdUserAccountID *)userID, (const bdUserAccountID *)&other);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v8 )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::withdrawProposal", 0x2E0u, "Calling withdrawProposal() with a NULL userID");
  if ( !teamID )
    bdLogMessage(BD_LOG_ERROR, (const char *const)&::other, "teams", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdteams\\bdteams.cpp", "bdTeams::withdrawProposal", 0x2E4u, "Calling withdrawProposal() with a NULL teamID");
  userIDa[0] = 0i64;
  bdUserAccountID::bdUserAccountID((bdUserAccountID *)&other, userIDa);
  v9 = bdUserAccountID::operator!=((bdUserAccountID *)userID, (const bdUserAccountID *)&other) && teamID;
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&other.m_taskResultRefs);
  bdReferencable::~bdReferencable((bdReferencable *)&other.m_taskResultRefs);
  if ( v9 )
  {
    bdTaskParams::bdTaskParams(&other, 3u, 0x31u, 0x400u, 0xFFFFu);
    bdTaskParams::addContext(&other, this->m_context);
    bdTaskParams::addContextUser(&other, userID);
    LOBYTE(v10) = 1;
    if ( other.ensureCapacity(&other, 8u, v10) )
    {
      if ( other.m_isWritingArray )
        --other.m_arrayWriteCount;
      if ( !other.m_serializeOk || (v11 = bdByteBuffer::writeUInt64(other.m_buffer.m_ptr, teamID), other.m_serializeOk = 1, !v11) )
        other.m_serializeOk = 0;
    }
    bdRemoteTaskManager::startTask(this->m_remoteTaskManager, result, &other);
    bdTaskParams::~bdTaskParams(&other);
  }
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)userID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)userID->gap38);
  return result;
}

