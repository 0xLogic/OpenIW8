/*
==============
CG_DrawTools_SetupTeamColors
==============
*/

void CG_DrawTools_SetupTeamColors(void)
{
  ?CG_DrawTools_SetupTeamColors@@YAXXZ();
}

/*
==============
CG_DrawToolsMP_MiniMapCPRaidChanged
==============
*/

void __fastcall CG_DrawToolsMP_MiniMapCPRaidChanged(LocalClientNum_t localClientNum)
{
  ?CG_DrawToolsMP_MiniMapCPRaidChanged@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DrawToolsMP_TeamColor
==============
*/

void __fastcall CG_DrawToolsMP_TeamColor(const int team, vec4_t *outColor)
{
  ?CG_DrawToolsMP_TeamColor@@YAXHAEATvec4_t@@@Z(team, outColor);
}

/*
==============
CG_DrawToolsMP_RelativeTeamColor
==============
*/

void __fastcall CG_DrawToolsMP_RelativeTeamColor(const LocalClientNum_t localClientNum, const int clientNum, const char *prefix, vec4_t *outColor)
{
  ?CG_DrawToolsMP_RelativeTeamColor@@YAXW4LocalClientNum_t@@HPEBDAEATvec4_t@@@Z(localClientNum, clientNum, prefix, outColor);
}

/*
==============
CG_DrawToolsMP_RelativeTeamBackground
==============
*/

Material *__fastcall CG_DrawToolsMP_RelativeTeamBackground(const LocalClientNum_t localClientNum, const int clientNum)
{
  return ?CG_DrawToolsMP_RelativeTeamBackground@@YAPEAUMaterial@@W4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_ClientNumOwnedByLocalPlayer
==============
*/
_BOOL8 CG_ClientNumOwnedByLocalPlayer(const LocalClientNum_t localClientNum, const int clientNum)
{
  cg_t *LocalClientGlobals; 
  centity_t *Entity; 
  int otherEntityNum; 
  _BOOL8 result; 
  __int64 v8; 
  __int64 v9; 
  unsigned int m_characterCount; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v8) = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 67, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->predictedPlayerState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cgameGlob->predictedPlayerState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v8, m_characterCount) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v9) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(v8) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  Entity = CG_GetEntity(localClientNum, clientNum);
  result = 0;
  if ( (Entity->flags & 1) != 0 && Entity->nextState.eType == ET_AGENT )
  {
    otherEntityNum = Entity->nextState.otherEntityNum;
    if ( otherEntityNum >= 0 && otherEntityNum < cls.maxClients && LocalClientGlobals->predictedPlayerState.clientNum == otherEntityNum )
      return 1;
  }
  return result;
}

/*
==============
CG_DrawToolsMP_MiniMapCPRaidChanged
==============
*/
void CG_DrawToolsMP_MiniMapCPRaidChanged(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  __int64 v3; 
  const char *v4; 
  cg_t *LocalClientGlobals; 
  CgCompassSystemCPRaid *v6; 
  const char *v7; 
  const char *v9; 
  const char *v11; 
  const char *v13; 
  float v14; 
  float v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v20; 
  __int64 v27; 
  __int64 v28; 
  int v29; 
  int v30; 
  char *data_p; 
  GfxImage *output_material; 
  vec2_t mazeUpperLeft; 
  vec2_t mazeWorldSize; 

  v2 = DVARBOOL_isCompassCPRaidSecurityScreen;
  v3 = localClientNum;
  if ( !DVARBOOL_isCompassCPRaidSecurityScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "isCompassCPRaidSecurityScreen") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    data_p = (char *)CL_GetConfigString(15);
    v4 = Com_Parse((const char **)&data_p);
    if ( *v4 )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
      if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF_HALF )
      {
        v30 = (unsigned __int8)CgCompassSystem::ms_allocatedType;
        v29 = 2;
        LODWORD(v28) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 586, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v28, v29, v30) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgCompassSystem::ms_allocatedCount )
      {
        LODWORD(v28) = CgCompassSystem::ms_allocatedCount;
        LODWORD(v27) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 587, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      if ( !CgCompassSystem::ms_compassSystemArray[v3] )
      {
        LODWORD(v28) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 588, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", v28) )
          __debugbreak();
      }
      v6 = (CgCompassSystemCPRaid *)CgCompassSystem::ms_compassSystemArray[v3];
      LUI_Interface_RegisterMaterial(v4, (const GfxImage **)&output_material);
      v7 = Com_Parse((const char **)&data_p);
      *(double *)&_XMM0 = atof(v7);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      mazeUpperLeft.v[0] = *(float *)&_XMM1;
      v9 = Com_Parse((const char **)&data_p);
      *(double *)&_XMM0 = atof(v9);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      mazeUpperLeft.v[1] = *(float *)&_XMM1;
      v11 = Com_Parse((const char **)&data_p);
      *(double *)&_XMM0 = atof(v11);
      __asm { vcvtsd2ss xmm6, xmm0, xmm0 }
      v13 = Com_Parse((const char **)&data_p);
      *(double *)&_XMM0 = atof(v13);
      v14 = LocalClientGlobals->compassNorth.v[0];
      v15 = LocalClientGlobals->compassNorth.v[1];
      v17 = _XMM6;
      *(float *)&v17 = *(float *)&_XMM6 - mazeUpperLeft.v[0];
      v16 = v17;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      *(float *)&v17 = (float)((float)(*(float *)&_XMM6 - mazeUpperLeft.v[0]) * v15) - (float)((float)(*(float *)&_XMM1 - mazeUpperLeft.v[1]) * v14);
      _XMM6 = v17;
      v20 = v16;
      *(float *)&v20 = (float)(*(float *)&v16 * v14) + (float)((float)(*(float *)&_XMM1 - mazeUpperLeft.v[1]) * v15);
      _XMM4 = v20;
      _XMM3 = v20 ^ _xmm;
      __asm
      {
        vcmpeqss xmm1, xmm6, xmm0
        vblendvps xmm0, xmm6, xmm2, xmm1
      }
      mazeWorldSize.v[0] = *(float *)&_XMM0;
      __asm
      {
        vcmpeqss xmm0, xmm4, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm2, xmm0
      }
      mazeWorldSize.v[1] = *(float *)&_XMM0;
      CgCompassSystemCPRaid::InitMaze(v6, output_material, &mazeUpperLeft, &mazeWorldSize);
    }
  }
}

/*
==============
CG_DrawToolsMP_RelativeTeamBackground
==============
*/
Material *CG_DrawToolsMP_RelativeTeamBackground(const LocalClientNum_t localClientNum, const int clientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v7; 
  centity_t *Entity; 
  team_t team; 
  team_t v10; 
  characterInfo_t *v11; 
  team_t v12; 
  CgMLGSpectator *MLGSpectator; 
  team_t v14; 
  team_t v15; 
  bool v17; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 179, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
    __debugbreak();
  v7 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 182, ASSERT_TYPE_ASSERT, "(otherPlayer)", (const char *)&queryFormat, "otherPlayer") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, clientNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 185, ASSERT_TYPE_ASSERT, "(otherPlayerEnt)", (const char *)&queryFormat, "otherPlayerEnt") )
    __debugbreak();
  team = v7->team;
  if ( team == TEAM_SPECTATOR )
    return cgMedia.overheadNames.friendly;
  v10 = CharacterInfo->team;
  if ( v10 != TEAM_SPECTATOR || !LocalClientGlobals->predictedPlayerEntity || LocalClientGlobals->inKillCam )
  {
    if ( clientNum == LocalClientGlobals->predictedPlayerState.clientNum || Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, v10, &Entity->nextState, team) || CG_ClientNumOwnedByLocalPlayer(localClientNum, clientNum) )
      return cgMedia.overheadNames.friendly;
    return cgMedia.overheadNames.enemy;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, (POtherFlagsMP)33) )
  {
    v11 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerEntity->nextState.clientNum);
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 200, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
      __debugbreak();
    v12 = v11->team;
    if ( v12 == TEAM_SPECTATOR )
    {
      MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
      v14 = v7->team;
      v15 = CgMLGSpectator::GetTeam(MLGSpectator);
      if ( v15 && v15 == v14 )
        return cgMedia.overheadNames.friendly;
      return cgMedia.overheadNames.enemy;
    }
    v17 = Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, v12, &Entity->nextState, (const team_t)v7->team);
  }
  else
  {
    v17 = v7->team == TEAM_TWO;
  }
  if ( v17 )
    return cgMedia.overheadNames.friendly;
  return cgMedia.overheadNames.enemy;
}

/*
==============
CG_DrawToolsMP_RelativeTeamColor
==============
*/
void CG_DrawToolsMP_RelativeTeamColor(const LocalClientNum_t localClientNum, const int clientNum, const char *prefix, vec4_t *outColor)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  characterInfo_t *v10; 
  centity_t *Entity; 
  team_t team; 
  team_t v13; 
  centity_t *predictedPlayerEntity; 
  unsigned int v15; 
  characterInfo_t *v16; 
  team_t v17; 
  CgMLGSpectator *MLGSpectator; 
  team_t v19; 
  team_t v20; 
  bool v21; 
  const char *v22; 
  int v23; 
  __int64 v24; 
  int CharacterMaxCount; 
  char dest[40]; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 97, ASSERT_TYPE_ASSERT, "(localPlayer)", (const char *)&queryFormat, "localPlayer") )
    __debugbreak();
  v10 = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 100, ASSERT_TYPE_ASSERT, "(otherPlayer)", (const char *)&queryFormat, "otherPlayer") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, clientNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 103, ASSERT_TYPE_ASSERT, "(otherPlayerEnt)", (const char *)&queryFormat, "otherPlayerEnt") )
    __debugbreak();
  team = v10->team;
  if ( team != TEAM_SPECTATOR )
  {
    v13 = CharacterInfo->team;
    if ( v13 == TEAM_SPECTATOR && (predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity) != NULL && !LocalClientGlobals->inKillCam )
    {
      v15 = predictedPlayerEntity->nextState.clientNum;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v15 >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        CharacterMaxCount = ComCharacterLimits::GetCharacterMaxCount();
        LODWORD(v24) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 119, ASSERT_TYPE_ASSERT, "(unsigned)( spectatedPlayerNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "spectatedPlayerNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v24, CharacterMaxCount) )
          __debugbreak();
      }
      v16 = CgStatic::GetCharacterInfo(LocalClientStatics, v15);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 122, ASSERT_TYPE_ASSERT, "(spectatedPlayer)", (const char *)&queryFormat, "spectatedPlayer") )
        __debugbreak();
      v17 = v16->team;
      if ( v17 == TEAM_SPECTATOR )
      {
        MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
        v19 = v10->team;
        v20 = CgMLGSpectator::GetTeam(MLGSpectator);
        v21 = v20 && v20 == v19;
        v22 = "%s_MyTeam";
        if ( !v21 )
          v22 = "%s_EnemyTeam";
        goto LABEL_43;
      }
      if ( (v17 == TEAM_ZERO || v17 != v10->team) && !CG_ClientNumOwnedByLocalPlayer(localClientNum, clientNum) )
      {
LABEL_35:
        Com_sprintf(dest, 0x24ui64, "%s_EnemyTeam", prefix);
        goto LABEL_44;
      }
    }
    else
    {
      if ( clientNum != LocalClientGlobals->predictedPlayerState.clientNum && !Com_Teams_OnSameTeam(&LocalClientGlobals->predictedPlayerState, v13, &Entity->nextState, team) && !CG_ClientNumOwnedByLocalPlayer(localClientNum, clientNum) )
        goto LABEL_35;
      if ( clientNum < cls.maxClients && clientNum != LocalClientGlobals->predictedPlayerState.clientNum )
      {
        v23 = Party_ClientIsInMyParty(clientNum);
        v22 = "%s_MyParty";
        if ( v23 )
        {
LABEL_43:
          Com_sprintf(dest, 0x24ui64, v22, prefix);
          goto LABEL_44;
        }
      }
    }
    v22 = "%s_MyTeam";
    goto LABEL_43;
  }
  Com_sprintf(dest, 0x24ui64, "%s_Spectator", prefix);
LABEL_44:
  Dvar_GetUnpackedColorByName(dest, outColor);
}

/*
==============
CG_DrawToolsMP_TeamColor
==============
*/
void CG_DrawToolsMP_TeamColor(const int team, vec4_t *outColor)
{
  if ( team )
  {
    switch ( team )
    {
      case 1:
        Dvar_GetUnpackedColorByName("NSMQONORSQ", outColor);
        break;
      case 2:
        Dvar_GetUnpackedColorByName("NPTQOLNNNP", outColor);
        break;
      case 201:
        Dvar_GetUnpackedColorByName("LNTKMKNOKS", outColor);
        break;
      default:
        if ( (unsigned int)team > 0xC9 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_drawtools_mp.cpp", 41, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown team: %i", team) )
            __debugbreak();
        }
        else
        {
          *outColor = cg_teamColorsTable[team];
        }
        break;
    }
  }
  else
  {
    Dvar_GetUnpackedColorByName("OLNNTQKPNR", outColor);
  }
}

/*
==============
CG_DrawTools_SetupTeamColors
==============
*/

void __fastcall CG_DrawTools_SetupTeamColors(double _XMM0_8)
{
  int v1; 
  float *v2; 
  const char *ColumnValueForRow; 
  StringTable *v4; 
  const char *v6; 
  StringTable *v7; 
  const char *v9; 
  StringTable *v10; 
  const char *v12; 
  StringTable *tablePtr; 

  StringTable_GetAsset("teamColors.csv", (const StringTable **)&tablePtr);
  v1 = 0;
  v2 = &cg_teamColorsTable[0].v[1];
  do
  {
    ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, v1, 0);
    _XMM0_8 = atof(ColumnValueForRow);
    v4 = tablePtr;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(v2 - 1) = *(float *)&_XMM1;
    v6 = StringTable_GetColumnValueForRow(v4, v1, 1);
    _XMM0_8 = atof(v6);
    v7 = tablePtr;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *v2 = *(float *)&_XMM1;
    v9 = StringTable_GetColumnValueForRow(v7, v1, 2);
    _XMM0_8 = atof(v9);
    v10 = tablePtr;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    v2[1] = *(float *)&_XMM1;
    v12 = StringTable_GetColumnValueForRow(v10, v1, 3);
    _XMM0_8 = atof(v12);
    ++v1;
    v2 += 4;
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    *(v2 - 2) = *(float *)&_XMM1;
  }
  while ( v1 < 203 );
}

