/*
==============
Com_LevelList_ConsiderFileEntryCallback
==============
*/

bool __fastcall Com_LevelList_ConsiderFileEntryCallback(const char *entryName)
{
  return ?Com_LevelList_ConsiderFileEntryCallback@@YA_NPEBD@Z(entryName);
}

/*
==============
Com_LevelList_StartEnumeration
==============
*/

void Com_LevelList_StartEnumeration(void)
{
  ?Com_LevelList_StartEnumeration@@YAXXZ();
}

/*
==============
Com_LevelList_GetListForCurrentGameMode
==============
*/

const char **__fastcall Com_LevelList_GetListForCurrentGameMode(int *outZoneCount)
{
  return ?Com_LevelList_GetListForCurrentGameMode@@YAPEAPEBDPEAH@Z(outZoneCount);
}

/*
==============
Com_LevelList_AddToGameModeList
==============
*/
void Com_LevelList_AddToGameModeList(GameModeType gameMode, const char *levelName)
{
  __int64 v2; 
  int *v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = (unsigned __int8)gameMode;
  if ( (unsigned __int8)gameMode >= (unsigned int)LONG_LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_level_list.cpp", 28, ASSERT_TYPE_ASSERT, "(unsigned)( gameModeInt ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameModeInt doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", (unsigned __int8)gameMode, 4) )
    __debugbreak();
  v4 = &s_comLevelList_levelNameCount[v2];
  if ( (unsigned int)*v4 >= 0x100 )
  {
    LODWORD(v7) = 256;
    LODWORD(v6) = s_comLevelList_levelNameCount[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_level_list.cpp", 29, ASSERT_TYPE_ASSERT, "(unsigned)( s_comLevelList_levelNameCount[gameModeInt] ) < (unsigned)( ( sizeof( *array_counter( s_comLevelList_levelNamePtrs[gameModeInt] ) ) + 0 ) )", "s_comLevelList_levelNameCount[gameModeInt] doesn't index ARRAY_COUNT( s_comLevelList_levelNamePtrs[gameModeInt] )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v5 = *v4;
  *v4 = v5 + 1;
  s_comLevelList_levelNamePtrs[v2][v5] = levelName;
}

/*
==============
Com_LevelList_ConsiderFileEntryCallback
==============
*/
char Com_LevelList_ConsiderFileEntryCallback(const char *entryName)
{
  __int64 v2; 
  int v3; 
  char *v5; 
  GameModeType v6; 
  char outPath[256]; 

  if ( !DB_Zones_IsLevelZoneName(entryName) )
    return 1;
  Com_CopyAndStripExtension(outPath, 0x100ui64, entryName);
  v2 = -1i64;
  do
    ++v2;
  while ( outPath[v2] );
  v3 = v2 + 1;
  if ( (unsigned int)(s_comLevelList_levelNameBufPos + v3) >= 0x2000 )
  {
    Com_PrintWarning(16, "Com_LevelList_ConsiderFileEntryCallback failed, reached the buffer limit of %zu bytes\n", 0x2000ui64);
    return 0;
  }
  v5 = &s_comLevelList_levelNameBuf[s_comLevelList_levelNameBufPos];
  Core_strcpy(v5, v3, outPath);
  s_comLevelList_levelNameBufPos += v3;
  Com_LevelList_AddToGameModeList(NONE, v5);
  LOBYTE(v6) = Com_IsCpMap(outPath) ? 3 : Com_IsMpMap(outPath) + 1;
  Com_LevelList_AddToGameModeList(v6, v5);
  if ( s_comLevelList_levelNameCount[0] != 256 )
    return 1;
  Com_PrintWarning(16, "Com_LevelList_ConsiderFileEntryCallback failed, reached the limit of %zu maps\n", 0x100ui64);
  return 0;
}

/*
==============
Com_LevelList_EnumerateTaskThread
==============
*/
void Com_LevelList_EnumerateTaskThread(unsigned int threadContext)
{
  ;
}

/*
==============
Com_LevelList_GetListForCurrentGameMode
==============
*/
const char **Com_LevelList_GetListForCurrentGameMode(int *outZoneCount)
{
  __int64 ActiveGameMode; 
  __int64 v4; 

  if ( !outZoneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_level_list.cpp", 112, ASSERT_TYPE_ASSERT, "(outZoneCount)", (const char *)&queryFormat, "outZoneCount") )
    __debugbreak();
  ActiveGameMode = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  if ( (unsigned int)ActiveGameMode >= 4 )
  {
    LODWORD(v4) = ActiveGameMode;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_level_list.cpp", 115, ASSERT_TYPE_ASSERT, "(unsigned)( gameMode ) < (unsigned)( static_cast<int>( GameModeType::COUNT ) )", "gameMode doesn't index static_cast<int>( GameModeType::COUNT )\n\t%i not in [0, %i)", v4, 4) )
      __debugbreak();
  }
  *outZoneCount = s_comLevelList_levelNameCount[ActiveGameMode];
  return s_comLevelList_levelNamePtrs[ActiveGameMode];
}

/*
==============
Com_LevelList_StartEnumeration
==============
*/
void Com_LevelList_StartEnumeration(void)
{
  s_comLevelList_levelNameBufPos = 0;
  *(_QWORD *)s_comLevelList_levelNameCount = 0i64;
  *(_QWORD *)&s_comLevelList_levelNameCount[2] = 0i64;
  Sys_SpawnBootTimeTaskThread(Com_LevelList_EnumerateTaskThread);
}

