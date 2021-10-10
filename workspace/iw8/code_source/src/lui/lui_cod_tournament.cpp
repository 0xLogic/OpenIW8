/*
==============
LUI_CoD_RegisterTournamentFunctions
==============
*/

void __fastcall LUI_CoD_RegisterTournamentFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterTournamentFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_RegisterTournamentFunctions
==============
*/
void LUI_CoD_RegisterTournamentFunctions(lua_State *luaVM)
{
  int v2; 
  LUIMethod<LUITournamentPackage> *v3; 
  int i; 

  j_lua_getfield(luaVM, -10002, "Tournament");
  if ( !j_lua_type(luaVM, -1) )
  {
    j_lua_settop(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    j_lua_setfield(luaVM, -10002, "Tournament");
    j_lua_getfield(luaVM, -10002, "Tournament");
  }
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 193, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  v2 = j_lua_gettop(luaVM);
  v3 = LUIMethod<LUITournamentPackage>::list;
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
LUI_LuaCall_LUITournamentPackage_AmIReadyToStart
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_AmIReadyToStart(lua_State *luaVM)
{
  unsigned __int16 MyCurrentMatch; 
  unsigned __int16 MyCurrentRound; 
  bool IsUserReadyToStart; 
  unsigned int v5; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 
  XUID result; 

  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  Live_GetXuid(&result, controllerIndex);
  MyCurrentMatch = OnlineTournament_GetMyCurrentMatch();
  MyCurrentRound = OnlineTournament_GetMyCurrentRound();
  IsUserReadyToStart = OnlineTournament_IsUserReadyToStart(result, MyCurrentRound, MyCurrentMatch);
  j_lua_pushboolean(luaVM, IsUserReadyToStart);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_CanIReadyForMyMatch
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_CanIReadyForMyMatch(lua_State *luaVM)
{
  unsigned __int16 MyCurrentRound; 
  unsigned __int16 MyCurrentMatch; 
  int v4; 
  unsigned int v5; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 
  XUID result; 

  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  MyCurrentRound = OnlineTournament_GetMyCurrentRound();
  MyCurrentMatch = OnlineTournament_GetMyCurrentMatch();
  Live_GetXuid(&result, controllerIndex);
  v4 = OnlineTournament_GetMMTournamentStatus() == PLAYING && !OnlineTournament_IsMatchComplete(MyCurrentRound, MyCurrentMatch) && !OnlineTournament_GetLobbyId(MyCurrentRound, MyCurrentMatch);
  if ( OnlineTournament_AreMatchPrereqsComplete(MyCurrentRound, MyCurrentMatch) )
    OnlineTournament_IsUserReadyToStart(result, MyCurrentRound, MyCurrentMatch);
  j_lua_pushboolean(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_CanPartyEnterTournament
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_CanPartyEnterTournament(lua_State *luaVM)
{
  signed int v2; 
  int Int_Internal_DebugName; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Engine.CanPartyEnterTournament()\n");
  v2 = Party_CountUIVisibleMembers(&g_partyData);
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_definition_partysize, "online_tournament_definition_partysize");
  j_lua_pushboolean(luaVM, v2 <= Int_Internal_DebugName);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_CanSpectateMatch
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_CanSpectateMatch(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  int IsMatchInProgress; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.CanSpectateMatch( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && (unsigned __int8)OnlineTournament_GetMyParticipationStatus() != ACTIVE )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = truncate_cast<unsigned short,int>(v2);
    IsMatchInProgress = OnlineTournament_IsMatchInProgress(v5, v4);
  }
  else
  {
    IsMatchInProgress = 0;
  }
  j_lua_pushboolean(luaVM, IsMatchInProgress);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_CancelSignUp
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_CancelSignUp(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.CancelSignUp( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    OnlineTournament_SetQueuedUpForNextTournament(v3, 0);
    j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_Enter
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_Enter(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.Enter( controllerIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    OnlineTournament_Enter(v2);
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
LUI_LuaCall_LUITournamentPackage_ForceStartMyMatch
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_ForceStartMyMatch(lua_State *luaVM)
{
  unsigned __int16 MyCurrentMatch; 
  unsigned __int16 MyCurrentRound; 
  unsigned int v4; 

  MyCurrentMatch = OnlineTournament_GetMyCurrentMatch();
  MyCurrentRound = OnlineTournament_GetMyCurrentRound();
  OnlineTournament_MarkMatchReadyToStart(MyCurrentRound, MyCurrentMatch);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetAverageDuration
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetAverageDuration(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetAverageDuration()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, 10i64);
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
LUI_LuaCall_LUITournamentPackage_GetCurrentSubMatchIndex
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetCurrentSubMatchIndex(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned __int16 v4; 
  int v5; 
  unsigned __int16 v6; 
  int CurrentSubMatchIndex; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetSubMatchWinner( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = lui_tointeger32(luaVM, 2);
    v6 = truncate_cast<unsigned short,int>(v5);
    CurrentSubMatchIndex = OnlineTournament_GetCurrentSubMatchIndex(v4, v6);
    j_lua_pushinteger(luaVM, CurrentSubMatchIndex);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMapNameForRound
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMapNameForRound(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned __int16 v4; 
  const char *MapNameForRound; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetMapNameForRound( round )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = truncate_cast<unsigned short,int>(v3);
    MapNameForRound = OnlineTournament_GetMapNameForRound(v4);
    j_lua_pushstring(luaVM, MapNameForRound);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMatchTime
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMatchTime(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetMatchTime( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = truncate_cast<unsigned short,int>(v4);
    v6 = truncate_cast<unsigned short,int>(v3);
    OnlineTournament_GetCurrentMatchTime(v6, v5);
    _XMM1 = 0i64;
    __asm { vcvtsi2sd xmm1, xmm1, eax; n }
    j_lua_pushnumber(luaVM, *(long double *)&_XMM1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMyCurrentMatch
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyCurrentMatch(lua_State *luaVM)
{
  unsigned __int16 MyCurrentMatch; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetMyCurrentMatch()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    MyCurrentMatch = OnlineTournament_GetMyCurrentMatch();
    j_lua_pushinteger(luaVM, MyCurrentMatch);
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
LUI_LuaCall_LUITournamentPackage_GetMyCurrentRound
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyCurrentRound(lua_State *luaVM)
{
  unsigned __int16 MyCurrentRound; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetMyCurrentRound()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    MyCurrentRound = OnlineTournament_GetMyCurrentRound();
    j_lua_pushinteger(luaVM, MyCurrentRound);
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
LUI_LuaCall_LUITournamentPackage_GetMyMatchReadyTimer
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyMatchReadyTimer(lua_State *luaVM)
{
  int MyMatchReadyTimer; 
  unsigned int v3; 

  MyMatchReadyTimer = OnlineTournament_GetMyMatchReadyTimer();
  j_lua_pushinteger(luaVM, MyMatchReadyTimer);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMyParticipationStatus
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyParticipationStatus(lua_State *luaVM)
{
  unsigned __int8 MyParticipationStatus; 
  unsigned int v3; 

  MyParticipationStatus = OnlineTournament_GetMyParticipationStatus();
  j_lua_pushinteger(luaVM, MyParticipationStatus);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMyTeamId
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyTeamId(lua_State *luaVM)
{
  int TeamForUser; 
  unsigned int v3; 
  int controllerIndex; 
  LocalClientNum_t localClientNum; 
  XUID result; 

  LUI_CoD_AttemptInferLocalClientAndController(&localClientNum, &controllerIndex);
  Live_GetXuid(&result, controllerIndex);
  TeamForUser = OnlineTournament_FindTeamForUser(result, NULL);
  j_lua_pushinteger(luaVM, TeamForUser);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetMyTournamentTime
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetMyTournamentTime(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetMyTournamentTime()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    v2 = 1000 * OnlineTournament_GetTimeUntilMyTournament();
    v3 = Sys_Milliseconds();
    j_lua_pushinteger(luaVM, v2 + v3);
    v4 = 1;
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v5);
  }
  return v4;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetNavigationDestination
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetNavigationDestination(lua_State *luaVM)
{
  int NavigationDestination; 
  unsigned int v3; 

  NavigationDestination = OnlineTournament_GetNavigationDestination();
  j_lua_pushinteger(luaVM, NavigationDestination);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetNumSubMatches
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetNumSubMatches(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetNumSubMatches( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    lui_tointeger32(luaVM, 1);
    lui_tointeger32(luaVM, 2);
    j_lua_pushinteger(luaVM, 8i64);
  }
  else
  {
    v2 = 0;
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
LUI_LuaCall_LUITournamentPackage_GetNumberOfTeams
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetNumberOfTeams(lua_State *luaVM)
{
  int Int_Internal_DebugName; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetNumberOfTeams()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_definition_teamcount, "online_tournament_definition_teamcount");
    j_lua_pushinteger(luaVM, Int_Internal_DebugName);
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
LUI_LuaCall_LUITournamentPackage_GetParticipantHealth
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetParticipantHealth(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned __int16 v3; 
  unsigned __int16 v4; 
  TournamentTeam v5; 
  int v6; 
  int ParticipantHealthByTeam; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Tournament.IsUserReady( round, match, team, member )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = (unsigned __int8)lui_tointeger32(luaVM, 3);
    if ( OnlineTournament_AreTeamsFlippedForBracket(v3, v4) )
      v5 = v5 == TEAM_0;
    v6 = lui_tointeger32(luaVM, 4);
    ParticipantHealthByTeam = OnlineTournament_GetParticipantHealthByTeam(v3, v4, v5, v6);
    j_lua_pushinteger(luaVM, ParticipantHealthByTeam);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v8);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetPartySize
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetPartySize(lua_State *luaVM)
{
  int Int_Internal_DebugName; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetPartySize()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_definition_partysize, "online_tournament_definition_partysize");
    j_lua_pushinteger(luaVM, Int_Internal_DebugName);
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
LUI_LuaCall_LUITournamentPackage_GetRecentEvents
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetRecentEvents(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetRecentEvents( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = truncate_cast<unsigned short,int>(v4);
    v6 = truncate_cast<unsigned short,int>(v3);
    OnlineTournament_PushRecentEventsForMatchToLUI(luaVM, v6, v5);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v7);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetRewards
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetRewards(lua_State *luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetRewards()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_createtable(luaVM, 0, 0);
    LUI_BeginTable("Rewards", luaVM);
    v2 = 1;
    v3 = 1i64;
    v4 = 3i64;
    do
    {
      LUI_BeginTable(v3, luaVM);
      LUI_SetTableInt("lootID", 30012i64, luaVM);
      LUI_BeginTable("AdditionalRewards", luaVM);
      LUI_SetTableInt("XP", 1000i64, luaVM);
      LUI_SetTableInt("CP", 200i64, luaVM);
      LUI_BeginTable("lootItems", 1, 0, LUI_luaVM);
      LUI_SetTableInt(1i64, 170000i64, LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      LUI_EndTable(LUI_luaVM);
      ++v3;
      --v4;
    }
    while ( v4 );
    LUI_EndTable(LUI_luaVM);
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
LUI_LuaCall_LUITournamentPackage_GetRoundCount
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetRoundCount(lua_State *luaVM)
{
  int RoundCount; 
  unsigned int v3; 

  RoundCount = OnlineTournament_GetRoundCount();
  j_lua_pushinteger(luaVM, RoundCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetScoreForBracket
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetScoreForBracket(lua_State *luaVM)
{
  int v2; 
  unsigned __int16 v3; 
  int v4; 
  unsigned __int16 v5; 
  TournamentTeam v6; 
  __int64 ScoreForBracket; 
  unsigned int v8; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetScoreForBracket( round, match, team )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = truncate_cast<unsigned short,int>(v2);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = truncate_cast<unsigned short,int>(v4);
    v6 = (unsigned __int8)lui_tointeger32(luaVM, 3);
    if ( OnlineTournament_AreTeamsFlippedForBracket(v3, v5) )
      v6 = v6 == TEAM_0;
    ScoreForBracket = OnlineTournament_GetScoreForBracket(v3, v5, v6);
  }
  else
  {
    ScoreForBracket = -1i64;
  }
  j_lua_pushinteger(luaVM, ScoreForBracket);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetSignUpCost
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetSignUpCost(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetSignUpCost()");
  if ( j_lua_gettop(luaVM) )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushinteger(luaVM, 200i64);
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
LUI_LuaCall_LUITournamentPackage_GetSignUpEndTime
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetSignUpEndTime(lua_State *luaVM)
{
  int Int_Internal_DebugName; 
  int TimeUntilNextTournament; 
  unsigned int v4; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetSignUpEndTime()");
  if ( j_lua_gettop(luaVM) )
  {
    v4 = 0;
  }
  else
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_online_tournament_registration_cutoff_time, "online_tournament_registration_cutoff_time");
    TimeUntilNextTournament = OnlineTournament_GetTimeUntilNextTournament(0);
    v4 = 1;
    if ( TimeUntilNextTournament <= Int_Internal_DebugName )
      TimeUntilNextTournament = OnlineTournament_GetTimeUntilNextTournament(1);
    v5 = Sys_Milliseconds();
    j_lua_pushinteger(luaVM, 1000 * (TimeUntilNextTournament - Int_Internal_DebugName) + v5);
  }
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v6);
  }
  return v4;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetSubMatchWinner
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetSubMatchWinner(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned __int16 v4; 
  int v5; 
  unsigned __int16 v6; 
  int v7; 
  int ScoreHistoryEntryForBracket; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetSubMatchWinner( round, match, subMatch )");
  if ( j_lua_gettop(luaVM) == 3 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = lui_tointeger32(luaVM, 2);
    v6 = truncate_cast<unsigned short,int>(v5);
    v7 = lui_tointeger32(luaVM, 3);
    ScoreHistoryEntryForBracket = OnlineTournament_GetScoreHistoryEntryForBracket(v4, v6, v7);
    if ( OnlineTournament_AreTeamsFlippedForBracket(v4, v6) )
    {
      if ( ScoreHistoryEntryForBracket )
      {
        if ( ScoreHistoryEntryForBracket == 1 )
          ScoreHistoryEntryForBracket = 0;
      }
      else
      {
        ScoreHistoryEntryForBracket = 1;
      }
    }
    j_lua_pushinteger(luaVM, ScoreHistoryEntryForBracket);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetTeamIdForBracket
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetTeamIdForBracket(lua_State *luaVM)
{
  int v2; 
  unsigned __int16 v3; 
  int v4; 
  unsigned __int16 v5; 
  TournamentTeam v6; 
  team_t TeamIdForBracket; 
  __int64 v8; 
  unsigned int v9; 

  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetTeamIdForBracket( round, match, team )");
  if ( j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) )
    goto LABEL_14;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = truncate_cast<unsigned short,int>(v2);
  v4 = lui_tointeger32(luaVM, 2);
  v5 = truncate_cast<unsigned short,int>(v4);
  v6 = (unsigned __int8)lui_tointeger32(luaVM, 3);
  if ( OnlineTournament_AreTeamsFlippedForBracket(v3, v5) )
    v6 = v6 == TEAM_0;
  TeamIdForBracket = OnlineTournament_GetTeamIdForBracket(v3, v5, v6);
  if ( TeamIdForBracket )
    v8 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(TeamIdForBracket);
  else
LABEL_14:
    v8 = -1i64;
  j_lua_pushinteger(luaVM, v8);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v9);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetTeamName
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetTeamName(lua_State *luaVM)
{
  int v2; 
  char *v3; 
  unsigned int v4; 
  char out_NameBuff[32]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.JoinLobby( teamID )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    OnlineTournament_GetTeamName(v2, out_NameBuff, 32);
    v3 = out_NameBuff;
  }
  else
  {
    v3 = "<Unknown>";
  }
  j_lua_pushstring(luaVM, v3);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetTeamSize
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetTeamSize(lua_State *luaVM)
{
  int TeamSize; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetTeamSize()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    TeamSize = OnlineTournament_GetTeamSize();
    j_lua_pushinteger(luaVM, TeamSize);
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
LUI_LuaCall_LUITournamentPackage_GetTimeRemainingOnBan
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetTimeRemainingOnBan(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int BanEndTimeLocal; 
  int v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.GetTimeRemainingOnBan( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    BanEndTimeLocal = LiveAntiCheat_FeatureGetBanEndTimeLocal(v3, 6);
    v5 = _time64(NULL);
    j_lua_pushinteger(luaVM, 1000 * (BanEndTimeLocal - v5));
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v6);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetTimeToStart
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetTimeToStart(lua_State *luaVM)
{
  int TimeUntilMyTournament; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetTimeToStart()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    TimeUntilMyTournament = OnlineTournament_GetTimeUntilMyTournament();
    j_lua_pushinteger(luaVM, TimeUntilMyTournament);
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
LUI_LuaCall_LUITournamentPackage_GetUserByTeam
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetUserByTeam(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  unsigned int v5; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetUserByTeam( team, member )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    OnlineTournament_GetParticipantByTeam(&result, v3, v4);
    LUI_PushXUID(luaVM, result);
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
LUI_LuaCall_LUITournamentPackage_GetUserNameByTeam
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetUserNameByTeam(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUITournamentPackage_GetUserNameByTeam_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetUserNameByTeam_impl
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetUserNameByTeam_impl(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  XUID result; 
  PlayerProfileData profileData; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetUserNameByTeam( team, member )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  OnlineTournament_GetParticipantByTeam(&result, v2, v3);
  PlayercardCache_GetPlayercard(result, "<unknown>", &profileData);
  j_lua_pushstring(luaVM, profileData.name);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_GetWinningTeam
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_GetWinningTeam(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned __int16 v4; 
  int v5; 
  unsigned __int16 v6; 
  team_t Winner; 
  bool v8; 
  __int64 v9; 
  unsigned int v10; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.GetWinningTeam( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = lui_tointeger32(luaVM, 2);
    v6 = truncate_cast<unsigned short,int>(v5);
    Winner = OnlineTournament_GetWinner(v4, v6);
    v8 = OnlineTournament_AreTeamsFlippedForBracket(v4, v6);
    if ( Winner == OnlineTournament_GetTeamIdForBracket(v4, v6, TEAM_0) )
    {
      v9 = v8;
    }
    else if ( Winner == OnlineTournament_GetTeamIdForBracket(v4, v6, TEAM_1) )
    {
      v9 = !v8;
    }
    else
    {
      v9 = -1i64;
    }
    j_lua_pushinteger(luaVM, v9);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v10);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_HandleReminder
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_HandleReminder(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  OnlinePlayFailureReason failureReason; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.HandleReminder( controllerIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_NO_CLIENTS )
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, v2);
    if ( Live_CanUserPlayOnline(v2, &failureReason) )
      OnlineTournament_DoReminderProcess(v2);
    else
      Com_SetErrorMessage("ONLINE/UNABLE_TO_PLAY_TOURNAMENT");
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
LUI_LuaCall_LUITournamentPackage_HasBracket
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_HasBracket(lua_State *luaVM)
{
  bool HasTournamentDoc; 
  unsigned int v3; 

  HasTournamentDoc = OnlineTournament_HasTournamentDoc();
  j_lua_pushboolean(luaVM, HasTournamentDoc);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_HasValidDatacenter
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_HasValidDatacenter(lua_State *luaVM)
{
  bool HasValidDatacenter; 
  unsigned int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Tournament.HasValidDatacenter()");
  if ( j_lua_gettop(luaVM) )
  {
    v3 = 0;
  }
  else
  {
    HasValidDatacenter = OnlineTournament_HasValidDatacenter();
    j_lua_pushboolean(luaVM, HasValidDatacenter);
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
LUI_LuaCall_LUITournamentPackage_IsBanned
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsBanned(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  bool IsBanned; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.IsBanned( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    IsBanned = LiveAntiCheat_FeatureIsBanned(v3, 6);
    j_lua_pushboolean(luaVM, IsBanned);
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
LUI_LuaCall_LUITournamentPackage_IsFetchingBracket
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsFetchingBracket(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 

  if ( Party_AreWeHost(&g_partyData) )
  {
    if ( OnlineTournament_RequestedMatchmakingBracket() || OnlineTournament_IsWaitingForMatchmakingBracket() )
    {
      v2 = 1;
      goto LABEL_9;
    }
  }
  else if ( !OnlineTournament_GetPartyHostIsQueuedForTournament() && !OnlineTournament_IsInTournament() )
  {
    v2 = 1;
    goto LABEL_9;
  }
  v2 = 0;
LABEL_9:
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsInTournament
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsInTournament(lua_State *luaVM)
{
  bool v2; 
  unsigned int v3; 

  v2 = OnlineTournament_IsInTournament();
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsMatchComplete
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsMatchComplete(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  int IsMatchComplete; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.IsMatchComplete( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = truncate_cast<unsigned short,int>(v2);
    IsMatchComplete = OnlineTournament_IsMatchComplete(v5, v4);
  }
  else
  {
    IsMatchComplete = 0;
  }
  j_lua_pushboolean(luaVM, IsMatchComplete);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsMatchInProgress
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsMatchInProgress(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  int IsMatchInProgress; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.IsMatchInProgress( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    v4 = truncate_cast<unsigned short,int>(v3);
    v5 = truncate_cast<unsigned short,int>(v2);
    IsMatchInProgress = OnlineTournament_IsMatchInProgress(v5, v4);
  }
  else
  {
    IsMatchInProgress = 0;
  }
  j_lua_pushboolean(luaVM, IsMatchInProgress);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsMyMatchReadyToStart
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsMyMatchReadyToStart(lua_State *luaVM)
{
  bool IsMyMatchReadyToStart; 
  unsigned int v3; 

  IsMyMatchReadyToStart = OnlineTournament_IsMyMatchReadyToStart();
  j_lua_pushboolean(luaVM, IsMyMatchReadyToStart);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsSignedUp
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsSignedUp(lua_State *luaVM)
{
  unsigned int v2; 
  bool IsQueuedUpForNextTournament; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.IsSignedUp( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    lui_tointeger32(luaVM, 1);
    IsQueuedUpForNextTournament = OnlineTournament_IsQueuedUpForNextTournament();
    j_lua_pushboolean(luaVM, IsQueuedUpForNextTournament);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsSimModeEnabled
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsSimModeEnabled(lua_State *luaVM)
{
  bool IsSimModeEnabled; 
  unsigned int v3; 

  IsSimModeEnabled = OnlineTournamentSim_IsSimModeEnabled();
  j_lua_pushboolean(luaVM, IsSimModeEnabled);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v3);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_IsUserReady
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_IsUserReady(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  unsigned __int16 v7; 
  bool IsUserReadyToStart; 
  unsigned int v9; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 4 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || !j_lua_isnumber(luaVM, 4) )
    j_luaL_error(luaVM, "USAGE: Tournament.IsUserReady( round, match, team, member )");
  if ( j_lua_gettop(luaVM) == 4 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) && j_lua_isnumber(luaVM, 3) && j_lua_isnumber(luaVM, 4) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    v4 = lui_tointeger32(luaVM, 2);
    v5 = lui_tointeger32(luaVM, 3);
    v6 = lui_tointeger32(luaVM, 4);
    OnlineTournament_GetParticipantByTeam(&result, v5, v6);
    LOWORD(v5) = truncate_cast<unsigned short,int>(v4);
    v7 = truncate_cast<unsigned short,int>(v3);
    IsUserReadyToStart = OnlineTournament_IsUserReadyToStart(result, v7, v5);
    j_lua_pushboolean(luaVM, IsUserReadyToStart);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v9);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_JoinLobby
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_JoinLobby(lua_State *luaVM)
{
  unsigned int v2; 

  if ( !OnlineTournament_GetTournamentId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_tournament.cpp", 507, ASSERT_TYPE_ASSERT, "(OnlineTournament_GetTournamentId() != 0)", (const char *)&queryFormat, "OnlineTournament_GetTournamentId() != 0") )
    __debugbreak();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_LeaveLobby
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_LeaveLobby(lua_State *luaVM)
{
  unsigned int v2; 

  OnlineTournament_Leave();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_OnNavigationComplete
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_OnNavigationComplete(lua_State *luaVM)
{
  unsigned int v2; 

  OnlineTournament_OnNavigationComplete();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_Rejoin
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_Rejoin(lua_State *luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 
  OnlinePlayFailureReason failureReason; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.Rejoin( controllerIndex )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    if ( CL_Mgr_GetMode() == CLIENT_MANAGER_MODE_NO_CLIENTS )
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, v2);
    if ( Live_CanUserPlayOnline(v2, &failureReason) )
    {
      ClientFromController = CL_Mgr_GetClientFromController(v2);
      Cbuf_AddText(ClientFromController, "xstopprivateparty\n");
      Cbuf_AddText(ClientFromController, "xstartprivateparty\n");
      OnlineTournament_DoRejoinProcess(v2);
    }
    else
    {
      Com_SetErrorMessage("ONLINE/UNABLE_TO_PLAY_TOURNAMENT");
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_RequestSignUp
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_RequestSignUp(lua_State *luaVM)
{
  unsigned int v2; 
  int v3; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.RequestSignUp( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    v2 = 1;
    v3 = lui_tointeger32(luaVM, 1);
    OnlineTournament_SetQueuedUpForNextTournament(v3, 1);
    j_lua_pushboolean(luaVM, 1);
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_SetReadyStatus
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_SetReadyStatus(lua_State *luaVM)
{
  unsigned int v2; 
  bool ready; 
  unsigned int v4; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Tournament.SetReadyStatus( readystatus )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    if ( lui_tointeger32(luaVM, 1) )
    {
      ready = OnlineTournament_DoMatchmakingReadyUp();
      j_lua_pushboolean(luaVM, ready);
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_tournament.cpp", 261, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tournament: un-readying is not supported.\n") )
        __debugbreak();
      j_lua_pushboolean(luaVM, 0);
    }
  }
  else
  {
    v2 = 0;
  }
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v4);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_ShouldShowWarning
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_ShouldShowWarning(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Tournament.ShouldShowWarning( controller )");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    j_lua_pushboolean(luaVM, 0);
    v2 = 1;
  }
  else
  {
    v2 = 0;
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
LUI_LuaCall_LUITournamentPackage_SpectateMatch
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_SpectateMatch(lua_State *luaVM)
{
  int v2; 
  int v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Tournament.SpectateMatch( round, match )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    if ( (unsigned __int8)OnlineTournament_GetMyParticipationStatus() == ACTIVE )
    {
      Com_Printf(25, "Tournament: cannot spectate while still active in the tournament\n");
    }
    else
    {
      v2 = lui_tointeger32(luaVM, 1);
      v3 = lui_tointeger32(luaVM, 2);
      v4 = truncate_cast<unsigned short,int>(v3);
      v5 = truncate_cast<unsigned short,int>(v2);
      OnlineTournament_JoinMatchToSpectate(v5, v4);
    }
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
LUI_LuaCall_LUITournamentPackage_StartSim
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_StartSim(lua_State *luaVM)
{
  unsigned int v2; 

  if ( OnlineTournamentSim_IsSimModeEnabled() )
    OnlineTournament_StartSim();
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v2);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUITournamentPackage_StartSimMatchPreview
==============
*/
__int64 LUI_LuaCall_LUITournamentPackage_StartSimMatchPreview(lua_State *luaVM)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  unsigned int v4; 

  if ( OnlineTournamentSim_IsSimModeEnabled() )
  {
    v2 = lui_tointeger32(luaVM, 1);
    v3 = lui_tointeger32(luaVM, 2);
    OnlineTournamentSim_StartFakeMatchPreview(v2, v3);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

