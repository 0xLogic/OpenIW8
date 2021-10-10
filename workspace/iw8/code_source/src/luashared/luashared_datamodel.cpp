/*
==============
LuaShared_RegisterDataModelFunctions
==============
*/

void __fastcall LuaShared_RegisterDataModelFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterDataModelFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_DataModel_CreateModel
==============
*/
__int64 LuaShared_LuaCall_DataModel_CreateModel(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned __int16 v3; 
  const char *v4; 
  unsigned __int16 ModelFromPath; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: DataModel.CreateModel( <parent_model>, <model_name> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isstring(luaVM, 2) && (v3 = (unsigned __int16)j_lua_touserdata(luaVM, 1), v4 = j_lua_tolstring(luaVM, 2, NULL), (ModelFromPath = LUI_Model_CreateModelFromPath(v3, v4)) != 0) )
    j_lua_pushlightuserdata(luaVM, (void *)ModelFromPath);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_DataModel_UnsubscribeAndFreeModel
==============
*/
__int64 LuaShared_LuaCall_DataModel_UnsubscribeAndFreeModel(lua_State *const luaVM)
{
  unsigned __int16 v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DataModel.UnsubscribeAndFreeModel( <model> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = (unsigned __int16)j_lua_touserdata(luaVM, 1);
    LUI_Model_UnsubscribeAndFreeModel(v2);
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
LuaShared_LuaCall_DataModel_GetGlobalModel
==============
*/
__int64 LuaShared_LuaCall_DataModel_GetGlobalModel(lua_State *const luaVM)
{
  unsigned __int16 GlobalModel; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: DataModel.GetGlobalModel()");
  if ( j_lua_gettop(luaVM) || (GlobalModel = LUI_Model_GetGlobalModel()) == 0 )
  {
    v3 = 0;
  }
  else
  {
    j_lua_pushlightuserdata(luaVM, (void *)GlobalModel);
    v3 = 1;
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v4);
  }
  return v3;
}

/*
==============
LuaShared_LuaCall_DataModel_GetModel
==============
*/
__int64 LuaShared_LuaCall_DataModel_GetModel(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned __int16 v3; 
  const char *v4; 
  unsigned __int16 ModelFromPath; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) || !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: DataModel.GetModel( <parent_model>, <model_name> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) && j_lua_isstring(luaVM, 2) && (v3 = (unsigned __int16)j_lua_touserdata(luaVM, 1), v4 = j_lua_tolstring(luaVM, 2, NULL), (ModelFromPath = LUI_Model_GetModelFromPath(v3, v4)) != 0) )
    j_lua_pushlightuserdata(luaVM, (void *)ModelFromPath);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_DataModel_GetModelForController
==============
*/
__int64 LuaShared_LuaCall_DataModel_GetModelForController(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned __int16 ModelForController; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DataModel.GetModelForController( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) && (v3 = lua_tointeger32(luaVM, 1), (ModelForController = LUI_Model_GetModelForController(v3)) != 0) )
    j_lua_pushlightuserdata(luaVM, (void *)ModelForController);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_DataModel_GetModelForOmnvar
==============
*/
__int64 LuaShared_LuaCall_DataModel_GetModelForOmnvar(lua_State *const luaVM)
{
  unsigned int v2; 
  const char *v3; 
  int v4; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  unsigned __int16 ModelFromOmnvar; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: DataModel.GetModelForOmnvar( <omnvar_name>, <controller_index> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isstring(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (v3 = j_lua_tolstring(luaVM, 1, NULL), v4 = lua_tointeger32(luaVM, 2), IndexByName = BG_Omnvar_GetIndexByName(v3), IndexByName != -1) && (Def = BG_Omnvar_GetDef(IndexByName), (ModelFromOmnvar = LUI_Model_GetModelFromOmnvar(v4, Def)) != 0) )
    j_lua_pushlightuserdata(luaVM, (void *)ModelFromOmnvar);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_DataModel_GetModelValue
==============
*/
__int64 LuaShared_LuaCall_DataModel_GetModelValue(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned __int16 v3; 
  unsigned __int16 v4; 
  __int32 v5; 
  __int32 v6; 
  __int32 v7; 
  const char *String; 
  double Real; 
  int Int; 
  bool Bool; 
  unsigned int v12; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DataModel.GetModelValue( <model> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = (unsigned __int16)j_lua_touserdata(luaVM, 1);
    v4 = v3;
    if ( !v3 )
    {
LABEL_7:
      j_lua_pushnil(luaVM);
      goto LABEL_17;
    }
    v5 = LUI_Model_GetDataType(v3) - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            goto LABEL_7;
          String = LUI_Model_GetString(v4);
          j_lua_pushstring(luaVM, String);
        }
        else
        {
          Real = LUI_Model_GetReal(v4);
          j_lua_pushnumber(luaVM, *(float *)&Real);
        }
      }
      else
      {
        Int = LUI_Model_GetInt(v4);
        j_lua_pushinteger(luaVM, Int);
      }
    }
    else
    {
      Bool = LUI_Model_GetBool(v4);
      j_lua_pushboolean(luaVM, Bool);
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_17:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v12);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_DataModel_SetModelValue
==============
*/
__int64 LuaShared_LuaCall_DataModel_SetModelValue(lua_State *const luaVM)
{
  unsigned __int16 v2; 
  int v3; 
  double v4; 
  int v5; 
  const char *v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: DataModel.SetModelValue( <model>, <value> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isuserdata(luaVM, 1) )
  {
    v2 = (unsigned __int16)j_lua_touserdata(luaVM, 1);
    if ( j_lua_type(luaVM, 2) == 3 )
    {
      v3 = lua_tointeger32(luaVM, 2);
      v4 = lua_tonumber32(luaVM, 2);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v4 - (float)v3) & _xmm) > 0.001 )
        LUI_Model_SetReal(v2, *(float *)&v4);
      else
        LUI_Model_SetInt(v2, v3);
    }
    else if ( j_lua_type(luaVM, 2) == 1 )
    {
      v5 = j_lua_toboolean(luaVM, 2);
      LUI_Model_SetBool(v2, v5 != 0);
    }
    else if ( j_lua_isstring(luaVM, 2) )
    {
      v6 = j_lua_tolstring(luaVM, 2, NULL);
      LUI_Model_SetString(v2, v6);
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v7);
  }
  return 0i64;
}

/*
==============
LuaShared_RegisterDataModelFunctions
==============
*/
void LuaShared_RegisterDataModelFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "DataModel", s_dataModelFunctions);
  j_lua_settop(luaVM, -2);
}

