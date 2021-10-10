/*
==============
OnlinetTournamentSim_SetupFakeDoc
==============
*/

OnlineTournamentBracket *__fastcall OnlinetTournamentSim_SetupFakeDoc(OnlineTournamentBracket *result, OnlineTournamentBracket *bracket)
{
  return ?OnlinetTournamentSim_SetupFakeDoc@@YA?AUOnlineTournamentBracket@@AEAU1@@Z(result, bracket);
}

/*
==============
OnlineTournamentSim_IsSimModeEnabled
==============
*/

bool __fastcall OnlineTournamentSim_IsSimModeEnabled()
{
  return ?OnlineTournamentSim_IsSimModeEnabled@@YA_NXZ();
}

/*
==============
OnlineTournamentSim_StartFakeMatchPreview
==============
*/

void __fastcall OnlineTournamentSim_StartFakeMatchPreview(const unsigned __int16 roundIndex, const unsigned __int16 matchIndex)
{
  ?OnlineTournamentSim_StartFakeMatchPreview@@YAXGG@Z(roundIndex, matchIndex);
}

/*
==============
OnlineTournamentSim_RegisterCommands
==============
*/

void OnlineTournamentSim_RegisterCommands(void)
{
  ?OnlineTournamentSim_RegisterCommands@@YAXXZ();
}

/*
==============
OnlineTournamentSim_Init
==============
*/

void OnlineTournamentSim_Init(void)
{
  ?OnlineTournamentSim_Init@@YAXXZ();
}

/*
==============
AddEvent_f
==============
*/
void AddEvent_f()
{
  XUID *participants; 
  __int64 v1; 
  MatchStatusUpdate *v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  int *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  const XUID *v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  int matchStorageIndex; 
  XUID result; 
  XUID v24; 
  XUID xuid; 
  OnlineTournamentBracket bracket; 
  int statusUpdateIndex[16]; 
  MatchStatusUpdate statusUpdate[90]; 

  participants = bracket.participants;
  v1 = 80i64;
  do
  {
    XUID::XUID(participants++);
    --v1;
  }
  while ( v1 );
  v2 = statusUpdate;
  v3 = 90i64;
  do
  {
    MatchStatusUpdate::MatchStatusUpdate(v2++);
    --v3;
  }
  while ( v3 );
  if ( Cmd_Argc() == 7 )
  {
    OnlineTournament_GetBracket(&bracket);
    v4 = OnlineTournamentSim_GetMatchStorageIndex(&bracket, s_currentMatchPreviewRoundIndex, s_currentMatchPreviewMatchIndex);
    v5 = v4;
    matchStorageIndex = v4;
    if ( (unsigned int)v4 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 280, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( bracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( bracket.matchStatus )\n\t%i not in [0, %i)", v4, 15) )
      __debugbreak();
    v6 = Cmd_ArgInt(1);
    v7 = Cmd_ArgInt(2);
    v8 = Cmd_ArgInt(3);
    v9 = Cmd_ArgInt(4);
    LODWORD(v8) = bracket.matchStatus[v5].teams[v8];
    v10 = v9;
    OnlineTournament_GetParticipantByTeam(&result, bracket.matchStatus[v5].teams[v6] - 1, v7);
    OnlineTournament_GetParticipantByTeam(&xuid, v8 - 1, v10);
    LOBYTE(v8) = Cmd_ArgInt(5);
    v11 = Cmd_ArgInt(6);
    OnlineTournament_GetStatusUpdate(statusUpdate);
    OnlineTournament_GetStatusUpdateIndex(statusUpdateIndex);
    v12 = 6 * v5;
    v13 = &statusUpdateIndex[v5];
    v14 = 6 * v5 + *v13;
    v15 = v7;
    v16 = v12;
    v15 *= 32i64;
    XUID::operator=((XUID *)((char *)&statusUpdate[v14].teamStatus[v6].playerStatus[0].xuid + v15), &result);
    v17 = XUID::NullXUID(&v24);
    XUID::operator=((XUID *)((char *)&statusUpdate[v16 + *v13].teamStatus[v6].playerStatus[0].killer + v15), v17);
    v18 = v16 + *v13;
    v19 = 376 * v18 + v15 + 168 * v6;
    *(unsigned __int16 *)((char *)&statusUpdate[0].teamStatus[0].playerStatus[0].killerWeapon + v19) = (unsigned __int8)v8;
    *(&statusUpdate[0].teamStatus[0].playerStatus[0].killerHeadshot + v19) = v11 != 0;
    OnlineTournament_UpdateMatchStatus(matchStorageIndex, &statusUpdate[v18]);
    OnlineTournament_GetStatusUpdateIndex(statusUpdateIndex);
    XUID::operator=((XUID *)((char *)&statusUpdate[v16 + *v13].teamStatus[v6].playerStatus[0].xuid + v15), &result);
    XUID::operator=((XUID *)((char *)&statusUpdate[v16 + *v13].teamStatus[v6].playerStatus[0].killer + v15), &xuid);
    v20 = v16 + *v13;
    v21 = 376 * v20 + v15 + 168 * v6;
    *(unsigned __int16 *)((char *)&statusUpdate[0].teamStatus[0].playerStatus[0].killerWeapon + v21) = (unsigned __int8)v8;
    *(&statusUpdate[0].teamStatus[0].playerStatus[0].killerHeadshot + v21) = v11 != 0;
    OnlineTournament_UpdateMatchStatus(matchStorageIndex, &statusUpdate[v20]);
  }
  else
  {
    Com_SetErrorMessage("fake_tournament_add_event wrong number of arguments, should have 7 arguments\n");
  }
}

/*
==============
CompleteMatch_f
==============
*/
void CompleteMatch_f()
{
  XUID *participants; 
  __int64 v1; 
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  int MatchStorageIndex; 
  __int64 v6; 
  __int64 v7; 
  team_t v8; 
  OnlineTournamentBracket bracket; 
  char dest[256]; 
  char v11[256]; 

  participants = bracket.participants;
  v1 = 80i64;
  do
  {
    XUID::XUID(participants++);
    --v1;
  }
  while ( v1 );
  if ( Cmd_Argc() == 4 )
  {
    OnlineTournament_GetBracket(&bracket);
    v2 = Cmd_ArgInt(1);
    v3 = Cmd_ArgInt(2);
    v4 = Cmd_ArgInt(3);
    if ( v2 < bracket.totalRounds )
    {
      if ( v3 < bracket.bracketSize )
      {
        if ( (unsigned int)v4 <= 1 )
        {
          MatchStorageIndex = OnlineTournamentSim_GetMatchStorageIndex(&bracket, v2, v3);
          v6 = MatchStorageIndex;
          if ( (unsigned int)MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 236, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( bracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( bracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
            __debugbreak();
          v7 = v6;
          v8 = bracket.matchStatus[v6].teams[v4];
          bracket.matchStatus[v7].winner = v8;
          bracket.matchStatus[OnlineTournamentSim_GetMatchStorageIndex(&bracket, v2 + 1, v3 >> 1)].teams[v3 & 1] = v8;
          OnlineTournament_SetBracket(&bracket);
        }
        else
        {
          Com_SetErrorMessage("OnlineTournamentSim wrong value for team index should be 0 or 1\n");
        }
      }
      else
      {
        Com_sprintf<256>((char (*)[256])v11, "OnlineTournamentSim wrong value for match index should be between 0 and %d", (unsigned int)bracket.bracketSize);
        Com_SetErrorMessage(v11);
      }
    }
    else
    {
      Com_sprintf<256>((char (*)[256])dest, "OnlineTournamentSim wrong value for round index should be between 0 and %d", (unsigned int)bracket.totalRounds);
      Com_SetErrorMessage(dest);
    }
  }
  else
  {
    Com_SetErrorMessage("fake_tournament_complete_match wrong number of arguments -> [roundIndex] [matchIndex] [teamIndex]\n");
  }
}

/*
==============
OnlineTournamentSim_GetMatchStorageIndex
==============
*/
__int64 OnlineTournamentSim_GetMatchStorageIndex(OnlineTournamentBracket *bracket, unsigned __int16 roundIndex, unsigned __int16 matchIndex)
{
  char v6; 
  int v7; 
  unsigned int v8; 
  __int64 v10; 
  __int64 v11; 
  int totalRounds; 

  if ( bracket->participantCount / bracket->teamSize != bracket->teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 39, ASSERT_TYPE_ASSERT, "(bracket.participantCount / bracket.teamSize == bracket.teamCount)", (const char *)&queryFormat, "bracket.participantCount / bracket.teamSize == bracket.teamCount") )
    __debugbreak();
  if ( (unsigned int)roundIndex >= bracket->totalRounds )
  {
    totalRounds = bracket->totalRounds;
    LODWORD(v10) = roundIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( roundIndex ) < (unsigned)( bracket.totalRounds )", "roundIndex doesn't index bracket.totalRounds\n\t%i not in [0, %i)", v10, totalRounds) )
      __debugbreak();
  }
  v6 = LOBYTE(bracket->totalRounds) - roundIndex - 1;
  v7 = 1 << v6;
  if ( matchIndex >= (unsigned int)(1 << v6) )
  {
    LODWORD(v11) = 1 << v6;
    LODWORD(v10) = matchIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 44, ASSERT_TYPE_ASSERT, "(unsigned)( matchIndex ) < (unsigned)( roundSize )", "matchIndex doesn't index roundSize\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v8 = matchIndex + v7 - 1;
  if ( v8 >= 0xF )
  {
    LODWORD(v11) = 15;
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 48, ASSERT_TYPE_SANITY, "(unsigned)( resultIndex ) < (unsigned)( ( sizeof( *array_counter( bracket.matchStatus ) ) + 0 ) )", "resultIndex doesn't index ARRAY_COUNT( bracket.matchStatus )\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return v8;
}

/*
==============
OnlineTournamentSim_Init
==============
*/
void OnlineTournamentSim_Init(void)
{
  Cmd_AddCommandInternal("fake_tournament_set_score_for_team", SetScoreForTeam_f, &SetScoreForTeam_f_VAR);
  Cmd_AddCommandInternal("fake_tournament_complete_match", CompleteMatch_f, &CompleteMatch_f_VAR);
  Cmd_AddCommandInternal("fake_tournament_add_event", AddEvent_f, &AddEvent_f_VAR);
}

/*
==============
OnlineTournamentSim_IsSimModeEnabled
==============
*/
__int64 OnlineTournamentSim_IsSimModeEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_online_tournament_sim_mode_enabled;
  if ( !DVARBOOL_online_tournament_sim_mode_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_sim_mode_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
OnlineTournamentSim_RegisterCommands
==============
*/
void OnlineTournamentSim_RegisterCommands(void)
{
  Cmd_AddCommandInternal("fake_tournament_set_score_for_team", SetScoreForTeam_f, &SetScoreForTeam_f_VAR);
  Cmd_AddCommandInternal("fake_tournament_complete_match", CompleteMatch_f, &CompleteMatch_f_VAR);
  Cmd_AddCommandInternal("fake_tournament_add_event", AddEvent_f, &AddEvent_f_VAR);
}

/*
==============
OnlineTournamentSim_StartFakeMatchPreview
==============
*/
void OnlineTournamentSim_StartFakeMatchPreview(const unsigned __int16 roundIndex, const unsigned __int16 matchIndex)
{
  XUID *participants; 
  __int64 v5; 
  OnlineTournamentBracket bracket; 
  char dest[256]; 

  participants = bracket.participants;
  v5 = 80i64;
  do
  {
    XUID::XUID(participants++);
    --v5;
  }
  while ( v5 );
  OnlineTournament_GetBracket(&bracket);
  if ( roundIndex >= bracket.totalRounds )
  {
    Com_sprintf<256>((char (*)[256])dest, "OnlineTournamentSim wrong value for round index should be between 0 and %d", (unsigned int)bracket.totalRounds);
    Com_SetErrorMessage(dest);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 257, ASSERT_TYPE_ASSERT, "(ValidateRoundIndexAndShowMessageIfInvalid( bracket, roundIndex ))", (const char *)&queryFormat, "ValidateRoundIndexAndShowMessageIfInvalid( bracket, roundIndex )") )
      __debugbreak();
  }
  if ( matchIndex >= bracket.bracketSize )
  {
    Com_sprintf<256>((char (*)[256])dest, "OnlineTournamentSim wrong value for match index should be between 0 and %d", (unsigned int)bracket.bracketSize);
    Com_SetErrorMessage(dest);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 258, ASSERT_TYPE_ASSERT, "(ValidateMatchIndexAndShowMessageIfInvalid( bracket, matchIndex ))", (const char *)&queryFormat, "ValidateMatchIndexAndShowMessageIfInvalid( bracket, matchIndex )") )
      __debugbreak();
  }
  s_currentMatchPreviewRoundIndex = roundIndex - 1;
  s_currentMatchPreviewMatchIndex = matchIndex - 1;
}

/*
==============
OnlinetTournamentSim_SetupFakeDoc
==============
*/
OnlineTournamentBracket *OnlinetTournamentSim_SetupFakeDoc(OnlineTournamentBracket *result, OnlineTournamentBracket *bracket)
{
  OnlineTournamentBracket *v2; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v7; 
  int v8; 
  int ControllerFromClient; 
  unsigned __int16 v10; 
  int i; 
  XUID *p_resulta; 
  unsigned __int64 v13; 
  int teamCount; 
  int v15; 
  int v16; 
  int v17; 
  unsigned int v18; 
  unsigned int v19; 
  signed int v20; 
  __int64 v21; 
  int v22; 
  OnlineTournamentBracket *v23; 
  __int64 v24; 
  MatchStatus v25; 
  __int128 v26; 
  __int64 v28; 
  __int64 v29; 
  XUID resulta; 
  XUID v31; 

  v2 = bracket;
  bracket->mmStatus = PLAYING;
  v4 = DVARINT_online_tournament_definition_partysize;
  if ( !DVARINT_online_tournament_definition_partysize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_partysize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v2->teamSize = v4->current.integer;
  v5 = DVARINT_online_tournament_definition_teamcount;
  if ( !DVARINT_online_tournament_definition_teamcount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_definition_teamcount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  integer = v5->current.integer;
  v2->teamCount = integer;
  v2->participantCount = v2->teamSize * integer;
  v7 = DVARINT_online_tournament_sim_mode_local_player_index;
  if ( !DVARINT_online_tournament_sim_mode_local_player_index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_sim_mode_local_player_index") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  v8 = v7->current.integer;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  Live_GetXuid(&resulta, ControllerFromClient);
  v10 = 0;
  for ( i = 0; i < v2->participantCount; ++i )
  {
    if ( v8 == i )
    {
      p_resulta = &resulta;
    }
    else
    {
      v13 = XUID::ToUint64(&resulta);
      p_resulta = XUID::FromUInt64(&v31, v13 + i + 1);
    }
    XUID::operator=(&v2->participants[i], p_resulta);
  }
  teamCount = v2->teamCount;
  v15 = teamCount;
  v2->totalRounds = 0;
  if ( teamCount > 1 )
  {
    v16 = 0;
    do
    {
      ++v16;
      v15 >>= 1;
    }
    while ( v15 > 1 );
    v2->totalRounds = v16;
  }
  v2->tournamentID = 123456789i64;
  v2->bracketSize = teamCount / 2;
  memset_0(v2->matchStatus, 0, sizeof(v2->matchStatus));
  v17 = 1;
  if ( v2->bracketSize > 0 )
  {
    v18 = 0;
    do
    {
      v19 = 1 << (LOBYTE(v2->totalRounds) - 1);
      if ( v18 >= v19 )
      {
        LODWORD(v29) = 1 << (LOBYTE(v2->totalRounds) - 1);
        LODWORD(v28) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 98, ASSERT_TYPE_ASSERT, "(unsigned)( matchIndex ) < (unsigned)( roundSize )", "matchIndex doesn't index roundSize\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      v20 = v18 + v19;
      if ( (unsigned int)(v20 - 1) >= 0xF )
      {
        LODWORD(v29) = 15;
        LODWORD(v28) = v20 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 102, ASSERT_TYPE_SANITY, "(unsigned)( resultIndex ) < (unsigned)( ( sizeof( *array_counter( bracket.matchStatus ) ) + 0 ) )", "resultIndex doesn't index ARRAY_COUNT( bracket.matchStatus )\n\t%i not in [0, %i)", v28, v29) )
          __debugbreak();
      }
      ++v10;
      v21 = 4i64 * v20;
      v18 = v10;
      HIDWORD(v2->participants[v21 + 79].m_id) = v17;
      v22 = v17 + 1;
      LODWORD(v2->participants[v21 + 80].m_id) = v22;
      v17 = v22 + 1;
    }
    while ( v10 < v2->bracketSize );
  }
  v23 = result;
  v24 = 9i64;
  do
  {
    v23 = (OnlineTournamentBracket *)((char *)v23 + 128);
    v25 = *(MatchStatus *)&v2->tournamentID;
    v26 = *(_OWORD *)&v2->participants[13].m_id;
    v2 = (OnlineTournamentBracket *)((char *)v2 + 128);
    v23[-1].matchStatus[11] = v25;
    v23[-1].matchStatus[12] = v2[-1].matchStatus[12];
    v23[-1].matchStatus[13] = v2[-1].matchStatus[13];
    *(_OWORD *)v23[-1].matchStatus[14].readyStatus = *(_OWORD *)v2[-1].matchStatus[14].readyStatus;
    *(_OWORD *)v23[-1].matchStatus[14].scores = v26;
    --v24;
  }
  while ( v24 );
  return result;
}

/*
==============
SetScoreForTeam_f
==============
*/
void SetScoreForTeam_f()
{
  MatchStatusUpdate *v0; 
  __int64 v1; 
  XUID *participants; 
  __int64 v3; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v6; 
  unsigned __int16 v7; 
  unsigned int MatchStorageIndex; 
  __int64 v9; 
  __int64 v10; 
  OnlineTournamentBracket bracket; 
  int statusUpdateIndex[16]; 
  MatchStatusUpdate statusUpdate[90]; 
  char dest[256]; 
  char v15[256]; 

  v0 = statusUpdate;
  v1 = 90i64;
  do
  {
    MatchStatusUpdate::MatchStatusUpdate(v0++);
    --v1;
  }
  while ( v1 );
  participants = bracket.participants;
  v3 = 80i64;
  do
  {
    XUID::XUID(participants++);
    --v3;
  }
  while ( v3 );
  if ( Cmd_Argc() == 5 )
  {
    OnlineTournament_GetBracket(&bracket);
    v4 = Cmd_ArgInt(1);
    v5 = Cmd_ArgInt(2);
    v6 = Cmd_ArgInt(3);
    v7 = Cmd_ArgInt(4);
    if ( v4 < bracket.totalRounds )
    {
      if ( v5 < bracket.bracketSize )
      {
        if ( (unsigned int)v6 <= 1 )
        {
          MatchStorageIndex = OnlineTournamentSim_GetMatchStorageIndex(&bracket, v4, v5);
          v9 = (int)MatchStorageIndex;
          if ( MatchStorageIndex >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_tournament_sim.cpp", 204, ASSERT_TYPE_ASSERT, "(unsigned)( matchStorageIndex ) < (unsigned)( ( sizeof( *array_counter( bracket.matchStatus ) ) + 0 ) )", "matchStorageIndex doesn't index ARRAY_COUNT( bracket.matchStatus )\n\t%i not in [0, %i)", MatchStorageIndex, 15) )
            __debugbreak();
          OnlineTournament_GetStatusUpdate(statusUpdate);
          OnlineTournament_GetStatusUpdateIndex(statusUpdateIndex);
          v10 = statusUpdateIndex[v9] + 6 * v9;
          *(unsigned __int16 *)((char *)&statusUpdate[0].teamStatus[v6].score + v10 * 376) = v7;
          OnlineTournament_UpdateMatchStatus(v9, &statusUpdate[v10]);
        }
        else
        {
          Com_SetErrorMessage("OnlineTournamentSim wrong value for team index should be 0 or 1\n");
        }
      }
      else
      {
        Com_sprintf<256>((char (*)[256])v15, "OnlineTournamentSim wrong value for match index should be between 0 and %d", (unsigned int)bracket.bracketSize);
        Com_SetErrorMessage(v15);
      }
    }
    else
    {
      Com_sprintf<256>((char (*)[256])dest, "OnlineTournamentSim wrong value for round index should be between 0 and %d", (unsigned int)bracket.totalRounds);
      Com_SetErrorMessage(dest);
    }
  }
  else
  {
    Com_SetErrorMessage("fake_tournament_set_score_for_team wrong number of arguments -> [roundIndex] [matchIndex] [teamIndex] [score]\n");
  }
}

