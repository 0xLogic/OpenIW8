/*
==============
OnlineClansManager::OnClanDataChannelMessage
==============
*/

void __fastcall OnlineClansManager::OnClanDataChannelMessage(OnlineClansManager *this, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  ?OnClanDataChannelMessage@OnlineClansManager@@QEAAX_K0PEADIPEAXI@Z(this, channelID, senderID, senderName, chatMessageType, message, messageSize);
}

/*
==============
ClansNotifications::onClansMembershipProposalCreated
==============
*/

void __fastcall ClansNotifications::onClansMembershipProposalCreated(ClansNotifications *this, const bdClansGroupMembershipProposal *proposal)
{
  ?onClansMembershipProposalCreated@ClansNotifications@@MEAAXAEBVbdClansGroupMembershipProposal@@@Z(this, proposal);
}

/*
==============
OnlineClansManager::OnSignedOut
==============
*/

void __fastcall OnlineClansManager::OnSignedOut(OnlineClansManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineClansManager@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineClansManager::SetActiveClan
==============
*/

bool __fastcall OnlineClansManager::SetActiveClan(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 clanId)
{
  return ?SetActiveClan@OnlineClansManager@@QEAA_NH_K@Z(this, controllerIndex, clanId);
}

/*
==============
ClansNotifications::onClansMemberUpdated
==============
*/

void __fastcall ClansNotifications::onClansMemberUpdated(ClansNotifications *this, const bdClansMemberInfo *member)
{
  ?onClansMemberUpdated@ClansNotifications@@MEAAXAEBVbdClansMemberInfo@@@Z(this, member);
}

/*
==============
OnlineClansManager::GetClanById
==============
*/

OnlineClan *__fastcall OnlineClansManager::GetClanById(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  return ?GetClanById@OnlineClansManager@@QEAAPEAVOnlineClan@@H_K@Z(this, controllerIndex, id);
}

/*
==============
OnlineClansManager::GetClanInvites
==============
*/

bool __fastcall OnlineClansManager::GetClanInvites(OnlineClansManager *this, const int controllerIndex, OnlineClanInvite *invitesOut, unsigned int *numInvitesOut)
{
  return ?GetClanInvites@OnlineClansManager@@QEAA_NHPEAUOnlineClanInvite@@AEAI@Z(this, controllerIndex, invitesOut, numInvitesOut);
}

/*
==============
ClansNotifications::onClansProposalRemoved
==============
*/

void __fastcall ClansNotifications::onClansProposalRemoved(ClansNotifications *this, const bdClansRemovedMembershipProposal *proposal)
{
  ?onClansProposalRemoved@ClansNotifications@@MEAAXAEBVbdClansRemovedMembershipProposal@@@Z(this, proposal);
}

/*
==============
TestPromoteToOwner
==============
*/

void __fastcall TestPromoteToOwner()
{
  ?TestPromoteToOwner@@YAXXZ();
}

/*
==============
TestPromoteToOfficer
==============
*/

void __fastcall TestPromoteToOfficer()
{
  ?TestPromoteToOfficer@@YAXXZ();
}

/*
==============
OnlineClansManager::OnDisconnect
==============
*/

void __fastcall OnlineClansManager::OnDisconnect(OnlineClansManager *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineClansManager@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineClansManager::ResetForController
==============
*/

void __fastcall OnlineClansManager::ResetForController(OnlineClansManager *this, const int controllerIndex)
{
  ?ResetForController@OnlineClansManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
ClansNotifications::onClansMemberRemoved
==============
*/

void __fastcall ClansNotifications::onClansMemberRemoved(ClansNotifications *this, const bdClansMemberInfo *member)
{
  ?onClansMemberRemoved@ClansNotifications@@MEAAXAEBVbdClansMemberInfo@@@Z(this, member);
}

/*
==============
OnlineClansManager::GetClanInviteCount
==============
*/

unsigned int __fastcall OnlineClansManager::GetClanInviteCount(OnlineClansManager *this, const int controllerIndex)
{
  return ?GetClanInviteCount@OnlineClansManager@@QEAAIH@Z(this, controllerIndex);
}

/*
==============
OnlineClansManager::ControllerFrame
==============
*/

void __fastcall OnlineClansManager::ControllerFrame(OnlineClansManager *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineClansManager@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
TestDemoteToMember
==============
*/

void __fastcall TestDemoteToMember()
{
  ?TestDemoteToMember@@YAXXZ();
}

/*
==============
TestSendInvite
==============
*/

void __fastcall TestSendInvite()
{
  ?TestSendInvite@@YAXXZ();
}

/*
==============
TestLeaveClan
==============
*/

void __fastcall TestLeaveClan()
{
  ?TestLeaveClan@@YAXXZ();
}

/*
==============
ClansNotifications::onClansActiveGroupChange
==============
*/

void __fastcall ClansNotifications::onClansActiveGroupChange(ClansNotifications *this, const bdClansMemberInfo *member)
{
  ?onClansActiveGroupChange@ClansNotifications@@MEAAXAEBVbdClansMemberInfo@@@Z(this, member);
}

/*
==============
OnlineClanPool::OnlineClanPool
==============
*/

void __fastcall OnlineClanPool::OnlineClanPool(OnlineClanPool *this)
{
  ??0OnlineClanPool@@QEAA@XZ(this);
}

/*
==============
OnlineClansManager::GetJoinedClans
==============
*/

bool __fastcall OnlineClansManager::GetJoinedClans(OnlineClansManager *this, const int controllerIndex, unsigned __int64 *idsBuffer, const unsigned int bufferSize, unsigned int *numIdsOut)
{
  return ?GetJoinedClans@OnlineClansManager@@QEAA_NHPEA_KIAEAI@Z(this, controllerIndex, idsBuffer, bufferSize, numIdsOut);
}

/*
==============
OnlineClansManager::DeclineClanInvitesFrame
==============
*/

void __fastcall OnlineClansManager::DeclineClanInvitesFrame(OnlineClansManager *this, const int controllerIndex)
{
  ?DeclineClanInvitesFrame@OnlineClansManager@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineClansManager::SetShouldDeclineClanInvite
==============
*/

bool __fastcall OnlineClansManager::SetShouldDeclineClanInvite(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  return ?SetShouldDeclineClanInvite@OnlineClansManager@@QEAA_NH_K@Z(this, controllerIndex, id);
}

/*
==============
OnlineClansManager::GetInstance
==============
*/

OnlineClansManager *__fastcall OnlineClansManager::GetInstance()
{
  return ?GetInstance@OnlineClansManager@@SAAEAV1@XZ();
}

/*
==============
TestChangeClanTag
==============
*/

void __fastcall TestChangeClanTag()
{
  ?TestChangeClanTag@@YAXXZ();
}

/*
==============
OnlineClansManager::OnSignedIn
==============
*/

void __fastcall OnlineClansManager::OnSignedIn(OnlineClansManager *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineClansManager@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
ClansNotifications::ClansNotifications
==============
*/

void __fastcall ClansNotifications::ClansNotifications(ClansNotifications *this)
{
  ??0ClansNotifications@@QEAA@XZ(this);
}

/*
==============
OnlineClansManager::GetActiveClan
==============
*/

bool __fastcall OnlineClansManager::GetActiveClan(OnlineClansManager *this, const int controllerIndex, unsigned __int64 *clanIdOut)
{
  return ?GetActiveClan@OnlineClansManager@@QEAA_NHAEA_K@Z(this, controllerIndex, clanIdOut);
}

/*
==============
OnlineClansManager::DeclineClanInvite
==============
*/

bool __fastcall OnlineClansManager::DeclineClanInvite(OnlineClansManager *this, const int controllerIndex, const OnlineClanInvite *clanInvite)
{
  return ?DeclineClanInvite@OnlineClansManager@@AEAA_NHPEBUOnlineClanInvite@@@Z(this, controllerIndex, clanInvite);
}

/*
==============
OnlineClansManager::Init
==============
*/

bool __fastcall OnlineClansManager::Init(OnlineClansManager *this)
{
  return ?Init@OnlineClansManager@@UEAA_NXZ(this);
}

/*
==============
ClansNotifications::onClansGroupDisbanded
==============
*/

void __fastcall ClansNotifications::onClansGroupDisbanded(ClansNotifications *this, const bdClansGroupIdentifier *group)
{
  ?onClansGroupDisbanded@ClansNotifications@@MEAAXAEBVbdClansGroupIdentifier@@@Z(this, group);
}

/*
==============
OnlineClansManager::FetchUserClans
==============
*/

void __fastcall OnlineClansManager::FetchUserClans(OnlineClansManager *this, const int controllerIndex)
{
  ?FetchUserClans@OnlineClansManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineClansManager::GetInstancePtr
==============
*/

OnlineClansManager *__fastcall OnlineClansManager::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineClansManager@@SAPEAV1@XZ();
}

/*
==============
OnlineClansManager::AcceptClanInvite
==============
*/

bool __fastcall OnlineClansManager::AcceptClanInvite(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  return ?AcceptClanInvite@OnlineClansManager@@QEAA_NH_K@Z(this, controllerIndex, id);
}

/*
==============
TestSetHappyHour
==============
*/

void __fastcall TestSetHappyHour()
{
  ?TestSetHappyHour@@YAXXZ();
}

/*
==============
TestCreateClan
==============
*/

void __fastcall TestCreateClan()
{
  ?TestCreateClan@@YAXXZ();
}

/*
==============
TestChangeName
==============
*/

void __fastcall TestChangeName()
{
  ?TestChangeName@@YAXXZ();
}

/*
==============
TestDeclineInvite
==============
*/

void __fastcall TestDeclineInvite()
{
  ?TestDeclineInvite@@YAXXZ();
}

/*
==============
ClansNotifications::onClansMemberAdded
==============
*/

void __fastcall ClansNotifications::onClansMemberAdded(ClansNotifications *this, const bdClansMemberInfo *member)
{
  ?onClansMemberAdded@ClansNotifications@@MEAAXAEBVbdClansMemberInfo@@@Z(this, member);
}

/*
==============
OnlineClansManager::SetAllInvitesToBeDeclined
==============
*/

bool __fastcall OnlineClansManager::SetAllInvitesToBeDeclined(OnlineClansManager *this, const int controllerIndex)
{
  return ?SetAllInvitesToBeDeclined@OnlineClansManager@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineClansManager::CreateClan
==============
*/

bool __fastcall OnlineClansManager::CreateClan(OnlineClansManager *this, const int controllerIndex, const char *name, const char *clanTag)
{
  return ?CreateClan@OnlineClansManager@@QEAA_NHPEBD0@Z(this, controllerIndex, name, clanTag);
}

/*
==============
TestRemoveMember
==============
*/

void __fastcall TestRemoveMember()
{
  ?TestRemoveMember@@YAXXZ();
}

/*
==============
ClansNotifications::onClansGroupUpdated
==============
*/

void __fastcall ClansNotifications::onClansGroupUpdated(ClansNotifications *this, const bdClansGroupInfo *groupInfo)
{
  ?onClansGroupUpdated@ClansNotifications@@MEAAXAEBVbdClansGroupInfo@@@Z(this, groupInfo);
}

/*
==============
ClanInvitePool::ClanInvitePool
==============
*/

void __fastcall ClanInvitePool::ClanInvitePool(ClanInvitePool *this)
{
  ??0ClanInvitePool@@QEAA@XZ(this);
}

/*
==============
OnlineClansManager::GetIncomingClanInvites
==============
*/

void __fastcall OnlineClansManager::GetIncomingClanInvites(OnlineClansManager *this, const int controllerIndex)
{
  ?GetIncomingClanInvites@OnlineClansManager@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
TestCancelInvite
==============
*/

void __fastcall TestCancelInvite()
{
  ?TestCancelInvite@@YAXXZ();
}

/*
==============
OnlineClansManager::InviteMemberByName
==============
*/

bool __fastcall OnlineClansManager::InviteMemberByName(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id, const char *name, const ClientPlatform platform)
{
  return ?InviteMemberByName@OnlineClansManager@@QEAA_NH_KPEBDW4ClientPlatform@@@Z(this, controllerIndex, id, name, platform);
}

/*
==============
TestAcceptInvite
==============
*/

void __fastcall TestAcceptInvite()
{
  ?TestAcceptInvite@@YAXXZ();
}

/*
==============
OnlineClansManager::Init
==============
*/
bool OnlineClansManager::Init(OnlineClansManager *this)
{
  bool result; 

  Cmd_AddCommandInternal("clans_createclan", TestCreateClan, &stru_149FCB548);
  Cmd_AddCommandInternal("clans_printallclandata", DumpAllClansAndInvites, &stru_149FCB578);
  Cmd_AddCommandInternal("clans_acceptinvite", TestAcceptInvite, &stru_149FCB5A8);
  Cmd_AddCommandInternal("clans_declineinvite", TestDeclineInvite, &stru_149FCB5D8);
  Cmd_AddCommandInternal("clans_leaveclan", TestLeaveClan, &stru_149FCB608);
  Cmd_AddCommandInternal("clans_changename", TestChangeName, &stru_149FCB638);
  Cmd_AddCommandInternal("clans_changeclantag", TestChangeClanTag, &stru_149FCB668);
  Cmd_AddCommandInternal("clans_sendinvite", TestSendInvite, &stru_149FCB698);
  Cmd_AddCommandInternal("clans_cancelinvite", TestCancelInvite, &stru_149FCB6C8);
  Cmd_AddCommandInternal("clans_removemember", TestRemoveMember, &stru_149FCB6F8);
  Cmd_AddCommandInternal("clans_promoteToOwner", TestPromoteToOwner, &stru_149FCB728);
  Cmd_AddCommandInternal("clans_promoteToOfficer", TestPromoteToOfficer, &stru_149FCB758);
  Cmd_AddCommandInternal("clans_demoteToMember", TestDemoteToMember, &stru_149FCB788);
  Cmd_AddCommandInternal("clans_setHappyHour", TestSetHappyHour, &stru_149FCB7B8);
  OnlineClan_InitActiveClanData();
  result = 1;
  s_previousDeclineInviteAttemptTime = 0;
  return result;
}

/*
==============
OnlineClansManager::OnSignedIn
==============
*/
void OnlineClansManager::OnSignedIn(OnlineClansManager *this, const int controllerIndex, GenericSignInState signinState)
{
  const dvar_t *v6; 
  ClanInvitePool *v7; 
  OnlineClanPool *ClanPoolForController; 
  LocalClientNum_t outLocalClientNum[6]; 
  LocalClientNum_t v10; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) )
  {
    v6 = DVARBOOL_online_clans_enabled;
    if ( !DVARBOOL_online_clans_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v10) )
      {
        v7 = &s_clanInvitePool[v10];
        if ( v7 )
        {
LABEL_12:
          if ( (unsigned int)(signinState - 3) <= 1 && Live_IsUserSignedInToDemonware(controllerIndex) )
          {
            if ( v7->state == FETCHING )
            {
              Com_PrintError(14, "[Clan] %s: User signed in but clan invite fetch task was already in flight\n", "OnlineClansManager::OnSignedIn");
              *(_QWORD *)&v7->state = 0i64;
              v7->dirtyInfo = 0;
            }
            ClanPoolForController = GetClanPoolForController(controllerIndex);
            if ( ClanPoolForController->state == FETCHING )
            {
              Com_PrintError(14, "[Clan] %s: User signed in but clan pool fetch task was already in flight\n", "OnlineClansManager::OnSignedIn");
              ClanPoolForController->creatingInProgress = 0;
              ClanPoolForController->state = NOT_FETCHED;
            }
            if ( v7->state == NOT_FETCHED )
            {
              UnsubscribeFromAnyClanDataChannel(controllerIndex);
              OnlineClansManager::GetIncomingClanInvites(this, controllerIndex);
              OnlineClansManager::FetchUserClans(this, controllerIndex);
            }
          }
          return;
        }
      }
      else
      {
        v7 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 436, ASSERT_TYPE_ASSERT, "(invitePool != nullptr)", (const char *)&queryFormat, "invitePool != nullptr") )
        __debugbreak();
      goto LABEL_12;
    }
  }
}

/*
==============
OnlineClansManager::OnSignedOut
==============
*/

void __fastcall OnlineClansManager::OnSignedOut(OnlineClansManager *this, const int controllerIndex, GenericSignOutState signOutState)
{
  OnlineClansManager::ResetForController(this, controllerIndex);
}

/*
==============
OnlineClansManager::OnDisconnect
==============
*/
void OnlineClansManager::OnDisconnect(OnlineClansManager *this, ONLINE_DISCONNECT reason)
{
  int i; 
  const dvar_t *v3; 
  OnlineClanPool *v4; 
  unsigned int j; 
  ClanInvitePool *v6; 
  ClansNotifications *v7; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  LocalClientNum_t v10; 
  LocalClientNum_t v11; 
  LocalClientNum_t outLocalClientNum; 

  Com_Printf(14, "[Clan] %s %i\n", "OnlineClansManager::OnDisconnect", (unsigned int)reason);
  for ( i = 0; i < 8; ++i )
  {
    if ( CL_Mgr_IsControllerMappedToClient(i, &outLocalClientNum) )
    {
      v3 = DVARBOOL_online_clans_enabled;
      if ( !DVARBOOL_online_clans_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled )
      {
        if ( CL_Mgr_IsControllerMappedToClient(i, &v10) )
        {
          v4 = &s_clanPool[v10];
          if ( v4 )
          {
LABEL_13:
            for ( j = 0; j < 0xA; ++j )
            {
              if ( v4->clans[0].m_state )
                OnlineClan::Uninit(v4->clans);
              v4 = (OnlineClanPool *)((char *)v4 + 3984);
            }
            if ( CL_Mgr_IsControllerMappedToClient(i, &v11) )
              v6 = &s_clanInvitePool[v11];
            else
              v6 = NULL;
            *(_QWORD *)&v6->state = 0i64;
            v6->dirtyInfo = 0;
            memset_0(v6->invites, 0, sizeof(v6->invites));
            v7 = &s_clanNotifications[CL_Mgr_GetClientFromController(i)];
            if ( v7->m_initialized )
            {
              Instance = DWServicesAccess::GetInstance();
              Clans = DWServicesAccess::GetClans(Instance, v7->m_controllerIndex);
              DWClans::unregisterEventHandler(Clans, v7);
              v7->m_controllerIndex = -1;
              v7->m_initialized = 0;
            }
            continue;
          }
        }
        else
        {
          v4 = NULL;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 500, ASSERT_TYPE_ASSERT, "(pool != nullptr)", (const char *)&queryFormat, "pool != nullptr") )
          __debugbreak();
        goto LABEL_13;
      }
    }
  }
}

/*
==============
OnlineClansManager::ControllerFrame
==============
*/
void OnlineClansManager::ControllerFrame(OnlineClansManager *this, const int controllerIndex)
{
  const dvar_t *v4; 
  __int64 p_dirtyInfo; 
  ClanInvitePool *v6; 
  unsigned int numInvites; 
  __int64 v8; 
  unsigned __int64 *p_clanId; 
  __int64 v10; 
  PublisherVariableManager *Instance; 
  ClanInvitePool *v12; 
  int Int_Internal_DebugName; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  const OnlineClanInvite *invites; 
  OnlineClanPool *v18; 
  OnlineClan *ClanById; 
  LocalClientNum_t v20; 
  OnlineClan *clanOut; 
  LocalClientNum_t outLocalClientNum[4]; 
  unsigned __int64 ids[10]; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, outLocalClientNum) )
  {
    v4 = DVARBOOL_online_clans_enabled;
    if ( !DVARBOOL_online_clans_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
    {
      if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v20) )
        p_dirtyInfo = (__int64)&s_clanInvitePool[v20].dirtyInfo;
      else
        p_dirtyInfo = 8i64;
      if ( *(_BYTE *)p_dirtyInfo )
      {
        if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v20) )
        {
          v6 = &s_clanInvitePool[v20];
          if ( v6 )
          {
            if ( !v6->dirtyInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 759, ASSERT_TYPE_ASSERT, "(pool->dirtyInfo)", (const char *)&queryFormat, "pool->dirtyInfo") )
              __debugbreak();
            if ( v6->state == FETCHING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 760, ASSERT_TYPE_ASSERT, "(pool->state != OnlineClansManagerFetchState::FETCHING)", (const char *)&queryFormat, "pool->state != OnlineClansManagerFetchState::FETCHING") )
              __debugbreak();
            numInvites = v6->numInvites;
            v8 = 0i64;
            if ( numInvites )
            {
              p_clanId = &v6->invites[0].clanId;
              v10 = numInvites;
              do
              {
                if ( !*((_BYTE *)p_clanId + 24) )
                {
                  ids[v8] = *p_clanId;
                  v8 = (unsigned int)(v8 + 1);
                }
                p_clanId += 15;
                --v10;
              }
              while ( v10 );
              if ( (_DWORD)v8 )
                GetClanInfosForInvites(controllerIndex, ids, v8);
            }
            v6->dirtyInfo = 0;
          }
        }
      }
      else
      {
        Instance = PublisherVariableManager::GetInstance();
        if ( PublisherVariableManager::HasRetrievedVariables(Instance) && !s_cancelInviteTaskData.taskActive && CL_Mgr_IsControllerMappedToClient(controllerIndex, &v20) )
        {
          v12 = &s_clanInvitePool[v20];
          if ( v12 )
          {
            if ( v12->state == FETCHED )
            {
              Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_clans_invite_decline_throttle_ms, "online_clans_invite_decline_throttle_ms");
              v14 = Sys_Milliseconds();
              if ( v14 - s_previousDeclineInviteAttemptTime >= Int_Internal_DebugName )
              {
                v15 = v12->numInvites;
                v16 = 0;
                if ( v15 )
                {
                  invites = v12->invites;
                  while ( !invites->shouldDecline )
                  {
                    ++v16;
                    ++invites;
                    if ( v16 >= v15 )
                      goto LABEL_41;
                  }
                  if ( !invites->dataFetched && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 823, ASSERT_TYPE_ASSERT, "(invite->dataFetched)", (const char *)&queryFormat, "invite->dataFetched") )
                    __debugbreak();
                  Com_Printf(14, "[Clan] %s: declining invite for clan id %zu\n", "OnlineClansManager::DeclineClanInvitesFrame", invites->clanId);
                  OnlineClansManager::DeclineClanInvite(&OnlineClansManager::s_instance, controllerIndex, invites);
                  s_previousDeclineInviteAttemptTime = v14;
                }
              }
            }
          }
        }
      }
LABEL_41:
      if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v20) )
      {
        v18 = &s_clanPool[v20];
        if ( v18 )
        {
          if ( v18->state == FETCHED )
          {
            clanOut = NULL;
            if ( OnlineClan_GetActiveClan(controllerIndex, &clanOut) )
            {
              ClanById = OnlineClansManager::GetClanById(this, controllerIndex, clanOut->m_id);
              if ( ClanById )
              {
                OnlineClan::Frame(ClanById);
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1682, ASSERT_TYPE_ASSERT, "(clan)", (const char *)&queryFormat, "clan") )
              {
                __debugbreak();
              }
            }
          }
        }
      }
    }
  }
}

/*
==============
ClansNotifications::onClansMembershipProposalCreated
==============
*/
void ClansNotifications::onClansMembershipProposalCreated(ClansNotifications *this, const bdClansGroupMembershipProposal *proposal)
{
  bdClansGroupMembershipProposal *v3; 
  int m_controllerIndex; 
  bdClansGroupMembershipProposal v5; 

  bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(&v5, proposal);
  CacheIncomingInvite(this->m_controllerIndex, v3);
  m_controllerIndex = this->m_controllerIndex;
  if ( !GamerProfile_GetAlwaysBlockClanInvites(m_controllerIndex) && Live_GetDoesUserHaveOnlineCommunicationsPrivilege(m_controllerIndex) )
    OnlineClan_SendLuaClanGenericNotification(this->m_controllerIndex, "clans_invite_received", 1, 0);
}

/*
==============
ClansNotifications::onClansMemberAdded
==============
*/
void ClansNotifications::onClansMemberAdded(ClansNotifications *this, const bdClansMemberInfo *member)
{
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  OnlineClan *ClanById; 
  unsigned __int64 m_id; 
  bdUserDetails *UserDetails; 
  const char *Username; 
  bdUserDetails *v10; 
  OnlineClanRole role; 
  bdUserDetails *v12; 
  const char *v13; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  const XUID *v16; 
  XUID v17; 
  bdClansGroupIdentifier result; 
  bdUserDetails v19; 
  bdUserDetails v20; 
  char dest[64]; 
  char usernameWithHash[112]; 

  Group = bdClansMemberInfo::getGroup((bdClansMemberInfo *)member, &result);
  ID = bdClansGroupIdentifier::getID(Group);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, ID);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&result.m_rootID + 1));
  if ( ClanById )
  {
    m_id = ClanById->m_id;
    UserDetails = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, &v19);
    Username = bdUserDetails::getUsername(UserDetails);
    Com_Printf(14, "[Clan] %s: Adding %s to clan %zu\n", "ClansNotifications::onClansMemberAdded", Username, m_id);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&v19.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&v19.gap79[7]);
    dest[0] = 0;
    v10 = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, &v19);
    LOBYTE(m_id) = bdUserDetails::getUsernameWithHash(v10, usernameWithHash);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&v19.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&v19.gap79[7]);
    if ( (_BYTE)m_id )
      Core_strcpy_truncate(dest, 0x40ui64, usernameWithHash);
    role = bdClansMemberInfo::getRole((bdClansMemberInfo *)member);
    v12 = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, &v20);
    v13 = bdUserDetails::getUsername(v12);
    User = bdClansMemberInfo::getUser((bdClansMemberInfo *)member, (bdUserAccountID *)&v19);
    UserID = bdUserAccountID::getUserID(User);
    v16 = XUID::FromUniversalId(&v17, UserID);
    OnlineClan::AddPlayerNotification(ClanById, (const XUID)v16->m_id, v13, dest, role, 0);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v19.m_username[6]);
    bdReferencable::~bdReferencable((bdReferencable *)&v19.m_username[6]);
    bdUserDetails::~bdUserDetails((bdUserDetails *)&v20.gap79[7]);
    bdReferencable::~bdReferencable((bdReferencable *)&v20.gap79[7]);
    OnlineClan::SortMembers(ClanById);
  }
}

/*
==============
ClansNotifications::onClansProposalRemoved
==============
*/
void ClansNotifications::onClansProposalRemoved(ClansNotifications *this, const bdClansRemovedMembershipProposal *proposal)
{
  bdUserAccountID *TargetUser; 
  unsigned __int64 UserID; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  bdClansGroupIdentifier *v8; 
  unsigned __int64 v9; 
  OnlineClan *ClanById; 
  XUID player; 
  __int64 v12; 
  bdUserAccountID result; 

  v12 = -2i64;
  TargetUser = bdClansRemovedMembershipProposal::getTargetUser((bdClansRemovedMembershipProposal *)proposal, &result);
  UserID = bdUserAccountID::getUserID(TargetUser);
  XUID::FromUniversalId(&player, UserID);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  if ( Live_XUIDIsLocalPlayer(player) )
  {
    Group = bdClansRemovedMembershipProposal::getGroup((bdClansRemovedMembershipProposal *)proposal, (bdClansGroupIdentifier *)&result);
    ID = bdClansGroupIdentifier::getID(Group);
    RemoveClanInvite(this->m_controllerIndex, ID);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
  }
  else
  {
    v8 = bdClansRemovedMembershipProposal::getGroup((bdClansRemovedMembershipProposal *)proposal, (bdClansGroupIdentifier *)&result);
    v9 = bdClansGroupIdentifier::getID(v8);
    ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, v9);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
    if ( ClanById )
      OnlineClan::RemoveInviteNotification(ClanById, player);
  }
}

/*
==============
ClansNotifications::onClansMemberRemoved
==============
*/
void ClansNotifications::onClansMemberRemoved(ClansNotifications *this, const bdClansMemberInfo *member)
{
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  OnlineClan *ClanById; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  bdClansGroupIdentifier *v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  bool IsActiveClan; 
  unsigned __int64 m_id; 
  bdUserDetails *UserDetails; 
  const char *Username; 
  unsigned int m_controllerIndex; 
  OnlineClanPool *v17; 
  unsigned int v18; 
  unsigned __int64 *p_m_id; 
  bdUserDetails_vtbl *v20; 
  OnlineClan *v21; 
  unsigned __int64 v22; 
  bdUserDetails *v23; 
  const char *v24; 
  LocalClientNum_t outLocalClientNum; 
  XUID player; 
  __int64 v27; 
  bdClansGroupIdentifier result; 
  bdUserDetails v29; 

  v27 = -2i64;
  Group = bdClansMemberInfo::getGroup((bdClansMemberInfo *)member, &result);
  ID = bdClansGroupIdentifier::getID(Group);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, ID);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&result.m_rootID + 1));
  if ( ClanById )
  {
    User = bdClansMemberInfo::getUser((bdClansMemberInfo *)member, (bdUserAccountID *)&v29);
    UserID = bdUserAccountID::getUserID(User);
    XUID::FromUniversalId(&player, UserID);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)&v29.m_username[6]);
    bdReferencable::~bdReferencable((bdReferencable *)&v29.m_username[6]);
    if ( Live_XUIDIsLocalPlayer(player) )
    {
      v9 = bdClansMemberInfo::getGroup((bdClansMemberInfo *)member, (bdClansGroupIdentifier *)&v29);
      v10 = bdClansGroupIdentifier::getID(v9);
      v11 = 0i64;
      OnlineClan_SendLuaClanNotification(this->m_controllerIndex, 1, v10, ClanById->m_name, ClanById->m_clanTag, "clans_kicked_from_clan", 0);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v29.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)v29.m_accountType);
      IsActiveClan = OnlineClan::IsActiveClan(ClanById);
      m_id = ClanById->m_id;
      UserDetails = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, &v29);
      Username = bdUserDetails::getUsername(UserDetails);
      Com_Printf(14, "[Clan] %s: Local client %s was removed from clan %zu\n", "ClansNotifications::onClansMemberRemoved", Username, m_id);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v29.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)&v29.gap79[7]);
      OnlineClan::Uninit(ClanById);
      if ( IsActiveClan )
      {
        m_controllerIndex = this->m_controllerIndex;
        if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) && (v17 = &s_clanPool[outLocalClientNum]) != NULL )
        {
          if ( v17->state == FETCHED )
          {
            v18 = 0;
            p_m_id = &v17->clans[0].m_id;
            do
            {
              if ( (_DWORD)v11 == 10 )
                break;
              if ( m_controllerIndex == *((_DWORD *)p_m_id - 2) && *((_DWORD *)p_m_id - 4) )
              {
                *((_QWORD *)&v29.__vftable + v11) = *p_m_id;
                v11 = (unsigned int)(v11 + 1);
              }
              ++v18;
              p_m_id += 498;
            }
            while ( v18 < 0xA );
            if ( (_DWORD)v11 )
            {
              v20 = v29.__vftable;
              if ( !v29.__vftable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 229, ASSERT_TYPE_ASSERT, "(clanIDs[0] != 0)", (const char *)&queryFormat, "clanIDs[0] != 0") )
                __debugbreak();
              v21 = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, (const unsigned __int64)v20);
              OnlineClan::Activate(v21);
            }
          }
          else
          {
            Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i\n", "OnlineClansManager::GetJoinedClans", m_controllerIndex);
          }
        }
        else
        {
          Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::GetJoinedClans", m_controllerIndex);
        }
      }
    }
    else
    {
      v22 = ClanById->m_id;
      v23 = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, &v29);
      v24 = bdUserDetails::getUsername(v23);
      Com_Printf(14, "[Clan] %s: Removing %s from clan %zu\n", "ClansNotifications::onClansMemberRemoved", v24, v22);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v29.gap79[7]);
      bdReferencable::~bdReferencable((bdReferencable *)&v29.gap79[7]);
      OnlineClan::RemovePlayerNotification(ClanById, player);
    }
  }
}

/*
==============
ClansNotifications::onClansGroupDisbanded
==============
*/
void ClansNotifications::onClansGroupDisbanded(ClansNotifications *this, const bdClansGroupIdentifier *group)
{
  unsigned __int64 ID; 
  OnlineClan *ClanById; 

  ID = bdClansGroupIdentifier::getID((bdClansGroupIdentifier *)group);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, ID);
  if ( ClanById )
    OnlineClan::Uninit(ClanById);
}

/*
==============
ClansNotifications::onClansActiveGroupChange
==============
*/
void ClansNotifications::onClansActiveGroupChange(ClansNotifications *this, const bdClansMemberInfo *member)
{
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  unsigned int m_controllerIndex; 
  OnlineClanPool *v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 *p_m_id; 
  const unsigned __int64 *v11; 
  __int64 v12; 
  OnlineClan *ClanById; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 m_id; 
  unsigned __int64 ID; 
  LocalClientNum_t outLocalClientNum; 
  XUID xuid; 
  __int64 v19; 
  bdUserAccountID result; 
  __int64 v21[10]; 

  v19 = -2i64;
  User = bdClansMemberInfo::getUser((bdClansMemberInfo *)member, &result);
  UserID = bdUserAccountID::getUserID(User);
  XUID::FromUniversalId(&xuid, UserID);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  m_controllerIndex = this->m_controllerIndex;
  if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) && (v7 = &s_clanPool[outLocalClientNum]) != NULL )
  {
    if ( v7->state == FETCHED )
    {
      v8 = 0i64;
      v9 = 0;
      p_m_id = (__int64 *)&v7->clans[0].m_id;
      do
      {
        if ( (_DWORD)v8 == 10 )
          break;
        if ( m_controllerIndex == *((_DWORD *)p_m_id - 2) && *((_DWORD *)p_m_id - 4) )
        {
          v21[v8] = *p_m_id;
          v8 = (unsigned int)(v8 + 1);
        }
        ++v9;
        p_m_id += 498;
      }
      while ( v9 < 0xA );
      if ( (_DWORD)v8 )
      {
        v11 = (const unsigned __int64 *)v21;
        v12 = (unsigned int)v8;
        do
        {
          ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, *v11);
          if ( !ClanById && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 265, ASSERT_TYPE_ASSERT, "(clan)", (const char *)&queryFormat, "clan") )
            __debugbreak();
          if ( ClanById )
          {
            Group = bdClansMemberInfo::getGroup((bdClansMemberInfo *)member, (bdClansGroupIdentifier *)&result);
            m_id = ClanById->m_id;
            ID = bdClansGroupIdentifier::getID(Group);
            OnlineClan::UpdatePlayerActiveClan(ClanById, xuid, m_id == ID);
            bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
            bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i\n", "OnlineClansManager::GetJoinedClans", m_controllerIndex);
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::GetJoinedClans", m_controllerIndex);
  }
}

/*
==============
ClansNotifications::onClansGroupUpdated
==============
*/
void ClansNotifications::onClansGroupUpdated(ClansNotifications *this, const bdClansGroupInfo *groupInfo)
{
  unsigned __int64 ID; 
  OnlineClan *ClanById; 
  int onlineMemberCount; 
  int MemberCount; 
  const char *UniqueTag; 
  const char *Name; 

  ID = bdClansGroupIdentifier::getID(&groupInfo->bdClansGroupIdentifier);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, ID);
  if ( ClanById )
  {
    onlineMemberCount = bdClansGroupInfo::getOnlineMemberCount((bdClansGroupInfo *)groupInfo);
    MemberCount = bdClansGroupInfo::getMemberCount((bdClansGroupInfo *)groupInfo);
    UniqueTag = bdClansGroupInfo::getUniqueTag((bdClansGroupInfo *)groupInfo);
    Name = bdClansGroupInfo::getName((bdClansGroupInfo *)groupInfo);
    OnlineClan::ClanUpdateNotification(ClanById, Name, UniqueTag, MemberCount, onlineMemberCount);
  }
}

/*
==============
ClansNotifications::onClansMemberUpdated
==============
*/
void ClansNotifications::onClansMemberUpdated(ClansNotifications *this, const bdClansMemberInfo *member)
{
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  OnlineClan *ClanById; 
  bdUserAccountID *User; 
  unsigned __int64 UserID; 
  bdUserDetails *UserDetails; 
  bool UsernameWithHash; 
  OnlineClanRole role; 
  bdUserDetails *v12; 
  const char *Username; 
  XUID xuid; 
  __int64 v15; 
  bdClansGroupIdentifier result; 
  bdUserAccountID v17; 
  bdUserDetails v18; 

  v15 = -2i64;
  Group = bdClansMemberInfo::getGroup((bdClansMemberInfo *)member, &result);
  ID = bdClansGroupIdentifier::getID(Group);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, this->m_controllerIndex, ID);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&result.m_rootID + 1));
  if ( ClanById )
  {
    User = bdClansMemberInfo::getUser((bdClansMemberInfo *)member, &v17);
    UserID = bdUserAccountID::getUserID(User);
    XUID::FromUniversalId(&xuid, UserID);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v17.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)v17.gap38);
    *((_BYTE *)&v18.__vftable + 16) = 0;
    UserDetails = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, (bdUserDetails *)&v17);
    UsernameWithHash = bdUserDetails::getUsernameWithHash(UserDetails, &v18.m_username[30]);
    bdUserDetails::~bdUserDetails(&v18);
    bdReferencable::~bdReferencable((bdReferencable *)&v18);
    if ( UsernameWithHash )
      Core_strcpy_truncate((char *)&v18.__vftable + 16, 0x40ui64, &v18.m_username[30]);
    role = bdClansMemberInfo::getRole((bdClansMemberInfo *)member);
    v12 = bdClansMemberInfo::getUserDetails((bdClansMemberInfo *)member, (bdUserDetails *)&v17);
    Username = bdUserDetails::getUsername(v12);
    OnlineClan::UpdatePlayerNotification(ClanById, xuid, Username, (const char *)&v18.__vftable + 16, role);
    bdUserDetails::~bdUserDetails(&v18);
    bdReferencable::~bdReferencable((bdReferencable *)&v18);
  }
}

/*
==============
ClanInvitePool::ClanInvitePool
==============
*/
void ClanInvitePool::ClanInvitePool(ClanInvitePool *this)
{
  OnlineClanInvite *invites; 
  __int64 v3; 

  invites = this->invites;
  v3 = 10i64;
  do
  {
    OnlineClanInvite::OnlineClanInvite(invites++);
    --v3;
  }
  while ( v3 );
  bdClansGetMembershipProposalsByUserResponse::bdClansGetMembershipProposalsByUserResponse(&this->getMembershipProposalsByUserResponse);
  bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse(&this->getGroupInfosResponse);
  *(_QWORD *)&this->state = 0i64;
  this->dirtyInfo = 0;
  memset_0(this->invites, 0, sizeof(this->invites));
}

/*
==============
ClansNotifications::ClansNotifications
==============
*/
void ClansNotifications::ClansNotifications(ClansNotifications *this)
{
  this->m_controllerIndex = -1;
  this->__vftable = (ClansNotifications_vtbl *)&ClansNotifications::`vftable';
  this->m_initialized = 0;
}

/*
==============
OnlineClanPool::OnlineClanPool
==============
*/
void OnlineClanPool::OnlineClanPool(OnlineClanPool *this)
{
  `eh vector constructor iterator'(this, 0xF90ui64, 0xAui64, (void (__fastcall *)(void *))OnlineClan::OnlineClan, (void (__fastcall *)(void *))OnlineClan::~OnlineClan);
  this->state = NOT_FETCHED;
  this->creatingInProgress = 0;
  bdClansGroupInfo::bdClansGroupInfo(&this->groupInfoResponse);
  bdClansGetMembershipsByUsersResponse::bdClansGetMembershipsByUsersResponse(&this->getMembershipsByUsersResponse);
  bdClansGetGroupInfosResponse::bdClansGetGroupInfosResponse(&this->getGroupInfoResponse);
}

/*
==============
OnlineClansManager::AcceptClanInvite
==============
*/
char OnlineClansManager::AcceptClanInvite(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  ClanInvitePool *v5; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v8; 
  const bdReference<bdRemoteTask> *v9; 
  TaskManager *v10; 
  char v11; 
  const char *v12; 
  __int64 v14; 
  bdReference<bdRemoteTask> v15; 
  XUID result; 
  unsigned __int64 userID; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v19; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v21; 
  LocalClientNum_t outLocalClientNum; 

  v19 = -2i64;
  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || (v5 = &s_clanInvitePool[outLocalClientNum]) == NULL )
  {
    Com_PrintError(14, "[Clan] %s: invites not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::AcceptClanInvite", (unsigned int)controllerIndex);
    return 0;
  }
  if ( v5->state != FETCHED )
  {
    Com_PrintError(14, "[Clan] %s: invites not fetched yet for controller %i\n", "OnlineClansManager::AcceptClanInvite", (unsigned int)controllerIndex);
    return 0;
  }
  if ( s_acceptInviteTaskData.taskActive )
  {
    Com_PrintError(14, "[Clan] %s: Unable to accept invite to %zu, accept invite already in progress\n", "OnlineClansManager::AcceptClanInvite", id);
    return 0;
  }
  if ( !GetClanInvite(controllerIndex, id) )
  {
    Com_PrintError(14, "[Clan] %s: clan invite not found for %zu\n", "OnlineClansManager::AcceptClanInvite", id);
    return 0;
  }
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Live_GetXuid(&result, controllerIndex);
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
  userID = XUID::ToUint64(&result);
  bdUserAccountID::bdUserAccountID(&v21, &userID);
  v9 = DWClans::acceptInvite(Clans, &v15, id, v8, &s_acceptInviteTaskData.acceptInviteResponse);
  bdReference<bdRemoteTask>::operator=(&pTaskCreateRequest.m_remoteDemonwareTask, v9);
  if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
  s_acceptInviteTaskData.id = id;
  pTaskCreateRequest.m_onCompletionCallback = AcceptClanInviteComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v10 = TaskManager::GetInstance(), TaskManager::CreateTask(v10, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(v14) = controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to accept clan invite %zu (controller %i)\n", "OnlineClansManager::AcceptClanInvite", id, v14);
    s_acceptInviteTaskData.taskActive = 1;
    v11 = 1;
  }
  else
  {
    v12 = XUID::ToDevString(&result);
    Com_PrintError(14, "[Clan] %s: failed to fetch invites for %s\n", "OnlineClansManager::AcceptClanInvite", v12);
    v11 = 0;
  }
  TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
  return v11;
}

/*
==============
AcceptClanInviteComplete
==============
*/
void AcceptClanInviteComplete(GenericTask *task, eTaskManagerTaskState state)
{
  unsigned __int64 id; 
  int m_controllerIndex; 
  int v6; 
  ClanInvitePool *v7; 
  __int64 v8; 
  unsigned int numInvites; 
  unsigned __int64 *p_clanId; 
  bool v11; 
  bdClansGroupIdentifier *Group; 
  bool v13; 
  unsigned __int64 v14; 
  bdClansGroupIdentifier *v15; 
  unsigned __int64 v16; 
  OnlineClan *IdleClan; 
  OnlineClanPool *v26; 
  bool v27; 
  unsigned __int64 TransactionID; 
  int ErrorCode; 
  char *fmt; 
  bdClansGroupIdentifier result; 
  LocalClientNum_t outLocalClientNum; 

  if ( !s_acceptInviteTaskData.taskActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1173, ASSERT_TYPE_ASSERT, "(s_acceptInviteTaskData.taskActive)", (const char *)&queryFormat, "s_acceptInviteTaskData.taskActive") )
    __debugbreak();
  id = s_acceptInviteTaskData.id;
  m_controllerIndex = task->m_controllerIndex;
  v6 = 0;
  if ( !CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) )
    goto LABEL_10;
  v7 = &s_clanInvitePool[outLocalClientNum];
  if ( !v7 )
    goto LABEL_10;
  v8 = 0i64;
  numInvites = v7->numInvites;
  if ( !numInvites )
    goto LABEL_10;
  p_clanId = &v7->invites[0].clanId;
  while ( *p_clanId != id )
  {
    v8 = (unsigned int)(v8 + 1);
    p_clanId += 15;
    if ( (unsigned int)v8 >= numInvites )
      goto LABEL_10;
  }
  _R14 = (__int64)&v7->invites[v8];
  if ( (ClanInvitePool *)((char *)v7 + 120 * v8) != (ClanInvitePool *)-16i64 )
  {
    if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) )
      _RBX = &s_clanInvitePool[outLocalClientNum];
    else
      _RBX = NULL;
    _RCX = 120i64 * (_RBX->numInvites - 1);
    __asm
    {
      vmovups ymm0, ymmword ptr [rcx+rbx+10h]
      vmovups ymmword ptr [r14], ymm0
      vmovups ymm1, ymmword ptr [rcx+rbx+30h]
      vmovups ymmword ptr [r14+20h], ymm1
      vmovups ymm0, ymmword ptr [rcx+rbx+50h]
      vmovups ymmword ptr [r14+40h], ymm0
      vmovups xmm1, xmmword ptr [rcx+rbx+70h]
      vmovups xmmword ptr [r14+60h], xmm1
      vmovsd  xmm0, qword ptr [rcx+rbx+80h]
      vmovsd  qword ptr [r14+70h], xmm0
    }
    memset_0(&_RBX->invites[_RBX->numInvites - 1], 0, sizeof(_RBX->invites[_RBX->numInvites - 1]));
    --_RBX->numInvites;
  }
  else
  {
LABEL_10:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1159, ASSERT_TYPE_ASSERT, "(clanInvite)", (const char *)&queryFormat, "clanInvite") )
      __debugbreak();
  }
  v11 = state == TASKSTATE_SUCCESS;
  if ( state )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    LODWORD(fmt) = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "[Clan] %s: Failed to accept invite to clan %zu (dw task error: %i, transid: %zu\n", "AcceptClanInviteComplete", id, fmt, TransactionID);
LABEL_35:
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    OnlineClan_SendLuaClanGenericNotification(task->m_controllerIndex, "clans_invite_accepted", v11, ErrorCode);
    s_acceptInviteTaskData.taskActive = 0;
    return;
  }
  Group = bdClansAddOrUpdateGroupMemberResponse::getGroup(&s_acceptInviteTaskData.acceptInviteResponse, &result);
  v13 = bdClansGroupIdentifier::getID(Group) != s_acceptInviteTaskData.id;
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&result.m_rootID + 1));
  if ( v13 )
  {
    v14 = s_acceptInviteTaskData.id;
    v15 = bdClansAddOrUpdateGroupMemberResponse::getGroup(&s_acceptInviteTaskData.acceptInviteResponse, &result);
    v16 = bdClansGroupIdentifier::getID(v15);
    LOBYTE(v14) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1181, ASSERT_TYPE_ASSERT, "( s_acceptInviteTaskData.acceptInviteResponse.getGroup().getID() ) == ( s_acceptInviteTaskData.id )", "%s == %s\n\t%llu, %llu", "s_acceptInviteTaskData.acceptInviteResponse.getGroup().getID()", "s_acceptInviteTaskData.id", v16, v14);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)(&result.m_rootID + 1));
    if ( (_BYTE)v14 )
      __debugbreak();
  }
  IdleClan = GetIdleClan(task->m_controllerIndex);
  if ( IdleClan )
  {
    if ( CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, &outLocalClientNum) )
      v26 = &s_clanPool[outLocalClientNum];
    else
      v26 = NULL;
    v27 = 1;
    while ( !OnlineClan::IsActiveClan(&v26->clans[v6]) )
    {
      if ( (unsigned int)++v6 >= 0xA )
        goto LABEL_33;
    }
    v27 = 0;
LABEL_33:
    OnlineClan::Init(IdleClan, task->m_controllerIndex, id, v27, 0);
    goto LABEL_35;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1183, ASSERT_TYPE_ASSERT, "(clan)", (const char *)&queryFormat, "clan") )
    __debugbreak();
  OnlineClan_SendLuaClanGenericNotification(task->m_controllerIndex, "clans_invite_accepted", 0, 19724);
}

/*
==============
CacheIncomingInvite
==============
*/
void CacheIncomingInvite(const int controllerIndex, bdClansGroupMembershipProposal *proposal)
{
  ClanInvitePool *v4; 
  bdClansGroupIdentifier *Group; 
  bdUserAccountID *ProposingUser; 
  unsigned __int64 UserID; 
  const XUID *v8; 
  bdUserAccountID *TargetUser; 
  bdClansGroupIdentifier *v10; 
  unsigned __int64 v11; 
  bdClansGroupIdentifier *v12; 
  unsigned __int64 ID; 
  bdClansGroupIdentifier *v14; 
  unsigned __int64 v15; 
  XUID outLocalClientNum; 
  XUID v17; 
  __int64 v18; 
  bdClansGroupMembershipProposal *v19; 
  bdUserAccountID result; 

  v18 = -2i64;
  v19 = proposal;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, (LocalClientNum_t *)&outLocalClientNum) && (v4 = &s_clanInvitePool[SLODWORD(outLocalClientNum.m_id)]) != NULL && v4->numInvites < 0xA )
  {
    Group = bdClansGroupMembershipProposal::getGroup(proposal, (bdClansGroupIdentifier *)&result);
    v4->invites[v4->numInvites].clanId = bdClansGroupIdentifier::getID(Group);
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
    ProposingUser = bdClansGroupMembershipProposal::getProposingUser(proposal, &result);
    UserID = bdUserAccountID::getUserID(ProposingUser);
    v8 = XUID::FromUniversalId(&outLocalClientNum, UserID);
    XUID::operator=(&v4->invites[v4->numInvites].inviter, v8);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
    v4->invites[v4->numInvites++].sentTimestamp = bdClansGroupMembershipProposal::getUpdatedTimestamp(proposal);
    v4->dirtyInfo = 1;
    Live_GetXuid(&v17, controllerIndex);
    TargetUser = bdClansGroupMembershipProposal::getTargetUser(proposal, &result);
    LOBYTE(TargetUser) = TargetUser->m_userID != XUID::ToUint64(&v17);
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
    bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
    if ( (_BYTE)TargetUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 852, ASSERT_TYPE_ASSERT, "(proposal.getTargetUser().m_userID == xuid.ToUint64())", (const char *)&queryFormat, "proposal.getTargetUser().m_userID == xuid.ToUint64()") )
      __debugbreak();
    if ( GamerProfile_GetAlwaysBlockClanInvites(controllerIndex) || !Live_GetDoesUserHaveOnlineCommunicationsPrivilege(controllerIndex) )
    {
      v12 = bdClansGroupMembershipProposal::getGroup(proposal, (bdClansGroupIdentifier *)&result);
      ID = bdClansGroupIdentifier::getID(v12);
      Com_Printf(14, "[Clan] %s: AllowClanInvites is false, setting should decline invite for clan id %zu\n", "CacheIncomingInvite", ID);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
      v14 = bdClansGroupMembershipProposal::getGroup(proposal, (bdClansGroupIdentifier *)&result);
      v15 = bdClansGroupIdentifier::getID(v14);
      OnlineClansManager::SetShouldDeclineClanInvite(&OnlineClansManager::s_instance, controllerIndex, v15);
    }
    else
    {
      v10 = bdClansGroupMembershipProposal::getGroup(proposal, (bdClansGroupIdentifier *)&result);
      v11 = bdClansGroupIdentifier::getID(v10);
      Com_Printf(14, "[Clan] %s: Received invite for clan id %zu\n", "CacheIncomingInvite", v11);
    }
    bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&result.__vftable + 2));
    bdReferencable::~bdReferencable((bdReferencable *)&result.m_userID);
  }
  else
  {
    Com_PrintError(14, "[Clan] Received invite for clan but couldn't record it\n");
  }
  bdClansGroupMembershipProposal::`vbase destructor(proposal);
}

/*
==============
OnlineClansManager::CreateClan
==============
*/
char OnlineClansManager::CreateClan(OnlineClansManager *this, const int controllerIndex, const char *name, const char *clanTag)
{
  OnlineClanPool *v8; 
  unsigned int v9; 
  unsigned __int64 *p_m_id; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v13; 
  TaskCreateRequest *v14; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  char v17; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  __int64 v21; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v23; 
  XUID v24; 
  unsigned __int64 userID[3]; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v27; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 

  userID[1] = -2i64;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    v8 = &s_clanPool[outLocalClientNum];
  else
    v8 = NULL;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 610, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !clanTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 611, ASSERT_TYPE_ASSERT, "(clanTag)", (const char *)&queryFormat, "clanTag") )
    __debugbreak();
  if ( !v8 )
  {
    Com_PrintError(14, "[Clan] %s: Unable to create clan because controller is not mapped to client\n", "OnlineClansManager::CreateClan");
    return 0;
  }
  if ( v8->creatingInProgress )
  {
    Com_PrintError(14, "[Clan] %s: Unable to create clan because one is currently in the process of being created\n", "OnlineClansManager::CreateClan");
    return 0;
  }
  if ( !CL_PlayerData_ValidateActivisionClanNames(controllerIndex, clanTag) )
  {
    Com_PrintError(14, "[Clan] %s: Player is trying to create a clan with a restricted clanTag\n", "OnlineClansManager::CreateClan");
    return 0;
  }
  if ( !GetIdleClan(controllerIndex) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 633, ASSERT_TYPE_ASSERT, "(clan)", (const char *)&queryFormat, "clan") )
      __debugbreak();
    Com_PrintError(14, "[Clan] %s: Unable to create clan because you can only be in a total of %zu\n", "OnlineClansManager::CreateClan", 10i64);
    return 0;
  }
  Live_GetXuid(&result, controllerIndex);
  v9 = 0;
  p_m_id = &v8->clans[0].m_owner.m_id;
  do
  {
    v24.m_id = *p_m_id;
    if ( XUID::operator==(&v24, &result) )
    {
      Com_PrintError(14, "[Clan] %s: Unable to create clan because you can only be owner of one clan (already owner of %s)\n", "OnlineClansManager::CreateClan", v8->clans[v9].m_name);
      return 0;
    }
    ++v9;
    p_m_id += 498;
  }
  while ( v9 < 0xA );
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
  userID[0] = XUID::ToUint64(&result);
  bdUserAccountID::bdUserAccountID(&v27, userID);
  v14 = (TaskCreateRequest *)DWClans::createClan(Clans, &v23, name, clanTag, v13, &v8->groupInfoResponse);
  if ( v14 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v15 = *(bdRemoteTask **)&v14->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
  }
  if ( v23.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v23.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v23.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v23.m_ptr->~bdReferencable)(v23.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = CreateClanComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v16 = TaskManager::GetInstance(), TaskManager::CreateTask(v16, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(v21) = controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully started to create clan %s, tag %s (controller %i)\n", "OnlineClansManager::CreateClan", name, clanTag, v21);
    v8->creatingInProgress = 1;
    v17 = 1;
  }
  else
  {
    LODWORD(fmt) = controllerIndex;
    Com_PrintError(14, "[Clan] %s: failed to create clan %s (controller %i)\n", "OnlineClansManager::CreateClan", name, fmt);
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
CreateClanComplete
==============
*/
void CreateClanComplete(GenericTask *task, eTaskManagerTaskState state)
{
  OnlineClanPool *v4; 
  unsigned __int64 m_id; 
  const char *m_name; 
  const char *m_clanTag; 
  OnlineClan *IdleClan; 
  bool v9; 
  unsigned __int64 ID; 
  int errorCode; 
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, &outLocalClientNum) )
  {
    v4 = &s_clanPool[outLocalClientNum];
    if ( v4 )
    {
      m_id = 0i64;
      m_name = (char *)&queryFormat.fmt + 3;
      m_clanTag = (char *)&queryFormat.fmt + 3;
      if ( state == TASKSTATE_SUCCESS )
      {
        IdleClan = GetIdleClan(task->m_controllerIndex);
        if ( !IdleClan && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 574, ASSERT_TYPE_ASSERT, "(clan)", (const char *)&queryFormat, "clan") )
          __debugbreak();
        v9 = 1;
        while ( !OnlineClan::IsActiveClan(&v4->clans[(int)m_id]) )
        {
          LODWORD(m_id) = m_id + 1;
          if ( (unsigned int)m_id >= 0xA )
            goto LABEL_12;
        }
        v9 = 0;
LABEL_12:
        if ( IdleClan )
        {
          ID = bdClansGroupIdentifier::getID(&v4->groupInfoResponse);
          OnlineClan::Init(IdleClan, task->m_controllerIndex, ID, v9, 0);
        }
        m_id = IdleClan->m_id;
        m_clanTag = IdleClan->m_clanTag;
        m_name = IdleClan->m_name;
      }
      errorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
      OnlineClan_SendLuaClanNotification(task->m_controllerIndex, state == TASKSTATE_SUCCESS, m_id, m_name, m_clanTag, "clans_created", errorCode);
      v4->creatingInProgress = 0;
    }
  }
}

/*
==============
OnlineClansManager::DeclineClanInvite
==============
*/
__int64 OnlineClansManager::DeclineClanInvite(OnlineClansManager *this, const int controllerIndex, const OnlineClanInvite *clanInvite)
{
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v8; 
  TaskCreateRequest *v9; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  unsigned __int8 v12; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v17; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v19; 
  bdReference<bdRemoteTask> v20; 
  XUID result; 
  unsigned __int64 userID; 

  v17 = -2i64;
  if ( !clanInvite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1393, ASSERT_TYPE_ASSERT, "(clanInvite)", (const char *)&queryFormat, "clanInvite") )
    __debugbreak();
  if ( s_cancelInviteTaskData.taskActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1394, ASSERT_TYPE_ASSERT, "(!s_cancelInviteTaskData.taskActive)", (const char *)&queryFormat, "!s_cancelInviteTaskData.taskActive") )
    __debugbreak();
  Live_GetXuid(&result, controllerIndex);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Instance = DWServicesAccess::GetInstance();
  Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
  userID = XUID::ToUint64(&result);
  bdUserAccountID::bdUserAccountID(&v19, &userID);
  v9 = (TaskCreateRequest *)DWClans::cancelInvite(Clans, &v20, clanInvite->clanId, v8, &s_cancelInviteTaskData.removeProposalsResponse);
  if ( v9 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v10 = *(bdRemoteTask **)&v9->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
    if ( v10 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
  }
  if ( v20.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v20.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v20.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v20.m_ptr->~bdReferencable)(v20.m_ptr, 1i64);
  pTaskCreateRequest.m_appData = this;
  pTaskCreateRequest.m_onCompletionCallback = DeclineClanInviteComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(fmt) = controllerIndex;
    Com_Printf(14, "[Clan] %s: Successfully declined clan invite for %zu (controller %i)\n", "OnlineClansManager::DeclineClanInvite", clanInvite->clanId, fmt);
    s_cancelInviteTaskData.taskActive = 1;
    v12 = 1;
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: failed to decline invite for %zu\n", "OnlineClansManager::DeclineClanInvite", clanInvite->clanId);
    v12 = 0;
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
  return v12;
}

/*
==============
DeclineClanInviteComplete
==============
*/
void DeclineClanInviteComplete(GenericTask *task, eTaskManagerTaskState state)
{
  unsigned int m_size; 
  bdArray<bdClansFailedMembershipProposal> *FailedProposals; 
  bdClansFailedMembershipProposal *m_data; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  bdArray<bdClansRemovedMembershipProposal> *Proposals; 
  bdClansRemovedMembershipProposal *v9; 
  _BYTE *v10; 
  bdClansGroupIdentifier *v11; 
  unsigned __int64 v12; 
  bdArray<bdClansFailedMembershipProposal> result; 
  __int64 v14; 
  bdClansGroupIdentifier v15; 
  bdClansRemovedMembershipProposal v16; 

  v14 = -2i64;
  if ( state )
  {
    Com_PrintError(14, "[Clan] %s: Failed to decline clan invite\n", "DeclineClanInviteComplete");
  }
  else
  {
    m_size = bdClansRemoveProposalsResponse::getFailedProposals(&s_cancelInviteTaskData.removeProposalsResponse, &result)->m_size;
    bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
    if ( m_size )
    {
      bdClansFailedMembershipProposal::bdClansFailedMembershipProposal((bdClansFailedMembershipProposal *)&v16);
      FailedProposals = bdClansRemoveProposalsResponse::getFailedProposals(&s_cancelInviteTaskData.removeProposalsResponse, &result);
      if ( FailedProposals->m_size )
      {
        m_data = FailedProposals->m_data;
        bdReferencable::operator=((bdReferencable *)&v16.m_targetUser[*(int *)(*((_QWORD *)&v16.__vftable + 1) + 4i64) - 24], (const bdReferencable *)((char *)&FailedProposals->m_data->__vftable + *(int *)(*((_QWORD *)&FailedProposals->m_data->__vftable + 1) + 4i64) + 8));
        bdUserDetails::operator=((bdUserDetails *)(&v16.__vftable + 2), (const bdUserDetails *)(&m_data->__vftable + 2));
        bdReferencable::operator=((bdReferencable *)&v16.m_targetUser[*(int *)(*(_QWORD *)&v16.m_targetUser[120] + 4i64) + 120], (const bdReferencable *)&m_data->m_user[*(int *)(*(_QWORD *)&m_data->m_user[120] + 4i64) + 120]);
        bdReferencable::operator=((bdReferencable *)((char *)&v16.m_group + SHIDWORD(v16.m_group.serialize)), (const bdReferencable *)((char *)&m_data->m_group.__vftable + *(int *)(*((_QWORD *)&m_data->m_group.__vftable + 1) + 4i64) + 8));
        *((_WORD *)&v16.m_group.__vftable + 4) = *((_WORD *)&m_data->m_group.__vftable + 8);
        *((_QWORD *)&v16.m_group.__vftable + 2) = *((_QWORD *)&m_data->m_group.__vftable + 3);
        *((_WORD *)&v16.m_group.__vftable + 12) = m_data->m_group.m_rootKind;
        *(_QWORD *)&v16.m_group.m_rootKind = m_data->m_group.m_rootID;
        *((_DWORD *)&v16.m_group.m_rootID + 4) = m_data->m_reason;
      }
      bdArray<bdClansFailedMembershipProposal>::~bdArray<bdClansFailedMembershipProposal>(&result);
      Group = bdClansFailedMembershipProposal::getGroup((bdClansFailedMembershipProposal *)&v16, &v15);
      ID = bdClansGroupIdentifier::getID(Group);
      Com_PrintError(14, "[Clan] %s: Failed to decline clan invite for clan %zu\n", "DeclineClanInviteComplete", ID);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v15.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v15.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v16.m_group.__vftable + 1));
      bdReferencable::~bdReferencable((bdReferencable *)&v16.m_group.m_rootID);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v16.m_targetUser[128]);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v16.m_targetUser[112]);
      bdReferencable::~bdReferencable((bdReferencable *)&v16.m_targetUser[128]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v16.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v16.m_cooldown);
    }
    else
    {
      bdClansRemovedMembershipProposal::bdClansRemovedMembershipProposal(&v16);
      Proposals = bdClansRemoveProposalsResponse::getProposals(&s_cancelInviteTaskData.removeProposalsResponse, (bdArray<bdClansRemovedMembershipProposal> *)&result);
      if ( Proposals->m_size )
      {
        v9 = Proposals->m_data;
        bdReferencable::operator=((bdReferencable *)&v16.m_targetUser[*(int *)(*((_QWORD *)&v16.__vftable + 1) + 4i64) - 24], (const bdReferencable *)((char *)&Proposals->m_data->__vftable + *(int *)(*((_QWORD *)&Proposals->m_data->__vftable + 1) + 4i64) + 8));
        v10 = &v9->__vftable + 2;
        if ( &v16.__vftable + 2 != &v9->__vftable + 2 )
        {
          *((_BYTE *)&v16.__vftable + 16) = *v10;
          bdUserDetails::operator=((bdUserDetails *)(&v16.__vftable + 3), (const bdUserDetails *)(&v9->__vftable + 3));
          bdReferencable::operator=((bdReferencable *)&v16.m_targetUser[*(int *)(*(_QWORD *)&v16.m_targetUser[128] + 4i64) + 128], (const bdReferencable *)&v10[*(int *)(*(_QWORD *)&v9->m_targetUser[128] + 4i64) + 144]);
        }
        bdReferencable::operator=((bdReferencable *)((char *)&v16.m_group.__vftable + *(int *)(*((_QWORD *)&v16.m_group.__vftable + 1) + 4i64) + 8), (const bdReferencable *)((char *)&v9->m_group.__vftable + *(int *)(*((_QWORD *)&v9->m_group.__vftable + 1) + 4i64) + 8));
        *((_WORD *)&v16.m_group.__vftable + 8) = *((_WORD *)&v9->m_group.__vftable + 8);
        *((_QWORD *)&v16.m_group.__vftable + 3) = *((_QWORD *)&v9->m_group.__vftable + 3);
        v16.m_group.m_rootKind = v9->m_group.m_rootKind;
        v16.m_group.m_rootID = v9->m_group.m_rootID;
        v16.m_cooldown = v9->m_cooldown;
      }
      bdArray<bdClansRemovedMembershipProposal>::~bdArray<bdClansRemovedMembershipProposal>((bdArray<bdClansRemovedMembershipProposal> *)&result);
      v11 = bdClansRemovedMembershipProposal::getGroup(&v16, &v15);
      v12 = bdClansGroupIdentifier::getID(v11);
      RemoveClanInvite(task->m_controllerIndex, v12);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v15.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v15.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v16.m_group.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)(&v16.m_group.m_rootID + 1));
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v16.m_targetUser[136]);
      bdUserDetails::~bdUserDetails((bdUserDetails *)&v16.m_targetUser[120]);
      bdReferencable::~bdReferencable((bdReferencable *)&v16.m_targetUser[136]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v16.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v16.gapFC[4]);
    }
  }
  s_cancelInviteTaskData.taskActive = 0;
}

/*
==============
OnlineClansManager::DeclineClanInvitesFrame
==============
*/
void OnlineClansManager::DeclineClanInvitesFrame(OnlineClansManager *this, const int controllerIndex)
{
  PublisherVariableManager *Instance; 
  ClanInvitePool *v4; 
  int Int_Internal_DebugName; 
  int v6; 
  unsigned int numInvites; 
  int v8; 
  const OnlineClanInvite *i; 
  LocalClientNum_t outLocalClientNum; 

  Instance = PublisherVariableManager::GetInstance();
  if ( PublisherVariableManager::HasRetrievedVariables(Instance) && !s_cancelInviteTaskData.taskActive && CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
  {
    v4 = &s_clanInvitePool[outLocalClientNum];
    if ( v4 )
    {
      if ( v4->state == FETCHED )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_clans_invite_decline_throttle_ms, "online_clans_invite_decline_throttle_ms");
        v6 = Sys_Milliseconds();
        if ( v6 - s_previousDeclineInviteAttemptTime >= Int_Internal_DebugName )
        {
          numInvites = v4->numInvites;
          v8 = 0;
          if ( numInvites )
          {
            for ( i = v4->invites; !i->shouldDecline; ++i )
            {
              if ( ++v8 >= numInvites )
                return;
            }
            if ( !i->dataFetched && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 823, ASSERT_TYPE_ASSERT, "(invite->dataFetched)", (const char *)&queryFormat, "invite->dataFetched") )
              __debugbreak();
            Com_Printf(14, "[Clan] %s: declining invite for clan id %zu\n", "OnlineClansManager::DeclineClanInvitesFrame", i->clanId);
            OnlineClansManager::DeclineClanInvite(&OnlineClansManager::s_instance, controllerIndex, i);
            s_previousDeclineInviteAttemptTime = v6;
          }
        }
      }
    }
  }
}

/*
==============
DumpAllClansAndInvites
==============
*/
void DumpAllClansAndInvites()
{
  int i; 
  int ControllerFromClient; 
  OnlineClanPool *v2; 
  unsigned int j; 
  ClanInvitePool *v4; 
  unsigned int k; 
  const char *v6; 
  const char *v7; 
  LocalClientNum_t outLocalClientNum; 
  LocalClientNum_t v9; 

  Com_Printf(14, "[Clan] Clan Pool:\n\n");
  for ( i = 0; i < 2; ++i )
  {
    if ( !CL_Mgr_IsClientActive((LocalClientNum_t)i) )
      continue;
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)i);
    if ( !CL_Mgr_IsControllerMappedToClient(ControllerFromClient, &outLocalClientNum) )
    {
      v2 = NULL;
LABEL_7:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1705, ASSERT_TYPE_ASSERT, "(pool != nullptr)", (const char *)&queryFormat, "pool != nullptr") )
        __debugbreak();
      goto LABEL_9;
    }
    v2 = &s_clanPool[outLocalClientNum];
    if ( !v2 )
      goto LABEL_7;
LABEL_9:
    for ( j = 0; j < 0xA; ++j )
    {
      if ( v2->clans[0].m_state )
        OnlineClan::Print(v2->clans);
      v2 = (OnlineClanPool *)((char *)v2 + 3984);
    }
    Com_Printf(14, "[Clan] Invite Pool:\n\n");
    if ( CL_Mgr_IsControllerMappedToClient(ControllerFromClient, &v9) )
      v4 = &s_clanInvitePool[v9];
    else
      v4 = NULL;
    for ( k = 0; k < v4->numInvites; ++k )
    {
      Com_Printf(14, "Invite Index: %i\n", k);
      Com_Printf(14, "Inviter Name: %s\n", v4->invites[k].inviterName);
      v6 = XUID::ToString(&v4->invites[k].inviter);
      Com_Printf(14, "Inviter XUID: %s\n", v6);
      Com_Printf(14, "ClanTag: %s\n", v4->invites[k].clanTag);
      Com_Printf(14, "ClanName: %s\n", v4->invites[k].clanName);
      Com_Printf(14, "ClanID: %zu\n", v4->invites[k].clanId);
      Com_Printf(14, "Sent Timestamp: %zu\n", v4->invites[k].sentTimestamp);
      v7 = "False";
      if ( v4->invites[k].shouldDecline )
        v7 = "True";
      Com_Printf(14, "ShouldDecline: %s\n", v7);
    }
  }
}

/*
==============
FetchClanInfos
==============
*/
void FetchClanInfos(const int controllerIndex)
{
  __int64 v2; 
  bool v3; 
  OnlineClanPool *v4; 
  bdArray<bdClansGroupMemberInfo> *Memberships; 
  unsigned int m_size; 
  bdClansGroupMembershipInfo *m_data; 
  __int64 v8; 
  __int64 v9; 
  bdClansGroupMembershipInfo_vtbl **v10; 
  __int64 v11; 
  unsigned int v12; 
  bdAtomic<int> *p_m_refCount; 
  unsigned __int64 *v14; 
  bdArray<bdClansGroupMembershipInfo> *v15; 
  char *v16; 
  bdClansGroupMembershipInfo *v17; 
  __int64 v18; 
  __int64 v19; 
  bdClansGroupMembershipInfo_vtbl **v20; 
  __int64 v21; 
  bdClansGroupIdentifier *Group; 
  DWServicesAccess *Instance; 
  int v24; 
  DWClans *Clans; 
  TaskCreateRequest *ClanInfos; 
  bdRemoteTask *v27; 
  TaskManager *v28; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdClansGetGroupInfosResponse *response; 
  unsigned int v31; 
  bdReference<bdRemoteTask> v32; 
  LocalClientNum_t outLocalClientNum; 
  int controllerIndexa; 
  TaskCreateRequest pTaskCreateRequest; 
  bdArray<bdClansGroupMembershipInfo> v36; 
  OnlineClanPool *v37; 
  bdArray<bdClansGroupMembershipInfo> v38; 
  bdClansGroupMembershipInfo v39; 
  __int64 v40; 
  bdArray<bdClansGroupMemberInfo> result; 
  TaskCreateResult pTaskCreateResult; 
  bdClansGroupIdentifier v43; 
  bdClansGroupMemberInfo value; 
  unsigned __int64 ids[10]; 

  v40 = -2i64;
  controllerIndexa = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  bdClansGroupMemberInfo::bdClansGroupMemberInfo(&value);
  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || (v2 = outLocalClientNum, v3 = &s_clanPool[v2] == NULL, v4 = &s_clanPool[v2], v37 = v4, v3) )
  {
    Com_PrintError(14, "[Clan] %s: Failed to fetch clan info controller %i is not mapped\n", "FetchClanInfos", (unsigned int)controllerIndex);
  }
  else
  {
    Memberships = bdClansGetMembershipsByUsersResponse::getMemberships(&v4->getMembershipsByUsersResponse, &result);
    bdArray<bdClansGroupMemberInfo>::get(Memberships, 0, &value);
    bdArray<bdClansGroupMemberInfo>::~bdArray<bdClansGroupMemberInfo>(&result);
    m_size = bdClansGroupMemberInfo::getMemberships(&value, &v38)->m_size;
    v31 = m_size;
    m_data = v38.m_data;
    if ( v38.m_size )
    {
      v8 = 0i64;
      v9 = 0i64;
      v10 = &v38.m_data->__vftable + 1;
      v11 = v38.m_size;
      do
      {
        (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v10)->serialize) + v8 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v10)->serialize) + v9 + 8, 0i64);
        v9 += 112i64;
        v8 += 112i64;
        v10 += 14;
        --v11;
      }
      while ( v11 );
      m_data = v38.m_data;
      m_size = v31;
    }
    bdMemory::deallocate(m_data);
    Com_Printf(14, "[Clan] %s: Attempting to fetch clan infos for", "FetchClanInfos");
    v12 = 0;
    if ( m_size )
    {
      p_m_refCount = NULL;
      v32.m_ptr = NULL;
      v14 = ids;
      do
      {
        bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v39);
        v15 = bdClansGroupMemberInfo::getMemberships(&value, &v36);
        if ( v12 < v15->m_size )
        {
          v16 = (char *)v15->m_data + (unsigned __int64)p_m_refCount;
          bdReferencable::operator=((bdReferencable *)&v39.m_group[*(int *)(*((_QWORD *)&v39.__vftable + 1) + 4i64) - 24], (const bdReferencable *)&v16[*(int *)(*((_QWORD *)v16 + 1) + 4i64) + 8]);
          *((_WORD *)&v39.__vftable + 8) = *((_WORD *)v16 + 8);
          bdReferencable::operator=((bdReferencable *)&v39.m_group[*(int *)(*(_QWORD *)v39.m_group + 4i64)], (const bdReferencable *)&v16[*(int *)(*((_QWORD *)v16 + 4) + 4i64) + 32]);
          *(_WORD *)&v39.m_group[8] = *((_WORD *)v16 + 20);
          *(_QWORD *)&v39.m_group[16] = *((_QWORD *)v16 + 6);
          *(_WORD *)&v39.m_group[24] = *((_WORD *)v16 + 28);
          *(_QWORD *)&v39.m_group[32] = *((_QWORD *)v16 + 8);
          v39.m_isActiveGroup = v16[88];
        }
        v17 = v36.m_data;
        if ( v36.m_size )
        {
          v18 = 0i64;
          v19 = 0i64;
          v20 = &v36.m_data->__vftable + 1;
          v21 = v36.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v17->__vftable + SHIDWORD((*v20)->serialize) + v18 + 8))((__int64)&v17->__vftable + SHIDWORD((*v20)->serialize) + v19 + 8, 0i64);
            v19 += 112i64;
            v18 += 112i64;
            v20 += 14;
            --v21;
          }
          while ( v21 );
          v17 = v36.m_data;
          m_size = v31;
        }
        bdMemory::deallocate(v17);
        v36.m_data = NULL;
        *(_QWORD *)&v36.m_capacity = 0i64;
        Group = bdClansGroupMembershipInfo::getGroup(&v39, &v43);
        *v14 = bdClansGroupIdentifier::getID(Group);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v43.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)(&v43.m_rootID + 1));
        Com_Printf(14, " %zu", *v14);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v39.m_group[8]);
        bdReferencable::~bdReferencable((bdReferencable *)&v39.m_group[40]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v39.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v39.gap59[7]);
        ++v12;
        p_m_refCount = &v32.m_ptr[1].m_refCount;
        v32.m_ptr = (bdRemoteTask *)((char *)v32.m_ptr + 112);
        ++v14;
      }
      while ( v12 < m_size );
    }
    Instance = DWServicesAccess::GetInstance();
    v24 = controllerIndexa;
    Clans = DWServicesAccess::GetClans(Instance, controllerIndexa);
    ClanInfos = (TaskCreateRequest *)DWClans::getClanInfos(Clans, &v32, ids, m_size, &v37->getGroupInfoResponse);
    if ( ClanInfos != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v27 = *(bdRemoteTask **)&ClanInfos->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v27;
      if ( v27 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v27->m_refCount, 1u);
    }
    if ( v32.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v32.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v32.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v32.m_ptr->~bdReferencable)(v32.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = FetchClanInfosComplete;
    pTaskCreateRequest.m_controllerIndex = v24;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v28 = TaskManager::GetInstance(), TaskManager::CreateTask(v28, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      LODWORD(response) = v24;
      Com_Printf(14, "\n[Clan] %s: Successfully started to fetch clan info for %i clans (controller %i)\n", "FetchClanInfos", m_size, response);
    }
    else
    {
      LODWORD(response) = v24;
      Com_PrintError(14, "\n[Clan] %s: Failed to fetch clan info for %i clans (controller %i)\n", "FetchClanInfos", m_size, response);
    }
  }
  bdClansGroupMemberInfo::`vbase destructor(&value);
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
FetchClanInfosComplete
==============
*/
void FetchClanInfosComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 v3; 
  bool v4; 
  OnlineClanPool *v5; 
  bdClansGetGroupInfosResponse *p_getGroupInfoResponse; 
  LocalClientNum_t v7; 
  LocalClientNum_t v8; 
  bdClansGetMembershipsByUsersResponse *p_getMembershipsByUsersResponse; 
  __int64 v10; 
  bdArray<bdClansGroupMemberInfo> *Memberships; 
  bdClansGroupMemberInfo *m_data; 
  bdClansGroupMemberInfo *v13; 
  __int64 v14; 
  __int64 v15; 
  bdClansGroupMemberInfo_vtbl **v16; 
  __int64 m_size; 
  bdArray<bdClansGroupMembershipInfo> *v18; 
  bdClansGroupMembershipInfo *v19; 
  bdClansGroupMembershipInfo *v20; 
  __int64 v21; 
  __int64 v22; 
  bdClansGroupMembershipInfo_vtbl **v23; 
  __int64 v24; 
  LocalClientNum_t v25; 
  __int64 v26; 
  bdArray<bdClansGroupInfo> *GroupInfos; 
  bdClansGroupInfo *v28; 
  __int64 v31; 
  __int64 v42; 
  bool *p_m_hasValue; 
  bdClansGroupMembershipInfo *v52; 
  __int64 v53; 
  __int64 v54; 
  bdClansGroupMembershipInfo_vtbl **v55; 
  __int64 v56; 
  bdArray<bdClansGroupMemberInfo> *v57; 
  bdClansGroupMemberInfo *v58; 
  bdClansGroupMemberInfo *v59; 
  __int64 v60; 
  __int64 v61; 
  bdClansGroupMemberInfo_vtbl **v62; 
  __int64 v63; 
  bdArray<bdClansGroupMembershipInfo> *v64; 
  char *v65; 
  bdClansGroupInfo *v66; 
  __int64 v67; 
  __int64 v68; 
  bdClansGroupInfo_vtbl **v69; 
  __int64 v70; 
  char *v71; 
  GenericTask *v72; 
  OnlineClanPool *v73; 
  unsigned int v74; 
  OnlineClanPool *v75; 
  _BYTE *v76; 
  unsigned __int64 v77; 
  OnlineClan *v78; 
  bool isActiveGroup; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  _BYTE *v82; 
  unsigned __int64 v83; 
  _BYTE *v84; 
  unsigned __int64 v85; 
  _BYTE *v86; 
  unsigned __int64 v87; 
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  __int64 isActiveOnDemonware; 
  LocalClientNum_t outLocalClientNum[2]; 
  bdArray<bdClansGroupMemberInfo> v92; 
  bdArray<bdClansGroupMembershipInfo> v93; 
  bdClansGetMembershipsByUsersResponse *v94; 
  OnlineClanPool *v95; 
  bdArray<bdClansGroupInfo> result; 
  LocalClientNum_t v97; 
  bdClansGetGroupInfosResponse *v98; 
  bdClansGroupMembershipInfo v99; 
  GenericTask *v100; 
  __int64 v101; 
  bdClansGroupIdentifier v102; 
  bdClansGroupMemberInfo v103; 
  bdClansGroupInfo Buf; 

  v101 = -2i64;
  v100 = task;
  if ( state )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    ErrorCode = bdRemoteTask::getErrorCode(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "[Clan] %s: failed to fetch clan infos with error code %i, id %zu\n", "FetchClanInfosComplete", (unsigned int)ErrorCode, TransactionID);
  }
  else if ( !CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, &outLocalClientNum[1]) || (v3 = outLocalClientNum[1], v4 = &s_clanPool[v3] == NULL, v5 = &s_clanPool[v3], v95 = v5, v4) )
  {
    Com_PrintError(14, "[Clan] %s: not processing more clans for controller %i since the controller is not mapped\n", "FetchClanInfosComplete", (unsigned int)task->m_controllerIndex);
  }
  else
  {
    p_getGroupInfoResponse = &v5->getGroupInfoResponse;
    v98 = &v5->getGroupInfoResponse;
    outLocalClientNum[0] = (LocalClientNum_t)bdClansGetGroupInfosResponse::getGroupInfos(&v5->getGroupInfoResponse, &result)->m_size;
    bdArray<bdClansGroupInfo>::~bdArray<bdClansGroupInfo>(&result);
    outLocalClientNum[1] = LOCAL_CLIENT_0;
    v7 = LOCAL_CLIENT_0;
    v8 = outLocalClientNum[0];
    if ( outLocalClientNum[0] )
    {
      p_getMembershipsByUsersResponse = &v5->getMembershipsByUsersResponse;
      v94 = p_getMembershipsByUsersResponse;
      v10 = 0i64;
      while ( 1 )
      {
        bdClansGroupMemberInfo::bdClansGroupMemberInfo(&v103);
        Memberships = bdClansGetMembershipsByUsersResponse::getMemberships(p_getMembershipsByUsersResponse, &v92);
        if ( Memberships->m_size )
        {
          m_data = Memberships->m_data;
          bdReferencable::operator=((bdReferencable *)&v103.m_user[*(int *)(*((_QWORD *)&v103.__vftable + 1) + 4i64) - 24], (const bdReferencable *)((char *)&Memberships->m_data->__vftable + *(int *)(*((_QWORD *)&Memberships->m_data->__vftable + 1) + 4i64) + 8));
          bdUserDetails::operator=((bdUserDetails *)(&v103.__vftable + 2), (const bdUserDetails *)(&m_data->__vftable + 2));
          bdReferencable::operator=((bdReferencable *)&v103.m_user[*(int *)(*(_QWORD *)&v103.m_user[120] + 4i64) + 120], (const bdReferencable *)&m_data->m_user[*(int *)(*(_QWORD *)&m_data->m_user[120] + 4i64) + 120]);
          bdArray<bdClansGroupMembershipInfo>::operator=(&v103.m_memberships, &m_data->m_memberships);
          v103.m_onlineStatus = m_data->m_onlineStatus;
        }
        v13 = v92.m_data;
        if ( v92.m_size )
        {
          v14 = 0i64;
          v15 = 0i64;
          v16 = &v92.m_data->__vftable + 1;
          m_size = v92.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v13->__vftable + SHIDWORD((*v16)->serialize) + v14 + 8))((__int64)&v13->__vftable + SHIDWORD((*v16)->serialize) + v15 + 8, 0i64);
            v15 += 216i64;
            v14 += 216i64;
            v16 += 27;
            --m_size;
          }
          while ( m_size );
          v13 = v92.m_data;
        }
        bdMemory::deallocate(v13);
        v92.m_data = NULL;
        *(_QWORD *)&v92.m_capacity = 0i64;
        bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v99);
        v18 = bdClansGroupMemberInfo::getMemberships(&v103, &v93);
        if ( v7 < v18->m_size )
        {
          v19 = &v18->m_data[v10];
          bdReferencable::operator=((bdReferencable *)&v99.m_group[*(int *)(*((_QWORD *)&v99.__vftable + 1) + 4i64) - 24], (const bdReferencable *)((char *)&v19->__vftable + *(int *)(*((_QWORD *)&v19->__vftable + 1) + 4i64) + 8));
          *((_WORD *)&v99.__vftable + 8) = *((_WORD *)&v19->__vftable + 8);
          bdReferencable::operator=((bdReferencable *)&v99.m_group[*(int *)(*(_QWORD *)v99.m_group + 4i64)], (const bdReferencable *)&v19->m_group[*(int *)(*(_QWORD *)v19->m_group + 4i64)]);
          *(_WORD *)&v99.m_group[8] = *(_WORD *)&v19->m_group[8];
          *(_QWORD *)&v99.m_group[16] = *(_QWORD *)&v19->m_group[16];
          *(_WORD *)&v99.m_group[24] = *(_WORD *)&v19->m_group[24];
          *(_QWORD *)&v99.m_group[32] = *(_QWORD *)&v19->m_group[32];
          v99.m_isActiveGroup = v19->m_isActiveGroup;
        }
        v20 = v93.m_data;
        if ( v93.m_size )
        {
          v21 = 0i64;
          v22 = 0i64;
          v23 = &v93.m_data->__vftable + 1;
          v24 = v93.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v20->__vftable + SHIDWORD((*v23)->serialize) + v21 + 8))((__int64)&v20->__vftable + SHIDWORD((*v23)->serialize) + v22 + 8, 0i64);
            v22 += 112i64;
            v21 += 112i64;
            v23 += 14;
            --v24;
          }
          while ( v24 );
          v20 = v93.m_data;
        }
        bdMemory::deallocate(v20);
        v93.m_data = NULL;
        *(_QWORD *)&v93.m_capacity = 0i64;
        if ( bdClansGroupMembershipInfo::isActiveGroup(&v99) )
          break;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v99.m_group[8]);
        bdReferencable::~bdReferencable((bdReferencable *)&v99.m_group[40]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v99.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v99.gap59[7]);
        bdClansGroupMemberInfo::`vbase destructor(&v103);
        ++v7;
        ++v10;
        p_getMembershipsByUsersResponse = v94;
        if ( (unsigned int)v7 >= outLocalClientNum[0] )
          goto LABEL_22;
      }
      outLocalClientNum[1] = v7;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v99.m_group[8]);
      bdReferencable::~bdReferencable((bdReferencable *)&v99.m_group[40]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v99.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v99.gap59[7]);
      bdClansGroupMemberInfo::`vbase destructor(&v103);
LABEL_22:
      p_getGroupInfoResponse = v98;
      v8 = outLocalClientNum[0];
    }
    v25 = LOCAL_CLIENT_0;
    if ( v8 )
    {
      v94 = NULL;
      v26 = 0i64;
      while ( 1 )
      {
        bdClansGroupInfo::bdClansGroupInfo(&Buf);
        GroupInfos = bdClansGetGroupInfosResponse::getGroupInfos(p_getGroupInfoResponse, (bdArray<bdClansGroupInfo> *)&v93);
        if ( v25 < GroupInfos->m_size )
        {
          v28 = &GroupInfos->m_data[v26];
          bdReferencable::operator=((bdReferencable *)&Buf.m_name[*(int *)(*((_QWORD *)&Buf.__vftable + 1) + 4i64) - 56], (const bdReferencable *)((char *)&v28->__vftable + *(int *)(*((_QWORD *)&v28->__vftable + 1) + 4i64) + 8));
          *((_WORD *)&Buf.__vftable + 8) = *((_WORD *)&v28->__vftable + 8);
          *((_QWORD *)&Buf.__vftable + 3) = *((_QWORD *)&v28->__vftable + 3);
          Buf.m_rootKind = v28->m_rootKind;
          Buf.m_rootID = v28->m_rootID;
          _RAX = &v28->m_rootID + 1;
          _RCX = &Buf.m_rootID + 1;
          v31 = 2i64;
          do
          {
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
            _RCX += 16;
            __asm
            {
              vmovups xmm1, xmmword ptr [rax+70h]
              vmovups xmmword ptr [rcx-10h], xmm1
            }
            _RAX += 16;
            --v31;
          }
          while ( v31 );
          _RCX = &v28->m_uniqueTag;
          _RAX = &Buf.m_uniqueTag;
          v42 = 2i64;
          do
          {
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
              vmovups xmm0, xmmword ptr [rcx+60h]
              vmovups xmmword ptr [rax+60h], xmm0
            }
            _RAX = (bdStructFixedSizeString<255> *)((char *)_RAX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rcx+70h]
              vmovups xmmword ptr [rax-10h], xmm1
            }
            _RCX = (bdStructFixedSizeString<255> *)((char *)_RCX + 128);
            --v42;
          }
          while ( v42 );
          Buf.m_privacyLevel = v28->m_privacyLevel;
          p_m_hasValue = &v28->m_owner.m_hasValue;
          if ( &Buf.m_owner != &v28->m_owner )
          {
            Buf.m_owner.m_hasValue = *p_m_hasValue;
            bdUserAccountID::operator=(&Buf.m_owner.m_value, &v28->m_owner.m_value);
            bdReferencable::operator=((bdReferencable *)&Buf.m_owner.m_value.gap38[*(int *)(*(_QWORD *)&Buf.m_owner.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&p_m_hasValue[*(int *)(*(_QWORD *)&v28->m_owner.m_value.gap38[8] + 4i64) + 72]);
          }
          Buf.m_memberCount = v28->m_memberCount;
          Buf.m_proposalCount = v28->m_proposalCount;
          Buf.m_createdTimestamp = v28->m_createdTimestamp;
          Buf.m_onlineMemberCount = v28->m_onlineMemberCount;
        }
        v52 = v93.m_data;
        if ( v93.m_size )
        {
          v53 = 0i64;
          v54 = 0i64;
          v55 = &v93.m_data->__vftable + 1;
          v56 = v93.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v52->__vftable + SHIDWORD((*v55)->serialize) + v53 + 8))((__int64)&v52->__vftable + SHIDWORD((*v55)->serialize) + v54 + 8, 0i64);
            v54 += 696i64;
            v53 += 696i64;
            v55 += 87;
            --v56;
          }
          while ( v56 );
          v52 = v93.m_data;
        }
        bdMemory::deallocate(v52);
        v93.m_data = NULL;
        *(_QWORD *)&v93.m_capacity = 0i64;
        bdClansGroupMemberInfo::bdClansGroupMemberInfo(&v103);
        v57 = bdClansGetMembershipsByUsersResponse::getMemberships(&v95->getMembershipsByUsersResponse, &v92);
        if ( v57->m_size )
        {
          v58 = v57->m_data;
          bdReferencable::operator=((bdReferencable *)&v103.m_user[*(int *)(*((_QWORD *)&v103.__vftable + 1) + 4i64) - 24], (const bdReferencable *)((char *)&v57->m_data->__vftable + *(int *)(*((_QWORD *)&v57->m_data->__vftable + 1) + 4i64) + 8));
          bdUserDetails::operator=((bdUserDetails *)(&v103.__vftable + 2), (const bdUserDetails *)(&v58->__vftable + 2));
          bdReferencable::operator=((bdReferencable *)&v103.m_user[*(int *)(*(_QWORD *)&v103.m_user[120] + 4i64) + 120], (const bdReferencable *)&v58->m_user[*(int *)(*(_QWORD *)&v58->m_user[120] + 4i64) + 120]);
          bdArray<bdClansGroupMembershipInfo>::operator=(&v103.m_memberships, &v58->m_memberships);
          v103.m_onlineStatus = v58->m_onlineStatus;
        }
        v59 = v92.m_data;
        if ( v92.m_size )
        {
          v60 = 0i64;
          v61 = 0i64;
          v62 = &v92.m_data->__vftable + 1;
          v63 = v92.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v59[v60].__vftable + SHIDWORD((*v62)->serialize) + 8))((__int64)&v59->__vftable + SHIDWORD((*v62)->serialize) + v61 + 8, 0i64);
            v61 += 216i64;
            ++v60;
            v62 += 27;
            --v63;
          }
          while ( v63 );
          v59 = v92.m_data;
        }
        bdMemory::deallocate(v59);
        v92.m_data = NULL;
        *(_QWORD *)&v92.m_capacity = 0i64;
        bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v99);
        v64 = bdClansGroupMemberInfo::getMemberships(&v103, (bdArray<bdClansGroupMembershipInfo> *)&result);
        if ( v25 < v64->m_size )
        {
          v65 = (char *)v64->m_data + (unsigned __int64)v94;
          bdReferencable::operator=((bdReferencable *)&v99.m_group[*(int *)(*((_QWORD *)&v99.__vftable + 1) + 4i64) - 24], (const bdReferencable *)&v65[*(int *)(*((_QWORD *)v65 + 1) + 4i64) + 8]);
          *((_WORD *)&v99.__vftable + 8) = *((_WORD *)v65 + 8);
          bdReferencable::operator=((bdReferencable *)&v99.m_group[*(int *)(*(_QWORD *)v99.m_group + 4i64)], (const bdReferencable *)&v65[*(int *)(*((_QWORD *)v65 + 4) + 4i64) + 32]);
          *(_WORD *)&v99.m_group[8] = *((_WORD *)v65 + 20);
          *(_QWORD *)&v99.m_group[16] = *((_QWORD *)v65 + 6);
          *(_WORD *)&v99.m_group[24] = *((_WORD *)v65 + 28);
          *(_QWORD *)&v99.m_group[32] = *((_QWORD *)v65 + 8);
          v99.m_isActiveGroup = v65[88];
        }
        v66 = result.m_data;
        if ( result.m_size )
        {
          v67 = 0i64;
          v68 = 0i64;
          v69 = &result.m_data->__vftable + 1;
          v70 = result.m_size;
          do
          {
            v71 = (char *)v66 + SHIDWORD((*v69)->serialize);
            (**(void (__fastcall ***)(__int64, _QWORD))&v71[v67 + 8])((__int64)&v71[v68 + 8], 0i64);
            v68 += 112i64;
            v67 += 112i64;
            v69 += 14;
            --v70;
          }
          while ( v70 );
          v66 = result.m_data;
        }
        bdMemory::deallocate(v66);
        result.m_data = NULL;
        *(_QWORD *)&result.m_capacity = 0i64;
        v72 = v100;
        if ( !CL_Mgr_IsControllerMappedToClient(v100->m_controllerIndex, &v97) )
          break;
        v73 = &s_clanPool[v97];
        if ( !v73 )
          break;
        v74 = 0;
        v75 = &s_clanPool[v97];
        while ( v75->clans[0].m_state )
        {
          ++v74;
          v75 = (OnlineClanPool *)((char *)v75 + 3984);
          if ( v74 >= 0xA )
            goto LABEL_54;
        }
        v78 = &v73->clans[v74];
        if ( !v78 )
          break;
        isActiveGroup = bdClansGroupMembershipInfo::isActiveGroup(&v99);
        Group = bdClansGroupMembershipInfo::getGroup(&v99, &v102);
        ID = bdClansGroupIdentifier::getID(Group);
        OnlineClan::Init(v78, v72->m_controllerIndex, ID, v25 == outLocalClientNum[1], isActiveGroup, &Buf);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v102.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)(&v102.m_rootID + 1));
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v99.m_group[8]);
        bdReferencable::~bdReferencable((bdReferencable *)&v99.m_group[40]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v99.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v99.gap59[7]);
        bdArray<bdClansGroupMembershipInfo>::destruct(&v103.m_memberships, v103.m_memberships.m_data, v103.m_memberships.m_size);
        bdMemory::deallocate(v103.m_memberships.m_data);
        v103.m_memberships.m_data = NULL;
        *(_QWORD *)&v103.m_memberships.m_capacity = 0i64;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v103.m_user[128]);
        bdUserDetails::~bdUserDetails((bdUserDetails *)&v103.m_user[112]);
        bdReferencable::~bdReferencable((bdReferencable *)&v103.m_user[128]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v103.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v103.gapC1[7]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)Buf.m_owner.m_value._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)Buf.m_owner.m_value.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)Buf.m_owner.m_value._bytes_48);
        v82 = memchr_0(&Buf.m_uniqueTag, 0, 0x100ui64);
        if ( v82 )
          v83 = v82 - (_BYTE *)&Buf.m_uniqueTag;
        else
          v83 = 256i64;
        bdHandleAssert(v83 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        v84 = memchr_0(&Buf.m_rootID + 1, 0, 0x100ui64);
        if ( v84 )
          v85 = v84 - (_BYTE *)(&Buf.m_rootID + 1);
        else
          v85 = 256i64;
        bdHandleAssert(v85 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)Buf.gap2A8);
        ++v25;
        ++v26;
        v94 = (bdClansGetMembershipsByUsersResponse *)((char *)v94 + 112);
        if ( (unsigned int)v25 >= outLocalClientNum[0] )
          goto LABEL_70;
        p_getGroupInfoResponse = v98;
      }
LABEL_54:
      LODWORD(isActiveOnDemonware) = 10;
      Com_PrintError(14, "[Clan] %s: not processing more clans for controller %i since we are already at max %i\n", "FetchClanInfosComplete", (unsigned int)v72->m_controllerIndex, isActiveOnDemonware);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v99.m_group[8]);
      bdReferencable::~bdReferencable((bdReferencable *)&v99.m_group[40]);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v99.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)&v99.gap59[7]);
      bdClansGroupMemberInfo::`vbase destructor(&v103);
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)Buf.m_owner.m_value._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)Buf.m_owner.m_value.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)Buf.m_owner.m_value._bytes_48);
      v76 = memchr_0(&Buf.m_uniqueTag, 0, 0x100ui64);
      if ( v76 )
        v77 = v76 - (_BYTE *)&Buf.m_uniqueTag;
      else
        v77 = 256i64;
      bdHandleAssert(v77 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
      v86 = memchr_0(&Buf.m_rootID + 1, 0, 0x100ui64);
      if ( v86 )
        v87 = v86 - (_BYTE *)(&Buf.m_rootID + 1);
      else
        v87 = 256i64;
      bdHandleAssert(v87 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)Buf.gap2A8);
    }
LABEL_70:
    v95->state = FETCHED;
  }
}

/*
==============
OnlineClansManager::FetchUserClans
==============
*/
void OnlineClansManager::FetchUserClans(OnlineClansManager *this, const int controllerIndex)
{
  OnlineClanPool *v3; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *MembershipsByUsers; 
  bdRemoteTask *v7; 
  TaskManager *v8; 
  const char *v9; 
  const char *v10; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdClansGetMembershipsByUsersResponse *response; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v16; 
  unsigned __int64 userID[2]; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID userIds; 

  userID[1] = -2i64;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  Live_GetXuid(&result, controllerIndex);
  userID[0] = XUID::ToUint64(&result);
  bdUserAccountID::bdUserAccountID(&userIds, userID);
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v3 = &s_clanPool[outLocalClientNum]) != NULL )
  {
    Instance = DWServicesAccess::GetInstance();
    Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
    MembershipsByUsers = (TaskCreateRequest *)DWClans::getMembershipsByUsers(Clans, &v16, &userIds, 1u, &v3->getMembershipsByUsersResponse);
    if ( MembershipsByUsers != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v7 = *(bdRemoteTask **)&MembershipsByUsers->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v7;
      if ( v7 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v7->m_refCount, 1u);
    }
    if ( v16.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v16.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v16.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v16.m_ptr->~bdReferencable)(v16.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = FetchUserClansComplete;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v8 = TaskManager::GetInstance(), TaskManager::CreateTask(v8, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      v9 = XUID::ToString(&result);
      LODWORD(response) = controllerIndex;
      Com_Printf(14, "[Clan] %s: Successfully started to fetch clan invites for %s (controller %i)\n", "OnlineClansManager::FetchUserClans", v9, response);
      v3->state = FETCHING;
    }
    else
    {
      v10 = XUID::ToDevString(&result);
      Com_PrintError(14, "[Clan] %s: failed to fetch invites for %s\n", "OnlineClansManager::FetchUserClans", v10);
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: failed to fetch invites for controller %d\n", "OnlineClansManager::FetchUserClans", (unsigned int)controllerIndex);
  }
  `eh vector destructor iterator'(&userIds, 0x48ui64, 1ui64, (void (__fastcall *)(void *))bdUserAccountID::`vbase destructor);
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
FetchUserClansComplete
==============
*/
void FetchUserClansComplete(GenericTask *task, eTaskManagerTaskState state)
{
  const dvar_t *v3; 
  __int64 v4; 
  bool v5; 
  OnlineClanPool *v6; 
  bdClansGetMembershipsByUsersResponse *p_getMembershipsByUsersResponse; 
  unsigned int m_size; 
  bdClansGroupMemberInfo *m_data; 
  __int64 v10; 
  __int64 v11; 
  bdClansGroupMemberInfo_vtbl **v12; 
  __int64 v13; 
  bdArray<bdClansGroupMemberInfo> *Memberships; 
  unsigned int v15; 
  bdClansGroupMemberInfo *v16; 
  __int64 v17; 
  __int64 v18; 
  bdClansGroupMemberInfo_vtbl **v19; 
  __int64 v20; 
  unsigned int i; 
  unsigned int v22; 
  bdClansGroupMemberInfo *v23; 
  __int64 v24; 
  __int64 v25; 
  bdClansGroupMemberInfo_vtbl **v26; 
  __int64 v27; 
  char *v28; 
  bdArray<bdClansGroupMembershipInfo> *v29; 
  __int64 v30; 
  bdClansGroupMemberInfo *v31; 
  __int64 v32; 
  __int64 v33; 
  bdClansGroupMemberInfo_vtbl **v34; 
  __int64 v35; 
  unsigned int j; 
  unsigned int v37; 
  bdClansGroupMemberInfo *v38; 
  __int64 v39; 
  __int64 v40; 
  bdClansGroupMemberInfo_vtbl **v41; 
  __int64 v42; 
  GenericTask *v43; 
  OnlineClanPool *v44; 
  unsigned int v45; 
  OnlineClanPool *v46; 
  OnlineClan *v47; 
  bdArray<bdClansGroupMembershipInfo> *v48; 
  __int64 v49; 
  bdClansGroupMemberInfo *v50; 
  __int64 v51; 
  __int64 v52; 
  bdClansGroupMemberInfo_vtbl **v53; 
  __int64 v54; 
  bool isActiveGroup; 
  bool v56; 
  bdClansGroupIdentifier *Group; 
  unsigned __int64 ID; 
  char *fmt; 
  char v60; 
  bdArray<bdClansGroupMemberInfo> result; 
  LocalClientNum_t outLocalClientNum; 
  bdArray<bdClansGroupMemberInfo> v63; 
  GenericTask *v64; 
  OnlineClanPool *v65; 
  bdClansGroupMembershipInfo v66; 
  bdClansGroupMembershipInfo v67; 
  __int64 v68; 
  bdClansGroupMemberInfo value; 

  if ( state == TASKSTATE_SUCCESS )
  {
    v68 = -2i64;
    v64 = task;
    v3 = DVARBOOL_online_clans_vectorized_fetch;
    if ( !DVARBOOL_online_clans_vectorized_fetch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_vectorized_fetch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      Com_Printf(14, "[Clan] %s: using vectorized fetch for clan infos\n", "FetchUserClansComplete");
      FetchClanInfos(task->m_controllerIndex);
    }
    else if ( !CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, &outLocalClientNum) || (v4 = outLocalClientNum, v5 = &s_clanPool[v4] == NULL, v6 = &s_clanPool[v4], v65 = v6, v5) )
    {
      Com_PrintError(14, "[Clan] %s: not processing more clans for controller %i because the controller is not mapped\n", "FetchUserClansComplete", (unsigned int)task->m_controllerIndex);
    }
    else
    {
      p_getMembershipsByUsersResponse = &v6->getMembershipsByUsersResponse;
      m_size = bdClansGetMembershipsByUsersResponse::getMemberships(&v6->getMembershipsByUsersResponse, &result)->m_size;
      m_data = result.m_data;
      if ( result.m_size )
      {
        v10 = 0i64;
        v11 = 0i64;
        v12 = &result.m_data->__vftable + 1;
        v13 = result.m_size;
        do
        {
          (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v12)->serialize) + v10 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v12)->serialize) + v11 + 8, 0i64);
          v11 += 216i64;
          v10 += 216i64;
          v12 += 27;
          --v13;
        }
        while ( v13 );
        m_data = result.m_data;
      }
      bdMemory::deallocate(m_data);
      result.m_data = NULL;
      *(_QWORD *)&result.m_capacity = 0i64;
      if ( m_size != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1060, ASSERT_TYPE_ASSERT, "(pool->getMembershipsByUsersResponse.getMemberships().getSize() == 1)", (const char *)&queryFormat, "pool->getMembershipsByUsersResponse.getMemberships().getSize() == 1") )
        __debugbreak();
      bdClansGroupMemberInfo::bdClansGroupMemberInfo(&value);
      Memberships = bdClansGetMembershipsByUsersResponse::getMemberships(p_getMembershipsByUsersResponse, &v63);
      bdArray<bdClansGroupMemberInfo>::get(Memberships, 0, &value);
      bdArray<bdClansGroupMemberInfo>::~bdArray<bdClansGroupMemberInfo>(&v63);
      v15 = bdClansGroupMemberInfo::getMemberships(&value, (bdArray<bdClansGroupMembershipInfo> *)&result)->m_size;
      v16 = result.m_data;
      if ( result.m_size )
      {
        v17 = 0i64;
        v18 = 0i64;
        v19 = &result.m_data->__vftable + 1;
        v20 = result.m_size;
        do
        {
          (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v16->__vftable + SHIDWORD((*v19)->serialize) + v17 + 8))((__int64)&v16->__vftable + SHIDWORD((*v19)->serialize) + v18 + 8, 0i64);
          v18 += 112i64;
          v17 += 112i64;
          v19 += 14;
          --v20;
        }
        while ( v20 );
        v16 = result.m_data;
      }
      bdMemory::deallocate(v16);
      result.m_data = NULL;
      *(_QWORD *)&result.m_capacity = 0i64;
      if ( v15 > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1066, ASSERT_TYPE_ASSERT, "(info.getMemberships().getSize() <= 10)", (const char *)&queryFormat, "info.getMemberships().getSize() <= CLANS_MAX_JOINED_CLANS") )
        __debugbreak();
      v60 = 0;
      for ( i = 0; ; ++i )
      {
        v22 = bdClansGroupMemberInfo::getMemberships(&value, (bdArray<bdClansGroupMembershipInfo> *)&result)->m_size;
        v23 = result.m_data;
        if ( result.m_size )
        {
          v24 = 0i64;
          v25 = 0i64;
          v26 = &result.m_data->__vftable + 1;
          v27 = result.m_size;
          do
          {
            v28 = (char *)v23 + SHIDWORD((*v26)->serialize);
            (**(void (__fastcall ***)(__int64, _QWORD))&v28[v24 + 8])((__int64)&v28[v25 + 8], 0i64);
            v25 += 112i64;
            v24 += 112i64;
            v26 += 14;
            --v27;
          }
          while ( v27 );
          v23 = result.m_data;
        }
        bdMemory::deallocate(v23);
        result.m_data = NULL;
        *(_QWORD *)&result.m_capacity = 0i64;
        if ( i >= v22 )
          break;
        bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v66);
        v29 = bdClansGroupMemberInfo::getMemberships(&value, (bdArray<bdClansGroupMembershipInfo> *)&v63);
        if ( i < v29->m_size )
        {
          v30 = (__int64)&v29->m_data[i];
          bdReferencable::operator=((bdReferencable *)&v66.m_group[*(int *)(*((_QWORD *)&v66.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v30 + 8) + 4i64) + v30 + 8));
          *((_WORD *)&v66.__vftable + 8) = *(_WORD *)(v30 + 16);
          bdReferencable::operator=((bdReferencable *)&v66.m_group[*(int *)(*(_QWORD *)v66.m_group + 4i64)], (const bdReferencable *)(*(int *)(*(_QWORD *)(v30 + 32) + 4i64) + v30 + 32));
          *(_WORD *)&v66.m_group[8] = *(_WORD *)(v30 + 40);
          *(_QWORD *)&v66.m_group[16] = *(_QWORD *)(v30 + 48);
          *(_WORD *)&v66.m_group[24] = *(_WORD *)(v30 + 56);
          *(_QWORD *)&v66.m_group[32] = *(_QWORD *)(v30 + 64);
          v66.m_isActiveGroup = *(_BYTE *)(v30 + 88);
        }
        v31 = v63.m_data;
        if ( v63.m_size )
        {
          v32 = 0i64;
          v33 = 0i64;
          v34 = &v63.m_data->__vftable + 1;
          v35 = v63.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v31->__vftable + SHIDWORD((*v34)->serialize) + v32 + 8))((__int64)&v31->__vftable + SHIDWORD((*v34)->serialize) + v33 + 8, 0i64);
            v33 += 112i64;
            v32 += 112i64;
            v34 += 14;
            --v35;
          }
          while ( v35 );
          v31 = v63.m_data;
        }
        bdMemory::deallocate(v31);
        v63.m_data = NULL;
        *(_QWORD *)&v63.m_capacity = 0i64;
        if ( bdClansGroupMembershipInfo::isActiveGroup(&v66) )
        {
          v60 = 1;
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v66.m_group[8]);
          bdReferencable::~bdReferencable((bdReferencable *)&v66.m_group[40]);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v66.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)&v66.gap59[7]);
          break;
        }
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v66.m_group[8]);
        bdReferencable::~bdReferencable((bdReferencable *)&v66.m_group[40]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v66.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v66.gap59[7]);
      }
      for ( j = 0; ; ++j )
      {
        v37 = bdClansGroupMemberInfo::getMemberships(&value, (bdArray<bdClansGroupMembershipInfo> *)&v63)->m_size;
        v38 = v63.m_data;
        if ( v63.m_size )
        {
          v39 = 0i64;
          v40 = 0i64;
          v41 = &v63.m_data->__vftable + 1;
          v42 = v63.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v38->__vftable + SHIDWORD((*v41)->serialize) + v39 + 8))((__int64)&v38->__vftable + SHIDWORD((*v41)->serialize) + v40 + 8, 0i64);
            v40 += 112i64;
            v39 += 112i64;
            v41 += 14;
            --v42;
          }
          while ( v42 );
          v38 = v63.m_data;
        }
        bdMemory::deallocate(v38);
        v63.m_data = NULL;
        *(_QWORD *)&v63.m_capacity = 0i64;
        if ( j >= v37 )
          break;
        v43 = v64;
        if ( !CL_Mgr_IsControllerMappedToClient(v64->m_controllerIndex, &outLocalClientNum) )
          goto LABEL_49;
        v44 = &s_clanPool[outLocalClientNum];
        if ( !v44 )
          goto LABEL_49;
        v45 = 0;
        v46 = &s_clanPool[outLocalClientNum];
        while ( v46->clans[0].m_state )
        {
          ++v45;
          v46 = (OnlineClanPool *)((char *)v46 + 3984);
          if ( v45 >= 0xA )
            goto LABEL_49;
        }
        v47 = &v44->clans[v45];
        if ( !v47 )
        {
LABEL_49:
          LODWORD(fmt) = 10;
          Com_PrintError(14, "[Clan] %s: not processing more clans for controller %i since we are already at max %i\n", "FetchUserClansComplete", (unsigned int)v43->m_controllerIndex, fmt);
          break;
        }
        bdClansGroupMembershipInfo::bdClansGroupMembershipInfo(&v67);
        v48 = bdClansGroupMemberInfo::getMemberships(&value, (bdArray<bdClansGroupMembershipInfo> *)&result);
        if ( j < v48->m_size )
        {
          v49 = (__int64)&v48->m_data[j];
          bdReferencable::operator=((bdReferencable *)&v67.m_group[*(int *)(*((_QWORD *)&v67.__vftable + 1) + 4i64) - 24], (const bdReferencable *)(*(int *)(*(_QWORD *)(v49 + 8) + 4i64) + v49 + 8));
          *((_WORD *)&v67.__vftable + 8) = *(_WORD *)(v49 + 16);
          bdReferencable::operator=((bdReferencable *)&v67.m_group[*(int *)(*(_QWORD *)v67.m_group + 4i64)], (const bdReferencable *)(*(int *)(*(_QWORD *)(v49 + 32) + 4i64) + v49 + 32));
          *(_WORD *)&v67.m_group[8] = *(_WORD *)(v49 + 40);
          *(_QWORD *)&v67.m_group[16] = *(_QWORD *)(v49 + 48);
          *(_WORD *)&v67.m_group[24] = *(_WORD *)(v49 + 56);
          *(_QWORD *)&v67.m_group[32] = *(_QWORD *)(v49 + 64);
          v67.m_isActiveGroup = *(_BYTE *)(v49 + 88);
        }
        v50 = result.m_data;
        if ( result.m_size )
        {
          v51 = 0i64;
          v52 = 0i64;
          v53 = &result.m_data->__vftable + 1;
          v54 = result.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v50->__vftable + SHIDWORD((*v53)->serialize) + v51 + 8))((__int64)&v50->__vftable + SHIDWORD((*v53)->serialize) + v52 + 8, 0i64);
            v52 += 112i64;
            v51 += 112i64;
            v53 += 14;
            --v54;
          }
          while ( v54 );
          v50 = result.m_data;
          v43 = v64;
        }
        bdMemory::deallocate(v50);
        result.m_data = NULL;
        *(_QWORD *)&result.m_capacity = 0i64;
        if ( v60 )
        {
          isActiveGroup = bdClansGroupMembershipInfo::isActiveGroup(&v67);
        }
        else
        {
          isActiveGroup = 1;
          v60 = 1;
        }
        v56 = bdClansGroupMembershipInfo::isActiveGroup(&v67);
        Group = bdClansGroupMembershipInfo::getGroup(&v67, (bdClansGroupIdentifier *)&v66);
        ID = bdClansGroupIdentifier::getID(Group);
        OnlineClan::Init(v47, v43->m_controllerIndex, ID, isActiveGroup, v56);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v66.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v66.m_group[16]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v67.m_group[8]);
        bdReferencable::~bdReferencable((bdReferencable *)&v67.m_group[40]);
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v67.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)&v67.gap59[7]);
      }
      v65->state = FETCHED;
      bdClansGroupMemberInfo::`vbase destructor(&value);
    }
  }
}

/*
==============
OnlineClansManager::GetActiveClan
==============
*/
bool OnlineClansManager::GetActiveClan(OnlineClansManager *this, const int controllerIndex, unsigned __int64 *clanIdOut)
{
  OnlineClanPool *v5; 
  bool result; 
  OnlineClan *clanOut; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return 0;
  v5 = &s_clanPool[outLocalClientNum];
  if ( !v5 )
    return 0;
  if ( v5->state != FETCHED )
    return 0;
  clanOut = NULL;
  if ( !OnlineClan_GetActiveClan(controllerIndex, &clanOut) )
    return 0;
  result = 1;
  *clanIdOut = clanOut->m_id;
  return result;
}

/*
==============
OnlineClansManager::GetClanById
==============
*/
OnlineClan *OnlineClansManager::GetClanById(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  OnlineClanPool *v5; 
  unsigned int v6; 
  int *i; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return 0i64;
  v5 = &s_clanPool[outLocalClientNum];
  if ( !v5 || v5->state != FETCHED )
    return 0i64;
  v6 = 0;
  for ( i = &v5->clans[0].m_controllerIndex; id != *((_QWORD *)i + 1) || controllerIndex != *i; i += 996 )
  {
    if ( ++v6 >= 0xA )
      return 0i64;
  }
  return (OnlineClan *)((char *)v5 + 3984 * v6);
}

/*
==============
GetClanInfosForInvites
==============
*/
void GetClanInfosForInvites(const int controllerIndex, const unsigned __int64 *ids, const unsigned int numIds)
{
  ClanInvitePool *v6; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  TaskCreateRequest *ClanInfos; 
  bdRemoteTask *v10; 
  TaskManager *v11; 
  const char *v12; 
  const char *v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v17; 
  XUID result; 
  __int64 v19; 
  TaskCreateResult pTaskCreateResult; 
  LocalClientNum_t outLocalClientNum; 

  v19 = -2i64;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v6 = &s_clanInvitePool[outLocalClientNum]) != NULL )
  {
    if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 718, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
      __debugbreak();
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Live_GetXuid(&result, controllerIndex);
    Instance = DWServicesAccess::GetInstance();
    Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
    ClanInfos = (TaskCreateRequest *)DWClans::getClanInfos(Clans, &v17, ids, numIds, &v6->getGroupInfosResponse);
    if ( ClanInfos != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v10 = *(bdRemoteTask **)&ClanInfos->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v10;
      if ( v10 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v10->m_refCount, 1u);
    }
    if ( v17.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v17.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v17.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v17.m_ptr->~bdReferencable)(v17.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = GetClanInfosForInvitesComplete;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v11 = TaskManager::GetInstance(), TaskManager::CreateTask(v11, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      v6->state = FETCHING;
      v12 = XUID::ToString(&result);
      LODWORD(fmt) = controllerIndex;
      Com_Printf(14, "[Clan] %s: Successfully started to fetch clan invites for %s (controller %i)\n", "GetClanInfosForInvites", v12, fmt);
      TaskCreateRequest::~TaskCreateRequest(&pTaskCreateRequest);
    }
    else
    {
      v13 = XUID::ToDevString(&result);
      Com_PrintError(14, "[Clan] %s: failed to fetch invites for %s\n", "GetClanInfosForInvites", v13);
      v6->state = NOT_FETCHED;
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
  else
  {
    Com_PrintError(14, "[Clan] %s: failed to fetch invites for controller %d\n", "GetClanInfosForInvites", (unsigned int)controllerIndex);
  }
}

/*
==============
GetClanInfosForInvitesComplete
==============
*/
void GetClanInfosForInvitesComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 v3; 
  bool v4; 
  ClanInvitePool *v5; 
  LocalClientNum_t v6; 
  bdClansGetGroupInfosResponse *p_getGroupInfosResponse; 
  unsigned int m_size; 
  bdClansGroupInfo *m_data; 
  __int64 v10; 
  __int64 v11; 
  bdClansGroupInfo_vtbl **v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  bdArray<bdClansGroupInfo> *GroupInfos; 
  __int64 v17; 
  __int64 v20; 
  __int64 v31; 
  bool *v40; 
  bdClansGroupInfo *v41; 
  __int64 v42; 
  __int64 v43; 
  bdClansGroupInfo_vtbl **v44; 
  __int64 v45; 
  _BYTE *v46; 
  unsigned __int64 v47; 
  _BYTE *v48; 
  unsigned __int64 v49; 
  const char *Name; 
  const char *UniqueTag; 
  bdUserAccountID *Owner; 
  unsigned __int64 UserID; 
  const XUID *v54; 
  _BYTE *v55; 
  unsigned __int64 v56; 
  _BYTE *v57; 
  unsigned __int64 v58; 
  LocalClientNum_t outLocalClientNum[2]; 
  bdArray<bdClansGroupInfo> result; 
  bdArray<bdClansGroupInfo> v61; 
  ClanInvitePool *v62; 
  bdClansGetGroupInfosResponse *v63; 
  __int64 v64; 
  __int64 v65; 
  XUID v66; 
  bdClansGroupInfo Buf; 
  bdUserAccountID v68; 

  v65 = -2i64;
  if ( !CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, outLocalClientNum) )
  {
    v5 = NULL;
    goto LABEL_42;
  }
  v3 = outLocalClientNum[0];
  v4 = &s_clanInvitePool[v3] == NULL;
  v5 = &s_clanInvitePool[v3];
  v62 = v5;
  if ( v4 || state )
  {
LABEL_42:
    Com_PrintError(14, "[Clan] %s: failed to get clan infos for invites\n", "GetClanInfosForInvitesComplete");
    if ( v5 )
      v5->state = NOT_FETCHED;
    return;
  }
  v6 = LOCAL_CLIENT_0;
  p_getGroupInfosResponse = &v5->getGroupInfosResponse;
  v63 = &v5->getGroupInfosResponse;
  while ( 1 )
  {
LABEL_5:
    outLocalClientNum[0] = v6;
    m_size = bdClansGetGroupInfosResponse::getGroupInfos(p_getGroupInfosResponse, &result)->m_size;
    m_data = result.m_data;
    if ( result.m_size )
    {
      v10 = 0i64;
      v11 = 0i64;
      v12 = &result.m_data->__vftable + 1;
      v13 = result.m_size;
      do
      {
        (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v12)->serialize) + v10 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v12)->serialize) + v11 + 8, 0i64);
        v11 += 696i64;
        v10 += 696i64;
        v12 += 87;
        --v13;
      }
      while ( v13 );
      m_data = result.m_data;
      v5 = v62;
      v6 = outLocalClientNum[0];
      p_getGroupInfosResponse = v63;
    }
    bdMemory::deallocate(m_data);
    result.m_data = NULL;
    *(_QWORD *)&result.m_capacity = 0i64;
    if ( v6 >= m_size )
      break;
    v14 = 0;
    if ( v5->numInvites )
    {
      while ( 1 )
      {
        v15 = (__int64)v5 + 120 * v14;
        v64 = v15;
        bdClansGroupInfo::bdClansGroupInfo(&Buf);
        GroupInfos = bdClansGetGroupInfosResponse::getGroupInfos(p_getGroupInfosResponse, &v61);
        if ( v6 < GroupInfos->m_size )
        {
          v17 = (__int64)&GroupInfos->m_data[v6];
          bdReferencable::operator=((bdReferencable *)&Buf.m_name[*(int *)(*((_QWORD *)&Buf.__vftable + 1) + 4i64) - 56], (const bdReferencable *)(*(int *)(*(_QWORD *)(v17 + 8) + 4i64) + v17 + 8));
          *((_WORD *)&Buf.__vftable + 8) = *(_WORD *)(v17 + 16);
          *((_QWORD *)&Buf.__vftable + 3) = *(_QWORD *)(v17 + 24);
          Buf.m_rootKind = *(_WORD *)(v17 + 32);
          Buf.m_rootID = *(_QWORD *)(v17 + 40);
          _RAX = v17 + 48;
          _RCX = &Buf.m_rootID + 1;
          v20 = 2i64;
          do
          {
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
            _RCX += 16;
            __asm
            {
              vmovups xmm1, xmmword ptr [rax+70h]
              vmovups xmmword ptr [rcx-10h], xmm1
            }
            _RAX += 128i64;
            --v20;
          }
          while ( v20 );
          _RCX = v17 + 304;
          _RAX = &Buf.m_uniqueTag;
          v31 = 2i64;
          do
          {
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
              vmovups xmm0, xmmword ptr [rcx+60h]
              vmovups xmmword ptr [rax+60h], xmm0
            }
            _RAX = (bdStructFixedSizeString<255> *)((char *)_RAX + 128);
            __asm
            {
              vmovups xmm1, xmmword ptr [rcx+70h]
              vmovups xmmword ptr [rax-10h], xmm1
            }
            _RCX += 128i64;
            --v31;
          }
          while ( v31 );
          Buf.m_privacyLevel = *(_WORD *)(v17 + 560);
          v40 = (bool *)(v17 + 568);
          if ( &Buf.m_owner != (bdStructOptionalObject<bdStructUserAccountID> *)(v17 + 568) )
          {
            Buf.m_owner.m_hasValue = *v40;
            bdUserAccountID::operator=(&Buf.m_owner.m_value, (const bdUserAccountID *)(v17 + 576));
            bdReferencable::operator=((bdReferencable *)&Buf.m_owner.m_value.gap38[*(int *)(*(_QWORD *)&Buf.m_owner.m_value.gap38[8] + 4i64) + 8], (const bdReferencable *)&v40[*(int *)(*(_QWORD *)(v17 + 640) + 4i64) + 72]);
          }
          Buf.m_memberCount = *(_DWORD *)(v17 + 664);
          Buf.m_proposalCount = *(_DWORD *)(v17 + 668);
          Buf.m_createdTimestamp = *(_DWORD *)(v17 + 672);
          Buf.m_onlineMemberCount = *(_DWORD *)(v17 + 676);
        }
        v41 = v61.m_data;
        if ( v61.m_size )
        {
          v42 = 0i64;
          v43 = 0i64;
          v44 = &v61.m_data->__vftable + 1;
          v45 = v61.m_size;
          do
          {
            (**(void (__fastcall ***)(__int64, _QWORD))((char *)&v41->__vftable + SHIDWORD((*v44)->serialize) + v42 + 8))((__int64)&v41->__vftable + SHIDWORD((*v44)->serialize) + v43 + 8, 0i64);
            v43 += 696i64;
            v42 += 696i64;
            v44 += 87;
            --v45;
          }
          while ( v45 );
          v41 = v61.m_data;
          v15 = v64;
          v5 = v62;
          v6 = outLocalClientNum[0];
        }
        bdMemory::deallocate(v41);
        v61.m_data = NULL;
        *(_QWORD *)&v61.m_capacity = 0i64;
        if ( *(_QWORD *)(v15 + 104) == bdClansGroupIdentifier::getID(&Buf) )
          break;
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)Buf.m_owner.m_value._bytes_48);
        bdUserAccountID::~bdUserAccountID((bdUserAccountID *)Buf.m_owner.m_value.gap38);
        bdReferencable::~bdReferencable((bdReferencable *)Buf.m_owner.m_value._bytes_48);
        v46 = memchr_0(&Buf.m_uniqueTag, 0, 0x100ui64);
        if ( v46 )
          v47 = v46 - (_BYTE *)&Buf.m_uniqueTag;
        else
          v47 = 256i64;
        bdHandleAssert(v47 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        v48 = memchr_0(&Buf.m_rootID + 1, 0, 0x100ui64);
        if ( v48 )
          v49 = v48 - (_BYTE *)(&Buf.m_rootID + 1);
        else
          v49 = 256i64;
        bdHandleAssert(v49 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)Buf.gap2A8);
        ++v14;
        p_getGroupInfosResponse = &v5->getGroupInfosResponse;
        if ( v14 >= v5->numInvites )
        {
          ++v6;
          p_getGroupInfosResponse = &v5->getGroupInfosResponse;
          goto LABEL_5;
        }
      }
      Name = bdClansGroupInfo::getName(&Buf);
      Core_strcpy((char *)(v15 + 60), 0x1Fui64, Name);
      UniqueTag = bdClansGroupInfo::getUniqueTag(&Buf);
      Core_strcpy((char *)(v15 + 91), 6ui64, UniqueTag);
      Owner = bdClansGroupInfo::getOwner(&Buf, &v68);
      UserID = bdUserAccountID::getUserID(Owner);
      v54 = XUID::FromUInt64(&v66, UserID);
      XUID::operator=((XUID *)(v15 + 120), v54);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)v68.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)v68.gap38);
      *(_BYTE *)(v15 + 128) = 1;
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)Buf.m_owner.m_value._bytes_48);
      bdUserAccountID::~bdUserAccountID((bdUserAccountID *)Buf.m_owner.m_value.gap38);
      bdReferencable::~bdReferencable((bdReferencable *)Buf.m_owner.m_value._bytes_48);
      v55 = memchr_0(&Buf.m_uniqueTag, 0, 0x100ui64);
      if ( v55 )
        v56 = v55 - (_BYTE *)&Buf.m_uniqueTag;
      else
        v56 = 256i64;
      bdHandleAssert(v56 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
      v57 = memchr_0(&Buf.m_rootID + 1, 0, 0x100ui64);
      if ( v57 )
        v58 = v57 - (_BYTE *)(&Buf.m_rootID + 1);
      else
        v58 = 256i64;
      bdHandleAssert(v58 < 0x100, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<255>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
      bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
      bdReferencable::~bdReferencable((bdReferencable *)Buf.gap2A8);
    }
    ++v6;
    p_getGroupInfosResponse = &v5->getGroupInfosResponse;
  }
  Com_PrintError(14, "[Clan] %s: successfully got clan infos for invites\n", "GetClanInfosForInvitesComplete");
  v5->state = FETCHED;
}

/*
==============
GetClanInvite
==============
*/
OnlineClanInvite *GetClanInvite(const int controllerIndex, const unsigned __int64 id)
{
  ClanInvitePool *v3; 
  unsigned int numInvites; 
  __int64 v5; 
  unsigned __int64 *i; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return 0i64;
  v3 = &s_clanInvitePool[outLocalClientNum];
  if ( !v3 )
    return 0i64;
  numInvites = v3->numInvites;
  v5 = 0i64;
  if ( !numInvites )
    return 0i64;
  for ( i = &v3->invites[0].clanId; *i != id; i += 15 )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= numInvites )
      return 0i64;
  }
  return &v3->invites[v5];
}

/*
==============
OnlineClansManager::GetClanInviteCount
==============
*/
__int64 OnlineClansManager::GetClanInviteCount(OnlineClansManager *this, const int controllerIndex)
{
  ClanInvitePool *v2; 
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v2 = &s_clanInvitePool[outLocalClientNum]) != NULL && v2->state == FETCHED )
    return v2->numInvites;
  else
    return 0i64;
}

/*
==============
OnlineClansManager::GetClanInvites
==============
*/
char OnlineClansManager::GetClanInvites(OnlineClansManager *this, const int controllerIndex, OnlineClanInvite *invitesOut, unsigned int *numInvitesOut)
{
  unsigned int v7; 
  ClanInvitePool *v8; 
  __int64 v9; 
  __int64 v10; 
  OnlineClanInvite *v11; 
  LocalClientNum_t outLocalClientNum; 

  if ( !invitesOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1533, ASSERT_TYPE_ASSERT, "(invitesOut)", (const char *)&queryFormat, "invitesOut") )
    __debugbreak();
  v7 = 0;
  *numInvitesOut = 0;
  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return 0;
  v8 = &s_clanInvitePool[outLocalClientNum];
  if ( !v8 || v8->state != FETCHED )
    return 0;
  if ( v8->numInvites )
  {
    do
    {
      v9 = v7;
      v10 = (__int64)&v8->invites[v9];
      if ( !v8->invites[v9].shouldDecline )
      {
        v11 = &invitesOut[*numInvitesOut];
        XUID::operator=(&v11->inviter, &v8->invites[v9].inviter);
        v11->inviterName[0] = *(_BYTE *)(v10 + 8);
        v11->inviterName[1] = *(_BYTE *)(v10 + 9);
        v11->inviterName[2] = *(_BYTE *)(v10 + 10);
        v11->inviterName[3] = *(_BYTE *)(v10 + 11);
        v11->inviterName[4] = *(_BYTE *)(v10 + 12);
        v11->inviterName[5] = *(_BYTE *)(v10 + 13);
        v11->inviterName[6] = *(_BYTE *)(v10 + 14);
        v11->inviterName[7] = *(_BYTE *)(v10 + 15);
        v11->inviterName[8] = *(_BYTE *)(v10 + 16);
        v11->inviterName[9] = *(_BYTE *)(v10 + 17);
        v11->inviterName[10] = *(_BYTE *)(v10 + 18);
        v11->inviterName[11] = *(_BYTE *)(v10 + 19);
        v11->inviterName[12] = *(_BYTE *)(v10 + 20);
        v11->inviterName[13] = *(_BYTE *)(v10 + 21);
        v11->inviterName[14] = *(_BYTE *)(v10 + 22);
        v11->inviterName[15] = *(_BYTE *)(v10 + 23);
        v11->inviterName[16] = *(_BYTE *)(v10 + 24);
        v11->inviterName[17] = *(_BYTE *)(v10 + 25);
        v11->inviterName[18] = *(_BYTE *)(v10 + 26);
        v11->inviterName[19] = *(_BYTE *)(v10 + 27);
        v11->inviterName[20] = *(_BYTE *)(v10 + 28);
        v11->inviterName[21] = *(_BYTE *)(v10 + 29);
        v11->inviterName[22] = *(_BYTE *)(v10 + 30);
        v11->inviterName[23] = *(_BYTE *)(v10 + 31);
        v11->inviterName[24] = *(_BYTE *)(v10 + 32);
        v11->inviterName[25] = *(_BYTE *)(v10 + 33);
        v11->inviterName[26] = *(_BYTE *)(v10 + 34);
        v11->inviterName[27] = *(_BYTE *)(v10 + 35);
        v11->inviterName[28] = *(_BYTE *)(v10 + 36);
        v11->inviterName[29] = *(_BYTE *)(v10 + 37);
        v11->inviterName[30] = *(_BYTE *)(v10 + 38);
        v11->inviterName[31] = *(_BYTE *)(v10 + 39);
        v11->inviterName[32] = *(_BYTE *)(v10 + 40);
        v11->inviterName[33] = *(_BYTE *)(v10 + 41);
        v11->inviterName[34] = *(_BYTE *)(v10 + 42);
        v11->inviterName[35] = *(_BYTE *)(v10 + 43);
        v11->clanName[0] = *(_BYTE *)(v10 + 44);
        v11->clanName[1] = *(_BYTE *)(v10 + 45);
        v11->clanName[2] = *(_BYTE *)(v10 + 46);
        v11->clanName[3] = *(_BYTE *)(v10 + 47);
        v11->clanName[4] = *(_BYTE *)(v10 + 48);
        v11->clanName[5] = *(_BYTE *)(v10 + 49);
        v11->clanName[6] = *(_BYTE *)(v10 + 50);
        v11->clanName[7] = *(_BYTE *)(v10 + 51);
        v11->clanName[8] = *(_BYTE *)(v10 + 52);
        v11->clanName[9] = *(_BYTE *)(v10 + 53);
        v11->clanName[10] = *(_BYTE *)(v10 + 54);
        v11->clanName[11] = *(_BYTE *)(v10 + 55);
        v11->clanName[12] = *(_BYTE *)(v10 + 56);
        v11->clanName[13] = *(_BYTE *)(v10 + 57);
        v11->clanName[14] = *(_BYTE *)(v10 + 58);
        v11->clanName[15] = *(_BYTE *)(v10 + 59);
        v11->clanName[16] = *(_BYTE *)(v10 + 60);
        v11->clanName[17] = *(_BYTE *)(v10 + 61);
        v11->clanName[18] = *(_BYTE *)(v10 + 62);
        v11->clanName[19] = *(_BYTE *)(v10 + 63);
        v11->clanName[20] = *(_BYTE *)(v10 + 64);
        v11->clanName[21] = *(_BYTE *)(v10 + 65);
        v11->clanName[22] = *(_BYTE *)(v10 + 66);
        v11->clanName[23] = *(_BYTE *)(v10 + 67);
        v11->clanName[24] = *(_BYTE *)(v10 + 68);
        v11->clanName[25] = *(_BYTE *)(v10 + 69);
        v11->clanName[26] = *(_BYTE *)(v10 + 70);
        v11->clanName[27] = *(_BYTE *)(v10 + 71);
        v11->clanName[28] = *(_BYTE *)(v10 + 72);
        v11->clanName[29] = *(_BYTE *)(v10 + 73);
        v11->clanName[30] = *(_BYTE *)(v10 + 74);
        v11->clanTag[0] = *(_BYTE *)(v10 + 75);
        v11->clanTag[1] = *(_BYTE *)(v10 + 76);
        v11->clanTag[2] = *(_BYTE *)(v10 + 77);
        v11->clanTag[3] = *(_BYTE *)(v10 + 78);
        v11->clanTag[4] = *(_BYTE *)(v10 + 79);
        v11->clanTag[5] = *(_BYTE *)(v10 + 80);
        v11->clanId = *(_QWORD *)(v10 + 88);
        v11->sentTimestamp = *(_QWORD *)(v10 + 96);
        XUID::operator=(&v11->clanOwner, (const XUID *)(v10 + 104));
        v11->dataFetched = *(_BYTE *)(v10 + 112);
        v11->shouldDecline = *(_BYTE *)(v10 + 113);
        ++*numInvitesOut;
      }
      ++v7;
    }
    while ( v7 < v8->numInvites );
  }
  return 1;
}

/*
==============
GetClanPoolForController
==============
*/
OnlineClanPool *GetClanPoolForController(const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return &s_clanPool[outLocalClientNum];
  else
    return 0i64;
}

/*
==============
GetIdleClan
==============
*/
OnlineClan *GetIdleClan(const int controllerIndex)
{
  OnlineClanPool *v1; 
  int v2; 
  OnlineClanPool *i; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
    return 0i64;
  v1 = &s_clanPool[outLocalClientNum];
  if ( !v1 )
    return 0i64;
  v2 = 0;
  for ( i = &s_clanPool[outLocalClientNum]; i->clans[0].m_state; i = (OnlineClanPool *)((char *)i + 3984) )
  {
    if ( (unsigned int)++v2 >= 0xA )
      return 0i64;
  }
  return (OnlineClan *)((char *)v1 + 3984 * v2);
}

/*
==============
OnlineClansManager::GetIncomingClanInvites
==============
*/
void OnlineClansManager::GetIncomingClanInvites(OnlineClansManager *this, const int controllerIndex)
{
  ClanInvitePool *v3; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  const bdUserAccountID *v6; 
  TaskCreateRequest *IncomingClanInvites; 
  bdRemoteTask *v8; 
  TaskManager *v9; 
  const char *v10; 
  const char *v11; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> v15; 
  unsigned __int64 userID[3]; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v18; 
  LocalClientNum_t outLocalClientNum; 
  XUID result; 

  userID[1] = -2i64;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v3 = &s_clanInvitePool[outLocalClientNum]) != NULL )
  {
    if ( v3->state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 911, ASSERT_TYPE_ASSERT, "(invitePool->state == OnlineClansManagerFetchState::NOT_FETCHED)", (const char *)&queryFormat, "invitePool->state == OnlineClansManagerFetchState::NOT_FETCHED") )
      __debugbreak();
    *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
    memset(&pTaskCreateRequest.m_appData, 0, 48);
    pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
    pTaskCreateRequest.m_timeoutInSeconds = 0;
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    Live_GetXuid(&result, controllerIndex);
    Instance = DWServicesAccess::GetInstance();
    Clans = DWServicesAccess::GetClans(Instance, controllerIndex);
    userID[0] = XUID::ToUint64(&result);
    bdUserAccountID::bdUserAccountID(&v18, userID);
    IncomingClanInvites = (TaskCreateRequest *)DWClans::getIncomingClanInvites(Clans, &v15, v6, &v3->getMembershipProposalsByUserResponse);
    if ( IncomingClanInvites != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      v8 = *(bdRemoteTask **)&IncomingClanInvites->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v8;
      if ( v8 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v8->m_refCount, 1u);
    }
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    pTaskCreateRequest.m_onCompletionCallback = GetIncomingClanInvitesComplete;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v9 = TaskManager::GetInstance(), TaskManager::CreateTask(v9, &pTaskCreateRequest, &pTaskCreateResult)) )
    {
      v10 = XUID::ToString(&result);
      LODWORD(fmt) = controllerIndex;
      Com_Printf(14, "[Clan] %s: Successfully started to fetch clan invites for %s (controller %i)\n", "OnlineClansManager::GetIncomingClanInvites", v10, fmt);
      v3->state = FETCHING;
    }
    else
    {
      v11 = XUID::ToDevString(&result);
      Com_PrintError(14, "[Clan] %s: failed to fetch invites for %s\n", "OnlineClansManager::GetIncomingClanInvites", v11);
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
    Com_PrintError(14, "[Clan] %s: failed to fetch invites for controller %d\n", "OnlineClansManager::GetIncomingClanInvites", (unsigned int)controllerIndex);
  }
}

/*
==============
GetIncomingClanInvitesComplete
==============
*/
void GetIncomingClanInvitesComplete(GenericTask *task, eTaskManagerTaskState state)
{
  LocalClientNum_t v4; 
  __int64 v5; 
  bool v6; 
  ClanInvitePool *v7; 
  bdClansGetMembershipProposalsByUserResponse *p_getMembershipProposalsByUserResponse; 
  bdArray<bdClansGroupMembershipProposal> *Proposals; 
  LocalClientNum_t m_size; 
  unsigned __int64 v11; 
  unsigned int v12; 
  bdClansGroupMembershipProposal *v13; 
  bdArray<bdClansGroupMembershipProposal> *v14; 
  char *v15; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  bdClansGroupMembershipProposal *m_data; 
  __int64 v20; 
  __int64 v21; 
  bdClansGroupMembershipProposal_vtbl **v22; 
  __int64 v23; 
  __int64 v26; 
  ClansNotifications *v32; 
  int m_controllerIndex; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  unsigned __int64 v36; 
  unsigned __int64 TransactionID; 
  LocalClientNum_t outLocalClientNum[2]; 
  bdArray<bdClansGroupMembershipProposal> result; 
  bdClansGroupMembershipProposal *v40; 
  bdClansGetMembershipProposalsByUserResponse *v41; 
  ClanInvitePool *v42; 
  __int64 v43; 
  bdClansGroupMembershipProposal v44; 
  bdClansGroupMembershipProposal v45; 

  v43 = -2i64;
  v4 = LOCAL_CLIENT_0;
  outLocalClientNum[0] = LOCAL_CLIENT_0;
  if ( !CL_Mgr_IsControllerMappedToClient(task->m_controllerIndex, &outLocalClientNum[1]) || (v5 = outLocalClientNum[1], v6 = &s_clanInvitePool[v5] == NULL, v7 = &s_clanInvitePool[v5], v42 = v7, v6) )
  {
    TransactionID = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
    Com_PrintError(14, "[Clan] %s: Failed to receive clan invite(s) for controller %d, tid %zu\n", "GetIncomingClanInvitesComplete", (unsigned int)task->m_controllerIndex, TransactionID);
  }
  else
  {
    v7->numInvites = 0;
    if ( state )
    {
      v36 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      Com_PrintError(14, "[Clan] %s: Failed to receive clan invite(s), tid %zu\n", "GetIncomingClanInvitesComplete", v36);
      v7->state = NOT_FETCHED;
    }
    else
    {
      p_getMembershipProposalsByUserResponse = &v7->getMembershipProposalsByUserResponse;
      v41 = &v7->getMembershipProposalsByUserResponse;
      Proposals = bdClansGetMembershipProposalsByUserResponse::getProposals(&v7->getMembershipProposalsByUserResponse, &result);
      m_size = 10;
      if ( (int)Proposals->m_size < 10 )
        m_size = Proposals->m_size;
      outLocalClientNum[1] = m_size;
      bdArray<bdClansGroupMembershipProposal>::~bdArray<bdClansGroupMembershipProposal>(&result);
      v11 = bdRemoteTask::getTransactionID(task->m_remoteDemonwareTask.m_ptr);
      Com_Printf(14, "[Clan] %s: Received %i clan invite(s), tid %zu\n", "GetIncomingClanInvitesComplete", (unsigned int)m_size, v11);
      v12 = 0;
      if ( m_size )
      {
        v13 = NULL;
        v40 = NULL;
        do
        {
          bdClansGroupMembershipProposal::bdClansGroupMembershipProposal(&v45);
          v14 = bdClansGetMembershipProposalsByUserResponse::getProposals(p_getMembershipProposalsByUserResponse, &result);
          if ( v12 < v14->m_size )
          {
            v15 = (char *)v13 + (unsigned __int64)v14->m_data;
            bdReferencable::operator=((bdReferencable *)&v45.m_proposingUser[*(int *)(*((_QWORD *)&v45.__vftable + 1) + 4i64) - 24], (const bdReferencable *)&v15[*(int *)(*((_QWORD *)v15 + 1) + 4i64) + 8]);
            bdUserDetails::operator=((bdUserDetails *)(&v45.__vftable + 2), (const bdUserDetails *)(v15 + 16));
            bdReferencable::operator=((bdReferencable *)&v45.m_proposingUser[*(int *)(*(_QWORD *)&v45.m_proposingUser[120] + 4i64) + 120], (const bdReferencable *)&v15[*(int *)(*((_QWORD *)v15 + 19) + 4i64) + 152]);
            bdUserDetails::operator=(&v45.m_targetUser, (const bdUserDetails *)(v15 + 176));
            bdReferencable::operator=((bdReferencable *)&v45.m_targetUser.gap79[*(int *)(*(_QWORD *)&v45.m_targetUser.gap79[15] + 4i64) + 15], (const bdReferencable *)&v15[*(int *)(*((_QWORD *)v15 + 39) + 4i64) + 312]);
            v45.m_role = *((_WORD *)v15 + 168);
            bdReferencable::operator=((bdReferencable *)((char *)&v45.m_group.__vftable + *(int *)(*((_QWORD *)&v45.m_group.__vftable + 1) + 4i64) + 8), (const bdReferencable *)&v15[*(int *)(*((_QWORD *)v15 + 44) + 4i64) + 352]);
            *((_WORD *)&v45.m_group.__vftable + 8) = *((_WORD *)v15 + 180);
            *((_QWORD *)&v45.m_group.__vftable + 3) = *((_QWORD *)v15 + 46);
            v45.m_group.m_rootKind = *((_WORD *)v15 + 188);
            v45.m_group.m_rootID = *((_QWORD *)v15 + 48);
            v45.m_replacesGroupID = *((_QWORD *)v15 + 51);
            v45.m_attachmentSize = *((_DWORD *)v15 + 104);
            v16 = 0i64;
            v17 = v15 - (char *)v45.m_attachment;
            do
            {
              v18 = &v45.m_attachment[v16];
              *v18 = v18[v17 + 420];
              v18[1] = v45.m_attachment[v16 + 421 + v17];
              v16 += 2i64;
            }
            while ( v16 < 0x400 );
            v45.m_updatedTimestamp = *((_QWORD *)v15 + 181);
            v4 = outLocalClientNum[0];
          }
          m_data = result.m_data;
          if ( result.m_size )
          {
            v20 = 0i64;
            v21 = 0i64;
            v22 = &result.m_data->__vftable + 1;
            v23 = result.m_size;
            do
            {
              (**(void (__fastcall ***)(__int64, _QWORD))((char *)&m_data->__vftable + SHIDWORD((*v22)->serialize) + v20 + 8))((__int64)&m_data->__vftable + SHIDWORD((*v22)->serialize) + v21 + 8, 0i64);
              v21 += 1472i64;
              v20 += 1472i64;
              v22 += 184;
              --v23;
            }
            while ( v23 );
            m_data = result.m_data;
            v13 = v40;
            v4 = outLocalClientNum[0];
            m_size = outLocalClientNum[1];
          }
          bdMemory::deallocate(m_data);
          result.m_data = NULL;
          *(_QWORD *)&result.m_capacity = 0i64;
          v40 = &v44;
          *((_QWORD *)&v44.__vftable + 1) = &bdClansGroupMembershipProposal::`vbtable';
          bdReferencable::bdReferencable((bdReferencable *)(&v44.m_updatedTimestamp + 1), (const bdReferencable *)&v45.m_proposingUser[*(int *)(*((_QWORD *)&v45.__vftable + 1) + 4i64) - 24]);
          v4 |= 1u;
          outLocalClientNum[0] = v4;
          bdStructBufferSerializable::bdStructBufferSerializable(&v44, &v45);
          v44.__vftable = (bdClansGroupMembershipProposal_vtbl *)&bdClansGroupMembershipProposal::`vftable'{for `bdStructBufferSerializable'};
          *(_QWORD *)&v44.m_proposingUser[*(int *)(*((_QWORD *)&v44.__vftable + 1) + 4i64) - 24] = &bdClansGroupMembershipProposal::`vftable'{for `bdReferencable'};
          bdStructUserDetails::bdStructUserDetails((bdStructUserDetails *)(&v44.__vftable + 2), (const bdStructUserDetails *)(&v45.__vftable + 2));
          bdStructUserDetails::bdStructUserDetails(&v44.m_targetUser, &v45.m_targetUser);
          v44.m_role = v45.m_role;
          bdClansGroupIdentifier::bdClansGroupIdentifier(&v44.m_group, &v45.m_group);
          v44.m_replacesGroupID = v45.m_replacesGroupID;
          v44.m_attachmentSize = v45.m_attachmentSize;
          _RCX = v44.m_attachment;
          _RAX = v45.m_attachment;
          v26 = 8i64;
          do
          {
            __asm
            {
              vmovups ymm0, ymmword ptr [rax]
              vmovups ymmword ptr [rcx], ymm0
              vmovups ymm0, ymmword ptr [rax+20h]
              vmovups ymmword ptr [rcx+20h], ymm0
              vmovups ymm0, ymmword ptr [rax+40h]
              vmovups ymmword ptr [rcx+40h], ymm0
              vmovups xmm0, xmmword ptr [rax+60h]
              vmovups xmmword ptr [rcx+60h], xmm0
            }
            _RCX += 128;
            __asm
            {
              vmovups xmm1, xmmword ptr [rax+70h]
              vmovups xmmword ptr [rcx-10h], xmm1
            }
            _RAX += 128;
            --v26;
          }
          while ( v26 );
          v44.m_updatedTimestamp = v45.m_updatedTimestamp;
          CacheIncomingInvite(task->m_controllerIndex, &v44);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v45.m_group.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)(&v45.m_group.m_rootID + 1));
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)v45.m_targetUser._bytes_90);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&v45.m_targetUser.gap79[7]);
          bdReferencable::~bdReferencable((bdReferencable *)v45.m_targetUser._bytes_90);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)&v45.m_proposingUser[128]);
          bdUserDetails::~bdUserDetails((bdUserDetails *)&v45.m_proposingUser[112]);
          bdReferencable::~bdReferencable((bdReferencable *)&v45.m_proposingUser[128]);
          bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&v45.__vftable + 2));
          bdReferencable::~bdReferencable((bdReferencable *)(&v45.m_updatedTimestamp + 1));
          ++v12;
          v40 = ++v13;
          p_getMembershipProposalsByUserResponse = v41;
        }
        while ( v12 < m_size );
        v7 = v42;
      }
      v7->state = FETCHED;
      v32 = &s_clanNotifications[CL_Mgr_GetClientFromController(task->m_controllerIndex)];
      m_controllerIndex = task->m_controllerIndex;
      Instance = DWServicesAccess::GetInstance();
      Clans = DWServicesAccess::GetClans(Instance, m_controllerIndex);
      if ( DWClans::registerEventHandler(Clans, v32) )
      {
        v32->m_controllerIndex = m_controllerIndex;
        v32->m_initialized = 1;
      }
    }
  }
}

/*
==============
OnlineClansManager::GetInstance
==============
*/
OnlineClansManager *OnlineClansManager::GetInstance()
{
  return &OnlineClansManager::s_instance;
}

/*
==============
OnlineClansManager::GetInstancePtr
==============
*/
OnlineClansManager *OnlineClansManager::GetInstancePtr()
{
  return &OnlineClansManager::s_instance;
}

/*
==============
OnlineClansManager::GetJoinedClans
==============
*/
char OnlineClansManager::GetJoinedClans(OnlineClansManager *this, const int controllerIndex, unsigned __int64 *idsBuffer, const unsigned int bufferSize, unsigned int *numIdsOut)
{
  OnlineClanPool *v8; 
  unsigned int *v9; 
  unsigned __int64 *p_m_id; 
  unsigned int v11; 
  LocalClientNum_t outLocalClientNum; 

  if ( !idsBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1424, ASSERT_TYPE_ASSERT, "(idsBuffer)", (const char *)&queryFormat, "idsBuffer") )
    __debugbreak();
  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || (v8 = &s_clanPool[outLocalClientNum]) == NULL )
  {
    Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::GetJoinedClans", (unsigned int)controllerIndex);
    return 0;
  }
  if ( v8->state != FETCHED )
  {
    Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i\n", "OnlineClansManager::GetJoinedClans", (unsigned int)controllerIndex);
    return 0;
  }
  if ( bufferSize > 0xA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1439, ASSERT_TYPE_ASSERT, "(bufferSize <= ( sizeof( *array_counter( pool->clans ) ) + 0 ))", (const char *)&queryFormat, "bufferSize <= ARRAY_COUNT( pool->clans )") )
    __debugbreak();
  v9 = numIdsOut;
  p_m_id = &v8->clans[0].m_id;
  v11 = 0;
  *numIdsOut = 0;
  do
  {
    if ( *v9 == bufferSize )
      break;
    if ( controllerIndex == *((_DWORD *)p_m_id - 2) )
    {
      if ( *((_DWORD *)p_m_id - 4) )
        idsBuffer[(*v9)++] = *p_m_id;
    }
    ++v11;
    p_m_id += 498;
  }
  while ( v11 < 0xA );
  return 1;
}

/*
==============
OnlineClansManager::InviteMemberByName
==============
*/
char OnlineClansManager::InviteMemberByName(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id, const char *name, const ClientPlatform platform)
{
  OnlineClanPool *v9; 
  OnlineClan *ClanById; 
  const char *AccountTypeString; 
  const char *v12; 
  LocalClientNum_t outLocalClientNum; 
  DWUsernameSearch::SearchRequest searchRequest; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v9 = &s_clanPool[outLocalClientNum]) != NULL )
  {
    if ( v9->state == FETCHED )
    {
      ClanById = OnlineClansManager::GetClanById(this, controllerIndex, id);
      if ( ClanById )
      {
        AccountTypeString = dwPlatformTypes_GetAccountTypeString((const ClientPlatform)(unsigned __int8)platform);
        v12 = "uno";
        if ( AccountTypeString )
          v12 = AccountTypeString;
        Com_Printf(14, "[Clan] %s: Searching for player %s (provider: %s) on Demonware\n", "OnlineClansManager::InviteMemberByName", name, v12);
        searchRequest.username = name;
        searchRequest.callback = InviteMemberByNameCallback;
        searchRequest.accountProvider = v12;
        searchRequest.maxResults = 1;
        searchRequest.subStringSearch = 0;
        if ( DWUsernameSearch::Search(&s_userNameSearchData.userNameSearch, controllerIndex, &searchRequest) )
        {
          s_userNameSearchData.clan = ClanById;
          return 1;
        }
      }
      else
      {
        Com_PrintError(14, "[Clan] %s: invalid clan id %zu\n", "OnlineClansManager::InviteMemberByName", id);
      }
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i\n", "OnlineClansManager::InviteMemberByName", (unsigned int)controllerIndex);
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::InviteMemberByName", (unsigned int)controllerIndex);
  }
  return 0;
}

/*
==============
InviteMemberByNameCallback
==============
*/
void InviteMemberByNameCallback(const int controllerIndex, const bool success, const bdCrossPlatformUser *results, const unsigned int numResults)
{
  unsigned int i; 
  __int64 v6; 
  const char *v7; 
  bdCrossPlatformAccount *v8; 
  const char *AccountType; 
  signed __int64 v10; 
  char v11; 
  __int64 v12; 
  char v13; 
  unsigned __int64 AccountID; 
  const char *UserName; 
  unsigned __int64 v16; 
  const XUID *v17; 
  XUID result; 
  XUID v19; 

  if ( success && numResults )
  {
    if ( numResults != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1585, ASSERT_TYPE_SANITY, "( numResults == 1 )", (const char *)&queryFormat, "numResults == 1") )
      __debugbreak();
    XUID::NullXUID(&result);
    for ( i = 0; i < bdCrossPlatformUser::getNumberOfAccounts((bdCrossPlatformUser *)results); ++i )
    {
      v6 = 0x7FFFFFFFi64;
      v7 = "uno";
      v8 = (bdCrossPlatformAccount *)&bdCrossPlatformUser::getAccounts((bdCrossPlatformUser *)results)[i];
      AccountType = bdCrossPlatformAccount::getAccountType(v8);
      if ( !AccountType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v10 = AccountType - "uno";
      while ( 1 )
      {
        v11 = v7[v10];
        v12 = v6;
        v13 = *v7++;
        --v6;
        if ( !v12 )
        {
LABEL_14:
          AccountID = bdCrossPlatformAccount::getAccountID(v8);
          UserName = bdCrossPlatformAccount::getUserName(v8);
          Com_Printf(14, "[Clan] %s: Found player %s, XUID: %zu\n", "InviteMemberByNameCallback", UserName, AccountID);
          v16 = bdCrossPlatformAccount::getAccountID(v8);
          v17 = XUID::FromUniversalId(&v19, v16);
          XUID::operator=(&result, v17);
          goto LABEL_15;
        }
        if ( v11 != v13 )
          break;
        if ( !v11 )
          goto LABEL_14;
      }
    }
LABEL_15:
    if ( !XUID::IsValid(&result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1600, ASSERT_TYPE_SANITY, "( resultXuid.IsValid() )", (const char *)&queryFormat, "resultXuid.IsValid()") )
      __debugbreak();
    OnlineClan::InviteMember(s_userNameSearchData.clan, result);
  }
  else
  {
    Com_Printf(14, "[Clan] %s: Couldn't find player\n", "InviteMemberByNameCallback");
  }
}

/*
==============
OnlineClansManager::OnClanDataChannelMessage
==============
*/
void OnlineClansManager::OnClanDataChannelMessage(OnlineClansManager *this, unsigned __int64 channelID, unsigned __int64 senderID, char *senderName, unsigned int chatMessageType, void *message, unsigned int messageSize)
{
  const XUID *v8; 
  XUID result; 

  v8 = XUID::FromUniversalId(&result, senderID);
  OnlineClan_ReceiveClanDataNotification(channelID, chatMessageType, (const XUID)v8->m_id, message, messageSize);
}

/*
==============
RemoveClanInvite
==============
*/
void RemoveClanInvite(const int controllerIndex, const unsigned __int64 clanId)
{
  ClanInvitePool *v4; 
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v4 = &s_clanInvitePool[outLocalClientNum]) != NULL )
  {
    if ( v4->numInvites )
    {
      if ( GetClanInvite(controllerIndex, clanId) )
      {
        if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
          _RBX = &s_clanInvitePool[outLocalClientNum];
        else
          _RBX = NULL;
        _RCX = 120i64 * (_RBX->numInvites - 1);
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+rbx+10h]
          vmovups ymmword ptr [rdi], ymm0
          vmovups ymm1, ymmword ptr [rcx+rbx+30h]
          vmovups ymmword ptr [rdi+20h], ymm1
          vmovups ymm0, ymmword ptr [rcx+rbx+50h]
          vmovups ymmword ptr [rdi+40h], ymm0
          vmovups xmm1, xmmword ptr [rcx+rbx+70h]
          vmovups xmmword ptr [rdi+60h], xmm1
          vmovsd  xmm0, qword ptr [rcx+rbx+80h]
          vmovsd  qword ptr [rdi+70h], xmm0
        }
        memset_0(&_RBX->invites[_RBX->numInvites - 1], 0, sizeof(_RBX->invites[_RBX->numInvites - 1]));
        --_RBX->numInvites;
        Com_Printf(14, "[Clan] %s: Sucessfully declined invite for %zu\n", "RemoveClanInvite", clanId);
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1289, ASSERT_TYPE_ASSERT, "(invite)", (const char *)&queryFormat, "invite") )
      {
        __debugbreak();
      }
    }
    else
    {
      Com_PrintError(14, "[Clan] Couldn't process clan invite to remove because our invite list is empty\n");
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] Couldn't process clan invite to remove because the controller %d is not mapped\n", (unsigned int)controllerIndex);
  }
}

/*
==============
OnlineClansManager::ResetForController
==============
*/
void OnlineClansManager::ResetForController(OnlineClansManager *this, const int controllerIndex)
{
  const dvar_t *v3; 
  OnlineClanPool *v4; 
  unsigned int i; 
  ClanInvitePool *v6; 
  ClansNotifications *v7; 
  DWServicesAccess *Instance; 
  DWClans *Clans; 
  LocalClientNum_t v10; 
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
  {
    v3 = DVARBOOL_online_clans_enabled;
    if ( !DVARBOOL_online_clans_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_clans_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
    {
      if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v10) )
      {
        v4 = &s_clanPool[v10];
        if ( v4 )
        {
LABEL_12:
          for ( i = 0; i < 0xA; ++i )
          {
            if ( v4->clans[0].m_state )
              OnlineClan::Uninit(v4->clans);
            v4 = (OnlineClanPool *)((char *)v4 + 3984);
          }
          if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &v10) )
            v6 = &s_clanInvitePool[v10];
          else
            v6 = NULL;
          *(_QWORD *)&v6->state = 0i64;
          v6->dirtyInfo = 0;
          memset_0(v6->invites, 0, sizeof(v6->invites));
          v7 = &s_clanNotifications[CL_Mgr_GetClientFromController(controllerIndex)];
          if ( v7->m_initialized )
          {
            Instance = DWServicesAccess::GetInstance();
            Clans = DWServicesAccess::GetClans(Instance, v7->m_controllerIndex);
            DWClans::unregisterEventHandler(Clans, v7);
            v7->m_controllerIndex = -1;
            v7->m_initialized = 0;
          }
          return;
        }
      }
      else
      {
        v4 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 500, ASSERT_TYPE_ASSERT, "(pool != nullptr)", (const char *)&queryFormat, "pool != nullptr") )
        __debugbreak();
      goto LABEL_12;
    }
  }
}

/*
==============
OnlineClansManager::SetActiveClan
==============
*/
char OnlineClansManager::SetActiveClan(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 clanId)
{
  OnlineClanPool *v6; 
  OnlineClan *ClanById; 
  OnlineClan *clanOut; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || (v6 = &s_clanPool[outLocalClientNum]) == NULL )
  {
    Com_PrintError(14, "[Clan] %s: can't set active clan ID because the controller %i is not mapped\n", "OnlineClansManager::SetActiveClan", (unsigned int)controllerIndex);
    return 0;
  }
  if ( v6->state != FETCHED )
  {
    Com_PrintError(14, "[Clan] %s: can't set active clan ID because we have not finished fetching out clan info (controller %i)\n", "OnlineClansManager::SetActiveClan", (unsigned int)controllerIndex);
    return 0;
  }
  ClanById = OnlineClansManager::GetClanById(this, controllerIndex, clanId);
  if ( !ClanById )
  {
    Com_PrintError(14, "[Clan] %s: can't set active clan ID %zu because it doesn't exist (controller %i)\n", "OnlineClansManager::SetActiveClan", clanId, controllerIndex);
    return 0;
  }
  clanOut = NULL;
  if ( OnlineClan_GetActiveClan(controllerIndex, &clanOut) )
  {
    if ( clanOut == ClanById )
    {
      Com_Printf(14, "[Clan] %s: clan is already activating (clan %zu) (controller %i)\n", "OnlineClansManager::SetActiveClan", clanOut->m_id, controllerIndex);
      return 1;
    }
    if ( clanOut->m_state == QOSING )
    {
      Com_PrintError(14, "[Clan] %s: another clan is still activating (clan %zu) (controller %i)\n", "OnlineClansManager::SetActiveClan", clanOut->m_id, controllerIndex);
      return 0;
    }
    OnlineClan::Deactivate(clanOut);
  }
  OnlineClan::Activate(ClanById);
  return 1;
}

/*
==============
OnlineClansManager::SetAllInvitesToBeDeclined
==============
*/
char OnlineClansManager::SetAllInvitesToBeDeclined(OnlineClansManager *this, const int controllerIndex)
{
  ClanInvitePool *v3; 
  unsigned int i; 
  __int64 v5; 
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && (v3 = &s_clanInvitePool[outLocalClientNum]) != NULL )
  {
    for ( i = 0; i < v3->numInvites; v3->invites[v5].shouldDecline = 1 )
      v5 = i++;
    return 1;
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: invite pool is null for controller %i\n", "OnlineClansManager::SetAllInvitesToBeDeclined", (unsigned int)controllerIndex);
    return 0;
  }
}

/*
==============
OnlineClansManager::SetShouldDeclineClanInvite
==============
*/
char OnlineClansManager::SetShouldDeclineClanInvite(OnlineClansManager *this, const int controllerIndex, const unsigned __int64 id)
{
  ClanInvitePool *v5; 
  unsigned int numInvites; 
  unsigned int v7; 
  LocalClientNum_t outLocalClientNum; 

  if ( !CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) || (v5 = &s_clanInvitePool[outLocalClientNum]) == NULL )
  {
    Com_PrintError(14, "[Clan] %s: invite pool is null for controller %i\n", "OnlineClansManager::SetShouldDeclineClanInvite", (unsigned int)controllerIndex);
    return 0;
  }
  numInvites = v5->numInvites;
  v7 = 0;
  if ( !numInvites )
    return 0;
  while ( v5->invites[0].clanId != id )
  {
    ++v7;
    v5 = (ClanInvitePool *)((char *)v5 + 120);
    if ( v7 >= numInvites )
      return 0;
  }
  v5->invites[0].shouldDecline = 1;
  return 1;
}

/*
==============
TestAcceptInvite
==============
*/
void TestAcceptInvite(void)
{
  int v0; 

  v0 = Cmd_ArgInt(1);
  if ( !OnlineClansManager::AcceptClanInvite(&OnlineClansManager::s_instance, 0, v0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1754, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestCancelInvite
==============
*/
void TestCancelInvite(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  OnlineClan *ClanById; 
  XUID result; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgUInt64(2);
  XUID::FromUInt64(&result, v1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::CancelMemberInvitation(ClanById, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1836, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestChangeClanTag
==============
*/
void TestChangeClanTag(void)
{
  unsigned __int64 v0; 
  const char *v1; 
  OnlineClan *ClanById; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::UpdateTag(ClanById, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1810, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestChangeName
==============
*/
void TestChangeName(void)
{
  unsigned __int64 v0; 
  const char *v1; 
  OnlineClan *ClanById; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::UpdateName(ClanById, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1794, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestCreateClan
==============
*/
void TestCreateClan(void)
{
  const char *v0; 
  const char *v1; 

  v0 = Cmd_Argv(1);
  v1 = Cmd_Argv(2);
  if ( !OnlineClansManager::CreateClan(&OnlineClansManager::s_instance, 0, v0, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1745, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestDeclineInvite
==============
*/
void TestDeclineInvite(void)
{
  int v0; 

  v0 = Cmd_ArgInt(1);
  if ( !OnlineClansManager::SetShouldDeclineClanInvite(&OnlineClansManager::s_instance, 0, v0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1763, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestDemoteToMember
==============
*/
void TestDemoteToMember(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  OnlineClan *ClanById; 
  XUID result; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgUInt64(2);
  XUID::FromUInt64(&result, v1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::DemoteToMember(ClanById, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1900, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestLeaveClan
==============
*/
void TestLeaveClan(void)
{
  int v0; 
  OnlineClan *ClanById; 

  v0 = Cmd_ArgInt(1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::LeaveClan(ClanById) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1778, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestPromoteToOfficer
==============
*/
void TestPromoteToOfficer(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  OnlineClan *ClanById; 
  XUID result; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgUInt64(2);
  XUID::FromUInt64(&result, v1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::PromoteToOfficer(ClanById, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1884, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestPromoteToOwner
==============
*/
void TestPromoteToOwner(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  OnlineClan *ClanById; 
  XUID result; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgUInt64(2);
  XUID::FromUInt64(&result, v1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::PromoteToOwner(ClanById, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1868, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestRemoveMember
==============
*/
void TestRemoveMember(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  OnlineClan *ClanById; 
  XUID result; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgUInt64(2);
  XUID::FromUInt64(&result, v1);
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::RemoveMember(ClanById, result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1852, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestSendInvite
==============
*/
void TestSendInvite(void)
{
  unsigned __int64 v0; 
  const char *v1; 
  OnlineClanPool *v2; 
  ClientPlatform v3; 
  OnlineClan *ClanById; 
  const char *AccountTypeString; 
  const char *v6; 
  DWUsernameSearch::SearchRequest searchRequest; 
  LocalClientNum_t outLocalClientNum; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_Argv(2);
  if ( CL_Mgr_IsControllerMappedToClient(0, &outLocalClientNum) && (v2 = &s_clanPool[outLocalClientNum]) != NULL )
  {
    if ( v2->state == FETCHED )
    {
      ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
      if ( ClanById )
      {
        LOBYTE(v3) = 6;
        AccountTypeString = dwPlatformTypes_GetAccountTypeString(v3);
        v6 = "uno";
        if ( AccountTypeString )
          v6 = AccountTypeString;
        Com_Printf(14, "[Clan] %s: Searching for player %s (provider: %s) on Demonware\n", "OnlineClansManager::InviteMemberByName", v1, v6);
        searchRequest.username = v1;
        searchRequest.callback = InviteMemberByNameCallback;
        searchRequest.accountProvider = v6;
        searchRequest.maxResults = 1;
        searchRequest.subStringSearch = 0;
        if ( DWUsernameSearch::Search(&s_userNameSearchData.userNameSearch, 0, &searchRequest) )
        {
          s_userNameSearchData.clan = ClanById;
          return;
        }
      }
      else
      {
        Com_PrintError(14, "[Clan] %s: invalid clan id %zu\n", "OnlineClansManager::InviteMemberByName", v0);
      }
    }
    else
    {
      Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i\n", "OnlineClansManager::InviteMemberByName");
    }
  }
  else
  {
    Com_PrintError(14, "[Clan] %s: clans not fetched yet for controller %i because it is not mapped\n", "OnlineClansManager::InviteMemberByName");
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1820, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
TestSetHappyHour
==============
*/
void TestSetHappyHour(void)
{
  unsigned __int64 v0; 
  int v1; 
  unsigned __int8 v2; 
  OnlineClan *ClanById; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgInt(2);
  v2 = v1;
  if ( (v1 < 0 || (unsigned int)v1 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v1, "signed", v1) )
    __debugbreak();
  ClanById = OnlineClansManager::GetClanById(&OnlineClansManager::s_instance, 0, v0);
  if ( ClanById && !OnlineClan::SetHappyHour(ClanById, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_clans_manager.cpp", 1916, ASSERT_TYPE_ASSERT, "(success)", (const char *)&queryFormat, "success") )
    __debugbreak();
}

/*
==============
UnsubscribeFromAnyClanDataChannel
==============
*/
void UnsubscribeFromAnyClanDataChannel(const int controllerIndex)
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

  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appData, 0, 32);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  pTaskCreateRequest.m_onCompletionCallback = UnsubscribeFromAnyClanDataChannelComplete;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  Instance = DWServicesAccess::GetInstance();
  Messaging = DWServicesAccess::GetMessaging(Instance, controllerIndex);
  v4 = (TaskCreateRequest *)DWMessaging::unsubscribeFromCategory(Messaging, &result, "clanData");
  if ( v4 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v5 = *(bdRemoteTask **)&v4->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v5;
    if ( v5 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v5->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v6 = TaskManager::GetInstance(), TaskManager::CreateTask(v6, &pTaskCreateRequest, &pTaskCreateResult)) )
    Com_Printf(14, "[Clan] %s: Unsubscribing to any clan data channel\n", "UnsubscribeFromAnyClanDataChannel");
  else
    Com_PrintError(14, "[Clan] %s: Failed unsubscribing to any clan data channel\n", "UnsubscribeFromAnyClanDataChannel");
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
UnsubscribeFromAnyClanDataChannelComplete
==============
*/
void UnsubscribeFromAnyClanDataChannelComplete(GenericTask *task, eTaskManagerTaskState state)
{
  __int64 m_controllerIndex; 

  m_controllerIndex = (unsigned int)task->m_controllerIndex;
  if ( state )
    Com_PrintError(14, "[Clan] %s: FAILURE Unsubscribed to all chats on the backend (controller %i)\n", "UnsubscribeFromAnyClanDataChannelComplete", m_controllerIndex);
  else
    Com_Printf(14, "[Clan] %s: SUCCESS Unsubscribed to all chats on the backend (controller %i)\n", "UnsubscribeFromAnyClanDataChannelComplete", m_controllerIndex);
}

