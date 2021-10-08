/*
==============
OnlineBattlepass::GetInstance
==============
*/

OnlineBattlepass *__fastcall OnlineBattlepass::GetInstance()
{
  return ?GetInstance@OnlineBattlepass@@SAAEAV1@XZ();
}

/*
==============
OnlineBattlepass::NeedFixUp
==============
*/

bool __fastcall OnlineBattlepass::NeedFixUp(OnlineBattlepass *this, const int controllerIndex)
{
  return ?NeedFixUp@OnlineBattlepass@@QEAA_NH@Z(this, controllerIndex);
}

/*
==============
OnlineBattlepass::AddProgression
==============
*/

void __fastcall OnlineBattlepass::AddProgression(OnlineBattlepass *this, const int controllerIndex, bdAchievementState *state)
{
  ?AddProgression@OnlineBattlepass@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, state);
}

/*
==============
OnlineBattlepass::GetXP
==============
*/

unsigned __int64 __fastcall OnlineBattlepass::GetXP(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return ?GetXP@OnlineBattlepass@@QEAA_KHH@Z(this, controllerIndex, season);
}

/*
==============
OnlineBattlepass::OnSignedOut
==============
*/

void __fastcall OnlineBattlepass::OnSignedOut(OnlineBattlepass *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineBattlepass@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineBattlepass::ControllerFrame
==============
*/

void __fastcall OnlineBattlepass::ControllerFrame(OnlineBattlepass *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineBattlepass@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineBattlepass::DoesOwnBattlepass
==============
*/

bool __fastcall OnlineBattlepass::DoesOwnBattlepass(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return ?DoesOwnBattlepass@OnlineBattlepass@@QEAA_NHH@Z(this, controllerIndex, season);
}

/*
==============
OnlineBattlepass::Frame
==============
*/

void __fastcall OnlineBattlepass::Frame(OnlineBattlepass *this)
{
  ?Frame@OnlineBattlepass@@UEAAXXZ(this);
}

/*
==============
OnlineBattlepass::SetOwnsBattlepass
==============
*/

void __fastcall OnlineBattlepass::SetOwnsBattlepass(OnlineBattlepass *this, const int controllerIndex, const int season, const bool does_own)
{
  ?SetOwnsBattlepass@OnlineBattlepass@@QEAAXHH_N@Z(this, controllerIndex, season, does_own);
}

/*
==============
OnlineBattlepass::ActivateItem
==============
*/

void __fastcall OnlineBattlepass::ActivateItem(OnlineBattlepass *this, const int controllerIndex, const int ID, const int itemID)
{
  ?ActivateItem@OnlineBattlepass@@QEAAXHHH@Z(this, controllerIndex, ID, itemID);
}

/*
==============
OnlineBattlepass::HandleUpdate
==============
*/

void __fastcall OnlineBattlepass::HandleUpdate(OnlineBattlepass *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  ?HandleUpdate@OnlineBattlepass@@QEAAXHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, json, complete);
}

/*
==============
OnlineBattlepass::RemoveFromChallengeActivationCache
==============
*/

void __fastcall OnlineBattlepass::RemoveFromChallengeActivationCache(OnlineBattlepass *this, const int controllerIndex, const unsigned __int64 id)
{
  ?RemoveFromChallengeActivationCache@OnlineBattlepass@@QEAAXH_K@Z(this, controllerIndex, id);
}

/*
==============
OnlineBattlepass::GetRank
==============
*/

unsigned __int64 __fastcall OnlineBattlepass::GetRank(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return ?GetRank@OnlineBattlepass@@QEAA_KHH@Z(this, controllerIndex, season);
}

/*
==============
OnlineBattlepass::OutputCurrentState
==============
*/

void __fastcall OnlineBattlepass::OutputCurrentState(OnlineBattlepass *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineBattlepass@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineBattlepass::RegisterLuaFunctions
==============
*/

void __fastcall OnlineBattlepass::RegisterLuaFunctions(OnlineBattlepass *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineBattlepass@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineBattlepass::Uninit
==============
*/

void __fastcall OnlineBattlepass::Uninit(OnlineBattlepass *this)
{
  ?Uninit@OnlineBattlepass@@UEAAXXZ(this);
}

/*
==============
OnlineBattlepass::OnSignedIn
==============
*/

void __fastcall OnlineBattlepass::OnSignedIn(OnlineBattlepass *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineBattlepass@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineBattlepass::Init
==============
*/

bool __fastcall OnlineBattlepass::Init(OnlineBattlepass *this)
{
  return ?Init@OnlineBattlepass@@UEAA_NXZ(this);
}

/*
==============
OnlineBattlepass::ActivationFailed
==============
*/

void __fastcall OnlineBattlepass::ActivationFailed(OnlineBattlepass *this, const int controllerIndex)
{
  ?ActivationFailed@OnlineBattlepass@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineBattlepass::SendEventFailed
==============
*/

void __fastcall OnlineBattlepass::SendEventFailed(OnlineBattlepass *this, const int controllerIndex)
{
  ?SendEventFailed@OnlineBattlepass@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineBattlepass::OnActivateComplete
==============
*/

void __fastcall OnlineBattlepass::OnActivateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnActivateComplete@OnlineBattlepass@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineBattlepass::OnUnregistered
==============
*/

void __fastcall OnlineBattlepass::OnUnregistered(OnlineBattlepass *this)
{
  ?OnUnregistered@OnlineBattlepass@@UEAAXXZ(this);
}

/*
==============
OnlineBattlepass::OnDisconnect
==============
*/

void __fastcall OnlineBattlepass::OnDisconnect(OnlineBattlepass *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineBattlepass@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineBattlepass::FixUp
==============
*/

void __fastcall OnlineBattlepass::FixUp(OnlineBattlepass *this, const int controllerIndex, const bool send_event)
{
  ?FixUp@OnlineBattlepass@@QEAAXH_N@Z(this, controllerIndex, send_event);
}

/*
==============
OnlineBattlepass::OnRegistered
==============
*/

void __fastcall OnlineBattlepass::OnRegistered(OnlineBattlepass *this)
{
  ?OnRegistered@OnlineBattlepass@@UEAAXXZ(this);
}

/*
==============
OnlineBattlepass::SendEvent
==============
*/

void __fastcall OnlineBattlepass::SendEvent(OnlineBattlepass *this, const int controllerIndex, const char *ae_event)
{
  ?SendEvent@OnlineBattlepass@@QEAAXHPEBD@Z(this, controllerIndex, ae_event);
}

/*
==============
OnlineBattlepass::GetInstancePtr
==============
*/

OnlineBattlepass *__fastcall OnlineBattlepass::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineBattlepass@@SAPEAV1@XZ();
}

/*
==============
OnlineBattlepass::AddtoChallengeActivationCache
==============
*/

void __fastcall OnlineBattlepass::AddtoChallengeActivationCache(OnlineBattlepass *this, const int controllerIndex, const unsigned __int64 id)
{
  ?AddtoChallengeActivationCache@OnlineBattlepass@@QEAAXH_K@Z(this, controllerIndex, id);
}

/*
==============
OnlineBattlepass::OnSendEventComplete
==============
*/

void __fastcall OnlineBattlepass::OnSendEventComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnSendEventComplete@OnlineBattlepass@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
LUI_COD_LuaCall_GetXP
==============
*/
__int64 LUI_COD_LuaCall_GetXP(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Battlepass.GetXP( <controllerIndex><season> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  j_lua_pushinteger(luaVM, OnlineBattlepass::s_instance.m_battlepassXP[v2][v3]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_Purchase
==============
*/
__int64 LUI_COD_LuaCall_Purchase(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  __int64 v7; 
  Online_Loot *v8; 
  int v9; 
  int v10; 
  Online_Loot *Instance; 
  unsigned int v12; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Battlepass.Purchase( <controllerIndex>, <itemID> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  StringTable_GetAsset("loot/battlepass_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 640, ASSERT_TYPE_ASSERT, "(bpTable)", (const char *)&queryFormat, "bpTable") )
    __debugbreak();
  v4 = j_va("%d", v3);
  v5 = StringTable_Lookup(tablePtr, 0, v4, 21);
  v6 = v5;
  v7 = -1i64;
  do
    ++v7;
  while ( v5[v7] );
  if ( (_DWORD)v7 && (v8 = Online_Loot::GetInstance(), v9 = atoi(v6), Online_Loot::GetItemUnlockQuantity(v8, v2, v9)) )
  {
    Com_Printf(25, "Unable to buy Battlepass (ID %d Tracker %s). We already own it.\n", v3, v6);
    v10 = 0;
  }
  else
  {
    Instance = Online_Loot::GetInstance();
    Online_Loot::PurchaseItem(Instance, v2, v3, 0);
    v10 = 1;
  }
  j_lua_pushboolean(luaVM, v10);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_Activate
==============
*/
__int64 LUI_COD_LuaCall_Activate(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Battlepass.Activate( <controllerIndex>, <challengeID>, <itemID> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  v4 = lui_tointeger32(luaVM, 3);
  OnlineBattlepass::s_instance.m_battlepassMode[v2] = BATTLEPASS_MODE_NORMAL;
  OnlineBattlepass::ActivateItem(&OnlineBattlepass::s_instance, v2, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_SendEvent
==============
*/
__int64 LUI_COD_LuaCall_SendEvent(lua_State *const luaVM)
{
  __int64 v2; 
  const char *v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Battlepass.SendEvent( <controllerIndex>, <event> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  OnlineBattlepass::s_instance.m_battlepassMode[v2] = BATTLEPASS_MODE_NORMAL;
  OnlineBattlepass::SendEvent(&OnlineBattlepass::s_instance, v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_IsOwned
==============
*/
__int64 LUI_COD_LuaCall_IsOwned(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Battlepass.IsOwned( <controllerIndex><season> )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  j_lua_pushboolean(luaVM, OnlineBattlepass::s_instance.m_ownsBattlepass[v2][v3]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_NeedFixUp
==============
*/
__int64 LUI_COD_LuaCall_NeedFixUp(lua_State *const luaVM)
{
  __int64 v2; 
  int v3; 
  int RowCount; 
  int v5; 
  const char *ColumnValueForRow; 
  const char *v7; 
  int v8; 
  Online_Loot *Instance; 
  __int64 v10; 
  BATTLEPASS_MODE *v11; 
  unsigned int v12; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Battlepass.NeedFixUp( <controllerIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  StringTable_GetAsset("loot/battlepass_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 519, ASSERT_TYPE_ASSERT, "(bpTable)", (const char *)&queryFormat, "bpTable") )
    __debugbreak();
  v3 = 0;
  RowCount = StringTable_GetRowCount(tablePtr);
  v5 = 0;
  if ( RowCount <= 0 )
  {
LABEL_10:
    v10 = 0i64;
    v11 = &OnlineBattlepass::s_instance.m_battlepassMode[80 * v2 - 638];
    while ( !*(_BYTE *)v11 )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= 20 )
        goto LABEL_15;
    }
  }
  else
  {
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 2);
      if ( (unsigned int)atoi(ColumnValueForRow) <= 1 )
      {
        v7 = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
        v8 = atoi(v7);
        Instance = Online_Loot::GetInstance();
        if ( Online_Loot::GetItemQuantity(Instance, v2, v8) )
          break;
      }
      if ( ++v5 >= RowCount )
        goto LABEL_10;
    }
  }
  v3 = 1;
LABEL_15:
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v12);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_FixUp
==============
*/
__int64 LUI_COD_LuaCall_FixUp(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Battlepass.FixUp( <controllerIndex> )");
  v2 = lui_tointeger32(luaVM, 1);
  OnlineBattlepass::FixUp(&OnlineBattlepass::s_instance, v2, 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
OnlineBattlepass::OnRegistered
==============
*/
void OnlineBattlepass::OnRegistered(OnlineBattlepass *this)
{
  ;
}

/*
==============
OnlineBattlepass::OnUnregistered
==============
*/
void OnlineBattlepass::OnUnregistered(OnlineBattlepass *this)
{
  ;
}

/*
==============
OnlineBattlepass::Init
==============
*/
char OnlineBattlepass::Init(OnlineBattlepass *this)
{
  memset_0(this->m_activatedChallenges, 0, sizeof(this->m_activatedChallenges));
  return 1;
}

/*
==============
OnlineBattlepass::Uninit
==============
*/
void OnlineBattlepass::Uninit(OnlineBattlepass *this)
{
  ;
}

/*
==============
OnlineBattlepass::Frame
==============
*/
void OnlineBattlepass::Frame(OnlineBattlepass *this)
{
  ;
}

/*
==============
OnlineBattlepass::ControllerFrame
==============
*/
void OnlineBattlepass::ControllerFrame(OnlineBattlepass *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineBattlepass::OnSignedIn
==============
*/
void OnlineBattlepass::OnSignedIn(OnlineBattlepass *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineBattlepass::OnSignedOut
==============
*/
void OnlineBattlepass::OnSignedOut(OnlineBattlepass *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineBattlepass::OnDisconnect
==============
*/
void OnlineBattlepass::OnDisconnect(OnlineBattlepass *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineBattlepass::RegisterLuaFunctions
==============
*/
void OnlineBattlepass::RegisterLuaFunctions(OnlineBattlepass *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Battlepass", battlepass_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineBattlepass::OutputCurrentState
==============
*/
void OnlineBattlepass::OutputCurrentState(OnlineBattlepass *this, const int controllerIndex)
{
  Com_Printf(25, "BATTLEPASS DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "BATTLEPASS DUMP END\n");
}

/*
==============
OnlineBattlepass::ActivateItem
==============
*/
void OnlineBattlepass::ActivateItem(OnlineBattlepass *this, const int controllerIndex, const int ID, const int itemID)
{
  unsigned __int64 v5; 
  __int64 v6; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v11; 
  DWServicesAccess *v12; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v14; 
  bdRemoteTask *v15; 
  TaskManager *v16; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v21; 
  bdActivateAchievementRequest request; 

  v21 = -2i64;
  v5 = ID;
  v6 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  UTC = LiveStorage_GetUTC();
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v11 = j_va("%u", TitleID);
  bdActivateAchievementRequest::bdActivateAchievementRequest(&request, v11, v5, UTC);
  v12 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v12, v6);
  v14 = (TaskCreateRequest *)DWAchievementEngine::activateAchievement(AchievementEngine, &result, &request);
  if ( v14 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v15 = *(bdRemoteTask **)&v14->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v15;
    if ( v15 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v15->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  this->m_currentItem[v6] = itemID;
  if ( (unsigned int)(itemID - 450000) <= 0x270F )
    this->m_currentItem[v6] = itemID - 20000;
  this->m_currentChallenge[v6] = v5;
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = v6;
    pTaskCreateRequest.m_onCompletionCallback = OnlineBattlepass::OnActivateComplete;
    v16 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v16, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineBattlepass::ActivateItem", pTaskCreateResult.m_localTaskId, v6);
      goto LABEL_16;
    }
    Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineBattlepass::ActivateItem", (unsigned int)v6);
  }
  else
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineBattlepass::ActivateItem", (unsigned int)v6);
  }
  OnlineBattlepass::ActivationFailed(&OnlineBattlepass::s_instance, v6);
LABEL_16:
  bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_name);
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
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
OnlineBattlepass::ActivationFailed
==============
*/
void OnlineBattlepass::ActivationFailed(OnlineBattlepass *this, const int controllerIndex)
{
  __int64 v2; 
  BATTLEPASS_MODE v4; 
  const char *v5; 
  LocalClientNum_t outLocalClientNum; 

  v2 = controllerIndex;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
  {
    v4 = this->m_battlepassMode[v2];
    if ( v4 )
    {
      if ( v4 != BATTLEPASS_MODE_FIXING_UP )
        return;
      v5 = "battlepass_fixup_failed";
    }
    else
    {
      v5 = "battlepass_activation_failed";
    }
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, v5, LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineBattlepass::AddProgression
==============
*/
void OnlineBattlepass::AddProgression(OnlineBattlepass *this, const int controllerIndex, bdAchievementState *state)
{
  __int64 v4; 
  int v6; 
  unsigned __int64 Id; 
  const char *Name; 
  unsigned __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned __int64 AchievementCurrentProgress; 
  const char *TargetName; 
  const char *v16; 
  const char *v17; 
  __int64 v18; 
  const char *v19; 
  signed __int64 v20; 
  int v21; 
  int v22; 
  int v24; 
  int v25; 
  _BYTE *v26; 
  unsigned __int64 v27; 
  const char *v28; 
  __int64 v29; 
  const char *v30; 
  signed __int64 v31; 
  int v32; 
  int v33; 
  int v35; 
  int v36; 
  int v37; 
  bdAchievementProgress Buf; 

  v4 = controllerIndex;
  v6 = 0;
  Id = bdAchievementState::getId(state);
  Name = bdAchievementState::getName(state);
  Com_Printf(25, "BATTLEPASS: %ld (%s) has been found and added.\n", Id, Name);
  if ( Id == 3000000 || Id == 3001000 || Id == 3002000 || Id == 3003000 || Id == 3004000 || Id == 3005000 )
  {
    v9 = (Id - 3000000) / 0x3E8 + 1;
    v10 = 0;
    if ( bdAchievementState::getNumMultiProgresses(state) )
    {
      v11 = v4;
      do
      {
        _RBX = bdAchievementState::getMultiProgress(state, v10);
        *((_QWORD *)&Buf.__vftable + 1) = &bdAchievementProgress::`vbtable';
        bdReferencable::bdReferencable((bdReferencable *)Buf.gap48, (const bdReferencable *)((char *)&_RBX->__vftable + *(int *)(*((_QWORD *)&_RBX->__vftable + 1) + 4i64) + 8));
        v37 = v6 | 1;
        bdStructBufferSerializable::bdStructBufferSerializable(&Buf, _RBX);
        Buf.__vftable = (bdAchievementProgress_vtbl *)&bdAchievementProgress::`vftable'{for `bdStructBufferSerializable'};
        *(_QWORD *)&Buf.m_targetName[*(int *)(*((_QWORD *)&Buf.__vftable + 1) + 4i64) - 24] = &bdAchievementProgress::`vftable'{for `bdReferencable'};
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx+10h]
          vmovups ymmword ptr [rsp+0E8h+Buf+10h], ymm0
        }
        Buf.m_targetName[16] = _RBX->m_targetName[16];
        Buf.m_currentProgress = _RBX->m_currentProgress;
        Buf.m_targetProgress = _RBX->m_targetProgress;
        AchievementCurrentProgress = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
        TargetName = bdAchievementProgress::getTargetName(&Buf);
        v16 = bdAchievementState::getName(state);
        Com_Printf(25, "(%s) %s = %ld\n", v16, TargetName, AchievementCurrentProgress);
        v17 = bdAchievementProgress::getTargetName(&Buf);
        v18 = 0x7FFFFFFFi64;
        v19 = "xp";
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v20 = v17 - "xp";
        while ( 1 )
        {
          v21 = (unsigned __int8)v19[v20];
          v22 = *(unsigned __int8 *)v19++;
          if ( !v18-- )
          {
LABEL_22:
            this->m_battlepassXP[v11][v9] = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
            goto LABEL_23;
          }
          if ( v21 != v22 )
          {
            v24 = v21 + 32;
            if ( (unsigned int)(v21 - 65) > 0x19 )
              v24 = v21;
            v21 = v24;
            v25 = v22 + 32;
            if ( (unsigned int)(v22 - 65) > 0x19 )
              v25 = v22;
            if ( v21 != v25 )
              break;
          }
          if ( !v21 )
            goto LABEL_22;
        }
        v28 = bdAchievementProgress::getTargetName(&Buf);
        v29 = 0x7FFFFFFFi64;
        v30 = "rank";
        if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v31 = v28 - "rank";
        do
        {
          v32 = (unsigned __int8)v30[v31];
          v33 = *(unsigned __int8 *)v30++;
          if ( !v29-- )
            break;
          if ( v32 != v33 )
          {
            v35 = v32 + 32;
            if ( (unsigned int)(v32 - 65) > 0x19 )
              v35 = v32;
            v32 = v35;
            v36 = v33 + 32;
            if ( (unsigned int)(v33 - 65) > 0x19 )
              v36 = v33;
            if ( v32 != v36 )
              goto LABEL_23;
          }
        }
        while ( v32 );
        this->m_battlepassRank[v11][v9] = bdAchievementProgress::getAchievementCurrentProgress(&Buf);
LABEL_23:
        v26 = memchr_0(&Buf.__vftable + 2, 0, 0x21ui64);
        if ( v26 )
          v27 = v26 - (_BYTE *)(&Buf.__vftable + 2);
        else
          v27 = 33i64;
        bdHandleAssert(v27 < 0x21, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<32>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&Buf.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)Buf.gap48);
        ++v10;
        v6 = v37;
      }
      while ( v10 < bdAchievementState::getNumMultiProgresses(state) );
    }
  }
  else
  {
    OnlineBattlepass::AddtoChallengeActivationCache(this, v4, Id);
  }
}

/*
==============
OnlineBattlepass::AddtoChallengeActivationCache
==============
*/
void OnlineBattlepass::AddtoChallengeActivationCache(OnlineBattlepass *this, const int controllerIndex, const unsigned __int64 id)
{
  int v3; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  BattlepassChallenge *v7; 
  BattlepassChallenge *v8; 
  __int64 v9; 
  __int64 v10; 

  v3 = 0;
  v4 = controllerIndex;
  v5 = 0;
  v6 = 0i64;
  v7 = this->m_activatedChallenges[controllerIndex];
  v8 = v7;
  do
  {
    if ( v8->id == id )
    {
      v10 = v5 + 20 * v4;
      goto LABEL_10;
    }
    ++v5;
    ++v6;
    ++v8;
  }
  while ( v6 < 20 );
  v9 = 0i64;
  while ( v7->id )
  {
    ++v3;
    ++v9;
    ++v7;
    if ( v9 >= 20 )
      return;
  }
  v10 = v3 + 20 * v4;
  this->m_activatedChallenges[0][v10].id = id;
LABEL_10:
  this->m_activatedChallenges[0][v10].activated = 1;
}

/*
==============
OnlineBattlepass::DoesOwnBattlepass
==============
*/
_BOOL8 OnlineBattlepass::DoesOwnBattlepass(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return this->m_ownsBattlepass[controllerIndex][season];
}

/*
==============
OnlineBattlepass::FixUp
==============
*/
void OnlineBattlepass::FixUp(OnlineBattlepass *this, const int controllerIndex, const bool send_event)
{
  __int64 v3; 
  int RowCount; 
  int v7; 
  int v8; 
  int v9; 
  const char *ColumnValueForRow; 
  const char *v11; 
  int v12; 
  Online_Loot *Instance; 
  __int64 v14; 
  bool *p_activated; 
  const char *v16; 
  int v17; 
  unsigned __int64 id; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const char *v22; 
  int v23; 
  LocalClientNum_t outLocalClientNum; 
  StringTable *tablePtr; 

  v3 = controllerIndex;
  StringTable_GetAsset("loot/battlepass_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 555, ASSERT_TYPE_ASSERT, "(bpTable)", (const char *)&queryFormat, "bpTable") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  v7 = 0;
  v8 = RowCount;
  if ( send_event || (v9 = 0, RowCount <= 0) )
  {
LABEL_9:
    v14 = 0i64;
    p_activated = &this->m_activatedChallenges[v3][0].activated;
    do
    {
      if ( *p_activated )
      {
        id = this->m_activatedChallenges[v3][v7].id;
        v19 = j_va("%lu", id);
        v20 = StringTable_Lookup(tablePtr, 6, v19, 5);
        v21 = j_va("%lu", id);
        v22 = StringTable_Lookup(tablePtr, 6, v21, 0);
        v23 = atoi(v22);
        this->m_currentChallenge[v3] = id;
        this->m_currentItem[v3] = v23;
        this->m_battlepassMode[v3] = BATTLEPASS_MODE_FIXING_UP;
        OnlineBattlepass::SendEvent(this, v3, v20);
        return;
      }
      ++v7;
      ++v14;
      p_activated += 16;
    }
    while ( v14 < 20 );
    if ( CL_Mgr_IsControllerMappedToClient(v3, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "battlepass_fixup_complete", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  else
  {
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v9, 2);
      if ( (unsigned int)atoi(ColumnValueForRow) <= 1 )
      {
        v11 = StringTable_GetColumnValueForRow(tablePtr, v9, 0);
        v12 = atoi(v11);
        Instance = Online_Loot::GetInstance();
        if ( Online_Loot::GetItemQuantity(Instance, v3, v12) )
          break;
      }
      if ( ++v9 >= v8 )
        goto LABEL_9;
    }
    v16 = StringTable_GetColumnValueForRow(tablePtr, v9, 6);
    v17 = atoi(v16);
    this->m_battlepassMode[v3] = BATTLEPASS_MODE_FIXING_UP;
    OnlineBattlepass::ActivateItem(this, v3, v17, v12);
  }
}

/*
==============
OnlineBattlepass::GetInstance
==============
*/
OnlineBattlepass *OnlineBattlepass::GetInstance()
{
  return &OnlineBattlepass::s_instance;
}

/*
==============
OnlineBattlepass::GetInstancePtr
==============
*/
OnlineBattlepass *OnlineBattlepass::GetInstancePtr()
{
  return &OnlineBattlepass::s_instance;
}

/*
==============
OnlineBattlepass::GetRank
==============
*/
unsigned __int64 OnlineBattlepass::GetRank(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return this->m_battlepassRank[controllerIndex][season];
}

/*
==============
OnlineBattlepass::GetXP
==============
*/
unsigned __int64 OnlineBattlepass::GetXP(OnlineBattlepass *this, const int controllerIndex, const int season)
{
  return this->m_battlepassXP[controllerIndex][season];
}

/*
==============
OnlineBattlepass::HandleUpdate
==============
*/
void OnlineBattlepass::HandleUpdate(OnlineBattlepass *this, const int controllerIndex, bdJSONDeserializer *json, bool complete)
{
  __int64 v6; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 *v11; 
  __int64 *v12; 
  unsigned __int64 UserId; 
  unsigned __int64 v14; 
  bool v15; 
  unsigned __int64 value; 
  bdJSONDeserializer v17; 
  bdJSONDeserializer v18; 
  __int64 v19; 
  DLogContext context; 
  char buffer[4096]; 

  v19 = -2i64;
  v6 = controllerIndex;
  bdJSONDeserializer::bdJSONDeserializer(&v18);
  if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && (value == 3000000 || value == 3001000 || value == 3002000 || value == 3003000 || value == 3004000 || value == 3005000) )
  {
    v8 = (value - 3000000) / 0x3E8 + 1;
    if ( bdJSONDeserializer::getObject(json, "multiProgress", &v18) )
    {
      bdJSONDeserializer::bdJSONDeserializer(&v17);
      v9 = v6;
      if ( bdJSONDeserializer::getObject(&v18, "xp", &v17) )
        bdJSONDeserializer::getUInt64(&v17, (const char *const)&stru_143CE7590, &this->m_battlepassXP[v6][v8]);
      if ( bdJSONDeserializer::getObject(&v18, "rank", &v17) )
        bdJSONDeserializer::getUInt64(&v17, (const char *const)&stru_143CE7590, &this->m_battlepassRank[v6][v8]);
      if ( complete )
      {
        v10 = v8 + 7 * v6;
        v11 = (__int64 *)((char *)this->m_battlepassRank + 8 * v10);
        v12 = (__int64 *)((char *)this->m_battlepassXP + 8 * v10);
        Com_Printf(25, "Ranked Up: Battlepass is now XP %lu, Rank %lu\n", *v12, *v11);
        if ( !this->m_isTierSkipEvent )
        {
          UserId = DLog_GetUserId(v6);
          v14 = *v11;
          if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
          {
            v15 = DLog_BeginEvent(&context, "dlog_event_bp_tier_up");
            context.autoEndEvent = 1;
            if ( v15 && DLog_UInt64(&context, "previous_bp_tier", v14 - 1) && DLog_UInt64(&context, "new_bp_tier", v14) && DLog_String(&context, "reason", "rank up", 0) )
              DLog_RecordContext(&context);
          }
        }
        this->m_isTierSkipEvent = 0;
        if ( LUI_BeginEvent(LOCAL_CLIENT_0, "battlepass_ranked_up", LUI_luaVM) )
        {
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_SetTableInt("xp", *v12, LUI_luaVM);
          LUI_SetTableInt("rank", *v11, LUI_luaVM);
          LUI_SetTableInt("controller", v9, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
      }
      else
      {
        Com_Printf(25, "Updated Battlepass Progression with XP %lu, Rank %lu\n", this->m_battlepassXP[v6][v8], this->m_battlepassRank[v6][v8]);
      }
      bdJSONDeserializer::~bdJSONDeserializer(&v17);
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v18);
}

/*
==============
OnlineBattlepass::NeedFixUp
==============
*/
char OnlineBattlepass::NeedFixUp(OnlineBattlepass *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  int RowCount; 
  int v6; 
  const char *ColumnValueForRow; 
  const char *v8; 
  int v9; 
  Online_Loot *Instance; 
  bool *i; 
  StringTable *tablePtr; 

  v2 = controllerIndex;
  StringTable_GetAsset("loot/battlepass_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 519, ASSERT_TYPE_ASSERT, "(bpTable)", (const char *)&queryFormat, "bpTable") )
    __debugbreak();
  v4 = 0i64;
  RowCount = StringTable_GetRowCount(tablePtr);
  v6 = 0;
  if ( RowCount <= 0 )
  {
LABEL_8:
    for ( i = &this->m_activatedChallenges[v2][0].activated; !*i; i += 16 )
    {
      if ( ++v4 >= 20 )
        return 0;
    }
  }
  else
  {
    while ( 1 )
    {
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v6, 2);
      if ( (unsigned int)atoi(ColumnValueForRow) <= 1 )
      {
        v8 = StringTable_GetColumnValueForRow(tablePtr, v6, 0);
        v9 = atoi(v8);
        Instance = Online_Loot::GetInstance();
        if ( Online_Loot::GetItemQuantity(Instance, v2, v9) )
          break;
      }
      if ( ++v6 >= RowCount )
        goto LABEL_8;
    }
  }
  return 1;
}

/*
==============
OnlineBattlepass::OnActivateComplete
==============
*/
void OnlineBattlepass::OnActivateComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  Online_Loot *Instance; 
  BATTLEPASS_MODE v6; 
  LocalClientNum_t outLocalClientNum; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 108, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "activateAchievement - Error\n");
      OnlineBattlepass::ActivationFailed(&OnlineBattlepass::s_instance, m_controllerIndex);
    }
  }
  else
  {
    Com_Printf(25, "activateAchievement - Success\n");
    Instance = Online_Loot::GetInstance();
    Online_Loot::UpdateItemInInventory(Instance, m_controllerIndex, OnlineBattlepass::s_instance.m_currentItem[m_controllerIndex], -1, 0);
    OnlineBattlepass::AddtoChallengeActivationCache(&OnlineBattlepass::s_instance, m_controllerIndex, OnlineBattlepass::s_instance.m_currentChallenge[m_controllerIndex]);
    v6 = OnlineBattlepass::s_instance.m_battlepassMode[m_controllerIndex];
    if ( v6 )
    {
      if ( v6 == BATTLEPASS_MODE_FIXING_UP )
        OnlineBattlepass::FixUp(&OnlineBattlepass::s_instance, m_controllerIndex, 1);
    }
    else if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) && LUI_BeginEvent(outLocalClientNum, "battlepass_activated", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineBattlepass::OnSendEventComplete
==============
*/
void OnlineBattlepass::OnSendEventComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  unsigned int v5; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 
  int v10; 
  __int64 v11; 
  BATTLEPASS_MODE v12; 
  int Int_Internal_DebugName; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  StringTable *tablePtr; 
  LocalClientNum_t outLocalClientNum; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 226, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_controllerIndex = pTask->m_controllerIndex;
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "OnSendEventComplete - Error\n");
      OnlineBattlepass::SendEventFailed(&OnlineBattlepass::s_instance, m_controllerIndex);
    }
  }
  else
  {
    Com_Printf(25, "OnSendEventComplete - Success\n");
    StringTable_GetAsset("loot/battlepass_ids.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 238, ASSERT_TYPE_ASSERT, "(bpTable)", (const char *)&queryFormat, "bpTable") )
      __debugbreak();
    v5 = OnlineBattlepass::s_instance.m_currentItem[pTask->m_controllerIndex];
    v6 = j_va("%d", v5);
    v7 = StringTable_Lookup(tablePtr, 0, v6, 2);
    v8 = j_va("%d", v5);
    v9 = StringTable_Lookup(tablePtr, 0, v8, 16);
    v10 = atoi(v9);
    v11 = v10;
    if ( (unsigned int)v10 >= 7 )
    {
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 244, ASSERT_TYPE_ASSERT, "(unsigned)( bp_season ) < (unsigned)( 7 )", "bp_season doesn't index MAX_SEASONS\n\t%i not in [0, %i)", v16, 7) )
        __debugbreak();
    }
    if ( !atoi(v7) )
      OnlineBattlepass::s_instance.m_ownsBattlepass[m_controllerIndex][v11] = 1;
    v12 = OnlineBattlepass::s_instance.m_battlepassMode[m_controllerIndex];
    if ( v12 )
    {
      if ( v12 == BATTLEPASS_MODE_FIXING_UP )
      {
        OnlineBattlepass::RemoveFromChallengeActivationCache(&OnlineBattlepass::s_instance, m_controllerIndex, OnlineBattlepass::s_instance.m_currentChallenge[m_controllerIndex]);
        OnlineBattlepass::FixUp(&OnlineBattlepass::s_instance, m_controllerIndex, 0);
      }
    }
    else
    {
      OnlineBattlepass::RemoveFromChallengeActivationCache(&OnlineBattlepass::s_instance, m_controllerIndex, OnlineBattlepass::s_instance.m_currentChallenge[m_controllerIndex]);
      if ( CL_Mgr_IsControllerMappedToClient(m_controllerIndex, &outLocalClientNum) && LUI_BeginEvent(outLocalClientNum, "battlepass_event_complete", LUI_luaVM) )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_current_season, "current_season");
        v14 = Int_Internal_DebugName;
        if ( (unsigned int)Int_Internal_DebugName >= 7 )
        {
          LODWORD(v17) = 7;
          LODWORD(v16) = Int_Internal_DebugName;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 263, ASSERT_TYPE_ASSERT, "(unsigned)( season ) < (unsigned)( 7 )", "season doesn't index MAX_SEASONS\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        v15 = v14 + 7 * m_controllerIndex;
        LUI_SetTableInt("xp", OnlineBattlepass::s_instance.m_battlepassXP[0][v15], LUI_luaVM);
        LUI_SetTableInt("rank", OnlineBattlepass::s_instance.m_battlepassRank[0][v15], LUI_luaVM);
        LUI_SetTableInt("controller", m_controllerIndex, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
      }
    }
  }
}

/*
==============
OnlineBattlepass::RemoveFromChallengeActivationCache
==============
*/
void OnlineBattlepass::RemoveFromChallengeActivationCache(OnlineBattlepass *this, const int controllerIndex, const unsigned __int64 id)
{
  int v3; 
  __int64 v4; 
  BattlepassChallenge *v5; 

  v3 = 0;
  v4 = 0i64;
  v5 = this->m_activatedChallenges[controllerIndex];
  do
  {
    if ( v5->activated && v5->id == id )
    {
      this->m_activatedChallenges[controllerIndex][v3].activated = 0;
      return;
    }
    ++v3;
    ++v4;
    ++v5;
  }
  while ( v4 < 20 );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 430, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to deactivate a battlepass challenge from the cache that isn't activated") )
    __debugbreak();
}

/*
==============
OnlineBattlepass::SendEvent
==============
*/
void OnlineBattlepass::SendEvent(OnlineBattlepass *this, const int controllerIndex, const char *ae_event)
{
  __int64 v4; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v9; 
  DWServicesAccess *v10; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v12; 
  bdRemoteTask *v13; 
  TaskManager *v14; 
  BATTLEPASS_MODE v15; 
  const char *v16; 
  _BYTE *v17; 
  unsigned __int64 v18; 
  _BYTE *v19; 
  unsigned __int64 v20; 
  _BYTE *v21; 
  unsigned __int64 v22; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  LocalClientNum_t outLocalClientNum; 
  bdAchievementEvent *events; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v29; 
  bdAchievementEvent ptr; 
  bdReportEventsRequest request; 

  v29 = -2i64;
  v4 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_battlepass.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  UTC = LiveStorage_GetUTC();
  bdAchievementEvent::bdAchievementEvent(&ptr, ae_event, UTC);
  bdAchievementEvent::addKeyValue(&ptr, "version", 1ui64);
  events = &ptr;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v9 = j_va("%u", TitleID);
  bdReportEventsRequest::bdReportEventsRequest(&request, v9, 1u, (const bdAchievementEvent **)&events, NULL);
  v10 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v10, v4);
  v12 = (TaskCreateRequest *)DWAchievementEngine::reportEvents(AchievementEngine, &result, &request);
  if ( v12 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v13 = *(bdRemoteTask **)&v12->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v13;
    if ( v13 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v13->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateRequest.m_controllerIndex = v4;
    pTaskCreateRequest.m_onCompletionCallback = OnlineBattlepass::OnSendEventComplete;
    v14 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v14, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      OnlineBattlepass::s_instance.m_isTierSkipEvent = 1;
      Com_Printf(25, "reportEvents() - CreateTask created task id %d controllerIndex %d!\n", pTaskCreateResult.m_localTaskId, (unsigned int)v4);
    }
    else
    {
      Com_PrintError(25, "reportEvents() - CreateTask failed for controllerIndex %d!\n", (unsigned int)v4);
      OnlineBattlepass::SendEventFailed(this, v4);
    }
    goto LABEL_22;
  }
  Com_PrintError(25, "reportEvents() failed for controllerIndex %d\n", (unsigned int)v4);
  OnlineBattlepass::s_instance.m_isTierSkipEvent = 0;
  if ( CL_Mgr_IsControllerMappedToClient(v4, &outLocalClientNum) )
  {
    v15 = this->m_battlepassMode[v4];
    if ( v15 )
    {
      if ( v15 != BATTLEPASS_MODE_FIXING_UP )
        goto LABEL_22;
      v16 = "battlepass_fixup_failed";
    }
    else
    {
      v16 = "battlepass_send_event_failed";
    }
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, v16, LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
LABEL_22:
  v17 = memchr_0(&request.m_requestID, 0, 0x1Aui64);
  if ( v17 )
    v18 = v17 - (_BYTE *)&request.m_requestID;
  else
    v18 = 26i64;
  bdHandleAssert(v18 < 0x1A, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<25>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)request.m_accountID._bytes_48);
  bdUserAccountID::~bdUserAccountID((bdUserAccountID *)request.m_accountID.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)request.m_accountID._bytes_48);
  bdStructFixedSizeString<4096>::~bdStructFixedSizeString<4096>((bdStructFixedSizeString<4096> *)&request._bytes_20[78]);
  v19 = memchr_0(&request._bytes_20[13], 0, 0x41ui64);
  if ( v19 )
    v20 = v19 - &request._bytes_20[13];
  else
    v20 = 65i64;
  bdHandleAssert(v20 < 0x41, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<64>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  v21 = memchr_0((char *)&request.__vftable + 28, 0, 0x11ui64);
  if ( v21 )
    v22 = v21 - ((char *)&request.__vftable + 28);
  else
    v22 = 17i64;
  bdHandleAssert(v22 < 0x11, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<16>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
  bdRESTRequest::~bdRESTRequest((bdRESTRequest *)&request.__vftable + 2);
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap10F2[6]);
  `eh vector destructor iterator'(&ptr.m_keyValues, 0x40ui64, 0xAui64, (void (__fastcall *)(void *))bdAchievementEventKeyValue::`vbase destructor);
  bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>((bdStructFixedSizeString<100> *)(&ptr.__vftable + 3));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&ptr.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)(&ptr.m_keyValues + 1));
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
OnlineBattlepass::SendEventFailed
==============
*/
void OnlineBattlepass::SendEventFailed(OnlineBattlepass *this, const int controllerIndex)
{
  __int64 v2; 
  BATTLEPASS_MODE v4; 
  const char *v5; 
  LocalClientNum_t outLocalClientNum; 

  v2 = controllerIndex;
  OnlineBattlepass::s_instance.m_isTierSkipEvent = 0;
  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) )
  {
    v4 = this->m_battlepassMode[v2];
    if ( v4 )
    {
      if ( v4 != BATTLEPASS_MODE_FIXING_UP )
        return;
      v5 = "battlepass_fixup_failed";
    }
    else
    {
      v5 = "battlepass_send_event_failed";
    }
    if ( LUI_BeginEvent(LOCAL_CLIENT_0, v5, LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineBattlepass::SetOwnsBattlepass
==============
*/
void OnlineBattlepass::SetOwnsBattlepass(OnlineBattlepass *this, const int controllerIndex, const int season, const bool does_own)
{
  this->m_ownsBattlepass[controllerIndex][season] = does_own;
}

