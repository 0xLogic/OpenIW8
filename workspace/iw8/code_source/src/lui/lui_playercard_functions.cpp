/*
==============
LUI_CoD_RegisterPlayercardFunctions
==============
*/

void __fastcall LUI_CoD_RegisterPlayercardFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterPlayercardFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterPlayercardFunctions
==============
*/
void LUI_CoD_RegisterPlayercardFunctions(lua_State *luaVM)
{
  int v2; 
  LUIMethod<LUIPlayercardPackage> *v3; 
  int i; 

  j_lua_getfield(luaVM, -10002, "Playercard");
  if ( !j_lua_type(luaVM, -1) )
  {
    j_lua_settop(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    j_lua_setfield(luaVM, -10002, "Playercard");
    j_lua_getfield(luaVM, -10002, "Playercard");
  }
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 193, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  v2 = j_lua_gettop(luaVM);
  v3 = LUIMethod<LUIPlayercardPackage>::list;
  for ( i = v2; v3; v3 = v3->next )
  {
    j_lua_pushstring(luaVM, v3->name);
    j_lua_pushcclosure(luaVM, v3->func, 0);
    j_lua_settable(luaVM, i);
  }
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LuaCall_LUIPlayercardPackage_BeginEdit
==============
*/
__int64 LUI_LuaCall_LUIPlayercardPackage_BeginEdit(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Playercard.BeginEdit( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  PlayercardCache_LoadPlayercard_ForEdit(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIPlayercardPackage_SaveChanges
==============
*/
__int64 LUI_LuaCall_LUIPlayercardPackage_SaveChanges(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Playercard.SaveChanges( <controller> )\n");
  v2 = lui_tointeger32(luaVM, 1);
  PlayercardCache_RequestUpload(v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIPlayercardPackage_SetBackground
==============
*/
__int64 LUI_LuaCall_LUIPlayercardPackage_SetBackground(lua_State *luaVM)
{
  __int64 CacheLocation; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Playercard.SetBackground( <controllerIndex>, <backgroundIndex> )\n");
  CacheLocation = PlayerCardData_GetCacheLocation();
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  PlayercardCache_GetPlayercard_ForEdit()->customization_background[CacheLocation] = v4;
  CL_PlayerData_SetCustomizationBackground(v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIPlayercardPackage_SetEmblem
==============
*/
__int64 LUI_LuaCall_LUIPlayercardPackage_SetEmblem(lua_State *luaVM)
{
  __int64 CacheLocation; 
  int v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Playercard.SetEmblem( <controllerIndex>, <patchIndex> )\n");
  CacheLocation = PlayerCardData_GetCacheLocation();
  v3 = lui_tointeger32(luaVM, 1);
  v4 = lui_tointeger32(luaVM, 2);
  PlayercardCache_GetPlayercard_ForEdit()->customization_patch[CacheLocation] = v4;
  CL_PlayerData_SetCustomizationPatch(v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

