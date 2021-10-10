/*
==============
DDL_LUA_ValueDDLToLua
==============
*/

void __fastcall DDL_LUA_ValueDDLToLua(lua_State *luaVM, DDLState *state, DDLValue *val)
{
  ?DDL_LUA_ValueDDLToLua@@YAXPEAUlua_State@@PEAUDDLState@@PEATDDLValue@@@Z(luaVM, state, val);
}

/*
==============
DDL_LuaCreateUserData
==============
*/

void __fastcall DDL_LuaCreateUserData(lua_State *luaVM, DDLState *state, DDLContext *ddlContext)
{
  ?DDL_LuaCreateUserData@@YAXPEAUlua_State@@PEAUDDLState@@PEAUDDLContext@@@Z(luaVM, state, ddlContext);
}

/*
==============
DDL_LUA_ArrayLen
==============
*/

int __fastcall DDL_LUA_ArrayLen(lua_State *luaVM)
{
  return ?DDL_LUA_ArrayLen@@YAHPEAUlua_State@@@Z(luaVM);
}

/*
==============
DDL_LUA_ValueLuaToDDL
==============
*/

int __fastcall DDL_LUA_ValueLuaToDDL(lua_State *luaVM, int stackPos, DDLState *state, DDLValue *val)
{
  return ?DDL_LUA_ValueLuaToDDL@@YAHPEAUlua_State@@HPEAUDDLState@@AEATDDLValue@@@Z(luaVM, stackPos, state, val);
}

/*
==============
DDL_LuaInit
==============
*/

void __fastcall DDL_LuaInit(lua_State *luaVM)
{
  ?DDL_LuaInit@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
DDL_LUA_LeafSet
==============
*/
__int64 DDL_LUA_LeafSet(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = DDL_LUA_LeafSet_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
DDL_LUA_LeafGet
==============
*/
__int64 DDL_LUA_LeafGet(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  unsigned int v4; 
  DDLValue val; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 493, "numArgs == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 494, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlLeafMetatable");
    if ( DDL_LUA_IsUserdataContextValid(v3) )
    {
      val = DDL_GetValue(&v3->state, v3->ddlContext);
      DDL_LUA_ValueDDLToLua(luaVM, &v3->state, &val);
      goto LABEL_13;
    }
    Com_PrintError(13, "Invalid DDL userData or userData ddlContext\n");
  }
  j_lua_pushnil(luaVM);
LABEL_13:
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
DDL_LUA_LeafIncrement
==============
*/
__int64 DDL_LUA_LeafIncrement(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 519, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 520, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 521, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  if ( v2 == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlLeafMetatable");
        if ( DDL_LUA_IsUserdataContextValid(v3) )
        {
          if ( j_lua_isnumber(luaVM, 2) )
          {
            v4 = j_lua_tointeger(luaVM, 2);
            v5 = truncate_cast<int,__int64>(v4);
            if ( !DDL_Increment(&v3->state, v3->ddlContext, v5) )
              Com_PrintError(13, "Error incrementing %s by %d\n", v3->state.member->name, v5);
          }
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
DDL_LUA_ArrayIndex
==============
*/
__int64 DDL_LUA_ArrayIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = DDL_LUA_ArrayIndex_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
DDL_LUA_ArrayIndex_impl
==============
*/
__int64 DDL_LUA_ArrayIndex_impl(lua_State *const luaVM)
{
  int v3; 
  DDLLuaUserData *v4; 
  __int64 v5; 
  int v6; 
  DDLState toState; 

  v3 = j_lua_gettop(luaVM);
  if ( v3 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 173, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 174, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 175, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  if ( v3 != 2 )
    goto LABEL_21;
  if ( !j_lua_isuserdata(luaVM, 1) )
    goto LABEL_21;
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_21;
  v4 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlArrayMetatable");
  if ( !DDL_LUA_IsUserdataValid(v4) )
    goto LABEL_21;
  if ( !j_lua_isnumber(luaVM, 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 183, ASSERT_TYPE_ASSERT, "(lua_isnumber( luaVM, 2 ))", (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) )
    goto LABEL_21;
  v5 = j_lua_tointeger(luaVM, 2);
  v6 = truncate_cast<int,__int64>(v5);
  if ( v6 >= v4->state.member->arraySize )
    goto LABEL_21;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  if ( DDL_MoveToIndex(&v4->state, &toState, v6) )
  {
    DDL_LuaCreateUserData(luaVM, &toState, v4->ddlContext);
  }
  else
  {
LABEL_21:
    Com_PrintError(13, "Unable to index ddl array. Returning nil.\n");
    j_lua_pushnil(luaVM);
  }
  return 1i64;
}

/*
==============
DDL_LUA_ArrayIterator
==============
*/
__int64 DDL_LUA_ArrayIterator(lua_State *const luaVM)
{
  int v2; 
  unsigned int v3; 
  DDLLuaUserData *v4; 
  unsigned int v5; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 270, "numArgs == 1") )
    __debugbreak();
  v3 = 1;
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 271, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 1 && j_lua_isuserdata(luaVM, 1) && (v4 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlArrayMetatable"), DDL_LUA_IsUserdataValid(v4)) )
  {
    j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ArrayIteratorClosure, 0);
    j_lua_pushvalue(luaVM, 1);
    j_lua_pushinteger(luaVM, -1i64);
    v3 = 3;
  }
  else
  {
    Com_PrintError(13, "Error setting up ddlpairs closure.\n");
    j_lua_pushnil(luaVM);
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v5);
  }
  return v3;
}

/*
==============
DDL_LUA_ArrayIteratorClosure
==============
*/
__int64 DDL_LUA_ArrayIteratorClosure(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = DDL_LUA_ArrayIteratorClosure_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
DDL_LUA_ArrayIteratorClosure_impl
==============
*/
__int64 DDL_LUA_ArrayIteratorClosure_impl(lua_State *const luaVM)
{
  int v3; 
  DDLLuaUserData *v4; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  DDLState toState; 

  v3 = j_lua_gettop(luaVM);
  if ( v3 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 235, ASSERT_TYPE_ASSERT, "(numArgs == 2)", (const char *)&queryFormat, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 236, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isnumber(luaVM, 2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 237, "lua_isnumber( luaVM, 2 )") )
    __debugbreak();
  if ( v3 == 2 )
  {
    if ( j_lua_isuserdata(luaVM, 1) )
    {
      if ( j_lua_isnumber(luaVM, 2) )
      {
        v4 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlArrayMetatable");
        if ( DDL_LUA_IsUserdataValid(v4) )
        {
          v5 = j_lua_tointeger(luaVM, 2);
          v6 = truncate_cast<int,__int64>(v5 + 1);
          v7 = v6;
          if ( v6 >= 0 )
          {
            if ( v6 < v4->state.member->arraySize )
            {
              __asm { vpxor   xmm0, xmm0, xmm0 }
              toState.isValid = 0;
              toState.offset = 0;
              toState.arrayIndex = -1;
              *(_OWORD *)&toState.member = _XMM0;
              if ( DDL_MoveToIndex(&v4->state, &toState, v6) )
              {
                j_lua_pushinteger(luaVM, v7);
                DDL_LuaCreateUserData(luaVM, &toState, v4->ddlContext);
                return 2i64;
              }
            }
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 247, ASSERT_TYPE_ASSERT, "(index >= 0)", (const char *)&queryFormat, "index >= 0") )
          {
            __debugbreak();
          }
        }
      }
    }
  }
  j_lua_pushnil(luaVM);
  j_lua_pushnil(luaVM);
  return 2i64;
}

/*
==============
DDL_LUA_ArrayLen
==============
*/
__int64 DDL_LUA_ArrayLen(lua_State *luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 149, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 150, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 2 && j_lua_isuserdata(luaVM, 1) && (v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlArrayMetatable"), DDL_LUA_IsUserdataValid(v3)) )
  {
    if ( v3->state.member->arraySize <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 159, ASSERT_TYPE_ASSERT, "(ddlUserData->state.member->arraySize > 1)", (const char *)&queryFormat, "ddlUserData->state.member->arraySize > 1") )
      __debugbreak();
    j_lua_pushinteger(luaVM, v3->state.member->arraySize);
    return 1i64;
  }
  else
  {
    Com_PrintError(13, "Unable to get array size. Returning nil.\n");
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
DDL_LUA_ArrayToString
==============
*/
__int64 DDL_LUA_ArrayToString(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  DDLMember *member; 
  const char *v5; 
  unsigned int v6; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 212, "numArgs == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 213, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlArrayMetatable"), DDL_LUA_IsUserdataValid(v3)) && (member = v3->state.member) != NULL )
    v5 = j_va("DDL array of %d elements {bit %d}", (unsigned int)member->arraySize, (unsigned int)v3->state.offset);
  else
    v5 = "##DDL EVALUATION ERROR - DDL_LUA_ArrayToString##";
  j_lua_pushstring(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
DDL_LUA_IsUserdataContextValid
==============
*/
bool DDL_LUA_IsUserdataContextValid(DDLLuaUserData *userData)
{
  DDLContext *ddlContext; 

  if ( !userData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 22, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
      __debugbreak();
    return 0;
  }
  ddlContext = userData->ddlContext;
  return ddlContext && ddlContext->buff && ddlContext->len > 0;
}

/*
==============
DDL_LUA_IsUserdataValid
==============
*/
char DDL_LUA_IsUserdataValid(DDLLuaUserData *userData)
{
  if ( userData )
    return 1;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 22, ASSERT_TYPE_ASSERT, "(userData)", (const char *)&queryFormat, "userData") )
    __debugbreak();
  return 0;
}

/*
==============
DDL_LUA_LeafSet_impl
==============
*/
__int64 DDL_LUA_LeafSet_impl(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  DDLValue val; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 460, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 461, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(luaVM, 2) && !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 462, "lua_isstring( luaVM, 2 ) || lua_isnumber( luaVM, 2 ) || (lua_type(luaVM, (2)) == 1)") )
    __debugbreak();
  if ( v2 == 2 && j_lua_isuserdata(luaVM, 1) && (j_lua_isstring(luaVM, 2) || j_lua_isnumber(luaVM, 2) || j_lua_type(luaVM, 2) == 1) )
  {
    v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlLeafMetatable");
    if ( DDL_LUA_IsUserdataContextValid(v3) )
    {
      if ( !DDL_LUA_ValueLuaToDDL(luaVM, 2, &v3->state, &val) || !DDL_SetValue(&v3->state, v3->ddlContext, val) )
      {
        Com_PrintError(13, "Could not set value for %s(offset %d)\n", v3->state.member->name, (unsigned int)v3->state.offset);
        return 1i64;
      }
    }
    else
    {
      Com_PrintError(13, "Invalid ddl type received when setting a lua value.\n");
    }
  }
  return 1i64;
}

/*
==============
DDL_LUA_LeafToString
==============
*/
__int64 DDL_LUA_LeafToString(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  DDLValue Value; 
  unsigned int offset; 
  const char *v6; 
  const char *v7; 
  unsigned int v8; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 548, "numArgs == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 549, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlLeafMetatable"), DDL_LUA_IsUserdataContextValid(v3)) )
  {
    Value = DDL_GetValue(&v3->state, v3->ddlContext);
    offset = v3->state.offset;
    v6 = DDL_ValToStr(&v3->state, Value);
    v7 = j_va("DDL leaf: %s {bit %d}", v6, offset);
  }
  else
  {
    v7 = "##DDL EVALUATION ERROR - DDL_LUA_LeafToString";
  }
  j_lua_pushstring(luaVM, v7);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
DDL_LUA_ParentIndex
==============
*/
__int64 DDL_LUA_ParentIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = DDL_LUA_ParentIndex_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
DDL_LUA_ParentIndex_impl
==============
*/
__int64 DDL_LUA_ParentIndex_impl(lua_State *const luaVM)
{
  int v3; 
  DDLLuaUserData *v4; 
  char *v5; 
  DDLState toState; 
  char *path; 

  v3 = j_lua_gettop(luaVM);
  if ( v3 != 2 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 78, "numArgs == 2") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 79, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( !j_lua_isstring(luaVM, 2) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 80, "lua_isstring( luaVM, 2 )") )
    __debugbreak();
  if ( v3 != 2 )
    goto LABEL_27;
  if ( !j_lua_isuserdata(luaVM, 1) )
    goto LABEL_27;
  if ( !j_lua_isstring(luaVM, 2) )
    goto LABEL_27;
  v4 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlParentMetatable");
  if ( !DDL_LUA_IsUserdataValid(v4) )
    goto LABEL_27;
  v5 = (char *)j_lua_tolstring(luaVM, 2, NULL);
  path = v5;
  if ( !v5 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 89, ASSERT_TYPE_ASSERT, "(childName)", (const char *)&queryFormat, "childName") )
      __debugbreak();
    v5 = path;
  }
  if ( !*v5 )
  {
    if ( j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 90, "*childName") )
      __debugbreak();
    v5 = path;
  }
  if ( !v4 )
    goto LABEL_27;
  if ( !v5 )
    goto LABEL_27;
  if ( !*v5 )
    goto LABEL_27;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  if ( DDL_MoveToPath(&v4->state, &toState, 1, (const char **)&path) )
  {
    DDL_LuaCreateUserData(luaVM, &toState, v4->ddlContext);
    return 1i64;
  }
  else
  {
LABEL_27:
    Com_PrintError(13, "Unable to get ddl state. Returning nil.\n");
    j_lua_pushnil(luaVM);
    return 1i64;
  }
}

/*
==============
DDL_LUA_ParentToString
==============
*/
__int64 DDL_LUA_ParentToString(lua_State *const luaVM)
{
  int v2; 
  DDLLuaUserData *v3; 
  const char *v4; 
  unsigned int v5; 

  v2 = j_lua_gettop(luaVM);
  if ( v2 != 1 && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 114, "numArgs == 1") )
    __debugbreak();
  if ( !j_lua_isuserdata(luaVM, 1) && j_CoreAssert_Handler_AssertTypeAssert("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 115, "lua_isuserdata( luaVM, 1 )") )
    __debugbreak();
  if ( v2 == 1 && j_lua_isuserdata(luaVM, 1) && (v3 = (DDLLuaUserData *)j_luaL_checkudata(luaVM, 1, "ddlParentMetatable"), DDL_LUA_IsUserdataValid(v3)) )
  {
    if ( v3->state.member )
      v4 = j_va("DDL parent element {bit %d}", (unsigned int)v3->state.offset);
    else
      v4 = j_va("DDL root for version %d {size %d}", v3->state.ddlDef->version, (unsigned int)v3->state.ddlDef->bitSize);
  }
  else
  {
    v4 = "##DDL EVALUATION ERROR - DDL_LUA_ParentToString##";
  }
  j_lua_pushstring(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
DDL_LUA_ValueDDLToLua
==============
*/
void DDL_LUA_ValueDDLToLua(lua_State *luaVM, DDLState *state, DDLValue *val)
{
  DDLMember *member; 
  int type; 
  __int64 intValue; 
  const char *v9; 
  const char *v10; 
  const char *EnumString; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 396, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 397, ASSERT_TYPE_ASSERT, "(state->member)", (const char *)&queryFormat, "state->member") )
    __debugbreak();
  if ( state->member->type == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 398, ASSERT_TYPE_ASSERT, "(state->member->type != DDL_INVALID_TYPE)", (const char *)&queryFormat, "state->member->type != DDL_INVALID_TYPE") )
    __debugbreak();
  if ( !val )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 399, ASSERT_TYPE_ASSERT, "(val)", (const char *)&queryFormat, "val") )
      __debugbreak();
    goto LABEL_13;
  }
  member = state->member;
  if ( !member || (type = member->type, type == -1) )
  {
LABEL_13:
    Com_PrintError(13, "Invalid ddl type received when pushing a lua value.\n");
LABEL_14:
    j_lua_pushnil(luaVM);
    return;
  }
  switch ( type )
  {
    case 0:
    case 1:
    case 3:
      intValue = val->intValue;
      goto LABEL_19;
    case 2:
      intValue = val->uintValue;
      if ( (unsigned int)intValue <= 0x7FFFFFFF )
      {
LABEL_19:
        j_lua_pushinteger(luaVM, intValue);
      }
      else
      {
        v9 = j_va("%u", intValue);
        j_lua_pushstring(luaVM, v9);
      }
      break;
    case 4:
      v10 = j_va("%llu", val->uint64Value);
      j_lua_pushstring(luaVM, v10);
      break;
    case 6:
    case 7:
      j_lua_pushnumber(luaVM, val->fixedPointValue);
      break;
    case 8:
      j_lua_pushstring(luaVM, val->stringPtr);
      break;
    case 10:
      EnumString = DDL::DDL_Lookup_GetEnumString(state, val->intValue);
      j_lua_pushstring(luaVM, EnumString);
      break;
    default:
      Com_PrintError(13, "Incompatible ddl type being pushed as a lua value for %s(offset %i)\n", member->name, (unsigned int)state->offset);
      goto LABEL_14;
  }
}

/*
==============
DDL_LUA_ValueLuaToDDL
==============
*/
__int64 DDL_LUA_ValueLuaToDDL(lua_State *luaVM, int stackPos, DDLState *state, DDLValue *val)
{
  DDLMember *member; 
  int type; 
  __int64 v11; 
  int EnumIndexByHash; 
  __int64 result; 
  const char *v14; 
  const char *v15; 
  const char *v17; 
  unsigned int v18; 
  char *fmt; 

  if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 298, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
    __debugbreak();
  if ( !state->member && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 299, ASSERT_TYPE_ASSERT, "(state->member)", (const char *)&queryFormat, "state->member") )
    __debugbreak();
  if ( state->member->type == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 300, ASSERT_TYPE_ASSERT, "(state->member->type != DDL_INVALID_TYPE)", (const char *)&queryFormat, "state->member->type != DDL_INVALID_TYPE") )
    __debugbreak();
  member = state->member;
  if ( !member || (type = member->type, type == -1) )
  {
LABEL_32:
    Com_PrintError(13, "Invalid ddl type received converting from a lua value.\n");
    return 0i64;
  }
  else
  {
    switch ( type )
    {
      case 0:
      case 1:
      case 3:
        if ( j_lua_isnumber(luaVM, stackPos) )
        {
          v11 = j_lua_tointeger(luaVM, stackPos);
          EnumIndexByHash = truncate_cast<int,__int64>(v11);
LABEL_15:
          val->intValue = EnumIndexByHash;
          return 1i64;
        }
        else
        {
          if ( j_lua_type(luaVM, stackPos) != 1 )
            goto LABEL_32;
          val->intValue = j_lua_toboolean(luaVM, stackPos);
          return 1i64;
        }
      case 2:
        if ( j_lua_isstring(luaVM, stackPos) )
        {
          v14 = j_lua_tolstring(luaVM, stackPos, NULL);
          val->intValue = I_atoui(v14);
          return 1i64;
        }
        if ( !j_lua_isnumber(luaVM, stackPos) )
          goto LABEL_32;
        val->intValue = j_lua_tointeger(luaVM, stackPos);
        result = 1i64;
        break;
      case 4:
        if ( !j_lua_isstring(luaVM, stackPos) )
          goto LABEL_32;
        v15 = j_lua_tolstring(luaVM, stackPos, NULL);
        val->uint64Value = I_atoui64(v15);
        return 1i64;
      case 6:
      case 7:
        if ( !j_lua_isnumber(luaVM, stackPos) )
          goto LABEL_32;
        *(double *)&_XMM0 = j_lua_tonumber(luaVM, stackPos);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        val->fixedPointValue = *(float *)&_XMM1;
        return 1i64;
      case 8:
        if ( !j_lua_isstring(luaVM, stackPos) )
          goto LABEL_32;
        val->uint64Value = (unsigned __int64)j_lua_tolstring(luaVM, stackPos, NULL);
        return 1i64;
      case 10:
        if ( !j_lua_isstring(luaVM, stackPos) )
          goto LABEL_32;
        v17 = j_lua_tolstring(luaVM, stackPos, NULL);
        v18 = DDL::DDL_HashString(v17, 0);
        EnumIndexByHash = DDL::DDL_Lookup_FindEnumIndexByHash(state->ddlDef, state->member->externalIndex, v18);
        if ( EnumIndexByHash != -1 )
          goto LABEL_15;
        LODWORD(fmt) = state->offset;
        Com_PrintError(13, "Attempted to assign the value \"%s\" to %s (offset %i) but \"%s\" isn't part of the ddl enum for this field\n", v17, state->member->name, fmt, v17);
        goto LABEL_32;
      default:
        Com_PrintError(13, "Incompatible ddl type being pushed as a lua value for %s(offset %i)\n", member->name, (unsigned int)state->offset);
        goto LABEL_32;
    }
  }
  return result;
}

/*
==============
DDL_LuaCreateUserData
==============
*/
void DDL_LuaCreateUserData(lua_State *luaVM, DDLState *state, DDLContext *ddlContext)
{
  DDLState *v6; 
  DDLMember *member; 
  const char *v8; 
  bool IsEnumArrayRoot; 

  v6 = (DDLState *)j_lua_newuserdata(luaVM, 0x28ui64);
  *(_QWORD *)&v6[1].isValid = ddlContext;
  DDL_StateCopy(state, v6);
  member = state->member;
  if ( !member )
  {
    if ( state->offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_ddl.cpp", 51, ASSERT_TYPE_ASSERT, "(state->offset == 0)", (const char *)&queryFormat, "state->offset == 0") )
      __debugbreak();
    goto LABEL_11;
  }
  if ( member->arraySize > 1 && state->arrayIndex == -1 && member->enumIndex == -1 )
  {
    v8 = "ddlArrayMetatable";
  }
  else if ( member->type == 9 || (IsEnumArrayRoot = DDL_StateIsEnumArrayRoot(state), v8 = "ddlLeafMetatable", IsEnumArrayRoot) )
  {
LABEL_11:
    v8 = "ddlParentMetatable";
  }
  j_lua_getfield(luaVM, -10000, v8);
  j_lua_setmetatable(luaVM, -2);
}

/*
==============
DDL_LuaInit
==============
*/
void DDL_LuaInit(lua_State *luaVM)
{
  j_luaL_newmetatable(luaVM, "ddlParentMetatable");
  j_lua_pushstring(luaVM, "__index");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ParentIndex, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__tostring");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ParentToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__viz");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ParentToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_settop(luaVM, -2);
  j_luaL_newmetatable(luaVM, "ddlArrayMetatable");
  j_lua_pushstring(luaVM, "__index");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ArrayIndex, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__len");
  j_lua_pushcclosure(luaVM, DDL_LUA_ArrayLen, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__tostring");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ArrayToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__viz");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ArrayToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_settop(luaVM, -2);
  j_luaL_newmetatable(luaVM, "ddlLeafMetatable");
  j_lua_pushstring(luaVM, "__index");
  j_lua_createtable(luaVM, 0, 0);
  j_luaL_register(luaVM, NULL, DDL_LUA_leafMethods);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__tostring");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_LeafToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_pushstring(luaVM, "__viz");
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_LeafToString, 0);
  j_lua_settable(luaVM, -3);
  j_lua_settop(luaVM, -2);
  j_lua_pushcclosure(luaVM, (int (__fastcall *)(lua_State *))DDL_LUA_ArrayIterator, 0);
  j_lua_setfield(luaVM, -10002, "ddlpairs");
}

