/*
==============
Online_Regulations::SetEnforcementInternal
==============
*/

void __fastcall Online_Regulations::SetEnforcementInternal(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Enforcement localEnforcement)
{
  ?SetEnforcementInternal@Online_Regulations@@AEAAXHW4RegulationType@1@W4Enforcement@1@@Z(this, controllerIndex, regulationType, localEnforcement);
}

/*
==============
Online_Regulations::GetRegulationPreferenceComplete
==============
*/

void __fastcall Online_Regulations::GetRegulationPreferenceComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?GetRegulationPreferenceComplete@Online_Regulations@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
Online_Regulations::GetInstancePtr
==============
*/

Online_Regulations *__fastcall Online_Regulations::GetInstancePtr()
{
  return ?GetInstancePtr@Online_Regulations@@SAPEAV1@XZ();
}

/*
==============
Online_Regulations::FetchRegulationEnforcement
==============
*/

bool __fastcall Online_Regulations::FetchRegulationEnforcement(Online_Regulations *this, const int controllerIndex)
{
  return ?FetchRegulationEnforcement@Online_Regulations@@AEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Regulations::ResetClient
==============
*/

void __fastcall Online_Regulations::ResetClient(Online_Regulations *this, const LocalClientNum_t clientNum)
{
  ?ResetClient@Online_Regulations@@AEAAXW4LocalClientNum_t@@@Z(this, clientNum);
}

/*
==============
Online_Regulations::SetPreference
==============
*/

bool __fastcall Online_Regulations::SetPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  return ?SetPreference@Online_Regulations@@QEAA_NHW4RegulationType@1@W4Preference@1@@Z(this, controllerIndex, regulationType, preference);
}

/*
==============
Online_Regulations::RegisterLuaFunctions
==============
*/

void __fastcall Online_Regulations::RegisterLuaFunctions(Online_Regulations *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@Online_Regulations@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
Online_Regulations::GetPreference
==============
*/

Online_Regulations::Preference __fastcall Online_Regulations::GetPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType)
{
  return ?GetPreference@Online_Regulations@@QEBA?AW4Preference@1@HW4RegulationType@1@@Z(this, controllerIndex, regulationType);
}

/*
==============
Online_Regulations::OnSignedOut
==============
*/

void __fastcall Online_Regulations::OnSignedOut(Online_Regulations *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@Online_Regulations@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
Online_Regulations::GetInstance
==============
*/

Online_Regulations *__fastcall Online_Regulations::GetInstance()
{
  return ?GetInstance@Online_Regulations@@SAAEAV1@XZ();
}

/*
==============
Online_Regulations::SetRegulationPreferenceComplete
==============
*/

void __fastcall Online_Regulations::SetRegulationPreferenceComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?SetRegulationPreferenceComplete@Online_Regulations@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
Online_Regulations::Frame
==============
*/

void __fastcall Online_Regulations::Frame(Online_Regulations *this)
{
  ?Frame@Online_Regulations@@UEAAXXZ(this);
}

/*
==============
Online_Regulations::SetRegulationPreference
==============
*/

bool __fastcall Online_Regulations::SetRegulationPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  return ?SetRegulationPreference@Online_Regulations@@AEAA_NHW4RegulationType@1@W4Preference@1@@Z(this, controllerIndex, regulationType, preference);
}

/*
==============
Online_Regulations::HasPendingPreferenceSet
==============
*/

bool __fastcall Online_Regulations::HasPendingPreferenceSet(Online_Regulations *this)
{
  return ?HasPendingPreferenceSet@Online_Regulations@@AEBA_NXZ(this);
}

/*
==============
Online_Regulations::GetLocalEnforcement
==============
*/

Online_Regulations::Enforcement __fastcall Online_Regulations::GetLocalEnforcement(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType)
{
  return ?GetLocalEnforcement@Online_Regulations@@QEBA?AW4Enforcement@1@HW4RegulationType@1@@Z(this, controllerIndex, regulationType);
}

/*
==============
Online_Regulations::FetchPreferences
==============
*/

bool __fastcall Online_Regulations::FetchPreferences(Online_Regulations *this, const int controllerIndex)
{
  return ?FetchPreferences@Online_Regulations@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Regulations::Init
==============
*/

bool __fastcall Online_Regulations::Init(Online_Regulations *this)
{
  return ?Init@Online_Regulations@@UEAA_NXZ(this);
}

/*
==============
Online_Regulations::FetchRegulationEnforcementComplete
==============
*/

void __fastcall Online_Regulations::FetchRegulationEnforcementComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  ?FetchRegulationEnforcementComplete@Online_Regulations@@CAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(task, taskState);
}

/*
==============
Online_Regulations::FetchRegulationPreferences
==============
*/

bool __fastcall Online_Regulations::FetchRegulationPreferences(Online_Regulations *this, const int controllerIndex)
{
  return ?FetchRegulationPreferences@Online_Regulations@@AEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Regulations::FetchEnforcement
==============
*/

bool __fastcall Online_Regulations::FetchEnforcement(Online_Regulations *this, const int controllerIndex)
{
  return ?FetchEnforcement@Online_Regulations@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
Online_Regulations::SetAllNonEnforcedRegulations
==============
*/

void __fastcall Online_Regulations::SetAllNonEnforcedRegulations(Online_Regulations *this, const int controllerIndex, const Online_Regulations::Enforcement newEnforcement)
{
  ?SetAllNonEnforcedRegulations@Online_Regulations@@AEAAXHW4Enforcement@1@@Z(this, controllerIndex, newEnforcement);
}

/*
==============
Online_Regulations::SetPreferenceInternal
==============
*/

void __fastcall Online_Regulations::SetPreferenceInternal(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  ?SetPreferenceInternal@Online_Regulations@@AEAAXHW4RegulationType@1@W4Preference@1@@Z(this, controllerIndex, regulationType, preference);
}

/*
==============
Online_Regulations::OnDisconnect
==============
*/

void __fastcall Online_Regulations::OnDisconnect(Online_Regulations *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@Online_Regulations@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
LUI_CoD_LuaCall_IsRegulationEnforced
==============
*/
__int64 LUI_CoD_LuaCall_IsRegulationEnforced(lua_State *luaVM)
{
  Online_Regulations::Enforcement LocalEnforcement; 
  int v3; 
  Online_Regulations::RegulationType v4; 

  LocalEnforcement = UNKNOWN;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Regulations.IsRegulationEnforced( <controllerIndex>, <regulationType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    LocalEnforcement = Online_Regulations::GetLocalEnforcement(&Online_Regulations::s_instance, v3, v4);
  }
  j_lua_pushinteger(luaVM, LocalEnforcement);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetRegulationPreference
==============
*/
__int64 LUI_CoD_LuaCall_GetRegulationPreference(lua_State *luaVM)
{
  Online_Regulations::Preference Preference; 
  int v3; 
  Online_Regulations::RegulationType v4; 

  Preference = UNKNOWN;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Regulations.GetRegulationPreference( <controllerIndex>, <regulationType> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    Preference = Online_Regulations::GetPreference(&Online_Regulations::s_instance, v3, v4);
  }
  j_lua_pushinteger(luaVM, Preference);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetRegulationPreference
==============
*/
__int64 LUI_CoD_LuaCall_SetRegulationPreference(lua_State *luaVM)
{
  bool v2; 
  int v3; 
  Online_Regulations::RegulationType v4; 
  Online_Regulations::Preference v5; 

  v2 = 0;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Regulations.SetRegulationPreference( <controllerIndex>, <regulationType>, <regulationPreference> )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tointeger32(luaVM, 3);
    v2 = Online_Regulations::SetPreference(&Online_Regulations::s_instance, v3, v4, v5);
  }
  j_lua_pushboolean(luaVM, v2);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FetchEnforcement
==============
*/
__int64 LUI_CoD_LuaCall_FetchEnforcement(lua_State *luaVM)
{
  bool Enforcement; 
  int v3; 

  Enforcement = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Regulations.FetchEnforcement( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    Enforcement = Online_Regulations::FetchEnforcement(&Online_Regulations::s_instance, v3);
  }
  j_lua_pushboolean(luaVM, Enforcement);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FetchPreferences
==============
*/
__int64 LUI_CoD_LuaCall_FetchPreferences(lua_State *luaVM)
{
  bool Preferences; 
  int v3; 

  Preferences = 0;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Regulations.FetchPreferences( <controllerIndex>");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    Preferences = Online_Regulations::FetchPreferences(&Online_Regulations::s_instance, v3);
  }
  j_lua_pushboolean(luaVM, Preferences);
  return 1i64;
}

/*
==============
Online_Regulations::Init
==============
*/
char Online_Regulations::Init(Online_Regulations *this)
{
  Online_Regulations::PlayerRegulations *m_playerRegulations; 
  unsigned int v2; 
  RetryTimer::Config config; 

  m_playerRegulations = this->m_playerRegulations;
  v2 = 0;
  do
  {
    m_playerRegulations->regulations[0] = 0i64;
    ++v2;
    ++m_playerRegulations;
    this->m_pendingPreferenceSet.controller = -1;
    *(_QWORD *)&this->m_pendingEnforcementFetchController = -1i64;
  }
  while ( v2 < 2 );
  config.backoffDelay = DVARINT_online_regulations_backoff_time_ms;
  config.refreshDelay = NULL;
  config.maxBackoffDelay = NULL;
  *(_WORD *)&config.initialMode = 257;
  RetryTimer::Init(&s_retryTimer, &config);
  Cmd_AddCommandInternal("regulations_getEnforcement", TestGetEnforcement, &stru_14B6A3A50);
  Cmd_AddCommandInternal("regulations_getPreference", TestGetPreference, &stru_14B6A3A80);
  Cmd_AddCommandInternal("regulations_setPreference", TestSetPreference, &stru_14B6A3AB0);
  Cmd_AddCommandInternal("regulations_fetchEnforcement", TestFetchEnforcement, &stru_14B6A3AE0);
  Cmd_AddCommandInternal("regulations_fetchPreference", TestFetchPreferences, &stru_14B6A3B10);
  return 1;
}

/*
==============
Online_Regulations::Frame
==============
*/
void Online_Regulations::Frame(Online_Regulations *this)
{
  int controller; 
  int m_pendingEnforcementFetchController; 
  int m_pendingPreferenceFetchController; 

  if ( RetryTimer::IsExpired(&s_retryTimer) )
  {
    controller = this->m_pendingPreferenceSet.controller;
    if ( controller == -1 )
    {
      m_pendingEnforcementFetchController = this->m_pendingEnforcementFetchController;
      if ( m_pendingEnforcementFetchController == -1 )
      {
        m_pendingPreferenceFetchController = this->m_pendingPreferenceFetchController;
        if ( m_pendingPreferenceFetchController != -1 && Online_Regulations::FetchPreferences(this, m_pendingPreferenceFetchController) )
          this->m_pendingPreferenceFetchController = -1;
      }
      else if ( Online_Regulations::FetchEnforcement(this, m_pendingEnforcementFetchController) )
      {
        this->m_pendingEnforcementFetchController = -1;
      }
    }
    else if ( Online_Regulations::SetPreference(this, controller, (const Online_Regulations::RegulationType)this->m_pendingPreferenceSet.type, (const Online_Regulations::Preference)this->m_pendingPreferenceSet.preference) )
    {
      this->m_pendingPreferenceSet.controller = -1;
    }
  }
}

/*
==============
Online_Regulations::OnSignedOut
==============
*/
void Online_Regulations::OnSignedOut(Online_Regulations *this, const int controllerIndex, GenericSignOutState signOutState)
{
  LocalClientNum_t ClientFromController; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Online_Regulations::ResetClient(this, ClientFromController);
}

/*
==============
Online_Regulations::OnDisconnect
==============
*/
void Online_Regulations::OnDisconnect(Online_Regulations *this, ONLINE_DISCONNECT reason)
{
  Online_Regulations::PlayerRegulations *m_playerRegulations; 
  unsigned int v3; 

  m_playerRegulations = this->m_playerRegulations;
  v3 = 0;
  do
  {
    m_playerRegulations->regulations[0] = 0i64;
    ++v3;
    ++m_playerRegulations;
    this->m_pendingPreferenceSet.controller = -1;
    *(_QWORD *)&this->m_pendingEnforcementFetchController = -1i64;
  }
  while ( v3 < 2 );
}

/*
==============
Online_Regulations::RegisterLuaFunctions
==============
*/
void Online_Regulations::RegisterLuaFunctions(Online_Regulations *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Regulations", Regulations_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
Online_Regulations::FetchEnforcement
==============
*/
bool Online_Regulations::FetchEnforcement(Online_Regulations *this, const int controllerIndex)
{
  const dvar_t *v4; 
  DWServicesAccess *Instance; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 192, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 193, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  v4 = DVARBOOL_online_regulations_enabled;
  if ( !DVARBOOL_online_regulations_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_regulations_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Trying to Fetch Enforcement but DW is not connected, failing.\n", (unsigned int)controllerIndex);
    return 0;
  }
  if ( this->m_fetchRegulationsResponse )
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Trying to Fetch Enforcement when a fetch is already in flight, failing.\n", (unsigned int)controllerIndex);
    return 0;
  }
  else if ( RetryTimer::IsExpired(&s_retryTimer) )
  {
    return Online_Regulations::FetchRegulationEnforcement(this, controllerIndex);
  }
  else
  {
    this->m_pendingEnforcementFetchController = controllerIndex;
    Com_Printf(25, "[REGULATIONS(%u)] Trying to Fetch Enforcement when we are in backoff, caching and trying later.\n", (unsigned int)controllerIndex);
    return 1;
  }
}

/*
==============
Online_Regulations::FetchPreferences
==============
*/
bool Online_Regulations::FetchPreferences(Online_Regulations *this, const int controllerIndex)
{
  const dvar_t *v4; 
  DWServicesAccess *Instance; 
  int v8; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 225, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 226, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  v4 = DVARBOOL_online_regulations_enabled;
  if ( !DVARBOOL_online_regulations_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_regulations_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( !v4->current.enabled )
    return 0;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Trying to Fetch preferences but DW is not connected, failing.\n", (unsigned int)controllerIndex);
    return 0;
  }
  if ( this->m_getRegulationPreference )
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Trying to Fetch preferences when a fetch is already in flight, failing.\n", (unsigned int)controllerIndex);
    return 0;
  }
  else if ( RetryTimer::IsExpired(&s_retryTimer) )
  {
    return Online_Regulations::FetchRegulationPreferences(this, controllerIndex);
  }
  else
  {
    this->m_pendingPreferenceFetchController = controllerIndex;
    Com_Printf(25, "[REGULATIONS(%u)] Trying to Fetch preferences when we are in backoff, caching and trying later.\n", (unsigned int)controllerIndex);
    return 1;
  }
}

/*
==============
Online_Regulations::FetchRegulationEnforcement
==============
*/
__int64 Online_Regulations::FetchRegulationEnforcement(Online_Regulations *this, const int controllerIndex)
{
  bdRemoteTask *v4; 
  bdFetchRegulationsResponse *v5; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  const bdUmbrellaCrossplayAccessInfo *CrossplayAccessInfo; 
  DWServicesAccess *v9; 
  DWRegulations *Regulations; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  unsigned __int8 v14; 
  bdFetchRegulationsResponse *m_fetchRegulationsResponse; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> result; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v20; 
  TaskCreateResult pTaskCreateResult; 
  bdFetchRegulationsRequest request; 

  v20 = -2i64;
  if ( this->m_fetchRegulationsResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 317, ASSERT_TYPE_SANITY, "( m_fetchRegulationsResponse == nullptr )", (const char *)&queryFormat, "m_fetchRegulationsResponse == nullptr") )
    __debugbreak();
  v4 = (bdRemoteTask *)bdMemory::allocate(0x198ui64);
  result.m_ptr = v4;
  if ( v4 )
    bdFetchRegulationsResponse::bdFetchRegulationsResponse((bdFetchRegulationsResponse *)v4);
  else
    v5 = NULL;
  this->m_fetchRegulationsResponse = v5;
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
  CrossplayAccessInfo = bdLoginResult::getCrossplayAccessInfo(LoginResult);
  bdFetchRegulationsRequest::bdFetchRegulationsRequest(&request, CrossplayAccessInfo->m_accessToken);
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = Online_Regulations::FetchRegulationEnforcementComplete;
  pTaskCreateRequest.m_appData = this;
  v9 = DWServicesAccess::GetInstance();
  Regulations = DWServicesAccess::GetRegulations(v9, controllerIndex);
  v11 = (TaskCreateRequest *)DWRegulations::getRegulations(Regulations, &result, &request, this->m_fetchRegulationsResponse);
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
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v13 = TaskManager::GetInstance(), TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "[REGULATIONS(%u)] Fetching Regulation Enforcements.\n", (unsigned int)controllerIndex);
    v14 = 1;
  }
  else
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Failed Fetching Regulation Enforcements.\n", (unsigned int)controllerIndex);
    m_fetchRegulationsResponse = this->m_fetchRegulationsResponse;
    if ( m_fetchRegulationsResponse )
      ((void (__fastcall *)(bdFetchRegulationsResponse *, __int64))m_fetchRegulationsResponse->~bdRESTResponse)(m_fetchRegulationsResponse, 1i64);
    this->m_fetchRegulationsResponse = NULL;
    v14 = 0;
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
  bdRESTRequest::~bdRESTRequest(&request);
  return v14;
}

/*
==============
Online_Regulations::FetchRegulationEnforcementComplete
==============
*/
void Online_Regulations::FetchRegulationEnforcementComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_Regulations *m_appData; 
  bdFetchRegulationsResponse *m_fetchRegulationsResponse; 
  unsigned int m_controllerIndex; 
  bdLobbyErrorCode ErrorCode; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode v9; 
  bdLobbyErrorCode v10; 
  RetryTimer::Mode v11; 
  __int64 NumRegulations; 
  __int64 v13; 
  const bdRegulation *Regulations; 
  Online_Regulations::RegulationType RegulationTypeFromName; 
  __int64 v16; 
  bdFetchRegulationsResponse *v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 

  m_appData = (Online_Regulations *)task->m_appData;
  if ( (Online_Regulations *)(((unsigned __int64)&m_appData->__vftable + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 421, ASSERT_TYPE_SANITY, "( regulations != nullptr )", (const char *)&queryFormat, "regulations != nullptr") )
    __debugbreak();
  m_fetchRegulationsResponse = m_appData->m_fetchRegulationsResponse;
  if ( !m_fetchRegulationsResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 424, ASSERT_TYPE_SANITY, "( response != nullptr )", (const char *)&queryFormat, "response != nullptr") )
    __debugbreak();
  m_controllerIndex = task->m_controllerIndex;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    NumRegulations = bdFetchRegulationsResponse::getNumRegulations(m_fetchRegulationsResponse);
    Com_Printf(25, "[REGULATIONS(%u)] Fetched (%u) enforced regulations.\n", m_controllerIndex, NumRegulations);
    if ( (_DWORD)NumRegulations )
    {
      v13 = 0i64;
      do
      {
        Regulations = bdFetchRegulationsResponse::getRegulations(m_fetchRegulationsResponse);
        RegulationTypeFromName = GetRegulationTypeFromName(Regulations[v13].m_name);
        v16 = RegulationTypeFromName;
        if ( RegulationTypeFromName != DODGE )
        {
          if ( m_controllerIndex >= 8 )
          {
            LODWORD(v20) = 8;
            LODWORD(v19) = m_controllerIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 275, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v19, v20) )
              __debugbreak();
          }
          if ( !CL_Mgr_IsControllerActive(m_controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 276, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
            __debugbreak();
          m_appData->m_playerRegulations[v16 + (int)CL_Mgr_GetClientFromController(m_controllerIndex)].regulations[0].enforcement = 2;
        }
        ++v13;
        --NumRegulations;
      }
      while ( NumRegulations );
      Online_Regulations::FetchPreferences(m_appData, m_controllerIndex);
    }
    Online_Regulations::SetAllNonEnforcedRegulations(m_appData, m_controllerIndex, (const Online_Regulations::Enforcement)3);
    v11 = MODE_REFRESH;
    goto LABEL_31;
  }
  if ( (unsigned int)(taskState - 1) <= 1 )
  {
    ErrorCode = bdFetchRegulationsResponse::getErrorCode(m_fetchRegulationsResponse);
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    v9 = ErrorCode;
    if ( m_ptr )
      v10 = bdRemoteTask::getErrorCode(m_ptr);
    else
      v10 = BD_NO_ERROR;
    LODWORD(fmt) = v9;
    Com_PrintError(25, "[REGULATIONS(%u)] Fetch Regulation Enforcement failed with error code (%u - %u).\n", (unsigned int)task->m_controllerIndex, (unsigned int)v10, fmt);
    Online_Regulations::SetAllNonEnforcedRegulations(m_appData, m_controllerIndex, (const Online_Regulations::Enforcement)1);
    v11 = MODE_BACKOFF;
LABEL_31:
    RetryTimer::Start(&s_retryTimer, v11);
    goto LABEL_32;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 467, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unhandled taskState.") )
    __debugbreak();
LABEL_32:
  v17 = m_appData->m_fetchRegulationsResponse;
  if ( v17 )
    ((void (__fastcall *)(bdFetchRegulationsResponse *, __int64))v17->~bdRESTResponse)(v17, 1i64);
  m_appData->m_fetchRegulationsResponse = NULL;
}

/*
==============
Online_Regulations::FetchRegulationPreferences
==============
*/
__int64 Online_Regulations::FetchRegulationPreferences(Online_Regulations *this, const int controllerIndex)
{
  bdRemoteTask *v4; 
  bdGetUserRegulationPreferenceResponse *v5; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  char *m_accessToken; 
  bdUserAccountID *UserAccountInfo; 
  DWServicesAccess *v10; 
  DWRegulations *Regulations; 
  TaskCreateRequest *UserRegulationPreference; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  unsigned __int8 v15; 
  bdGetUserRegulationPreferenceResponse *m_getRegulationPreference; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdReference<bdRemoteTask> v19; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v21; 
  TaskCreateResult pTaskCreateResult; 
  bdUserAccountID result; 
  bdGetUserRegulationPreferenceRequest request; 

  v21 = -2i64;
  if ( this->m_getRegulationPreference && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 348, ASSERT_TYPE_SANITY, "( m_getRegulationPreference == nullptr )", (const char *)&queryFormat, "m_getRegulationPreference == nullptr") )
    __debugbreak();
  v4 = (bdRemoteTask *)bdMemory::allocate(0x3F0ui64);
  v19.m_ptr = v4;
  if ( v4 )
    bdGetUserRegulationPreferenceResponse::bdGetUserRegulationPreferenceResponse((bdGetUserRegulationPreferenceResponse *)v4);
  else
    v5 = NULL;
  this->m_getRegulationPreference = v5;
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
  m_accessToken = bdLoginResult::getCrossplayAccessInfo(LoginResult)->m_accessToken;
  UserAccountInfo = (bdUserAccountID *)bdLoginResult::getUserAccountInfo(LoginResult, &result);
  bdGetUserRegulationPreferenceRequest::bdGetUserRegulationPreferenceRequest(&request, UserAccountInfo, m_accessToken);
  pTaskCreateRequest.m_appTaskType = -1;
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = Online_Regulations::GetRegulationPreferenceComplete;
  pTaskCreateRequest.m_appData = this;
  v10 = DWServicesAccess::GetInstance();
  Regulations = DWServicesAccess::GetRegulations(v10, controllerIndex);
  UserRegulationPreference = (TaskCreateRequest *)DWRegulations::getUserRegulationPreference(Regulations, &v19, &request, this->m_getRegulationPreference);
  if ( UserRegulationPreference != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v13 = *(bdRemoteTask **)&UserRegulationPreference->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  }
  if ( v19.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v19.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v19.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v19.m_ptr->~bdReferencable)(v19.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v14 = TaskManager::GetInstance(), TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    Com_Printf(25, "[REGULATIONS(%u)] Getting Regulation Preferences .\n", (unsigned int)controllerIndex);
    v15 = 1;
  }
  else
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Failed Getting Regulation Preferences.\n", (unsigned int)controllerIndex);
    m_getRegulationPreference = this->m_getRegulationPreference;
    if ( m_getRegulationPreference )
      ((void (__fastcall *)(bdGetUserRegulationPreferenceResponse *, __int64))m_getRegulationPreference->~bdRESTResponse)(m_getRegulationPreference, 1i64);
    this->m_getRegulationPreference = NULL;
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
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_userAccount.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.m_userAccount.gap38);
  bdRESTRequest::~bdRESTRequest(&request);
  return v15;
}

/*
==============
Online_Regulations::GetInstance
==============
*/
Online_Regulations *Online_Regulations::GetInstance()
{
  return &Online_Regulations::s_instance;
}

/*
==============
Online_Regulations::GetInstancePtr
==============
*/
Online_Regulations *Online_Regulations::GetInstancePtr()
{
  return &Online_Regulations::s_instance;
}

/*
==============
Online_Regulations::GetLocalEnforcement
==============
*/
__int64 Online_Regulations::GetLocalEnforcement(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType)
{
  __int64 v3; 
  int v8; 

  v3 = regulationType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 131, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 132, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  return (unsigned int)this->m_playerRegulations[v3 + (int)CL_Mgr_GetClientFromController(controllerIndex)].regulations[0].enforcement;
}

/*
==============
Online_Regulations::GetPreference
==============
*/
__int64 Online_Regulations::GetPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType)
{
  __int64 v3; 
  int v8; 

  v3 = regulationType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v8 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 141, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v8) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 142, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  return (unsigned int)this->m_playerRegulations[v3 + (int)CL_Mgr_GetClientFromController(controllerIndex)].regulations[0].preference;
}

/*
==============
Online_Regulations::GetRegulationPreferenceComplete
==============
*/
void Online_Regulations::GetRegulationPreferenceComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_Regulations *m_appData; 
  bdGetUserRegulationPreferenceResponse *m_getRegulationPreference; 
  unsigned int m_controllerIndex; 
  bdLobbyErrorCode ErrorCode; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode v9; 
  bdLobbyErrorCode v10; 
  RetryTimer::Mode v11; 
  __int64 NumRegulationPreferences; 
  __int64 v13; 
  __int64 v14; 
  const bdRegulationPreference *v15; 
  Online_Regulations::RegulationType RegulationTypeFromName; 
  bdGetUserRegulationPreferenceResponse *v17; 
  char *fmt; 

  m_appData = (Online_Regulations *)task->m_appData;
  if ( (Online_Regulations *)(((unsigned __int64)&m_appData->__vftable + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 480, ASSERT_TYPE_SANITY, "( regulations != nullptr )", (const char *)&queryFormat, "regulations != nullptr") )
    __debugbreak();
  m_getRegulationPreference = m_appData->m_getRegulationPreference;
  if ( !m_getRegulationPreference && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 483, ASSERT_TYPE_SANITY, "( response != nullptr )", (const char *)&queryFormat, "response != nullptr") )
    __debugbreak();
  m_controllerIndex = task->m_controllerIndex;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    NumRegulationPreferences = bdGetUserRegulationPreferenceResponse::getNumRegulationPreferences(m_getRegulationPreference);
    Com_Printf(25, "[REGULATIONS(%u)] Fetched (%u) preferences.\n", m_controllerIndex, NumRegulationPreferences);
    if ( (_DWORD)NumRegulationPreferences )
    {
      v13 = (unsigned int)NumRegulationPreferences;
      v14 = 0i64;
      do
      {
        v15 = &bdGetUserRegulationPreferenceResponse::getRegulationPreferences(m_getRegulationPreference)[v14];
        RegulationTypeFromName = GetRegulationTypeFromName(v15->m_regulation.m_name);
        if ( RegulationTypeFromName != DODGE )
          Online_Regulations::SetPreferenceInternal(m_appData, m_controllerIndex, RegulationTypeFromName, (const Online_Regulations::Preference)(3 - v15->m_value));
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    v11 = MODE_REFRESH;
    goto LABEL_24;
  }
  if ( (unsigned int)(taskState - 1) <= 1 )
  {
    ErrorCode = bdGetUserRegulationPreferenceResponse::getErrorCode(m_getRegulationPreference);
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    v9 = ErrorCode;
    if ( m_ptr )
      v10 = bdRemoteTask::getErrorCode(m_ptr);
    else
      v10 = BD_NO_ERROR;
    LODWORD(fmt) = v9;
    Com_PrintError(25, "[REGULATIONS(%u)] Fetch Preference failed with error code (%u - %u).\n", (unsigned int)task->m_controllerIndex, (unsigned int)v10, fmt);
    v11 = MODE_BACKOFF;
LABEL_24:
    RetryTimer::Start(&s_retryTimer, v11);
    goto LABEL_25;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 521, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unhandled taskState.") )
    __debugbreak();
LABEL_25:
  v17 = m_appData->m_getRegulationPreference;
  if ( v17 )
    ((void (__fastcall *)(bdGetUserRegulationPreferenceResponse *, __int64))v17->~bdRESTResponse)(v17, 1i64);
  m_appData->m_getRegulationPreference = NULL;
}

/*
==============
GetRegulationTypeFromName
==============
*/
__int64 GetRegulationTypeFromName(const char *regulationName)
{
  const char **p_name; 
  int v3; 
  const char *v4; 
  __int64 v5; 
  const char *v6; 
  char v7; 
  __int64 v8; 
  char v9; 

  p_name = &s_regulationConstants[0].name;
  v3 = 0;
  do
  {
    v4 = *p_name;
    v5 = 0x7FFFFFFFi64;
    if ( !regulationName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = (const char *)(regulationName - v4);
    while ( 1 )
    {
      v7 = v4[(_QWORD)v6];
      v8 = v5;
      v9 = *v4++;
      --v5;
      if ( !v8 )
        return (unsigned int)s_regulationConstants[v3].type;
      if ( v7 != v9 )
        break;
      if ( !v7 )
        return (unsigned int)s_regulationConstants[v3].type;
    }
    ++v3;
    p_name += 3;
  }
  while ( !v3 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 52, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unknown regulationName %s.", regulationName) )
    __debugbreak();
  return 1i64;
}

/*
==============
Online_Regulations::HasPendingPreferenceSet
==============
*/
bool Online_Regulations::HasPendingPreferenceSet(Online_Regulations *this)
{
  return this->m_pendingPreferenceSet.controller != -1;
}

/*
==============
Online_Regulations::ResetClient
==============
*/
void Online_Regulations::ResetClient(Online_Regulations *this, const LocalClientNum_t clientNum)
{
  __int64 v2; 
  int v5; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 258, ASSERT_TYPE_SANITY, "(unsigned)( clientNum ) < (unsigned)( 2 )", "clientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientNum, v5) )
      __debugbreak();
  }
  this->m_playerRegulations[v2].regulations[0] = 0i64;
  this->m_pendingPreferenceSet.controller = -1;
  *(_QWORD *)&this->m_pendingEnforcementFetchController = -1i64;
}

/*
==============
Online_Regulations::SetAllNonEnforcedRegulations
==============
*/
void Online_Regulations::SetAllNonEnforcedRegulations(Online_Regulations *this, const int controllerIndex, const Online_Regulations::Enforcement newEnforcement)
{
  LocalClientNum_t ClientFromController; 
  int v7; 
  Online_Regulations::PlayerRegulations *v8; 
  int v10; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v10 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 295, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v10) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 296, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = 0;
  v8 = &this->m_playerRegulations[ClientFromController];
  do
  {
    if ( v8->regulations[0].enforcement == UNKNOWN )
      v8->regulations[0].enforcement = newEnforcement;
    ++v7;
    ++v8;
  }
  while ( !v7 );
}

/*
==============
Online_Regulations::SetEnforcementInternal
==============
*/
void Online_Regulations::SetEnforcementInternal(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Enforcement localEnforcement)
{
  __int64 v4; 
  int v9; 

  v4 = regulationType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 275, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 276, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  this->m_playerRegulations[v4 + (int)CL_Mgr_GetClientFromController(controllerIndex)].regulations[0].enforcement = localEnforcement;
}

/*
==============
Online_Regulations::SetPreference
==============
*/
bool Online_Regulations::SetPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  const dvar_t *v8; 
  DWServicesAccess *Instance; 
  int v12; 

  if ( (unsigned int)controllerIndex >= 8 )
  {
    v12 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 151, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v12) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 152, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  v8 = DVARBOOL_online_regulations_enabled;
  if ( !DVARBOOL_online_regulations_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_regulations_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled )
    return 0;
  Instance = DWServicesAccess::GetInstance();
  if ( !DWServicesAccess::isReady(Instance, controllerIndex) )
  {
    Com_PrintError(25, "[REGULATIONS(%u)] Trying to Set Preference but DW is not connected, failing.\n", (unsigned int)controllerIndex);
    return 0;
  }
  if ( Online_Regulations::GetLocalEnforcement(this, controllerIndex, regulationType) == 2 )
  {
    if ( this->m_setRegulationPreference )
    {
      Com_PrintError(25, "[REGULATIONS(%u)] Trying to Set Preference but a set is already in flight, failing.\n", (unsigned int)controllerIndex);
      return 0;
    }
    else if ( RetryTimer::IsExpired(&s_retryTimer) )
    {
      return Online_Regulations::SetRegulationPreference(this, controllerIndex, regulationType, preference);
    }
    else
    {
      this->m_pendingPreferenceSet.controller = controllerIndex;
      this->m_pendingPreferenceSet.type = regulationType;
      this->m_pendingPreferenceSet.preference = preference;
      Com_Printf(25, "[REGULATIONS(%u)] Trying to Set Preference (%u) when we are in backoff, caching and trying later.\n", (unsigned int)controllerIndex, (unsigned int)regulationType);
      return 1;
    }
  }
  else
  {
    Com_Printf(25, "[REGULATIONS(%u)] Trying to Set Preference (%u) but we are not under it's enforcement.\n", (unsigned int)controllerIndex, (unsigned int)regulationType);
    return 0;
  }
}

/*
==============
Online_Regulations::SetPreferenceInternal
==============
*/
void Online_Regulations::SetPreferenceInternal(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  __int64 v4; 
  int v9; 

  v4 = regulationType;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v9 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 285, ASSERT_TYPE_SANITY, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v9) )
      __debugbreak();
  }
  if ( !CL_Mgr_IsControllerActive(controllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 286, ASSERT_TYPE_SANITY, "( CL_Mgr_IsControllerActive( controllerIndex ) )", (const char *)&queryFormat, "CL_Mgr_IsControllerActive( controllerIndex )") )
    __debugbreak();
  this->m_playerRegulations[v4 + (int)CL_Mgr_GetClientFromController(controllerIndex)].regulations[0].preference = preference;
}

/*
==============
Online_Regulations::SetRegulationPreference
==============
*/
__int64 Online_Regulations::SetRegulationPreference(Online_Regulations *this, const int controllerIndex, const Online_Regulations::RegulationType regulationType, const Online_Regulations::Preference preference)
{
  __int64 v5; 
  bdRemoteTask *v8; 
  const char *name; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  size_t v12; 
  DWServicesAccess *Instance; 
  bdLoginResult *LoginResult; 
  char *m_accessToken; 
  const bdUserAccountID *UserAccountInfo; 
  DWServicesAccess *v17; 
  DWRegulations *Regulations; 
  TaskCreateRequest *v19; 
  bdRemoteTask *v20; 
  TaskManager *v21; 
  unsigned __int8 v22; 
  bdSetUserRegulationPreferenceResponse *m_setRegulationPreference; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  char *fmt; 
  bdReference<bdRemoteTask> v27; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v29; 
  TaskCreateResult pTaskCreateResult; 
  bdRegulation regulation; 
  bdRegulationPreference regulationPreference; 
  bdUserAccountID result; 
  bdSetUserRegulationPreferenceRequest request; 

  v29 = -2i64;
  v5 = regulationType;
  if ( this->m_setRegulationPreference && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 379, ASSERT_TYPE_SANITY, "( m_setRegulationPreference == nullptr )", (const char *)&queryFormat, "m_setRegulationPreference == nullptr") )
    __debugbreak();
  if ( (unsigned int)(preference - 2) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 380, ASSERT_TYPE_SANITY, "( preference == Preference::OPT_IN || preference == Preference::OPT_OUT )", (const char *)&queryFormat, "preference == Preference::OPT_IN || preference == Preference::OPT_OUT") )
    __debugbreak();
  v8 = (bdRemoteTask *)bdMemory::allocate(0x30ui64);
  v27.m_ptr = v8;
  if ( v8 )
    bdSetUserRegulationPreferenceResponse::bdSetUserRegulationPreferenceResponse((bdSetUserRegulationPreferenceResponse *)v8);
  this->m_setRegulationPreference = (bdSetUserRegulationPreferenceResponse *)v8;
  v27.m_ptr = (bdRemoteTask *)(24 * v5);
  bdRegulation::bdRegulation(&regulation);
  name = s_regulationConstants[v5].name;
  bdHandleAssert(name != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
  v10 = -1i64;
  do
    ++v10;
  while ( name[v10] );
  if ( v10 <= 0xA )
  {
    bdHandleAssert(name != NULL, "s != BD_NULL", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdplatform\\bdplatformstring\\bdplatformstring.inl", "bdStrlen", 0x110u, "null ptr in bdStrlen");
    v11 = -1i64;
    do
      ++v11;
    while ( name[v11] );
    v12 = 9i64;
    if ( v11 < 9 )
      v12 = v11;
    memcpy_0(&regulation, name, v12);
    regulation.m_name[v12] = 0;
  }
  bdRegulationPreference::bdRegulationPreference(&regulationPreference, &regulation, *(unsigned int *)((char *)&v27.m_ptr->m_timer.m_start + (unsigned __int64)s_regulationConstants), preference == 2);
  Instance = DWServicesAccess::GetInstance();
  LoginResult = (bdLoginResult *)DWServicesAccess::getLoginResult(Instance, controllerIndex);
  m_accessToken = bdLoginResult::getCrossplayAccessInfo(LoginResult)->m_accessToken;
  UserAccountInfo = bdLoginResult::getUserAccountInfo(LoginResult, &result);
  bdSetUserRegulationPreferenceRequest::bdSetUserRegulationPreferenceRequest(&request, UserAccountInfo, &regulationPreference, m_accessToken);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)result.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)result.gap38);
  memset(&pTaskCreateRequest.m_appSecondaryCallback, 0, 24);
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateRequest.m_controllerIndex = controllerIndex;
  pTaskCreateRequest.m_onCompletionCallback = Online_Regulations::SetRegulationPreferenceComplete;
  pTaskCreateRequest.m_appTaskType = v5;
  pTaskCreateRequest.m_appData = this;
  v17 = DWServicesAccess::GetInstance();
  Regulations = DWServicesAccess::GetRegulations(v17, controllerIndex);
  v19 = (TaskCreateRequest *)DWRegulations::setUserRegulationPreference(Regulations, &v27, &request, this->m_setRegulationPreference);
  if ( v19 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v20 = *(bdRemoteTask **)&v19->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v20;
    if ( v20 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
  }
  if ( v27.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&v27.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && v27.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))v27.m_ptr->~bdReferencable)(v27.m_ptr, 1i64);
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && (v21 = TaskManager::GetInstance(), TaskManager::CreateTask(v21, &pTaskCreateRequest, &pTaskCreateResult)) )
  {
    LODWORD(fmt) = preference;
    Com_Printf(25, "[REGULATIONS(%u)] Preference Regulation Type(%u) to (%u).\n", (unsigned int)controllerIndex, (unsigned int)v5, fmt);
    Online_Regulations::SetPreferenceInternal(this, controllerIndex, (const Online_Regulations::RegulationType)v5, UNKNOWN);
    v22 = 1;
  }
  else
  {
    LODWORD(fmt) = preference;
    Com_Printf(25, "[REGULATIONS(%u)] Failed Preference Regulation Type(%u) to (%u).\n", (unsigned int)controllerIndex, (unsigned int)v5, fmt);
    m_setRegulationPreference = this->m_setRegulationPreference;
    if ( m_setRegulationPreference )
      ((void (__fastcall *)(bdSetUserRegulationPreferenceResponse *, __int64))m_setRegulationPreference->~bdRESTResponse)(m_setRegulationPreference, 1i64);
    this->m_setRegulationPreference = NULL;
    v22 = 0;
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
  bdRegulationPreference::~bdRegulationPreference(&request.m_regulationPreference);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_userAccount.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.m_userAccount.gap38);
  bdRESTRequest::~bdRESTRequest(&request);
  bdRegulationPreference::~bdRegulationPreference(&regulationPreference);
  bdRegulation::~bdRegulation(&regulation);
  return v22;
}

/*
==============
Online_Regulations::SetRegulationPreferenceComplete
==============
*/
void Online_Regulations::SetRegulationPreferenceComplete(GenericTask *task, eTaskManagerTaskState taskState)
{
  Online_Regulations *m_appData; 
  bdSetUserRegulationPreferenceResponse *m_setRegulationPreference; 
  unsigned int m_appTaskType; 
  unsigned int m_controllerIndex; 
  bdLobbyErrorCode ErrorCode; 
  bdRemoteTask *m_ptr; 
  bdLobbyErrorCode v10; 
  bdLobbyErrorCode v11; 
  RetryTimer::Mode v12; 
  bool Success; 
  const char *v14; 
  bdSetUserRegulationPreferenceResponse *v15; 
  char *fmt; 
  __int64 v17; 

  m_appData = (Online_Regulations *)task->m_appData;
  if ( (Online_Regulations *)(((unsigned __int64)&m_appData->__vftable + 7) & 0xFFFFFFFFFFFFFFF8ui64) != m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 300, ASSERT_TYPE_ASSERT, "( I_align( addr, dest_align ) == addr )", "src pointer %p must be aligned to %llu to cast to this type", m_appData, 8i64) )
    __debugbreak();
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 533, ASSERT_TYPE_SANITY, "( regulations != nullptr )", (const char *)&queryFormat, "regulations != nullptr") )
    __debugbreak();
  m_setRegulationPreference = m_appData->m_setRegulationPreference;
  if ( !m_setRegulationPreference && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 536, ASSERT_TYPE_SANITY, "( response != nullptr )", (const char *)&queryFormat, "response != nullptr") )
    __debugbreak();
  m_appTaskType = task->m_appTaskType;
  m_controllerIndex = task->m_controllerIndex;
  if ( taskState == TASKSTATE_SUCCESS )
  {
    Success = bdSetUserRegulationPreferenceResponse::getReadSuccess(m_setRegulationPreference);
    v14 = "failed";
    if ( Success )
      v14 = "succeeded";
    Com_Printf(25, "[REGULATIONS(%u)] Set preference for Type(%u) %s.\n", m_controllerIndex, m_appTaskType, v14);
    if ( Success )
      Online_Regulations::FetchPreferences(m_appData, m_controllerIndex);
    v12 = MODE_REFRESH;
    goto LABEL_23;
  }
  if ( (unsigned int)(taskState - 1) <= 1 )
  {
    ErrorCode = bdSetUserRegulationPreferenceResponse::getErrorCode(m_setRegulationPreference);
    m_ptr = task->m_remoteDemonwareTask.m_ptr;
    v10 = ErrorCode;
    if ( m_ptr )
      v11 = bdRemoteTask::getErrorCode(m_ptr);
    else
      v11 = BD_NO_ERROR;
    LODWORD(v17) = v10;
    LODWORD(fmt) = v11;
    Com_PrintError(25, "[REGULATIONS(%u)] Set Preference failed on Type(%u) with error code (%u - %u).\n", (unsigned int)task->m_controllerIndex, m_appTaskType, fmt, v17);
    Online_Regulations::SetPreferenceInternal(m_appData, m_controllerIndex, (const Online_Regulations::RegulationType)m_appTaskType, (const Online_Regulations::Preference)1);
    v12 = MODE_BACKOFF;
LABEL_23:
    RetryTimer::Start(&s_retryTimer, v12);
    goto LABEL_24;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_regulations.cpp", 566, ASSERT_TYPE_SANITY, (const char *)&queryFormat.fmt + 3, "Unhandled taskState.") )
    __debugbreak();
LABEL_24:
  v15 = m_appData->m_setRegulationPreference;
  if ( v15 )
    ((void (__fastcall *)(bdSetUserRegulationPreferenceResponse *, __int64))v15->~bdRESTResponse)(v15, 1i64);
  m_appData->m_setRegulationPreference = NULL;
}

/*
==============
TestFetchEnforcement
==============
*/
void TestFetchEnforcement()
{
  int v0; 

  v0 = Cmd_ArgInt(1);
  Online_Regulations::FetchEnforcement(&Online_Regulations::s_instance, v0);
}

/*
==============
TestFetchPreferences
==============
*/
void TestFetchPreferences()
{
  int v0; 

  v0 = Cmd_ArgInt(1);
  Online_Regulations::FetchPreferences(&Online_Regulations::s_instance, v0);
}

/*
==============
TestGetEnforcement
==============
*/
void TestGetEnforcement()
{
  unsigned int v0; 
  Online_Regulations::RegulationType v1; 
  Online_Regulations::Enforcement LocalEnforcement; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgInt(2);
  LocalEnforcement = Online_Regulations::GetLocalEnforcement(&Online_Regulations::s_instance, v0, v1);
  Com_Printf(25, "[REGULATIONS(%u)] Type(%u) has enforcement (%u).\n", v0, (unsigned int)v1, LocalEnforcement);
}

/*
==============
TestGetPreference
==============
*/
void TestGetPreference()
{
  unsigned int v0; 
  Online_Regulations::RegulationType v1; 
  Online_Regulations::Preference Preference; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgInt(2);
  Preference = Online_Regulations::GetPreference(&Online_Regulations::s_instance, v0, v1);
  Com_Printf(25, "[REGULATIONS(%u)] Type(%u) has preference (%u).\n", v0, (unsigned int)v1, Preference);
}

/*
==============
TestSetPreference
==============
*/
void TestSetPreference()
{
  unsigned int v0; 
  Online_Regulations::RegulationType v1; 
  Online_Regulations::Preference v2; 
  bool v3; 
  const char *v4; 
  Online_Regulations::Preference v5; 

  v0 = Cmd_ArgInt(1);
  v1 = Cmd_ArgInt(2);
  v2 = Cmd_ArgInt(3);
  v3 = Online_Regulations::SetPreference(&Online_Regulations::s_instance, v0, v1, v2);
  v5 = v2;
  v4 = "Failed";
  if ( v3 )
    v4 = "Succeeded";
  Com_Printf(25, "[REGULATIONS(%u)] Type(%u) %s preference to (%u).\n", v0, (unsigned int)v1, v4, v5);
}

