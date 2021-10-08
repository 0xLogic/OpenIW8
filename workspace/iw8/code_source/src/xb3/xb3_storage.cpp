/*
==============
LiveStorage_LoadPlaylistsFromFastfile
==============
*/

bool __fastcall LiveStorage_LoadPlaylistsFromFastfile(const int controllerIndex)
{
  return ?LiveStorage_LoadPlaylistsFromFastfile@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_InitWriteStatsThread
==============
*/

void LiveStorage_InitWriteStatsThread(void)
{
  ?LiveStorage_InitWriteStatsThread@@YAXXZ();
}

/*
==============
LiveStorage_GetLocalPlaylistFilename
==============
*/

const char *__fastcall LiveStorage_GetLocalPlaylistFilename()
{
  return ?LiveStorage_GetLocalPlaylistFilename@@YAPEBDXZ();
}

/*
==============
LiveStorage_ReadStats_Platform
==============
*/

void __fastcall LiveStorage_ReadStats_Platform(const int controllerIndex)
{
  ?LiveStorage_ReadStats_Platform@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_LocalClientOfflineProfileCanSave
==============
*/

bool __fastcall LiveStorage_LocalClientOfflineProfileCanSave(const int controllerIndex)
{
  return ?LiveStorage_LocalClientOfflineProfileCanSave@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_WriteStats
==============
*/

void __fastcall LiveStorage_WriteStats(const int controllerIndex)
{
  ?LiveStorage_WriteStats@@YAXH@Z(controllerIndex);
}

/*
==============
GetStatsFilename
==============
*/
void GetStatsFilename(const int controllerIndex, char *filename, int buflen)
{
  unsigned __int64 v3; 
  unsigned __int64 PlatformUserId; 

  v3 = buflen;
  if ( (unsigned __int64)buflen < 0x1E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 79, ASSERT_TYPE_ASSERT, "( buflen ) >= ( sizeof( \"mpdata\" ) + 1 + 21 + 1 )", "%s >= %s\n\t%i, %i", "buflen", "sizeof( PERSISTENT_MP_STATS_FILENAME ) + 1 + XUID_STRING_LENGTH + 1", buflen, 30) )
    __debugbreak();
  PlatformUserId = Live_GetPlatformUserId(controllerIndex);
  if ( !PlatformUserId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 81, ASSERT_TYPE_ASSERT, "(platformId != (0))", (const char *)&queryFormat, "platformId != INVALID_PLATFORM_ID") )
    __debugbreak();
  Com_sprintf(filename, v3, "%s_%zu", "mpdata", PlatformUserId);
}

/*
==============
LiveStorage_GetLocalPlaylistFilename
==============
*/
char *LiveStorage_GetLocalPlaylistFilename()
{
  Sys_BuildAbsPath(localFilename, 256, SF_ZONE, "mp_playlists", ".ff");
  return localFilename;
}

/*
==============
LiveStorage_InitWriteStatsThread
==============
*/
void LiveStorage_InitWriteStatsThread(void)
{
  Sys_SpawnStatsWriteThread(LiveStorage_WriteStats_Thread);
}

/*
==============
LiveStorage_LoadPlaylistsFromFastfile
==============
*/
__int64 LiveStorage_LoadPlaylistsFromFastfile(const int controllerIndex)
{
  const char *RawFile; 
  unsigned __int8 v2; 
  Mem_LargeLocal v4; 

  Mem_LargeLocal::Mem_LargeLocal(&v4, 0x18000ui64, "max_raw_buf buf");
  RawFile = DB_ReadRawFile(playlistFilename->current.string, (char *)v4.m_ptr, 98304);
  if ( RawFile )
  {
    g_playlistsFetched = 1;
    Playlist_ParsePlaylists(RawFile);
    UI_ValidatePlaylistNum();
    UI_UpdatePulsePlaylistActive();
    s_playlistOutOfDate = 0;
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v4);
  return v2;
}

/*
==============
LiveStorage_LocalClientOfflineProfileCanSave
==============
*/
char LiveStorage_LocalClientOfflineProfileCanSave(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  if ( LiveStorage_GetActiveStatsSource(controllerIndex) != STATS_OFFLINE )
    return 1;
  if ( !Live_IsSignedIn(v1) )
  {
    Com_Printf(6, "Not writing stats: not signed in (cont %i)\n", (unsigned int)v1);
    return 0;
  }
  if ( controllerStatData[v1].playerStats[1].allowSavingProgress )
    return 1;
  Com_Printf(6, "Not writing stats: allowSavingProgress(no save device selected) (cont %i)\n", (unsigned int)v1);
  return 0;
}

/*
==============
LiveStorage_ReadStats_Platform
==============
*/
void LiveStorage_ReadStats_Platform(const int controllerIndex)
{
  __int64 v1; 
  void *m_ptr; 
  __int64 v3; 
  MemCardFileHandle *v4; 
  const MemcardError *OpenError; 
  __int64 v6; 
  int fmt; 
  char *fmta; 
  MemcardError error; 
  __int64 v10; 
  Mem_LargeLocal data; 
  MemCardFileHandle filename[5]; 

  v10 = -2i64;
  v1 = controllerIndex;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x10474ui64, "maxfileContentsSize fileContents");
  m_ptr = data.m_ptr;
  CL_Mgr_GetClientFromController(v1);
  v3 = v1;
  controllerStatData[v3].playerStats[1].statsFetched = 1;
  controllerStatData[v3].playerStats[1].allowSavingProgress = 1;
  if ( !Live_IsSignedIn(v1) )
  {
    Com_Printf(16, "User not signed in on controller %i; clearing stats\n", (unsigned int)v1);
    controllerStatData[v3].playerStats[1].allowSavingProgress = 0;
LABEL_3:
    controllerStatData[v3].playerStats[1].resetStatus = RESET_STATS_REASON_NOT_FOUND;
    goto LABEL_18;
  }
  if ( Live_UserIsGuest(v1) )
  {
    Com_Printf(16, "No save allowed for guest controller %i; clearing stats\n", (unsigned int)v1);
    controllerStatData[v3].playerStats[1].allowSavingProgress = 0;
    controllerStatData[v3].playerStats[1].resetStatus = RESET_STATS_REASON_GUEST;
    goto LABEL_18;
  }
  GetStatsFilename(v1, (char *)filename, 37);
  v4 = MemCard_OpenFile(filename, NULL, MEMCARD_READ, (MemcardSizeHint)v1, fmt);
  if ( MemCard_GetOpenError()->isError )
  {
    OpenError = MemCard_GetOpenError();
    Com_Printf(16, "Unable to open stats file \"%s\" for read for controller %i (error: %s); clearing stats\n", (const char *)filename, (unsigned int)v1, OpenError->errorString);
    if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 353, ASSERT_TYPE_ASSERT, "(!fileHandle)", (const char *)&queryFormat, "!fileHandle") )
      __debugbreak();
    if ( MemCard_GetOpenError()->errorCode )
    {
      controllerStatData[v3].playerStats[1].resetStatus = RESET_STATS_REASON_CORRUPT;
      goto LABEL_18;
    }
    goto LABEL_3;
  }
  v6 = MemCard_ReadFile((MemCardFileHandle)v4, m_ptr, 0x10474ui64, &error);
  MemCard_CloseFile((MemCardFileHandle)v4, 1);
  if ( error.isError )
  {
    LODWORD(fmta) = v1;
    Com_Printf(16, "Error \"%s\" when reading file \"%s\" for controller %i; clearing stats\n", error.errorString, (const char *)filename, fmta);
    controllerStatData[v3].playerStats[1].resetStatus = RESET_STATS_REASON_CORRUPT;
  }
  else
  {
    if ( (unsigned __int64)(v6 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v6, "signed", v6) )
      __debugbreak();
    LiveStorage_ReadStats_Common(v1, (unsigned __int8 *)m_ptr, v6, STATS_OFFLINE);
  }
LABEL_18:
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
LiveStorage_WriteStats
==============
*/
void LiveStorage_WriteStats(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int v3; 
  unsigned __int8 *v4; 
  __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned __int8 *v13; 
  __int64 v14; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  unsigned __int8 *v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  __int64 v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int8 *v31; 
  __int64 v32; 
  unsigned int v33; 
  unsigned int v34; 
  __int64 v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned __int8 *v40; 
  unsigned int v41; 
  unsigned int v42; 
  __int64 v43; 
  unsigned int v44; 
  unsigned int v45; 
  unsigned int v46; 
  int v47; 
  unsigned __int8 *v48; 
  __int64 v49; 
  __int64 v50; 
  unsigned int v51; 
  unsigned int v52; 
  unsigned int v53; 
  int v54; 
  int v55; 
  __int64 v56; 
  bool out_statsGroupObfuscated; 

  v1 = controllerIndex;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) )
  {
    v2 = v1;
    if ( controllerStatData[v1].playerStats[1].statsFetched )
    {
      if ( LiveStorage_HasDirtyStatsBlob(v1, STATS_OFFLINE) )
      {
        if ( controllerStatData[v2].playerStats[1].allowSavingProgress )
        {
          if ( Live_IsSignedIn(v1) )
          {
            if ( controllerStatData[v2].writeStatsBufferInUse )
            {
              Com_Printf(6, "Not writing stats: writeStatsBufferInUse (cont %i)\n", (unsigned int)v1);
            }
            else
            {
              LiveStorage_LocallyUnObfuscateStats(v1, &out_statsGroupObfuscated);
              v3 = -1;
              v4 = &controllerStatData[v2].playerStats[1].data[4];
              v5 = 1223i64;
              v6 = -1;
              v7 = 1223i64;
              do
              {
                v8 = *v4;
                v4 += 4;
                v9 = (v6 >> 8) ^ g_crc32Table[v8 ^ (unsigned __int8)v6];
                v10 = (v9 >> 8) ^ g_crc32Table[*(v4 - 3) ^ (unsigned __int64)(unsigned __int8)v9];
                v11 = (v10 >> 8) ^ g_crc32Table[*(v4 - 2) ^ (unsigned __int64)(unsigned __int8)v10];
                v6 = (v11 >> 8) ^ g_crc32Table[*(v4 - 1) ^ (unsigned __int64)(unsigned __int8)v11];
                --v7;
              }
              while ( v7 );
              v12 = ~v6;
              controllerStatData[v2].playerStats[1].data[0] = v12;
              v13 = &controllerStatData[v2].playerStats[1].data[4900];
              controllerStatData[v2].playerStats[1].data[1] = BYTE1(v12);
              v14 = 3977i64;
              v15 = HIWORD(v12);
              controllerStatData[v2].playerStats[1].data[3] = HIBYTE(v12);
              v16 = -1;
              controllerStatData[v2].playerStats[1].data[2] = v15;
              do
              {
                v17 = *v13;
                v13 += 4;
                v18 = (v16 >> 8) ^ g_crc32Table[v17 ^ (unsigned __int8)v16];
                v19 = (v18 >> 8) ^ g_crc32Table[*(v13 - 3) ^ (unsigned __int64)(unsigned __int8)v18];
                v20 = (v19 >> 8) ^ g_crc32Table[*(v13 - 2) ^ (unsigned __int64)(unsigned __int8)v19];
                v16 = (v20 >> 8) ^ g_crc32Table[*(v13 - 1) ^ (unsigned __int64)(unsigned __int8)v20];
                --v14;
              }
              while ( v14 );
              v21 = ~v16;
              v22 = &controllerStatData[v2].playerStats[1].data[30604];
              controllerStatData[v2].playerStats[1].data[4896] = v21;
              v23 = 3671i64;
              controllerStatData[v2].playerStats[1].data[4897] = BYTE1(v21);
              v24 = HIWORD(v21);
              controllerStatData[v2].playerStats[1].data[4899] = HIBYTE(v21);
              v25 = -1;
              controllerStatData[v2].playerStats[1].data[4898] = v24;
              do
              {
                v26 = *v22;
                v22 += 4;
                v27 = (v25 >> 8) ^ g_crc32Table[v26 ^ (unsigned __int8)v25];
                v28 = (v27 >> 8) ^ g_crc32Table[*(v22 - 3) ^ (unsigned __int64)(unsigned __int8)v27];
                v29 = (v28 >> 8) ^ g_crc32Table[*(v22 - 2) ^ (unsigned __int64)(unsigned __int8)v28];
                v25 = (v29 >> 8) ^ g_crc32Table[*(v22 - 1) ^ (unsigned __int64)(unsigned __int8)v29];
                --v23;
              }
              while ( v23 );
              v30 = ~v25;
              v31 = &controllerStatData[v2].playerStats[1].data[20812];
              controllerStatData[v2].playerStats[1].data[30600] = v30;
              v32 = 1223i64;
              controllerStatData[v2].playerStats[1].data[30601] = BYTE1(v30);
              v33 = HIWORD(v30);
              controllerStatData[v2].playerStats[1].data[30603] = HIBYTE(v30);
              v34 = -1;
              controllerStatData[v2].playerStats[1].data[30602] = v33;
              do
              {
                v35 = *v31;
                v31 += 4;
                v36 = (v34 >> 8) ^ g_crc32Table[v35 ^ (unsigned __int8)v34];
                v37 = (v36 >> 8) ^ g_crc32Table[*(v31 - 3) ^ (unsigned __int64)(unsigned __int8)v36];
                v38 = (v37 >> 8) ^ g_crc32Table[*(v31 - 2) ^ (unsigned __int64)(unsigned __int8)v37];
                v34 = (v38 >> 8) ^ g_crc32Table[*(v31 - 1) ^ (unsigned __int64)(unsigned __int8)v38];
                --v32;
              }
              while ( v32 );
              v39 = ~v34;
              v40 = &controllerStatData[v2].playerStats[1].data[25708];
              controllerStatData[v2].playerStats[1].data[20808] = v39;
              controllerStatData[v2].playerStats[1].data[20809] = BYTE1(v39);
              v41 = HIWORD(v39);
              controllerStatData[v2].playerStats[1].data[20811] = HIBYTE(v39);
              v42 = -1;
              controllerStatData[v2].playerStats[1].data[20810] = v41;
              do
              {
                v43 = *v40;
                v40 += 4;
                v44 = (v42 >> 8) ^ g_crc32Table[v43 ^ (unsigned __int8)v42];
                v45 = (v44 >> 8) ^ g_crc32Table[*(v40 - 3) ^ (unsigned __int64)(unsigned __int8)v44];
                v46 = (v45 >> 8) ^ g_crc32Table[*(v40 - 2) ^ (unsigned __int64)(unsigned __int8)v45];
                v42 = (v46 >> 8) ^ g_crc32Table[*(v40 - 1) ^ (unsigned __int64)(unsigned __int8)v46];
                --v5;
              }
              while ( v5 );
              v47 = ~v42;
              v48 = &controllerStatData[v2].playerStats[1].data[45292];
              controllerStatData[v2].playerStats[1].data[25704] = v47;
              v49 = 5201i64;
              controllerStatData[v2].playerStats[1].data[25705] = BYTE1(v47);
              controllerStatData[v2].playerStats[1].data[25707] = HIBYTE(v47);
              controllerStatData[v2].playerStats[1].data[25706] = BYTE2(v47);
              do
              {
                v50 = *v48;
                v48 += 4;
                v51 = (v3 >> 8) ^ g_crc32Table[v50 ^ (unsigned __int8)v3];
                v52 = (v51 >> 8) ^ g_crc32Table[*(v48 - 3) ^ (unsigned __int64)(unsigned __int8)v51];
                v53 = (v52 >> 8) ^ g_crc32Table[*(v48 - 2) ^ (unsigned __int64)(unsigned __int8)v52];
                v3 = (v53 >> 8) ^ g_crc32Table[*(v48 - 1) ^ (unsigned __int64)(unsigned __int8)v53];
                --v49;
              }
              while ( v49 );
              v54 = ~v3;
              controllerStatData[v2].playerStats[1].data[45288] = v54;
              controllerStatData[v2].playerStats[1].data[45289] = BYTE1(v54);
              controllerStatData[v2].playerStats[1].data[45290] = BYTE2(v54);
              v55 = 0;
              controllerStatData[v2].playerStats[1].data[45291] = HIBYTE(v54);
              do
                CL_PlayerData_UpdateDDLChecksum(v1, STATS_OFFLINE, (StatsGroup)v55++);
              while ( v55 < 6 );
              Com_Printf(16, "Beginning stats write into file for controller %i\n", (unsigned int)v1);
              *(_DWORD *)controllerStatData[v2].writeStatsBuffer = 3;
              v56 = MemFile_CompressWithZLib(controllerStatData[v2].playerStats[1].data, 66672, &controllerStatData[v2].writeStatsBuffer[4], 66672);
              if ( (unsigned __int64)(v56 + 4) > 0x10000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 277, ASSERT_TYPE_ASSERT, "(compressedSize + (sizeof( int )) <= (64 * 1024))", (const char *)&queryFormat, "compressedSize + OFFLINE_STATS_FILE_VERSION_SIZE <= SAVE_LIMIT_SMALL_FILE_SIZE") )
                __debugbreak();
              if ( (int)v56 > 0 )
              {
                controllerStatData[v2].writeStatsSize = v56 + 4;
                LiveStorage_LocallyObfuscateStats(v1, &out_statsGroupObfuscated);
                LiveStorage_SetAllStatsBlobsDirty(v1, STATS_OFFLINE, 0);
                LiveStorage_WaitForWriteStatsBuffer(v1);
                while ( Sys_IsWritingStats() )
                  Sys_Sleep(1);
                controllerStatData[v2].writeStatsBufferInUse = 1;
                g_saveStatsControllerIndex = v1;
                Sys_SetStatsWriteEvent();
              }
              else
              {
                Com_PrintWarning(6, "Not writing stats: unable to compress stats (cont %i)\n", (unsigned int)v1);
              }
            }
          }
          else
          {
            Com_Printf(6, "Not writing stats: not signed in (cont %i)\n", (unsigned int)v1);
          }
        }
        else
        {
          Com_Printf(6, "Not writing stats: allowSavingProgress(no save device selected) (cont %i)\n", (unsigned int)v1);
        }
      }
      else
      {
        Com_Printf(6, "Not writing stats: no statWriteNeeded (cont %i)\n", (unsigned int)v1);
      }
    }
    else
    {
      Com_Printf(6, "Not writing stats: stats not fetched (cont %i)\n", (unsigned int)v1);
    }
  }
  else
  {
    Com_Printf(6, "Not writing stats: game mode disabled (cont %i)\n", (unsigned int)v1);
  }
}

/*
==============
LiveStorage_WriteStats_Thread
==============
*/
void __noreturn LiveStorage_WriteStats_Thread(unsigned int threadContext)
{
  int v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  MemCardFileHandle *v5; 
  const MemcardError *OpenError; 
  int v7; 
  const MemcardError *v8; 
  int fmt; 
  char *fmta; 
  const char *v11; 
  MemCardFileHandle filename[5]; 

  if ( threadContext != 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 93, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_STATS_WRITE )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_STATS_WRITE", threadContext, 16) )
    __debugbreak();
  while ( 1 )
  {
    Sys_WaitStatsWriteEvent();
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_IDLE|WEAPON_FIRING) )
    {
      v11 = "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_STATS )";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 99, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_STATS ))", (const char *)&queryFormat) )
        __debugbreak();
    }
    Sys_EnterCriticalSection(CRITSECT_STATS_WRITE);
    v1 = Sys_Milliseconds();
    v2 = g_saveStatsControllerIndex;
    v3 = v1;
    GetStatsFilename(g_saveStatsControllerIndex, (char *)filename, 37);
    v4 = v2;
    if ( controllerStatData[v2].writeStatsSize > 0x10000 )
    {
      v11 = "controllerStatData[controllerIndex].writeStatsSize <= SAVE_LIMIT_SMALL_FILE_SIZE";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 108, ASSERT_TYPE_ASSERT, "(controllerStatData[controllerIndex].writeStatsSize <= (64 * 1024))", (const char *)&queryFormat) )
        __debugbreak();
    }
    v5 = MemCard_OpenFile(filename, (const char *)1, MEMCARD_READ, (MemcardSizeHint)v2, fmt);
    if ( v5 )
    {
      v7 = Sys_Milliseconds() - v3;
      MemCard_WriteFile((MemCardFileHandle)v5, controllerStatData[v4].writeStatsBuffer, controllerStatData[v4].writeStatsSize);
      MemCard_CloseFile((MemCardFileHandle)v5, 1);
      if ( MemCard_GetWriteError()->isError )
      {
        v8 = MemCard_GetWriteError();
        Com_Printf(16, "Failed to write stats into file \"%s\" for controller %i.  Error: %s", (const char *)filename, (unsigned int)v2, v8->errorString);
      }
      else
      {
        LODWORD(v11) = Sys_Milliseconds() - v3;
        LODWORD(fmta) = v7;
        Com_Printf(16, "Saved stats into file \"%s\" for controller %i. (%i msec to open, %i msec total)\n", (const char *)filename, (unsigned int)v2, fmta, v11);
      }
    }
    else
    {
      OpenError = MemCard_GetOpenError();
      Com_Printf(16, "Unable to open stats file \"%s\" for write for controller %i (error: %s)\n", (const char *)filename, (unsigned int)v2, OpenError->errorString);
    }
    if ( !controllerStatData[v4].writeStatsBufferInUse )
    {
      v11 = "controllerStatData[controllerIndex].writeStatsBufferInUse";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_storage.cpp", 137, ASSERT_TYPE_ASSERT, "(controllerStatData[controllerIndex].writeStatsBufferInUse)", (const char *)&queryFormat) )
        __debugbreak();
    }
    controllerStatData[v4].writeStatsBufferInUse = 0;
    Sys_ResetStatsWriteEvent();
    Sys_LeaveCriticalSection(CRITSECT_STATS_WRITE);
  }
}

