/*
==============
Com_Teams_TeamFromString
==============
*/

bool __fastcall Com_Teams_TeamFromString(scr_string_t team, team_t *outTeam)
{
  return ?Com_Teams_TeamFromString@@YA_NW4scr_string_t@@AEAW4team_t@@@Z(team, outTeam);
}

/*
==============
Com_Teams_GetEnemyTeamFlags
==============
*/

bitarray<224> *__fastcall Com_Teams_GetEnemyTeamFlags(bitarray<224> *result, team_t team)
{
  return ?Com_Teams_GetEnemyTeamFlags@@YA?AV?$bitarray@$0OA@@@W4team_t@@@Z(result, team);
}

/*
==============
Com_TeamsMP_GetFreeLookTeam
==============
*/

team_t __fastcall Com_TeamsMP_GetFreeLookTeam()
{
  return ?Com_TeamsMP_GetFreeLookTeam@@YA?AW4team_t@@XZ();
}

/*
==============
Com_Teams_GetAllTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_Teams_GetAllTeamFlags()
{
  return ?Com_Teams_GetAllTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_Teams_OnSameTeam
==============
*/

bool __fastcall Com_Teams_OnSameTeam(const playerState_s *const playerState, const team_t playerTeam, const entityState_t *const otherEntityState, const team_t otherEntityTeam)
{
  return ?Com_Teams_OnSameTeam@@YA_NQEBUplayerState_s@@W4team_t@@QEBUentityState_t@@1@Z(playerState, playerTeam, otherEntityState, otherEntityTeam);
}

/*
==============
Com_Teams_GetTeamFlag
==============
*/

bitarray<224> *__fastcall Com_Teams_GetTeamFlag(bitarray<224> *result, team_t team)
{
  return ?Com_Teams_GetTeamFlag@@YA?AV?$bitarray@$0OA@@@W4team_t@@@Z(result, team);
}

/*
==============
Com_Teams_GetEnemyTeamFlags
==============
*/
bitarray<224> *Com_Teams_GetEnemyTeamFlags(bitarray<224> *result, team_t team)
{
  bool v4; 
  bool v5; 
  const bitarray<224> *AllCombatTeamFlags; 

  *(_QWORD *)result->array = 0i64;
  *(_QWORD *)&result->array[2] = 0i64;
  *(_QWORD *)&result->array[4] = 0i64;
  result->array[6] = 0;
  v4 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80);
  v5 = v4 && team == TEAM_FIVE;
  if ( (!v4 || team != TEAM_FOUR) && !v5 )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
      AllCombatTeamFlags = Com_TeamsSP_GetAllCombatTeamFlags();
    else
      AllCombatTeamFlags = Com_TeamsMP_GetAllTeamFlags();
    *(_OWORD *)result->array = *(_OWORD *)AllCombatTeamFlags->array;
    *(double *)&result->array[4] = *(double *)&AllCombatTeamFlags->array[4];
    result->array[6] = AllCombatTeamFlags->array[6];
    result->array[6] &= ~0x100000u;
    if ( team )
      bitarray_base<bitarray<224>>::resetBit(result, team);
    if ( v4 )
      result->array[0] &= ~0x8000000u;
    result->array[6] &= 0xFF9FFFFF;
  }
  return result;
}

/*
==============
Com_Teams_TeamFromString
==============
*/
bool Com_Teams_TeamFromString(scr_string_t team, team_t *outTeam)
{
  team_t v4; 
  const scr_string_t **v5; 
  bool result; 
  team_t v7; 
  const scr_string_t **v8; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v4 = TEAM_ONE;
    v5 = &S_TEAMS_SP_SCR_STRINGS[1];
    while ( team != **v5 )
    {
      ++v4;
      ++v5;
      if ( (unsigned int)v4 >= TEAM_FIVE )
        goto LABEL_5;
    }
    *outTeam = v4;
    return 1;
  }
  else if ( team == scr_const.freelook )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    *outTeam = TEAM_MP_NUM_TEAMS;
    return 1;
  }
  else
  {
    v7 = TEAM_ZERO;
    v8 = S_TEAMS_MP_SCR_STRINGS;
    do
    {
      if ( team == **v8 )
      {
        result = 1;
        *outTeam = v7;
        return result;
      }
      ++v7;
      ++v8;
    }
    while ( (unsigned int)v7 < TEAM_MP_NUM_TEAMS );
    if ( team != scr_const.none && team != scr_const.neutral )
    {
LABEL_5:
      if ( team != scr_const.only_sky )
        return 0;
    }
    *outTeam = TEAM_ZERO;
    return 1;
  }
}

/*
==============
Com_Teams_GetTeamFlag
==============
*/
bitarray<224> *Com_Teams_GetTeamFlag(bitarray<224> *result, team_t team)
{
  unsigned __int64 v2; 
  int v6; 

  v2 = (unsigned int)team;
  *(_QWORD *)result->array = 0i64;
  *(_QWORD *)&result->array[2] = 0i64;
  *(_QWORD *)&result->array[4] = 0i64;
  result->array[6] = 0;
  if ( (unsigned int)team >= (TEAM_HUNDRED_NINETY_TWO|TEAM_THIRTY_TWO) )
  {
    v6 = 224;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", team, v6) )
      __debugbreak();
  }
  result->array[v2 >> 5] |= 0x80000000 >> (v2 & 0x1F);
  return result;
}

/*
==============
Com_TeamsMP_GetFreeLookTeam
==============
*/
__int64 Com_TeamsMP_GetFreeLookTeam()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  return 203i64;
}

/*
==============
Com_Teams_GetAllTeamFlags
==============
*/
const bitarray<224> *Com_Teams_GetAllTeamFlags()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
    return Com_TeamsSP_GetAllTeamFlags();
  else
    return Com_TeamsMP_GetAllTeamFlags();
}

/*
==============
Com_Teams_OnSameTeam
==============
*/
bool Com_Teams_OnSameTeam(const playerState_s *const playerState, const team_t playerTeam, const entityState_t *const otherEntityState, const team_t otherEntityTeam)
{
  if ( !playerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
    __debugbreak();
  if ( !otherEntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 164, ASSERT_TYPE_ASSERT, "(otherEntityState)", (const char *)&queryFormat, "otherEntityState") )
    __debugbreak();
  return playerTeam && playerTeam == otherEntityTeam;
}

