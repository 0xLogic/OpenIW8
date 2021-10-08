/*
==============
LuaCoD_SetLuaLoader
==============
*/

void __fastcall LuaCoD_SetLuaLoader(lua_State *s)
{
  ?LuaCoD_SetLuaLoader@@YAXPEAUlua_State@@@Z(s);
}

/*
==============
luaL_loadfile_FastFile
==============
*/

int __fastcall luaL_loadfile_FastFile(lua_State *s, const char *filename)
{
  return ?luaL_loadfile_FastFile@@YAHPEAUlua_State@@PEBD@Z(s, filename);
}

/*
==============
LuaCoD_FFReader
==============
*/
const char *LuaCoD_FFReader(lua_State *L, void *ud, unsigned __int64 *size)
{
  unsigned __int64 v3; 

  if ( ud && (v3 = *((int *)ud + 2), (*size = v3) != 0) )
    return (const char *)*((_QWORD *)ud + 2);
  else
    return 0i64;
}

/*
==============
LuaCoD_SetLuaLoader
==============
*/
void LuaCoD_SetLuaLoader(lua_State *s)
{
  j_lua_getfield(s, -10002, "package");
  if ( j_lua_type(s, -1) != 5 )
    j_luaL_error(s, "package module not previously loaded!");
  j_lua_getfield(s, -1, "loaders");
  if ( j_lua_type(s, -1) != 5 )
    j_luaL_error(s, "loaders isn't a table...");
  j_lua_rawgeti(s, -1, 1);
  j_lua_rawseti(s, -2, 2);
  j_lua_pushcclosure(s, LuaCoD_VmLoader, 0);
  j_lua_rawseti(s, -2, 1);
  j_lua_settop(s, -3);
  j_lua_setloadfilef(s, luaL_loadfile_FastFile, NULL);
  if ( j_lua_gettop(s) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lua_integration\\lua_cod_support.cpp", 163, ASSERT_TYPE_ASSERT, "(lua_gettop( s ) == 0)", (const char *)&queryFormat, "lua_gettop( s ) == 0") )
      __debugbreak();
  }
}

/*
==============
LuaCoD_VmLoader
==============
*/
__int64 LuaCoD_VmLoader(lua_State *s)
{
  const char *v2; 
  __int64 v3; 
  char v4; 
  char *i; 
  char v7[64]; 
  char dest[64]; 

  v2 = j_luaL_checklstring(s, 1, NULL);
  if ( !strcmp_0(v2, "socket.core") )
    return 0i64;
  v3 = -1i64;
  do
    ++v3;
  while ( v2[v3] );
  memcpy_0(v7, v2, v3 + 1);
  v4 = v7[0];
  for ( i = v7; v4; ++i )
  {
    if ( v4 == 46 )
      *i = 47;
    v4 = i[1];
  }
  Com_sprintf(dest, 0x40ui64, "%s.lua", v7);
  if ( !DB_FindXAssetHeader(ASSET_TYPE_LUA_FILE, dest, 0).physicsLibrary )
    return 0i64;
  if ( j_luaL_loadfile(s, dest) )
  {
    j_lua_settop(s, -2);
    return 0i64;
  }
  return 1i64;
}

/*
==============
luaL_loadfile_FastFile
==============
*/
__int64 luaL_loadfile_FastFile(lua_State *s, const char *filename)
{
  const char *v4; 
  int v5; 
  XAssetHeader v6; 
  unsigned int v8; 

  v4 = j_lua_pushfstring(s, "@%s", filename);
  v5 = j_lua_gettop(s);
  v6.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_LUA_FILE, filename, 0).physicsLibrary;
  if ( v6.physicsLibrary )
  {
    v8 = j_lua_load(s, LuaCoD_FFReader, v6.data, v4);
    j_lua_remove(s, v5);
    return v8;
  }
  else
  {
    j_lua_pushfstring(s, "cannot read %s: file does not exist", filename);
    j_lua_remove(s, v5);
    return 6i64;
  }
}

