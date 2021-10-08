/*
==============
SV_OnlineTournament_RoundTimeUpdated
==============
*/

void __fastcall SV_OnlineTournament_RoundTimeUpdated(int roundTime, MatchTimeMode timeMode)
{
  ?SV_OnlineTournament_RoundTimeUpdated@@YAXHW4MatchTimeMode@@@Z(roundTime, timeMode);
}

/*
==============
SV_OnlineTournament_Frame
==============
*/

void SV_OnlineTournament_Frame(void)
{
  ?SV_OnlineTournament_Frame@@YAXXZ();
}

/*
==============
SV_OnlineTournament_GetMMLobbyID
==============
*/

unsigned __int64 __fastcall SV_OnlineTournament_GetMMLobbyID()
{
  return ?SV_OnlineTournament_GetMMLobbyID@@YA_KXZ();
}

/*
==============
SV_OnlineTournament_GetTournamentID
==============
*/

unsigned __int64 __fastcall SV_OnlineTournament_GetTournamentID()
{
  return ?SV_OnlineTournament_GetTournamentID@@YA_KXZ();
}

/*
==============
SV_OnlineTournament_KillUpdate
==============
*/

void __fastcall SV_OnlineTournament_KillUpdate(const char *victimXuidString, const char *killerXuidString, unsigned __int16 weapon, bool headShot)
{
  ?SV_OnlineTournament_KillUpdate@@YAXPEBD0G_N@Z(victimXuidString, killerXuidString, weapon, headShot);
}

/*
==============
SV_OnlineTournament_GetTeamForPlayer
==============
*/

team_t __fastcall SV_OnlineTournament_GetTeamForPlayer(XUID xuid)
{
  return ?SV_OnlineTournament_GetTeamForPlayer@@YA?AW4team_t@@UXUID@@@Z(xuid);
}

/*
==============
SV_OnlineTournament_IsInTournament
==============
*/

bool __fastcall SV_OnlineTournament_IsInTournament()
{
  return ?SV_OnlineTournament_IsInTournament@@YA_NXZ();
}

/*
==============
SV_OnlineTournament_TeamScoreUpdated
==============
*/

void __fastcall SV_OnlineTournament_TeamScoreUpdated(TournamentTeam team, unsigned __int16 score)
{
  ?SV_OnlineTournament_TeamScoreUpdated@@YAXW4TournamentTeam@@G@Z(team, score);
}

/*
==============
SV_OnlineTournament_MatchComplete
==============
*/

void __fastcall SV_OnlineTournament_MatchComplete(TournamentTeam winner)
{
  ?SV_OnlineTournament_MatchComplete@@YAXW4TournamentTeam@@@Z(winner);
}

/*
==============
SV_OnlineTournament_Init
==============
*/

void SV_OnlineTournament_Init(void)
{
  ?SV_OnlineTournament_Init@@YAXXZ();
}

/*
==============
SV_OnlineTournament_Frame
==============
*/
void SV_OnlineTournament_Frame(void)
{
  unsigned __int64 CurrentLobbyId; 
  int v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  gentity_s *v5; 
  gclient_s *client; 
  team_t team; 
  char *fmt; 
  __int64 v9; 
  __int64 v10; 
  char _Buffer[256]; 

  if ( OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    if ( BYTE1(SvGameGlobals::ms_allocatedType) != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_persistent_globals_mp.h", 166, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
      __debugbreak();
    if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !BYTE2(SvPersistentGlobals::ms_svPersistent[4].m_skelMemSize) )
    {
      CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
      v1 = 0;
      v2 = CurrentLobbyId;
      if ( s_matchWinner )
      {
        j_sprintf(_Buffer, "tournament_sendresult %llx %d\n", CurrentLobbyId, (unsigned int)s_matchWinner);
        Com_Printf(131097, "exec: %s", _Buffer);
        Cbuf_AddText(LOCAL_CLIENT_0, _Buffer);
        s_matchWinner = TEAM_ZERO;
      }
      if ( level.maxclients > 0 )
      {
        v3 = 0i64;
        v4 = 0i64;
        do
        {
          if ( (unsigned int)v1 >= 0x800 )
          {
            LODWORD(v10) = 2048;
            LODWORD(v9) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v3].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( g_entityIsInUse[v4] )
          {
            v5 = g_entities;
            client = g_entities[v3].client;
            if ( client )
            {
              team = client->sess.cs.team;
              if ( team != TEAM_SPECTATOR )
              {
                LODWORD(v9) = g_entities[v3].health;
                LODWORD(fmt) = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(team);
                j_sprintf(_Buffer, "tournament_healthupdate %llx %d %d %d\n", v2, (unsigned int)v5[v3].client->sess.cs.clientIndex, fmt, v9);
                Cbuf_AddText(LOCAL_CLIENT_0, _Buffer);
              }
            }
          }
          ++v1;
          ++v4;
          ++v3;
        }
        while ( v1 < level.maxclients );
      }
    }
  }
}

/*
==============
SV_OnlineTournament_GetMMLobbyID
==============
*/
unsigned __int64 SV_OnlineTournament_GetMMLobbyID()
{
  return OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
SV_OnlineTournament_GetTeamForPlayer
==============
*/
__int64 SV_OnlineTournament_GetTeamForPlayer(XUID xuid)
{
  bool TeamFor; 
  unsigned int v2; 
  team_t teamId; 

  TeamFor = OnlineMatchmakerOmniscient::GetTeamFor(&OnlineMatchmakerOmniscient::ms_instance, xuid, &teamId);
  v2 = 0;
  if ( TeamFor )
    return (unsigned int)teamId;
  return v2;
}

/*
==============
SV_OnlineTournament_GetTournamentID
==============
*/
unsigned __int64 SV_OnlineTournament_GetTournamentID()
{
  return OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
SV_OnlineTournament_Init
==============
*/
void SV_OnlineTournament_Init(void)
{
  s_matchWinner = TEAM_ZERO;
  s_currentRoundNumber = -1;
}

/*
==============
SV_OnlineTournament_IsInTournament
==============
*/
bool SV_OnlineTournament_IsInTournament()
{
  return OnlineMatchmakerOmniscient::GetTournamentID(&OnlineMatchmakerOmniscient::ms_instance) != 0;
}

/*
==============
SV_OnlineTournament_KillUpdate
==============
*/
void SV_OnlineTournament_KillUpdate(const char *victimXuidString, const char *killerXuidString, unsigned __int16 weapon, bool headShot)
{
  unsigned __int64 CurrentLobbyId; 
  unsigned int v9; 
  int v10; 
  BOOL v11; 
  team_t teamId; 
  XUID result; 
  char _Buffer[256]; 

  XUID::FromHexString(&result, victimXuidString);
  CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  if ( !OnlineMatchmakerOmniscient::GetTeamFor(&OnlineMatchmakerOmniscient::ms_instance, result, &teamId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\sv_online_tournament.cpp", 150, ASSERT_TYPE_ASSERT, "(Matchmaker::Get().GetTeamFor( victimXuid, &victimTeam ))", (const char *)&queryFormat, "Matchmaker::Get().GetTeamFor( victimXuid, &victimTeam )") )
    __debugbreak();
  v9 = OnlineMatchmakerOmniscient::ConvertGameTeamToDWTeam(teamId);
  v11 = headShot;
  v10 = weapon;
  j_sprintf(_Buffer, "tournament_killupdate %llx %d %s %s %d %d\n", CurrentLobbyId, v9, victimXuidString, killerXuidString, v10, v11);
  Com_Printf(25, "exec: %s", _Buffer);
  Cbuf_AddText(LOCAL_CLIENT_0, _Buffer);
}

/*
==============
SV_OnlineTournament_MatchComplete
==============
*/
void SV_OnlineTournament_MatchComplete(TournamentTeam winner)
{
  if ( winner )
    s_matchWinner = OnlineMatchmakerOmniscient::GetTournamentAlliesTeam(&OnlineMatchmakerOmniscient::ms_instance);
  else
    s_matchWinner = OnlineMatchmakerOmniscient::GetTournamentAxisTeam(&OnlineMatchmakerOmniscient::ms_instance);
}

/*
==============
SV_OnlineTournament_RoundTimeUpdated
==============
*/
void SV_OnlineTournament_RoundTimeUpdated(int roundTime, MatchTimeMode timeMode)
{
  unsigned __int64 CurrentLobbyId; 
  char v5; 
  char _Buffer[256]; 

  CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  v5 = s_currentRoundNumber;
  if ( timeMode == 2 )
    v5 = ++s_currentRoundNumber;
  j_sprintf(_Buffer, "tournament_timeupdate %llx %d %d %d\n", CurrentLobbyId, (unsigned int)roundTime, (unsigned __int8)timeMode, v5);
  Com_Printf(25, "exec: %s", _Buffer);
  Cbuf_AddText(LOCAL_CLIENT_0, _Buffer);
}

/*
==============
SV_OnlineTournament_TeamScoreUpdated
==============
*/
void SV_OnlineTournament_TeamScoreUpdated(TournamentTeam team, unsigned __int16 score)
{
  unsigned __int64 CurrentLobbyId; 
  char *fmt; 
  int v6; 
  int v7; 
  char _Buffer[256]; 

  CurrentLobbyId = OnlineMatchmakerOmniscient::GetCurrentLobbyId(&OnlineMatchmakerOmniscient::ms_instance);
  if ( (unsigned __int8)team >= 2u )
  {
    v7 = 2;
    v6 = (unsigned __int8)team;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\sv_online_tournament.cpp", 132, ASSERT_TYPE_ASSERT, "(unsigned)( teamByte ) < (unsigned)( 2 )", "teamByte doesn't index 2\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  LODWORD(fmt) = score;
  j_sprintf(_Buffer, "tournament_scoreupdate %llx %d %d\n", CurrentLobbyId, (unsigned __int8)team, fmt);
  Com_Printf(25, "exec: %s", _Buffer);
  Cbuf_AddText(LOCAL_CLIENT_0, _Buffer);
}

