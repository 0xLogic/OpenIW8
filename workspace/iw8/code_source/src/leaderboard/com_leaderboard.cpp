/*
==============
LB_FeederItemText_Platform
==============
*/

const char *__fastcall LB_FeederItemText_Platform(const LocalClientNum_t localClientNum, int index, LbColumnDef *lbColDef)
{
  return ?LB_FeederItemText_Platform@@YAPEBDW4LocalClientNum_t@@HPEAULbColumnDef@@@Z(localClientNum, index, lbColDef);
}

/*
==============
LB_RequestCacheLeaderboardValues
==============
*/

void LB_RequestCacheLeaderboardValues(void)
{
  ?LB_RequestCacheLeaderboardValues@@YAXXZ();
}

/*
==============
LB_InviteSelectedPlayerToClan
==============
*/

void __fastcall LB_InviteSelectedPlayerToClan(const int controllerIndex)
{
  ?LB_InviteSelectedPlayerToClan@@YAXH@Z(controllerIndex);
}

/*
==============
LB_EndOngoingLiveTasks
==============
*/

void LB_EndOngoingLiveTasks(void)
{
  ?LB_EndOngoingLiveTasks@@YAXXZ();
}

/*
==============
LB_GetCol
==============
*/

bool __fastcall LB_GetCol(const int localControllerIndex, const char *lbName, const char *colName, const XUID xuid, LbGetColData *colData, overlappedTask *task)
{
  return ?LB_GetCol@@YA_NHPEBD0UXUID@@PEAULbGetColData@@PEAUoverlappedTask@@@Z(localControllerIndex, lbName, colName, xuid, colData, task);
}

/*
==============
LB_OnGetGamertagsComplete
==============
*/

void __fastcall LB_OnGetGamertagsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?LB_OnGetGamertagsComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
LB_ReadLeaderboardToCacheComplete
==============
*/

taskCompleteResults __fastcall LB_ReadLeaderboardToCacheComplete(const int slot)
{
  return ?LB_ReadLeaderboardToCacheComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
LB_UploadPlayerData_Platform
==============
*/

bool __fastcall LB_UploadPlayerData_Platform(const int localControllerIndex)
{
  return ?LB_UploadPlayerData_Platform@@YA_NH@Z(localControllerIndex);
}

/*
==============
LB_ReadRowForUser
==============
*/

void __fastcall LB_ReadRowForUser(const int controllerIndex, const unsigned __int64 entityID, const unsigned int leaderboardID, const int taskType, void *userStats)
{
  ?LB_ReadRowForUser@@YAXH_KIHPEAX@Z(controllerIndex, entityID, leaderboardID, taskType, userStats);
}

/*
==============
LB_CheckOngoingTasks
==============
*/

void LB_CheckOngoingTasks(void)
{
  ?LB_CheckOngoingTasks@@YAXXZ();
}

/*
==============
Stats_TestComplete
==============
*/

void Stats_TestComplete(void)
{
  ?Stats_TestComplete@@YAXXZ();
}

/*
==============
LB_WriteRowForUser
==============
*/

bool __fastcall LB_WriteRowForUser(const int controllerIndex, const unsigned int leaderboardID, const int taskType, void *userStats, const int numStats, const bdStats::bdWriteType writeType)
{
  return ?LB_WriteRowForUser@@YA_NHIHPEAXHW4bdWriteType@bdStats@@@Z(controllerIndex, leaderboardID, taskType, userStats, numStats, writeType);
}

/*
==============
LB_GetColString
==============
*/

const char *__fastcall LB_GetColString(LbGetColData *colData)
{
  return ?LB_GetColString@@YAPEBDPEAULbGetColData@@@Z(colData);
}

/*
==============
LB_CanInviteSelectedPlayerToClan
==============
*/

bool __fastcall LB_CanInviteSelectedPlayerToClan(const int controllerIndex)
{
  return ?LB_CanInviteSelectedPlayerToClan@@YA_NH@Z(controllerIndex);
}

/*
==============
LB_UploadTrackersToLeaderboardComplete
==============
*/

taskCompleteResults __fastcall LB_UploadTrackersToLeaderboardComplete(const int slot)
{
  return ?LB_UploadTrackersToLeaderboardComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
Stats_Test
==============
*/

void __fastcall Stats_Test(int controllerIndex)
{
  ?Stats_Test@@YAXH@Z(controllerIndex);
}

/*
==============
LB_FeederItemText_Player
==============
*/

const char *__fastcall LB_FeederItemText_Player(const LocalClientNum_t localClientNum, LbColumnDef *lbColDef)
{
  return ?LB_FeederItemText_Player@@YAPEBDW4LocalClientNum_t@@PEAULbColumnDef@@@Z(localClientNum, lbColDef);
}

/*
==============
LB_WritePlayerInfractionComplete
==============
*/

taskCompleteResults __fastcall LB_WritePlayerInfractionComplete(const int slot)
{
  return ?LB_WritePlayerInfractionComplete@@YA?AW4taskCompleteResults@@H@Z(slot);
}

/*
==============
LB_FinishUploadTasks
==============
*/

void LB_FinishUploadTasks(void)
{
  ?LB_FinishUploadTasks@@YAXXZ();
}

/*
==============
LB_GetColComplete
==============
*/

taskCompleteResults __fastcall LB_GetColComplete(overlappedTask *task)
{
  return ?LB_GetColComplete@@YA?AW4taskCompleteResults@@PEAUoverlappedTask@@@Z(task);
}

/*
==============
LB_Init_Platform
==============
*/

void LB_Init_Platform(void)
{
  ?LB_Init_Platform@@YAXXZ();
}

/*
==============
LB_UpdateLeaderboard
==============
*/

bool __fastcall LB_UpdateLeaderboard(const LocalClientNum_t localClientNum, const int filter, const int from, const int to, const bool isPlatformOnly)
{
  return ?LB_UpdateLeaderboard@@YA_NW4LocalClientNum_t@@HHH_N@Z(localClientNum, filter, from, to, isPlatformOnly);
}

/*
==============
LB_GetDisplayableGamertags
==============
*/

bool __fastcall LB_GetDisplayableGamertags(Leaderboard *lb, const int controllerIndex)
{
  return ?LB_GetDisplayableGamertags@@YA_NPEAULeaderboard@@H@Z(lb, controllerIndex);
}

/*
==============
LB_GetUserForRow
==============
*/

bool __fastcall LB_GetUserForRow(const int controllerIndex, const int rowIndex, XUID *outUser)
{
  return ?LB_GetUserForRow@@YA_NHHPEAUXUID@@@Z(controllerIndex, rowIndex, outUser);
}

/*
==============
LB_AddVisibleRowsToPlayerCardCache
==============
*/

void __fastcall LB_AddVisibleRowsToPlayerCardCache(const int controllerIndex)
{
  ?LB_AddVisibleRowsToPlayerCardCache@@YAXH@Z(controllerIndex);
}

/*
==============
LB_UploadTrackersToLeaderboardInProgress
==============
*/

bool __fastcall LB_UploadTrackersToLeaderboardInProgress()
{
  return ?LB_UploadTrackersToLeaderboardInProgress@@YA_NXZ();
}

/*
==============
LB_UploadTrackersToLeaderboard
==============
*/

bool __fastcall LB_UploadTrackersToLeaderboard(const int localControllerIndex, bdStatsInfo **statsInfo, int statsInfoCount)
{
  return ?LB_UploadTrackersToLeaderboard@@YA_NHQEAPEAVbdStatsInfo@@H@Z(localControllerIndex, statsInfo, statsInfoCount);
}

/*
==============
LB_ClearDWOverlappedTasks
==============
*/

void __fastcall LB_ClearDWOverlappedTasks(const int controllerIndex)
{
  ?LB_ClearDWOverlappedTasks@@YAXH@Z(controllerIndex);
}

/*
==============
LB_VR_HandleNumber
==============
*/
char *LB_VR_HandleNumber(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  XUserColExt = LB_VR_GetXUserColExt(row, lbColDef);
  return LB_HandleNumber(lbColDef, XUserColExt);
}

/*
==============
LB_VR_HandleTime
==============
*/
char *LB_VR_HandleTime(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2156, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2157, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_VR_GetXUserColExt(row, lbColDef);
  return LB_HandleTime(lbColDef, XUserColExt);
}

/*
==============
LB_VR_HandleTimeFull
==============
*/
char *LB_VR_HandleTimeFull(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2168, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2169, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_VR_GetXUserColExt(row, lbColDef);
  return LB_HandleTimeFull(lbColDef, XUserColExt);
}

/*
==============
LB_VR_HandleLevelDisplay
==============
*/
char *LB_VR_HandleLevelDisplay(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserCol; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2180, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2181, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserCol = LB_VR_GetXUserCol(row, lbColDef->id);
  return LB_HandleLevelDisplay(lbColDef, XUserCol);
}

/*
==============
LB_VR_HandleSeasonLevel
==============
*/
char *LB_VR_HandleSeasonLevel(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int prestigeColId; 
  unsigned int XUserCol; 

  if ( !lbGlob.leaderboard.lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2190, ASSERT_TYPE_ASSERT, "(lbGlob.leaderboard.lbDef)", (const char *)&queryFormat, "lbGlob.leaderboard.lbDef") )
    __debugbreak();
  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2191, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2192, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  prestigeColId = lbGlob.leaderboard.lbDef->prestigeColId;
  if ( prestigeColId < 0 )
    return (char *)&queryFormat.fmt + 3;
  XUserCol = LB_VR_GetXUserCol(row, prestigeColId);
  Com_sprintf(buffer_1, 0x24ui64, "%i", XUserCol);
  return buffer_1;
}

/*
==============
LB_VR_HandlePercent
==============
*/
char *LB_VR_HandlePercent(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2209, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2210, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_VR_GetXUserColExt(row, lbColDef);
  return LB_HandlePercent(lbColDef, XUserColExt);
}

/*
==============
HandleNumber
==============
*/
char *HandleNumber(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  XUserColExt = LB_GetXUserColExt(row, lbColDef);
  return LB_HandleNumber(lbColDef, XUserColExt);
}

/*
==============
HandleTime
==============
*/
char *HandleTime(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2229, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2230, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_GetXUserColExt(row, lbColDef);
  return LB_HandleTime(lbColDef, XUserColExt);
}

/*
==============
HandleTimeFull
==============
*/
char *HandleTimeFull(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2241, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2242, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_GetXUserColExt(row, lbColDef);
  return LB_HandleTimeFull(lbColDef, XUserColExt);
}

/*
==============
HandleLevelDisplay
==============
*/
char *HandleLevelDisplay(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserCol; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2253, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2254, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserCol = LB_GetXUserCol(row, lbColDef->id);
  return LB_HandleLevelDisplay(lbColDef, XUserCol);
}

/*
==============
HandleSeasonLevel
==============
*/
char *HandleSeasonLevel(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int prestigeColId; 
  unsigned int XUserCol; 

  if ( !lbGlob.leaderboard.lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2263, ASSERT_TYPE_ASSERT, "(lbGlob.leaderboard.lbDef)", (const char *)&queryFormat, "lbGlob.leaderboard.lbDef") )
    __debugbreak();
  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2264, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2265, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  prestigeColId = lbGlob.leaderboard.lbDef->prestigeColId;
  if ( prestigeColId < 0 )
    return (char *)&queryFormat.fmt + 3;
  XUserCol = LB_GetXUserCol(row, prestigeColId);
  Com_sprintf(buffer_2, 0x24ui64, "%i", XUserCol);
  return buffer_2;
}

/*
==============
HandlePercent
==============
*/
char *HandlePercent(LbColumnDef *lbColDef, LeaderBoardRow<10> *row)
{
  int XUserColExt; 

  if ( !lbColDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2282, ASSERT_TYPE_ASSERT, "(lbColDef)", (const char *)&queryFormat, "lbColDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2283, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  XUserColExt = LB_GetXUserColExt(row, lbColDef);
  return LB_HandlePercent(lbColDef, XUserColExt);
}

/*
==============
LB_AddVisibleRowsToPlayerCardCache
==============
*/
void LB_AddVisibleRowsToPlayerCardCache(const int controllerIndex)
{
  unsigned int v2; 
  unsigned __int64 *v3; 
  XUID *v4; 
  XUID result; 

  if ( !lbGlob.leaderboard.isUpdating )
  {
    v2 = 0;
    v3 = (unsigned __int64 *)&lbGlob.leaderboard.userStats.m_leaderBoardEntries[0]._bytes_20[8];
    do
    {
      v4 = XUID::FromUniversalId(&result, *v3);
      PlayercardCache_UpdateLeaderboardCaching(controllerIndex, (XUID)v4->m_id);
      ++v2;
      v3 += 26;
    }
    while ( v2 < 0xC8 );
    PlayercardCache_TriggerCachedDownload(controllerIndex);
  }
}

/*
==============
LB_CacheLeaderboardValues
==============
*/
char LB_CacheLeaderboardValues()
{
  CacheLbTaskData *v0; 
  int v1; 
  __int64 v2; 
  int *v3; 
  __int64 v4; 
  int writeCount; 
  int ControllerFromClient; 
  int v7; 
  int PrestigeMP; 
  int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  LeaderboardDef **writeLeaderboards; 
  LeaderboardDef *v14; 
  int v15; 
  int v16; 
  bool *p_prestige; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v22; 
  LeaderboardDef *v23; 
  __int64 v24; 
  LeaderboardDef **v25; 
  int *v26; 
  bdStatsInfoEx v27; 
  LocalClientNum_t localClientNum; 
  int v29; 
  __int64 v30; 

  v0 = NULL;
  LB_ClearCache();
  v1 = 0;
  localClientNum = LOCAL_CLIENT_0;
  v2 = 0i64;
  v22 = 0i64;
  v3 = s_lbCacheStatsCount;
  v26 = s_lbCacheStatsCount;
  v4 = 0i64;
  v30 = 0i64;
  do
  {
    LOBYTE(writeCount) = CL_IsLocalClientActive((LocalClientNum_t)v1);
    if ( (_BYTE)writeCount )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
      LOBYTE(writeCount) = Live_IsUserSignedInToDemonware(ControllerFromClient);
      if ( (_BYTE)writeCount )
      {
        v7 = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v1);
        PrestigeMP = CL_PlayerData_GetPrestigeMP(v7);
        v9 = 0;
        v10 = 0i64;
        v11 = 0;
        v29 = 0;
        v12 = PrestigeMP;
        v24 = PrestigeMP;
        writeCount = lbGlob.writeCount;
        if ( lbGlob.writeCount > 0 )
        {
          writeLeaderboards = lbGlob.writeLeaderboards;
          v25 = lbGlob.writeLeaderboards;
          do
          {
            v14 = *writeLeaderboards;
            v23 = v14;
            if ( v14->updateType > LBUPDATE_TYPE_NORMAL )
            {
              v15 = 1;
              v16 = 0;
              p_prestige = &lbTrackTypes[0].prestige;
              do
              {
                if ( (v15 & v14->trackTypes) != 0 && (!*p_prestige || v12) )
                {
                  v18 = *v3;
                  v0 = &s_cacheLbTaskData[0][v2 + (int)v18 / 5];
                  v0->lbReadIDs[v10] = v16 + v14->id;
                  v0->lbReadCount = v9 + 1;
                  bdStatsInfoEx::bdStatsInfoEx(&v27, &s_lbCacheStats[0][v30 + v18]);
                  v20 = v19;
                  bdReferencable::operator=((bdReferencable *)((char *)&v0->statsResults[v10].__vftable + *(int *)(*((_QWORD *)&v0->statsResults[v10].__vftable + 1) + 4i64) + 8), (const bdReferencable *)(*(int *)(*(_QWORD *)(v19 + 8) + 4i64) + v19 + 8));
                  *((_DWORD *)&v0->statsResults[v10].__vftable + 4) = *(_DWORD *)(v20 + 16);
                  *((_DWORD *)&v0->statsResults[v10].__vftable + 5) = *(_DWORD *)(v20 + 20);
                  *((_QWORD *)&v0->statsResults[v10].__vftable + 3) = *(_QWORD *)(v20 + 24);
                  v0->statsResults[v10].m_statsInfo = *(bdStatsInfo **)(v20 + 32);
                  bdStatsInfoEx::~bdStatsInfoEx((bdStatsInfoEx *)v27.gap28);
                  bdReferencable::~bdReferencable((bdReferencable *)v27.gap28);
                  v0->statsResultsPtr[v10] = &v0->statsResults[v9];
                  v3 = v26;
                  ++*v26;
                  if ( v0->lbReadCount == 5 )
                  {
                    LB_GetPlayerStats(localClientNum, v0);
                    v9 = 0;
                    v10 = 0i64;
                  }
                  else
                  {
                    ++v9;
                    ++v10;
                  }
                  v2 = v22;
                  v12 = v24;
                  v14 = v23;
                }
                v16 += 100;
                v15 = __ROL4__(v15, 1);
                p_prestige += 16;
              }
              while ( v16 < 800 );
              writeCount = lbGlob.writeCount;
              v11 = v29;
            }
            v29 = ++v11;
            writeLeaderboards = ++v25;
          }
          while ( v11 < writeCount );
          v1 = localClientNum;
          v4 = v30;
        }
        if ( v0 && v0->lbReadCount > 0 )
          LOBYTE(writeCount) = LB_GetPlayerStats((const LocalClientNum_t)v1, v0);
      }
    }
    localClientNum = ++v1;
    v4 += 30i64;
    v30 = v4;
    v2 += 6i64;
    v22 = v2;
    v26 = ++v3;
  }
  while ( v1 < 2 );
  return writeCount;
}

/*
==============
LB_CalculateUIValue
==============
*/
__int64 LB_CalculateUIValue(LeaderBoardRow<10> *row, int colX, int colY, int multiplier)
{
  unsigned int v4; 
  unsigned int v5; 
  int v8; 
  __int64 v10; 
  unsigned int v11; 
  __int64 v12; 
  int v13; 

  v4 = 0;
  v5 = 0;
  if ( colX != 65534 )
    v5 = colX;
  if ( v5 == 65532 )
    v5 = 9;
  if ( colY != 65534 )
    v4 = colY;
  if ( v4 == 65532 )
    v4 = 9;
  if ( v5 >= 0xA )
  {
    v13 = 10;
    v11 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1996, ASSERT_TYPE_ASSERT, "(unsigned)( colX ) < (unsigned)( row->getNumColumns() )", "colX doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( v4 >= 0xA )
  {
    LODWORD(v12) = 10;
    LODWORD(v10) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1997, ASSERT_TYPE_ASSERT, "(unsigned)( colY ) < (unsigned)( row->getNumColumns() )", "colY doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v8 = *(_DWORD *)&row->m_entityName[4 * v4 + 72];
  if ( !v8 )
    v8 = 1;
  return (unsigned int)(multiplier * *(_DWORD *)&row->m_entityName[4 * v5 + 72] / v8);
}

/*
==============
LB_CanInviteSelectedPlayerToClan
==============
*/
bool LB_CanInviteSelectedPlayerToClan(const int controllerIndex)
{
  return 0;
}

/*
==============
LB_CheckOngoingTasks
==============
*/
void LB_CheckOngoingTasks(void)
{
  LB_CompleteOngoingTasks(LB_TASKMASK_ALL);
  if ( s_lbCacheRequest )
  {
    s_lbCacheRequest = 0;
    LB_CacheLeaderboardValues();
  }
}

/*
==============
LB_ClearCache
==============
*/
__int64 *LB_ClearCache()
{
  __int64 *result; 
  __int64 v1; 
  __int64 v2; 

  result = &s_lbCacheStats[0][0].m_rating;
  *(_QWORD *)s_lbCacheStatsCount = 0i64;
  v1 = 2i64;
  do
  {
    v2 = 2i64;
    do
    {
      *((_DWORD *)result - 6) = -1;
      *result = 0i64;
      *(result - 2) = 0i64;
      result[11] = 0i64;
      result[12] = 0i64;
      result[13] = 0i64;
      result[14] = 0i64;
      result[15] = 0i64;
      *((_DWORD *)result + 46) = -1;
      result[26] = 0i64;
      result[24] = 0i64;
      result[37] = 0i64;
      result[38] = 0i64;
      result[39] = 0i64;
      result[40] = 0i64;
      result[41] = 0i64;
      *((_DWORD *)result + 98) = -1;
      result[52] = 0i64;
      result[50] = 0i64;
      result[63] = 0i64;
      result[64] = 0i64;
      result[65] = 0i64;
      result[66] = 0i64;
      result[67] = 0i64;
      *((_DWORD *)result + 150) = -1;
      result[78] = 0i64;
      result[76] = 0i64;
      result[89] = 0i64;
      result[90] = 0i64;
      result[91] = 0i64;
      result[92] = 0i64;
      result[93] = 0i64;
      *((_DWORD *)result + 202) = -1;
      result[104] = 0i64;
      result[102] = 0i64;
      result[115] = 0i64;
      result[116] = 0i64;
      result[117] = 0i64;
      result[118] = 0i64;
      result[119] = 0i64;
      *((_DWORD *)result + 254) = -1;
      result[130] = 0i64;
      result[128] = 0i64;
      result[141] = 0i64;
      result[142] = 0i64;
      result[143] = 0i64;
      result[144] = 0i64;
      result[145] = 0i64;
      *((_DWORD *)result + 306) = -1;
      result[156] = 0i64;
      result[154] = 0i64;
      result[167] = 0i64;
      result[168] = 0i64;
      result[169] = 0i64;
      result[170] = 0i64;
      result[171] = 0i64;
      *((_DWORD *)result + 358) = -1;
      result[182] = 0i64;
      result[180] = 0i64;
      result[193] = 0i64;
      result[194] = 0i64;
      result[195] = 0i64;
      result[196] = 0i64;
      result[197] = 0i64;
      *((_DWORD *)result + 410) = -1;
      result[208] = 0i64;
      result[206] = 0i64;
      result[219] = 0i64;
      result[220] = 0i64;
      result[221] = 0i64;
      result[222] = 0i64;
      result[223] = 0i64;
      *((_DWORD *)result + 462) = -1;
      result[234] = 0i64;
      result[232] = 0i64;
      result[245] = 0i64;
      result[246] = 0i64;
      result[247] = 0i64;
      result[248] = 0i64;
      result[249] = 0i64;
      *((_DWORD *)result + 514) = -1;
      result[260] = 0i64;
      result[258] = 0i64;
      result[271] = 0i64;
      result[272] = 0i64;
      result[273] = 0i64;
      result[274] = 0i64;
      result[275] = 0i64;
      *((_DWORD *)result + 566) = -1;
      result[286] = 0i64;
      result[284] = 0i64;
      result[297] = 0i64;
      result[298] = 0i64;
      result[299] = 0i64;
      result[300] = 0i64;
      result[301] = 0i64;
      *((_DWORD *)result + 618) = -1;
      result[312] = 0i64;
      result[310] = 0i64;
      result[323] = 0i64;
      result[324] = 0i64;
      result[325] = 0i64;
      result[326] = 0i64;
      result[327] = 0i64;
      *((_DWORD *)result + 670) = -1;
      result[338] = 0i64;
      result[336] = 0i64;
      result[349] = 0i64;
      result[350] = 0i64;
      result[351] = 0i64;
      result[352] = 0i64;
      result[353] = 0i64;
      *((_DWORD *)result + 722) = -1;
      result[364] = 0i64;
      result[362] = 0i64;
      result[375] = 0i64;
      result[376] = 0i64;
      result[377] = 0i64;
      result[378] = 0i64;
      result[379] = 0i64;
      result += 390;
      --v2;
    }
    while ( v2 );
    --v1;
  }
  while ( v1 );
  return result;
}

/*
==============
LB_ClearDWOverlappedTasks
==============
*/
void LB_ClearDWOverlappedTasks(const int controllerIndex)
{
  TaskManager_ClearOverlappedTasksForController(lbGlob.tasks.tasks, controllerIndex);
}

/*
==============
LB_CombineUpdate
==============
*/
bool LB_CombineUpdate(const int localControllerIndex, const unsigned __int64 userID, const LeaderboardDef *lbDef, LeaderBoardRow<10> *lbRow, const int trackType, int *uploadRows)
{
  LocalClientNum_t ClientFromController; 
  unsigned int v11; 
  int *v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  _DWORD *v18; 
  unsigned int *v19; 
  int i; 
  __int64 columnCount; 
  int *p_id; 
  int v23; 
  int v24; 
  int v25; 
  __int64 v26; 
  double v27; 
  bool result; 
  __m256i v29; 
  double v30; 

  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  v11 = 0;
  v12 = &v29.m256i_i32[1];
  do
  {
    v11 += 10;
    *(v12 - 1) = 0x7FFFFFFF;
    *v12 = 0x7FFFFFFF;
    v12[1] = 0x7FFFFFFF;
    v12[2] = 0x7FFFFFFF;
    v12[3] = 0x7FFFFFFF;
    v12[4] = 0x7FFFFFFF;
    v12[5] = 0x7FFFFFFF;
    v12[6] = 0x7FFFFFFF;
    v12[7] = 0x7FFFFFFF;
    v12[8] = 0x7FFFFFFF;
    v12 += 10;
  }
  while ( v11 < 0xA );
  v13 = 0;
  v14 = ClientFromController;
  v15 = lbDef->id + 100 * trackType;
  v16 = s_lbCacheStatsCount[ClientFromController];
  if ( (int)v16 > 0 )
  {
    v17 = 0i64;
    v18 = &s_lbCacheStats[0][0]._bytes_20[6240 * ClientFromController];
    do
    {
      if ( *v18 == v15 )
        break;
      ++v13;
      ++v17;
      v18 += 52;
    }
    while ( v17 < v16 );
  }
  if ( v13 >= (int)v16 )
    return 0;
  v19 = &s_lbCacheStats[0][0].m_secondsSinceUpdate + 1560 * v14 + 52 * v13 + 1;
  for ( i = 0; i < 4; ++i )
  {
    if ( LB_MakeRow(localControllerIndex, lbDef, lbRow, (LbAggType)i, userID) )
    {
      columnCount = lbDef->columnCount;
      if ( columnCount > 0 )
      {
        p_id = &lbDef->columns->id;
        while ( 1 )
        {
          v23 = *p_id;
          if ( *p_id < 65530 )
            goto LABEL_17;
          if ( v23 <= 65531 )
            goto LABEL_16;
          if ( v23 != 65532 )
            break;
          v23 = 9;
LABEL_17:
          v24 = *(_DWORD *)&lbRow->m_entityName[4 * v23 + 72];
          v25 = v19[v23];
          if ( v24 != 0x7FFFFFFF )
          {
            if ( i )
            {
              if ( i != 1 )
              {
                if ( i == 2 )
                {
                  v29.m256i_i32[v23] = v25 + v24;
                }
                else if ( i == 3 )
                {
                  v29.m256i_i32[v23] = v24;
                }
                goto LABEL_31;
              }
              if ( v24 > v25 )
                v25 = *(_DWORD *)&lbRow->m_entityName[4 * v23 + 72];
            }
            else if ( v24 < v25 )
            {
              v25 = *(_DWORD *)&lbRow->m_entityName[4 * v23 + 72];
            }
            v29.m256i_i32[v23] = v25;
          }
LABEL_31:
          p_id += 14;
          if ( !--columnCount )
            goto LABEL_32;
        }
        if ( (unsigned int)(v23 - 65533) > 2 )
          goto LABEL_17;
LABEL_16:
        v23 = 0;
        goto LABEL_17;
      }
    }
LABEL_32:
    ;
  }
  v26 = v29.m256i_i32[0];
  lbRow->m_rating = v29.m256i_i32[0];
  if ( v26 != 0x7FFFFFFF )
  {
    v27 = v30;
    *(__m256i *)(&lbRow->m_secondsSinceUpdate + 1) = v29;
    *(double *)&lbRow->m_columns[16] = v27;
    *(_DWORD *)lbRow->_bytes_20 = v15;
    result = 1;
    lbRow->m_writeType = STAT_WRITE_REPLACE;
    ++*uploadRows;
    return result;
  }
  return 0;
}

/*
==============
LB_CompareXUserStatsRowRanks
==============
*/
__int64 LB_CompareXUserStatsRowRanks(const void *r1, const void *r2)
{
  unsigned __int64 v4; 
  unsigned __int64 v5; 

  if ( !r1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 697, ASSERT_TYPE_ASSERT, "(r1)", (const char *)&queryFormat, "r1") )
    __debugbreak();
  if ( !r2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 698, ASSERT_TYPE_ASSERT, "(r2)", (const char *)&queryFormat, "r2") )
    __debugbreak();
  v4 = *((_QWORD *)r1 + 8);
  v5 = *((_QWORD *)r2 + 8);
  if ( !v4 )
    return v5 != 0;
  if ( v5 && v4 >= v5 )
    return v4 > v5;
  return 0xFFFFFFFFi64;
}

/*
==============
LB_CompleteOngoingTasks
==============
*/
void LB_CompleteOngoingTasks(const LbTaskMask taskTypeMaskFilter)
{
  int *p_type; 
  unsigned int v3; 
  overlappedTask *tasks; 
  taskCompleteResults v5; 
  taskCompleteResults LeaderboardComplete; 
  taskCompleteResults LeaderboardToCacheComplete; 
  taskCompleteResults v8; 
  taskCompleteResults v9; 
  __int64 v10; 
  __int64 v11; 

  p_type = &lbGlob.tasks.tasks[0].type;
  v3 = 0;
  tasks = lbGlob.tasks.tasks;
  do
  {
    if ( *((_BYTE *)p_type + 4) && _bittest((const int *)&taskTypeMaskFilter, *p_type) )
    {
      switch ( *p_type )
      {
        case 0:
        case 1:
        case 2:
          CL_Mgr_GetClientFromController(*((unsigned __int8 *)p_type + 5));
          LeaderboardComplete = LB_ReadLeaderboardComplete(v3);
          if ( LeaderboardComplete )
          {
            if ( LeaderboardComplete != TASK_COMPLETE )
              Com_Printf(16, "Error reading leaderboard stats\n");
          }
          break;
        case 3:
          CL_Mgr_GetClientFromController(*((unsigned __int8 *)p_type + 5));
          LeaderboardToCacheComplete = LB_ReadLeaderboardToCacheComplete(v3);
          if ( LeaderboardToCacheComplete && LeaderboardToCacheComplete != TASK_COMPLETE )
            Com_Printf(16, "Error caching leaderboard stats\n");
          break;
        case 4:
          if ( v3 >= 0x20 )
          {
            LODWORD(v11) = 32;
            LODWORD(v10) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1339, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_type + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1340, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].active)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].active") )
            __debugbreak();
          if ( *p_type != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1341, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].type == LB_TASK_UPLOADSTATS)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].type == LB_TASK_UPLOADSTATS") )
            __debugbreak();
          v5 = dwWriteStatsComplete(tasks);
          if ( v5 )
            TaskManager_ClearTask(tasks);
          if ( v5 && v5 != TASK_COMPLETE )
            Com_Printf(16, "Error uploading leaderboard stats\n");
          break;
        case 5:
          CL_Mgr_GetClientFromController(*((unsigned __int8 *)p_type + 5));
          if ( v3 >= 0x20 )
          {
            LODWORD(v11) = 32;
            LODWORD(v10) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1944, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_type + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1945, ASSERT_TYPE_ASSERT, "(uploadStatsOverlappedIO->active)", (const char *)&queryFormat, "uploadStatsOverlappedIO->active") )
            __debugbreak();
          if ( *p_type != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1946, ASSERT_TYPE_ASSERT, "(uploadStatsOverlappedIO->type == LB_TASK_UPLOAD_TRACKER)", (const char *)&queryFormat, "uploadStatsOverlappedIO->type == LB_TASK_UPLOAD_TRACKER") )
            __debugbreak();
          v8 = dwWriteStatsComplete((overlappedTask *const)(p_type - 6));
          if ( v8 )
            TaskManager_ClearTask((overlappedTask *)(p_type - 6));
          if ( v8 && v8 != TASK_COMPLETE )
            Com_Printf(16, "Error uploading data to tracker leaderboards.\n");
          break;
        case 6:
          if ( v3 >= 0x20 )
          {
            LODWORD(v11) = 32;
            LODWORD(v10) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2828, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          if ( !*((_BYTE *)p_type + 4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2829, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].active)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].active") )
            __debugbreak();
          if ( *p_type != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2830, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].type == LB_TASK_PLAYER_INFRACTION_WRITE)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].type == LB_TASK_PLAYER_INFRACTION_WRITE") )
            __debugbreak();
          if ( !*((_QWORD *)p_type + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2831, ASSERT_TYPE_ASSERT, "(overlappedIO->data)", (const char *)&queryFormat, "overlappedIO->data") )
            __debugbreak();
          v9 = dwWriteStatsComplete((overlappedTask *const)(p_type - 6));
          if ( v9 )
            TaskManager_ClearTask((overlappedTask *)(p_type - 6));
          if ( v9 && v9 != TASK_COMPLETE )
            Com_Printf(16, "Error writing infraction player leaderboard.\n");
          break;
        default:
          LODWORD(v10) = *p_type;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2596, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown live leaderboard task type %i\n", v10) )
            __debugbreak();
          break;
      }
    }
    ++v3;
    ++tasks;
    p_type += 10;
  }
  while ( (int)v3 < 32 );
}

/*
==============
LB_EndOngoingLiveTasks
==============
*/
void LB_EndOngoingLiveTasks(void)
{
  ;
}

/*
==============
LB_FeederItemText_Platform
==============
*/
const char *LB_FeederItemText_Platform(const LocalClientNum_t localClientNum, int index, LbColumnDef *lbColDef)
{
  LeaderBoardRow<10> *v6; 
  __int64 type; 
  const char *RankText; 

  if ( lbGlob.leaderboard.isUpdating || index < lbGlob.leaderboard.offset || index >= (signed int)(lbGlob.leaderboard.offset + lbGlob.leaderboard.userStats.numResults) )
    return (char *)&queryFormat.fmt + 3;
  if ( index >= lbGlob.leaderboard.userStats.displayableRows && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2394, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( lbGlob.leaderboard.userStats.displayableRows )", "index doesn't index lbGlob.leaderboard.userStats.displayableRows\n\t%i not in [0, %i)", index, lbGlob.leaderboard.userStats.displayableRows) )
    __debugbreak();
  lbGlob.feederText[0] = 0;
  if ( index - lbGlob.leaderboard.offset < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2398, ASSERT_TYPE_ASSERT, "(index - lbGlob.leaderboard.offset >= 0)", (const char *)&queryFormat, "index - lbGlob.leaderboard.offset >= 0") )
    __debugbreak();
  v6 = &lbGlob.leaderboard.userStats.m_leaderBoardEntries[index - lbGlob.leaderboard.offset];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2401, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  CL_Mgr_GetControllerFromClient(localClientNum);
  if ( lbColDef->id == 65533 )
  {
    Core_strcpy(lbGlob.feederText, 0x27ui64, v6->m_entityName);
    Com_TruncatePlayerName(lbGlob.feederText, lbGlob.feederText, 0x27ui64);
    return lbGlob.feederText;
  }
  else if ( lbColDef->id == 0xFFFF )
  {
    RankText = LB_GetRankText(v6->m_rank);
    Core_strcpy(lbGlob.feederText, 0x27ui64, RankText);
    return lbGlob.feederText;
  }
  else
  {
    type = lbColDef->type;
    if ( lbGlob.leaderboard.lbDef->updateType == LBUPDATE_TYPE_VIRTUAL )
      return lbVrFeederItemTextHandlers[type](lbColDef, v6);
    else
      return lbFeederItemTextHandlers[type](lbColDef, v6);
  }
}

/*
==============
LB_FeederItemText_Player
==============
*/
char *LB_FeederItemText_Player(const LocalClientNum_t localClientNum, LbColumnDef *lbColDef)
{
  int ControllerFromClient; 
  unsigned __int64 v4; 
  unsigned int v5; 
  unsigned int numResults; 
  _QWORD *v7; 
  __int64 type; 
  char *m_entityName; 
  unsigned __int64 userID; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( dwGetOnlineUserID(ControllerFromClient, &userID) )
  {
    v4 = userID;
    v5 = 0;
    numResults = lbGlob.leaderboard.userStats.numResults;
    if ( lbGlob.leaderboard.userStats.numResults )
    {
      v7 = &lbGlob.leaderboard.userStats.m_leaderBoardEntries[0]._bytes_20[8];
      while ( *v7 != userID )
      {
        ++v5;
        v7 += 26;
        if ( v5 >= lbGlob.leaderboard.userStats.numResults )
          goto LABEL_8;
      }
      LeaderBoardRow<10>::operator=(&lbGlob.leaderboard.playerStats, &lbGlob.leaderboard.userStats.m_leaderBoardEntries[v5]);
      v4 = userID;
      lbGlob.leaderboard.playerStatsLeaderboardID = lbGlob.leaderboard.lbDef->id;
    }
LABEL_8:
    if ( v5 == numResults && lbGlob.leaderboard.playerStatsLeaderboardID != lbGlob.leaderboard.lbDef->id || *(_QWORD *)&lbGlob.leaderboard.playerStats._bytes_20[8] != v4 )
    {
      if ( lbColDef->id == 65533 )
        return (char *)UI_SafeTranslateString("MENU/UNRANKED_CAPS");
      else
        return 0i64;
    }
  }
  lbGlob.feederText[0] = 0;
  if ( lbColDef->id == 65533 )
  {
    m_entityName = lbGlob.leaderboard.playerStats.m_entityName;
    goto LABEL_21;
  }
  if ( lbColDef->id == 0xFFFF )
  {
    m_entityName = (char *)LB_GetRankText(lbGlob.leaderboard.playerStats.m_rank);
LABEL_21:
    Core_strcpy(lbGlob.feederText, 0x27ui64, m_entityName);
    return lbGlob.feederText;
  }
  type = lbColDef->type;
  if ( lbGlob.leaderboard.lbDef->updateType == LBUPDATE_TYPE_VIRTUAL )
    return (char *)lbVrFeederItemTextHandlers[type](lbColDef, &lbGlob.leaderboard.playerStats);
  else
    return (char *)lbFeederItemTextHandlers[type](lbColDef, &lbGlob.leaderboard.playerStats);
}

/*
==============
LB_FinishUploadTasks
==============
*/
void LB_FinishUploadTasks(void)
{
  int v0; 
  int v1; 

  v0 = Sys_Milliseconds();
  if ( TaskManager_TaskIsInProgress(&lbGlob.tasks, 4) )
  {
    while ( 1 )
    {
      LB_CompleteOngoingTasks((const LbTaskMask)16);
      if ( Sys_Milliseconds() - v0 >= 1000 )
        break;
      if ( !TaskManager_TaskIsInProgress(&lbGlob.tasks, 4) )
        goto LABEL_6;
    }
    Com_PrintWarning(22, "LB - EndUploadTasks - Timed out completing upload tasks.\n");
  }
LABEL_6:
  v1 = Sys_Milliseconds() - v0;
  if ( v1 >= 10 )
    Com_Printf(22, "LB - EndUploadTasks - Waited %i ms for upload to complete.\n", (unsigned int)v1);
}

/*
==============
LB_GetByPlayer
==============
*/
char LB_GetByPlayer(Leaderboard *lb, const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  int v5; 
  int v7; 
  overlappedTask *OpenTaskSlot; 
  unsigned int updated; 
  int v10; 
  unsigned __int64 userID; 

  if ( !lb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 763, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( !lb->lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 764, ASSERT_TYPE_ASSERT, "(lb->lbDef)", (const char *)&queryFormat, "lb->lbDef") )
    __debugbreak();
  if ( lb->isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 765, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !Live_IsUserSignedInToDemonware(ControllerFromClient) )
    return 0;
  v5 = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !dwGetOnlineUserID(v5, &userID) )
  {
    Com_PrintError(22, "dwGetOnlineUserID() failed, probably called before NP logon has completed\n");
    return 0;
  }
  v7 = CL_Mgr_GetControllerFromClient(localClientNum);
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, v7, 1);
  if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 781, ASSERT_TYPE_ASSERT, "(ov != 0)", (const char *)&queryFormat, "ov != 0") )
    __debugbreak();
  OpenTaskSlot->data = lb;
  updated = LB_UpdateIncludedColumns(lbGlob.leaderboard.lbDef);
  v10 = 150000;
  if ( lbGlob.leaderboard.isPlatformOnly )
    v10 = 130000;
  dwReadStatsByUser(OpenTaskSlot, lb->lbDef->id + v10, userID, g_includedColumnsPtr, updated);
  if ( dwGetTaskStatus(OpenTaskSlot) )
  {
    Com_PrintError(22, "dwReadStatsByUser() failed.\n");
    TaskManager_ClearTask(OpenTaskSlot);
    return 0;
  }
  else
  {
    ((void (__fastcall *)(bdRemoteTask *))OpenTaskSlot->u.remoteTask.m_ptr->setTimeout)(OpenTaskSlot->u.remoteTask.m_ptr);
    return 1;
  }
}

/*
==============
LB_GetByRank
==============
*/
char LB_GetByRank(Leaderboard *lb, const LocalClientNum_t localClientNum, const unsigned int topRank)
{
  int ControllerFromClient; 
  int v7; 
  overlappedTask *OpenTaskSlot; 
  unsigned int numIncludedColumns; 
  int v10; 

  if ( !lb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 729, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( !lb->lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 730, ASSERT_TYPE_ASSERT, "(lb->lbDef)", (const char *)&queryFormat, "lb->lbDef") )
    __debugbreak();
  if ( lb->isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 731, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !Live_IsUserSignedInToDemonware(ControllerFromClient) )
    return 0;
  v7 = CL_Mgr_GetControllerFromClient(localClientNum);
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, v7, 2);
  if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 739, ASSERT_TYPE_ASSERT, "(ov != 0)", (const char *)&queryFormat, "ov != 0") )
    __debugbreak();
  Com_DPrintf(22, "getting starting at rank %i\n", topRank);
  OpenTaskSlot->data = lb;
  numIncludedColumns = LB_UpdateIncludedColumns(lbGlob.leaderboard.lbDef);
  v10 = 150000;
  if ( lbGlob.leaderboard.isPlatformOnly )
    v10 = 130000;
  dwReadStatsByRank(OpenTaskSlot, lb->lbDef->id + v10, topRank, lb_maxrows->current.unsignedInt, g_includedColumnsPtr, numIncludedColumns);
  if ( dwGetTaskStatus(OpenTaskSlot) )
  {
    Com_PrintError(22, "dwReadStatsByRank() failed.\n");
    TaskManager_ClearTask(OpenTaskSlot);
    return 0;
  }
  ((void (__fastcall *)(bdRemoteTask *))OpenTaskSlot->u.remoteTask.m_ptr->setTimeout)(OpenTaskSlot->u.remoteTask.m_ptr);
  return 1;
}

/*
==============
LB_GetCol
==============
*/
char LB_GetCol(const int localControllerIndex, const char *lbName, const char *colName, const XUID xuid, LbGetColData *colData, overlappedTask *task)
{
  LbGetColData *v9; 
  overlappedTask *v10; 
  LeaderboardDef *Def; 
  LeaderboardDef *v12; 
  LbColumnDef *ColumnByName; 
  int v15; 
  unsigned __int64 entityIDs; 
  XUID v17; 

  v17.m_id = xuid.m_id;
  if ( !lbName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2647, ASSERT_TYPE_ASSERT, "(lbName)", (const char *)&queryFormat, "lbName") )
    __debugbreak();
  v9 = colData;
  if ( !colData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2648, ASSERT_TYPE_ASSERT, "(colData)", (const char *)&queryFormat, "colData") )
    __debugbreak();
  v10 = task;
  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2649, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( dwGetLogOnStatus(localControllerIndex) != DW_LIVE_CONNECTED )
    return 0;
  if ( XUID::IsNull(&v17) )
    return 0;
  Def = LB_LoadDef(lbName, 0);
  v12 = Def;
  if ( !Def )
    return 0;
  ColumnByName = LB_GetColumnByName(Def, colName);
  v9->lbColDef = ColumnByName;
  if ( !ColumnByName )
  {
    Com_PrintError(1, "Unknown column name '%s' for leaderboard '%s'\n", colName, lbName);
    return 0;
  }
  entityIDs = XUID::GetUniversalId(&v17);
  v15 = 150000;
  v10->data = v9->userStats;
  if ( lbGlob.leaderboard.isPlatformOnly )
    v15 = 130000;
  dwReadStatsForUsers(v10, v12->id + v15, &entityIDs, 1u, NULL, 0);
  if ( dwGetTaskStatus(v10) )
  {
    Com_PrintError(22, "dwReadStatsForUsers() failed.\n");
    return 0;
  }
  return 1;
}

/*
==============
LB_GetColComplete
==============
*/
taskCompleteResults LB_GetColComplete(overlappedTask *task)
{
  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2684, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !task->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2685, ASSERT_TYPE_ASSERT, "(task->active)", (const char *)&queryFormat, "task->active") )
    __debugbreak();
  return dwReadStatsComplete(task);
}

/*
==============
LB_GetColString
==============
*/
char *LB_GetColString(LbGetColData *colData)
{
  LeaderBoardResult<LeaderBoardRow<10>,200> *userStats; 
  LbColumnDef *lbColDef; 
  __int64 type; 
  const char *RankText; 

  if ( !colData->userStats->numResults )
    return (char *)&queryFormat.fmt + 3;
  lbGlob.feederText[0] = 0;
  userStats = colData->userStats;
  if ( !colData->userStats && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2701, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  lbColDef = colData->lbColDef;
  if ( lbColDef->id == 65533 )
    return userStats->m_leaderBoardEntries[0].m_entityName;
  if ( lbColDef->id == 0xFFFF )
  {
    RankText = LB_GetRankText(userStats->m_leaderBoardEntries[0].m_rank);
    Core_strcpy(lbGlob.feederText, 0x27ui64, RankText);
    return lbGlob.feederText;
  }
  else
  {
    type = lbColDef->type;
    if ( lbGlob.leaderboard.lbDef->updateType == LBUPDATE_TYPE_VIRTUAL )
      return (char *)lbVrFeederItemTextHandlers[type](colData->lbColDef, userStats->m_leaderBoardEntries);
    else
      return (char *)lbFeederItemTextHandlers[type](colData->lbColDef, userStats->m_leaderBoardEntries);
  }
}

/*
==============
LB_GetDisplayableGamertags
==============
*/
char LB_GetDisplayableGamertags(Leaderboard *lb, const int controllerIndex)
{
  XUID *v4; 
  __int64 v5; 
  Microsoft::Xbox::Services::XboxLiveContext *UsersXboxLiveContext; 
  __int64 v7; 
  int v9; 
  signed int v10; 
  unsigned __int64 *v11; 
  XUID *v12; 
  const XUID *v13; 
  const char *v14; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v15; 
  __int64 v16; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v17; 
  const XUID *v18; 
  __int64 v19; 
  unsigned __int64 PlatformIdFromXuid; 
  int v21; 
  int v22; 
  __int64 v23; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v24; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v25; 
  __int64 v26; 
  int v27; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v28; 
  Windows::Foundation::IAsyncInfo *v29; 
  int v30; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  TaskManager *Instance; 
  Windows::Foundation::IAsyncInfo *v33; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v34; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v35; 
  Platform::String *stringXUID; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v37; 
  TaskCreateRequest pTaskCreateRequest; 
  __int64 v39[7]; 
  XUID result; 
  Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *v41; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v42; 
  __int64 v43; 
  Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *v44; 
  TaskCreateResult pTaskCreateResult; 
  XUID v46[200]; 

  v39[5] = -2i64;
  LODWORD(v34) = controllerIndex;
  v39[2] = (__int64)lb;
  v4 = v46;
  v5 = 200i64;
  do
  {
    XUID::XUID(v4++);
    --v5;
  }
  while ( v5 );
  if ( !lb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1259, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( !lb->userStats.numResults || lb->isUpdating || !lb->lbDef )
    return 0;
  UsersXboxLiveContext = Live_GetUsersXboxLiveContext(controllerIndex);
  v7 = (__int64)UsersXboxLiveContext;
  v39[3] = (__int64)UsersXboxLiveContext;
  if ( UsersXboxLiveContext )
    UsersXboxLiveContext->__abi_AddRef(UsersXboxLiveContext);
  v39[6] = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  if ( !v7 )
  {
    Com_Printf(25, "Live_GetUsersXboxLiveContext when controller %d has no LiveContext!\n", (unsigned int)controllerIndex);
    lb->isUpdating = 0;
    return 0;
  }
  Com_DPrintf(22, "Getting Xbox One platform Display Names for leaderboards.\n");
  v9 = 0;
  v10 = 0;
  if ( (int)lb->userStats.numResults > 0 )
  {
    v11 = (unsigned __int64 *)&lb->userStats.m_leaderBoardEntries[0]._bytes_20[8];
    do
    {
      v12 = &v46[v9++];
      v13 = XUID::FromUniversalId(&result, *v11);
      XUID::operator=(v12, v13);
      v14 = UI_SafeTranslateString("MENU/DOWNLOADING");
      strncpy(lb->userStats.m_leaderBoardEntries[v10++].m_entityName, v14, 0x40ui64);
      v11 += 26;
    }
    while ( v10 < (signed int)lb->userStats.numResults );
  }
  v15 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x68ui64, 0x90ui64);
  Platform::Collections::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::Vector<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v15);
  v17 = (Platform::Collections::Vector<Platform::String _,std::equal_to<Platform::String _>,1> *)v16;
  v39[1] = v16;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8i64))(v16);
  v41 = v17;
  if ( v17 )
    v17->__abi_Release(v17);
  *(_QWORD *)&pTaskCreateRequest.m_controllerIndex = -1i64;
  memset(&pTaskCreateRequest.m_appData, 0, 48);
  pTaskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  pTaskCreateResult.m_localTaskId = 0;
  pTaskCreateResult.m_task = NULL;
  if ( v9 > 0 )
  {
    v18 = v46;
    v19 = (unsigned int)v9;
    do
    {
      stringXUID = NULL;
      PlatformIdFromXuid = XUID::GetPlatformIdFromXuid((const XUID)v18->m_id);
      ConvertPlatformIdToPlatformString(PlatformIdFromXuid, &stringXUID);
      j__Append__Q__IVector_PE_AAVString_Platform___Collections_Foundation_Windows____Vector_PE_AAVString_Platform__U__equal_to_PE_AAVString_Platform___std___00_2Platform__UE_AAAXPE_AAVString_6__Z(v17, stringXUID);
      WindowsDeleteString_0((HSTRING)stringXUID);
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  lb->isUpdating = 1;
  v21 = (int)v34;
  Com_Printf(25, "Calling GetUserProfilesAsync for %d XUIDs on controller %d\n", (unsigned int)v9, (unsigned int)v34);
  v34 = NULL;
  v22 = (*(__int64 (__fastcall **)(__int64, Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> **))(*(_QWORD *)v7 + 56i64))(v7, &v34);
  if ( v22 < 0 )
    __abi_WinRTraiseException(v22);
  v23 = (__int64)v34;
  v24 = v34;
  if ( v34 )
  {
    v34->__abi_AddRef(v34);
    v23 = (__int64)v34;
  }
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16i64))(v23);
  v35 = v24;
  if ( v24 )
    v24->__abi_AddRef(v24);
  v42 = v24;
  if ( v24 )
    v24->__abi_Release(v24);
  pTaskCreateRequest.m_controllerIndex = v21;
  pTaskCreateRequest.m_onCompletionCallback = LB_OnGetGamertagsComplete;
  v35 = (Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *)Platform::Details::Heap::Allocate(0x58ui64, 0x70ui64);
  Platform::Collections::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>::VectorView<Platform::String __gc *,std::equal_to<Platform::String __gc *>,1>(v35, &v17->m_ctr, &v17->m_vec);
  v26 = (__int64)v25;
  v35 = v25;
  if ( v25 )
    v25->__abi_AddRef(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
  v43 = v26;
  v37 = NULL;
  v27 = ((__int64 (__fastcall *)(Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> *, __int64, Platform::Collections::VectorView<Platform::String _,std::equal_to<Platform::String _>,1> **))v24->Windows::Foundation::Collections::IVectorView<Platform::String _>::Platform::Object::__vftable[1].__abi_AddRef)(v24, v26, &v37);
  if ( v27 < 0 )
    __abi_WinRTraiseException(v27);
  v28 = v37;
  v35 = v37;
  if ( v37 )
  {
    v37->__abi_AddRef(v37);
    v28 = v37;
  }
  if ( v28 )
    v28->__abi_Release(v28);
  v44 = v35;
  v29 = NULL;
  v39[0] = 0i64;
  if ( v35 )
  {
    v30 = v35->__abi_QueryInterface(v35, (Platform::Guid *)&_uuidof__AUIAsyncInfo_Foundation_Windows__, (void **)v39);
    if ( v30 < 0 )
      __abi_WinRTraiseException(v30);
    v29 = (Windows::Foundation::IAsyncInfo *)v39[0];
  }
  v39[4] = (__int64)v29;
  m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
  if ( v29 != pTaskCreateRequest.m_asyncInfo )
  {
    if ( v29 )
    {
      v29->__abi_AddRef(v29);
      m_asyncInfo = pTaskCreateRequest.m_asyncInfo;
    }
    if ( m_asyncInfo )
      m_asyncInfo->__abi_Release(m_asyncInfo);
    pTaskCreateRequest.m_asyncInfo = v29;
  }
  if ( v29 )
    v29->__abi_Release(v29);
  if ( v35 )
    v35->__abi_Release(v35);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16i64))(v26);
  pTaskCreateRequest.m_appData = lb;
  Instance = TaskManager::GetInstance();
  if ( !TaskManager::CreateTask(Instance, &pTaskCreateRequest, &pTaskCreateResult) )
  {
    Com_Printf(25, "GetUserProfilesAsync CreateTask failed!\n");
    Com_Printf(25, "======================= TaskManager::GetInstance().CreateTask GetUserProfilesAsync Error.\n");
    lb->isUpdating = 0;
  }
  v24->__abi_Release(v24);
  pTaskCreateRequest.m_onCompletionCallback = NULL;
  pTaskCreateRequest.m_onUpdateCallback = NULL;
  pTaskCreateRequest.m_appSecondaryCallback = NULL;
  pTaskCreateRequest.m_timeoutInSeconds = 0;
  v33 = pTaskCreateRequest.m_asyncInfo;
  if ( pTaskCreateRequest.m_asyncInfo )
  {
    pTaskCreateRequest.m_asyncInfo->__abi_Release(pTaskCreateRequest.m_asyncInfo);
    v33 = NULL;
    pTaskCreateRequest.m_asyncInfo = NULL;
  }
  if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( pTaskCreateRequest.m_remoteDemonwareTask.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))pTaskCreateRequest.m_remoteDemonwareTask.m_ptr->~bdReferencable)(pTaskCreateRequest.m_remoteDemonwareTask.m_ptr, 1i64);
      pTaskCreateRequest.m_remoteDemonwareTask.m_ptr = NULL;
    }
    v33 = pTaskCreateRequest.m_asyncInfo;
  }
  if ( v33 )
    v33->__abi_Release(v33);
  if ( v17 )
    v17->__abi_Release(v17);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16i64))(v7);
  return 1;
}

/*
==============
LB_GetFriends
==============
*/
bool LB_GetFriends(Leaderboard *lb, const LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 
  bool v6; 
  unsigned int v7; 
  Online_Friends *v8; 
  unsigned int v9; 
  unsigned int NumFriends; 
  Online_Friends *v11; 
  int SortedFriendByIndex; 
  Online_Friends *v13; 
  Online_Friends *v14; 
  XUID *v15; 
  unsigned __int64 v16; 
  Online_Friends *Instance; 
  unsigned __int64 UniversalId; 
  __int64 v19; 
  unsigned int numFriendsOut; 
  XUID result; 
  unsigned __int64 userID; 
  unsigned __int64 users[200]; 

  if ( !lb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 831, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( lb->isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 832, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
    __debugbreak();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !Live_IsUserSignedInToDemonware(ControllerFromClient) )
    return 0;
  if ( !dwGetOnlineUserID(ControllerFromClient, &userID) )
  {
    Com_PrintError(22, "dwGetOnlineUserID() failed.\n");
    return 0;
  }
  v6 = !lb->isPlatformOnly;
  v7 = 1;
  users[0] = userID;
  if ( v6 )
  {
    result.m_id = 0i64;
    Instance = Online_Friends::GetInstance();
    if ( Online_Friends::Crossplay_GetFriends(Instance, ControllerFromClient, (DWFriend **)&result, &numFriendsOut) && numFriendsOut )
    {
      do
      {
        if ( v7 >= 0xC8 )
          break;
        UniversalId = XUID::GetUniversalId((XUID *)(result.m_id + 144i64 * (v7 - 1)));
        v19 = v7++;
        users[v19] = UniversalId;
      }
      while ( v7 - 1 < numFriendsOut );
    }
  }
  else
  {
    v8 = Online_Friends::GetInstance();
    v9 = 0;
    NumFriends = Online_Friends::GetNumFriends(v8, ControllerFromClient);
    if ( NumFriends )
    {
      do
      {
        if ( v7 >= 0xC8 )
          break;
        v11 = Online_Friends::GetInstance();
        SortedFriendByIndex = Online_Friends::GetSortedFriendByIndex(v11, ControllerFromClient, v9);
        if ( SortedFriendByIndex != -1 )
        {
          v13 = Online_Friends::GetInstance();
          if ( (unsigned int)(Online_Friends::GetStatus(v13, ControllerFromClient, SortedFriendByIndex) - 2) > 1 )
          {
            v14 = Online_Friends::GetInstance();
            v15 = Online_Friends::GetUserId(v14, &result, ControllerFromClient, SortedFriendByIndex);
            v16 = XUID::GetUniversalId(v15);
            users[v7] = v16;
            if ( v16 )
              ++v7;
          }
        }
        ++v9;
      }
      while ( v9 < NumFriends );
    }
  }
  return LB_GetStatsByXuids(ControllerFromClient, lb, users, v7);
}

/*
==============
LB_GetPlayerStats
==============
*/
char LB_GetPlayerStats(const LocalClientNum_t localClientNum, CacheLbTaskData *cacheLbTaskData)
{
  int ControllerFromClient; 
  int v6; 
  overlappedTask *OpenTaskSlot; 
  unsigned __int64 userID; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( dwGetOnlineUserID(ControllerFromClient, &userID) )
  {
    v6 = CL_Mgr_GetControllerFromClient(localClientNum);
    OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, v6, 3);
    if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 301, ASSERT_TYPE_ASSERT, "(ov != 0)", (const char *)&queryFormat, "ov != 0") )
      __debugbreak();
    OpenTaskSlot->data = cacheLbTaskData;
    dwReadStatsByLeaderboardIDs(OpenTaskSlot, userID);
    if ( dwGetTaskStatus(OpenTaskSlot) )
    {
      Com_PrintError(22, "dwReadStatsByUser() failed.\n");
      TaskManager_ClearTask(OpenTaskSlot);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    Com_PrintError(22, "dwGetOnlineUserID() failed, probably called before DW logon has completed\n");
    return 0;
  }
}

/*
==============
LB_GetRankText
==============
*/
char *LB_GetRankText(unsigned __int64 rank)
{
  const dvar_t *v1; 
  signed int totalRows; 
  unsigned __int64 v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 

  v1 = DVARINT_leaderboards_max_rank;
  if ( !DVARINT_leaderboards_max_rank && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "leaderboards_max_rank") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( rank <= v1->current.integer )
  {
    v6 = (const char *)rank;
    v7 = "%zu";
  }
  else
  {
    totalRows = 1;
    if ( (int)lbGlob.leaderboard.userStats.totalRows > 1 )
      totalRows = lbGlob.leaderboard.userStats.totalRows;
    v4 = 100 * rank / totalRows;
    v5 = UI_SafeTranslateString("LUA_MENU/TOP_PERCENTAGE");
    v6 = UI_ReplaceConversionInt(v5, v4);
    v7 = (const char *)&queryFormat;
  }
  Com_sprintf(rankText, 0x27ui64, v7, v6);
  return rankText;
}

/*
==============
LB_GetStatsByXuids
==============
*/
char LB_GetStatsByXuids(const int controllerIndex, Leaderboard *lb, unsigned __int64 *users, unsigned int userIndex)
{
  overlappedTask *OpenTaskSlot; 
  unsigned int updated; 
  int v10; 
  __int64 numIncludedColumns; 

  if ( !lb && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 803, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( lb->isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 804, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
    __debugbreak();
  if ( !userIndex )
  {
    LODWORD(numIncludedColumns) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 806, ASSERT_TYPE_ASSERT, "( ( userIndex > 0 ) )", "( userIndex ) = %i", numIncludedColumns) )
      __debugbreak();
  }
  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, controllerIndex, 0);
  if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 809, ASSERT_TYPE_ASSERT, "(ov != 0)", (const char *)&queryFormat, "ov != 0") )
    __debugbreak();
  OpenTaskSlot->data = lb;
  updated = LB_UpdateIncludedColumns(lbGlob.leaderboard.lbDef);
  v10 = 150000;
  if ( lbGlob.leaderboard.isPlatformOnly )
    v10 = 130000;
  dwReadStatsForUsers(OpenTaskSlot, lb->lbDef->id + v10, users, userIndex, g_includedColumnsPtr, updated);
  if ( dwGetTaskStatus(OpenTaskSlot) )
  {
    Com_PrintError(22, "dwReadStatsForUsers() failed.\n");
    TaskManager_ClearTask(OpenTaskSlot);
    return 0;
  }
  else
  {
    ((void (__fastcall *)(bdRemoteTask *))OpenTaskSlot->u.remoteTask.m_ptr->setTimeout)(OpenTaskSlot->u.remoteTask.m_ptr);
    return 1;
  }
}

/*
==============
LB_GetUserForRow
==============
*/
char LB_GetUserForRow(const int controllerIndex, const int rowIndex, XUID *outUser)
{
  const XUID *v5; 
  int offset; 
  const XUID *v7; 
  int v9; 
  unsigned int displayableRows; 
  XUID result; 

  v5 = XUID::NullXUID(&result);
  XUID::operator=(outUser, v5);
  if ( lbGlob.leaderboard.isUpdating )
    return 0;
  offset = lbGlob.leaderboard.offset;
  if ( rowIndex < lbGlob.leaderboard.offset || rowIndex >= (signed int)(lbGlob.leaderboard.userStats.numResults + lbGlob.leaderboard.offset) )
    return 0;
  if ( rowIndex >= lbGlob.leaderboard.userStats.displayableRows )
  {
    displayableRows = lbGlob.leaderboard.userStats.displayableRows;
    v9 = rowIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2349, ASSERT_TYPE_ASSERT, "(unsigned)( rowIndex ) < (unsigned)( lbGlob.leaderboard.userStats.displayableRows )", "rowIndex doesn't index lbGlob.leaderboard.userStats.displayableRows\n\t%i not in [0, %i)", v9, displayableRows) )
      __debugbreak();
    offset = lbGlob.leaderboard.offset;
  }
  v7 = XUID::FromUniversalId(&result, *(_QWORD *)&lbGlob.leaderboard.userStats.m_leaderBoardEntries[0]._bytes_20[208 * (rowIndex - offset) + 8]);
  XUID::operator=(outUser, v7);
  return 1;
}

/*
==============
LB_GetXUserCol
==============
*/
__int64 LB_GetXUserCol(LeaderBoardRow<10> *row, const int colId)
{
  unsigned int v4; 
  __int64 v6; 

  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2038, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  v4 = 0;
  if ( colId != 65534 )
    v4 = colId;
  if ( v4 >= 0xA )
  {
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2045, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( row->getNumColumns() )", "index doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v6, 10) )
      __debugbreak();
  }
  return *(unsigned int *)&row->m_entityName[4 * v4 + 72];
}

/*
==============
LB_GetXUserColExt
==============
*/
int LB_GetXUserColExt(LeaderBoardRow<10> *row, LbColumnDef *lbColDef)
{
  unsigned int id; 
  __int64 v6; 

  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2054, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  id = lbColDef->id;
  switch ( id )
  {
    case 0xFFF3u:
      return LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 10000);
    case 0xFFF4u:
      return LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 6000);
    case 0xFFF5u:
      return LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1000);
    case 0xFFF6u:
      return LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1);
    case 0xFFFAu:
      return LB_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1);
    case 0xFFFBu:
      return LB_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1000);
    case 0xFFFCu:
      id = 9;
      return *(_DWORD *)&row->m_entityName[4 * id + 72];
    case 0xFFFEu:
      id = 0;
      return *(_DWORD *)&row->m_entityName[4 * id + 72];
    default:
      if ( id >= 0xA )
      {
        LODWORD(v6) = lbColDef->id;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2083, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( row->getNumColumns() )", "index doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v6, 10) )
          __debugbreak();
      }
      return *(_DWORD *)&row->m_entityName[4 * id + 72];
  }
}

/*
==============
LB_Init_Platform
==============
*/
void LB_Init_Platform(void)
{
  Cmd_AddCommandInternal("lb_upplayers", LB_UploadPlayersCmd, &LB_UploadPlayersCmd_VAR);
}

/*
==============
LB_InviteSelectedPlayerToClan
==============
*/
void LB_InviteSelectedPlayerToClan(const int controllerIndex)
{
  ;
}

/*
==============
LB_MakeRow
==============
*/
__int64 LB_MakeRow(const int localControllerIndex, const LeaderboardDef *lbDef, LeaderBoardRow<10> *const row, LbAggType aggType, unsigned __int64 userID)
{
  __int64 v5; 
  unsigned int v9; 
  unsigned int *v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  LbColumnDef *columns; 
  int id; 
  LbColumnDef *v16; 
  __int64 result; 
  __int64 v18; 
  __int64 v19; 

  v5 = aggType;
  if ( !lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 228, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 229, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  v9 = 0;
  v10 = &row->m_secondsSinceUpdate + 2;
  do
  {
    *(v10 - 1) = 0x7FFFFFFF;
    v9 += 10;
    *v10 = 0x7FFFFFFF;
    v10[1] = 0x7FFFFFFF;
    v10[2] = 0x7FFFFFFF;
    v10[3] = 0x7FFFFFFF;
    v10[4] = 0x7FFFFFFF;
    v10[5] = 0x7FFFFFFF;
    v10[6] = 0x7FFFFFFF;
    v10[7] = 0x7FFFFFFF;
    v10[8] = 0x7FFFFFFF;
    v10 += 10;
  }
  while ( v9 < 0xA );
  v11 = 0;
  v12 = 0;
  if ( lbDef->columnCount > 0 )
  {
    v13 = 0i64;
    do
    {
      columns = lbDef->columns;
      id = columns[v13].id;
      if ( id < 65530 )
        goto LABEL_17;
      if ( id <= 65531 )
        goto LABEL_29;
      if ( id == 65532 )
      {
        if ( columns[v13].agg == (_DWORD)v5 )
        {
          *(_DWORD *)&row->m_columns[20] = 1;
LABEL_28:
          ++v11;
        }
      }
      else
      {
LABEL_17:
        if ( !*columns[v13].statName || id == 65533 )
          goto LABEL_29;
        if ( id == 65534 )
        {
          id = 0;
          if ( columns[v13].agg == (_DWORD)v5 )
            row->m_rating = LB_GetPlayerData(localControllerIndex, &columns[v12]);
          else
            row->m_rating = 0x7FFFFFFFFFFFFFFFi64;
        }
        else
        {
          if ( id == 0xFFFF )
            goto LABEL_29;
          if ( (unsigned int)id >= 0xA )
          {
            LODWORD(v19) = 10;
            LODWORD(v18) = columns[v13].id;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 273, ASSERT_TYPE_ASSERT, "(unsigned)( writeId ) < (unsigned)( row->getNumColumns() )", "writeId doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
        }
        v16 = lbDef->columns;
        if ( v16[v13].agg == (_DWORD)v5 )
        {
          *(_DWORD *)&row->m_entityName[4 * id + 72] = LB_GetPlayerData(localControllerIndex, &v16[v12]);
          goto LABEL_28;
        }
      }
LABEL_29:
      ++v12;
      ++v13;
    }
    while ( v12 < lbDef->columnCount );
  }
  *(_QWORD *)&row->_bytes_20[8] = userID;
  *(_DWORD *)row->_bytes_20 = lbDef->id;
  result = v11;
  row->m_writeType = WriteTypeMap[v5];
  return result;
}

/*
==============
LB_OnGetGamertagsComplete
==============
*/
void LB_OnGetGamertagsComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  HSTRING v5; 
  int v6; 
  HSTRING m_appData; 
  HSTRING v8; 
  int v9; 
  __int64 v10; 
  HSTRING v11; 
  int v12; 
  unsigned int v13; 
  unsigned int i; 
  int v15; 
  __int64 v16; 
  HSTRING v17; 
  int v18; 
  HSTRING v19; 
  int v20; 
  LocalClientNum_t ClientFromController; 
  HSTRING string[3]; 
  HSTRING v23; 
  HSTRING newString[13]; 
  unsigned int v26; 
  HSTRING v27; 
  HSTRING v28; 

  newString[1] = (HSTRING)-2i64;
  if ( taskState == TASKSTATE_PENDING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1201, ASSERT_TYPE_ASSERT, "(taskState != TASKSTATE_PENDING)", (const char *)&queryFormat, "taskState != TASKSTATE_PENDING") )
    __debugbreak();
  m_asyncInfo = pTask->m_asyncInfo;
  v5 = NULL;
  v23 = NULL;
  if ( m_asyncInfo )
  {
    v6 = m_asyncInfo->__abi_QueryInterface(m_asyncInfo, &_uuidof__AU__IAsyncOperation_PE_AAU__IVectorView_PE_AAVXboxUserProfile_Social_Services_Xbox_Microsoft___Collections_Foundation_Windows___Foundation_Windows__, (void **)&v23);
    if ( v6 < 0 )
      __abi_WinRTraiseException(v6);
    v5 = v23;
  }
  v27 = v5;
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 8i64))(v5);
  string[1] = v5;
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
  m_appData = (HSTRING)pTask->m_appData;
  string[2] = m_appData;
  if ( !m_appData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1204, ASSERT_TYPE_ASSERT, "(lb)", (const char *)&queryFormat, "lb") )
    __debugbreak();
  if ( taskState )
  {
    if ( (unsigned int)(taskState - 1) <= 1 )
      Com_PrintError(25, "Error getting Gamertags!\n");
  }
  else
  {
    Com_Printf(25, "======================= GetUserProfilesAsync Completed\n");
    v8 = NULL;
    v27 = NULL;
    v9 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v5 + 64i64))(v5, &v27);
    if ( v9 < 0 )
      __abi_WinRTraiseException(v9);
    v10 = (__int64)v27;
    v11 = v27;
    if ( v27 )
    {
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 8i64))(v27);
      v10 = (__int64)v27;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16i64))(v10);
    v28 = v11;
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 8i64))(v11);
    newString[2] = v11;
    if ( v11 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
    v12 = (*(__int64 (__fastcall **)(HSTRING, unsigned int *))(*(_QWORD *)v11 + 56i64))(v11, &v26);
    if ( v12 < 0 )
      __abi_WinRTraiseException(v12);
    v13 = v26;
    Com_Printf(25, "Get Gamertags complete success with %d results.\n", v26);
    if ( v13 && *((_QWORD *)m_appData + 5229) )
    {
      for ( i = 0; i < v13; ++i )
      {
        v28 = NULL;
        v15 = (*(__int64 (__fastcall **)(HSTRING, _QWORD, HSTRING *))(*(_QWORD *)v11 + 48i64))(v11, i, &v28);
        if ( v15 < 0 )
          __abi_WinRTraiseException(v15);
        v16 = (__int64)v28;
        v17 = v28;
        if ( v28 )
        {
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v28 + 8i64))(v28);
          v16 = (__int64)v28;
        }
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16i64))(v16);
        string[0] = v17;
        if ( v17 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 8i64))(v17);
        newString[3] = v17;
        if ( v17 )
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
        string[0] = NULL;
        v18 = (*(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v17 + 88i64))(v17, string);
        if ( v18 < 0 )
          __abi_WinRTraiseException(v18);
        v19 = string[0];
        if ( string[0] )
        {
          v20 = WindowsDuplicateString_0(string[0], newString);
          if ( v20 < 0 )
            __abi_WinRTraiseException(v20);
          v8 = newString[0];
          v19 = string[0];
        }
        WindowsDeleteString_0(v19);
        newString[4] = v8;
        ConvertStringGamertagToDisplayableBuffer((Platform::String *)v8, (char *)m_appData + 208 * i + 72, 0x41ui64);
        WindowsDeleteString_0(v8);
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16i64))(v17);
        v8 = NULL;
      }
    }
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16i64))(v11);
  }
  *((_BYTE *)m_appData + 41849) = 0;
  ClientFromController = CL_Mgr_GetClientFromController(pTask->m_controllerIndex);
  if ( LUI_BeginEvent(ClientFromController, "leaderboard_fetch_complete", LUI_luaVM) )
    LUI_EndEvent(LUI_luaVM);
  if ( v5 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16i64))(v5);
}

/*
==============
LB_ReadLeaderboardComplete
==============
*/
__int64 LB_ReadLeaderboardComplete(const int slot)
{
  overlappedTask *v1; 
  unsigned int *data; 
  char v3; 
  taskCompleteResults StatsComplete; 
  taskCompleteResults v5; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int v11; 
  LocalClientNum_t ClientFromController; 
  unsigned __int64 Int_Internal_DebugName; 
  unsigned __int64 v14; 
  unsigned int v15; 
  _QWORD *v16; 
  LocalClientNum_t v17; 
  unsigned __int64 userID; 

  v1 = &lbGlob.tasks.tasks[slot];
  if ( (unsigned int)slot >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1363, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", slot, 32) )
    __debugbreak();
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1364, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->active)", (const char *)&queryFormat, "readStatsOverlappedIO->active") )
    __debugbreak();
  if ( v1->type > 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1367, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->type == LB_TASK_READLB || readStatsOverlappedIO->type == LB_TASK_READLB_BYPLAYER || readStatsOverlappedIO->type == LB_TASK_READLB_BYRANK)", (const char *)&queryFormat, "readStatsOverlappedIO->type == LB_TASK_READLB || readStatsOverlappedIO->type == LB_TASK_READLB_BYPLAYER || readStatsOverlappedIO->type == LB_TASK_READLB_BYRANK") )
    __debugbreak();
  if ( !v1->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1368, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->data)", (const char *)&queryFormat, "readStatsOverlappedIO->data") )
    __debugbreak();
  data = (unsigned int *)v1->data;
  v3 = *((_BYTE *)data + 41849);
  *((_BYTE *)data + 41849) = 0;
  StatsComplete = dwReadStatsComplete(v1);
  *((_BYTE *)data + 41849) = v3;
  v5 = StatsComplete;
  if ( StatsComplete )
    *((_WORD *)data + 20924) = 0;
  if ( StatsComplete == TASK_COMPLETE )
  {
    v6 = data[10464];
    v7 = 0;
    if ( (_DWORD)v6 )
    {
      if ( (unsigned int)(v6 - 1) > 2 )
      {
        Com_Printf(22, "Unknown filter type: %i\n", v6);
      }
      else
      {
        v8 = *((_QWORD *)data + 5229);
        if ( *(_DWORD *)(v8 + 40) == 3 && *(_DWORD *)(v8 + 8) == *(_DWORD *)(v8 + 12) )
          LB_VR_SetLocalRatings((LeaderboardDef *)v8, (LeaderBoardResult<LeaderBoardRow<10>,200> *)data);
        LB_SortXUserStatsByRank((LeaderBoardResult<LeaderBoardRow<10>,200> *)data);
        v9 = 0i64;
        if ( data[10401] )
        {
          do
          {
            v10 = 52 * v9;
            v11 = v9 + 1;
            v9 = (unsigned int)(v9 + 1);
            *(_QWORD *)&data[v10 + 16] = v11;
          }
          while ( v11 < data[10401] );
        }
      }
      goto LABEL_35;
    }
    if ( *((_BYTE *)data + 41850) )
    {
      if ( data[10401] )
      {
        if ( lbGlob.leaderboard.lbDef )
        {
          LeaderBoardRow<10>::operator=(&lbGlob.leaderboard.playerStats, (const LeaderBoardRow<10> *)data);
          lbGlob.leaderboard.playerStatsLeaderboardID = lbGlob.leaderboard.lbDef->id;
        }
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_leaderboards_max_rank, "leaderboards_max_rank");
        v14 = *((_QWORD *)data + 8);
        if ( v14 <= Int_Internal_DebugName )
          data[10460] = v14 - 1;
        else
          data[10460] = -1;
      }
      else
      {
        if ( v1->type != 2 )
        {
          Com_DPrintf(22, "%s\n", "Player not globally ranked, fetching from the top");
          ClientFromController = CL_Mgr_GetClientFromController(v1->controllerIndex);
          *((_BYTE *)data + 41849) = LB_GetByRank((Leaderboard *)data, ClientFromController, 1u);
        }
        data[10460] = 0;
      }
LABEL_35:
      if ( *((_BYTE *)data + 41850) )
      {
        if ( dwGetOnlineUserID(v1->controllerIndex, &userID) && (v15 = data[10401]) != 0 )
        {
          v16 = data + 10;
          while ( *v16 != userID )
          {
            ++v7;
            v16 += 26;
            if ( v7 >= v15 )
              goto LABEL_41;
          }
          data[10461] = v7 + data[10460];
        }
        else
        {
LABEL_41:
          data[10461] = -1;
        }
      }
      goto LABEL_47;
    }
    goto LABEL_47;
  }
  if ( StatsComplete == TASK_ERROR )
  {
    *(_QWORD *)(data + 10401) = 0i64;
    if ( v1->u.remoteTask.m_ptr->getStatus(v1->u.remoteTask.m_ptr) == BD_TIMED_OUT )
    {
      TaskManager_ClearTask(v1);
      Live_DemonwareDisconnectCleanup(v1->controllerIndex);
    }
    goto LABEL_47;
  }
  if ( StatsComplete )
LABEL_47:
    TaskManager_ClearTask(v1);
  if ( v5 == TASK_COMPLETE && !*((_BYTE *)data + 41849) )
  {
    v17 = CL_Mgr_GetClientFromController(v1->controllerIndex);
    if ( LUI_BeginEvent(v17, "leaderboard_fetch_complete", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
  }
  return (unsigned int)v5;
}

/*
==============
LB_ReadLeaderboardToCacheComplete
==============
*/
taskCompleteResults LB_ReadLeaderboardToCacheComplete(const int slot)
{
  overlappedTask *v1; 
  taskCompleteResults result; 
  taskCompleteResults v3; 
  char *data; 
  int NumResults; 
  __int64 v6; 
  char *v7; 
  char *v8; 
  _DWORD *v9; 
  int v10; 
  unsigned int *v11; 

  v1 = &lbGlob.tasks.tasks[slot];
  if ( (unsigned int)slot >= 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1512, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", slot, 32) )
    __debugbreak();
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1513, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->active)", (const char *)&queryFormat, "readStatsOverlappedIO->active") )
    __debugbreak();
  if ( v1->type != 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1514, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->type == LB_TASK_READLB_CACHE)", (const char *)&queryFormat, "readStatsOverlappedIO->type == LB_TASK_READLB_CACHE") )
    __debugbreak();
  if ( !v1->data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1515, ASSERT_TYPE_ASSERT, "(readStatsOverlappedIO->data)", (const char *)&queryFormat, "readStatsOverlappedIO->data") )
    __debugbreak();
  result = dwReadStatsByLeaderboardIDsComplete(v1);
  v3 = result;
  switch ( result )
  {
    case TASK_COMPLETE:
      data = (char *)v1->data;
      NumResults = bdRemoteTask::getNumResults(v1->u.remoteTask.m_ptr);
      v6 = NumResults;
      if ( NumResults > 0 )
      {
        v7 = data + 56;
        v8 = data + 304;
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)v8 + 20i64) == 407 )
            *(_DWORD *)(*(_QWORD *)v7 + 32i64) = *(_DWORD *)(*(_QWORD *)v8 + 16i64);
          v8 += 8;
          v7 += 56;
          --v6;
        }
        while ( v6 );
      }
      break;
    case TASK_ERROR:
      v9 = v1->data;
      Com_DPrintf(22, "Failed to cache leaderboards for controllerIndex: %i\n", v1->controllerIndex);
      v10 = 0;
      if ( (int)*v9 > 0 )
      {
        v11 = v9 + 1;
        do
        {
          Com_DPrintf(22, "LB: %i\n", *v11);
          ++v10;
          ++v11;
        }
        while ( v10 < *v9 );
      }
      break;
    case TASK_NOTCOMPLETE:
      return result;
  }
  TaskManager_ClearTask(v1);
  return v3;
}

/*
==============
LB_ReadRowForUser
==============
*/
void LB_ReadRowForUser(const int controllerIndex, const unsigned __int64 entityID, const unsigned int leaderboardID, const int taskType, void *userStats)
{
  bool v9; 
  overlappedTask *OpenTaskSlot; 
  unsigned int updated; 
  int v12; 

  if ( !TaskManager_TaskIsInProgressForController(&lbGlob.tasks, taskType, controllerIndex) )
  {
    v9 = controllerIndex < 8;
    if ( (unsigned int)controllerIndex >= 8 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2740, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
        __debugbreak();
      v9 = controllerIndex < 8;
    }
    if ( v9 && Live_IsUserSignedInToLive(controllerIndex) )
    {
      OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, controllerIndex, taskType);
      if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2748, ASSERT_TYPE_ASSERT, "(ov)", (const char *)&queryFormat, "ov") )
        __debugbreak();
      OpenTaskSlot->data = userStats;
      updated = LB_UpdateIncludedColumns(lbGlob.leaderboard.lbDef);
      v12 = 150000;
      if ( lbGlob.leaderboard.isPlatformOnly )
        v12 = 130000;
      dwReadStatsByUser(OpenTaskSlot, leaderboardID + v12, entityID, g_includedColumnsPtr, updated);
      if ( dwGetTaskStatus(OpenTaskSlot) )
      {
        Com_PrintError(22, "dwReadStatsByUser() failed in LB_ReadRowForUser()\n");
        TaskManager_ClearTask(OpenTaskSlot);
      }
    }
  }
}

/*
==============
LB_RequestCacheLeaderboardValues
==============
*/
void LB_RequestCacheLeaderboardValues(void)
{
  s_lbCacheRequest = 1;
}

/*
==============
LB_RowDebugPrint
==============
*/
void LB_RowDebugPrint(const int localControllerIndex, const unsigned __int64 userID, const LeaderboardDef *lbDef, LeaderBoardRow<10> *lbRow)
{
  int v6; 
  __int64 v7; 
  LbColumnDef *columns; 
  unsigned int id; 
  __int64 v10; 
  int v11; 
  __int64 v12; 

  v11 = *(_DWORD *)lbRow->_bytes_20;
  Com_DPrintf(22, "\nWriting client_num %i with npid %zx to leaderboard %i\n", (unsigned int)localControllerIndex, userID, v11);
  v6 = 0;
  if ( lbDef->columnCount > 0 )
  {
    v7 = 0i64;
    while ( 2 )
    {
      columns = lbDef->columns;
      id = columns[v7].id;
      v10 = id;
      switch ( id )
      {
        case 0xFFFAu:
        case 0xFFFBu:
        case 0xFFFDu:
        case 0xFFFFu:
          goto $LN2_11;
        case 0xFFFCu:
          id = 9;
          goto LABEL_6;
        case 0xFFFEu:
          id = 0;
          goto LABEL_6;
        default:
LABEL_6:
          LODWORD(v12) = *(_DWORD *)&lbRow->m_entityName[4 * id + 72];
          Com_DPrintf(22, "Writing %s:%d, value = %d.\n", columns[v7].name, v10, v12);
$LN2_11:
          ++v6;
          ++v7;
          if ( v6 >= lbDef->columnCount )
            return;
          continue;
      }
    }
  }
}

/*
==============
LB_SortXUserStatsByRank
==============
*/
void LB_SortXUserStatsByRank(LeaderBoardResult<LeaderBoardRow<10>,200> *stats)
{
  unsigned int numResults; 
  unsigned int v3; 

  qsort(stats, stats->numResults, 0xD0ui64, (_CoreCrtNonSecureSearchSortCompareFunction)LB_CompareXUserStatsRowRanks);
  numResults = stats->numResults;
  v3 = 0;
  if ( numResults )
  {
    do
    {
      if ( !*(_QWORD *)&stats->m_leaderBoardEntries[v3]._bytes_20[8] )
        break;
      ++v3;
    }
    while ( v3 < numResults );
    stats->displayableRows = v3;
    stats->numResults = v3;
  }
  else
  {
    *(_QWORD *)&stats->numResults = 0i64;
  }
}

/*
==============
LB_UpdateIncludedColumns
==============
*/
__int64 LB_UpdateIncludedColumns(const LeaderboardDef *lbDef)
{
  int v3; 
  int v4; 
  int v5; 
  __int64 v6; 
  const char **v7; 
  __int64 id; 
  char *v9; 
  bool v10; 
  char *v11; 
  const char **v12; 
  char *v13; 
  char v14[240]; 

  if ( !lbDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 590, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
    __debugbreak();
  if ( lbDef->updateType != LBUPDATE_TYPE_VIRTUAL )
    return 0i64;
  if ( lbDef->columnCount > 14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 598, ASSERT_TYPE_ASSERT, "(lbDef->columnCount <= ( 4 + (10) ))", (const char *)&queryFormat, "lbDef->columnCount <= LB_VR_MAX_COLS") )
    __debugbreak();
  memset_0(v14, 0, sizeof(v14));
  memset_0(g_includedColumnsPtr, 0, sizeof(g_includedColumnsPtr));
  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( lbDef->columnCount <= 0 )
    goto LABEL_18;
  v6 = 0i64;
  v7 = g_includedColumnsPtr;
  do
  {
    id = lbDef->columns[v6].id;
    if ( (int)id < 240 )
    {
      v9 = g_includedColumns[(__int64)v4];
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 580, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
        __debugbreak();
      Com_sprintf(v9, 0x40ui64, "col_%d", (unsigned int)id);
      ++v4;
      *v7++ = v9;
      v14[id] = 1;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < lbDef->columnCount );
  v3 = 0;
  v10 = v4 == 10;
  if ( v4 < 10 )
  {
LABEL_18:
    if ( lbDef->sourceLbWidth > 0 )
    {
      v11 = v14;
      v12 = &g_includedColumnsPtr[v4];
      do
      {
        if ( !*v11 )
        {
          v13 = g_includedColumns[(__int64)v4];
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 580, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
            __debugbreak();
          Com_sprintf(v13, 0x40ui64, "col_%d", (unsigned int)v3);
          *v12 = v13;
          ++v4;
          ++v12;
          if ( v4 == 10 )
            return (unsigned int)v4;
        }
        ++v3;
        ++v11;
      }
      while ( v3 < lbDef->sourceLbWidth );
    }
    v10 = v4 == 10;
  }
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 636, ASSERT_TYPE_ASSERT, "(numIncludes == ( (10) ))", (const char *)&queryFormat, "numIncludes == LB_VR_INCLUDE_COLS") )
    __debugbreak();
  return (unsigned int)v4;
}

/*
==============
LB_UpdateLeaderboard
==============
*/
bool LB_UpdateLeaderboard(const LocalClientNum_t localClientNum, const int filter, const int from, const int to, const bool isPlatformOnly)
{
  const char *name; 
  __int64 v10; 
  char *v11; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  bool v16; 
  int v17; 
  int integer; 
  bool v19; 
  __int64 v20; 
  char v21; 
  bool result; 
  int v23; 
  const char *v24; 
  int ControllerFromClient; 
  char Friends; 
  PartyData *PartyData; 
  unsigned __int8 *p_status; 
  __int64 v29; 
  XUID *p_playerUID; 
  __int64 v31; 
  int v32; 
  unsigned __int64 userID; 
  unsigned __int64 users[200]; 

  if ( lbGlob.leaderboard.isUpdating || !lbGlob.leaderboard.lbDef )
    return 0;
  if ( lbGlob.leaderboard.filter == filter && currLbId == lbGlob.leaderboard.lbDef->id )
  {
    name = lbGlob.leaderboard.lbDef->name;
    v10 = 64i64;
    v11 = currLbName;
    if ( !lbGlob.leaderboard.lbDef->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v12 = name - currLbName;
    do
    {
      v13 = v11[v12];
      v14 = v10;
      v15 = *v11++;
      --v10;
      if ( !v14 )
        break;
      if ( v13 != v15 )
        goto LABEL_13;
    }
    while ( v13 );
    v16 = 0;
  }
  else
  {
LABEL_13:
    v16 = 1;
  }
  v17 = Sys_Milliseconds();
  v32 = v17;
  integer = lb_minrefresh->current.integer;
  if ( integer )
    v19 = v17 - lbGlob.leaderboard.lastUpdate >= 1000 * integer;
  else
    v19 = 0;
  v20 = 0i64;
  if ( v16 )
  {
    v21 = 0;
    goto LABEL_25;
  }
  if ( from > to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1116, ASSERT_TYPE_ASSERT, "(from <= to)", (const char *)&queryFormat, "from <= to") )
    __debugbreak();
  if ( lbGlob.leaderboard.filter )
  {
    lbGlob.leaderboard.offset = 0;
LABEL_24:
    v21 = 0;
    goto LABEL_25;
  }
  if ( !lbGlob.leaderboard.userStats.numResults )
    goto LABEL_24;
  if ( from >= lbGlob.leaderboard.offset )
  {
    if ( to <= (signed int)(lbGlob.leaderboard.userStats.numResults + lbGlob.leaderboard.offset - 1) )
      goto LABEL_24;
    v21 = 1;
    if ( from < 0 )
      from = 0;
    lbGlob.leaderboard.offset = from;
  }
  else
  {
    v23 = to - lb_maxrows->current.integer;
    v21 = 1;
    if ( v23 < 0 )
      v23 = 0;
    lbGlob.leaderboard.offset = v23;
  }
LABEL_25:
  if ( !lbGlob.leaderboard.forceRefresh && !v16 && !v21 && !v19 && lbGlob.leaderboard.isPlatformOnly == isPlatformOnly )
    return 1;
  *(_QWORD *)&lbGlob.leaderboard.userStats.numResults = 0i64;
  v24 = lbGlob.leaderboard.lbDef->name;
  currLbId = lbGlob.leaderboard.lbDef->id;
  Core_strcpy(currLbName, 0x40ui64, v24);
  lbGlob.leaderboard.isPlatformOnly = isPlatformOnly;
  lbGlob.leaderboard.filter = filter;
  if ( filter )
  {
    switch ( filter )
    {
      case 1:
        Friends = LB_GetFriends(&lbGlob.leaderboard, localClientNum);
        break;
      case 2:
        if ( lbGlob.leaderboard.isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 912, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
          __debugbreak();
        lbGlob.leaderboard.isUpdating = 0;
        goto LABEL_72;
      case 3:
        if ( lbGlob.leaderboard.isUpdating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 921, ASSERT_TYPE_ASSERT, "(!lb->isUpdating)", (const char *)&queryFormat, "!lb->isUpdating") )
          __debugbreak();
        ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
        Friends = Live_IsUserSignedInToDemonware(ControllerFromClient);
        if ( Friends )
        {
          if ( dwGetOnlineUserID(ControllerFromClient, &userID) )
          {
            PartyData = &g_partyData;
            if ( !Party_InParty(&g_partyData) )
            {
              if ( !Lobby_IsInRunningLobby() )
                goto LABEL_61;
              PartyData = Lobby_GetPartyData();
              if ( !PartyData )
                goto LABEL_61;
            }
            p_status = &PartyData->partyMembers[0].status;
            v29 = 200i64;
            p_playerUID = &PartyData->partyMembers[0].playerUID;
            do
            {
              if ( *p_status >= 2u )
              {
                users[v20] = XUID::GetUniversalId(p_playerUID);
                v20 = (unsigned int)(v20 + 1);
              }
              p_playerUID += 63;
              p_status += 504;
              --v29;
            }
            while ( v29 );
            if ( !(_DWORD)v20 )
            {
LABEL_61:
              LODWORD(v20) = 1;
              users[0] = userID;
            }
            Friends = LB_GetStatsByXuids(ControllerFromClient, &lbGlob.leaderboard, users, v20);
          }
          else
          {
            Com_PrintError(22, "dwGetOnlineUserID() failed.\n");
            Friends = 0;
          }
        }
        break;
      default:
        LODWORD(v31) = filter;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1617, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown filter type: %i\n", v31) )
          __debugbreak();
        goto LABEL_72;
    }
  }
  else if ( v16 )
  {
    Friends = LB_GetByPlayer(&lbGlob.leaderboard, localClientNum);
  }
  else
  {
    Friends = LB_GetByRank(&lbGlob.leaderboard, localClientNum, lbGlob.leaderboard.offset + 1);
  }
  lbGlob.leaderboard.isUpdating = Friends;
LABEL_72:
  result = lbGlob.leaderboard.isUpdating;
  if ( lbGlob.leaderboard.isUpdating )
  {
    lbGlob.leaderboard.lastUpdate = v32;
    lbGlob.leaderboard.notSameFilter = v16;
  }
  return result;
}

/*
==============
LB_UploadPlayerData_Platform
==============
*/
__int64 LB_UploadPlayerData_Platform(const int localControllerIndex)
{
  int v2; 
  __int64 PrestigeMP; 
  int writeCount; 
  LeaderboardDef **writeLeaderboards; 
  int v6; 
  LeaderboardDef *v7; 
  int v8; 
  int *v9; 
  int v10; 
  int v11; 
  int v12; 
  bool *p_prestige; 
  char v14; 
  LbUpdateType updateType; 
  bool v16; 
  int v17; 
  int v18; 
  const bdStats::bdWriteType *v19; 
  LbUpdateType v20; 
  _OWORD *v21; 
  LeaderBoardRow<10> *v22; 
  LocalClientNum_t ClientFromController; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  _DWORD *v28; 
  overlappedTask *OpenTaskSlot; 
  overlappedTask *v30; 
  bdStatsInfo **v31; 
  bdStatsInfo *v32; 
  __int64 v33; 
  unsigned __int8 v34; 
  int uploadRows; 
  int v37; 
  int v38; 
  int v39; 
  unsigned __int64 userID; 
  __int64 v41; 
  bool *v42; 
  LeaderboardDef **v43; 
  __int64 v44; 
  bdStatsInfo *statsData[200]; 
  _OWORD ptr[2600]; 

  v44 = -2i64;
  `eh vector vbase constructor iterator'(ptr, 0xD0ui64, 0xC8ui64, (void (__fastcall *)(void *))LeaderBoardRow<10>::LeaderBoardRow<10>, (void (__fastcall *)(void *))LeaderBoardRow<10>::`vbase destructor);
  if ( (unsigned int)localControllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1800, ASSERT_TYPE_ASSERT, "(unsigned)( localControllerIndex ) < (unsigned)( 8 )", "localControllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", localControllerIndex, 8) )
    __debugbreak();
  if ( !dwGetOnlineUserID(localControllerIndex, &userID) )
  {
LABEL_49:
    v34 = 0;
    goto LABEL_50;
  }
  v2 = 0;
  uploadRows = 0;
  v39 = 0;
  PrestigeMP = CL_PlayerData_GetPrestigeMP(localControllerIndex);
  v41 = (int)PrestigeMP;
  writeCount = lbGlob.writeCount;
  if ( lbGlob.writeCount <= 0 )
    goto LABEL_43;
  writeLeaderboards = lbGlob.writeLeaderboards;
  v43 = lbGlob.writeLeaderboards;
  v6 = s_leaderboardToExcludeCount;
  do
  {
    v7 = *writeLeaderboards;
    if ( s_ShouldExcludeLb && v6 > 0 )
    {
      v8 = 0;
      v9 = s_IdsOfLeaderboardToExclude;
      do
      {
        if ( *v9 == v7->id )
          goto LABEL_42;
        ++v8;
        ++v9;
      }
      while ( v8 < v6 );
      PrestigeMP = v41;
    }
    v10 = 0;
    v37 = 0;
    v11 = 1;
    v38 = 1;
    v12 = 0;
    p_prestige = &lbTrackTypes[0].prestige;
    v42 = &lbTrackTypes[0].prestige;
    do
    {
      if ( (v11 & v7->trackTypes) != 0 && (!*p_prestige || PrestigeMP) )
      {
        v14 = 0;
        updateType = v7->updateType;
        if ( updateType != LBUPDATE_TYPE_VIRTUAL )
        {
          if ( updateType == LBUPDATE_TYPE_COMBINE )
          {
            v16 = LB_CombineUpdate(localControllerIndex, userID, v7, (LeaderBoardRow<10> *)&ptr[13 * v2], v10, &uploadRows);
            v2 = uploadRows;
            if ( v16 )
              LB_RowDebugPrint(localControllerIndex, userID, v7, (LeaderBoardRow<10> *)&ptr[13 * uploadRows - 13]);
            goto LABEL_40;
          }
          v17 = 0;
          v18 = v2 - 1;
          v19 = WriteTypeMap;
          while ( 1 )
          {
            v20 = v7->updateType;
            if ( v20 == LBUPDATE_TYPE_NORMAL )
              break;
            if ( v20 == LBUPDATE_TYPE_RANK )
            {
              v22 = (LeaderBoardRow<10> *)&ptr[13 * v2];
              if ( !(unsigned int)LB_MakeRow(localControllerIndex, v7, v22, (LbAggType)v17, userID) )
              {
                v14 = 0;
                goto LABEL_38;
              }
              *(_DWORD *)v22->_bytes_20 = v12 + v7->id;
              v22->m_writeType = *v19;
              ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
              v24 = 0i64;
              v25 = ClientFromController;
              v26 = s_lbCacheStatsCount[ClientFromController];
              if ( (int)v26 > 0 )
              {
                v27 = v26;
                v28 = &s_lbCacheStats[0][0]._bytes_20[6240 * v25];
                while ( *v28 != *(_DWORD *)v22->_bytes_20 )
                {
                  ++v24;
                  v28 += 52;
                  if ( v24 >= v27 )
                  {
                    v14 = 0;
                    goto LABEL_38;
                  }
                }
                if ( *(&s_lbCacheStats[0][0].m_rating + 780 * v25 + 26 * v24) < v22->m_rating )
                {
                  uploadRows = ++v2;
                  ++v18;
                  v14 = 1;
                  goto LABEL_37;
                }
              }
              goto LABEL_24;
            }
            if ( v14 == 1 )
              goto LABEL_37;
LABEL_38:
            ++v17;
            ++v19;
            if ( v17 >= 4 )
            {
              v11 = v38;
              p_prestige = v42;
              v10 = v37;
              goto LABEL_40;
            }
          }
          v21 = &ptr[13 * v2];
          if ( (unsigned int)LB_MakeRow(localControllerIndex, v7, (LeaderBoardRow<10> *const)v21, (LbAggType)v17, userID) )
          {
            *((_DWORD *)v21 + 8) = v12 + v7->id;
            *((bdStats::bdWriteType *)v21 + 12) = *v19;
            uploadRows = ++v2;
            ++v18;
            v14 = 1;
LABEL_37:
            LB_RowDebugPrint(localControllerIndex, userID, v7, (LeaderBoardRow<10> *)&ptr[13 * v18]);
            goto LABEL_38;
          }
LABEL_24:
          v14 = 0;
          goto LABEL_38;
        }
      }
LABEL_40:
      v37 = ++v10;
      v12 += 100;
      v11 = __ROL4__(v11, 1);
      v38 = v11;
      p_prestige += 16;
      v42 = p_prestige;
      PrestigeMP = v41;
    }
    while ( v12 < 800 );
    writeCount = lbGlob.writeCount;
    v6 = s_leaderboardToExcludeCount;
LABEL_42:
    ++v39;
    writeLeaderboards = ++v43;
    PrestigeMP = v41;
  }
  while ( v39 < writeCount );
LABEL_43:
  s_ShouldExcludeLb = 0;
  Com_DPrintf(22, "\nLeaderboard writes - General: %i.\n\n", (unsigned int)v2);
  if ( v2 > 0 )
  {
    OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, localControllerIndex, 4);
    v30 = OpenTaskSlot;
    if ( !OpenTaskSlot )
      goto LABEL_49;
    v31 = statsData;
    v32 = (bdStatsInfo *)ptr;
    v33 = (unsigned int)v2;
    do
    {
      *v31 = v32;
      v32 = (bdStatsInfo *)((char *)v32 + 208);
      ++v31;
      --v33;
    }
    while ( v33 );
    dwWriteStats(OpenTaskSlot, statsData, v2);
    if ( dwGetTaskStatus(v30) )
    {
      Com_PrintError(22, "dwWriteStats() failed in LB_UploadPlayerData()\n");
      TaskManager_ClearTask(v30);
      goto LABEL_49;
    }
  }
  v34 = 1;
LABEL_50:
  `eh vector destructor iterator'(ptr, 0xD0ui64, 0xC8ui64, (void (__fastcall *)(void *))LeaderBoardRow<10>::`vbase destructor);
  return v34;
}

/*
==============
LB_UploadPlayersCmd
==============
*/
void LB_UploadPlayersCmd()
{
  unsigned int i; 
  const dvar_t *v1; 
  bool enabled; 

  for ( i = 0; i < 8; ++i )
  {
    if ( Live_IsSignedIn(i) )
    {
      v1 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      enabled = v1->current.enabled;
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 1);
      if ( !LB_UploadPlayerData(i) )
        Com_PrintError(22, "%s\n", "lb_upplayer cmd failed.");
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, enabled);
    }
  }
}

/*
==============
LB_UploadTrackersToLeaderboard
==============
*/
char LB_UploadTrackersToLeaderboard(const int localControllerIndex, bdStatsInfo **statsInfo, int statsInfoCount)
{
  overlappedTask *OpenTaskSlot; 

  OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, localControllerIndex, 5);
  dwWriteStats(OpenTaskSlot, statsInfo, statsInfoCount);
  if ( dwGetTaskStatus(OpenTaskSlot) == TASK_NOTCOMPLETE )
    return 1;
  Com_PrintError(22, "dwWriteStats() failed in LB_ReportUserToLeaderboard()\n");
  TaskManager_ClearTask(OpenTaskSlot);
  return 0;
}

/*
==============
LB_UploadTrackersToLeaderboardComplete
==============
*/
taskCompleteResults LB_UploadTrackersToLeaderboardComplete(const int slot)
{
  overlappedTask *v1; 
  taskCompleteResults result; 
  taskCompleteResults v3; 
  int v5; 

  v1 = &lbGlob.tasks.tasks[slot];
  if ( (unsigned int)slot >= 0x20 )
  {
    v5 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1944, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", slot, v5) )
      __debugbreak();
  }
  if ( !v1->active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1945, ASSERT_TYPE_ASSERT, "(uploadStatsOverlappedIO->active)", (const char *)&queryFormat, "uploadStatsOverlappedIO->active") )
    __debugbreak();
  if ( v1->type != 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1946, ASSERT_TYPE_ASSERT, "(uploadStatsOverlappedIO->type == LB_TASK_UPLOAD_TRACKER)", (const char *)&queryFormat, "uploadStatsOverlappedIO->type == LB_TASK_UPLOAD_TRACKER") )
    __debugbreak();
  result = dwWriteStatsComplete(v1);
  v3 = result;
  if ( result )
  {
    TaskManager_ClearTask(v1);
    return v3;
  }
  return result;
}

/*
==============
LB_UploadTrackersToLeaderboardInProgress
==============
*/
bool LB_UploadTrackersToLeaderboardInProgress()
{
  return TaskManager_TaskIsInProgress(&lbGlob.tasks, 5);
}

/*
==============
LB_VR_CalculateUIValue
==============
*/
__int64 LB_VR_CalculateUIValue(LeaderBoardRow<10> *row, int colX, int colY, int multiplier)
{
  unsigned int v4; 
  unsigned int v8; 
  __int64 columnCount; 
  __int64 v10; 
  int *p_id; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  int *v15; 
  int v16; 
  unsigned int v17; 
  int v18; 
  __int64 v20; 
  unsigned int v21; 
  __int64 v22; 
  int v23; 

  v4 = 0;
  v8 = 0;
  columnCount = lbGlob.leaderboard.lbDef->columnCount;
  if ( columnCount > 0 )
  {
    v10 = 0i64;
    p_id = &lbGlob.leaderboard.lbDef->columns->id;
    do
    {
      v12 = *p_id;
      if ( *p_id == colX )
        break;
      ++v10;
      v13 = v8 + 1;
      p_id += 14;
      if ( v12 >= 240 )
        v13 = v8;
      v8 = v13;
    }
    while ( v10 < columnCount );
    v14 = 0i64;
    v15 = &lbGlob.leaderboard.lbDef->columns->id;
    do
    {
      v16 = *v15;
      if ( *v15 == colY )
        break;
      ++v14;
      v17 = v4 + 1;
      v15 += 14;
      if ( v16 >= 240 )
        v17 = v4;
      v4 = v17;
    }
    while ( v14 < columnCount );
  }
  if ( v8 >= 0xA )
  {
    v23 = 10;
    v21 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2019, ASSERT_TYPE_ASSERT, "(unsigned)( xDataColumnIndex ) < (unsigned)( row->getNumColumns() )", "xDataColumnIndex doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v21, v23) )
      __debugbreak();
  }
  if ( v4 >= 0xA )
  {
    LODWORD(v22) = 10;
    LODWORD(v20) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2020, ASSERT_TYPE_ASSERT, "(unsigned)( yDataColumnIndex ) < (unsigned)( row->getNumColumns() )", "yDataColumnIndex doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  v18 = *(_DWORD *)&row->m_entityName[4 * v4 + 72];
  if ( !v18 )
    v18 = 1;
  return (unsigned int)(multiplier * *(_DWORD *)&row->m_entityName[4 * v8 + 72] / v18);
}

/*
==============
LB_VR_GetXUserCol
==============
*/
__int64 LB_VR_GetXUserCol(LeaderBoardRow<10> *row, const int colId)
{
  unsigned int v5; 
  __int64 columnCount; 
  __int64 v7; 
  int *p_id; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 

  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2092, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  if ( colId == 65534 )
    return LODWORD(row->m_rating);
  v5 = 0;
  columnCount = lbGlob.leaderboard.lbDef->columnCount;
  if ( columnCount > 0 )
  {
    v7 = 0i64;
    p_id = &lbGlob.leaderboard.lbDef->columns->id;
    do
    {
      v9 = *p_id;
      if ( *p_id == colId )
        break;
      ++v7;
      v10 = v5 + 1;
      p_id += 14;
      if ( v9 >= 240 )
        v10 = v5;
      v5 = v10;
    }
    while ( v7 < columnCount );
    if ( v5 >= 0xA )
    {
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2103, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( row->getNumColumns() )", "index doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v11, 10) )
        __debugbreak();
    }
  }
  return *(unsigned int *)&row->m_entityName[4 * v5 + 72];
}

/*
==============
LB_VR_GetXUserColExt
==============
*/
__int64 LB_VR_GetXUserColExt(LeaderBoardRow<10> *row, LbColumnDef *lbColDef)
{
  unsigned int id; 
  __int64 result; 
  unsigned int v6; 
  int *p_id; 
  __int64 v8; 
  int v9; 
  unsigned int v10; 
  __int64 v11; 

  if ( !row && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2112, ASSERT_TYPE_ASSERT, "(row)", (const char *)&queryFormat, "row") )
    __debugbreak();
  id = lbColDef->id;
  switch ( id )
  {
    case 0xFFF3u:
      result = LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 10000);
      break;
    case 0xFFF4u:
      result = LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 6000);
      break;
    case 0xFFF5u:
    case 0xFFFBu:
      result = LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1000);
      break;
    case 0xFFF6u:
    case 0xFFFAu:
      result = LB_VR_CalculateUIValue(row, lbColDef->uiCalColX, lbColDef->uiCalColY, 1);
      break;
    case 0xFFFCu:
      Com_PrintError(1, "Invalid column '%s' id(%d) for virtual leaderboard '%s'\n", lbColDef->name, id, lbGlob.leaderboard.lbDef->name);
      result = 0i64;
      break;
    case 0xFFFEu:
      result = LODWORD(row->m_rating);
      break;
    default:
      v6 = 0;
      if ( lbGlob.leaderboard.lbDef->columnCount > 0 )
      {
        p_id = &lbGlob.leaderboard.lbDef->columns->id;
        v8 = 0i64;
        do
        {
          v9 = *p_id;
          if ( *p_id == id )
            break;
          ++v8;
          v10 = v6 + 1;
          p_id += 14;
          if ( v9 >= 240 )
            v10 = v6;
          v6 = v10;
        }
        while ( v8 < lbGlob.leaderboard.lbDef->columnCount );
        if ( v6 >= 0xA )
        {
          LODWORD(v11) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2140, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( row->getNumColumns() )", "index doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v11, 10) )
            __debugbreak();
        }
      }
      result = *(unsigned int *)&row->m_entityName[4 * v6 + 72];
      break;
  }
  return result;
}

/*
==============
LB_VR_SetLocalRatings
==============
*/
void LB_VR_SetLocalRatings(LeaderboardDef *lbDef, LeaderBoardResult<LeaderBoardRow<10>,200> *stats)
{
  int rankColIdY; 
  int rankColIdX; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  LeaderBoardRow<10> *v9; 
  int *p_id; 
  int v11; 
  unsigned int v12; 
  __int64 v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  int *v19; 
  int v20; 
  unsigned int v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  LeaderBoardResult<LeaderBoardRow<10>,200> *v25; 

  v25 = stats;
  if ( !lbDef )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1059, ASSERT_TYPE_ASSERT, "(lbDef)", (const char *)&queryFormat, "lbDef") )
      __debugbreak();
    stats = v25;
  }
  rankColIdY = lbDef->rankColIdY;
  if ( lbDef->id == lbDef->sourceLbId )
  {
    rankColIdX = lbDef->rankColIdX;
    if ( rankColIdX || rankColIdY )
    {
      v5 = 0;
      if ( stats->numResults )
      {
        do
        {
          v6 = 0;
          v7 = 0i64;
          v8 = 0i64;
          v9 = &stats->m_leaderBoardEntries[v5];
          if ( lbDef->columnCount > 0 )
          {
            p_id = &lbDef->columns->id;
            do
            {
              v11 = *p_id;
              if ( *p_id == rankColIdX )
                break;
              v12 = v6 + 1;
              ++v8;
              p_id += 14;
              if ( v11 >= 240 )
                v12 = v6;
              v6 = v12;
              v13 = v7 + 1;
              if ( v11 >= 240 )
                v13 = v7;
              v7 = v13;
            }
            while ( v8 < lbDef->columnCount );
            if ( v6 >= 0xA )
            {
              LODWORD(v24) = 10;
              LODWORD(v23) = v6;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1035, ASSERT_TYPE_ASSERT, "(unsigned)( xDataColumnIndex ) < (unsigned)( row->getNumColumns() )", "xDataColumnIndex doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v23, v24) )
                __debugbreak();
            }
          }
          v14 = *(_DWORD *)&v9->m_entityName[4 * v7 + 72];
          v15 = 1;
          if ( rankColIdY )
          {
            v16 = 0;
            v17 = 0i64;
            v18 = 0i64;
            if ( lbDef->columnCount > 0 )
            {
              v19 = &lbDef->columns->id;
              do
              {
                v20 = *v19;
                if ( *v19 == rankColIdY )
                  break;
                v21 = v16 + 1;
                ++v18;
                v19 += 14;
                if ( v20 >= 240 )
                  v21 = v16;
                v16 = v21;
                v22 = v17 + 1;
                if ( v20 >= 240 )
                  v22 = v17;
                v17 = v22;
              }
              while ( v18 < lbDef->columnCount );
              if ( v16 >= 0xA )
              {
                LODWORD(v24) = 10;
                LODWORD(v23) = v16;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 1044, ASSERT_TYPE_ASSERT, "(unsigned)( yDataColumnIndex ) < (unsigned)( row->getNumColumns() )", "yDataColumnIndex doesn't index row->getNumColumns()\n\t%i not in [0, %i)", v23, v24) )
                  __debugbreak();
              }
            }
            if ( *(_DWORD *)&v9->m_entityName[4 * v17 + 72] )
              v15 = *(_DWORD *)&v9->m_entityName[4 * v17 + 72];
          }
          ++v5;
          stats = v25;
          v9->m_rank = ~(1000 * v14 / (unsigned __int64)v15);
        }
        while ( v5 < v25->numResults );
      }
    }
    else
    {
      Com_PrintError(22, "LB_VR_SetCustomRank failed VirtualLeaderboardDef is missing ranking information for leaderboard %s\n", lbDef->name);
    }
  }
}

/*
==============
LB_WritePlayerInfractionComplete
==============
*/
taskCompleteResults LB_WritePlayerInfractionComplete(const int slot)
{
  __int64 v1; 
  overlappedTask *v2; 
  taskCompleteResults result; 
  taskCompleteResults v4; 
  int v6; 

  v1 = slot;
  v2 = &lbGlob.tasks.tasks[v1];
  if ( (unsigned int)slot >= 0x20 )
  {
    v6 = 32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2828, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 32 )", "slot doesn't index MAX_OVERLAPPED_TASKS_PER_SET\n\t%i not in [0, %i)", slot, v6) )
      __debugbreak();
  }
  if ( !lbGlob.tasks.tasks[v1].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2829, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].active)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].active") )
    __debugbreak();
  if ( lbGlob.tasks.tasks[v1].type != 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2830, ASSERT_TYPE_ASSERT, "(lbGlob.tasks.tasks[ slot ].type == LB_TASK_PLAYER_INFRACTION_WRITE)", (const char *)&queryFormat, "lbGlob.tasks.tasks[ slot ].type == LB_TASK_PLAYER_INFRACTION_WRITE") )
    __debugbreak();
  if ( !lbGlob.tasks.tasks[v1].data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2831, ASSERT_TYPE_ASSERT, "(overlappedIO->data)", (const char *)&queryFormat, "overlappedIO->data") )
    __debugbreak();
  result = dwWriteStatsComplete(&lbGlob.tasks.tasks[v1]);
  v4 = result;
  if ( result )
  {
    TaskManager_ClearTask(v2);
    return v4;
  }
  return result;
}

/*
==============
LB_WriteRowForUser
==============
*/
char LB_WriteRowForUser(const int controllerIndex, const unsigned int leaderboardID, const int taskType, void *userStats, const int numStats, const bdStats::bdWriteType writeType)
{
  bool v10; 
  overlappedTask *OpenTaskSlot; 
  bdStatsInfo **v12; 
  __int64 v13; 
  __int64 v15; 
  bdStatsInfo *statsData[5]; 

  if ( numStats > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2769, ASSERT_TYPE_ASSERT, "(numStats <= 2)", (const char *)&queryFormat, "numStats <= 2") )
    __debugbreak();
  if ( !TaskManager_TaskIsInProgressForController(&lbGlob.tasks, taskType, controllerIndex) )
  {
    v10 = controllerIndex < 8;
    if ( (unsigned int)controllerIndex >= 8 )
    {
      LODWORD(v15) = controllerIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2775, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v15, 8) )
        __debugbreak();
      v10 = controllerIndex < 8;
    }
    if ( !v10 || !Live_IsUserSignedInToLive(controllerIndex) )
      return 0;
    OpenTaskSlot = TaskManager_GetOpenTaskSlot(&lbGlob.tasks, controllerIndex, taskType);
    if ( !OpenTaskSlot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\leaderboard\\com_leaderboard.cpp", 2783, ASSERT_TYPE_ASSERT, "(ov)", (const char *)&queryFormat, "ov") )
      __debugbreak();
    OpenTaskSlot->data = userStats;
    if ( numStats > 0 )
    {
      v12 = statsData;
      v13 = (unsigned int)numStats;
      do
      {
        *v12++ = (bdStatsInfo *)userStats;
        *((_DWORD *)userStats + 8) = leaderboardID;
        userStats = (char *)userStats + 208;
        (*(v12 - 1))->m_writeType = writeType;
        --v13;
      }
      while ( v13 );
    }
    dwWriteStats(OpenTaskSlot, statsData, numStats);
    if ( dwGetTaskStatus(OpenTaskSlot) )
    {
      Com_PrintError(22, "dwWriteStats() failed in LB_WriteRowForUser()\n");
      TaskManager_ClearTask(OpenTaskSlot);
      return 0;
    }
  }
  return 1;
}

/*
==============
Stats_Test
==============
*/
void Stats_Test(int controllerIndex)
{
  const LeaderboardDef *Def; 
  unsigned __int64 userID; 
  bdStatsInfo *statsData[2]; 
  LeaderBoardRow<10> v5; 

  statsData[1] = (bdStatsInfo *)-2i64;
  if ( dwGetOnlineUserID(controllerIndex, &userID) )
  {
    *((_QWORD *)&v5.__vftable + 1) = &LeaderBoardRow<10>::`vbtable'{for `bdTaskResult'};
    *((_QWORD *)&v5.__vftable + 3) = &LeaderBoardRow<10>::`vbtable'{for `bdSerializable'};
    *(_QWORD *)&v5.gapBC[4] = &bdReferencable::`vftable';
    *(_DWORD *)&v5.gapBC[12] = 0;
    bdStatsInfo::bdStatsInfo(&v5);
    v5.__vftable = (LeaderBoardRow<10>_vtbl *)&LeaderBoardRow<10>::`vftable'{for `bdTaskResult'};
    *((_QWORD *)&v5.__vftable + 2) = &LeaderBoardRow<10>::`vftable'{for `bdSerializable'};
    *(_QWORD *)&v5.m_columns[*(int *)(*((_QWORD *)&v5.__vftable + 1) + 4i64) - 152] = &LeaderBoardRow<10>::`vftable'{for `bdReferencable'};
    memset(&v5.m_secondsSinceUpdate + 1, 0, 40);
    v5.m_columnsCount = 10;
    Def = LB_LoadDef("LB_GB_KILLS_AT", 0);
    if ( Def )
    {
      if ( (unsigned int)LB_MakeRow(controllerIndex, Def, &v5, LBAGG_TYPE_LAST, userID) )
      {
        statsData[0] = &v5;
        dwWriteStats(&g_statsTask, statsData, 1u);
      }
      g_testTask = DW_WRITE_STATS;
    }
    v5.__vftable = (LeaderBoardRow<10>_vtbl *)&LeaderBoardRow<10>::`vftable'{for `bdTaskResult'};
    *((_QWORD *)&v5.__vftable + 2) = &LeaderBoardRow<10>::`vftable'{for `bdSerializable'};
    *(_QWORD *)&v5.m_columns[*(int *)(*((_QWORD *)&v5.__vftable + 1) + 4i64) - 152] = &LeaderBoardRow<10>::`vftable'{for `bdReferencable'};
    bdStatsInfo::~bdStatsInfo((bdStatsInfo *)(&v5.m_secondsSinceUpdate + 1));
    bdReferencable::~bdReferencable((bdReferencable *)&v5.gapBC[4]);
  }
}

/*
==============
Stats_TestComplete
==============
*/
void Stats_TestComplete(void)
{
  LeaderboardDef *Def; 
  dwStatsTask v1; 
  taskCompleteResults StatsComplete; 
  int v3; 
  unsigned int numIncludedColumns; 
  int v5; 

  Def = LB_LoadDef("LB_GB_KILLS_AT", 0);
  if ( !Def )
  {
LABEL_16:
    v1 = g_testTask;
LABEL_17:
    if ( v1 )
      return;
    goto LABEL_18;
  }
  v1 = g_testTask;
  if ( g_testTask != DW_WRITE_STATS )
  {
    if ( g_testTask != DW_READ_STATS )
    {
      if ( g_testTask != DW_DELETE_STATS )
        goto LABEL_17;
      StatsComplete = dwDeleteStatsComplete(&g_statsTask);
      if ( StatsComplete == TASK_COMPLETE )
      {
        g_testTask = DW_NONE;
        g_statsTest = 0;
        return;
      }
      goto LABEL_15;
    }
    StatsComplete = dwReadStatsComplete(&g_statsTask);
    if ( StatsComplete == TASK_COMPLETE )
    {
      v3 = 150000;
      if ( lbGlob.leaderboard.isPlatformOnly )
        v3 = 130000;
      dwDeleteStats(&g_statsTask, Def->id + v3);
      g_testTask = DW_DELETE_STATS;
      return;
    }
LABEL_15:
    if ( StatsComplete == TASK_ERROR )
    {
LABEL_18:
      g_statsTest = 0;
      return;
    }
    goto LABEL_16;
  }
  StatsComplete = dwWriteStatsComplete(&g_statsTask);
  if ( StatsComplete != TASK_COMPLETE )
    goto LABEL_15;
  g_statsTask.data = &lbGlob.leaderboard;
  numIncludedColumns = LB_UpdateIncludedColumns(lbGlob.leaderboard.lbDef);
  v5 = 150000;
  if ( lbGlob.leaderboard.isPlatformOnly )
    v5 = 130000;
  dwReadStatsByRank(&g_statsTask, Def->id + v5, 1u, 0x1Eu, g_includedColumnsPtr, numIncludedColumns);
  g_testTask = DW_READ_STATS;
}

