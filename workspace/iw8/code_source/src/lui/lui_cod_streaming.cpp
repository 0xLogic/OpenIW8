/*
==============
LUI_CoD_RegisterStreamingFunctions
==============
*/

void __fastcall LUI_CoD_RegisterStreamingFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterStreamingFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_GetWeaponViewRequestLimit
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponViewRequestLimit(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int ActiveClients; 
  unsigned int MaxRequestCount; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "RequestWeaponWorldModels called with %d parameters, expects 0\n", v2);
  }
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "RequestWeaponWorldModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  ActiveClients = CL_UIStreaming_GetActiveClients();
  MaxRequestCount = CL_UIStreaming_GetMaxRequestCount(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, ActiveClients);
  j_lua_pushinteger(luaVM, MaxRequestCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_RequestWeaponViewModels
==============
*/
__int64 LUI_CoD_LuaCall_RequestWeaponViewModels(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 
  unsigned int v5; 
  char *requestNames[24]; 

  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Streaming.RequestWeaponViewModels( { \"iw7_ar57_mp\", \"iw7_crb_mp\" }, controllerIndex );");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    if ( !CL_UIStreaming_ScriptRequestsEnabled() )
      j_luaL_error(luaVM, "RequestWeaponViewModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
    v4 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x18u);
    CL_UIStreaming_RequestWeaponViewModels(ClientFromController, (const char **)requestNames, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestWeaponWorldModels
==============
*/
__int64 LUI_CoD_LuaCall_RequestWeaponWorldModels(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  char *requestNames[64]; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "RequestWeaponWorldModels expects a list of weapons\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "RequestWeaponWorldModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x40u);
  CL_UIStreaming_RequestWeaponWorldModels((const char **)requestNames, v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestBodyModels
==============
*/
__int64 LUI_CoD_LuaCall_RequestBodyModels(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  char *requestNames[48]; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "RequestBodyModels expects a list of bodies\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "RequestBodyModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x30u);
  CL_UIStreaming_RequestBodyModels((const char **)requestNames, v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestHeadModels
==============
*/
__int64 LUI_CoD_LuaCall_RequestHeadModels(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  char *requestNames[48]; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 5 )
    j_luaL_error(luaVM, "RequestHeadModels expects a list of heads\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "RequestHeadModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x30u);
  CL_UIStreaming_RequestHeadModels((const char **)requestNames, v2);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RequestHandViewModels
==============
*/
__int64 LUI_CoD_LuaCall_RequestHandViewModels(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 
  unsigned int v5; 
  char *requestNames[48]; 

  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Streaming.RequestHandViewModels( { \"mp_eastern_vm_arms_bale_2_1\", \"mp_eastern_vm_arms_bale_2_2\" }, controllerIndex );");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    if ( !CL_UIStreaming_ScriptRequestsEnabled() )
      j_luaL_error(luaVM, "RequestHandViewModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
    v4 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x30u);
    CL_UIStreaming_RequestHandViewModels(ClientFromController, (const char **)requestNames, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_HasWeaponViewModels
==============
*/
__int64 LUI_CoD_LuaCall_HasWeaponViewModels(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  char *requestNames[24]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Streaming.HasWeaponViewModels( { \"iw7_ar57_mp\", \"iw7_crb_mp\" }, controllerIndex );");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    if ( !CL_UIStreaming_ScriptRequestsEnabled() )
      j_luaL_error(luaVM, "HasWeaponViewModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
    if ( j_lua_type(luaVM, 1) == 5 )
    {
      v5 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x18u);
    }
    else
    {
      requestNames[0] = (char *)j_lua_tolstring(luaVM, 1, NULL);
      v5 = 1;
    }
    v6 = CL_UIStreaming_AreWeaponViewModelsLoaded(ClientFromController, (const char **)requestNames, v5);
    j_lua_pushboolean(luaVM, v6);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_HasWeaponWorldModels
==============
*/
__int64 LUI_CoD_LuaCall_HasWeaponWorldModels(lua_State *luaVM)
{
  unsigned int v2; 
  bool v3; 
  unsigned int v4; 
  char *requestNames[64]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "HasWeaponWorldModels expects a weapon name or a list of weapons\n");
  if ( j_lua_type(luaVM, 1) != 5 && !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "HasWeaponWorldModels expects a weapon name or a list of weapons\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "HasWeaponWorldModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  if ( j_lua_type(luaVM, 1) == 5 )
  {
    v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x40u);
  }
  else
  {
    requestNames[0] = (char *)j_lua_tolstring(luaVM, 1, NULL);
    v2 = 1;
  }
  v3 = CL_UIStreaming_AreWeaponWorldModelsLoaded((const char **)requestNames, v2);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasBodyModels
==============
*/
__int64 LUI_CoD_LuaCall_HasBodyModels(lua_State *luaVM)
{
  unsigned int v2; 
  bool v3; 
  unsigned int v4; 
  char *requestNames[48]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "HasBodyModels expects a body model name or a list of body models\n");
  if ( j_lua_type(luaVM, 1) != 5 && !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "HasBodyModels expects a body model name or a list of body models\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "HasBodyModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  if ( j_lua_type(luaVM, 1) == 5 )
  {
    v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x30u);
  }
  else
  {
    requestNames[0] = (char *)j_lua_tolstring(luaVM, 1, NULL);
    v2 = 1;
  }
  v3 = CL_UIStreaming_AreBodyModelsLoaded((const char **)requestNames, v2);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasHeadModels
==============
*/
__int64 LUI_CoD_LuaCall_HasHeadModels(lua_State *luaVM)
{
  unsigned int v2; 
  bool v3; 
  unsigned int v4; 
  char *requestNames[48]; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "HasHeadModels expects a head model name or a list of head models\n");
  if ( j_lua_type(luaVM, 1) != 5 && !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "HasHeadModels expects a head model name or a list of head models\n");
  if ( !CL_UIStreaming_ScriptRequestsEnabled() )
    j_luaL_error(luaVM, "HasHeadModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
  if ( j_lua_type(luaVM, 1) == 5 )
  {
    v2 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x30u);
  }
  else
  {
    requestNames[0] = (char *)j_lua_tolstring(luaVM, 1, NULL);
    v2 = 1;
  }
  v3 = CL_UIStreaming_AreHeadModelsLoaded((const char **)requestNames, v2);
  j_lua_pushboolean(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_HasHandViewModels
==============
*/
__int64 LUI_CoD_LuaCall_HasHandViewModels(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 
  bool v6; 
  unsigned int v7; 
  char *requestNames[20]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || j_lua_type(luaVM, 1) != 5 || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Streaming.HasHandViewModels( { \"mp_eastern_vm_arms_bale_2_1\", \"mp_eastern_vm_arms_bale_2_2\" }, controllerIndex );");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_type(luaVM, 1) == 5 && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v3);
    if ( !CL_UIStreaming_ScriptRequestsEnabled() )
      j_luaL_error(luaVM, "HasHandViewModels expects script streaming to be enabled through Streaming.SetStreamingEnabled\n");
    v5 = LUI_CoD_GatherRequestNames(luaVM, (const char **)requestNames, 0x14u);
    v6 = CL_UIStreaming_AreHandViewModelsLoaded(ClientFromController, (const char **)requestNames, v5);
    j_lua_pushboolean(luaVM, v6);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetStreamingEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetStreamingEnabled(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, 1) != 1 )
    j_luaL_error(luaVM, "SetStreamingEnabled expects a boolean to enable or disable the lua streaming requests\n");
  v2 = j_lua_toboolean(luaVM, 1);
  CL_UIStreaming_EnableScriptRequests(v2 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_TouchXModel
==============
*/
__int64 LUI_CoD_LuaCall_TouchXModel(lua_State *luaVM)
{
  const char *v2; 
  XAssetHeader v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "TouchXModel expects a string xmodel name\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v2, 0).physicsLibrary;
  if ( v3.physicsLibrary )
    Stream_TouchXModel(v3.model, MIP3, MIP0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetStreamingEnabled
==============
*/
__int64 LUI_CoD_LuaCall_GetStreamingEnabled(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = CL_UIStreaming_ScriptRequestsEnabled();
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
LUI_CoD_LuaCall_AddStreamedImages
==============
*/
__int64 LUI_CoD_LuaCall_AddStreamedImages(lua_State *luaVM)
{
  const GfxImage *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, -1) != 5 )
    j_luaL_error(luaVM, "AddStreamedImages expects a table\n");
  j_lua_pushnil(luaVM);
  while ( j_lua_next(luaVM, -2) )
  {
    if ( j_lua_type(luaVM, -1) != 2 )
      j_luaL_error(luaVM, "AddStreamedImages expects Material (lightuserdata) values in the given table\n");
    v2 = (const GfxImage *)j_lua_touserdata(luaVM, -1);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_streaming.cpp", 532, ASSERT_TYPE_ASSERT, "(( material != 0 ))", (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )") )
      __debugbreak();
    CL_UIStreaming_AddImage(v2);
    j_lua_settop(luaVM, -2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_RemoveStreamedImages
==============
*/
__int64 LUI_CoD_LuaCall_RemoveStreamedImages(lua_State *luaVM)
{
  const GfxImage *v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || j_lua_type(luaVM, -1) != 5 )
    j_luaL_error(luaVM, "RemoveStreamedImages expects a table\n");
  j_lua_pushnil(luaVM);
  while ( j_lua_next(luaVM, -2) )
  {
    if ( j_lua_type(luaVM, -1) != 2 )
      j_luaL_error(luaVM, "RemoveStreamedImages expects Material (lightuserdata) values in the given table\n");
    v2 = (const GfxImage *)j_lua_touserdata(luaVM, -1);
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_streaming.cpp", 561, ASSERT_TYPE_ASSERT, "(( material != 0 ))", (const char *)&queryFormat, "LUI_MATERIAL_VALID( material )") )
      __debugbreak();
    CL_UIStreaming_RemoveImage(v2);
    j_lua_settop(luaVM, -2);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v3);
  }
  return 0i64;
}

/*
==============
LUI_CoD_GatherRequestNames
==============
*/
__int64 LUI_CoD_GatherRequestNames(lua_State *luaVM, const char **requestNames, const unsigned int requestNamesCount)
{
  unsigned int i; 
  const char *v7; 
  __int64 v8; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_streaming.cpp", 58, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  if ( !requestNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_streaming.cpp", 59, ASSERT_TYPE_ASSERT, "(requestNames)", (const char *)&queryFormat, "requestNames") )
    __debugbreak();
  for ( i = 0; ; ++i )
  {
    j_lua_pushinteger(luaVM, i + 1);
    j_lua_gettable(luaVM, 1);
    if ( !j_lua_isstring(luaVM, -1) && j_lua_type(luaVM, -1) )
      j_luaL_error(luaVM, "Expected a list of names as strings. List item %d is not a string.\n", i + 1);
    if ( !j_lua_type(luaVM, -1) )
      break;
    v7 = j_lua_tolstring(luaVM, -1, NULL);
    if ( i >= requestNamesCount )
    {
      Com_PrintError(13, "Too many requests specified for streaming. %s will not be loaded\n", v7);
      return i;
    }
    v8 = i;
    requestNames[v8] = v7;
    j_lua_settop(luaVM, -2);
  }
  j_lua_settop(luaVM, -2);
  return i;
}

/*
==============
LUI_CoD_RegisterStreamingFunctions
==============
*/
void LUI_CoD_RegisterStreamingFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Streaming", Streaming_methods);
  j_lua_settop(luaVM, -2);
}

