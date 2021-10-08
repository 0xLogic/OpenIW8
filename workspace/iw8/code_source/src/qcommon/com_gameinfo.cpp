/*
==============
Com_GameInfo_GetMapCount
==============
*/

int __fastcall Com_GameInfo_GetMapCount()
{
  return ?Com_GameInfo_GetMapCount@@YAHXZ();
}

/*
==============
Com_GameInfo_Clear
==============
*/

void Com_GameInfo_Clear(void)
{
  ?Com_GameInfo_Clear@@YAXXZ();
}

/*
==============
Com_GameInfo_GetGameTypeIndexForInternalName
==============
*/

bool __fastcall Com_GameInfo_GetGameTypeIndexForInternalName(const char *gameTypeName, int *index)
{
  return ?Com_GameInfo_GetGameTypeIndexForInternalName@@YA_NPEBDPEAH@Z(gameTypeName, index);
}

/*
==============
Com_GameInfo_GetGameTypeForInternalName
==============
*/

const gameTypeInfo *__fastcall Com_GameInfo_GetGameTypeForInternalName(const char *gameTypeName)
{
  return ?Com_GameInfo_GetGameTypeForInternalName@@YAPEBUgameTypeInfo@@PEBD@Z(gameTypeName);
}

/*
==============
Com_GameInfo_GetMapInfoForLoadName
==============
*/

const mapInfo *__fastcall Com_GameInfo_GetMapInfoForLoadName(const char *mapName)
{
  return ?Com_GameInfo_GetMapInfoForLoadName@@YAPEBUmapInfo@@PEBD@Z(mapName);
}

/*
==============
Com_GameInfo_GetMapInfoForIndex
==============
*/

const mapInfo *__fastcall Com_GameInfo_GetMapInfoForIndex(const int mapIndex)
{
  return ?Com_GameInfo_GetMapInfoForIndex@@YAPEBUmapInfo@@H@Z(mapIndex);
}

/*
==============
Com_GameInfo_GetMapIndexForLoadName
==============
*/

bool __fastcall Com_GameInfo_GetMapIndexForLoadName(const char *mapName, int *index)
{
  return ?Com_GameInfo_GetMapIndexForLoadName@@YA_NPEBDPEAH@Z(mapName, index);
}

/*
==============
Com_GameInfo_Init
==============
*/

void Com_GameInfo_Init(void)
{
  ?Com_GameInfo_Init@@YAXXZ();
}

/*
==============
Com_GameMode_SetDefaultGameTypeIfNeeded
==============
*/

void __fastcall Com_GameMode_SetDefaultGameTypeIfNeeded(const char *mapName)
{
  ?Com_GameMode_SetDefaultGameTypeIfNeeded@@YAXPEBD@Z(mapName);
}

/*
==============
Com_GameInfo_Clear
==============
*/
void Com_GameInfo_Clear(void)
{
  s_gameInfoData.mapCount = 0;
  s_gameInfoData.numGameTypes = 0;
  DebugWipe(s_gameInfoData.mapList, 0x26C00ui64);
  DebugWipe(s_gameInfoData.gameTypes, 0x2B00ui64);
}

/*
==============
Com_GameInfo_GetGameTypeForInternalName
==============
*/
gameTypeInfo *Com_GameInfo_GetGameTypeForInternalName(const char *gameTypeName)
{
  unsigned int v1; 
  __int64 v3; 
  gameTypeInfo *v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v12; 

  v1 = 0;
  if ( s_gameInfoData.numGameTypes > 0 )
  {
    while ( 2 )
    {
      v3 = 0x7FFFFFFFi64;
      v4 = &s_gameInfoData.gameTypes[v1];
      if ( !gameTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v5 = (const char *)(gameTypeName - (const char *)v4);
      while ( 1 )
      {
        v6 = (unsigned __int8)v4->gameTypeInternalName[(_QWORD)v5];
        v7 = v3;
        v8 = (unsigned __int8)v4->gameTypeInternalName[0];
        v4 = (gameTypeInfo *)((char *)v4 + 1);
        --v3;
        if ( !v7 )
        {
LABEL_17:
          if ( v1 >= 0x40 )
          {
            LODWORD(v12) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 592, ASSERT_TYPE_ASSERT, "(unsigned)( gameTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_gameInfoData.gameTypes ) ) + 0 ) )", "gameTypeIndex doesn't index ARRAY_COUNT( s_gameInfoData.gameTypes )\n\t%i not in [0, %i)", v12, 64) )
              __debugbreak();
          }
          return &s_gameInfoData.gameTypes[v1];
        }
        if ( v6 != v8 )
        {
          v9 = v6 + 32;
          if ( (unsigned int)(v6 - 65) > 0x19 )
            v9 = v6;
          v6 = v9;
          v10 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v10 = v8;
          if ( v6 != v10 )
            break;
        }
        if ( !v6 )
          goto LABEL_17;
      }
      if ( (int)++v1 < s_gameInfoData.numGameTypes )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
Com_GameInfo_GetGameTypeIndexForInternalName
==============
*/
char Com_GameInfo_GetGameTypeIndexForInternalName(const char *gameTypeName, int *index)
{
  int i; 
  __int64 v5; 
  gameTypeInfo *v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 570, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  for ( i = 0; i < s_gameInfoData.numGameTypes; ++i )
  {
    v5 = 0x7FFFFFFFi64;
    v6 = &s_gameInfoData.gameTypes[i];
    if ( !gameTypeName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v7 = (const char *)(gameTypeName - (const char *)v6);
    while ( 1 )
    {
      v8 = (unsigned __int8)v6->gameTypeInternalName[(_QWORD)v7];
      v9 = v5;
      v10 = (unsigned __int8)v6->gameTypeInternalName[0];
      v6 = (gameTypeInfo *)((char *)v6 + 1);
      --v5;
      if ( !v9 )
      {
LABEL_20:
        *index = i;
        return 1;
      }
      if ( v8 != v10 )
      {
        v11 = v8 + 32;
        if ( (unsigned int)(v8 - 65) > 0x19 )
          v11 = v8;
        v8 = v11;
        v12 = v10 + 32;
        if ( (unsigned int)(v10 - 65) > 0x19 )
          v12 = v10;
        if ( v8 != v12 )
          break;
      }
      if ( !v8 )
        goto LABEL_20;
    }
  }
  return 0;
}

/*
==============
Com_GameInfo_GetMapCount
==============
*/
__int64 Com_GameInfo_GetMapCount()
{
  return (unsigned int)s_gameInfoData.mapCount;
}

/*
==============
Com_GameInfo_GetMapIndexForLoadName
==============
*/
char Com_GameInfo_GetMapIndexForLoadName(const char *mapName, int *index)
{
  int i; 
  __int64 v5; 
  __int64 v6; 
  const char *v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 339, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  for ( i = 0; i < s_gameInfoData.mapCount; ++i )
  {
    v5 = 1240i64 * i;
    v6 = 0x7FFFFFFFi64;
    v7 = mapName;
    if ( (ComGameInfoData *)((char *)&s_gameInfoData + v5) == (ComGameInfoData *)-11048i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v5 + (unsigned int)&s_gameInfoData + 11049), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v8 = v5 - (_QWORD)mapName;
    while ( 1 )
    {
      v9 = (unsigned __int8)s_gameInfoData.mapList[0].mapLoadName[v8 + (_QWORD)v7];
      v10 = v6;
      v11 = *(unsigned __int8 *)v7++;
      --v6;
      if ( !v10 )
      {
LABEL_20:
        *index = i;
        return 1;
      }
      if ( v9 != v11 )
      {
        v12 = v9 + 32;
        if ( (unsigned int)(v9 - 65) > 0x19 )
          v12 = v9;
        v9 = v12;
        v13 = v11 + 32;
        if ( (unsigned int)(v11 - 65) > 0x19 )
          v13 = v11;
        if ( v9 != v13 )
          break;
      }
      if ( !v9 )
        goto LABEL_20;
    }
  }
  return 0;
}

/*
==============
Com_GameInfo_GetMapInfoForIndex
==============
*/
mapInfo *Com_GameInfo_GetMapInfoForIndex(const int mapIndex)
{
  __int64 v1; 
  int v4; 

  v1 = mapIndex;
  if ( (unsigned int)mapIndex >= 0x80 )
  {
    v4 = 128;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 356, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( ( sizeof( *array_counter( s_gameInfoData.mapList ) ) + 0 ) )", "mapIndex doesn't index ARRAY_COUNT( s_gameInfoData.mapList )\n\t%i not in [0, %i)", mapIndex, v4) )
      __debugbreak();
  }
  return &s_gameInfoData.mapList[v1];
}

/*
==============
Com_GameInfo_GetMapInfoForLoadName
==============
*/
mapInfo *Com_GameInfo_GetMapInfoForLoadName(const char *mapName)
{
  unsigned int v1; 
  unsigned __int64 v3; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v12; 

  v1 = 0;
  if ( s_gameInfoData.mapCount > 0 )
  {
    while ( 2 )
    {
      v3 = 1240i64 * (int)v1;
      v4 = 0x7FFFFFFFi64;
      v5 = mapName;
      if ( (ComGameInfoData *)((char *)&s_gameInfoData + v3) == (ComGameInfoData *)-11048i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v3 + (unsigned int)&s_gameInfoData + 11049), "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      while ( 1 )
      {
        v6 = (unsigned __int8)s_gameInfoData.mapList[0].mapLoadName[v3 - (_QWORD)mapName + (_QWORD)v5];
        v7 = v4;
        v8 = *(unsigned __int8 *)v5++;
        --v4;
        if ( !v7 )
        {
LABEL_16:
          if ( v1 >= 0x80 )
          {
            LODWORD(v12) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 356, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( ( sizeof( *array_counter( s_gameInfoData.mapList ) ) + 0 ) )", "mapIndex doesn't index ARRAY_COUNT( s_gameInfoData.mapList )\n\t%i not in [0, %i)", v12, 128) )
              __debugbreak();
          }
          return &s_gameInfoData.mapList[v3 / 0x4D8];
        }
        if ( v6 != v8 )
        {
          v9 = v6 + 32;
          if ( (unsigned int)(v6 - 65) > 0x19 )
            v9 = v6;
          v6 = v9;
          v10 = v8 + 32;
          if ( (unsigned int)(v8 - 65) > 0x19 )
            v10 = v8;
          if ( v6 != v10 )
            break;
        }
        if ( !v6 )
          goto LABEL_16;
      }
      if ( (int)++v1 < s_gameInfoData.mapCount )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
Com_GameInfo_Init
==============
*/
void Com_GameInfo_Init(void)
{
  Com_GameInfo_LoadMapInfoList();
  Com_GameInfo_LoadGameTypesList();
}

/*
==============
Com_GameInfo_LoadArenasFromFile_FastFile
==============
*/
void Com_GameInfo_LoadArenasFromFile_FastFile(const char *dir)
{
  char *m_ptr; 
  int v3; 
  char *RawFile; 
  char **v5; 
  int v6; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  char *v14; 
  __int64 v15; 
  char *v16; 
  char *v17; 
  char v18; 
  char *data_p[2]; 
  Mem_LargeLocal v20; 
  char dest[128]; 
  char s[1024]; 
  char key[1024]; 

  data_p[1] = (char *)-2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v20, 0x18000ui64, "max_raw_buf rawbuf");
  m_ptr = (char *)v20.m_ptr;
  v3 = 0;
  s_mapInfoCount = 0;
  s_arenaBufPos = 0;
  Com_sprintf(dest, 0x80ui64, "%s/basemaps.arena", dir);
  RawFile = DB_ReadRawFile(dest, m_ptr, 98304);
  if ( RawFile )
  {
    v5 = &s_arenaInfos[s_mapInfoCount];
    v6 = 128 - s_mapInfoCount;
    data_p[0] = RawFile;
    v7 = Com_Parse((const char **)data_p);
    if ( *v7 )
    {
      v8 = v6;
      v9 = 0i64;
      while ( *v7 == asc_143D5D514[0] && v7[1] == asc_143D5D514[1] )
      {
        if ( v9 == v8 )
        {
          Com_PrintError(13, "Max infos exceeded\n");
          s_mapInfoCount += v3;
          goto LABEL_28;
        }
        s[0] = 0;
        v10 = Com_Parse((const char **)data_p);
        if ( *v10 )
        {
          while ( *v10 != asc_143D5D564[0] || v10[1] != asc_143D5D564[1] )
          {
            Core_strcpy(key, 0x400ui64, v10);
            v11 = Com_ParseOnLine((const char **)data_p);
            v12 = "<NULL>";
            if ( *v11 )
              v12 = v11;
            Info_SetValueForKey(s, key, v12);
            v10 = Com_Parse((const char **)data_p);
            if ( !*v10 )
              goto LABEL_13;
          }
        }
        else
        {
LABEL_13:
          Com_PrintError(13, "Unexpected end of info file\n");
        }
        v5[v9] = &s_arenaBuf[s_arenaBufPos];
        v13 = -1i64;
        do
          ++v13;
        while ( s[v13] );
        v14 = j_va("%d", 128i64);
        v15 = -1i64;
        do
          ++v15;
        while ( v14[v15] );
        s_arenaBufPos += v15 + v13 + 6;
        if ( s_arenaBufPos > 0x10000 )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EDF8C0, 620i64);
        v16 = s;
        v17 = v5[v9];
        do
        {
          v18 = *v16;
          *v17++ = *v16++;
        }
        while ( v18 );
        ++v3;
        ++v9;
        v7 = Com_Parse((const char **)data_p);
        if ( !*v7 )
        {
          s_mapInfoCount += v3;
          goto LABEL_28;
        }
      }
      Com_PrintError(13, "Missing { in info file - got %s instead\n", v7);
    }
    s_mapInfoCount += v3;
  }
  else
  {
    Com_PrintWarning(16, "Couldn't find game info file '%s'\n", dest);
  }
LABEL_28:
  Mem_LargeLocal::~Mem_LargeLocal(&v20);
}

/*
==============
Com_GameInfo_LoadGameTypesList
==============
*/
void Com_GameInfo_LoadGameTypesList()
{
  char *m_ptr; 
  char ActiveGameMode; 
  const char *v2; 
  char *RawFile; 
  const char *i; 
  gameTypeInfo *v5; 
  const RawFile *v6; 
  unsigned int RawFileLen; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  char *data_p; 
  char *v13[2]; 
  Mem_LargeLocal v14; 
  char dest[128]; 
  char buf[1024]; 

  v13[1] = (char *)-2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v14, 0x18000ui64, "max_raw_buf rawbuf");
  m_ptr = (char *)v14.m_ptr;
  s_gameInfoData.numGameTypes = 0;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    v2 = "mp";
  }
  else
  {
    if ( ActiveGameMode != 3 )
      goto LABEL_17;
    v2 = "cp";
  }
  Com_sprintf<128>((char (*)[128])dest, "%s/gametypes/_gametypes.txt", v2);
  RawFile = DB_ReadRawFile(dest, m_ptr, 98304);
  if ( RawFile )
  {
    data_p = RawFile;
    for ( i = Com_Parse((const char **)&data_p); data_p; i = Com_Parse((const char **)&data_p) )
    {
      if ( s_gameInfoData.numGameTypes == 64 )
      {
        Com_Printf(13, "Too many game type scripts found! Only loading the first %i\n", 63i64);
        break;
      }
      v5 = &s_gameInfoData.gameTypes[s_gameInfoData.numGameTypes];
      Core_strcpy(v5->gameTypeInternalName, 0xCui64, i);
      Com_sprintf<128>((char (*)[128])dest, "%s/gametypes/%s.txt", v2, i);
      v6 = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
      if ( DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
      {
        Com_PrintError(13, "GetGameTypesBuffer file not found: %s, using default\n", dest);
      }
      else
      {
        RawFileLen = DB_GetRawFileLen(v6);
        if ( RawFileLen < 0x400 )
        {
          DB_GetRawBuffer(v6, buf, RawFileLen);
          v13[0] = buf;
          v9 = Com_Parse((const char **)v13);
          Core_strcpy(v5->gameTypeName, 0x20ui64, v9);
          v10 = Com_Parse((const char **)v13);
          Core_strcpy(v5->customizedGameTypeName, 0x40ui64, v10);
          v8 = Com_Parse((const char **)v13);
          goto LABEL_14;
        }
        LODWORD(v11) = 1024;
        Com_PrintError(16, "GetGameTypesBuffer file too large: %s is %i, max allowed is %i\n", dest, RawFileLen, v11);
      }
      Core_strcpy(v5->gameTypeName, 0x20ui64, v5->gameTypeInternalName);
      Core_strcpy(v5->customizedGameTypeName, 0x40ui64, v5->gameTypeInternalName);
      v8 = (const char *)v5;
LABEL_14:
      Core_strcpy(v5->customizedGameTypeDesc, 0x40ui64, v8);
      ++s_gameInfoData.numGameTypes;
    }
  }
LABEL_17:
  Mem_LargeLocal::~Mem_LargeLocal(&v14);
}

/*
==============
Com_GameInfo_LoadMapInfoList
==============
*/
void Com_GameInfo_LoadMapInfoList()
{
  char ActiveGameMode; 
  int v1; 
  int mapCount; 
  const char **v3; 
  mapInfo *v4; 
  const char *v5; 
  unsigned __int64 v6; 
  const char *v7; 
  const char *v8; 
  unsigned __int64 v9; 
  const char *v10; 
  const char *v11; 
  unsigned __int64 v12; 
  const char *v13; 
  const char *v14; 
  unsigned __int64 v15; 
  const char *v16; 
  const char *v17; 
  unsigned __int64 v18; 
  const char *v19; 
  const char *v20; 
  unsigned __int64 v21; 
  const char *v22; 
  const char *v23; 
  unsigned __int64 v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *v29; 
  const char *v30; 
  const char *v31; 
  const char *v32; 
  const char *v33; 
  const char *v34; 
  int v35; 
  const char *v36; 
  const char *v37; 
  char *v38; 
  const char *v39; 
  const char *i; 
  __int64 v41; 
  const char *v42; 
  signed __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 
  int v47; 
  int v48; 
  __int64 v49; 
  __int64 v50; 
  char *data_p; 

  s_gameInfoData.mapCount = 0;
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 || ActiveGameMode == 3 )
  {
    Com_GameInfo_LoadArenasFromFile_FastFile("mp");
    v1 = 0;
    if ( s_mapInfoCount > 0 )
    {
      mapCount = s_gameInfoData.mapCount;
      v3 = (const char **)s_arenaInfos;
      do
      {
        if ( (unsigned int)mapCount >= 0x80 )
        {
          LODWORD(v50) = 128;
          LODWORD(v49) = mapCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 264, ASSERT_TYPE_ASSERT, "(unsigned)( s_gameInfoData.mapCount ) < (unsigned)( ( sizeof( *array_counter( s_gameInfoData.mapList ) ) + 0 ) )", "s_gameInfoData.mapCount doesn't index ARRAY_COUNT( s_gameInfoData.mapList )\n\t%i not in [0, %i)", v49, v50) )
            __debugbreak();
          mapCount = s_gameInfoData.mapCount;
        }
        v4 = &s_gameInfoData.mapList[mapCount];
        memset_0(v4, 0, sizeof(mapInfo));
        v5 = Info_ValueForKey(*v3, "map");
        v6 = -1i64;
        do
          ++v6;
        while ( v5[v6] );
        if ( v6 > 0x10 )
        {
          v7 = Info_ValueForKey(*v3, "map");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v7, "map", 0x10ui64);
        }
        v8 = Info_ValueForKey(*v3, "longname");
        v9 = -1i64;
        do
          ++v9;
        while ( v8[v9] );
        if ( v9 > 0x20 )
        {
          v10 = Info_ValueForKey(*v3, "longname");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v10, "longname", 0x20ui64);
        }
        v11 = Info_ValueForKey(*v3, "description");
        v12 = -1i64;
        do
          ++v12;
        while ( v11[v12] );
        if ( v12 > 0x20 )
        {
          v13 = Info_ValueForKey(*v3, "description");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v13, "description", 0x20ui64);
        }
        v14 = Info_ValueForKey(*v3, "mapimage");
        v15 = -1i64;
        do
          ++v15;
        while ( v14[v15] );
        if ( v15 > 0x20 )
        {
          v16 = Info_ValueForKey(*v3, "mapimage");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v16, "mapimage", 0x20ui64);
        }
        v17 = Info_ValueForKey(*v3, "defaultgametype");
        v18 = -1i64;
        do
          ++v18;
        while ( v17[v18] );
        if ( v18 > 0x20 )
        {
          v19 = Info_ValueForKey(*v3, "defaultgametype");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v19, "defaultgametype", 0x20ui64);
        }
        v20 = Info_ValueForKey(*v3, "gametype");
        v21 = -1i64;
        do
          ++v21;
        while ( v20[v21] );
        if ( v21 > 0x400 )
        {
          v22 = Info_ValueForKey(*v3, "gametype");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v22, "gametype", 0x400ui64);
        }
        v23 = Info_ValueForKey(*v3, "mapvoteimage");
        v24 = -1i64;
        do
          ++v24;
        while ( v23[v24] );
        if ( v24 > 0x20 )
        {
          v25 = Info_ValueForKey(*v3, "mapvoteimage");
          Com_PrintError(13, "UI_UpdateArenas: \"%s\" exceeded max size for \"%s\" of %zu and will be truncated\n", v25, "mapvoteimage", 0x20ui64);
        }
        if ( !g_wegame_platform->current.enabled || (v26 = Info_ValueForKey(*v3, "wegame"), atoi(v26) == 1) )
        {
          v27 = Info_ValueForKey(*v3, "map");
          Core_strcpy(v4->mapLoadName, 0x10ui64, v27);
          v28 = Info_ValueForKey(*v3, "longname");
          Core_strcpy(v4->mapName, 0x20ui64, v28);
          v29 = Info_ValueForKey(*v3, "description");
          Core_strcpy(v4->mapDescription, 0x20ui64, v29);
          v30 = Info_ValueForKey(*v3, "mapimage");
          Core_strcpy(v4->mapLoadImage, 0x20ui64, v30);
          v31 = Info_ValueForKey(*v3, "defaultgametype");
          Core_strcpy(v4->mapDefaultGameType, 0x20ui64, v31);
          v32 = Info_ValueForKey(*v3, "gametype");
          Core_strcpy(v4->mapGameTypes, 0x400ui64, v32);
          v33 = Info_ValueForKey(*v3, "mapvoteimage");
          Core_strcpy(v4->mapVoteImage, 0x20ui64, v33);
          v34 = Info_ValueForKey(*v3, "mappack");
          if ( v34 && *v34 )
            v35 = atoi(v34);
          else
            v35 = -1;
          v36 = *v3;
          v4->mapPack = v35;
          v4->isAliensMap = 0;
          v37 = Info_ValueForKey(v36, "gametype");
          v38 = (char *)v37;
          if ( v37 && *v37 )
          {
            v39 = j_va(".arena files : %s", v4->mapLoadName);
            Com_BeginParseSession(v39);
            data_p = v38;
            for ( i = Com_Parse((const char **)&data_p); i; i = Com_Parse((const char **)&data_p) )
            {
              if ( !*i )
                break;
              v41 = 0x7FFFFFFFi64;
              v42 = "Aliens";
              v43 = i - "Aliens";
              do
              {
                v44 = (unsigned __int8)v42[v43];
                v45 = v41;
                v46 = *(unsigned __int8 *)v42++;
                --v41;
                if ( !v45 )
                  break;
                if ( v44 != v46 )
                {
                  v47 = v44 + 32;
                  if ( (unsigned int)(v44 - 65) > 0x19 )
                    v47 = v44;
                  v44 = v47;
                  v48 = v46 + 32;
                  if ( (unsigned int)(v46 - 65) > 0x19 )
                    v48 = v46;
                  if ( v44 != v48 )
                    goto LABEL_58;
                }
              }
              while ( v44 );
              v4->isAliensMap = 1;
LABEL_58:
              ;
            }
            Com_EndParseSession();
          }
          mapCount = s_gameInfoData.mapCount + 1;
          s_gameInfoData.mapCount = mapCount;
          if ( mapCount >= 128 )
            return;
        }
        else
        {
          mapCount = s_gameInfoData.mapCount;
        }
        ++v1;
        ++v3;
      }
      while ( v1 < s_mapInfoCount );
    }
  }
}

/*
==============
Com_GameMode_SetDefaultGameTypeIfNeeded
==============
*/
void Com_GameMode_SetDefaultGameTypeIfNeeded(const char *mapName)
{
  mapInfo *v2; 
  unsigned int v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  const char *v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *Gametype; 
  const char *v13; 
  __int64 v14; 

  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
  {
    v2 = NULL;
    v3 = 0;
    if ( s_gameInfoData.mapCount > 0 )
    {
LABEL_3:
      v4 = 1240i64 * (int)v3;
      v5 = 0x7FFFFFFFi64;
      v6 = mapName;
      if ( (ComGameInfoData *)((char *)&s_gameInfoData + v4) == (ComGameInfoData *)-11048i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v4 + (unsigned int)&s_gameInfoData + 11049), "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v7 = (unsigned __int8)s_gameInfoData.mapList[0].mapLoadName[v4 - (_QWORD)mapName + (_QWORD)v6];
        v8 = v5;
        v9 = *(unsigned __int8 *)v6++;
        --v5;
        if ( !v8 )
          break;
        if ( v7 != v9 )
        {
          v10 = v7 + 32;
          if ( (unsigned int)(v7 - 65) > 0x19 )
            v10 = v7;
          v7 = v10;
          v11 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v11 = v9;
          if ( v7 != v11 )
          {
            if ( (int)++v3 >= s_gameInfoData.mapCount )
              goto LABEL_21;
            goto LABEL_3;
          }
        }
      }
      while ( v7 );
      if ( v3 >= 0x80 )
      {
        LODWORD(v14) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gameinfo.cpp", 356, ASSERT_TYPE_ASSERT, "(unsigned)( mapIndex ) < (unsigned)( ( sizeof( *array_counter( s_gameInfoData.mapList ) ) + 0 ) )", "mapIndex doesn't index ARRAY_COUNT( s_gameInfoData.mapList )\n\t%i not in [0, %i)", v14, 128) )
          __debugbreak();
      }
      v2 = &s_gameInfoData.mapList[v4 / 0x4D8];
    }
LABEL_21:
    Gametype = Party_GetGametype();
    v13 = Gametype;
    if ( v2 && v2->mapGameTypes[0] && !strstr_0(v2->mapGameTypes, Gametype) )
    {
      if ( v2->mapDefaultGameType[0] )
      {
        Com_Printf(16, "Gametype %s not supported by map %s according to basemaps.arena! Setting gametype to defaultgametype %s from arena file.\n", v13, mapName, v2->mapDefaultGameType);
        Dvar_SetString_Internal(DVARSTR_ui_gametype, v2->mapDefaultGameType);
      }
    }
  }
}

