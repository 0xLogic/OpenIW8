/*
==============
luaopen_socket_core
==============
*/

int __fastcall luaopen_socket_core(lua_State *L)
{
  return luaopen_socket_core_0(L);
}

/*
==============
global_skip
==============
*/
__int64 global_skip(lua_State *L)
{
  int v2; 
  int v3; 
  __int64 result; 
  int v5; 

  v2 = j_luaL_checkinteger(L, 1);
  v3 = j_lua_gettop(L);
  result = 0i64;
  v5 = v3 - v2 - 1;
  if ( v5 >= 0 )
    return (unsigned int)v5;
  return result;
}

/*
==============
global_unload
==============
*/
__int64 global_unload(lua_State *L)
{
  j_socket_close();
  return 0i64;
}

