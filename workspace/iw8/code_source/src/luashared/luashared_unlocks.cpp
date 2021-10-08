/*
==============
LuaShared_RegisterUnlockFunctions
==============
*/

void __fastcall LuaShared_RegisterUnlockFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterUnlockFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_IsUnlocked
==============
*/
__int64 LuaShared_LuaCall_IsUnlocked(lua_State *const luaVM)
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
LuaShared_RegisterUnlockFunctions
==============
*/
void LuaShared_RegisterUnlockFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Unlocks", s_unlockFunctions);
  j_lua_settop(luaVM, -2);
}

