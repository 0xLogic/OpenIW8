/*
==============
OnlineClan::UpdateMemberRole
==============
*/

bool __fastcall OnlineClan::UpdateMemberRole(OnlineClan *this, const XUID xuid, const OnlineClanRole newRole)
{
  return ?UpdateMemberRole@OnlineClan@@AEAA_NUXUID@@W4OnlineClanRole@@@Z(this, xuid, newRole);
}

/*
==============
OnlineClan::UpdatePlayerNotification
==============
*/

void __fastcall OnlineClan::UpdatePlayerNotification(OnlineClan *this, const XUID xuid, const char *name, const char *nameWithHash, const OnlineClanRole role)
{
  ?UpdatePlayerNotification@OnlineClan@@QEAAXUXUID@@PEBD1W4OnlineClanRole@@@Z(this, xuid, name, nameWithHash, role);
}

/*
==============
OnlineClan::Init
==============
*/

void __fastcall OnlineClan::Init(OnlineClan *this, const int controllerIndex, const unsigned __int64 id, const bool isActive, const bool isActiveOnDemonware)
{
  ?Init@OnlineClan@@QEAAXH_K_N1@Z(this, controllerIndex, id, isActive, isActiveOnDemonware);
}

/*
==============
OnlineClan::GetOutgoingInvites
==============
*/

bool __fastcall OnlineClan::GetOutgoingInvites(OnlineClan *this, const OnlineClanMember **members, unsigned int *numInvites)
{
  return ?GetOutgoingInvites@OnlineClan@@QEBA_NPEAPEBUOnlineClanMember@@AEAI@Z(this, members, numInvites);
}

/*
==============
OnlineClan::SetHappyHourCallback
==============
*/

void __fastcall OnlineClan::SetHappyHourCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?SetHappyHourCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::UpdateTag
==============
*/

bool __fastcall OnlineClan::UpdateTag(OnlineClan *this, const char *clanTag)
{
  return ?UpdateTag@OnlineClan@@QEAA_NPEBD@Z(this, clanTag);
}

/*
==============
OnlineClan::SetHappyHour
==============
*/

bool __fastcall OnlineClan::SetHappyHour(OnlineClan *this, const unsigned __int16 startMinutes)
{
  return ?SetHappyHour@OnlineClan@@QEAA_NG@Z(this, startMinutes);
}

/*
==============
OnlineClan::CheckHappyHourRunning
==============
*/

void __fastcall OnlineClan::CheckHappyHourRunning(OnlineClan *this)
{
  ?CheckHappyHourRunning@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::Deactivate
==============
*/

void __fastcall OnlineClan::Deactivate(OnlineClan *this)
{
  ?Deactivate@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan::UpdateInfo
==============
*/

bool __fastcall OnlineClan::UpdateInfo(OnlineClan *this, const char *name, const char *clanTag, const XUID owner)
{
  return ?UpdateInfo@OnlineClan@@AEAA_NPEBD0UXUID@@@Z(this, name, clanTag, owner);
}

/*
==============
OnlineClan::ValidateClanTagChecksum
==============
*/

void __fastcall OnlineClan::ValidateClanTagChecksum(OnlineClan *this)
{
  ?ValidateClanTagChecksum@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan_InitActiveClanData
==============
*/

void OnlineClan_InitActiveClanData(void)
{
  ?OnlineClan_InitActiveClanData@@YAXXZ();
}

/*
==============
OnlineClan::FetchClanInvitesCallback
==============
*/

void __fastcall OnlineClan::FetchClanInvitesCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchClanInvitesCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::InviteMember
==============
*/

bool __fastcall OnlineClan::InviteMember(OnlineClan *this, const XUID xuid)
{
  return ?InviteMember@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::LeaveClanChat
==============
*/

void __fastcall OnlineClan::LeaveClanChat(OnlineClan *this)
{
  ?LeaveClanChat@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::GetNumOnlineMembers
==============
*/

int __fastcall OnlineClan::GetNumOnlineMembers(OnlineClan *this)
{
  return ?GetNumOnlineMembers@OnlineClan@@QEAAHXZ(this);
}

/*
==============
OnlineClan::Activate_Internal
==============
*/

void __fastcall OnlineClan::Activate_Internal(OnlineClan *this)
{
  ?Activate_Internal@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::SetDWActiveClan
==============
*/

void __fastcall OnlineClan::SetDWActiveClan(OnlineClan *this)
{
  ?SetDWActiveClan@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::RemoveMemberCallback
==============
*/

void __fastcall OnlineClan::RemoveMemberCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?RemoveMemberCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::IsMemberInvitable
==============
*/

bool __fastcall OnlineClan::IsMemberInvitable(OnlineClan *this, const XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?IsMemberInvitable@OnlineClan@@QEAA_NUXUID@@PEAPEBD1@Z(this, xuid, errorString, devErrorString);
}

/*
==============
OnlineClan::GetLocalControllerRole
==============
*/

OnlineClanRole __fastcall OnlineClan::GetLocalControllerRole(OnlineClan *this)
{
  return ?GetLocalControllerRole@OnlineClan@@AEAA?AW4OnlineClanRole@@XZ(this);
}

/*
==============
OnlineClan::UpdateInfoCallback
==============
*/

void __fastcall OnlineClan::UpdateInfoCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?UpdateInfoCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::UpdateName
==============
*/

bool __fastcall OnlineClan::UpdateName(OnlineClan *this, const char *name)
{
  return ?UpdateName@OnlineClan@@QEAA_NPEBD@Z(this, name);
}

/*
==============
OnlineClan::Print
==============
*/

void __fastcall OnlineClan::Print(OnlineClan *this)
{
  ?Print@OnlineClan@@QEBAXXZ(this);
}

/*
==============
OnlineClan::ActivationFailed
==============
*/

void __fastcall OnlineClan::ActivationFailed(OnlineClan *this)
{
  ?ActivationFailed@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::ApplyClanInfo
==============
*/

void __fastcall OnlineClan::ApplyClanInfo(OnlineClan *this, const bdClansGroupInfo *info)
{
  ?ApplyClanInfo@OnlineClan@@AEAAXPEBVbdClansGroupInfo@@@Z(this, info);
}

/*
==============
OnlineClan::FetchClanInfoCallback
==============
*/

void __fastcall OnlineClan::FetchClanInfoCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchClanInfoCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::FinializeActivation
==============
*/

void __fastcall OnlineClan::FinializeActivation(OnlineClan *this)
{
  ?FinializeActivation@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::UpdateMemberRoleCallback
==============
*/

void __fastcall OnlineClan::UpdateMemberRoleCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?UpdateMemberRoleCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::IsMemberJoinable
==============
*/

bool __fastcall OnlineClan::IsMemberJoinable(OnlineClan *this, const XUID xuid, const char **errorString, const char **devErrorString)
{
  return ?IsMemberJoinable@OnlineClan@@QEAA_NUXUID@@PEAPEBD1@Z(this, xuid, errorString, devErrorString);
}

/*
==============
OnlineClan_SendLuaClanNotification
==============
*/

void __fastcall OnlineClan_SendLuaClanNotification(const int controllerIndex, const bool success, const unsigned __int64 clanId, const char *clanName, const char *clanTag, const char *luiEvent, const int errorCode)
{
  ?OnlineClan_SendLuaClanNotification@@YAXH_N_KPEBD22H@Z(controllerIndex, success, clanId, clanName, clanTag, luiEvent, errorCode);
}

/*
==============
OnlineClan_SendLuaClanGenericNotification
==============
*/

void __fastcall OnlineClan_SendLuaClanGenericNotification(const int controllerIndex, const char *luiEvent, const bool success, const int errorCode)
{
  ?OnlineClan_SendLuaClanGenericNotification@@YAXHPEBD_NH@Z(controllerIndex, luiEvent, success, errorCode);
}

/*
==============
OnlineClan::FetchClanInvites
==============
*/

void __fastcall OnlineClan::FetchClanInvites(OnlineClan *this)
{
  ?FetchClanInvites@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::SortMembers
==============
*/

void __fastcall OnlineClan::SortMembers(OnlineClan *this)
{
  ?SortMembers@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan::ClanUpdateNotification
==============
*/

void __fastcall OnlineClan::ClanUpdateNotification(OnlineClan *this, const char *name, const char *clanTag, const int memberCount, const int onlineMemberCount)
{
  ?ClanUpdateNotification@OnlineClan@@QEAAXPEBD0HH@Z(this, name, clanTag, memberCount, onlineMemberCount);
}

/*
==============
SetHappyHourChallenge
==============
*/

void __fastcall SetHappyHourChallenge(const int controllerIndex)
{
  ?SetHappyHourChallenge@@YAXH@Z(controllerIndex);
}

/*
==============
OnlineClan::GetHappyHour
==============
*/

bool __fastcall OnlineClan::GetHappyHour(OnlineClan *this, unsigned __int16 *happyHour, int *lastUpdateTime)
{
  return ?GetHappyHour@OnlineClan@@QEAA_NAEAGAEAH@Z(this, happyHour, lastUpdateTime);
}

/*
==============
OnlineClan::Init
==============
*/

void __fastcall OnlineClan::Init(OnlineClan *this, const int controllerIndex, const unsigned __int64 id, const bool isActive, const bool isActiveOnDemonware, const bdClansGroupInfo *groupInfo)
{
  ?Init@OnlineClan@@QEAAXH_K_N1PEBVbdClansGroupInfo@@@Z(this, controllerIndex, id, isActive, isActiveOnDemonware, groupInfo);
}

/*
==============
OnlineClan::JoinClanDataChannel
==============
*/

void __fastcall OnlineClan::JoinClanDataChannel(OnlineClan *this)
{
  ?JoinClanDataChannel@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::PromoteToOfficer
==============
*/

bool __fastcall OnlineClan::PromoteToOfficer(OnlineClan *this, const XUID xuid)
{
  return ?PromoteToOfficer@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::JoinClanChatCallback
==============
*/

void __fastcall OnlineClan::JoinClanChatCallback(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool success, const int errorCode)
{
  ?JoinClanChatCallback@OnlineClan@@CAXHAEBUOnlineChatId@@AEBW4OnlineChatType@@_NH@Z(controllerIndex, chatId, chatType, success, errorCode);
}

/*
==============
OnlineClan::JoinClanDataChannelCallback
==============
*/

void __fastcall OnlineClan::JoinClanDataChannelCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?JoinClanDataChannelCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::LeaveClanDataChannelCallback
==============
*/

void __fastcall OnlineClan::LeaveClanDataChannelCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?LeaveClanDataChannelCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::GetHappyHourTask
==============
*/

void __fastcall OnlineClan::GetHappyHourTask(OnlineClan *this)
{
  ?GetHappyHourTask@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::Activate
==============
*/

void __fastcall OnlineClan::Activate(OnlineClan *this)
{
  ?Activate@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan::FetchClanMembers
==============
*/

void __fastcall OnlineClan::FetchClanMembers(OnlineClan *this)
{
  ?FetchClanMembers@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::RemoveInviteNotification
==============
*/

void __fastcall OnlineClan::RemoveInviteNotification(OnlineClan *this, const XUID xuid)
{
  ?RemoveInviteNotification@OnlineClan@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::GetMemberRole
==============
*/

OnlineClanRole __fastcall OnlineClan::GetMemberRole(OnlineClan *this, const XUID xuid)
{
  return ?GetMemberRole@OnlineClan@@QEAA?AW4OnlineClanRole@@UXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::LeaveClanDataChannel
==============
*/

void __fastcall OnlineClan::LeaveClanDataChannel(OnlineClan *this)
{
  ?LeaveClanDataChannel@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::FetchClanMembersCallback
==============
*/

void __fastcall OnlineClan::FetchClanMembersCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?FetchClanMembersCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::CancelMemberInvitation
==============
*/

bool __fastcall OnlineClan::CancelMemberInvitation(OnlineClan *this, const XUID xuid)
{
  return ?CancelMemberInvitation@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::InviteMemberCallback
==============
*/

void __fastcall OnlineClan::InviteMemberCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?InviteMemberCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::IsUserInvited
==============
*/

bool __fastcall OnlineClan::IsUserInvited(OnlineClan *this, const XUID xuid)
{
  return ?IsUserInvited@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::LeaveClanCallback
==============
*/

void __fastcall OnlineClan::LeaveClanCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?LeaveClanCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::SetDWActiveClanCallback
==============
*/

void __fastcall OnlineClan::SetDWActiveClanCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?SetDWActiveClanCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::RevokeInvitationComplete
==============
*/

void __fastcall OnlineClan::RevokeInvitationComplete(GenericTask *task, eTaskManagerTaskState state)
{
  ?RevokeInvitationComplete@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::AddPlayerNotification
==============
*/

void __fastcall OnlineClan::AddPlayerNotification(OnlineClan *this, const XUID xuid, const char *name, const char *nameWithHash, const OnlineClanRole role, const bool isActiveClan)
{
  ?AddPlayerNotification@OnlineClan@@QEAAXUXUID@@PEBD1W4OnlineClanRole@@_N@Z(this, xuid, name, nameWithHash, role, isActiveClan);
}

/*
==============
OnlineClan::RemovePlayerNotification
==============
*/

void __fastcall OnlineClan::RemovePlayerNotification(OnlineClan *this, const XUID xuid)
{
  ?RemovePlayerNotification@OnlineClan@@QEAAXUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::PromoteToOwner
==============
*/

bool __fastcall OnlineClan::PromoteToOwner(OnlineClan *this, const XUID xuid)
{
  return ?PromoteToOwner@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan_ReceiveClanDataNotification
==============
*/

void __fastcall OnlineClan_ReceiveClanDataNotification(const unsigned __int64 clanId, const int clanDataType, const XUID fromXUID, void *message, const unsigned int messageSize)
{
  ?OnlineClan_ReceiveClanDataNotification@@YAX_KHUXUID@@PEAXI@Z(clanId, clanDataType, fromXUID, message, messageSize);
}

/*
==============
OnlineClan::RevokeInvitation
==============
*/

bool __fastcall OnlineClan::RevokeInvitation(OnlineClan *this, const XUID xuid)
{
  return ?RevokeInvitation@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::FetchClanInfo
==============
*/

void __fastcall OnlineClan::FetchClanInfo(OnlineClan *this)
{
  ?FetchClanInfo@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::GetNumMembers
==============
*/

int __fastcall OnlineClan::GetNumMembers(OnlineClan *this)
{
  return ?GetNumMembers@OnlineClan@@QEAAHXZ(this);
}

/*
==============
OnlineClan::UpdatePlayerActiveClan
==============
*/

void __fastcall OnlineClan::UpdatePlayerActiveClan(OnlineClan *this, const XUID xuid, const bool isActiveClan)
{
  ?UpdatePlayerActiveClan@OnlineClan@@QEAAXUXUID@@_N@Z(this, xuid, isActiveClan);
}

/*
==============
OnlineClan::GetHappyHourCallback
==============
*/

void __fastcall OnlineClan::GetHappyHourCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?GetHappyHourCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::RemoveMember
==============
*/

bool __fastcall OnlineClan::RemoveMember(OnlineClan *this, const XUID xuid)
{
  return ?RemoveMember@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::JoinClanChat
==============
*/

void __fastcall OnlineClan::JoinClanChat(OnlineClan *this)
{
  ?JoinClanChat@OnlineClan@@AEAAXXZ(this);
}

/*
==============
OnlineClan::GetMember
==============
*/

bool __fastcall OnlineClan::GetMember(OnlineClan *this, const XUID xuid, const OnlineClanMember **member)
{
  return ?GetMember@OnlineClan@@QEBA_NUXUID@@PEAPEBUOnlineClanMember@@@Z(this, xuid, member);
}

/*
==============
OnlineClan::Uninit
==============
*/

void __fastcall OnlineClan::Uninit(OnlineClan *this)
{
  ?Uninit@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan_GetActiveClan
==============
*/

bool __fastcall OnlineClan_GetActiveClan(const int controllerIndex, OnlineClan **clanOut)
{
  return ?OnlineClan_GetActiveClan@@YA_NHPEAPEAVOnlineClan@@@Z(controllerIndex, clanOut);
}

/*
==============
OnlineClan::IsActiveClan
==============
*/

bool __fastcall OnlineClan::IsActiveClan(OnlineClan *this)
{
  return ?IsActiveClan@OnlineClan@@QEBA_NXZ(this);
}

/*
==============
OnlineClan::GetMembers
==============
*/

bool __fastcall OnlineClan::GetMembers(OnlineClan *this, const OnlineClanMember **members, unsigned int *numMembers)
{
  return ?GetMembers@OnlineClan@@QEBA_NPEAPEBUOnlineClanMember@@AEAI@Z(this, members, numMembers);
}

/*
==============
OnlineClan::Frame
==============
*/

void __fastcall OnlineClan::Frame(OnlineClan *this)
{
  ?Frame@OnlineClan@@QEAAXXZ(this);
}

/*
==============
OnlineClan::CancelMemberInvitationCallback
==============
*/

void __fastcall OnlineClan::CancelMemberInvitationCallback(GenericTask *task, eTaskManagerTaskState state)
{
  ?CancelMemberInvitationCallback@OnlineClan@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, state);
}

/*
==============
OnlineClan::DemoteToMember
==============
*/

bool __fastcall OnlineClan::DemoteToMember(OnlineClan *this, const XUID xuid)
{
  return ?DemoteToMember@OnlineClan@@QEAA_NUXUID@@@Z(this, xuid);
}

/*
==============
OnlineClan::LeaveClan
==============
*/

bool __fastcall OnlineClan::LeaveClan(OnlineClan *this)
{
  return ?LeaveClan@OnlineClan@@QEAA_NXZ(this);
}

/*
==============
ClanDataNotification_HappyHour
==============
*/
void ClanDataNotification_HappyHour(ActiveClanData *activeData, const XUID fromXUID, void *message, const unsigned int messageSize)
{
  if ( messageSize == 8 )
  {
    if ( OnlineClan::GetMemberRole(activeData->clan, fromXUID) != MEMBER )
    {
      activeData->happyHour = *(OnlineClanHappyHour *)message;
      SetHappyHourChallenge(activeData->clan->m_controllerIndex);
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 215, ASSERT_TYPE_ASSERT, "(messageSize == sizeof( OnlineClanHappyHour ))", "%s\n\tmessagesize %u is not equal to happy hour size %zu", "messageSize == sizeof( OnlineClanHappyHour )", messageSize, 8ui64) )
  {
    __debugbreak();
  }
}

/*
==============
OnlineClan::Activate
==============
*/
void OnlineClan::Activate(OnlineClan *this)
{
  int m_controllerIndex; 
  OnlineClan *clan; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    clan = GetActiveClanData(this->m_controllerIndex)->clan;
    if ( clan )
      Com_Printf(14, "[Clan] %s: Another clan already is active for controller %i (clan %zu)\n", "OnlineClan::Activate", (unsigned int)this->m_controllerIndex, clan->m_id);
    else
      OnlineClan::Activate_Internal(this);
  }
  else
  {
    Com_Printf(14, "[Clan] %s: This clan already is active for controller %i\n", "OnlineClan::Activate", (unsigned int)this->m_controllerIndex);
  }
}

/*
==============
OnlineClan::Activate_Internal
==============
*/
void OnlineClan::Activate_Internal(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  if ( ActiveClanData->clan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 942, ASSERT_TYPE_ASSERT, "(activeData->clan == nullptr)", (const char *)&queryFormat, "activeData->clan == nullptr") )
    __debugbreak();
  ActiveClanData->clan = this;
  if ( this->m_state != SEARCHING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 946, ASSERT_TYPE_ASSERT, "(m_state == OnlineClanState::INITIALIZED)", (const char *)&queryFormat, "m_state == OnlineClanState::INITIALIZED") )
    __debugbreak();
  this->m_state = QOSING;
  OnlineClan::FetchClanMembers(this);
}

/*
==============
OnlineClan::ActivationFailed
==============
*/
void OnlineClan::ActivationFailed(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 
  unsigned __int64 m_id; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  memset_0(ActiveClanData, 0, 0xA410ui64);
  *(_QWORD *)&ActiveClanData->numClanMembers = 0i64;
  ActiveClanData->chatId.m_id = 0i64;
  ActiveClanData->needToJoinChat = 0;
  ActiveClanData->happyHour.timeStart = 0;
  ActiveClanData->happyHour.isSetup = 0;
  ActiveClanData->happyHour.lastUpdateTime = 0;
  ActiveClanData->pendingHappyHour.timeStart = 0;
  ActiveClanData->pendingHappyHour.isSetup = 0;
  ActiveClanData->pendingHappyHour.lastUpdateTime = 0;
  ActiveClanData->happyHourCurrentlyRunning = 0;
  ActiveClanData->clan = NULL;
  m_id = this->m_id;
  this->m_state = SEARCHING;
  this->m_isActiveOnDemonware = 0;
  Com_PrintError(14, "[Clan] %s: activation of clan id %zu failed\n", "OnlineClan::ActivationFailed", m_id);
  OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 0, this->m_id, this->m_name, this->m_clanTag, "clans_activated_clan", 0);
}

/*
==============
OnlineClan::AddPlayerNotification
==============
*/
void OnlineClan::AddPlayerNotification(OnlineClan *this, const XUID xuid, const char *name, const char *nameWithHash, const OnlineClanRole role, const bool isActiveClan)
{
  ActiveClanData *ActiveClanData; 
  unsigned __int64 v10; 
  const char *v11; 
  int m_controllerIndex; 
  unsigned __int64 v13; 
  const char *v14; 
  OnlineClanMember *v15; 
  unsigned __int64 v16; 
  OnlinePresenceNotifications *Instance; 
  unsigned __int64 m_id; 
  const char *v19; 
  OnlineClanMember *member; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  if ( ActiveClanData->numClanMembers < 0xFA )
  {
    if ( OnlineClan::IsUserInvited(this, xuida) )
      OnlineClan::RemoveInviteNotification(this, xuida);
    m_controllerIndex = this->m_controllerIndex;
    if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    {
      m_id = this->m_id;
      v19 = XUID::ToString(&xuida);
      Com_PrintError(14, "[Clan] %s: couldn't add member %s because this clan %zu isn't active\n", "OnlineClan::AddPlayerNotification", v19, m_id);
    }
    else if ( OnlineClan::GetMember(this, xuida, (const OnlineClanMember **)&member) )
    {
      v13 = this->m_id;
      v14 = XUID::ToString(&xuida);
      Com_PrintError(14, "[Clan] %s: couldn't add member %s because the member is already in this clan %zu\n", "OnlineClan::AddPlayerNotification", v14, v13);
    }
    else
    {
      v15 = &ActiveClanData->members[ActiveClanData->numClanMembers];
      XUID::operator=(&v15->xuid, &xuida);
      Core_strcpy(v15->name, 0x24ui64, name);
      Core_strcpy(v15->nameWithHash, 0x40ui64, nameWithHash);
      v15->role = role;
      v15->isActiveClan = isActiveClan;
      ++ActiveClanData->numClanMembers;
      v16 = xuida.m_id;
      this->m_deactivatedNumMembers = ActiveClanData->numClanMembers;
      if ( !Live_XUIDIsLocalPlayer((const XUID)v16) )
      {
        Instance = OnlinePresenceNotifications::GetInstance();
        OnlinePresenceNotifications::SubscribeToUser(Instance, this->m_controllerIndex, xuida, ClanMember);
      }
    }
  }
  else
  {
    v10 = this->m_id;
    v11 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: couldn't add member %s because our member list is full for this clan %zu\n", "OnlineClan::AddPlayerNotification", v11, v10);
  }
}

/*
==============
OnlineClan::ApplyClanInfo
==============
*/
void OnlineClan::ApplyClanInfo(OnlineClan *this, const bdClansGroupInfo *info)
{
  const char *Name; 
  const char *UniqueTag; 
  bdUserAccountID *Owner; 
  const XUID *v7; 
  XUID v8; 
  bdUserAccountID result; 

  Name = bdClansGroupInfo::getName((bdClansGroupInfo *)info);
  Core_strcpy(this->m_name, 0x1Fui64, Name);
  UniqueTag = bdClansGroupInfo::getUniqueTag((bdClansGroupInfo *)info);
  Core_strcpy(this->m_clanTag, 6ui64, UniqueTag);
  Owner = bdClansGroupInfo::getOwner((bdClansGroupInfo *)info, &result);
  v7 = XUID::FromUniversalId(&v8, Owner->m_userID);
  XUID::operator=(&this->m_owner, v7);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  this->m_createdTimestamp = bdClansGroupInfo::getCreatedTimestamp((bdClansGroupInfo *)info);
  this->m_deactivatedNumMembers = bdClansGroupInfo::getMemberCount((bdClansGroupInfo *)info);
  this->m_deactivatedNumOnlineMembers = bdClansGroupInfo::getOnlineMemberCount((bdClansGroupInfo *)info);
  this->m_state = SEARCHING;
  if ( this->m_activateAfterInit )
    OnlineClan::Activate_Internal(this);
}

/*
==============
OnlineClan::CancelMemberInvitation
==============
*/
char OnlineClan::CancelMemberInvitation(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v6; 
  TaskCreateRequest *v7; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
  char v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 v13; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v15; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v17; 
  bdReference<bdRemoteTask> v18; 
  XUID v19; 
  unsigned __int64 userID; 

  v19.m_id = xuid.m_id;
  v15 = -2i64;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not active\n", "OnlineClan::CancelMemberInvitation");
    return 0;
  }
  else
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
    userID = XUID::ToUint64(&v19);
    bdUserAccountID::bdUserAccountID(&v17, &userID);
    v7 = (TaskCreateRequest *)DWClans::cancelInvite(Clans, &v18, this->m_id, v6, &this->m_removeProposalsResponse);
    if ( v7 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v8 = *(bdRemoteTask **)&v7->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v8;
      if ( v8 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    }
    if ( v18.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v18.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v18.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v18.m_ptr->~bdReferencable)(v18.m_ptr, 1i64);
    pTaskCreateRequest.m_appData = this;
    pTaskCreateRequest.m_onCompletionCallback = OnlineClan::CancelMemberInvitationCallback;
    pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v9 = TaskManager::GetInstance(), TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      LODWORD(v13) = this->m_controllerIndex;
      Com_Printf(14, "[Clan] %s: Successfully started to update clan info for %zu (controller %i)\n", "OnlineClan::CancelMemberInvitation", this->m_id, v13);
      v10 = 1;
    }
    else
    {
      v10 = 0;
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
    return v10;
  }
}

/*
==============
OnlineClan::CancelMemberInvitationCallback
==============
*/
void OnlineClan::CancelMemberInvitationCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  bool v6; 
  unsigned int m_size; 
  bdArray<bdClansFailedMembershipProposal> *FailedProposals; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  const char *m_name; 
  unsigned int v12; 
  bdArray<bdClansRemovedMembershipProposal> *Proposals; 
  bdUserAccountID *TargetUser; 
  unsigned __int64 v15; 
  ActiveClanData *ActiveClanData; 
  __int64 v17; 
  bdUserAccountID *v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned __int64 v23; 
  unsigned __int64 TransactionID; 
  int errorCode; 
  bdLobbyErrorCode fmt; 
  bool v27; 
  bdArray<bdClansFailedMembershipProposal> result; 
  __int64 v29; 
  bdUserAccountID v30; 
  bdClansRemovedMembershipProposal value; 

  v29 = -2i64;
  m_appData = (OnlineClan *)task->m_appData;
  m_controllerIndex = m_appData->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != m_appData )
  {
    Com_PrintError(14, "[Clan] %s: clan not active\n", "OnlineClan::CancelMemberInvitationCallback");
  }
  else
  {
    v6 = state == TASKSTATE_SUCCESS;
    v27 = state == TASKSTATE_SUCCESS;
    if ( state )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      m_name = m_appData->m_name;
      fmt = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed for clan %s (code: %i transid: %zu)\n", "OnlineClan::CancelMemberInvitationCallback", m_appData->m_name, fmt, TransactionID);
    }
    else
    {
      m_size = bdClansRemoveProposalsResponse::getFailedProposals(&m_appData->m_removeProposalsResponse, &result)->m_size;
      bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
      if ( m_size )
      {
        bdClansFailedMembershipProposal::bdClansFailedMembershipProposal((bdClansFailedMembershipProposal *)&value);
        FailedProposals = bdClansRemoveProposalsResponse::getFailedProposals(&m_appData->m_removeProposalsResponse, &result);
        bdArray<bdClansFailedMembershipProposal>::get(FailedProposals, 0, (bdClansFailedMembershipProposal *)&value);
        bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
        User = bdClansFailedMembershipProposal::getUser((bdClansFailedMembershipProposal *)&value, &v30);
        UserID = bdUserAccountID::getUserID(User);
        Com_PrintError(14, "[Clan] %s: Failed to cancel invite to player %zu\n", "OnlineClan::CancelMemberInvitationCallback", UserID);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v30.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v30.gap38);
        v6 = 0;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.m_group.__vftable + 1));
        bdReferencable::~bdReferencable((bdReferencable *)&value.m_group.m_rootID);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&value.m_targetUser[128]);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&value.m_targetUser[112]);
        bdReferencable::~bdReferencable((bdReferencable *)&value.m_targetUser[128]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&value.m_cooldown);
        m_name = m_appData->m_name;
      }
      else
      {
        v12 = bdClansRemoveProposalsResponse::getProposals(&m_appData->m_removeProposalsResponse, (bdArray<bdClansRemovedMembershipProposal> *)&result)->m_size;
        bdArray<bdClansRemovedMembershipProposal>::~bdArray<bdClansRemovedMembershipProposal>((bdArray<bdClansRemovedMembershipProposal> *)&result);
        if ( v12 )
        {
          bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(&value);
          Proposals = bdClansRemoveProposalsResponse::getProposals(&m_appData->m_removeProposalsResponse, (bdArray<bdClansRemovedMembershipProposal> *)&result);
          bdArray<bdClansRemovedMembershipProposal>::get(Proposals, 0, &value);
          bdArray<bdClansRemovedMembershipProposal>::~bdArray<bdClansRemovedMembershipProposal>((bdArray<bdClansRemovedMembershipProposal> *)&result);
          TargetUser = bdClansRemovedMembershipProposal::getTargetUser(&value, &v30);
          v15 = bdUserAccountID::getUserID(TargetUser);
          Com_Printf(14, "[Clan] %s: Successfully canceled invite to player %zu\n", "OnlineClan::CancelMemberInvitationCallback", v15);
          bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v30.gap38);
          bdReferencable::~bdReferencable((bdReferencable *)v30.gap38);
          ActiveClanData = GetActiveClanData(task->m_controllerIndex);
          if ( !ActiveClanData->numClanInvites && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1486, ASSERT_TYPE_ASSERT, "(activeData->numClanInvites > 0)", (const char *)&queryFormat, "activeData->numClanInvites > 0") )
            __debugbreak();
          v17 = 0i64;
          if ( ActiveClanData->numClanInvites )
          {
            while ( 1 )
            {
              v18 = bdClansRemovedMembershipProposal::getTargetUser(&value, &v30);
              v19 = XUID::ToUint64(&ActiveClanData->clanInvites[(unsigned int)v17].xuid);
              v20 = bdUserAccountID::getUserID(v18);
              bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v30.gap38);
              bdReferencable::~bdReferencable((bdReferencable *)v30.gap38);
              if ( v19 == v20 )
                break;
              v17 = (unsigned int)(v17 + 1);
              if ( (unsigned int)v17 >= ActiveClanData->numClanInvites )
                goto LABEL_15;
            }
            v21 = ActiveClanData->numClanInvites - 1 + 250i64;
            v22 = v17 + 250;
            *(__m256i *)ActiveClanData->members[v22].name = *(__m256i *)ActiveClanData->members[v21].name;
            *(__m256i *)&ActiveClanData->members[v22].name[32] = *(__m256i *)&ActiveClanData->members[v21].name[32];
            *(__m256i *)&ActiveClanData->members[v22].nameWithHash[28] = *(__m256i *)&ActiveClanData->members[v21].nameWithHash[28];
            *(_OWORD *)&ActiveClanData->members[v22].nameWithHash[60] = *(_OWORD *)&ActiveClanData->members[v21].nameWithHash[60];
            *(double *)&ActiveClanData->members[v22].role = *(double *)&ActiveClanData->members[v21].role;
            --ActiveClanData->numClanInvites;
          }
LABEL_15:
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.m_group.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)(&value.m_group.m_rootID + 1));
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&value.m_targetUser[136]);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&value.m_targetUser[120]);
          bdReferencable::~bdReferencable((bdReferencable *)&value.m_targetUser[136]);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)&value.gapFC[4]);
          v6 = v27;
          m_name = m_appData->m_name;
        }
        else
        {
          v23 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
          Com_PrintError(14, "[Clan] %s: zero failed proposals and zero proposals were returned for clan %s, something has gone wrong, tid %zu\n", "OnlineClan::CancelMemberInvitationCallback", m_appData->m_name, v23);
          v6 = 0;
          m_name = m_appData->m_name;
        }
      }
    }
    errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineClan_SendLuaClanNotification(task->m_controllerIndex, v6, m_appData->m_id, m_name, m_appData->m_clanTag, "clans_invite_canceled", errorCode);
  }
}

/*
==============
OnlineClan::CheckHappyHourRunning
==============
*/
void OnlineClan::CheckHappyHourRunning(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 
  unsigned int UTC; 
  int v4; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  if ( ActiveClanData->happyHour.isSetup )
  {
    UTC = LiveStorage_GetUTC();
    v4 = UTC - 60 * (ActiveClanData->happyHour.timeStart + 1440 * (UTC / 0x15180));
    if ( v4 < 0 || (unsigned int)v4 >= 0xE10 )
    {
      if ( ActiveClanData->happyHourCurrentlyRunning )
      {
        Com_Printf(14, "[Clan] %s: Turning happy hour off\n", "OnlineClan::CheckHappyHourRunning");
        OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, "clans_happy_hour_end", 0);
        ActiveClanData->happyHourCurrentlyRunning = 0;
      }
    }
    else if ( !ActiveClanData->happyHourCurrentlyRunning )
    {
      Com_Printf(14, "[Clan] %s: Turning happy hour on\n", "OnlineClan::CheckHappyHourRunning");
      OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, "clans_happy_hour_start", 0);
      ActiveClanData->happyHourCurrentlyRunning = 1;
    }
  }
}

/*
==============
OnlineClan::ClanUpdateNotification
==============
*/
void OnlineClan::ClanUpdateNotification(OnlineClan *this, const char *name, const char *clanTag, const int memberCount, const int onlineMemberCount)
{
  Core_strcpy(this->m_name, 0x1Fui64, name);
  Core_strcpy(this->m_clanTag, 6ui64, clanTag);
  this->m_deactivatedNumMembers = memberCount;
  this->m_deactivatedNumOnlineMembers = onlineMemberCount;
}

/*
==============
OnlineClan::Deactivate
==============
*/
void OnlineClan::Deactivate(OnlineClan *this)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v5; 
  ActiveClanData *v6; 
  unsigned int i; 
  OnlinePresenceNotifications *v8; 
  OnlineChatType chatType; 

  this->m_isActiveOnDemonware = 0;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_Printf(14, "[Clan] %s: This clan already is inactive\n", "OnlineClan::Deactivate");
  }
  else
  {
    Com_Printf(14, "[Clan] %s for clan %s\n", "OnlineClan::Deactivate", this->m_name);
    OnlineClan::LeaveClanDataChannel(this);
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    Instance = OnlineChatManager::GetInstance();
    chatType = 6;
    OnlineChatManager::LeaveChat(Instance, &ActiveClanData->chatId, &chatType);
    v5 = OnlineChatManager::GetInstance();
    OnlineChatManager::ClearChatHistoryForType(v5, (const OnlineChatType)6);
    v6 = GetActiveClanData(this->m_controllerIndex);
    for ( i = 0; i < v6->numClanMembers; ++i )
    {
      v8 = OnlinePresenceNotifications::GetInstance();
      OnlinePresenceNotifications::UnsubscribeFromUser(v8, this->m_controllerIndex, v6->members[i].xuid, ClanMember);
    }
    if ( !v6->clan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1825, ASSERT_TYPE_ASSERT, "(activeData->clan != nullptr)", (const char *)&queryFormat, "activeData->clan != nullptr") )
      __debugbreak();
    memset_0(v6, 0, 0xA410ui64);
    *(_QWORD *)&v6->numClanMembers = 0i64;
    v6->chatId.m_id = 0i64;
    v6->needToJoinChat = 0;
    v6->happyHour.timeStart = 0;
    v6->happyHour.isSetup = 0;
    v6->happyHour.lastUpdateTime = 0;
    v6->pendingHappyHour.timeStart = 0;
    v6->pendingHappyHour.isSetup = 0;
    v6->pendingHappyHour.lastUpdateTime = 0;
    v6->happyHourCurrentlyRunning = 0;
    v6->clan = NULL;
    this->m_state = SEARCHING;
  }
}

/*
==============
OnlineClan::DemoteToMember
==============
*/
bool OnlineClan::DemoteToMember(OnlineClan *this, const XUID xuid)
{
  OnlineClanRole LocalControllerRole; 

  if ( OnlineClan::GetLocalControllerRole(this) == OWNER )
    return OnlineClan::UpdateMemberRole(this, xuid, MEMBER);
  LocalControllerRole = OnlineClan::GetLocalControllerRole(this);
  Com_PrintError(14, "[Clan] %s: We need to be the owner to demote players (our role: %i)\n", "OnlineClan::DemoteToMember", (unsigned __int16)LocalControllerRole);
  return 0;
}

/*
==============
OnlineClan::FetchClanInfo
==============
*/
void OnlineClan::FetchClanInfo(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *ClanInfos; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdClansGetGroupInfosResponse *response; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 ids; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  ids = this->m_id;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  ClanInfos = (TaskCreateRequest *)DWClans::getClanInfos(Clans, &result, &ids, 1u, &this->m_getGroupInfoResponse);
  if ( ClanInfos != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&ClanInfos->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::FetchClanInfoCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    this->m_state = INITIALIZING;
    LODWORD(response) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to fetch clan info for %zu (controller %i)\n", "OnlineClan::FetchClanInfo", this->m_id, response);
  }
  else
  {
    LODWORD(response) = this->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: Faied to fetch clan info for %zu (controller %i)\n", "OnlineClan::FetchClanInfo", this->m_id, response);
    OnlineClan::Uninit(this);
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
OnlineClan::FetchClanInfoCallback
==============
*/
void OnlineClan::FetchClanInfoCallback(GenericTask *task, eTaskManagerTaskState state)
{
  eTaskManagerTaskState v2; 
  OnlineClan *m_appData; 
  unsigned int m_size; 
  bdArray<bdClansGroupInfo> *GroupInfos; 
  bdClansGroupInfo *m_data; 
  _OWORD *v8; 
  unsigned __int64 *v9; 
  __int64 v10; 
  __int64 v11; 
  bdStructFixedSizeString<255> *p_m_uniqueTag; 
  bdStructFixedSizeString<255> *v13; 
  bool *p_m_hasValue; 
  int errorCode; 
  bdArray<bdClansGroupInfo> result; 
  __int64 v17; 
  bdClansGroupInfo info; 

  v17 = -2i64;
  v2 = state;
  m_appData = (OnlineClan *)task->m_appData;
  if ( state )
  {
    Com_PrintError(14, "[Clan] %s: unable to fetch clan info for %zu (controller %i), uninitiailizing clan\n", "OnlineClan::FetchClanInfoCallback", m_appData->m_id, task->m_controllerIndex);
    OnlineClan::Uninit(m_appData);
  }
  else
  {
    m_size = bdClansGetGroupInfosResponse::getGroupInfos(&m_appData->m_getGroupInfoResponse, &result)->m_size;
    bdArray<bdClansGroupInfo>::~bdArray<bdClansGroupInfo>(&result);
    if ( m_size )
    {
      bdClansGroupInfo::bdClansGroupInfo(&info);
      GroupInfos = bdClansGetGroupInfosResponse::getGroupInfos(&m_appData->m_getGroupInfoResponse, &result);
      if ( GroupInfos->m_size )
      {
        m_data = GroupInfos->m_data;
        bdReferencable::operator=((bdReferencable *)&info.m_name[*(int *)(*((_QWORD *)&info.__vftable + 1) + 4i64) - 56], (const bdReferencable *)((char *)&GroupInfos->m_data->__vftable + *(int *)(*((_QWORD *)&GroupInfos->m_data->__vftable + 1) + 4i64) + 8));
        *((_WORD *)&info.__vftable + 8) = *((_WORD *)&m_data->__vftable + 8);
        *((_QWORD *)&info.__vftable + 3) = *((_QWORD *)&m_data->__vftable + 3);
        info.m_rootKind = m_data->m_rootKind;
        info.m_rootID = m_data->m_rootID;
        v8 = &m_data->m_rootID + 1;
        v9 = &info.m_rootID + 1;
        v10 = 2i64;
        v11 = 2i64;
        do
        {
          *(_OWORD *)v9 = *v8;
          *((_OWORD *)v9 + 1) = v8[1];
          *((_OWORD *)v9 + 2) = v8[2];
          *((_OWORD *)v9 + 3) = v8[3];
          *((_OWORD *)v9 + 4) = v8[4];
          *((_OWORD *)v9 + 5) = v8[5];
          *((_OWORD *)v9 + 6) = v8[6];
          v9 += 16;
          *((_OWORD *)v9 - 1) = v8[7];
          v8 += 8;
          --v11;
        }
        while ( v11 );
        p_m_uniqueTag = &m_data->m_uniqueTag;
        v13 = &info.m_uniqueTag;
        do
        {
          *(_OWORD *)v13->m_buffer = *(_OWORD *)p_m_uniqueTag->m_buffer;
          *(_OWORD *)&v13->m_buffer[16] = *(_OWORD *)&p_m_uniqueTag->m_buffer[16];
          *(_OWORD *)&v13->m_buffer[32] = *(_OWORD *)&p_m_uniqueTag->m_buffer[32];
          *(_OWORD *)&v13->m_buffer[48] = *(_OWORD *)&p_m_uniqueTag->m_buffer[48];
          *(_OWORD *)&v13->m_buffer[64] = *(_OWORD *)&p_m_uniqueTag->m_buffer[64];
          *(_OWORD *)&v13->m_buffer[80] = *(_OWORD *)&p_m_uniqueTag->m_buffer[80];
          *(_OWORD *)&v13->m_buffer[96] = *(_OWORD *)&p_m_uniqueTag->m_buffer[96];
          v13 = (bdStructFixedSizeString<255> *)((char *)v13 + 128);
          *(_OWORD *)&v13[-1].m_buffer[240] = *(_OWORD *)&p_m_uniqueTag->m_buffer[112];
          p_m_uniqueTag = (bdStructFixedSizeString<255> *)((char *)p_m_uniqueTag + 128);
          --v10;
        }
        while ( v10 );
        info.m_privacyLevel = m_data->m_privacyLevel;
        p_m_hasValue = &m_data->m_owner.m_hasValue;
        if ( &info.m_owner != &m_data->m_owner )
        {
          info.m_owner.m_hasValue = *p_m_hasValue;
          bdUserAccountID::operator=(&info.m_owner.m_value, &m_data->m_owner.m_value);
          bdReferencable::operator=((bdReferencable *)&info.m_owner.m_value.gap38[*(int *)(*(_QWORD *)&info.m_owner.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&p_m_hasValue[*(int *)(*(_QWORD *)&m_data->m_owner.m_value.gap38[8] + 4i64) + 72]);
        }
        info.m_memberCount = m_data->m_memberCount;
        info.m_proposalCount = m_data->m_proposalCount;
        info.m_createdTimestamp = m_data->m_createdTimestamp;
        info.m_onlineMemberCount = m_data->m_onlineMemberCount;
      }
      bdArray<bdClansGroupInfo>::~bdArray<bdClansGroupInfo>(&result);
      OnlineClan::ApplyClanInfo(m_appData, &info);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)info.m_owner.m_value._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)info.m_owner.m_value.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)info.m_owner.m_value._bytes_48);
      bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>(&info.m_uniqueTag);
      bdStructFixedSizeString<255>::~bdStructFixedSizeString<255>((bdStructFixedSizeString<255> *)(&info.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&info.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)info.gap2A8);
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: fetched clan info for %zu (controller %i) but no clan was returned, uninitiailizing clan\n", "OnlineClan::FetchClanInfoCallback", m_appData->m_id, task->m_controllerIndex);
      v2 = TASKSTATE_ERROR;
      OnlineClan::Uninit(m_appData);
    }
  }
  errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
  OnlineClan_SendLuaClanNotification(task->m_controllerIndex, v2 == TASKSTATE_SUCCESS, m_appData->m_id, m_appData->m_name, m_appData->m_clanTag, "clans_initialized_clan", errorCode);
}

/*
==============
OnlineClan::FetchClanInvites
==============
*/
void OnlineClan::FetchClanInvites(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *OutgoingClanInvites; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *pageToken; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  OutgoingClanInvites = (TaskCreateRequest *)DWClans::getOutgoingClanInvites(Clans, &result, this->m_id, 0x64u, (const char *)&queryFormat.fmt + 3, &this->m_getMembershipProposalsByGroupResponse);
  if ( OutgoingClanInvites != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&OutgoingClanInvites->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::FetchClanInvitesCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(pageToken) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to get clan invites for %s (controller %i)\n", "OnlineClan::FetchClanInvites", this->m_name, pageToken);
  }
  else
  {
    LODWORD(pageToken) = this->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: unable to start fetching clan invites for channel %zu (controller %i)\n", "OnlineClan::FetchClanInvites", this->m_id, pageToken);
    OnlineClan::ActivationFailed(this);
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
OnlineClan::FetchClanInvitesCallback
==============
*/
void OnlineClan::FetchClanInvitesCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  ActiveClanData *ActiveClanData; 
  bdClansGetMembershipProposalsByGroupResponse *p_m_getMembershipProposalsByGroupResponse; 
  bdArray<bdClansGroupMembershipProposal> *Proposals; 
  int m_size; 
  unsigned int i; 
  bdArray<bdClansGroupMembershipProposal> *v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  char *v13; 
  bdClansGroupMembershipProposal *m_data; 
  __int64 v15; 
  __int64 v16; 
  bdClansGroupMembershipProposal_vtbl **v17; 
  __int64 v18; 
  bdUserAccountID *TargetUser; 
  __int64 v20; 
  unsigned __int64 UserID; 
  const XUID *v22; 
  bdUserDetails *TargetUserDetails; 
  const char *Username; 
  bdArray<bdClansGroupMembershipProposal> result; 
  ActiveClanData *v26; 
  __int64 v27; 
  XUID v28; 
  bdUserAccountID v29; 
  bdUserDetails v30; 
  bdUserDetails v31; 
  bdUserDetails v32; 
  __int64 v33; 
  bdReferencable v34; 

  v27 = -2i64;
  m_appData = (OnlineClan *)task->m_appData;
  if ( state )
  {
    Com_PrintError(14, "[Clan] %s: unable to fetch clan invites for channel %zu (controller %i)\n", "OnlineClan::FetchClanInvitesCallback", m_appData->m_id, task->m_controllerIndex);
    OnlineClan::ActivationFailed(m_appData);
  }
  else if ( m_appData->m_state )
  {
    ActiveClanData = GetActiveClanData(task->m_controllerIndex);
    v26 = ActiveClanData;
    p_m_getMembershipProposalsByGroupResponse = &m_appData->m_getMembershipProposalsByGroupResponse;
    Proposals = bdClansGetMembershipProposalsByGroupResponse::getProposals(&m_appData->m_getMembershipProposalsByGroupResponse, &result);
    m_size = 100;
    if ( (int)Proposals->m_size < 100 )
      m_size = Proposals->m_size;
    ActiveClanData->numClanInvites = m_size;
    bdArray<bdClansGroupMembershipProposal>::~bdArray<bdClansGroupMembershipProposal>(&result);
    Com_Printf(14, "[Clan] %s: Successfully fetched %i invites for clan %zu (controller %i)\n", "OnlineClan::FetchClanInvitesCallback", ActiveClanData->numClanInvites, m_appData->m_id, task->m_controllerIndex);
    for ( i = 0; i < ActiveClanData->numClanInvites; ++i )
    {
      bdClansGroupMembershipProposal::bdClansGroupMembershipProposal((bdClansGroupMembershipProposal *)(&v30.__vftable + 2));
      v9 = bdClansGetMembershipProposalsByGroupResponse::getProposals(p_m_getMembershipProposalsByGroupResponse, &result);
      if ( i < v9->m_size )
      {
        v10 = (__int64)&v9->m_data[i];
        bdReferencable::operator=((bdReferencable *)&v30._bytes_20[*(int *)(*((_QWORD *)&v30.__vftable + 3) + 4i64) - 8], (const bdReferencable *)(*(int *)(*(_QWORD *)(v10 + 8) + 4i64) + v10 + 8));
        bdUserDetails::operator=((bdUserDetails *)v30._bytes_20, (const bdUserDetails *)(v10 + 16));
        bdReferencable::operator=((bdReferencable *)&v31._bytes_20[*(int *)(*((_QWORD *)&v31.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v10 + 152) + 4i64) + v10 + 152));
        bdUserDetails::operator=((bdUserDetails *)v31._bytes_20, (const bdUserDetails *)(v10 + 176));
        bdReferencable::operator=((bdReferencable *)&v32._bytes_20[*(int *)(*((_QWORD *)&v32.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v10 + 312) + 4i64) + v10 + 312));
        *(_WORD *)v32._bytes_20 = *(_WORD *)(v10 + 336);
        bdReferencable::operator=((bdReferencable *)&v32.m_accountType[*(int *)(*(_QWORD *)v32.m_accountType + 4i64)], (const bdReferencable *)(*(int *)(*(_QWORD *)(v10 + 352) + 4i64) + v10 + 352));
        *(_WORD *)&v32.m_username[6] = *(_WORD *)(v10 + 360);
        *(_QWORD *)&v32.m_username[14] = *(_QWORD *)(v10 + 368);
        *(_WORD *)&v32.m_username[22] = *(_WORD *)(v10 + 376);
        *(_QWORD *)&v32.m_username[30] = *(_QWORD *)(v10 + 384);
        *(_QWORD *)&v32.m_username[54] = *(_QWORD *)(v10 + 408);
        *(_DWORD *)&v32.m_username[62] = *(_DWORD *)(v10 + 416);
        v11 = 0i64;
        v12 = v10 - (_QWORD)&v32.m_usernameHash;
        do
        {
          v13 = &v32.m_username[v11 + 66];
          *v13 = v13[v12 + 420];
          v13[1] = *((_BYTE *)&v32 + v11 + v12 + 537);
          v11 += 2i64;
        }
        while ( v11 < 0x400 );
        v33 = *(_QWORD *)(v10 + 1448);
        ActiveClanData = v26;
      }
      m_data = result.m_data;
      if ( result.m_size )
      {
        v15 = 0i64;
        v16 = 0i64;
        v17 = &result.m_data->__vftable + 1;
        v18 = result.m_size;
        do
        {
          (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v17)->serialize) + v15 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v17)->serialize) + v16 + 8, 0i64);
          v16 += 1472i64;
          v15 += 1472i64;
          v17 += 184;
          --v18;
        }
        while ( v18 );
        m_data = result.m_data;
        ActiveClanData = v26;
        p_m_getMembershipProposalsByGroupResponse = &m_appData->m_getMembershipProposalsByGroupResponse;
      }
      bdMemory::deallocate(m_data);
      result.m_data = NULL;
      *(_QWORD *)&result.m_capacity = 0i64;
      TargetUser = bdClansGroupMembershipProposal::getTargetUser((bdClansGroupMembershipProposal *)(&v30.__vftable + 2), &v29);
      v20 = i;
      UserID = bdUserAccountID::getUserID(TargetUser);
      v22 = XUID::FromUniversalId(&v28, UserID);
      XUID::operator=(&ActiveClanData->clanInvites[v20].xuid, v22);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v29.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v29.gap38);
      ActiveClanData->clanInvites[v20].role = bdClansGroupMembershipProposal::getRole((bdClansGroupMembershipProposal *)(&v30.__vftable + 2));
      TargetUserDetails = bdClansGroupMembershipProposal::getTargetUserDetails((bdClansGroupMembershipProposal *)(&v30.__vftable + 2), (bdUserDetails *)&v29);
      Username = bdUserDetails::getUsername(TargetUserDetails);
      Core_strcpy(ActiveClanData->clanInvites[v20].name, 0x24ui64, Username);
      bdUserDetails::~bdUserDetails(&v30);
      bdReferencable::~bdReferencable((bdReferencable *)&v30);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v32.m_username[6]);
      bdReferencable::~bdReferencable((bdReferencable *)&v32.m_username[38]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v32.__vftable + 2));
      bdUserDetails::~bdUserDetails(&v32);
      bdReferencable::~bdReferencable((bdReferencable *)&v32.__vftable + 1);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v31.__vftable + 2));
      bdUserDetails::~bdUserDetails(&v31);
      bdReferencable::~bdReferencable((bdReferencable *)&v31.__vftable + 1);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v30._bytes_20);
      bdReferencable::~bdReferencable(&v34);
    }
    OnlineClan::JoinClanChat(m_appData);
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: fetch clan invites completed for channel %zu (controller %i) but clan is IDLE, perhaps user signed out?\n", "OnlineClan::FetchClanInvitesCallback", m_appData->m_id, task->m_controllerIndex);
  }
}

/*
==============
OnlineClan::FetchClanMembers
==============
*/
void OnlineClan::FetchClanMembers(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *ClanMembers; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
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
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  ClanMembers = (TaskCreateRequest *)DWClans::getClanMembers(Clans, &result, this->m_id, &this->m_getGroupMembersResponse);
  if ( ClanMembers != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&ClanMembers->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::FetchClanMembersCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(14, "[Clan] %s: Successfully started to get clan members for %s (controller %i)\n", "OnlineClan::FetchClanMembers", this->m_name, this->m_controllerIndex);
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: unable to start fetching clan members for channel %zu (controller %i)\n", "OnlineClan::FetchClanMembers", this->m_id, this->m_controllerIndex);
    OnlineClan::ActivationFailed(this);
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
OnlineClan::FetchClanMembersCallback
==============
*/
void OnlineClan::FetchClanMembersCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  __int64 v3; 
  unsigned int v4; 
  bdClansGetGroupMembersResponse *p_m_getGroupMembersResponse; 
  unsigned int m_size; 
  bdClansGroupMemberInfo *m_data; 
  __int64 v8; 
  bdClansGroupMemberInfo_vtbl **v9; 
  __int64 v10; 
  bdArray<bdClansGroupMemberInfo> *Members; 
  __int64 v12; 
  bdClansGroupMemberInfo *v13; 
  __int64 v14; 
  bdClansGroupMemberInfo_vtbl **v15; 
  __int64 v16; 
  unsigned int i; 
  unsigned int v18; 
  bdClansGroupMembershipInfo *v19; 
  __int64 v20; 
  bdClansGroupMembershipInfo_vtbl **v21; 
  __int64 v22; 
  bdArray<bdClansGroupMembershipInfo> *Memberships; 
  __int64 v24; 
  bdClansGroupMembershipInfo *v25; 
  __int64 v26; 
  bdClansGroupMembershipInfo_vtbl **v27; 
  __int64 v28; 
  char *v29; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 m_id; 
  unsigned __int64 ID; 
  unsigned __int16 Role; 
  bool isActiveGroup; 
  bdUserDetails *UserDetails; 
  bool v36; 
  bdUserDetails *v37; 
  const char *Username; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  int m_controllerIndex; 
  ActiveClanData *v42; 
  unsigned __int64 v43; 
  const char *v44; 
  int v45; 
  unsigned __int64 v46; 
  const char *v47; 
  OnlineClanMember *v48; 
  OnlinePresenceNotifications *Instance; 
  unsigned __int64 v50; 
  const char *v51; 
  int v52; 
  ActiveClanData *ActiveClanData; 
  unsigned int numClanMembers; 
  XUID xuid; 
  __int16 v56; 
  unsigned int v57; 
  OnlineClan *v58; 
  bdArray<bdClansGroupMemberInfo> result; 
  bdArray<bdClansGroupMemberInfo> v60; 
  bdArray<bdClansGroupMembershipInfo> v61; 
  bdArray<bdClansGroupMembershipInfo> v62; 
  bdClansGetGroupMembersResponse *v63; 
  OnlineClanMember *member[2]; 
  XUID v65; 
  bdClansGroupMembershipInfo v66; 
  bdUserDetails v67; 
  bdUserDetails v68; 
  char dest[64]; 
  char usernameWithHash[112]; 

  member[1] = (OnlineClanMember *)-2i64;
  m_appData = (OnlineClan *)task->m_appData;
  v58 = m_appData;
  if ( m_appData->m_state )
  {
    if ( state )
    {
      Com_PrintError(14, "[Clan] %s: unable to fetch clan info for channel %zu (controller %i)\n", "OnlineClan::FetchClanMembersCallback", m_appData->m_id, task->m_controllerIndex);
      OnlineClan::ActivationFailed(m_appData);
    }
    else
    {
      v3 = 0i64;
      v4 = 0;
      p_m_getGroupMembersResponse = &m_appData->m_getGroupMembersResponse;
      v63 = &m_appData->m_getGroupMembersResponse;
      while ( 1 )
      {
        v57 = v4;
        m_size = bdClansGetGroupMembersResponse::getMembers(p_m_getGroupMembersResponse, &result)->m_size;
        m_data = result.m_data;
        if ( result.m_size )
        {
          v8 = 0i64;
          v9 = &result.m_data->__vftable + 1;
          v10 = result.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v9)->serialize) + v8 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v9)->serialize) + v3 + 8, 0i64);
            v3 += 216i64;
            v8 += 216i64;
            v9 += 27;
            --v10;
          }
          while ( v10 );
          m_data = result.m_data;
          m_appData = v58;
          p_m_getGroupMembersResponse = v63;
          v3 = 0i64;
        }
        bdMemory::deallocate(m_data);
        result.m_data = NULL;
        *(_QWORD *)&result.m_capacity = 0i64;
        if ( v4 >= m_size )
          break;
        bdClansGroupMemberInfo::bdClansGroupMemberInfo((bdClansGroupMemberInfo *)(&v67.__vftable + 2));
        Members = bdClansGetGroupMembersResponse::getMembers(p_m_getGroupMembersResponse, &v60);
        if ( v4 < Members->m_size )
        {
          v12 = (__int64)&Members->m_data[v4];
          bdReferencable::operator=((bdReferencable *)&v67._bytes_20[*(int *)(*((_QWORD *)&v67.__vftable + 3) + 4i64) - 8], (const bdReferencable *)(*(int *)(*(_QWORD *)(v12 + 8) + 4i64) + v12 + 8));
          bdUserDetails::operator=((bdUserDetails *)v67._bytes_20, (const bdUserDetails *)(v12 + 16));
          bdReferencable::operator=((bdReferencable *)&v68._bytes_20[*(int *)(*((_QWORD *)&v68.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v12 + 152) + 4i64) + v12 + 152));
          bdArray<bdClansGroupMembershipInfo>::operator=((bdArray<bdClansGroupMembershipInfo> *)v68._bytes_20, (const bdArray<bdClansGroupMembershipInfo> *)(v12 + 176));
          v68.m_accountType[0] = *(_BYTE *)(v12 + 192);
        }
        v13 = v60.m_data;
        if ( v60.m_size )
        {
          v14 = 0i64;
          v15 = &v60.m_data->__vftable + 1;
          v16 = v60.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v13->__vftable + SHIDWORD((*v15)->serialize) + v14 + 8))((__int64)&v13->__vftable + SHIDWORD((*v15)->serialize) + v3 + 8, 0i64);
            v3 += 216i64;
            v14 += 216i64;
            v15 += 27;
            --v16;
          }
          while ( v16 );
          v13 = v60.m_data;
          v3 = 0i64;
        }
        bdMemory::deallocate(v13);
        v60.m_data = NULL;
        *(_QWORD *)&v60.m_capacity = 0i64;
        v56 = 1;
        for ( i = 0; ; ++i )
        {
          v18 = bdClansGroupMemberInfo::getMemberships((bdClansGroupMemberInfo *)(&v67.__vftable + 2), &v61)->m_size;
          v19 = v61.m_data;
          if ( v61.m_size )
          {
            v20 = 0i64;
            v21 = &v61.m_data->__vftable + 1;
            v22 = v61.m_size;
            do
            {
              (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v19[v20].__vftable + SHIDWORD((*v21)->serialize) + 8))((__int64)&v19->__vftable + v3 + SHIDWORD((*v21)->serialize) + 8, 0i64);
              v3 += 112i64;
              ++v20;
              v21 += 14;
              --v22;
            }
            while ( v22 );
            v19 = v61.m_data;
            v3 = 0i64;
          }
          bdMemory::deallocate(v19);
          v61.m_data = NULL;
          *(_QWORD *)&v61.m_capacity = 0i64;
          if ( i >= v18 )
            break;
          bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v66);
          Memberships = bdClansGroupMemberInfo::getMemberships((bdClansGroupMemberInfo *)(&v67.__vftable + 2), &v62);
          if ( i < Memberships->m_size )
          {
            v24 = (__int64)&Memberships->m_data[i];
            bdReferencable::operator=((bdReferencable *)&v66.m_group[*(int *)(*((_QWORD *)&v66.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v24 + 8) + 4i64) + v24 + 8));
            *((_WORD *)&v66.__vftable + 8) = *(_WORD *)(v24 + 16);
            bdReferencable::operator=((bdReferencable *)&v66.m_group[*(int *)(*(_QWORD *)v66.m_group + 4i64)], (const bdReferencable *)(*(int *)(*(_QWORD *)(v24 + 32) + 4i64) + v24 + 32));
            *(_WORD *)&v66.m_group[8] = *(_WORD *)(v24 + 40);
            *(_QWORD *)&v66.m_group[16] = *(_QWORD *)(v24 + 48);
            *(_WORD *)&v66.m_group[24] = *(_WORD *)(v24 + 56);
            *(_QWORD *)&v66.m_group[32] = *(_QWORD *)(v24 + 64);
            v66.m_isActiveGroup = *(_BYTE *)(v24 + 88);
          }
          v25 = v62.m_data;
          if ( v62.m_size )
          {
            v26 = 0i64;
            v27 = &v62.m_data->__vftable + 1;
            v28 = v62.m_size;
            do
            {
              v29 = (char *)v25 + SHIDWORD((*v27)->serialize);
              (**(void (__fastcall ***)(__int64, _QWORD))&v29[v26 + 8])((__int64)&v29[v3 + 8], 0i64);
              v3 += 112i64;
              v26 += 112i64;
              v27 += 14;
              --v28;
            }
            while ( v28 );
            v25 = v62.m_data;
            v3 = 0i64;
          }
          bdMemory::deallocate(v25);
          v62.m_data = NULL;
          *(_QWORD *)&v62.m_capacity = 0i64;
          Group = bdClansGroupMembershipInfo::getGroup(&v66, (bdClansGroupIdentifier *)&v68.m_username[30]);
          m_appData = v58;
          m_id = v58->m_id;
          ID = bdClansGroupIdentifier::getID(Group);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v68.m_username[46]);
          bdReferencable::~bdReferencable((bdReferencable *)&v68.gap79[7]);
          if ( ID == m_id )
          {
            Role = bdClansGroupMembershipInfo::getRole(&v66);
            isActiveGroup = bdClansGroupMembershipInfo::isActiveGroup(&v66);
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v66.m_group[8]);
            bdReferencable::~bdReferencable((bdReferencable *)&v66.m_group[40]);
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v66.__vftable + 2));
            bdReferencable::~bdReferencable((bdReferencable *)&v66.gap59[7]);
            goto LABEL_33;
          }
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v66.m_group[8]);
          bdReferencable::~bdReferencable((bdReferencable *)&v66.m_group[40]);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v66.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)&v66.gap59[7]);
        }
        m_appData = v58;
        Role = v56;
        isActiveGroup = 0;
LABEL_33:
        dest[0] = 0;
        UserDetails = bdClansGroupMemberInfo::getUserDetails((bdClansGroupMemberInfo *)(&v67.__vftable + 2), (bdUserDetails *)&v66);
        v36 = bdUserDetails::getUsernameWithHash(UserDetails, usernameWithHash);
        bdUserDetails::~bdUserDetails(&v67);
        bdReferencable::~bdReferencable((bdReferencable *)&v67);
        if ( v36 )
          Core_strcpy_truncate(dest, 0x40ui64, usernameWithHash);
        v37 = bdClansGroupMemberInfo::getUserDetails((bdClansGroupMemberInfo *)(&v67.__vftable + 2), (bdUserDetails *)&v66);
        Username = bdUserDetails::getUsername(v37);
        User = bdClansGroupMemberInfo::getUser((bdClansGroupMemberInfo *)(&v67.__vftable + 2), (bdUserAccountID *)&v68.m_username[30]);
        UserID = bdUserAccountID::getUserID(User);
        xuid.m_id = XUID::FromUniversalId(&v65, UserID)->m_id;
        m_controllerIndex = m_appData->m_controllerIndex;
        if ( !CL_Mgr_IsControllerActive(m_controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 122, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerActive( controllerIndex ))", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
          __debugbreak();
        v42 = &s_activeClanData[CL_Mgr_GetClientFromController(m_controllerIndex)];
        if ( v42->numClanMembers < 0xFA )
        {
          if ( OnlineClan::IsUserInvited(m_appData, xuid) )
            OnlineClan::RemoveInviteNotification(m_appData, xuid);
          v45 = m_appData->m_controllerIndex;
          if ( v45 == -1 || GetActiveClanData(v45)->clan != m_appData )
          {
            v50 = m_appData->m_id;
            v51 = XUID::ToString(&xuid);
            Com_PrintError(14, "[Clan] %s: couldn't add member %s because this clan %zu isn't active\n", "OnlineClan::AddPlayerNotification", v51, v50);
          }
          else
          {
            member[0] = NULL;
            if ( OnlineClan::GetMember(m_appData, xuid, (const OnlineClanMember **)member) )
            {
              v46 = m_appData->m_id;
              v47 = XUID::ToString(&xuid);
              Com_PrintError(14, "[Clan] %s: couldn't add member %s because the member is already in this clan %zu\n", "OnlineClan::AddPlayerNotification", v47, v46);
            }
            else
            {
              v48 = &v42->members[v42->numClanMembers];
              XUID::operator=(&v48->xuid, &xuid);
              Core_strcpy(v48->name, 0x24ui64, Username);
              Core_strcpy(v48->nameWithHash, 0x40ui64, dest);
              v48->role = Role;
              v48->isActiveClan = isActiveGroup;
              m_appData->m_deactivatedNumMembers = ++v42->numClanMembers;
              if ( !Live_XUIDIsLocalPlayer(xuid) )
              {
                Instance = OnlinePresenceNotifications::GetInstance();
                OnlinePresenceNotifications::SubscribeToUser(Instance, m_appData->m_controllerIndex, xuid, ClanMember);
              }
            }
          }
        }
        else
        {
          v43 = m_appData->m_id;
          v44 = XUID::ToString(&xuid);
          Com_PrintError(14, "[Clan] %s: couldn't add member %s because our member list is full for this clan %zu\n", "OnlineClan::AddPlayerNotification", v44, v43);
        }
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v68.gap79[15]);
        bdReferencable::~bdReferencable((bdReferencable *)&v68.gap79[15]);
        bdUserDetails::~bdUserDetails(&v67);
        bdReferencable::~bdReferencable((bdReferencable *)&v67);
        bdArray<bdClansGroupMembershipInfo>::destruct((bdArray<bdClansGroupMembershipInfo> *)v68._bytes_20, *(bdClansGroupMembershipInfo **)v68._bytes_20, *(const unsigned int *)&v68._bytes_20[12]);
        bdMemory::deallocate(*(void **)v68._bytes_20);
        v3 = 0i64;
        *(_QWORD *)v68._bytes_20 = 0i64;
        *(_QWORD *)&v68._bytes_20[8] = 0i64;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v68.__vftable + 2));
        bdUserDetails::~bdUserDetails(&v68);
        bdReferencable::~bdReferencable((bdReferencable *)&v68.__vftable + 1);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v67._bytes_20);
        bdReferencable::~bdReferencable((bdReferencable *)&v68.m_username[6]);
        v4 = v57 + 1;
        p_m_getGroupMembersResponse = &m_appData->m_getGroupMembersResponse;
      }
      v52 = m_appData->m_controllerIndex;
      if ( v52 != -1 && GetActiveClanData(v52)->clan == m_appData )
      {
        ActiveClanData = GetActiveClanData(m_appData->m_controllerIndex);
        numClanMembers = ActiveClanData->numClanMembers;
        if ( numClanMembers )
          qsort(ActiveClanData, numClanMembers, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortMember);
      }
      OnlineClan::FetchClanInvites(m_appData);
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: fetch clan invites completed for channel %zu (controller %i) but clan is IDLE, perhaps user signed out?\n", "OnlineClan::FetchClanMembersCallback", m_appData->m_id, task->m_controllerIndex);
  }
}

/*
==============
OnlineClan::FinializeActivation
==============
*/
void OnlineClan::FinializeActivation(OnlineClan *this)
{
  unsigned __int64 m_id; 

  m_id = this->m_id;
  this->m_state = JOINED_LOBBY;
  Com_Printf(14, "[Clan] %s: activation of clan id %zu succeeded\n", "OnlineClan::FinializeActivation", m_id);
  OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, "clans_activated_clan", 0);
}

/*
==============
OnlineClan::Frame
==============
*/
void OnlineClan::Frame(OnlineClan *this)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  unsigned int UTC; 
  int v5; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex != -1 && GetActiveClanData(m_controllerIndex)->clan == this )
  {
    if ( GetActiveClanData(this->m_controllerIndex)->needToJoinChat )
      OnlineClan::JoinClanChat(this);
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    if ( ActiveClanData->happyHour.isSetup )
    {
      UTC = LiveStorage_GetUTC();
      v5 = UTC - 60 * (ActiveClanData->happyHour.timeStart + 1440 * (UTC / 0x15180));
      if ( v5 < 0 || (unsigned int)v5 >= 0xE10 )
      {
        if ( ActiveClanData->happyHourCurrentlyRunning )
        {
          Com_Printf(14, "[Clan] %s: Turning happy hour off\n", "OnlineClan::CheckHappyHourRunning");
          OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, "clans_happy_hour_end", 0);
          ActiveClanData->happyHourCurrentlyRunning = 0;
        }
      }
      else if ( !ActiveClanData->happyHourCurrentlyRunning )
      {
        Com_Printf(14, "[Clan] %s: Turning happy hour on\n", "OnlineClan::CheckHappyHourRunning");
        OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, "clans_happy_hour_start", 0);
        ActiveClanData->happyHourCurrentlyRunning = 1;
      }
    }
  }
}

/*
==============
GetActiveClanData
==============
*/
ActiveClanData *GetActiveClanData(const int controllerIndex)
{
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 122, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerActive( controllerIndex ))", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  return &s_activeClanData[CL_Mgr_GetClientFromController(controllerIndex)];
}

/*
==============
OnlineClan::GetHappyHour
==============
*/
char OnlineClan::GetHappyHour(OnlineClan *this, unsigned __int16 *happyHour, int *lastUpdateTime)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not the active clan\n", "OnlineClan::GetHappyHour");
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    if ( ActiveClanData->happyHour.isSetup )
    {
      *happyHour = ActiveClanData->happyHour.timeStart;
      *lastUpdateTime = ActiveClanData->happyHour.lastUpdateTime;
      return 1;
    }
  }
  return 0;
}

/*
==============
OnlineClan::GetHappyHourCallback
==============
*/
void OnlineClan::GetHappyHourCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 

  m_appData = (OnlineClan *)task->m_appData;
  if ( state == TASKSTATE_SUCCESS || bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr) == BD_CLANS_GROUP_FILE_DOES_NOT_EXIST )
  {
    OnlineClan::JoinClanDataChannel(m_appData);
  }
  else
  {
    m_controllerIndex = task->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: unable to fetch clan happy hour for clan %zu (controller %i)\n", "OnlineClan::GetHappyHourCallback", m_appData->m_id, m_controllerIndex);
    OnlineClan::ActivationFailed(m_appData);
  }
}

/*
==============
OnlineClan::GetHappyHourTask
==============
*/
void OnlineClan::GetHappyHourTask(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *GroupFile; 
  bdRemoteTask *v6; 
  TaskManager *v7; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  unsigned __int8 *fileBuffer; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  GroupFile = (TaskCreateRequest *)DWClans::getGroupFile(Clans, &result, this->m_id, "happyHour", (unsigned __int8 *)&ActiveClanData->happyHour, 8u, &this->m_getGroupFileResponse);
  if ( GroupFile != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v6 = *(bdRemoteTask **)&GroupFile->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v6;
    if ( v6 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v6->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::GetHappyHourCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v7 = TaskManager::GetInstance(), TaskManager::CreateTask(v7, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(fileBuffer) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to get happy hour data for clan %zu (controller %i)\n", "OnlineClan::GetHappyHourTask", this->m_id, fileBuffer);
  }
  else
  {
    LODWORD(fileBuffer) = this->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: Unable to start fetching happy hour for clan %zu (controller %i)\n", "OnlineClan::GetHappyHourTask", this->m_id, fileBuffer);
    OnlineClan::ActivationFailed(this);
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
OnlineClan::GetLocalControllerRole
==============
*/
OnlineClanRole OnlineClan::GetLocalControllerRole(OnlineClan *this)
{
  int m_controllerIndex; 
  XUID result; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 )
    goto LABEL_11;
  if ( !CL_Mgr_IsControllerActive(m_controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 122, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerActive( controllerIndex ))", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  if ( s_activeClanData[CL_Mgr_GetClientFromController(m_controllerIndex)].clan != this )
  {
LABEL_11:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 344, ASSERT_TYPE_ASSERT, "(IsActiveClan())", (const char *)&queryFormat, "IsActiveClan()") )
      __debugbreak();
  }
  Live_GetXuid(&result, this->m_controllerIndex);
  return OnlineClan::GetMemberRole(this, result);
}

/*
==============
OnlineClan::GetMember
==============
*/
char OnlineClan::GetMember(OnlineClan *this, const XUID xuid, const OnlineClanMember **member)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  int v7; 
  ActiveClanData *v8; 
  const OnlineClanMember *v9; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_Printf(14, "[Clan] %s: This clan already is inactive\n", "OnlineClan::GetMember");
    return 0;
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    v7 = 0;
    v8 = ActiveClanData;
    if ( ActiveClanData->numClanMembers )
    {
      while ( 1 )
      {
        v9 = &v8->members[v7];
        if ( XUID::operator==(&v9->xuid, &xuida) )
          break;
        if ( ++v7 >= v8->numClanMembers )
          return 0;
      }
      *member = v9;
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
OnlineClan::GetMemberRole
==============
*/
__int64 OnlineClan::GetMemberRole(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  ActiveClanData *v5; 
  int v7; 
  unsigned __int64 m_id; 
  const char *v9; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not initialized\n", "OnlineClan::GetMemberRole");
    return 1i64;
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    v5 = ActiveClanData;
    if ( ActiveClanData->clan->m_state == JOINED_LOBBY )
    {
      v7 = 0;
      if ( ActiveClanData->numClanMembers )
      {
        while ( !XUID::operator==(&v5->members[v7].xuid, &xuida) )
        {
          if ( ++v7 >= v5->numClanMembers )
            goto LABEL_8;
        }
        return (unsigned __int16)v5->members[v7].role;
      }
      else
      {
LABEL_8:
        m_id = this->m_id;
        v9 = XUID::ToString(&xuida);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1699, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "user %s doesn't exist in clan %zu", v9, m_id) )
          __debugbreak();
        return 1i64;
      }
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: attempting to access the active clan before it has finished activating\n", "OnlineClan::GetMemberRole");
      return 1i64;
    }
  }
}

/*
==============
OnlineClan::GetMembers
==============
*/
char OnlineClan::GetMembers(OnlineClan *this, const OnlineClanMember **members, unsigned int *numMembers)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    return 0;
  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  *members = (const OnlineClanMember *)ActiveClanData;
  *numMembers = ActiveClanData->numClanMembers;
  return 1;
}

/*
==============
OnlineClan::GetNumMembers
==============
*/
__int64 OnlineClan::GetNumMembers(OnlineClan *this)
{
  int m_controllerIndex; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    return (unsigned int)this->m_deactivatedNumMembers;
  else
    return GetActiveClanData(this->m_controllerIndex)->numClanMembers;
}

/*
==============
OnlineClan::GetNumOnlineMembers
==============
*/
__int64 OnlineClan::GetNumOnlineMembers(OnlineClan *this)
{
  int m_controllerIndex; 
  OnlinePresenceNotifications *Instance; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    return (unsigned int)this->m_deactivatedNumOnlineMembers;
  Instance = OnlinePresenceNotifications::GetInstance();
  return OnlinePresenceNotifications::GetNumOnlineClanMembers(Instance, this->m_controllerIndex) + 1;
}

/*
==============
OnlineClan::GetOutgoingInvites
==============
*/
char OnlineClan::GetOutgoingInvites(OnlineClan *this, const OnlineClanMember **members, unsigned int *numInvites)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    return 0;
  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  *members = ActiveClanData->clanInvites;
  *numInvites = ActiveClanData->numClanInvites;
  return 1;
}

/*
==============
OnlineClan::Init
==============
*/
void OnlineClan::Init(OnlineClan *this, const int controllerIndex, const unsigned __int64 id, const bool isActive, const bool isActiveOnDemonware)
{
  if ( this->m_state )
  {
    Com_PrintError(14, "[Clan] %s: already initialized: current id: %zu, current controller: %i, attempted id: %zu, attempted controller: %i\n", "OnlineClan::Init", this->m_id, this->m_controllerIndex, id, controllerIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1041, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Clan already initialized") )
      __debugbreak();
  }
  else
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1045, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1046, ASSERT_TYPE_ASSERT, "(id != 0)", (const char *)&queryFormat, "id != 0") )
      __debugbreak();
    this->m_isActiveOnDemonware = isActiveOnDemonware;
    this->m_controllerIndex = controllerIndex;
    this->m_id = id;
    this->m_activateAfterInit = isActive;
    OnlineClan::FetchClanInfo(this);
  }
}

/*
==============
OnlineClan::Init
==============
*/
void OnlineClan::Init(OnlineClan *this, const int controllerIndex, const unsigned __int64 id, const bool isActive, const bool isActiveOnDemonware, const bdClansGroupInfo *groupInfo)
{
  if ( this->m_state )
  {
    Com_PrintError(14, "[Clan] %s: already initialized: current id: %zu, current controller: %i, attempted id: %zu, attempted controller: %i\n", "OnlineClan::Init", this->m_id, this->m_controllerIndex, id, controllerIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1041, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Clan already initialized") )
      __debugbreak();
  }
  else
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1045, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    if ( !id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1046, ASSERT_TYPE_ASSERT, "(id != 0)", (const char *)&queryFormat, "id != 0") )
      __debugbreak();
    this->m_controllerIndex = controllerIndex;
    this->m_id = id;
    this->m_activateAfterInit = isActive;
    this->m_isActiveOnDemonware = isActiveOnDemonware;
    if ( groupInfo )
      OnlineClan::ApplyClanInfo(this, groupInfo);
    else
      OnlineClan::FetchClanInfo(this);
  }
}

/*
==============
OnlineClan::InviteMember
==============
*/
char OnlineClan::InviteMember(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  const char *v4; 
  const char *v5; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *v8; 
  bdRemoteTask *v9; 
  TaskManager *v10; 
  char v11; 
  __int64 numUsers; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  unsigned __int64 userID[2]; 
  OnlineClanMember *member; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID users; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  userID[1] = -2i64;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not active\n", "OnlineClan::InviteMember");
    return 0;
  }
  if ( OnlineClan::GetMember(this, xuida, (const OnlineClanMember **)&member) )
  {
    v4 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: member %s already in the clan\n", "OnlineClan::InviteMember", v4);
    return 0;
  }
  if ( OnlineClan::IsUserInvited(this, xuida) )
  {
    v5 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: member %s already invited to the clan\n", "OnlineClan::InviteMember", v5);
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  userID[0] = XUID::ToUint64(&xuida);
  bdUserAccountID::bdUserAccountID(&users, userID);
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  v8 = (TaskCreateRequest *)DWClans::inviteUsers(Clans, &result, this->m_id, &users, 1u, &this->m_proposeMembershipsResponse);
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
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::InviteMemberCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v10 = TaskManager::GetInstance(), TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(numUsers) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to update clan info for %zu (controller %i)\n", "OnlineClan::InviteMember", this->m_id, numUsers);
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  `eh vector destructor iterator'(&users, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v11;
}

/*
==============
OnlineClan::InviteMemberCallback
==============
*/
void OnlineClan::InviteMemberCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  bool v6; 
  unsigned int m_size; 
  bdArray<bdClansFailedMembershipProposal> *FailedProposals; 
  unsigned __int64 v9; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  unsigned int v12; 
  bdArray<bdClansGroupMembershipProposal> *Proposals; 
  unsigned __int64 v14; 
  bdUserAccountID *TargetUser; 
  unsigned __int64 v16; 
  ActiveClanData *ActiveClanData; 
  bdUserAccountID *v18; 
  unsigned __int64 v19; 
  const XUID *v20; 
  bdUserDetails *TargetUserDetails; 
  const char *Username; 
  unsigned __int64 v23; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v25; 
  __int64 v26; 
  lua_State *v27; 
  LocalClientNum_t ClientFromController; 
  int luiError; 
  unsigned int v30; 
  const ClanFailureEntry *v31; 
  bdLobbyErrorCode ErrorCode; 
  bdArray<bdClansFailedMembershipProposal> result; 
  __int64 v34; 
  bdUserAccountID v35; 
  bdUserDetails v36; 
  bdUserDetails v37[9]; 

  v34 = -2i64;
  m_appData = (OnlineClan *)task->m_appData;
  m_controllerIndex = m_appData->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != m_appData )
  {
    Com_PrintError(14, "[Clan] %s: clan not active\n", "OnlineClan::InviteMemberCallback");
  }
  else
  {
    v6 = state == TASKSTATE_SUCCESS;
    if ( state )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed for clan %s (code: %i transid: %zu)\n", "OnlineClan::InviteMemberCallback", m_appData->m_name, ErrorCode, TransactionID);
    }
    else
    {
      m_size = bdClansProposeMembershipsResponse::getFailedProposals(&m_appData->m_proposeMembershipsResponse, &result)->m_size;
      bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
      if ( m_size )
      {
        bdClansFailedMembershipProposal::bdClansFailedMembershipProposal((bdClansFailedMembershipProposal *)(&v36.__vftable + 2));
        FailedProposals = bdClansProposeMembershipsResponse::getFailedProposals(&m_appData->m_proposeMembershipsResponse, &result);
        bdArray<bdClansFailedMembershipProposal>::get(FailedProposals, 0, (bdClansFailedMembershipProposal *)(&v36.__vftable + 2));
        bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
        v9 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
        User = bdClansFailedMembershipProposal::getUser((bdClansFailedMembershipProposal *)(&v36.__vftable + 2), &v35);
        UserID = bdUserAccountID::getUserID(User);
        Com_PrintError(14, "[Clan] %s: Failed to send invite to player %zu, tid %zu\n", "OnlineClan::InviteMemberCallback", UserID, v9);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v35.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)v35.gap38);
        v6 = 0;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v37[0].m_accountType);
        bdReferencable::~bdReferencable((bdReferencable *)&v37[0].m_username[30]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v37[0].__vftable + 2));
        bdUserDetails::~bdUserDetails(v37);
        bdReferencable::~bdReferencable((bdReferencable *)&v37[0].__vftable + 1);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v36._bytes_20);
        bdReferencable::~bdReferencable((bdReferencable *)&v37[0].m_username[54]);
      }
      else
      {
        v12 = bdClansProposeMembershipsResponse::getProposals(&m_appData->m_proposeMembershipsResponse, (bdArray<bdClansGroupMembershipProposal> *)&result)->m_size;
        bdArray<bdClansGroupMembershipProposal>::~bdArray<bdClansGroupMembershipProposal>((bdArray<bdClansGroupMembershipProposal> *)&result);
        if ( v12 )
        {
          bdClansGroupMembershipProposal::bdClansGroupMembershipProposal((bdClansGroupMembershipProposal *)(&v36.__vftable + 2));
          Proposals = bdClansProposeMembershipsResponse::getProposals(&m_appData->m_proposeMembershipsResponse, (bdArray<bdClansGroupMembershipProposal> *)&result);
          bdArray<bdClansGroupMembershipProposal>::get(Proposals, 0, (bdClansGroupMembershipProposal *)(&v36.__vftable + 2));
          bdArray<bdClansGroupMembershipProposal>::~bdArray<bdClansGroupMembershipProposal>((bdArray<bdClansGroupMembershipProposal> *)&result);
          v14 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
          TargetUser = bdClansGroupMembershipProposal::getTargetUser((bdClansGroupMembershipProposal *)(&v36.__vftable + 2), &v35);
          v16 = bdUserAccountID::getUserID(TargetUser);
          Com_Printf(14, "[Clan] %s: Successfully sent invite to player %zu, tid: %zu\n", "OnlineClan::InviteMemberCallback", v16, v14);
          bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v35.gap38);
          bdReferencable::~bdReferencable((bdReferencable *)v35.gap38);
          ActiveClanData = GetActiveClanData(task->m_controllerIndex);
          if ( ActiveClanData->numClanInvites < 0x64 )
          {
            v18 = bdClansGroupMembershipProposal::getTargetUser((bdClansGroupMembershipProposal *)(&v36.__vftable + 2), &v35);
            v19 = bdUserAccountID::getUserID(v18);
            v20 = XUID::FromUniversalId((XUID *)&result, v19);
            XUID::operator=(&ActiveClanData->clanInvites[ActiveClanData->numClanInvites].xuid, v20);
            bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v35.gap38);
            bdReferencable::~bdReferencable((bdReferencable *)v35.gap38);
            TargetUserDetails = bdClansGroupMembershipProposal::getTargetUserDetails((bdClansGroupMembershipProposal *)(&v36.__vftable + 2), (bdUserDetails *)&v35);
            Username = bdUserDetails::getUsername(TargetUserDetails);
            Core_strcpy(ActiveClanData->clanInvites[ActiveClanData->numClanInvites].name, 0x24ui64, Username);
            bdUserDetails::~bdUserDetails(&v36);
            bdReferencable::~bdReferencable((bdReferencable *)&v36);
            ++ActiveClanData->numClanInvites;
          }
          bdClansGroupMembershipProposal::`vbase destructor((bdClansGroupMembershipProposal *)(&v36.__vftable + 2));
        }
        else
        {
          v23 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
          Com_PrintError(14, "[Clan] %s: zero failed proposals and zero proposals were returned for clan %s, something has gone wrong, tid %zu\n", "OnlineClan::InviteMemberCallback", m_appData->m_name, v23);
          v6 = 0;
        }
      }
    }
    v25 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    v26 = task->m_controllerIndex;
    v27 = LUI_luaVM;
    ClientFromController = CL_Mgr_GetClientFromController(v26);
    if ( LUI_BeginEvent(ClientFromController, "send_toast_notification", v27) )
    {
      LUI_BeginTable("options", 0, 3, LUI_luaVM);
      LUI_SetTableString("genEventName", "clans_invite_sent", LUI_luaVM);
      LUI_SetTableInt("controllerIndex", v26, LUI_luaVM);
      LUI_SetTableInt("success", v6, LUI_luaVM);
      if ( !v6 )
      {
        luiError = 0;
        v30 = 0;
        v31 = s_clanFailureEntries;
        while ( v31->error != v25 )
        {
          ++v30;
          ++v31;
          if ( v30 >= 0xE )
            goto LABEL_19;
        }
        luiError = s_clanFailureEntries[v30].luiError;
LABEL_19:
        LUI_SetTableInt("error", luiError, LUI_luaVM);
      }
      LUI_EndTable(LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineClan::IsActiveClan
==============
*/
bool OnlineClan::IsActiveClan(OnlineClan *this)
{
  int m_controllerIndex; 

  m_controllerIndex = this->m_controllerIndex;
  return m_controllerIndex != -1 && GetActiveClanData(m_controllerIndex)->clan == this;
}

/*
==============
OnlineClan::IsMemberInvitable
==============
*/
bool OnlineClan::IsMemberInvitable(OnlineClan *this, const XUID xuid, const char **errorString, const char **devErrorString)
{
  int m_controllerIndex; 
  const char *v10; 
  OnlineClanMember *member; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    *errorString = "ONLINE/CANT_INVITE_REGIMENT_NOT_ACTIVE";
    v10 = "IsActiveClan returned false";
  }
  else
  {
    if ( OnlineClan::GetMember(this, xuid, (const OnlineClanMember **)&member) )
      return Social_IsUserInvitable(this->m_controllerIndex, xuid, errorString, devErrorString);
    *errorString = "ONLINE/CANT_INVITE_NOT_MEMBER_OF_REGIMENT";
    v10 = "GetMember returned false";
  }
  *devErrorString = v10;
  return 0;
}

/*
==============
OnlineClan::IsMemberJoinable
==============
*/
bool OnlineClan::IsMemberJoinable(OnlineClan *this, const XUID xuid, const char **errorString, const char **devErrorString)
{
  int m_controllerIndex; 
  const char *v10; 
  OnlineClanMember *member; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    *errorString = "ONLINE/CANT_INVITE_JOIN_NOT_MEMBER_OF_REGIMENT";
    v10 = "IsActiveClan returned false";
  }
  else
  {
    if ( OnlineClan::GetMember(this, xuid, (const OnlineClanMember **)&member) )
      return Social_IsUserJoinable(this->m_controllerIndex, xuid, 0, errorString, devErrorString);
    *errorString = "ONLINE/CANT_INVITE_JOIN_NOT_MEMBER_OF_REGIMENT";
    v10 = "GetMember returned false";
  }
  *devErrorString = v10;
  return 0;
}

/*
==============
OnlineClan::IsUserInvited
==============
*/
char OnlineClan::IsUserInvited(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  int v5; 
  ActiveClanData *v6; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not initialized\n", "OnlineClan::IsUserInvited");
    return 0;
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    v5 = 0;
    v6 = ActiveClanData;
    if ( ActiveClanData->numClanInvites )
    {
      while ( !XUID::operator==(&v6->clanInvites[v5].xuid, &xuida) )
      {
        if ( ++v5 >= v6->numClanInvites )
          return 0;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}

/*
==============
OnlineClan::JoinClanChat
==============
*/
void OnlineClan::JoinClanChat(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 
  OnlineChatManager *Instance; 
  ActiveClanData *v4; 
  OnlineClan *clan; 
  OnlineChatManager *v6; 
  OnlineChatManager *v7; 
  unsigned __int64 m_id; 
  OnlineChatManager *v9; 
  OnlineChatType chatType; 
  OnlineChatId result; 
  OnlineChatId chatId; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  Instance = OnlineChatManager::GetInstance();
  OnlineChatManager::GetActiveChatIdFromType(Instance, &result, (const OnlineChatType)6);
  if ( result.m_id )
  {
    if ( result.m_id == this->m_id )
    {
      v4 = GetActiveClanData(this->m_controllerIndex);
      clan = v4->clan;
      if ( clan )
      {
        Com_Printf(14, "[Clan] %s: successfully joined chat for clan %zu\n", "OnlineClan::JoinClanChatCallback", clan->m_id);
        v4->chatId = result;
        OnlineClan::SetDWActiveClan(v4->clan);
      }
      else
      {
        Com_PrintError(14, "[Clan] %s: Failed to create or join chat for clan (nullptr) because of error code %i\n", "OnlineClan::JoinClanChatCallback", 0i64);
      }
    }
    else
    {
      v6 = OnlineChatManager::GetInstance();
      chatType = 6;
      if ( !OnlineChatManager::IsChatPending(v6, DODGE, &result, &chatType) )
      {
        v7 = OnlineChatManager::GetInstance();
        chatType = 6;
        OnlineChatManager::LeaveChat(v7, &result, &chatType);
      }
      ActiveClanData->needToJoinChat = 1;
    }
  }
  else
  {
    m_id = this->m_id;
    if ( !m_id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_chat_types.h", 16, ASSERT_TYPE_ASSERT, "(_id != 0)", "%s\n\tShould call OnlineChatId.Clear() instead of SetID()", "_id != 0") )
      __debugbreak();
    chatId.m_id = m_id;
    v9 = OnlineChatManager::GetInstance();
    OnlineChatManager::JoinChat(v9, this->m_controllerIndex, &chatId, (const OnlineChatType)6, OnlineClan::JoinClanChatCallback);
    ActiveClanData->needToJoinChat = 0;
  }
}

/*
==============
OnlineClan::JoinClanChatCallback
==============
*/
void OnlineClan::JoinClanChatCallback(const int controllerIndex, const OnlineChatId *chatId, const OnlineChatType *chatType, const bool success, __int64 errorCode)
{
  ActiveClanData *ActiveClanData; 
  OnlineChatId *v8; 
  OnlineClan *v9; 
  OnlineClan *m_id; 
  OnlineClan *clan; 

  ActiveClanData = GetActiveClanData(controllerIndex);
  v8 = (OnlineChatId *)ActiveClanData;
  if ( success && (v9 = ActiveClanData->clan) != NULL )
  {
    Com_Printf(14, "[Clan] %s: successfully joined chat for clan %zu\n", "OnlineClan::JoinClanChatCallback", v9->m_id);
    m_id = (OnlineClan *)v8[5255].m_id;
    v8[5251].m_id = chatId->m_id;
    OnlineClan::SetDWActiveClan(m_id);
  }
  else
  {
    clan = ActiveClanData->clan;
    if ( clan )
    {
      OnlineClan::ActivationFailed(clan);
      Com_PrintError(14, "[Clan] %s: Failed to create or join chat for clan %zu because of error code %i\n", "OnlineClan::JoinClanChatCallback", *(_QWORD *)(v8[5255].m_id + 16), errorCode);
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: Failed to create or join chat for clan (nullptr) because of error code %i\n", "OnlineClan::JoinClanChatCallback", (unsigned int)errorCode);
    }
  }
}

/*
==============
OnlineClan::JoinClanDataChannel
==============
*/
void OnlineClan::JoinClanDataChannel(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v4; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdChannelCreateChannelResponse *createChannelResponse; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, this->m_controllerIndex);
  v4 = (TaskCreateRequest *)DWMessaging::createChatChannelWithID(Messaging, &result, "clanData", this->m_id, &this->m_createChannelResponse);
  if ( v4 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&v4->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::JoinClanDataChannelCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(createChannelResponse) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to join the clan data channel for clan %zu (controller %i)\n", "OnlineClan::JoinClanDataChannel", this->m_id, createChannelResponse);
  }
  else
  {
    LODWORD(createChannelResponse) = this->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: Unable to try to join the clan data channel for clan %zu (controller %i)\n", "OnlineClan::JoinClanDataChannel", this->m_id, createChannelResponse);
    OnlineClan::ActivationFailed(this);
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
OnlineClan::JoinClanDataChannelCallback
==============
*/
void OnlineClan::JoinClanDataChannelCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  unsigned __int64 m_id; 
  bdLobbyErrorCode ErrorCode; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode clanTag; 

  m_appData = (OnlineClan *)task->m_appData;
  if ( state )
  {
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    clanTag = ErrorCode;
    Com_PrintError(14, "[Clan] %s: failed to join the clan data message channel transid: %zu, error code: %i\n", "OnlineClan::JoinClanDataChannelCallback", TransactionID, clanTag);
    OnlineClan::ActivationFailed(m_appData);
  }
  else
  {
    Com_Printf(14, "[Clan] %s: Successfully joined the clan data message chnanel for %zu\n", "OnlineClan::JoinClanDataChannelCallback", m_appData->m_id);
    m_id = m_appData->m_id;
    m_appData->m_state = JOINED_LOBBY;
    Com_Printf(14, "[Clan] %s: activation of clan id %zu succeeded\n", "OnlineClan::FinializeActivation", m_id);
    OnlineClan_SendLuaClanNotification(m_appData->m_controllerIndex, 1, m_appData->m_id, m_appData->m_name, m_appData->m_clanTag, "clans_activated_clan", 0);
  }
}

/*
==============
OnlineClan::LeaveClan
==============
*/
char OnlineClan::LeaveClan(OnlineClan *this)
{
  int m_controllerIndex; 
  unsigned int m_deactivatedNumMembers; 
  XUID *v5; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  bdUserAccountID *v8; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  int v12; 
  unsigned __int64 m_id; 
  const char *v14; 
  char v15; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v18; 
  XUID result; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v21; 
  bdReference<bdRemoteTask> v22; 
  XUID v23; 
  XUID xuid; 
  unsigned __int64 userID; 

  v18 = -2i64;
  if ( ((this->m_state - 2) & 0xFFFFFFFD) != 0 )
  {
    Com_PrintError(14, "[Clan] %s: not initialized\n", "OnlineClan::LeaveClan");
    return 0;
  }
  else
  {
    m_controllerIndex = this->m_controllerIndex;
    if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
      m_deactivatedNumMembers = this->m_deactivatedNumMembers;
    else
      m_deactivatedNumMembers = GetActiveClanData(this->m_controllerIndex)->numClanMembers;
    v5 = Live_GetXuid(&result, this->m_controllerIndex);
    xuid.m_id = this->m_owner.m_id;
    if ( XUID::operator==(v5, &xuid) && m_deactivatedNumMembers > 1 )
    {
      Com_PrintError(14, "[Clan] %s: local controller %i needs to transfer ownership of %s %zu before leaving\n", "OnlineClan::LeaveClan", (unsigned int)this->m_controllerIndex, this->m_name, this->m_id);
      return 0;
    }
    else
    {
      *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
      memset(&pTaskCreateRequest.m_appData, 0, 48);
      pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      Live_GetXuid(&v23, this->m_controllerIndex);
      Instance = DWServicesAccess::GetInstance();
      Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
      userID = XUID::ToUint64(&v23);
      bdUserAccountID::bdUserAccountID(&v21, &userID);
      v9 = (TaskCreateRequest *)DWClans::removeClanMember(Clans, &v22, this->m_id, v8, &this->m_leaveClanResponse);
      if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
      {
        v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
        if ( v10 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
      }
      if ( v22.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
      pTaskCreateRequest.m_appData = this;
      pTaskCreateRequest.m_onCompletionCallback = OnlineClan::LeaveClanCallback;
      pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
      {
        v12 = this->m_controllerIndex;
        m_id = this->m_id;
        v14 = XUID::ToString(&v23);
        Com_Printf(14, "[Clan] %s: Successfully started to remove clan member %s (clan: %zu) (controller %i)\n", "OnlineClan::LeaveClan", v14, m_id, v12);
        this->m_state = ERRORING;
        v15 = 1;
      }
      else
      {
        v15 = 0;
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
      return v15;
    }
  }
}

/*
==============
OnlineClan::LeaveClanCallback
==============
*/
void OnlineClan::LeaveClanCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  bool v6; 
  const char *luiEvent; 
  const char *m_name; 
  unsigned __int64 TransactionID; 
  char *clanTag; 
  int errorCode; 

  m_appData = (OnlineClan *)task->m_appData;
  if ( m_appData->m_state == ERRORING )
  {
    m_controllerIndex = m_appData->m_controllerIndex;
    v6 = m_controllerIndex != -1 && GetActiveClanData(m_controllerIndex)->clan == m_appData;
    errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    luiEvent = "clans_left_clan_inactive";
    m_name = m_appData->m_name;
    if ( v6 )
      luiEvent = "clans_left_clan_active";
    OnlineClan_SendLuaClanNotification(task->m_controllerIndex, state == TASKSTATE_SUCCESS, m_appData->m_id, m_appData->m_name, m_appData->m_clanTag, luiEvent, errorCode);
    if ( state )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      LODWORD(clanTag) = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed to leave clan %s (code: %i transid: %zu)\n", "OnlineClan::LeaveClanCallback", m_name, clanTag, TransactionID);
    }
    else
    {
      Com_Printf(14, "[Clan] %s: Successfully left clan %s, uninitializing\n", "OnlineClan::LeaveClanCallback", m_appData->m_name);
      OnlineClan::Uninit(m_appData);
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: clan not in leaving state\n", "OnlineClan::LeaveClanCallback");
  }
}

/*
==============
OnlineClan::LeaveClanChat
==============
*/
void OnlineClan::LeaveClanChat(OnlineClan *this)
{
  ActiveClanData *ActiveClanData; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v3; 
  OnlineChatType chatType; 

  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  Instance = OnlineChatManager::GetInstance();
  chatType = 6;
  OnlineChatManager::LeaveChat(Instance, &ActiveClanData->chatId, &chatType);
  v3 = OnlineChatManager::GetInstance();
  OnlineChatManager::ClearChatHistoryForType(v3, (const OnlineChatType)6);
}

/*
==============
OnlineClan::LeaveClanDataChannel
==============
*/
void OnlineClan::LeaveClanDataChannel(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v4; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
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
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, this->m_controllerIndex);
  v4 = (TaskCreateRequest *)DWMessaging::unsubscribeFromChannel(Messaging, &result, "clanData", this->m_id);
  if ( v4 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v5 = *(bdRemoteTask **)&v4->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::LeaveClanDataChannelCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
    Com_Printf(14, "[Clan] %s: Successfully started to leave clan data channel %zu (controller %i)\n", "OnlineClan::LeaveClanDataChannel", this->m_id, this->m_controllerIndex);
  else
    Com_PrintError(14, "[Clan] %s: Unsuccessfully started to leave clan data channel %zu (controller %i)\n", "OnlineClan::LeaveClanDataChannel", this->m_id, this->m_controllerIndex);
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
OnlineClan::LeaveClanDataChannelCallback
==============
*/
void OnlineClan::LeaveClanDataChannelCallback(GenericTask *task, eTaskManagerTaskState state)
{
  if ( state )
    Com_PrintError(14, "[Clan] %s: Failed to leave clan data channel\n", "OnlineClan::LeaveClanDataChannelCallback");
  else
    Com_Printf(14, "[Clan] %s: Successfully left clan data channel\n", "OnlineClan::LeaveClanDataChannelCallback");
}

/*
==============
OnlineClan_GetActiveClan
==============
*/
bool OnlineClan_GetActiveClan(const int controllerIndex, OnlineClan **clanOut)
{
  bool result; 
  OnlineClan *clan; 

  if ( !CL_Mgr_IsControllerActive(controllerIndex) )
  {
    Com_PrintError(14, "[Clan] %s: inactive controller %i\n", "OnlineClan_GetActiveClan", (unsigned int)controllerIndex);
    return 0;
  }
  clan = GetActiveClanData(controllerIndex)->clan;
  if ( !clan )
    return 0;
  result = 1;
  *clanOut = clan;
  return result;
}

/*
==============
OnlineClan_InitActiveClanData
==============
*/
void OnlineClan_InitActiveClanData(void)
{
  memset_0(s_activeClanData, 0, sizeof(s_activeClanData));
}

/*
==============
OnlineClan_ReceiveClanDataNotification
==============
*/
void OnlineClan_ReceiveClanDataNotification(const unsigned __int64 clanId, const int clanDataType, const XUID fromXUID, void *message, const unsigned int messageSize)
{
  unsigned int v9; 
  ActiveClanData *ActiveClanData; 
  OnlineClan *clan; 
  __int64 v12; 
  ClanDataNotificationDirectory *v13; 
  int v14; 
  int v15; 

  v9 = 0;
  while ( 1 )
  {
    if ( !CL_Mgr_IsControllerActive(v9) || !Live_IsConnectedToDemonware(v9) || Live_XUIDIsLocalPlayer(fromXUID) )
      goto LABEL_12;
    ActiveClanData = GetActiveClanData(v9);
    clan = ActiveClanData->clan;
    if ( !clan )
      break;
    if ( clan->m_id != clanId )
    {
      v14 = clanDataType;
      Com_PrintError(14, "[Clan] %s: {%i} received message type %i from clan data channel %zu, but we are in clan %zu!\n", "OnlineClan_ReceiveClanDataNotification", v9, v14, clanId, clan->m_id);
      return;
    }
    v12 = 0i64;
    v13 = s_clanDataNotificationDirectory;
    while ( clanDataType != v13->notificationType )
    {
      ++v12;
      if ( (__int64)++v13 >= (__int64)&unk_14786A070 )
        goto LABEL_12;
    }
    ((void (__fastcall *)(ActiveClanData *, unsigned __int64, void *, _QWORD))s_clanDataNotificationDirectory[v12].notification)(ActiveClanData, fromXUID.m_id, message, messageSize);
LABEL_12:
    if ( (int)++v9 >= 8 )
      return;
  }
  v15 = clanDataType;
  Com_PrintError(14, "[Clan] %s: {%i} received message type %i from clan data channel %zu, but we have no active clan!\n", "OnlineClan_ReceiveClanDataNotification", v9, v15, clanId);
}

/*
==============
OnlineClan_SendLuaClanGenericNotification
==============
*/
void OnlineClan_SendLuaClanGenericNotification(const int controllerIndex, const char *luiEvent, const bool success, const int errorCode)
{
  lua_State *v4; 
  __int64 v6; 
  LocalClientNum_t ClientFromController; 
  int luiError; 
  unsigned int v11; 
  const ClanFailureEntry *v12; 

  v4 = LUI_luaVM;
  v6 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "send_toast_notification", v4) )
  {
    LUI_BeginTable("options", 0, 3, LUI_luaVM);
    LUI_SetTableString("genEventName", luiEvent, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v6, LUI_luaVM);
    LUI_SetTableInt("success", success, LUI_luaVM);
    if ( !success )
    {
      luiError = 0;
      v11 = 0;
      v12 = s_clanFailureEntries;
      while ( v12->error != errorCode )
      {
        ++v11;
        ++v12;
        if ( v11 >= 0xE )
          goto LABEL_8;
      }
      luiError = s_clanFailureEntries[v11].luiError;
LABEL_8:
      LUI_SetTableInt("error", luiError, LUI_luaVM);
    }
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
OnlineClan_SendLuaClanNotification
==============
*/
void OnlineClan_SendLuaClanNotification(const int controllerIndex, const bool success, const unsigned __int64 clanId, const char *clanName, const char *clanTag, const char *luiEvent, const int errorCode)
{
  lua_State *v7; 
  __int64 v9; 
  LocalClientNum_t ClientFromController; 
  int luiError; 
  const ClanFailureEntry *v16; 
  unsigned int v17; 

  v7 = LUI_luaVM;
  v9 = controllerIndex;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "clans_notification", v7) )
  {
    LUI_BeginTable("options", 0, 2, LUI_luaVM);
    LUI_SetTableString("genEventName", luiEvent, LUI_luaVM);
    LUI_SetTableInt("controllerIndex", v9, LUI_luaVM);
    LUI_SetTableBool("success", success, LUI_luaVM);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, rsi }
    if ( (clanId & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    LUI_SetTableNumber("clanId", *(long double *)&_XMM1, LUI_luaVM);
    LUI_SetTableString("clanName", clanName, LUI_luaVM);
    LUI_SetTableString("clanTag", clanTag, LUI_luaVM);
    if ( !success )
    {
      luiError = 0;
      v16 = s_clanFailureEntries;
      v17 = 0;
      while ( v16->error != errorCode )
      {
        ++v17;
        ++v16;
        if ( v17 >= 0xE )
          goto LABEL_10;
      }
      luiError = s_clanFailureEntries[v17].luiError;
LABEL_10:
      LUI_SetTableInt("error", luiError, LUI_luaVM);
    }
    LUI_EndTable(LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
OnlineClan::Print
==============
*/
void OnlineClan::Print(OnlineClan *this)
{
  int m_controllerIndex; 
  unsigned int v3; 
  _BOOL8 v4; 
  int v5; 
  ActiveClanData *ActiveClanData; 
  unsigned int i; 
  OnlineClanMember *v8; 
  int role; 
  const char *v10; 
  OnlineClanMember *v11; 
  int v12; 
  const char *v13; 
  __int64 v14; 

  Com_Printf(14, "Name: %s\n", this->m_name);
  Com_Printf(14, "ID: %zu\n", this->m_id);
  Com_Printf(14, "Controller: %i\n", (unsigned int)this->m_controllerIndex);
  m_controllerIndex = this->m_controllerIndex;
  v3 = 0;
  v4 = m_controllerIndex != -1 && GetActiveClanData(m_controllerIndex)->clan == this;
  Com_Printf(14, "IsActive: %i\n", v4);
  v5 = this->m_controllerIndex;
  if ( v5 != -1 && GetActiveClanData(v5)->clan == this )
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    Com_Printf(14, "\nMembers:\n\n");
    for ( i = 0; i < ActiveClanData->numClanMembers; ++i )
    {
      v8 = &ActiveClanData->members[i];
      role = (unsigned __int16)v8->role;
      v10 = XUID::ToString(&v8->xuid);
      LODWORD(v14) = role;
      Com_Printf(14, "Member: %s %s, role: %hi,\n", v10, v8->name, v14);
    }
    Com_Printf(14, "\nClan Invites:\n\n");
    if ( ActiveClanData->numClanInvites )
    {
      do
      {
        v11 = &ActiveClanData->clanInvites[v3];
        v12 = (unsigned __int16)v11->role;
        v13 = XUID::ToString(&v11->xuid);
        LODWORD(v14) = v12;
        Com_Printf(14, "Inivted Player: %s %s, role: %hi,\n", v13, v11->name, v14);
        ++v3;
      }
      while ( v3 < ActiveClanData->numClanInvites );
    }
  }
  Com_Printf(14, "\n\n");
}

/*
==============
OnlineClan::PromoteToOfficer
==============
*/
bool OnlineClan::PromoteToOfficer(OnlineClan *this, const XUID xuid)
{
  const char *v3; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( OnlineClan::GetMemberRole(this, xuid) == MEMBER )
    return OnlineClan::UpdateMemberRole(this, xuida, OFFICER);
  v3 = XUID::ToString(&xuida);
  Com_PrintError(14, "[Clan] %s: We can't promote a non-member %s to officer\n", "OnlineClan::PromoteToOfficer", v3);
  return 0;
}

/*
==============
OnlineClan::PromoteToOwner
==============
*/
bool OnlineClan::PromoteToOwner(OnlineClan *this, const XUID xuid)
{
  const char *v3; 
  XUID owner; 
  OnlineClanMember *member; 

  owner.m_id = xuid.m_id;
  if ( OnlineClan::GetMember(this, xuid, (const OnlineClanMember **)&member) )
    return OnlineClan::UpdateInfo(this, this->m_name, this->m_clanTag, owner);
  v3 = XUID::ToString(&owner);
  Com_PrintError(14, "[Clan] %s: %s not in clan\n", "OnlineClan::PromoteToOwner", v3);
  return 0;
}

/*
==============
OnlineClan::RemoveInviteNotification
==============
*/
void OnlineClan::RemoveInviteNotification(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  int v5; 
  bool v6; 
  unsigned int numClanInvites; 
  __int64 v8; 
  unsigned __int64 m_id; 
  const char *v10; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not the active clan\n", "OnlineClan::RemoveInviteNotification");
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    if ( ActiveClanData->numClanInvites )
    {
      v5 = 0;
      while ( 1 )
      {
        v6 = XUID::operator==(&ActiveClanData->clanInvites[v5].xuid, &xuida);
        numClanInvites = ActiveClanData->numClanInvites;
        if ( v6 )
          break;
        if ( ++v5 >= numClanInvites )
          return;
      }
      v8 = numClanInvites - 1;
      ActiveClanData->numClanInvites = v8;
      XUID::operator=(&ActiveClanData->clanInvites[v5].xuid, &ActiveClanData->clanInvites[v8].xuid);
      ActiveClanData->clanInvites[v5].role = ActiveClanData->clanInvites[ActiveClanData->numClanInvites].role;
      Core_strcpy(ActiveClanData->clanInvites[v5].name, 0x24ui64, ActiveClanData->clanInvites[ActiveClanData->numClanInvites].name);
      m_id = this->m_id;
      v10 = XUID::ToString(&xuida);
      Com_PrintError(14, "[Clan] %s: Successfully removed %s from clan %zu invites pool\n", "OnlineClan::RemoveInviteNotification", v10, m_id);
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: no invites to revoke\n", "OnlineClan::RemoveInviteNotification");
    }
  }
}

/*
==============
OnlineClan::RemoveMember
==============
*/
char OnlineClan::RemoveMember(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  const char *v4; 
  int v6; 
  const char *v7; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  bdUserAccountID *v10; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  int v14; 
  unsigned __int64 m_id; 
  const char *v16; 
  char v17; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v19; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v21; 
  bdReference<bdRemoteTask> v22; 
  XUID xuida; 
  unsigned __int64 userID; 
  OnlineClanMember *member; 

  xuida.m_id = xuid.m_id;
  v19 = -2i64;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not active\n", "OnlineClan::RemoveMember");
    return 0;
  }
  else if ( OnlineClan::GetMember(this, xuida, (const OnlineClanMember **)&member) )
  {
    if ( OnlineClan::GetLocalControllerRole(this) == MEMBER )
    {
      v6 = this->m_controllerIndex;
      v7 = XUID::ToString(&xuida);
      Com_PrintError(14, "[Clan] %s: Unable to remove player %s because we are only a member (controllerindex: %i)", "OnlineClan::RemoveMember", v7, v6);
      return 0;
    }
    else
    {
      this->m_removeMemberData.clanRef = this;
      XUID::operator=(&this->m_removeMemberData.removedMember, &xuida);
      *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
      memset(&pTaskCreateRequest.m_appData, 0, 48);
      pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
      pTaskCreateRequest.m_timeoutInSeconds = 0;
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      Instance = DWServicesAccess::GetInstance();
      Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
      userID = XUID::ToUint64(&xuida);
      bdUserAccountID::bdUserAccountID(&v21, &userID);
      v11 = (TaskCreateRequest *)DWClans::removeClanMember(Clans, &v22, this->m_id, v10, &this->m_removeMemberData.removeGroupMemberResponse);
      if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
      {
        v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
        pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
        if ( v12 )
          _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
      }
      if ( v22.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v22.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v22.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))v22.m_ptr->~bdReferencable)(v22.m_ptr, 1i64);
      pTaskCreateRequest.m_appData = &this->m_removeMemberData;
      pTaskCreateRequest.m_onCompletionCallback = OnlineClan::RemoveMemberCallback;
      pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
      {
        v14 = this->m_controllerIndex;
        m_id = this->m_id;
        v16 = XUID::ToString(&xuida);
        Com_Printf(14, "[Clan] %s: Successfully started to remove clan member %s (clan: %zu) (controller %i)\n", "OnlineClan::RemoveMember", v16, m_id, v14);
        v17 = 1;
      }
      else
      {
        v17 = 0;
      }
      TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
      return v17;
    }
  }
  else
  {
    v4 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: %s not in clan\n", "OnlineClan::RemoveMember", v4);
    return 0;
  }
}

/*
==============
OnlineClan::RemoveMemberCallback
==============
*/
void OnlineClan::RemoveMemberCallback(GenericTask *task, eTaskManagerTaskState state)
{
  XUID *m_appData; 
  OnlineClan *m_id; 
  int m_controllerIndex; 
  unsigned __int64 *p_m_id; 
  ActiveClanData *ActiveClanData; 
  const char *v9; 
  OnlineClan *v10; 
  int v11; 
  unsigned int v12; 
  ActiveClanData *v13; 
  int numClanMembers; 
  bool v15; 
  unsigned int v16; 
  const char *m_name; 
  __int64 v18; 
  __int64 v19; 
  OnlinePresenceNotifications *Instance; 
  unsigned __int64 TransactionID; 
  int errorCode; 
  bdLobbyErrorCode fmt; 
  XUID xuid; 

  m_appData = (XUID *)task->m_appData;
  m_id = (OnlineClan *)m_appData[5].m_id;
  m_controllerIndex = m_id->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != m_id )
  {
    Com_PrintError(14, "[Clan] %s: clan not active\n", "OnlineClan::RemoveMemberCallback");
  }
  else
  {
    if ( state )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      m_name = m_id->m_name;
      fmt = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed for clan %s (code: %i transid: %zu)\n", "OnlineClan::RemoveMemberCallback", m_id->m_name, fmt, TransactionID);
    }
    else
    {
      p_m_id = &m_appData[4].m_id;
      ActiveClanData = GetActiveClanData(task->m_controllerIndex);
      v9 = XUID::ToString(m_appData + 4);
      Com_Printf(14, "[Clan] %s: Successfully removed player %s\n", "OnlineClan::RemoveMemberCallback", v9);
      if ( !ActiveClanData->numClanMembers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1592, ASSERT_TYPE_ASSERT, "(activeData->numClanMembers > 0)", (const char *)&queryFormat, "activeData->numClanMembers > 0") )
        __debugbreak();
      v10 = (OnlineClan *)m_appData[5].m_id;
      xuid.m_id = *p_m_id;
      v11 = v10->m_controllerIndex;
      if ( v11 == -1 || GetActiveClanData(v11)->clan != v10 )
      {
        Com_Printf(14, "[Clan] %s: ignoring player remove notification since this clan %zu isn't active\n", "OnlineClan::RemovePlayerNotification", v10->m_id);
        m_name = m_id->m_name;
      }
      else
      {
        v12 = 0;
        v13 = GetActiveClanData(v10->m_controllerIndex);
        numClanMembers = v13->numClanMembers;
        if ( numClanMembers )
        {
          while ( 1 )
          {
            v15 = XUID::operator==(&v13->members[v12].xuid, &xuid);
            v16 = v13->numClanMembers;
            if ( v15 )
              break;
            if ( ++v12 >= v16 )
            {
              m_name = m_id->m_name;
              v10->m_deactivatedNumMembers = v16;
              goto LABEL_17;
            }
          }
          v18 = v12;
          v19 = v16 - 1;
          *(__m256i *)v13->members[v18].name = *(__m256i *)v13->members[v19].name;
          *(__m256i *)&v13->members[v18].name[32] = *(__m256i *)&v13->members[v19].name[32];
          *(__m256i *)&v13->members[v18].nameWithHash[28] = *(__m256i *)&v13->members[v19].nameWithHash[28];
          *(_OWORD *)&v13->members[v18].nameWithHash[60] = *(_OWORD *)&v13->members[v19].nameWithHash[60];
          *(double *)&v13->members[v18].role = *(double *)&v13->members[v19].role;
          --v13->numClanMembers;
          Instance = OnlinePresenceNotifications::GetInstance();
          OnlinePresenceNotifications::UnsubscribeFromUser(Instance, v10->m_controllerIndex, xuid, ClanMember);
          numClanMembers = v13->numClanMembers;
        }
        v10->m_deactivatedNumMembers = numClanMembers;
        m_name = m_id->m_name;
      }
    }
LABEL_17:
    errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineClan_SendLuaClanNotification(task->m_controllerIndex, state == TASKSTATE_SUCCESS, m_id->m_id, m_name, m_id->m_clanTag, "clans_member_removed", errorCode);
  }
}

/*
==============
OnlineClan::RemovePlayerNotification
==============
*/
void OnlineClan::RemovePlayerNotification(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  unsigned int v4; 
  ActiveClanData *ActiveClanData; 
  unsigned int numClanMembers; 
  bool v7; 
  __int64 v8; 
  __int64 v9; 
  OnlinePresenceNotifications *Instance; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_Printf(14, "[Clan] %s: ignoring player remove notification since this clan %zu isn't active\n", "OnlineClan::RemovePlayerNotification", this->m_id);
  }
  else
  {
    v4 = 0;
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    numClanMembers = ActiveClanData->numClanMembers;
    if ( numClanMembers )
    {
      while ( 1 )
      {
        v7 = XUID::operator==(&ActiveClanData->members[v4].xuid, &xuida);
        numClanMembers = ActiveClanData->numClanMembers;
        if ( v7 )
          break;
        if ( ++v4 >= numClanMembers )
          goto LABEL_8;
      }
      v8 = v4;
      v9 = numClanMembers - 1;
      *(__m256i *)ActiveClanData->members[v8].name = *(__m256i *)ActiveClanData->members[v9].name;
      *(__m256i *)&ActiveClanData->members[v8].name[32] = *(__m256i *)&ActiveClanData->members[v9].name[32];
      *(__m256i *)&ActiveClanData->members[v8].nameWithHash[28] = *(__m256i *)&ActiveClanData->members[v9].nameWithHash[28];
      *(_OWORD *)&ActiveClanData->members[v8].nameWithHash[60] = *(_OWORD *)&ActiveClanData->members[v9].nameWithHash[60];
      *(double *)&ActiveClanData->members[v8].role = *(double *)&ActiveClanData->members[v9].role;
      --ActiveClanData->numClanMembers;
      Instance = OnlinePresenceNotifications::GetInstance();
      OnlinePresenceNotifications::UnsubscribeFromUser(Instance, this->m_controllerIndex, xuida, ClanMember);
      numClanMembers = ActiveClanData->numClanMembers;
    }
LABEL_8:
    this->m_deactivatedNumMembers = numClanMembers;
  }
}

/*
==============
OnlineClan::RevokeInvitation
==============
*/
char OnlineClan::RevokeInvitation(OnlineClan *this, const XUID xuid)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  char v5; 
  int v6; 
  const char *v7; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v10; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  int v14; 
  unsigned __int64 m_id; 
  const char *v16; 
  char v17; 
  unsigned __int64 v18; 
  const char *v19; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v23; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v25; 
  bdReference<bdRemoteTask> v26; 
  XUID xuida; 
  unsigned __int64 userID; 

  xuida.m_id = xuid.m_id;
  v23 = -2i64;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not the active clan\n", "OnlineClan::RevokeInvitation");
    return 0;
  }
  ActiveClanData = GetActiveClanData(this->m_controllerIndex);
  if ( !ActiveClanData->numClanInvites )
  {
    Com_PrintError(14, "[Clan] %s: no invites to revoke\n", "OnlineClan::RevokeInvitation");
    return 0;
  }
  v5 = 0;
  v6 = 0;
  while ( !XUID::operator==(&ActiveClanData->clanInvites[v6].xuid, &xuida) )
  {
    if ( ++v6 >= ActiveClanData->numClanInvites )
      goto LABEL_10;
  }
  v5 = 1;
LABEL_10:
  if ( OnlineClan::GetLocalControllerRole(this) == MEMBER )
  {
    Com_PrintError(14, "[Clan] %s: only officers or the owner can revoke invitations\n", "OnlineClan::RevokeInvitation");
    return 0;
  }
  if ( !v5 )
  {
    v7 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: clan invite to %s not found.\n", "OnlineClan::RevokeInvitation", v7);
    return 0;
  }
  if ( s_revokeInviteTaskData.taskActive )
  {
    Com_PrintError(14, "[Clan] %s: cancel invite in progress\n", "OnlineClan::RevokeInvitation");
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  userID = XUID::ToUint64(&xuida);
  bdUserAccountID::bdUserAccountID(&v25, &userID);
  v11 = (TaskCreateRequest *)DWClans::cancelInvite(Clans, &v26, this->m_id, v10, &s_revokeInviteTaskData.removeProposalsResponse);
  if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::RevokeInvitationComplete;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    v14 = this->m_controllerIndex;
    m_id = this->m_id;
    v16 = XUID::ToString(&xuida);
    Com_Printf(14, "[Clan] %s: Successfully started task to revoke clan invite for %s (clan %zu | controller %i)\n", "OnlineClan::RevokeInvitation", v16, m_id, v14);
    s_revokeInviteTaskData.taskActive = 1;
    v17 = 1;
  }
  else
  {
    v18 = this->m_id;
    v19 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: failed to revoke invite for %s in clan %zu\n", "OnlineClan::RevokeInvitation", v19, v18);
    v17 = 0;
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
  return v17;
}

/*
==============
OnlineClan::RevokeInvitationComplete
==============
*/
void OnlineClan::RevokeInvitationComplete(GenericTask *task, eTaskManagerTaskState state)
{
  eTaskManagerTaskState v2; 
  OnlineClan *m_appData; 
  unsigned int m_size; 
  bdArray<bdClansRemovedMembershipProposal> *Proposals; 
  bdUserAccountID *TargetUser; 
  unsigned __int64 UserID; 
  unsigned __int64 v9; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v11; 
  int errorCode; 
  bdArray<bdClansRemovedMembershipProposal> result; 
  __int64 v14; 
  bdArray<bdClansRemovedMembershipProposal> v15; 
  bdUserAccountID v16; 
  bdClansRemovedMembershipProposal value; 

  v14 = -2i64;
  v2 = state;
  m_appData = (OnlineClan *)task->m_appData;
  if ( state )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    v11 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "[Clan] %s: Failed to revoke clan invite, code %i tid %zu\n", "OnlineClan::RevokeInvitationComplete", (unsigned int)v11, TransactionID);
  }
  else
  {
    m_size = bdClansRemoveProposalsResponse::getProposals(&s_revokeInviteTaskData.removeProposalsResponse, &result)->m_size;
    bdArray<bdClansRemovedMembershipProposal>::~bdArray<bdClansRemovedMembershipProposal>(&result);
    if ( m_size )
    {
      bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(&value);
      Proposals = bdClansRemoveProposalsResponse::getProposals(&s_revokeInviteTaskData.removeProposalsResponse, &v15);
      bdArray<bdClansRemovedMembershipProposal>::get(Proposals, 0, &value);
      bdArray<bdClansRemovedMembershipProposal>::~bdArray<bdClansRemovedMembershipProposal>(&v15);
      TargetUser = bdClansRemovedMembershipProposal::getTargetUser(&value, &v16);
      UserID = bdUserAccountID::getUserID(TargetUser);
      XUID::FromUniversalId((XUID *)&result, UserID);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v16.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v16.gap38);
      OnlineClan::RemoveInviteNotification(m_appData, (const XUID)result.m_data);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.m_group.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&value.m_group.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&value.m_targetUser[136]);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&value.m_targetUser[120]);
      bdReferencable::~bdReferencable((bdReferencable *)&value.m_targetUser[136]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&value.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&value.gapFC[4]);
    }
    else
    {
      v9 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed to revoke clan invite, task succeeded but zero proposals: tid %zu\n", "OnlineClan::RevokeInvitationComplete", v9);
      v2 = TASKSTATE_ERROR;
    }
  }
  errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
  OnlineClan_SendLuaClanNotification(task->m_controllerIndex, v2 == TASKSTATE_SUCCESS, m_appData->m_id, m_appData->m_name, m_appData->m_clanTag, "clans_invite_canceled", errorCode);
  s_revokeInviteTaskData.taskActive = 0;
}

/*
==============
SendClanNotificationComplete
==============
*/
void SendClanNotificationComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_appTaskType; 
  __int64 v3; 
  int m_controllerIndex; 

  m_appTaskType = (unsigned int)task->m_appTaskType;
  m_controllerIndex = task->m_controllerIndex;
  v3 = *((_QWORD *)task->m_appData + 2);
  if ( state )
    Com_PrintError(14, "[Clan] %s: Failed to send clan data type %i for clan %zu (controller %i)\n", "SendClanNotificationComplete", m_appTaskType, v3, m_controllerIndex);
  else
    Com_Printf(14, "[Clan] %s: Successfully sent clan data type %i for clan %zu (controller %i)\n", "SendClanNotificationComplete", m_appTaskType, v3, m_controllerIndex);
}

/*
==============
SendClanNotificationForActiveClan
==============
*/
void SendClanNotificationForActiveClan(const int controllerIndex, const int clanDataType, const void *message, const unsigned int messageSize)
{
  ActiveClanData *ActiveClanData; 
  DWServicesAccess *Instance; 
  DWMessaging *Messaging; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  __int64 messageSizea; 
  bdReference<bdRemoteTask> result; 
  __int64 v17; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 

  v17 = -2i64;
  ActiveClanData = GetActiveClanData(controllerIndex);
  if ( ActiveClanData->clan )
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
    v11 = (TaskCreateRequest *)DWMessaging::sendToChannel(Messaging, &result, "clanData", ActiveClanData->clan->m_id, message, messageSize, clanDataType);
    if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
      if ( v12 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateRequest.m_appData = ActiveClanData->clan;
    pTaskCreateRequest.m_onCompletionCallback = SendClanNotificationComplete;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_appTaskType = clanDataType;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      LODWORD(messageSizea) = controllerIndex;
      Com_Printf(14, "[Clan] %s: Successfully started to send clan data type %i for clan %zu (controller %i)\n", "SendClanNotificationForActiveClan", (unsigned int)clanDataType, ActiveClanData->clan->m_id, messageSizea);
    }
    else
    {
      LODWORD(messageSizea) = controllerIndex;
      Com_PrintError(14, "[Clan] %s: Unable to to send clan data type %i for clan %zu (controller %i)\n", "SendClanNotificationForActiveClan", (unsigned int)clanDataType, ActiveClanData->clan->m_id, messageSizea);
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
    Com_PrintError(14, "[Clan] %s: no active clan\n", "SendClanNotificationForActiveClan");
  }
}

/*
==============
OnlineClan::SetDWActiveClan
==============
*/
void OnlineClan::SetDWActiveClan(OnlineClan *this)
{
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *v4; 
  bdRemoteTask *v5; 
  TaskManager *v6; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  if ( this->m_isActiveOnDemonware )
  {
    Com_Printf(14, "[Clan] %s: clan %zu (controller %i) already active on Demonware, will skip activation\n", "OnlineClan::SetDWActiveClan", this->m_id, this->m_controllerIndex);
    OnlineClan::GetHappyHourTask(this);
  }
  else
  {
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Instance = DWServicesAccess::GetInstance();
    Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
    v4 = (TaskCreateRequest *)DWClans::setActiveClan(Clans, &result, this->m_id);
    if ( v4 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v5 = *(bdRemoteTask **)&v4->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
      if ( v5 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    pTaskCreateRequest.m_appData = this;
    pTaskCreateRequest.m_onCompletionCallback = OnlineClan::SetDWActiveClanCallback;
    pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      Com_Printf(14, "[Clan] %s: Successfully started to set active clan members on dw to %zu (controller %i)\n", "OnlineClan::SetDWActiveClan", this->m_id, this->m_controllerIndex);
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: unable to start fetching clan members for channel %zu (controller %i)\n", "OnlineClan::SetDWActiveClan", this->m_id, this->m_controllerIndex);
      OnlineClan::ActivationFailed(this);
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
}

/*
==============
OnlineClan::SetDWActiveClanCallback
==============
*/
void OnlineClan::SetDWActiveClanCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  OnlineClan *v3; 
  int m_controllerIndex; 

  m_appData = (OnlineClan *)task->m_appData;
  if ( state )
  {
    m_controllerIndex = task->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: unable to fetch clan invites for channel %zu (controller %i)\n", "OnlineClan::SetDWActiveClanCallback", m_appData->m_id, m_controllerIndex);
    OnlineClan::ActivationFailed(m_appData);
  }
  else
  {
    v3 = (OnlineClan *)task->m_appData;
    m_appData->m_isActiveOnDemonware = 1;
    OnlineClan::GetHappyHourTask(v3);
  }
}

/*
==============
OnlineClan::SetHappyHour
==============
*/
char OnlineClan::SetHappyHour(OnlineClan *this, const unsigned __int16 startMinutes)
{
  int m_controllerIndex; 
  OnlineClanHappyHour *p_pendingHappyHour; 
  unsigned int UTC; 
  const dvar_t *v7; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdReference<bdRemoteTask> *v10; 
  TaskManager *v11; 
  char v12; 
  char *fmt; 
  TaskCreateResult pTaskCreateResult; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 

  if ( startMinutes > 0x59Fu )
  {
    Com_PrintError(14, "[Clan] %s: Hours for happy hour must be between 0 and %i\n", "OnlineClan::SetHappyHour", 1439i64);
    return 0;
  }
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: not the active clan\n", "OnlineClan::SetHappyHour");
    return 0;
  }
  if ( OnlineClan::GetLocalControllerRole(this) == MEMBER )
  {
    Com_PrintError(14, "[Clan] %s: controller %i can't set happy hour for clan %zu because you must be an admin or owner\n", "OnlineClan::SetHappyHour", (unsigned int)this->m_controllerIndex, this->m_id);
    return 0;
  }
  p_pendingHappyHour = &GetActiveClanData(this->m_controllerIndex)->pendingHappyHour;
  UTC = LiveStorage_GetUTC();
  v7 = DVARINT_online_clans_happy_hour_set_threshold;
  if ( !DVARINT_online_clans_happy_hour_set_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_happy_hour_set_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( p_pendingHappyHour->lastUpdateTime + v7->current.integer > UTC )
  {
    Com_PrintError(14, "[Clan] %s: controller %i can't set happy hour for clan %zu because it hasn't been 24 hours since it was last updated\n", "OnlineClan::SetHappyHour", (unsigned int)this->m_controllerIndex, this->m_id);
    return 0;
  }
  p_pendingHappyHour->isSetup = 1;
  p_pendingHappyHour->timeStart = startMinutes;
  p_pendingHappyHour->lastUpdateTime = UTC;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  v10 = DWClans::uploadGroupFile(Clans, &result, this->m_id, "happyHour", (unsigned __int8 *)p_pendingHappyHour, 8u, &this->m_uploadGroupFileResponse);
  bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v10);
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::SetHappyHourCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(fmt) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to get happy hour data for clan %zu (controller %i)\n", "OnlineClan::SetHappyHour", this->m_id, fmt);
    v12 = 1;
  }
  else
  {
    LODWORD(fmt) = this->m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: Unable to start fetching happy hour for clan %zu (controller %i)\n", "OnlineClan::SetHappyHour", this->m_id, fmt);
    v12 = 0;
  }
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v12;
}

/*
==============
OnlineClan::SetHappyHourCallback
==============
*/
void OnlineClan::SetHappyHourCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  unsigned __int16 *p_happyHour; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 

  if ( state || (m_appData = (OnlineClan *)task->m_appData, m_controllerIndex = m_appData->m_controllerIndex, m_controllerIndex == -1) || GetActiveClanData(m_controllerIndex)->clan != m_appData )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "[Clan] %s: unsuccessfully set happy hour (error %i) (trans: %zu)\n", "OnlineClan::SetHappyHourCallback", (unsigned int)ErrorCode, TransactionID);
  }
  else
  {
    ActiveClanData = GetActiveClanData(task->m_controllerIndex);
    p_happyHour = (unsigned __int16 *)&ActiveClanData->happyHour;
    ActiveClanData->happyHour = ActiveClanData->pendingHappyHour;
    SetHappyHourChallenge(task->m_controllerIndex);
    SendClanNotificationForActiveClan(task->m_controllerIndex, 0, p_happyHour, 8u);
    Com_Printf(14, "[Clan] %s: successfully set happy hour to %i\n", "OnlineClan::SetHappyHourCallback", *p_happyHour);
  }
}

/*
==============
SetHappyHourChallenge
==============
*/
void SetHappyHourChallenge(const int controllerIndex)
{
  ActiveClanData *ActiveClanData; 
  ActiveClanData *v3; 
  unsigned int v4; 
  OnlineChallengesManager *Instance; 
  unsigned __int64 timestamp; 
  const char *eventParams; 
  const XUID *Xuid; 
  XUID result; 

  ActiveClanData = GetActiveClanData(controllerIndex);
  v3 = ActiveClanData;
  if ( ActiveClanData->happyHour.isSetup )
  {
    v4 = 60 * ActiveClanData->happyHour.timeStart;
    Instance = OnlineChallengesManager::GetInstance();
    timestamp = LiveStorage_GetUTC();
    eventParams = j_va("%d", v4);
    Xuid = Live_GetXuid(&result, controllerIndex);
    OnlineChallengesManager::RecordEventForPlayer(Instance, controllerIndex, (const XUID)Xuid->m_id, "happy_hour", eventParams, timestamp);
    OnlineClan_SendLuaClanNotification(controllerIndex, 1, v3->clan->m_id, v3->clan->m_name, v3->clan->m_clanTag, "clans_happy_hour_updated", 0);
  }
}

/*
==============
SortMember
==============
*/
__int64 SortMember(const void *c1, const void *c2)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 

  v2 = *((_WORD *)c1 + 56);
  v3 = *((_WORD *)c2 + 56);
  if ( v3 <= v2 )
    return (unsigned int)-(v3 < v2);
  else
    return 1i64;
}

/*
==============
OnlineClan::SortMembers
==============
*/
void OnlineClan::SortMembers(OnlineClan *this)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  unsigned int numClanMembers; 

  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex != -1 && GetActiveClanData(m_controllerIndex)->clan == this )
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    numClanMembers = ActiveClanData->numClanMembers;
    if ( numClanMembers )
      qsort(ActiveClanData, numClanMembers, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortMember);
  }
}

/*
==============
OnlineClan::Uninit
==============
*/
void OnlineClan::Uninit(OnlineClan *this)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  OnlineChatManager *Instance; 
  OnlineChatManager *v5; 
  ActiveClanData *v6; 
  unsigned int i; 
  OnlinePresenceNotifications *v8; 
  const XUID *v9; 
  int fmt; 
  XUID chatType; 

  m_controllerIndex = this->m_controllerIndex;
  if ( this->m_state )
  {
    this->m_isActiveOnDemonware = 0;
    if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
    {
      Com_Printf(14, "[Clan] %s: This clan already is inactive\n", "OnlineClan::Deactivate");
    }
    else
    {
      Com_Printf(14, "[Clan] %s for clan %s\n", "OnlineClan::Deactivate", this->m_name);
      OnlineClan::LeaveClanDataChannel(this);
      ActiveClanData = GetActiveClanData(this->m_controllerIndex);
      Instance = OnlineChatManager::GetInstance();
      LODWORD(chatType.m_id) = 6;
      OnlineChatManager::LeaveChat(Instance, &ActiveClanData->chatId, (const OnlineChatType *)&chatType);
      v5 = OnlineChatManager::GetInstance();
      OnlineChatManager::ClearChatHistoryForType(v5, (const OnlineChatType)6);
      v6 = GetActiveClanData(this->m_controllerIndex);
      for ( i = 0; i < v6->numClanMembers; ++i )
      {
        v8 = OnlinePresenceNotifications::GetInstance();
        OnlinePresenceNotifications::UnsubscribeFromUser(v8, this->m_controllerIndex, v6->members[i].xuid, ClanMember);
      }
      if ( !v6->clan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1825, ASSERT_TYPE_ASSERT, "(activeData->clan != nullptr)", (const char *)&queryFormat, "activeData->clan != nullptr") )
        __debugbreak();
      memset_0(v6, 0, 0xA410ui64);
      *(_QWORD *)&v6->numClanMembers = 0i64;
      v6->chatId.m_id = 0i64;
      v6->needToJoinChat = 0;
      v6->happyHour.timeStart = 0;
      v6->happyHour.isSetup = 0;
      v6->happyHour.lastUpdateTime = 0;
      v6->pendingHappyHour.timeStart = 0;
      v6->pendingHappyHour.isSetup = 0;
      v6->pendingHappyHour.lastUpdateTime = 0;
      v6->happyHourCurrentlyRunning = 0;
      v6->clan = NULL;
    }
    this->m_controllerIndex = -1;
    this->m_id = 0i64;
    this->m_state = IDLE;
    v9 = XUID::FromUInt64(&chatType, 0i64);
    XUID::operator=(&this->m_owner, v9);
    this->m_createdTimestamp = 0;
    *(_QWORD *)&this->m_deactivatedNumMembers = 0i64;
    Core_strcpy(this->m_name, 0x1Fui64, (const char *)&queryFormat.fmt + 3);
    Core_strcpy(this->m_clanTag, 6ui64, (const char *)&queryFormat.fmt + 3);
    this->m_activateAfterInit = 0;
  }
  else
  {
    fmt = m_controllerIndex;
    Com_PrintError(14, "[Clan] %s: is idle: current id: %zu, current controller: %i\n", "OnlineClan::Uninit", this->m_id, fmt);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1069, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Clan never initialized") )
      __debugbreak();
  }
}

/*
==============
OnlineClan::UpdateInfo
==============
*/
char OnlineClan::UpdateInfo(OnlineClan *this, const char *name, const char *clanTag, const XUID owner)
{
  int m_controllerIndex; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v10; 
  TaskCreateRequest *updated; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  char v14; 
  char *fmt; 
  TaskCreateRequest pTaskCreateRequest; 
  unsigned __int64 userID[3]; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v20; 
  bdReference<bdRemoteTask> v21; 
  XUID v22; 

  v22.m_id = owner.m_id;
  userID[1] = -2i64;
  if ( this->m_state != JOINED_LOBBY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 1206, ASSERT_TYPE_ASSERT, "(m_state == OnlineClanState::ACTIVATED)", (const char *)&queryFormat, "m_state == OnlineClanState::ACTIVATED") )
    __debugbreak();
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    Com_PrintError(14, "[Clan] %s: Failed to update because this clan %zu isn't active\n", "OnlineClan::UpdateInfo", this->m_id);
    return 0;
  }
  if ( this->m_updatingClan )
  {
    Com_PrintError(14, "[Clan] %s: Failed to update because there's an update already in progress\n", "OnlineClan::UpdateInfo");
    return 0;
  }
  if ( OnlineClan::GetLocalControllerRole(this) != OWNER )
  {
    Com_PrintError(14, "[Clan] %s: Failed to update because local controller index %i is not the owner\n", "OnlineClan::UpdateInfo", (unsigned int)this->m_controllerIndex);
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  userID[0] = XUID::ToUint64(&v22);
  bdUserAccountID::bdUserAccountID(&v20, userID);
  updated = (TaskCreateRequest *)DWClans::updateClan(Clans, &v21, this->m_id, name, clanTag, v10, &this->m_groupInfoResponse);
  if ( updated != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v12 = *(bdRemoteTask **)&updated->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( v21.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v21.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v21.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v21.m_ptr->~bdReferencable)(v21.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::UpdateInfoCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(fmt) = this->m_controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to update clan info for %zu (controller %i)\n", "OnlineClan::UpdateInfo", this->m_id, fmt);
    this->m_updatingClan = 1;
    v14 = 1;
  }
  else
  {
    v14 = 0;
  }
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v14;
}

/*
==============
OnlineClan::UpdateInfoCallback
==============
*/
void OnlineClan::UpdateInfoCallback(GenericTask *task, eTaskManagerTaskState state)
{
  eTaskManagerTaskState v2; 
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  const char *Name; 
  const char *m_name; 
  const char *v8; 
  int errorCode; 
  char *m_clanTag; 
  const char *UniqueTag; 
  const char *v12; 
  int v13; 
  bdUserAccountID *Owner; 
  unsigned __int64 UserID; 
  XUID *p_m_owner; 
  ActiveClanData *ActiveClanData; 
  unsigned int v18; 
  OnlineClanMember *v19; 
  int v20; 
  int v21; 
  ActiveClanData *v22; 
  unsigned int numClanMembers; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode v25; 
  bdRemoteTask *m_ptr; 
  int v27; 
  int v28; 
  bdLobbyErrorCode clanTag; 
  XUID xuid; 
  __int64 v32; 
  bdUserAccountID result; 

  v32 = -2i64;
  v2 = state;
  m_appData = (OnlineClan *)task->m_appData;
  m_controllerIndex = m_appData->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != m_appData )
  {
    Com_PrintError(14, "[Clan] %s: clan isn't active\n", "OnlineClan::UpdateInfoCallback");
  }
  else
  {
    if ( v2 )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      m_name = m_appData->m_name;
      clanTag = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed for clan %s (code: %i transid: %zu)\n", "OnlineClan::UpdateInfoCallback", m_appData->m_name, clanTag, TransactionID);
    }
    else
    {
      Name = bdClansGroupInfo::getName(&m_appData->m_groupInfoResponse);
      m_name = m_appData->m_name;
      if ( I_strcmp(m_appData->m_name, Name) )
      {
        v8 = bdClansGroupInfo::getName(&m_appData->m_groupInfoResponse);
        Core_strcpy(m_appData->m_name, 0x1Fui64, v8);
        errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
        m_clanTag = m_appData->m_clanTag;
        OnlineClan_SendLuaClanNotification(task->m_controllerIndex, 1, m_appData->m_id, m_appData->m_name, m_appData->m_clanTag, "clans_name_updated", errorCode);
      }
      else
      {
        m_clanTag = m_appData->m_clanTag;
      }
      UniqueTag = bdClansGroupInfo::getUniqueTag(&m_appData->m_groupInfoResponse);
      if ( I_strcmp(m_clanTag, UniqueTag) )
      {
        v12 = bdClansGroupInfo::getUniqueTag(&m_appData->m_groupInfoResponse);
        Core_strcpy(m_clanTag, 6ui64, v12);
        v13 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
        OnlineClan_SendLuaClanNotification(task->m_controllerIndex, 1, m_appData->m_id, m_appData->m_name, m_clanTag, "clans_tag_updated", v13);
      }
      Owner = bdClansGroupInfo::getOwner(&m_appData->m_groupInfoResponse, &result);
      UserID = bdUserAccountID::getUserID(Owner);
      XUID::FromUniversalId(&xuid, UserID);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
      p_m_owner = &m_appData->m_owner;
      if ( XUID::operator!=(&m_appData->m_owner, &xuid) )
      {
        ActiveClanData = GetActiveClanData(m_appData->m_controllerIndex);
        v18 = 0;
        if ( ActiveClanData->numClanMembers )
        {
          do
          {
            v19 = &ActiveClanData->members[v18];
            if ( XUID::operator==(&v19->xuid, &xuid) )
            {
              v19->role = OWNER;
            }
            else if ( v19->role == OWNER )
            {
              v19->role = OFFICER;
            }
            ++v18;
          }
          while ( v18 < ActiveClanData->numClanMembers );
          m_name = m_appData->m_name;
          p_m_owner = &m_appData->m_owner;
        }
        if ( Live_XUIDIsLocalPlayer((const XUID)p_m_owner->m_id) )
        {
          v20 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
          OnlineClan_SendLuaClanNotification(task->m_controllerIndex, 1, m_appData->m_id, m_name, m_clanTag, "clans_demoted_to_officer", v20);
        }
        XUID::operator=(p_m_owner, &xuid);
        v2 = state;
      }
      v21 = m_appData->m_controllerIndex;
      if ( v21 != -1 && GetActiveClanData(v21)->clan == m_appData )
      {
        v22 = GetActiveClanData(m_appData->m_controllerIndex);
        numClanMembers = v22->numClanMembers;
        if ( numClanMembers )
          qsort(v22, numClanMembers, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortMember);
      }
    }
    m_appData->m_updatingClan = 0;
    v25 = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    if ( v25 == BD_CLANS_MAX_GROUP_OWNERSHIPS_REACHED )
    {
      v27 = bdRemoteTask::getErrorCode(m_ptr);
      OnlineClan_SendLuaClanNotification(task->m_controllerIndex, v2 == TASKSTATE_SUCCESS, m_appData->m_id, m_name, m_appData->m_clanTag, "clans_max_clans_owned", v27);
    }
    else
    {
      v28 = bdRemoteTask::getErrorCode(m_ptr);
      OnlineClan_SendLuaClanNotification(task->m_controllerIndex, v2 == TASKSTATE_SUCCESS, m_appData->m_id, m_name, m_appData->m_clanTag, "clans_info_updated", v28);
    }
  }
}

/*
==============
OnlineClan::UpdateMemberRole
==============
*/
char OnlineClan::UpdateMemberRole(OnlineClan *this, const XUID xuid, const OnlineClanRole newRole)
{
  int m_controllerIndex; 
  unsigned __int64 m_id; 
  const char *v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v13; 
  const bdReference<bdRemoteTask> *updated; 
  TaskManager *v15; 
  int v16; 
  unsigned __int64 v17; 
  const char *v18; 
  char v19; 
  __int64 v21; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v23; 
  OnlineClanMember *member; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v26; 
  bdReference<bdRemoteTask> v27; 
  XUID xuida; 
  unsigned __int64 userID; 

  xuida.m_id = xuid.m_id;
  v23 = -2i64;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    m_id = this->m_id;
    v7 = XUID::ToString(&xuida);
    v8 = "[Clan] %s: Failed to update player %s in clan %zu isn't active.\n";
    goto LABEL_19;
  }
  if ( this->m_updatingMember )
  {
    m_id = this->m_id;
    v7 = XUID::ToString(&xuida);
    v8 = "[Clan] %s: Failed to update player %s in clan %zu because we are updating another member at the moment.\n";
LABEL_19:
    Com_PrintError(14, v8, "OnlineClan::UpdateMemberRole", v7, m_id);
    return 0;
  }
  if ( !OnlineClan::GetMember(this, xuida, (const OnlineClanMember **)&member) )
  {
    m_id = this->m_id;
    v7 = XUID::ToString(&xuida);
    v8 = "[Clan] %s: Failed to find a player %s in clan %zu\n";
    goto LABEL_19;
  }
  if ( OnlineClan::GetLocalControllerRole(this) == MEMBER )
  {
    v9 = this->m_controllerIndex;
    v10 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: Unable to change player %s because we are only a member (controllerindex: %i)", "OnlineClan::UpdateMemberRole", v10, v9);
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, this->m_controllerIndex);
  userID = XUID::ToUint64(&xuida);
  bdUserAccountID::bdUserAccountID(&v26, &userID);
  updated = DWClans::updateMemberRole(Clans, &v27, this->m_id, v13, newRole, &this->m_addOrUpdateGroupMemberResponse);
  bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, updated);
  if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = OnlineClan::UpdateMemberRoleCallback;
  pTaskCreateRequest.m_controllerIndex = this->m_controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v15 = TaskManager::GetInstance(), TaskManager::CreateTask(v15, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    v16 = this->m_controllerIndex;
    v17 = this->m_id;
    v18 = XUID::ToString(&xuida);
    LODWORD(v21) = v16;
    Com_Printf(14, "[Clan] %s: Successfully started to update member info for %s (clan %zu) (controller %i)\n", "OnlineClan::UpdateMemberRole", v18, v17, v21);
    this->m_updatingMember = 1;
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v19;
}

/*
==============
OnlineClan::UpdateMemberRoleCallback
==============
*/
void OnlineClan::UpdateMemberRoleCallback(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClan *m_appData; 
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  unsigned int i; 
  __int64 v8; 
  bdUserAccountID *User; 
  unsigned __int64 v10; 
  unsigned __int64 UserID; 
  unsigned __int64 TransactionID; 
  int v13; 
  ActiveClanData *v14; 
  unsigned int numClanMembers; 
  bdLobbyErrorCode ErrorCode; 
  bdUserAccountID result; 

  m_appData = (OnlineClan *)task->m_appData;
  m_controllerIndex = m_appData->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != m_appData )
  {
    Com_PrintError(14, "[Clan] %s: clan not active\n", "OnlineClan::UpdateMemberRoleCallback");
  }
  else
  {
    if ( state )
    {
      TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed for clan %s (code: %i transid: %zu)\n", "OnlineClan::UpdateMemberRoleCallback", m_appData->m_name, ErrorCode, TransactionID);
    }
    else
    {
      ActiveClanData = GetActiveClanData(task->m_controllerIndex);
      for ( i = 0; i < ActiveClanData->numClanMembers; ++i )
      {
        v8 = i;
        User = bdClansAddOrUpdateGroupMemberResponse::getUser(&m_appData->m_addOrUpdateGroupMemberResponse, &result);
        v10 = XUID::ToUint64(&ActiveClanData->members[v8].xuid);
        UserID = bdUserAccountID::getUserID(User);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
        if ( v10 == UserID )
          ActiveClanData->members[v8].role = bdClansAddOrUpdateGroupMemberResponse::getRole(&m_appData->m_addOrUpdateGroupMemberResponse);
      }
    }
    v13 = m_appData->m_controllerIndex;
    if ( v13 != -1 && GetActiveClanData(v13)->clan == m_appData )
    {
      v14 = GetActiveClanData(m_appData->m_controllerIndex);
      numClanMembers = v14->numClanMembers;
      if ( numClanMembers )
        qsort(v14, numClanMembers, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortMember);
    }
    m_appData->m_updatingMember = 0;
  }
}

/*
==============
OnlineClan::UpdateName
==============
*/
bool OnlineClan::UpdateName(OnlineClan *this, const char *name)
{
  const char *v2; 
  __int64 v5; 

  v2 = (char *)&queryFormat.fmt + 3;
  if ( name )
  {
    v5 = -1i64;
    do
      ++v5;
    while ( name[v5] );
    if ( (unsigned int)v5 <= 0x1F && I_strcmp(name, (const char *)&queryFormat.fmt + 3) )
      return OnlineClan::UpdateInfo(this, name, this->m_clanTag, this->m_owner);
  }
  if ( name )
    v2 = name;
  Com_PrintError(14, "[Clan] %s: invalid name %s\n", "OnlineClan::UpdateName", v2);
  return 0;
}

/*
==============
OnlineClan::UpdatePlayerActiveClan
==============
*/
void OnlineClan::UpdatePlayerActiveClan(OnlineClan *this, const XUID xuid, const bool isActiveClan)
{
  int m_controllerIndex; 
  unsigned __int64 v6; 
  const char *v7; 
  ActiveClanData *ActiveClanData; 
  int v9; 
  ActiveClanData *v10; 
  unsigned __int64 m_id; 
  const char *v12; 
  OnlineClanMember *member; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    m_id = this->m_id;
    v12 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: couldn't add member %s because this clan %zu isn't active\n", "OnlineClan::UpdatePlayerActiveClan", v12, m_id);
  }
  else if ( OnlineClan::GetMember(this, xuida, (const OnlineClanMember **)&member) )
  {
    v6 = this->m_id;
    v7 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: couldn't add member %s because the member is already in this clan %zu\n", "OnlineClan::UpdatePlayerActiveClan", v7, v6);
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    v9 = 0;
    v10 = ActiveClanData;
    if ( ActiveClanData->numClanMembers )
    {
      while ( !XUID::operator==(&v10->members[v9].xuid, &xuida) )
      {
        if ( ++v9 >= v10->numClanMembers )
          return;
      }
      v10->members[v9].isActiveClan = isActiveClan;
    }
  }
}

/*
==============
OnlineClan::UpdatePlayerNotification
==============
*/
void OnlineClan::UpdatePlayerNotification(OnlineClan *this, const XUID xuid, const char *name, const char *nameWithHash, const OnlineClanRole role)
{
  int m_controllerIndex; 
  ActiveClanData *ActiveClanData; 
  OnlineClanRole v10; 
  unsigned int v11; 
  ActiveClanData *i; 
  OnlineClanMember *v13; 
  int v14; 
  int v15; 
  ActiveClanData *v16; 
  unsigned int numClanMembers; 
  const char *luiEvent; 
  unsigned __int64 m_id; 
  const char *v20; 
  XUID xuida; 

  xuida.m_id = xuid.m_id;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 724, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !XUID::IsValid(&xuida) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 725, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
    __debugbreak();
  m_controllerIndex = this->m_controllerIndex;
  if ( m_controllerIndex == -1 || GetActiveClanData(m_controllerIndex)->clan != this )
  {
    m_id = this->m_id;
    v20 = XUID::ToString(&xuida);
    Com_PrintError(14, "[Clan] %s: couldn't add member %s because this clan %zu isn't active\n", "OnlineClan::UpdatePlayerNotification", v20, m_id);
  }
  else
  {
    ActiveClanData = GetActiveClanData(this->m_controllerIndex);
    v10 = role;
    v11 = 0;
    for ( i = ActiveClanData; v11 < i->numClanMembers; ++v11 )
    {
      v13 = &i->members[v11];
      if ( XUID::operator==(&v13->xuid, &xuida) )
      {
        Core_strcpy(v13->name, 0x24ui64, name);
        Core_strcpy(v13->nameWithHash, 0x40ui64, nameWithHash);
        v13->role = v10;
        if ( v10 != OWNER )
          break;
        XUID::operator=(&this->m_owner, &xuida);
      }
      else if ( v10 == OWNER && v13->role == OWNER )
      {
        v13->role = OFFICER;
      }
    }
    v14 = this->m_controllerIndex;
    if ( v14 != -1 )
    {
      if ( !CL_Mgr_IsControllerActive(v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 122, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerActive( controllerIndex ))", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
        __debugbreak();
      if ( s_activeClanData[CL_Mgr_GetClientFromController(v14)].clan == this )
      {
        v15 = this->m_controllerIndex;
        if ( !CL_Mgr_IsControllerActive(v15) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 122, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerActive( controllerIndex ))", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
          __debugbreak();
        v16 = &s_activeClanData[CL_Mgr_GetClientFromController(v15)];
        numClanMembers = v16->numClanMembers;
        if ( numClanMembers )
          qsort(v16, numClanMembers, 0x78ui64, (_CoreCrtNonSecureSearchSortCompareFunction)SortMember);
      }
    }
    if ( Live_XUIDIsLocalPlayer(xuida) )
    {
      luiEvent = (char *)&queryFormat.fmt + 3;
      switch ( v10 )
      {
        case OWNER:
          luiEvent = "clans_promoted_to_owner";
          break;
        case OFFICER:
          luiEvent = "clans_promoted_to_officer";
          break;
        case MEMBER:
          luiEvent = "clans_demoted_to_member";
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clan.cpp", 779, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "invalid role") )
            __debugbreak();
          break;
      }
      OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, this->m_id, this->m_name, this->m_clanTag, luiEvent, 0);
    }
  }
}

/*
==============
OnlineClan::UpdateTag
==============
*/
bool OnlineClan::UpdateTag(OnlineClan *this, const char *clanTag)
{
  __int64 v2; 
  const char *v4; 

  if ( clanTag )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( clanTag[v2] );
    if ( (unsigned int)v2 <= 6 && *clanTag )
      return OnlineClan::UpdateInfo(this, this->m_name, clanTag, this->m_owner);
  }
  v4 = (char *)&queryFormat.fmt + 3;
  if ( clanTag )
    v4 = clanTag;
  Com_PrintError(14, "[Clan] %s: invalid clanTag %s\n", "OnlineClan::UpdateTag", v4);
  return 0;
}

/*
==============
OnlineClan::ValidateClanTagChecksum
==============
*/
void OnlineClan::ValidateClanTagChecksum(OnlineClan *this)
{
  ;
}

