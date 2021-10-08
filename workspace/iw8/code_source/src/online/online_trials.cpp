/*
==============
OnlineTrials::RegisterLuaFunctions
==============
*/

void __fastcall OnlineTrials::RegisterLuaFunctions(OnlineTrials *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineTrials@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineTrials::Frame
==============
*/

void __fastcall OnlineTrials::Frame(OnlineTrials *this)
{
  ?Frame@OnlineTrials@@UEAAXXZ(this);
}

/*
==============
OnlineTrials::ControllerFrame
==============
*/

void __fastcall OnlineTrials::ControllerFrame(OnlineTrials *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineTrials@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineTrials::Uninit
==============
*/

void __fastcall OnlineTrials::Uninit(OnlineTrials *this)
{
  ?Uninit@OnlineTrials@@UEAAXXZ(this);
}

/*
==============
OnlineTrials::HandleCompletion
==============
*/

void __fastcall OnlineTrials::HandleCompletion(OnlineTrials *this, const XUID xuid, bdJSONDeserializer *json)
{
  ?HandleCompletion@OnlineTrials@@QEAAXUXUID@@PEAVbdJSONDeserializer@@@Z(this, xuid, json);
}

/*
==============
OnlineTrials::TrialActivationFailed
==============
*/

void __fastcall OnlineTrials::TrialActivationFailed(OnlineTrials *this, const int controllerIndex)
{
  ?TrialActivationFailed@OnlineTrials@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineTrials::GetInstancePtr
==============
*/

OnlineTrials *__fastcall OnlineTrials::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineTrials@@SAPEAV1@XZ();
}

/*
==============
OnlineTrials::OnActivateAchievementComplete
==============
*/

void __fastcall OnlineTrials::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnActivateAchievementComplete@OnlineTrials@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineTrials::Init
==============
*/

bool __fastcall OnlineTrials::Init(OnlineTrials *this)
{
  return ?Init@OnlineTrials@@UEAA_NXZ(this);
}

/*
==============
OnlineTrials::OnSignedOut
==============
*/

void __fastcall OnlineTrials::OnSignedOut(OnlineTrials *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineTrials@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineTrials::GetStatus
==============
*/

unsigned int __fastcall OnlineTrials::GetStatus(OnlineTrials *this, const int controllerIndex, unsigned int trial_id)
{
  return ?GetStatus@OnlineTrials@@QEAAIHI@Z(this, controllerIndex, trial_id);
}

/*
==============
OnlineTrials::StartTrial
==============
*/

void __fastcall OnlineTrials::StartTrial(OnlineTrials *this, const int controllerIndex, const int trialID, const int tokenID)
{
  ?StartTrial@OnlineTrials@@QEAAXHHH@Z(this, controllerIndex, trialID, tokenID);
}

/*
==============
OnlineTrials::OnUnregistered
==============
*/

void __fastcall OnlineTrials::OnUnregistered(OnlineTrials *this)
{
  ?OnUnregistered@OnlineTrials@@UEAAXXZ(this);
}

/*
==============
OnlineTrials::OnDisconnect
==============
*/

void __fastcall OnlineTrials::OnDisconnect(OnlineTrials *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineTrials@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineTrials::OnSignedIn
==============
*/

void __fastcall OnlineTrials::OnSignedIn(OnlineTrials *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineTrials@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineTrials::GetInstance
==============
*/

OnlineTrials *__fastcall OnlineTrials::GetInstance()
{
  return ?GetInstance@OnlineTrials@@SAAEAV1@XZ();
}

/*
==============
OnlineTrials::OnRegistered
==============
*/

void __fastcall OnlineTrials::OnRegistered(OnlineTrials *this)
{
  ?OnRegistered@OnlineTrials@@UEAAXXZ(this);
}

/*
==============
OnlineTrials::AddProgression
==============
*/

void __fastcall OnlineTrials::AddProgression(OnlineTrials *this, const int controllerIndex, bdAchievementState *state)
{
  ?AddProgression@OnlineTrials@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, state);
}

/*
==============
OnlineTrials::OutputCurrentState
==============
*/

void __fastcall OnlineTrials::OutputCurrentState(OnlineTrials *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineTrials@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
LUI_CoD_LuaCall_GetRewards
==============
*/
__int64 LUI_CoD_LuaCall_GetRewards(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int *v6; 
  __int64 v7; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Quests.GetRewards( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Quests.GetRewards( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = 1;
  v4 = OnlineQuests::s_instance.m_totalRewards[v2];
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("items", LUI_luaVM);
  v5 = v4;
  if ( (int)v4 > 0 )
  {
    v6 = OnlineQuests::s_instance.m_rewards[v2];
    do
    {
      v7 = *v6;
      LUI_BeginTable(v3, luaVM);
      LUI_SetTableInt("ID", v7, luaVM);
      LUI_EndTable(LUI_luaVM);
      ++v3;
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  LUI_EndTable(LUI_luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
OnlineTrials::OnRegistered
==============
*/
void OnlineTrials::OnRegistered(OnlineTrials *this)
{
  ;
}

/*
==============
OnlineTrials::OnUnregistered
==============
*/
void OnlineTrials::OnUnregistered(OnlineTrials *this)
{
  ;
}

/*
==============
OnlineTrials::Init
==============
*/
char OnlineTrials::Init(OnlineTrials *this)
{
  return 1;
}

/*
==============
OnlineTrials::Uninit
==============
*/
void OnlineTrials::Uninit(OnlineTrials *this)
{
  ;
}

/*
==============
OnlineTrials::Frame
==============
*/
void OnlineTrials::Frame(OnlineTrials *this)
{
  ;
}

/*
==============
OnlineTrials::ControllerFrame
==============
*/
void OnlineTrials::ControllerFrame(OnlineTrials *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineTrials::OnSignedIn
==============
*/
void OnlineTrials::OnSignedIn(OnlineTrials *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineTrials::OnSignedOut
==============
*/
void OnlineTrials::OnSignedOut(OnlineTrials *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineTrials::OnDisconnect
==============
*/
void OnlineTrials::OnDisconnect(OnlineTrials *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineTrials::RegisterLuaFunctions
==============
*/
void OnlineTrials::RegisterLuaFunctions(OnlineTrials *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Trials", trials_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineTrials::OutputCurrentState
==============
*/
void OnlineTrials::OutputCurrentState(OnlineTrials *this, const int controllerIndex)
{
  Com_Printf(25, "TRIALS DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "TRIALS DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_StartTrial
==============
*/
__int64 LUI_CoD_LuaCall_StartTrial(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Trials.StartTrial( <controllerIndex>, <trial_id>, <token_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Trials.StartTrial( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Trials.StartTrial( <trial_id> )\n");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Trials.StartTrial( <token_id> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = lui_tointeger32(luaVM, 3);
  OnlineTrials::StartTrial(&OnlineTrials::s_instance, v2, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_GetStatus
==============
*/
__int64 LUI_COD_LuaCall_GetStatus(lua_State *const luaVM)
{
  int v2; 
  unsigned int status; 
  int v4; 
  int v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  __int64 v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Trials.GetStatus( <controllerIndex>, <trial_id> )");
  v2 = lui_tointeger32(luaVM, 1);
  status = 0;
  v4 = 0;
  v5 = lui_tointeger32(luaVM, 2);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  v7 = OnlineTrials::s_instance.m_totalTrials[ClientFromController];
  if ( v7 )
  {
    v8 = ClientFromController;
    while ( OnlineTrials::s_instance.m_trials[v8][v4].id != v5 )
    {
      if ( ++v4 >= v7 )
        goto LABEL_9;
    }
    status = OnlineTrials::s_instance.m_trials[v8][v4].status;
  }
LABEL_9:
  j_lua_pushinteger(luaVM, status);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
OnlineTrials::AddProgression
==============
*/
void OnlineTrials::AddProgression(OnlineTrials *this, const int controllerIndex, bdAchievementState *state)
{
  __int64 ClientFromController; 
  unsigned int Id; 
  const char *Name; 
  __int64 v8; 
  unsigned int *v9; 
  unsigned __int64 v10; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Id = bdAchievementState::getId(state);
  Name = bdAchievementState::getName(state);
  Com_Printf(25, "TRIALS: %d (%s) has been found and added.\n", Id, Name);
  v8 = ClientFromController;
  v9 = &this->m_totalTrials[ClientFromController];
  v10 = 100 * v8;
  this->m_trials[v8][*v9].id = Id;
  this->m_trials[v10 / 0x64][*v9].status = bdAchievementState::getStatus(state);
  this->m_trials[0][*v9 + v10].active = 0;
  if ( bdAchievementState::getStatus(state) == ACTIVE )
    this->m_trials[0][*v9 + v10].active = 1;
  ++*v9;
}

/*
==============
OnlineTrials::GetInstance
==============
*/
OnlineTrials *OnlineTrials::GetInstance()
{
  return &OnlineTrials::s_instance;
}

/*
==============
OnlineTrials::GetInstancePtr
==============
*/
OnlineTrials *OnlineTrials::GetInstancePtr()
{
  return &OnlineTrials::s_instance;
}

/*
==============
OnlineTrials::GetStatus
==============
*/
__int64 OnlineTrials::GetStatus(OnlineTrials *this, const int controllerIndex, unsigned int trial_id)
{
  int v5; 
  __int64 ClientFromController; 
  unsigned int v7; 
  TrialProgression *i; 

  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalTrials[ClientFromController];
  if ( !v7 )
    return 0i64;
  for ( i = this->m_trials[ClientFromController]; i->id != trial_id; ++i )
  {
    if ( ++v5 >= v7 )
      return 0i64;
  }
  return this->m_trials[ClientFromController][v5].status;
}

/*
==============
OnlineTrials::HandleCompletion
==============
*/
void OnlineTrials::HandleCompletion(OnlineTrials *this, const XUID xuid, bdJSONDeserializer *json)
{
  __int64 PortForLocalXUID; 
  unsigned int i; 
  __int64 v8; 
  __int64 v9; 
  char v10; 
  char v11; 
  unsigned int j; 
  int v14; 
  bdJSONDeserializer v15; 
  bdJSONDeserializer value; 
  __int64 v17; 
  bdJSONDeserializer v18; 
  char v19[32]; 

  v17 = -2i64;
  bdJSONDeserializer::bdJSONDeserializer(&value);
  PortForLocalXUID = Live_GetPortForLocalXUID(xuid);
  this->m_totalRewards[PortForLocalXUID] = 0;
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &value) )
  {
    for ( i = 0; i < value.m_count; ++i )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v15);
      bdJSONDeserializer::getElementByIndex(&value, i, &v15);
      bdJSONDeserializer::getString(&v15, "type", v19, 0x20u);
      v8 = 0i64;
      v9 = 0x7FFFFFFFi64;
      do
      {
        v10 = v19[v8];
        v11 = aGrantProduct[v8++];
        if ( !v9-- )
          break;
        if ( v10 != v11 )
          goto LABEL_11;
      }
      while ( v10 );
      bdJSONDeserializer::getObject(&v15, "inventory", &v15);
      bdJSONDeserializer::getArray(&v15, "granted_items", &v15);
      for ( j = 0; j < v15.m_count; ++j )
      {
        if ( j >= 4 )
          break;
        bdJSONDeserializer::bdJSONDeserializer(&v18);
        bdJSONDeserializer::getElementByIndex(&v15, j, &v18);
        bdJSONDeserializer::getInt32(&v18, (const char *const)&valueOut, &v14);
        this->m_rewards[PortForLocalXUID][this->m_totalRewards[PortForLocalXUID]++] = v14;
        bdJSONDeserializer::~bdJSONDeserializer(&v18);
      }
LABEL_11:
      bdJSONDeserializer::~bdJSONDeserializer(&v15);
    }
  }
  if ( this->m_totalRewards[PortForLocalXUID] > 0 && LUI_BeginEvent(LOCAL_CLIENT_0, "receivedTrialReward", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  bdJSONDeserializer::~bdJSONDeserializer(&value);
}

/*
==============
OnlineTrials::OnActivateAchievementComplete
==============
*/
void OnlineTrials::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  Online_Loot *Instance; 
  LocalClientNum_t outLocalClientNum; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_trials.cpp", 97, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "activateAchievement - Error\n");
      OnlineTrials::TrialActivationFailed(&OnlineTrials::s_instance, m_controllerIndex);
    }
  }
  else
  {
    Com_PrintError(25, "activateAchievement - Success\n");
    Instance = Online_Loot::GetInstance();
    Online_Loot::UpdateItemInInventory(Instance, m_controllerIndex, OnlineTrials::s_instance.m_currentToken[m_controllerIndex], -1, 0);
    if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) && LUI_BeginEvent(outLocalClientNum, "trial_activated", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineTrials::StartTrial
==============
*/
void OnlineTrials::StartTrial(OnlineTrials *this, const int controllerIndex, const int trialID, const int tokenID)
{
  unsigned __int64 v4; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v9; 
  DWServicesAccess *v10; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v12; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  _BYTE *v15; 
  unsigned __int64 v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  LocalClientNum_t outLocalClientNum; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v24; 
  bdActivateAchievementRequest request; 

  v24 = -2i64;
  v4 = trialID;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  this->m_currentToken[controllerIndex] = tokenID;
  UTC = LiveStorage_GetUTC();
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v9 = j_va("%u", TitleID);
  bdActivateAchievementRequest::bdActivateAchievementRequest(&request, v9, v4, UTC);
  v10 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v10, controllerIndex);
  v12 = (TaskCreateRequest *)DWAchievementEngine::activateAchievement(AchievementEngine, &result, &request);
  if ( v12 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
    v13 = *(bdRemoteTask **)&v12->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = controllerIndex;
    pTaskCreateRequest.m_onCompletionCallback = OnlineTrials::OnActivateAchievementComplete;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineTrials::StartTrial", pTaskCreateResult.m_localTaskId, controllerIndex);
    }
    else
    {
      Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineTrials::StartTrial", (unsigned int)controllerIndex);
      OnlineTrials::TrialActivationFailed(&OnlineTrials::s_instance, controllerIndex);
    }
  }
  else
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineTrials::StartTrial", (unsigned int)controllerIndex);
    if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "trial_activation_failed", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  v15 = memchr_0(&request.m_name, 0, 0x65ui64);
  if ( v15 )
    v16 = v15 - (_BYTE *)&request.m_name;
  else
    v16 = 101i64;
  bdHandleAssert(v16 < 0x65, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected", *(_QWORD *)&pTaskCreateRequest.m_controllerIndex, pTaskCreateRequest.m_appData, pTaskCreateRequest.m_appSecondaryCallback);
  v17 = memchr_0(&request.__vftable + 2, 0, 0x15ui64);
  if ( v17 )
    v18 = v17 - (_BYTE *)(&request.__vftable + 2);
  else
    v18 = 21i64;
  bdHandleAssert(v18 < 0x15, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<20>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)request.gapA0);
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
OnlineTrials::TrialActivationFailed
==============
*/
void OnlineTrials::TrialActivationFailed(OnlineTrials *this, const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "trial_activation_failed", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

