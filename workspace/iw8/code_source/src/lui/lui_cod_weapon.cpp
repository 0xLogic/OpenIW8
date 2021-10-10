/*
==============
LUI_CoD_RegisterClientWeaponFunctions
==============
*/

void __fastcall LUI_CoD_RegisterClientWeaponFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterClientWeaponFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_LuaCall_SetWeaponModel
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponModel(lua_State *luaVM)
{
  double v2; 
  const char *v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponModel expects a weapon index and a weapon specifier string");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponModel expects an integer weapon index");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponModel expects a string weapon specifier");
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  if ( !*v3 )
    j_luaL_error(luaVM, "SetWeaponModel expects a non-empty string weapon specifier");
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetWeapon(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponIsWristwatch
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponIsWristwatch(lua_State *luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects a weapon index and boolean value for setting whether the weapon is a wristwatch.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects a boolean value for setting whether the weapon is a wristwatch");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetIsWristwatch(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponOffset
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponOffset(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t offset; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "SetWeaponOffset expects a weapon index and offset 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponOffset expects an integer weapon index");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponOffset expects a decimal x coordinate");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetWeaponOffset expects a decimal y coordinate");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetWeaponOffset expects a decimal z coordinate");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = lui_tonumber32(luaVM, 2);
  offset.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  offset.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  offset.v[2] = *(float *)&v6;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetOriginOffset(localClientNum, v3, &offset);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponRotation
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponRotation(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t offset; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "SetWeaponRotation expects a weapon index and pitch, yaw, roll 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponRotation expects an integer weapon index");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponRotation expects a decimal pitch value");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetWeaponRotation expects a decimal yaw value");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetWeaponRotation expects a decimal roll value");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = lui_tonumber32(luaVM, 2);
  offset.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  offset.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  offset.v[2] = *(float *)&v6;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAngleOffset(localClientNum, v3, &offset);
  CL_UIWeapon_SetAngleOffsetGoal(localClientNum, v3, &offset);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponRotationGoal
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponRotationGoal(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t goal; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "SetWeaponRotationGoal expects a weapon index and pitch, yaw, roll 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponRotationGoal expects an integer weapon index");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponRotationGoal expects a decimal pitch value");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetWeaponRotationGoal expects a decimal yaw value");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetWeaponRotationGoal expects a decimal roll value");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = lui_tonumber32(luaVM, 2);
  goal.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  goal.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  goal.v[2] = *(float *)&v6;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAngleOffsetGoal(localClientNum, v3, &goal);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponRotationCenter
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponRotationCenter(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  double v4; 
  double v5; 
  double v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 
  vec3_t center; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "SetWeaponRotationCenter expects a weapon index and offset 3-vector.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponRotationCenter expects an integer weapon index");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponRotationCenter expects a decimal x coordinate");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "SetWeaponRotationCenter expects a decimal y coordinate");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "SetWeaponRotationCenter expects a decimal z coordinate");
  v2 = lui_tonumber32(luaVM, 1);
  v3 = (int)*(float *)&v2;
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = lui_tonumber32(luaVM, 2);
  center.v[0] = *(float *)&v4;
  v5 = lui_tonumber32(luaVM, 3);
  center.v[1] = *(float *)&v5;
  v6 = lui_tonumber32(luaVM, 4);
  center.v[2] = *(float *)&v6;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetRotationCenter(localClientNum, v3, &center);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponVisible
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponVisible(lua_State *luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponVisible expects a weapon index and boolean value for setting visibility.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponVisible expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponVisible expects a boolean value for visibility");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetVisible(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponIsViewModel
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponIsViewModel(lua_State *luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects a weapon index and boolean value for setting whether or not to use the view model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects a boolean value for using the view model");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetIsViewModel(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponAllowDefault
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponAllowDefault(lua_State *luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects a weapon index and boolean value for setting whether or not to allow use of the default model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects a boolean value for allowing the default model");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAllowDefault(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponHideDanglyBits
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponHideDanglyBits(lua_State *luaVM)
{
  double v2; 
  bool v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects a weapon index and boolean value for setting whether or not to allow use of the default model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects a boolean value for allowing the default model");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetShowDanglyBits(localClientNum, (int)*(float *)&v2, v3);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponLoaded
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponLoaded(lua_State *luaVM)
{
  double v2; 
  LocalClientNum_t v3; 
  __int64 v4; 
  bool v5; 
  unsigned int v6; 
  LocalClientNum_t v8; 
  int v9; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetWeaponLoaded expects an integer weapon index");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  v3 = localClientNum;
  v4 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v9 = 2;
    v8 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
    v3 = localClientNum;
  }
  v5 = clientUIActives[v4].connectionState == CA_ACTIVE && CL_UIWeapon_GetLoaded(v3, (int)*(float *)&v2);
  j_lua_pushboolean(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponEntityNum
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponEntityNum(lua_State *luaVM)
{
  double v2; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetWeaponEntityNum expects an integer weapon index");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_GetEntityNum(localClientNum, (int)*(float *)&v2);
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
LUI_CoD_LuaCall_SetWeaponCollisionPlaneEnabled
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponCollisionPlaneEnabled(lua_State *luaVM)
{
  double v2; 
  int v3; 
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects a weapon number and boolean value");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects a boolean value for enabling the collision plane");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  v3 = j_lua_toboolean(luaVM, 2);
  CL_UIWeapon_SetCollisionPlaneEnabled(localClientNum, (int)*(float *)&v2, v3 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_SetWeaponResetDynBones
==============
*/
__int64 LUI_CoD_LuaCall_SetWeaponResetDynBones(lua_State *luaVM)
{
  double v2; 
  unsigned int v3; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: SetWeaponResetDynBones( <int> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tonumber32(luaVM, 1);
    if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
      j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    CL_UIWeapon_SetResetDynBones(localClientNum, (int)*(float *)&v2, 1);
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
LUI_CoD_LuaCall_PlayWeaponVFX
==============
*/
__int64 LUI_CoD_LuaCall_PlayWeaponVFX(lua_State *luaVM)
{
  double v2; 
  const char *v3; 
  const char *v4; 
  const char *v5; 
  const char *v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a weapon index and two strings");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "PlayWeaponVFX expects an integer weapon index");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a string value for the name of the VFX to play");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a string value for a tag on the weapon");
  v2 = lui_tonumber32(luaVM, 1);
  if ( (unsigned int)(int)*(float *)&v2 >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = v3;
  if ( !v3 || !*v3 )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a non-empty vfx name");
  v5 = j_lua_tolstring(luaVM, 3, NULL);
  v6 = v5;
  if ( !v5 || !*v5 )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a non-empty tag name");
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( !CL_UIWeapon_PlayVFX(localClientNum, (int)*(float *)&v2, v4, v6) )
    j_luaL_error(luaVM, "PlayWeaponVFX: VFX '%s' not found", v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponHyperburstEnabled
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponHyperburstEnabled(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_GetWeaponHyperburstEnabled_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_GetWeaponHyperburstEnabled_impl
==============
*/
__int64 LUI_CoD_LuaCall_GetWeaponHyperburstEnabled_impl(lua_State *const luaVM)
{
  double v2; 
  __int64 v3; 
  cg_t *v4; 
  __int64 v5; 
  const Weapon *CurrentWeaponForPlayer; 
  bool UsingAltForHud; 
  const HyperBurstInfo *HyperBurstInfo; 
  LocalClientNum_t v10; 
  __int64 v11; 
  int v12; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: GetWeaponHyperburstEnabled( <int> )");
  if ( j_lua_gettop(luaVM) != 1 )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v2 = lui_tonumber32(luaVM, 1);
  if ( !CL_Mgr_IsControllerMappedToClient((int)*(float *)&v2, &outLocalClientNum) )
    return 0i64;
  v3 = outLocalClientNum;
  if ( outLocalClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v12 = cg_t::ms_allocatedCount;
    v10 = outLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v3] )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v11) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v11) )
      __debugbreak();
  }
  v4 = cg_t::ms_cgArray[v3];
  v5 = outLocalClientNum;
  if ( !CgWeaponMap::ms_instance[outLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v5], &v4->predictedPlayerState);
  UsingAltForHud = CG_GetUsingAltForHud(&v4->predictedPlayerState);
  HyperBurstInfo = BG_GetHyperBurstInfo(CurrentWeaponForPlayer, UsingAltForHud);
  j_lua_pushboolean(luaVM, HyperBurstInfo->enabled);
  return 1i64;
}

/*
==============
LUI_CoD_RegisterClientWeaponFunctions
==============
*/
void LUI_CoD_RegisterClientWeaponFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "ClientWeapon", ClientWeapon_methods);
  j_lua_settop(luaVM, -2);
}

