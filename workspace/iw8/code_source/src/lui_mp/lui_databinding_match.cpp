/*
==============
LUI_DataBinding_Match_SnapshotUpdate
==============
*/

void __fastcall LUI_DataBinding_Match_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Match_SnapshotUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Match_GetEnemyScore
==============
*/
int LUI_DataBinding_Match_GetEnemyScore(LocalClientNum_t localClientNum)
{
  team_t PlayerTeam; 
  unsigned __int64 v3; 
  const score_t *OurClientScore; 
  const score_t *ScoreAtRank; 
  int v7; 
  int team[8]; 
  int v9; 

  PlayerTeam = Game_GetPlayerTeam(localClientNum);
  v3 = PlayerTeam;
  if ( (unsigned int)(PlayerTeam - 201) <= 1 )
    return Game_GetTeamScore(localClientNum, 1);
  if ( PlayerTeam )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 186, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
      __debugbreak();
    v7 = 0;
    v9 = 0;
    *(__m256i *)team = _ymm;
    if ( v3 < 9 )
      v7 = team[v3];
    return Game_GetTeamScore(localClientNum, v7);
  }
  else
  {
    OurClientScore = CG_ScoreboardMP_GetOurClientScore(localClientNum);
    ScoreAtRank = CG_ScoreboardMP_GetScoreAtRank(localClientNum, 1);
    if ( OurClientScore == ScoreAtRank )
      ScoreAtRank = CG_ScoreboardMP_GetScoreAtRank(localClientNum, 2);
    if ( ScoreAtRank )
      return ScoreAtRank->score;
    else
      return 0;
  }
}

/*
==============
LUI_DataBinding_Match_GetFriendlyScore
==============
*/
int LUI_DataBinding_Match_GetFriendlyScore(LocalClientNum_t localClientNum)
{
  int PlayerTeam; 
  const score_t *OurClientScore; 

  PlayerTeam = Game_GetPlayerTeam(localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_mp\\lui_databinding_match.cpp", 40, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tTEAM_SPECTATOR is not supported in SP", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
    __debugbreak();
  if ( (unsigned int)(PlayerTeam - 201) <= 1 )
  {
    LODWORD(OurClientScore) = Game_GetTeamScore(localClientNum, 2);
  }
  else if ( PlayerTeam )
  {
    LODWORD(OurClientScore) = Game_GetTeamScore(localClientNum, PlayerTeam);
  }
  else
  {
    OurClientScore = CG_ScoreboardMP_GetOurClientScore(localClientNum);
    if ( OurClientScore )
      LODWORD(OurClientScore) = OurClientScore->score;
  }
  return (int)OurClientScore;
}

/*
==============
LUI_DataBinding_Match_GetScoreLimit
==============
*/
__int64 LUI_DataBinding_Match_GetScoreLimit()
{
  unsigned int IndexByName; 
  unsigned int v1; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 

  IndexByName = BG_Omnvar_GetIndexByName("ui_scorelimit");
  v1 = IndexByName;
  if ( IndexByName == -1 )
    return 0i64;
  Def = BG_Omnvar_GetDef(IndexByName);
  Data = CG_Omnvar_GetData(LOCAL_CLIENT_0, v1);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
    __debugbreak();
  if ( Def->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
    __debugbreak();
  return (unsigned int)(Def->minvalue + Data->current.integer);
}

/*
==============
LUI_DataBinding_Match_SnapshotUpdate
==============
*/
void LUI_DataBinding_Match_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  bool enabled; 
  unsigned int IndexByName; 
  unsigned __int16 Model; 

  LUIBinding::PushString(&s_LUI_DataBinding_MatchID);
  LUIBinding::PushInt(&s_LUI_DataBinding_ClientCount);
  LUIBinding::PushString(&s_LUI_DataBinding_MapName);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_FIRING|0x80) )
  {
    LUIBinding::PushString(&s_LUI_DataBinding_GameType);
    LUIBinding::PushInt(&s_LUI_DataBinding_EndTime);
    LUIBinding::PushInt(&s_LUI_DataBinding_SpectatingTeam, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_SquadsRemaining);
    enabled = 0;
    IndexByName = BG_Omnvar_GetIndexByName("ui_scoreboard_freeze");
    if ( IndexByName != -1 )
      enabled = CG_Omnvar_GetData(localClientNum, IndexByName)->current.enabled;
    Model = LUIBinding::GetModel(&s_LUI_DataBinding_Team, localClientNum);
    if ( !enabled || LUI_Model_GetDataType(Model) == LUI_MODEL_DT_INVALID )
    {
      LUIBinding::PushInt(&s_LUI_DataBinding_ScoreFriendly, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_ScoreEnemy, localClientNum);
      LUIBinding::PushFloat(&s_LUI_DataBinding_ScoreFriendlyWinProgress, localClientNum);
      LUIBinding::PushFloat(&s_LUI_DataBinding_ScoreEnemyWinProgress, localClientNum);
      LUIBinding::PushInt(&s_LUI_DataBinding_Team, localClientNum);
    }
  }
}

/*
==============
s_LUI_DataBinding_Get_ClientCount
==============
*/
__int64 s_LUI_DataBinding_Get_ClientCount()
{
  const snapshot_t *nextSnap; 
  __int64 result; 

  nextSnap = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->nextSnap;
  result = 1i64;
  if ( nextSnap )
    return (unsigned int)nextSnap[1].serverTime;
  return result;
}

/*
==============
s_LUI_DataBinding_Get_EndTime
==============
*/
int s_LUI_DataBinding_Get_EndTime()
{
  return Game_GetGameEndTime(LOCAL_CLIENT_0);
}

/*
==============
s_LUI_DataBinding_Get_GameType
==============
*/
char s_LUI_DataBinding_Get_GameType(unsigned __int64 outStringSize, char *outString)
{
  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  Core_strcpy(outString, outStringSize, cls.m_activeGameTypeName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_MapName
==============
*/
char s_LUI_DataBinding_Get_MapName(unsigned __int64 outStringSize, char *outString)
{
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  Core_strcpy(outString, outStringSize, cls.m_activeGameMapName);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_MatchID
==============
*/
char s_LUI_DataBinding_Get_MatchID(unsigned __int64 outStringSize, char *outString)
{
  const char *MatchIdString; 

  MatchIdString = OnlineMatchId::GetMatchIdString();
  Core_strcpy_truncate(outString, outStringSize, MatchIdString);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_ScoreEnemy
==============
*/

int __fastcall s_LUI_DataBinding_Get_ScoreEnemy(LocalClientNum_t localClientNum)
{
  return LUI_DataBinding_Match_GetEnemyScore(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_ScoreEnemyWinProgress
==============
*/
float s_LUI_DataBinding_Get_ScoreEnemyWinProgress(LocalClientNum_t localClientNum)
{
  int EnemyScore; 
  int ScoreLimit; 
  float result; 

  EnemyScore = LUI_DataBinding_Match_GetEnemyScore(localClientNum);
  ScoreLimit = LUI_DataBinding_Match_GetScoreLimit();
  result = 0.0;
  if ( ScoreLimit )
    return (float)EnemyScore / (float)ScoreLimit;
  return result;
}

/*
==============
s_LUI_DataBinding_Get_ScoreFriendly
==============
*/

int __fastcall s_LUI_DataBinding_Get_ScoreFriendly(LocalClientNum_t localClientNum)
{
  return LUI_DataBinding_Match_GetFriendlyScore(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_ScoreFriendlyWinProgress
==============
*/
float s_LUI_DataBinding_Get_ScoreFriendlyWinProgress(LocalClientNum_t localClientNum)
{
  int FriendlyScore; 
  int ScoreLimit; 
  float result; 

  FriendlyScore = LUI_DataBinding_Match_GetFriendlyScore(localClientNum);
  ScoreLimit = LUI_DataBinding_Match_GetScoreLimit();
  result = 0.0;
  if ( ScoreLimit )
    return (float)FriendlyScore / (float)ScoreLimit;
  return result;
}

/*
==============
s_LUI_DataBinding_Get_SpectatingTeam
==============
*/
__int64 s_LUI_DataBinding_Get_SpectatingTeam(LocalClientNum_t localClientNum)
{
  team_t PlayerTeam; 
  cg_t *LocalClientGlobals; 
  cg_t *v4; 
  __int64 clientNum; 
  cg_t *v6; 
  const characterInfo_t *CharacterInfo; 

  PlayerTeam = Game_GetPlayerTeam(localClientNum);
  if ( PlayerTeam != TEAM_SPECTATOR )
    return (unsigned int)PlayerTeam;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = CG_GetLocalClientGlobals(localClientNum);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v6 = v4;
  if ( v4->IsMP(v4) )
  {
    if ( (unsigned int)clientNum >= v6[1].predictedPlayerState.rxvOmnvars[64].timeModified && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", clientNum, v6[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
      __debugbreak();
    CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&v6[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
  }
  else
  {
    CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v6, clientNum);
  }
  if ( CharacterInfo && CharacterInfo->infoValid )
    return (unsigned int)CharacterInfo->team;
  else
    return (unsigned int)PlayerTeam;
}

/*
==============
s_LUI_DataBinding_Get_SquadsRemaining
==============
*/
__int64 s_LUI_DataBinding_Get_SquadsRemaining()
{
  unsigned int v0; 
  int v1; 
  int *teamPlayers; 
  int v3; 
  int v4; 
  const score_t *ScoreAtRankForTeam; 

  v0 = 0;
  v1 = 0;
  teamPlayers = CG_GetLocalClientGlobals(LOCAL_CLIENT_0)->teamPlayers;
  do
  {
    v3 = *teamPlayers;
    v4 = 0;
    if ( *teamPlayers > 0 )
    {
      while ( 1 )
      {
        ScoreAtRankForTeam = CG_ScoreboardMP_GetScoreAtRankForTeam(LOCAL_CLIENT_0, (team_t)v1, ++v4);
        if ( ScoreAtRankForTeam )
        {
          if ( !CG_ScoreboardMP_IsPlayerDead(ScoreAtRankForTeam) )
            break;
        }
        if ( v4 >= v3 )
          goto LABEL_8;
      }
      ++v0;
    }
LABEL_8:
    ++v1;
    ++teamPlayers;
  }
  while ( v1 < 203 );
  return v0;
}

/*
==============
s_LUI_DataBinding_Get_Team
==============
*/

team_t __fastcall s_LUI_DataBinding_Get_Team(LocalClientNum_t localClientNum)
{
  return Game_GetPlayerTeam(localClientNum);
}

