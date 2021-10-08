/*
==============
luaopen_package
==============
*/
__int64 luaopen_package(lua_State *L)
{
  __int64 v2; 
  int (__fastcall *v3)(lua_State *); 
  int v4; 
  DWORD ModuleFileNameA; 
  char *v6; 
  const char *v7; 
  DWORD v8; 
  char *v9; 
  const char *v10; 
  char Filename[272]; 

  j_luaL_newmetatable(L, "_LOADLIB");
  j_lj_lib_pushcc(L, lj_cf_package_unloadlib, 1, 0);
  j_lua_setfield(L, -2, "__gc");
  j_luaL_register(L, "package", package_lib);
  j_lua_copy(L, -1, -10001);
  j_lua_createtable(L, 1, 0);
  v2 = 0i64;
  v3 = lj_cf_package_loader_preload;
  v4 = 1;
  do
  {
    j_lj_lib_pushcc(L, v3, 1, 0);
    j_lua_rawseti(L, -2, v4);
    v3 = package_loaders[++v2];
    ++v4;
  }
  while ( v3 );
  j_lua_setfield(L, -2, "loaders");
  j_lua_getfield(L, -10000, "LUA_NOENV");
  j_lua_toboolean(L, -1);
  j_lua_settop(L, -2);
  j_lua_pushstring(L, ".\\?.lua;!\\lua\\?.lua;!\\lua\\?\\init.lua;");
  ModuleFileNameA = GetModuleFileNameA(NULL, Filename, 0x105u);
  if ( !ModuleFileNameA || ModuleFileNameA == 261 || (v6 = strrchr_0(Filename, 92)) == NULL )
    j_luaL_error(L, "unable to get ModuleFileName");
  *v6 = 0;
  v7 = j_lua_tolstring(L, -1, NULL);
  j_luaL_gsub(L, v7, "!", Filename);
  j_lua_remove(L, -2);
  j_lua_setfield(L, -2, "path");
  j_lua_pushstring(L, ".\\?.dll;!\\?.dll;!\\loadall.dll");
  v8 = GetModuleFileNameA(NULL, Filename, 0x105u);
  if ( !v8 || v8 == 261 || (v9 = strrchr_0(Filename, 92)) == NULL )
    j_luaL_error(L, "unable to get ModuleFileName");
  *v9 = 0;
  v10 = j_lua_tolstring(L, -1, NULL);
  j_luaL_gsub(L, v10, "!", Filename);
  j_lua_remove(L, -2);
  j_lua_setfield(L, -2, "cpath");
  j_lua_pushlstring(L, "\\\n;\n?\n!\n-\n", 0xAui64);
  j_lua_setfield(L, -2, "config");
  j_luaL_findtable(L, -10000, "_LOADED", 16);
  j_lua_setfield(L, -2, "loaded");
  j_luaL_findtable(L, -10000, "_PRELOAD", 4);
  j_lua_setfield(L, -2, "preload");
  j_lua_pushvalue(L, -10002);
  j_luaL_register(L, NULL, package_global);
  j_lua_settop(L, -2);
  return 1i64;
}

/*
==============
ll_bcsym
==============
*/
const char *ll_bcsym(void *lib, const char *sym)
{
  FARPROC ProcAddress; 
  HMODULE phModule; 

  if ( lib )
    return (const char *)GetProcAddress((HMODULE)lib, sym);
  phModule = GetModuleHandleA(NULL);
  ProcAddress = GetProcAddress(phModule, sym);
  if ( !ProcAddress )
  {
    if ( GetModuleHandleExA(6u, (LPCSTR)ll_bcsym, &phModule) )
      return (const char *)GetProcAddress(phModule, sym);
  }
  return (const char *)ProcAddress;
}

/*
==============
lj_cf_package_loadlib
==============
*/
__int64 lj_cf_package_loadlib(lua_State *L)
{
  const char *v2; 
  const char *v3; 
  int v4; 
  const char *v6; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  v3 = j_luaL_checklstring(L, 2, NULL);
  v4 = ll_loadfunc(L, v2, v3, 1);
  if ( !v4 )
    return 1i64;
  j_lua_pushnil(L);
  j_lua_insert(L, -2);
  v6 = "init";
  if ( v4 == 1 )
    v6 = "open";
  j_lua_pushstring(L, v6);
  return 3i64;
}

/*
==============
lj_cf_package_unloadlib
==============
*/
__int64 lj_cf_package_unloadlib(lua_State *L)
{
  HMODULE *v1; 
  HMODULE *v2; 
  __int64 result; 

  v1 = (HMODULE *)j_luaL_checkudata(L, 1, "_LOADLIB");
  v2 = v1;
  if ( *v1 )
  {
    FreeLibrary(*v1);
    result = 0i64;
    *v2 = NULL;
  }
  else
  {
    *v1 = NULL;
    return 0i64;
  }
  return result;
}

/*
==============
lj_cf_package_searchpath
==============
*/
__int64 lj_cf_package_searchpath(lua_State *L)
{
  const char *v2; 
  const char *v3; 
  char *v4; 
  const char *v5; 
  char v6; 
  char *i; 
  __int64 v8; 
  const char *v9; 
  const char *v10; 
  FILE *v11; 
  luaL_Buffer v13; 

  v2 = j_luaL_optlstring(L, 4, "\\", NULL);
  v3 = j_luaL_optlstring(L, 3, ".", NULL);
  v4 = (char *)j_luaL_checklstring(L, 2, NULL);
  v5 = j_luaL_checklstring(L, 1, NULL);
  j_luaL_buffinit(L, &v13);
  if ( *v3 )
    v5 = j_luaL_gsub(L, v5, v3, v2);
  while ( 1 )
  {
    v6 = *v4;
    for ( i = v4; v6 == 59; ++i )
      v6 = i[1];
    if ( !v6 )
      goto LABEL_15;
    v4 = strchr_0(i, 59);
    if ( !v4 )
    {
      v8 = -1i64;
      do
        ++v8;
      while ( i[v8] );
      v4 = &i[v8];
    }
    j_lua_pushlstring(L, i, v4 - i);
    if ( !v4 )
    {
LABEL_15:
      j_luaL_pushresult(&v13);
      goto LABEL_16;
    }
    v9 = j_lua_tolstring(L, -1, NULL);
    v10 = j_luaL_gsub(L, v9, "?", v5);
    j_lua_remove(L, -2);
    v11 = fopen(v10, "r");
    if ( v11 )
      break;
    j_lua_pushfstring(L, "\n\tno file '%s'", v10);
    j_lua_remove(L, -2);
    j_luaL_addvalue(&v13);
  }
  fclose(v11);
  if ( v10 )
    return 1i64;
LABEL_16:
  j_lua_pushnil(L);
  j_lua_insert(L, -2);
  return 2i64;
}

/*
==============
lj_cf_package_loader_preload
==============
*/
__int64 lj_cf_package_loader_preload(lua_State *L)
{
  const char *v2; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  j_lua_getfield(L, -10001, "preload");
  if ( j_lua_type(L, -1) != 5 )
    j_luaL_error(L, "'package.preload' must be a table");
  j_lua_getfield(L, -1, v2);
  return 1i64;
}

/*
==============
lj_cf_package_require
==============
*/
__int64 lj_cf_package_require(lua_State *L)
{
  const char *v2; 
  int i; 
  const char *v4; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  j_lua_settop(L, 1);
  j_lua_getfield(L, -10000, "_LOADED");
  j_lua_getfield(L, 2, v2);
  if ( j_lua_toboolean(L, -1) )
  {
    if ( j_lua_touserdata(L, -1) == (void *)16388 )
      j_luaL_error(L, "loop or previous error loading module '%s'", v2);
  }
  else
  {
    j_lua_getfield(L, -10001, "loaders");
    if ( j_lua_type(L, -1) != 5 )
      j_luaL_error(L, "'package.loaders' must be a table");
    j_lua_pushlstring(L, (const char *)&queryFormat.fmt + 3, 0i64);
    for ( i = 1; ; ++i )
    {
      j_lua_rawgeti(L, -2, i);
      if ( !j_lua_type(L, -1) )
      {
        v4 = j_lua_tolstring(L, -2, NULL);
        j_luaL_error(L, "module '%s' not found: %s", v2, v4);
      }
      j_lua_pushstring(L, v2);
      j_lua_call(L, 1, 1);
      if ( j_lua_type(L, -1) == 6 )
        break;
      if ( j_lua_isstring(L, -1) )
        j_lua_concat(L, 2);
      else
        j_lua_settop(L, -2);
    }
    j_lua_pushlightuserdata(L, (void *)0x4004);
    j_lua_setfield(L, 2, v2);
    j_lua_pushstring(L, v2);
    j_lua_call(L, 1, 1);
    if ( j_lua_type(L, -1) )
      j_lua_setfield(L, 2, v2);
    j_lua_getfield(L, 2, v2);
    if ( j_lua_touserdata(L, -1) == (void *)16388 )
    {
      j_lua_pushboolean(L, 1);
      j_lua_pushvalue(L, -1);
      j_lua_setfield(L, 2, v2);
    }
    L->top->u64 = 0x41D56A8CDDC00000i64;
    ++L->top;
    if ( j_lua_tointeger(L, -1) != 1437217655 )
      j_lj_err_caller(L, LJ_ERR_BADFPU);
    --L->top;
  }
  return 1i64;
}

/*
==============
lj_cf_package_module
==============
*/
__int64 lj_cf_package_module(lua_State *L)
{
  const char *v2; 
  signed __int64 v3; 
  const char *v4; 
  int v5; 
  char *v6; 
  const char *v7; 
  int i; 
  lua_Debug ar; 

  v2 = j_luaL_checklstring(L, 1, NULL);
  v3 = L->top - L->base;
  v4 = v2;
  j_luaL_pushmodule(L, v2, 1);
  j_lua_getfield(L, -1, "_NAME");
  v5 = j_lua_type(L, -1);
  j_lua_settop(L, -2);
  if ( !v5 )
  {
    j_lua_pushvalue(L, -1);
    j_lua_setfield(L, -2, "_M");
    j_lua_pushstring(L, v4);
    j_lua_setfield(L, -2, "_NAME");
    v6 = strrchr_0(v4, 46);
    if ( v6 )
      v7 = v6 + 1;
    else
      v7 = v4;
    j_lua_pushlstring(L, v4, v7 - v4);
    j_lua_setfield(L, -2, "_PACKAGE");
  }
  j_lua_pushvalue(L, -1);
  if ( !j_lua_getstack(L, 1, &ar) || !j_lua_getinfo(L, "f", &ar) || j_lua_iscfunction(L, -1) )
    j_luaL_error(L, "'module' not called from a Lua function");
  j_lua_pushvalue(L, -2);
  j_lua_setfenv(L, -2);
  j_lua_settop(L, -2);
  for ( i = 2; i <= (int)v3; ++i )
  {
    j_lua_pushvalue(L, i);
    j_lua_pushvalue(L, -2);
    j_lua_call(L, 1, 0);
  }
  return 0i64;
}

/*
==============
lj_cf_package_seeall
==============
*/
__int64 lj_cf_package_seeall(lua_State *L)
{
  j_luaL_checktype(L, 1, 5);
  if ( !j_lua_getmetatable(L, 1) )
  {
    j_lua_createtable(L, 0, 1);
    j_lua_pushvalue(L, -1);
    j_lua_setmetatable(L, 1);
  }
  j_lua_pushvalue(L, -10002);
  j_lua_setfield(L, -2, "__index");
  return 0i64;
}

/*
==============
ll_loadfunc
==============
*/
__int64 ll_loadfunc(lua_State *L, const char *path, const char *name, int r)
{
  void **v8; 
  HMODULE Library; 
  const char *v11; 
  int (__fastcall *ProcAddress)(lua_State *); 
  const char *v13; 
  const char *v14; 

  j_lua_pushfstring(L, "LOADLIB: %s", path);
  j_lua_gettable(L, -10000);
  if ( j_lua_type(L, -1) )
  {
    v8 = (void **)j_lua_touserdata(L, -1);
  }
  else
  {
    j_lua_settop(L, -2);
    v8 = (void **)j_lua_newuserdata(L, 8ui64);
    *v8 = NULL;
    j_luaL_setmetatable(L, "_LOADLIB");
    j_lua_pushfstring(L, "LOADLIB: %s", path);
    j_lua_pushvalue(L, -2);
    j_lua_settable(L, -10000);
  }
  Library = (HMODULE)*v8;
  if ( !*v8 )
  {
    Library = LoadLibraryExA(path, NULL, 0);
    if ( !Library )
      pusherror(L);
    *v8 = Library;
    if ( !Library )
      return 1i64;
  }
  if ( *name == 42 )
  {
    j_lua_pushboolean(L, 1);
    return 0i64;
  }
  if ( r )
  {
    v11 = name;
  }
  else
  {
    v11 = mksymname(L, name, "luaopen_%s");
    Library = (HMODULE)*v8;
  }
  ProcAddress = (int (__fastcall *)(lua_State *))GetProcAddress(Library, v11);
  if ( ProcAddress )
  {
    j_lua_pushcclosure(L, ProcAddress, 0);
    return 0i64;
  }
  pusherror(L);
  if ( r )
    return 2i64;
  v13 = mksymname(L, name, "luaJIT_BC_%s");
  v14 = ll_bcsym(*v8, v13);
  j_lua_settop(L, -2);
  if ( !v14 )
    return 2i64;
  else
    return j_luaL_loadbuffer(L, v14, 0x7FFFFF00ui64, name) != 0 ? 3 : 0;
}

/*
==============
mksymname
==============
*/
const char *mksymname(lua_State *L, const char *modname, const char *prefix)
{
  const char *v3; 
  char *v6; 
  const char *v7; 
  const char *v8; 

  v3 = modname;
  v6 = strchr_0(modname, 45);
  if ( v6 )
    v3 = v6 + 1;
  v7 = j_luaL_gsub(L, v3, ".", "_");
  v8 = j_lua_pushfstring(L, prefix, v7);
  j_lua_remove(L, -2);
  return v8;
}

/*
==============
pusherror
==============
*/
void pusherror(lua_State *L)
{
  DWORD LastError; 
  wchar_t Buffer[128]; 
  char MultiByteStr[256]; 

  LastError = GetLastError();
  if ( FormatMessageW(0x1200u, NULL, LastError, 0, Buffer, 0x80u, NULL) && WideCharToMultiByte(0, 0, Buffer, 128, MultiByteStr, 256, NULL, NULL) )
    j_lua_pushstring(L, MultiByteStr);
  else
    j_lua_pushfstring(L, "system error %d\n", LastError);
}

