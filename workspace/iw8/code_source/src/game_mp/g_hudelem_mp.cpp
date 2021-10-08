/*
==============
G_HudElemMP_UpdateClient
==============
*/

void __fastcall G_HudElemMP_UpdateClient(gclient_s *client, int clientNum, hudelem_update_t which)
{
  ?G_HudElemMP_UpdateClient@@YAXPEAUgclient_s@@HW4hudelem_update_t@@@Z(client, clientNum, which);
}

/*
==============
G_HudElemMP_ClearClient
==============
*/

void __fastcall G_HudElemMP_ClearClient(gclient_s *client, hudelem_update_t which)
{
  ?G_HudElemMP_ClearClient@@YAXPEAUgclient_s@@W4hudelem_update_t@@@Z(client, which);
}

/*
==============
G_HudElemMP_ScrNewTeamHudElem
==============
*/

void __fastcall G_HudElemMP_ScrNewTeamHudElem(scrContext_t *scrContext)
{
  ?G_HudElemMP_ScrNewTeamHudElem@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
G_HudElemMP_ClearClient
==============
*/
void G_HudElemMP_ClearClient(gclient_s *client, hudelem_update_t which)
{
  char v2; 

  v2 = which;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 195, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( (v2 & 2) != 0 )
    HudElem_ClearClientSingle(client->ps.hud.current, 30);
  if ( (v2 & 1) != 0 )
    HudElem_ClearClientSingle(client->ps.hud.archival, 15);
}

/*
==============
G_HudElemMP_ScrNewTeamHudElem
==============
*/
void G_HudElemMP_ScrNewTeamHudElem(scrContext_t *scrContext)
{
  scr_string_t ConstString; 
  unsigned int v3; 
  const scr_string_t **v4; 
  const scr_string_t **v5; 
  unsigned int i; 
  const char *v7; 
  const char *v8; 

  ConstString = Scr_GetConstString(scrContext, 0);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v3 = 1;
    v4 = &S_TEAMS_SP_SCR_STRINGS_6[1];
    while ( ConstString != **v4 )
    {
      ++v3;
      ++v4;
      if ( v3 >= 5 )
      {
        if ( ConstString != scr_const.only_sky )
          goto LABEL_18;
        LOBYTE(v3) = 0;
        break;
      }
    }
  }
  else if ( ConstString == scr_const.freelook )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    LOBYTE(v3) = -53;
  }
  else
  {
    LOBYTE(v3) = 0;
    v5 = S_TEAMS_MP_SCR_STRINGS_6;
    for ( i = 0; i < 0xCB; ++i )
    {
      if ( ConstString == **v5 )
      {
        LOBYTE(v3) = i;
        goto LABEL_20;
      }
      ++v5;
    }
    if ( ConstString != scr_const.none && ConstString != scr_const.neutral && ConstString != scr_const.only_sky )
    {
LABEL_18:
      v7 = SL_ConvertToString(ConstString);
      v8 = j_va("unknown team '%s'", v7);
      Scr_Error(COM_ERR_3587, scrContext, v8);
      return;
    }
  }
LABEL_20:
  G_HudElem_ScrCreate(scrContext, 2047, (unsigned __int8)v3);
}

/*
==============
G_HudElemMP_UpdateClient
==============
*/
void G_HudElemMP_UpdateClient(gclient_s *client, int clientNum, hudelem_update_t which)
{
  __int64 v3; 
  char v4; 
  int v6; 
  int v8; 
  __int64 v9; 
  unsigned __int8 v10; 
  int v11; 
  team_t team; 
  int v13; 
  __int64 v14; 
  __int64 v16; 
  hudelem_t *v28; 
  __int64 v29; 
  __int64 v30; 
  hudelem_t *v31; 
  hudelem_t *i; 
  __int64 v33; 
  hudelem_t *v34; 
  __int64 v35; 
  int v36; 
  int v37; 

  v3 = clientNum;
  v4 = which;
  if ( (clientNum < 0 || clientNum >= level.maxclients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 49, ASSERT_TYPE_ASSERT, "( ( clientNum >= 0 && clientNum < level.maxclients ) )", "( clientNum ) = %i", clientNum) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v35) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 50, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( clientNum ))", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 51, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  v6 = 0;
  _R14 = &g_hudelems[0].clientNum;
  v8 = 0;
  v36 = 0;
  v37 = 0;
  v9 = 1080i64;
  do
  {
    if ( !*(_R14 - 46) )
      goto LABEL_44;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 64, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    v10 = *((_BYTE *)_R14 + 4);
    if ( v10 )
    {
      v11 = v10;
      team = client->sess.cs.team;
      if ( v11 != team && (!client->sess.cs.isMLGSpectator || (unsigned int)(team - 201) > 1 || v11 != client->sess.mlgSpectatingTeam) )
        goto LABEL_44;
    }
    if ( *_R14 != 2047 && *_R14 != (_DWORD)v3 )
      goto LABEL_44;
    if ( *((_BYTE *)_R14 + 5) )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( v6 >= 15 )
        {
          v13 = 1;
          v36 = 1;
          goto LABEL_45;
        }
        v14 = v6++;
        _RDX = &client->ps.hud.archival[v14];
LABEL_43:
        __asm
        {
          vmovups xmm0, xmmword ptr [r14-0B8h]
          vmovups xmmword ptr [rdx], xmm0
          vmovups xmm1, xmmword ptr [r14-0A8h]
          vmovups xmmword ptr [rdx+10h], xmm1
          vmovups xmm0, xmmword ptr [r14-98h]
          vmovups xmmword ptr [rdx+20h], xmm0
          vmovups xmm1, xmmword ptr [r14-88h]
          vmovups xmmword ptr [rdx+30h], xmm1
          vmovups xmm0, xmmword ptr [r14-78h]
          vmovups xmmword ptr [rdx+40h], xmm0
          vmovups xmm1, xmmword ptr [r14-68h]
          vmovups xmmword ptr [rdx+50h], xmm1
          vmovups xmm0, xmmword ptr [r14-58h]
          vmovups xmmword ptr [rdx+60h], xmm0
          vmovups xmm1, xmmword ptr [r14-48h]
          vmovups xmmword ptr [rdx+70h], xmm1
          vmovups xmm0, xmmword ptr [r14-38h]
          vmovups xmmword ptr [rdx+80h], xmm0
          vmovups xmm1, xmmword ptr [r14-28h]
          vmovups xmmword ptr [rdx+90h], xmm1
          vmovups xmm0, xmmword ptr [r14-18h]
          vmovups xmmword ptr [rdx+0A0h], xmm0
        }
        *(_QWORD *)&_RDX->soundID = *((_QWORD *)_R14 - 1);
      }
    }
    else if ( (v4 & 2) != 0 )
    {
      if ( v8 < 30 )
      {
        if ( client->sess.isInKillcam && !*((_BYTE *)_R14 + 6) )
          goto LABEL_44;
        v16 = v8++;
        _RDX = &client->ps.hud.current[v16];
        goto LABEL_43;
      }
      v37 = 1;
    }
LABEL_44:
    v13 = v36;
LABEL_45:
    _R14 += 48;
    --v9;
  }
  while ( v9 );
  if ( v13 == 1 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    if ( level.time % 1000 < level.frameDuration )
      Com_PrintWarning(0, "MAX_HUDELEMS_ARCHIVAL exceeded, skipping hudelem update.\n");
  }
  if ( v37 == 1 )
  {
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    if ( level.time % 1000 < level.frameDuration )
      Com_PrintWarning(0, "MAX_HUDELEMS_CURRENT exceeded, skipping hudelem update.\n");
  }
  if ( (v4 & 1) != 0 && v6 < 15 )
  {
    v28 = &client->ps.hud.archival[v6];
    while ( v28->type )
    {
      memset_0(&client->ps.hud.archival[v6], 0, sizeof(client->ps.hud.archival[v6]));
      if ( v28->type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 120, ASSERT_TYPE_ASSERT, "(client->ps.hud.archival[archivalCount].type == HE_TYPE_FREE)", (const char *)&queryFormat, "client->ps.hud.archival[archivalCount].type == HE_TYPE_FREE") )
        __debugbreak();
      ++v6;
      ++v28;
      if ( v6 >= 15 )
        goto LABEL_72;
    }
    v29 = v6;
    v30 = (unsigned int)(15 - v6);
    v31 = &client->ps.hud.archival[v29];
    do
    {
      if ( memcmp_0(v31, &g_dummyHudZero, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 127, ASSERT_TYPE_ASSERT, "(!I_memcmp( &client->ps.hud.archival[archivalCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) ))", (const char *)&queryFormat, "!I_memcmp( &client->ps.hud.archival[archivalCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) )") )
        __debugbreak();
      ++v31;
      --v30;
    }
    while ( v30 );
  }
LABEL_72:
  if ( (v4 & 2) != 0 && v8 < 30 )
  {
    for ( i = &client->ps.hud.current[v8]; i->type; ++i )
    {
      memset_0(&client->ps.hud.current[v8], 0, sizeof(client->ps.hud.current[v8]));
      if ( i->type )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 138, ASSERT_TYPE_ASSERT, "(client->ps.hud.current[currentCount].type == HE_TYPE_FREE)", (const char *)&queryFormat, "client->ps.hud.current[currentCount].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      if ( ++v8 >= 30 )
        return;
    }
    v33 = (unsigned int)(30 - v8);
    v34 = &client->ps.hud.current[v8];
    do
    {
      if ( memcmp_0(v34, &g_dummyHudZero, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 145, ASSERT_TYPE_ASSERT, "(!I_memcmp( &client->ps.hud.current[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) ))", (const char *)&queryFormat, "!I_memcmp( &client->ps.hud.current[currentCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) )") )
        __debugbreak();
      ++v34;
      --v33;
    }
    while ( v33 );
  }
}

/*
==============
HudElem_ClearClientSingle
==============
*/
void HudElem_ClearClientSingle(hudelem_t *elems, int max)
{
  int v4; 
  hudelem_t *i; 
  hudelem_t *v6; 
  __int64 v7; 

  if ( max > 0 )
  {
    v4 = 0;
    for ( i = elems; i->type; ++i )
    {
      memset_0(&elems[v4], 0, sizeof(hudelem_t));
      if ( i->type )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 180, ASSERT_TYPE_ASSERT, "(elems[elemCount].type == HE_TYPE_FREE)", (const char *)&queryFormat, "elems[elemCount].type == HE_TYPE_FREE") )
          __debugbreak();
      }
      if ( ++v4 >= max )
        return;
    }
    if ( v4 < max )
    {
      v6 = &elems[v4];
      v7 = (unsigned int)(max - v4);
      do
      {
        if ( memcmp_0(v6, &g_dummyHudZero, 0xB8ui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_hudelem_mp.cpp", 187, ASSERT_TYPE_ASSERT, "(!I_memcmp( &elems[elemCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) ))", (const char *)&queryFormat, "!I_memcmp( &elems[elemCount], &g_dummyHudZero, sizeof( g_dummyHudZero ) )") )
          __debugbreak();
        ++v6;
        --v7;
      }
      while ( v7 );
    }
  }
}

