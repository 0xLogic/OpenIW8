/*
==============
LUI_CoD_RegisterClientCharacterFunctions
==============
*/

void __fastcall LUI_CoD_RegisterClientCharacterFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterClientCharacterFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_SetCharacterModels
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterModels(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  unsigned int v4; 
  const char **v5; 
  int v6; 
  const char *v7; 
  double v8; 
  LocalClientNum_t ClientFromController; 
  unsigned int v10; 
  LocalClientNum_t localClientNum; 
  int controllerIndex[3]; 
  const char *mem[8]; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 10 )
    j_luaL_error(luaVM, "SetCharacterModels expects a character id, and up to %i optional models", 8i64);
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterModels expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  DebugWipe(mem, 0x40ui64);
  v4 = 0;
  v5 = mem;
  v6 = 2;
  do
  {
    if ( !j_lua_isstring(luaVM, v6) )
      break;
    v7 = j_lua_tolstring(luaVM, v6, NULL);
    *v5 = v7;
    if ( !*v7 )
      j_luaL_error(luaVM, "Model name should not be empty");
    ++v6;
    ++v4;
    ++v5;
  }
  while ( (unsigned int)(v6 - 2) < 8 );
  if ( j_lua_isnumber(luaVM, 10) )
  {
    v8 = lui_tonumber32(luaVM, 10);
    controllerIndex[0] = (int)*(float *)&v8;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v8);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterModels(ClientFromController, v3, mem, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v10);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterWeapons
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterWeapons(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_SetCharacterWeapons_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterWeaponVisible
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterWeaponVisible(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  int v4; 
  bool v5; 
  double v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects a character id and boolean value, with an optional controller index.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects a boolean value for whether the character's held weapon should be visible");
  v4 = j_lua_toboolean(luaVM, 2);
  localClientNum = LOCAL_CLIENT_INVALID;
  v5 = v4 != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    v6 = lui_tonumber32(luaVM, 3);
    localClientNum = CL_Mgr_GetClientFromController((int)*(float *)&v6);
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  }
  if ( localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_character.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  CL_UICharacter_SetCharacterWeaponVisible(localClientNum, v3, v5);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterAkimbo
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterAkimbo(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  bool v4; 
  double v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "SetCharacterAkimbo expects a character id and boolean value for akimbo.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterAkimbo expects an integer character id");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetCharacterAkimbo expects a boolean value for akimbo");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    v5 = lui_tonumber32(luaVM, 3);
    controllerIndex = (int)*(float *)&v5;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v5);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterAkimbo(ClientFromController, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterOffset
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterOffset(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  LocalClientNum_t ClientFromController; 
  unsigned int v9; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t position; 

  if ( j_lua_gettop(luaVM) != 4 && j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, "SetCharacterOffset expects a character id and offset 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterOffset expects an integer character id");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetCharacterOffset expects a decimal x coordinate");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetCharacterOffset expects a decimal y coordinate");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetCharacterOffset expects a decimal z coordinate");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = lui_tonumber32(luaVM, 2);
  position.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  position.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  position.v[2] = *(float *)&v6;
  if ( j_lua_isnumber(luaVM, 5) )
  {
    v7 = lui_tonumber32(luaVM, 5);
    controllerIndex = (int)*(float *)&v7;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v7);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterOffset(ClientFromController, v3, &position);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterRotation
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterRotation(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  double v7; 
  LocalClientNum_t ClientFromController; 
  unsigned int v9; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t rotation; 

  if ( j_lua_gettop(luaVM) != 4 && j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, "SetCharacterRotation expects a character id and pitch, yaw, roll 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterRotation expects an integer character id");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetCharacterRotation expects a decimal pitch value");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetCharacterRotation expects a decimal yaw value");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetCharacterRotation expects a decimal roll value");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = lui_tonumber32(luaVM, 2);
  rotation.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  rotation.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  rotation.v[2] = *(float *)&v6;
  if ( j_lua_isnumber(luaVM, 5) )
  {
    v7 = lui_tonumber32(luaVM, 5);
    controllerIndex = (int)*(float *)&v7;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v7);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterRotation(ClientFromController, v3, &rotation);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v9);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterVisible
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterVisible(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  bool v4; 
  double v5; 
  LocalClientNum_t ClientFromController; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 && j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "SetCharacterVisible expects a character id and boolean value for setting visibility.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterVisible expects an integer character id");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetCharacterVisible expects a boolean value for visibility");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    v5 = lui_tonumber32(luaVM, 3);
    controllerIndex = (int)*(float *)&v5;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v5);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterVisible(ClientFromController, v3, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetCharacterLoaded
==============
*/
__int64 LUI_CoD_LuaCall_GetCharacterLoaded(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  LocalClientNum_t ClientFromController; 
  bool v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) && j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "GetCharacterLoaded expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_isnumber(luaVM, 2) )
  {
    v4 = lui_tonumber32(luaVM, 2);
    controllerIndex = (int)*(float *)&v4;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v4);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  v6 = CL_IsLocalClientConnectionActiveForAnyServer(ClientFromController) && CG_ClientCharacter_GetCharacterLoaded(localClientNum, v3);
  j_lua_pushboolean(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCharacterStreamed
==============
*/
__int64 LUI_CoD_LuaCall_GetCharacterStreamed(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  LocalClientNum_t ClientFromController; 
  bool v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) && j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "GetCharacterStreamed expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_isnumber(luaVM, 2) )
  {
    v4 = lui_tonumber32(luaVM, 2);
    controllerIndex = (int)*(float *)&v4;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v4);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  v6 = CL_IsLocalClientConnectionActiveForAnyServer(ClientFromController) && CG_ClientCharacter_GetCharacterStreamed(localClientNum, v3);
  j_lua_pushboolean(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetCharacterEntityNum
==============
*/
__int64 LUI_CoD_LuaCall_GetCharacterEntityNum(lua_State *luaVM)
{
  double v2; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetCharacterEntityNum expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UICharacter_GetEntityNum(localClientNum, (int)*(float *)&v2);
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, ecx; n }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlayCharacterAnim
==============
*/
__int64 LUI_CoD_LuaCall_PlayCharacterAnim(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_PlayCharacterAnim_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_QueueCharacterAnim
==============
*/
__int64 LUI_CoD_LuaCall_QueueCharacterAnim(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_QueueCharacterAnim_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_ClearCharacterAnimQueue
==============
*/
__int64 LUI_CoD_LuaCall_ClearCharacterAnimQueue(lua_State *luaVM)
{
  signed int v2; 
  double v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ClientCharacter.ClearCharacterAnimQueue( <index> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( v2 >= 20 )
      j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      v3 = lui_tonumber32(luaVM, 2);
      controllerIndex = (int)*(float *)&v3;
      ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v3);
      localClientNum = ClientFromController;
    }
    else
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      ClientFromController = localClientNum;
    }
    CL_UICharacter_ClearCharacterAnimQueue(ClientFromController, v2);
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
LUI_CoD_LuaCall_PlayCharacterFacialAnim
==============
*/
__int64 LUI_CoD_LuaCall_PlayCharacterFacialAnim(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_PlayCharacterFacialAnim_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetCurrentAnimName
==============
*/
__int64 LUI_CoD_LuaCall_GetCurrentAnimName(lua_State *luaVM)
{
  unsigned int v2; 
  signed int v3; 
  double v4; 
  LocalClientNum_t ClientFromController; 
  const char *CurrentAnimName; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ClientCharacter.GetCurrentAnimName( <index> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    if ( v3 >= 20 )
      j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      v4 = lui_tonumber32(luaVM, 2);
      controllerIndex = (int)*(float *)&v4;
      ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v4);
      localClientNum = ClientFromController;
    }
    else
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      ClientFromController = localClientNum;
    }
    CurrentAnimName = CL_UICharacter_GetCurrentAnimName(ClientFromController, v3);
    j_lua_pushstring(luaVM, CurrentAnimName);
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
LUI_CoD_LuaCall_IsUsingModel
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_IsUsingModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_IsUsingModel_impl
==============
*/
__int64 LUI_CoD_LuaCall_IsUsingModel_impl(lua_State *const luaVM)
{
  signed int v2; 
  const char *v3; 
  int v4; 
  signed int i; 
  __int64 v6; 
  const char *v7; 
  const char *CharacterModel; 
  signed __int64 v9; 
  char v10; 
  __int64 v11; 
  char v12; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: ClientCharacter.IsUsingModel( <index>, <model> )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  if ( v2 >= 20 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  v4 = 0;
  for ( i = 0; i < 8; ++i )
  {
    v6 = 0x7FFFFFFFi64;
    v7 = v3;
    CharacterModel = CL_UICharacter_GetCharacterModel(localClientNum, v2, i);
    if ( !CharacterModel && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v9 = CharacterModel - v3;
    while ( 1 )
    {
      v10 = v7[v9];
      v11 = v6;
      v12 = *v7++;
      --v6;
      if ( !v11 )
      {
LABEL_21:
        v4 = 1;
        goto LABEL_22;
      }
      if ( v10 != v12 )
        break;
      if ( !v10 )
        goto LABEL_21;
    }
  }
LABEL_22:
  j_lua_pushboolean(luaVM, v4);
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_PlayCharacterAnim_impl
==============
*/
__int64 LUI_CoD_LuaCall_PlayCharacterAnim_impl(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 5 )
    j_luaL_error(luaVM, "PlayCharacterAnim expects a character id and an animation name, with an optional animation blend time and optional start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "PlayCharacterAnim expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "PlayCharacterAnim requires a valid string for the animation name.");
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = v4;
  if ( !*v4 )
    j_luaL_error(luaVM, "PlayCharacterAnim requires a non-empty string name for the animation.");
  v6 = -1i64;
  do
    ++v6;
  while ( v4[v6] );
  if ( (unsigned int)v6 >= 0x40 )
    j_luaL_error(luaVM, "PlayCharacterAnim requires an anim name of less than %d characters.", 64i64);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isnumber(luaVM, 3) )
      j_luaL_error(luaVM, "PlayCharacterAnim blend time name must be a valid number.");
    v7 = lui_tonumber32(luaVM, 3);
    v8 = *(float *)&v7;
  }
  else
  {
    v8 = 0.0;
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "PlayCharacterAnim start time name must be a valid number.");
    v9 = lui_tonumber32(luaVM, 4);
    v10 = *(float *)&v9;
    if ( *(float *)&v9 < 0.0 || *(float *)&v9 > 1.0 )
      j_luaL_error(luaVM, "PlayCharacterAnim start time name must be a valid number between 0 and 1. Start time specified: %f", *(float *)&v9);
  }
  else
  {
    v10 = 0.0;
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    v11 = lui_tonumber32(luaVM, 5);
    controllerIndex = (int)*(float *)&v11;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v11);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_PlayCharacterAnim(ClientFromController, v3, v5, v8, v10);
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_PlayCharacterFacialAnim_impl
==============
*/
__int64 LUI_CoD_LuaCall_PlayCharacterFacialAnim_impl(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  double v7; 
  float v8; 
  double v9; 
  float v10; 
  double v11; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 5 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim expects a character id and an animation name, with an optional animation blend time and optional start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires a valid string for the animation name.");
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = v4;
  if ( !*v4 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires a non-empty string name for the animation.");
  v6 = -1i64;
  do
    ++v6;
  while ( v4[v6] );
  if ( (unsigned int)v6 >= 0x40 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires an anim name of less than %d characters.", 64i64);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isnumber(luaVM, 3) )
      j_luaL_error(luaVM, "PlayCharacterFacialAnim blend time name must be a valid number.");
    v7 = lui_tonumber32(luaVM, 3);
    v8 = *(float *)&v7;
  }
  else
  {
    v8 = 0.0;
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "PlayCharacterFacialAnim start time name must be a valid number.");
    v9 = lui_tonumber32(luaVM, 4);
    v10 = *(float *)&v9;
    if ( *(float *)&v9 < 0.0 || *(float *)&v9 > 1.0 )
      j_luaL_error(luaVM, "PlayCharacterFacialAnim start time name must be a valid number between 0 and 1. Start time specified: %f", *(float *)&v9);
  }
  else
  {
    v10 = 0.0;
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    v11 = lui_tonumber32(luaVM, 5);
    controllerIndex = (int)*(float *)&v11;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v11);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_PlayCharacterFacialAnim(ClientFromController, v3, v5, v8, v10);
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_QueueCharacterAnim_impl
==============
*/
__int64 LUI_CoD_LuaCall_QueueCharacterAnim_impl(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 
  const char *v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  const char *v8; 
  const char *v9; 
  double v10; 
  float v11; 
  double v12; 
  float v13; 
  double v14; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 6 )
    j_luaL_error(luaVM, "QueueCharacterAnim expects a character id and an animation name, with an optional notetrack name, animation blend time and start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "QueueCharacterAnim expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "QueueCharacterAnim requires a valid string for the animation name.");
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = v4;
  if ( !*v4 )
    j_luaL_error(luaVM, "QueueCharacterAnim requires a non-empty string name for the animation.");
  v6 = -1i64;
  v7 = -1i64;
  do
    ++v7;
  while ( v4[v7] );
  if ( (unsigned int)v7 >= 0x40 )
    j_luaL_error(luaVM, "QueueCharacterAnim requires an anim name of less than %d characters.", 64i64);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isstring(luaVM, 3) )
      j_luaL_error(luaVM, "QueueCharacterAnim notetrack name must be a valid string.");
    v8 = j_lua_tolstring(luaVM, 3, NULL);
    v9 = v8;
    if ( !*v8 )
      j_luaL_error(luaVM, "QueueCharacterAnim requires a non-empty string name for the notetrack name.");
    do
      ++v6;
    while ( v8[v6] );
    if ( (unsigned int)v6 >= 0x40 )
      j_luaL_error(luaVM, "QueueCharacterAnim requires a notetrack name of less than %d characters.", 64i64);
  }
  else
  {
    v9 = NULL;
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "QueueCharacterAnim blend time name must be a valid number.");
    v10 = lui_tonumber32(luaVM, 4);
    v11 = *(float *)&v10;
  }
  else
  {
    v11 = FLOAT_0_2;
  }
  if ( j_lua_gettop(luaVM) >= 5 && j_lua_type(luaVM, 5) )
  {
    if ( !j_lua_isnumber(luaVM, 5) )
      j_luaL_error(luaVM, "QueueCharacterAnim start time name must be a valid number.");
    v12 = lui_tonumber32(luaVM, 5);
    v13 = *(float *)&v12;
    if ( *(float *)&v12 < 0.0 || *(float *)&v12 > 1.0 )
      j_luaL_error(luaVM, "QueueCharacterAnim start time name must be a valid number between 0 and 1. Start time specified: %f", *(float *)&v12);
  }
  else
  {
    v13 = 0.0;
  }
  if ( j_lua_isnumber(luaVM, 6) )
  {
    v14 = lui_tonumber32(luaVM, 6);
    controllerIndex = (int)*(float *)&v14;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v14);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_QueueCharacterAnim(ClientFromController, v3, v5, v9, v11, v13);
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterWeapons_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterWeapons_impl(lua_State *const luaVM)
{
  double v2; 
  unsigned int v3; 
  const char *accessoryWeapon; 
  const char *v5; 
  const char *v6; 
  double v7; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, "SetCharacterModels expects a character id and an animation name, with an optional animation blend time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterModels expects an integer character id");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  accessoryWeapon = NULL;
  if ( j_lua_gettop(luaVM) >= 2 && j_lua_type(luaVM, 2) )
    v5 = j_lua_tolstring(luaVM, 2, NULL);
  else
    v5 = NULL;
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
    v6 = j_lua_tolstring(luaVM, 3, NULL);
  else
    v6 = NULL;
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
    accessoryWeapon = j_lua_tolstring(luaVM, 4, NULL);
  if ( j_lua_isnumber(luaVM, 4) )
  {
    v7 = lui_tonumber32(luaVM, 4);
    controllerIndex = (int)*(float *)&v7;
    ClientFromController = CL_Mgr_GetClientFromController((int)*(float *)&v7);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterWeapons(ClientFromController, v3, v5, v6, accessoryWeapon);
  return 0i64;
}

/*
==============
LUI_CoD_RegisterClientCharacterFunctions
==============
*/
void LUI_CoD_RegisterClientCharacterFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "ClientCharacter", Character_MP_methods);
  j_lua_settop(luaVM, -2);
}

