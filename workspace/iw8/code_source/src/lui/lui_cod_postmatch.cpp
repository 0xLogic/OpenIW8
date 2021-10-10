/*
==============
LUI_CoD_RegisterPostMatchFunctions
==============
*/

void __fastcall LUI_CoD_RegisterPostMatchFunctions(lua_State *luaVM)
{
  ?LUI_CoD_RegisterPostMatchFunctions@@YAXPEAUlua_State@@@Z(luaVM);
}

/*
==============
FormatDateTime
==============
*/
void FormatDateTime(const unsigned int time, char *outputString, const unsigned int outputStringSize)
{
  unsigned __int64 v4; 
  struct tm *v5; 
  const char *v6; 
  __time64_t Time[2]; 
  ConversionArguments arguments; 
  char dest[16]; 
  char v10[16]; 
  char v11[16]; 
  char v12[16]; 
  char v13[16]; 

  Time[0] = time;
  v4 = outputStringSize;
  v5 = _localtime64(Time);
  v6 = UI_SafeTranslateString("LUA_MENU/DATE_TIME_EVENT");
  if ( v6 )
  {
    memset_0(&arguments, 0, sizeof(arguments));
    arguments.argCount = 5;
    Com_sprintf(dest, 0x10ui64, "%d", (unsigned int)(v5->tm_mon + 1));
    arguments.args[0] = dest;
    Com_sprintf(v10, 0x10ui64, "%d", (unsigned int)v5->tm_mday);
    arguments.args[1] = v10;
    Com_sprintf(v11, 0x10ui64, "%d", (unsigned int)(v5->tm_year + 1900));
    arguments.args[2] = v11;
    Com_sprintf(v12, 0x10ui64, "%d", (unsigned int)v5->tm_hour);
    arguments.args[3] = v12;
    Com_sprintf(v13, 0x10ui64, "%02d", (unsigned int)v5->tm_min);
    arguments.args[4] = v13;
    UI_ReplaceConversions(v6, &arguments, outputString, v4);
  }
  else
  {
    *outputString = 0;
  }
}

/*
==============
LUI_CoD_RegisterPostMatchFunctions
==============
*/
void LUI_CoD_RegisterPostMatchFunctions(lua_State *luaVM)
{
  int v2; 
  LUIMethod<LUIPostMatchPackage> *v3; 
  int i; 

  j_lua_getfield(luaVM, -10002, "PostMatch");
  if ( !j_lua_type(luaVM, -1) )
  {
    j_lua_settop(luaVM, -2);
    j_lua_createtable(luaVM, 0, 0);
    j_lua_setfield(luaVM, -10002, "PostMatch");
    j_lua_getfield(luaVM, -10002, "PostMatch");
  }
  if ( j_lua_type(luaVM, -1) != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui.h", 193, ASSERT_TYPE_ASSERT, "((lua_type(luaVM, (-1)) == 5))", (const char *)&queryFormat, "lua_istable( luaVM, -1 )") )
    __debugbreak();
  v2 = j_lua_gettop(luaVM);
  v3 = LUIMethod<LUIPostMatchPackage>::list;
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
LUI_LuaCall_LUIPostMatchPackage_GetPlayerMatchStatsData
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_GetPlayerMatchStatsData(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIPostMatchPackage_GetPlayerMatchStatsData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_GetPlayerMatchStatsData_impl
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_GetPlayerMatchStatsData_impl(lua_State *const luaVM)
{
  int v3; 
  const XUID *Xuid; 
  int v5; 
  const DDLDef *Asset; 
  char ActiveGameMode; 
  scr_string_t players; 
  bool v10; 
  unsigned int RawHash; 
  int v12; 
  unsigned int v14; 
  unsigned int Int; 
  unsigned int v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  char *String; 
  scr_string_t score; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  scr_string_t kills; 
  unsigned int v26; 
  unsigned __int16 v27; 
  scr_string_t deaths; 
  unsigned int v29; 
  unsigned __int16 v30; 
  scr_string_t extrascore0; 
  unsigned int v32; 
  unsigned __int16 v33; 
  scr_string_t extrascore1; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  const char *v41; 
  int v42; 
  DDLState state; 
  DDLState v45; 
  XUID result; 
  XUID v47; 
  DDLContext ddlContext; 
  DDLState toState; 
  DDLState fromState; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int Short; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  char *value; 
  char v63[12]; 
  char dest[24]; 
  int v65; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PostMatch.GetPlayerMatchStatsData( controllerIndex )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) || !cls.matchData.def[0] )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 1);
  XUID::XUID(&v47);
  if ( Live_IsUserSignedIn(v3) )
  {
    Xuid = Live_GetXuid(&result, v3);
    XUID::operator=(&v47, Xuid);
  }
  v5 = 0;
  Asset = Com_DDL_LoadAsset(cls.matchData.def);
  Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  toState.arrayIndex = -1;
  DDL_GetRootState(&fromState, Asset);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  players = scr_const.players;
  if ( ActiveGameMode == 3 )
    players = scr_const.player;
  v10 = ActiveGameMode == 3;
  RawHash = j_SL_GetRawHash(players);
  DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL);
  v12 = 0;
  while ( 1 )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v45.isValid = 0;
    v45.offset = 0;
    v45.arrayIndex = -1;
    *(_OWORD *)&v45.member = _XMM0;
    DDL_MoveToIndex(&toState, &v45, v12);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&state.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    state.arrayIndex = -1;
    v14 = j_SL_GetRawHash(scr_const.xuidHigh);
    DDL_MoveToNameByHash(&v45, &state, v14, NULL);
    Int = DDL_GetInt(&state, &ddlContext);
    v16 = j_SL_GetRawHash(scr_const.xuidLow);
    DDL_MoveToNameByHash(&v45, &state, v16, NULL);
    v17 = DDL_GetInt(&state, &ddlContext);
    XUID::FromUInt64(&result, v17 | ((unsigned __int64)Int << 32));
    v18 = XUID::ToString(&result);
    Core_strcpy(dest, 0x15ui64, v18);
    if ( XUID::operator==(&v47, &result) )
      break;
    if ( ++v12 >= 200 )
      goto LABEL_30;
  }
  v19 = j_SL_GetRawHash(scr_const.username);
  DDL_MoveToNameByHash(&v45, &state, v19, NULL);
  String = (char *)DDL_GetString(&state, &ddlContext);
  score = scr_const.score;
  value = String;
  if ( v10 )
    score = scr_const.currency_earned;
  v22 = j_SL_GetRawHash(score);
  DDL_MoveToNameByHash(&v45, &state, v22, NULL);
  v52 = DDL_GetInt(&state, &ddlContext);
  if ( v10 )
  {
    v24 = j_SL_GetRawHash(scr_const.total_headshots);
    DDL_MoveToNameByHash(&v45, &state, v24, NULL);
    v65 = DDL_GetInt(&state, &ddlContext);
  }
  else
  {
    v23 = j_SL_GetRawHash(scr_const.assists);
    DDL_MoveToNameByHash(&v45, &state, v23, NULL);
    Short = DDL_GetShort(&state, &ddlContext);
  }
  kills = scr_const.kills;
  if ( v10 )
    kills = scr_const.zombie_death;
  v26 = j_SL_GetRawHash(kills);
  DDL_MoveToNameByHash(&v45, &state, v26, NULL);
  v27 = DDL_GetShort(&state, &ddlContext);
  deaths = scr_const.deaths;
  if ( v10 )
    deaths = scr_const.entering_afterlife_arcade;
  v54 = v27;
  v29 = j_SL_GetRawHash(deaths);
  DDL_MoveToNameByHash(&v45, &state, v29, NULL);
  v30 = DDL_GetShort(&state, &ddlContext);
  extrascore0 = scr_const.extrascore0;
  if ( v10 )
    extrascore0 = scr_const.dropped_to_last_stand;
  v53 = v30;
  v32 = j_SL_GetRawHash(extrascore0);
  DDL_MoveToNameByHash(&v45, &state, v32, NULL);
  v33 = DDL_GetShort(&state, &ddlContext);
  extrascore1 = scr_const.extrascore1;
  if ( v10 )
    extrascore1 = scr_const.revived_another_player;
  v58 = v33;
  v35 = j_SL_GetRawHash(extrascore1);
  DDL_MoveToNameByHash(&v45, &state, v35, NULL);
  v59 = DDL_GetShort(&state, &ddlContext);
  v36 = j_SL_GetRawHash(scr_const.extrascore2);
  DDL_MoveToNameByHash(&v45, &state, v36, NULL);
  v60 = DDL_GetShort(&state, &ddlContext);
  v37 = j_SL_GetRawHash(scr_const.extrascore3);
  DDL_MoveToNameByHash(&v45, &state, v37, NULL);
  v61 = DDL_GetShort(&state, &ddlContext);
  v38 = j_SL_GetRawHash(scr_const.rank);
  DDL_MoveToNameByHash(&v45, &state, v38, NULL);
  v55 = DDL_GetShort(&state, &ddlContext);
  v39 = j_SL_GetRawHash(scr_const.prestige);
  DDL_MoveToNameByHash(&v45, &state, v39, NULL);
  v56 = DDL_GetShort(&state, &ddlContext);
  v40 = j_SL_GetRawHash(scr_const.clanTag);
  DDL_MoveToNameByHash(&v45, &state, v40, NULL);
  v41 = DDL_GetString(&state, &ddlContext);
  Core_strcpy(v63, 0xCui64, v41);
  DDL_MoveToName(&v45, &state, "timeplayed");
  v42 = DDL_GetInt(&state, &ddlContext);
  if ( v42 > 0 )
    v5 = v52 / (v42 / 60000);
LABEL_30:
  j_lua_createtable(luaVM, 0, 16);
  LUI_SetTableInt("clientNum", v51, LUI_luaVM);
  LUI_SetTableInt("rank", v56 + v55, LUI_luaVM);
  LUI_SetTableInt("baseRank", v55, LUI_luaVM);
  LUI_SetTableInt("prestige", v56, LUI_luaVM);
  LUI_SetTableInt("score", v52, LUI_luaVM);
  LUI_SetTableInt("kills", v54, LUI_luaVM);
  LUI_SetTableInt("deaths", v53, LUI_luaVM);
  LUI_SetTableInt("assists", Short, LUI_luaVM);
  LUI_SetTableInt("downs", v58, LUI_luaVM);
  LUI_SetTableInt("revives", v59, LUI_luaVM);
  LUI_SetTableInt("extraScore0", v58, LUI_luaVM);
  LUI_SetTableInt("extraScore1", v59, LUI_luaVM);
  LUI_SetTableInt("extraScore2", v60, LUI_luaVM);
  LUI_SetTableInt("extraScore3", v61, LUI_luaVM);
  LUI_SetTableString((const char *)&stru_143C9A1A4, value, LUI_luaVM);
  LUI_SetTableString("clanTag", v63, LUI_luaVM);
  LUI_SetTableString("xuid", dest, LUI_luaVM);
  LUI_SetTableInt("headShots", v65, LUI_luaVM);
  LUI_SetTableInt("scorePerMin", v5, LUI_luaVM);
  return 1i64;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_GetScoreboardRowData
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_GetScoreboardRowData(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIPostMatchPackage_GetScoreboardRowData_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_GetScoreboardRowData_impl
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_GetScoreboardRowData_impl(lua_State *const luaVM)
{
  int v3; 
  int Byte; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  int Int; 
  const DDLDef *v9; 
  StatsSource ActiveStatsSource; 
  unsigned int v13; 
  unsigned int v14; 
  const char *Enum; 
  char ActiveGameMode; 
  scr_string_t players; 
  bool v18; 
  int v19; 
  unsigned int v21; 
  const XUID *v23; 
  int v24; 
  int *p_score; 
  unsigned int v27; 
  const char *v28; 
  unsigned int v29; 
  const char *String; 
  const char *v31; 
  scr_string_t score; 
  unsigned int v33; 
  unsigned int v34; 
  unsigned __int16 Short; 
  scr_string_t isBot; 
  unsigned int v37; 
  unsigned int v38; 
  scr_string_t kills; 
  unsigned int v40; 
  unsigned __int16 v41; 
  scr_string_t deaths; 
  unsigned int v43; 
  unsigned __int16 v44; 
  scr_string_t extrascore0; 
  unsigned int v46; 
  unsigned __int16 v47; 
  scr_string_t extrascore1; 
  unsigned int v49; 
  unsigned int v50; 
  unsigned __int16 v51; 
  scr_string_t extrascore3; 
  unsigned int v53; 
  unsigned __int16 v54; 
  scr_string_t extrascore4; 
  unsigned int v56; 
  unsigned __int16 v57; 
  scr_string_t extrascore5; 
  unsigned int v59; 
  unsigned __int16 v60; 
  scr_string_t placement; 
  unsigned int v62; 
  unsigned int v63; 
  unsigned __int16 v64; 
  scr_string_t prestige; 
  unsigned int v66; 
  unsigned __int16 v67; 
  scr_string_t xuidHigh; 
  unsigned int v69; 
  unsigned int v70; 
  unsigned int v71; 
  unsigned int v72; 
  const char *v73; 
  __int64 v74; 
  unsigned int v75; 
  const PartyData *ActiveParty; 
  int v77; 
  bool IsPlayerTalking; 
  unsigned int v79; 
  __int64 v80; 
  lua_State *v81; 
  int v82; 
  int *p_headShots; 
  const dvar_t *v84; 
  __int64 integer64; 
  __int64 v86; 
  const char *v87; 
  __int64 v88; 
  char v89; 
  __int64 v90; 
  char v91; 
  bool v92; 
  char ClientPlatform; 
  char v94; 
  bool v95; 
  int *v96; 
  __int64 v97; 
  const char *v98; 
  signed __int64 v99; 
  char v100; 
  __int64 v101; 
  char v102; 
  int v103; 
  int ControllerFromClient; 
  const XUID *v105; 
  const char *v106; 
  int v107; 
  int v108; 
  const XUID *v109; 
  const char *v110; 
  int v111; 
  bool v112; 
  LUIScoreCompare v113; 
  int v114; 
  int v115; 
  DDLState state; 
  DDLState v117; 
  int v118; 
  XUID userID; 
  DDLContext ddlContext; 
  XUID v121; 
  XUID v122; 
  XUID v123; 
  lua_State *L; 
  XUID xuid; 
  XUID v126; 
  DDLState toState; 
  DDLState v128; 
  DDLState v129; 
  DDLState v130; 
  XUID v131; 
  XUID v132; 
  XUID v133; 
  DDLState result; 
  DDLState fromState; 
  DDLContext context; 
  PlayerProfileData profileData; 
  PostMatchInfo_t _First[200]; 

  L = luaVM;
  if ( j_lua_gettop(luaVM) != 2 || !j_lua_isnumber(luaVM, 1) || !j_lua_isnumber(luaVM, 2) )
    j_luaL_error(luaVM, "USAGE: PostMatch.GetScoreboardRowData( controllerIndex, team )");
  if ( j_lua_gettop(luaVM) != 2 )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  if ( !j_lua_isnumber(luaVM, 2) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 1);
  v118 = lui_tointeger32(luaVM, 2);
  if ( !cls.matchData.def[0] )
    return 0i64;
  Byte = 0;
  Asset = Com_DDL_LoadAsset(cls.matchData.def);
  Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
  DDL_GetRootState(&result, Asset);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
  DDL_MoveToNameByHash(&result, &toState, RawHash, NULL);
  Int = DDL_GetInt(&toState, &ddlContext);
  v9 = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  DDL_GetRootState(&fromState, v9);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_COMMON);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v128.isValid = 0;
  v128.offset = 0;
  v128.arrayIndex = -1;
  *(_OWORD *)&v128.member = _XMM0;
  DDL_MoveToName(&fromState, &v128, "commonData");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v129.member = _XMM0;
  v129.isValid = 0;
  v129.offset = 0;
  v129.arrayIndex = -1;
  v13 = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&v128, &v129, v13, NULL);
  v14 = j_SL_GetRawHash(scr_const.scoreboardType);
  DDL_MoveToNameByHash(&v129, &toState, v14, NULL);
  Enum = DDL_GetEnum(&toState, &context);
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  players = scr_const.players;
  v18 = ActiveGameMode == 3;
  v19 = 0;
  v112 = ActiveGameMode == 3;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  v114 = 0;
  v130.isValid = 0;
  if ( ActiveGameMode == 3 )
    players = scr_const.player;
  v130.offset = 0;
  v130.arrayIndex = -1;
  *(_OWORD *)&v130.member = _XMM0;
  v21 = j_SL_GetRawHash(players);
  if ( DDL_MoveToNameByHash(&result, &v130, v21, NULL) )
  {
    XUID::NullXUID(&v121);
    if ( Live_IsUserSignedIn(v3) )
    {
      v23 = Live_GetXuid(&v131, v3);
      XUID::operator=(&v121, v23);
    }
    v24 = 0;
    p_score = &_First[0].scoreInfo.score;
    do
    {
      if ( v24 >= Int )
        break;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      v117.isValid = 0;
      v117.offset = 0;
      v117.arrayIndex = -1;
      *(_OWORD *)&v117.member = _XMM0;
      DDL_MoveToIndex(&v130, &v117, v24);
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v113 = 0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&state.member = _XMM0;
      if ( v18 )
        goto LABEL_118;
      v27 = j_SL_GetRawHash(scr_const.team);
      DDL_MoveToNameByHash(&v117, &state, v27, NULL);
      v28 = DDL_GetEnum(&state, &ddlContext);
      if ( !Enum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 576, ASSERT_TYPE_ASSERT, "(scoreboardType)", (const char *)&queryFormat, "scoreboardType") )
        __debugbreak();
      if ( I_strcmp(Enum, "neutral") )
      {
        if ( I_strcmp(Enum, "allies") && I_strcmp(Enum, "axis") )
        {
          if ( !I_strcmp(Enum, "multiteam") )
            v113 = (LUIScoreCompare)1;
        }
        else if ( I_strcmp(v28, "allies") )
        {
          if ( !I_strcmp(v28, "axis") )
            Byte = 1;
        }
        else
        {
          Byte = 2;
        }
      }
      else
      {
        Byte = 0;
      }
      if ( !I_strcmp(v28, "none") )
        ++Int;
      v19 = v114;
      if ( Byte == v118 )
      {
LABEL_118:
        v29 = j_SL_GetRawHash(scr_const.username);
        DDL_MoveToNameByHash(&v117, &state, v29, NULL);
        String = DDL_GetString(&state, &ddlContext);
        v31 = String;
        if ( String && I_strcmp(String, (const char *)&queryFormat.fmt + 3) )
        {
          score = scr_const.score;
          *((_QWORD *)p_score + 14) = v31;
          if ( v112 )
            score = scr_const.currency_earned;
          v33 = j_SL_GetRawHash(score);
          DDL_MoveToNameByHash(&v117, &state, v33, NULL);
          *p_score = DDL_GetInt(&state, &ddlContext);
          if ( v112 )
          {
            v38 = j_SL_GetRawHash(scr_const.total_headshots);
            DDL_MoveToNameByHash(&v117, &state, v38, NULL);
            p_score[39] = DDL_GetInt(&state, &ddlContext);
          }
          else
          {
            v34 = j_SL_GetRawHash(scr_const.assists);
            DDL_MoveToNameByHash(&v117, &state, v34, NULL);
            Short = DDL_GetShort(&state, &ddlContext);
            isBot = scr_const.isBot;
            p_score[10] = Short;
            v37 = j_SL_GetRawHash(isBot);
            DDL_MoveToNameByHash(&v117, &state, v37, NULL);
            *((_BYTE *)p_score + 16) = DDL_GetBool(&state, &ddlContext);
          }
          kills = scr_const.kills;
          if ( v112 )
            kills = scr_const.zombie_death;
          v40 = j_SL_GetRawHash(kills);
          DDL_MoveToNameByHash(&v117, &state, v40, NULL);
          v41 = DDL_GetShort(&state, &ddlContext);
          deaths = scr_const.deaths;
          if ( v112 )
            deaths = scr_const.entering_afterlife_arcade;
          p_score[5] = v41;
          v43 = j_SL_GetRawHash(deaths);
          DDL_MoveToNameByHash(&v117, &state, v43, NULL);
          v44 = DDL_GetShort(&state, &ddlContext);
          extrascore0 = scr_const.extrascore0;
          if ( v112 )
            extrascore0 = scr_const.dropped_to_last_stand;
          p_score[2] = v44;
          v46 = j_SL_GetRawHash(extrascore0);
          DDL_MoveToNameByHash(&v117, &state, v46, NULL);
          v47 = DDL_GetShort(&state, &ddlContext);
          extrascore1 = scr_const.extrascore1;
          if ( v112 )
            extrascore1 = scr_const.revived_another_player;
          p_score[11] = v47;
          v49 = j_SL_GetRawHash(extrascore1);
          DDL_MoveToNameByHash(&v117, &state, v49, NULL);
          p_score[12] = DDL_GetShort(&state, &ddlContext);
          if ( !v112 )
          {
            v50 = j_SL_GetRawHash(scr_const.extrascore2);
            DDL_MoveToNameByHash(&v117, &state, v50, NULL);
            v51 = DDL_GetShort(&state, &ddlContext);
            extrascore3 = scr_const.extrascore3;
            p_score[13] = v51;
            v53 = j_SL_GetRawHash(extrascore3);
            DDL_MoveToNameByHash(&v117, &state, v53, NULL);
            v54 = DDL_GetShort(&state, &ddlContext);
            extrascore4 = scr_const.extrascore4;
            p_score[14] = v54;
            v56 = j_SL_GetRawHash(extrascore4);
            DDL_MoveToNameByHash(&v117, &state, v56, NULL);
            v57 = DDL_GetShort(&state, &ddlContext);
            extrascore5 = scr_const.extrascore5;
            p_score[15] = v57;
            v59 = j_SL_GetRawHash(extrascore5);
            DDL_MoveToNameByHash(&v117, &state, v59, NULL);
            v60 = DDL_GetShort(&state, &ddlContext);
            placement = scr_const.placement;
            p_score[16] = v60;
            v62 = j_SL_GetRawHash(placement);
            DDL_MoveToNameByHash(&v117, &state, v62, NULL);
            *((_WORD *)p_score + 34) = DDL_GetShort(&state, &ddlContext);
          }
          v63 = j_SL_GetRawHash(scr_const.rank);
          DDL_MoveToNameByHash(&v117, &state, v63, NULL);
          v64 = DDL_GetShort(&state, &ddlContext);
          prestige = scr_const.prestige;
          p_score[6] = v64;
          v66 = j_SL_GetRawHash(prestige);
          DDL_MoveToNameByHash(&v117, &state, v66, NULL);
          v67 = DDL_GetShort(&state, &ddlContext);
          xuidHigh = scr_const.xuidHigh;
          p_score[7] = v67;
          v69 = j_SL_GetRawHash(xuidHigh);
          DDL_MoveToNameByHash(&v117, &state, v69, NULL);
          v70 = DDL_GetInt(&state, &ddlContext);
          v71 = j_SL_GetRawHash(scr_const.xuidLow);
          DDL_MoveToNameByHash(&v117, &state, v71, NULL);
          v72 = DDL_GetInt(&state, &ddlContext);
          XUID::FromUInt64(&userID, v72 | ((unsigned __int64)v70 << 32));
          v73 = XUID::ToString(&userID);
          v74 = v114;
          Core_strcpy(_First[v74].xuidString, 0x15ui64, v73);
          PlayercardCache_GetPlayercard(userID, v31, &profileData);
          Com_PlayerUtils_ColorizeClanTag(profileData.clanAbbrev, profileData.clanTagType, _First[v74].clanTag, 0xCui64, 0x37u);
          v75 = j_SL_GetRawHash(scr_const.platform);
          DDL_MoveToNameByHash(&v117, &state, v75, NULL);
          *((_BYTE *)p_score + 160) = DDL_GetInt(&state, &ddlContext);
          xuid.m_id = userID.m_id;
          ActiveParty = Party_GetActiveParty();
          if ( !ActiveParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 75, ASSERT_TYPE_ASSERT, "(activeParty)", (const char *)&queryFormat, "activeParty") )
            __debugbreak();
          v77 = 0;
          while ( 1 )
          {
            Party_GetXuid(&v126, ActiveParty, v77);
            IsPlayerTalking = XUID::operator==(&v126, &xuid);
            if ( IsPlayerTalking )
              break;
            if ( ++v77 >= 200 )
            {
              *((_BYTE *)p_score + 105) = 0;
              goto LABEL_60;
            }
          }
          *((_BYTE *)p_score + 105) = CL_IsPlayerMuted(ActiveParty, v77);
          IsPlayerTalking = CL_IsPlayerTalking(ActiveParty, v77);
LABEL_60:
          *((_BYTE *)p_score + 104) = IsPlayerTalking;
          if ( v113 )
          {
            v79 = j_SL_GetRawHash(scr_const.team);
            DDL_MoveToNameByHash(&v117, &state, v79, NULL);
            Byte = DDL_GetByte(&state, &ddlContext);
          }
          p_score[3] = Byte;
          v19 = v114 + 1;
          Byte = 0;
          ++v114;
          *(p_score - 2) = 0;
          p_score += 44;
        }
        else
        {
          Byte = 0;
        }
        v18 = v112;
      }
      else
      {
        Byte = 0;
      }
      ++v24;
    }
    while ( v24 < 200 );
    v80 = v19;
    std::_Sort_unchecked<PostMatchInfo_t *,LUIScoreCompare>(_First, &_First[v19], 176i64 * v19 / 176, v113);
    v81 = L;
    j_lua_createtable(L, v19, 0);
    v82 = 0;
    v115 = 0;
    if ( v19 > 0 )
    {
      p_headShots = &_First[0].headShots;
      do
      {
        LUI_BeginTable(v82, v81);
        LUI_SetTableInt("clientNum", *(p_headShots - 41), LUI_luaVM);
        LUI_SetTableBool("isBot", *((_BYTE *)p_headShots - 140), LUI_luaVM);
        LUI_SetTableInt("rank", *(p_headShots - 33) + *(p_headShots - 32), LUI_luaVM);
        LUI_SetTableInt("baseRank", *(p_headShots - 33), LUI_luaVM);
        LUI_SetTableInt("prestige", *(p_headShots - 32), LUI_luaVM);
        LUI_SetTableInt("score", *(p_headShots - 39), LUI_luaVM);
        LUI_SetTableInt("kills", *(p_headShots - 34), LUI_luaVM);
        LUI_SetTableInt("deaths", *(p_headShots - 37), LUI_luaVM);
        LUI_SetTableInt("assists", *(p_headShots - 29), LUI_luaVM);
        LUI_SetTableInt("downs", *(p_headShots - 28), LUI_luaVM);
        LUI_SetTableInt("revives", *(p_headShots - 27), LUI_luaVM);
        LUI_SetTableInt("extraScore0", *(p_headShots - 28), LUI_luaVM);
        LUI_SetTableInt("extraScore1", *(p_headShots - 27), LUI_luaVM);
        LUI_SetTableInt("extraScore2", *(p_headShots - 26), LUI_luaVM);
        LUI_SetTableInt("extraScore3", *(p_headShots - 25), LUI_luaVM);
        LUI_SetTableInt("extraScore4", *(p_headShots - 24), LUI_luaVM);
        LUI_SetTableInt("extraScore5", *(p_headShots - 23), LUI_luaVM);
        LUI_SetTableInt("placement", *((__int16 *)p_headShots - 44), LUI_luaVM);
        LUI_SetTableString((const char *)&stru_143C9A1A4, *(const char **)(p_headShots - 11), LUI_luaVM);
        LUI_SetTableString("clanTag", (const char *)p_headShots - 36, LUI_luaVM);
        LUI_SetTableString("xuid", (const char *)p_headShots - 24, LUI_luaVM);
        LUI_SetTableBool("isMuted", *((_BYTE *)p_headShots - 51), LUI_luaVM);
        LUI_SetTableBool("isMicOn", *((_BYTE *)p_headShots - 52), LUI_luaVM);
        LUI_SetTableInt("team", *(p_headShots - 36), LUI_luaVM);
        v84 = DVARSTR_ui_gametype;
        if ( !DVARSTR_ui_gametype && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_gametype") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v84);
        integer64 = v84->current.integer64;
        v86 = 0x7FFFFFFFi64;
        v87 = "br";
        if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v88 = integer64 - (_QWORD)"br";
        do
        {
          v89 = v87[v88];
          v90 = v86;
          v91 = *v87;
          --v86;
          ++v87;
          if ( !v90 )
            break;
          if ( v89 != v91 )
            goto LABEL_80;
        }
        while ( v89 );
        LUI_SetTableInt("playerCardBackground", *(p_headShots - 28), LUI_luaVM);
LABEL_80:
        v92 = 1;
        ClientPlatform = GetClientPlatform();
        if ( ClientPlatform == 5 )
        {
          v92 = 0;
        }
        else
        {
          v94 = *((_BYTE *)p_headShots + 4);
          if ( v94 )
          {
            if ( (unsigned __int8)(ClientPlatform - 1) <= 1u )
              v95 = v94 == 2;
            else
              v95 = v94 == ClientPlatform;
            v92 = !v95;
          }
        }
        LUI_SetTableBool("isCrossplayPlayer", v92, LUI_luaVM);
        v96 = p_headShots - 6;
        v97 = 0x7FFFFFFFi64;
        v98 = XUID::ToString(&v121);
        if ( !v98 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( p_headShots == (int *)24 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v99 = v98 - (const char *)v96;
        while ( 1 )
        {
          v100 = *((_BYTE *)v96 + v99);
          v101 = v97;
          v102 = *(_BYTE *)v96;
          v96 = (int *)((char *)v96 + 1);
          --v97;
          if ( !v101 )
          {
LABEL_97:
            v103 = 0;
            goto LABEL_98;
          }
          if ( v100 != v102 )
            break;
          if ( !v100 )
            goto LABEL_97;
        }
        v103 = 1;
        if ( v100 < v102 )
          v103 = -1;
LABEL_98:
        LUI_SetTableBool("isMe", v103 == 0, LUI_luaVM);
        if ( CL_GetLocalClientActiveCount() > 1 )
        {
          ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
          XUID::NullXUID(&v122);
          if ( Live_IsUserSignedIn(ControllerFromClient) )
          {
            v105 = Live_GetXuid(&v132, ControllerFromClient);
            XUID::operator=(&v122, v105);
          }
          v106 = XUID::ToString(&v122);
          if ( I_strcmp(v106, (const char *)p_headShots - 24) )
          {
            v108 = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_1);
            XUID::NullXUID(&v123);
            if ( Live_IsUserSignedIn(v108) )
            {
              v109 = Live_GetXuid(&v133, v108);
              XUID::operator=(&v123, v109);
            }
            v110 = XUID::ToString(&v123);
            v111 = I_strcmp(v110, (const char *)p_headShots - 24);
            v107 = -1;
            if ( !v111 )
              v107 = 1;
          }
          else
          {
            v107 = 0;
          }
          LUI_SetTableInt("localClientNum", v107, LUI_luaVM);
        }
        if ( v112 )
          LUI_SetTableInt("headShots", *p_headShots, LUI_luaVM);
        LUI_EndTable(LUI_luaVM);
        v81 = L;
        v82 = v115 + 1;
        p_headShots += 44;
        ++v115;
        --v80;
      }
      while ( v80 );
    }
    return 1i64;
  }
  else
  {
    Com_PrintWarning(25, "client match data def set to %s. player(s) field could not be found, so no client match data for you!\n", cls.matchData.def);
    return 0i64;
  }
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushCPScoreboardDataToLUIModel
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushCPScoreboardDataToLUIModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIPostMatchPackage_PushCPScoreboardDataToLUIModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushCPScoreboardDataToLUIModel_impl
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushCPScoreboardDataToLUIModel_impl(lua_State *const luaVM)
{
  int v3; 
  const char *UsernameForLocalClient; 
  unsigned __int16 GlobalModel; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v12; 
  const char *String; 
  const char *MapDisplayName; 
  unsigned __int16 ModelFromPath; 
  unsigned int v16; 
  const char *Enum; 
  unsigned __int16 v18; 
  const DDLDef *v19; 
  unsigned int v21; 
  int Int; 
  unsigned int v23; 
  int v24; 
  unsigned int v25; 
  int v26; 
  unsigned int v28; 
  int i; 
  unsigned int v31; 
  const char *v32; 
  unsigned __int16 v33; 
  DDLState state; 
  DDLState fromState; 
  DDLState toState; 
  DDLState result; 
  DDLState v39; 
  DDLContext context; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PostMatch.PushCPScoreboardDataToLUIModel( controllerIndex )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 1);
  UsernameForLocalClient = CL_GetUsernameForLocalClient(v3);
  GlobalModel = LUI_Model_GetGlobalModel();
  Asset = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  DDL_GetRootState(&result, Asset);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_COMMON);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  DDL_MoveToName(&result, &toState, "commonData");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&fromState.member = _XMM0;
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &fromState, RawHash, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v12 = j_SL_GetRawHash(scr_const.map);
  DDL_MoveToNameByHash(&fromState, &state, v12, NULL);
  String = DDL_GetString(&state, &context);
  MapDisplayName = UI_GetMapDisplayName(String);
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.mapName");
  LUI_Model_SetString(ModelFromPath, MapDisplayName);
  v16 = j_SL_GetRawHash(scr_const.gameMode);
  DDL_MoveToNameByHash(&fromState, &state, v16, NULL);
  Enum = DDL_GetEnum(&state, &context);
  v18 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.gameType");
  LUI_Model_SetString(v18, Enum);
  if ( !cls.matchData.def[0] )
    return 0i64;
  v19 = Com_DDL_LoadAsset(cls.matchData.def);
  Com_DDL_CreateContext(cls.matchData.data, 24000, v19, &context, NULL, NULL);
  DDL_GetRootState(&result, v19);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  state.isValid = 0;
  state.offset = 0;
  *(_OWORD *)&state.member = _XMM0;
  state.arrayIndex = -1;
  LOWORD(v19) = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.numCPPlayers");
  v21 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
  DDL_MoveToNameByHash(&result, &state, v21, NULL);
  Int = DDL_GetInt(&state, &context);
  LUI_Model_SetInt((const unsigned __int16)v19, Int);
  LOWORD(v19) = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.timeSurvived");
  v23 = j_SL_GetRawHash(scr_const.time_survived);
  DDL_MoveToNameByHash(&result, &state, v23, NULL);
  v24 = DDL_GetInt(&state, &context);
  LUI_Model_SetInt((const unsigned __int16)v19, v24);
  LOWORD(v19) = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.wavesSurvived");
  v25 = j_SL_GetRawHash(scr_const.waves_survived);
  DDL_MoveToNameByHash(&result, &state, v25, NULL);
  v26 = DDL_GetInt(&state, &context);
  LUI_Model_SetInt((const unsigned __int16)v19, v26);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&toState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  v28 = j_SL_GetRawHash(scr_const.player);
  DDL_MoveToNameByHash(&result, &toState, v28, NULL);
  for ( i = 0; i < 200; ++i )
  {
    if ( i >= Int )
      break;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    fromState.isValid = 0;
    fromState.offset = 0;
    fromState.arrayIndex = -1;
    *(_OWORD *)&fromState.member = _XMM0;
    DDL_MoveToIndex(&toState, &fromState, i);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v39.member = _XMM0;
    v39.isValid = 0;
    v39.offset = 0;
    v39.arrayIndex = -1;
    v31 = j_SL_GetRawHash(scr_const.username);
    DDL_MoveToNameByHash(&fromState, &v39, v31, NULL);
    v32 = DDL_GetString(&v39, &context);
    if ( !I_strcmp(UsernameForLocalClient, v32) )
    {
      v33 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.myPlayerIndex");
      LUI_Model_SetInt(v33, i);
    }
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel_impl
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel_impl(lua_State *const luaVM)
{
  int v3; 
  const char *UsernameForLocalClient; 
  unsigned __int16 Short; 
  unsigned __int16 v7; 
  __int128 v8; 
  __int128 v9; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  unsigned int v14; 
  int Int; 
  int i; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  int v20; 
  float v21; 
  const DDLDef *v22; 
  DDLState *RootState; 
  int v24; 
  StatsSource ActiveStatsSource; 
  unsigned int v26; 
  unsigned int v27; 
  const char *Enum; 
  const DDLDef *v29; 
  StatsSource v30; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  float v35; 
  unsigned int v36; 
  float v37; 
  unsigned int v38; 
  unsigned int v39; 
  int v40; 
  int v41; 
  int v42; 
  float v43; 
  float v44; 
  unsigned int v45; 
  unsigned int v46; 
  __int64 v47; 
  DDLState *p_result; 
  int v49; 
  __int128 v50; 
  __int128 v51; 
  __int128 v53; 
  __int128 v57; 
  __int128 v59; 
  float v60; 
  float v61; 
  bool v62; 
  bool v63; 
  unsigned int v64; 
  int v65; 
  unsigned int v66; 
  unsigned int v67; 
  int v68; 
  unsigned int v69; 
  int v70; 
  DDLState *v71; 
  int v72; 
  __int128 v74; 
  __int128 v75; 
  DDLState state; 
  int newValue; 
  unsigned __int16 v80; 
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
  unsigned __int16 v92; 
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
  unsigned __int16 v104; 
  unsigned __int16 v105; 
  int controllerIndex; 
  unsigned int time; 
  int index; 
  DDLState v109; 
  DDLContext v110; 
  DDLState v111; 
  DDLState v112; 
  DDLState v113; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v116; 
  DDLState v117; 
  DDLState v118; 
  DDLState v119; 
  DDLState v120; 
  DDLState v121; 
  DDLState v122; 
  DDLState v123; 
  DDLContext ddlContext; 
  DDLContext context; 
  DDLState result; 
  char outputString[1024]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PostMatch.PushPerformanceDataToLUIModel( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    controllerIndex = lui_tointeger32(luaVM, 1);
    v3 = 0;
    v120.isValid = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v120.offset = 0;
    UsernameForLocalClient = CL_GetUsernameForLocalClient(controllerIndex);
    *(_OWORD *)&v120.member = _XMM0;
    v109.isValid = 0;
    v109.offset = 0;
    *(_OWORD *)&v109.member = _XMM0;
    v121.isValid = 0;
    v121.offset = 0;
    *(_OWORD *)&v121.member = _XMM0;
    v122.isValid = 0;
    v122.offset = 0;
    *(_OWORD *)&v122.member = _XMM0;
    fromState.isValid = 0;
    fromState.offset = 0;
    *(_OWORD *)&fromState.member = _XMM0;
    toState.isValid = 0;
    toState.offset = 0;
    *(_OWORD *)&toState.member = _XMM0;
    v113.isValid = 0;
    v113.offset = 0;
    *(_OWORD *)&v113.member = _XMM0;
    state.isValid = 0;
    state.offset = 0;
    *(_OWORD *)&state.member = _XMM0;
    v111.isValid = 0;
    v111.offset = 0;
    *(_OWORD *)&v111.member = _XMM0;
    v112.isValid = 0;
    v112.offset = 0;
    *(_OWORD *)&v112.member = _XMM0;
    v123.isValid = 0;
    v123.offset = 0;
    *(_OWORD *)&v123.member = _XMM0;
    v116.isValid = 0;
    v116.offset = 0;
    *(_OWORD *)&v116.member = _XMM0;
    v117.isValid = 0;
    v117.offset = 0;
    *(_OWORD *)&v117.member = _XMM0;
    v118.isValid = 0;
    v118.offset = 0;
    *(_OWORD *)&v118.member = _XMM0;
    v119.isValid = 0;
    v120.arrayIndex = -1;
    v109.arrayIndex = -1;
    v121.arrayIndex = -1;
    v122.arrayIndex = -1;
    fromState.arrayIndex = -1;
    toState.arrayIndex = -1;
    v113.arrayIndex = -1;
    state.arrayIndex = -1;
    v111.arrayIndex = -1;
    v112.arrayIndex = -1;
    v123.arrayIndex = -1;
    v116.arrayIndex = -1;
    v117.arrayIndex = -1;
    v118.arrayIndex = -1;
    v119.offset = 0;
    v119.arrayIndex = -1;
    Short = 0;
    *(_OWORD *)&v119.member = _XMM0;
    v7 = 0;
    index = -1;
    v8 = 0i64;
    v9 = 0i64;
    ModelForController = LUI_Model_GetModelForController(controllerIndex);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kills");
    LOWORD(time) = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.deaths");
    LOWORD(newValue) = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdRatio");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalWins");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalLosses");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.winPercentage");
    v92 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.gamesPlayed");
    v80 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.0.value");
    v81 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.1.value");
    v82 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.2.value");
    v83 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.3.value");
    v84 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.4.value");
    v85 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.maxValue");
    v91 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.global");
    v88 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.best");
    v95 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.bestTimestamp");
    v86 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.average");
    v89 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalWins");
    v90 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalLosses");
    v87 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.winLossPercent");
    v93 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.isPersonalBestKills");
    v94 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.isPersonalBestKD");
    v96 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.0.value");
    v97 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.1.value");
    v98 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.2.value");
    v99 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.3.value");
    v100 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.4.value");
    v101 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.maxValue");
    v104 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.global");
    v103 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.best");
    v105 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.bestTimestamp");
    v102 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.average");
    if ( cls.matchData.def[0] )
    {
      Asset = Com_DDL_LoadAsset(cls.matchData.def);
      Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
      fromState = *DDL_GetRootState(&result, Asset);
      RawHash = j_SL_GetRawHash(scr_const.players);
      if ( !DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 1082, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &rootState, &playersState, SL_GetRawHash( scr_const.players ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &rootState, &playersState, SL_GetRawHash( scr_const.players ) )") )
        __debugbreak();
      v14 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
      if ( !DDL_MoveToNameByHash(&fromState, &state, v14, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 1084, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &rootState, &fieldState, SL_GetRawHash( scr_const.scoreboardPlayerCount ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &rootState, &fieldState, SL_GetRawHash( scr_const.scoreboardPlayerCount ) )") )
        __debugbreak();
      if ( toState.isValid && state.isValid )
      {
        Int = DDL_GetInt(&state, &ddlContext);
        for ( i = 0; i < 200; ++i )
        {
          if ( i < Int )
          {
            DDL_MoveToIndex(&toState, &v113, i);
            v17 = j_SL_GetRawHash(scr_const.username);
            DDL_MoveToNameByHash(&v113, &state, v17, NULL);
            if ( !strcmp(UsernameForLocalClient, DDL_GetString(&state, &ddlContext)) )
            {
              v18 = j_SL_GetRawHash(scr_const.kills);
              DDL_MoveToNameByHash(&v113, &state, v18, NULL);
              Short = DDL_GetShort(&state, &ddlContext);
              v19 = j_SL_GetRawHash(scr_const.deaths);
              DDL_MoveToNameByHash(&v113, &state, v19, NULL);
              v7 = DDL_GetShort(&state, &ddlContext);
            }
          }
        }
      }
      else
      {
        Short = 0;
        v7 = 0;
      }
    }
    else
    {
      Short = 0;
      v7 = 0;
    }
    v20 = Short;
    LUI_Model_SetInt(ModelFromPath, Short);
    LUI_Model_SetInt(time, v7);
    if ( v7 )
      v21 = (float)v7;
    else
      v21 = FLOAT_1_0;
    LUI_Model_SetReal(newValue, (float)Short / v21);
    v22 = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
    RootState = DDL_GetRootState(&result, v22);
    v24 = controllerIndex;
    v116 = *RootState;
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    CL_PlayerData_GetDDLBuffer(&context, v24, ActiveStatsSource, STATSGROUP_COMMON);
    DDL_MoveToName(&v116, &v117, "commonData");
    v26 = j_SL_GetRawHash(scr_const.round);
    DDL_MoveToNameByHash(&v117, &v118, v26, NULL);
    v27 = j_SL_GetRawHash(scr_const.gameMode);
    DDL_MoveToNameByHash(&v118, &v119, v27, NULL);
    Enum = DDL_GetEnum(&v119, &context);
    Com_GameInfo_GetGameTypeIndexForInternalName(Enum, &index);
    v29 = Com_DDL_LoadAsset("ddl/mp/playerdata.ddl");
    v120 = *DDL_GetRootState(&result, v29);
    v30 = LiveStorage_GetActiveStatsSource(v24);
    CL_PlayerData_GetDDLBuffer(&v110, v24, v30, STATSGROUP_RANKED);
    DDL_MoveToName(&v120, &v109, "rankedMatchData");
    v31 = j_SL_GetRawHash(scr_const.kills);
    DDL_MoveToNameByHash(&v109, &state, v31, NULL);
    v32 = DDL_GetInt(&state, &v110);
    v33 = j_SL_GetRawHash(scr_const.deaths);
    DDL_MoveToNameByHash(&v109, &state, v33, NULL);
    v34 = DDL_GetInt(&state, &v110);
    if ( v34 < 1 )
      v34 = 1;
    v35 = (float)v32 / (float)v34;
    DDL_MoveToName(&v109, &v111, "bestKD");
    v36 = j_SL_GetRawHash(scr_const.score);
    DDL_MoveToNameByHash(&v111, &state, v36, NULL);
    v37 = (float)DDL_GetInt(&state, &v110) * 0.001;
    v38 = j_SL_GetRawHash(scr_const.time);
    DDL_MoveToNameByHash(&v111, &state, v38, NULL);
    time = DDL_GetInt(&state, &v110);
    DDL_MoveToName(&v109, &state, "bestKills");
    controllerIndex = DDL_GetInt(&state, &v110);
    v39 = j_SL_GetRawHash(scr_const.wins);
    DDL_MoveToNameByHash(&v109, &state, v39, NULL);
    v40 = DDL_GetInt(&state, &v110);
    DDL_MoveToName(&v109, &state, "losses");
    newValue = DDL_GetInt(&state, &v110);
    v41 = newValue;
    DDL_MoveToName(&v109, &state, "ties");
    v42 = v40 + DDL_GetInt(&state, &v110) + v41;
    if ( v40 + v41 <= 0 )
      v43 = FLOAT_1_0;
    else
      v43 = (float)(v40 + v41);
    v44 = (float)v40 / v43;
    v45 = j_SL_GetRawHash(scr_const.kdHistoryK);
    DDL_MoveToNameByHash(&v109, &v121, v45, NULL);
    v46 = j_SL_GetRawHash(scr_const.kdHistoryD);
    DDL_MoveToNameByHash(&v109, &v122, v46, NULL);
    v47 = 5i64;
    p_result = &result;
    v49 = 5;
    if ( v42 < 5 )
      v49 = v42;
    if ( !v49 )
      v49 = 1;
    do
    {
      DDL_MoveToIndex(&v121, &state, v3);
      v51 = 0i64;
      *(float *)&v51 = (float)DDL_GetByte(&state, &v110);
      v50 = v51;
      DDL_MoveToIndex(&v122, &state, v3);
      p_result = (DDLState *)((char *)p_result + 4);
      v53 = 0i64;
      *(float *)&v53 = (float)DDL_GetByte(&state, &v110);
      _XMM1 = v53;
      __asm
      {
        vcmpeqss xmm0, xmm1, xmm8
        vblendvps xmm1, xmm1, xmm7, xmm0
      }
      v57 = v50;
      *(float *)&v57 = *(float *)&v50 / *(float *)&_XMM1;
      _XMM0 = v57;
      ++v3;
      *((float *)&p_result[-1].ddlDef + 1) = *(float *)&v50 / *(float *)&_XMM1;
      __asm { vmaxss  xmm9, xmm0, xmm9 }
      v59 = v9;
      *(float *)&v59 = *(float *)&v9 + *(float *)&_XMM0;
      v9 = v59;
    }
    while ( v3 < 5 );
    v60 = *(float *)&result.member;
    v61 = 1.0 / (float)v49;
    v62 = (float)(*(float *)&result.member - v37) > -0.05;
    v63 = v20 >= controllerIndex;
    LUI_Model_SetReal(v80, *(float *)&result.isValid);
    LUI_Model_SetReal(v81, *(float *)&result.offset);
    LUI_Model_SetReal(v82, *(float *)&result.arrayIndex);
    LUI_Model_SetReal(v83, *((float *)&result.arrayIndex + 1));
    LUI_Model_SetReal(v84, v60);
    LUI_Model_SetReal(v85, *(float *)&_XMM9);
    LUI_Model_SetReal(v86, *(float *)&v59 * v61);
    LUI_Model_SetReal(v87, v44);
    LUI_Model_SetReal(v88, v37);
    LUI_Model_SetInt(v89, v40);
    LUI_Model_SetInt(v90, newValue);
    LUI_Model_SetReal(v91, v35);
    LUI_Model_SetInt(v92, v42);
    LUI_Model_SetBool(v93, v63);
    LUI_Model_SetBool(v94, v62);
    FormatDateTime(time, outputString, 0x400u);
    LUI_Model_SetString(v95, outputString);
    DDL_MoveToName(&v109, &v111, "bestSPM");
    v64 = j_SL_GetRawHash(scr_const.score);
    DDL_MoveToNameByHash(&v111, &state, v64, NULL);
    v65 = DDL_GetInt(&state, &v110);
    v66 = j_SL_GetRawHash(scr_const.time);
    DDL_MoveToNameByHash(&v111, &state, v66, NULL);
    v67 = DDL_GetInt(&state, &v110);
    DDL_MoveToName(&v109, &state, "globalSPM");
    v68 = DDL_GetInt(&state, &v110);
    DDL_MoveToName(&v109, &v112, "gameModeScoreHistory");
    DDL_MoveToIndex(&v112, &v112, index);
    v69 = j_SL_GetRawHash(scr_const.index);
    DDL_MoveToNameByHash(&v112, &state, v69, NULL);
    v70 = DDL_GetInt(&state, &v110);
    DDL_MoveToName(&v112, &v123, "scores");
    v71 = &result;
    do
    {
      DDL_MoveToIndex(&v123, &state, v70);
      v72 = DDL_GetInt(&state, &v110);
      *(_DWORD *)&v71->isValid = v72;
      v71 = (DDLState *)((char *)v71 + 4);
      v74 = 0i64;
      *(float *)&v74 = (float)v72;
      _XMM0 = v74;
      v75 = v8;
      *(float *)&v75 = *(float *)&v8 + *(float *)&_XMM0;
      v8 = v75;
      __asm { vmaxss  xmm6, xmm0, xmm6 }
      v70 = (v70 + 1) % 5;
      --v47;
    }
    while ( v47 );
    LUI_Model_SetInt(v96, *(int *)&result.isValid);
    LUI_Model_SetInt(v97, result.offset);
    LUI_Model_SetInt(v98, result.arrayIndex);
    LUI_Model_SetInt(v99, *(&result.arrayIndex + 1));
    LUI_Model_SetInt(v100, (int)result.member);
    LUI_Model_SetReal(v101, *(float *)&_XMM6);
    LUI_Model_SetReal(v102, v61 * *(float *)&v75);
    LUI_Model_SetInt(v103, v65);
    LUI_Model_SetInt(v104, v68);
    FormatDateTime(v67, outputString, 0x400u);
    LUI_Model_SetString(v105, outputString);
  }
  return 0i64;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushScoreboardDataToLUIModel
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushScoreboardDataToLUIModel(lua_State *luaVM)
{
  unsigned int v2; 
  unsigned int v3; 

  v2 = LUI_LuaCall_LUIPostMatchPackage_PushScoreboardDataToLUIModel_impl(luaVM);
  if ( (int)v2 > j_lua_gettop(luaVM) )
  {
    v3 = j_lua_gettop(luaVM);
    j_luaL_error(luaVM, "lua c binding return mismatch. claiming to be returning %d items, but there are only %d in the stack", v2, v3);
  }
  return v2;
}

/*
==============
LUI_LuaCall_LUIPostMatchPackage_PushScoreboardDataToLUIModel_impl
==============
*/
__int64 LUI_LuaCall_LUIPostMatchPackage_PushScoreboardDataToLUIModel_impl(lua_State *const luaVM)
{
  int v3; 
  const XUID *v4; 
  const DDLDef *Asset; 
  StatsSource ActiveStatsSource; 
  unsigned int RawHash; 
  unsigned int v11; 
  char *Enum; 
  unsigned int v13; 
  const char *String; 
  const char *MapDisplayName; 
  unsigned __int16 ModelFromPath; 
  unsigned int v17; 
  const char *v18; 
  unsigned __int16 v19; 
  unsigned __int16 v20; 
  int v21; 
  unsigned __int16 v22; 
  int v23; 
  const DDLDef *v24; 
  unsigned int v26; 
  int Int; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v32; 
  int ArraySize; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int v39; 
  const char *v40; 
  unsigned int v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  char v45; 
  int v46; 
  unsigned __int16 v47; 
  const char *v48; 
  int v49; 
  char v51; 
  unsigned __int16 v52; 
  unsigned __int16 v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55; 
  unsigned __int16 v56; 
  unsigned __int16 v57; 
  unsigned __int16 GlobalModel; 
  unsigned __int16 v59; 
  int v60; 
  int v61; 
  int v62; 
  XUID result; 
  char *s0; 
  XUID xuid; 
  DDLState state; 
  DDLState v67; 
  DDLState v68; 
  DDLState v69; 
  DDLState v70; 
  DDLState v71; 
  DDLState toState; 
  DDLContext ddlContext; 
  DDLState v74; 
  DDLContext context; 
  DDLState fromState; 
  char outBuffer[16]; 
  char newValue[16]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PostMatch.PushScoreboardDataToLUIModel( controllerIndex )");
  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    return 0i64;
  v3 = lui_tointeger32(luaVM, 1);
  GlobalModel = LUI_Model_GetGlobalModel();
  XUID::NullXUID(&result);
  if ( Live_IsUserSignedIn(v3) )
  {
    v4 = Live_GetXuid(&xuid, v3);
    XUID::operator=(&result, v4);
  }
  Asset = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
  DDL_GetRootState(&fromState, Asset);
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(v3);
  CL_PlayerData_GetDDLBuffer(&context, v3, ActiveStatsSource, STATSGROUP_COMMON);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  toState.isValid = 0;
  toState.offset = 0;
  toState.arrayIndex = -1;
  *(_OWORD *)&toState.member = _XMM0;
  DDL_MoveToName(&fromState, &toState, "commonData");
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v69.member = _XMM0;
  v69.isValid = 0;
  v69.offset = 0;
  v69.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &v69, RawHash, NULL);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&state.member = _XMM0;
  state.isValid = 0;
  state.offset = 0;
  state.arrayIndex = -1;
  v11 = j_SL_GetRawHash(scr_const.scoreboardType);
  DDL_MoveToNameByHash(&v69, &state, v11, NULL);
  Enum = (char *)DDL_GetEnum(&state, &context);
  s0 = Enum;
  v13 = j_SL_GetRawHash(scr_const.map);
  DDL_MoveToNameByHash(&v69, &state, v13, NULL);
  String = DDL_GetString(&state, &context);
  MapDisplayName = UI_GetMapDisplayName(String);
  ModelFromPath = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.mapName");
  LUI_Model_SetString(ModelFromPath, MapDisplayName);
  v17 = j_SL_GetRawHash(scr_const.gameMode);
  DDL_MoveToNameByHash(&v69, &state, v17, NULL);
  v18 = DDL_GetEnum(&state, &context);
  v19 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.gameType");
  LUI_Model_SetString(v19, v18);
  DDL_MoveToName(&v69, &state, "timePlayed");
  LODWORD(v18) = DDL_GetInt(&state, &context);
  v20 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.gameTime");
  LUI_CoD_FormatDuration(1000 * (_DWORD)v18, 0xAui64, outBuffer, 0);
  LUI_Model_SetString(v20, outBuffer);
  v56 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.myTeam");
  LOWORD(v18) = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.myTeam.position");
  v57 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.myPlayerIndex");
  v59 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.numFFAPlayers");
  v54 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.numPlayersTeamA");
  v55 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.players.numPlayersTeamB");
  v52 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.friendlyScore");
  v53 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.scoreBoard.enemyScore");
  LUI_Model_SetInt((const unsigned __int16)v18, 0);
  if ( !cls.matchData.def[0] )
  {
    LUI_Interface_DebugPrint("Didn't have the match data");
    LUI_Model_SetInt(v56, 2);
    LUI_Model_SetInt(v57, 0);
    LUI_Model_SetInt(v59, 0);
    LUI_Model_SetInt(v54, 0);
    LUI_Model_SetInt(v55, 0);
    LUI_Model_SetInt(v52, 0);
    v21 = 0;
    v22 = v53;
    goto LABEL_42;
  }
  if ( !Enum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 203, ASSERT_TYPE_ASSERT, "(scoreboardType)", (const char *)&queryFormat, "scoreboardType") )
    __debugbreak();
  v23 = 0;
  v24 = Com_DDL_LoadAsset(cls.matchData.def);
  Com_DDL_CreateContext(cls.matchData.data, 24000, v24, &ddlContext, NULL, NULL);
  DDL_GetRootState(&v74, v24);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v68.member = _XMM0;
  v68.isValid = 0;
  v68.offset = 0;
  v68.arrayIndex = -1;
  v26 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
  DDL_MoveToNameByHash(&v74, &v68, v26, NULL);
  Int = DDL_GetInt(&v68, &ddlContext);
  if ( Int > 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 216, ASSERT_TYPE_ASSERT, "(playerCount <= 200)", (const char *)&queryFormat, "playerCount <= MAX_CLIENTS_MP") )
    __debugbreak();
  v28 = j_SL_GetRawHash(scr_const.alliesScore);
  DDL_MoveToNameByHash(&v74, &v68, v28, NULL);
  v61 = DDL_GetInt(&v68, &ddlContext);
  v29 = j_SL_GetRawHash(scr_const.axisScore);
  DDL_MoveToNameByHash(&v74, &v68, v29, NULL);
  v30 = DDL_GetInt(&v68, &ddlContext);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v71.member = _XMM0;
  v62 = v30;
  v71.isValid = 0;
  v71.offset = 0;
  v71.arrayIndex = -1;
  v32 = j_SL_GetRawHash(scr_const.players);
  DDL_MoveToNameByHash(&v74, &v71, v32, NULL);
  v60 = 0;
  ArraySize = DDL_StateGetArraySize(&v71);
  v51 = 0;
  if ( Int < ArraySize )
    ArraySize = Int;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  while ( v35 < ArraySize )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v70.isValid = 0;
    v70.offset = 0;
    v70.arrayIndex = -1;
    *(_OWORD *)&v70.member = _XMM0;
    DDL_MoveToIndex(&v71, &v70, v35);
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&v67.member = _XMM0;
    v67.isValid = 0;
    v67.offset = 0;
    v67.arrayIndex = -1;
    v39 = j_SL_GetRawHash(scr_const.team);
    DDL_MoveToNameByHash(&v70, &v67, v39, NULL);
    v40 = DDL_GetEnum(&v67, &ddlContext);
    if ( I_strcmp(s0, "neutral") )
    {
      if ( I_strcmp(v40, "allies") )
      {
        if ( I_strcmp(v40, "axis") )
        {
          if ( !I_strcmp(v40, "none") )
            ++ArraySize;
        }
        else
        {
          ++v60;
          v23 = 1;
        }
      }
      else
      {
        ++v36;
        v23 = 2;
      }
    }
    else
    {
      ++v34;
      v23 = 0;
    }
    v41 = j_SL_GetRawHash(scr_const.xuidHigh);
    DDL_MoveToNameByHash(&v70, &v67, v41, NULL);
    v42 = DDL_GetInt(&v67, &ddlContext);
    v43 = j_SL_GetRawHash(scr_const.xuidLow);
    DDL_MoveToNameByHash(&v70, &v67, v43, NULL);
    v44 = DDL_GetInt(&v67, &ddlContext);
    XUID::FromUInt64(&xuid, v44 | ((unsigned __int64)v42 << 32));
    if ( !XUID::operator==(&result, &xuid) )
      goto LABEL_31;
    v45 = 1;
    v51 = 1;
    v37 = v23;
    LUI_Model_SetInt(v56, v23);
    LUI_Model_SetInt(v57, v35);
    if ( !I_strcmp(s0, "multiteam") )
    {
      DDL_MoveToName(&v70, &v67, "timeplayed");
      v46 = DDL_GetInt(&v67, &ddlContext);
      v47 = LUI_Model_CreateModelFromPath(GlobalModel, "frontEnd.AAR.gameTime");
      LUI_CoD_FormatDuration(1000 * v46, 0xAui64, newValue, 0);
      LUI_Model_SetString(v47, newValue);
LABEL_31:
      v45 = v51;
    }
    ++v35;
    v23 = 0;
    if ( v35 >= 200 )
      goto LABEL_35;
  }
  v45 = v51;
LABEL_35:
  if ( !v45 )
  {
    v48 = XUID::ToString(&result);
    LUI_Interface_DebugPrint("Didn't find the player %s\n", v48);
  }
  LUI_Model_SetInt(v59, v34);
  LUI_Model_SetInt(v54, v36);
  LUI_Model_SetInt(v55, v60);
  if ( !v37 )
    goto LABEL_45;
  v49 = v37 - 1;
  if ( v49 )
  {
    if ( v49 != 1 )
    {
      LUI_Model_SetInt(v53, 0);
      v21 = 0;
      goto LABEL_41;
    }
LABEL_45:
    LUI_Model_SetInt(v52, v61);
    v21 = v62;
    v22 = v53;
  }
  else
  {
    LUI_Model_SetInt(v53, v61);
    v21 = v62;
LABEL_41:
    v22 = v52;
  }
LABEL_42:
  LUI_Model_SetInt(v22, v21);
  return 0i64;
}

