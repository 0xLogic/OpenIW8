/*
==============
Game_GetPlayerName
==============
*/

void __fastcall Game_GetPlayerName(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName)
{
  ?Game_GetPlayerName@@YAXW4LocalClientNum_t@@H_KPEAD@Z(localClientNum, clientNum, playerNameSize, out_playerName);
}

/*
==============
UnpackValue
==============
*/

int __fastcall UnpackValue(const unsigned int packedValue, const unsigned int bitOffset, const unsigned int bitWidth)
{
  return ?UnpackValue@@YAHIII@Z(packedValue, bitOffset, bitWidth);
}

/*
==============
Game_GetTeamScore
==============
*/

int __fastcall Game_GetTeamScore(LocalClientNum_t localClientNum, int team)
{
  return ?Game_GetTeamScore@@YAHW4LocalClientNum_t@@H@Z(localClientNum, team);
}

/*
==============
LUI_CoD_GameMP_GetBrColorForClientNum
==============
*/

void __fastcall LUI_CoD_GameMP_GetBrColorForClientNum(const int clientNum, vec4_t *color)
{
  ?LUI_CoD_GameMP_GetBrColorForClientNum@@YAXHAEATvec4_t@@@Z(clientNum, color);
}

/*
==============
Game_PlayerTeamInfo_PushToLUIModel
==============
*/

void __fastcall Game_PlayerTeamInfo_PushToLUIModel(const LocalClientNum_t localClientNum)
{
  ?Game_PlayerTeamInfo_PushToLUIModel@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_GetGameEndTime
==============
*/

int __fastcall Game_GetGameEndTime(const LocalClientNum_t localClientNum)
{
  return ?Game_GetGameEndTime@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_GetPlayerTeam
==============
*/

team_t __fastcall Game_GetPlayerTeam(LocalClientNum_t localClientNum)
{
  return ?Game_GetPlayerTeam@@YA?AW4team_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_GetPlayerNameWithHash
==============
*/

void __fastcall Game_GetPlayerNameWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash)
{
  ?Game_GetPlayerNameWithHash@@YAXW4LocalClientNum_t@@H_KPEAD@Z(localClientNum, clientNum, playerNameSize, out_playerNameWithHash);
}

/*
==============
LUI_CoD_GameMP_GetBrEnemyColor
==============
*/

void __fastcall LUI_CoD_GameMP_GetBrEnemyColor(const int clientNum, vec4_t *color)
{
  ?LUI_CoD_GameMP_GetBrEnemyColor@@YAXHAEATvec4_t@@@Z(clientNum, color);
}

/*
==============
GetBRPlayerFlags
==============
*/

unsigned int __fastcall GetBRPlayerFlags(const clientInfo_t *clientInfo)
{
  return ?GetBRPlayerFlags@@YAIAEBUclientInfo_t@@@Z(clientInfo);
}

/*
==============
Game_ThreatIndicator_PushToLUIModels
==============
*/

void __fastcall Game_ThreatIndicator_PushToLUIModels(const LocalClientNum_t localClientNum)
{
  ?Game_ThreatIndicator_PushToLUIModels@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Game_GetClientExtraInfo
==============
*/

int __fastcall Game_GetClientExtraInfo(const int clientNum)
{
  return ?Game_GetClientExtraInfo@@YAHH@Z(clientNum);
}

/*
==============
Game_IsClientNumSquadLeader
==============
*/

bool __fastcall Game_IsClientNumSquadLeader(const int clientNum)
{
  return ?Game_IsClientNumSquadLeader@@YA_NH@Z(clientNum);
}

/*
==============
LUI_CoD_GameMP_RegisterFunctions
==============
*/

void __fastcall LUI_CoD_GameMP_RegisterFunctions(lua_State *luaVM)
{
  ?LUI_CoD_GameMP_RegisterFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
LUI_CoD_GameMP_GetBrColorForIndex
==============
*/

void __fastcall LUI_CoD_GameMP_GetBrColorForIndex(const int index, vec4_t *color)
{
  ?LUI_CoD_GameMP_GetBrColorForIndex@@YAXHAEATvec4_t@@@Z(index, color);
}

/*
==============
LUI_CoD_GameMP_PostLevelInit
==============
*/

void __fastcall LUI_CoD_GameMP_PostLevelInit(const LocalClientNum_t localClientNum)
{
  ?LUI_CoD_GameMP_PostLevelInit@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_LuaCall_Game_GetNumTeams
==============
*/
__int64 LUI_LuaCall_Game_GetNumTeams(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 2i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamScore
==============
*/
__int64 LUI_LuaCall_Game_GetTeamScore(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamScore only expects one integer argument <teamIndex>");
  v3 = Lui_ToTeam(luaVM, 1, "GetTeamScore");
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( (unsigned int)v3 > 0xCA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(team >= TEAM_FREE && team <= TEAM_FOLLOWER)", (const char *)&queryFormat, "team >= TEAM_FREE && team <= TEAM_FOLLOWER") )
    __debugbreak();
  if ( (_DWORD)v3 && (unsigned int)(v3 - 201) > 1 )
    v4 = CG_GetLocalClientGlobals(CurrentValidLocalClient)->teamScores[v3];
  else
    v4 = 0;
  j_lua_pushinteger(luaVM, v4);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamWins
==============
*/
__int64 LUI_LuaCall_Game_GetTeamWins(lua_State *const luaVM)
{
  unsigned int v2; 
  __int32 v3; 
  __int64 alliesWins; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamWins only expects one integer argument <teamIndex>");
  if ( !Lobby_IsInLobby() )
    j_luaL_error(luaVM, "GetTeamWins can only be used when the player is in a match or lobby");
  v2 = 1;
  v3 = Lui_ToTeam(luaVM, 1, "GetTeamScore") - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
    {
      v2 = 0;
      goto LABEL_11;
    }
    alliesWins = Lobby_GetPartyData()->alliesWins;
  }
  else
  {
    alliesWins = Lobby_GetPartyData()->axisWins;
  }
  j_lua_pushinteger(luaVM, alliesWins);
LABEL_11:
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v5);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetNumPlayersOnTeam
==============
*/
__int64 LUI_LuaCall_Game_GetNumPlayersOnTeam(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  __int64 v4; 
  const PartyData *PartyData; 
  __int64 v6; 
  unsigned int v7; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamCount only expects one integer argument <teamIndex>");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", CurrentValidLocalClient, 2) )
    __debugbreak();
  if ( clientUIActives[v3].frontEndSceneState[0] )
    j_luaL_error(luaVM, (const char *)&queryFormat, "CL_GetLocalClientFrontEntState( localClientNum ) == ClFrontEndSceneState::INACTIVE");
  v4 = Lui_ToTeam(luaVM, 1, "GetTeamScore");
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    PartyData = Lobby_GetPartyData();
    v6 = Party_CountTeamMembers(PartyData, v4, PARTY_MEMBER_TYPE_ALL);
  }
  else
  {
    v6 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->teamPlayers[v4];
  }
  j_lua_pushinteger(luaVM, v6);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v7 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v7);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerName
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerName(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v4; 
  unsigned int CharacterMaxCount; 
  const score_t *OurClientScore; 
  LocalClientNum_t v8; 
  unsigned int v9; 
  char out_playerName[48]; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v4 = 1;
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "GetPlayerName optionally only takes one integer argument <clientNum>");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si rsi, xmm0 }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (int)_RSI >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
    {
      CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
      j_luaL_error(luaVM, "GetPlayerClipName expects an integer <clientNum> in [0,%d)", CharacterMaxCount);
    }
  }
  else
  {
    OurClientScore = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
    if ( !OurClientScore )
    {
      v4 = 0;
      goto LABEL_15;
    }
    LODWORD(_RSI) = OurClientScore->client;
  }
  v8 = LUI_CoD_GetCurrentValidLocalClient();
  Game_GetPlayerName(v8, _RSI, 0x30ui64, out_playerName);
  j_lua_pushstring(luaVM, out_playerName);
LABEL_15:
  if ( (int)v4 > j_lua_gettop(luaVM) )
  {
    v9 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v4, v9);
  }
  return v4;
}

/*
==============
LUI_LuaCall_Game_GetPlayerNameWithHash
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerNameWithHash(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerNameWithHash_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPlayerTeam
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerTeam(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  __int64 team; 
  unsigned int v8; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "GetPlayerTeam optionally only takes one integer argument <clientNum>");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si rdi, xmm0 }
    LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned int)_RDI >= ComCharacterLimits::ms_gameData.m_characterCount )
      j_luaL_error(luaVM, (const char *)&queryFormat, "(unsigned)(clientNum) < (unsigned)(ComCharacterLimits::GetCharacterMaxCount())");
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, _RDI);
    if ( CharacterInfo && CharacterInfo->infoValid )
      team = CharacterInfo->team;
    else
      team = 0i64;
  }
  else
  {
    team = Game_GetPlayerTeam(CurrentValidLocalClient);
  }
  j_lua_pushinteger(luaVM, team);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v8 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v8);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetGulagPlayerCount
==============
*/
__int64 LUI_LuaCall_Game_GetGulagPlayerCount(lua_State *luaVM)
{
  lua_State *v1; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const snapshot_t *nextSnap; 
  int v6; 
  int v7; 
  CgStatic *v8; 
  const characterInfo_t *CharacterInfo; 

  v1 = luaVM;
  if ( j_lua_gettop(luaVM) < 0 )
    j_luaL_error(v1, "USAGE: Game.GetGulagPlayerCount()");
  if ( j_lua_gettop(v1) < 0 )
    return 0i64;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( !CL_IsLocalClientConnectionActiveForAnyServer(CurrentValidLocalClient) )
    return 0i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  nextSnap = LocalClientGlobals->nextSnap;
  v6 = 0;
  v7 = 0;
  v8 = LocalClientStatics;
  if ( nextSnap[1].serverTime > 0 )
  {
    do
    {
      if ( CG_Players_IsPlayerInGulag(CurrentValidLocalClient, v7) )
      {
        CharacterInfo = CgStatic::GetCharacterInfo(v8, v7);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 620, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
          __debugbreak();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v7 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
          if ( CharacterInfo->infoValid )
            ++v6;
        }
      }
      ++v7;
    }
    while ( v7 < nextSnap[1].serverTime );
    v1 = luaVM;
  }
  j_lua_pushinteger(v1, v6);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetLastMLGSpectateTeam
==============
*/
__int64 LUI_LuaCall_Game_GetLastMLGSpectateTeam(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgMLGSpectator *MLGSpectator; 
  team_t Team; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient)->m_isMLGSpectator )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    Team = CgMLGSpectator::GetTeam(MLGSpectator);
    j_lua_pushinteger(luaVM, Team);
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
LUI_LuaCall_Game_GetTeamPlayerAtIndex
==============
*/
__int64 LUI_LuaCall_Game_GetTeamPlayerAtIndex(lua_State *const luaVM)
{
  int v2; 
  int v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  int v6; 
  __int64 numScores; 
  __int64 v8; 
  score_t *scores; 
  unsigned int v10; 

  if ( j_lua_gettop(luaVM) != 2 )
    j_luaL_error(luaVM, "GetTeamPlayerAtIndex expects two integer arguments, <clientNum>, <playerIndex>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetTeamPlayerAtIndex expects integer as first argument, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetTeamPlayerAtIndex expects integer as second argument, <playerIndex>");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  v6 = 0;
  numScores = LocalClientGlobals->numScores;
  if ( numScores <= 0 )
    goto LABEL_13;
  v8 = 0i64;
  scores = LocalClientGlobals->scores;
  while ( scores->team != v2 )
  {
LABEL_12:
    ++v8;
    ++scores;
    if ( v8 >= numScores )
      goto LABEL_13;
  }
  if ( v6 != v3 )
  {
    ++v6;
    goto LABEL_12;
  }
  if ( scores->client == -1 )
  {
LABEL_13:
    j_lua_pushnil(luaVM);
    goto LABEL_14;
  }
  j_lua_pushinteger(luaVM, scores->client);
LABEL_14:
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v10 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v10);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamIndexPlayerIndexOfClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetTeamIndexPlayerIndexOfClientNum(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  unsigned int v6; 
  int team; 
  __int64 numScores; 
  __int64 v9; 
  score_t *scores; 
  __int64 v11; 
  score_t *v12; 
  unsigned int v13; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamIndexPlayerIndexOfClientNum expects one integer arguments, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetTeamIndexPlayerIndexOfClientNum expects integer as first argument, <clientNum>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  v5 = 0;
  v6 = 0;
  team = 0;
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v9 = 0i64;
    scores = LocalClientGlobals->scores;
    while ( scores->client != v2 )
    {
      ++v9;
      ++scores;
      if ( v9 >= numScores )
        goto LABEL_14;
    }
    team = scores->team;
    if ( team == 2 )
    {
      v6 = 1;
    }
    else if ( team == 1 )
    {
      v6 = 2;
    }
LABEL_14:
    v11 = 0i64;
    v12 = LocalClientGlobals->scores;
    do
    {
      if ( v12->team == team )
      {
        if ( v12->client == v2 )
          break;
        ++v5;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < numScores );
  }
  if ( !v6 )
    v6 = 1;
  j_lua_pushinteger(luaVM, v6);
  j_lua_pushinteger(luaVM, v5);
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v13 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v13);
  }
  return 2i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamPlayerIndexOfClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetTeamPlayerIndexOfClientNum(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  int team; 
  __int64 numScores; 
  __int64 v8; 
  score_t *scores; 
  __int64 v10; 
  score_t *v11; 
  unsigned int v12; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamPlayerIndexOfClientNum expects one integer arguments, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetTeamPlayerIndexOfClientNum expects integer as first argument, <clientNum>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  v5 = 0;
  team = 0;
  numScores = LocalClientGlobals->numScores;
  if ( numScores > 0 )
  {
    v8 = 0i64;
    scores = LocalClientGlobals->scores;
    while ( scores->client != v2 )
    {
      ++v8;
      ++scores;
      if ( v8 >= numScores )
        goto LABEL_9;
    }
    team = scores->team;
    if ( team == -1 )
    {
      j_lua_pushnil(luaVM);
      j_lua_pushnil(luaVM);
      goto LABEL_15;
    }
LABEL_9:
    v10 = 0i64;
    v11 = LocalClientGlobals->scores;
    do
    {
      if ( v11->team == team )
      {
        if ( v11->client == v2 )
          break;
        ++v5;
      }
      ++v10;
      ++v11;
    }
    while ( v10 < numScores );
  }
  j_lua_pushinteger(luaVM, team);
  j_lua_pushinteger(luaVM, v5);
LABEL_15:
  if ( j_lua_gettop(luaVM) < 2 )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 2i64, v12);
  }
  return 2i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamPlacement
==============
*/
__int64 LUI_LuaCall_Game_GetTeamPlacement(lua_State *const luaVM)
{
  __int64 v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v5; 
  int v7; 
  int v8; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamPlacement expects one integer arguments, <team>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetTeamPlacement expects integer as first argument, <team>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  if ( (unsigned int)v2 >= 0xCB )
  {
    v8 = 203;
    v7 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 888, ASSERT_TYPE_ASSERT, "(unsigned)( team ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->teamPlacements ) ) + 0 ) )", "team doesn't index ARRAY_COUNT( cgameGlob->teamPlacements )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  j_lua_pushinteger(luaVM, LocalClientGlobals->teamPlacements[v2]);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetTeamOfLastKnownClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetTeamOfLastKnownClientNum(lua_State *const luaVM)
{
  __int64 v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetTeamPlayerIndexOfClientNum expects one integer arguments, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetTeamPlayerIndexOfClientNum expects integer as first argument, <clientNum>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushinteger(luaVM, LocalClientGlobals->lastKnownClientInfo[v2].team);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetNameOfLastKnownClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetNameOfLastKnownClientNum(lua_State *const luaVM)
{
  __int64 v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetNameOfLastKnownClientNum expects one integer arguments, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetNameOfLastKnownClientNum expects integer as first argument, <clientNum>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushstring(luaVM, LocalClientGlobals->lastKnownClientInfo[v2].name);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetClanAbbrevOfLastKnownClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetClanAbbrevOfLastKnownClientNum(lua_State *const luaVM)
{
  __int64 v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetClanAbbrevOfLastKnownClientNum expects one integer arguments, <clientNum>");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetClanAbbrevOfLastKnownClientNum expects integer as first argument, <clientNum>");
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushstring(luaVM, LocalClientGlobals->lastKnownClientInfo[v2].clanAbbrev);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v5);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerScore
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerScore(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const score_t *OurClientScore; 
  unsigned int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  OurClientScore = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
  if ( OurClientScore )
  {
    j_lua_pushinteger(luaVM, OurClientScore->score);
    v4 = 1;
  }
  else
  {
    v4 = 0;
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
LUI_LuaCall_Game_GetPlayerKills
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerKills(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const score_t *OurClientScore; 
  unsigned int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  OurClientScore = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
  if ( OurClientScore )
  {
    j_lua_pushinteger(luaVM, OurClientScore->kills);
    v4 = 1;
  }
  else
  {
    v4 = 0;
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
LUI_LuaCall_Game_GetPlayerDeaths
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerDeaths(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const score_t *OurClientScore; 
  unsigned int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  OurClientScore = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
  if ( OurClientScore )
  {
    j_lua_pushinteger(luaVM, OurClientScore->deaths);
    v4 = 1;
  }
  else
  {
    v4 = 0;
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
LUI_LuaCall_Game_GetPlayerAssists
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerAssists(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const score_t *OurClientScore; 
  unsigned int v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  OurClientScore = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
  if ( OurClientScore )
  {
    j_lua_pushinteger(luaVM, OurClientScore->assists);
    v4 = 1;
  }
  else
  {
    v4 = 0;
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
LUI_LuaCall_Game_GetPlayerScoreRanking
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerScoreRanking(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  team_t PlayerTeam; 
  int ClientScoreRanking; 
  unsigned int v5; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  PlayerTeam = Game_GetPlayerTeam(CurrentValidLocalClient);
  ClientScoreRanking = CG_ScoreboardMP_GetClientScoreRanking(CurrentValidLocalClient, PlayerTeam);
  if ( ClientScoreRanking )
  {
    j_lua_pushinteger(luaVM, ClientScoreRanking);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  if ( (int)v5 > j_lua_gettop(luaVM) )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v5, v6);
  }
  return v5;
}

/*
==============
LUI_LuaCall_Game_GetPlayerScoreInfoAtRank
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerScoreInfoAtRank(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerScoreInfoAtRank_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPlayerScoreInfo
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerScoreInfo(lua_State *const luaVM)
{
  unsigned int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  int v4; 
  const score_t *ClientScore; 
  unsigned int v6; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "GetPlayerScoreInfoAtRank expects one integer argument, <clientNum>");
  v2 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "GetPlayerScoreInfoAtRank expects one integer argument, <clientNum>");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v4 = lui_tointeger32(luaVM, 1);
  ClientScore = CG_ScoreboardMP_GetClientScore(CurrentValidLocalClient, v4);
  if ( ClientScore )
    LUI_PushScoreInfo(luaVM, CurrentValidLocalClient, ClientScore);
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
LUI_LuaCall_Game_GetPlayerBaseRank
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerBaseRank(lua_State *const luaVM)
{
  int v2; 
  const clientInfo_t *ClientInfo; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerBaseRank( clientNum )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerBaseRank( clientNum )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientInfo = Game_GetClientInfo(v2);
  j_lua_pushinteger(luaVM, ClientInfo->rank_mp);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerRank
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerRank(lua_State *const luaVM)
{
  int v2; 
  const clientInfo_t *ClientInfo; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerRank( clientNum )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerRank( clientNum )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientInfo = Game_GetClientInfo(v2);
  j_lua_pushinteger(luaVM, ClientInfo->rank_mp + ClientInfo->prestige_mp);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetBountyCount
==============
*/
__int64 LUI_LuaCall_Game_GetBountyCount(lua_State *const luaVM)
{
  int v2; 
  const clientInfo_t *ClientInfo; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetBountyCount( clientNum )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetBountyCount( clientNum )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientInfo = Game_GetClientInfo(v2);
  j_lua_pushinteger(luaVM, ClientInfo->bountyCount);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerPrestige
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerPrestige(lua_State *const luaVM)
{
  int v2; 
  const clientInfo_t *ClientInfo; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerPrestige( clientNum )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerPrestige( clientNum )");
  v2 = lui_tointeger32(luaVM, 1);
  ClientInfo = Game_GetClientInfo(v2);
  j_lua_pushinteger(luaVM, ClientInfo->prestige_mp);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerDisplayRank
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerDisplayRank(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const char *rankDisplayLevel; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerDisplayRank( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), (rankDisplayLevel = Game_GetClientInfo(v3)->rankDisplayLevel) != NULL) )
    j_lua_pushstring(luaVM, rankDisplayLevel);
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
LUI_LuaCall_Game_GetPlayerRankIcon
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerRankIcon(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const GfxImage *rankIconHandle; 
  const char *name; 
  unsigned int v6; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerRankIcon( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), v3 >= 0) && (rankIconHandle = Game_GetClientInfo(v3)->rankIconHandle) != NULL && (name = rankIconHandle->name) != NULL )
    j_lua_pushstring(luaVM, name);
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
LUI_LuaCall_Game_GetPlayerEmblem
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerEmblem(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerEmblem_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPlayerCustomEmblemEquipped
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerCustomEmblemEquipped(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerCustomEmblemEquipped( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) )
    j_lua_pushboolean(luaVM, 0);
  else
    v2 = 0;
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetClientXUID
==============
*/
__int64 LUI_LuaCall_Game_GetClientXUID(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const PartyData *GameParty; 
  XUID *v5; 
  unsigned int v6; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetClientXUID( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    GameParty = Live_GetGameParty();
    Party_GetXuid(&result, GameParty, v3);
    v5 = (XUID *)j_lua_newuserdata(luaVM, 8ui64);
    XUID::operator=(v5, &result);
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
LUI_LuaCall_Game_GetClientXUIDString
==============
*/
__int64 LUI_LuaCall_Game_GetClientXUIDString(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const PartyData *GameParty; 
  unsigned int v5; 
  XUID result; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetClientXUIDString( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    GameParty = Live_GetGameParty();
    Party_GetXuid(&result, GameParty, v3);
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
LUI_LuaCall_Game_IsClientBot
==============
*/
__int64 LUI_LuaCall_Game_IsClientBot(lua_State *const luaVM)
{
  unsigned int v2; 
  double v3; 
  int v4; 
  double v5; 
  LocalClientNum_t ClientFromController; 
  CgStatic *LocalClientStatics; 
  __int64 v8; 
  unsigned int v9; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.IsClientBot( <controllerIndex>, <clientNum> )");
  if ( j_lua_gettop(luaVM) == 2 && j_lua_isnumber(luaVM, 1) && j_lua_isnumber(luaVM, 2) )
  {
    v3 = lui_tonumber32(luaVM, 1);
    v4 = (int)*(float *)&v3;
    v5 = lui_tonumber32(luaVM, 2);
    ClientFromController = CL_Mgr_GetClientFromController(v4);
    LocalClientStatics = CgStatic::GetLocalClientStatics(ClientFromController);
    v8 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, (int)*(float *)&v5);
    j_lua_pushboolean(luaVM, *(unsigned __int8 *)(v8 + 188));
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
LUI_LuaCall_Game_GetPlayerBackground
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerBackground(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerBackground_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPlayerGamertag
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerGamertag(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v5; 
  char out_playerName[48]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerGamertag( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient(), CG_Players_GetPlayerGamertag(CurrentValidLocalClient, v3, 0x2Fui64, out_playerName), out_playerName[0]) )
    j_lua_pushstring(luaVM, out_playerName);
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
LUI_LuaCall_Game_GetPlayerGamertagWithHash
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerGamertagWithHash(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int v5; 
  char out_playerNameWithHash[64]; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerGamertagWithHash( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient(), CG_Players_GetPlayerGamertagWithHash(CurrentValidLocalClient, v3, 0x40ui64, out_playerNameWithHash), out_playerNameWithHash[0]) )
    j_lua_pushstring(luaVM, out_playerNameWithHash);
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
LUI_LuaCall_Game_IsDisplayingNameTag
==============
*/
__int64 LUI_LuaCall_Game_IsDisplayingNameTag(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  bool DisplayNameTag; 
  unsigned int v5; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.IsDisplayingNameTag( <controllerIndex> )\n");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    DisplayNameTag = GamerProfile_GetDisplayNameTag(v3);
    j_lua_pushboolean(luaVM, DisplayNameTag);
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
LUI_LuaCall_Game_GetPlayerClanTag
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerClanTag(lua_State *const luaVM)
{
  unsigned int v2; 
  int v3; 
  const clientInfo_t *ClientInfo; 
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned __int8 clanTagType; 
  unsigned int v7; 
  char outBuffer[8]; 
  int v10; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerClanTag( clientNum )");
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) || (v3 = lui_tointeger32(luaVM, 1), ClientInfo = Game_GetClientInfo(v3), ClientInfo == (const clientInfo_t *)-124i64) || (CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient(), CL_Anonymization_ShouldAnonymizeClient(CurrentValidLocalClient, v3)) )
  {
    v2 = 0;
  }
  else
  {
    clanTagType = ClientInfo->clanTagType;
    *(_QWORD *)outBuffer = 0i64;
    v10 = 0;
    Com_PlayerUtils_ColorizeClanTag(ClientInfo->clanAbbrev, clanTagType, outBuffer, 0xCui64, 0x37u);
    j_lua_pushstring(luaVM, outBuffer);
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
LUI_LuaCall_Game_GetAlienBeaconMaxHealth
==============
*/
__int64 LUI_LuaCall_Game_GetAlienBeaconMaxHealth(lua_State *const luaVM)
{
  unsigned int v2; 

  j_lua_pushinteger(luaVM, 100i64);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v2 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v2);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_InKillCam
==============
*/
__int64 LUI_LuaCall_Game_InKillCam(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "InKillCam either has no arguments or one integer argument <controllerIndex>");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si ecx, xmm0; controllerIndex }
    CurrentValidLocalClient = CL_Mgr_GetClientFromController(_ECX);
    if ( (unsigned int)CurrentValidLocalClient > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 2215, ASSERT_TYPE_ASSERT, "(localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1)", (const char *)&queryFormat, "localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1") )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, LocalClientGlobals->inKillCam);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsSpectating
==============
*/
__int64 LUI_LuaCall_Game_IsSpectating(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  bool v4; 
  unsigned int v5; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  v4 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u);
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
LUI_LuaCall_Game_IsSpectatingSelf
==============
*/
__int64 LUI_LuaCall_Game_IsSpectatingSelf(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int PlayerStateClientNum; 
  unsigned int v4; 
  int outPlayerClientNum; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  Game_GetPlayerClientNum(CurrentValidLocalClient, &outPlayerClientNum);
  PlayerStateClientNum = Game_GetPlayerStateClientNum(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, outPlayerClientNum == PlayerStateClientNum);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsEmpJammed
==============
*/
__int64 LUI_LuaCall_Game_IsEmpJammed(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  bool IsEMPJammed; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  IsEMPJammed = CG_View_IsEMPJammed(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, IsEMPJammed);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerClientnum
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerClientnum(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "GetPlayerClientnum either has no arguments or one integer argument <controllerIndex>");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si ecx, xmm0; controllerIndex }
    CurrentValidLocalClient = CL_Mgr_GetClientFromController(_ECX);
    if ( (unsigned int)CurrentValidLocalClient > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 2295, ASSERT_TYPE_ASSERT, "(localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1)", (const char *)&queryFormat, "localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1") )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushinteger(luaVM, LocalClientGlobals->clientNum);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerstateClientnum
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerstateClientnum(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "GetPlayerstateClientnum either has no arguments or one integer argument <controllerIndex>");
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si ecx, xmm0; controllerIndex }
    CurrentValidLocalClient = CL_Mgr_GetClientFromController(_ECX);
    if ( (unsigned int)CurrentValidLocalClient > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 2323, ASSERT_TYPE_ASSERT, "(localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1)", (const char *)&queryFormat, "localClientNum == LOCAL_CLIENT_0 || localClientNum == LOCAL_CLIENT_1") )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushinteger(luaVM, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_CanChangePlayerMute
==============
*/
__int64 LUI_LuaCall_Game_CanChangePlayerMute(lua_State *const luaVM)
{
  bool v2; 
  PartyData *PartyData; 
  const PartyData *v4; 
  int v5; 
  unsigned int v6; 

  v2 = 0;
  if ( Com_FrontEndScene_IsActive() )
LABEL_7:
    j_luaL_error(luaVM, "IsPlayerMuted can't find a party to query with - you could be calling this from the wrong place");
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
  }
  else
  {
    v4 = &g_partyData;
    if ( Party_InParty(&g_partyData) )
      goto LABEL_8;
    PartyData = Live_GetGameParty();
  }
  v4 = PartyData;
  if ( !PartyData )
    goto LABEL_7;
LABEL_8:
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "CanChangePlayerMute only takes one integer argument <clientNum>");
  if ( v4 )
  {
    v5 = lui_tointeger32(luaVM, 1);
    v2 = CL_CanChangePlayerMute(v4, v5);
  }
  j_lua_pushboolean(luaVM, v2);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v6 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v6);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_TogglePlayerMute
==============
*/
__int64 LUI_LuaCall_Game_TogglePlayerMute(lua_State *const luaVM)
{
  PartyData *PartyData; 
  PartyData *v3; 
  int v4; 
  unsigned int v5; 

  if ( Com_FrontEndScene_IsActive() )
LABEL_7:
    j_luaL_error(luaVM, "IsPlayerMuted can't find a party to query with - you could be calling this from the wrong place");
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
  }
  else
  {
    v3 = &g_partyData;
    if ( Party_InParty(&g_partyData) )
      goto LABEL_8;
    PartyData = Live_GetGameParty();
  }
  v3 = PartyData;
  if ( !PartyData )
    goto LABEL_7;
LABEL_8:
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "TogglePlayerMute only takes one integer argument <clientNum>");
  if ( v3 )
  {
    v4 = lui_tointeger32(luaVM, 1);
    CL_TogglePlayerMute(v3, v4);
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_TogglePlayerMuteByXUID
==============
*/
__int64 LUI_LuaCall_Game_TogglePlayerMuteByXUID(lua_State *const luaVM)
{
  PartyData *PartyData; 
  int MemberByXUID; 
  unsigned int v4; 
  XUID result; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isstring(luaVM, 1) )
    j_luaL_error(luaVM, "TogglePlayerMuteByXUID only takes one string argument <xuid>");
  PartyData = Lobby_GetPartyData();
  if ( !PartyData )
    j_luaL_error(luaVM, "IsPlayerMuted can't find a party to query with - you could be calling this from the wrong place");
  LUI_ToXUID(&result, luaVM, 1);
  MemberByXUID = Party_FindMemberByXUID(PartyData, result);
  CL_TogglePlayerMute(PartyData, MemberByXUID);
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v4);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_MuteAll
==============
*/
__int64 LUI_LuaCall_Game_MuteAll(lua_State *const luaVM)
{
  PartyData *Party; 
  int v3; 
  MuteStrategy MuteStrategy; 
  unsigned int v5; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || j_lua_type(luaVM, 2) != 1 )
    j_luaL_error(luaVM, "USAGE: Game.MuteAll( controllerIndex, <boolean> )");
  if ( j_lua_gettop(luaVM) == 2 )
  {
    if ( j_lua_isnumber(luaVM, 1) )
    {
      if ( j_lua_type(luaVM, 2) == 1 )
      {
        Party = LUI_GetParty();
        if ( Party )
        {
          v3 = lui_tointeger32(luaVM, 1);
          if ( j_lua_toboolean(luaVM, 2) <= 0 )
          {
            CL_UnmuteAllPlayers(Party, v3);
          }
          else
          {
            MuteStrategy = CL_GetMuteStrategy(v3);
            if ( MuteStrategy == MuteStrategyMuteAllButParty )
            {
              CL_MuteAllPlayersButParty(Party);
            }
            else if ( MuteStrategy == MuteStrategyMuteAllButFriends )
            {
              CL_MuteAllPlayersButFriends(Party);
            }
            else
            {
              CL_MuteAllPlayers(Party);
            }
          }
        }
      }
    }
  }
  if ( j_lua_gettop(luaVM) < 0 )
  {
    v5 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 0i64, v5);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerTalkingState
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerTalkingState(lua_State *const luaVM)
{
  unsigned int v2; 
  __int64 v3; 
  const PartyData *GameParty; 
  bool IsPlayerTalking; 
  bool IsPlayerMuted; 
  bool v7; 
  unsigned int v8; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerTalkingState( clientNum )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    j_lua_createtable(luaVM, 0, 2);
    GameParty = Live_GetGameParty();
    IsPlayerTalking = CL_IsPlayerTalking(GameParty, v3);
    IsPlayerMuted = CL_IsPlayerMuted(GameParty, v3);
    v7 = GameParty->partyMembers[v3].info.headsetPresent && !Voice_ChatRestricted();
    LUI_SetTableBool("isTalking", IsPlayerTalking, LUI_luaVM);
    LUI_SetTableBool("isMuted", IsPlayerMuted, LUI_luaVM);
    LUI_SetTableBool("hasMicrophone", v7, LUI_luaVM);
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
LUI_LuaCall_Game_GetCrosshairTraceDistance
==============
*/
__int64 LUI_LuaCall_Game_GetCrosshairTraceDistance(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  cg_t *LocalClientGlobals; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  j_lua_pushinteger(luaVM, LocalClientGlobals->crosshairTraceDistance);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetWeaponDamageStats
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponDamageStats(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetWeaponDamageStats_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_IsHostMigrating
==============
*/
__int64 LUI_LuaCall_Game_IsHostMigrating(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  if ( (unsigned int)CurrentValidLocalClient >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", CurrentValidLocalClient, 2) )
    __debugbreak();
  j_lua_pushboolean(luaVM, clientUIActives[v3].migrationState != CMSTATE_INACTIVE);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetMigrationStatus
==============
*/
__int64 LUI_LuaCall_Game_GetMigrationStatus(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  const char *LocalClientMigrationString; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientMigrationString = CL_GetLocalClientMigrationString(CurrentValidLocalClient);
  j_lua_pushstring(luaVM, LocalClientMigrationString);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsCinematicCameraActive
==============
*/
__int64 LUI_LuaCall_Game_IsCinematicCameraActive(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int IsCinematicCameraActive; 
  unsigned int v4; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  IsCinematicCameraActive = CG_IsCinematicCameraActive(CurrentValidLocalClient);
  j_lua_pushboolean(luaVM, IsCinematicCameraActive);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v4 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v4);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_ExecuteMark
==============
*/
__int64 LUI_LuaCall_Game_ExecuteMark(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.ExecuteMark( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    CL_InputMP_ExecuteMark(ClientFromController, 1);
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
LUI_LuaCall_Game_ExecuteMarkCommit
==============
*/
__int64 LUI_LuaCall_Game_ExecuteMarkCommit(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.ExecuteMarkCommit( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    CL_InputMP_ExecuteMarkCommit(ClientFromController);
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
LUI_LuaCall_Game_ExecuteMarkCancel
==============
*/
__int64 LUI_LuaCall_Game_ExecuteMarkCancel(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.ExecuteMarkCancel( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    CL_InputMP_ExecuteMarkCancel(ClientFromController);
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
LUI_LuaCall_Game_EquipAltToggle
==============
*/
__int64 LUI_LuaCall_Game_EquipAltToggle(lua_State *const luaVM)
{
  int v2; 
  LocalClientNum_t ClientFromController; 
  unsigned int v4; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.EquipAltToggle( <controllerIndex> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    v2 = lui_tointeger32(luaVM, 1);
    ClientFromController = CL_Mgr_GetClientFromController(v2);
    CG_Weapons_ToggleEquip(ClientFromController);
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
LUI_LuaCall_Game_GetScoreboardRowData
==============
*/
__int64 LUI_LuaCall_Game_GetScoreboardRowData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetScoreboardRowData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetCPNumScoreboardPlayers
==============
*/
__int64 LUI_LuaCall_Game_GetCPNumScoreboardPlayers(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  int ControllerFromClient; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v10; 
  int v11; 
  int i; 
  unsigned int v14; 
  unsigned int v15; 
  DDLState toState; 
  DDLState fromState; 
  DDLState v19; 
  DDLState state; 
  DDLState result; 
  DDLContext context; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) == 0");
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(CurrentValidLocalClient);
  Asset = Com_DDL_LoadAsset("ddl/mp/cpdata.ddl");
  DDL_GetRootState(&result, Asset);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_COOP);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.coopMatchData);
  DDL_MoveToNameByHash(&result, &toState, RawHash, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  v10 = j_SL_GetRawHash(scr_const.eogPlayer);
  DDL_MoveToNameByHash(&toState, &fromState, v10, NULL);
  v11 = 0;
  for ( i = 0; i < 16; ++i )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v19.isValid = 0;
    v19.offset = 0;
    v19.arrayIndex = -1;
    *(_OWORD *)&v19.member = _XMM0;
    DDL_MoveToIndex(&fromState, &v19, i);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v14 = j_SL_GetRawHash(scr_const.connected);
    DDL_MoveToNameByHash(&v19, &state, v14, NULL);
    if ( DDL_GetBool(&state, &context) )
      ++v11;
  }
  j_lua_pushinteger(luaVM, v11);
  if ( j_lua_gettop(luaVM) < 1 )
  {
    v15 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", 1i64, v15);
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetCPScoreboardRowData
==============
*/
__int64 LUI_LuaCall_Game_GetCPScoreboardRowData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetCPScoreboardRowData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetInteractiveObjectWeaponLootTableFilename
==============
*/
__int64 LUI_LuaCall_Game_GetInteractiveObjectWeaponLootTableFilename(lua_State *const luaVM)
{
  unsigned int v1; 
  int v3; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  int cursorHintEntIndex; 
  centity_t *Entity; 
  BgWeaponHandle *p_nextState; 
  CgWeaponMap *Instance; 
  const Weapon *Weapon; 
  const WeaponCompleteDef *v11; 
  unsigned int v12; 

  v1 = 1;
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Engine.GetInteractiveObjectWeaponTableFilename( <controllerIndex> )");
  if ( j_lua_isnumber(luaVM, 1) && (v3 = lui_tointeger32(luaVM, 1), ClientFromController = CL_Mgr_GetClientFromController(v3), LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController), LocalClientGlobals->predictedPlayerState.cursorHintClass == USE_CLASS_GENTITY) && (cursorHintEntIndex = LocalClientGlobals->predictedPlayerState.cursorHintEntIndex, cursorHintEntIndex != 2047) && LocalClientGlobals->predictedPlayerState.cursorHint == HINT_WEAPON && (Entity = CG_GetEntity(ClientFromController, cursorHintEntIndex), (Entity->flags & 1) != 0) )
  {
    p_nextState = (BgWeaponHandle *)&Entity->nextState;
    Instance = CgWeaponMap::GetInstance(ClientFromController);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, p_nextState[33]);
    v11 = BG_WeaponCompleteDef(Weapon, 0);
    j_lua_pushstring(luaVM, v11->szLootTable);
  }
  else
  {
    v1 = 0;
  }
  if ( (int)v1 > j_lua_gettop(luaVM) )
  {
    v12 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v1, v12);
  }
  return v1;
}

/*
==============
LUI_LuaCall_Game_GetPlayerWeaponLoadoutData
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerWeaponLoadoutData(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerWeaponLoadoutData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetPlayerWeaponLoadoutAttachments
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerWeaponLoadoutAttachments(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_Game_GetPlayerWeaponLoadoutAttachments_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_Game_GetBrPlayerColorForIndex
==============
*/
__int64 LUI_LuaCall_Game_GetBrPlayerColorForIndex(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  float v4; 
  float v5; 
  float v6; 
  unsigned int v7; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetBrPlayerColorForIndex( squadIndex )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1) - 1;
    if ( v3 > 3 )
      v3 = 0;
    v4 = BRPartySlotColors.v[4 * v3];
    v5 = BRPartySlotColors.v[4 * v3 + 1];
    v6 = BRPartySlotColors.v[4 * v3 + 2];
    j_lua_createtable(luaVM, 0, 0);
    LUI_SetTableNumber("r", v4, luaVM);
    LUI_SetTableNumber("g", v5, luaVM);
    LUI_SetTableNumber("b", v6, luaVM);
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
LUI_LuaCall_Game_GetBrPlayerColorForClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetBrPlayerColorForClientNum(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  int game_extrainfo; 
  LocalClientNum_t v7; 
  CgStatic *v8; 
  unsigned int v9; 
  unsigned int v10; 
  __int128 v12; 

  v2 = 1;
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetBrPlayerColorForClientNum( clientNum )");
  if ( j_lua_gettop(luaVM) >= 1 && j_lua_isnumber(luaVM, 1) )
  {
    v3 = lui_tointeger32(luaVM, 1);
    CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
    LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
    game_extrainfo = LocalClientStatics->GetClientInfo(LocalClientStatics, v3)->game_extrainfo;
    v7 = LUI_CoD_GetCurrentValidLocalClient();
    if ( (game_extrainfo & 0x1000) != 0 )
    {
      LUI_COD_GetSwatchRGBColor(v7, "BattleRoyale.BRZombieColor", (vec3_t *)&v12);
    }
    else
    {
      v8 = CgStatic::GetLocalClientStatics(v7);
      v9 = (v8->GetClientInfo(v8, v3)->game_extrainfo & 7) - 1;
      if ( v9 > 3 )
        v9 = 0;
      v12 = *(_OWORD *)&BRPartySlotColors.v[4 * v9];
    }
    j_lua_createtable(luaVM, 0, 0);
    LUI_SetTableNumber("r", *(float *)&v12, luaVM);
    LUI_SetTableNumber("g", *((float *)&v12 + 1), luaVM);
    LUI_SetTableNumber("b", *((float *)&v12 + 2), luaVM);
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
LUI_LuaCall_Game_GetBrSquadIndexForClientNum
==============
*/
__int64 LUI_LuaCall_Game_GetBrSquadIndexForClientNum(lua_State *luaVM)
{
  unsigned int v2; 
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  __int64 v5; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetBrSquadIndexForClientNum( clientNum )");
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  v5 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, v2);
  j_lua_pushinteger(LUI_luaVM, *(_DWORD *)(v5 + 120) & 7);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_IsInSameSquad
==============
*/
__int64 LUI_LuaCall_Game_IsInSameSquad(lua_State *luaVM)
{
  int v2; 
  unsigned int v3; 
  LocalClientNum_t ClientFromController; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v7; 
  unsigned int clientNum; 
  __int64 v9; 
  const characterInfo_t *CharacterInfo; 
  const characterInfo_t *v11; 
  team_t team; 
  int v13; 

  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: Game.IsInSameSquad( controllerIndex, clientNum )");
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  ClientFromController = CL_Mgr_GetClientFromController(v2);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(ClientFromController);
  LocalClientStatics = CgStatic::GetLocalClientStatics(ClientFromController);
  v7 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, v3);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 3440, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v9 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 3444, ASSERT_TYPE_ASSERT, "(localClientInfo)", (const char *)&queryFormat, "localClientInfo") )
    __debugbreak();
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v3);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 3447, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  v11 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 3450, ASSERT_TYPE_ASSERT, "(localCharacterInfo)", (const char *)&queryFormat, "localCharacterInfo") )
    __debugbreak();
  team = v11->team;
  v13 = team && team == CharacterInfo->team && *(_DWORD *)(v9 + 160) == *(_DWORD *)(v7 + 160);
  j_lua_pushboolean(luaVM, v13);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayingMusicTrackName
==============
*/
__int64 LUI_LuaCall_Game_GetPlayingMusicTrackName(lua_State *const luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  if ( j_lua_gettop(luaVM) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayingMusicTrackName()");
  if ( j_lua_gettop(luaVM) || !g_snd.musicCurrentPlaybackAsset )
  {
    v2 = 0;
  }
  else
  {
    j_lua_pushstring(luaVM, g_snd.musicCurrentPlaybackAsset->alias);
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
Game_GetClientExtraInfo
==============
*/
__int64 Game_GetClientExtraInfo(const int clientNum)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  return ((unsigned int)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->game_extrainfo >> 6) & 0x3FF;
}

/*
==============
Game_GetClientInfo
==============
*/
const clientInfo_t *Game_GetClientInfo(int clientNum)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  const clientInfo_t *result; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( CL_GetLocalClientGameConnectionState(CurrentValidLocalClient) != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1224, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForGameServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForGameServer( localClientNum )") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  result = LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1227, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    return 0i64;
  }
  return result;
}

/*
==============
Game_GetGameEndTime
==============
*/
__int64 Game_GetGameEndTime(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] || !clientUIActives[v1].cgameInitialized )
    return 0i64;
  if ( (unsigned int)v1 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v5) = cgs_t::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[v1] )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v5) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v5) )
      __debugbreak();
  }
  return (unsigned int)cgs_t::ms_cgsArray[v1]->gameEndTime;
}

/*
==============
Game_GetPlayerCountStats
==============
*/
void Game_GetPlayerCountStats(LocalClientNum_t localClientNum, int *outLivingPlayers, int *outTotalPlayers, int *outLivingTeams, int *outTotalTeams)
{
  int v5; 
  const score_t *scores; 
  __int64 client; 
  cg_t *v12; 
  const characterInfo_t *CharacterInfo; 
  __int64 team; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  CgStatic *LocalClientStatics; 
  CgGlobalsMP *LocalClientGlobals; 
  char v20[208]; 
  char v21[208]; 

  v5 = 0;
  *outLivingPlayers = 0;
  *outTotalPlayers = 0;
  *outLivingTeams = 0;
  *outTotalTeams = 0;
  if ( CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    memset_0(v21, 0, 0xCBui64);
    memset_0(v20, 0, 0xCBui64);
    if ( LocalClientGlobals->numScores > 0 )
    {
      scores = LocalClientGlobals->scores;
      do
      {
        client = scores->client;
        v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v12->IsMP(v12) )
        {
          if ( (unsigned int)client >= v12[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v17) = v12[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v16) = client;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, v17) )
              __debugbreak();
          }
          CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v12[1].predictedPlayerState.rxvOmnvars[62] + 14792 * client);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v12, client);
        }
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1593, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
          __debugbreak();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( scores->client < (int)ComCharacterLimits::ms_gameData.m_characterCount && CharacterInfo->infoValid )
        {
          if ( !CG_ScoreboardMP_IsPlayerDead(scores) )
          {
            ++*outLivingPlayers;
            team = CharacterInfo->team;
            if ( !v20[team] )
            {
              ++*outLivingTeams;
              v20[team] = 1;
            }
          }
          ++*outTotalPlayers;
          v15 = CharacterInfo->team;
          if ( !v21[v15] )
          {
            ++*outTotalTeams;
            v21[v15] = 1;
          }
        }
        ++v5;
        ++scores;
      }
      while ( v5 < LocalClientGlobals->numScores );
    }
  }
}

/*
==============
Game_GetPlayerName
==============
*/
void Game_GetPlayerName(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerName)
{
  centity_t *Entity; 
  char nameBuf[48]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 307, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( clientNum < cls.maxClients )
  {
    CG_Players_GetPlayerName(localClientNum, clientNum, playerNameSize, out_playerName, 1);
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, clientNum);
    if ( (Entity->flags & 1) == 0 || !CL_GetAgentName(localClientNum, clientNum, Entity->nextState.otherEntityNum, nameBuf, 0x30ui64) )
      Com_sprintf(nameBuf, 0x30ui64, "?");
    Core_strcpy(out_playerName, playerNameSize, nameBuf);
  }
}

/*
==============
Game_GetPlayerNameWithHash
==============
*/
void Game_GetPlayerNameWithHash(const LocalClientNum_t localClientNum, const int clientNum, unsigned __int64 playerNameSize, char *out_playerNameWithHash)
{
  centity_t *Entity; 
  char nameBuf[48]; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( clientNum < cls.maxClients )
  {
    CG_Players_GetPlayerNameWithHash(localClientNum, clientNum, playerNameSize, out_playerNameWithHash, 1);
  }
  else
  {
    Entity = CG_GetEntity(localClientNum, clientNum);
    if ( (Entity->flags & 1) == 0 || !CL_GetAgentName(localClientNum, clientNum, Entity->nextState.otherEntityNum, nameBuf, 0x30ui64) )
      Com_sprintf(nameBuf, 0x30ui64, "?");
    Core_strcpy(out_playerNameWithHash, playerNameSize, nameBuf);
  }
}

/*
==============
Game_GetPlayerTeam
==============
*/
int Game_GetPlayerTeam(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  unsigned __int64 m_id; 
  const PartyData *PartyData; 
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  XUID result; 

  if ( CL_GetLocalClientGameConnectionState(localClientNum) >= CA_PRIMED )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->clientNum);
    if ( CharacterInfo && CharacterInfo->infoValid )
      return CharacterInfo->team;
  }
  else
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    if ( Live_IsSignedIn(ControllerFromClient) && Live_IsUserSignedInToLive(ControllerFromClient) )
    {
      Live_GetXuid(&result, ControllerFromClient);
      if ( Lobby_IsInLobby() )
      {
        m_id = result.m_id;
        PartyData = Lobby_GetPartyData();
        return Party_GetAssignedTeam(PartyData, (const XUID)m_id);
      }
    }
  }
  return 0;
}

/*
==============
Game_GetTeamScore
==============
*/
__int64 Game_GetTeamScore(LocalClientNum_t localClientNum, int team)
{
  __int64 v3; 

  v3 = team;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 366, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( (unsigned int)v3 > 0xCA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 367, ASSERT_TYPE_ASSERT, "(team >= TEAM_FREE && team <= TEAM_FOLLOWER)", (const char *)&queryFormat, "team >= TEAM_FREE && team <= TEAM_FOLLOWER") )
    __debugbreak();
  if ( (_DWORD)v3 && (unsigned int)(v3 - 201) > 1 )
    return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->teamScores[v3];
  else
    return 0i64;
}

/*
==============
Game_IsClientNumSquadLeader
==============
*/
bool Game_IsClientNumSquadLeader(const int clientNum)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  return (LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->game_extrainfo & 0x40) != 0;
}

/*
==============
Game_PlayerTeamInfo_PushToLUIModel
==============
*/
void Game_PlayerTeamInfo_PushToLUIModel(const LocalClientNum_t localClientNum)
{
  const char *v2; 
  bool v3; 
  CgStatic *LocalClientStatics; 
  CgGlobalsMP *v5; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  int v8; 
  int v9; 
  unsigned int IndexByName; 
  const OmnvarDef *Def; 
  const OmnvarData *Data; 
  float Integer; 
  unsigned int v14; 
  const OmnvarDef *v15; 
  CgCompassSystemMP *v16; 
  const OmnvarData *v17; 
  float v18; 
  LocalClientNum_t v19; 
  double CurrentCompassZoomLevel; 
  float v21; 
  const dvar_t *v22; 
  float value; 
  characterInfo_t *CharacterInfo; 
  int v25; 
  characterInfo_t *v26; 
  __int64 v27; 
  float v28; 
  int i; 
  __int64 v30; 
  characterInfo_t *v31; 
  const char *ModelNameForCustomization; 
  const char *v33; 
  int v34; 
  __int64 v35; 
  double LastShotFireAmount; 
  const score_t *ClientScore; 
  const int *p_client; 
  unsigned int extrascore2; 
  int v40; 
  unsigned int v41; 
  unsigned __int8 v42; 
  bool v43; 
  bool v44; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned int v51; 
  unsigned __int16 v52; 
  unsigned __int16 v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  unsigned __int16 v56; 
  unsigned __int16 v57; 
  unsigned __int16 v58; 
  unsigned __int16 v59; 
  unsigned __int16 v60; 
  unsigned __int16 v61; 
  unsigned __int16 v62; 
  unsigned __int16 v63; 
  unsigned __int16 v64; 
  unsigned __int16 v65; 
  unsigned __int16 v66; 
  unsigned __int16 v67; 
  bool v68; 
  unsigned __int16 v69; 
  unsigned __int16 v70; 
  unsigned __int16 v71; 
  unsigned __int16 v72; 
  unsigned __int16 v73; 
  unsigned __int16 v74; 
  unsigned __int16 v75; 
  unsigned __int16 v76; 
  unsigned __int16 v77; 
  unsigned __int16 v78; 
  unsigned __int16 v79; 
  int v80; 
  unsigned __int16 v81; 
  unsigned __int16 v82; 
  unsigned __int16 v83; 
  unsigned __int16 v84; 
  unsigned __int16 v85; 
  unsigned __int16 v86; 
  unsigned __int16 v87; 
  unsigned __int16 v88; 
  unsigned __int16 v89; 
  unsigned __int16 v90; 
  unsigned __int16 v91; 
  bool v92; 
  unsigned __int16 v93; 
  unsigned __int16 v94; 
  unsigned __int16 v95; 
  unsigned __int16 v96; 
  unsigned __int16 v97; 
  unsigned __int16 v98; 
  unsigned __int16 v99; 
  unsigned __int16 v100; 
  unsigned __int16 v101; 
  unsigned __int16 v102; 
  unsigned __int16 v103; 
  double v104; 
  unsigned __int16 v105; 
  centity_t *Entity; 
  float v107; 
  unsigned __int16 v108; 
  unsigned __int16 v109; 
  unsigned __int16 v110; 
  unsigned __int16 v111; 
  unsigned __int16 v112; 
  unsigned __int16 v113; 
  unsigned __int16 v114; 
  unsigned __int16 v115; 
  int v116; 
  unsigned __int16 v117; 
  unsigned __int16 v118; 
  unsigned __int16 v119; 
  unsigned __int16 v120; 
  int v121; 
  unsigned __int16 v122; 
  int *v123; 
  const char *v124; 
  unsigned __int16 v125; 
  __int64 v126; 
  __int64 v127; 
  char dest[4]; 
  __int16 v129; 
  bool v130; 
  bool IsPlayerMuted; 
  bool v132; 
  bool v133; 
  bool v134; 
  LocalClientNum_t localClientNuma; 
  bool v136; 
  bool IsWeaponRaise; 
  int v138; 
  unsigned __int16 v139; 
  unsigned __int16 v140; 
  int clientNum; 
  int v142; 
  int v143; 
  unsigned __int16 v144; 
  unsigned __int16 v145; 
  unsigned __int16 v146; 
  unsigned __int16 v147; 
  unsigned __int16 v148; 
  unsigned __int16 v149; 
  unsigned __int16 v150; 
  unsigned __int16 v151; 
  unsigned __int16 v152; 
  unsigned __int16 v153; 
  unsigned __int16 v154; 
  unsigned __int16 v155; 
  unsigned __int16 v156; 
  unsigned __int16 v157; 
  unsigned __int16 v158; 
  unsigned __int16 v159; 
  unsigned __int16 v160; 
  unsigned __int16 v161; 
  unsigned __int16 v162; 
  unsigned __int16 v163; 
  unsigned __int16 v164; 
  unsigned __int16 v165; 
  unsigned __int16 v166; 
  unsigned __int16 ModelFromPath; 
  unsigned __int16 v168; 
  unsigned __int16 v169; 
  unsigned __int16 v170; 
  unsigned __int16 v171; 
  int kills; 
  int v173; 
  int extrascore3; 
  int v175; 
  int v176; 
  CgCompassSystemMP *LocalClientGlobals; 
  team_t team; 
  BOOL v179; 
  BOOL v180; 
  BOOL v181; 
  BOOL v182; 
  BOOL v183; 
  int v184; 
  int v185; 
  int outLivingPlayers; 
  int outTotalPlayers; 
  int outLivingTeams; 
  int outTotalTeams; 
  const int *v190; 
  int tile_high; 
  BOOL v192; 
  int m_skydiveAutodeployOffset; 
  float v194; 
  char *newValue; 
  characterInfo_t *ci; 
  PartyData *party; 
  vec3_t outOrigin; 
  __int64 v199; 
  float v200; 
  __int64 v201[5]; 
  char out_playerName[48]; 

  v199 = -2i64;
  localClientNuma = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( localClientNum >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1725, ASSERT_TYPE_ASSERT, "(cg_t::IsClientAllocated( localClientNum ))", (const char *)&queryFormat, "cg_t::IsClientAllocated( localClientNum )") )
    __debugbreak();
  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  v2 = I_strstr(cls.m_activeGameTypeName, "cp");
  v3 = (unsigned __int8)ClStatic::GetActiveGameTypeQuick(&cls) == DODGE;
  if ( v2 || v3 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    LocalClientGlobals = (CgCompassSystemMP *)CG_GetLocalClientGlobals(localClientNum);
    v5 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    party = Live_GetGameParty();
    ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
    ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.teamHealthRatio");
    v139 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.teamGamerTag");
    v169 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.operatorIcon");
    v170 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.squadIndex");
    v171 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.clientNum");
    v151 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.kills");
    v160 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isTalking");
    v161 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isMuted");
    v147 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isDowned");
    v168 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isDead");
    v149 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isBeingRevived");
    v150 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isSelfReviving");
    v144 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isShooting");
    v145 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isSquadLeader");
    v152 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.armorHealthRatio");
    v153 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isInGulag");
    v154 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isInGulagMatch");
    v155 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.hasRespawnToken");
    v156 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.hasSelfReviveToken");
    v146 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.hasRequestedBuyback");
    v157 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isParachuting");
    v158 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isInVehicle");
    v159 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isInInfilPlane");
    v164 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.bunkerKeycardType");
    v148 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.isZombie");
    v162 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.damageDealt");
    v163 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.teamlist.missionsCompleted");
    v140 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.skydiveList.altitude");
    v166 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.skydiveList.verticalSpeed");
    v165 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.skydiveList.squadIndex");
    v8 = 0;
    v138 = 0;
    v9 = 1;
    v142 = 1;
    v185 = -1;
    out_playerName[0] = 0;
    dest[0] = 0;
    IndexByName = BG_Omnvar_GetIndexByName("ui_br_altimeter_c130_height");
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData((LocalClientNum_t)HIDWORD(LocalClientGlobals->m_compassActors[177].lastEnemyPos.Get_lastEnemyPos), IndexByName);
    Integer = (float)Omnvar_GetInteger(Def, Data);
    m_skydiveAutodeployOffset = v5->m_skydiveAutodeployOffset;
    v14 = BG_Omnvar_GetIndexByName("ui_br_altimeter_sea_height");
    v15 = BG_Omnvar_GetDef(v14);
    v16 = LocalClientGlobals;
    v17 = CG_Omnvar_GetData((LocalClientNum_t)HIDWORD(LocalClientGlobals->m_compassActors[177].lastEnemyPos.Get_lastEnemyPos), v14);
    v18 = (float)Omnvar_GetInteger(v15, v17);
    v19 = localClientNuma;
    if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v127) = localClientNuma;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v127, 2, (unsigned __int8)CgCompassSystem::ms_allocatedType) )
        __debugbreak();
    }
    if ( localClientNuma >= (unsigned int)CgCompassSystem::ms_allocatedCount )
    {
      LODWORD(v127) = CgCompassSystem::ms_allocatedCount;
      LODWORD(v126) = localClientNuma;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v126, v127) )
        __debugbreak();
    }
    if ( !CgCompassSystem::ms_compassSystemArray[localClientNuma] )
    {
      LODWORD(v127) = localClientNuma;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v127) )
        __debugbreak();
    }
    LocalClientGlobals = (CgCompassSystemMP *)CgCompassSystem::ms_compassSystemArray[localClientNuma];
    CurrentCompassZoomLevel = CgCompassSystem::GetCurrentCompassZoomLevel(LocalClientGlobals);
    v21 = *(float *)&CurrentCompassZoomLevel;
    v194 = *(float *)&CurrentCompassZoomLevel;
    v22 = DCONST_DVARFLT_cg_teammate_firing_threshold;
    if ( !DCONST_DVARFLT_cg_teammate_firing_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_teammate_firing_threshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    value = v22->current.value;
    IsWeaponRaise = BG_Skydive_IsWeaponRaise((const playerState_s *const)&v16->m_localClientNum);
    memset(v201, 0, sizeof(v201));
    outLivingPlayers = 0;
    outTotalPlayers = 0;
    outLivingTeams = 0;
    outTotalTeams = 0;
    Game_GetPlayerCountStats(SHIDWORD(v16->m_compassActors[177].lastEnemyPos.Get_lastEnemyPos), &outLivingPlayers, &outTotalPlayers, &outLivingTeams, &outTotalTeams);
    team = TEAM_ZERO;
    tile_high = HIDWORD(v16->m_tacpmapTileImages[15].tile);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, tile_high);
    if ( CharacterInfo && CharacterInfo->infoValid )
      team = CharacterInfo->team;
    v25 = 0;
    clientNum = 0;
    if ( cls.maxClients > 0 )
    {
      do
      {
        v26 = CgStatic::GetCharacterInfo(LocalClientStatics, v25);
        ci = v26;
        if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1829, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
          __debugbreak();
        if ( v26->infoValid )
        {
          v27 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum);
          v190 = (const int *)v27;
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1837, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
            __debugbreak();
          if ( v26->team == team && team && (unsigned int)(team - 201) > 1 )
          {
            v28 = (float)*(int *)(v27 + 140) * 0.0078740157;
            I_fclamp(v28, 0.0, 1.0);
            if ( v138 >= 4 )
            {
              for ( i = 0; i < cls.maxClients; ++i )
              {
                v30 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, i);
                v31 = CgStatic::GetCharacterInfo(LocalClientStatics, i);
                Com_Printf(13, "client information: team %i, squad index %i \n", (unsigned int)v31->team, *(unsigned int *)(v30 + 160));
              }
              v19 = localClientNuma;
            }
            v184 = 0;
            ModelNameForCustomization = BG_Customization_GetModelNameForCustomization(CUSTOMIZATION_TYPE_HEAD, (const ClientCustomizationInfo *)(v27 + 164));
            v33 = StringTable_LookupFromAsset("operatorSkins.csv", 5, ModelNameForCustomization, 2);
            newValue = (char *)StringTable_LookupFromAsset("operators.csv", 1, v33, 7);
            v34 = clientNum;
            v35 = LocalClientGlobals->GetCompassActor(LocalClientGlobals, clientNum);
            LastShotFireAmount = CgCompassSystemMP::GetLastShotFireAmount(LocalClientGlobals, (const int *)(v35 + 116));
            v136 = *(float *)&LastShotFireAmount > value;
            v130 = v28 == 0.0;
            v133 = BG_GetConditionValue(ci, 44) > 0;
            v134 = BG_GetConditionValue(ci, 41) > 0;
            kills = 0;
            extrascore3 = 0;
            v175 = 0;
            v129 = 0;
            IsPlayerMuted = 0;
            v176 = 0;
            v192 = CG_CalloutMarkerPing_CheckSquadPingsForReviveByClient(v19, v34) != 53;
            v173 = 0;
            ClientScore = CG_ScoreboardMP_GetClientScore(v19, *(_DWORD *)v27);
            p_client = &ClientScore->client;
            if ( ClientScore )
            {
              kills = ClientScore->kills;
              extrascore2 = ClientScore->extrascore2;
              v173 = (unsigned __int8)extrascore2;
              v175 = (extrascore2 >> 8) & 0xF;
              v176 = (extrascore2 >> 12) & 7;
              HIBYTE(v129) = (extrascore2 & 0x8000) != 0;
              extrascore3 = ClientScore->extrascore3;
              LOBYTE(v129) = CL_IsPlayerTalking(party, ClientScore->client);
              IsPlayerMuted = CL_IsPlayerMuted(party, *p_client);
              v34 = clientNum;
            }
            v40 = *(_DWORD *)(v27 + 120);
            v143 = v40 & 7;
            v41 = (unsigned __int16)v40 >> 6;
            v132 = v41 & 1;
            if ( (v41 & 1) != 0 )
              v185 = *(_DWORD *)v27;
            v42 = CG_CalloutMarkerPing_CheckSquadmateHasRequestedInventory(localClientNuma, v34);
            if ( v42 != 10 )
              *((_DWORD *)v201 + v42) |= 1 << v143;
            v43 = (v41 & 2) != 0;
            v44 = (v41 & 4) != 0;
            v45 = v41 >> 3;
            LOBYTE(v45) = (v41 & 8) != 0;
            v179 = v45;
            v46 = v41 >> 4;
            LOBYTE(v46) = (v41 & 0x10) != 0;
            v180 = v46;
            v47 = v41 >> 5;
            LOBYTE(v47) = (v41 & 0x20) != 0;
            v181 = v47;
            v48 = v41 >> 6;
            LOBYTE(v48) = (v41 & 0x40) != 0;
            v182 = v48;
            v49 = v41 >> 8;
            LOBYTE(v49) = BYTE1(v41) & 1;
            v183 = v49;
            v50 = v41 >> 9;
            if ( tile_high == *v190 )
            {
              v81 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.headIcon");
              LUI_Model_SetString(v81, newValue);
              v82 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.squadIndex");
              LUI_Model_SetInt(v82, v143);
              v83 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isSquadLeader");
              LUI_Model_SetBool(v83, v132);
              v84 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.autoDeployHeight");
              LUI_Model_SetInt(v84, m_skydiveAutodeployOffset);
              v85 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isDowned");
              LUI_Model_SetBool(v85, v179);
              v86 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isBeingRevived");
              LUI_Model_SetBool(v86, v180);
              v87 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isSelfReviving");
              LUI_Model_SetBool(v87, v181);
              v88 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isZombie");
              LUI_Model_SetBool(v88, v182);
              if ( p_client )
              {
                v89 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.kills");
                LUI_Model_SetInt(v89, kills);
                v90 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.armorHealthRatio");
                LUI_Model_SetInt(v90, v173);
                v91 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isInGulag");
                v92 = v43 || v44;
                LUI_Model_SetBool(v91, v92);
                v93 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isInGulagMatch");
                LUI_Model_SetBool(v93, v44);
                v94 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.hasRespawnToken");
                LUI_Model_SetBool(v94, v50);
                v95 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.hasSelfReviveToken");
                LUI_Model_SetBool(v95, v183);
                v96 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isParachuting");
                LUI_Model_SetBool(v96, v133);
                v97 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isInVehicle");
                LUI_Model_SetBool(v97, v134);
                v98 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isInInfilPlane");
                LUI_Model_SetBool(v98, SHIBYTE(v129));
                v99 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isTalking");
                LUI_Model_SetBool(v99, v129);
                v100 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.damageDealt");
                LUI_Model_SetInt(v100, extrascore3);
                v101 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.missionsCompleted");
                LUI_Model_SetInt(v101, v175);
                v102 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.bunkerKeycardType");
                LUI_Model_SetInt(v102, v176);
              }
              v80 = v184;
              v9 = v142;
            }
            else
            {
              v51 = v138;
              if ( v138 >= 4 )
              {
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1946, ASSERT_TYPE_ASSERT, "(teamSlotIndex < 4)", (const char *)&queryFormat, "teamSlotIndex < MAX_PLAYER_TEAM_BR") )
                  __debugbreak();
                v51 = v138;
              }
              v138 = v51 + 1;
              Com_sprintf(dest, 2ui64, "%i", v51);
              v52 = LUI_Model_CreateModelFromPath(ModelFromPath, dest);
              LUI_Model_SetReal(v52, v28);
              v53 = LUI_Model_CreateModelFromPath(v168, dest);
              LUI_Model_SetBool(v53, v130);
              Game_GetPlayerName(localClientNuma, *v190, 0x30ui64, out_playerName);
              v54 = LUI_Model_CreateModelFromPath(v139, dest);
              LUI_Model_SetString(v54, out_playerName);
              v55 = LUI_Model_CreateModelFromPath(v169, dest);
              LUI_Model_SetString(v55, newValue);
              v56 = LUI_Model_CreateModelFromPath(v170, dest);
              LUI_Model_SetInt(v56, v143);
              v57 = LUI_Model_CreateModelFromPath(v171, dest);
              LUI_Model_SetInt(v57, *v190);
              v58 = LUI_Model_CreateModelFromPath(v144, dest);
              LUI_Model_SetInt(v58, v136);
              v59 = LUI_Model_CreateModelFromPath(v145, dest);
              LUI_Model_SetBool(v59, v132);
              v60 = LUI_Model_CreateModelFromPath(v146, dest);
              LUI_Model_SetBool(v60, v192);
              v61 = LUI_Model_CreateModelFromPath(v147, dest);
              LUI_Model_SetBool(v61, v179);
              v62 = LUI_Model_CreateModelFromPath(v148, dest);
              LUI_Model_SetBool(v62, v182);
              v63 = LUI_Model_CreateModelFromPath(v149, dest);
              LUI_Model_SetBool(v63, v180);
              v64 = LUI_Model_CreateModelFromPath(v150, dest);
              LUI_Model_SetBool(v64, v181);
              if ( p_client )
              {
                v65 = LUI_Model_CreateModelFromPath(v151, dest);
                LUI_Model_SetInt(v65, kills);
                v66 = LUI_Model_CreateModelFromPath(v152, dest);
                LUI_Model_SetInt(v66, v173);
                v67 = LUI_Model_CreateModelFromPath(v153, dest);
                v68 = v43 || v44;
                LUI_Model_SetBool(v67, v68);
                v69 = LUI_Model_CreateModelFromPath(v154, dest);
                LUI_Model_SetBool(v69, v44);
                v70 = LUI_Model_CreateModelFromPath(v155, dest);
                LUI_Model_SetBool(v70, v50);
                v71 = LUI_Model_CreateModelFromPath(v156, dest);
                LUI_Model_SetBool(v71, v183);
                v72 = LUI_Model_CreateModelFromPath(v157, dest);
                LUI_Model_SetBool(v72, v133);
                v73 = LUI_Model_CreateModelFromPath(v158, dest);
                LUI_Model_SetBool(v73, v134);
                v74 = LUI_Model_CreateModelFromPath(v159, dest);
                LUI_Model_SetBool(v74, SHIBYTE(v129));
                v75 = LUI_Model_CreateModelFromPath(v160, dest);
                LUI_Model_SetBool(v75, v129);
                v76 = LUI_Model_CreateModelFromPath(v161, dest);
                LUI_Model_SetBool(v76, IsPlayerMuted);
                v77 = LUI_Model_CreateModelFromPath(v162, dest);
                LUI_Model_SetInt(v77, extrascore3);
                v78 = LUI_Model_CreateModelFromPath(v163, dest);
                LUI_Model_SetInt(v78, v175);
                v79 = LUI_Model_CreateModelFromPath(v164, dest);
                LUI_Model_SetInt(v79, v176);
              }
              v80 = v142;
              v9 = ++v142;
              if ( v80 >= 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 2103, ASSERT_TYPE_ASSERT, "(curSkyDiveSlot < 4)", (const char *)&queryFormat, "curSkyDiveSlot < MAX_PLAYER_TEAM_BR") )
                __debugbreak();
            }
            Com_sprintf(dest, 2ui64, "%i", (unsigned int)v80);
            v103 = LUI_Model_CreateModelFromPath(v165, dest);
            LUI_Model_SetInt(v103, v143);
            v200 = ci->velocity.v[2];
            v104 = I_fclamp(-1.0 * v200, 0.0, 3.4028235e38);
            v105 = LUI_Model_CreateModelFromPath(v166, dest);
            LUI_Model_SetReal(v105, *(float *)&v104 * 0.056820001);
            v19 = localClientNuma;
            Entity = CG_GetEntity(localClientNuma, *v190);
            if ( (Entity->flags & 1) != 0 )
            {
              CG_GetPoseOrigin(&Entity->pose, &outOrigin);
              v107 = (float)(outOrigin.v[2] - v18) / (float)(Integer - v18);
              I_fclamp(v107, 0.0, 1.0);
              v108 = LUI_Model_CreateModelFromPath(v140, dest);
              LUI_Model_SetReal(v108, v107);
              memset(&outOrigin, 0, sizeof(outOrigin));
            }
          }
        }
        v25 = clientNum + 1;
        clientNum = v25;
      }
      while ( v25 < cls.maxClients );
      v21 = v194;
    }
    v109 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.squadLeaderClientNum");
    LUI_Model_SetInt(v109, v185);
    v110 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.activePlayerCount");
    LUI_Model_SetInt(v110, outLivingPlayers);
    v111 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.totalPlayerCount");
    LUI_Model_SetInt(v111, outTotalPlayers);
    v112 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.activeTeamCount");
    LUI_Model_SetInt(v112, outLivingTeams);
    v113 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.totalTeamCount");
    LUI_Model_SetInt(v113, outTotalTeams);
    v114 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.isWeaponRaise");
    LUI_Model_SetBool(v114, IsWeaponRaise);
    if ( CgCompassSystem::GetCurrentCompassType(LocalClientGlobals) == COMPASS_TYPE_TACMAP )
    {
      v115 = LUI_Model_CreateModelFromPath(ModelForController, "cg.player.BRData.tacmapZoomLevel");
      LUI_Model_SetReal(v115, v21);
    }
    v116 = v138;
    if ( v138 < 4 )
    {
      v117 = v139;
      do
      {
        Com_sprintf(dest, 2ui64, "%i", (unsigned int)v116);
        v118 = LUI_Model_CreateModelFromPath(v117, dest);
        LUI_Model_SetString(v118, (const char *)&queryFormat.fmt + 3);
        ++v116;
      }
      while ( v116 < 4 );
      v19 = localClientNuma;
    }
    if ( v9 < 4 )
    {
      v119 = v140;
      do
      {
        Com_sprintf(dest, 2ui64, "%i", (unsigned int)v9);
        v120 = LUI_Model_CreateModelFromPath(v119, dest);
        LUI_Model_SetReal(v120, -1.0);
        ++v9;
      }
      while ( v9 < 4 );
      v19 = localClientNuma;
    }
    v121 = CL_Mgr_GetControllerFromClient(v19);
    v122 = LUI_Model_GetModelForController(v121);
    v123 = (int *)v201;
    do
    {
      v124 = j_va("cg.BR.quickInventory.slotFeedback.%d", (unsigned int)v8);
      v125 = LUI_Model_CreateModelFromPath(v122, v124);
      LUI_Model_SetInt(v125, *v123);
      ++v8;
      ++v123;
    }
    while ( v8 < 10 );
  }
}

/*
==============
Game_ThreatIndicator_PushToLUIModels
==============
*/
void Game_ThreatIndicator_PushToLUIModels(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const CgSnapshotMP *NextSnap; 
  __int64 numEntities; 
  const characterInfo_t *CharacterInfo; 
  entityState_t *entities; 
  __int64 v7; 
  __int64 number; 
  CgEntitySystem *v9; 
  __int64 v10; 
  __int64 clientNum; 
  cg_t *v12; 
  const characterInfo_t *v13; 
  team_t team; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v19; 
  __int64 v20; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  __int128 v24; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  __int128 v39; 
  __int128 v40; 
  const dvar_t *v46; 
  int v47; 
  const dvar_t *v48; 
  int *v49; 
  const char **v50; 
  int ControllerFromClient; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  __int64 v54; 
  __int64 v55; 
  int v56[3]; 
  vec3_t outOrigin; 
  CgStatic *LocalClientStatics; 
  cg_t *v59; 
  __int64 v60; 
  vec3_t forward; 
  __int64 v62[4]; 

  v60 = -2i64;
  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v59 = LocalClientGlobals;
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v1);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1625, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  numEntities = (unsigned int)NextSnap->numEntities;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1630, ASSERT_TYPE_ASSERT, "(myCharacterInfo)", (const char *)&queryFormat, "myCharacterInfo") )
    __debugbreak();
  memset(v62, 0, sizeof(v62));
  if ( (_DWORD)numEntities )
  {
    entities = NextSnap->entities;
    v7 = numEntities;
    do
    {
      number = entities->number;
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v55) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v55) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v55) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v54) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v54, v55) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v1] )
      {
        LODWORD(v55) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v55) )
          __debugbreak();
      }
      v9 = CgEntitySystem::ms_entitySystemArray[v1];
      if ( (unsigned int)number >= 0x800 )
      {
        LODWORD(v55) = 2048;
        LODWORD(v54) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v54, v55) )
          __debugbreak();
      }
      v10 = (__int64)&v9->m_entities[number];
      if ( v9->m_entities[number].nextState.eType == ET_PLAYER )
      {
        if ( (v9->m_entities[number].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1645, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
          __debugbreak();
        clientNum = v9->m_entities[number].nextState.clientNum;
        v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( v12->IsMP(v12) )
        {
          if ( (unsigned int)clientNum >= v12[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v55) = v12[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v54) = clientNum;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v54, v55) )
              __debugbreak();
          }
          v13 = (const characterInfo_t *)(*(_QWORD *)&v12[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
        }
        else
        {
          v13 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v12, clientNum);
        }
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1650, ASSERT_TYPE_ASSERT, "(entityCharacterInfo)", (const char *)&queryFormat, "entityCharacterInfo") )
          __debugbreak();
        if ( CharacterInfo != v13 )
        {
          team = CharacterInfo->team;
          if ( team == TEAM_ZERO || team != v13->team )
          {
            v15 = *(__int16 *)(v10 + 400);
            if ( v15 > 0x9E4 )
            {
              LODWORD(v55) = *(__int16 *)(v10 + 400);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v55) )
                __debugbreak();
            }
            if ( (unsigned int)v1 >= 2 )
            {
              LODWORD(v55) = 2;
              LODWORD(v54) = v1;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v54, v55) )
                __debugbreak();
            }
            v16 = 2533 * v1 + v15;
            if ( v16 >= 0x13CA )
            {
              LODWORD(v55) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v55) )
                __debugbreak();
            }
            v17 = clientObjMap[v16];
            if ( v17 )
            {
              if ( v17 >= (unsigned int)s_objCount )
              {
                LODWORD(v55) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v55) )
                  __debugbreak();
              }
              if ( s_objBuf[v17] )
              {
                PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x1Du);
                v19 = (unsigned int)PerkNetworkPriorityIndex;
                if ( PerkNetworkPriorityIndex < 0 )
                  goto LABEL_59;
                if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
                {
                  LODWORD(v55) = 64;
                  LODWORD(v54) = PerkNetworkPriorityIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v54, v55) )
                    __debugbreak();
                }
                if ( ((0x80000000 >> (v19 & 0x1F)) & v13->perks.array[v19 >> 5]) == 0 )
                {
LABEL_59:
                  CG_GetPoseOrigin((const cpose_t *)v10, &outOrigin);
                  v20 = (__int64)v59;
                  p_view = &v59->refdef.view;
                  if ( v59 == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
                    __debugbreak();
                  refdefViewOrg_aab = p_view->refdefViewOrg_aab;
                  v = (_DWORD *)p_view->org.org.v;
                  if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
                    __debugbreak();
                  v56[0] = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
                  v56[1] = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
                  v56[2] = ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2)) ^ v[2];
                  v24 = LODWORD(outOrigin.v[1]);
                  *(float *)&v24 = fsqrt((float)((float)(outOrigin.v[1] - *(float *)&v56[1]) * (float)(outOrigin.v[1] - *(float *)&v56[1])) + (float)((float)(outOrigin.v[0] - *(float *)v56) * (float)(outOrigin.v[0] - *(float *)v56)));
                  _XMM10 = v24;
                  __asm
                  {
                    vcmpless xmm0, xmm10, xmm12
                    vblendvps xmm1, xmm10, xmm11, xmm0
                  }
                  v28 = (float)(outOrigin.v[0] - *(float *)v56) * (float)(1.0 / *(float *)&_XMM1);
                  v29 = (float)(outOrigin.v[1] - *(float *)&v56[1]) * (float)(1.0 / *(float *)&_XMM1);
                  AngleVectors((const vec3_t *)(v20 + 96448), &forward, NULL, NULL);
                  v30 = LODWORD(forward.v[1]);
                  *(float *)&v30 = fsqrt((float)(*(float *)&v30 * *(float *)&v30) + (float)(forward.v[0] * forward.v[0]));
                  _XMM2 = v30;
                  __asm
                  {
                    vcmpless xmm0, xmm2, xmm12
                    vblendvps xmm1, xmm2, xmm11, xmm0
                  }
                  v34 = forward.v[0] * (float)(1.0 / *(float *)&_XMM1);
                  v36 = LODWORD(forward.v[1]);
                  *(float *)&v36 = forward.v[1] * (float)(1.0 / *(float *)&_XMM1);
                  v35 = v36;
                  *(float *)&v36 = (float)(*(float *)&v36 * v29) + (float)(v34 * v28);
                  v37 = v36;
                  *(float *)&v37 = acosf_0(*(float *)&v36);
                  v39 = v37;
                  *(float *)&v39 = *(float *)&v37 * 57.295776;
                  _XMM4 = v39;
                  v40 = v35;
                  *(float *)&v40 = (float)(*(float *)&v35 * v28) - (float)(v34 * v29);
                  _XMM0 = v40;
                  __asm
                  {
                    vcmpltss xmm0, xmm0, xmm15
                    vblendvps xmm0, xmm4, xmm3, xmm0
                  }
                  _XMM0 = 0i64;
                  __asm { vroundss xmm1, xmm0, xmm4, 1 }
                  v46 = DCONST_DVARFLT_lui_ringradar_inner_distance;
                  if ( !DCONST_DVARFLT_lui_ringradar_inner_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ringradar_inner_distance") )
                    __debugbreak();
                  Dvar_CheckFrontendServerThread(v46);
                  if ( *(float *)&_XMM10 >= v46->current.value )
                  {
                    v48 = DCONST_DVARFLT_lui_ringradar_mid_distance;
                    if ( !DCONST_DVARFLT_lui_ringradar_mid_distance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "lui_ringradar_mid_distance") )
                      __debugbreak();
                    Dvar_CheckFrontendServerThread(v48);
                    v47 = 4;
                    if ( v48->current.value > *(float *)&_XMM10 )
                      v47 = 2;
                  }
                  else
                  {
                    v47 = 1;
                  }
                  *((_DWORD *)v62 + (int)*(float *)&_XMM1 % 8) |= v47;
                  memset(v56, 0, sizeof(v56));
                  memset(&outOrigin, 0, sizeof(outOrigin));
                }
              }
            }
          }
        }
      }
      ++entities;
      --v7;
    }
    while ( v7 );
  }
  v49 = (int *)v62;
  v50 = s_ringRadarModels;
  do
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
    ModelForController = LUI_Model_GetModelForController(ControllerFromClient);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, *v50);
    LUI_Model_SetInt(ModelFromPath, *v49);
    ++v50;
    ++v49;
  }
  while ( (__int64)v50 < (__int64)&BRPartySlotColors );
}

/*
==============
GetBRPlayerFlags
==============
*/
__int64 GetBRPlayerFlags(const clientInfo_t *clientInfo)
{
  return (unsigned int)clientInfo->game_extrainfo >> 6;
}

/*
==============
LUI_CoD_GameMP_GetBrColorForClientNum
==============
*/
void LUI_CoD_GameMP_GetBrColorForClientNum(const int clientNum, vec4_t *color)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  int game_extrainfo; 
  LocalClientNum_t v7; 
  CgStatic *v8; 
  unsigned int v9; 
  float *v10; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  game_extrainfo = LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->game_extrainfo;
  v7 = LUI_CoD_GetCurrentValidLocalClient();
  if ( (game_extrainfo & 0x1000) != 0 )
  {
    LUI_COD_GetSwatchRGBColor(v7, "BattleRoyale.BRZombieColor", (vec3_t *)color);
  }
  else
  {
    v8 = CgStatic::GetLocalClientStatics(v7);
    v9 = (v8->GetClientInfo(v8, clientNum)->game_extrainfo & 7) - 1;
    if ( v9 > 3 )
      v9 = 0;
    v10 = &BRPartySlotColors.v[4 * v9];
    color->v[0] = *v10;
    color->v[1] = v10[1];
    color->v[2] = v10[2];
    color->v[3] = v10[3];
  }
}

/*
==============
LUI_CoD_GameMP_GetBrColorForIndex
==============
*/
void LUI_CoD_GameMP_GetBrColorForIndex(const int index, vec4_t *color)
{
  unsigned int v2; 

  v2 = index - 1;
  if ( v2 > 3 )
    v2 = 0;
  *color = *(vec4_t *)&BRPartySlotColors.v[4 * v2];
}

/*
==============
LUI_CoD_GameMP_GetBrEnemyColor
==============
*/
void LUI_CoD_GameMP_GetBrEnemyColor(const int clientNum, vec4_t *color)
{
  LocalClientNum_t CurrentValidLocalClient; 
  CgStatic *LocalClientStatics; 
  LocalClientNum_t v6; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  if ( (LocalClientStatics->GetClientInfo(LocalClientStatics, clientNum)->game_extrainfo & 0x1000) != 0 )
  {
    v6 = LUI_CoD_GetCurrentValidLocalClient();
    LUI_COD_GetSwatchRGBColor(v6, "BattleRoyale.BRZombieColor", (vec3_t *)color);
  }
}

/*
==============
LUI_CoD_GameMP_PostLevelInit
==============
*/
void LUI_CoD_GameMP_PostLevelInit(const LocalClientNum_t localClientNum)
{
  int v2; 
  vec3_t *v3; 
  const char *ColumnValueForRow; 
  StringTable *tablePtr; 

  if ( ((unsigned __int8)(ClStatic::GetActiveGameTypeQuick(&cls) - 1) <= 3u || CG_CalloutMarkerPing_SystemActive()) && !Com_FrontEnd_IsInFrontEnd() )
  {
    StringTable_GetAsset("mp/br_party_colors.csv", (const StringTable **)&tablePtr);
    if ( !DB_IsXAssetDefault(ASSET_TYPE_STRINGTABLE, "mp/br_party_colors.csv") )
    {
      v2 = 0;
      v3 = &BRPartySlotColors;
      do
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v2, 0);
        if ( *ColumnValueForRow )
          LUI_COD_GetSwatchRGBColor(localClientNum, ColumnValueForRow, v3);
        ++v2;
        v3 = (vec3_t *)((char *)v3 + 16);
      }
      while ( v2 < 4 );
    }
  }
}

/*
==============
LUI_CoD_GameMP_RegisterFunctions
==============
*/
void LUI_CoD_GameMP_RegisterFunctions(lua_State *luaVM)
{
  if ( LUI_CoD_InFrontend() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 3579, ASSERT_TYPE_ASSERT, "(!LUI_CoD_InFrontend())", (const char *)&queryFormat, "!LUI_CoD_InFrontend()") )
    __debugbreak();
  j_luaL_register(luaVM, "Game", MP_Game_methods);
  j_lua_settop(luaVM, -2);
}

/*
==============
LUI_GetParty
==============
*/
PartyData *LUI_GetParty()
{
  PartyData *v1; 

  if ( Com_FrontEndScene_IsActive() )
    return 0i64;
  if ( Lobby_IsInRunningLobby() )
    return Lobby_GetPartyData();
  v1 = &g_partyData;
  if ( !Party_InParty(&g_partyData) )
    return Live_GetGameParty();
  return v1;
}

/*
==============
LUI_LuaCall_Game_GetCPScoreboardRowData_impl
==============
*/
__int64 LUI_LuaCall_Game_GetCPScoreboardRowData_impl(lua_State *const luaVM)
{
  __int64 v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  int ControllerFromClient; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v11; 
  int v12; 
  int *v13; 
  int i; 
  unsigned int v16; 
  scr_string_t score; 
  unsigned int v18; 
  int Int; 
  scr_string_t currency; 
  unsigned int v21; 
  unsigned int v22; 
  int v23; 
  int (__cdecl *v24)(const void *, const void *); 
  __int64 v26; 
  int v28; 
  unsigned int v30; 
  lua_State *v31; 
  const char *String; 
  unsigned int v33; 
  lua_State *v34; 
  int v35; 
  unsigned int v36; 
  lua_State *v37; 
  int v38; 
  unsigned int v39; 
  lua_State *v40; 
  int v41; 
  unsigned int v42; 
  lua_State *v43; 
  int v44; 
  unsigned int v45; 
  lua_State *v46; 
  int v47; 
  const PartyData *GameParty; 
  bool IsPlayerTalking; 
  int Context; 
  DDLState v51; 
  DDLState v52; 
  DDLState state; 
  DDLState v54; 
  DDLState fromState; 
  DDLContext context; 
  DDLState toState; 
  DDLState result; 
  int Base; 
  int v60[47]; 
  char out_playerNameWithHash[64]; 

  if ( j_lua_gettop(luaVM) != 1 && (j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 2) || lui_tointeger32(luaVM, 2) == 2) && (j_lua_gettop(luaVM) != 3 || !j_lua_isnumber(luaVM, 2) || !j_lua_isnumber(luaVM, 3) || lui_tointeger32(luaVM, 2) != 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "( lua_gettop( luaVM ) == 1 ) || ( lua_gettop( luaVM ) == 2 && lua_isnumber( luaVM, 2 ) && lui_tointeger32( luaVM, 2 ) != SortCPScoreboard::BY_CLIENT_NUM ) || ( lua_gettop( luaVM ) == 3 && lua_isnumber( luaVM, 2 ) && lua_isnumber( luaVM, 3 ) && lui_tointeger32( luaVM, 2 ) == SortCPScoreboard::BY_CLIENT_NUM )");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  v3 = lui_tointeger32(luaVM, 1);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(CurrentValidLocalClient);
  Asset = Com_DDL_LoadAsset("ddl/mp/cpdata.ddl");
  DDL_GetRootState(&result, Asset);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
  CL_PlayerData_GetDDLBuffer(&context, ControllerFromClient, ActiveStatsSource, STATSGROUP_COOP);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.coopMatchData);
  DDL_MoveToNameByHash(&result, &toState, RawHash, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  v11 = j_SL_GetRawHash(scr_const.eogPlayer);
  DDL_MoveToNameByHash(&toState, &fromState, v11, NULL);
  v12 = 0;
  v13 = v60;
  for ( i = 0; i < 16; ++i )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v54.isValid = 0;
    v54.offset = 0;
    v54.arrayIndex = -1;
    *(_OWORD *)&v54.member = _XMM0;
    DDL_MoveToIndex(&fromState, &v54, i);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v16 = j_SL_GetRawHash(scr_const.connected);
    DDL_MoveToNameByHash(&v54, &state, v16, NULL);
    if ( DDL_GetBool(&state, &context) )
    {
      score = scr_const.score;
      *(v13 - 1) = i;
      v18 = j_SL_GetRawHash(score);
      DDL_MoveToNameByHash(&v54, &state, v18, NULL);
      Int = DDL_GetInt(&state, &context);
      currency = scr_const.currency;
      *v13 = Int;
      v21 = j_SL_GetRawHash(currency);
      DDL_MoveToNameByHash(&v54, &state, v21, NULL);
      ++v12;
      v13[1] = DDL_GetInt(&state, &context);
      v13 += 3;
    }
  }
  if ( j_lua_gettop(luaVM) == 2 || j_lua_gettop(luaVM) == 3 )
    v22 = lui_tointeger32(luaVM, 2);
  else
    v22 = 0;
  if ( j_lua_gettop(luaVM) == 3 )
    v23 = lui_tointeger32(luaVM, 3);
  else
    v23 = 0;
  Context = v23;
  if ( !v22 )
  {
    v24 = (int (__cdecl *)(const void *, const void *))SortCPScoreRowsByScore;
    goto LABEL_30;
  }
  if ( v22 == 1 )
  {
    v24 = (int (__cdecl *)(const void *, const void *))SortCPScoreRowsByCurrency;
LABEL_30:
    qsort(&Base, v12, 0xCui64, v24);
    goto LABEL_31;
  }
  if ( v22 != 2 )
    j_luaL_error(luaVM, "Game.GetCPScoreboardRowData() received unsupported <sortCPScoreboard> param %i", v22);
  qsort_s(&Base, v12, 0xCui64, (_CoreCrtSecureSearchSortCompareFunction)SortCPScoreRowsByClientNum, &Context);
LABEL_31:
  if ( (int)v3 >= v12 )
    return 0i64;
  v52.isValid = 0;
  v52.offset = 0;
  v26 = v60[3 * v3 - 1];
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v28 = v60[3 * v3 - 1];
  v52.arrayIndex = -1;
  *(_OWORD *)&v52.member = _XMM0;
  DDL_MoveToIndex(&fromState, &v52, v28);
  j_lua_createtable(luaVM, 0, 10);
  LUI_SetTableInt("score", v60[3 * v3], LUI_luaVM);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v51.member = _XMM0;
  v51.isValid = 0;
  v51.offset = 0;
  v51.arrayIndex = -1;
  v30 = j_SL_GetRawHash(scr_const.name);
  DDL_MoveToNameByHash(&v52, &v51, v30, NULL);
  v31 = LUI_luaVM;
  String = DDL_GetString(&v51, &context);
  LUI_SetTableString((const char *)&stru_143C9A1A4, String, v31);
  v33 = j_SL_GetRawHash(scr_const.headShots);
  DDL_MoveToNameByHash(&v52, &v51, v33, NULL);
  v34 = LUI_luaVM;
  v35 = DDL_GetInt(&v51, &context);
  LUI_SetTableInt("headShots", v35, v34);
  v36 = j_SL_GetRawHash(scr_const.kills);
  DDL_MoveToNameByHash(&v52, &v51, v36, NULL);
  v37 = LUI_luaVM;
  v38 = DDL_GetInt(&v51, &context);
  LUI_SetTableInt("kills", v38, v37);
  v39 = j_SL_GetRawHash(scr_const.revives);
  DDL_MoveToNameByHash(&v52, &v51, v39, NULL);
  v40 = LUI_luaVM;
  v41 = DDL_GetInt(&v51, &context);
  LUI_SetTableInt("revives", v41, v40);
  v42 = j_SL_GetRawHash(scr_const.downs);
  DDL_MoveToNameByHash(&v52, &v51, v42, NULL);
  v43 = LUI_luaVM;
  v44 = DDL_GetInt(&v51, &context);
  LUI_SetTableInt("downs", v44, v43);
  v45 = j_SL_GetRawHash(scr_const.currency);
  DDL_MoveToNameByHash(&v52, &v51, v45, NULL);
  v46 = LUI_luaVM;
  v47 = DDL_GetInt(&v51, &context);
  LUI_SetTableInt("currency", v47, v46);
  CG_Players_GetPlayerGamertagWithHash(CurrentValidLocalClient, v26, 0x40ui64, out_playerNameWithHash);
  LUI_SetTableString("fullNameWithHash", out_playerNameWithHash, LUI_luaVM);
  GameParty = Live_GetGameParty();
  IsPlayerTalking = CL_IsPlayerTalking(GameParty, v26);
  LOBYTE(GameParty) = CL_IsPlayerMuted(GameParty, v26);
  LUI_SetTableBool("isMicOn", IsPlayerTalking, LUI_luaVM);
  LUI_SetTableBool("isMuted", (bool)GameParty, LUI_luaVM);
  LUI_SetTableInt("clientNum", v26, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerBackground_impl
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerBackground_impl(lua_State *const luaVM)
{
  int v2; 
  __int64 CacheLocation; 
  const PartyData *GameParty; 
  LocalClientNum_t CurrentValidLocalClient; 
  XUID userID; 
  XUID result; 
  PlayerProfileData profileData; 
  char out_playerName[48]; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerBackground( clientNum )");
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  XUID::XUID(&userID);
  v2 = lui_tointeger32(luaVM, 1);
  CacheLocation = PlayerCardData_GetCacheLocation();
  GameParty = Live_GetGameParty();
  Party_GetXuid(&result, GameParty, v2);
  XUID::operator=(&userID, &result);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CG_Players_GetPlayerGamertag(CurrentValidLocalClient, v2, 0x2Fui64, out_playerName);
  PlayercardCache_GetPlayercard(userID, out_playerName, &profileData);
  j_lua_pushinteger(luaVM, profileData.customization_background[CacheLocation]);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerEmblem_impl
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerEmblem_impl(lua_State *const luaVM)
{
  int v2; 
  __int64 CacheLocation; 
  const PartyData *GameParty; 
  LocalClientNum_t CurrentValidLocalClient; 
  const char *PatchImageNameByRef; 
  XUID userID; 
  XUID result; 
  PlayerProfileData profileData; 
  char out_playerName[48]; 

  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerEmblem( clientNum )");
  if ( j_lua_gettop(luaVM) < 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  XUID::XUID(&userID);
  v2 = lui_tointeger32(luaVM, 1);
  CacheLocation = PlayerCardData_GetCacheLocation();
  GameParty = Live_GetGameParty();
  Party_GetXuid(&result, GameParty, v2);
  XUID::operator=(&userID, &result);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  CG_Players_GetPlayerGamertag(CurrentValidLocalClient, v2, 0x2Fui64, out_playerName);
  PlayercardCache_GetPlayercard(userID, out_playerName, &profileData);
  PatchImageNameByRef = PlayerCards_GetPatchImageNameByRef(profileData.customization_patch[CacheLocation]);
  j_lua_pushstring(luaVM, PatchImageNameByRef);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerNameWithHash_impl
==============
*/
const score_t *LUI_LuaCall_Game_GetPlayerNameWithHash_impl(lua_State *const luaVM)
{
  const score_t *result; 
  LocalClientNum_t CurrentValidLocalClient; 
  unsigned int CharacterMaxCount; 
  LocalClientNum_t v7; 
  centity_t *Entity; 
  char nameBuf[48]; 
  char dest[48]; 

  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    j_luaL_error(luaVM, "GetPlayerNameWithHash optionally only takes one integer argument <clientNum>");
  if ( j_lua_gettop(luaVM) && (j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1)) )
    return 0i64;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  if ( j_lua_gettop(luaVM) == 1 )
  {
    *(double *)&_XMM0 = j_lua_tonumber(luaVM, 1);
    __asm { vcvttsd2si rdi, xmm0 }
    if ( (int)_RDI >= ComCharacterLimits::GetCharacterMaxCount() )
    {
      CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
      j_luaL_error(luaVM, "GetPlayerClipNameWithHash expects an integer <clientNum> in [0,%d)", CharacterMaxCount);
    }
  }
  else
  {
    result = CG_ScoreboardMP_GetOurClientScore(CurrentValidLocalClient);
    if ( !result )
      return result;
    LODWORD(_RDI) = result->client;
  }
  v7 = LUI_CoD_GetCurrentValidLocalClient();
  if ( !Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::AGENTS )") )
    __debugbreak();
  if ( (int)_RDI < cls.maxClients )
  {
    CG_Players_GetPlayerNameWithHash(v7, _RDI, 0x30ui64, dest, 1);
  }
  else
  {
    Entity = CG_GetEntity(v7, _RDI);
    if ( (Entity->flags & 1) == 0 || !CL_GetAgentName(v7, _RDI, Entity->nextState.otherEntityNum, nameBuf, 0x30ui64) )
      Com_sprintf(nameBuf, 0x30ui64, "?");
    Core_strcpy(dest, 0x30ui64, nameBuf);
  }
  j_lua_pushstring(luaVM, dest);
  return (const score_t *)1;
}

/*
==============
LUI_LuaCall_Game_GetPlayerScoreInfoAtRank_impl
==============
*/
__int64 LUI_LuaCall_Game_GetPlayerScoreInfoAtRank_impl(lua_State *const luaVM)
{
  bool v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  team_t v5; 
  cg_t *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const score_t *ScoreAtSortedRankForTeam; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, "GetPlayerScoreInfoAtRank expects two mandatory integer arguments, <teamIndex> and <scoreRank>");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "GetPlayerScoreInfoAtRank expects two mandatory integer arguments, <teamIndex> and <scoreRank>");
  v3 = 0;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    if ( j_lua_type(luaVM, 3) != 1 )
      j_luaL_error(luaVM, "GetPlayerScoreInfoAtRank Require the optional third argument to be a boolean <needSorting>");
    v3 = j_lua_toboolean(luaVM, 3) != 0;
  }
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v5 = Lui_ToTeam(luaVM, 1, "GetPlayerScoreInfoAtRank");
  LocalClientGlobals = CG_GetLocalClientGlobals(CurrentValidLocalClient);
  LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1172, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 1174, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( v5 == TEAM_SPECTATOR )
  {
    if ( CharacterInfo->team == TEAM_SPECTATOR )
      return 0i64;
  }
  else if ( v5 == TEAM_FOLLOWER && CharacterInfo->team == TEAM_FOLLOWER )
  {
    return 0i64;
  }
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, 2);
  __asm { vcvttsd2si r8d, xmm0; rank }
  ScoreAtSortedRankForTeam = CG_ScoreboardMP_GetScoreAtSortedRankForTeam(CurrentValidLocalClient, v5, _ER8, v3);
  if ( !ScoreAtSortedRankForTeam )
    return 0i64;
  LUI_PushScoreInfo(luaVM, CurrentValidLocalClient, ScoreAtSortedRankForTeam);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerWeaponLoadoutAttachments_impl
==============
*/

__int64 __fastcall LUI_LuaCall_Game_GetPlayerWeaponLoadoutAttachments_impl(lua_State *const luaVM, __int64 a2, double a3)
{
  int v4; 
  bool v5; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  unsigned int v9; 
  BgWeaponMap *v10; 
  int i; 
  __int64 AllWeaponAttachments; 
  int v15; 
  const char ***v16; 
  const char **v17; 
  const char *v18; 
  __int64 v20; 
  __int64 v21; 
  CgWeaponMap *Instance; 
  Weapon r_weapon; 
  WeaponAttachment *attachments[30]; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: Game.GetPlayerWeaponLoadoutAttachments( <controllerIndex>, <entity number> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v4 = lui_tointeger32(luaVM, 1);
  v5 = 0;
  if ( j_lua_gettop(luaVM) == 2 )
    v5 = j_lua_toboolean(luaVM, 2) != 0;
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( !LocalClientGlobals->nextSnap )
    return 0i64;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v9 = 0;
  Instance = CgWeaponMap::GetInstance(ClientFromController);
  v10 = Instance;
  j_lua_createtable(luaVM, 2, 0);
  for ( i = 0; i < 15; ++i )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)i >= 0xF )
    {
      LODWORD(v21) = 15;
      LODWORD(v20) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    r_weapon = *BgWeaponMap::GetWeapon(v10, p_predictedPlayerState->weaponsEquipped[i]);
    if ( LOWORD(a3) )
    {
      if ( LOWORD(a3) > bg_lastParsedWeaponIndex )
      {
        LODWORD(v21) = bg_lastParsedWeaponIndex;
        LODWORD(v20) = LOWORD(a3);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v20, v21) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[LOWORD(a3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( bg_weaponDefs[LOWORD(a3)]->inventoryType == WEAPINVENTORY_PRIMARY )
      {
        _XMM1 = 0i64;
        ++v9;
        AllWeaponAttachments = BG_GetAllWeaponAttachments(&r_weapon, (const WeaponAttachment **)attachments);
        __asm { vcvtsi2sd xmm1, xmm1, rcx; n }
        j_lua_pushnumber(LUI_luaVM, *(long double *)&_XMM1);
        j_lua_createtable(luaVM, 0, 0);
        v15 = 0;
        if ( (_DWORD)AllWeaponAttachments )
        {
          v16 = (const char ***)attachments;
          do
          {
            v17 = *v16;
            v18 = **v16;
            if ( v18 && (v5 || v17[1] && !*((_BYTE *)v17 + 24)) )
              LUI_SetTableString(++v15, v18, LUI_luaVM);
            ++v16;
            --AllWeaponAttachments;
          }
          while ( AllWeaponAttachments );
        }
        j_lua_settable(LUI_luaVM, -3);
        if ( BG_GetNumWeapons() < 2 )
        {
          if ( v9 )
            break;
        }
        if ( v9 >= 2 )
          break;
      }
    }
    v10 = Instance;
  }
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetPlayerWeaponLoadoutData_impl
==============
*/

__int64 __fastcall LUI_LuaCall_Game_GetPlayerWeaponLoadoutData_impl(lua_State *const luaVM, __int64 a2, double a3)
{
  int v4; 
  LocalClientNum_t ClientFromController; 
  cg_t *LocalClientGlobals; 
  unsigned int v7; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *Instance; 
  unsigned int v10; 
  int v11; 
  GfxImage *v12; 
  __int64 v13; 
  __int64 weaponIdx; 
  bool v15; 
  WeaponCompleteDef **v16; 
  WeaponCompleteDef *v17; 
  const char *String; 
  char *v19; 
  __int64 v20; 
  __int64 v21; 
  char *szInternalName; 
  char *p_output; 
  __int64 v24; 
  __int64 v26; 
  __int64 v27; 
  Weapon r_weapon; 
  char *value; 
  char *v30; 
  char *v31; 
  char *v32; 
  char *v33; 
  char *v34; 
  char *v35; 
  char *v36; 
  char v37; 
  char output; 

  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: GetPlayerWeaponLoadoutData( <controllerIndex> )");
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v4 = lui_tointeger32(luaVM, 1);
  ClientFromController = CL_Mgr_GetClientFromController(v4);
  LocalClientGlobals = CG_GetLocalClientGlobals(ClientFromController);
  if ( !LocalClientGlobals->nextSnap )
    return 0i64;
  v7 = 0;
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  Instance = CgWeaponMap::GetInstance(ClientFromController);
  value = NULL;
  v30 = NULL;
  v10 = 0;
  v31 = NULL;
  v11 = 0;
  v32 = NULL;
  v33 = NULL;
  v34 = NULL;
  v35 = NULL;
  v36 = NULL;
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v11 >= 0xF )
    {
      LODWORD(v27) = 15;
      LODWORD(v26) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v26, v27) )
        __debugbreak();
    }
    r_weapon = *BgWeaponMap::GetWeapon(Instance, p_predictedPlayerState->weaponsEquipped[v11]);
    if ( LOWORD(a3) )
    {
      if ( LOWORD(a3) > bg_lastParsedWeaponIndex )
      {
        LODWORD(v27) = bg_lastParsedWeaponIndex;
        LODWORD(v26) = LOWORD(a3);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v26, v27) )
          __debugbreak();
      }
      if ( !bg_weaponDefs[LOWORD(a3)] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
        __debugbreak();
      if ( bg_weaponDefs[LOWORD(a3)]->inventoryType == WEAPINVENTORY_PRIMARY )
      {
        v12 = BG_HudIcon(&r_weapon, 0);
        if ( v12 )
        {
          v13 = v10++;
          (&value)[v13] = (char *)v12->name;
        }
        weaponIdx = r_weapon.weaponIdx;
        if ( r_weapon.weaponIdx > bg_lastParsedWeaponIndex )
        {
          LODWORD(v27) = bg_lastParsedWeaponIndex;
          LODWORD(v26) = r_weapon.weaponIdx;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v26, v27) )
            __debugbreak();
        }
        v15 = bg_weaponCompleteDefs[weaponIdx] == NULL;
        v16 = &bg_weaponCompleteDefs[weaponIdx];
        if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
          __debugbreak();
        v17 = *v16;
        String = SEH_StringEd_GetString(v17->szDisplayName);
        v19 = (char *)&queryFormat.fmt + 3;
        if ( String )
          v19 = (char *)String;
        v20 = v10;
        v21 = v10 + 1;
        (&value)[v20] = v19;
        szInternalName = (char *)v17->szInternalName;
        p_output = &v37;
        (&value)[v21] = szInternalName;
        v24 = (unsigned int)(v21 + 1);
        if ( !v7 )
          p_output = &output;
        BG_GetWeaponNameComplete(&r_weapon, 0, p_output, 0x400u);
        (&value)[v24] = p_output;
        ++v7;
        v10 = v24 + 1;
        if ( BG_GetNumWeapons() < 2 && v7 )
          goto LABEL_40;
        if ( v7 >= 2 )
          break;
      }
    }
    ++v11;
  }
  while ( v11 < 15 );
  if ( !v7 )
    return 0i64;
LABEL_40:
  j_lua_createtable(luaVM, 0, 8);
  LUI_SetTableString("primaryWeaponIcon", value, LUI_luaVM);
  LUI_SetTableString("primaryWeaponName", v30, LUI_luaVM);
  LUI_SetTableString("primaryWeaponRef", v31, LUI_luaVM);
  LUI_SetTableString("primaryWeaponFullName", v32, LUI_luaVM);
  LUI_SetTableString("secondaryWeaponIcon", v33, LUI_luaVM);
  LUI_SetTableString("secondaryWeaponName", v34, LUI_luaVM);
  LUI_SetTableString("secondaryWeaponRef", v35, LUI_luaVM);
  LUI_SetTableString("secondaryWeaponFullName", v36, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_Game_GetScoreboardRowData_impl
==============
*/
const score_t *LUI_LuaCall_Game_GetScoreboardRowData_impl(lua_State *const luaVM)
{
  team_t v2; 
  int v3; 
  LocalClientNum_t CurrentValidLocalClient; 
  bool v5; 
  const score_t *ScoreAtRankForTeam; 
  const score_t *v7; 
  bool IsPlayerTalking; 
  bool IsPlayerMuted; 
  bool v10; 
  unsigned __int8 ClientPlatform; 
  const PartyData *GameParty; 
  bool v13; 
  lua_State *v14; 
  bool IsPlayerDead; 
  lua_State *v16; 
  bool IsPlayerDogtagAvailable; 
  CgMLGSpectator *MLGSpectator; 
  lua_State *v19; 
  CgMLGSpectator *v20; 
  int ClientConsecutiveKills; 
  lua_State *v22; 
  long double v23; 
  lua_State *v24; 
  int IsClientGametypeVIP; 
  lua_State *v26; 
  int IsClientSpecialActive; 
  lua_State *v28; 
  int IsClientBeingRevived; 
  CgStatic *LocalClientStatics; 
  __int64 v31; 
  const char *ModelNameForCustomization; 
  const char *v33; 
  const char *v34; 
  XUID result; 
  PlayerProfileData profileData; 
  char out_playerName[48]; 
  char out_playerNameWithHash[64]; 

  if ( j_lua_gettop(luaVM) < 2 )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_gettop( luaVM ) >= 2");
  if ( !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 1 )");
  if ( !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isnumber( luaVM, 2 )");
  v2 = lui_tointeger32(luaVM, 1);
  v3 = lui_tointeger32(luaVM, 2);
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v5 = 0;
  if ( j_lua_gettop(luaVM) == 3 )
  {
    if ( j_lua_type(luaVM, 3) != 1 )
      j_luaL_error(luaVM, (const char *)&queryFormat, "lua_isboolean( luaVM, 3 )");
    v5 = j_lua_toboolean(luaVM, 3) != 0;
  }
  ScoreAtRankForTeam = CG_ScoreboardMP_GetScoreAtRankForTeam(CurrentValidLocalClient, v2, v3 + 1);
  v7 = ScoreAtRankForTeam;
  if ( ScoreAtRankForTeam )
  {
    j_lua_createtable(luaVM, 0, 10);
    LUI_SetTableInt("clientNum", v7->client, LUI_luaVM);
    LUI_SetTableBool("isBot", v7->isBot, LUI_luaVM);
    LUI_SetTableInt("rank", v7->rank_mp + v7->prestige_mp, LUI_luaVM);
    LUI_SetTableInt("baseRank", v7->rank_mp, LUI_luaVM);
    LUI_SetTableInt("prestige", v7->prestige_mp, LUI_luaVM);
    LUI_SetTableInt("score", v7->score, LUI_luaVM);
    LUI_SetTableInt("kills", v7->kills, LUI_luaVM);
    LUI_SetTableInt("deaths", v7->deaths, LUI_luaVM);
    LUI_SetTableInt("assists", v7->assists, LUI_luaVM);
    LUI_SetTableInt("extraScore0", v7->extrascore0, LUI_luaVM);
    LUI_SetTableInt("extraScore1", v7->extrascore1, LUI_luaVM);
    LUI_SetTableInt("extraScore2", v7->extrascore2, LUI_luaVM);
    LUI_SetTableInt("extraScore3", v7->extrascore3, LUI_luaVM);
    LUI_SetTableInt("extraScore4", v7->extrascore4, LUI_luaVM);
    LUI_SetTableInt("extraScore5", v7->extrascore5, LUI_luaVM);
    LUI_SetTableInt("ping", v7->ping, LUI_luaVM);
    IsPlayerTalking = 0;
    IsPlayerMuted = 0;
    v10 = 1;
    ClientPlatform = GetClientPlatform();
    GameParty = Live_GetGameParty();
    if ( Party_IsMemberRegistered(GameParty, v7->client) )
    {
      IsPlayerTalking = CL_IsPlayerTalking(GameParty, v7->client);
      IsPlayerMuted = CL_IsPlayerMuted(GameParty, v7->client);
      v10 = GameParty->partyMembers[v7->client].info.platform[0] != ClientPlatform;
    }
    LUI_SetTableBool("isMicOn", IsPlayerTalking, LUI_luaVM);
    LUI_SetTableBool("isMuted", IsPlayerMuted, LUI_luaVM);
    v13 = v10;
    if ( ClientPlatform == 5 )
      v13 = 0;
    LUI_SetTableBool("isCrossplayPlayer", v13, LUI_luaVM);
    v14 = LUI_luaVM;
    IsPlayerDead = CG_ScoreboardMP_IsPlayerDead(v7);
    LUI_SetTableBool("isDead", IsPlayerDead, v14);
    v16 = LUI_luaVM;
    IsPlayerDogtagAvailable = CG_ScoreboardMP_IsPlayerDogtagAvailable(v7);
    LUI_SetTableBool("hasDogtag", IsPlayerDogtagAvailable, v16);
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(CurrentValidLocalClient);
    v19 = LUI_luaVM;
    v20 = MLGSpectator;
    ClientConsecutiveKills = CgMLGSpectator::GetClientConsecutiveKills(MLGSpectator, v7->client);
    LUI_SetTableInt("consecutiveKills", ClientConsecutiveKills, v19);
    LUI_SetTableInt("deathTimerLength", v7->deathTimerLength, LUI_luaVM);
    v22 = LUI_luaVM;
    v23 = (float)((float)CgMLGSpectator::GetClientSuperMeterProgress(v20, v7->client) * 0.0099999998);
    LUI_SetTableNumber("superMeterProgress", v23, v22);
    v24 = LUI_luaVM;
    IsClientGametypeVIP = CgMLGSpectator::IsClientGametypeVIP(v20, v7->client);
    LUI_SetTableBool("isGametypeVIP", IsClientGametypeVIP != 0, v24);
    v26 = LUI_luaVM;
    IsClientSpecialActive = CgMLGSpectator::IsClientSpecialActive(v20, v7->client);
    LUI_SetTableBool("isSpecialActive", IsClientSpecialActive != 0, v26);
    v28 = LUI_luaVM;
    IsClientBeingRevived = CgMLGSpectator::IsClientBeingRevived(v20, v7->client);
    LUI_SetTableBool("isBeingRevived", IsClientBeingRevived != 0, v28);
    LocalClientStatics = CgStatic::GetLocalClientStatics(CurrentValidLocalClient);
    LODWORD(v28) = v7->client;
    v31 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, v7->client);
    ModelNameForCustomization = BG_Customization_GetModelNameForCustomization(CUSTOMIZATION_TYPE_HEAD, (const ClientCustomizationInfo *)(v31 + 164));
    v33 = StringTable_LookupFromAsset("operatorSkins.csv", 5, ModelNameForCustomization, 2);
    v34 = StringTable_LookupFromAsset("operators.csv", 1, v33, 7);
    LUI_SetTableString("operatorIcon", v34, LUI_luaVM);
    Party_GetXuid(&result, GameParty, v7->client);
    CG_Players_GetPlayerName(CurrentValidLocalClient, (const int)v28, 0x2Fui64, out_playerName, 1);
    PlayercardCache_GetPlayercard(result, out_playerName, &profileData);
    LUI_SetTableString((const char *)&stru_143C9A1A4, out_playerName, LUI_luaVM);
    CG_Players_GetPlayerGamertagWithHash(CurrentValidLocalClient, (const int)v28, 0x40ui64, out_playerNameWithHash);
    LUI_SetTableString("fullNameWithHash", out_playerNameWithHash, LUI_luaVM);
    LUI_SetTableInt("healthRatio", *(int *)(v31 + 140), LUI_luaVM);
    return (const score_t *)1;
  }
  else if ( !v5 )
  {
    j_luaL_error(luaVM, (const char *)&queryFormat, "score");
  }
  return ScoreAtRankForTeam;
}

/*
==============
LUI_LuaCall_Game_GetWeaponDamageStats_impl
==============
*/
__int64 LUI_LuaCall_Game_GetWeaponDamageStats_impl(lua_State *const luaVM)
{
  LocalClientNum_t CurrentValidLocalClient; 
  __int64 v3; 
  playerState_s *p_predictedPlayerState; 
  CgWeaponMap *v5; 
  const Weapon *Weapon; 
  bool v7; 
  double ADSDamageRangeScale; 
  float maxDamageRange[4]; 
  int outMinDamage; 
  int outMaxDamage; 
  float minDamageRange; 

  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  v3 = CurrentValidLocalClient;
  p_predictedPlayerState = &CG_GetLocalClientGlobals(CurrentValidLocalClient)->predictedPlayerState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v5, p_predictedPlayerState->weapCommon.weaponHandle);
  v7 = !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x22u) && (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x11u) || GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->weapCommon.weapFlags, ACTIVE, 0x1Bu));
  ADSDamageRangeScale = BG_GetADSDamageRangeScale(v5, p_predictedPlayerState, Weapon, v7);
  j_lua_createtable(luaVM, 0, 0);
  outMinDamage = 0;
  outMaxDamage = 0;
  BG_GetMinMaxDamage(WEAP_DMG_CALC_TYPE_DEFAULT, Weapon, v7, &outMinDamage, &outMaxDamage);
  LUI_SetTableInt("minDamage", outMinDamage, LUI_luaVM);
  LUI_SetTableInt("damage", outMaxDamage, LUI_luaVM);
  BG_GetDamageRange(WEAP_DMG_CALC_TYPE_DEFAULT, Weapon, v7, *(float *)&ADSDamageRangeScale, &minDamageRange, maxDamageRange);
  LUI_SetTableNumber("minDamageRange", minDamageRange, LUI_luaVM);
  LUI_SetTableNumber("maxDamageRange", maxDamageRange[0], LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_PushScoreInfo
==============
*/
void LUI_PushScoreInfo(lua_State *luaVM, LocalClientNum_t localClientNum, const score_t *score)
{
  Material *hPartyIcon; 
  const GfxImage *hRankIcon; 
  const PartyData *GameParty; 
  const char *v8; 
  int client; 
  LocalClientNum_t CurrentValidLocalClient; 
  GfxImage *output_material; 
  char out_playerName[48]; 

  j_lua_createtable(luaVM, 0, 0);
  LUI_SetTableInt("status", score->status, luaVM);
  LUI_SetTableInt("score", score->score, luaVM);
  LUI_SetTableInt("kills", score->kills, luaVM);
  LUI_SetTableInt("assists", score->assists, luaVM);
  LUI_SetTableInt("deaths", score->deaths, luaVM);
  LUI_SetTableInt("extrascore0", score->extrascore0, luaVM);
  LUI_SetTableInt("extrascore1", score->extrascore1, luaVM);
  LUI_SetTableInt("extrascore2", score->extrascore2, luaVM);
  LUI_SetTableInt("extrascore3", score->extrascore3, luaVM);
  LUI_SetTableInt("rank", score->prestige_mp + score->rank_mp, luaVM);
  LUI_SetTableInt("baseRank", score->rank_mp, luaVM);
  LUI_SetTableInt("prestige", score->prestige_mp, luaVM);
  LUI_SetTableInt("ping", score->ping, luaVM);
  LUI_SetTableInt("client", score->client, luaVM);
  LUI_SetTableInt("adrenaline", score->adrenaline, luaVM);
  LUI_SetTableInt("deathTimerLength", score->deathTimerLength, luaVM);
  hPartyIcon = score->hPartyIcon;
  if ( hPartyIcon )
    LUI_SetTableMaterial("partyIcon", hPartyIcon->textureTable->image, luaVM);
  hRankIcon = score->hRankIcon;
  if ( hRankIcon )
    LUI_SetTableMaterial("rankIcon", hRankIcon, luaVM);
  LUI_SetTableBool("isDead", score->hStatusIcon != NULL, luaVM);
  output_material = NULL;
  GameParty = Live_GetGameParty();
  if ( CL_IsPlayerMuted(GameParty, score->client) )
  {
    v8 = "voice_off";
  }
  else
  {
    if ( !CL_IsPlayerTalking(GameParty, score->client) )
      goto LABEL_10;
    v8 = "voice_on";
  }
  LUI_Interface_RegisterMaterial(v8, (const GfxImage **)&output_material);
LABEL_10:
  if ( output_material )
    LUI_SetTableMaterial("voiceIcon", output_material, luaVM);
  client = score->client;
  CurrentValidLocalClient = LUI_CoD_GetCurrentValidLocalClient();
  Game_GetPlayerName(CurrentValidLocalClient, client, 0x30ui64, out_playerName);
  j_lua_pushstring(luaVM, out_playerName);
  j_lua_setfield(luaVM, -2, (const char *)&stru_143C9A1A4);
}

/*
==============
Lui_ToTeam
==============
*/
__int64 Lui_ToTeam(lua_State *luaVM, int argIdx, const char *callingFunc)
{
  char *fmt; 

  if ( j_lua_gettop(luaVM) < argIdx )
    j_luaL_error(luaVM, "%s expects an integer argument <teamIndex> for argument %d", callingFunc, (unsigned int)argIdx);
  if ( !j_lua_isnumber(luaVM, argIdx) )
    j_luaL_error(luaVM, "%s expects an integer argument <teamIndex> for argument %d", callingFunc, (unsigned int)argIdx);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_cod_game_mp.cpp", 133, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  *(double *)&_XMM0 = j_lua_tonumber(luaVM, argIdx);
  __asm { vcvttsd2si esi, xmm0 }
  if ( _ESI > 0xCA )
  {
    LODWORD(fmt) = argIdx;
    j_luaL_error(luaVM, "%s - <teamIndex %d> not recognized for argument %d", callingFunc, _ESI, fmt);
  }
  return _ESI;
}

/*
==============
SortCPScoreRowsByClientNum
==============
*/
__int64 SortCPScoreRowsByClientNum(void *context, const void *a, const void *b)
{
  int v3; 
  int v4; 
  int v5; 

  v3 = *(_DWORD *)a;
  v4 = *(_DWORD *)b;
  if ( v3 < *(_DWORD *)b )
    return 0xFFFFFFFFi64;
  v5 = *(_DWORD *)context;
  if ( v4 == v5 )
    return 0xFFFFFFFFi64;
  return v3 > v4 || v3 == v5;
}

/*
==============
SortCPScoreRowsByCurrency
==============
*/
__int64 SortCPScoreRowsByCurrency(const void *a, const void *b)
{
  __int64 result; 

  result = 1i64;
  if ( *((_DWORD *)a + 2) >= *((_DWORD *)b + 2) )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
SortCPScoreRowsByScore
==============
*/
__int64 SortCPScoreRowsByScore(const void *a, const void *b)
{
  __int64 result; 

  result = 1i64;
  if ( *((_DWORD *)a + 1) >= *((_DWORD *)b + 1) )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
UnpackValue
==============
*/
__int64 UnpackValue(const unsigned int packedValue, const unsigned int bitOffset, const unsigned int bitWidth)
{
  float v3; 

  v3 = (float)bitWidth;
  return (packedValue >> bitOffset) & ((int)powf_0(2.0, v3) - 1);
}

