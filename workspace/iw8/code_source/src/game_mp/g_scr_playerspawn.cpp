/*
==============
Scr_AddSpawnPointStruct
==============
*/

void __fastcall Scr_AddSpawnPointStruct(scrContext_t *scrContext, const SpawnPointInfo *const spawnPoint)
{
  ?Scr_AddSpawnPointStruct@@YAXAEAUscrContext_t@@QEBUSpawnPointInfo@@@Z(scrContext, spawnPoint);
}

/*
==============
Scr_AddSpawnTeam
==============
*/

void __fastcall Scr_AddSpawnTeam(scrContext_t *scrContext, team_t team)
{
  ?Scr_AddSpawnTeam@@YAXAEAUscrContext_t@@W4team_t@@@Z(scrContext, team);
}

/*
==============
Scr_DisablePlayerSpawnPoints
==============
*/
void Scr_DisablePlayerSpawnPoints(scrContext_t *scrContext)
{
  G_PlayerSpawnPoints_SetEnabledAll(TEAM_MP_NUM_TEAMS, 0);
}

/*
==============
Scr_DisablePlayerSpawnPointsByClassname
==============
*/
void Scr_DisablePlayerSpawnPointsByClassname(scrContext_t *scrContext)
{
  team_t v1; 
  int NumParam; 
  scr_string_t ConstString; 
  scr_string_t v5; 
  const char *v6; 
  const char *v7; 
  team_t outTeam; 

  v1 = TEAM_MP_NUM_TEAMS;
  outTeam = TEAM_MP_NUM_TEAMS;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam < 1 )
  {
    Com_ScriptError("DisableSpawnPointsByClassname requires a classname.");
    return;
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( NumParam > 1 )
  {
    v5 = Scr_GetConstString(scrContext, 1u);
    if ( !Com_Teams_TeamFromString(v5, &outTeam) )
    {
      v6 = SL_ConvertToString(v5);
      v7 = j_va("unknown team '%s'", v6);
      Scr_Error(COM_ERR_2627, scrContext, v7);
      return;
    }
    v1 = outTeam;
  }
  G_PlayerSpawnPoints_SetEnabledByClassname(ConstString, v1, 0);
}

/*
==============
Scr_DisablePlayerSpawnPointByIndex
==============
*/
void Scr_DisablePlayerSpawnPointByIndex(scrContext_t *scrContext)
{
  team_t v1; 
  int NumParam; 
  int Int; 
  scr_string_t ConstString; 
  const char *v6; 
  const char *v7; 
  team_t outTeam; 

  v1 = TEAM_MP_NUM_TEAMS;
  outTeam = TEAM_MP_NUM_TEAMS;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam < 1 )
  {
    Com_ScriptError("DisableSpawnPointByIndex requires an index.");
    return;
  }
  Int = Scr_GetInt(scrContext, 0);
  if ( NumParam > 1 )
  {
    ConstString = Scr_GetConstString(scrContext, 1u);
    if ( !Com_Teams_TeamFromString(ConstString, &outTeam) )
    {
      v6 = SL_ConvertToString(ConstString);
      v7 = j_va("unknown team '%s'", v6);
      Scr_Error(COM_ERR_2628, scrContext, v7);
      return;
    }
    v1 = outTeam;
  }
  G_PlayerSpawnPoints_SetEnabledByIndex(Int, v1, 0);
}

/*
==============
Scr_EnablePlayerSpawnPoints
==============
*/
void Scr_EnablePlayerSpawnPoints(scrContext_t *scrContext)
{
  G_PlayerSpawnPoints_SetEnabledAll(TEAM_MP_NUM_TEAMS, 1);
}

/*
==============
Scr_EnablePlayerSpawnPointsByClassname
==============
*/
void Scr_EnablePlayerSpawnPointsByClassname(scrContext_t *scrContext)
{
  team_t v1; 
  int NumParam; 
  scr_string_t ConstString; 
  scr_string_t v5; 
  const char *v6; 
  const char *v7; 
  team_t outTeam; 

  v1 = TEAM_MP_NUM_TEAMS;
  outTeam = TEAM_MP_NUM_TEAMS;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam < 1 )
  {
    Com_ScriptError("EnableSpawnPointsByClassname requires a classname.");
    return;
  }
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( NumParam > 1 )
  {
    v5 = Scr_GetConstString(scrContext, 1u);
    if ( !Com_Teams_TeamFromString(v5, &outTeam) )
    {
      v6 = SL_ConvertToString(v5);
      v7 = j_va("unknown team '%s'", v6);
      Scr_Error(COM_ERR_2629, scrContext, v7);
      return;
    }
    v1 = outTeam;
  }
  G_PlayerSpawnPoints_SetEnabledByClassname(ConstString, v1, 1);
}

/*
==============
Scr_EnablePlayerSpawnPointByIndex
==============
*/
void Scr_EnablePlayerSpawnPointByIndex(scrContext_t *scrContext)
{
  team_t v1; 
  int NumParam; 
  int Int; 
  scr_string_t ConstString; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  team_t outTeam; 

  v1 = TEAM_MP_NUM_TEAMS;
  outTeam = TEAM_MP_NUM_TEAMS;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam < 1 )
  {
    Com_ScriptError("EnableSpawnPointByIndex requires an index.");
    return;
  }
  Int = Scr_GetInt(scrContext, 0);
  if ( NumParam > 1 )
  {
    ConstString = Scr_GetConstString(scrContext, 1u);
    if ( !Com_Teams_TeamFromString(ConstString, &outTeam) )
    {
      v6 = SL_ConvertToString(ConstString);
      v7 = j_va("unknown team '%s'", v6);
      Scr_Error(COM_ERR_2630, scrContext, v7);
      return;
    }
    v1 = outTeam;
  }
  if ( Int < G_PlayerSpawnPoints_GetSpawnPointCount() )
  {
    G_PlayerSpawnPoints_SetEnabledByIndex(Int, v1, 1);
  }
  else
  {
    v8 = j_va("EnableSpawnPointByIndex - Tried to enable a spawnpoint of index %i, which does not exist.", (unsigned int)Int);
    Scr_Error(COM_ERR_6303, scrContext, v8);
  }
}

/*
==============
Scr_RegisterSpawnFactor
==============
*/
void Scr_RegisterSpawnFactor(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  const char *v3; 
  SpawnFactors FactorForName; 
  double Float; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    v3 = SL_ConvertToString(ConstString);
    FactorForName = G_PlayerSpawnPoints_GetFactorForName(v3);
    if ( FactorForName != NUM_SPAWN_FACTORS )
    {
      Float = Scr_GetFloat(scrContext, 1u);
      if ( *(float *)&Float >= 0.0 )
        G_PlayerSpawnPoints_SetFactorWeight(FactorForName, *(float *)&Float);
      else
        Scr_Error(COM_ERR_2632, scrContext, "Spawn factor weights less than 0 are prohibited");
    }
  }
  else
  {
    Com_ScriptError("RegisterSpawnFactor requires exactly 2 arguments <name> and <weight>.");
  }
}

/*
==============
Scr_GetPlayerSpawnPointArray
==============
*/
void Scr_GetPlayerSpawnPointArray(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  unsigned int v3; 
  int Count; 
  int i; 
  const SpawnPointInfo *SpawnInfo; 
  unsigned int CanonicalString; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  const char *v13; 

  if ( Scr_GetNumParam(scrContext) )
  {
    ConstString = Scr_GetConstString(scrContext, 0);
    v3 = 0;
    Scr_MakeArray(scrContext);
    Count = G_PlayerSpawnPoints_GetCount();
    for ( i = 0; i < Count; ++i )
    {
      SpawnInfo = G_PlayerSpawnPoints_GetSpawnInfo(i);
      if ( SpawnInfo->record->name == ConstString )
      {
        Scr_MakeStruct(scrContext);
        Scr_AddConstString(scrContext, SpawnInfo->record->name);
        CanonicalString = SL_GetCanonicalString("classname");
        Scr_AddStructField(scrContext, CanonicalString);
        Scr_AddConstString(scrContext, SpawnInfo->record->target);
        v8 = SL_GetCanonicalString("target");
        Scr_AddStructField(scrContext, v8);
        Scr_AddConstString(scrContext, SpawnInfo->record->script_noteworthy);
        v9 = SL_GetCanonicalString("script_noteworthy");
        Scr_AddStructField(scrContext, v9);
        Scr_AddVector(scrContext, SpawnInfo->groundPos.v);
        v10 = SL_GetCanonicalString("origin");
        Scr_AddStructField(scrContext, v10);
        Scr_AddVector(scrContext, SpawnInfo->record->angles.v);
        v11 = SL_GetCanonicalString("angles");
        Scr_AddStructField(scrContext, v11);
        Scr_AddInt(scrContext, SpawnInfo->record->index);
        v12 = SL_GetCanonicalString("index");
        Scr_AddStructField(scrContext, v12);
        Scr_AddArray(scrContext);
        ++v3;
      }
    }
    v13 = SL_ConvertToString(ConstString);
    Com_Printf(24, "GetSpawnArray returned %d %s's\n", v3, v13);
  }
  else
  {
    Com_ScriptError("GetSpawnArray requires a spawn entity's name.");
  }
}

/*
==============
Scr_EnableFrontlineCriticalFactor
==============
*/
void Scr_EnableFrontlineCriticalFactor(scrContext_t *scrContext)
{
  unsigned int NumParam; 
  vec3_t pos; 
  vec3_t vectorValue; 

  NumParam = Scr_GetNumParam(scrContext);
  if ( (NumParam & 0xFFFFFFFD) != 0 )
  {
    Com_ScriptError("EnableFrontlineCriticalFactor requires exactly 0 or 2 args.");
  }
  else
  {
    G_PlayerSpawnPonits_EnableFrontline();
    if ( NumParam == 2 )
    {
      vectorValue.v[0] = 0.0;
      vectorValue.v[1] = 0.0;
      vectorValue.v[2] = 0.0;
      pos.v[0] = 0.0;
      pos.v[1] = 0.0;
      pos.v[2] = 0.0;
      Scr_GetVector(scrContext, 0, &vectorValue);
      Scr_GetVector(scrContext, 1u, &pos);
      G_PlayerSpawnPoints_EnableFrontlineAnchor(&vectorValue, &pos);
    }
  }
}

/*
==============
Scr_EnableGroundWarSpawnLogic
==============
*/
void Scr_EnableGroundWarSpawnLogic(scrContext_t *scrContext)
{
  unsigned int NumParam; 
  double Float; 
  float v4; 
  double v5; 

  NumParam = Scr_GetNumParam(scrContext);
  if ( (NumParam & 0xFFFFFFFD) != 0 )
  {
    Com_ScriptError("EnableGroundWarSpawnLogic requires exactly 0 args.");
  }
  else
  {
    G_PlayerSpawnPonits_EnableGroundWar();
    if ( NumParam == 2 )
    {
      Float = Scr_GetFloat(scrContext, 0);
      v4 = *(float *)&Float;
      v5 = Scr_GetFloat(scrContext, 1u);
      G_PlayerSpawnPonits_SetGroundWarSpawnVariables(v4, *(const float *)&v5);
    }
  }
}

/*
==============
Scr_RegisterSpawnTeamsMode
==============
*/
void Scr_RegisterSpawnTeamsMode(scrContext_t *scrContext)
{
  int Int; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    G_PlayerSpawnPoints_SetUsingTeams(Int != 0);
  }
  else
  {
    Com_ScriptError("RegisterSpawnTeamsMode requires exactly 0 or 2 args.");
  }
}

/*
==============
Scr_CreateSpawnInfluencePoint
==============
*/
void Scr_CreateSpawnInfluencePoint(scrContext_t *scrContext)
{
  unsigned int NumParam; 
  double Float; 
  float v4; 
  double v5; 
  scr_string_t ConstString; 
  const char *v7; 
  const char *v8; 
  __int16 v9; 
  gentity_s *ownerEnt; 
  gentity_s *Entity; 
  int v12; 
  team_t outTeam; 
  vec3_t vectorValue; 

  NumParam = Scr_GetNumParam(scrContext);
  if ( ((NumParam - 4) & 0xFFFFFFFD) != 0 )
  {
    Com_ScriptError("CreateSpawnInfluencePoint requires exactly 4 or 6 args.");
    return;
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Float = Scr_GetFloat(scrContext, 1u);
  v4 = *(float *)&Float;
  v5 = Scr_GetFloat(scrContext, 2u);
  ConstString = Scr_GetConstString(scrContext, 3u);
  if ( !Com_Teams_TeamFromString(ConstString, &outTeam) )
  {
    v7 = SL_ConvertToString(ConstString);
    v8 = j_va("unknown team '%s'", v7);
    Scr_Error(COM_ERR_2633, scrContext, v8);
    return;
  }
  v9 = 0;
  ownerEnt = NULL;
  if ( NumParam == 6 )
  {
    Entity = GScr_GetEntity(4u);
    ownerEnt = Entity;
    if ( !Entity->agent && !Entity->client )
    {
      Com_ScriptError("CreateSpawnInfluencePoint - InfluencePoint owners must be characters.\n");
      return;
    }
    if ( Scr_GetInt(scrContext, 5u) )
      v9 = 2;
  }
  v12 = G_PlayerSpawns_CreateInfluencePoint(&vectorValue, v4, *(float *)&v5, outTeam, v9 | 1, ownerEnt);
  if ( v12 != -1 )
    Scr_AddInt(scrContext, v12);
}

/*
==============
Scr_SpawnInfluencePointLinkTo
==============
*/
void Scr_SpawnInfluencePointLinkTo(scrContext_t *scrContext)
{
  unsigned int Int; 
  gentity_s *Entity; 
  gentity_s *v4; 
  int outInfluencePtIndex; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( Scr_GetType(scrContext, 1u) != VAR_POINTER || Scr_GetPointerType(scrContext, 1u) != VAR_ENTITY )
      Com_ScriptError("SpawnInfluencePointLinkTo - linkToEnt must be an entity.\n");
    Entity = GScr_GetEntity(1u);
    v4 = Entity;
    if ( (Entity->agent || Entity->client) && (Entity->health <= 0 || Entity->s.eType == ET_INVISIBLE) )
    {
      Com_ScriptError("SpawnInfluencePointLinkTo - can't link to a dead player or agent, entity %i\n", (unsigned int)Entity->s.number);
    }
    else if ( G_PlayerSpawns_EntityHasLinkedInfluencePoint(Entity, &outInfluencePtIndex) )
    {
      Com_ScriptError("SpawnInfluencePointLinkTo - entity %i already has a linked Spawn Influence Point with index %i.\n", (unsigned int)v4->s.number, (unsigned int)outInfluencePtIndex);
    }
    else if ( !G_PlayerSpawns_LinkInfluencePointToEntity(Int, v4) )
    {
      Com_ScriptError("SpawnInfluencePointLinkTo - Influence Point %d not in use.\n", Int);
    }
  }
  else
  {
    Com_ScriptError("SpawnInfluencePointLinkTo requires exactly 2 args.\n");
  }
}

/*
==============
Scr_SpawnInfluencePointIsLinked
==============
*/
void Scr_SpawnInfluencePointIsLinked(scrContext_t *scrContext)
{
  unsigned int Int; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( G_PlayerSpawns_IsInfluencePointInUse(Int) )
    {
      if ( G_PlayerSpawns_IsInfluencePointLinkedToEntity(Int) )
        Scr_AddInt(scrContext, 1);
      else
        Scr_AddInt(scrContext, 0);
    }
    else
    {
      Com_ScriptError("Influence Point %d not in use.\n", Int);
    }
  }
  else
  {
    Com_ScriptError("SpawnInfluencePointIsLinked requires exactly 1 arg.\n");
  }
}

/*
==============
Scr_SpawnInfluencePointSetPosition
==============
*/
void Scr_SpawnInfluencePointSetPosition(scrContext_t *scrContext)
{
  unsigned int Int; 
  vec3_t v3; 
  vec3_t vectorValue; 

  if ( Scr_GetNumParam(scrContext) == 2 )
  {
    Int = Scr_GetInt(scrContext, 0);
    Scr_GetVector(scrContext, 1u, &vectorValue);
    if ( G_PlayerSpawns_IsInfluencePointLinkedToEntity(Int) )
    {
      Com_ScriptError("SpawnInfluencePointSetPosition - Influence Point %d is linked to an entity, cannot set its position.\n", Int);
    }
    else
    {
      v3 = vectorValue;
      if ( !G_PlayerSpawns_SetInfluencePointPosition(Int, &v3) )
        Com_ScriptError("SpawnInfluencePointSetPosition - Influence Point %d not in use.\n", Int);
    }
  }
  else
  {
    Com_ScriptError("SpawnInfluencePointSetPosition requires exactly 2 args.\n");
  }
}

/*
==============
Scr_DestroySpawnInfluencePoint
==============
*/
void Scr_DestroySpawnInfluencePoint(scrContext_t *scrContext)
{
  unsigned int Int; 

  if ( Scr_GetNumParam(scrContext) == 1 )
  {
    Int = Scr_GetInt(scrContext, 0);
    if ( !G_PlayerSpawns_ClearInfluencePoint(Int) )
      Com_PrintWarning(16, "Influence Point %d not in use.", Int);
  }
  else
  {
    Com_ScriptError("DestroySpawnInfluencePoint requires exactly 1 arg.");
  }
}

/*
==============
GScr_PlayerSpawn_GetSpawnpointForPlayer
==============
*/
void GScr_PlayerSpawn_GetSpawnpointForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  int number; 
  team_t v5; 
  const SpawnPointInfo *SpawnInfo; 
  unsigned int CanonicalString; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  scr_string_t bad; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int csScoreReason; 
  unsigned int v22; 
  __int64 v23; 
  spawnSelectionSpec selectionSpec; 
  spawnSelectionResults selectionResults; 

  Entity = GetEntity(entref);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( Entity->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v23) = Entity->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_playerspawn.cpp", 687, ASSERT_TYPE_ASSERT, "(unsigned)( spawningPlayer->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "spawningPlayer->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v23, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  number = Entity->s.number;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v5 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, Entity);
  if ( G_PlayerSpawnPoints_GetUsingTeams() )
  {
    if ( (unsigned int)v5 > TEAM_SIX )
    {
      Scr_AddUndefined(scrContext);
      Com_PrintWarning(16, "RegisterSpawnTeamsMode is true, and GetSpawnpointForPlayer called on a player that is not on team 'axis', 'allies', 'team_three', 'team_four', 'team_five' or 'team_six'\n");
      return;
    }
  }
  else if ( v5 )
  {
    Scr_AddUndefined(scrContext);
    Com_PrintWarning(16, "RegisterSpawnTeamsMode is false, and GetSpawnpointForPlayer called on a player that is not on team 'none'\n");
    return;
  }
  selectionSpec.spawningPlayerEntNum = number;
  selectionSpec.spawningTeam = v5;
  selectionResults.bestSpawnPointScore = FLOAT_N1_0;
  memset(&selectionResults, 0, 20);
  memset(&selectionResults.numBadSpawns, 0, 70);
  *(_OWORD *)selectionResults.frontlinePos.v = 0i64;
  selectionResults.frontlineDir.v[1] = 0.0;
  selectionResults.frontlineDir.v[2] = 0.0;
  *(_WORD *)&selectionSpec.respectFrontline = 0;
  *(_WORD *)&selectionSpec.skipTelefragFactor = 0;
  G_PlayerSpawnPoints_FindBestSpawnPoint(&selectionSpec, &selectionResults);
  SpawnInfo = G_PlayerSpawnPoints_GetSpawnInfo(selectionResults.bestSpawnPointIdx);
  if ( !SpawnInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_playerspawn.cpp", 17, ASSERT_TYPE_ASSERT, "(spawnPoint)", (const char *)&queryFormat, "spawnPoint") )
    __debugbreak();
  Scr_MakeStruct(scrContext);
  Scr_AddConstString(scrContext, SpawnInfo->record->name);
  CanonicalString = SL_GetCanonicalString("classname");
  Scr_AddStructField(scrContext, CanonicalString);
  Scr_AddConstString(scrContext, SpawnInfo->record->target);
  v8 = SL_GetCanonicalString("target");
  Scr_AddStructField(scrContext, v8);
  Scr_AddConstString(scrContext, SpawnInfo->record->script_noteworthy);
  v9 = SL_GetCanonicalString("script_noteworthy");
  Scr_AddStructField(scrContext, v9);
  Scr_AddVector(scrContext, SpawnInfo->finalGroundPos.v);
  v10 = SL_GetCanonicalString("origin");
  Scr_AddStructField(scrContext, v10);
  Scr_AddVector(scrContext, SpawnInfo->record->angles.v);
  v11 = SL_GetCanonicalString("angles");
  Scr_AddStructField(scrContext, v11);
  Scr_AddInt(scrContext, SpawnInfo->record->index);
  v12 = SL_GetCanonicalString("index");
  Scr_AddStructField(scrContext, v12);
  Scr_AddFloat(scrContext, selectionResults.bestSpawnPointScore);
  v13 = SL_GetCanonicalString("totalscore");
  Scr_AddStructField(scrContext, v13);
  if ( selectionResults.bestSpawnPointCriticalScore == 3 )
  {
    bad = scr_const.bad;
  }
  else
  {
    bad = scr_const.ok;
    if ( selectionResults.bestSpawnPointCriticalScore != 2 )
      bad = scr_const.good;
  }
  Scr_AddConstString(scrContext, bad);
  v15 = SL_GetCanonicalString("score");
  Scr_AddStructField(scrContext, v15);
  Scr_AddBool(scrContext, selectionResults.frontlineEnabled);
  v16 = SL_GetCanonicalString("frontlineenabled");
  Scr_AddStructField(scrContext, v16);
  Scr_AddBool(scrContext, selectionResults.frontlineUsed);
  v17 = SL_GetCanonicalString("frontlineused");
  Scr_AddStructField(scrContext, v17);
  Scr_AddVector(scrContext, selectionResults.frontlinePos.v);
  v18 = SL_GetCanonicalString("frontlinepos");
  Scr_AddStructField(scrContext, v18);
  Scr_AddVector(scrContext, selectionResults.frontlineDir.v);
  v19 = SL_GetCanonicalString("frontlinedir");
  Scr_AddStructField(scrContext, v19);
  Scr_AddFloat(scrContext, (float)(1.0 - SpawnInfo->enemySightData.maxSightValue) * 2550.0);
  v20 = SL_GetCanonicalString("threatsight");
  Scr_AddStructField(scrContext, v20);
  csScoreReason = -1;
  if ( (unsigned int)(selectionResults.bestSpawnPointCriticalScore - 2) <= 1 )
    csScoreReason = SpawnInfo->scoreData.csScoreReason;
  Scr_AddInt(scrContext, csScoreReason);
  v22 = SL_GetCanonicalString("damagemod");
  Scr_AddStructField(scrContext, v22);
}

/*
==============
GScr_PlayerSpawn_GetSpawnBucketForPlayer
==============
*/
void GScr_PlayerSpawn_GetSpawnBucketForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  int number; 
  team_t v5; 
  int NumParam; 
  scr_string_t bad; 
  __int64 v8; 
  spawnSelectionSpec selectionSpec; 
  vec3_t v10; 
  vec3_t vectorValue; 
  spawnSelectionResults selectionResults; 

  Entity = GetEntity(entref);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( Entity->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v8) = Entity->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_playerspawn.cpp", 790, ASSERT_TYPE_ASSERT, "(unsigned)( spawningPlayer->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "spawningPlayer->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v8, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  number = Entity->s.number;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v5 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, Entity);
  if ( G_PlayerSpawnPoints_GetUsingTeams() )
  {
    if ( (unsigned int)v5 > TEAM_SIX )
    {
      Scr_AddUndefined(scrContext);
      Com_PrintWarning(16, "RegisterSpawnTeamsMode is true, and GetSpawnBucketForPlayer called on a player that is not on team 'axis', 'allies', 'team_three', 'team_four', 'team_five' or 'team_six'\n");
      return;
    }
  }
  else if ( v5 )
  {
    Scr_AddUndefined(scrContext);
    Com_PrintWarning(16, "RegisterSpawnTeamsMode is false, and GetSpawnBucketForPlayer called on a player that is not on team 'none'\n");
    return;
  }
  selectionSpec.spawningPlayerEntNum = number;
  selectionSpec.spawningTeam = v5;
  selectionResults.bestSpawnPointScore = FLOAT_N1_0;
  memset(&selectionResults, 0, 20);
  memset(&selectionResults.numBadSpawns, 0, 70);
  *(_OWORD *)selectionResults.frontlinePos.v = 0i64;
  selectionResults.frontlineDir.v[1] = 0.0;
  selectionResults.frontlineDir.v[2] = 0.0;
  *(_WORD *)&selectionSpec.respectFrontline = 0;
  *(_WORD *)&selectionSpec.skipTelefragFactor = 0;
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam > 2 )
    Com_PrintWarning(16, "GetSpawnBucketForPlayer requires 0, 1, or 2 parameters.\n");
  if ( NumParam > 0 )
    selectionSpec.skipTelefragFactor = Scr_GetInt(scrContext, 0) != 0;
  if ( NumParam > 1 )
  {
    Scr_GetVector(scrContext, 1u, &vectorValue);
    selectionSpec.singleOriginMode = 1;
    v10 = vectorValue;
    G_PlayerSpawnPoints_EnableSingleOriginSpawn(v5, &v10);
  }
  G_PlayerSpawnPoints_FindBestSpawnBucket(&selectionSpec, &selectionResults);
  if ( NumParam > 1 )
    G_PlayerSpawnPoints_DisableSingleOriginSpawn();
  if ( selectionResults.bestSpawnPointCriticalScore == 3 )
  {
    bad = scr_const.bad;
  }
  else
  {
    bad = scr_const.ok;
    if ( selectionResults.bestSpawnPointCriticalScore != 2 )
      bad = scr_const.good;
  }
  Scr_AddConstString(scrContext, bad);
}

/*
==============
GScr_PlayerSpawn_FinalizeSpawnpointChoiceForPlayer
==============
*/
void GScr_PlayerSpawn_FinalizeSpawnpointChoiceForPlayer(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  team_t v4; 
  team_t v5; 
  int NumParam; 
  int Int; 
  unsigned int v8; 
  int v9; 
  unsigned int v10; 
  float v11; 
  double Float; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  const char *String; 
  const char *v17; 
  const char *v18; 
  __int64 v19; 

  Entity = GetEntity(entref);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( Entity->s.number >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v19) = Entity->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_playerspawn.cpp", 885, ASSERT_TYPE_ASSERT, "(unsigned)( spawningPlayer->s.number ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "spawningPlayer->s.number doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v19, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  v4 = GUtils::ms_gUtils->GetEntityTeam(GUtils::ms_gUtils, Entity);
  v5 = v4;
  if ( (unsigned int)v4 > TEAM_FOLLOWER )
  {
    Com_PrintWarning(16, "FinalizeSpawnpointChoiceForPlayer called on a player that is outside of the max number of team, requested %i but max is %i\n", (unsigned int)v4, 202i64);
  }
  else
  {
    NumParam = Scr_GetNumParam(scrContext);
    if ( (unsigned int)(NumParam - 1) <= 4 )
    {
      Int = Scr_GetInt(scrContext, 0);
      if ( Int >= 0 )
        G_PlayerSpawnPoints_FinalizeLastSpawnUsage(Int, Entity->s.number, v5);
      if ( NumParam > 1 )
      {
        v8 = Scr_GetInt(scrContext, 1u);
        if ( v8 > 4 )
        {
          Com_ScriptError("FinalizeSpawnpointChoiceForPlayer, parameter 2 spawnTypeIdx must be between 0 and 4.");
        }
        else
        {
          v9 = -1;
          v10 = -1;
          if ( NumParam > 3 )
            v10 = Scr_GetInt(scrContext, 2u);
          v11 = FLOAT_N1_0;
          if ( NumParam > 3 )
          {
            Float = Scr_GetFloat(scrContext, 3u);
            v11 = *(float *)&Float;
          }
          if ( NumParam > 4 )
            v9 = Scr_GetInt(scrContext, 4u);
          if ( v8 )
          {
            v13 = v8 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  if ( v15 == 1 )
                  {
                    String = G_PlayerSpawnPoints_FailedCritReason_GetString(v9);
                    Com_Printf(131087, "[Spawn] Plyr %d, RANDOM | RejectedBadSpwn FALLBACK %i, TTLOS %f, CritFail %s\n", (unsigned int)Entity->s.number, v10, v11, String);
                  }
                }
                else
                {
                  v17 = G_PlayerSpawnPoints_FailedCritReason_GetString(v9);
                  Com_Printf(131087, "[Spawn] Plyr %d, BUDDY | RejectedBadSpwn FALLBACK: %i, TTLOS %f, CritFail %s\n", (unsigned int)Entity->s.number, v10, v11, v17);
                }
              }
              else
              {
                v18 = G_PlayerSpawnPoints_FailedCritReason_GetString(v9);
                Com_Printf(131087, "[Spawn] Plyr %d, BAD, FALLBACK %i, TTLOS %f, CritFail %s\n", (unsigned int)Entity->s.number, v10, v11, v18);
              }
            }
            else
            {
              Com_Printf(131087, "[Spawn] Plyr %d, OKAY, FALLBACK %i, TTLOS %f\n", (unsigned int)Entity->s.number, v10, v11);
            }
          }
          else
          {
            Com_Printf(131087, "[Spawn] Plyr %d, GOOD, FALLBACK %i, TTLOS %f\n", (unsigned int)Entity->s.number, v10, v11);
          }
        }
      }
    }
    else
    {
      Com_ScriptError("FinalizeSpawnpointChoiceForPlayer requires between 1 and 5 parameters.");
    }
  }
}

/*
==============
GScr_PlayerSpawn_RegisterEntitySpawnViewer
==============
*/
void GScr_PlayerSpawn_RegisterEntitySpawnViewer(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  GHandler *Handler; 
  team_t team; 
  int number; 

  Entity = GetEntity(entref);
  if ( BG_IsCharacterEntity(&Entity->s) )
  {
    Com_ScriptError("RegisterSpawnViewer should not be called on players.\n");
  }
  else if ( G_PlayerSpawnPoints_IsValidViewerEntity(Entity) )
  {
    team = TEAM_ZERO;
    number = Entity->s.number;
    Handler = GHandler::getHandler();
    Handler->GetEntityTeam(Handler, &team, Entity->s.number, (unsigned int *)&number);
    if ( (unsigned int)team > TEAM_SIX )
      Com_PrintWarning(16, "RegisterSpawnViewer called on an entity that does not resolve to team 'axis', 'allies', 'team_three', 'team_four', 'team_five' or 'team_six'");
    else
      G_PlayerSpawnPoints_AddViewerEntity(Entity, team);
  }
  else
  {
    Com_ScriptError("RegisterSpawnViewer failed on ent %d, it only works on TURRETS, VEHICLES and SCRIPT_MOVERS.\n", (unsigned int)Entity->s.number);
  }
}

/*
==============
GScr_PlayerSpawn_ClearEntitySpawnViewer
==============
*/
void GScr_PlayerSpawn_ClearEntitySpawnViewer(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 

  Entity = GetEntity(entref);
  if ( BG_IsCharacterEntity(&Entity->s) )
  {
    Com_ScriptError("ClearEntitySpawnViewer should not be called on players.\n");
  }
  else if ( !G_PlayerSpawnPoints_RemoveViewerEntity(Entity) )
  {
    Com_PrintWarning(16, "Spawn viewer entry for ent %d not found\n.", (unsigned int)Entity->s.number);
  }
}

/*
==============
GScr_PlayerSpawn_IgnoreCharacterDuringSpawnSelection
==============
*/
void GScr_PlayerSpawn_IgnoreCharacterDuringSpawnSelection(scrContext_t *scrContext, scr_entref_t entref)
{
  const gentity_s *Entity; 
  int Int; 

  Entity = GetEntity(entref);
  if ( BG_IsCharacterEntity(&Entity->s) )
  {
    Int = Scr_GetInt(scrContext, 0);
    G_PlayerSpawnPoints_SetIgnoreCharacterDuringSpawnSelection(Entity, Int != 0);
  }
  else
  {
    Com_ScriptError("IgnoreCharacterDuringSpawnSelection should only be called on players or agents.\n");
  }
}

/*
==============
Scr_RegisterScriptedSpawnpoints
==============
*/
void Scr_RegisterScriptedSpawnpoints(scrContext_t *scrContext)
{
  int NumParam; 
  scr_string_t ConstString; 
  scr_string_t v4; 
  scr_string_t v5; 
  scr_string_t v6; 
  int v7; 
  vec3_t v8; 
  vec3_t v9; 
  vec3_t v10; 
  vec3_t vectorValue; 

  NumParam = Scr_GetNumParam(scrContext);
  ConstString = Scr_GetConstString(scrContext, 0);
  Scr_GetVector(scrContext, 1u, &vectorValue);
  Scr_GetVector(scrContext, 2u, &v10);
  if ( NumParam <= 3 )
  {
    v5 = scr_const._;
    v6 = scr_const._;
  }
  else
  {
    v4 = Scr_GetConstString(scrContext, 3u);
    v5 = scr_const._;
    v6 = v4;
  }
  if ( NumParam > 4 )
    v5 = Scr_GetConstString(scrContext, 4u);
  v8 = v10;
  v9 = vectorValue;
  v7 = G_PlayerSpawnPoints_RegisterScriptSpawnpoint(ConstString, &v9, &v8, v6, v5);
  if ( v7 >= 0 )
    Scr_AddInt(scrContext, v7);
}

/*
==============
GScr_PlayerSpawn_UseInvisiblePlayerDuringSpawnSelection
==============
*/
void GScr_PlayerSpawn_UseInvisiblePlayerDuringSpawnSelection(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  int Int; 
  gclient_s *client; 

  Entity = GetEntity(entref);
  if ( Entity->client )
  {
    if ( Scr_GetNumParam(scrContext) == 1 )
    {
      Int = Scr_GetInt(scrContext, 0);
      client = Entity->client;
      if ( Int )
      {
        client->useDuringSpawnSelectionWhileInvisible = 1;
        Entity->client->useDuringSpawnSelectionWhileSpectator = 1;
      }
      else
      {
        client->useDuringSpawnSelectionWhileInvisible = 0;
        Entity->client->useDuringSpawnSelectionWhileSpectator = 0;
      }
    }
    else
    {
      Com_ScriptError("UseInvisiblePlayerDuringSpawnSelection requires exactly one parameter.");
    }
  }
  else
  {
    Com_ScriptError("UseInvisiblePlayerDuringSpawnSelection should only be called on players.\n");
  }
}

/*
==============
Scr_AddSpawnPointStruct
==============
*/
void Scr_AddSpawnPointStruct(scrContext_t *scrContext, const SpawnPointInfo *const spawnPoint)
{
  unsigned int CanonicalString; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 

  if ( !spawnPoint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_scr_playerspawn.cpp", 17, ASSERT_TYPE_ASSERT, "(spawnPoint)", (const char *)&queryFormat, "spawnPoint") )
    __debugbreak();
  Scr_MakeStruct(scrContext);
  Scr_AddConstString(scrContext, spawnPoint->record->name);
  CanonicalString = SL_GetCanonicalString("classname");
  Scr_AddStructField(scrContext, CanonicalString);
  Scr_AddConstString(scrContext, spawnPoint->record->target);
  v5 = SL_GetCanonicalString("target");
  Scr_AddStructField(scrContext, v5);
  Scr_AddConstString(scrContext, spawnPoint->record->script_noteworthy);
  v6 = SL_GetCanonicalString("script_noteworthy");
  Scr_AddStructField(scrContext, v6);
  Scr_AddVector(scrContext, spawnPoint->finalGroundPos.v);
  v7 = SL_GetCanonicalString("origin");
  Scr_AddStructField(scrContext, v7);
  Scr_AddVector(scrContext, spawnPoint->record->angles.v);
  v8 = SL_GetCanonicalString("angles");
  Scr_AddStructField(scrContext, v8);
  Scr_AddInt(scrContext, spawnPoint->record->index);
  v9 = SL_GetCanonicalString("index");
  Scr_AddStructField(scrContext, v9);
}

/*
==============
Scr_AddSpawnTeam
==============
*/
void Scr_AddSpawnTeam(scrContext_t *scrContext, team_t team)
{
  __int64 v3; 
  const scr_string_t **v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 

  v3 = team;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( ((int)v3 < 0 || (unsigned int)v3 >= 6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v3) )
      __debugbreak();
    v4 = &S_TEAMS_SP_SCR_STRINGS_2[v3];
    if ( !*v4 )
    {
      v5 = "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )";
      v6 = 275;
      goto LABEL_14;
    }
  }
  else
  {
    if ( ((int)v3 < 0 || (unsigned int)v3 >= 0xCB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v3) )
      __debugbreak();
    v4 = &S_TEAMS_MP_SCR_STRINGS_2[v3];
    if ( !*v4 )
    {
      v5 = "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )";
      v6 = 284;
LABEL_14:
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", v6, ASSERT_TYPE_ASSERT, v5, "( team ) = %i", v7) )
        __debugbreak();
    }
  }
  Scr_AddConstString(scrContext, **v4);
}

