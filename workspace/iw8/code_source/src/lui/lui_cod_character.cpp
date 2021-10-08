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
  unsigned int v4; 
  const char **v5; 
  int v6; 
  const char *v7; 
  LocalClientNum_t ClientFromController; 
  unsigned int v10; 
  LocalClientNum_t localClientNum; 
  int controllerIndex[3]; 
  const char *mem[8]; 

  if ( j_lua_gettop(luaVM) < 1 || j_lua_gettop(luaVM) > 10 )
    j_luaL_error(luaVM, "SetCharacterModels expects a character id, and up to %i optional models", 8i64);
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterModels expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si r14, xmm0 }
  if ( (unsigned int)_R14 >= 0x14 )
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
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 10);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex[0] = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterModels(ClientFromController, _R14, mem, v4);
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
  int v4; 
  bool v5; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 3 )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects a character id and boolean value, with an optional controller index.");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "SetCharacterWeaponVisible expects a boolean value for whether the character's held weapon should be visible");
  v4 = j_lua_toboolean(luaVM, 2);
  localClientNum = LOCAL_CLIENT_INVALID;
  v5 = v4 != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    localClientNum = CL_Mgr_GetClientFromController(_ECX);
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  }
  if ( localClientNum == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_character.cpp", 231, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  CL_UICharacter_SetCharacterWeaponVisible(localClientNum, _RDI, v5);
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
  bool v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterAkimbo(ClientFromController, _RDI, v4);
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
  LocalClientNum_t ClientFromController; 
  unsigned int v6; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+position], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+position+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+position+8], xmm0 }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterOffset(ClientFromController, _RDI, &position);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  LocalClientNum_t ClientFromController; 
  unsigned int v6; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
  __asm { vmovss  dword ptr [rsp+48h+rotation], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
  __asm { vmovss  dword ptr [rsp+48h+rotation+4], xmm0 }
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
  __asm { vmovss  dword ptr [rsp+48h+rotation+8], xmm0 }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterRotation(ClientFromController, _RDI, &rotation);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  bool v4; 
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
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  v4 = j_lua_toboolean(luaVM, 2) != 0;
  if ( j_lua_isnumber(luaVM, 3) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterVisible(ClientFromController, _RDI, v4);
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
  LocalClientNum_t ClientFromController; 
  bool v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) && j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "GetCharacterLoaded expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  v6 = CL_IsLocalClientConnectionActiveForAnyServer(ClientFromController) && CG_ClientCharacter_GetCharacterLoaded(localClientNum, _RDI);
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
  LocalClientNum_t ClientFromController; 
  bool v6; 
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) && j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "GetCharacterStreamed expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( j_lua_isnumber(luaVM, 2) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  v6 = CL_IsLocalClientConnectionActiveForAnyServer(ClientFromController) && CG_ClientCharacter_GetCharacterStreamed(localClientNum, _RDI);
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

__int64 __fastcall LUI_CoD_LuaCall_GetCharacterEntityNum(lua_State *luaVM, double _XMM1_8)
{
  unsigned int v7; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetCharacterEntityNum expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rdi, xmm0 }
  if ( (unsigned int)_RDI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  CL_UICharacter_GetEntityNum(localClientNum, _RDI);
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
  signed int v3; 
  LocalClientNum_t ClientFromController; 
  unsigned int v6; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ClientCharacter.ClearCharacterAnimQueue( <index> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    if ( v3 >= 20 )
      j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
      __asm { vcvttss2si ecx, xmm0; controllerIndex }
      controllerIndex = _ECX;
      ClientFromController = CL_Mgr_GetClientFromController(_ECX);
      localClientNum = ClientFromController;
    }
    else
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      ClientFromController = localClientNum;
    }
    CL_UICharacter_ClearCharacterAnimQueue(ClientFromController, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v6);
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
  unsigned int v3; 
  signed int v4; 
  LocalClientNum_t ClientFromController; 
  const char *CurrentAnimName; 
  unsigned int v8; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: ClientCharacter.GetCurrentAnimName( <index> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v4 = lui_tointeger32(luaVM, 1);
    if ( v4 >= 20 )
      j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
    if ( j_lua_isnumber(luaVM, 2) )
    {
      *(double *)&_XMM0 = lui_tonumber32(luaVM, 2);
      __asm { vcvttss2si ecx, xmm0; controllerIndex }
      controllerIndex = _ECX;
      ClientFromController = CL_Mgr_GetClientFromController(_ECX);
      localClientNum = ClientFromController;
    }
    else
    {
      LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
      ClientFromController = localClientNum;
    }
    CurrentAnimName = CL_UICharacter_GetCurrentAnimName(ClientFromController, v4);
    j_lua_pushstring(luaVM, CurrentAnimName);
  }
  else
  {
    v3 = 0;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v8);
  }
  return v3;
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
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  char v12; 
  char v13; 
  LocalClientNum_t ClientFromController; 
  __int64 result; 
  float v24; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 5 )
    j_luaL_error(luaVM, "PlayCharacterAnim expects a character id and an animation name, with an optional animation blend time and optional start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "PlayCharacterAnim expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "PlayCharacterAnim requires a valid string for the animation name.");
  v7 = j_lua_tolstring(luaVM, 2, NULL);
  v8 = v7;
  if ( !*v7 )
    j_luaL_error(luaVM, "PlayCharacterAnim requires a non-empty string name for the animation.");
  v9 = -1i64;
  do
    ++v9;
  while ( v7[v9] );
  if ( (unsigned int)v9 >= 0x40 )
    j_luaL_error(luaVM, "PlayCharacterAnim requires an anim name of less than %d characters.", 64i64);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isnumber(luaVM, 3) )
      j_luaL_error(luaVM, "PlayCharacterAnim blend time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm8, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "PlayCharacterAnim start time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm
    {
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( v12 )
      goto LABEL_28;
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v12 | v13) )
    {
LABEL_28:
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      j_luaL_error(luaVM, "PlayCharacterAnim start time name must be a valid number between 0 and 1. Start time specified: %f", _R8);
    }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  __asm
  {
    vmovaps xmm3, xmm8; blendTime
    vmovss  [rsp+68h+var_48], xmm6
  }
  CL_UICharacter_PlayCharacterAnim(ClientFromController, _RSI, v8, *(const float *)&_XMM3, v24);
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
LUI_CoD_LuaCall_PlayCharacterFacialAnim_impl
==============
*/
__int64 LUI_CoD_LuaCall_PlayCharacterFacialAnim_impl(lua_State *const luaVM)
{
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  char v12; 
  char v13; 
  LocalClientNum_t ClientFromController; 
  __int64 result; 
  float v24; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
    vmovaps [rsp+68h+var_38], xmm8
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 5 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim expects a character id and an animation name, with an optional animation blend time and optional start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si rsi, xmm0 }
  if ( (unsigned int)_RSI >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires a valid string for the animation name.");
  v7 = j_lua_tolstring(luaVM, 2, NULL);
  v8 = v7;
  if ( !*v7 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires a non-empty string name for the animation.");
  v9 = -1i64;
  do
    ++v9;
  while ( v7[v9] );
  if ( (unsigned int)v9 >= 0x40 )
    j_luaL_error(luaVM, "PlayCharacterFacialAnim requires an anim name of less than %d characters.", 64i64);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isnumber(luaVM, 3) )
      j_luaL_error(luaVM, "PlayCharacterFacialAnim blend time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 3);
    __asm { vmovaps xmm8, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "PlayCharacterFacialAnim start time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm
    {
      vcomiss xmm0, xmm7
      vmovaps xmm6, xmm0
    }
    if ( v12 )
      goto LABEL_28;
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v12 | v13) )
    {
LABEL_28:
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      j_luaL_error(luaVM, "PlayCharacterFacialAnim start time name must be a valid number between 0 and 1. Start time specified: %f", _R8);
    }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  if ( j_lua_isnumber(luaVM, 5) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  __asm
  {
    vmovaps xmm3, xmm8; blendTime
    vmovss  [rsp+68h+var_48], xmm6
  }
  CL_UICharacter_PlayCharacterFacialAnim(ClientFromController, _RSI, v8, *(const float *)&_XMM3, v24);
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
    vmovaps xmm8, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
LUI_CoD_LuaCall_QueueCharacterAnim_impl
==============
*/

__int64 __fastcall LUI_CoD_LuaCall_QueueCharacterAnim_impl(lua_State *const luaVM, double _XMM1_8)
{
  const char *v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  const char *v12; 
  char v14; 
  char v15; 
  LocalClientNum_t ClientFromController; 
  __int64 result; 
  float v25; 
  float v26; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  __asm
  {
    vmovaps [rsp+68h+var_28], xmm6
    vmovaps [rsp+68h+var_38], xmm7
  }
  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 6 )
    j_luaL_error(luaVM, "QueueCharacterAnim expects a character id and an animation name, with an optional notetrack name, animation blend time and start time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "QueueCharacterAnim expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si r14, xmm0 }
  if ( (unsigned int)_R14 >= 0x14 )
    j_luaL_error(luaVM, "Character id must be in range [0,%d]", 20i64);
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "QueueCharacterAnim requires a valid string for the animation name.");
  v7 = j_lua_tolstring(luaVM, 2, NULL);
  v8 = v7;
  if ( !*v7 )
    j_luaL_error(luaVM, "QueueCharacterAnim requires a non-empty string name for the animation.");
  v9 = -1i64;
  v10 = -1i64;
  do
    ++v10;
  while ( v7[v10] );
  if ( (unsigned int)v10 >= 0x40 )
    j_luaL_error(luaVM, "QueueCharacterAnim requires an anim name of less than %d characters.", 64i64);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_type(luaVM, 3) )
  {
    if ( !j_lua_isstring(luaVM, 3) )
      j_luaL_error(luaVM, "QueueCharacterAnim notetrack name must be a valid string.");
    v11 = j_lua_tolstring(luaVM, 3, NULL);
    v12 = v11;
    if ( !*v11 )
      j_luaL_error(luaVM, "QueueCharacterAnim requires a non-empty string name for the notetrack name.");
    do
      ++v9;
    while ( v11[v9] );
    if ( (unsigned int)v9 >= 0x40 )
      j_luaL_error(luaVM, "QueueCharacterAnim requires a notetrack name of less than %d characters.", 64i64);
  }
  else
  {
    v12 = NULL;
  }
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_type(luaVM, 4) )
  {
    if ( !j_lua_isnumber(luaVM, 4) )
      j_luaL_error(luaVM, "QueueCharacterAnim blend time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vmovaps xmm7, xmm0 }
  }
  else
  {
    __asm { vmovss  xmm7, cs:__real@3e4ccccd }
  }
  if ( j_lua_gettop(luaVM) >= 5 && j_lua_type(luaVM, 5) )
  {
    if ( !j_lua_isnumber(luaVM, 5) )
      j_luaL_error(luaVM, "QueueCharacterAnim start time name must be a valid number.");
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 5);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vcomiss xmm0, xmm1
      vmovaps xmm6, xmm0
    }
    if ( v14 )
      goto LABEL_38;
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( !(v14 | v15) )
    {
LABEL_38:
      __asm
      {
        vcvtss2sd xmm2, xmm6, xmm6
        vmovq   r8, xmm2
      }
      j_luaL_error(luaVM, "QueueCharacterAnim start time name must be a valid number between 0 and 1. Start time specified: %f", _R8);
    }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  if ( j_lua_isnumber(luaVM, 6) )
  {
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 6);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  __asm
  {
    vmovss  [rsp+68h+var_40], xmm6
    vmovss  [rsp+68h+var_48], xmm7
  }
  CL_UICharacter_QueueCharacterAnim(ClientFromController, _R14, v8, v12, v25, v26);
  result = 0i64;
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_28]
    vmovaps xmm7, [rsp+68h+var_38]
  }
  return result;
}

/*
==============
LUI_CoD_LuaCall_SetCharacterWeapons_impl
==============
*/
__int64 LUI_CoD_LuaCall_SetCharacterWeapons_impl(lua_State *const luaVM)
{
  const char *accessoryWeapon; 
  const char *v5; 
  const char *v6; 
  LocalClientNum_t ClientFromController; 
  LocalClientNum_t localClientNum; 
  int controllerIndex; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, "SetCharacterModels expects a character id and an animation name, with an optional animation blend time");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "SetCharacterModels expects an integer character id");
  *(double *)&_XMM0 = lui_tonumber32(luaVM, 1);
  __asm { vcvttss2si r14, xmm0 }
  if ( (unsigned int)_R14 >= 0x14 )
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
    *(double *)&_XMM0 = lui_tonumber32(luaVM, 4);
    __asm { vcvttss2si ecx, xmm0; controllerIndex }
    controllerIndex = _ECX;
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    localClientNum = ClientFromController;
  }
  else
  {
    LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
    ClientFromController = localClientNum;
  }
  CL_UICharacter_SetCharacterWeapons(ClientFromController, _R14, v5, v6, accessoryWeapon);
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

