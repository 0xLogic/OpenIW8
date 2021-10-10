/*
==============
CG_ScoreboardMP_GetScoreAtRankForTeam
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetScoreAtRankForTeam(LocalClientNum_t localClientNum, team_t team, int rank)
{
  return ?CG_ScoreboardMP_GetScoreAtRankForTeam@@YAPEBUscore_t@@W4LocalClientNum_t@@W4team_t@@H@Z(localClientNum, team, rank);
}

/*
==============
CG_ScoreboardMP_GetClientScoreRanking
==============
*/

int __fastcall CG_ScoreboardMP_GetClientScoreRanking(LocalClientNum_t localClientNum, team_t team)
{
  return ?CG_ScoreboardMP_GetClientScoreRanking@@YAHW4LocalClientNum_t@@W4team_t@@@Z(localClientNum, team);
}

/*
==============
CG_ScoreboardMP_GetScoreAtSortedRankForTeam
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetScoreAtSortedRankForTeam(LocalClientNum_t localClientNum, team_t team, int rank, bool needSorting)
{
  return ?CG_ScoreboardMP_GetScoreAtSortedRankForTeam@@YAPEBUscore_t@@W4LocalClientNum_t@@W4team_t@@H_N@Z(localClientNum, team, rank, needSorting);
}

/*
==============
CG_ScoreboardMP_GetScoreAtRank
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetScoreAtRank(LocalClientNum_t localClientNum, int rank)
{
  return ?CG_ScoreboardMP_GetScoreAtRank@@YAPEBUscore_t@@W4LocalClientNum_t@@H@Z(localClientNum, rank);
}

/*
==============
CG_ScoreboardMP_GetOurClientScore
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetOurClientScore(LocalClientNum_t localClientNum)
{
  return ?CG_ScoreboardMP_GetOurClientScore@@YAPEBUscore_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ScoreboardMP_GetScoreAtRankForTeamInternal
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetScoreAtRankForTeamInternal(const score_t *sortedScores, LocalClientNum_t localClientNum, team_t team, int rank)
{
  return ?CG_ScoreboardMP_GetScoreAtRankForTeamInternal@@YAPEBUscore_t@@PEBU1@W4LocalClientNum_t@@W4team_t@@H@Z(sortedScores, localClientNum, team, rank);
}

/*
==============
CG_ScoreboardMP_IsPlayerDead
==============
*/

bool __fastcall CG_ScoreboardMP_IsPlayerDead(const score_t *score)
{
  return ?CG_ScoreboardMP_IsPlayerDead@@YA_NPEBUscore_t@@@Z(score);
}

/*
==============
CG_ScoreboardMP_GetClientScore
==============
*/

const score_t *__fastcall CG_ScoreboardMP_GetClientScore(LocalClientNum_t localClientNum, int clientNum)
{
  return ?CG_ScoreboardMP_GetClientScore@@YAPEBUscore_t@@W4LocalClientNum_t@@H@Z(localClientNum, clientNum);
}

/*
==============
CG_ScoreBoardMP_GetAveragePing
==============
*/

unsigned int __fastcall CG_ScoreBoardMP_GetAveragePing(LocalClientNum_t localClientNum)
{
  return ?CG_ScoreBoardMP_GetAveragePing@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ScoreboardMP_IsPlayerDogtagAvailable
==============
*/

bool __fastcall CG_ScoreboardMP_IsPlayerDogtagAvailable(const score_t *score)
{
  return ?CG_ScoreboardMP_IsPlayerDogtagAvailable@@YA_NPEBUscore_t@@@Z(score);
}

/*
==============
CG_ScoreBoardMP_GetAveragePing
==============
*/
__int64 CG_ScoreBoardMP_GetAveragePing(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 numScores; 
  bool *p_isBot; 
  int v6; 
  float v7; 
  float v8; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v2 = 0;
  v3 = 0;
  numScores = LocalClientGlobals->numScores;
  if ( numScores <= 0 )
    return 0i64;
  p_isBot = &LocalClientGlobals->scores[0].isBot;
  do
  {
    v6 = *((_DWORD *)p_isBot - 3);
    if ( v6 > 0 && !*p_isBot )
    {
      v3 += v6;
      ++v2;
    }
    p_isBot += 112;
    --numScores;
  }
  while ( numScores );
  if ( !v2 )
    return 0i64;
  v7 = (float)v3;
  v8 = (float)v2;
  return (unsigned int)(int)(float)(v7 / v8);
}

/*
==============
CG_ScoreboardMP_GetClientScore
==============
*/
score_t *CG_ScoreboardMP_GetClientScore(LocalClientNum_t localClientNum, int clientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  int v5; 
  CgStatic *LocalClientStatics; 
  score_t *i; 
  __int64 client; 
  cg_t *v9; 
  const characterInfo_t *CharacterInfo; 
  __int64 v12; 
  __int64 v13; 

  if ( !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return 0i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v5 = 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( LocalClientGlobals->numScores <= 0 )
    return 0i64;
  for ( i = LocalClientGlobals->scores; ; ++i )
  {
    client = i->client;
    v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v9->IsMP(v9) )
    {
      if ( (unsigned int)client >= v9[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v13) = v9[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v12) = client;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v9[1].predictedPlayerState.rxvOmnvars[62] + 14792 * client);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v9, client);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 106, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( i->client < (int)ComCharacterLimits::ms_gameData.m_characterCount && CharacterInfo->infoValid && i->client == clientNum )
      break;
    if ( ++v5 >= LocalClientGlobals->numScores )
      return 0i64;
  }
  return i;
}

/*
==============
CG_ScoreboardMP_GetClientScoreRanking
==============
*/
__int64 CG_ScoreboardMP_GetClientScoreRanking(LocalClientNum_t localClientNum, team_t team)
{
  unsigned int v4; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  CgStatic *v7; 
  int clientNum; 
  const characterInfo_t *CharacterInfo; 
  int v10; 
  score_t *i; 
  const characterInfo_t *v12; 

  if ( !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return 0i64;
  v4 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v7 = LocalClientStatics;
  if ( (unsigned int)(team - 201) <= 1 )
  {
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( clientNum == LocalClientGlobals->clientNum )
      return 0i64;
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 59, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    team = CharacterInfo->team;
  }
  else
  {
    clientNum = LocalClientGlobals->clientNum;
  }
  v10 = 0;
  if ( LocalClientGlobals->numScores <= 0 )
    return 0i64;
  for ( i = LocalClientGlobals->scores; ; ++i )
  {
    if ( i->team == team )
    {
      v12 = CgStatic::GetCharacterInfo(v7, i->client);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 76, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( i->client < (int)ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( v12->infoValid )
        {
          ++v4;
          if ( i->client == clientNum )
            break;
        }
      }
    }
    if ( ++v10 >= LocalClientGlobals->numScores )
      return 0i64;
  }
  return v4;
}

/*
==============
CG_ScoreboardMP_GetOurClientScore
==============
*/
const score_t *CG_ScoreboardMP_GetOurClientScore(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  if ( !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return 0i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return CG_ScoreboardMP_GetClientScore(localClientNum, LocalClientGlobals->clientNum);
}

/*
==============
CG_ScoreboardMP_GetScoreAtRank
==============
*/
const score_t *CG_ScoreboardMP_GetScoreAtRank(LocalClientNum_t localClientNum, int rank)
{
  __int64 v2; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v5; 
  CgStatic *LocalClientStatics; 
  int *v7; 
  __int64 v8; 
  cg_t *v9; 
  characterInfo_t *CharacterInfo; 
  __int64 v12; 

  v2 = rank;
  if ( !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return 0i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( (int)v2 < 1 || (int)v2 > LocalClientGlobals->numScores )
    return 0i64;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v7 = &v5->teamPlayers[28 * v2 + 176];
  v8 = *v7;
  v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( v9->IsMP(v9) )
  {
    if ( (unsigned int)v8 >= v9[1].predictedPlayerState.rxvOmnvars[64].timeModified )
    {
      LODWORD(v12) = v8;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v12, v9[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
        __debugbreak();
    }
    CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v9[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v8);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v9, v8);
  }
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 153, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( *v7 < ComCharacterLimits::GetCharacterMaxCount() && CharacterInfo->infoValid )
    return (const score_t *)v7;
  else
    return 0i64;
}

/*
==============
CG_ScoreboardMP_GetScoreAtRankForTeam
==============
*/
const score_t *CG_ScoreboardMP_GetScoreAtRankForTeam(LocalClientNum_t localClientNum, team_t team, int rank)
{
  return CG_ScoreboardMP_GetScoreAtSortedRankForTeam(localClientNum, team, rank, 0);
}

/*
==============
CG_ScoreboardMP_GetScoreAtRankForTeamInternal
==============
*/
const score_t *CG_ScoreboardMP_GetScoreAtRankForTeamInternal(const score_t *sortedScores, LocalClientNum_t localClientNum, team_t team, int rank)
{
  int v4; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  CgStatic *v11; 
  const characterInfo_t *CharacterInfo; 
  int v13; 
  const characterInfo_t *v14; 

  v4 = 0;
  if ( rank < 1 || !CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    return 0i64;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v11 = LocalClientStatics;
  if ( (unsigned int)(team - 201) <= 1 )
  {
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 180, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    team = CharacterInfo->team;
  }
  v13 = 0;
  if ( LocalClientGlobals->numScores <= 0 )
    return 0i64;
  while ( 1 )
  {
    if ( sortedScores->team == team )
    {
      v14 = CgStatic::GetCharacterInfo(v11, sortedScores->client);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_scoreboard_mp.cpp", 192, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( sortedScores->client < (int)ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( v14->infoValid )
        {
          if ( rank == ++v4 )
            break;
        }
      }
    }
    ++v13;
    ++sortedScores;
    if ( v13 >= LocalClientGlobals->numScores )
      return 0i64;
  }
  return sortedScores;
}

/*
==============
CG_ScoreboardMP_GetScoreAtSortedRankForTeam
==============
*/
score_t *CG_ScoreboardMP_GetScoreAtSortedRankForTeam(LocalClientNum_t localClientNum, team_t team, int rank, bool needSorting)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v9; 
  score_t *scores; 
  size_t v11; 
  const score_t *ScoreAtRankForTeamInternal; 
  __int64 numScores; 
  int client; 
  __int64 v15; 
  CgScoreBoardCompare v17; 
  score_t _Last[200]; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  if ( !LocalClientGlobals->m_isMLGSpectator || !needSorting )
    return (score_t *)CG_ScoreboardMP_GetScoreAtRankForTeamInternal(LocalClientGlobals->scores, localClientNum, team, rank);
  scores = LocalClientGlobals->scores;
  v11 = 112i64 * LocalClientGlobals->numScores;
  memcpy_0(_Last, LocalClientGlobals->scores, v11);
  std::_Sort_unchecked<score_t *,CgScoreBoardCompare>(_Last, &_Last[v11 / 0x70], (__int64)v11 / 112, v17);
  ScoreAtRankForTeamInternal = CG_ScoreboardMP_GetScoreAtRankForTeamInternal(_Last, localClientNum, team, rank);
  if ( !ScoreAtRankForTeamInternal )
    return 0i64;
  numScores = v9->numScores;
  if ( (int)numScores <= 0 )
    return 0i64;
  client = ScoreAtRankForTeamInternal->client;
  v15 = 0i64;
  while ( scores->client != client )
  {
    ++v15;
    ++scores;
    if ( v15 >= numScores )
      return 0i64;
  }
  return scores;
}

/*
==============
CG_ScoreboardMP_IsPlayerDead
==============
*/
bool CG_ScoreboardMP_IsPlayerDead(const score_t *score)
{
  return score->hStatusIcon != NULL;
}

/*
==============
CG_ScoreboardMP_IsPlayerDogtagAvailable
==============
*/
bool CG_ScoreboardMP_IsPlayerDogtagAvailable(const score_t *score)
{
  Material *hStatusIcon; 

  hStatusIcon = score->hStatusIcon;
  return hStatusIcon && !strcmp_0(hStatusIcon->name, "hud_status_dogtag");
}

