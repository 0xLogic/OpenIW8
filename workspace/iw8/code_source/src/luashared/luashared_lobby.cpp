/*
==============
LuaShared_RegisterLobbyFunctions
==============
*/

void __fastcall LuaShared_RegisterLobbyFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterLobbyFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_IsInPrivateParty
==============
*/
__int64 LuaShared_LuaCall_IsInPrivateParty(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, g_partyData.inParty);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsAloneInPrivateParty
==============
*/
__int64 LuaShared_LuaCall_IsAloneInPrivateParty(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 

  v2 = 0;
  v3 = Party_CountAllMembersEvenIfInactive(&g_partyData);
  if ( v3 == Party_CountLocalMembers(&g_partyData) )
    v2 = 1;
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetMatchmakerStatus
==============
*/
__int64 LuaShared_LuaCall_GetMatchmakerStatus(lua_State *luaVM)
{
  unsigned int v2; 
  MatchmakerUIState UIState; 
  __int32 v4; 
  const char *v5; 
  unsigned int v6; 
  MatchmakerUIStateData outExtraInfo; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  if ( !Lobby_GetPartyData()->party_systemActive )
  {
    j_lua_pushinteger(luaVM, 0i64);
    v2 = 1;
    goto LABEL_11;
  }
  UIState = OnlineMatchmakerOmniscient::GetUIState(&OnlineMatchmakerOmniscient::ms_instance, &outExtraInfo);
  j_lua_pushinteger(luaVM, UIState);
  j_lua_createtable(luaVM, 0, 0);
  v4 = UIState - 2;
  if ( !v4 )
  {
    v5 = "maxPing";
    goto LABEL_9;
  }
  if ( v4 == 1 )
  {
    v5 = "numQoSPlayers";
LABEL_9:
    LuaShared_SetTableInt(v5, outExtraInfo.numQoSPlayers, luaVM);
  }
  v2 = 2;
LABEL_11:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_GetPartyStatus
==============
*/
__int64 LuaShared_LuaCall_GetPartyStatus(lua_State *luaVM)
{
  PartyData *ActiveParty; 
  __int64 Status; 
  int v4; 
  int interEndTime; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  ActiveParty = Party_GetActiveParty();
  Status = PartyUI_GetStatus(ActiveParty);
  v4 = Sys_Milliseconds();
  j_lua_pushinteger(luaVM, Status);
  j_lua_createtable(luaVM, 0, 0);
  if ( (_DWORD)Status == 15 )
  {
    interEndTime = ActiveParty->interEndTime;
  }
  else
  {
    if ( (_DWORD)Status != 20 )
      goto LABEL_8;
    interEndTime = Party_GetGameStartTime(ActiveParty);
  }
  LuaShared_SetTableInt("timeRemaining", interEndTime - v4, luaVM);
LABEL_8:
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v6);
  }
  return 2i64;
}

/*
==============
LuaShared_LuaCall_IsSearching
==============
*/
__int64 LuaShared_LuaCall_IsSearching(lua_State *luaVM)
{
  const dvar_t *v2; 
  int v3; 
  unsigned int v4; 

  if ( Lobby_GetPartyData()->gameStartTime )
    goto LABEL_7;
  v2 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
LABEL_7:
    v3 = 0;
  else
    v3 = 1;
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsInDWLobby
==============
*/
__int64 LuaShared_LuaCall_IsInDWLobby(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  if ( Lobby_GetPartyData()->party_systemActive )
    v2 = OnlineMatchmakerOmniscient::IsInDWLobby(&OnlineMatchmakerOmniscient::ms_instance);
  else
    v2 = 0;
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
LuaShared_RegisterLobbyFunctions
==============
*/
void LuaShared_RegisterLobbyFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Lobby", Lobby_methods);
  j_lua_settop(luaVM, -2);
}

