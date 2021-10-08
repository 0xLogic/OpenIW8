/*
==============
dwAcceptApplication
==============
*/

unsigned int __fastcall dwAcceptApplication(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  return ?dwAcceptApplication@@YAIPEAVTaskCreateRequest@@_KVbdUserAccountID@@@Z(request, teamID, applicantID);
}

/*
==============
dwRejectMemberships
==============
*/

unsigned int __fastcall dwRejectMemberships(TaskCreateRequest *request, unsigned __int64 *teamID, bdTeamFailedHandleMembership *failures, int numTeams)
{
  return ?dwRejectMemberships@@YAIPEAVTaskCreateRequest@@QEA_KQEAVbdTeamFailedHandleMembership@@H@Z(request, teamID, failures, numTeams);
}

/*
==============
dwGetMemberships
==============
*/

unsigned int __fastcall dwGetMemberships(TaskCreateRequest *request, bdTeamInfo *teamInfos, int maxTeamInfos)
{
  return ?dwGetMemberships@@YAIPEAVTaskCreateRequest@@QEAVbdTeamInfo@@H@Z(request, teamInfos, maxTeamInfos);
}

/*
==============
dwGetMembers
==============
*/

unsigned int __fastcall dwGetMembers(TaskCreateRequest *request, unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  return ?dwGetMembers@@YAIPEAVTaskCreateRequest@@_KQEAVbdTeamMember@@II_N@Z(request, teamID, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
}

/*
==============
dwLeaveTeam
==============
*/

unsigned int __fastcall dwLeaveTeam(TaskCreateRequest *request, unsigned __int64 teamID)
{
  return ?dwLeaveTeam@@YAIPEAVTaskCreateRequest@@_K@Z(request, teamID);
}

/*
==============
dwGetIncomingProposals
==============
*/

unsigned int __fastcall dwGetIncomingProposals(TaskCreateRequest *request, bdTeamProposal *teamProposals, int maxTeamProposals, int offset)
{
  return ?dwGetIncomingProposals@@YAIPEAVTaskCreateRequest@@QEAVbdTeamProposal@@HH@Z(request, teamProposals, maxTeamProposals, offset);
}

/*
==============
dwSetTeamAutoJoin
==============
*/

unsigned int __fastcall dwSetTeamAutoJoin(TaskCreateRequest *request, unsigned __int64 teamID, bool autoJoin)
{
  return ?dwSetTeamAutoJoin@@YAIPEAVTaskCreateRequest@@_K_N@Z(request, teamID, autoJoin);
}

/*
==============
dwGetApplicationsByTeamPaginated
==============
*/

unsigned int __fastcall dwGetApplicationsByTeamPaginated(TaskCreateRequest *request, unsigned __int64 *teamID, unsigned int numOfTeams, bdTeamApplicationWithTeamID *applications, unsigned int maxApplications, unsigned int offset)
{
  return ?dwGetApplicationsByTeamPaginated@@YAIPEAVTaskCreateRequest@@QEA_KIQEAVbdTeamApplicationWithTeamID@@II@Z(request, teamID, numOfTeams, applications, maxApplications, offset);
}

/*
==============
dwKickMember
==============
*/

unsigned int __fastcall dwKickMember(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *memberID)
{
  return ?dwKickMember@@YAIPEAVTaskCreateRequest@@_KVbdUserAccountID@@@Z(request, teamID, memberID);
}

/*
==============
dwProposeMultipleMemberships
==============
*/

unsigned int __fastcall dwProposeMultipleMemberships(TaskCreateRequest *request, bdTeamFailedProposal *proposalFailures, unsigned __int64 teamID, int numUsers, bdUserAccountID *userIDs)
{
  return ?dwProposeMultipleMemberships@@YAIPEAVTaskCreateRequest@@QEAVbdTeamFailedProposal@@_KHQEAVbdUserAccountID@@@Z(request, proposalFailures, teamID, numUsers, userIDs);
}

/*
==============
dwCreateTeam
==============
*/

unsigned int __fastcall dwCreateTeam(TaskCreateRequest *request, const char *teamName, bdTeamProfile *publicProfile, bool publicTeam, bdTeamInfoV2 *const out_teamInfo)
{
  return ?dwCreateTeam@@YAIPEAVTaskCreateRequest@@PEBDPEAVbdTeamProfile@@_NQEAVbdTeamInfoV2@@@Z(request, teamName, publicProfile, publicTeam, out_teamInfo);
}

/*
==============
dwAddApplication
==============
*/

unsigned int __fastcall dwAddApplication(TaskCreateRequest *request, unsigned __int64 teamID)
{
  return ?dwAddApplication@@YAIPEAVTaskCreateRequest@@_K@Z(request, teamID);
}

/*
==============
dwAutoJoinTeam
==============
*/

unsigned int __fastcall dwAutoJoinTeam(TaskCreateRequest *request, unsigned __int64 teamID)
{
  return ?dwAutoJoinTeam@@YAIPEAVTaskCreateRequest@@_K@Z(request, teamID);
}

/*
==============
dwAcceptMemberships
==============
*/

unsigned int __fastcall dwAcceptMemberships(TaskCreateRequest *request, unsigned __int64 *teamID, bdTeamFailedHandleMembership *failures, int numTeams)
{
  return ?dwAcceptMemberships@@YAIPEAVTaskCreateRequest@@QEA_KQEAVbdTeamFailedHandleMembership@@H@Z(request, teamID, failures, numTeams);
}

/*
==============
dwSearchTeams
==============
*/

unsigned int __fastcall dwSearchTeams(TaskCreateRequest *request, bdTeamInfoV2 *teamInfos, const unsigned int numOtherUsers, const unsigned int numTeamsFilter, const unsigned int numProfileFilters, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults)
{
  return ?dwSearchTeams@@YAIPEAVTaskCreateRequest@@QEAVbdTeamInfoV2@@IIIQEB_KQEBVbdTeamSearchFilter@@3II@Z(request, teamInfos, numOtherUsers, numTeamsFilter, numProfileFilters, otherUsers, publicProfileFilter, teamsFilter, offset, maxResults);
}

/*
==============
dwRejectApplication
==============
*/

unsigned int __fastcall dwRejectApplication(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  return ?dwRejectApplication@@YAIPEAVTaskCreateRequest@@_KVbdUserAccountID@@@Z(request, teamID, applicantID);
}

/*
==============
dwAcceptApplication
==============
*/
__int64 dwAcceptApplication(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWTeams *Teams; 
  bdUserAccountID *v12; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  bdReference<bdRemoteTask> v15; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v17; 
  bdUserAccountID v18; 
  bdUserAccountID *v19; 

  v17 = -2i64;
  v19 = applicantID;
  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 272, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwAcceptApplication triggering error due to not being connected.\n");
LABEL_6:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v10, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v18, applicantID);
    v13 = DWTeams::acceptApplication(Teams, &v15, teamID, v12);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwAcceptApplication triggering error due to no dw task returned.\n");
      goto LABEL_6;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwAcceptApplication: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return m_localTaskId;
}

/*
==============
dwAcceptMemberships
==============
*/
__int64 dwAcceptMemberships(TaskCreateRequest *request, unsigned __int64 *teamID, bdTeamFailedHandleMembership *failures, int numTeams)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWServicesAccess *v11; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 101, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwAcceptMemberships triggering error due to not being connected.\n");
    return 0i64;
  }
  v10 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v10, request->m_controllerIndex) )
  {
    if ( numTeams != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 112, ASSERT_TYPE_ASSERT, "(numTeams == 1)", (const char *)&queryFormat, "numTeams == 1") )
      __debugbreak();
    v11 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v11, request->m_controllerIndex);
    v13 = DWTeams::acceptMembership(Teams, &result, *teamID);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwAcceptMemberships triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwAcceptMemberships: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwAddApplication
==============
*/
__int64 dwAddApplication(TaskCreateRequest *request, unsigned __int64 teamID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWServicesAccess *v8; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 549, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwAddApplication triggering error due to not being connected.\n");
    return 0i64;
  }
  v7 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v7, request->m_controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v8, request->m_controllerIndex);
    v10 = DWTeams::addApplication(Teams, &result, teamID);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v10);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwAddApplication triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v11 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v11, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwAddApplication: controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwAutoJoinTeam
==============
*/
__int64 dwAutoJoinTeam(TaskCreateRequest *request, unsigned __int64 teamID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWServicesAccess *v8; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v10; 
  TaskManager *v11; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 508, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwAutoJoinTeam triggering error due to not being connected.\n");
    return 0i64;
  }
  v7 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v7, request->m_controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v8, request->m_controllerIndex);
    v10 = DWTeams::autoJoinTeam(Teams, &result, teamID);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v10);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwAutoJoinTeam triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v11 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v11, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwAutoJoinTeam: for controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwCreateTeam
==============
*/
__int64 dwCreateTeam(TaskCreateRequest *request, const char *teamName, bdTeamProfile *publicProfile, bool publicTeam, bdTeamInfoV2 *const out_teamInfo)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWServicesAccess *v11; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 395, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwCreateTeam triggering error due to not being connected.\n");
    return 0i64;
  }
  v10 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v10, request->m_controllerIndex) )
  {
    v11 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v11, request->m_controllerIndex);
    v13 = DWTeams::createTeam(Teams, &result, teamName, out_teamInfo);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwCreateTeam triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwCreateTeam: for controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwGetApplicationsByTeamPaginated
==============
*/
__int64 dwGetApplicationsByTeamPaginated(TaskCreateRequest *request, unsigned __int64 *teamID, unsigned int numOfTeams, bdTeamApplicationWithTeamID *applications, unsigned int maxApplications, unsigned int offset)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v13; 
  DWServicesAccess *v14; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *ApplicationsByTeam; 
  TaskManager *v17; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 229, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwGetApplicationsByTeamPaginated triggering error due to not being connected.\n");
    return 0i64;
  }
  v13 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v13, request->m_controllerIndex) )
  {
    if ( numOfTeams != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 240, ASSERT_TYPE_ASSERT, "(numOfTeams == 1)", (const char *)&queryFormat, "numOfTeams == 1") )
      __debugbreak();
    v14 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v14, request->m_controllerIndex);
    ApplicationsByTeam = DWTeams::getApplicationsByTeam(Teams, &result, teamID, applications, numOfTeams, maxApplications, offset);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, ApplicationsByTeam);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwGetApplicationsByTeamPaginated triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v17 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v17, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwGetApplicationsByTeamPaginated: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwGetIncomingProposals
==============
*/
__int64 dwGetIncomingProposals(TaskCreateRequest *request, bdTeamProposal *teamProposals, int maxTeamProposals, int offset)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWServicesAccess *v11; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *IncomingProposals; 
  TaskManager *v14; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 60, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwGetMemberships triggering error due to not being connected.\n");
    return 0i64;
  }
  v10 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v10, request->m_controllerIndex) )
  {
    v11 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v11, request->m_controllerIndex);
    IncomingProposals = DWTeams::getIncomingProposals(Teams, &result, teamProposals, maxTeamProposals);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, IncomingProposals);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwGetMemberships triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwGetMemberships: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwGetMembers
==============
*/
__int64 dwGetMembers(TaskCreateRequest *request, unsigned __int64 teamID, bdTeamMember *teamMembers, const unsigned int maxNumTeamMembers, const unsigned int offset, const bool getOnlineFirst)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v13; 
  DWServicesAccess *v14; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *Members; 
  TaskManager *v17; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 590, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwGetMembers triggering error due to not being connected.\n");
    return 0i64;
  }
  v13 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v13, request->m_controllerIndex) )
  {
    v14 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v14, request->m_controllerIndex);
    Members = DWTeams::getMembers(Teams, &result, teamID, teamMembers, maxNumTeamMembers, offset, getOnlineFirst);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, Members);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwGetMembers triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v17 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v17, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwGetMembers: Fetching team members for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwGetMemberships
==============
*/
__int64 dwGetMemberships(TaskCreateRequest *request, bdTeamInfo *teamInfos, int maxTeamInfos)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *Memberships; 
  TaskManager *v13; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 19, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwGetMemberships triggering error due to not being connected.\n");
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v10, request->m_controllerIndex);
    Memberships = DWTeams::getMemberships(Teams, &result, teamInfos, maxTeamInfos);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, Memberships);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwGetMemberships triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v13 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v13, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwGetMemberships: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwKickMember
==============
*/
__int64 dwKickMember(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *memberID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWTeams *Teams; 
  const bdUserAccountID *v12; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  bdReference<bdRemoteTask> v15; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v17; 
  bdUserAccountID v18; 
  bdUserAccountID *v19; 

  v17 = -2i64;
  v19 = memberID;
  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 354, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwKickMember triggering error due to not being connected.\n");
LABEL_6:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)memberID->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)memberID->gap38);
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v10, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v18, memberID);
    v13 = DWTeams::kickMember(Teams, &v15, teamID, v12);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwKickMember triggering error due to no dw task returned.\n");
      goto LABEL_6;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwKickMember: kicking member for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)memberID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)memberID->gap38);
  return m_localTaskId;
}

/*
==============
dwLeaveTeam
==============
*/
__int64 dwLeaveTeam(TaskCreateRequest *request, unsigned __int64 teamID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWServicesAccess *v8; 
  DWTeams *Teams; 
  const bdUserAccountID *v10; 
  const bdReference<bdRemoteTask> *v11; 
  TaskManager *v12; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v14; 
  bdReference<bdRemoteTask> v15; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 672, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwLeaveTeam triggering error due to not being connected.\n");
    return 0i64;
  }
  v7 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v7, request->m_controllerIndex) )
  {
    v8 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v8, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v14);
    v11 = DWTeams::leaveTeam(Teams, &v15, teamID, v10);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v11);
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwLeaveTeam triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v12 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v12, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwLeaveTeam for controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwProposeMultipleMemberships
==============
*/
__int64 dwProposeMultipleMemberships(TaskCreateRequest *request, bdTeamFailedProposal *proposalFailures, unsigned __int64 teamID, int numUsers, bdUserAccountID *userIDs)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v11; 
  DWServicesAccess *v12; 
  DWTeams *Teams; 
  const bdUserAccountID *v14; 
  const bdReference<bdRemoteTask> *v15; 
  TaskManager *v16; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v18; 
  bdReference<bdRemoteTask> v19; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 186, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwProposeMultipleMemberships triggering error due to not being connected.\n");
    return 0i64;
  }
  v11 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v11, request->m_controllerIndex) )
  {
    if ( numUsers != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 197, ASSERT_TYPE_ASSERT, "(numUsers == 1)", (const char *)&queryFormat, "numUsers == 1") )
      __debugbreak();
    v12 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v12, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v18, userIDs);
    v15 = DWTeams::proposeMembership(Teams, &v19, teamID, v14, NULL, 0);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v15);
    if ( v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwProposeMultipleMemberships triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v16 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v16, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwProposeMultipleMemberships: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwRejectApplication
==============
*/
__int64 dwRejectApplication(TaskCreateRequest *request, unsigned __int64 teamID, bdUserAccountID *applicantID)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWTeams *Teams; 
  bdUserAccountID *v12; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  bdReference<bdRemoteTask> v15; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v17; 
  bdUserAccountID v18; 
  bdUserAccountID *v19; 

  v17 = -2i64;
  v19 = applicantID;
  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 313, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwRejectApplication triggering error due to not being connected.\n");
LABEL_6:
    bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
    bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v10, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v18, applicantID);
    v13 = DWTeams::rejectApplication(Teams, &v15, teamID, v12);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( v15.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v15.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v15.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v15.m_ptr->~bdReferencable)(v15.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwRejectApplication triggering error due to no dw task returned.\n");
      goto LABEL_6;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwRejectApplication: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)applicantID->gap38);
  bdReferencable::~bdReferencable((bdReferencable *)applicantID->gap38);
  return m_localTaskId;
}

/*
==============
dwRejectMemberships
==============
*/
__int64 dwRejectMemberships(TaskCreateRequest *request, unsigned __int64 *teamID, bdTeamFailedHandleMembership *failures, int numTeams)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v10; 
  DWServicesAccess *v11; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v13; 
  TaskManager *v14; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 143, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwRejectMemberships triggering error due to not being connected.\n");
    return 0i64;
  }
  v10 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v10, request->m_controllerIndex) )
  {
    if ( numTeams != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 154, ASSERT_TYPE_ASSERT, "(numTeams == 1)", (const char *)&queryFormat, "numTeams == 1") )
      __debugbreak();
    v11 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v11, request->m_controllerIndex);
    v13 = DWTeams::rejectMembership(Teams, &result, *teamID);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v13);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwRejectMemberships triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwRejectMemberships: Fetching team memberships for user controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwSearchTeams
==============
*/
__int64 dwSearchTeams(TaskCreateRequest *request, bdTeamInfoV2 *teamInfos, const unsigned int numOtherUsers, const unsigned int numTeamsFilter, const unsigned int numProfileFilters, const unsigned __int64 *otherUsers, const bdTeamSearchFilter *publicProfileFilter, const bdTeamSearchFilter *teamsFilter, const unsigned int offset, const unsigned int maxResults)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v17; 
  DWServicesAccess *v18; 
  DWTeams *Teams; 
  const bdUserAccountID *v20; 
  const bdReference<bdRemoteTask> *v21; 
  TaskManager *v22; 
  unsigned __int64 userID; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID v25; 
  bdReference<bdRemoteTask> v26; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 449, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwSearchTeams triggering error due to not being connected.\n");
    return 0i64;
  }
  if ( !dwGetOnlineUserID(request->m_controllerIndex, &userID) )
  {
    Com_Printf(25, "dwSearchTeams triggering error due to dwGetOnlineUserID failing.\n");
    return 0i64;
  }
  v17 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v17, request->m_controllerIndex) )
  {
    v18 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v18, request->m_controllerIndex);
    bdUserAccountID::bdUserAccountID(&v25, &userID);
    v21 = DWTeams::searchTeams(Teams, &v26, teamInfos, v20, numOtherUsers, numTeamsFilter, numProfileFilters, otherUsers, publicProfileFilter, teamsFilter, offset, maxResults, "teamID", "DESC", 0);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v21);
    if ( v26.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v26.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v26.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))v26.m_ptr->~bdReferencable)(v26.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwSearchTeams triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v22 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v22, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwSearchTeams: for controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

/*
==============
dwSetTeamAutoJoin
==============
*/
__int64 dwSetTeamAutoJoin(TaskCreateRequest *request, unsigned __int64 teamID, bool autoJoin)
{
  unsigned int m_localTaskId; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v9; 
  DWServicesAccess *v10; 
  DWTeams *Teams; 
  const bdReference<bdRemoteTask> *v12; 
  TaskManager *v13; 
  TaskCreateResult pTaskCreateResult; 
  bdReference<bdRemoteTask> result; 

  m_localTaskId = 0;
  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwteams.cpp", 631, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, request->m_controllerIndex) )
  {
    Com_Printf(25, "dwSetTeamAutoJoin triggering error due to not being connected.\n");
    return 0i64;
  }
  v9 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v9, request->m_controllerIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    Teams = DWServicesAccess::GetTeams(v10, request->m_controllerIndex);
    v12 = DWTeams::setTeamAutoJoin(Teams, &result, teamID, autoJoin);
    bdReference<bdRemoteTask>::operator=(&request->m_remoteDemonwareTask, v12);
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    if ( !request->m_remoteDemonwareTask.m_ptr )
    {
      Com_Printf(25, "dwSetTeamAutoJoin triggering error due to no dw task returned.\n");
      return 0i64;
    }
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    v13 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v13, request, &pTaskCreateResult) )
      m_localTaskId = pTaskCreateResult.m_localTaskId;
  }
  Com_Printf(25, "dwSetTeamAutoJoin: controller %d.\n", (unsigned int)request->m_controllerIndex);
  return m_localTaskId;
}

