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
  const char *v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponModel expects a weapon index and a weapon specifier string");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponModel expects an integer weapon index");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "SetWeaponModel expects a string weapon specifier");
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  if ( !*v4 )
    j_luaL_error(luaVM, "SetWeaponModel expects a non-empty string weapon specifier");
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetWeapon(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  bool v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects a weapon index and boolean value for setting whether the weapon is a wristwatch.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponIsWristwatch expects a boolean value for setting whether the weapon is a wristwatch");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetIsWristwatch(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  unsigned int v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+offset], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+offset+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+offset+8], xmm0 }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetOriginOffset(localClientNum, _RDI, &offset);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
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
  unsigned int v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+offset], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+offset+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+offset+8], xmm0 }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAngleOffset(localClientNum, _RDI, &offset);
  CL_UIWeapon_SetAngleOffsetGoal(localClientNum, _RDI, &offset);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
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
  unsigned int v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+goal], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+goal+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+goal+8], xmm0 }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAngleOffsetGoal(localClientNum, _RDI, &goal);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
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
  unsigned int v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+center], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+center+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+center+8], xmm0 }
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetRotationCenter(localClientNum, _RDI, &center);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
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
  bool v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponVisible expects a weapon index and boolean value for setting visibility.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponVisible expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponVisible expects a boolean value for visibility");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetVisible(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  bool v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects a weapon index and boolean value for setting whether or not to use the view model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponIsViewModel expects a boolean value for using the view model");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetIsViewModel(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  bool v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects a weapon index and boolean value for setting whether or not to allow use of the default model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponAllowDefault expects a boolean value for allowing the default model");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetAllowDefault(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  bool v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects a weapon index and boolean value for setting whether or not to allow use of the default model.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponHideDanglyBits expects a boolean value for allowing the default model");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_SetShowDanglyBits(localClientNum, _RSI, v4);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  LocalClientNum_t v4; 
  __int64 v5; 
  bool v6; 
  unsigned int v7; 
  LocalClientNum_t v9; 
  int v10; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetWeaponLoaded expects an integer weapon index");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  v4 = localClientNum;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    v9 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
    v4 = localClientNum;
  }
  v6 = clientUIActives[v5].connectionState == CA_ACTIVE && CL_UIWeapon_GetLoaded(v4, _RSI);
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
LUI_CoD_LuaCall_GetWeaponEntityNum
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_GetWeaponEntityNum(lua_State *luaVM, double _XMM1_8)
{
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetWeaponEntityNum expects an integer weapon index");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UIWeapon_GetEntityNum(localClientNum, _RDI);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, ecx; n
  }
  j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
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
  int v4; 
  unsigned int v5; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects a weapon number and boolean value");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects an integer weapon index");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetWeaponCollisionPlaneEnabled expects a boolean value for enabling the collision plane");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  v4 = j_lua_toboolean(luaVM, 2);
  CL_UIWeapon_SetCollisionPlaneEnabled(localClientNum, _RDI, v4 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
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
  unsigned int v4; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: SetWeaponResetDynBones( <int> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
    __asm { vcvttss2si rdi, xmm0 }
    if ( (unsigned int)_RDI >= 0x32 )
      j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    CL_UIWeapon_SetResetDynBones(localClientNum, _RDI, 1);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
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
  const char *v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  unsigned int v8; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rbp, xmm0 }
  if ( (unsigned int)_RBP >= 0x32 )
    j_luaL_error(luaVM, "Weapon index must be in range [0,%d]", 50i64);
  v4 = j_lua_tolstring(luaVM, 2, NULL);
  v5 = v4;
  if ( !v4 || !*v4 )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a non-empty vfx name");
  v6 = j_lua_tolstring(luaVM, 3, NULL);
  v7 = v6;
  if ( !v6 || !*v6 )
    j_luaL_error(luaVM, "PlayWeaponVFX expects a non-empty tag name");
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  if ( !CL_UIWeapon_PlayVFX(localClientNum, _RBP, v5, v7) )
    j_luaL_error(luaVM, "PlayWeaponVFX: VFX '%s' not found", v5);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v8);
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
  __int64 v4; 
  cg_t *v5; 
  __int64 v6; 
  const Weapon *CurrentWeaponForPlayer; 
  bool UsingAltForHud; 
  const HyperBurstInfo *HyperBurstInfo; 
  LocalClientNum_t v11; 
  __int64 v12; 
  int v13; 
  LocalClientNum_t outLocalClientNum; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: GetWeaponHyperburstEnabled( <int> )");
  if ( j_lua_gettop(luaVM) != 1 )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si ecx, xmm0; controllerIndex }
  if ( !CL_Mgr_IsControllerMappedToClient(_ECX, &outLocalClientNum) )
    return 0i64;
  v4 = outLocalClientNum;
  if ( outLocalClientNum >= (unsigned int)cg_t::ms_allocatedCount )
  {
    v13 = cg_t::ms_allocatedCount;
    v11 = outLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v4] )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v12) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v12) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v12) )
      __debugbreak();
  }
  v5 = cg_t::ms_cgArray[v4];
  v6 = outLocalClientNum;
  if ( !CgWeaponMap::ms_instance[outLocalClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v6], &v5->predictedPlayerState);
  UsingAltForHud = CG_GetUsingAltForHud(&v5->predictedPlayerState);
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

