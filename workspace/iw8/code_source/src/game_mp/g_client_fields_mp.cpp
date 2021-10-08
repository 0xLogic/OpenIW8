/*
==============
G_ClientFieldsMP_Init
==============
*/

void G_ClientFieldsMP_Init(void)
{
  ?G_ClientFieldsMP_Init@@YAXXZ();
}

/*
==============
ClientScr_SetRadarMode
==============
*/
void ClientScr_SetRadarMode(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  scr_string_t ConstString; 
  const char *v6; 
  const char *v7; 
  const char *v8; 
  const char *v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 24, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  if ( ConstString == scr_const.normal_radar )
  {
    pSelf->sess.radarMode = 0;
  }
  else if ( ConstString == scr_const.fast_radar )
  {
    pSelf->sess.radarMode = 1;
  }
  else if ( ConstString == scr_const.constant_radar )
  {
    pSelf->sess.radarMode = 2;
  }
  else if ( ConstString == scr_const.slow_radar )
  {
    pSelf->sess.radarMode = 3;
  }
  else
  {
    v6 = SL_ConvertToString(scr_const.fast_radar);
    v7 = SL_ConvertToString(scr_const.normal_radar);
    v8 = SL_ConvertToString(ConstString);
    v9 = j_va("'%s' is an illegal radar mode.  Must be '%s' or '%s'", v8, v7, v6);
    Scr_Error(COM_ERR_3915, scrContext, v9);
  }
}

/*
==============
ClientScr_GetRadarMode
==============
*/
void ClientScr_GetRadarMode(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int radarMode; 
  __int64 v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 56, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  radarMode = pSelf->sess.radarMode;
  if ( radarMode )
  {
    switch ( radarMode )
    {
      case 1:
        Scr_AddConstString(scrContext, scr_const.fast_radar);
        break;
      case 2:
        Scr_AddConstString(scrContext, scr_const.constant_radar);
        break;
      case 3:
        Scr_AddConstString(scrContext, scr_const.slow_radar);
        break;
      default:
        LODWORD(v6) = pSelf->sess.radarMode;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 67, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown radar mode %i", v6) )
          __debugbreak();
        break;
    }
  }
  else
  {
    Scr_AddConstString(scrContext, scr_const.normal_radar);
  }
}

/*
==============
ClientScr_SetSessionTeam
==============
*/
void ClientScr_SetSessionTeam(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  scr_string_t ConstString; 
  __int64 v6; 
  team_t v7; 
  const scr_string_t **v8; 
  unsigned int v9; 
  const scr_string_t **v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  ComErrorCode v14; 
  const char *v15; 
  char v16; 
  GameStateInfo *v17; 
  MatchRules *matchRules; 
  const char *GameType; 
  char v20; 
  char v21; 
  signed __int64 v22; 
  __int64 v23; 
  unsigned int clientIndex; 
  const char *v25; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 75, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  v6 = 0i64;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    v7 = TEAM_ONE;
    v8 = &S_TEAMS_SP_SCR_STRINGS_5[1];
    while ( ConstString != **v8 )
    {
      ++v7;
      ++v8;
      if ( (unsigned int)v7 >= TEAM_FIVE )
      {
        if ( ConstString != scr_const.only_sky )
          goto LABEL_22;
        goto LABEL_9;
      }
    }
  }
  else
  {
    if ( ConstString != scr_const.freelook )
    {
      v9 = 0;
      v10 = S_TEAMS_MP_SCR_STRINGS_5;
      do
      {
        if ( ConstString == **v10 )
        {
          v7 = v9;
          goto LABEL_24;
        }
        ++v9;
        ++v10;
      }
      while ( v9 < 0xCB );
      if ( ConstString == scr_const.none || ConstString == scr_const.neutral )
      {
LABEL_9:
        v7 = TEAM_ZERO;
        goto LABEL_24;
      }
      if ( ConstString == scr_const.only_sky )
      {
        v7 = TEAM_ZERO;
        goto LABEL_24;
      }
LABEL_22:
      v11 = SL_ConvertToString(ConstString);
      v12 = j_va("unknown team '%s'", v11);
      Scr_Error(COM_ERR_3916, scrContext, v12);
      return;
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    v7 = TEAM_MP_NUM_TEAMS;
  }
LABEL_24:
  if ( pSelf - level.clients >= level.maxclients )
  {
    v13 = "client is not pointing to the level.clients array";
    v14 = COM_ERR_3917;
LABEL_44:
    Scr_Error(v14, scrContext, v13);
    return;
  }
  v15 = SL_ConvertToString(ConstString);
  Com_Printf(16, "sessionteam changed by script for client %d, new team is %s\n", (unsigned int)pSelf->sess.cs.clientIndex, v15);
  v16 = !SV_ClientMP_HasAssignedTeam(pSelf->sess.cs.clientIndex) || Live_IsLobbyTeamSelectEnabled();
  v17 = GameStateInfo_Get();
  if ( v17 )
  {
    matchRules = v17->matchRules;
    if ( matchRules )
    {
      GameType = BG_MatchRulesData_GetGameType(matchRules);
      if ( GameType )
      {
        while ( 1 )
        {
          v20 = GameType[v6++];
          if ( v20 != aInfect[v6 - 1] )
            break;
          if ( v6 == 7 )
          {
            v21 = 1;
            goto LABEL_37;
          }
        }
      }
      v21 = 0;
LABEL_37:
      v16 |= v21;
    }
  }
  if ( !v16 )
  {
    clientIndex = pSelf->sess.cs.clientIndex;
    v25 = SL_ConvertToString(ConstString);
    v13 = j_va("Failed to set sessionTeam string to '%s' for client %i.", v25, clientIndex);
    v14 = COM_ERR_3918;
    goto LABEL_44;
  }
  pSelf->sess.cs.team = v7;
  v22 = (char *)pSelf - (char *)level.clients;
  v23 = v22 / 64592;
  if ( (unsigned __int64)(v22 / 64592 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v23, "signed", v22 / 64592) )
    __debugbreak();
  G_ClientMP_ClientStateTeamChanged(v23);
  G_HeadIcons_SetPlayerDirty(v23);
  G_MainMP_CalculateRanks();
  SV_ClientMP_SetAssignedTeam(v23, v7);
  Com_Printf(16, "sessionteam updated successfully.\n");
}

/*
==============
ClientScr_GetSessionTeam
==============
*/
void ClientScr_GetSessionTeam(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  __int64 team; 
  const scr_string_t **v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 125, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  team = pSelf->sess.cs.team;
  if ( !(_DWORD)team )
  {
    Scr_AddConstString(scrContext, scr_const.none);
    return;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
  {
    if ( (int)team < 0 || (unsigned int)team >= 6 )
    {
      LODWORD(v9) = team;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 274, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_SP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_SP_SCR_STRINGS_5[team];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_SP_SCR_STRINGS[team] ) )";
    v8 = 275;
  }
  else
  {
    if ( (int)team < 0 || (unsigned int)team >= 0xCB )
    {
      LODWORD(v9) = team;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 283, ASSERT_TYPE_ASSERT, "( ( team >= TEAM_BAD && team < ( sizeof( *array_counter( S_TEAMS_MP_SCR_STRINGS ) ) + 0 ) ) )", "( team ) = %i", v9) )
        __debugbreak();
    }
    v6 = &S_TEAMS_MP_SCR_STRINGS_5[team];
    if ( *v6 )
      goto LABEL_21;
    v7 = "( ( S_TEAMS_MP_SCR_STRINGS[team] ) )";
    v8 = 284;
  }
  LODWORD(v9) = team;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", v8, ASSERT_TYPE_ASSERT, v7, "( team ) = %i", v9) )
    __debugbreak();
LABEL_21:
  Scr_AddConstString(scrContext, **v6);
}

/*
==============
ClientScr_SetSessionState
==============
*/
void ClientScr_SetSessionState(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  scr_string_t ConstString; 
  sessionState_t sessionState; 
  sessionState_t v7; 
  const char *v8; 
  const char *v9; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 141, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 142, ASSERT_TYPE_ASSERT, "(pSelf->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "pSelf->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  ConstString = Scr_GetConstString(scrContext, 0);
  sessionState = pSelf->sess.sessionState;
  if ( ConstString == scr_const.playing )
  {
    v7 = SESS_STATE_PLAYING;
    pSelf->sess.sessionState = SESS_STATE_PLAYING;
  }
  else if ( ConstString == scr_const.dead )
  {
    v7 = SESS_STATE_DEAD;
    pSelf->sess.sessionState = SESS_STATE_DEAD;
  }
  else if ( ConstString == scr_const.spectator )
  {
    v7 = SESS_STATE_SPECTATOR;
    pSelf->sess.sessionState = SESS_STATE_SPECTATOR;
  }
  else if ( ConstString == scr_const.intermission )
  {
    v7 = SESS_STATE_INTERMISSION;
    pSelf->sess.sessionState = SESS_STATE_INTERMISSION;
  }
  else
  {
    v8 = SL_ConvertToString(ConstString);
    v9 = j_va("'%s' is an illegal sessionstate string. Must be playing, dead, spectator, or intermission.", v8);
    Scr_Error(COM_ERR_3919, scrContext, v9);
    v7 = pSelf->sess.sessionState;
  }
  G_ActiveMP_SessionStateHasChanged(sessionState, v7, pSelf);
}

/*
==============
ClientScr_GetSessionState
==============
*/
void ClientScr_GetSessionState(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  sessionState_t sessionState; 
  __int32 v6; 
  __int32 v7; 
  scr_string_t intermission; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 174, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( pSelf->sess.connected == CON_DISCONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(pSelf->sess.connected != CON_DISCONNECTED)", (const char *)&queryFormat, "pSelf->sess.connected != CON_DISCONNECTED") )
    __debugbreak();
  sessionState = pSelf->sess.sessionState;
  if ( sessionState )
  {
    v6 = sessionState - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          return;
        intermission = scr_const.intermission;
      }
      else
      {
        intermission = scr_const.spectator;
      }
    }
    else
    {
      intermission = scr_const.dead;
    }
  }
  else
  {
    intermission = scr_const.playing;
  }
  Scr_AddConstString(scrContext, intermission);
}

/*
==============
ClientScr_SetMaxHealth
==============
*/
void ClientScr_SetMaxHealth(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int Int; 
  int v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 199, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  pSelf->sess.maxHealth = Int;
  if ( Int < 1 )
  {
    Int = 1;
    pSelf->sess.maxHealth = 1;
  }
  v6 = pSelf->ps.stats[0];
  if ( v6 > Int )
  {
    pSelf->ps.stats[0] = Int;
    v6 = Int;
  }
  g_entities[pSelf - level.clients].health = v6;
  pSelf->ps.stats[2] = pSelf->sess.maxHealth;
}

/*
==============
ClientScr_SetScore
==============
*/
void ClientScr_SetScore(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int Int; 
  const char *v6; 

  Int = Scr_GetInt(scrContext, 0);
  if ( Int < 0 )
    Scr_Error(COM_ERR_3920, scrContext, "ClientScr_SetScore is attempting to truncate a negative number into an F_USHORT (which is unsigned)");
  if ( Int > 0xFFFF )
  {
    v6 = j_va("ClientScr_SetScore is attempting to set the score to %d  but the maximum value is %d\n", (unsigned int)Int, 0xFFFFi64);
    Scr_Error(COM_ERR_3921, scrContext, v6);
  }
  if ( (Int < 0 || (unsigned int)Int > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)Int, "signed", Int) )
    __debugbreak();
  pSelf->sess.scores.score = Int;
  G_MainMP_CalculateRanks();
}

/*
==============
ClientScr_SetForceSpectatorClient
==============
*/
void ClientScr_SetForceSpectatorClient(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int Int; 
  int v6; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 234, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  if ( Int < -1 || Int >= level.maxclients )
    Scr_Error(COM_ERR_3922, scrContext, "forceSpectatorClient can only be set to -1, or a valid client number");
  pSelf->sess.forceSpectatorClient = v6;
}

/*
==============
ClientScr_SetKillCamEntity
==============
*/
void ClientScr_SetKillCamEntity(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int Int; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 249, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  if ( (unsigned int)(Int + 1) > 0x800 )
    Scr_Error(COM_ERR_3923, scrContext, "killcamentity can only be set to -1, or a valid entity number");
  pSelf->sess.killCamEntity = Int;
}

/*
==============
ClientScr_SetKillCamLookAtEntity
==============
*/
void ClientScr_SetKillCamLookAtEntity(scrContext_t *scrContext, gclient_s *self, const GClientField *field)
{
  unsigned int Int; 

  if ( !self && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 264, ASSERT_TYPE_ASSERT, "(self)", (const char *)&queryFormat, "self") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  if ( Int > 0x7FF )
    Scr_Error(COM_ERR_3924, scrContext, "killcamentitylookat can only be set to a valid entity number");
  self->sess.killCamLookAtEntity = Int;
}

/*
==============
ClientScr_SetSpectateKillcam
==============
*/
void ClientScr_SetSpectateKillcam(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  int Int; 
  int v6; 
  BandwidthMonitoringEventTypes v7; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 275, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Int = Scr_GetInt(scrContext, 0);
  v6 = Int;
  if ( pSelf->sess.isInKillcam )
  {
    if ( !Int )
    {
      v7 = EVENT_CLIENT_LEFT_KILLCAM;
      goto LABEL_9;
    }
  }
  else if ( Int )
  {
    v7 = EVENT_CLIENT_ENTERED_KILLCAM;
LABEL_9:
    SV_LogBandwidthEvent_GameClient(v7, pSelf);
  }
  pSelf->sess.isInKillcam = v6;
}

/*
==============
ClientScr_SetStatusIcon
==============
*/
void ClientScr_SetStatusIcon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  const char *String; 
  const char *v6; 
  const char *v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int outIndex; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 297, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  String = Scr_GetString(scrContext, 0);
  v6 = String;
  if ( *String )
  {
    if ( !NetConstStrings_GetIndexPlusOneFromName(NETCONSTSTRINGTYPE_STATUSICON, String, &outIndex) )
    {
      v7 = j_va("Unknown statusicon material '%s'. Use precache_statusicon.", v6);
      Scr_Error(COM_ERR_3925, scrContext, v7);
    }
    v8 = outIndex;
    if ( !outIndex )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 312, ASSERT_TYPE_ASSERT, "( iconIndex != 0 )", (const char *)&queryFormat, "iconIndex != 0") )
        __debugbreak();
      v8 = outIndex;
    }
    if ( v8 >= 0x20 )
    {
      LODWORD(v9) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 315, ASSERT_TYPE_ASSERT, "(unsigned)( iconIndex ) < (unsigned)( 32 )", "iconIndex doesn't index MAX_STATUS_ICONS_GAME_CACHE\n\t%i not in [0, %i)", v9, 32) )
        __debugbreak();
      v8 = outIndex;
    }
    if ( v8 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,unsigned int>(unsigned int)", "unsigned", (unsigned __int8)v8, "unsigned", v8) )
      __debugbreak();
    pSelf->sess.scores.status = v8;
  }
  else
  {
    pSelf->sess.scores.status = 0;
  }
}

/*
==============
ClientScr_GetStatusIcon
==============
*/
void ClientScr_GetStatusIcon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  unsigned __int8 status; 
  char *outName; 

  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 324, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  status = pSelf->sess.scores.status;
  if ( status && NetConstStrings_GetNameFromIndexPlusOne(NETCONSTSTRINGTYPE_STATUSICON, status, (const char **)&outName) )
    Scr_AddString(scrContext, outName);
  else
    Scr_AddConstString(scrContext, scr_const._);
}

/*
==============
G_ClientFieldsMP_SetArchiveTime
==============
*/
void G_ClientFieldsMP_SetArchiveTime(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  char v10; 
  const char *v12; 
  __int64 v22; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 339, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 340, ASSERT_TYPE_ASSERT, "( level.frameDuration )", (const char *)&queryFormat, "level.frameDuration") )
    __debugbreak();
  *(double *)&_XMM0 = Scr_GetFloat(scrContext, 0);
  __asm
  {
    vmulss  xmm6, xmm0, cs:__real@447a0000
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm6, xmm1
  }
  if ( v10 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v12 = j_va("archiveTime must be a positive number. requested %f ms", _RDX);
    Scr_Error(COM_ERR_3926, scrContext, v12);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm2, xmm6, xmm0
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm3, xmm1, xmm2
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm3, 1
    vcvttss2si ebx, xmm4
  }
  if ( _EBX < 0 )
  {
    LODWORD(v22) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 354, ASSERT_TYPE_ASSERT, "( serverFrameCount ) >= ( 0 )", "serverFrameCount >= 0\n\t%i, %i", v22, 0i64) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  pSelf->sess.archiveTime = _EBX * level.frameDuration;
}

/*
==============
G_ClientFieldsMP_GetArchiveTime
==============
*/
void G_ClientFieldsMP_GetArchiveTime(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 363, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+55DCh]
    vmulss  xmm1, xmm0, cs:__real@3a83126f; value
  }
  Scr_AddFloat(scrContext, *(float *)&_XMM1);
}

/*
==============
G_ClientFieldsMP_SetUseArchivePOTG
==============
*/
void G_ClientFieldsMP_SetUseArchivePOTG(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 371, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  pSelf->sess.archiveUsePOTG = Scr_GetInt(scrContext, 0) != 0;
}

/*
==============
G_ClientFieldsMP_GetUseArchivePOTG
==============
*/
void G_ClientFieldsMP_GetUseArchivePOTG(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 378, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Scr_AddInt(scrContext, pSelf->sess.archiveUsePOTG);
}

/*
==============
G_ClientFieldsMP_SetPSOffsetTime
==============
*/
void G_ClientFieldsMP_SetPSOffsetTime(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  char v10; 
  const char *v13; 
  __int64 v22; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 386, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 387, ASSERT_TYPE_ASSERT, "( level.frameDuration )", (const char *)&queryFormat, "level.frameDuration") )
    __debugbreak();
  Scr_GetInt(scrContext, 0);
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v10 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vmovq   rdx, xmm1
    }
    v13 = j_va("psOffsetTime must be a positive number. requested %f ms", _RDX);
    Scr_Error(COM_ERR_3927, scrContext, v13);
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
    vdivss  xmm1, xmm6, xmm0
    vaddss  xmm3, xmm1, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm1, xmm0, xmm3, 1
    vcvttss2si ebx, xmm1
  }
  if ( _EBX < 0 )
  {
    LODWORD(v22) = _EBX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 400, ASSERT_TYPE_ASSERT, "( serverFrameCount ) >= ( 0 )", "serverFrameCount >= 0\n\t%i, %i", v22, 0i64) )
      __debugbreak();
  }
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  pSelf->sess.psOffsetTime = _EBX * level.frameDuration;
}

/*
==============
G_ClientFieldsMP_GetPSOffsetTime
==============
*/
void G_ClientFieldsMP_GetPSOffsetTime(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 408, ASSERT_TYPE_ASSERT, "( pSelf )", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Scr_AddInt(scrContext, pSelf->sess.psOffsetTime);
}

/*
==============
ClientScr_GetName
==============
*/
void ClientScr_GetName(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  if ( !pSelf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_client_fields_mp.cpp", 415, ASSERT_TYPE_ASSERT, "(pSelf)", (const char *)&queryFormat, "pSelf") )
    __debugbreak();
  Com_PlayerUtils_ColorizeNameAndClanTag(pSelf->sess.cs.name, pSelf->sess.cs.clanAbbrev, pSelf->sess.cs.clanTagType, playerName, 0x2Fui64, 0x37u);
  Scr_AddString(scrContext, playerName);
}

/*
==============
GScr_ClientFieldsMP_GetCurrentWeapon
==============
*/
void GScr_ClientFieldsMP_GetCurrentWeapon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  GScr_ClientFields_GetCurrentWeapon(scrContext, pSelf, 0, 0, pField);
}

/*
==============
GScr_ClientFieldsMP_GetCurrentPrimaryWeapon
==============
*/
void GScr_ClientFieldsMP_GetCurrentPrimaryWeapon(scrContext_t *scrContext, gclient_s *pSelf, const GClientField *pField)
{
  GScr_ClientFields_GetCurrentWeapon(scrContext, pSelf, 1, 0, pField);
}

/*
==============
G_ClientFieldsMP_Init
==============
*/
void G_ClientFieldsMP_Init(void)
{
  GScr_ClientFields_InitFields(s_clientMP_fields, 0x2Cu);
}

