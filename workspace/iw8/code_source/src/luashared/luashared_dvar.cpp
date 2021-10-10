/*
==============
LuaShared_LuaCall_CheckDvarAccessAllowed
==============
*/

void __fastcall LuaShared_LuaCall_CheckDvarAccessAllowed(lua_State *luaVM, const dvar_t *dvar)
{
  ?LuaShared_LuaCall_CheckDvarAccessAllowed@@YAXPEAUlua_State@@PEBUdvar_t@@@Z(luaVM, dvar);
}

/*
==============
LuaShared_RegisterDvarFunctions
==============
*/

void __fastcall LuaShared_RegisterDvarFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterDvarFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_GetDvarDefaultValue
==============
*/
__int64 LuaShared_LuaCall_GetDvarDefaultValue(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  lua_State *v4; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.ResetDvar( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.ResetDvarString( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  if ( !VarByName )
  {
    j_lua_pushnil(luaVM);
    goto LABEL_18;
  }
  if ( VarByName->type )
  {
    if ( VarByName->type == 1 )
    {
      j_lua_pushnumber(luaVM, VarByName->reset.value);
      goto LABEL_18;
    }
    if ( VarByName->type == 5 || VarByName->type == 8 )
    {
      j_lua_pushnumber(luaVM, (float)VarByName->reset.integer);
      goto LABEL_18;
    }
    v4 = luaVM;
    if ( VarByName->type == 9 )
    {
      j_lua_pushstring(luaVM, VarByName->reset.string);
      goto LABEL_18;
    }
    v5 = 0;
  }
  else
  {
    v5 = VarByName->reset.color[0];
    v4 = luaVM;
  }
  j_lua_pushboolean(v4, v5);
LABEL_18:
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_SetDvarLatch
==============
*/
__int64 LuaShared_LuaCall_SetDvarLatch(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaCall_SetDvarLatch_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_GetDvarString
==============
*/
__int64 LuaShared_LuaCall_GetDvarString(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  char *StringSafe; 
  unsigned int v5; 
  char *outValue; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarString( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarString( <dvarName> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( LUI_Workers_QueueDvar_GetString(VarByName, (const char **)&outValue) )
    {
      StringSafe = outValue;
    }
    else
    {
      StringSafe = (char *)Dvar_GetStringSafe(v2);
      outValue = StringSafe;
    }
    j_lua_pushstring(luaVM, StringSafe);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarInt
==============
*/
__int64 LuaShared_LuaCall_GetDvarInt(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  unsigned int v9; 
  int outValue; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarInt( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarInt( <dvarName> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  v4 = VarByName;
  if ( VarByName )
  {
    if ( LUI_Workers_QueueDvar_GetInt(VarByName, &outValue) )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, [rsp+28h+outValue] }
    }
    else if ( v4->type == 7 )
    {
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax }
      if ( (Dvar_GetUInt64Safe(v2) & 0x8000000000000000ui64) != 0i64 )
        *(double *)&_XMM1 = *(double *)&_XMM1 + 1.844674407370955e19;
    }
    else
    {
      Dvar_GetInt64Safe(v2);
      _XMM1 = 0i64;
      __asm { vcvtsi2sd xmm1, xmm1, rax; n }
    }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarFloat
==============
*/
__int64 LuaShared_LuaCall_GetDvarFloat(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  double FloatSafe; 
  unsigned int v5; 
  float outValue; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarFloat( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarFloat( <dvarName> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( LUI_Workers_QueueDvar_GetFloat(VarByName, &outValue) )
    {
      *(float *)&FloatSafe = outValue;
    }
    else
    {
      FloatSafe = Dvar_GetFloatSafe(v2);
      outValue = *(float *)&FloatSafe;
    }
    j_lua_pushnumber(luaVM, *(float *)&FloatSafe);
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarVector3
==============
*/
__int64 LuaShared_LuaCall_GetDvarVector3(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaCall_GetDvarVector3_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_GetDvarBool
==============
*/
__int64 LuaShared_LuaCall_GetDvarBool(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  bool BoolSafe; 
  unsigned int v6; 
  bool outValue; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarBool( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarBool( <dvarName> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  v4 = VarByName;
  if ( VarByName )
  {
    if ( LUI_Workers_QueueDvar_GetBool(VarByName, &outValue) )
    {
      BoolSafe = outValue;
    }
    else
    {
      if ( v4->type == 5 )
        BoolSafe = Dvar_GetIntSafe(v2) != 0;
      else
        BoolSafe = Dvar_GetBoolSafe(v2);
      outValue = BoolSafe;
    }
    j_lua_pushboolean(luaVM, BoolSafe);
  }
  else
  {
    j_lua_pushnil(luaVM);
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
LuaShared_LuaCall_GetDvarEnumNext
==============
*/
__int64 LuaShared_LuaCall_GetDvarEnumNext(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  const char *VariantString; 
  int stringCount; 
  int v7; 
  int EnumIndex; 
  int v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumNext( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumNext( <dvarName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) && (v2 = j_lua_tolstring(luaVM, 1, NULL), VarByName = Dvar_FindVarByName(v2), (v4 = VarByName) != NULL) && VarByName->type == 8 )
  {
    VariantString = Dvar_GetVariantString(v2);
    stringCount = v4->domain.enumeration.stringCount;
    if ( stringCount )
    {
      EnumIndex = LUA_FindEnumIndex(stringCount, v4, VariantString);
      v7 = (EnumIndex + 1) % v9;
    }
    else
    {
      v7 = 0;
    }
    j_lua_pushstring(luaVM, *(const char **)(v4->domain.integer64.max + 8i64 * v7));
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarEnumPrev
==============
*/
__int64 LuaShared_LuaCall_GetDvarEnumPrev(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  const char *VariantString; 
  int stringCount; 
  int v7; 
  int EnumIndex; 
  int v9; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumPrev( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumPrev( <dvarName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) && (v2 = j_lua_tolstring(luaVM, 1, NULL), VarByName = Dvar_FindVarByName(v2), (v4 = VarByName) != NULL) && VarByName->type == 8 )
  {
    VariantString = Dvar_GetVariantString(v2);
    stringCount = v4->domain.enumeration.stringCount;
    if ( stringCount )
    {
      EnumIndex = LUA_FindEnumIndex(stringCount, v4, VariantString);
      v7 = (EnumIndex + v9 - 1) % v9;
    }
    else
    {
      v7 = 0;
    }
    j_lua_pushstring(luaVM, *(const char **)(v4->domain.integer64.max + 8i64 * v7));
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarEnumList
==============
*/
__int64 LuaShared_LuaCall_GetDvarEnumList(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  __int64 stringCount; 
  int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumList( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarEnumList( <dvarName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) && (v2 = j_lua_tolstring(luaVM, 1, NULL), VarByName = Dvar_FindVarByName(v2), (v4 = VarByName) != NULL) && VarByName->type == 8 )
  {
    stringCount = VarByName->domain.enumeration.stringCount;
    j_lua_pushinteger(luaVM, 1i64);
    j_lua_createtable(luaVM, stringCount, 0);
    v6 = 1;
    v7 = stringCount;
    if ( stringCount >= 1 )
    {
      v8 = 0i64;
      do
      {
        j_lua_pushstring(luaVM, *(const char **)(v8 + v4->domain.integer64.max));
        j_lua_rawseti(luaVM, -2, v6++);
        v8 += 8i64;
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    j_lua_pushnil(luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_GetDvarType
==============
*/
__int64 LuaShared_LuaCall_GetDvarType(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarType( <dvarName> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarType( <dvarName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) && (v2 = j_lua_tolstring(luaVM, 1, NULL), (VarByName = Dvar_FindVarByName(v2)) != NULL) )
    j_lua_pushinteger(luaVM, VarByName->type);
  else
    j_lua_pushnil(luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_DvarExists
==============
*/
__int64 LuaShared_LuaCall_DvarExists(lua_State *const luaVM)
{
  const char *v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    v3 = Dvar_FindVarByName(v2) != NULL;
  }
  else
  {
    v3 = 0;
  }
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
LuaShared_LuaCall_SetDvarString
==============
*/
__int64 LuaShared_LuaCall_SetDvarString(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  const dvar_t *VarByName; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarString( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarString( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarString( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetString(VarByName, v3, 0);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetString_Internal(VarByName, v3);
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
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
LuaShared_LuaCall_SetDvarInt
==============
*/
__int64 LuaShared_LuaCall_SetDvarInt(lua_State *const luaVM)
{
  const char *v2; 
  double v3; 
  int v4; 
  const dvar_t *VarByName; 
  int v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarInt( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarInt( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarInt( <dvarName> <dvarValue> )");
  v3 = lua_tonumber32(luaVM, 2);
  v4 = (int)*(float *)&v3;
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetInt(VarByName, v4, 0);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetInt_Internal(VarByName, v4);
    }
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
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
LuaShared_LuaCall_SetDvarFloat
==============
*/
__int64 LuaShared_LuaCall_SetDvarFloat(lua_State *const luaVM)
{
  const char *v2; 
  double v3; 
  const dvar_t *VarByName; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarFloat( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarFloat( <dvarName> <dvarValue> )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarFloat( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = lua_tonumber32(luaVM, 2);
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetFloat(VarByName, *(const float *)&v3, 0);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetFloat_Internal(VarByName, *(float *)&v3);
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
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
LuaShared_LuaCall_SetDvarBool
==============
*/
__int64 LuaShared_LuaCall_SetDvarBool(lua_State *const luaVM)
{
  const char *v2; 
  bool v3; 
  const dvar_t *VarByName; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarBool( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarBool( <dvarName> <dvarValue> )");
  if ( j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarBool( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = j_lua_toboolean(luaVM, 2) != 0;
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetBool(VarByName, v3, 0);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetBool_Internal(VarByName, v3);
    }
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
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
LuaShared_LuaCall_SetDvarColor
==============
*/
__int64 LuaShared_LuaCall_SetDvarColor(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaCall_SetDvarColor_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_ResetDvar
==============
*/
__int64 LuaShared_LuaCall_ResetDvar(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Dvar.ResetDvar( <dvarName> <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.ResetDvarString( <dvarName> <dvarValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v2);
  if ( !VarByName )
    goto LABEL_15;
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    goto LABEL_17;
  switch ( VarByName->type )
  {
    case 0u:
      Dvar_SetBool_Internal(VarByName, VarByName->reset.enabled);
      v4 = 1;
      goto LABEL_16;
    case 1u:
      Dvar_SetFloat_Internal(VarByName, VarByName->reset.value);
      v4 = 1;
      goto LABEL_16;
    case 5u:
      Dvar_SetInt_Internal(VarByName, VarByName->reset.integer);
      v4 = 1;
      goto LABEL_16;
  }
  if ( VarByName->type != 9 )
  {
LABEL_15:
    v4 = 0;
    goto LABEL_16;
  }
  Dvar_SetString_Internal(VarByName, VarByName->reset.string);
  v4 = 1;
LABEL_16:
  j_lua_pushboolean(luaVM, v4);
LABEL_17:
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUA_FindEnumIndex
==============
*/
__int64 LUA_FindEnumIndex(int enumSize, const dvar_t *enumDvar, const char *enumString)
{
  unsigned int v3; 
  const char *const *strings; 
  __int64 v5; 
  __int64 v6; 

  v3 = 0;
  if ( enumSize <= 0 )
    return 0i64;
  strings = enumDvar->domain.enumeration.strings;
  v5 = enumSize;
  v6 = 0i64;
  while ( enumString != *strings )
  {
    ++v3;
    ++v6;
    ++strings;
    if ( v6 >= v5 )
      return 0i64;
  }
  return v3;
}

/*
==============
LuaShared_LuaCall_CheckDvarAccessAllowed
==============
*/
void LuaShared_LuaCall_CheckDvarAccessAllowed(lua_State *luaVM, const dvar_t *dvar)
{
  const dvar_t *v4; 
  unsigned int flags; 
  const char *UnobfuscatedName; 

  if ( !dvar && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_dvar.cpp", 506, ASSERT_TYPE_ASSERT, "(dvar)", (const char *)&queryFormat, "dvar") )
    __debugbreak();
  v4 = DCONST_DVARBOOL_lua_enableDvarModifiedFlagCheck;
  if ( !DCONST_DVARBOOL_lua_enableDvarModifiedFlagCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lua_enableDvarModifiedFlagCheck") )
    __debugbreak();
  if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
  {
    flags = v4->flags;
    if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v4->name) )
      __debugbreak();
  }
  if ( v4->current.enabled && (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & dvar->flags) != 0 )
  {
    UnobfuscatedName = Dvar_DevGetUnobfuscatedName(dvar->name);
    j_luaL_error(luaVM, "LUI Not allowed to set dvar '%s' at this time. This will cause performance issues and could deadlock. Assign to Code - UI", UnobfuscatedName);
  }
}

/*
==============
LuaShared_LuaCall_GetDvarVector3_impl
==============
*/
__int64 LuaShared_LuaCall_GetDvarVector3_impl(lua_State *const luaVM)
{
  const char *v2; 
  const dvar_t *VarByName; 
  const dvar_t *v4; 
  unsigned __int8 type; 
  char *integer64; 
  const char *UnobfuscatedName; 
  char *outValue; 
  vec3_t vec3Value; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.GetDvarVector3( ?<dvarName> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v2 = j_lua_tolstring(luaVM, 1, NULL);
    VarByName = Dvar_FindVarByName(v2);
    v4 = VarByName;
    if ( !VarByName )
    {
      j_lua_pushnil(luaVM);
      return 1i64;
    }
    vec3Value = vec3_origin;
    type = VarByName->type;
    if ( type == 3 )
      goto LABEL_12;
    if ( type == 9 )
    {
      if ( LUI_Workers_QueueDvar_GetString(v4, (const char **)&outValue) )
      {
        if ( Dvar_ConvertStringToVec3(outValue, &vec3Value) )
          goto LABEL_13;
        integer64 = outValue;
      }
      else
      {
        if ( Dvar_ConvertStringToVec3(v4->current.string, &vec3Value) )
          goto LABEL_13;
        integer64 = (char *)v4->current.integer64;
      }
      UnobfuscatedName = Dvar_DevGetUnobfuscatedName(v2);
      j_luaL_error(luaVM, "Dvar.GetDvarVector3: Dvar %s '%s' isn't parsable as a vector\n", UnobfuscatedName, integer64);
    }
    if ( type == 11 )
LABEL_12:
      vec3Value = *(vec3_t *)&v4->current.string;
LABEL_13:
    j_lua_createtable(luaVM, 0, 3);
    LuaShared_SetTableNumber("x", vec3Value.v[0], luaVM);
    LuaShared_SetTableNumber("y", vec3Value.v[1], luaVM);
    LuaShared_SetTableNumber("z", vec3Value.v[2], luaVM);
    return 1i64;
  }
  return 0i64;
}

/*
==============
LuaShared_LuaCall_SetDvarColor_impl
==============
*/
__int64 LuaShared_LuaCall_SetDvarColor_impl(lua_State *const luaVM)
{
  const char *v2; 
  double v3; 
  float v4; 
  double v5; 
  float v6; 
  double v7; 
  float v8; 
  double v9; 
  const dvar_t *VarByName; 
  int v11; 

  if ( j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  if ( !j_lua_isnumber(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarColor( <dvarName> <dvarRedValue> <dvarGreenValue> <dvarBlueValue> <dvarAlphaValue> )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = lua_tonumber32(luaVM, 2);
  v4 = *(float *)&v3;
  v5 = lua_tonumber32(luaVM, 3);
  v6 = *(float *)&v5;
  v7 = lua_tonumber32(luaVM, 4);
  v8 = *(float *)&v7;
  v9 = lua_tonumber32(luaVM, 5);
  VarByName = Dvar_FindVarByName(v2);
  if ( VarByName )
  {
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetColor(VarByName, v4, v6, v8, *(const float *)&v9, 0);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetColor_Internal(VarByName, v4, v6, v8, *(float *)&v9);
    }
    v11 = 1;
  }
  else
  {
    v11 = 0;
  }
  j_lua_pushboolean(luaVM, v11);
  return 1i64;
}

/*
==============
LuaShared_LuaCall_SetDvarLatch_impl
==============
*/
__int64 LuaShared_LuaCall_SetDvarLatch_impl(lua_State *const luaVM)
{
  const char *v3; 
  const dvar_t *VarByName; 
  const char *v5; 
  const char *v6; 
  int v7; 
  bool v8; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Dvar.SetDvarLatch( <dvarName>, <dvarValue> )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "Wrong type for dvar name, expected string.");
  if ( !j_lua_isstring(luaVM, 2) && !j_lua_isnumber(luaVM, 2) && j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "Wrong type for dvar value, only strings, numbers and booleans are supported for now.");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  VarByName = Dvar_FindVarByName(v3);
  if ( !VarByName )
    goto LABEL_34;
  if ( j_lua_isstring(luaVM, 2) && (unsigned __int8)(VarByName->type - 8) <= 1u )
  {
    v5 = j_lua_tolstring(luaVM, 2, NULL);
    v6 = v5;
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetString(VarByName, v5, 1);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetStringFromSource(VarByName, v6, DVAR_SOURCE_EXTERNAL);
    }
    v7 = 1;
    goto LABEL_35;
  }
  if ( j_lua_type(luaVM, 2) == 1 && !VarByName->type )
  {
    v8 = j_lua_toboolean(luaVM, 2) != 0;
    if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
    {
      LUI_Workers_QueueDvar_SetBool(VarByName, v8, 1);
    }
    else
    {
      LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
      Dvar_SetBoolFromSource(VarByName, v8, DVAR_SOURCE_EXTERNAL);
    }
    v7 = 1;
    goto LABEL_35;
  }
  if ( !j_lua_isnumber(luaVM, 2) || ((VarByName->type - 1) & 0xFB) != 0 )
    goto LABEL_34;
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  if ( VarByName->type != 1 )
  {
    if ( VarByName->type == 5 )
    {
      __asm { vcvttsd2si esi, xmm0 }
      if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
      {
        LUI_Workers_QueueDvar_SetInt(VarByName, _ESI, 1);
      }
      else
      {
        LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
        Dvar_SetIntFromSource(VarByName, _ESI, DVAR_SOURCE_EXTERNAL);
      }
      v7 = 1;
      goto LABEL_35;
    }
LABEL_34:
    v7 = 0;
    goto LABEL_35;
  }
  __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
  if ( (~*(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) & VarByName->flags) != 0 )
  {
    LUI_Workers_QueueDvar_SetFloat(VarByName, *(const float *)&_XMM6, 1);
  }
  else
  {
    LuaShared_LuaCall_CheckDvarAccessAllowed(luaVM, VarByName);
    Dvar_SetFloatFromSource(VarByName, *(float *)&_XMM6, DVAR_SOURCE_EXTERNAL);
  }
  v7 = 1;
LABEL_35:
  j_lua_pushboolean(luaVM, v7);
  return 1i64;
}

/*
==============
LuaShared_RegisterDvarFunctions
==============
*/
void LuaShared_RegisterDvarFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "Dvar", s_dvarFunctions);
  j_lua_settop(luaVM, -2);
}

