/*
==============
luaL_openlibs
==============
*/
void luaL_openlibs(lua_State *L)
{
  const luaL_Reg *v2; 
  int (__fastcall *func)(lua_State *); 

  v2 = lj_lib_load;
  func = j_luaopen_base;
  do
  {
    j_lua_pushcclosure(L, func, 0);
    j_lua_pushstring(L, v2->name);
    j_lua_call(L, 1, 0);
    func = v2[1].func;
    ++v2;
  }
  while ( func );
  j_luaL_findtable(L, -10000, "_PRELOAD", 0);
  j_lua_settop(L, -2);
}

