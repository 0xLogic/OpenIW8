/*
==============
LUI_CoD_OnScreenKeyboard_RegisterFunctions
==============
*/

void __fastcall LUI_CoD_OnScreenKeyboard_RegisterFunctions(lua_State *luaVM)
{
  ?LUI_CoD_OnScreenKeyboard_RegisterFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
OpenScreenKeyboardNotifyComplete
==============
*/

void __fastcall OpenScreenKeyboardNotifyComplete(LocalClientNum_t localClientNum, UI_KEYBOARD_RESULT result, const char *resultString)
{
  ?OpenScreenKeyboardNotifyComplete@@YAXW4LocalClientNum_t@@W4UI_KEYBOARD_RESULT@@PEBD@Z(localClientNum, result, resultString);
}

/*
==============
LUI_CoD_OnScreenKeyboard_LuaRestarted
==============
*/

void LUI_CoD_OnScreenKeyboard_LuaRestarted(void)
{
  ?LUI_CoD_OnScreenKeyboard_LuaRestarted@@YAXXZ();
}

/*
==============
LUI_CoD_LuaCall_OpenScreenKeyboard
==============
*/
__int64 LUI_CoD_LuaCall_OpenScreenKeyboard(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_CoD_LuaCall_OpenScreenKeyboard_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_CoD_LuaCall_CheckStringValidityAndProfanity
==============
*/
__int64 LUI_CoD_LuaCall_CheckStringValidityAndProfanity(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  const char *v4; 
  bool IsBadWord; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: OSK.CheckStringValidityAndProfanity( <controllerIndex>, <inputString> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    if ( UI_VerifyString(v3, NULL) )
    {
      IsBadWord = ProfanityFilter_IsBadWord(v2, v3);
      v4 = "MENU/OFFENSIVETEXT";
      if ( !IsBadWord )
        v4 = (char *)&queryFormat.fmt + 3;
    }
    else
    {
      v4 = "MENU/INVALIDCHARS";
    }
  }
  else
  {
    v4 = "MENU/INVALIDCHARS";
  }
  j_lua_pushstring(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_CoD_LuaCall_TriggerVirtualKeyboardCallback
==============
*/
__int64 LUI_CoD_LuaCall_TriggerVirtualKeyboardCallback(lua_State *const luaVM)
{
  unsigned int v2; 

  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_CoD_LuaCall_IsScreenKeyboardActive
==============
*/
__int64 LUI_CoD_LuaCall_IsScreenKeyboardActive(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushboolean(luaVM, s_callbackFunction != -2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
CallBackFunctionIsFunction
==============
*/
bool CallBackFunctionIsFunction(lua_State *luaVM, const int index)
{
  return j_lua_type(luaVM, index) == 6;
}

/*
==============
LUI_CoD_LuaCall_OpenScreenKeyboard_impl
==============
*/
__int64 LUI_CoD_LuaCall_OpenScreenKeyboard_impl(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  UI_KEYBOARD_TYPE type; 
  int v8; 
  bool v9; 
  const dvar_t *v10; 
  bool v11; 
  bool allowEmpty; 
  unsigned int v13; 
  char utf8Stream[512]; 
  char output[512]; 

  if ( j_lua_gettop(luaVM) < 7 || !j_lua_isnumber(luaVM, 1) || !j_lua_isstring(luaVM, 2) || !j_lua_isstring(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || j_lua_type(luaVM, 5) != 1 || j_lua_type(luaVM, 6) != 1 || j_lua_type(luaVM, 7) != 1 || j_lua_type(luaVM, 8) != 6 || j_lua_gettop(luaVM) >= 9 && !j_lua_isnumber(luaVM, 9) || j_lua_gettop(luaVM) >= 10 && j_lua_type(luaVM, 10) != 1 || j_lua_gettop(luaVM) >= 11 && j_lua_type(luaVM, 11) != 1 )
    j_luaL_error(luaVM, "USAGE: OSK.OpenScreenKeyboard( <controller>, <title>, <defaultText>, <maxLength>, <useStringVerification>, <useProfanityFilter>, <allowEmpty>, <callback>, ?<keyboard_type>, ?<modal>, ?<autoalign> )");
  if ( j_lua_gettop(luaVM) >= 7 && j_lua_isnumber(luaVM, 1) && j_lua_isstring(luaVM, 2) && j_lua_isstring(luaVM, 3) && j_lua_isnumber(luaVM, 4) && j_lua_type(luaVM, 5) == 1 && j_lua_type(luaVM, 6) == 1 && j_lua_type(luaVM, 7) == 1 && j_lua_type(luaVM, 8) == 6 && (j_lua_gettop(luaVM) < 9 || j_lua_isnumber(luaVM, 9)) && (j_lua_gettop(luaVM) < 10 || j_lua_type(luaVM, 10) == 1) && (j_lua_gettop(luaVM) < 11 || j_lua_type(luaVM, 11) == 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = j_lua_tolstring(luaVM, 2, NULL);
    v4 = -1i64;
    v5 = j_lua_tolstring(luaVM, 3, NULL);
    v6 = -1i64;
    do
      ++v6;
    while ( v3[v6] );
    type = UI_KEYBOARD_TYPE_NORMAL;
    R_PrepareTextLine(v3, v6, output, 512, 1, NULL);
    do
      ++v4;
    while ( v5[v4] );
    R_PrepareTextLine(v5, v4, utf8Stream, 512, 1, NULL);
    InvertArabicUTF8Stream(output);
    InvertArabicUTF8Stream(utf8Stream);
    v8 = lui_tointeger32(luaVM, 4);
    v9 = j_lua_toboolean(luaVM, 5) > 0;
    if ( j_lua_toboolean(luaVM, 6) <= 0 )
      goto LABEL_43;
    v10 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled || Live_IsUserSignedInToLive(v2) )
      v11 = 1;
    else
LABEL_43:
      v11 = 0;
    allowEmpty = j_lua_toboolean(luaVM, 7) > 0;
    if ( j_lua_gettop(luaVM) >= 9 )
    {
      v13 = lui_tointeger32(luaVM, 9);
      if ( v13 > 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_onscreenkeyboard.cpp", 176, ASSERT_TYPE_ASSERT, "(keyboardTypeInt >= UI_KEYBOARD_TYPE_NORMAL && keyboardTypeInt <= UI_KEYBOARD_TYPE_NUMBER_EMPTY)", (const char *)&queryFormat, "keyboardTypeInt >= UI_KEYBOARD_TYPE_NORMAL && keyboardTypeInt <= UI_KEYBOARD_TYPE_NUMBER_EMPTY") )
        __debugbreak();
      type = v13;
    }
    if ( s_callbackFunction == -2 )
    {
      j_lua_pushvalue(luaVM, 8);
      s_callbackFunction = LUI_Ref_Monitor_AddRef(luaVM, -10000);
      s_callbackClientNum = CL_Mgr_GetClientFromController(v2);
      UI_ShowKeyboard(v2, output, utf8Stream, v8, v9, v11, allowEmpty, type, OpenScreenKeyboardNotifyComplete, 0, 0);
    }
    else
    {
      Com_PrintWarning(13, "WARNING: Screen keyboard opening attempt when it is already opened.\n");
    }
  }
  return 0i64;
}

/*
==============
LUI_CoD_OnScreenKeyboard_LuaRestarted
==============
*/
void LUI_CoD_OnScreenKeyboard_LuaRestarted(void)
{
  s_callbackFunction = -2;
  s_callbackClientNum = LOCAL_CLIENT_INVALID;
}

/*
==============
LUI_CoD_OnScreenKeyboard_RegisterFunctions
==============
*/
void LUI_CoD_OnScreenKeyboard_RegisterFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "OSK", OnScreenKeyboard_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
OpenScreenKeyboardNotifyComplete
==============
*/
void OpenScreenKeyboardNotifyComplete(LocalClientNum_t localClientNum, UI_KEYBOARD_RESULT result, const char *resultString)
{
  __int64 v4; 
  __int64 ControllerFromClient; 
  const char *v6; 
  const char *v7; 
  int v8; 
  lua_State *v9; 

  v4 = result;
  if ( s_callbackClientNum != LOCAL_CLIENT_INVALID )
    localClientNum = s_callbackClientNum;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( (_DWORD)v4 == 1 )
    Com_SetErrorMessage("MENU/OFFENSIVETEXT");
  v6 = NULL;
  v7 = NULL;
  if ( (_DWORD)v4 != 1 )
    v7 = resultString;
  if ( (unsigned int)(s_callbackFunction + 2) > 1 )
  {
    j_lua_rawgeti(LUI_luaVM, -10000, s_callbackFunction);
    j_lua_pushinteger(LUI_luaVM, ControllerFromClient);
    if ( (_DWORD)v4 != 2 )
      v6 = v7;
    j_lua_pushstring(LUI_luaVM, v6);
    j_lua_pushinteger(LUI_luaVM, v4);
    j_lua_call(LUI_luaVM, 3, 0);
    v8 = s_callbackFunction;
    v9 = LUI_luaVM;
    LUI_Tween_Verify_Tween_Metatable_Unref(-10000, s_callbackFunction);
    if ( v8 != -1 )
    {
      j_lua_rawgeti(v9, -10000, v8);
      if ( !CallBackFunctionIsFunction(v9, -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 86, ASSERT_TYPE_ASSERT, "(isFunction( luaVM, -1 ))", (const char *)&queryFormat, "isFunction( luaVM, -1 )") )
        __debugbreak();
      j_lua_settop(v9, -2);
    }
    LUI_Ref_Monitor_RemoveRef(LUI_luaVM, -10000, s_callbackFunction);
  }
  s_callbackClientNum = LOCAL_CLIENT_INVALID;
  s_callbackFunction = -2;
}

