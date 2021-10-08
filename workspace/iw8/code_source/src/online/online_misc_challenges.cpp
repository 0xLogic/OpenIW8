/*
==============
OnlineMiscChallenges::AddProgression
==============
*/

void __fastcall OnlineMiscChallenges::AddProgression(OnlineMiscChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  ?AddProgression@OnlineMiscChallenges@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, ae_state);
}

/*
==============
OnlineMiscChallenges::OutputCurrentState
==============
*/

void __fastcall OnlineMiscChallenges::OutputCurrentState(OnlineMiscChallenges *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineMiscChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMiscChallenges::ResetProgression
==============
*/

void __fastcall OnlineMiscChallenges::ResetProgression(OnlineMiscChallenges *this, const int controllerIndex)
{
  ?ResetProgression@OnlineMiscChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMiscChallenges::GetMiscChallengeProgressionByRef
==============
*/

MiscChallengeProgression *__fastcall OnlineMiscChallenges::GetMiscChallengeProgressionByRef(OnlineMiscChallenges *this, const int controllerIndex, const char *ref)
{
  return ?GetMiscChallengeProgressionByRef@OnlineMiscChallenges@@QEAAPEAUMiscChallengeProgression@@HPEBD@Z(this, controllerIndex, ref);
}

/*
==============
OnlineMiscChallenges::RegisterLuaFunctions
==============
*/

void __fastcall OnlineMiscChallenges::RegisterLuaFunctions(OnlineMiscChallenges *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineMiscChallenges@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineMiscChallenges::OnSignedIn
==============
*/

void __fastcall OnlineMiscChallenges::OnSignedIn(OnlineMiscChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineMiscChallenges@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineMiscChallenges::OnRegistered
==============
*/

void __fastcall OnlineMiscChallenges::OnRegistered(OnlineMiscChallenges *this)
{
  ?OnRegistered@OnlineMiscChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineMiscChallenges::Uninit
==============
*/

void __fastcall OnlineMiscChallenges::Uninit(OnlineMiscChallenges *this)
{
  ?Uninit@OnlineMiscChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineMiscChallenges::GetMiscChallengeProgression
==============
*/

MiscChallengeProgression *__fastcall OnlineMiscChallenges::GetMiscChallengeProgression(OnlineMiscChallenges *this, const int controllerIndex, const int challenge_id)
{
  return ?GetMiscChallengeProgression@OnlineMiscChallenges@@QEAAPEAUMiscChallengeProgression@@HH@Z(this, controllerIndex, challenge_id);
}

/*
==============
OnlineMiscChallenges::GetInstance
==============
*/

OnlineMiscChallenges *__fastcall OnlineMiscChallenges::GetInstance()
{
  return ?GetInstance@OnlineMiscChallenges@@SAAEAV1@XZ();
}

/*
==============
OnlineMiscChallenges::ControllerFrame
==============
*/

void __fastcall OnlineMiscChallenges::ControllerFrame(OnlineMiscChallenges *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineMiscChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineMiscChallenges::Init
==============
*/

bool __fastcall OnlineMiscChallenges::Init(OnlineMiscChallenges *this)
{
  return ?Init@OnlineMiscChallenges@@UEAA_NXZ(this);
}

/*
==============
OnlineMiscChallenges::GetInstancePtr
==============
*/

OnlineMiscChallenges *__fastcall OnlineMiscChallenges::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineMiscChallenges@@SAPEAV1@XZ();
}

/*
==============
OnlineMiscChallenges::OnUnregistered
==============
*/

void __fastcall OnlineMiscChallenges::OnUnregistered(OnlineMiscChallenges *this)
{
  ?OnUnregistered@OnlineMiscChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineMiscChallenges::UpdateChallenges
==============
*/

bool __fastcall OnlineMiscChallenges::UpdateChallenges(OnlineMiscChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateChallenges@OnlineMiscChallenges@@QEAA_NHHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, kind, json, complete);
}

/*
==============
OnlineMiscChallenges::OnDisconnect
==============
*/

void __fastcall OnlineMiscChallenges::OnDisconnect(OnlineMiscChallenges *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineMiscChallenges@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineMiscChallenges::Frame
==============
*/

void __fastcall OnlineMiscChallenges::Frame(OnlineMiscChallenges *this)
{
  ?Frame@OnlineMiscChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineMiscChallenges::OnSignedOut
==============
*/

void __fastcall OnlineMiscChallenges::OnSignedOut(OnlineMiscChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineMiscChallenges@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineMiscChallenges::OnRegistered
==============
*/
void OnlineMiscChallenges::OnRegistered(OnlineMiscChallenges *this)
{
  ;
}

/*
==============
OnlineMiscChallenges::OnUnregistered
==============
*/
void OnlineMiscChallenges::OnUnregistered(OnlineMiscChallenges *this)
{
  ;
}

/*
==============
OnlineMiscChallenges::Init
==============
*/
char OnlineMiscChallenges::Init(OnlineMiscChallenges *this)
{
  __int64 v1; 
  MiscChallengeProgression (*m_miscChallengeProgression)[32]; 
  __int64 v4; 
  int v5; 
  __int64 RowCount; 
  __int64 v7; 
  const char *ColumnValueForRow; 
  int v9; 
  StringTable *v10; 
  const char *v11; 
  __int64 v12; 
  StringTable *tablePtr; 

  v1 = 0i64;
  m_miscChallengeProgression = this->m_miscChallengeProgression;
  v4 = 8i64;
  do
  {
    StringTable_GetAsset("misc_challenges.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_misc_challenges.cpp", 115, ASSERT_TYPE_ASSERT, "(miscChallengesTable)", (const char *)&queryFormat, "miscChallengesTable") )
      __debugbreak();
    memset_0(m_miscChallengeProgression, 0, sizeof(MiscChallengeProgression[32]));
    v5 = 0;
    RowCount = StringTable_GetRowCount(tablePtr);
    v7 = 0i64;
    do
    {
      if ( v7 >= RowCount )
        break;
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
      v9 = atoi(ColumnValueForRow);
      v10 = tablePtr;
      this->m_miscChallengeProgression[v1][v7].id = v9;
      v11 = StringTable_GetColumnValueForRow(v10, v5, 1);
      v12 = v1 * 32 + v7;
      ++v5;
      ++v7;
      this->m_miscChallengeProgression[0][v12].name = v11;
    }
    while ( v5 < 32 );
    ++m_miscChallengeProgression;
    ++v1;
    --v4;
  }
  while ( v4 );
  return 1;
}

/*
==============
OnlineMiscChallenges::Uninit
==============
*/
void OnlineMiscChallenges::Uninit(OnlineMiscChallenges *this)
{
  ;
}

/*
==============
OnlineMiscChallenges::Frame
==============
*/
void OnlineMiscChallenges::Frame(OnlineMiscChallenges *this)
{
  ;
}

/*
==============
OnlineMiscChallenges::ControllerFrame
==============
*/
void OnlineMiscChallenges::ControllerFrame(OnlineMiscChallenges *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineMiscChallenges::OnSignedIn
==============
*/
void OnlineMiscChallenges::OnSignedIn(OnlineMiscChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineMiscChallenges::OnSignedOut
==============
*/
void OnlineMiscChallenges::OnSignedOut(OnlineMiscChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineMiscChallenges::OnDisconnect
==============
*/
void OnlineMiscChallenges::OnDisconnect(OnlineMiscChallenges *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineMiscChallenges::RegisterLuaFunctions
==============
*/
void OnlineMiscChallenges::RegisterLuaFunctions(OnlineMiscChallenges *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "MiscChallenges", misc_challenges_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineMiscChallenges::OutputCurrentState
==============
*/
void OnlineMiscChallenges::OutputCurrentState(OnlineMiscChallenges *this, const int controllerIndex)
{
  Com_Printf(25, "MISC CHALLENGES DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "MISC CHALLENGES DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetMiscChallengeInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetMiscChallengeInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  int *p_id; 
  unsigned int v8; 
  __int64 v10; 
  char *v11; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetMiscChallengeInfo( <controllerIndex>, <challenge_id> )\n");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetMiscChallengeInfo( <controllerIndex>, <challenge_id> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetMiscChallengeInfo( <controllerIndex>, <challenge_id> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  v6 = 0i64;
  p_id = &OnlineMiscChallenges::s_instance.m_miscChallengeProgression[v3][0].id;
  while ( *p_id != v4 )
  {
    ++v5;
    ++v6;
    p_id += 6;
    if ( v6 >= 32 )
      goto LABEL_10;
  }
  v10 = 32 * v3 + v5;
  v11 = (char *)OnlineMiscChallenges::s_instance.m_miscChallengeProgression + 24 * v10;
  if ( (OnlineMiscChallenges *)((char *)&OnlineMiscChallenges::s_instance + 24 * v10) == (OnlineMiscChallenges *)-64i64 )
  {
LABEL_10:
    v2 = 0;
    goto LABEL_11;
  }
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("Challenges", luaVM);
  LUI_SetTableInt("ID", *((int *)v11 + 2), LUI_luaVM);
  LUI_SetTableString("Ref", *(const char **)v11, LUI_luaVM);
  LUI_SetTableInt("Progress", *((_QWORD *)v11 + 2), LUI_luaVM);
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
LUI_CoD_LuaCall_GetMiscChallengeInfoByRef
==============
*/
__int64 LUI_CoD_LuaCall_GetMiscChallengeInfoByRef(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetMiscChallengeInfoByRef_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
OnlineMiscChallenges::AddProgression
==============
*/
void OnlineMiscChallenges::AddProgression(OnlineMiscChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  __int64 v4; 
  unsigned __int64 Id; 
  int v7; 
  int v8; 
  __int64 v9; 
  int *p_id; 
  unsigned __int64 v11; 
  MiscChallengeProgression *v12; 
  unsigned int Progress; 
  unsigned __int64 v14; 

  v4 = controllerIndex;
  if ( bdAchievementState::getKind(ae_state) == 34 )
  {
    Id = bdAchievementState::getId(ae_state);
    v7 = truncate_cast<int,unsigned __int64>(Id);
    v8 = 0;
    v9 = 0i64;
    p_id = &this->m_miscChallengeProgression[v4][0].id;
    while ( *p_id != v7 )
    {
      ++v8;
      ++v9;
      p_id += 6;
      if ( v9 >= 32 )
        goto LABEL_5;
    }
    v12 = &this->m_miscChallengeProgression[v4][v8];
    if ( !v12 )
    {
LABEL_5:
      v11 = bdAchievementState::getId(ae_state);
      Com_Printf(25, "Progression: Could not find Misc Challenge %lu\n", v11);
      return;
    }
    v12->progress = bdAchievementState::getProgress(ae_state);
    Progress = bdAchievementState::getProgress(ae_state);
    v14 = bdAchievementState::getId(ae_state);
    Com_Printf(25, "Progression: Updated Misc Challenge %lu with progress %d\n", v14, Progress);
  }
}

/*
==============
OnlineMiscChallenges::GetInstance
==============
*/
OnlineMiscChallenges *OnlineMiscChallenges::GetInstance()
{
  return &OnlineMiscChallenges::s_instance;
}

/*
==============
OnlineMiscChallenges::GetInstancePtr
==============
*/
OnlineMiscChallenges *OnlineMiscChallenges::GetInstancePtr()
{
  return &OnlineMiscChallenges::s_instance;
}

/*
==============
OnlineMiscChallenges::GetMiscChallengeProgression
==============
*/
MiscChallengeProgression *OnlineMiscChallenges::GetMiscChallengeProgression(OnlineMiscChallenges *this, const int controllerIndex, const int challenge_id)
{
  int v3; 
  __int64 v4; 
  int *i; 

  v3 = 0;
  v4 = 0i64;
  for ( i = &this->m_miscChallengeProgression[controllerIndex][0].id; *i != challenge_id; i += 6 )
  {
    ++v3;
    if ( ++v4 >= 32 )
      return 0i64;
  }
  return &this->m_miscChallengeProgression[controllerIndex][v3];
}

/*
==============
OnlineMiscChallenges::GetMiscChallengeProgressionByRef
==============
*/
MiscChallengeProgression *OnlineMiscChallenges::GetMiscChallengeProgressionByRef(OnlineMiscChallenges *this, const int controllerIndex, const char *ref)
{
  int v3; 
  __int64 v4; 
  __int64 v6; 
  MiscChallengeProgression *v7; 
  const char *name; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 

  v3 = 0;
  v4 = controllerIndex;
  v6 = 0i64;
  v7 = this->m_miscChallengeProgression[controllerIndex];
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
        return &this->m_miscChallengeProgression[v4][v3];
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
        return &this->m_miscChallengeProgression[v4][v3];
    }
    ++v3;
    ++v6;
    ++v7;
  }
  while ( v6 < 32 );
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetMiscChallengeInfoByRef_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetMiscChallengeInfoByRef_impl(lua_State *const luaVM)
{
  __int64 v2; 
  const char *v3; 
  int v4; 
  __int64 v5; 
  MiscChallengeProgression *v6; 
  const char *name; 
  __int64 v8; 
  const char *v9; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  unsigned __int64 v17; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: MiscChallenges.GetMiscChallengeInfoByRef( <controllerIndex>, <challenge_ref> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MiscChallenges.GetMiscChallengeInfoByRef( <controllerIndex>, <challenge_ref> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MiscChallenges.GetMiscChallengeInfoByRef( <controllerIndex>, <challenge_ref> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = 0;
  v5 = 0i64;
  v17 = 32 * v2;
  v6 = OnlineMiscChallenges::s_instance.m_miscChallengeProgression[v2];
  while ( 2 )
  {
    name = v6->name;
    v8 = 0x7FFFFFFFi64;
    v9 = v3;
    if ( !v6->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v10 = name - v3;
    while ( 1 )
    {
      v11 = (unsigned __int8)v9[v10];
      v12 = v8;
      v13 = *(unsigned __int8 *)v9++;
      --v8;
      if ( !v12 )
      {
LABEL_23:
        if ( (OnlineMiscChallenges *)((char *)&OnlineMiscChallenges::s_instance + 24 * v17 + 24 * v4) != (OnlineMiscChallenges *)-64i64 )
        {
          j_lua_createtable(luaVM, 0, 0);
          LUI_BeginTable("Challenges", luaVM);
          LUI_SetTableInt("ID", OnlineMiscChallenges::s_instance.m_miscChallengeProgression[v17 / 0x20][v4].id, LUI_luaVM);
          LUI_SetTableString("Ref", OnlineMiscChallenges::s_instance.m_miscChallengeProgression[v17 / 0x20][v4].name, LUI_luaVM);
          LUI_SetTableInt("Progress", OnlineMiscChallenges::s_instance.m_miscChallengeProgression[v17 / 0x20][v4].progress, LUI_luaVM);
          LUI_EndTable(LUI_luaVM);
          return 1i64;
        }
        return 0i64;
      }
      if ( v11 != v13 )
      {
        v14 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v14 = v11;
        v11 = v14;
        v15 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v15 = v13;
        if ( v11 != v15 )
          break;
      }
      if ( !v11 )
        goto LABEL_23;
    }
    ++v4;
    ++v5;
    ++v6;
    if ( v5 < 32 )
      continue;
    return 0i64;
  }
}

/*
==============
OnlineMiscChallenges::ResetProgression
==============
*/
void OnlineMiscChallenges::ResetProgression(OnlineMiscChallenges *this, const int controllerIndex)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 
  __int64 RowCount; 
  __int64 v7; 
  const char *ColumnValueForRow; 
  int v9; 
  StringTable *v10; 
  const char *v11; 
  __int64 v12; 
  StringTable *tablePtr; 

  v2 = controllerIndex;
  StringTable_GetAsset("misc_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_misc_challenges.cpp", 115, ASSERT_TYPE_ASSERT, "(miscChallengesTable)", (const char *)&queryFormat, "miscChallengesTable") )
    __debugbreak();
  v4 = v2;
  memset_0(this->m_miscChallengeProgression[v2], 0, sizeof(this->m_miscChallengeProgression[v2]));
  v5 = 0;
  RowCount = StringTable_GetRowCount(tablePtr);
  v7 = 0i64;
  do
  {
    if ( v7 >= RowCount )
      break;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
    v9 = atoi(ColumnValueForRow);
    v10 = tablePtr;
    this->m_miscChallengeProgression[v4][v7].id = v9;
    v11 = StringTable_GetColumnValueForRow(v10, v5, 1);
    v12 = 32 * v4 + v7;
    ++v5;
    ++v7;
    this->m_miscChallengeProgression[0][v12].name = v11;
  }
  while ( v5 < 32 );
}

/*
==============
OnlineMiscChallenges::UpdateChallenges
==============
*/
char OnlineMiscChallenges::UpdateChallenges(OnlineMiscChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  char v5; 
  int v10; 
  MiscChallengeProgression *MiscChallengeProgression; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 UserId; 
  bool v15; 
  unsigned __int64 value; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  DLogContext context; 
  char buffer[4096]; 

  v5 = 0;
  if ( kind != 34 )
    return 0;
  if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &v17) )
  {
    v10 = truncate_cast<int,unsigned __int64>(value);
    MiscChallengeProgression = OnlineMiscChallenges::GetMiscChallengeProgression(this, controllerIndex, v10);
    if ( MiscChallengeProgression )
    {
      MiscChallengeProgression->progress = v17;
      v5 = 1;
      Com_Printf(25, "Updated Misc Challenge %lu with progress %lu\n", value, v17);
      if ( complete && LUI_BeginEvent(LOCAL_CLIENT_0, "completed_misc_challenge", LUI_luaVM) )
      {
        LUI_SetTableBool("immediate", 1, LUI_luaVM);
        LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
        LUI_EndEvent(LUI_luaVM);
        bdJSONDeserializer::getUInt64(json, "completionTimestamp", &v18);
        v12 = v18;
        v13 = value;
        UserId = DLog_GetUserId(controllerIndex);
        if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
        {
          v15 = DLog_BeginEvent(&context, "dlog_event_misc_challenge_complete");
          context.autoEndEvent = 1;
          if ( v15 && DLog_UInt64(&context, "challenge_id", v13) && DLog_UInt64(&context, "timestamp", v12) )
            DLog_RecordContext(&context);
        }
      }
    }
  }
  return v5;
}

