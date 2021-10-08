/*
==============
LUI_CoD_RegisterChallengesFunctions
==============
*/

void __fastcall LUI_CoD_RegisterChallengesFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterChallengesFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_SendChallengeUserEvent
==============
*/
__int64 LUI_CoD_LuaCall_SendChallengeUserEvent(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *eventParams; 
  OnlineChallengesManager *Instance; 
  unsigned __int64 timestamp; 
  const XUID *Xuid; 
  unsigned int v8; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Challenges.SendUserEvent( <controllerIndex>, <eventname>, <eventdata> )\n");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) && LiveStorage_IsTimeSynced() )
  {
    v2 = lua_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    eventParams = j_lua_tolstring(luaVM, 3, NULL);
    Instance = OnlineChallengesManager::GetInstance();
    timestamp = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, v2);
    OnlineChallengesManager::RecordEventForPlayer(Instance, v2, (const XUID)Xuid->m_id, v3, eventParams, timestamp);
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
LUI_CoD_LuaCall_ActivateOnlineChallenge
==============
*/
__int64 LUI_CoD_LuaCall_ActivateOnlineChallenge(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Challenges.Activate( <controllerIndex>, <achievementname> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isstring(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_DeactivateOnlineChallenge
==============
*/
__int64 LUI_CoD_LuaCall_DeactivateOnlineChallenge(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Challenges.Deactivate( <controllerIndex>, <achievementname> )\n");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) )
    j_lua_isstring(luaVM, 2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_ChallengeDataFetched
==============
*/
__int64 LUI_CoD_LuaCall_ChallengeDataFetched(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  OnlineChallengesManager *Instance; 
  bool v5; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Challenges.DataFetched( <controllerIndex> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lua_tointeger32(luaVM, 1);
    Instance = OnlineChallengesManager::GetInstance();
    v5 = OnlineChallengesManager::ChallengeProgressFetched(Instance, v3);
    j_lua_pushboolean(luaVM, v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetChallengeByIndex
==============
*/
__int64 LUI_CoD_LuaCall_GetChallengeByIndex(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Challenges.GetChallengeByIndex( <challengeIndex> )\n");
  if ( j_lua_gettop(luaVM) == 1 )
    j_lua_isnumber(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetChallengeByName
==============
*/
__int64 LUI_CoD_LuaCall_GetChallengeByName(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Challenges.GetChallengeByName( <challengeName> )\n");
  if ( j_lua_gettop(luaVM) == 2 )
    j_lua_isstring(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_RegisterChallengesFunctions
==============
*/
void LUI_CoD_RegisterChallengesFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Challenges", Challenges_Methods);
  j_lua_settop(luaVM, -2);
}

