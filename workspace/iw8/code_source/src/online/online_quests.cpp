/*
==============
OnlineQuests::Reset
==============
*/

void __fastcall OnlineQuests::Reset(OnlineQuests *this, const int controllerIndex)
{
  ?Reset@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::IsQuestActive
==============
*/

bool __fastcall OnlineQuests::IsQuestActive(OnlineQuests *this, const int controllerIndex, const int id)
{
  return ?IsQuestActive@OnlineQuests@@QEAA_NHH@Z(this, controllerIndex, id);
}

/*
==============
OnlineQuests::ConvertProgress
==============
*/

unsigned int __fastcall OnlineQuests::ConvertProgress(const unsigned __int64 id, const unsigned int progress)
{
  return ?ConvertProgress@OnlineQuests@@SAI_KI@Z(id, progress);
}

/*
==============
OnlineQuests::GetActiveQuest
==============
*/

int __fastcall OnlineQuests::GetActiveQuest(OnlineQuests *this, const int controllerIndex, const int quest_type)
{
  return ?GetActiveQuest@OnlineQuests@@QEAAHHH@Z(this, controllerIndex, quest_type);
}

/*
==============
OnlineQuests::GetInstancePtr
==============
*/

OnlineQuests *__fastcall OnlineQuests::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineQuests@@SAPEAV1@XZ();
}

/*
==============
OnlineQuests::Frame
==============
*/

void __fastcall OnlineQuests::Frame(OnlineQuests *this)
{
  ?Frame@OnlineQuests@@UEAAXXZ(this);
}

/*
==============
OnlineQuests::OnSignedIn
==============
*/

void __fastcall OnlineQuests::OnSignedIn(OnlineQuests *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineQuests@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineQuests::OnRegistered
==============
*/

void __fastcall OnlineQuests::OnRegistered(OnlineQuests *this)
{
  ?OnRegistered@OnlineQuests@@UEAAXXZ(this);
}

/*
==============
OnlineQuests::QuestActivationFailed
==============
*/

void __fastcall OnlineQuests::QuestActivationFailed(OnlineQuests *this, const int controllerIndex)
{
  ?QuestActivationFailed@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::StartQuest
==============
*/

void __fastcall OnlineQuests::StartQuest(OnlineQuests *this, const int controllerIndex, const unsigned __int64 questID, QUEST_ACTIVATION_TYPE quest_type, QUEST_ACTIVATION_MODE mode)
{
  ?StartQuest@OnlineQuests@@QEAAXH_KW4QUEST_ACTIVATION_TYPE@@W4QUEST_ACTIVATION_MODE@@@Z(this, controllerIndex, questID, quest_type, mode);
}

/*
==============
OnlineQuests::OnUnregistered
==============
*/

void __fastcall OnlineQuests::OnUnregistered(OnlineQuests *this)
{
  ?OnUnregistered@OnlineQuests@@UEAAXXZ(this);
}

/*
==============
OnlineQuests::OnSignedOut
==============
*/

void __fastcall OnlineQuests::OnSignedOut(OnlineQuests *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineQuests@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineQuests::Init
==============
*/

bool __fastcall OnlineQuests::Init(OnlineQuests *this)
{
  return ?Init@OnlineQuests@@UEAA_NXZ(this);
}

/*
==============
OnlineQuests::ActivateNewQuest
==============
*/

void __fastcall OnlineQuests::ActivateNewQuest(OnlineQuests *this, const int controllerIndex)
{
  ?ActivateNewQuest@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::OnDeactivateAchievementComplete
==============
*/

void __fastcall OnlineQuests::OnDeactivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnDeactivateAchievementComplete@OnlineQuests@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineQuests::IsPlatformValid
==============
*/

bool __fastcall OnlineQuests::IsPlatformValid(OnlineQuests *this, const char *platform)
{
  return ?IsPlatformValid@OnlineQuests@@QEAA_NPEBD@Z(this, platform);
}

/*
==============
OnlineQuests::EndQuest
==============
*/

void __fastcall OnlineQuests::EndQuest(OnlineQuests *this, const int controllerIndex, const unsigned __int64 questID)
{
  ?EndQuest@OnlineQuests@@QEAAXH_K@Z(this, controllerIndex, questID);
}

/*
==============
OnlineQuests::QuestDeactivationFailed
==============
*/

void __fastcall OnlineQuests::QuestDeactivationFailed(OnlineQuests *this, const int controllerIndex)
{
  ?QuestDeactivationFailed@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::GetTypeFromID
==============
*/

QUEST_ACTIVATION_TYPE __fastcall OnlineQuests::GetTypeFromID(OnlineQuests *this, const unsigned __int64 quest_id)
{
  return ?GetTypeFromID@OnlineQuests@@QEAA?AW4QUEST_ACTIVATION_TYPE@@_K@Z(this, quest_id);
}

/*
==============
OnlineQuests::CacheQuests
==============
*/

void __fastcall OnlineQuests::CacheQuests(OnlineQuests *this)
{
  ?CacheQuests@OnlineQuests@@QEAAXXZ(this);
}

/*
==============
OnlineQuests::OnActivateAchievementComplete
==============
*/

void __fastcall OnlineQuests::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnActivateAchievementComplete@OnlineQuests@@SAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
OnlineQuests::OnDisconnect
==============
*/

void __fastcall OnlineQuests::OnDisconnect(OnlineQuests *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineQuests@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineQuests::GetProgression
==============
*/

unsigned int __fastcall OnlineQuests::GetProgression(OnlineQuests *this, const int controllerIndex, unsigned __int64 quest_id)
{
  return ?GetProgression@OnlineQuests@@QEAAIH_K@Z(this, controllerIndex, quest_id);
}

/*
==============
OnlineQuests::AddProgression
==============
*/

void __fastcall OnlineQuests::AddProgression(OnlineQuests *this, const int controllerIndex, bdAchievementState *state)
{
  ?AddProgression@OnlineQuests@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, state);
}

/*
==============
OnlineQuests::Uninit
==============
*/

void __fastcall OnlineQuests::Uninit(OnlineQuests *this)
{
  ?Uninit@OnlineQuests@@UEAAXXZ(this);
}

/*
==============
OnlineQuests::GetInstance
==============
*/

OnlineQuests *__fastcall OnlineQuests::GetInstance()
{
  return ?GetInstance@OnlineQuests@@SAAEAV1@XZ();
}

/*
==============
OnlineQuests::ControllerFrame
==============
*/

void __fastcall OnlineQuests::ControllerFrame(OnlineQuests *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineQuests@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::HandleCompletion
==============
*/

void __fastcall OnlineQuests::HandleCompletion(OnlineQuests *this, const XUID xuid, bdJSONDeserializer *json, bool complete)
{
  ?HandleCompletion@OnlineQuests@@QEAAXUXUID@@PEAVbdJSONDeserializer@@_N@Z(this, xuid, json, complete);
}

/*
==============
OnlineQuests::RegisterLuaFunctions
==============
*/

void __fastcall OnlineQuests::RegisterLuaFunctions(OnlineQuests *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineQuests@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineQuests::NeedToCheckandActivate
==============
*/

void __fastcall OnlineQuests::NeedToCheckandActivate(OnlineQuests *this, const int controllerIndex)
{
  ?NeedToCheckandActivate@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::OutputCurrentState
==============
*/

void __fastcall OnlineQuests::OutputCurrentState(OnlineQuests *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineQuests@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::CheckandActivate
==============
*/

void __fastcall OnlineQuests::CheckandActivate(OnlineQuests *this, const int controllerIndex)
{
  ?CheckandActivate@OnlineQuests@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::MissionComplete
==============
*/

void __fastcall OnlineQuests::MissionComplete(OnlineQuests *this, const int controllerIndex, const char *name)
{
  ?MissionComplete@OnlineQuests@@AEAAXHPEBD@Z(this, controllerIndex, name);
}

/*
==============
OnlineQuests::DeactivateCurrentQuest
==============
*/

void __fastcall OnlineQuests::DeactivateCurrentQuest(OnlineQuests *this, const int controllerIndex)
{
  ?DeactivateCurrentQuest@OnlineQuests@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineQuests::OnRegistered
==============
*/
void OnlineQuests::OnRegistered(OnlineQuests *this)
{
  ;
}

/*
==============
OnlineQuests::OnUnregistered
==============
*/
void OnlineQuests::OnUnregistered(OnlineQuests *this)
{
  ;
}

/*
==============
OnlineQuests::Init
==============
*/
char OnlineQuests::Init(OnlineQuests *this)
{
  bool *m_needToCheckAndActivate; 
  int v2; 
  QUEST_ACTIVATION_MODE *m_activatingQuestMode; 
  LocalClientNum_t ClientFromController; 

  m_needToCheckAndActivate = this->m_needToCheckAndActivate;
  v2 = 0;
  m_activatingQuestMode = this->m_activatingQuestMode;
  do
  {
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    ++m_activatingQuestMode;
    ++v2;
    ++m_needToCheckAndActivate;
    this->m_totalQuests[ClientFromController] = 0;
    m_needToCheckAndActivate[7] = 0;
    *(m_needToCheckAndActivate - 1) = 0;
    *((_DWORD *)m_activatingQuestMode - 1) = 0;
  }
  while ( v2 < 8 );
  return 1;
}

/*
==============
OnlineQuests::Uninit
==============
*/
void OnlineQuests::Uninit(OnlineQuests *this)
{
  ;
}

/*
==============
OnlineQuests::Frame
==============
*/
void OnlineQuests::Frame(OnlineQuests *this)
{
  ;
}

/*
==============
OnlineQuests::ControllerFrame
==============
*/
void OnlineQuests::ControllerFrame(OnlineQuests *this, const int controllerIndex)
{
  if ( this->m_hasBattlepassData[controllerIndex] && this->m_needToCheckAndActivate[controllerIndex] && this->m_activatingQuestMode[controllerIndex] == QUEST_ACTIVATION_MODE_READY )
    OnlineQuests::CheckandActivate(this, controllerIndex);
}

/*
==============
OnlineQuests::OnSignedIn
==============
*/
void OnlineQuests::OnSignedIn(OnlineQuests *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineQuests::OnSignedOut
==============
*/
void OnlineQuests::OnSignedOut(OnlineQuests *this, const int controllerIndex, GenericSignOutState signOutState)
{
  __int64 v3; 

  v3 = controllerIndex;
  this->m_totalQuests[CL_Mgr_GetClientFromController(controllerIndex)] = 0;
  this->m_hasBattlepassData[v3] = 0;
  this->m_needToCheckAndActivate[v3] = 0;
  this->m_activatingQuestMode[v3] = QUEST_ACTIVATION_MODE_READY;
}

/*
==============
OnlineQuests::OnDisconnect
==============
*/
void OnlineQuests::OnDisconnect(OnlineQuests *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineQuests::RegisterLuaFunctions
==============
*/
void OnlineQuests::RegisterLuaFunctions(OnlineQuests *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "Quests", quests_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineQuests::OutputCurrentState
==============
*/
void OnlineQuests::OutputCurrentState(OnlineQuests *this, const int controllerIndex)
{
  Com_Printf(25, "QUESTS DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "QUESTS DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_StartQuest
==============
*/
__int64 LUI_CoD_LuaCall_StartQuest(lua_State *const luaVM)
{
  int v2; 
  unsigned __int64 v3; 
  QUEST_ACTIVATION_TYPE TypeFromID; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Quests.StartQuest( <controllerIndex>, <quest_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Quests.StartQuest( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Quests.StartQuest( <quest_id> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  TypeFromID = OnlineQuests::GetTypeFromID(&OnlineQuests::s_instance, v3);
  OnlineQuests::StartQuest(&OnlineQuests::s_instance, v2, v3, TypeFromID, QUEST_ACTIVATION_MODE_UI);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetProgression
==============
*/
__int64 LUI_CoD_LuaCall_GetProgression(lua_State *const luaVM)
{
  int v2; 
  unsigned __int64 v3; 
  __int64 Progression; 
  const char *v5; 
  const char *v6; 
  float v7; 
  unsigned int v8; 
  float v9; 
  unsigned int v10; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Quests.GetProgression( <controllerIndex>, <quest_id> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  Progression = OnlineQuests::GetProgression(&OnlineQuests::s_instance, v2, v3);
  StringTable_GetAsset("quest_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 870, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v5 = j_va("%lu", v3);
  v6 = StringTable_Lookup(tablePtr, 0, v5, 18);
  if ( I_stricmp(v6, "sec") )
  {
    if ( I_stricmp(v6, "min") )
    {
      v8 = Progression;
    }
    else
    {
      v9 = (float)Progression;
      v8 = (int)(float)(v9 * 0.000016666667);
    }
  }
  else
  {
    v7 = (float)Progression;
    v8 = (int)(float)(v7 * 0.001);
  }
  j_lua_pushinteger(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_EndQuest
==============
*/
__int64 LUI_CoD_LuaCall_EndQuest(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetActiveQuest
==============
*/
__int64 LUI_CoD_LuaCall_GetActiveQuest(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int ActiveQuest; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Quests.GetActiveQuest( <controllerIndex> <type> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Quests.GetActiveQuest( <controllerIndex> <type> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Quests.GetActiveQuest( <controllerIndex> <type> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  ActiveQuest = OnlineQuests::GetActiveQuest(&OnlineQuests::s_instance, v2, v3);
  j_lua_pushinteger(luaVM, ActiveQuest);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetActivatingQuestMode
==============
*/
__int64 LUI_CoD_LuaCall_GetActivatingQuestMode(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Quests.GetActivatingQuestMode( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Quests.GetActivatingQuestMode( <controllerIndex> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  j_lua_pushinteger(luaVM, OnlineQuests::s_instance.m_activatingQuestMode[v2]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
OnlineQuests::ActivateNewQuest
==============
*/
void OnlineQuests::ActivateNewQuest(OnlineQuests *this, const int controllerIndex)
{
  __int64 v2; 
  char v4; 
  __int64 v5; 
  __int64 ClientFromController; 
  __int64 v7; 
  unsigned __int64 v8; 
  char *v9; 

  v2 = controllerIndex;
  v4 = 0;
  v5 = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalQuests[ClientFromController];
  if ( !(_DWORD)v7 )
    goto LABEL_7;
  v8 = 1000 * ClientFromController;
  do
  {
    v9 = (char *)this + 24 * v8 + 24 * v5;
    if ( *((_QWORD *)v9 + 28) == this->m_activatingQuest[v2] )
    {
      v4 = 1;
      this->m_quests[v8 / 0x3E8][v5].active = 1;
      *((_DWORD *)v9 + 59) = this->m_activatingQuestType[v2];
    }
    v7 = this->m_totalQuests[ClientFromController];
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)v7 );
  if ( !v4 )
  {
LABEL_7:
    this->m_quests[ClientFromController][v7].id = this->m_activatingQuest[v2];
    this->m_quests[ClientFromController][this->m_totalQuests[ClientFromController]].type = this->m_activatingQuestType[v2];
    this->m_quests[ClientFromController][this->m_totalQuests[ClientFromController]].progress = 0;
    this->m_quests[ClientFromController][this->m_totalQuests[ClientFromController]++].active = 1;
  }
}

/*
==============
OnlineQuests::AddProgression
==============
*/
void OnlineQuests::AddProgression(OnlineQuests *this, const int controllerIndex, bdAchievementState *state)
{
  __int64 ClientFromController; 
  unsigned __int64 Id; 
  unsigned int v7; 
  __int64 v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *Name; 
  __int64 v14; 
  unsigned int Progress; 
  unsigned int *p_progress; 
  unsigned int v17; 
  int v18; 

  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  Id = bdAchievementState::getId(state);
  v7 = this->m_totalQuests[ClientFromController];
  v8 = 0i64;
  v9 = Id;
  v10 = ClientFromController;
  if ( v7 )
  {
    v11 = ClientFromController;
    while ( 1 )
    {
      v12 = (unsigned int)v8;
      if ( Id == this->m_quests[v11][v8].id )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v7 )
        goto LABEL_5;
    }
    Progress = bdAchievementState::getProgress(state);
    Com_Printf(25, "Updated Mission %lu with Progress %d\n", v9, Progress);
    p_progress = &this->m_quests[v11][v12].progress;
    *p_progress = bdAchievementState::getProgress(state);
    if ( bdAchievementState::getCompletionCount(state) )
      *p_progress = bdAchievementState::getProgressTarget(state);
  }
  else
  {
LABEL_5:
    if ( v7 >= 0x3E8 )
    {
      v18 = 1000;
      v17 = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 379, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalQuests[localClientNum] ) < (unsigned)( 1000 )", "m_totalQuests[localClientNum] doesn't index MAX_PROGRESSION_QUESTS\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( this->m_totalQuests[v10] < 0x3E8 )
    {
      Name = bdAchievementState::getName(state);
      Com_Printf(25, "QUESTS: %lu (%s) has been found and added.\n", v9, Name);
      v14 = v10;
      this->m_quests[v10][this->m_totalQuests[v10]].id = v9;
      this->m_quests[v14][this->m_totalQuests[v10]].type = OnlineQuests::GetTypeFromID(&OnlineQuests::s_instance, v9);
      this->m_quests[v14][this->m_totalQuests[v10]].progress = bdAchievementState::getProgress(state);
      if ( bdAchievementState::getCompletionCount(state) )
        this->m_quests[v14][this->m_totalQuests[v10]].progress = bdAchievementState::getProgressTarget(state);
      this->m_quests[0][this->m_totalQuests[v10] + v14 * 1000].active = 0;
      if ( bdAchievementState::getStatus(state) == ACTIVE )
        this->m_quests[0][this->m_totalQuests[v10] + v14 * 1000].active = 1;
      ++this->m_totalQuests[v10];
    }
  }
}

/*
==============
OnlineQuests::CacheQuests
==============
*/
void OnlineQuests::CacheQuests(OnlineQuests *this)
{
  int RowCount; 
  int i; 
  const char *ColumnValueForRow; 
  int v5; 
  const char *v6; 
  int v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  __int64 v12; 
  int numStages; 
  int v14; 
  int v15; 
  StringTable *tablePtr; 

  StringTable_GetAsset("quest_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 642, ASSERT_TYPE_ASSERT, "(quest_challenges)", (const char *)&queryFormat, "quest_challenges") )
    __debugbreak();
  RowCount = StringTable_GetRowCount(tablePtr);
  for ( i = 0; i < RowCount; ++i )
  {
    v14 = 0;
    v15 = 0;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 0);
    v5 = atoi(ColumnValueForRow);
    v6 = StringTable_GetColumnValueForRow(tablePtr, i, 16);
    v7 = atoi(v6);
    v8 = StringTable_GetColumnValueForRow(tablePtr, i, 6);
    v9 = atoi(v8);
    v10 = StringTable_GetColumnValueForRow(tablePtr, i, 1);
    v11 = StringTable_GetColumnValueForRow(tablePtr, i, 5);
    if ( !I_strcmp(v11, "ALL") || !I_strcmp(v11, "BR") || !I_strcmp(v11, "CP") || !I_strcmp(v11, "OPERATOR") )
    {
      j_sscanf_s(v10, "ch_quest%d_stage%d", &v14, &v15);
      if ( v15 > 0 && v14 > 0 )
      {
        *((_BYTE *)&this->m_quests[1][997].progress + 268 * v14) = 1;
        *((_DWORD *)&this->m_quests[1][997].type + 67 * v14) = v7;
        *((_DWORD *)&this->m_quests[1][997].type + 67 * v14 + 2 * v15) = v5;
        *((_DWORD *)&this->m_quests[1][997].active + 67 * v14 + 2 * v15) = v9;
        v12 = v14 - 1;
        numStages = this->m_questCache[v12].numStages;
        if ( numStages < v15 )
          numStages = v15;
        this->m_questCache[v12].numStages = numStages;
      }
    }
  }
  this->m_questsCached = 1;
}

/*
==============
OnlineQuests::CheckandActivate
==============
*/
void OnlineQuests::CheckandActivate(OnlineQuests *this, const int controllerIndex)
{
  int v2; 
  OnlineQuests *v3; 
  const dvar_t *v4; 
  __int64 v5; 
  int *p_numStages; 
  int v7; 
  _DWORD *v8; 
  unsigned __int64 v9; 
  __int64 v10; 
  int *v11; 
  int v12; 
  _DWORD *v13; 
  unsigned __int64 v14; 
  unsigned int v15; 
  __int64 ClientFromController; 
  unsigned int v17; 
  bool *p_active; 
  int v19; 
  QUEST_ACTIVATION_TYPE *p_type; 
  int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  __int64 v53; 
  __int64 v54; 
  int v55; 
  int v56; 
  int *v57; 
  int v58; 
  OnlineQuests *v59; 
  __int64 v60; 
  int v61; 
  char *v62; 
  unsigned int *v63; 
  unsigned __int64 v64; 
  unsigned int v65; 
  LocalClientNum_t v66; 
  unsigned int v67; 
  QuestProgression *v68; 
  unsigned int progress; 
  const dvar_t *v70; 
  Online_Loot *v71; 
  int v72; 
  __int64 v73; 
  QUEST_ACTIVATION_TYPE *v74; 
  const char *v75; 
  Online_Loot *v76; 
  int v77; 
  int v78; 
  unsigned int *v79; 
  __int64 v80; 
  unsigned __int64 v81; 
  __int64 v82; 
  unsigned int v83; 
  QuestProgression *v84; 
  unsigned int v85; 
  __int64 v86; 
  unsigned int v87; 
  QuestProgression *v88; 
  unsigned int v89; 
  OnlineProgression *Instance; 
  OnlineQuests *v93; 
  StringTable *tablePtr; 
  const char *v95; 
  int v96[128]; 
  char _Buffer[8]; 

  v2 = controllerIndex;
  v3 = this;
  if ( !this->m_questsCached )
    OnlineQuests::CacheQuests(this);
  v4 = DVARBOOL_online_challenge_quest_auto_activate;
  if ( !DVARBOOL_online_challenge_quest_auto_activate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_quest_auto_activate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    if ( !OnlineQuests::GetActiveQuest(v3, v2, 0) )
    {
      v5 = 0i64;
      p_numStages = &v3->m_questCache[0].numStages;
      do
      {
        if ( *((_BYTE *)p_numStages - 8) )
        {
          if ( !*(p_numStages - 1) )
          {
            v7 = 0;
            if ( *p_numStages > 0 )
            {
              v8 = p_numStages + 2;
              do
              {
                v9 = (int)*(v8 - 1);
                if ( OnlineQuests::GetProgression(v3, controllerIndex, v9) < *v8 )
                {
                  Com_Printf(25, "No MP missions are active, so activating %d\n", (unsigned int)v9);
                  OnlineQuests::StartQuest(v3, controllerIndex, v9, QUEST_ACTIVATION_TYPE_MP, QUEST_ACTIVATION_MODE_CHECK_AND_ACTIVATE);
                  return;
                }
                ++v7;
                v8 += 2;
              }
              while ( v7 < *p_numStages );
            }
          }
        }
        ++v5;
        p_numStages += 67;
      }
      while ( v5 < 128 );
      v2 = controllerIndex;
    }
    if ( !OnlineQuests::GetActiveQuest(v3, v2, 4) )
    {
      v10 = 0i64;
      v11 = &v3->m_questCache[0].numStages;
      do
      {
        if ( *((_BYTE *)v11 - 8) )
        {
          if ( *(v11 - 1) == 4 )
          {
            v12 = 0;
            if ( *v11 > 0 )
            {
              v13 = v11 + 2;
              do
              {
                v14 = (int)*(v13 - 1);
                if ( OnlineQuests::GetProgression(v3, controllerIndex, v14) < *v13 )
                {
                  Com_Printf(25, "No CP missions are active, so activating %d\n", (unsigned int)v14);
                  OnlineQuests::StartQuest(v3, controllerIndex, v14, QUEST_ACTIVATION_TYPE_CP, QUEST_ACTIVATION_MODE_CHECK_AND_ACTIVATE);
                  return;
                }
                ++v12;
                v13 += 2;
              }
              while ( v12 < *v11 );
            }
          }
        }
        ++v10;
        v11 += 67;
      }
      while ( v10 < 128 );
      v2 = controllerIndex;
    }
    v15 = 0;
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    v17 = v3->m_totalQuests[ClientFromController];
    if ( !v17 )
      goto LABEL_36;
    p_active = &v3->m_quests[ClientFromController][0].active;
    while ( !*p_active || *((_DWORD *)p_active - 1) != 1 )
    {
      ++v15;
      p_active += 24;
      if ( v15 >= v17 )
        goto LABEL_36;
    }
    if ( !LODWORD(v3->m_quests[ClientFromController][v15].id) )
    {
LABEL_36:
      v19 = 0;
      p_type = &v3->m_questCache[1].type;
      v21 = 2;
      do
      {
        if ( *((_BYTE *)p_type - 272) && *((_DWORD *)p_type - 67) == 1 )
        {
          v22 = v19++;
          v96[v22] = v21 - 2;
        }
        if ( *((_BYTE *)p_type - 4) && *p_type == QUEST_ACTIVATION_TYPE_BR )
        {
          v23 = v19++;
          v96[v23] = v21 - 1;
        }
        if ( *((_BYTE *)p_type + 264) && *((_DWORD *)p_type + 67) == 1 )
        {
          v24 = v19++;
          v96[v24] = v21;
        }
        if ( *((_BYTE *)p_type + 532) && *((_DWORD *)p_type + 134) == 1 )
        {
          v25 = v19++;
          v96[v25] = v21 + 1;
        }
        if ( *((_BYTE *)p_type + 800) && *((_DWORD *)p_type + 201) == 1 )
        {
          v26 = v19++;
          v96[v26] = v21 + 2;
        }
        if ( *((_BYTE *)p_type + 1068) && *((_DWORD *)p_type + 268) == 1 )
        {
          v27 = v19++;
          v96[v27] = v21 + 3;
        }
        if ( *((_BYTE *)p_type + 1336) && *((_DWORD *)p_type + 335) == 1 )
        {
          v28 = v19++;
          v96[v28] = v21 + 4;
        }
        if ( *((_BYTE *)p_type + 1604) && *((_DWORD *)p_type + 402) == 1 )
        {
          v29 = v19++;
          v96[v29] = v21 + 5;
        }
        if ( *((_BYTE *)p_type + 1872) && *((_DWORD *)p_type + 469) == 1 )
        {
          v30 = v19++;
          v96[v30] = v21 + 6;
        }
        if ( *((_BYTE *)p_type + 2140) && *((_DWORD *)p_type + 536) == 1 )
        {
          v31 = v19++;
          v96[v31] = v21 + 7;
        }
        if ( *((_BYTE *)p_type + 2408) && *((_DWORD *)p_type + 603) == 1 )
        {
          v32 = v19++;
          v96[v32] = v21 + 8;
        }
        if ( *((_BYTE *)p_type + 2676) && *((_DWORD *)p_type + 670) == 1 )
        {
          v33 = v19++;
          v96[v33] = v21 + 9;
        }
        if ( *((_BYTE *)p_type + 2944) && *((_DWORD *)p_type + 737) == 1 )
        {
          v34 = v19++;
          v96[v34] = v21 + 10;
        }
        if ( *((_BYTE *)p_type + 3212) && *((_DWORD *)p_type + 804) == 1 )
        {
          v35 = v19++;
          v96[v35] = v21 + 11;
        }
        if ( *((_BYTE *)p_type + 3480) && *((_DWORD *)p_type + 871) == 1 )
        {
          v36 = v19++;
          v96[v36] = v21 + 12;
        }
        if ( *((_BYTE *)p_type + 3748) && *((_DWORD *)p_type + 938) == 1 )
        {
          v37 = v19++;
          v96[v37] = v21 + 13;
        }
        if ( *((_BYTE *)p_type + 4016) && *((_DWORD *)p_type + 1005) == 1 )
        {
          v38 = v19++;
          v96[v38] = v21 + 14;
        }
        if ( *((_BYTE *)p_type + 4284) && *((_DWORD *)p_type + 1072) == 1 )
        {
          v39 = v19++;
          v96[v39] = v21 + 15;
        }
        if ( *((_BYTE *)p_type + 4552) && *((_DWORD *)p_type + 1139) == 1 )
        {
          v40 = v19++;
          v96[v40] = v21 + 16;
        }
        if ( *((_BYTE *)p_type + 4820) && *((_DWORD *)p_type + 1206) == 1 )
        {
          v41 = v19++;
          v96[v41] = v21 + 17;
        }
        if ( *((_BYTE *)p_type + 5088) && *((_DWORD *)p_type + 1273) == 1 )
        {
          v42 = v19++;
          v96[v42] = v21 + 18;
        }
        if ( *((_BYTE *)p_type + 5356) && *((_DWORD *)p_type + 1340) == 1 )
        {
          v43 = v19++;
          v96[v43] = v21 + 19;
        }
        if ( *((_BYTE *)p_type + 5624) && *((_DWORD *)p_type + 1407) == 1 )
        {
          v44 = v19++;
          v96[v44] = v21 + 20;
        }
        if ( *((_BYTE *)p_type + 5892) && *((_DWORD *)p_type + 1474) == 1 )
        {
          v45 = v19++;
          v96[v45] = v21 + 21;
        }
        if ( *((_BYTE *)p_type + 6160) && *((_DWORD *)p_type + 1541) == 1 )
        {
          v46 = v19++;
          v96[v46] = v21 + 22;
        }
        if ( *((_BYTE *)p_type + 6428) && *((_DWORD *)p_type + 1608) == 1 )
        {
          v47 = v19++;
          v96[v47] = v21 + 23;
        }
        if ( *((_BYTE *)p_type + 6696) && *((_DWORD *)p_type + 1675) == 1 )
        {
          v48 = v19++;
          v96[v48] = v21 + 24;
        }
        if ( *((_BYTE *)p_type + 6964) && *((_DWORD *)p_type + 1742) == 1 )
        {
          v49 = v19++;
          v96[v49] = v21 + 25;
        }
        if ( *((_BYTE *)p_type + 7232) && *((_DWORD *)p_type + 1809) == 1 )
        {
          v50 = v19++;
          v96[v50] = v21 + 26;
        }
        if ( *((_BYTE *)p_type + 7500) && *((_DWORD *)p_type + 1876) == 1 )
        {
          v51 = v19++;
          v96[v51] = v21 + 27;
        }
        if ( *((_BYTE *)p_type + 7768) && *((_DWORD *)p_type + 1943) == 1 )
        {
          v52 = v19++;
          v96[v52] = v21 + 28;
        }
        if ( *((_BYTE *)p_type + 8036) && *((_DWORD *)p_type + 2010) == 1 )
        {
          v53 = v19++;
          v96[v53] = v21 + 29;
        }
        v21 += 32;
        p_type += 2144;
      }
      while ( v21 - 2 < 128 );
      if ( v19 > 0 )
      {
        v54 = (unsigned int)v19;
        do
        {
          v55 = I_irand(1, v19);
          v56 = v96[v55];
          v57 = &v96[v55];
          v58 = I_irand(1, v19);
          *v57 = v96[v58];
          v96[v58] = v56;
          --v54;
        }
        while ( v54 );
        v2 = controllerIndex;
      }
      tablePtr = (StringTable *)v19;
      if ( v19 > 0 )
      {
        v59 = this;
        v60 = 0i64;
        while ( 1 )
        {
          v61 = 0;
          v62 = (char *)v59 + 268 * v96[v60];
          if ( *((int *)v62 + 12109) > 0 )
          {
            v63 = (unsigned int *)(v62 + 48444);
            do
            {
              v64 = (int)*(v63 - 1);
              v65 = 0;
              v66 = CL_Mgr_GetClientFromController(v2);
              v59 = this;
              v67 = this->m_totalQuests[v66];
              if ( v67 )
              {
                v68 = this->m_quests[v66];
                while ( v68->id != v64 )
                {
                  ++v65;
                  ++v68;
                  if ( v65 >= v67 )
                    goto LABEL_146;
                }
                progress = this->m_quests[v66][v65].progress;
              }
              else
              {
LABEL_146:
                progress = 0;
              }
              if ( progress < *v63 )
              {
                Com_Printf(25, "No BR missions are active, so activating %d\n", (unsigned int)v64);
                OnlineQuests::StartQuest(this, controllerIndex, v64, QUEST_ACTIVATION_TYPE_BR, QUEST_ACTIVATION_MODE_CHECK_AND_ACTIVATE);
                return;
              }
              v2 = controllerIndex;
              ++v61;
              v63 += 2;
            }
            while ( v61 < *((_DWORD *)v62 + 12109) );
          }
          if ( ++v60 >= (__int64)tablePtr )
            break;
          v2 = controllerIndex;
        }
        v3 = this;
      }
    }
  }
  v70 = DVARBOOL_online_challenge_quest_activate_loot;
  if ( !DVARBOOL_online_challenge_quest_activate_loot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_challenge_quest_activate_loot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v70);
  if ( !v70->current.enabled || (v71 = Online_Loot::GetInstance(), v72 = controllerIndex, !Online_Loot::HasInventory(v71, controllerIndex)) )
  {
LABEL_185:
    v3->m_needToCheckAndActivate[controllerIndex] = 0;
    v3->m_activatingQuestMode[controllerIndex] = QUEST_ACTIVATION_MODE_READY;
    Instance = OnlineProgression::GetInstance();
    OnlineProgression::SendSeasonChallengesComplete(Instance, controllerIndex);
    return;
  }
  StringTable_GetAsset("loot/mission_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 801, ASSERT_TYPE_ASSERT, "(mission_ids)", (const char *)&queryFormat, "mission_ids") )
    __debugbreak();
  v73 = 0i64;
  v74 = &v3->m_questCache[0].type;
  v93 = NULL;
  while ( 1 )
  {
    if ( !*((_BYTE *)v74 - 4) )
      goto LABEL_184;
    if ( *v74 != QUEST_ACTIVATION_TYPE_OPERATOR )
      goto LABEL_184;
    j_sprintf(_Buffer, "%d", *((unsigned int *)v74 + 2));
    v75 = StringTable_Lookup(tablePtr, 1, _Buffer, 0);
    v95 = v75;
    if ( !*v75 )
      goto LABEL_184;
    v76 = Online_Loot::GetInstance();
    v77 = atoi(v75);
    if ( !Online_Loot::GetItemQuantity(v76, v72, v77) )
      goto LABEL_184;
    v78 = 0;
    if ( *((int *)v74 + 1) > 0 )
      break;
LABEL_183:
    v72 = controllerIndex;
LABEL_184:
    ++v73;
    v74 += 67;
    v93 = (OnlineQuests *)v73;
    if ( v73 >= 128 )
      goto LABEL_185;
  }
  v79 = (unsigned int *)(v74 + 3);
  while ( 1 )
  {
    v80 = 0i64;
    v81 = *(v79 - 1);
    v82 = CL_Mgr_GetClientFromController(controllerIndex);
    v83 = v3->m_totalQuests[v82];
    if ( v83 )
    {
      v84 = v3->m_quests[v82];
      while ( v84->id != (int)v81 )
      {
        v80 = (unsigned int)(v80 + 1);
        ++v84;
        if ( (unsigned int)v80 >= v83 )
          goto LABEL_175;
      }
      if ( v3->m_quests[v82][v80].active )
      {
LABEL_182:
        v73 = (__int64)v93;
        goto LABEL_183;
      }
    }
LABEL_175:
    v85 = 0;
    v86 = CL_Mgr_GetClientFromController(controllerIndex);
    v87 = v3->m_totalQuests[v86];
    if ( v87 )
    {
      v88 = v3->m_quests[v86];
      while ( v88->id != v81 )
      {
        ++v85;
        ++v88;
        if ( v85 >= v87 )
          goto LABEL_179;
      }
      v89 = v3->m_quests[v86][v85].progress;
    }
    else
    {
LABEL_179:
      v89 = 0;
    }
    if ( v89 < *v79 )
      break;
    ++v78;
    v79 += 2;
    if ( v78 >= *((_DWORD *)v74 + 1) )
      goto LABEL_182;
  }
  Com_Printf(25, "Activating stage %d of owned loot mission %s\n", (unsigned int)v81, v95);
  OnlineQuests::StartQuest(v3, controllerIndex, v81, QUEST_ACTIVATION_TYPE_OPERATOR, QUEST_ACTIVATION_MODE_CHECK_AND_ACTIVATE);
}

/*
==============
OnlineQuests::ConvertProgress
==============
*/
__int64 OnlineQuests::ConvertProgress(const unsigned __int64 id, const unsigned int progress)
{
  __int64 v2; 
  const char *v4; 
  const char *v5; 
  float v6; 
  float v8; 
  StringTable *tablePtr; 

  v2 = progress;
  StringTable_GetAsset("quest_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 870, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  v4 = j_va("%lu", id);
  v5 = StringTable_Lookup(tablePtr, 0, v4, 18);
  if ( I_stricmp(v5, "sec") )
  {
    if ( I_stricmp(v5, "min") )
    {
      return (unsigned int)v2;
    }
    else
    {
      v8 = (float)v2;
      return (unsigned int)(int)(float)(v8 * 0.000016666667);
    }
  }
  else
  {
    v6 = (float)v2;
    return (unsigned int)(int)(float)(v6 * 0.001);
  }
}

/*
==============
OnlineQuests::DeactivateCurrentQuest
==============
*/
void OnlineQuests::DeactivateCurrentQuest(OnlineQuests *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  LocalClientNum_t ClientFromController; 
  __int64 v6; 

  v2 = controllerIndex;
  v4 = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( this->m_totalQuests[ClientFromController] )
  {
    v6 = ClientFromController;
    do
    {
      if ( this->m_quests[v6][v4].id == this->m_deactivatingQuest[v2] )
        this->m_quests[v6][v4].active = 0;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < this->m_totalQuests[ClientFromController] );
  }
}

/*
==============
OnlineQuests::EndQuest
==============
*/
void OnlineQuests::EndQuest(OnlineQuests *this, const int controllerIndex, const unsigned __int64 questID)
{
  __int64 v4; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v8; 
  DWServicesAccess *v9; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v11; 
  bdRemoteTask *v12; 
  TaskManager *v13; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  LocalClientNum_t outLocalClientNum; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v19; 
  bdDeactivateAchievementRequest request; 

  v19 = -2i64;
  v4 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  Instance = DWServicesAccess::GetInstance();
  TitleID = DWServicesAccess::GetTitleID(Instance);
  v8 = j_va("%u", TitleID);
  bdDeactivateAchievementRequest::bdDeactivateAchievementRequest(&request, v8, questID);
  v9 = DWServicesAccess::GetInstance();
  AchievementEngine = DWServicesAccess::GetAchievementEngine(v9, v4);
  v11 = (TaskCreateRequest *)DWAchievementEngine::deactivateAchievement(AchievementEngine, &result, &request);
  if ( v11 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
  {
    v12 = *(bdRemoteTask **)&v11->m_controllerIndex;
    pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v12;
    if ( v12 )
      _InterlockedExchangeAdd((volatile signed __int32 *)&v12->m_refCount, 1u);
  }
  if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
    ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
  this->m_deactivatingQuest[v4] = questID;
  Com_Printf(25, "Ending Quest %lu\n", questID);
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    pTaskCreateResult.m_localTaskId = 0;
    pTaskCreateResult.m_task = NULL;
    pTaskCreateRequest.m_controllerIndex = v4;
    pTaskCreateRequest.m_onCompletionCallback = OnlineQuests::OnDeactivateAchievementComplete;
    v13 = TaskManager::GetInstance();
    if ( TaskManager::CreateTask(v13, &pTaskCreateRequest, &pTaskCreateResult) )
    {
      Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineQuests::EndQuest", pTaskCreateResult.m_localTaskId, v4);
    }
    else
    {
      Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineQuests::EndQuest", (unsigned int)v4);
      OnlineQuests::QuestDeactivationFailed(&OnlineQuests::s_instance, v4);
    }
  }
  else
  {
    Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineQuests::EndQuest", (unsigned int)v4);
    if ( CL_Mgr_IsControllerMappedToClient(v4, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "quest_deactivation_failed", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
  bdStructFixedSizeString<100>::~bdStructFixedSizeString<100>(&request.m_name);
  bdStructFixedSizeString<20>::~bdStructFixedSizeString<20>((bdStructFixedSizeString<20> *)(&request.__vftable + 2));
  bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
  bdReferencable::~bdReferencable((bdReferencable *)&request.gap95[3]);
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
OnlineQuests::GetActiveQuest
==============
*/
__int64 OnlineQuests::GetActiveQuest(OnlineQuests *this, const int controllerIndex, const int quest_type)
{
  int v5; 
  LocalClientNum_t ClientFromController; 
  __int64 v7; 
  unsigned int v8; 
  bool *i; 

  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = ClientFromController;
  v8 = this->m_totalQuests[ClientFromController];
  if ( !v8 )
    return 0i64;
  for ( i = &this->m_quests[ClientFromController][0].active; !*i || *((_DWORD *)i - 1) != quest_type; i += 24 )
  {
    if ( ++v5 >= v8 )
      return 0i64;
  }
  return LODWORD(this->m_quests[v7][v5].id);
}

/*
==============
OnlineQuests::GetInstance
==============
*/
OnlineQuests *OnlineQuests::GetInstance()
{
  return &OnlineQuests::s_instance;
}

/*
==============
OnlineQuests::GetInstancePtr
==============
*/
OnlineQuests *OnlineQuests::GetInstancePtr()
{
  return &OnlineQuests::s_instance;
}

/*
==============
OnlineQuests::GetProgression
==============
*/
__int64 OnlineQuests::GetProgression(OnlineQuests *this, const int controllerIndex, unsigned __int64 quest_id)
{
  int v5; 
  __int64 ClientFromController; 
  unsigned int v7; 
  QuestProgression *i; 

  v5 = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalQuests[ClientFromController];
  if ( !v7 )
    return 0i64;
  for ( i = this->m_quests[ClientFromController]; i->id != quest_id; ++i )
  {
    if ( ++v5 >= v7 )
      return 0i64;
  }
  return this->m_quests[ClientFromController][v5].progress;
}

/*
==============
OnlineQuests::GetTypeFromID
==============
*/
int OnlineQuests::GetTypeFromID(OnlineQuests *this, const unsigned __int64 quest_id)
{
  const char *v3; 
  const char *v4; 
  StringTable *tablePtr; 

  StringTable_GetAsset("quest_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 629, ASSERT_TYPE_ASSERT, "(quest_challenges)", (const char *)&queryFormat, "quest_challenges") )
    __debugbreak();
  v3 = j_va("%lu", quest_id);
  v4 = StringTable_Lookup(tablePtr, 0, v3, 16);
  return atoi(v4);
}

/*
==============
OnlineQuests::HandleCompletion
==============
*/
void OnlineQuests::HandleCompletion(OnlineQuests *this, const XUID xuid, bdJSONDeserializer *json, bool complete)
{
  bool v5; 
  int PortForLocalXUID; 
  __int64 v10; 
  LocalClientNum_t ClientFromController; 
  StringTable *v12; 
  char v13; 
  unsigned int v14; 
  unsigned int v15; 
  StringTable *v16; 
  __int64 v17; 
  char *v18; 
  __int64 v19; 
  StatsSource ActiveStatsSource; 
  char *v22; 
  const char *v23; 
  unsigned __int64 v24; 
  int v25; 
  unsigned __int64 v26; 
  unsigned __int64 UserId; 
  bool v28; 
  const char *v29; 
  StringTable *v30; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  __int64 v34; 
  unsigned int i; 
  __int64 v36; 
  __int64 v37; 
  char v38; 
  char v39; 
  unsigned int j; 
  __int64 v42; 
  __int64 v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v47; 
  unsigned int v48; 
  int v49; 
  const char *v50; 
  unsigned int v51; 
  QUEST_ACTIVATION_TYPE TypeFromID; 
  QUEST_ACTIVATION_TYPE v53; 
  unsigned int v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 v57; 
  StringTable *tablePtr; 
  unsigned int v60; 
  unsigned __int64 value; 
  int navStringCount[2]; 
  __int64 v63; 
  DDLState fromState; 
  unsigned __int64 v65; 
  bdJSONDeserializer v66; 
  DDLContext context; 
  __int64 v68; 
  DLogContext v69; 
  char *navStrings[16]; 
  DDLState result; 
  char v72[64]; 
  char buffer[4096]; 

  v68 = -2i64;
  v5 = complete;
  bdJSONDeserializer::bdJSONDeserializer(&v66);
  PortForLocalXUID = Live_GetPortForLocalXUID(xuid);
  v10 = PortForLocalXUID;
  v63 = PortForLocalXUID;
  this->m_totalRewards[PortForLocalXUID] = 0;
  ClientFromController = CL_Mgr_GetClientFromController(PortForLocalXUID);
  v12 = (StringTable *)(int)ClientFromController;
  tablePtr = (StringTable *)(int)ClientFromController;
  if ( !bdJSONDeserializer::getUInt64(json, "id_", &value) )
  {
    v30 = v12;
    goto LABEL_41;
  }
  if ( bdJSONDeserializer::getUInt32(json, "progress", &v60) )
  {
    v13 = 0;
    v14 = 0;
    v15 = this->m_totalQuests[(_QWORD)v12];
    if ( !v15 )
      goto LABEL_10;
    v16 = v12;
    v17 = 1000i64 * (_QWORD)v12;
    do
    {
      v18 = (char *)this + 24 * v17 + 24 * v14;
      if ( value == *((_QWORD *)v18 + 28) )
      {
        Com_Printf(25, "Updated Mission %lu with Progress %d\n", value, v60);
        *((_DWORD *)v18 + 58) = v60;
        v13 = 1;
      }
      ++v14;
      v15 = this->m_totalQuests[(_QWORD)v16];
    }
    while ( v14 < v15 );
    v5 = complete;
    if ( !v13 )
    {
      v12 = tablePtr;
LABEL_10:
      if ( v15 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 438, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalQuests[localClientNum] ) < (unsigned)( 1000 )", "m_totalQuests[localClientNum] doesn't index MAX_PROGRESSION_QUESTS\n\t%i not in [0, %i)", v15, 1000) )
        __debugbreak();
      if ( this->m_totalQuests[(_QWORD)v12] < 0x3E8 )
      {
        Com_Printf(25, "Adding Mission %lu with Progress %d\n", value, v60);
        v19 = (__int64)v12;
        this->m_quests[(_QWORD)v12][this->m_totalQuests[(_QWORD)v12]].id = value;
        this->m_quests[v19][this->m_totalQuests[(_QWORD)v12]].type = OnlineQuests::GetTypeFromID(&OnlineQuests::s_instance, value);
        this->m_quests[v19][this->m_totalQuests[(_QWORD)v12]++].progress = v60;
      }
    }
  }
  if ( !v5 )
    goto LABEL_40;
  bdJSONDeserializer::getString(json, (const char *const)&stru_143C9A1A4, v72, 0x40u);
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v10);
  if ( CL_PlayerData_GetDDLBuffer(&context, v10, ActiveStatsSource, STATSGROUP_RANKED) )
  {
    v22 = j_va("rankedMatchData.missionComplete.%s", v72);
    Com_ParseNavStrings(v22, (const char **)navStrings, 16, navStringCount);
    fromState = *DDL_GetRootState(&result, context.def);
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount[0], (const char **)navStrings) )
      DDL_SetBool(&fromState, &context, 1);
  }
  if ( LUI_BeginEvent(LOCAL_CLIENT_0, "completed_mission", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
    StringTable_GetAsset("quest_challenges.csv", (const StringTable **)navStringCount);
    if ( !*(_QWORD *)navStringCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 473, ASSERT_TYPE_ASSERT, "(quest_challenges)", (const char *)&queryFormat, "quest_challenges") )
      __debugbreak();
    v23 = StringTable_Lookup(*(const StringTable **)navStringCount, 1, v72, 8);
    bdJSONDeserializer::getUInt64(json, "completionTimestamp", &v65);
    v24 = v65;
    v25 = atoi(v23);
    v26 = value;
    UserId = DLog_GetUserId(v10);
    if ( DLog_IsActive() && DLog_CreateContext(&v69, UserId, buffer, 4096) )
    {
      if ( DLog_IsActive() )
      {
        v28 = DLog_BeginEvent(&v69, "dlog_event_challenge_complete");
        v69.autoEndEvent = 1;
        if ( v28 && DLog_UInt64(&v69, "challenge_id", v26) && DLog_Int32(&v69, "xp_gained", v25) && DLog_UInt64(&v69, "timestamp", v24) )
          DLog_RecordContext(&v69);
      }
      else
      {
        v69.error = DLOG_ERROR_NOT_ACTIVE;
      }
    }
    v29 = StringTable_Lookup(*(const StringTable **)navStringCount, 1, v72, 15);
    v30 = tablePtr;
    if ( !I_strcmp(v29, "1") )
    {
      v31 = 0i64;
      v32 = this->m_totalQuests[(_QWORD)tablePtr];
      if ( v32 )
      {
        while ( 1 )
        {
          v33 = (unsigned int)v31;
          if ( this->m_quests[(_QWORD)tablePtr][v31].id == value )
            break;
          v31 = (unsigned int)(v31 + 1);
          if ( (unsigned int)v31 >= v32 )
          {
            this->m_needToCheckAndActivate[v10] = 1;
            goto LABEL_41;
          }
        }
        Com_Printf(25, "Deactivating Mission %lu, it is the last one in the set.\n", value);
        this->m_quests[(_QWORD)tablePtr][v33].active = 0;
      }
      this->m_needToCheckAndActivate[v10] = 1;
    }
  }
  else
  {
LABEL_40:
    v30 = tablePtr;
  }
LABEL_41:
  v34 = v10;
  if ( bdJSONDeserializer::hasKey(json, "triggers") && bdJSONDeserializer::getArray(json, "triggers", &v66) )
  {
    for ( i = 0; i < v66.m_count; v34 = v63 )
    {
      bdJSONDeserializer::bdJSONDeserializer((bdJSONDeserializer *)&fromState);
      bdJSONDeserializer::getElementByIndex(&v66, i, (bdJSONDeserializer *)&fromState);
      bdJSONDeserializer::getString((bdJSONDeserializer *)&fromState, "type", (char *const)&result.isValid, 0x20u);
      v36 = 0x7FFFFFFFi64;
      v37 = 0i64;
      do
      {
        v38 = *(&result.isValid + v37);
        v39 = aGrantProduct[v37++];
        if ( !v36-- )
          break;
        if ( v38 != v39 )
          goto LABEL_51;
      }
      while ( v38 );
      bdJSONDeserializer::getObject((bdJSONDeserializer *)&fromState, "inventory", (bdJSONDeserializer *)&fromState);
      bdJSONDeserializer::getArray((bdJSONDeserializer *)&fromState, "granted_items", (bdJSONDeserializer *)&fromState);
      for ( j = 0; j < HIDWORD(fromState.ddlDef); ++j )
      {
        if ( j >= 4 )
          break;
        bdJSONDeserializer::bdJSONDeserializer((bdJSONDeserializer *)&context);
        bdJSONDeserializer::getElementByIndex((bdJSONDeserializer *)&fromState, j, (bdJSONDeserializer *)&context);
        bdJSONDeserializer::getInt32((bdJSONDeserializer *)&context, (const char *const)&valueOut, navStringCount);
        this->m_rewards[v34][this->m_totalRewards[v34]++] = navStringCount[0];
        bdJSONDeserializer::~bdJSONDeserializer((bdJSONDeserializer *)&context);
      }
LABEL_51:
      v42 = 0x7FFFFFFFi64;
      v43 = 0i64;
      while ( 1 )
      {
        v44 = *((unsigned __int8 *)&result.isValid + v43);
        v45 = (unsigned __int8)aActivateAchiev[v43++];
        if ( !v42-- )
        {
LABEL_60:
          v49 = 0;
          goto LABEL_61;
        }
        if ( v44 != v45 )
        {
          v47 = v44 + 32;
          if ( v44 - 65 > 0x19 )
            v47 = v44;
          v44 = v47;
          v48 = v45 + 32;
          if ( v45 - 65 > 0x19 )
            v48 = v45;
          if ( v44 != v48 )
            break;
        }
        if ( !v44 )
          goto LABEL_60;
      }
      v49 = 1;
      if ( v44 < v48 )
        v49 = -1;
LABEL_61:
      if ( !v49 && bdJSONDeserializer::getString((bdJSONDeserializer *)&fromState, (const char *const)&stru_143C9A1A4, v72, 0x40u) )
      {
        if ( this->m_totalQuests[(_QWORD)v30] >= 0x3E8 )
        {
          LODWORD(v57) = 1000;
          LODWORD(v56) = this->m_totalQuests[(_QWORD)v30];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 541, ASSERT_TYPE_ASSERT, "(unsigned)( m_totalQuests[localClientNum] ) < (unsigned)( 1000 )", "m_totalQuests[localClientNum] doesn't index MAX_PROGRESSION_QUESTS\n\t%i not in [0, %i)", v56, v57) )
            __debugbreak();
        }
        if ( this->m_totalQuests[(_QWORD)v30] < 0x3E8 )
        {
          StringTable_GetAsset("quest_challenges.csv", (const StringTable **)&tablePtr);
          if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 546, ASSERT_TYPE_ASSERT, "(quest_challenges)", (const char *)&queryFormat, "quest_challenges") )
            __debugbreak();
          v50 = StringTable_Lookup(tablePtr, 1, v72, 0);
          v51 = atoi(v50);
          Com_Printf(25, "QUESTS: %s (%d) has been unlocked, activated and added\n", v72, v51);
          TypeFromID = OnlineQuests::GetTypeFromID(&OnlineQuests::s_instance, value);
          v53 = TypeFromID;
          if ( (unsigned int)TypeFromID <= QUEST_ACTIVATION_TYPE_BR || (unsigned int)(TypeFromID - 3) <= 1 )
          {
            v54 = 0;
            if ( this->m_totalQuests[(_QWORD)v30] )
            {
              v55 = (__int64)v30;
              do
              {
                if ( this->m_quests[v55][v54].type == TypeFromID )
                  this->m_quests[v55][v54].active = 0;
                ++v54;
              }
              while ( v54 < this->m_totalQuests[(_QWORD)v30] );
            }
          }
          this->m_quests[(_QWORD)v30][this->m_totalQuests[(_QWORD)v30]].id = atoi(v50);
          this->m_quests[(_QWORD)v30][this->m_totalQuests[(_QWORD)v30]].type = v53;
          this->m_quests[(_QWORD)v30][this->m_totalQuests[(_QWORD)v30]].progress = 0;
          this->m_quests[(_QWORD)v30][this->m_totalQuests[(_QWORD)v30]++].active = 1;
        }
      }
      bdJSONDeserializer::~bdJSONDeserializer((bdJSONDeserializer *)&fromState);
      ++i;
    }
  }
  bdJSONDeserializer::~bdJSONDeserializer(&v66);
}

/*
==============
OnlineQuests::IsPlatformValid
==============
*/
bool OnlineQuests::IsPlatformValid(OnlineQuests *this, const char *platform)
{
  return !I_strcmp(platform, "ALL") || !I_strcmp(platform, "BR") || !I_strcmp(platform, "CP") || !I_strcmp(platform, "OPERATOR");
}

/*
==============
OnlineQuests::IsQuestActive
==============
*/
bool OnlineQuests::IsQuestActive(OnlineQuests *this, const int controllerIndex, const int id)
{
  __int64 v4; 
  __int64 v5; 
  __int64 ClientFromController; 
  unsigned int v7; 
  QuestProgression *i; 

  v4 = id;
  v5 = 0i64;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  v7 = this->m_totalQuests[ClientFromController];
  if ( !v7 )
    return 0;
  for ( i = this->m_quests[ClientFromController]; i->id != v4; ++i )
  {
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v7 )
      return 0;
  }
  return this->m_quests[ClientFromController][v5].active;
}

/*
==============
OnlineQuests::MissionComplete
==============
*/
void OnlineQuests::MissionComplete(OnlineQuests *this, const int controllerIndex, const char *name)
{
  StatsSource ActiveStatsSource; 
  char *v8; 
  int navStringCount; 
  DDLState fromState; 
  DDLContext context; 
  DDLState result; 
  char *navStrings[16]; 

  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.isValid = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
  if ( CL_PlayerData_GetDDLBuffer(&context, controllerIndex, ActiveStatsSource, STATSGROUP_RANKED) )
  {
    v8 = j_va("rankedMatchData.missionComplete.%s", name);
    Com_ParseNavStrings(v8, (const char **)navStrings, 16, &navStringCount);
    fromState = *DDL_GetRootState(&result, context.def);
    if ( DDL_MoveToPath(&fromState, &fromState, navStringCount, (const char **)navStrings) )
      DDL_SetBool(&fromState, &context, 1);
  }
}

/*
==============
OnlineQuests::NeedToCheckandActivate
==============
*/
void OnlineQuests::NeedToCheckandActivate(OnlineQuests *this, const int controllerIndex)
{
  this->m_needToCheckAndActivate[controllerIndex] = 1;
}

/*
==============
OnlineQuests::OnActivateAchievementComplete
==============
*/
void OnlineQuests::OnActivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  char v5; 
  unsigned int v6; 
  LocalClientNum_t ClientFromController; 
  __int64 v8; 
  __int64 v9; 
  LocalClientNum_t outLocalClientNum; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 145, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "activateAchievement - Error\n");
      OnlineQuests::QuestActivationFailed(&OnlineQuests::s_instance, pTask->m_controllerIndex);
    }
  }
  else
  {
    Com_Printf(25, "activateAchievement - Success\n");
    m_controllerIndex = pTask->m_controllerIndex;
    v5 = 0;
    v6 = 0;
    ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    if ( !OnlineQuests::s_instance.m_totalQuests[ClientFromController] )
      goto LABEL_12;
    do
    {
      v8 = 1000i64 * (int)ClientFromController + v6;
      if ( OnlineQuests::s_instance.m_quests[0][v8].id == OnlineQuests::s_instance.m_activatingQuest[m_controllerIndex] )
      {
        v5 = 1;
        OnlineQuests::s_instance.m_quests[0][v8].active = 1;
        OnlineQuests::s_instance.m_quests[0][v8].type = OnlineQuests::s_instance.m_activatingQuestType[m_controllerIndex];
      }
      ++v6;
    }
    while ( v6 < OnlineQuests::s_instance.m_totalQuests[ClientFromController] );
    if ( !v5 )
    {
LABEL_12:
      OnlineQuests::s_instance.m_quests[ClientFromController][OnlineQuests::s_instance.m_totalQuests[ClientFromController]].id = OnlineQuests::s_instance.m_activatingQuest[m_controllerIndex];
      OnlineQuests::s_instance.m_quests[ClientFromController][OnlineQuests::s_instance.m_totalQuests[ClientFromController]].type = OnlineQuests::s_instance.m_activatingQuestType[m_controllerIndex];
      OnlineQuests::s_instance.m_quests[ClientFromController][OnlineQuests::s_instance.m_totalQuests[ClientFromController]].progress = 0;
      OnlineQuests::s_instance.m_quests[ClientFromController][OnlineQuests::s_instance.m_totalQuests[ClientFromController]++].active = 1;
    }
    v9 = pTask->m_controllerIndex;
    if ( OnlineQuests::s_instance.m_activatingQuestMode[v9] == QUEST_ACTIVATION_MODE_CHECK_AND_ACTIVATE )
    {
      OnlineQuests::CheckandActivate(&OnlineQuests::s_instance, v9);
    }
    else if ( CL_Mgr_IsControllerMappedToClient(v9, &outLocalClientNum) && LUI_BeginEvent(outLocalClientNum, "quest_activated", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
  }
}

/*
==============
OnlineQuests::OnDeactivateAchievementComplete
==============
*/
void OnlineQuests::OnDeactivateAchievementComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  __int64 m_controllerIndex; 
  unsigned int v5; 
  __int64 ClientFromController; 
  __int64 v7; 

  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_quests.cpp", 269, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
    {
      Com_PrintError(25, "DeactivateAchievement - Error\n");
      OnlineQuests::QuestDeactivationFailed(&OnlineQuests::s_instance, pTask->m_controllerIndex);
    }
  }
  else
  {
    Com_Printf(25, "DeactivateAchievement - Success\n");
    m_controllerIndex = pTask->m_controllerIndex;
    v5 = 0;
    ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
    if ( OnlineQuests::s_instance.m_totalQuests[ClientFromController] )
    {
      do
      {
        v7 = 1000 * ClientFromController + v5;
        if ( OnlineQuests::s_instance.m_quests[0][v7].id == OnlineQuests::s_instance.m_deactivatingQuest[m_controllerIndex] )
          OnlineQuests::s_instance.m_quests[0][v7].active = 0;
        ++v5;
      }
      while ( v5 < OnlineQuests::s_instance.m_totalQuests[ClientFromController] );
    }
    OnlineQuests::StartQuest(&OnlineQuests::s_instance, pTask->m_controllerIndex, OnlineQuests::s_instance.m_activatingQuest[pTask->m_controllerIndex], OnlineQuests::s_instance.m_activatingQuestType[pTask->m_controllerIndex], QUEST_ACTIVATION_MODE_UI);
  }
}

/*
==============
OnlineQuests::QuestActivationFailed
==============
*/
void OnlineQuests::QuestActivationFailed(OnlineQuests *this, const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "quest_activation_failed", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
OnlineQuests::QuestDeactivationFailed
==============
*/
void OnlineQuests::QuestDeactivationFailed(OnlineQuests *this, const int controllerIndex)
{
  LocalClientNum_t outLocalClientNum; 

  if ( CL_Mgr_IsControllerMappedToClient(controllerIndex, &outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "quest_deactivation_failed", LUI_luaVM) )
  {
    LUI_SetTableBool("immediate", 1, LUI_luaVM);
    LUI_EndEvent(LUI_luaVM);
  }
}

/*
==============
OnlineQuests::Reset
==============
*/
void OnlineQuests::Reset(OnlineQuests *this, const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  this->m_totalQuests[CL_Mgr_GetClientFromController(controllerIndex)] = 0;
  this->m_hasBattlepassData[v2] = 0;
  this->m_needToCheckAndActivate[v2] = 0;
  this->m_activatingQuestMode[v2] = QUEST_ACTIVATION_MODE_READY;
}

/*
==============
OnlineQuests::StartQuest
==============
*/
void OnlineQuests::StartQuest(OnlineQuests *this, const int controllerIndex, const unsigned __int64 questID, QUEST_ACTIVATION_TYPE quest_type, QUEST_ACTIVATION_MODE mode)
{
  __int64 v7; 
  LocalClientNum_t ClientFromController; 
  unsigned int v10; 
  unsigned int v11; 
  bool *p_active; 
  unsigned int UTC; 
  DWServicesAccess *Instance; 
  unsigned int TitleID; 
  const char *v16; 
  DWServicesAccess *v17; 
  DWAchievementEngine *AchievementEngine; 
  TaskCreateRequest *v19; 
  bdRemoteTask *v20; 
  TaskManager *v21; 
  LocalClientNum_t *p_outLocalClientNum; 
  _BYTE *v23; 
  unsigned __int64 v24; 
  _BYTE *v25; 
  unsigned __int64 v26; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskCreateRequest pTaskCreateRequest; 
  bdReference<bdRemoteTask> result; 
  char v30; 
  LocalClientNum_t outLocalClientNum; 
  TaskCreateResult pTaskCreateResult; 
  __int64 v33; 
  bdActivateAchievementRequest request; 

  v33 = -2i64;
  v7 = controllerIndex;
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  this->m_activatingQuest[v7] = questID;
  this->m_activatingQuestType[v7] = quest_type;
  this->m_activatingQuestMode[v7] = mode;
  if ( (quest_type & 0xFFFFFFFA) != 0 || quest_type == QUEST_ACTIVATION_TYPE_MAX || (v10 = 0, (v11 = this->m_totalQuests[ClientFromController]) == 0) )
  {
LABEL_8:
    UTC = LiveStorage_GetUTC();
    Instance = DWServicesAccess::GetInstance();
    TitleID = DWServicesAccess::GetTitleID(Instance);
    v16 = j_va("%u", TitleID);
    bdActivateAchievementRequest::bdActivateAchievementRequest(&request, v16, questID, UTC);
    v17 = DWServicesAccess::GetInstance();
    AchievementEngine = DWServicesAccess::GetAchievementEngine(v17, v7);
    v19 = (TaskCreateRequest *)DWAchievementEngine::activateAchievement(AchievementEngine, &result, &request);
    if ( v19 != (TaskCreateRequest *)&pTaskCreateRequest.m_remoteDemonwareTask )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      v20 = *(bdRemoteTask **)&v19->m_controllerIndex;
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = v20;
      if ( v20 )
        _InterlockedExchangeAdd((volatile signed __int32 *)&v20->m_refCount, 1u);
    }
    if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 && result.m_ptr )
      ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    Com_Printf(25, "Starting Quest %lu\n", questID);
    if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
    {
      pTaskCreateResult.m_localTaskId = 0;
      pTaskCreateResult.m_task = NULL;
      pTaskCreateRequest.m_controllerIndex = v7;
      pTaskCreateRequest.m_onCompletionCallback = OnlineQuests::OnActivateAchievementComplete;
      v21 = TaskManager::GetInstance();
      if ( TaskManager::CreateTask(v21, &pTaskCreateRequest, &pTaskCreateResult) )
      {
        Com_Printf(14, "%s - CreateTask created task id %d controllerIndex %d!\n", "OnlineQuests::StartQuest", pTaskCreateResult.m_localTaskId, v7);
LABEL_28:
        v23 = memchr_0(&request.m_name, 0, 0x65ui64);
        if ( v23 )
          v24 = v23 - (_BYTE *)&request.m_name;
        else
          v24 = 101i64;
        bdHandleAssert(v24 < 0x65, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<100>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected", *(_QWORD *)&pTaskCreateRequest.m_controllerIndex, pTaskCreateRequest.m_appData, pTaskCreateRequest.m_appSecondaryCallback);
        v25 = memchr_0(&request.__vftable + 2, 0, 0x15ui64);
        if ( v25 )
          v26 = v25 - (_BYTE *)(&request.__vftable + 2);
        else
          v26 = 21i64;
        bdHandleAssert(v26 < 0x15, "bdStrnlen(m_buffer, BufferSize) < BufferSize", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdlobby\\bdlobbycommon\\bdstructfixedsizestring.inl", "bdStructFixedSizeString<20>::~bdStructFixedSizeString", 0x1Fu, "Buffer overrun detected");
        bdStructBufferSerializable::~bdStructBufferSerializable((bdStructBufferSerializable *)(&request.__vftable + 2));
        bdReferencable::~bdReferencable((bdReferencable *)request.gapA0);
        goto LABEL_35;
      }
      Com_PrintError(14, "%s - CreateTask failed for controllerIndex %d!\n", "OnlineQuests::StartQuest", (unsigned int)v7);
      p_outLocalClientNum = (LocalClientNum_t *)&v30;
    }
    else
    {
      Com_PrintError(14, "%s failed for controllerIndex %d\n", "OnlineQuests::StartQuest", (unsigned int)v7);
      p_outLocalClientNum = &outLocalClientNum;
    }
    if ( CL_Mgr_IsControllerMappedToClient(v7, p_outLocalClientNum) && LUI_BeginEvent(LOCAL_CLIENT_0, "quest_activation_failed", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
    }
    goto LABEL_28;
  }
  p_active = &this->m_quests[ClientFromController][0].active;
  while ( !*p_active || *((_DWORD *)p_active - 1) != quest_type )
  {
    ++v10;
    p_active += 24;
    if ( v10 >= v11 )
      goto LABEL_8;
  }
  OnlineQuests::EndQuest(this, v7, this->m_quests[ClientFromController][v10].id);
LABEL_35:
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

