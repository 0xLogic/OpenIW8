/*
==============
OnlineOperatorChallenges::Init
==============
*/

bool __fastcall OnlineOperatorChallenges::Init(OnlineOperatorChallenges *this)
{
  return ?Init@OnlineOperatorChallenges@@UEAA_NXZ(this);
}

/*
==============
OnlineOperatorChallenges::Frame
==============
*/

void __fastcall OnlineOperatorChallenges::Frame(OnlineOperatorChallenges *this)
{
  ?Frame@OnlineOperatorChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineOperatorChallenges::ResetProgression
==============
*/

void __fastcall OnlineOperatorChallenges::ResetProgression(OnlineOperatorChallenges *this, const int controllerIndex)
{
  ?ResetProgression@OnlineOperatorChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineOperatorChallenges::ControllerFrame
==============
*/

void __fastcall OnlineOperatorChallenges::ControllerFrame(OnlineOperatorChallenges *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineOperatorChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineOperatorChallenges::OnUnregistered
==============
*/

void __fastcall OnlineOperatorChallenges::OnUnregistered(OnlineOperatorChallenges *this)
{
  ?OnUnregistered@OnlineOperatorChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineOperatorChallenges::OnDisconnect
==============
*/

void __fastcall OnlineOperatorChallenges::OnDisconnect(OnlineOperatorChallenges *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineOperatorChallenges@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineOperatorChallenges::Uninit
==============
*/

void __fastcall OnlineOperatorChallenges::Uninit(OnlineOperatorChallenges *this)
{
  ?Uninit@OnlineOperatorChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineOperatorChallenges::UpdateChallenges
==============
*/

bool __fastcall OnlineOperatorChallenges::UpdateChallenges(OnlineOperatorChallenges *this, const int controllerIndex, bdJSONDeserializer *json)
{
  return ?UpdateChallenges@OnlineOperatorChallenges@@QEAA_NHPEAVbdJSONDeserializer@@@Z(this, controllerIndex, json);
}

/*
==============
OnlineOperatorChallenges::FindAndUpdateUnlock
==============
*/

void __fastcall OnlineOperatorChallenges::FindAndUpdateUnlock(OnlineOperatorChallenges *this, const int controllerIndex, const unsigned __int64 id, const unsigned __int64 progress)
{
  ?FindAndUpdateUnlock@OnlineOperatorChallenges@@QEAAXH_K0@Z(this, controllerIndex, id, progress);
}

/*
==============
OnlineOperatorChallenges::GetOperatorProgressionByRef
==============
*/

OperatorProgression *__fastcall OnlineOperatorChallenges::GetOperatorProgressionByRef(OnlineOperatorChallenges *this, const int controllerIndex, const char *ref)
{
  return ?GetOperatorProgressionByRef@OnlineOperatorChallenges@@QEAAPEAUOperatorProgression@@HPEBD@Z(this, controllerIndex, ref);
}

/*
==============
OnlineOperatorChallenges::OutputCurrentState
==============
*/

void __fastcall OnlineOperatorChallenges::OutputCurrentState(OnlineOperatorChallenges *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineOperatorChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineOperatorChallenges::OnSignedOut
==============
*/

void __fastcall OnlineOperatorChallenges::OnSignedOut(OnlineOperatorChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineOperatorChallenges@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineOperatorChallenges::OnSignedIn
==============
*/

void __fastcall OnlineOperatorChallenges::OnSignedIn(OnlineOperatorChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineOperatorChallenges@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineOperatorChallenges::GetOperatorProgression
==============
*/

OperatorProgression *__fastcall OnlineOperatorChallenges::GetOperatorProgression(OnlineOperatorChallenges *this, const int controllerIndex, const int operator_id)
{
  return ?GetOperatorProgression@OnlineOperatorChallenges@@QEAAPEAUOperatorProgression@@HH@Z(this, controllerIndex, operator_id);
}

/*
==============
OnlineOperatorChallenges::GetInstance
==============
*/

OnlineOperatorChallenges *__fastcall OnlineOperatorChallenges::GetInstance()
{
  return ?GetInstance@OnlineOperatorChallenges@@SAAEAV1@XZ();
}

/*
==============
OnlineOperatorChallenges::AddUnlock
==============
*/

void __fastcall OnlineOperatorChallenges::AddUnlock(OnlineOperatorChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  ?AddUnlock@OnlineOperatorChallenges@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, ae_state);
}

/*
==============
OnlineOperatorChallenges::OnRegistered
==============
*/

void __fastcall OnlineOperatorChallenges::OnRegistered(OnlineOperatorChallenges *this)
{
  ?OnRegistered@OnlineOperatorChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineOperatorChallenges::GetInstancePtr
==============
*/

OnlineOperatorChallenges *__fastcall OnlineOperatorChallenges::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineOperatorChallenges@@SAPEAV1@XZ();
}

/*
==============
OnlineOperatorChallenges::RegisterLuaFunctions
==============
*/

void __fastcall OnlineOperatorChallenges::RegisterLuaFunctions(OnlineOperatorChallenges *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineOperatorChallenges@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineOperatorChallenges::OnRegistered
==============
*/
void OnlineOperatorChallenges::OnRegistered(OnlineOperatorChallenges *this)
{
  ;
}

/*
==============
OnlineOperatorChallenges::OnUnregistered
==============
*/
void OnlineOperatorChallenges::OnUnregistered(OnlineOperatorChallenges *this)
{
  ;
}

/*
==============
OnlineOperatorChallenges::Init
==============
*/
char OnlineOperatorChallenges::Init(OnlineOperatorChallenges *this)
{
  __int64 v1; 
  OperatorProgression (*m_operatorProgression)[60]; 
  int v3; 
  __int64 v4; 
  __int64 RowCount; 
  __int64 v6; 
  const char *ColumnValueForRow; 
  int v8; 
  StringTable *v9; 
  const char *v10; 
  StringTable *tablePtr; 
  StringTable *table; 
  __int64 v15; 

  v1 = 0i64;
  v15 = 8i64;
  m_operatorProgression = this->m_operatorProgression;
  do
  {
    StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 113, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
      __debugbreak();
    StringTable_GetAsset("op_unlock_challenges.csv", (const StringTable **)&table);
    if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 117, ASSERT_TYPE_ASSERT, "(operatorUnlockTable)", (const char *)&queryFormat, "operatorUnlockTable") )
      __debugbreak();
    memset_0(m_operatorProgression, 0, sizeof(OperatorProgression[60]));
    v3 = 0;
    v4 = 0i64;
    RowCount = StringTable_GetRowCount(tablePtr);
    do
    {
      if ( v4 >= RowCount )
        break;
      v6 = v1 * 60 + v4;
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v3, 0);
      v8 = atoi(ColumnValueForRow);
      v9 = tablePtr;
      this->m_operatorProgression[0][v6].id = v8;
      this->m_operatorProgression[v1][v4].name = StringTable_GetColumnValueForRow(v9, v3, 1);
      v10 = StringTable_Lookup(table, 5, ColumnValueForRow, 0);
      ++v3;
      ++v4;
      this->m_operatorProgression[0][v6].challenge_unlock_id = atoi(v10);
    }
    while ( v3 < 60 );
    ++m_operatorProgression;
    ++v1;
    --v15;
  }
  while ( v15 );
  return 1;
}

/*
==============
OnlineOperatorChallenges::Uninit
==============
*/
void OnlineOperatorChallenges::Uninit(OnlineOperatorChallenges *this)
{
  ;
}

/*
==============
OnlineOperatorChallenges::Frame
==============
*/
void OnlineOperatorChallenges::Frame(OnlineOperatorChallenges *this)
{
  ;
}

/*
==============
OnlineOperatorChallenges::ControllerFrame
==============
*/
void OnlineOperatorChallenges::ControllerFrame(OnlineOperatorChallenges *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineOperatorChallenges::OnSignedIn
==============
*/
void OnlineOperatorChallenges::OnSignedIn(OnlineOperatorChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineOperatorChallenges::OnSignedOut
==============
*/
void OnlineOperatorChallenges::OnSignedOut(OnlineOperatorChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineOperatorChallenges::OnDisconnect
==============
*/
void OnlineOperatorChallenges::OnDisconnect(OnlineOperatorChallenges *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineOperatorChallenges::RegisterLuaFunctions
==============
*/
void OnlineOperatorChallenges::RegisterLuaFunctions(OnlineOperatorChallenges *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "OperatorChallenges", operator_challenges_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineOperatorChallenges::OutputCurrentState
==============
*/
void OnlineOperatorChallenges::OutputCurrentState(OnlineOperatorChallenges *this, const int controllerIndex)
{
  Com_Printf(25, "OPERATOR CHALLENGES DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "OPERATOR CHALLENGES DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetOperatorInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetOperatorInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  int *p_id; 
  unsigned int v8; 
  OperatorProgression *v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetOperatorInfo( <controllerIndex>, <operator_id> )\n");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetOperatorInfo( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetOperatorInfo( <operator_id> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  v6 = 0i64;
  p_id = &OnlineOperatorChallenges::s_instance.m_operatorProgression[v3][0].id;
  while ( *p_id != v4 )
  {
    ++v5;
    ++v6;
    p_id += 8;
    if ( v6 >= 60 )
      goto LABEL_10;
  }
  v10 = &OnlineOperatorChallenges::s_instance.m_operatorProgression[v3][v5];
  if ( !v10 )
  {
LABEL_10:
    v2 = 0;
    goto LABEL_11;
  }
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("Challenges", luaVM);
  LUI_SetTableInt("UnlockID", v10->challenge_unlock_id, LUI_luaVM);
  LUI_SetTableInt("UnlockProgress", v10->unlock_progress, LUI_luaVM);
  LUI_EndTable(LUI_luaVM);
LABEL_11:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
OnlineOperatorChallenges::AddUnlock
==============
*/
void OnlineOperatorChallenges::AddUnlock(OnlineOperatorChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  unsigned int Progress; 
  unsigned __int64 Id; 

  Progress = bdAchievementState::getProgress(ae_state);
  Id = bdAchievementState::getId(ae_state);
  OnlineOperatorChallenges::FindAndUpdateUnlock(this, controllerIndex, Id, Progress);
}

/*
==============
OnlineOperatorChallenges::FindAndUpdateUnlock
==============
*/
void OnlineOperatorChallenges::FindAndUpdateUnlock(OnlineOperatorChallenges *this, const int controllerIndex, const unsigned __int64 id, const unsigned __int64 progress)
{
  __int64 v4; 
  const char *v8; 
  const char *v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int *i; 
  OperatorProgression *v14; 
  StringTable *tablePtr; 

  v4 = controllerIndex;
  StringTable_GetAsset("op_unlock_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 141, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
    __debugbreak();
  v8 = j_va("%ld", id);
  v9 = StringTable_Lookup(tablePtr, 0, v8, 5);
  v10 = atoi(v9);
  v11 = 0;
  v12 = 0i64;
  for ( i = &this->m_operatorProgression[v4][0].id; *i != v10; i += 8 )
  {
    ++v11;
    if ( ++v12 >= 60 )
      return;
  }
  v14 = &this->m_operatorProgression[v4][v11];
  if ( v14 )
  {
    v14->challenge_unlock_id = id;
    v14->unlock_progress = progress;
  }
}

/*
==============
OnlineOperatorChallenges::GetInstance
==============
*/
OnlineOperatorChallenges *OnlineOperatorChallenges::GetInstance()
{
  return &OnlineOperatorChallenges::s_instance;
}

/*
==============
OnlineOperatorChallenges::GetInstancePtr
==============
*/
OnlineOperatorChallenges *OnlineOperatorChallenges::GetInstancePtr()
{
  return &OnlineOperatorChallenges::s_instance;
}

/*
==============
OnlineOperatorChallenges::GetOperatorProgression
==============
*/
OperatorProgression *OnlineOperatorChallenges::GetOperatorProgression(OnlineOperatorChallenges *this, const int controllerIndex, const int operator_id)
{
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int *i; 

  v3 = 0;
  v4 = controllerIndex;
  v5 = 0i64;
  for ( i = &this->m_operatorProgression[v4][0].id; *i != operator_id; i += 8 )
  {
    ++v3;
    if ( ++v5 >= 60 )
      return 0i64;
  }
  return &this->m_operatorProgression[0][v3 + v4 * 60];
}

/*
==============
OnlineOperatorChallenges::GetOperatorProgressionByRef
==============
*/
OperatorProgression *OnlineOperatorChallenges::GetOperatorProgressionByRef(OnlineOperatorChallenges *this, const int controllerIndex, const char *ref)
{
  int v3; 
  __int64 v6; 
  OperatorProgression *v7; 
  const char *name; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  unsigned __int64 v18; 

  v3 = 0;
  v18 = 60i64 * controllerIndex;
  v6 = 0i64;
  v7 = this->m_operatorProgression[v18 / 0x3C];
  do
  {
    name = v7->name;
    v9 = 0x7FFFFFFFi64;
    v10 = ref;
    if ( !v7->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !ref && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v11 = name - ref;
    while ( 1 )
    {
      v12 = (unsigned __int8)v10[v11];
      v13 = v9;
      v14 = *(unsigned __int8 *)v10++;
      --v9;
      if ( !v13 )
        return &this->m_operatorProgression[0][v3 + v18];
      if ( v12 != v14 )
      {
        v15 = v12 + 32;
        if ( (unsigned int)(v12 - 65) > 0x19 )
          v15 = v12;
        v12 = v15;
        v16 = v14 + 32;
        if ( (unsigned int)(v14 - 65) > 0x19 )
          v16 = v14;
        if ( v12 != v16 )
          break;
      }
      if ( !v12 )
        return &this->m_operatorProgression[0][v3 + v18];
    }
    ++v3;
    ++v6;
    ++v7;
  }
  while ( v6 < 60 );
  return 0i64;
}

/*
==============
OnlineOperatorChallenges::ResetProgression
==============
*/
void OnlineOperatorChallenges::ResetProgression(OnlineOperatorChallenges *this, const int controllerIndex)
{
  __int64 v2; 
  int v4; 
  __int64 RowCount; 
  __int64 v6; 
  const char *ColumnValueForRow; 
  __int64 v8; 
  int v9; 
  StringTable *v10; 
  const char *v11; 
  StringTable *tablePtr; 
  StringTable *table; 

  v2 = controllerIndex;
  StringTable_GetAsset("loot/operator_ids.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 113, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
    __debugbreak();
  StringTable_GetAsset("op_unlock_challenges.csv", (const StringTable **)&table);
  if ( !table && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 117, ASSERT_TYPE_ASSERT, "(operatorUnlockTable)", (const char *)&queryFormat, "operatorUnlockTable") )
    __debugbreak();
  memset_0(this->m_operatorProgression[v2], 0, sizeof(this->m_operatorProgression[v2]));
  v4 = 0;
  RowCount = StringTable_GetRowCount(tablePtr);
  v6 = 0i64;
  do
  {
    if ( v6 >= RowCount )
      break;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v4, 0);
    v8 = 60 * v2 + v6;
    v9 = atoi(ColumnValueForRow);
    v10 = tablePtr;
    this->m_operatorProgression[0][v8].id = v9;
    this->m_operatorProgression[v2][v6].name = StringTable_GetColumnValueForRow(v10, v4, 1);
    v11 = StringTable_Lookup(table, 5, ColumnValueForRow, 0);
    ++v4;
    ++v6;
    this->m_operatorProgression[0][v8].challenge_unlock_id = atoi(v11);
  }
  while ( v4 < 60 );
}

/*
==============
OnlineOperatorChallenges::UpdateChallenges
==============
*/
char OnlineOperatorChallenges::UpdateChallenges(OnlineOperatorChallenges *this, const int controllerIndex, bdJSONDeserializer *json)
{
  __int64 v4; 
  unsigned __int64 v6; 
  int v7; 
  __int64 v8; 
  OperatorProgression *v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  const char *v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int *i; 
  OperatorProgression *v18; 
  unsigned __int64 v19; 
  unsigned __int64 value; 
  StringTable *tablePtr; 
  unsigned __int64 v22; 

  v4 = controllerIndex;
  if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &v22) )
  {
    v6 = value;
    v7 = 0;
    v8 = 0i64;
    v9 = this->m_operatorProgression[v4];
    do
    {
      if ( value == v9->challenge_unlock_id )
      {
        v19 = v22;
        v9->unlock_progress = v22;
        Com_Printf(25, "Updated Operator Unlock Challenge %lu with progress %lu\n", v6, v19);
        return 1;
      }
      ++v8;
      ++v9;
    }
    while ( v8 < 60 );
    Com_Printf(25, "Trying to find and update Operator Unlock Challenge %lu with progress %lu\n", value, v22);
    v10 = v22;
    v11 = value;
    StringTable_GetAsset("op_unlock_challenges.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_operator_challenges.cpp", 141, ASSERT_TYPE_ASSERT, "(operatorTable)", (const char *)&queryFormat, "operatorTable") )
      __debugbreak();
    v12 = j_va("%ld", v11);
    v13 = StringTable_Lookup(tablePtr, 0, v12, 5);
    v14 = atoi(v13);
    v15 = 0i64;
    for ( i = &this->m_operatorProgression[v4][0].id; *i != v14; i += 8 )
    {
      ++v7;
      if ( ++v15 >= 60 )
        return 0;
    }
    v18 = &this->m_operatorProgression[v4][v7];
    if ( v18 )
    {
      v18->challenge_unlock_id = v11;
      v18->unlock_progress = v10;
    }
  }
  return 0;
}

