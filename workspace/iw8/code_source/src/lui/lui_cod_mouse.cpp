/*
==============
LUI_CoD_LuaCall_GetMouseButtons
==============
*/

int __fastcall LUI_CoD_LuaCall_GetMouseButtons(lua_State *luaVM)
{
  return ?LUI_CoD_LuaCall_GetMouseButtons@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
GetMouseButtons
==============
*/

unsigned int __fastcall GetMouseButtons(const int controllerIndex)
{
  return ?GetMouseButtons@@YAIH@Z(controllerIndex);
}

/*
==============
GetMouseButtons
==============
*/
__int64 GetMouseButtons(const int controllerIndex)
{
  unsigned int v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = 0;
  if ( Xb3_Input_GetKeyboardController() == controllerIndex )
  {
    v7 = 0i64;
    Windows::Devices::Input::MouseCapabilities::MouseCapabilities(NULL);
    v3 = v2;
    v8 = v2;
    v7 = 0i64;
    v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 80i64))(v2, &v6);
    if ( v4 < 0 )
      __abi_WinRTraiseException(v4);
    v1 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16i64))(v3);
  }
  return v1;
}

/*
==============
LUI_CoD_LuaCall_GetMouseButtons
==============
*/
__int64 LUI_CoD_LuaCall_GetMouseButtons(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetNumberOfMouseButtons(  <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = 0;
    if ( Xb3_Input_GetKeyboardController() == v2 )
    {
      v9 = 0i64;
      Windows::Devices::Input::MouseCapabilities::MouseCapabilities(NULL);
      v5 = v4;
      v10 = v4;
      v9 = 0i64;
      v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 80i64))(v4, &v9);
      if ( v6 < 0 )
        __abi_WinRTraiseException(v6);
      v3 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    }
    j_lua_pushinteger(luaVM, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

