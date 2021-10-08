/*
==============
Com_TeamsMP_GetBadGuyTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_TeamsMP_GetBadGuyTeamFlags()
{
  return ?Com_TeamsMP_GetBadGuyTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_TeamsSP_GetBadGuyTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_TeamsSP_GetBadGuyTeamFlags()
{
  return ?Com_TeamsSP_GetBadGuyTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_TeamsMP_GetAllTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_TeamsMP_GetAllTeamFlags()
{
  return ?Com_TeamsMP_GetAllTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_TeamsSP_GetAllCombatTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_TeamsSP_GetAllCombatTeamFlags()
{
  return ?Com_TeamsSP_GetAllCombatTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_TeamsSP_GetAllTeamFlags
==============
*/

const bitarray<224> *__fastcall Com_TeamsSP_GetAllTeamFlags()
{
  return ?Com_TeamsSP_GetAllTeamFlags@@YAAEBV?$bitarray@$0OA@@@XZ();
}

/*
==============
Com_TeamsMP_GetAllTeamFlags
==============
*/
const bitarray<224> *Com_TeamsMP_GetAllTeamFlags()
{
  unsigned int v0; 
  unsigned __int64 v1; 
  char v2; 
  unsigned __int64 v3; 
  const bitarray<224> *result; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.cpp", 37, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tteamMpAll is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( s_teamMpAllInitialized )
    return &s_teamMpAll;
  v0 = 203;
  v1 = 203i64;
  *(_QWORD *)s_teamMpAll.array = -1i64;
  *(_QWORD *)&s_teamMpAll.array[2] = -1i64;
  *(_QWORD *)&s_teamMpAll.array[4] = -1i64;
  s_teamMpAll.array[6] = -1;
  do
  {
    v2 = v0 & 0x1F;
    v3 = v1 >> 5;
    ++v0;
    ++v1;
    s_teamMpAll.array[v3] &= ~(0x80000000 >> v2);
  }
  while ( v0 < 0xE0 );
  result = &s_teamMpAll;
  s_teamMpAllInitialized = 1;
  return result;
}

/*
==============
Com_TeamsMP_GetBadGuyTeamFlags
==============
*/
bitarray<224> *Com_TeamsMP_GetBadGuyTeamFlags()
{
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.cpp", 91, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_MP_BAD_GUYS is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( !s_teamMpBadGuysInitialized )
  {
    s_teamMpBadGuys.array[0] = 0x40000000;
    *(_QWORD *)&s_teamMpBadGuys.array[1] = 0i64;
    *(_QWORD *)&s_teamMpBadGuys.array[3] = 0i64;
    *(_QWORD *)&s_teamMpBadGuys.array[5] = 0i64;
    s_teamMpBadGuysInitialized = 1;
  }
  return &s_teamMpBadGuys;
}

/*
==============
Com_TeamsSP_GetAllCombatTeamFlags
==============
*/
bitarray<224> *Com_TeamsSP_GetAllCombatTeamFlags()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.cpp", 56, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tteamSpAllCombat is SP only", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( !s_teamSpAllCombatInitialized )
  {
    s_teamSpAllCombat.array[0] = 1879048192;
    *(_QWORD *)&s_teamSpAllCombat.array[1] = 0i64;
    *(_QWORD *)&s_teamSpAllCombat.array[3] = 0i64;
    *(_QWORD *)&s_teamSpAllCombat.array[5] = 0i64;
    s_teamSpAllCombatInitialized = 1;
  }
  return &s_teamSpAllCombat;
}

/*
==============
Com_TeamsSP_GetAllTeamFlags
==============
*/
bitarray<224> *Com_TeamsSP_GetAllTeamFlags()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.cpp", 18, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tteamSpAll is SP only", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( !s_teamSpAllInitialized )
  {
    s_teamSpAll.array[0] = 2013265920;
    *(_QWORD *)&s_teamSpAll.array[1] = 0i64;
    *(_QWORD *)&s_teamSpAll.array[3] = 0i64;
    *(_QWORD *)&s_teamSpAll.array[5] = 0i64;
    s_teamSpAllInitialized = 1;
  }
  return &s_teamSpAll;
}

/*
==============
Com_TeamsSP_GetBadGuyTeamFlags
==============
*/
bitarray<224> *Com_TeamsSP_GetBadGuyTeamFlags()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.cpp", 74, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tteamSpBadGuys is SP only", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( !s_teamSpBadGuysInitialized )
  {
    s_teamSpBadGuys.array[0] = 1342177280;
    *(_QWORD *)&s_teamSpBadGuys.array[1] = 0i64;
    *(_QWORD *)&s_teamSpBadGuys.array[3] = 0i64;
    *(_QWORD *)&s_teamSpBadGuys.array[5] = 0i64;
    s_teamSpBadGuysInitialized = 1;
  }
  return &s_teamSpBadGuys;
}

