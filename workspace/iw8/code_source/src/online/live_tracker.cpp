/*
==============
LiveTracker_WriteForAllLocalUsers
==============
*/

int __fastcall LiveTracker_WriteForAllLocalUsers(trackerColumn_e col, int val)
{
  return ?LiveTracker_WriteForAllLocalUsers@@YAHW4trackerColumn_e@@H@Z(col, val);
}

/*
==============
LiveTracker_Init
==============
*/

void LiveTracker_Init(void)
{
  ?LiveTracker_Init@@YAXXZ();
}

/*
==============
LiveTracker_GetColumnByName
==============
*/

trackerColumn_e __fastcall LiveTracker_GetColumnByName(const char *name)
{
  return ?LiveTracker_GetColumnByName@@YA?AW4trackerColumn_e@@PEBD@Z(name);
}

/*
==============
LiveTracker_WriteForUserAndHost
==============
*/

int __fastcall LiveTracker_WriteForUserAndHost(const int controllerIndex, trackerColumn_e userCol, trackerColumn_e hostCol, int val)
{
  return ?LiveTracker_WriteForUserAndHost@@YAHHW4trackerColumn_e@@0H@Z(controllerIndex, userCol, hostCol, val);
}

/*
==============
LiveTracker_Process
==============
*/

void __fastcall LiveTracker_Process(const int localControllerIndex)
{
  ?LiveTracker_Process@@YAXH@Z(localControllerIndex);
}

/*
==============
LiveTracker_WriteByName
==============
*/

int __fastcall LiveTracker_WriteByName(const char *colName, unsigned __int64 ent, int val)
{
  return ?LiveTracker_WriteByName@@YAHPEBD_KH@Z(colName, ent, val);
}

/*
==============
LiveTracker_WriteByID
==============
*/

int __fastcall LiveTracker_WriteByID(trackerColumn_e col, unsigned __int64 ent, int val)
{
  return ?LiveTracker_WriteByID@@YAHW4trackerColumn_e@@_KH@Z(col, ent, val);
}

/*
==============
LiveTracker_RecordRecentlyActive
==============
*/

void __fastcall LiveTracker_RecordRecentlyActive(const int localControllerIndex)
{
  ?LiveTracker_RecordRecentlyActive@@YAXH@Z(localControllerIndex);
}

/*
==============
LiveTracker_AddStressTestCmd
==============
*/
void LiveTracker_AddStressTestCmd()
{
  int i; 
  int v1; 
  XUID *Xuid; 
  unsigned __int64 UniversalId; 
  XUID result; 

  for ( i = 0; i < 18; ++i )
  {
    if ( LiveTracker_GetColType((trackerColumn_e)i) )
    {
      v1 = Cmd_LocalControllerIndex();
      Xuid = Live_GetXuid(&result, v1);
      UniversalId = XUID::GetUniversalId(Xuid);
      LiveTracker_WriteByID((trackerColumn_e)i, UniversalId, 1);
    }
  }
  s_trackerQueue.lastUploadTime = 0;
}

/*
==============
LiveTracker_GetColType
==============
*/
unsigned int LiveTracker_GetColType(trackerColumn_e col)
{
  const char *v2; 
  const char *v3; 
  unsigned int result; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/trackercolumns.csv", (const StringTable **)&tablePtr);
  if ( !tablePtr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 98, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    if ( !tablePtr )
      return -1;
  }
  v2 = j_va("%d", (unsigned int)col);
  v3 = StringTable_Lookup(tablePtr, 0, v2, 2);
  if ( !v3 )
    return -1;
  if ( !*v3 )
    return -1;
  result = atoi(v3);
  if ( result > 3 )
    return -1;
  return result;
}

/*
==============
LiveTracker_GetColumnByName
==============
*/
__int64 LiveTracker_GetColumnByName(const char *name)
{
  StringTable *v2; 
  const char *v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 result; 
  __int64 v7; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/trackercolumns.csv", (const StringTable **)&tablePtr);
  v2 = tablePtr;
  if ( !tablePtr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 173, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    v2 = tablePtr;
    if ( !tablePtr )
      return 0xFFFFFFFFi64;
  }
  v3 = StringTable_Lookup(v2, 1, name, 0);
  if ( !v3 || !*v3 )
    return 0xFFFFFFFFi64;
  v4 = atoi(v3);
  v5 = v4;
  if ( v4 >= 0x64 )
  {
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( col ) < (unsigned)( ( 6099 - 6000 + 1 ) )", "col doesn't index TRACKER_MAX_COLS\n\t%i not in [0, %i)", v7, 100) )
      __debugbreak();
  }
  result = v5;
  if ( v5 > 0x63 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
LiveTracker_Init
==============
*/
void LiveTracker_Init(void)
{
  unsigned __int64 *p_ent; 

  s_trackerQueue.dirty = 0;
  s_trackerQueue.lastUploadTime = 0;
  p_ent = &s_trackerQueue.items[1].ent;
  do
  {
    *((_WORD *)p_ent - 16) = -1;
    *(p_ent - 3) = 0i64;
    *((_DWORD *)p_ent - 4) = 0;
    *((_DWORD *)p_ent - 3) = -1;
    *((_WORD *)p_ent - 4) = -1;
    *p_ent = 0i64;
    *((_DWORD *)p_ent + 2) = 0;
    *((_DWORD *)p_ent + 3) = -1;
    *((_WORD *)p_ent + 8) = -1;
    p_ent[3] = 0i64;
    *((_DWORD *)p_ent + 8) = 0;
    *((_DWORD *)p_ent + 9) = -1;
    *((_WORD *)p_ent + 20) = -1;
    p_ent[6] = 0i64;
    *((_DWORD *)p_ent + 14) = 0;
    *((_DWORD *)p_ent + 15) = -1;
    *((_WORD *)p_ent + 32) = -1;
    p_ent[9] = 0i64;
    *((_DWORD *)p_ent + 20) = 0;
    *((_DWORD *)p_ent + 21) = -1;
    *((_WORD *)p_ent + 44) = -1;
    p_ent[12] = 0i64;
    *((_DWORD *)p_ent + 26) = 0;
    *((_DWORD *)p_ent + 27) = -1;
    *((_WORD *)p_ent + 56) = -1;
    p_ent[15] = 0i64;
    *((_DWORD *)p_ent + 32) = 0;
    *((_DWORD *)p_ent + 33) = -1;
    *((_WORD *)p_ent + 68) = -1;
    p_ent[18] = 0i64;
    *((_DWORD *)p_ent + 38) = 0;
    *((_DWORD *)p_ent + 39) = -1;
    *((_WORD *)p_ent + 80) = -1;
    p_ent[21] = 0i64;
    *((_DWORD *)p_ent + 44) = 0;
    *((_DWORD *)p_ent + 45) = -1;
    *((_WORD *)p_ent + 92) = -1;
    p_ent[24] = 0i64;
    *((_DWORD *)p_ent + 50) = 0;
    *((_DWORD *)p_ent + 51) = -1;
    *((_WORD *)p_ent + 104) = -1;
    p_ent[27] = 0i64;
    *((_DWORD *)p_ent + 56) = 0;
    *((_DWORD *)p_ent + 57) = -1;
    *((_WORD *)p_ent + 116) = -1;
    p_ent[30] = 0i64;
    *((_DWORD *)p_ent + 62) = 0;
    *((_DWORD *)p_ent + 63) = -1;
    *((_WORD *)p_ent + 128) = -1;
    p_ent[33] = 0i64;
    *((_DWORD *)p_ent + 68) = 0;
    *((_DWORD *)p_ent + 69) = -1;
    *((_WORD *)p_ent + 140) = -1;
    p_ent[36] = 0i64;
    *((_DWORD *)p_ent + 74) = 0;
    *((_DWORD *)p_ent + 75) = -1;
    *((_WORD *)p_ent + 152) = -1;
    p_ent[39] = 0i64;
    *((_DWORD *)p_ent + 80) = 0;
    *((_DWORD *)p_ent + 81) = -1;
    *((_WORD *)p_ent + 164) = -1;
    p_ent[42] = 0i64;
    *((_DWORD *)p_ent + 86) = 0;
    *((_DWORD *)p_ent + 87) = -1;
    *((_WORD *)p_ent + 176) = -1;
    p_ent[45] = 0i64;
    *((_DWORD *)p_ent + 92) = 0;
    *((_DWORD *)p_ent + 93) = -1;
    *((_WORD *)p_ent + 188) = -1;
    p_ent[48] = 0i64;
    *((_DWORD *)p_ent + 98) = 0;
    *((_DWORD *)p_ent + 99) = -1;
    *((_WORD *)p_ent + 200) = -1;
    p_ent[51] = 0i64;
    *((_DWORD *)p_ent + 104) = 0;
    *((_DWORD *)p_ent + 105) = -1;
    *((_WORD *)p_ent + 212) = -1;
    p_ent[54] = 0i64;
    *((_DWORD *)p_ent + 110) = 0;
    *((_DWORD *)p_ent + 111) = -1;
    *((_WORD *)p_ent + 224) = -1;
    p_ent[57] = 0i64;
    *((_DWORD *)p_ent + 116) = 0;
    *((_DWORD *)p_ent + 117) = -1;
    *((_WORD *)p_ent + 236) = -1;
    p_ent[60] = 0i64;
    *((_DWORD *)p_ent + 122) = 0;
    *((_DWORD *)p_ent + 123) = -1;
    *((_WORD *)p_ent + 248) = -1;
    p_ent[63] = 0i64;
    *((_DWORD *)p_ent + 128) = 0;
    *((_DWORD *)p_ent + 129) = -1;
    *((_WORD *)p_ent + 260) = -1;
    p_ent[66] = 0i64;
    *((_DWORD *)p_ent + 134) = 0;
    *((_DWORD *)p_ent + 135) = -1;
    *((_WORD *)p_ent + 272) = -1;
    p_ent[69] = 0i64;
    *((_DWORD *)p_ent + 140) = 0;
    *((_DWORD *)p_ent + 141) = -1;
    *((_WORD *)p_ent + 284) = -1;
    p_ent[72] = 0i64;
    *((_DWORD *)p_ent + 146) = 0;
    *((_DWORD *)p_ent + 147) = -1;
    *((_WORD *)p_ent + 296) = -1;
    p_ent[75] = 0i64;
    *((_DWORD *)p_ent + 152) = 0;
    *((_DWORD *)p_ent + 153) = -1;
    *((_WORD *)p_ent + 308) = -1;
    p_ent[78] = 0i64;
    *((_DWORD *)p_ent + 158) = 0;
    *((_DWORD *)p_ent + 159) = -1;
    *((_WORD *)p_ent + 320) = -1;
    p_ent[81] = 0i64;
    *((_DWORD *)p_ent + 164) = 0;
    *((_DWORD *)p_ent + 165) = -1;
    *((_WORD *)p_ent + 332) = -1;
    p_ent[84] = 0i64;
    *((_DWORD *)p_ent + 170) = 0;
    *((_DWORD *)p_ent + 171) = -1;
    *((_WORD *)p_ent + 344) = -1;
    p_ent[87] = 0i64;
    *((_DWORD *)p_ent + 176) = 0;
    *((_DWORD *)p_ent + 177) = -1;
    *((_WORD *)p_ent + 356) = -1;
    p_ent[90] = 0i64;
    *((_DWORD *)p_ent + 182) = 0;
    *((_DWORD *)p_ent + 183) = -1;
    *((_WORD *)p_ent + 368) = -1;
    p_ent[93] = 0i64;
    *((_DWORD *)p_ent + 188) = 0;
    *((_DWORD *)p_ent + 189) = -1;
    *((_WORD *)p_ent + 380) = -1;
    p_ent[96] = 0i64;
    *((_DWORD *)p_ent + 194) = 0;
    *((_DWORD *)p_ent + 195) = -1;
    *((_WORD *)p_ent + 392) = -1;
    p_ent[99] = 0i64;
    *((_DWORD *)p_ent + 200) = 0;
    *((_DWORD *)p_ent + 201) = -1;
    *((_WORD *)p_ent + 404) = -1;
    p_ent[102] = 0i64;
    *((_DWORD *)p_ent + 206) = 0;
    *((_DWORD *)p_ent + 207) = -1;
    *((_WORD *)p_ent + 416) = -1;
    p_ent[105] = 0i64;
    *((_DWORD *)p_ent + 212) = 0;
    *((_DWORD *)p_ent + 213) = -1;
    *((_WORD *)p_ent + 428) = -1;
    p_ent[108] = 0i64;
    *((_DWORD *)p_ent + 218) = 0;
    *((_DWORD *)p_ent + 219) = -1;
    *((_WORD *)p_ent + 440) = -1;
    p_ent[111] = 0i64;
    *((_DWORD *)p_ent + 224) = 0;
    *((_DWORD *)p_ent + 225) = -1;
    *((_WORD *)p_ent + 452) = -1;
    p_ent[114] = 0i64;
    *((_DWORD *)p_ent + 230) = 0;
    *((_DWORD *)p_ent + 231) = -1;
    *((_WORD *)p_ent + 464) = -1;
    p_ent[117] = 0i64;
    *((_DWORD *)p_ent + 236) = 0;
    *((_DWORD *)p_ent + 237) = -1;
    *((_WORD *)p_ent + 476) = -1;
    p_ent[120] = 0i64;
    *((_DWORD *)p_ent + 242) = 0;
    *((_DWORD *)p_ent + 243) = -1;
    *((_WORD *)p_ent + 488) = -1;
    p_ent[123] = 0i64;
    *((_DWORD *)p_ent + 248) = 0;
    *((_DWORD *)p_ent + 249) = -1;
    *((_WORD *)p_ent + 500) = -1;
    p_ent[126] = 0i64;
    *((_DWORD *)p_ent + 254) = 0;
    *((_DWORD *)p_ent + 255) = -1;
    *((_WORD *)p_ent + 512) = -1;
    p_ent[129] = 0i64;
    *((_DWORD *)p_ent + 260) = 0;
    *((_DWORD *)p_ent + 261) = -1;
    *((_WORD *)p_ent + 524) = -1;
    p_ent[132] = 0i64;
    *((_DWORD *)p_ent + 266) = 0;
    *((_DWORD *)p_ent + 267) = -1;
    *((_WORD *)p_ent + 536) = -1;
    p_ent[135] = 0i64;
    *((_DWORD *)p_ent + 272) = 0;
    *((_DWORD *)p_ent + 273) = -1;
    *((_WORD *)p_ent + 548) = -1;
    p_ent[138] = 0i64;
    *((_DWORD *)p_ent + 278) = 0;
    *((_DWORD *)p_ent + 279) = -1;
    p_ent += 144;
  }
  while ( (__int64)p_ent < (__int64)&unk_150A542C0 );
  Cmd_AddCommandInternal("trackerUpdate", LiveTracker_UpdateCmd, &LiveTracker_UpdateCmd_VAR);
  Cmd_AddCommandInternal("trackerAddStressTest", LiveTracker_AddStressTestCmd, &LiveTracker_AddStressTestCmd_VAR);
}

/*
==============
LiveTracker_Process
==============
*/
void LiveTracker_Process(const int localControllerIndex)
{
  int *p_val; 
  int count; 
  char v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned int *v10; 
  int v11; 
  char *fmt; 

  if ( dwGetLogOnStatus(localControllerIndex) != DW_LIVE_CONNECTED || !s_trackerQueue.dirty || Sys_Milliseconds() < s_trackerQueue.lastUploadTime + 20000 || LB_UploadTrackersToLeaderboardInProgress() )
    return;
  p_val = &s_trackerQueue.items[0].val;
  count = 0;
  s_trackerTask.count = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = *((_QWORD *)p_val - 1);
    if ( !v5 )
      goto LABEL_15;
    v6 = (unsigned int)*((__int16 *)p_val - 8);
    v7 = count;
    v8 = *p_val;
    v9 = v7;
    v10 = (unsigned int *)&s_trackerTask.statsInfo[26 * v7 - 620];
    *(&s_trackerTask.rows[v9].m_secondsSinceUpdate + 2) = 0x7FFFFFFF;
    *(&s_trackerTask.rows[v9].m_secondsSinceUpdate + 3) = 0x7FFFFFFF;
    *(&s_trackerTask.rows[v9].m_secondsSinceUpdate + 4) = 0x7FFFFFFF;
    *(_DWORD *)s_trackerTask.rows[v9].m_columns = 0x7FFFFFFF;
    *(_DWORD *)&s_trackerTask.rows[v9].m_columns[4] = 0x7FFFFFFF;
    *(_DWORD *)&s_trackerTask.rows[v9].m_columns[8] = 0x7FFFFFFF;
    *(_DWORD *)&s_trackerTask.rows[v9].m_columns[12] = 0x7FFFFFFF;
    *(_DWORD *)&s_trackerTask.rows[v9].m_columns[16] = 0x7FFFFFFF;
    *(_DWORD *)&s_trackerTask.rows[v9].m_columns[20] = 0x7FFFFFFF;
    *v10 = v6 + 6000;
    v11 = p_val[1];
    s_trackerTask.rows[v9].m_columnsCount = 1;
    *(_QWORD *)&s_trackerTask.rows[v9]._bytes_20[8] = v5;
    s_trackerTask.rows[v9].m_rating = v8;
    *(&s_trackerTask.rows[v9].m_secondsSinceUpdate + 1) = v8;
    if ( v11 < 0 )
      goto LABEL_23;
    if ( v11 > 1 )
      break;
    s_trackerTask.rows[v9].m_writeType = STAT_WRITE_REPLACE;
LABEL_14:
    LODWORD(fmt) = v8;
    s_trackerTask.statsInfo[s_trackerTask.count] = &s_trackerTask.rows[s_trackerTask.count];
    Com_Printf(25, "Tracker LB %d: Uploading col %d, val %d for ent %zu\n", *v10, v6, fmt, v5);
    count = s_trackerTask.count + 1;
    *((_WORD *)p_val - 8) = -1;
    *((_QWORD *)p_val - 1) = 0i64;
    *p_val = 0;
    p_val[1] = -1;
    s_trackerTask.count = count;
    if ( count == 24 )
    {
      Com_Printf(25, "Tracker: Upload batch limit reached. Will continue in 20 seconds.\n");
      count = s_trackerTask.count;
      v4 = 1;
LABEL_16:
      if ( count > 0 )
        LB_UploadTrackersToLeaderboard(localControllerIndex, s_trackerTask.statsInfo, count);
      if ( !v4 )
      {
        Com_Printf(25, "Tracker: Queue uploaded successfully.\n");
        s_trackerQueue.dirty = 0;
      }
      s_trackerQueue.lastUploadTime = Sys_Milliseconds();
      return;
    }
LABEL_15:
    p_val += 6;
    if ( (__int64)p_val >= (__int64)&unk_150A542B0 )
      goto LABEL_16;
  }
  if ( v11 == 2 )
  {
    s_trackerTask.rows[v9].m_writeType = STAT_WRITE_ADD;
    goto LABEL_14;
  }
  if ( v11 == 3 )
  {
    s_trackerTask.rows[v9].m_writeType = STAT_WRITE_MAX;
    goto LABEL_14;
  }
LABEL_23:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 402, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Adding to tracker failed. No type specified.") )
    __debugbreak();
}

/*
==============
LiveTracker_RecordRecentlyActive
==============
*/
void LiveTracker_RecordRecentlyActive(const int localControllerIndex)
{
  int UTC; 
  XUID *Xuid; 
  unsigned __int64 UniversalId; 
  XUID result; 

  if ( enable_recordRecentActivity->current.integer )
  {
    UTC = LiveStorage_GetUTC();
    Xuid = Live_GetXuid(&result, localControllerIndex);
    UniversalId = XUID::GetUniversalId(Xuid);
    LiveTracker_WriteByID(TRACKER_LEADERBOARD_RECENT_ACTIVITY, UniversalId, UTC);
  }
}

/*
==============
LiveTracker_SetItem
==============
*/
__int64 LiveTracker_SetItem(int queuePos, trackerColumn_e col, unsigned __int64 ent, int val)
{
  __int64 v4; 
  signed int ColType; 
  __int64 v9; 
  int v10; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v16; 
  __int64 v17; 

  v4 = queuePos;
  if ( (unsigned int)col >= TRACKER_END_COLUMNS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 123, ASSERT_TYPE_ASSERT, "(unsigned)( col ) < (unsigned)( TRACKER_END_COLUMNS )", "col doesn't index TRACKER_END_COLUMNS\n\t%i not in [0, %i)", col, 18) )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x60 )
  {
    LODWORD(v17) = 96;
    LODWORD(v16) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 124, ASSERT_TYPE_ASSERT, "(unsigned)( queuePos ) < (unsigned)( 96 )", "queuePos doesn't index TRACKER_QUEUE_SIZE\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( (unsigned int)col > TRACKER_LEADERBOARD_OFFENSIVE_CLANTAG || (unsigned int)v4 > 0x5F || (ColType = LiveTracker_GetColType(col), ColType == -1) )
  {
    Com_Printf(25, "Tracker: Could not add column %d, value %d for entity %zu\n", (unsigned int)col, (unsigned int)val, ent);
    return 0i64;
  }
  else
  {
    if ( ColType >= 0 )
    {
      if ( ColType <= 1 )
      {
        v13 = v4;
        s_trackerQueue.items[v13].val = val;
        s_trackerQueue.items[v13].type = TRACKER_COLTYPE_REPLACE;
      }
      else if ( ColType == 2 )
      {
        v12 = v4;
        s_trackerQueue.items[v12].val += val;
        s_trackerQueue.items[v12].type = TRACKER_COLTYPE_ADD;
      }
      else if ( ColType == 3 )
      {
        v9 = v4;
        v10 = val;
        v11 = s_trackerQueue.items[v4].val <= val;
        s_trackerQueue.items[v4].type = TRACKER_COLTYPE_MAX;
        if ( !v11 )
          v10 = s_trackerQueue.items[v9].val;
        s_trackerQueue.items[v9].val = v10;
      }
    }
    v14 = v4;
    s_trackerQueue.items[v14].col = col;
    s_trackerQueue.items[v14].ent = ent;
    if ( !s_trackerQueue.dirty )
      s_trackerQueue.lastUploadTime = Sys_Milliseconds();
    s_trackerQueue.dirty = 1;
    Com_Printf(25, "Tracker: Added column %d, value %d for entity %zu\n", (unsigned int)col, (unsigned int)val, ent);
    return 1i64;
  }
}

/*
==============
LiveTracker_UpdateCmd
==============
*/
void LiveTracker_UpdateCmd()
{
  int v0; 
  int v1; 
  XUID *Xuid; 
  unsigned __int64 UniversalId; 
  int v4; 
  const char *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  XUID result; 

  if ( Cmd_Argc() < 3 || Cmd_Argc() > 4 )
  {
    Com_Printf(25, "Usage: trackerAdd [entityID (optional)] <columnName> <value>\n");
  }
  else
  {
    if ( Cmd_Argc() == 3 )
    {
      v0 = Cmd_ArgInt(2);
      v1 = Cmd_LocalControllerIndex();
      Xuid = Live_GetXuid(&result, v1);
      UniversalId = XUID::GetUniversalId(Xuid);
      v4 = 1;
    }
    else
    {
      v0 = Cmd_ArgInt(3);
      v5 = Cmd_Argv(1);
      UniversalId = I_atoui64(v5);
      v4 = 2;
    }
    v6 = UniversalId;
    v7 = Cmd_Argv(v4);
    if ( !LiveTracker_WriteByName(v7, v6, v0) )
      Com_PrintError(25, "Tracker: Write failed.\n");
  }
}

/*
==============
LiveTracker_WriteByID
==============
*/
__int64 LiveTracker_WriteByID(trackerColumn_e col, unsigned __int64 ent, int val)
{
  trackerQueue_s *v7; 
  int v8; 
  int v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  int UTC; 

  if ( !ent )
  {
    Com_PrintError(25, "Tracker: entity id is invalid.\n");
    return 0i64;
  }
  v7 = &s_trackerQueue;
  v8 = -1;
  v9 = 0;
  while ( 1 )
  {
    v10 = v7->items[0].ent;
    if ( v10 == ent && v7->items[0].col == col )
      break;
    if ( v8 == -1 && !v10 )
      v8 = v9;
    ++v9;
    v7 = (trackerQueue_s *)((char *)v7 + 24);
    if ( v9 >= 96 )
      goto LABEL_12;
  }
  v11 = LiveTracker_SetItem(v9, col, ent, val);
  if ( v11 )
    goto LABEL_14;
LABEL_12:
  if ( v8 != -1 )
  {
    v11 = LiveTracker_SetItem(v8, col, ent, val);
    if ( !v11 )
      return v11;
LABEL_14:
    if ( col < TRACKER_LEADERBOARD_OFFENSIVE_CLANTAG && !LiveTracker_GetColType((trackerColumn_e)(col + 1)) )
    {
      UTC = LiveStorage_GetUTC();
      return (unsigned int)LiveTracker_WriteByID((trackerColumn_e)(col + 1), ent, UTC);
    }
    return v11;
  }
  Com_PrintError(25, "Tracker: Queue full. Could not add entry col %d, val %d for entity %zu.\n", (unsigned int)col, (unsigned int)val, ent);
  return 0i64;
}

/*
==============
LiveTracker_WriteByName
==============
*/
int LiveTracker_WriteByName(const char *colName, unsigned __int64 ent, int val)
{
  StringTable *v6; 
  const char *v7; 
  unsigned int v8; 
  trackerColumn_e v9; 
  __int64 v11; 
  StringTable *tablePtr; 

  StringTable_GetAsset("mp/trackercolumns.csv", (const StringTable **)&tablePtr);
  v6 = tablePtr;
  if ( !tablePtr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 261, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    v6 = tablePtr;
    if ( !tablePtr )
      return 0;
  }
  v7 = StringTable_Lookup(v6, 1, colName, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 270, ASSERT_TYPE_ASSERT, "(strColNum)", (const char *)&queryFormat, "strColNum") )
    __debugbreak();
  if ( !*v7 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 271, ASSERT_TYPE_ASSERT, "(*strColNum)", (const char *)&queryFormat, "*strColNum") )
      __debugbreak();
    if ( !*v7 )
      return 0;
  }
  v8 = atoi(v7);
  v9 = v8;
  if ( v8 >= 0x64 )
  {
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\live_tracker.cpp", 277, ASSERT_TYPE_ASSERT, "(unsigned)( col ) < (unsigned)( ( 6099 - 6000 + 1 ) )", "col doesn't index TRACKER_MAX_COLS\n\t%i not in [0, %i)", v11, 100) )
      __debugbreak();
  }
  if ( (unsigned int)v9 <= 0x63 )
    return LiveTracker_WriteByID(v9, ent, val);
  else
    return 0;
}

/*
==============
LiveTracker_WriteForAllLocalUsers
==============
*/
__int64 LiveTracker_WriteForAllLocalUsers(trackerColumn_e col, int val)
{
  unsigned int v2; 
  int v3; 
  int i; 
  XUID *Xuid; 
  unsigned __int64 UniversalId; 
  int v9; 
  trackerQueue_s *v10; 
  int v11; 
  unsigned __int64 ent; 
  int v13; 
  int UTC; 
  XUID result; 

  v2 = 0;
  v3 = 0;
  for ( i = 0; i < 8; ++i )
  {
    if ( !Live_IsUserSignedInToDemonware(i) )
      continue;
    Xuid = Live_GetXuid(&result, i);
    UniversalId = XUID::GetUniversalId(Xuid);
    if ( !UniversalId )
    {
      Com_PrintError(25, "Tracker: entity id is invalid.\n");
LABEL_22:
      v3 = 1;
      continue;
    }
    v9 = -1;
    v10 = &s_trackerQueue;
    v11 = 0;
    while ( 1 )
    {
      ent = v10->items[0].ent;
      if ( ent == UniversalId && v10->items[0].col == col )
        break;
      if ( v9 == -1 && !ent )
        v9 = v11;
      ++v11;
      v10 = (trackerQueue_s *)((char *)v10 + 24);
      if ( v11 >= 96 )
        goto LABEL_14;
    }
    v13 = LiveTracker_SetItem(v11, col, UniversalId, val);
    if ( v13 )
      goto LABEL_16;
LABEL_14:
    if ( v9 == -1 )
    {
      Com_PrintError(25, "Tracker: Queue full. Could not add entry col %d, val %d for entity %zu.\n", (unsigned int)col, (unsigned int)val, UniversalId);
      goto LABEL_22;
    }
    v13 = LiveTracker_SetItem(v9, col, UniversalId, val);
    if ( !v13 )
      goto LABEL_22;
LABEL_16:
    if ( col < TRACKER_LEADERBOARD_OFFENSIVE_CLANTAG && !LiveTracker_GetColType((trackerColumn_e)(col + 1)) )
    {
      UTC = LiveStorage_GetUTC();
      v13 = LiveTracker_WriteByID((trackerColumn_e)(col + 1), UniversalId, UTC);
    }
    if ( !v13 )
      goto LABEL_22;
  }
  LOBYTE(v2) = v3 == 0;
  return v2;
}

/*
==============
LiveTracker_WriteForUserAndHost
==============
*/
__int64 LiveTracker_WriteForUserAndHost(const int controllerIndex, trackerColumn_e userCol, trackerColumn_e hostCol, int val)
{
  unsigned int v5; 
  int v6; 
  const XUID *Xuid; 
  unsigned __int64 UniversalId; 
  unsigned __int64 v12; 
  XUID v14; 
  XUID outHostXuid; 
  XUID result; 

  v5 = 0;
  v6 = 0;
  XUID::XUID(&v14);
  XUID::XUID(&outHostXuid);
  if ( Live_IsSignedIn(controllerIndex) )
  {
    Xuid = Live_GetXuid(&result, controllerIndex);
    XUID::operator=(&v14, Xuid);
    UniversalId = XUID::GetUniversalId(&v14);
    if ( !LiveTracker_WriteByID(userCol, UniversalId, val) )
      v6 = 1;
  }
  if ( Lobby_GetHostXuid(&outHostXuid) )
  {
    v12 = XUID::GetUniversalId(&outHostXuid);
    if ( !LiveTracker_WriteByID(hostCol, v12, val) )
      v6 = 1;
  }
  LOBYTE(v5) = v6 == 0;
  return v5;
}

