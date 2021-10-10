/*
==============
LUI_CoD_RegisterMLGFunctions
==============
*/

void __fastcall LUI_CoD_RegisterMLGFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterMLGFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_TogglePlayerOutlines
==============
*/
__int64 LUI_CoD_LuaCall_TogglePlayerOutlines(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int OutlinePlayers; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  OutlinePlayers = CgMLGSpectator::GetOutlinePlayers(MLGSpectator);
  CgMLGSpectator::SetOutlinePlayers(MLGSpectator, OutlinePlayers == 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetPlayerOutlines
==============
*/
__int64 LUI_CoD_LuaCall_SetPlayerOutlines(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.LUI_CoD_LuaCall_SetPlayerOutlines( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    v4 = j_lua_toboolean(luaVM, 1);
    CgMLGSpectator::SetOutlinePlayers(MLGSpectator, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetPlayerOutlineColorMode
==============
*/
__int64 LUI_CoD_LuaCall_SetPlayerOutlineColorMode(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  PlayerOutlineColorMode v3; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetPlayerOutlineColorMode( <outlineColorMode> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetOutlineColorMode(MLGSpectator, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetPlayerOutlineViewMode
==============
*/
__int64 LUI_CoD_LuaCall_SetPlayerOutlineViewMode(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  PlayerOutlineViewMode v3; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetPlayerOutlineViewMode( <outlineViewMode> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetOutlineViewMode(MLGSpectator, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetOutlineViewmodel
==============
*/
__int64 LUI_CoD_LuaCall_SetOutlineViewmodel(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetOutlineViewmodel( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    v4 = j_lua_toboolean(luaVM, 1);
    CgMLGSpectator::SetOutlineViewmodel(MLGSpectator, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsNoteworthyKillstreakActive
==============
*/
__int64 LUI_CoD_LuaCall_IsNoteworthyKillstreakActive(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.IsNoteworthyKillstreakActive( <clientnum> )");
  v2 = 0;
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    LOBYTE(v2) = CgMLGSpectator::IsClientNoteworthyKillstreakActive(MLGSpectator, v4) != 0;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsGametypeVIP
==============
*/
__int64 LUI_CoD_LuaCall_IsGametypeVIP(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.isGametypeVIP( <clientnum> )");
  v2 = 0;
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    LOBYTE(v2) = CgMLGSpectator::IsClientGametypeVIP(MLGSpectator, v4) != 0;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsSpecialActive
==============
*/
__int64 LUI_CoD_LuaCall_IsSpecialActive(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.isSpecialActive( <clientnum> )");
  v2 = 0;
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    LOBYTE(v2) = CgMLGSpectator::IsClientSpecialActive(MLGSpectator, v4) != 0;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetKillstreakPoints
==============
*/
__int64 LUI_CoD_LuaCall_GetKillstreakPoints(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetKillstreakPoints( <clientnum> )");
  v2 = 0;
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    LOBYTE(v2) = CgMLGSpectator::GetClientKillstreakPoints(MLGSpectator, v4) != 0;
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetNextKillstreakCost
==============
*/
__int64 LUI_CoD_LuaCall_GetNextKillstreakCost(lua_State *luaVM)
{
  int ClientNextKillstreakCost; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v6; 

  ClientNextKillstreakCost = 0;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetNextKillstreakCost( <clientnum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v4 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    ClientNextKillstreakCost = CgMLGSpectator::GetClientNextKillstreakCost(MLGSpectator, v4);
  }
  j_lua_pushboolean(luaVM, ClientNextKillstreakCost);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetMLGSettings
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGSettings(lua_State *luaVM)
{
  unsigned int v2; 
  int v4; 
  DDLContext *DDLContext; 
  unsigned int v7; 
  DDLState state; 

  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetMLGSettings( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v4 = lui_tointeger32(luaVM, 1);
    if ( GamerProfile_IsDDLMounted(v4, MLG_SETTINGS) )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      *(_OWORD *)&state.member = _XMM0;
      DDLContext = GamerProfile_GetDDLContext(v4, MLG_SETTINGS);
      GamerProfile_GetDDLState(&state, v4, MLG_SETTINGS);
      DDL_LuaCreateUserData(luaVM, &state, DDLContext);
    }
    else
    {
      j_lua_pushnil(luaVM);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetMLGDefaultSettings
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGDefaultSettings(lua_State *luaVM)
{
  const char *m_ptr; 
  int OnlyFromDBText; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  Mem_LargeLocal v8; 
  __int64 v9; 
  char value[64]; 
  char str[1024]; 

  v9 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v8, 0x22180ui64, "MaxArrayTextBuf arrayText");
  m_ptr = (const char *)v8.m_ptr;
  OnlyFromDBText = Com_DDL_ReadOnlyFromDBText((char (*)[1091])v8.m_ptr, "mp/mlgsettings.txt");
  v4 = (unsigned int)OnlyFromDBText;
  if ( OnlyFromDBText <= 0 )
  {
    Mem_LargeLocal::~Mem_LargeLocal(&v8);
    v5 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, OnlyFromDBText, 0);
    v5 = 1;
    do
    {
      if ( j_sscanf(m_ptr, "%s = %s", str, value) >= 2 )
      {
        j_lua_pushstring(luaVM, str);
        j_lua_createtable(luaVM, 0, 1);
        LUI_SetTableString("defaultValue", value, luaVM);
        j_lua_settable(luaVM, -3);
      }
      m_ptr += 1091;
      --v4;
    }
    while ( v4 );
    Mem_LargeLocal::~Mem_LargeLocal(&v8);
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_CoD_LuaCall_GetMLGTeamList
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGTeamList(lua_State *luaVM)
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
LUI_CoD_LuaCall_GetMLGPlayerList
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGPlayerList(lua_State *luaVM)
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
LUI_CoD_LuaCall_GetMLGPlayerPortrait
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGPlayerPortrait(lua_State *luaVM)
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
LUI_CoD_LuaCall_ReleaseMLGPlayerPortrait
==============
*/
__int64 LUI_CoD_LuaCall_ReleaseMLGPlayerPortrait(lua_State *luaVM)
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
LUI_CoD_LuaCall_GetMLGPlayerLogo
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGPlayerLogo(lua_State *luaVM)
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
LUI_CoD_LuaCall_ReleaseMLGPlayerLogo
==============
*/
__int64 LUI_CoD_LuaCall_ReleaseMLGPlayerLogo(lua_State *luaVM)
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
LUI_CoD_LuaCall_GetMLGTeamLogo
==============
*/
__int64 LUI_CoD_LuaCall_GetMLGTeamLogo(lua_State *luaVM)
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
LUI_CoD_LuaCall_MLGLobbyReorder
==============
*/
__int64 LUI_CoD_LuaCall_MLGLobbyReorder(lua_State *luaVM)
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
LUI_CoD_LuaCall_SetPauseResumeGameStatus
==============
*/
__int64 LUI_CoD_LuaCall_SetPauseResumeGameStatus(lua_State *luaVM)
{
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetGameBattleMatchId
==============
*/
__int64 LUI_CoD_LuaCall_SetGameBattleMatchId(lua_State *luaVM)
{
  const char *v2; 
  int v3; 
  unsigned int v4; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetGameBattleMatchId( <matchId> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    v3 = atoi(v2);
    GameBattles_SetCurrentMatchId(v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleMatchId
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleMatchId(lua_State *luaVM)
{
  unsigned int v1; 
  unsigned int CurrentMatchId; 
  const char *v4; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleMatchId( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentMatchId = GameBattles_GetCurrentMatchId();
    v4 = j_va("%i", CurrentMatchId);
    j_lua_pushstring(luaVM, v4);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_IsGameBattleMatch
==============
*/
__int64 LUI_CoD_LuaCall_IsGameBattleMatch(lua_State *luaVM)
{
  bool IsGameBattleActive; 
  unsigned int v3; 

  IsGameBattleActive = GameBattles_IsGameBattleActive();
  j_lua_pushboolean(luaVM, IsGameBattleActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleMatchJoinState
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleMatchJoinState(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  GameBattleMatchJoinState MatchJoinState; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleMatchJoinState( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    MatchJoinState = GameBattles_GetMatchJoinState(v3);
    j_lua_pushinteger(luaVM, MatchJoinState);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_LoadGameBattlesRecipe
==============
*/
__int64 LUI_CoD_LuaCall_LoadGameBattlesRecipe(lua_State *luaVM)
{
  int v2; 
  GameStateInfo *v3; 
  unsigned int v4; 
  char outRecipeName[32]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.LoadGameBattlesRecipe( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( GameBattles_GetCurrentMatchRecipeName(v2, outRecipeName, 0x1Eu) )
    {
      v3 = GameStateInfo_Get();
      if ( MatchRules_LoadFromFF(v3->matchRules, outRecipeName) )
        MatchRulesChanged(v3->matchRules);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetClientLoadoutInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetClientLoadoutInfo(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetClientLoadoutInfo_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetListenIn
==============
*/
__int64 LUI_CoD_LuaCall_SetListenIn(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetListenIn( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    v2 = j_lua_toboolean(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetListenIn(MLGSpectator, v2 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetListenIn
==============
*/
__int64 LUI_CoD_LuaCall_GetListenIn(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int ListenIn; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  ListenIn = CgMLGSpectator::GetListenIn(MLGSpectator);
  j_lua_pushboolean(luaVM, ListenIn);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetWaypointsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetWaypointsEnabled(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetWaypointsEnabled( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    v2 = j_lua_toboolean(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetWaypointsEnabled(MLGSpectator, v2 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetWaypointsEnabled
==============
*/
__int64 LUI_CoD_LuaCall_GetWaypointsEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int WaypointsEnabled; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  WaypointsEnabled = CgMLGSpectator::GetWaypointsEnabled(MLGSpectator);
  j_lua_pushboolean(luaVM, WaypointsEnabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetPlayerNumbersEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetPlayerNumbersEnabled(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetPlayerNumbersEnabled( <bool> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    v2 = j_lua_toboolean(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetPlayerNumbersEnabled(MLGSpectator, v2 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetPlayerNumbersEnabled
==============
*/
__int64 LUI_CoD_LuaCall_GetPlayerNumbersEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  int PlayerNumbersEnabled; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  PlayerNumbersEnabled = CgMLGSpectator::GetPlayerNumbersEnabled(MLGSpectator);
  j_lua_pushboolean(luaVM, PlayerNumbersEnabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetSelectedClientNum
==============
*/
__int64 LUI_CoD_LuaCall_SetSelectedClientNum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int v3; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetSelectedClientNum( <clientnum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetSelectedClientNum(MLGSpectator, v3);
    if ( v3 != CurrentValidLocalClient )
      CgMLGSpectator::ResetOutlineFadeTime(MLGSpectator, CurrentValidLocalClient);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetSelectedClientNum
==============
*/
__int64 LUI_CoD_LuaCall_GetSelectedClientNum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  CgMLGSpectator *MLGSpectator; 
  int SelectedClientNum; 
  unsigned int v6; 
  unsigned int v7; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  SelectedClientNum = CgMLGSpectator::GetSelectedClientNum(MLGSpectator);
  if ( SelectedClientNum == LocalClientGlobals->clientNum )
  {
    v6 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, (float)SelectedClientNum);
    v6 = 1;
  }
  if ( (int)v6 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v6, v7);
  }
  return v6;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleScheduleState
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleScheduleState(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  GameBattleScheduleState ScheduleState; 
  const dvar_t *v5; 
  int v6; 
  unsigned int v7; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleScheduleState( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ScheduleState = GameBattles_GetScheduleState(v3);
    v5 = DVARBOOL_gamebattle_fake_mlg_down;
    v6 = ScheduleState;
    if ( !DVARBOOL_gamebattle_fake_mlg_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_fake_mlg_down") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
      v6 = 3;
    j_lua_pushinteger(luaVM, v6);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v7);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleScheduleMatchCount
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleScheduleMatchCount(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  signed int ScheduleMatchCount; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleScheduleMatchCount( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    ScheduleMatchCount = GameBattles_GetScheduleMatchCount(v3);
    j_lua_pushinteger(luaVM, ScheduleMatchCount);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleMatch
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleMatch(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleMatch( <controller>, <matchIndex> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tounsignedinteger32(luaVM, 2);
    if ( GameBattles_PushMatchToLUI(luaVM, v3, v4) )
      goto LABEL_9;
    Com_Printf(13, "Could not get gamebattle match for LUI.\n");
  }
  v1 = 0;
LABEL_9:
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentGameBattleMatchIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentGameBattleMatchIndex(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int CurrentMatchIndex; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetCurrentGameBattleMatchIndex( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    CurrentMatchIndex = GameBattles_GetCurrentMatchIndex(v3);
    j_lua_pushinteger(luaVM, CurrentMatchIndex);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleMatchTime
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleMatchTime(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int v4; 
  const char *MatchTime; 
  unsigned int v6; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleMatchTime( <controller>, <matchIndex> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    MatchTime = GameBattles_GetMatchTime(v3, v4);
    j_lua_pushstring(luaVM, MatchTime);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v6);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_RefreshGameBattleSchedule
==============
*/
__int64 LUI_CoD_LuaCall_RefreshGameBattleSchedule(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int refreshed; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.RefreshGameBattleSchedule( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    refreshed = GameBattles_RefreshSchedule(v3);
    j_lua_pushinteger(luaVM, refreshed);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_ResetGameBattleSchedule
==============
*/
__int64 LUI_CoD_LuaCall_ResetGameBattleSchedule(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.ResetGameBattleSchedule( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_ResetSchedule(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RefreshMatchHistory
==============
*/
__int64 LUI_CoD_LuaCall_RefreshMatchHistory(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  const char *v4; 
  int v5; 
  unsigned int refreshed; 
  unsigned int v7; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.RefreshMatchHistory( <controller>, <matchId> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    v5 = atoi(v4);
    refreshed = GameBattles_RefreshMatchHistory(v3, v5);
    j_lua_pushinteger(luaVM, refreshed);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v7);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetMatchHistoryState
==============
*/
__int64 LUI_CoD_LuaCall_GetMatchHistoryState(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  const char *v4; 
  int v5; 
  GameBattleMatchHistoryState MatchHistoryState; 
  unsigned int v7; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.GetMatchHistoryState( <controller>, <matchId> )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_lua_tolstring(luaVM, 2, NULL);
    v5 = atoi(v4);
    MatchHistoryState = GameBattles_GetMatchHistoryState(v3, v5);
    j_lua_pushinteger(luaVM, MatchHistoryState);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v7);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleAccountState
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleAccountState(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  GameBattleAccountState AccountState; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  unsigned int v8; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleAccountState( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    AccountState = GameBattles_GetAccountState(v3);
    v5 = DVARBOOL_gamebattle_fake_mlg_down;
    v6 = AccountState;
    if ( !DVARBOOL_gamebattle_fake_mlg_down && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_fake_mlg_down") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled )
    {
      v6 = 4;
    }
    else
    {
      v7 = DVARBOOL_gamebattle_skip_account_check;
      if ( !DVARBOOL_gamebattle_skip_account_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "gamebattle_skip_account_check") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v7);
      if ( v7->current.enabled )
        v6 = 2;
    }
    j_lua_pushinteger(luaVM, v6);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v8);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_InviteGameBattleMatchMembers
==============
*/
__int64 LUI_CoD_LuaCall_InviteGameBattleMatchMembers(lua_State *luaVM)
{
  unsigned int v2; 

  Com_PrintError(32, "InviteGameBattleMatchMembers no longer supported.\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RefreshGameBattleAccountState
==============
*/
__int64 LUI_CoD_LuaCall_RefreshGameBattleAccountState(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int refreshed; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.RefreshGameBattleAccountState( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    refreshed = GameBattles_RefreshAccount(v3);
    j_lua_pushinteger(luaVM, refreshed);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetGameBattleMatchReportState
==============
*/
__int64 LUI_CoD_LuaCall_GetGameBattleMatchReportState(lua_State *luaVM)
{
  unsigned int v1; 
  GameBattleMatchReportState MatchReportState; 
  unsigned int v4; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetGameBattleMatchReportState( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    MatchReportState = GameBattles_GetMatchReportState();
    j_lua_pushinteger(luaVM, MatchReportState);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v4);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_HasCodcasterClientMatchData
==============
*/
__int64 LUI_CoD_LuaCall_HasCodcasterClientMatchData(lua_State *luaVM)
{
  ClStatic *CLStatic; 
  unsigned int v3; 

  CLStatic = CL_Main_GetCLStatic();
  j_lua_pushboolean(luaVM, CLStatic->codcasterClientMatchData.def[0] != 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCodcasterClientMatchData
==============
*/
__int64 LUI_CoD_LuaCall_GetCodcasterClientMatchData(lua_State *luaVM)
{
  ClStatic *CLStatic; 
  unsigned int DDL; 
  int v4; 
  const DDLDef *Asset; 
  unsigned int v6; 
  DDLContext ddlContext; 

  CLStatic = CL_Main_GetCLStatic();
  if ( CLStatic->codcasterClientMatchData.def[0] )
  {
    v4 = j_lua_gettop(luaVM);
    Asset = Com_DDL_LoadAsset(CLStatic->codcasterClientMatchData.def);
    Com_DDL_CreateContext(CLStatic->codcasterClientMatchData.data, 1614, Asset, &ddlContext, NULL, NULL);
    DDL = LUI_GetDDL(luaVM, v4, Asset, &ddlContext, STATSGROUP_IGNORE);
  }
  else
  {
    DDL = 0;
  }
  if ( (int)DDL > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", DDL, v6);
  }
  return DDL;
}

/*
==============
LUI_Cod_LuaCall_SetActiveGameIndex
==============
*/
__int64 LUI_Cod_LuaCall_SetActiveGameIndex(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetActiveGameIndex( <gameIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_SetActiveGameIndex(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_Cod_LuaCall_GetActiveGameIndex
==============
*/
__int64 LUI_Cod_LuaCall_GetActiveGameIndex(lua_State *luaVM)
{
  unsigned int ActiveGameIndex; 
  unsigned int v3; 

  ActiveGameIndex = GameBattles_GetActiveGameIndex();
  j_lua_pushinteger(luaVM, ActiveGameIndex);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_GameModeSupportsCodcaster
==============
*/
__int64 LUI_Cod_LuaCall_GameModeSupportsCodcaster(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_HIGH|WEAPON_OFFHAND_END|0x80);
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_Cod_LuaCall_JoinGameBattleMatchLobby
==============
*/
__int64 LUI_Cod_LuaCall_JoinGameBattleMatchLobby(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  unsigned int matched; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.JoinGameBattleMatchLobby( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    matched = GameBattles_JoinMatchLobby(v3);
    j_lua_pushinteger(luaVM, matched);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_Cod_LuaCall_RequestMatchExpiredCheck
==============
*/
__int64 LUI_Cod_LuaCall_RequestMatchExpiredCheck(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.RequestMatchExpiredCheck( <controller>, <matchId> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = atoi(v3);
    GameBattles_CheckMatchLobby(v2, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_Cod_LuaCall_GetMatchExpiredCheckResult
==============
*/
__int64 LUI_Cod_LuaCall_GetMatchExpiredCheckResult(lua_State *luaVM)
{
  unsigned int v1; 
  int v3; 
  GameBattleMatchCheckResult v4; 
  unsigned int v5; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetMatchExpiredCheckResult( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = GameBattles_GetCheckMatchLobbyResult(v3);
    j_lua_pushinteger(luaVM, v4);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v5);
  }
  return v1;
}

/*
==============
LUI_Cod_LuaCall_LeaveGameBattleMatchLobby
==============
*/
__int64 LUI_Cod_LuaCall_LeaveGameBattleMatchLobby(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.LeaveGameBattleMatchLobby( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_LeaveMatchLobby(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsMLGFollowDroneActive
==============
*/
__int64 LUI_CoD_LuaCall_IsMLGFollowDroneActive(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  int IsFollowDroneActive; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  clientNum = CG_GetLocalClientGlobals(CurrentValidLocalClient)->clientNum;
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  IsFollowDroneActive = CgMLGSpectator::IsFollowDroneActive(MLGSpectator, clientNum);
  j_lua_pushboolean(luaVM, IsFollowDroneActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FollowDrone
==============
*/
__int64 LUI_CoD_LuaCall_FollowDrone(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.FollowDrone( <activate> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_va("followdrone %i\n", v3);
    Cbuf_AddText(CurrentValidLocalClient, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SendGameBattleNoShowReport
==============
*/
__int64 LUI_CoD_LuaCall_SendGameBattleNoShowReport(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SendGameBattleNoShowReport( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_SendNoShowMatchReport(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCameraType
==============
*/
__int64 LUI_CoD_LuaCall_SetCameraType(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CoDCasterCameraType v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  CgMLGCameraManager *v6; 
  unsigned int v7; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetCameraType( <type> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = (unsigned __int8)j_lua_tointeger(luaVM, 1);
    CG_PlayerStateMP_ResetSpectatorViewAngles(CurrentValidLocalClient);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
    if ( LocalClientGlobals )
    {
      if ( LocalClientGlobals->m_isMLGSpectator )
      {
        CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
        v6 = CameraManager;
        if ( v3 != AERIAL || CgMLGCameraManager::IsAerialCameraEnabled(CameraManager) )
          CgMLGCameraManager::SetMLGCameraType(v6, CurrentValidLocalClient, v3);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsFreeCamEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsFreeCamEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  int v5; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    v5 = CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == FREE;
  }
  else
  {
    v5 = 0;
  }
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsAerialCamEnabled
==============
*/
__int64 LUI_CoD_LuaCall_IsAerialCamEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  int v5; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    v5 = CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == AERIAL;
  }
  else
  {
    v5 = 0;
  }
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCameraType
==============
*/
__int64 LUI_CoD_LuaCall_GetCameraType(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  __int64 MLGCameraType; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    MLGCameraType = (unsigned __int8)CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient);
  }
  else
  {
    MLGCameraType = 0i64;
  }
  j_lua_pushinteger(luaVM, MLGCameraType);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetTournamentInfo
==============
*/
__int64 LUI_CoD_LuaCall_GetTournamentInfo(lua_State *luaVM)
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
LUI_CoD_LuaCall_IsCDLClient
==============
*/
__int64 LUI_CoD_LuaCall_IsCDLClient(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SwapTeamOrder
==============
*/
__int64 LUI_CoD_LuaCall_SwapTeamOrder(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 0);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_IsMLGCameraTetherToPlayer
==============
*/
__int64 LUI_CoD_LuaCall_IsMLGCameraTetherToPlayer(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  int IsAerialCameraTethered; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals && LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    IsAerialCameraTethered = CgMLGCameraManager::IsAerialCameraTethered(CameraManager, CurrentValidLocalClient);
  }
  else
  {
    IsAerialCameraTethered = 0;
  }
  j_lua_pushboolean(luaVM, IsAerialCameraTethered);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_FocusSpectatedPlayer
==============
*/
__int64 LUI_CoD_LuaCall_FocusSpectatedPlayer(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  CameraStateInterface *MLGCurrentCameraState; 
  AerialCamActiveCameraState *v6; 
  unsigned int v7; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals )
  {
    if ( LocalClientGlobals->m_isMLGSpectator )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
      MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
      v6 = (AerialCamActiveCameraState *)MLGCurrentCameraState;
      if ( MLGCurrentCameraState )
      {
        if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) == AERIALCAM_ACTIVE )
          AerialCamActiveCameraState::FocusSpectatedPlayer(v6);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetFocusedPlayer
==============
*/
__int64 LUI_CoD_LuaCall_SetFocusedPlayer(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetFocusedPlayer( <clientNum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = j_lua_tointeger(luaVM, 1);
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
    if ( LocalClientGlobals )
    {
      if ( LocalClientGlobals->m_isMLGSpectator )
      {
        CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
        CgMLGCameraManager::SetFocusedClient(CameraManager, CurrentValidLocalClient, v3);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_GetPlayerstateClientnum
==============
*/
__int64 LUI_CoD_LuaCall_MLG_GetPlayerstateClientnum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v7; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == AERIAL && CgMLGCameraManager::IsAerialCameraTethered(CameraManager, CurrentValidLocalClient) )
    CgMLGCameraManager::GetFocusedPlayer(CameraManager, CurrentValidLocalClient);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, edi; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_SetAerialHeightLimits
==============
*/
__int64 LUI_CoD_LuaCall_MLG_SetAerialHeightLimits(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  double v5; 
  float v6; 
  double v7; 
  unsigned int v8; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.SetAerialHeightLimits( <minHeight, maxHeight> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    if ( j_lua_isnumber(luaVM, 2) )
    {
      CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
      m_mlgSpectatorPtr = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient)->m_mlgSpectatorPtr;
      if ( m_mlgSpectatorPtr )
      {
        CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
        v5 = lui_tonumber32(luaVM, 1);
        v6 = *(float *)&v5;
        v7 = lui_tonumber32(luaVM, 2);
        if ( *(float *)&v7 >= v6 )
        {
          CgMLGCameraManager::SetAerialMaxHeight(CameraManager, *(const float *)&v7);
          CgMLGCameraManager::SetAerialMinHeight(CameraManager, v6);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_ClearAerialHeightLimits
==============
*/
__int64 LUI_CoD_LuaCall_MLG_ClearAerialHeightLimits(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  m_mlgSpectatorPtr = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient)->m_mlgSpectatorPtr;
  if ( m_mlgSpectatorPtr )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
    CgMLGCameraManager::SetAerialMaxHeight(CameraManager, 4000.0);
    CgMLGCameraManager::SetAerialMinHeight(CameraManager, 0.0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_IsAerialEnabled
==============
*/
__int64 LUI_CoD_LuaCall_MLG_IsAerialEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  int IsAerialCameraEnabled; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  m_mlgSpectatorPtr = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient)->m_mlgSpectatorPtr;
  if ( m_mlgSpectatorPtr )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
    IsAerialCameraEnabled = CgMLGCameraManager::IsAerialCameraEnabled(CameraManager);
  }
  else
  {
    IsAerialCameraEnabled = 0;
  }
  j_lua_pushboolean(luaVM, IsAerialCameraEnabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_SetAerialEnabled
==============
*/
__int64 LUI_CoD_LuaCall_MLG_SetAerialEnabled(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetAerialEnabled( <aerialCamEnabled> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    m_mlgSpectatorPtr = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient)->m_mlgSpectatorPtr;
    if ( m_mlgSpectatorPtr )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
      v5 = j_lua_toboolean(luaVM, 1);
      CgMLGCameraManager::SetAerialCameraEnabled(CameraManager, v5 != 0);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_InitGlobalTints
==============
*/
__int64 LUI_CoD_LuaCall_MLG_InitGlobalTints(lua_State *luaVM)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  LocalClientNum_t CurrentValidLocalClient; 
  double v10; 
  __int128 v11; 
  double v13; 
  __int128 v14; 
  ParticleManager *ParticleManager; 
  ParticleManager *v23; 
  unsigned int v24; 
  float4 tint; 
  __int128 v27; 
  __int128 v28; 
  __int128 v29; 
  __int128 v30; 
  __int128 v31; 
  __int128 v32; 
  __int128 v33; 

  if ( !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: MLG.InitGlobalTints( <friendlyColor>, <enemyColor>  )");
  if ( j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v33 = v1;
    v32 = v2;
    v31 = v3;
    v30 = v4;
    v29 = v5;
    v28 = v6;
    v27 = v7;
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v10 = lua_tonumber32(luaVM, 1);
    v11 = 0i64;
    *(float *)&v11 = (float)(unsigned __int8)((unsigned int)(int)*(float *)&v10 >> 16) * 0.0039215689;
    _XMM10 = v11;
    v13 = lua_tonumber32(luaVM, 2);
    v14 = 0i64;
    *(float *)&v14 = (float)(unsigned __int8)((unsigned int)(int)*(float *)&v13 >> 16) * 0.0039215689;
    _XMM11 = v14;
    __asm
    {
      vinsertps xmm10, xmm10, xmm6, 10h
      vinsertps xmm10, xmm10, xmm7, 20h ; ' '
      vinsertps xmm10, xmm10, cs:__real@3f800000, 30h ; '0'
    }
    tint.v = _XMM10;
    ParticleManager = ParticleManager::GetParticleManager(CurrentValidLocalClient);
    ParticleManager::SetGlobalTint(ParticleManager, 1u, &tint);
    __asm
    {
      vinsertps xmm11, xmm11, xmm8, 10h
      vinsertps xmm11, xmm11, xmm9, 20h ; ' '
      vinsertps xmm11, xmm11, cs:__real@3f800000, 30h ; '0'
    }
    tint.v = _XMM11;
    v23 = ParticleManager::GetParticleManager(CurrentValidLocalClient);
    ParticleManager::SetGlobalTint(v23, 2u, &tint);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v24 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v24);
  }
  return 0i64;
}

/*
==============
LUI_GameBattles_LaunchSonyAccountLinking
==============
*/
__int64 LUI_GameBattles_LaunchSonyAccountLinking(lua_State *luaVM)
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
LUI_GameBattles_LaunchSonyTournamentList
==============
*/
__int64 LUI_GameBattles_LaunchSonyTournamentList(lua_State *luaVM)
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
LUI_GameBattles_IsPlayerWhitelisted
==============
*/
__int64 LUI_GameBattles_IsPlayerWhitelisted(lua_State *luaVM)
{
  int v2; 
  int IsPlayerWhitelisted; 
  unsigned int v4; 
  XUID result; 

  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.IsPlayerWhitelisted( <controller> )");
  if ( j_lua_isstring(luaVM, 1) )
  {
    v2 = j_lua_tointeger(luaVM, 1);
    Live_GetXuid(&result, v2);
    IsPlayerWhitelisted = GameBattles_IsPlayerWhitelisted(&result);
  }
  else
  {
    IsPlayerWhitelisted = 0;
  }
  j_lua_pushboolean(luaVM, IsPlayerWhitelisted);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_MLG_SetLocalCommitReady
==============
*/
__int64 LUI_COD_LuaCall_MLG_SetLocalCommitReady(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetLocalCommitReady( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_SetLocalCommitReady(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_MLG_GetLocalCommitReady
==============
*/
__int64 LUI_COD_LuaCall_MLG_GetLocalCommitReady(lua_State *luaVM)
{
  int v2; 
  int LocalCommitReady; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetLocalCommitReady( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    LocalCommitReady = GameBattles_GetLocalCommitReady(v2);
  }
  else
  {
    LocalCommitReady = 0;
  }
  j_lua_pushboolean(luaVM, LocalCommitReady);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_COD_LuaCall_MLG_ClearLocalCommitReady
==============
*/
__int64 LUI_COD_LuaCall_MLG_ClearLocalCommitReady(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.ClearLocalCommitReady( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_ClearLocalCommitReady(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_MLG_SetLocalInputType
==============
*/
__int64 LUI_COD_LuaCall_MLG_SetLocalInputType(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetLocalInputType( <controller>, <usingGamepad> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_toboolean(luaVM, 2);
    GameBattles_SetLocalIsUsingGamepad(v2, v3 != 0);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_AerialFocusNearestPlayer
==============
*/
__int64 LUI_CoD_LuaCall_MLG_AerialFocusNearestPlayer(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  AerialCamActiveCameraState *MLGCurrentCameraState; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals )
  {
    if ( LocalClientGlobals->m_isMLGSpectator )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
      if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == AERIAL )
      {
        MLGCurrentCameraState = (AerialCamActiveCameraState *)CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
        if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) == AERIALCAM_ACTIVE )
          AerialCamActiveCameraState::FocusNearestPlayer(MLGCurrentCameraState, CurrentValidLocalClient);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_GameBattles_GetNavigationDestination
==============
*/
__int64 LUI_GameBattles_GetNavigationDestination(lua_State *luaVM)
{
  int NavigationDestination; 
  unsigned int v3; 

  NavigationDestination = GameBattles_GetNavigationDestination();
  j_lua_pushinteger(luaVM, NavigationDestination);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_GameBattles_OnNavigationComplete
==============
*/
__int64 LUI_GameBattles_OnNavigationComplete(lua_State *luaVM)
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
LUI_COD_LuaCall_MLG_StartMatch
==============
*/
__int64 LUI_COD_LuaCall_MLG_StartMatch(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.StartMatch( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_OnStartMatch(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_MLG_RefreshCurrentMatch
==============
*/
__int64 LUI_COD_LuaCall_MLG_RefreshCurrentMatch(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.RefreshCurrentMatch( <controller> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    GameBattles_GetCurrentMatchSchedule(v2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MLG_AerialFocusBarycenter
==============
*/
__int64 LUI_CoD_LuaCall_MLG_AerialFocusBarycenter(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  AerialCamActiveCameraState *MLGCurrentCameraState; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( LocalClientGlobals )
  {
    if ( LocalClientGlobals->m_isMLGSpectator )
    {
      CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
      if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == AERIAL )
      {
        MLGCurrentCameraState = (AerialCamActiveCameraState *)CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
        if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) == AERIALCAM_ACTIVE )
          AerialCamActiveCameraState::FocusBarycenter(MLGCurrentCameraState, CurrentValidLocalClient);
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_COD_LuaCall_MLG_TraceState
==============
*/
__int64 LUI_COD_LuaCall_MLG_TraceState(lua_State *luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.TraceState( <controller>, <desc>, <data> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = j_lua_tolstring(luaVM, 3, NULL);
    GameBattles_TraceState(v2, v3, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SpectateNext
==============
*/
__int64 LUI_CoD_LuaCall_SpectateNext(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CG_PlayerStateMP_ResetSpectatorViewAngles(CurrentValidLocalClient);
  Cbuf_AddText(CurrentValidLocalClient, "spectatenext\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SpectatePrev
==============
*/
__int64 LUI_CoD_LuaCall_SpectatePrev(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CG_PlayerStateMP_ResetSpectatorViewAngles(CurrentValidLocalClient);
  Cbuf_AddText(CurrentValidLocalClient, "spectateprev\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SpectateClientnum
==============
*/
__int64 LUI_CoD_LuaCall_SpectateClientnum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SpectateClientnum( <clientnum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    CG_PlayerStateMP_ResetSpectatorViewAngles(CurrentValidLocalClient);
    v4 = j_va("spectateclientnum %i\n", v3);
    Cbuf_AddText(CurrentValidLocalClient, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_FollowClientnum
==============
*/
__int64 LUI_CoD_LuaCall_FollowClientnum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.FollowClientnum( <clientnum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    v4 = j_va("followclientnum %i\n", v3);
    Cbuf_AddText(CurrentValidLocalClient, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCamera
==============
*/
__int64 LUI_CoD_LuaCall_SetCamera(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  const CameraPose *MLGFreeCamPoseForCurrentMap; 
  const CameraPose *v7; 
  CameraStateInterface *MLGCurrentCameraState; 
  unsigned int v9; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.SetCamera( <cameraIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1) - 1;
    if ( v3 <= 0x13 )
    {
      LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
      CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
      MLGFreeCamPoseForCurrentMap = CgMLGCameraManager::GetMLGFreeCamPoseForCurrentMap(CameraManager, v3);
      v7 = MLGFreeCamPoseForCurrentMap;
      if ( MLGFreeCamPoseForCurrentMap )
      {
        if ( MLGFreeCamPoseForCurrentMap->hasBeenSet )
        {
          CgMLGCameraManager::SetMLGTargetCameraPosition(CameraManager, &MLGFreeCamPoseForCurrentMap->pos);
          CgMLGCameraManager::SetMLGTargetCameraAngles(CameraManager, &v7->angles);
          CgMLGCameraManager::SetMLGTargetCameraFoV(CameraManager, v7->fov);
          MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
          if ( MLGCurrentCameraState && CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == FREE && MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) != FREECAM_ACTIVE )
            CgMLGCameraManager::SetMemorizedCameraPose(CameraManager, v7);
          CgCompassSystemMP::SetDebugCamSelectedIndex(v3);
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SaveCameraPresets
==============
*/
__int64 LUI_CoD_LuaCall_SaveCameraPresets(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  CgMLGCameraManager::SaveMLGFreeCamPoses(CameraManager);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RestoreMemorizedCameraPose
==============
*/
__int64 LUI_CoD_LuaCall_RestoreMemorizedCameraPose(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  CgMLGCameraManager::RestoreMemorizedCameraPose(CameraManager);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RegisterCameraPreset
==============
*/
__int64 LUI_CoD_LuaCall_RegisterCameraPreset(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v6; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.RegisterCameraPreset( <cameraIndex> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1) - 1;
    if ( v3 <= 0x13 )
    {
      LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
      CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
      CgMLGCameraManager::RegisterMLGFreeCamCurrentPoseAsPresetForCurrentMap(CameraManager, v3);
      CgCompassSystemMP::SetDebugCamSelectedIndex(v3);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_MemorizeCurrentCameraPose
==============
*/
__int64 LUI_CoD_LuaCall_MemorizeCurrentCameraPose(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
  CgMLGCameraManager::MemorizeCurrentCameraPose(CameraManager);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_LoadCameraPresets
==============
*/
__int64 LUI_CoD_LuaCall_LoadCameraPresets(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgMLGCameraManager *CameraManager; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.LoadCameraPresets( )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    CgMLGCameraManager::LoadMLGFreeCamPoses(CameraManager, CurrentValidLocalClient);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsMLGSpectator
==============
*/
__int64 LUI_CoD_LuaCall_IsMLGSpectator(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t CurrentLocalClient; 
  int v4; 
  int v5; 
  int clientNum; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v8; 
  __int64 v10; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( !CL_Mgr_IsControllerMappedToClient(v2, &outLocalClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_mlg.cpp", 742, ASSERT_TYPE_ASSERT, "(CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum ))", (const char *)&queryFormat, "CL_Mgr_IsControllerMappedToClient( controllerIndex, &localClientNum )") )
      __debugbreak();
    CurrentLocalClient = outLocalClientNum;
  }
  else
  {
    CurrentLocalClient = LUI_CoD_GetCurrentLocalClient();
    outLocalClientNum = CurrentLocalClient;
  }
  if ( CurrentLocalClient == LOCAL_CLIENT_INVALID )
  {
    v4 = 0;
  }
  else
  {
    v5 = CurrentLocalClient;
    if ( (unsigned int)CurrentLocalClient >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v10) = CurrentLocalClient;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, 2) )
        __debugbreak();
      CurrentLocalClient = outLocalClientNum;
    }
    if ( v5 < cg_t::ms_allocatedCount )
    {
      if ( CG_IsFullyInitialized(CurrentLocalClient) )
      {
        clientNum = CG_GetLocalClientGlobals(outLocalClientNum)->clientNum;
        MLGSpectator = CgMLGSpectator::GetMLGSpectator(outLocalClientNum);
        v4 = CgMLGSpectator::IsClientMLGSpectator(MLGSpectator, outLocalClientNum, clientNum) != 0;
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = 0;
    }
  }
  j_lua_pushboolean(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_SetThirdPerson
==============
*/
__int64 LUI_CoD_LuaCall_SetThirdPerson(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 
  const char *v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "USAGE: MLG.SetThirdPerson( <clientnum> )");
  if ( j_lua_type(luaVM, 1) == 1 )
  {
    v3 = j_lua_toboolean(luaVM, 1) != 0;
    SetSpectatorPersoness(CurrentValidLocalClient, v3);
    v4 = j_va("setmlgthirdpersonenabled %i\n", v3);
    Cbuf_AddText(CurrentValidLocalClient, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsSpectating
==============
*/
__int64 LUI_CoD_LuaCall_IsSpectating(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, LocalClientGlobals->predictedPlayerState.clientNum != LocalClientGlobals->clientNum);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetSpectatedClientNum
==============
*/
__int64 LUI_CoD_LuaCall_GetSpectatedClientNum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  CgMLGSpectator *MLGSpectator; 
  CgMLGCameraManager *CameraManager; 
  int FocusedPlayer; 
  unsigned int v7; 
  unsigned int v8; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
  CameraManager = CgMLGSpectator::GetCameraManager(MLGSpectator);
  if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, CurrentValidLocalClient) == AERIAL )
    FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(CameraManager, CurrentValidLocalClient);
  else
    FocusedPlayer = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( FocusedPlayer == LocalClientGlobals->clientNum )
  {
    v7 = 0;
  }
  else
  {
    j_lua_pushnumber(luaVM, (float)FocusedPlayer);
    v7 = 1;
  }
  if ( (int)v7 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v7, v8);
  }
  return v7;
}

/*
==============
LUI_CoD_LuaCall_StopSpectate
==============
*/
__int64 LUI_CoD_LuaCall_StopSpectate(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v3; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  Cbuf_AddText(CurrentValidLocalClient, "stopspectate\n");
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HighlightClientNum
==============
*/
__int64 LUI_CoD_LuaCall_HighlightClientNum(lua_State *luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int v3; 
  CgMLGSpectator *MLGSpectator; 
  unsigned int v5; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.HighlightClientNum( <clientnum> )");
  if ( j_lua_isnumber(luaVM, 1) )
  {
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    v3 = lui_tointeger32(luaVM, 1);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    CgMLGSpectator::SetHighlightClientNum(MLGSpectator, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetClientLoadoutInfo_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetClientLoadoutInfo_impl(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  lua_State *v3; 
  int v4; 
  __int64 v5; 
  CgEntitySystem *v6; 
  CgMLGSpectator *v7; 
  lua_State *v8; 
  int IsMLGMessageSent; 
  int v10; 
  unsigned int i; 
  int v12; 
  const Weapon *ClientWeapon; 
  const Weapon *v14; 
  const char *WeaponBaseName; 
  lua_State *v16; 
  const char *v17; 
  const char *v18; 
  lua_State *v19; 
  const char *v20; 
  unsigned int WeaponAttachments; 
  lua_State *v22; 
  int v23; 
  const char *v24; 
  int v25; 
  WeaponAttachment **v26; 
  int v27; 
  lua_State *v28; 
  const char *szInternalName; 
  const char *v30; 
  lua_State *v31; 
  __int64 ClientInClipAmmo; 
  const char *v33; 
  __int64 ClientOutClipAmmo; 
  const char *v35; 
  int j; 
  lua_State *v37; 
  __int64 ClientKillstreakIndex; 
  const char *v39; 
  lua_State *v40; 
  const char *v41; 
  int k; 
  int ClientCurrentLoadoutTypeIndex; 
  lua_State *v44; 
  __int64 v45; 
  const char *v46; 
  lua_State *v47; 
  int ClientPowerPrimaryAmmo; 
  lua_State *v49; 
  int ClientPowerSecondaryAmmo; 
  lua_State *v51; 
  int ClientPowerPrimaryProgress; 
  lua_State *v53; 
  int v54; 
  lua_State *v55; 
  bool ClientExtraPowerValueByIndex; 
  const char *v57; 
  lua_State *v58; 
  int ClientCurrentWeapon; 
  lua_State *v60; 
  int ClientDamageDone; 
  lua_State *v62; 
  int IsUsingSpecialist; 
  lua_State *v64; 
  int ClientDominationPoint; 
  lua_State *v66; 
  int HasSpecialistBonus; 
  __int64 v69; 
  __int64 v70; 
  int v71; 
  char *loadoutNameOut; 
  CgMLGSpectator *MLGSpectator; 
  WeaponAttachment *attachments[30]; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: MLG.GetClientLoadoutInfo( <clientnum> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = (lua_State *)(int)CurrentValidLocalClient;
  LODWORD(loadoutNameOut) = CurrentValidLocalClient;
  v4 = lui_tointeger32(luaVM, 1);
  v5 = v4;
  if ( v4 < cls.maxClients && v4 >= 0 )
    goto LABEL_20;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
  {
    v71 = (int)v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v71) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v70) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v69) = (_DWORD)v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v69, v70) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[(_QWORD)v3] )
  {
    LODWORD(v70) = (_DWORD)v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v70) )
      __debugbreak();
  }
  v6 = CgEntitySystem::ms_entitySystemArray[(_QWORD)v3];
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v70) = 2048;
    LODWORD(v69) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v69, v70) )
      __debugbreak();
  }
  LODWORD(v5) = v6->m_entities[v5].nextState.otherEntityNum;
  if ( (int)v5 >= cls.maxClients || (int)v5 < 0 )
  {
    Com_PrintError(32, "GetClientLoadoutInfo: passed in an invalid clientNum ( %i )\n", (unsigned int)v5);
    return 0i64;
  }
  else
  {
LABEL_20:
    MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v3);
    v7 = MLGSpectator;
    j_lua_createtable(luaVM, 0, 0);
    v8 = LUI_luaVM;
    IsMLGMessageSent = CgMLGSpectator::IsMLGMessageSent(MLGSpectator, v5);
    LUI_SetTableBool("MLGMessageSent", IsMLGMessageSent != 0, v8);
    v10 = 0;
    for ( i = 1; (int)i <= 2; ++i )
    {
      v12 = i - 1;
      ClientWeapon = CgMLGSpectator::GetClientWeapon(v7, (LocalClientNum_t)v3, v5, i - 1);
      v14 = ClientWeapon;
      if ( ClientWeapon )
      {
        WeaponBaseName = BG_GetWeaponBaseName(ClientWeapon, 0);
        v16 = LUI_luaVM;
        v17 = WeaponBaseName;
        v18 = j_va("weaponName_%i", i);
        LUI_SetTableString(v18, v17, v16);
        v19 = LUI_luaVM;
        LODWORD(v17) = v14->weaponLootId;
        v20 = j_va("weaponLootId_%i", i);
        LUI_SetTableInt(v20, (unsigned int)v17, v19);
        WeaponAttachments = BG_GetWeaponAttachments(v14, 0, (const WeaponAttachment **)attachments);
        v22 = LUI_luaVM;
        v23 = WeaponAttachments;
        v24 = j_va("weaponAttachmentCount_%i", i);
        LUI_SetTableInt(v24, (unsigned int)v23, v22);
        v25 = 0;
        if ( v23 > 0 )
        {
          v26 = attachments;
          v27 = v23;
          do
          {
            v28 = LUI_luaVM;
            ++v25;
            szInternalName = (*v26)->szInternalName;
            v30 = j_va("weapon_%i_attachment_%i", i, (unsigned int)v25);
            LUI_SetTableString(v30, szInternalName, v28);
            ++v26;
          }
          while ( v25 < v27 );
          v7 = MLGSpectator;
          v12 = i - 1;
        }
        v31 = LUI_luaVM;
        ClientInClipAmmo = CgMLGSpectator::GetClientInClipAmmo(v7, v5, v12);
        v33 = j_va("weaponAmmo_%i", i);
        LUI_SetTableInt(v33, ClientInClipAmmo, v31);
        v3 = LUI_luaVM;
        ClientOutClipAmmo = CgMLGSpectator::GetClientOutClipAmmo(v7, v5, v12);
        v35 = j_va("weaponAmmoReserve_%i", i);
        LUI_SetTableInt(v35, ClientOutClipAmmo, v3);
        LODWORD(v3) = (_DWORD)loadoutNameOut;
      }
    }
    for ( j = 0; j < 4; ++j )
    {
      v37 = LUI_luaVM;
      ClientKillstreakIndex = CgMLGSpectator::GetClientKillstreakIndex(v7, v5, j);
      v39 = j_va("%i_killstreakIndex", (unsigned int)(j + 1));
      LUI_SetTableInt(v39, ClientKillstreakIndex, v37);
      v40 = LUI_luaVM;
      LOBYTE(ClientKillstreakIndex) = CgMLGSpectator::GetClientKillstreakAvailability(v7, v5, j) == 1;
      v41 = j_va("%i_killstreakAvailable", (unsigned int)(j + 1));
      LUI_SetTableBool(v41, ClientKillstreakIndex, v40);
    }
    for ( k = 0; k < 12; ++k )
    {
      loadoutNameOut = NULL;
      if ( MLG_GetLoadoutNameFromType((MLGLoadoutType)k, (const char **)&loadoutNameOut) )
      {
        ClientCurrentLoadoutTypeIndex = CgMLGSpectator::GetClientCurrentLoadoutTypeIndex(v7, v5, (MLGLoadoutType)k);
        v44 = LUI_luaVM;
        v45 = ClientCurrentLoadoutTypeIndex;
        v46 = j_va("%sIndex", loadoutNameOut);
        LUI_SetTableInt(v46, v45, v44);
      }
    }
    v47 = LUI_luaVM;
    ClientPowerPrimaryAmmo = CgMLGSpectator::GetClientPowerPrimaryAmmo(v7, v5);
    LUI_SetTableInt("primaryPowerAmmo", ClientPowerPrimaryAmmo, v47);
    v49 = LUI_luaVM;
    ClientPowerSecondaryAmmo = CgMLGSpectator::GetClientPowerSecondaryAmmo(v7, v5);
    LUI_SetTableInt("secondaryPowerAmmo", ClientPowerSecondaryAmmo, v49);
    v51 = LUI_luaVM;
    ClientPowerPrimaryProgress = CgMLGSpectator::GetClientPowerPrimaryProgress(v7, v5);
    LUI_SetTableInt("primaryPowerProgress", ClientPowerPrimaryProgress, v51);
    v53 = LUI_luaVM;
    v54 = CgMLGSpectator::GetClientPowerPrimaryProgress(v7, v5);
    LUI_SetTableInt("secondaryPowerProgress", v54, v53);
    do
    {
      v55 = LUI_luaVM;
      ClientExtraPowerValueByIndex = CgMLGSpectator::GetClientExtraPowerValueByIndex(v7, v5, v10);
      v57 = j_va("extraPower_%i", (unsigned int)v10);
      LUI_SetTableBool(v57, ClientExtraPowerValueByIndex, v55);
      ++v10;
    }
    while ( v10 < 2 );
    v58 = LUI_luaVM;
    ClientCurrentWeapon = CgMLGSpectator::GetClientCurrentWeapon(v7, v5);
    LUI_SetTableInt("weaponUsed", ClientCurrentWeapon, v58);
    v60 = LUI_luaVM;
    ClientDamageDone = CgMLGSpectator::GetClientDamageDone(v7, v5);
    LUI_SetTableInt("damageDone", ClientDamageDone, v60);
    v62 = LUI_luaVM;
    IsUsingSpecialist = CgMLGSpectator::IsUsingSpecialist(v7, v5);
    LUI_SetTableInt("isSpecialist", IsUsingSpecialist, v62);
    v64 = LUI_luaVM;
    ClientDominationPoint = CgMLGSpectator::GetClientDominationPoint(v7, v5);
    LUI_SetTableInt("dominationPoint", ClientDominationPoint, v64);
    v66 = LUI_luaVM;
    HasSpecialistBonus = CgMLGSpectator::HasSpecialistBonus(v7, v5);
    LUI_SetTableInt("hasSpecialistBonus", HasSpecialistBonus, v66);
    return 1i64;
  }
}

/*
==============
LUI_CoD_RegisterMLGFunctions
==============
*/
void LUI_CoD_RegisterMLGFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "MLG", MLG_methods);
  j_lua_settop(luaVM, -2);
}

