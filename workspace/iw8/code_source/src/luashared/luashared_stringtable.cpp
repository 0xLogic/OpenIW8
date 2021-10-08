/*
==============
LuaShared_RegisterTableFunctions
==============
*/

void __fastcall LuaShared_RegisterTableFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterTableFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_LuaCall_TableLookup
==============
*/
__int64 LuaShared_LuaCall_TableLookup(lua_State *const luaVM)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  int v5; 
  const char *v6; 
  unsigned int v7; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 4 )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookup( <filename>, <searchColumnNum>, <searchValue>, <returnValueColumnNum> ) - Incorrect number of parameters.\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookup( <filename>, <searchColumnNum>, <searchValue>, <returnValueColumnNum> ) - <filename> is not a string.\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookup( <filename>, <searchColumnNum>, <searchValue>, <returnValueColumnNum> ) - <searchColumnNum> is not a number.\n");
  if ( !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookup( <filename>, <searchColumnNum>, <searchValue>, <returnValueColumnNum> ) - <searchValue> is not a string.\n");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookup( <filename>, <searchColumnNum>, <searchValue>, <returnValueColumnNum> ) - <returnValueColumnNum> is not a number.\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = lua_tointeger32(luaVM, 2);
  v4 = j_lua_tolstring(luaVM, 3, NULL);
  v5 = lua_tointeger32(luaVM, 4);
  if ( Stringtable_GetAssetNonDefault(v2, (const StringTable **)&tablePtr) )
  {
    v6 = StringTable_Lookup(tablePtr, v3, v4, v5);
  }
  else
  {
    LUI_ReportErrorWithInfo("StringTable.TableLookup: Table not found", v2, luaVM);
    v6 = (char *)&queryFormat.fmt + 3;
  }
  j_lua_pushstring(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_TableLookupMultipleKeys
==============
*/
__int64 LuaShared_LuaCall_TableLookupMultipleKeys(lua_State *const luaVM)
{
  const char *v2; 
  int v3; 
  const char *v4; 
  int v5; 
  unsigned int v6; 
  StringTable *tablePtr; 
  int lookupColumns[6]; 
  char *lookupKeys[5]; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupMultipleKeys( <filename>, <lookupPairs>, <returnValueColumnNum> ) - Incorrect number of parameters.\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupMultipleKeys( <filename>, <lookupPairs>, <returnValueColumnNum> ) - <filename> is not a string.\n");
  if ( j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupMultipleKeys( <filename>, <lookupPairs>, <returnValueColumnNum> ) - <lookupPairs> is not a table.\n");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupMultipleKeys( <filename>, <lookupPairs>, <returnValueColumnNum> ) - <returnValueColumnNum> is not a number.\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = lua_tointeger32(luaVM, 3);
  if ( Stringtable_GetAssetNonDefault(v2, (const StringTable **)&tablePtr) )
  {
    v5 = LuaShared_ParseLookupPairs(luaVM, 2, lookupColumns, (const char **)lookupKeys, 5u);
    v4 = StringTable_MultipleKeyLookup(tablePtr, lookupColumns, (const char **)lookupKeys, v5, v3);
  }
  else
  {
    LUI_ReportErrorWithInfo("StringTable.TableLookupMultipleKeys: Table not found", v2, luaVM);
    v4 = (char *)&queryFormat.fmt + 3;
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
LuaShared_LuaCall_TableLookupByRow
==============
*/
__int64 LuaShared_LuaCall_TableLookupByRow(lua_State *const luaVM)
{
  const char *v2; 
  const char *ColumnValueForRow; 
  int v4; 
  int v5; 
  unsigned int v6; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupByRow( <filename>, <findRow>, <returnColumn> ) - Incorrect number of parameters.\n");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupByRow( <filename>, <findRow>, <returnColumn> ) - <filename> is not a string.\n");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupByRow( <filename>, <findRow>, <returnColumn> ) - <findRow> is not a number.\n");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupByRow( <filename>, <findRow>, <returnColumn> ) - <returnColumn> is not a number.\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  if ( Stringtable_GetAssetNonDefault(v2, (const StringTable **)&tablePtr) )
  {
    v4 = lua_tointeger32(luaVM, 3);
    v5 = lua_tointeger32(luaVM, 2);
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v5, v4);
  }
  else
  {
    LUI_ReportErrorWithInfo("StringTable.TableLookupByRow: Table not found", v2, luaVM);
    ColumnValueForRow = (char *)&queryFormat.fmt + 3;
  }
  j_lua_pushstring(luaVM, ColumnValueForRow);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_TableLookupGetRowNum
==============
*/
__int64 LuaShared_LuaCall_TableLookupGetRowNum(lua_State *const luaVM)
{
  const char *v2; 
  const char *v3; 
  int v4; 
  int v5; 
  unsigned int v6; 
  StringTable *tablePtr; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isstring(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isstring(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupRowNum( <filename>, <column>, <reference> )\n");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  if ( Stringtable_GetAssetNonDefault(v2, (const StringTable **)&tablePtr) )
  {
    v3 = j_lua_tolstring(luaVM, 3, NULL);
    v4 = lua_tointeger32(luaVM, 2);
    v5 = StringTable_LookupRowNumForValue(tablePtr, v4, v3);
    j_lua_pushinteger(luaVM, v5);
  }
  else
  {
    LUI_ReportErrorWithInfo("StringTable.TableLookupGetRowNum: Table not found", v2, luaVM);
    j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
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
LuaShared_LuaCall_TableLookupMultipleKeysGetRowNum
==============
*/
__int64 LuaShared_LuaCall_TableLookupMultipleKeysGetRowNum(lua_State *const luaVM)
{
  int v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 
  StringTable *tablePtr; 
  int lookupColumns[6]; 
  char *lookupKeys[5]; 

  v2 = LuaShared_ParseLookupPairs(luaVM, 2, lookupColumns, (const char **)lookupKeys, 5u);
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isstring(luaVM, 1) || j_lua_type(luaVM, 2) != 5 )
    j_luaL_error(luaVM, "USAGE: StringTable.TableLookupMultipleKeysGetRowNum( <filename>, <lookupPairs> )\n");
  v3 = j_lua_tolstring(luaVM, 1, NULL);
  if ( Stringtable_GetAssetNonDefault(v3, (const StringTable **)&tablePtr) )
  {
    v4 = StringTable_LookupRowNumForMultipleKeyValues(tablePtr, lookupColumns, (const char **)lookupKeys, v2);
    j_lua_pushinteger(luaVM, v4);
  }
  else
  {
    LUI_ReportErrorWithInfo("StringTable.TableLookupMultipleKeysGetRowNum: Table not found", v3, luaVM);
    j_lua_pushstring(luaVM, (const char *)&queryFormat.fmt + 3);
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
LuaShared_LuaCall_TableGetRowCount
==============
*/
__int64 LuaShared_LuaCall_TableGetRowCount(lua_State *const luaVM)
{
  int RowCount; 
  const char *v3; 
  unsigned int v4; 
  StringTable *tablePtr; 

  RowCount = 0;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: StringTable.TableGetRowCount( <tableName> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isstring(luaVM, 1) )
  {
    v3 = j_lua_tolstring(luaVM, 1, NULL);
    if ( Stringtable_GetAssetNonDefault(v3, (const StringTable **)&tablePtr) )
      RowCount = StringTable_GetRowCount(tablePtr);
    else
      LUI_ReportErrorWithInfo("StringTable.TableGetRowCount: Table not found", v3, luaVM);
  }
  j_lua_pushinteger(luaVM, RowCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_LuaCall_TableExists
==============
*/
__int64 LuaShared_LuaCall_TableExists(lua_State *const luaVM)
{
  const char *v2; 
  bool AssetNonDefault; 
  unsigned int v4; 
  StringTable *tablePtr; 

  v2 = j_lua_tolstring(luaVM, 1, NULL);
  AssetNonDefault = Stringtable_GetAssetNonDefault(v2, (const StringTable **)&tablePtr);
  j_lua_pushboolean(luaVM, AssetNonDefault);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LuaShared_ParseLookupPairs
==============
*/
__int64 LuaShared_ParseLookupPairs(lua_State *luaVM, int tableIndexInLuaVM, int *lookupColumns, const char **lookupKeys, const unsigned int maxLookupPairs)
{
  __int64 v9; 
  int v10; 
  int ComPrintChannelForVM; 

  v9 = 0i64;
  v10 = j_lua_gettop(luaVM);
  j_lua_pushinteger(luaVM, 1i64);
  j_lua_gettable(luaVM, tableIndexInLuaVM);
  while ( j_lua_type(luaVM, -1) )
  {
    if ( (unsigned int)v9 >= maxLookupPairs )
    {
      ComPrintChannelForVM = LuaShared_GetComPrintChannelForVM(luaVM);
      Com_PrintError(ComPrintChannelForVM, "Too many pairs specified for table lookup.\n");
    }
    else
    {
      j_lua_getfield(luaVM, -1, "col");
      if ( !j_lua_isnumber(luaVM, -1) )
        j_luaL_error(luaVM, "Each lookup pair must use the following format: { { col = 1, key = \"key1\" }, { col = 5, key = \"key2\" }, ... }.\n");
      lookupColumns[v9] = lua_tointeger32(luaVM, -1);
      j_lua_settop(luaVM, -2);
      j_lua_getfield(luaVM, -1, "key");
      if ( !j_lua_isstring(luaVM, -1) )
        j_luaL_error(luaVM, "Each lookup pair must use the following format: { { col = 1, key = \"key1\" }, { col = 5, key = \"key2\" }, ... }.\n");
      lookupKeys[v9] = j_lua_tolstring(luaVM, -1, NULL);
      j_lua_settop(luaVM, -2);
      v9 = (unsigned int)(v9 + 1);
    }
    j_lua_settop(luaVM, -2);
    j_lua_pushinteger(luaVM, (unsigned int)(v9 + 1));
    j_lua_gettable(luaVM, tableIndexInLuaVM);
  }
  j_lua_settop(luaVM, -2);
  if ( j_lua_gettop(luaVM) != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_stringtable.cpp", 113, ASSERT_TYPE_ASSERT, "(lua_gettop( luaVM ) == initialLuaVMTop)", (const char *)&queryFormat, "lua_gettop( luaVM ) == initialLuaVMTop") )
    __debugbreak();
  return (unsigned int)v9;
}

/*
==============
LuaShared_RegisterTableFunctions
==============
*/
void LuaShared_RegisterTableFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "StringTable", s_tableFunctions);
  j_lua_settop(luaVM, -2);
}

