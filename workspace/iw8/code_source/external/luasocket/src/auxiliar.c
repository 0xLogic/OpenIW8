/*
==============
auxiliar_add2group
==============
*/
void auxiliar_add2group(lua_State *L, const char *classname, const char *groupname)
{
  j_lua_getfield(L, -10000, classname);
  j_lua_pushstring(L, groupname);
  j_lua_pushboolean(L, 1);
  j_lua_rawset(L, -3);
  j_lua_settop(L, -2);
}

/*
==============
auxiliar_checkboolean
==============
*/
int auxiliar_checkboolean(lua_State *L, int objidx)
{
  const char *v4; 
  int v5; 
  const char *v6; 
  const char *v7; 

  if ( j_lua_type(L, objidx) != 1 )
  {
    v4 = j_lua_typename(L, 1);
    v5 = j_lua_type(L, objidx);
    v6 = j_lua_typename(L, v5);
    v7 = j_lua_pushfstring(L, "%s expected, got %s", v4, v6);
    j_luaL_argerror(L, objidx, v7);
  }
  return j_lua_toboolean(L, objidx);
}

/*
==============
auxiliar_checkclass
==============
*/
void *auxiliar_checkclass(lua_State *L, const char *classname, int objidx)
{
  void *result; 
  char _Buffer[48]; 

  result = j_luaL_checkudata(L, objidx, classname);
  if ( !result )
  {
    j_sprintf(_Buffer, "%.35s expected", classname);
    j_luaL_argerror(L, objidx, _Buffer);
  }
  return result;
}

/*
==============
auxiliar_checkgroup
==============
*/
void *auxiliar_checkgroup(lua_State *L, const char *groupname, int objidx)
{
  int v6; 
  void *result; 
  char _Buffer[48]; 

  if ( !j_lua_getmetatable(L, objidx) || (j_lua_pushstring(L, groupname), j_lua_rawget(L, -2), v6 = j_lua_type(L, -1), j_lua_settop(L, -3), !v6) || (result = j_lua_touserdata(L, objidx)) == NULL )
  {
    j_sprintf(_Buffer, "%.35s expected", groupname);
    j_luaL_argerror(L, objidx, _Buffer);
  }
  return result;
}

/*
==============
auxiliar_getclassudata
==============
*/
void *auxiliar_getclassudata(lua_State *L, const char *classname, int objidx)
{
  return j_luaL_checkudata(L, objidx, classname);
}

/*
==============
auxiliar_getgroupudata
==============
*/
void *auxiliar_getgroupudata(lua_State *L, const char *groupname, int objidx)
{
  int v6; 

  if ( j_lua_getmetatable(L, objidx) && (j_lua_pushstring(L, groupname), j_lua_rawget(L, -2), v6 = j_lua_type(L, -1), j_lua_settop(L, -3), v6) )
    return j_lua_touserdata(L, objidx);
  else
    return 0i64;
}

/*
==============
auxiliar_newclass
==============
*/
void auxiliar_newclass(lua_State *L, const char *classname, luaL_Reg *func)
{
  const char *i; 
  int v7; 

  j_luaL_newmetatable(L, classname);
  j_lua_pushstring(L, "__index");
  j_lua_createtable(L, 0, 0);
  j_lua_pushstring(L, "class");
  j_lua_pushstring(L, classname);
  j_lua_rawset(L, -3);
  for ( i = func->name; i; ++func )
  {
    j_lua_pushstring(L, i);
    j_lua_pushcclosure(L, func->func, 0);
    v7 = -3;
    if ( *func->name == 95 )
      v7 = -5;
    j_lua_rawset(L, v7);
    i = func[1].name;
  }
  j_lua_rawset(L, -3);
  j_lua_settop(L, -2);
}

/*
==============
auxiliar_open
==============
*/
__int64 auxiliar_open(lua_State *L)
{
  return 0i64;
}

/*
==============
auxiliar_setclass
==============
*/
void auxiliar_setclass(lua_State *L, const char *classname, int objidx)
{
  int v5; 

  j_lua_getfield(L, -10000, classname);
  v5 = objidx - 1;
  if ( objidx >= 0 )
    v5 = objidx;
  j_lua_setmetatable(L, v5);
}

/*
==============
auxiliar_tostring
==============
*/
__int64 auxiliar_tostring(lua_State *L)
{
  void *v2; 
  const char *v3; 
  char _Buffer[32]; 

  if ( !j_lua_getmetatable(L, 1) || (j_lua_pushstring(L, "__index"), j_lua_gettable(L, -2), j_lua_type(L, -1) != 5) || (j_lua_pushstring(L, "class"), j_lua_gettable(L, -2), !j_lua_isstring(L, -1)) )
  {
    j_lua_pushstring(L, "invalid object passed to 'auxiliar.c:__tostring'");
    j_lua_error(L);
  }
  v2 = j_lua_touserdata(L, 1);
  j_sprintf(_Buffer, "%p", v2);
  v3 = j_lua_tolstring(L, -1, NULL);
  j_lua_pushfstring(L, "%s: %s", v3, _Buffer);
  return 1i64;
}

/*
==============
auxiliar_typeerror
==============
*/
void __noreturn auxiliar_typeerror(lua_State *L, int narg, const char *tname)
{
  int v6; 
  const char *v7; 
  const char *v8; 

  v6 = j_lua_type(L, narg);
  v7 = j_lua_typename(L, v6);
  v8 = j_lua_pushfstring(L, "%s expected, got %s", tname, v7);
  j_luaL_argerror(L, narg, v8);
}

