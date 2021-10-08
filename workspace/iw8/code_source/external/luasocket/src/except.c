/*
==============
global_protect
==============
*/
__int64 global_protect(lua_State *L)
{
  j_lua_settop(L, 1);
  j_lua_pushvalue(L, -10003);
  j_lua_insert(L, 1);
  j_lua_pushcclosure(L, protected_, 2);
  return 1i64;
}

/*
==============
global_newtry
==============
*/
__int64 global_newtry(lua_State *L)
{
  j_lua_settop(L, 1);
  if ( !j_lua_type(L, 1) )
    j_lua_pushcclosure(L, do_nothing, 0);
  j_lua_pushvalue(L, -10003);
  j_lua_insert(L, -2);
  j_lua_pushcclosure(L, finalize, 2);
  return 1i64;
}

/*
==============
do_nothing
==============
*/
__int64 do_nothing(lua_State *L)
{
  return 0i64;
}

/*
==============
except_open
==============
*/
__int64 except_open(lua_State *L)
{
  j_lua_createtable(L, 0, 0);
  j_lua_pushboolean(L, 0);
  j_lua_setfield(L, -2, "__metatable");
  j_luaL_setfuncs(L, func_0, 1);
  return 0i64;
}

/*
==============
protected_
==============
*/
int protected_(lua_State *L)
{
  int v2; 
  int v3; 

  j_lua_pushvalue(L, -10004);
  j_lua_insert(L, 1);
  v2 = j_lua_gettop(L);
  v3 = j_lua_pcall(L, v2 - 1, -1, 0);
  return protected_finish(L, v3, 0);
}

/*
==============
protected_finish
==============
*/
int protected_finish(lua_State *L, int status, int ctx)
{
  int v4; 

  if ( (unsigned int)status <= 1 )
    return j_lua_gettop(L);
  if ( j_lua_type(L, -1) != 5 || !j_lua_getmetatable(L, -1) || (v4 = j_lua_rawequal(L, -1, -10003), j_lua_settop(L, -2), !v4) )
    j_lua_error(L);
  j_lua_pushnil(L);
  j_lua_rawgeti(L, -2, 1);
  return 2;
}

