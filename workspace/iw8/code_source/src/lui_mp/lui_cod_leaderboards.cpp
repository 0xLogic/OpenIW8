/*
==============
LUI_CoD_RegisterLeaderboardsFunctions
==============
*/

void __fastcall LUI_CoD_RegisterLeaderboardsFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterLeaderboardsFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterLeaderboardsFunctions
==============
*/
void LUI_CoD_RegisterLeaderboardsFunctions(lua_State *luaVM)
{
  int v2; 
  LUIMethod<LUILeaderboardsPackage> *v3; 
  int i; 

  j_lua_getfield(luaVM, -10002, "Leaderboards");
  if ( !j_lua_type(luaVM, -1) )
  {
    j_lua_settop(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    j_lua_setfield(luaVM, -10002, "Leaderboards");
    j_lua_getfield(luaVM, -10002, "Leaderboards");
  }
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 193, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  v2 = j_lua_gettop(luaVM);
  v3 = LUIMethod<LUILeaderboardsPackage>::list;
  for ( i = v2; v3; v3 = v3->next )
  {
    j_lua_pushstring(luaVM, v3->name);
    j_lua_pushcclosure(luaVM, v3->func, 0);
    j_lua_settable(luaVM, i);
  }
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_AddVisiblePlayersToPlayercardDownloadCache
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_AddVisiblePlayersToPlayercardDownloadCache(lua_State *luaVM)
{
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetRowData( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetRowData( controllerIndex )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ecx, xmm0; controllerIndex }
  LB_AddVisibleRowsToPlayerCardCache(_ECX);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_Clear
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_Clear(lua_State *luaVM)
{
  unsigned int v2; 

  LB_ClearLeaderboard();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_GetNumRows
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_GetNumRows(lua_State *luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, (int)lbGlob.leaderboard.userStats.displayableRows);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_GetPlayerRowData
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_GetPlayerRowData(lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 
  LeaderboardDef *lbDef; 
  LocalClientNum_t v6; 
  int v7; 
  __int64 v8; 
  LbColumnDef *v9; 
  const char *v10; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetPlayerRowData( controllerIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetPlayerRowData( controllerIndex )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si ecx, xmm0; controllerIndex }
  ClientFromController = CL_Mgr_GetClientFromController(_ECX);
  lbDef = lbGlob.leaderboard.lbDef;
  v6 = ClientFromController;
  if ( !lbGlob.leaderboard.lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_leaderboards.cpp", 160, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  j_lua_createtable(luaVM, 0, 0);
  v7 = 0;
  if ( lbDef->columnCount > 0 )
  {
    v8 = 0i64;
    do
    {
      v9 = &lbDef->columns[v8];
      v10 = LB_FeederItemText_Player(v6, v9);
      if ( v10 )
        LUI_SetTableString(v9->name, v10, luaVM);
      ++v7;
      ++v8;
    }
    while ( v7 < lbDef->columnCount );
  }
  LUI_SetTableBool("isMyPlayer", 1, luaVM);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v11);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_GetPlayerRowIndex
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_GetPlayerRowIndex(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetPlayerRowIndex()");
  if ( lbGlob.leaderboard.userRow < 0 )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, lbGlob.leaderboard.userRow);
    v2 = 1;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_GetRowData
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_GetRowData(lua_State *luaVM)
{
  LocalClientNum_t ClientFromController; 
  int v5; 
  LeaderboardDef *lbDef; 
  int v7; 
  int v8; 
  __int64 v9; 
  LbColumnDef *v10; 
  const char *v11; 
  const char *v12; 
  unsigned int v13; 
  XUID outUser; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetRowData( controllerIndex, rowIndex )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetRowData( controllerIndex, rowIndex )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.GetRowData( controllerIndex, rowIndex )");
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
  __asm { vcvttsd2si r13d, xmm0 }
  ClientFromController = CL_Mgr_GetClientFromController(_ER13);
  v5 = lui_tointeger32(luaVM, 2);
  lbDef = lbGlob.leaderboard.lbDef;
  v7 = v5;
  if ( !lbGlob.leaderboard.lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_leaderboards.cpp", LODWORD(lbGlob.leaderboard.lbDef) + 96, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  j_lua_createtable(luaVM, 0, 0);
  v8 = 0;
  if ( lbDef->columnCount > 0 )
  {
    v9 = 0i64;
    do
    {
      v10 = &lbDef->columns[v9];
      v11 = LB_FeederItemText_Platform(ClientFromController, v7, v10);
      if ( v11 )
        LUI_SetTableString(v10->name, v11, luaVM);
      ++v8;
      ++v9;
    }
    while ( v8 < lbDef->columnCount );
  }
  LUI_SetTableBool("isMyPlayer", lbGlob.leaderboard.userRow == v7, luaVM);
  XUID::XUID(&outUser);
  if ( LB_GetUserForRow(_ER13, v7, &outUser) )
  {
    v12 = XUID::ToString(&outUser);
    LUI_SetTableString("xuid", v12, luaVM);
  }
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v13);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_Open
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_Open(lua_State *luaVM)
{
  const char *v2; 
  const char *v3; 
  int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 3 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Open( file, duration, isVirtual )");
  if ( !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Open( file, duration, isVirtual )");
  if ( !j_lua_isstring(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Open( file, duration, isVirtual )");
  if ( j_lua_type(luaVM, 3) != 1 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Open( file, duration, isVirtual )");
  v2 = j_lua_tolstring(luaVM, 1, NULL);
  v3 = j_lua_tolstring(luaVM, 2, NULL);
  v4 = j_lua_toboolean(luaVM, 3);
  LB_OpenLeaderboardExt(v2, v3, v4 != 0);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUILeaderboardsPackage_Scroll
==============
*/
__int64 LUI_LuaCall_LUILeaderboardsPackage_Scroll(lua_State *luaVM)
{
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  bool updated; 
  unsigned int v11; 

  if ( j_lua_gettop(luaVM) != 5 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 5");
  v3 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Scroll( controllerIndex, filter, fromRow, toRow, isPlatformOnly )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Scroll( controllerIndex, filter, fromRow, toRow, isPlatformOnly )");
  if ( !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Scroll( controllerIndex, filter, fromRow, toRow, isPlatformOnly )");
  if ( !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Scroll( controllerIndex, filter, fromRow, toRow, isPlatformOnly )");
  if ( j_lua_type(luaVM, 5) != 1 )
    j_luaL_error(luaVM, "USAGE: Leaderboards.Scroll( controllerIndex, filter, fromRow, toRow, isPlatformOnly )");
  if ( lbGlob.leaderboard.isUpdating )
  {
    v3 = 0;
  }
  else
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si ecx, xmm0; controllerIndex }
    ClientFromController = CL_Mgr_GetClientFromController(_ECX);
    v6 = lui_tointeger32(luaVM, 2);
    v7 = lui_tointeger32(luaVM, 3);
    v8 = lui_tointeger32(luaVM, 4);
    v9 = j_lua_toboolean(luaVM, 5);
    updated = LB_UpdateLeaderboard(ClientFromController, v6, v7, v8, v9 != 0);
    j_lua_pushboolean(luaVM, updated);
  }
  if ( (int)v3 > j_lua_gettop(luaVM) )
  {
    v11 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v3, v11);
  }
  return v3;
}

