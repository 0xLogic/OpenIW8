/*
==============
LuaShared_PlayerData_SetupForDemoPlayback
==============
*/

void __fastcall LuaShared_PlayerData_SetupForDemoPlayback(int controllerIndex)
{
  ?LuaShared_PlayerData_SetupForDemoPlayback@@YAXH@Z(controllerIndex);
}

/*
==============
LuaShared_PlayerData_OnStatsFetched
==============
*/

void __fastcall LuaShared_PlayerData_OnStatsFetched(int controllerIndex, StatsSource statsSource)
{
  ?LuaShared_PlayerData_OnStatsFetched@@YAXHW4StatsSource@@@Z(controllerIndex, statsSource);
}

/*
==============
LuaShared_PlayerData_OnUserSignOut
==============
*/

void __fastcall LuaShared_PlayerData_OnUserSignOut(int controllerIndex)
{
  ?LuaShared_PlayerData_OnUserSignOut@@YAXH@Z(controllerIndex);
}

/*
==============
LuaShared_RegisterPlayerDataFunctions
==============
*/

void __fastcall LuaShared_RegisterPlayerDataFunctions(lua_State *luaVM)
{
  ?LuaShared_RegisterPlayerDataFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LuaShared_PlayerData_UpdateContext
==============
*/

void __fastcall LuaShared_PlayerData_UpdateContext(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  ?LuaShared_PlayerData_UpdateContext@@YAXHW4StatsSource@@W4StatsGroup@@@Z(controllerIndex, statsSource, statsGroup);
}

/*
==============
LuaShared_LuaCall_PlayerData_SetValue
==============
*/
__int64 LuaShared_LuaCall_PlayerData_SetValue(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaCall_PlayerData_SetValue_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_PlayerData_IO
==============
*/
__int64 LuaShared_LuaCall_PlayerData_IO(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LuaShared_LuaCall_PlayerData_IO_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_PlayerData_GetRootDDLState
==============
*/
__int64 LuaShared_LuaCall_PlayerData_GetRootDDLState(lua_State *const luaVM)
{
  unsigned int v3; 
  int ControllerFromClient; 
  StatsGroup v6; 
  const DDLDef *DefForStatsGroup; 
  unsigned int v8; 
  DDLState state; 

  v3 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: PlayerData.GetRootDDLState( statsGroup, gameMode )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    state.isValid = 0;
    *(_OWORD *)&state.member = _XMM0;
    state.offset = 0;
    state.arrayIndex = -1;
    if ( (unsigned __int8)lua_tointeger32(luaVM, 2) == 1 )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      GamerProfile_GetDDLDef(ControllerFromClient, SP_PROGRESSION);
      GamerProfile_GetDDLState(&state, ControllerFromClient, SP_PROGRESSION);
    }
    else
    {
      v6 = lua_tointeger32(luaVM, 1);
      DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(v6);
      LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, v6);
    }
    DDL_LuaCreateUserData(luaVM, &state, NULL);
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
LuaShared_LuaCall_PlayerData_IsArray
==============
*/
__int64 LuaShared_LuaCall_PlayerData_IsArray(lua_State *const luaVM)
{
  unsigned int v2; 
  const DDLState *v3; 
  bool IsArrayRoot; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isuserdata(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PlayerData.IsArray( ddlState )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isuserdata(luaVM, 1) )
  {
    v3 = (const DDLState *)j_lua_touserdata(luaVM, 1);
    IsArrayRoot = DDL_StateIsArrayRoot(v3);
    j_lua_pushboolean(luaVM, IsArrayRoot);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LuaShared_LuaCall_PlayerData_IO_impl
==============
*/
__int64 LuaShared_LuaCall_PlayerData_IO_impl(lua_State *const luaVM)
{
  int v3; 
  StatsGroup v4; 
  char ActiveGameMode; 
  StatsSource ActiveStatsSource; 
  LocalClientNum_t ClientFromController; 
  __int64 v8; 
  char v9; 
  DDLContext *DDLContext; 
  const DDLDef *DefForStatsGroup; 
  DDLContext *v13; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  DDLState state; 

  if ( j_lua_gettop(luaVM) < 2 || j_lua_gettop(luaVM) > 4 )
    j_luaL_error(luaVM, "USAGE: PlayerData.IO( controllerIndex, statsGroup, ?gameMode, ?statsSource )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PlayerData.IO( controllerIndex, statsGroup, ?gameMode, ?statsSource )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: PlayerData.IO( controllerIndex, statsGroup, ?gameMode, ?statsSource )");
  if ( j_lua_gettop(luaVM) >= 3 && !j_lua_isnumber(luaVM, 3) && !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: PlayerData.IO( controllerIndex, statsGroup, ?gameMode, ?statsSource )");
  v3 = j_lua_tointeger(luaVM, 1);
  v4 = (unsigned int)j_lua_tointeger(luaVM, 2);
  if ( j_lua_gettop(luaVM) >= 3 && j_lua_isnumber(luaVM, 3) )
    ActiveGameMode = j_lua_tointeger(luaVM, 3);
  else
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( j_lua_gettop(luaVM) >= 4 && j_lua_isnumber(luaVM, 4) )
    ActiveStatsSource = (unsigned int)j_lua_tointeger(luaVM, 4);
  else
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  ClientFromController = CL_Mgr_GetClientFromController(v3);
  v8 = ClientFromController;
  if ( (unsigned int)ClientFromController >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", ClientFromController, 2) )
      __debugbreak();
    LODWORD(v18) = 2;
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
  }
  if ( clientUIActives[v8].frontEndSceneState[0] )
    goto LABEL_32;
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v17) = 2;
    LODWORD(v15) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v17) )
      __debugbreak();
  }
  if ( clientUIActives[v8].connectionState < CA_CONNECTED || v4 != Com_PlayerData_GetLoadoutStatsGroupForGameMode() )
LABEL_32:
    v9 = 0;
  else
    v9 = 1;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  if ( ActiveGameMode == 1 )
  {
    GamerProfile_GetDDLState(&state, v3, SP_PROGRESSION);
    DDLContext = GamerProfile_GetDDLContext(v3, SP_PROGRESSION);
  }
  else
  {
    DefForStatsGroup = Com_PlayerData_GetDefForStatsGroup(v4);
    LiveStorage_InitializeDDLStateForStatsGroup(DefForStatsGroup, &state, v4);
    if ( v9 )
      DDLContext = CG_EditablePlayerData_GetDDLContext((const LocalClientNum_t)v8, v4);
    else
      DDLContext = LuaShared_PlayerData_GetContext(v3, ActiveStatsSource, v4);
  }
  v13 = DDLContext;
  if ( !state.isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 198, ASSERT_TYPE_ASSERT, "(state.isValid)", (const char *)&queryFormat, "state.isValid") )
    __debugbreak();
  if ( !v13->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 199, ASSERT_TYPE_ASSERT, "(context->buff)", (const char *)&queryFormat, "context->buff") )
    __debugbreak();
  DDL_LuaCreateUserData(luaVM, &state, v13);
  return 1i64;
}

/*
==============
LuaShared_LuaCall_PlayerData_SetValue_impl
==============
*/
__int64 LuaShared_LuaCall_PlayerData_SetValue_impl(lua_State *const luaVM)
{
  char v2; 
  DDLState *v3; 
  int v4; 
  int v5; 
  DDLContext *DDLContext; 
  StatsGroup v7; 
  StatsSource ActiveStatsSource; 
  DDLContext context; 
  DDLValue val; 

  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) && !j_lua_isstring(luaVM, 5) )
    j_luaL_error(luaVM, "USAGE: PlayerData.SetValue( statsGroup, gameMode, ddlState, controller, value )");
  if ( j_lua_gettop(luaVM) != 5 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isuserdata(luaVM, 3) || !j_lua_isnumber(luaVM, 4) || !j_lua_isnumber(luaVM, 5) && !j_lua_isstring(luaVM, 5) )
    return 0i64;
  v2 = lua_tointeger32(luaVM, 2);
  v3 = (DDLState *)j_lua_touserdata(luaVM, 3);
  v4 = lua_tointeger32(luaVM, 4);
  v5 = v4;
  if ( v2 == 1 )
  {
    DDLContext = GamerProfile_GetDDLContext(v4, SP_PROGRESSION);
  }
  else
  {
    v7 = lua_tointeger32(luaVM, 1);
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(v5);
    if ( !CL_PlayerData_GetDDLBuffer(&context, v5, ActiveStatsSource, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 126, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( &context, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), statsGroup ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( &context, controllerIndex, LiveStorage_GetActiveStatsSource( controllerIndex ), statsGroup )") )
      __debugbreak();
    DDLContext = &context;
  }
  if ( DDL_LUA_ValueLuaToDDL(luaVM, 5, v3, &val) )
    DDL_SetValue(v3, DDLContext, val);
  return 0i64;
}

/*
==============
LuaShared_PlayerData_GetContext
==============
*/
DDLContext *LuaShared_PlayerData_GetContext(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  __int64 v3; 
  LocalClientNum_t ClientFromController; 
  __int64 v7; 
  DDLContext *v8; 
  DDLContext *v9; 
  __int64 v11; 
  __int64 v13; 
  int v14; 
  StatsSource v15; 

  v3 = statsGroup;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v14 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v14) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 6 )
  {
    LODWORD(v13) = 6;
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 75, ASSERT_TYPE_ASSERT, "(unsigned)( statsGroup ) < (unsigned)( STATSGROUP_COUNT )", "statsGroup doesn't index STATSGROUP_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( (unsigned int)statsSource >= STATS_COUNT )
  {
    LODWORD(v13) = 2;
    LODWORD(v11) = statsSource;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( statsSource ) < (unsigned)( STATS_COUNT )", "statsSource doesn't index STATS_COUNT\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
  if ( CL_Demo_IsPlayingServer(ClientFromController) )
  {
    if ( (unsigned int)v3 >= 6 )
    {
      LODWORD(v13) = 6;
      LODWORD(v11) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( statsGroup ) < (unsigned)( ( sizeof( *array_counter( s_luiPlayerData_demoContexts ) ) + 0 ) )", "statsGroup doesn't index ARRAY_COUNT( s_luiPlayerData_demoContexts )\n\t%i not in [0, %i)", v11, v13) )
        __debugbreak();
    }
    v7 = v3;
    v8 = s_luiPlayerData_demoContexts;
  }
  else
  {
    if ( !LiveStorage_DoWeHaveStatsForSource(controllerIndex, statsSource) )
    {
      v15 = statsSource;
      LODWORD(v13) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 90, ASSERT_TYPE_ASSERT, "(LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource ))", "%s\n\tMissing stats for controller %d, statsSource %d", "LiveStorage_DoWeHaveStatsForSource( controllerIndex, statsSource )", v13, v15) )
        __debugbreak();
    }
    v8 = s_contexts;
    v7 = v3 + 6 * statsSource + (__int64)(12 * controllerIndex);
  }
  v9 = &v8[v7];
  if ( !v9->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 97, ASSERT_TYPE_ASSERT, "(context->buff)", (const char *)&queryFormat, "context->buff") )
    __debugbreak();
  return v9;
}

/*
==============
LuaShared_PlayerData_OnStatsFetched
==============
*/
void LuaShared_PlayerData_OnStatsFetched(int controllerIndex, StatsSource statsSource)
{
  DDLContext *v4; 
  int i; 

  v4 = &s_contexts[6 * statsSource + (__int64)(12 * controllerIndex)];
  for ( i = 0; i < 6; ++i )
  {
    if ( !CL_PlayerData_GetDDLBuffer(v4, controllerIndex, statsSource, (StatsGroup)i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 38, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( contexts + statsGroup, controllerIndex, statsSource, static_cast<StatsGroup>( statsGroup ) ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( contexts + statsGroup, controllerIndex, statsSource, static_cast<StatsGroup>( statsGroup ) )") )
      __debugbreak();
    ++v4;
  }
}

/*
==============
LuaShared_PlayerData_OnUserSignOut
==============
*/
void LuaShared_PlayerData_OnUserSignOut(int controllerIndex)
{
  memset_0(&s_contexts[12 * controllerIndex], 0, 0x240ui64);
}

/*
==============
LuaShared_PlayerData_SetupForDemoPlayback
==============
*/
void LuaShared_PlayerData_SetupForDemoPlayback(int controllerIndex)
{
  DDLContext *v2; 
  int i; 

  v2 = s_luiPlayerData_demoContexts;
  for ( i = 0; i < 6; ++i )
  {
    if ( !CL_PlayerData_GetDDLBufferForDemo(v2, controllerIndex, (StatsGroup)i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 64, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBufferForDemo( &s_luiPlayerData_demoContexts[statsGroup], controllerIndex, static_cast<StatsGroup>( statsGroup ) ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBufferForDemo( &s_luiPlayerData_demoContexts[statsGroup], controllerIndex, static_cast<StatsGroup>( statsGroup ) )") )
      __debugbreak();
    ++v2;
  }
}

/*
==============
LuaShared_PlayerData_UpdateContext
==============
*/
void LuaShared_PlayerData_UpdateContext(int controllerIndex, StatsSource statsSource, StatsGroup statsGroup)
{
  if ( !CL_PlayerData_GetDDLBuffer(&s_contexts[6 * statsSource + statsGroup + (__int64)(12 * controllerIndex)], controllerIndex, statsSource, statsGroup) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\luashared\\luashared_playerdata.cpp", 47, ASSERT_TYPE_ASSERT, "(CL_PlayerData_GetDDLBuffer( contexts + statsGroup, controllerIndex, statsSource, statsGroup ))", (const char *)&queryFormat, "CL_PlayerData_GetDDLBuffer( contexts + statsGroup, controllerIndex, statsSource, statsGroup )") )
    __debugbreak();
}

/*
==============
LuaShared_RegisterPlayerDataFunctions
==============
*/
void LuaShared_RegisterPlayerDataFunctions(lua_State *luaVM)
{
  j_luaL_register(luaVM, "PlayerData", s_playerDataFunctions);
  j_lua_settop(luaVM, -2);
}

