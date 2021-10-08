/*
==============
LuaShared_RegisterEngineFunctions
==============
*/

void __fastcall LuaShared_RegisterEngineFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterEngineFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_IsAliensMode
==============
*/
__int64 LuaShared_LuaCall_IsAliensMode(lua_State *const luaVM)
{
  char ActiveGameMode; 
  unsigned int v3; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  j_lua_pushboolean(luaVM, ActiveGameMode == 3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsMultiplayer
==============
*/
__int64 LuaShared_LuaCall_IsMultiplayer(lua_State *const luaVM)
{
  unsigned __int8 ActiveGameMode; 
  bool IsOnline; 
  unsigned int v4; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  IsOnline = BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode);
  j_lua_pushboolean(luaVM, IsOnline);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsSingleplayer
==============
*/
__int64 LuaShared_LuaCall_IsSingleplayer(lua_State *const luaVM)
{
  char ActiveGameMode; 
  unsigned int v3; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  j_lua_pushboolean(luaVM, ActiveGameMode == 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsCoreMode
==============
*/
__int64 LuaShared_LuaCall_IsCoreMode(lua_State *const luaVM)
{
  unsigned __int8 ActiveGameMode; 
  bool IsMP; 
  unsigned int v4; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  IsMP = BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode);
  j_lua_pushboolean(luaVM, IsMP);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsReplay
==============
*/
__int64 LuaShared_LuaCall_IsReplay(lua_State *const luaVM)
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
LuaShared_LuaCall_IsDevelopmentBuild
==============
*/
__int64 LuaShared_LuaCall_IsDevelopmentBuild(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_IsDemoBuild
==============
*/
__int64 LuaShared_LuaCall_IsDemoBuild(lua_State *const luaVM)
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
LuaShared_LuaCall_IsConsoleGame
==============
*/
__int64 LuaShared_LuaCall_IsConsoleGame(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.IsConsoleGame()\n");
  j_lua_pushboolean(luaVM, 1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetCurrentPlatform
==============
*/
__int64 LuaShared_LuaCall_GetCurrentPlatform(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.GetCurrentPlatform()\n");
  j_lua_pushinteger(luaVM, 1i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MobDebugInDebugger
==============
*/
__int64 LUI_CoD_LuaCall_MobDebugInDebugger(lua_State *const luaVM)
{
  int i; 
  const char *source; 
  __int64 v4; 
  const char *v5; 
  signed __int64 v6; 
  char v7; 
  __int64 v8; 
  char v9; 
  int v10; 
  unsigned int v11; 
  lua_Debug v13; 
  lua_Debug ar; 

  if ( j_lua_getstack(luaVM, 1, &ar) && j_lua_getinfo(luaVM, "S", &ar) )
  {
    for ( i = 2; i < 7; ++i )
    {
      if ( !j_lua_getstack(luaVM, i, &v13) || !j_lua_getinfo(luaVM, "S", &v13) )
        break;
      source = ar.source;
      v4 = 0x7FFFFFFFi64;
      v5 = v13.source;
      if ( !ar.source && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v6 = source - v5;
      while ( 1 )
      {
        v7 = v5[v6];
        v8 = v4;
        v9 = *v5++;
        --v4;
        if ( !v8 )
        {
LABEL_16:
          v10 = 1;
          goto LABEL_19;
        }
        if ( v7 != v9 )
          break;
        if ( !v7 )
          goto LABEL_16;
      }
    }
  }
  v10 = 0;
LABEL_19:
  j_lua_pushboolean(luaVM, v10);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_MobDebugStackDepth
==============
*/
__int64 LUI_CoD_LuaCall_MobDebugStackDepth(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 
  lua_Debug ar; 

  v2 = lua_tointeger32(luaVM, -1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      v4 = v3;
      if ( j_lua_getstack(luaVM, v3, &ar) )
      {
        if ( j_lua_getinfo(luaVM, "l", &ar) )
          break;
      }
      --v3;
      if ( v4 <= 0 )
        goto LABEL_7;
    }
    v2 = v3 + 1;
  }
LABEL_7:
  j_lua_pushinteger(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_InFrontend
==============
*/
__int64 LuaShared_LuaCall_InFrontend(lua_State *const luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = Com_FrontEnd_IsInFrontEnd();
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
LuaShared_RegisterEngineFunctions
==============
*/
void LuaShared_RegisterEngineFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Engine", s_engineFunctions);
  j_lua_settop(luaVM, -2);
}

