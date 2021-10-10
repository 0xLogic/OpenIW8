/*
==============
LB_Init
==============
*/

void LB_Init(void)
{
  ?LB_Init@@YAXXZ();
}

/*
==============
LB_GetPlayerData
==============
*/

int __fastcall LB_GetPlayerData(const int localControllerIndex, LbColumnDef *lbCol)
{
  return ?LB_GetPlayerData@@YAHHPEAULbColumnDef@@@Z(localControllerIndex, lbCol);
}

/*
==============
LB_UploadPlayerData
==============
*/

bool __fastcall LB_UploadPlayerData(const int localControllerIndex)
{
  return ?LB_UploadPlayerData@@YA_NH@Z(localControllerIndex);
}

/*
==============
LB_HandleNumber
==============
*/

char *__fastcall LB_HandleNumber(LbColumnDef *lbColDef, int value)
{
  return ?LB_HandleNumber@@YAPEADPEAULbColumnDef@@H@Z(lbColDef, value);
}

/*
==============
LB_OpenLeaderboardExt
==============
*/

void __fastcall LB_OpenLeaderboardExt(const char *name, const char *leaderboardFilter, bool isVirtual)
{
  ?LB_OpenLeaderboardExt@@YAXPEBD0_N@Z(name, leaderboardFilter, isVirtual);
}

/*
==============
LB_OpenLeaderboard
==============
*/

void __fastcall LB_OpenLeaderboard(const char *name)
{
  ?LB_OpenLeaderboard@@YAXPEBD@Z(name);
}

/*
==============
LB_HandlePercent
==============
*/

char *__fastcall LB_HandlePercent(LbColumnDef *lbColDef, int value)
{
  return ?LB_HandlePercent@@YAPEADPEAULbColumnDef@@H@Z(lbColDef, value);
}

/*
==============
LB_GetPlayerDataString
==============
*/

const char *__fastcall LB_GetPlayerDataString(const int localControllerIndex, LbColumnDef *lbCol)
{
  return ?LB_GetPlayerDataString@@YAPEBDHPEAULbColumnDef@@@Z(localControllerIndex, lbCol);
}

/*
==============
LB_SetWriteLeaderboards
==============
*/

void __fastcall LB_SetWriteLeaderboards(const char *lbConfigStr)
{
  ?LB_SetWriteLeaderboards@@YAXPEBD@Z(lbConfigStr);
}

/*
==============
LB_CanWriteLeaderboards
==============
*/

bool __fastcall LB_CanWriteLeaderboards(const int localControllerIndex)
{
  return ?LB_CanWriteLeaderboards@@YA_NH@Z(localControllerIndex);
}

/*
==============
LB_HandleLevelDisplay
==============
*/

char *__fastcall LB_HandleLevelDisplay(LbColumnDef *lbColDef, int xp)
{
  return ?LB_HandleLevelDisplay@@YAPEADPEAULbColumnDef@@H@Z(lbColDef, xp);
}

/*
==============
LB_HandleTime
==============
*/

char *__fastcall LB_HandleTime(LbColumnDef *lbColDef, int value)
{
  return ?LB_HandleTime@@YAPEADPEAULbColumnDef@@H@Z(lbColDef, value);
}

/*
==============
LB_HandleTimeFull
==============
*/

char *__fastcall LB_HandleTimeFull(LbColumnDef *lbColDef, int value)
{
  return ?LB_HandleTimeFull@@YAPEADPEAULbColumnDef@@H@Z(lbColDef, value);
}

/*
==============
LB_ClearLeaderboard
==============
*/

void LB_ClearLeaderboard(void)
{
  ?LB_ClearLeaderboard@@YAXXZ();
}

/*
==============
LB_ClearWriteLeaderboards
==============
*/

void LB_ClearWriteLeaderboards(void)
{
  ?LB_ClearWriteLeaderboards@@YAXXZ();
}

/*
==============
LB_HandleLevelIcon
==============
*/

const char *__fastcall LB_HandleLevelIcon(LbColumnDef *lbColDef, int xp, int prestige)
{
  return ?LB_HandleLevelIcon@@YAPEBDPEAULbColumnDef@@HH@Z(lbColDef, xp, prestige);
}

/*
==============
LB_GetColumnByName
==============
*/

LbColumnDef *__fastcall LB_GetColumnByName(LeaderboardDef *lbDef, const char *colName)
{
  return ?LB_GetColumnByName@@YAPEAULbColumnDef@@PEAULeaderboardDef@@PEBD@Z(lbDef, colName);
}

/*
==============
LB_AddLBExclude_f
==============
*/
void LB_AddLBExclude_f()
{
  unsigned int v0; 
  int v1; 

  if ( Cmd_Argc() >= 1 )
  {
    v0 = Cmd_ArgInt(1);
    if ( v0 )
    {
      v1 = s_leaderboardToExcludeCount;
      if ( s_leaderboardToExcludeCount < 32 )
      {
        s_IdsOfLeaderboardToExclude[s_leaderboardToExcludeCount] = v0;
        s_leaderboardToExcludeCount = v1 + 1;
      }
      else
      {
        Com_Printf(0, "Error, LB exclude list is full [%d].  Ignoring Lb#%d\n", 32i64, v0);
      }
    }
    else
    {
      s_leaderboardToExcludeCount = 0;
    }
  }
  else
  {
    Com_Printf(0, "USAGE: AddLBExclude <LB#>\n");
  }
}

/*
==============
LB_CanWriteLeaderboards
==============
*/
char LB_CanWriteLeaderboards(const int localControllerIndex)
{
  unsigned int IndexByName; 
  LocalClientNum_t ClientFromController; 
  OmnvarData *Data; 

  IndexByName = BG_Omnvar_GetIndexByName("allow_write_leaderboards");
  if ( IndexByName == -1 )
    return 1;
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  Data = CG_Omnvar_GetData(ClientFromController, IndexByName);
  return !Data || Data->current.enabled;
}

/*
==============
LB_ClearLeaderboard
==============
*/
void LB_ClearLeaderboard(void)
{
  const char *name; 

  if ( lbGlob.leaderboard.lbDef )
    name = lbGlob.leaderboard.lbDef->name;
  else
    name = "unknown";
  Com_Printf(22, "Clearing leaderboard name:%s\n", name);
  lbGlob.leaderboard.forceRefresh = 1;
  lbGlob.leaderboard.lbDef = NULL;
  *(_QWORD *)&lbGlob.leaderboard.userStats.numResults = 0i64;
  lbGlob.leaderboard.userStats.totalRows = 0;
  lbGlob.leaderboard.offset = 0;
  lbGlob.leaderboard.lastUpdate = 0;
  lbGlob.writeCount = 0;
  lbGlob.leaderboard.playerStatsLeaderboardID = -1;
  lbGlob.leaderboard.userRow = -1;
  lbGlob.leaderboard.filter = 4;
}

/*
==============
LB_ClearWriteLeaderboards
==============
*/
void LB_ClearWriteLeaderboards(void)
{
  if ( lbGlob.isWritingInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 163, ASSERT_TYPE_ASSERT, "(!lbGlob.isWritingInUse)", (const char *)&queryFormat, "!lbGlob.isWritingInUse") )
    __debugbreak();
  lbGlob.writeCount = 0;
  lbGlob.isWritingInUse = 0;
}

/*
==============
LB_GetColumnByName
==============
*/
LbColumnDef *LB_GetColumnByName(LeaderboardDef *lbDef, const char *colName)
{
  int v4; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  const char *name; 
  signed __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  int v14; 

  if ( !lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 554, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  if ( !colName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 555, ASSERT_TYPE_ASSERT, "(colName)", (const char *)&queryFormat, "colName") )
    __debugbreak();
  v4 = 0;
  if ( lbDef->columnCount > 0 )
  {
    v5 = 0i64;
    do
    {
      v6 = 0x7FFFFFFFi64;
      v7 = colName;
      name = lbDef->columns[v5].name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !colName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v9 = name - colName;
      while ( 1 )
      {
        v10 = (unsigned __int8)v7[v9];
        v11 = v6;
        v12 = *(unsigned __int8 *)v7++;
        --v6;
        if ( !v11 )
          return &lbDef->columns[v4];
        if ( v10 != v12 )
        {
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          v10 = v13;
          v14 = v12 + 32;
          if ( (unsigned int)(v12 - 65) > 0x19 )
            v14 = v12;
          if ( v10 != v14 )
            break;
        }
        if ( !v10 )
          return &lbDef->columns[v4];
      }
      ++v4;
      ++v5;
    }
    while ( v4 < lbDef->columnCount );
  }
  return 0i64;
}

/*
==============
LB_GetPlayerData
==============
*/
int LB_GetPlayerData(const int localControllerIndex, LbColumnDef *lbCol)
{
  int v4; 
  int v5; 
  unsigned int *v6; 
  char **v7; 
  unsigned int v8; 
  int navStringCount; 
  unsigned int navHashes[10]; 
  char *navStrings[8]; 
  char dest[1024]; 

  if ( !lbCol && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 332, ASSERT_TYPE_ASSERT, "(lbCol)", (const char *)&queryFormat, "lbCol") )
    __debugbreak();
  Core_strcpy(dest, 0x400ui64, lbCol->statName);
  Com_ParseNavStrings(dest, (const char **)navStrings, 8, &navStringCount);
  v4 = navStringCount;
  v5 = 0;
  if ( navStringCount > 0 )
  {
    v6 = navHashes;
    v7 = navStrings;
    do
    {
      v8 = Com_DDL_ConvertNavStringToHash(*v7);
      v4 = navStringCount;
      ++v7;
      ++v5;
      *v6++ = v8;
    }
    while ( v5 < v4 );
  }
  return CL_PlayerData_GetInt(localControllerIndex, navHashes, v4, (const StatsGroup)lbCol->statsGroup);
}

/*
==============
LB_GetPlayerDataString
==============
*/
const char *LB_GetPlayerDataString(const int localControllerIndex, LbColumnDef *lbCol)
{
  char *v4; 
  int v5; 
  char v6; 
  __int64 v7; 
  unsigned int navHashes[8]; 
  char dest[1024]; 

  if ( !lbCol && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 356, ASSERT_TYPE_ASSERT, "(lbCol)", (const char *)&queryFormat, "lbCol") )
    __debugbreak();
  Core_strcpy(dest, 0x400ui64, lbCol->statName);
  v4 = dest;
  navHashes[0] = Com_DDL_ConvertNavStringToHash(dest);
  v5 = 1;
  v6 = dest[0];
  if ( dest[0] )
  {
    v7 = 1i64;
    do
    {
      if ( v6 == 32 )
      {
        *v4 = 0;
        if ( (v4[1] & 0xDF) != 0 )
        {
          if ( v7 >= 8 )
            return CL_PlayerData_GetString(localControllerIndex, navHashes, v5, (const StatsGroup)lbCol->statsGroup);
          ++v5;
          navHashes[v7++] = Com_DDL_ConvertNavStringToHash(v4 + 1);
        }
      }
      v6 = *++v4;
    }
    while ( v6 );
  }
  return CL_PlayerData_GetString(localControllerIndex, navHashes, v5, (const StatsGroup)lbCol->statsGroup);
}

/*
==============
LB_HandleLevelDisplay
==============
*/
char *LB_HandleLevelDisplay(LbColumnDef *lbColDef, int xp)
{
  char ActiveGameMode; 
  int RankForXpAlien; 
  const char *RankDataMP; 
  int RankForXpMP; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 476, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    RankForXpMP = Com_GetRankForXpMP(xp);
    RankDataMP = Com_GetRankDataMP(RankForXpMP, RANKTABLE_DISPLAYLEVEL);
  }
  else
  {
    if ( ActiveGameMode != 3 )
    {
      lbGlob.feederText[0] = 0;
      return lbGlob.feederText;
    }
    RankForXpAlien = Com_GetRankForXpAlien(xp);
    RankDataMP = Com_GetRankDataAlien(RankForXpAlien, RANKTABLE_DISPLAYLEVEL);
  }
  Com_sprintf(lbGlob.feederText, 0x24ui64, (const char *)&queryFormat, RankDataMP);
  return lbGlob.feederText;
}

/*
==============
LB_HandleLevelIcon
==============
*/
const char *LB_HandleLevelIcon(LbColumnDef *lbColDef, int xp, int prestige)
{
  char ActiveGameMode; 
  int RankForXpAlien; 
  const GfxImage *RankIcon; 
  int RankForXpMP; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 505, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    RankForXpMP = Com_GetRankForXpMP(xp);
    RankIcon = Com_GetRankIcon(RankForXpMP, prestige);
  }
  else
  {
    if ( ActiveGameMode != 3 )
      return (char *)&queryFormat.fmt + 3;
    RankForXpAlien = Com_GetRankForXpAlien(xp);
    RankIcon = Com_GetAlienRankIcon(RankForXpAlien, prestige);
  }
  if ( RankIcon )
    return RankIcon->name;
  return (char *)&queryFormat.fmt + 3;
}

/*
==============
LB_HandleNumber
==============
*/
char *LB_HandleNumber(LbColumnDef *lbColDef, int value)
{
  int precision; 
  double v5; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 394, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  precision = lbColDef->precision;
  if ( precision )
  {
    v5 = (float)(powf_0(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)precision) ^ _xmm)) * (float)value);
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%.2f", v5);
  }
  else
  {
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%d", (unsigned int)value);
  }
  return lbGlob.feederText;
}

/*
==============
LB_HandlePercent
==============
*/
char *LB_HandlePercent(LbColumnDef *lbColDef, int value)
{
  int precision; 
  double v5; 

  if ( !lbColDef )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 540, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 394, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
      __debugbreak();
  }
  precision = lbColDef->precision;
  if ( precision )
  {
    v5 = (float)(powf_0(10.0, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)precision) ^ _xmm)) * (float)value);
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%.2f", v5);
  }
  else
  {
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%d", (unsigned int)value);
  }
  I_strcat(lbGlob.feederText, 0x27ui64, "%");
  return lbGlob.feederText;
}

/*
==============
LB_HandleTime
==============
*/
char *LB_HandleTime(LbColumnDef *lbColDef, int value)
{
  float v4; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  char *fmt; 
  __int64 v20; 
  const char *v21; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 411, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  LODWORD(v4) = COERCE_UNSIGNED_INT(powf_0(10.0, COERCE_FLOAT(_mm_cvtepi32_ps((__m128i)(unsigned int)lbColDef->precision).m128_u32[0] ^ _xmm)) * _mm_cvtepi32_ps((__m128i)(unsigned int)value).m128_f32[0]) & _xmm;
  _XMM7 = 0i64;
  __asm { vroundss xmm2, xmm7, xmm1, 1 }
  v7 = (int)*(float *)&_XMM2;
  if ( (int)*(float *)&_XMM2 < 1440 )
  {
    if ( v7 < 60 )
    {
      v14 = UI_SafeTranslateString("MENU/SECONDS_ABBREVIATION");
      v15 = v14;
      if ( v4 < 60.0 )
      {
        Com_sprintf(lbGlob.feederText, 0x24ui64, "%.2f%s", v4, v14);
        return lbGlob.feederText;
      }
      v16 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
      v13 = (unsigned int)v7;
      v21 = v15;
      __asm { vroundss xmm1, xmm7, xmm0, 1 }
      LODWORD(v20) = (int)*(float *)&_XMM1;
      fmt = (char *)v16;
    }
    else
    {
      v11 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
      v12 = UI_SafeTranslateString("MENU/HOURS_ABBREVIATION");
      v21 = v11;
      v13 = (unsigned int)(v7 / 60);
      LODWORD(v20) = v7 % 60;
      fmt = (char *)v12;
    }
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%02i%s %02i%s", v13, fmt, v20, v21);
    return lbGlob.feederText;
  }
  v8 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
  v9 = UI_SafeTranslateString("MENU/HOURS_ABBREVIATION");
  v10 = UI_SafeTranslateString("MENU/DAYS_ABBREVIATION");
  LODWORD(v20) = v7 % 1440 / 60;
  Com_sprintf(lbGlob.feederText, 0x24ui64, "%i%s %02i%s %02i%s", (unsigned int)(v7 / 1440), v10, v20, v9, v7 % 60, v8);
  return lbGlob.feederText;
}

/*
==============
LB_HandleTimeFull
==============
*/
char *LB_HandleTimeFull(LbColumnDef *lbColDef, int value)
{
  int v6; 
  double v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  __int64 v18; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 443, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  _XMM1 = 0i64;
  __asm { vroundss xmm3, xmm1, xmm2, 1 }
  v6 = (int)*(float *)&_XMM3;
  v7 = (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(powf_0(10.0, COERCE_FLOAT(_mm_cvtepi32_ps((__m128i)(unsigned int)lbColDef->precision).m128_u32[0] ^ _xmm)) * _mm_cvtepi32_ps((__m128i)(unsigned int)value).m128_f32[0]) & _xmm) - _mm_cvtepi32_ps((__m128i)(unsigned int)(60 * (int)*(float *)&_XMM3)).m128_f32[0]);
  if ( (int)*(float *)&_XMM3 < 1440 )
  {
    v12 = UI_SafeTranslateString("MENU/SECONDS_ABBREVIATION");
    v13 = v12;
    if ( v6 < 60 )
    {
      if ( v6 < 1 )
      {
        Com_sprintf(lbGlob.feederText, 0x24ui64, "%04.1f%s", v7, v12);
      }
      else
      {
        v16 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
        Com_sprintf(lbGlob.feederText, 0x24ui64, "%02i%s %04.1f%s", (unsigned int)(v6 % 60), v16, v7, v13);
      }
    }
    else
    {
      v14 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
      v15 = UI_SafeTranslateString("MENU/HOURS_ABBREVIATION");
      LODWORD(v18) = v6 % 60;
      Com_sprintf(lbGlob.feederText, 0x24ui64, "%02i%s %02i%s %04.1f%s", (unsigned int)(v6 / 60), v15, v18, v14, v7, v13);
    }
  }
  else
  {
    v8 = UI_SafeTranslateString("MENU/SECONDS_ABBREVIATION");
    v9 = UI_SafeTranslateString("MENU/MINUTES_ABBREVIATION");
    v10 = UI_SafeTranslateString("MENU/HOURS_ABBREVIATION");
    v11 = UI_SafeTranslateString("MENU/DAYS_ABBREVIATION");
    LODWORD(v18) = v6 % 1440 / 60;
    Com_sprintf(lbGlob.feederText, 0x24ui64, "%i%s %02i%s %02i%s %04.1f%s", (unsigned int)(v6 / 1440), v11, v18, v10, v6 % 60, v9, v7, v8);
  }
  return lbGlob.feederText;
}

/*
==============
LB_Init
==============
*/
void LB_Init(void)
{
  TaskManager_ConstructTaskSet(&lbGlob.tasks, "LB_Init");
  lbGlob.leaderboard.filter = 4;
  lbGlob.leaderboard.lastUpdate = 0;
  lbGlob.leaderboard.offset = 0;
  lbGlob.leaderboard.lbDef = NULL;
  lbGlob.writeCount = 0;
  lbGlob.leaderboard.forceRefresh = 1;
  memset_0(lbGlob.writeLeaderboards, 0, sizeof(lbGlob.writeLeaderboards));
  Dvar_BeginPermanentRegistration();
  lb_minrefresh = Dvar_RegisterInt("LNOOSTKON", 0, 0, 1800, 4u, "Minimum time (in seconds) between leaderboard fetches");
  lb_maxrows = Dvar_RegisterInt("TMOSMOLSL", 30, 1, 200, 4u, "Maximum number of rows to fetch");
  Dvar_EndPermanentRegistration();
  Cmd_AddCommandInternal("addlbexclude", LB_AddLBExclude_f, &stru_1544DE618);
  Cmd_AddCommandInternal("openleaderboard", LB_OpenLeaderboard_f, &stru_1544DE648);
  LB_Init_Platform();
}

/*
==============
LB_OpenLeaderboard
==============
*/
void LB_OpenLeaderboard(const char *name)
{
  lbGlob.leaderboard.lbDef = LB_LoadDef(name, 0);
  if ( !lbGlob.leaderboard.lbDef )
    Com_PrintError(22, "Unable to open leaderboard named %s.\n", name);
  lbGlob.leaderboard.forceRefresh = 1;
}

/*
==============
LB_OpenLeaderboardExt
==============
*/
void LB_OpenLeaderboardExt(const char *name, const char *leaderboardFilter, bool isVirtual)
{
  LeaderboardDef *Def; 
  unsigned int v6; 
  TrackType *v7; 
  double v8; 
  const char *trackType; 
  __int64 v10; 
  const char *v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  int v16; 
  int trackTypes; 

  Def = LB_LoadDef(name, isVirtual);
  lbGlob.leaderboard.lbDef = Def;
  if ( Def || (Com_PrintError(22, "Unable to open leaderboard named %s.\n", name), (Def = lbGlob.leaderboard.lbDef) != NULL) )
  {
    if ( leaderboardFilter )
    {
      v6 = 0;
      v7 = lbTrackTypes;
      *(__m256i *)&s_lbDef.name = *(__m256i *)&Def->name;
      *(_OWORD *)&s_lbDef.columns = *(_OWORD *)&Def->columns;
      v8 = *(double *)&Def->rankColIdX;
      lbGlob.leaderboard.lbDef = &s_lbDef;
      *(double *)&s_lbDef.rankColIdX = v8;
      while ( 2 )
      {
        trackType = v7->trackType;
        v10 = 0x7FFFFFFFi64;
        if ( !v7->trackType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v11 = (const char *)(leaderboardFilter - trackType);
        while ( 1 )
        {
          v12 = (unsigned __int8)trackType[(_QWORD)v11];
          v13 = v10;
          v14 = *(unsigned __int8 *)trackType++;
          --v10;
          if ( !v13 )
          {
LABEL_17:
            trackTypes = lbGlob.leaderboard.lbDef->trackTypes;
            if ( _bittest(&trackTypes, v6) )
            {
              lbGlob.leaderboard.lbDef->id += 100 * v6;
              lbGlob.leaderboard.lbDef->sourceLbId += 100 * v6;
            }
            return;
          }
          if ( v12 != v14 )
          {
            v15 = v12 + 32;
            if ( (unsigned int)(v12 - 65) > 0x19 )
              v15 = v12;
            v12 = v15;
            v16 = v14 + 32;
            if ( (unsigned int)(v14 - 65) > 0x19 )
              v16 = v14;
            if ( v12 != v16 )
              break;
          }
          if ( !v12 )
            goto LABEL_17;
        }
        ++v6;
        if ( (__int64)++v7 < (__int64)&unk_1482E05D0 )
          continue;
        break;
      }
    }
  }
}

/*
==============
LB_OpenLeaderboard_f
==============
*/
void LB_OpenLeaderboard_f()
{
  const char *v0; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    lbGlob.leaderboard.lbDef = LB_LoadDef(v0, 0);
    if ( !lbGlob.leaderboard.lbDef )
      Com_PrintError(22, "Unable to open leaderboard named %s.\n", v0);
    lbGlob.leaderboard.forceRefresh = 1;
  }
}

/*
==============
LB_SetWriteLeaderboards
==============
*/
void LB_SetWriteLeaderboards(const char *lbConfigStr)
{
  char v1; 
  char *v2; 
  int v3; 
  __int64 v4; 
  char *v5; 
  int v6; 
  const char **v7; 
  const char *v8; 
  LeaderboardDef *Def; 
  __int64 v10[16]; 
  char v11[1024]; 

  Core_strcpy(v11, 0x400ui64, lbConfigStr);
  v1 = v11[0];
  v10[0] = (__int64)v11;
  v2 = v11;
  v3 = 1;
  if ( v11[0] )
  {
    v4 = 1i64;
    do
    {
      v5 = v2 + 1;
      if ( v1 == 32 )
      {
        *v2 = 0;
        v1 = *v5;
        if ( (*v5 & 0xDF) != 0 )
        {
          if ( v4 >= 16 )
            break;
          ++v3;
          v10[v4++] = (__int64)v5;
        }
      }
      else
      {
        v1 = *v5;
      }
      ++v2;
    }
    while ( v1 );
  }
  if ( lbGlob.isWritingInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 212, ASSERT_TYPE_ASSERT, "(!lbGlob.isWritingInUse)", (const char *)&queryFormat, "!lbGlob.isWritingInUse", v10[0]) )
    __debugbreak();
  v6 = v3 - 1;
  lbGlob.isWritingInUse = 1;
  lbGlob.writeCount = 0;
  if ( v6 >= 0 )
  {
    v7 = (const char **)&v10[v6];
    do
    {
      v8 = *v7;
      if ( **v7 )
      {
        Def = LB_LoadDef(*v7, 0);
        if ( Def )
          lbGlob.writeLeaderboards[lbGlob.writeCount++] = Def;
        else
          Com_DPrintf(22, "Leaderboard '%s' in server config string not supported.\n", v8);
      }
      --v7;
      --v6;
    }
    while ( v6 >= 0 );
    if ( !lbGlob.isWritingInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\leaderboard.cpp", 234, ASSERT_TYPE_ASSERT, "(lbGlob.isWritingInUse)", (const char *)&queryFormat, "lbGlob.isWritingInUse") )
      __debugbreak();
  }
  lbGlob.isWritingInUse = 0;
  if ( lbGlob.writeCount > 0 )
    LB_RequestCacheLeaderboardValues();
}

/*
==============
LB_UploadPlayerData
==============
*/
bool LB_UploadPlayerData(const int localControllerIndex)
{
  char ActiveGameMode; 
  int v4; 
  unsigned int IndexByName; 
  LocalClientNum_t ClientFromController; 
  OmnvarData *Data; 

  if ( Live_IsSignedIn(localControllerIndex) )
  {
    if ( Live_IsUserSignedInToDemonware(localControllerIndex) )
    {
      ActiveGameMode = Com_GameMode_GetActiveGameMode();
      v4 = 3;
      if ( ActiveGameMode == 3 )
        v4 = 9;
      if ( LiveAntiCheat_FeatureIsBanned(localControllerIndex, v4) )
      {
        Com_DPrintf(22, "Not uploading leaderboard stats: local controller index %i is banned from leaderboard writes.\n", (unsigned int)localControllerIndex);
        return 0;
      }
      else if ( Live_IsInLiveGame() )
      {
        if ( lbGlob.writeCount > 0 )
        {
          IndexByName = BG_Omnvar_GetIndexByName("allow_write_leaderboards");
          if ( IndexByName != -1 )
          {
            ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
            Data = CG_Omnvar_GetData(ClientFromController, IndexByName);
            if ( Data )
            {
              if ( !Data->current.enabled )
              {
                Com_DPrintf(22, "Not uploading leaderboard stats: leaderboard writes have been disabled by the host for this client.\n");
                s_ShouldExcludeLb = 1;
              }
            }
          }
          return LB_UploadPlayerData_Platform(localControllerIndex);
        }
        else
        {
          Com_DPrintf(22, "Not uploading leaderboard stats: no write leaderboards specified.\n");
          return 0;
        }
      }
      else
      {
        Com_DPrintf(22, "Not uploading leaderboard stats: Not in XBL game.\n");
        return 0;
      }
    }
    else
    {
      Com_DPrintf(22, "Not uploading leaderboard stats: local controller index %i not signed in to DemonWare.\n", (unsigned int)localControllerIndex);
      return 0;
    }
  }
  else
  {
    Com_DPrintf(22, "Not uploading leaderboard stats: local controller index %i not signed in to live.\n", (unsigned int)localControllerIndex);
    return 0;
  }
}

