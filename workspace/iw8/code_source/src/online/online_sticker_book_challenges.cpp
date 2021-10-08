/*
==============
OnlineStickerBookChallenges::FindAndUpdateUnlock
==============
*/

void __fastcall OnlineStickerBookChallenges::FindAndUpdateUnlock(OnlineStickerBookChallenges *this, const int controllerIndex, const unsigned __int64 id, const unsigned __int64 progress)
{
  ?FindAndUpdateUnlock@OnlineStickerBookChallenges@@QEAAXH_K0@Z(this, controllerIndex, id, progress);
}

/*
==============
OnlineStickerBookChallenges::RegisterLuaFunctions
==============
*/

void __fastcall OnlineStickerBookChallenges::RegisterLuaFunctions(OnlineStickerBookChallenges *this, lua_State *luaVM)
{
  ?RegisterLuaFunctions@OnlineStickerBookChallenges@@UEAAXPEAUlua_State@@@Z(this, luaVM);
}

/*
==============
OnlineStickerBookChallenges::UpdateChallenges
==============
*/

bool __fastcall OnlineStickerBookChallenges::UpdateChallenges(OnlineStickerBookChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  return ?UpdateChallenges@OnlineStickerBookChallenges@@QEAA_NHHPEAVbdJSONDeserializer@@_N@Z(this, controllerIndex, kind, json, complete);
}

/*
==============
OnlineStickerBookChallenges::OnRegistered
==============
*/

void __fastcall OnlineStickerBookChallenges::OnRegistered(OnlineStickerBookChallenges *this)
{
  ?OnRegistered@OnlineStickerBookChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineStickerBookChallenges::ResetProgression
==============
*/

void __fastcall OnlineStickerBookChallenges::ResetProgression(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  ?ResetProgression@OnlineStickerBookChallenges@@QEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStickerBookChallenges::OnSignedOut
==============
*/

void __fastcall OnlineStickerBookChallenges::OnSignedOut(OnlineStickerBookChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ?OnSignedOut@OnlineStickerBookChallenges@@UEAAXHW4GenericSignOutState@@@Z(this, controllerIndex, signOutState);
}

/*
==============
OnlineStickerBookChallenges::GetInstance
==============
*/

OnlineStickerBookChallenges *__fastcall OnlineStickerBookChallenges::GetInstance()
{
  return ?GetInstance@OnlineStickerBookChallenges@@SAAEAV1@XZ();
}

/*
==============
OnlineStickerBookChallenges::OnDisconnect
==============
*/

void __fastcall OnlineStickerBookChallenges::OnDisconnect(OnlineStickerBookChallenges *this, ONLINE_DISCONNECT reason)
{
  ?OnDisconnect@OnlineStickerBookChallenges@@UEAAXW4ONLINE_DISCONNECT@@@Z(this, reason);
}

/*
==============
OnlineStickerBookChallenges::ControllerFrame
==============
*/

void __fastcall OnlineStickerBookChallenges::ControllerFrame(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  ?ControllerFrame@OnlineStickerBookChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStickerBookChallenges::OutputCurrentState
==============
*/

void __fastcall OnlineStickerBookChallenges::OutputCurrentState(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  ?OutputCurrentState@OnlineStickerBookChallenges@@UEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineStickerBookChallenges::OnSignedIn
==============
*/

void __fastcall OnlineStickerBookChallenges::OnSignedIn(OnlineStickerBookChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ?OnSignedIn@OnlineStickerBookChallenges@@UEAAXHW4GenericSignInState@@@Z(this, controllerIndex, signinState);
}

/*
==============
OnlineStickerBookChallenges::Frame
==============
*/

void __fastcall OnlineStickerBookChallenges::Frame(OnlineStickerBookChallenges *this)
{
  ?Frame@OnlineStickerBookChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineStickerBookChallenges::GetInstancePtr
==============
*/

OnlineStickerBookChallenges *__fastcall OnlineStickerBookChallenges::GetInstancePtr()
{
  return ?GetInstancePtr@OnlineStickerBookChallenges@@SAPEAV1@XZ();
}

/*
==============
OnlineStickerBookChallenges::OnUnregistered
==============
*/

void __fastcall OnlineStickerBookChallenges::OnUnregistered(OnlineStickerBookChallenges *this)
{
  ?OnUnregistered@OnlineStickerBookChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineStickerBookChallenges::AddProgression
==============
*/

void __fastcall OnlineStickerBookChallenges::AddProgression(OnlineStickerBookChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  ?AddProgression@OnlineStickerBookChallenges@@QEAAXHPEAVbdAchievementState@@@Z(this, controllerIndex, ae_state);
}

/*
==============
OnlineStickerBookChallenges::Uninit
==============
*/

void __fastcall OnlineStickerBookChallenges::Uninit(OnlineStickerBookChallenges *this)
{
  ?Uninit@OnlineStickerBookChallenges@@UEAAXXZ(this);
}

/*
==============
OnlineStickerBookChallenges::Init
==============
*/

bool __fastcall OnlineStickerBookChallenges::Init(OnlineStickerBookChallenges *this)
{
  return ?Init@OnlineStickerBookChallenges@@UEAA_NXZ(this);
}

/*
==============
OnlineStickerBookChallenges::GetStickerBookChallengeProgressionByRef
==============
*/

StickerBookChallengeProgression *__fastcall OnlineStickerBookChallenges::GetStickerBookChallengeProgressionByRef(OnlineStickerBookChallenges *this, const int controllerIndex, const char *ref)
{
  return ?GetStickerBookChallengeProgressionByRef@OnlineStickerBookChallenges@@QEAAPEAUStickerBookChallengeProgression@@HPEBD@Z(this, controllerIndex, ref);
}

/*
==============
OnlineStickerBookChallenges::GetStickerBookChallengeProgression
==============
*/

StickerBookChallengeProgression *__fastcall OnlineStickerBookChallenges::GetStickerBookChallengeProgression(OnlineStickerBookChallenges *this, const int controllerIndex, const int challenge_id)
{
  return ?GetStickerBookChallengeProgression@OnlineStickerBookChallenges@@QEAAPEAUStickerBookChallengeProgression@@HH@Z(this, controllerIndex, challenge_id);
}

/*
==============
OnlineStickerBookChallenges::OnRegistered
==============
*/
void OnlineStickerBookChallenges::OnRegistered(OnlineStickerBookChallenges *this)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::OnUnregistered
==============
*/
void OnlineStickerBookChallenges::OnUnregistered(OnlineStickerBookChallenges *this)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::Init
==============
*/
char OnlineStickerBookChallenges::Init(OnlineStickerBookChallenges *this)
{
  __int64 v1; 
  StickerBookChallengeProgression (*m_stickerBookChallengeProgression)[32]; 
  __int64 v4; 
  int v5; 
  __int64 RowCount; 
  __int64 v7; 
  const char *ColumnValueForRow; 
  OnlineStickerBookChallenges_vtbl *v9; 
  __int64 v10; 
  StringTable *tablePtr; 

  v1 = 0i64;
  m_stickerBookChallengeProgression = this->m_stickerBookChallengeProgression;
  v4 = 8i64;
  do
  {
    StringTable_GetAsset("sticker_book_challenges.csv", (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_sticker_book_challenges.cpp", 116, ASSERT_TYPE_ASSERT, "(stickerBookChallengesTable)", (const char *)&queryFormat, "stickerBookChallengesTable") )
      __debugbreak();
    memset_0(m_stickerBookChallengeProgression, 0, sizeof(StickerBookChallengeProgression[32]));
    v5 = 0;
    RowCount = StringTable_GetRowCount(tablePtr);
    v7 = 0i64;
    do
    {
      if ( v7 >= RowCount )
        break;
      ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, 0);
      this->m_stickerBookChallengeProgression[v1][v7].id = atoi(ColumnValueForRow);
      v9 = (OnlineStickerBookChallenges_vtbl *)StringTable_GetColumnValueForRow(tablePtr, v5++, 1);
      v10 = 32 * (v1 * 32 + v7++ + 2);
      *(OnlineStickerBookChallenges_vtbl **)((char *)&this->__vftable + v10) = v9;
    }
    while ( v5 < 32 );
    ++m_stickerBookChallengeProgression;
    ++v1;
    --v4;
  }
  while ( v4 );
  return 1;
}

/*
==============
OnlineStickerBookChallenges::Uninit
==============
*/
void OnlineStickerBookChallenges::Uninit(OnlineStickerBookChallenges *this)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::Frame
==============
*/
void OnlineStickerBookChallenges::Frame(OnlineStickerBookChallenges *this)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::ControllerFrame
==============
*/
void OnlineStickerBookChallenges::ControllerFrame(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::OnSignedIn
==============
*/
void OnlineStickerBookChallenges::OnSignedIn(OnlineStickerBookChallenges *this, const int controllerIndex, GenericSignInState signinState)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::OnSignedOut
==============
*/
void OnlineStickerBookChallenges::OnSignedOut(OnlineStickerBookChallenges *this, const int controllerIndex, GenericSignOutState signOutState)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::OnDisconnect
==============
*/
void OnlineStickerBookChallenges::OnDisconnect(OnlineStickerBookChallenges *this, ONLINE_DISCONNECT reason)
{
  ;
}

/*
==============
OnlineStickerBookChallenges::RegisterLuaFunctions
==============
*/
void OnlineStickerBookChallenges::RegisterLuaFunctions(OnlineStickerBookChallenges *this, lua_State *luaVM)
{
  j_luaL_register(luaVM, "StickerBookChallenges", sticker_book_challenges_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OnlineStickerBookChallenges::OutputCurrentState
==============
*/
void OnlineStickerBookChallenges::OutputCurrentState(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  Com_Printf(25, "STICKER BOOK CHALLENGES DUMP START controllerIndex %d\n", (unsigned int)controllerIndex);
  Com_Printf(25, "STICKER BOOK CHALLENGES DUMP END\n");
}

/*
==============
LUI_CoD_LuaCall_GetStickerBookChallengeInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetStickerBookChallengeInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  int *p_id; 
  unsigned int v8; 
  StickerBookChallengeProgression *v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfo( <controllerIndex>, <operator_id> )\n");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfo( <controllerIndex> )\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfo( <challenge_id> )\n");
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  v5 = 0;
  v6 = 0i64;
  p_id = &OnlineStickerBookChallenges::s_instance.m_stickerBookChallengeProgression[v3][0].id;
  while ( *p_id != v4 )
  {
    ++v5;
    ++v6;
    p_id += 8;
    if ( v6 >= 32 )
      goto LABEL_10;
  }
  v10 = &OnlineStickerBookChallenges::s_instance.m_stickerBookChallengeProgression[v3][v5];
  if ( !v10 )
  {
LABEL_10:
    v2 = 0;
    goto LABEL_11;
  }
  j_lua_createtable(luaVM, 0, 0);
  LUI_BeginTable("Challenges", luaVM);
  LUI_SetTableInt("ID", v10->id, LUI_luaVM);
  LUI_SetTableString("Ref", v10->name, LUI_luaVM);
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
LUI_CoD_LuaCall_GetStickerBookChallengeInfoByRef
==============
*/
__int64 LUI_CoD_LuaCall_GetStickerBookChallengeInfoByRef(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetStickerBookChallengeInfoByRef_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
OnlineStickerBookChallenges::AddProgression
==============
*/
void OnlineStickerBookChallenges::AddProgression(OnlineStickerBookChallenges *this, const int controllerIndex, bdAchievementState *ae_state)
{
  unsigned int Progress; 
  unsigned __int64 Id; 

  Progress = bdAchievementState::getProgress(ae_state);
  Id = bdAchievementState::getId(ae_state);
  OnlineStickerBookChallenges::FindAndUpdateUnlock(this, controllerIndex, Id, Progress);
}

/*
==============
OnlineStickerBookChallenges::FindAndUpdateUnlock
==============
*/
void OnlineStickerBookChallenges::FindAndUpdateUnlock(OnlineStickerBookChallenges *this, const int controllerIndex, const unsigned __int64 id, const unsigned __int64 progress)
{
  __int64 v4; 
  int v8; 
  int v9; 
  __int64 v10; 
  int *i; 
  StickerBookChallengeProgression *v12; 
  bool v13; 
  StringTable *tablePtr; 

  v4 = controllerIndex;
  StringTable_GetAsset("sticker_book_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_sticker_book_challenges.cpp", 139, ASSERT_TYPE_ASSERT, "(stickerBookChallengeTable)", (const char *)&queryFormat, "stickerBookChallengeTable") )
    __debugbreak();
  v8 = truncate_cast<int,unsigned __int64>(id);
  v9 = 0;
  v10 = 0i64;
  for ( i = &this->m_stickerBookChallengeProgression[v4][0].id; *i != v8; i += 8 )
  {
    ++v9;
    if ( ++v10 >= 32 )
      return;
  }
  v12 = &this->m_stickerBookChallengeProgression[v4][v9];
  if ( v12 )
  {
    v13 = v12->unlock_progress == progress;
    v12->unlock_progress = progress;
    v12->update_aar_multitarget_challenge_xp = !v13;
  }
}

/*
==============
OnlineStickerBookChallenges::GetInstance
==============
*/
OnlineStickerBookChallenges *OnlineStickerBookChallenges::GetInstance()
{
  return &OnlineStickerBookChallenges::s_instance;
}

/*
==============
OnlineStickerBookChallenges::GetInstancePtr
==============
*/
OnlineStickerBookChallenges *OnlineStickerBookChallenges::GetInstancePtr()
{
  return &OnlineStickerBookChallenges::s_instance;
}

/*
==============
OnlineStickerBookChallenges::GetStickerBookChallengeProgression
==============
*/
StickerBookChallengeProgression *OnlineStickerBookChallenges::GetStickerBookChallengeProgression(OnlineStickerBookChallenges *this, const int controllerIndex, const int challenge_id)
{
  int v3; 
  __int64 v4; 
  int *i; 

  v3 = 0;
  v4 = 0i64;
  for ( i = &this->m_stickerBookChallengeProgression[(__int64)controllerIndex][0].id; *i != challenge_id; i += 8 )
  {
    ++v3;
    if ( ++v4 >= 32 )
      return 0i64;
  }
  return &this->m_stickerBookChallengeProgression[controllerIndex][v3];
}

/*
==============
OnlineStickerBookChallenges::GetStickerBookChallengeProgressionByRef
==============
*/
StickerBookChallengeProgression *OnlineStickerBookChallenges::GetStickerBookChallengeProgressionByRef(OnlineStickerBookChallenges *this, const int controllerIndex, const char *ref)
{
  unsigned __int64 v3; 
  int v4; 
  __int64 v6; 
  StickerBookChallengeProgression *v7; 
  const char *name; 
  __int64 v9; 
  const char *v10; 
  signed __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 

  v3 = 32i64 * controllerIndex;
  v4 = 0;
  v6 = 0i64;
  v7 = this->m_stickerBookChallengeProgression[v3 / 0x20];
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
        return &this->m_stickerBookChallengeProgression[0][v4 + v3];
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
        return &this->m_stickerBookChallengeProgression[0][v4 + v3];
    }
    ++v4;
    ++v6;
    ++v7;
  }
  while ( v6 < 32 );
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetStickerBookChallengeInfoByRef_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetStickerBookChallengeInfoByRef_impl(lua_State *const luaVM)
{
  __int64 v2; 
  const char *v3; 
  int v4; 
  __int64 v5; 
  StickerBookChallengeProgression *v6; 
  const char *name; 
  __int64 v8; 
  const char *v9; 
  signed __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  int v15; 
  StickerBookChallengeProgression *v16; 
  __int64 v18; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfoByRef( <controllerIndex>, <operator_id> )\n");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfoByRef( <controllerIndex> )\n");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OperatorChallenges.GetStickerBookChallengeInfoByRef( <challenge_ref> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = 0;
  v5 = 0i64;
  v18 = v2;
  v6 = OnlineStickerBookChallenges::s_instance.m_stickerBookChallengeProgression[v2];
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
        v16 = &OnlineStickerBookChallenges::s_instance.m_stickerBookChallengeProgression[v18][v4];
        if ( v16 )
        {
          j_lua_createtable(luaVM, 0, 0);
          LUI_BeginTable("Challenges", luaVM);
          LUI_SetTableInt("ID", v16->id, LUI_luaVM);
          LUI_SetTableString("Ref", v16->name, LUI_luaVM);
          LUI_SetTableInt("UnlockProgress", v16->unlock_progress, LUI_luaVM);
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
OnlineStickerBookChallenges::ResetProgression
==============
*/
void OnlineStickerBookChallenges::ResetProgression(OnlineStickerBookChallenges *this, const int controllerIndex)
{
  __int64 v2; 
  int v4; 
  __int64 RowCount; 
  __int64 v6; 
  const char *ColumnValueForRow; 
  OnlineStickerBookChallenges_vtbl *v8; 
  __int64 v9; 
  StringTable *tablePtr; 

  v2 = controllerIndex;
  StringTable_GetAsset("sticker_book_challenges.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_sticker_book_challenges.cpp", 116, ASSERT_TYPE_ASSERT, "(stickerBookChallengesTable)", (const char *)&queryFormat, "stickerBookChallengesTable") )
    __debugbreak();
  memset_0(this->m_stickerBookChallengeProgression[v2], 0, sizeof(this->m_stickerBookChallengeProgression[v2]));
  v4 = 0;
  RowCount = StringTable_GetRowCount(tablePtr);
  v6 = 0i64;
  do
  {
    if ( v6 >= RowCount )
      break;
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v4, 0);
    this->m_stickerBookChallengeProgression[v2][v6].id = atoi(ColumnValueForRow);
    v8 = (OnlineStickerBookChallenges_vtbl *)StringTable_GetColumnValueForRow(tablePtr, v4++, 1);
    v9 = 32 * (32 * v2 + v6++ + 2);
    *(OnlineStickerBookChallenges_vtbl **)((char *)&this->__vftable + v9) = v8;
  }
  while ( v4 < 32 );
}

/*
==============
OnlineStickerBookChallenges::UpdateChallenges
==============
*/
bool OnlineStickerBookChallenges::UpdateChallenges(OnlineStickerBookChallenges *this, const int controllerIndex, const int kind, bdJSONDeserializer *json, bool complete)
{
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 UserId; 
  bool v12; 
  unsigned __int64 value; 
  unsigned __int64 progress; 
  unsigned __int64 v16; 
  DLogContext context; 
  char buffer[4096]; 

  if ( bdJSONDeserializer::getUInt64(json, "id_", &value) && bdJSONDeserializer::getUInt64(json, "progress", &progress) )
  {
    OnlineStickerBookChallenges::FindAndUpdateUnlock(this, controllerIndex, value, progress);
    if ( kind == 32 && complete && LUI_BeginEvent(LOCAL_CLIENT_0, "completed_sticker_book_challenge", LUI_luaVM) )
    {
      LUI_SetTableBool("immediate", 1, LUI_luaVM);
      LUI_SetTableInt((const char *)&valueOut, value, LUI_luaVM);
      LUI_EndEvent(LUI_luaVM);
      bdJSONDeserializer::getUInt64(json, "completionTimestamp", &v16);
      v9 = v16;
      v10 = value;
      UserId = DLog_GetUserId(controllerIndex);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v12 = DLog_BeginEvent(&context, "dlog_event_sticker_book_challenge_complete");
        context.autoEndEvent = 1;
        if ( v12 && DLog_UInt64(&context, "challenge_id", v10) && DLog_UInt64(&context, "timestamp", v9) )
          DLog_RecordContext(&context);
      }
    }
  }
  return 0;
}

