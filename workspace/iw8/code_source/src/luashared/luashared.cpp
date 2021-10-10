/*
==============
LuaShared_SetTableInt
==============
*/

void __fastcall LuaShared_SetTableInt(const char *key, __int64 value, lua_State *luaVM)
{
  ?LuaShared_SetTableInt@@YAXPEBD_JPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_SetTableBool
==============
*/

void __fastcall LuaShared_SetTableBool(const char *key, bool value, lua_State *luaVM)
{
  ?LuaShared_SetTableBool@@YAXPEBD_NPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_SetTableNumber
==============
*/

void __fastcall LuaShared_SetTableNumber(__int64 key, long double value, lua_State *luaVM)
{
  ?LuaShared_SetTableNumber@@YAX_JNPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_PCall
==============
*/

int __fastcall LuaShared_PCall(lua_State *luaVM, int nargs, int nresults)
{
  return ?LuaShared_PCall@@YAHPEAUlua_State@@HH@Z(luaVM, nargs, nresults);
}

/*
==============
LuaShared_SetTableBool
==============
*/

void __fastcall LuaShared_SetTableBool(__int64 key, bool value, lua_State *luaVM)
{
  ?LuaShared_SetTableBool@@YAX_J_NPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_SetTableNumber
==============
*/

void __fastcall LuaShared_SetTableNumber(const char *key, long double value, lua_State *luaVM)
{
  ?LuaShared_SetTableNumber@@YAXPEBDNPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_SetTableString
==============
*/

void __fastcall LuaShared_SetTableString(const char *key, const char *value, lua_State *luaVM)
{
  ?LuaShared_SetTableString@@YAXPEBD0PEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_LuaAssert
==============
*/

int __fastcall LuaShared_LuaAssert(lua_State *luaVM)
{
  return ?LuaShared_LuaAssert@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_SetTableInt
==============
*/

void __fastcall LuaShared_SetTableInt(__int64 key, __int64 value, lua_State *luaVM)
{
  ?LuaShared_SetTableInt@@YAX_J0PEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
LuaShared_GetComPrintChannelForVM
==============
*/

int __fastcall LuaShared_GetComPrintChannelForVM(lua_State *luaVM)
{
  return ?LuaShared_GetComPrintChannelForVM@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_SetTableString
==============
*/

void __fastcall LuaShared_SetTableString(__int64 key, const char *value, lua_State *luaVM)
{
  ?LuaShared_SetTableString@@YAX_JPEBDPEAUlua_State@@@Z(key, value, luaVM);
}

/*
==============
lua_tonumber32
==============
*/

double __fastcall lua_tonumber32(lua_State *luaVM, int index)
{
  double result; 

  *(float *)&result = ?lua_tonumber32@@YAMPEAUlua_State@@H@Z(luaVM, index);
  return result;
}

/*
==============
lua_tointeger32
==============
*/

int __fastcall lua_tointeger32(lua_State *luaVM, int index)
{
  return ?lua_tointeger32@@YAHPEAUlua_State@@H@Z(luaVM, index);
}

/*
==============
LuaShared_SetTableNil
==============
*/

void __fastcall LuaShared_SetTableNil(const char *key, lua_State *luaVM)
{
  ?LuaShared_SetTableNil@@YAXPEBDPEAUlua_State@@@Z(key, luaVM);
}

/*
==============
LuaShared_Init
==============
*/

void LuaShared_Init(void)
{
  ?LuaShared_Init@@YAXXZ();
}

/*
==============
LuaShared_CopyTableToVM
==============
*/

void __fastcall LuaShared_CopyTableToVM(lua_State *sourceVM, lua_State *destVM, const int stackIndexForTable)
{
  ?LuaShared_CopyTableToVM@@YAXPEAUlua_State@@0H@Z(sourceVM, destVM, stackIndexForTable);
}

/*
==============
LuaShared_CopyTableToVM
==============
*/
void LuaShared_CopyTableToVM(lua_State *sourceVM, lua_State *destVM, const int stackIndexForTable)
{
  int v6; 
  const char *v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  long double v11; 
  int v12; 

  j_lua_pushnil(sourceVM);
  while ( j_lua_next(sourceVM, stackIndexForTable) )
  {
    v6 = j_lua_type(sourceVM, -1);
    v7 = j_lua_tolstring(sourceVM, -2, NULL);
    switch ( v6 )
    {
      case 1:
        v12 = j_lua_toboolean(sourceVM, -1);
        j_lua_pushboolean(destVM, v12 != 0);
        break;
      case 3:
        v11 = j_lua_tonumber(sourceVM, -1);
        j_lua_pushnumber(destVM, v11);
        break;
      case 4:
        v10 = j_lua_tolstring(sourceVM, -1, NULL);
        j_lua_pushstring(destVM, v10);
        break;
      default:
        v8 = j_lua_typename(sourceVM, v6);
        if ( !sourceVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared.cpp", 119, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
          __debugbreak();
        v9 = 25;
        if ( sourceVM == LUI_luaVM )
          v9 = 13;
        Com_PrintError(v9, "SendEventToLUI - Unsupported type %s used for key %s", v8, v7);
        goto LABEL_15;
    }
    j_lua_setfield(destVM, -2, v7);
LABEL_15:
    j_lua_settop(sourceVM, -2);
  }
}

/*
==============
LuaShared_GetComPrintChannelForVM
==============
*/
__int64 LuaShared_GetComPrintChannelForVM(lua_State *luaVM)
{
  __int64 result; 

  if ( !luaVM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared.cpp", 119, ASSERT_TYPE_ASSERT, "(luaVM)", (const char *)&queryFormat, "luaVM") )
    __debugbreak();
  result = 25i64;
  if ( luaVM == LUI_luaVM )
    return 13i64;
  return result;
}

/*
==============
LuaShared_Init
==============
*/
void LuaShared_Init(void)
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_lua_enableDvarModifiedFlagCheck = Dvar_RegisterBool("lua_enableDvarModifiedFlagCheck", 1, 0x40004u, "Enables SetDvar() validation of Lua functions");
  Dvar_EndPermanentRegistration();
}

/*
==============
LuaShared_LuaAssert
==============
*/
int LuaShared_LuaAssert(lua_State *luaVM)
{
  int v2; 
  const char *v3; 

  j_luaL_checkany(luaVM, 1);
  v2 = j_lua_toboolean(luaVM, 1);
  v3 = j_luaL_optlstring(luaVM, 2, "Assertion failed", NULL);
  if ( !v2 )
    j_luaL_error(luaVM, v3);
  return j_lua_gettop(luaVM);
}

/*
==============
LuaShared_PCall
==============
*/
int LuaShared_PCall(lua_State *luaVM, int nargs, int nresults)
{
  char v6; 
  int v7; 
  int ComPrintChannelForVM; 
  int v9; 
  int v10; 
  int result; 
  int v12; 
  int v13; 

  v6 = 0;
  v7 = 0;
  j_lua_getfield(luaVM, -10002, "mobdebug");
  if ( j_lua_type(luaVM, -1) )
  {
    j_lua_getfield(luaVM, -1, "onError");
    if ( j_lua_type(luaVM, -1) )
    {
      j_lua_remove(luaVM, -2);
      v7 = -2 - nargs;
      j_lua_insert(luaVM, -2 - nargs);
      v6 = 1;
      goto LABEL_7;
    }
    ComPrintChannelForVM = LuaShared_GetComPrintChannelForVM(luaVM);
    Com_Printf(ComPrintChannelForVM, "%s: Could not find %s in %s.\n", "LuaShared_PCall", "onError", "mobdebug");
    v9 = -3;
  }
  else
  {
    v10 = LuaShared_GetComPrintChannelForVM(luaVM);
    Com_Printf(v10, "%s: Could not find %s. (Probably hasn't been loaded yet, most likely can ignore.)\n", "LuaShared_PCall", "mobdebug");
    v9 = -2;
  }
  j_lua_settop(luaVM, v9);
LABEL_7:
  result = j_lua_pcall(luaVM, nargs, nresults, v7);
  v12 = result;
  if ( v6 )
  {
    if ( result )
      v13 = -2;
    else
      v13 = ~nresults;
    j_lua_remove(luaVM, v13);
    return v12;
  }
  return result;
}

/*
==============
LuaShared_SetTableBool
==============
*/
void LuaShared_SetTableBool(const char *key, bool value, lua_State *luaVM)
{
  j_lua_pushboolean(luaVM, value);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LuaShared_SetTableBool
==============
*/
void LuaShared_SetTableBool(__int64 key, bool value, lua_State *luaVM)
{
  int v3; 

  v3 = value;
  j_lua_pushinteger(luaVM, key);
  j_lua_pushboolean(luaVM, v3);
  j_lua_settable(luaVM, -3);
}

/*
==============
LuaShared_SetTableInt
==============
*/
void LuaShared_SetTableInt(const char *key, __int64 value, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, value);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LuaShared_SetTableInt
==============
*/
void LuaShared_SetTableInt(__int64 key, __int64 value, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_pushinteger(luaVM, value);
  j_lua_settable(luaVM, -3);
}

/*
==============
LuaShared_SetTableNil
==============
*/
void LuaShared_SetTableNil(const char *key, lua_State *luaVM)
{
  j_lua_pushnil(luaVM);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LuaShared_SetTableNumber
==============
*/
void LuaShared_SetTableNumber(const char *key, long double value, lua_State *luaVM)
{
  j_lua_pushnumber(luaVM, value);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LuaShared_SetTableNumber
==============
*/
void LuaShared_SetTableNumber(__int64 key, long double value, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_pushnumber(luaVM, value);
  j_lua_settable(luaVM, -3);
}

/*
==============
LuaShared_SetTableString
==============
*/
void LuaShared_SetTableString(const char *key, const char *value, lua_State *luaVM)
{
  j_lua_pushstring(luaVM, value);
  j_lua_setfield(luaVM, -2, key);
}

/*
==============
LuaShared_SetTableString
==============
*/
void LuaShared_SetTableString(__int64 key, const char *value, lua_State *luaVM)
{
  j_lua_pushinteger(luaVM, key);
  j_lua_pushstring(luaVM, value);
  j_lua_settable(luaVM, -3);
}

/*
==============
lua_tointeger32
==============
*/
__int64 lua_tointeger32(lua_State *luaVM, int index)
{
  __int64 v2; 

  v2 = j_lua_tointeger(luaVM, index);
  if ( (unsigned __int64)(v2 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v2, "signed", v2) )
    __debugbreak();
  return (unsigned int)v2;
}

/*
==============
lua_tonumber32
==============
*/
float lua_tonumber32(lua_State *luaVM, int index)
{
  __int128 v2; 
  double Px; 

  *(double *)&v2 = j_lua_tonumber(luaVM, index);
  Px = *(double *)&v2;
  _XMM6 = v2;
  if ( _dtest(&Px) > 0 )
    j_luaL_error(luaVM, "value is infinite");
  if ( *(double *)&v2 < -3.402823466385289e38 || *(double *)&v2 > 3.402823466385289e38 )
    j_luaL_error(luaVM, "value is out of range for 32-bit floating point type");
  __asm { vcvtsd2ss xmm0, xmm6, xmm6 }
  return *(float *)&_XMM0;
}

