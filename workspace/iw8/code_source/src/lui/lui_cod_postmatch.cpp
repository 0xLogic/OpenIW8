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
  __asm { vmovdqu xmmword ptr [rbp+0C0h+toState.member], xmm0 }
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
    __asm { vmovdqu xmmword ptr [rsp+1C0h+var_170.member], xmm0 }
    DDL_MoveToIndex(&toState, &v45, v12);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+1C0h+state.member], xmm0
    }
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+13B70h+toState.member], xmm0
  }
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
  __asm { vmovdqu xmmword ptr [rbp+13B70h+var_13B58.member], xmm0 }
  DDL_MoveToName(&fromState, &v128, "commonData");
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+13B70h+var_13B38.member], xmm0
  }
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
  __asm { vmovdqu xmmword ptr [rbp+13B70h+var_13B18.member], xmm0 }
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
      __asm { vmovdqu xmmword ptr [rsp+13C70h+var_13C08.member], xmm0 }
      DDL_MoveToIndex(&v130, &v117, v24);
      state.isValid = 0;
      state.offset = 0;
      state.arrayIndex = -1;
      v113 = 0;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+13C70h+state.member], xmm0
      }
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
  __asm { vmovdqu xmmword ptr [rbp+10h+toState.member], xmm0 }
  DDL_MoveToName(&result, &toState, "commonData");
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+fromState.member], xmm0
  }
  fromState.isValid = 0;
  fromState.offset = 0;
  fromState.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &fromState, RawHash, NULL);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+110h+state.member], xmm0
  }
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
  __asm { vmovdqu xmmword ptr [rsp+110h+state.member], xmm0 }
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+10h+toState.member], xmm0
  }
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
    __asm { vmovdqu xmmword ptr [rsp+110h+fromState.member], xmm0 }
    DDL_MoveToIndex(&toState, &fromState, i);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+10h+var_60.member], xmm0
    }
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

__int64 __fastcall LUI_LuaCall_LUIPostMatchPackage_PushPerformanceDataToLUIModel_impl(lua_State *const luaVM, double _XMM1_8)
{
  int v13; 
  const char *UsernameForLocalClient; 
  unsigned __int16 Short; 
  unsigned __int16 v17; 
  unsigned __int16 ModelForController; 
  unsigned __int16 ModelFromPath; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  unsigned int v27; 
  int Int; 
  int i; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  const DDLDef *v40; 
  int v42; 
  StatsSource ActiveStatsSource; 
  unsigned int v45; 
  unsigned int v46; 
  const char *Enum; 
  const DDLDef *v48; 
  StatsSource v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v59; 
  unsigned int v63; 
  unsigned int v64; 
  int v65; 
  int v66; 
  int v67; 
  unsigned int v73; 
  unsigned int v74; 
  __int64 v75; 
  bool v91; 
  unsigned int v101; 
  int v102; 
  unsigned int v103; 
  unsigned int v104; 
  int v105; 
  unsigned int v106; 
  int v107; 
  DDLState *p_result; 
  DDLState state; 
  int newValue; 
  unsigned __int16 v126; 
  unsigned __int16 v127; 
  unsigned __int16 v128; 
  unsigned __int16 v129; 
  unsigned __int16 v130; 
  unsigned __int16 v131; 
  unsigned __int16 v132; 
  unsigned __int16 v133; 
  unsigned __int16 v134; 
  unsigned __int16 v135; 
  unsigned __int16 v136; 
  unsigned __int16 v137; 
  unsigned __int16 v138; 
  unsigned __int16 v139; 
  unsigned __int16 v140; 
  unsigned __int16 v141; 
  unsigned __int16 v142; 
  unsigned __int16 v143; 
  unsigned __int16 v144; 
  unsigned __int16 v145; 
  unsigned __int16 v146; 
  unsigned __int16 v147; 
  unsigned __int16 v148; 
  unsigned __int16 v149; 
  unsigned __int16 v150; 
  unsigned __int16 v151; 
  int controllerIndex; 
  unsigned int time; 
  int index; 
  DDLState v155; 
  DDLContext v156; 
  DDLState v157; 
  DDLState v158; 
  DDLState v159; 
  DDLState fromState; 
  DDLState toState; 
  DDLState v162; 
  DDLState v163; 
  DDLState v164; 
  DDLState v165; 
  DDLState v166; 
  DDLState v167; 
  DDLState v168; 
  DDLState v169; 
  DDLContext ddlContext; 
  DDLContext context; 
  DDLState result; 
  char outputString[1024]; 

  if ( j_lua_gettop(luaVM) != 1 || !j_lua_isnumber(luaVM, 1) )
    j_luaL_error(luaVM, "USAGE: PostMatch.PushPerformanceDataToLUIModel( <controller> )");
  if ( j_lua_gettop(luaVM) == 1 && j_lua_isnumber(luaVM, 1) )
  {
    __asm
    {
      vmovaps [rsp+7D0h+var_30], xmm6
      vmovaps [rsp+7D0h+var_40], xmm7
      vmovaps [rsp+7D0h+var_50], xmm8
      vmovaps [rsp+7D0h+var_60], xmm9
      vmovaps [rsp+7D0h+var_70], xmm10
      vmovaps [rsp+7D0h+var_80], xmm11
      vmovaps [rsp+7D0h+var_90], xmm12
      vmovaps [rsp+7D0h+var_A0], xmm13
      vmovaps [rsp+7D0h+var_B0], xmm14
    }
    controllerIndex = lui_tointeger32(luaVM, 1);
    v13 = 0;
    v166.isValid = 0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    v166.offset = 0;
    UsernameForLocalClient = CL_GetUsernameForLocalClient(controllerIndex);
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_5C0.member], xmm0 }
    v155.isValid = 0;
    v155.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_738.member], xmm0 }
    v167.isValid = 0;
    v167.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_5A0.member], xmm0 }
    v168.isValid = 0;
    v168.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_580.member], xmm0 }
    fromState.isValid = 0;
    fromState.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+fromState.member], xmm0 }
    toState.isValid = 0;
    toState.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+toState.member], xmm0 }
    v159.isValid = 0;
    v159.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_6A0.member], xmm0 }
    state.isValid = 0;
    state.offset = 0;
    __asm { vmovdqu xmmword ptr [rsp+7D0h+state.member], xmm0 }
    v157.isValid = 0;
    v157.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_6E8.member], xmm0 }
    v158.isValid = 0;
    v158.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_6C8.member], xmm0 }
    v169.isValid = 0;
    v169.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_560.member], xmm0 }
    v162.isValid = 0;
    v162.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_640.member], xmm0 }
    v163.isValid = 0;
    v163.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_620.member], xmm0 }
    v164.isValid = 0;
    v164.offset = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_600.member], xmm0 }
    v165.isValid = 0;
    v166.arrayIndex = -1;
    v155.arrayIndex = -1;
    v167.arrayIndex = -1;
    v168.arrayIndex = -1;
    fromState.arrayIndex = -1;
    toState.arrayIndex = -1;
    v159.arrayIndex = -1;
    state.arrayIndex = -1;
    v157.arrayIndex = -1;
    v158.arrayIndex = -1;
    v169.arrayIndex = -1;
    v162.arrayIndex = -1;
    v163.arrayIndex = -1;
    v164.arrayIndex = -1;
    v165.offset = 0;
    v165.arrayIndex = -1;
    Short = 0;
    __asm { vmovdqu xmmword ptr [rbp+6D0h+var_5E0.member], xmm0 }
    v17 = 0;
    index = -1;
    __asm
    {
      vxorps  xmm8, xmm8, xmm8
      vxorps  xmm9, xmm9, xmm9
      vxorps  xmm10, xmm10, xmm10
    }
    ModelForController = LUI_Model_GetModelForController(controllerIndex);
    ModelFromPath = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kills");
    LOWORD(time) = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.deaths");
    LOWORD(newValue) = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdRatio");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalWins");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalLosses");
    LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.winPercentage");
    v138 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.gamesPlayed");
    v126 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.0.value");
    v127 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.1.value");
    v128 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.2.value");
    v129 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.3.value");
    v130 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.4.value");
    v131 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.maxValue");
    v137 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.global");
    v134 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.best");
    v141 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.bestTimestamp");
    v132 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.kdHistory.average");
    v135 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalWins");
    v136 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.totalLosses");
    v133 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.winLossPercent");
    v139 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.isPersonalBestKills");
    v140 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.isPersonalBestKD");
    v142 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.0.value");
    v143 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.1.value");
    v144 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.2.value");
    v145 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.3.value");
    v146 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.4.value");
    v147 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.maxValue");
    v150 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.global");
    v149 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.best");
    v151 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.bestTimestamp");
    v148 = LUI_Model_CreateModelFromPath(ModelForController, "frontEnd.AAR.performance.spmHistory.average");
    if ( cls.matchData.def[0] )
    {
      Asset = Com_DDL_LoadAsset(cls.matchData.def);
      Com_DDL_CreateContext(cls.matchData.data, 24000, Asset, &ddlContext, NULL, NULL);
      _RAX = DDL_GetRootState(&result, Asset);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+6D0h+fromState.isValid], ymm0
      }
      RawHash = j_SL_GetRawHash(scr_const.players);
      if ( !DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 1082, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &rootState, &playersState, SL_GetRawHash( scr_const.players ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &rootState, &playersState, SL_GetRawHash( scr_const.players ) )") )
        __debugbreak();
      v27 = j_SL_GetRawHash(scr_const.scoreboardPlayerCount);
      if ( !DDL_MoveToNameByHash(&fromState, &state, v27, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_cod_postmatch.cpp", 1084, ASSERT_TYPE_ASSERT, "(DDL_MoveToNameByHash( &rootState, &fieldState, SL_GetRawHash( scr_const.scoreboardPlayerCount ) ))", (const char *)&queryFormat, "DDL_MoveToNameByHash( &rootState, &fieldState, SL_GetRawHash( scr_const.scoreboardPlayerCount ) )") )
        __debugbreak();
      if ( toState.isValid && state.isValid )
      {
        Int = DDL_GetInt(&state, &ddlContext);
        for ( i = 0; i < 200; ++i )
        {
          if ( i < Int )
          {
            DDL_MoveToIndex(&toState, &v159, i);
            v30 = j_SL_GetRawHash(scr_const.username);
            DDL_MoveToNameByHash(&v159, &state, v30, NULL);
            if ( !strcmp(UsernameForLocalClient, DDL_GetString(&state, &ddlContext)) )
            {
              v31 = j_SL_GetRawHash(scr_const.kills);
              DDL_MoveToNameByHash(&v159, &state, v31, NULL);
              Short = DDL_GetShort(&state, &ddlContext);
              v32 = j_SL_GetRawHash(scr_const.deaths);
              DDL_MoveToNameByHash(&v159, &state, v32, NULL);
              v17 = DDL_GetShort(&state, &ddlContext);
            }
          }
        }
      }
      else
      {
        Short = 0;
        v17 = 0;
      }
    }
    else
    {
      Short = 0;
      v17 = 0;
    }
    LUI_Model_SetInt(ModelFromPath, Short);
    LUI_Model_SetInt(time, v17);
    __asm { vmovss  xmm7, cs:__real@3f800000 }
    if ( v17 )
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ebx
      }
    }
    else
    {
      __asm { vmovaps xmm1, xmm7 }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r15d
      vdivss  xmm1, xmm0, xmm1; newValue
    }
    LUI_Model_SetReal(newValue, *(float *)&_XMM1);
    v40 = Com_DDL_LoadAsset("ddl/mp/commondata.ddl");
    _RAX = DDL_GetRootState(&result, v40);
    v42 = controllerIndex;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+6D0h+var_640.isValid], ymm0
    }
    ActiveStatsSource = LiveStorage_GetActiveStatsSource(controllerIndex);
    CL_PlayerData_GetDDLBuffer(&context, v42, ActiveStatsSource, STATSGROUP_COMMON);
    DDL_MoveToName(&v162, &v163, "commonData");
    v45 = j_SL_GetRawHash(scr_const.round);
    DDL_MoveToNameByHash(&v163, &v164, v45, NULL);
    v46 = j_SL_GetRawHash(scr_const.gameMode);
    DDL_MoveToNameByHash(&v164, &v165, v46, NULL);
    Enum = DDL_GetEnum(&v165, &context);
    Com_GameInfo_GetGameTypeIndexForInternalName(Enum, &index);
    v48 = Com_DDL_LoadAsset("ddl/mp/playerdata.ddl");
    _RAX = DDL_GetRootState(&result, v48);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbp+6D0h+var_5C0.isValid], ymm0
    }
    v51 = LiveStorage_GetActiveStatsSource(v42);
    CL_PlayerData_GetDDLBuffer(&v156, v42, v51, STATSGROUP_RANKED);
    DDL_MoveToName(&v166, &v155, "rankedMatchData");
    v52 = j_SL_GetRawHash(scr_const.kills);
    DDL_MoveToNameByHash(&v155, &state, v52, NULL);
    DDL_GetInt(&state, &v156);
    v53 = j_SL_GetRawHash(scr_const.deaths);
    DDL_MoveToNameByHash(&v155, &state, v53, NULL);
    DDL_GetInt(&state, &v156);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vcvtsi2ss xmm1, xmm1, ebx
      vdivss  xmm14, xmm1, xmm0
    }
    DDL_MoveToName(&v155, &v157, "bestKD");
    v59 = j_SL_GetRawHash(scr_const.score);
    DDL_MoveToNameByHash(&v157, &state, v59, NULL);
    DDL_GetInt(&state, &v156);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm13, xmm0, cs:__real@3a83126f
    }
    v63 = j_SL_GetRawHash(scr_const.time);
    DDL_MoveToNameByHash(&v157, &state, v63, NULL);
    time = DDL_GetInt(&state, &v156);
    DDL_MoveToName(&v155, &state, "bestKills");
    controllerIndex = DDL_GetInt(&state, &v156);
    v64 = j_SL_GetRawHash(scr_const.wins);
    DDL_MoveToNameByHash(&v155, &state, v64, NULL);
    v65 = DDL_GetInt(&state, &v156);
    DDL_MoveToName(&v155, &state, "losses");
    newValue = DDL_GetInt(&state, &v156);
    v66 = newValue;
    DDL_MoveToName(&v155, &state, "ties");
    v67 = v65 + DDL_GetInt(&state, &v156) + v66;
    if ( v65 + v66 <= 0 )
    {
      __asm { vmovaps xmm1, xmm7 }
    }
    else
    {
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, ecx
      }
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r13d
      vdivss  xmm12, xmm0, xmm1
    }
    v73 = j_SL_GetRawHash(scr_const.kdHistoryK);
    DDL_MoveToNameByHash(&v155, &v167, v73, NULL);
    v74 = j_SL_GetRawHash(scr_const.kdHistoryD);
    DDL_MoveToNameByHash(&v155, &v168, v74, NULL);
    v75 = 5i64;
    _RBX = &result;
    do
    {
      DDL_MoveToIndex(&v167, &state, v13);
      DDL_GetByte(&state, &v156);
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, eax
      }
      DDL_MoveToIndex(&v168, &state, v13);
      DDL_GetByte(&state, &v156);
      __asm { vxorps  xmm1, xmm1, xmm1 }
      _RBX = (DDLState *)((char *)_RBX + 4);
      __asm
      {
        vcvtsi2ss xmm1, xmm1, eax
        vcmpeqss xmm0, xmm1, xmm8
        vblendvps xmm1, xmm1, xmm7, xmm0
        vdivss  xmm0, xmm6, xmm1
      }
      ++v13;
      __asm
      {
        vmovss  dword ptr [rbx-4], xmm0
        vmaxss  xmm9, xmm0, xmm9
        vaddss  xmm10, xmm10, xmm0
      }
    }
    while ( v13 < 5 );
    __asm
    {
      vmovss  xmm6, dword ptr [rbp+6D0h+result.member]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r14d
      vdivss  xmm11, xmm7, xmm0
      vsubss  xmm0, xmm6, xmm13
      vcvtss2sd xmm1, xmm0, xmm0
      vcomisd xmm1, cs:__real@bfa999999999999a
      vmovss  xmm1, dword ptr [rbp+6D0h+result.isValid]; newValue
      vmulss  xmm7, xmm10, xmm11
    }
    v91 = Short >= controllerIndex;
    LUI_Model_SetReal(v126, *(float *)&_XMM1);
    __asm { vmovss  xmm1, [rbp+6D0h+result.offset]; newValue }
    LUI_Model_SetReal(v127, *(float *)&_XMM1);
    __asm { vmovss  xmm1, [rbp+6D0h+result.arrayIndex]; newValue }
    LUI_Model_SetReal(v128, *(float *)&_XMM1);
    __asm { vmovss  xmm1, dword ptr [rbp+6D0h+result+0Ch]; newValue }
    LUI_Model_SetReal(v129, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm6; newValue }
    LUI_Model_SetReal(v130, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm9; newValue }
    LUI_Model_SetReal(v131, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm7; newValue }
    LUI_Model_SetReal(v132, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm12; newValue }
    LUI_Model_SetReal(v133, *(float *)&_XMM1);
    __asm { vmovaps xmm1, xmm13; newValue }
    LUI_Model_SetReal(v134, *(float *)&_XMM1);
    LUI_Model_SetInt(v135, v65);
    LUI_Model_SetInt(v136, newValue);
    __asm { vmovaps xmm1, xmm14; newValue }
    LUI_Model_SetReal(v137, *(float *)&_XMM1);
    LUI_Model_SetInt(v138, v67);
    LUI_Model_SetBool(v139, v91);
    LUI_Model_SetBool(v140, (unsigned int)v13 > 5);
    FormatDateTime(time, outputString, 0x400u);
    LUI_Model_SetString(v141, outputString);
    DDL_MoveToName(&v155, &v157, "bestSPM");
    v101 = j_SL_GetRawHash(scr_const.score);
    DDL_MoveToNameByHash(&v157, &state, v101, NULL);
    v102 = DDL_GetInt(&state, &v156);
    v103 = j_SL_GetRawHash(scr_const.time);
    DDL_MoveToNameByHash(&v157, &state, v103, NULL);
    v104 = DDL_GetInt(&state, &v156);
    DDL_MoveToName(&v155, &state, "globalSPM");
    v105 = DDL_GetInt(&state, &v156);
    DDL_MoveToName(&v155, &v158, "gameModeScoreHistory");
    DDL_MoveToIndex(&v158, &v158, index);
    v106 = j_SL_GetRawHash(scr_const.index);
    DDL_MoveToNameByHash(&v158, &state, v106, NULL);
    v107 = DDL_GetInt(&state, &v156);
    DDL_MoveToName(&v158, &v169, "scores");
    __asm { vmovaps xmm14, [rsp+7D0h+var_B0] }
    p_result = &result;
    __asm
    {
      vmovaps xmm13, [rsp+7D0h+var_A0]
      vmovaps xmm12, [rsp+7D0h+var_90]
      vmovaps xmm10, [rsp+7D0h+var_70]
      vmovaps xmm9, [rsp+7D0h+var_60]
      vmovaps xmm7, [rsp+7D0h+var_40]
      vmovaps xmm6, xmm8
    }
    do
    {
      DDL_MoveToIndex(&v169, &state, v107);
      *(_DWORD *)&p_result->isValid = DDL_GetInt(&state, &v156);
      p_result = (DDLState *)((char *)p_result + 4);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm8, xmm8, xmm0
        vmaxss  xmm6, xmm0, xmm6
      }
      v107 = (v107 + 1) % 5;
      --v75;
    }
    while ( v75 );
    LUI_Model_SetInt(v142, *(int *)&result.isValid);
    LUI_Model_SetInt(v143, result.offset);
    LUI_Model_SetInt(v144, result.arrayIndex);
    LUI_Model_SetInt(v145, *(&result.arrayIndex + 1));
    LUI_Model_SetInt(v146, (int)result.member);
    __asm { vmovaps xmm1, xmm6; newValue }
    LUI_Model_SetReal(v147, *(float *)&_XMM1);
    __asm { vmulss  xmm1, xmm11, xmm8; newValue }
    LUI_Model_SetReal(v148, *(float *)&_XMM1);
    LUI_Model_SetInt(v149, v102);
    LUI_Model_SetInt(v150, v105);
    FormatDateTime(v104, outputString, 0x400u);
    LUI_Model_SetString(v151, outputString);
    __asm
    {
      vmovaps xmm11, [rsp+7D0h+var_80]
      vmovaps xmm8, [rsp+7D0h+var_50]
      vmovaps xmm6, [rsp+7D0h+var_30]
    }
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
  __asm { vmovdqu xmmword ptr [rbp+130h+toState.member], xmm0 }
  DDL_MoveToName(&fromState, &toState, "commonData");
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+130h+var_168.member], xmm0
  }
  v69.isValid = 0;
  v69.offset = 0;
  v69.arrayIndex = -1;
  RawHash = j_SL_GetRawHash(scr_const.round);
  DDL_MoveToNameByHash(&toState, &v69, RawHash, NULL);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rsp+230h+state.member], xmm0
  }
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+130h+var_188.member], xmm0
  }
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
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr [rbp+130h+var_128.member], xmm0
  }
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
    __asm { vmovdqu xmmword ptr [rbp+130h+var_148.member], xmm0 }
    DDL_MoveToIndex(&v71, &v70, v35);
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+130h+var_1A8.member], xmm0
    }
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

