/*
==============
CL_TransientsInfilMP_IsRequestedByName
==============
*/

bool __fastcall CL_TransientsInfilMP_IsRequestedByName(const char *transientFile)
{
  return ?CL_TransientsInfilMP_IsRequestedByName@@YA_NPEBD@Z(transientFile);
}

/*
==============
CL_TransientsInfilMP_OnLevelLoad
==============
*/

void CL_TransientsInfilMP_OnLevelLoad(void)
{
  ?CL_TransientsInfilMP_OnLevelLoad@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_OnLevelPreloadComplete
==============
*/

void CL_TransientsInfilMP_OnLevelPreloadComplete(void)
{
  ?CL_TransientsInfilMP_OnLevelPreloadComplete@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_OnLevelUnload
==============
*/

void CL_TransientsInfilMP_OnLevelUnload(void)
{
  ?CL_TransientsInfilMP_OnLevelUnload@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_AreGameplayInfilsLoaded
==============
*/

bool __fastcall CL_TransientsInfilMP_AreGameplayInfilsLoaded()
{
  return ?CL_TransientsInfilMP_AreGameplayInfilsLoaded@@YA_NXZ();
}

/*
==============
CL_TransientsInfilMP_GetGameplayInfilRequestCount
==============
*/

unsigned int __fastcall CL_TransientsInfilMP_GetGameplayInfilRequestCount()
{
  return ?CL_TransientsInfilMP_GetGameplayInfilRequestCount@@YAIXZ();
}

/*
==============
CL_TransientsInfilMP_IsLoadedByName
==============
*/

bool __fastcall CL_TransientsInfilMP_IsLoadedByName(const char *transientFile)
{
  return ?CL_TransientsInfilMP_IsLoadedByName@@YA_NPEBD@Z(transientFile);
}

/*
==============
CL_TransientsInfilMP_AreIntroInfilsLoaded
==============
*/

bool __fastcall CL_TransientsInfilMP_AreIntroInfilsLoaded()
{
  return ?CL_TransientsInfilMP_AreIntroInfilsLoaded@@YA_NXZ();
}

/*
==============
CL_TransientsInfilMP_OnLevelPreloadCancel
==============
*/

void CL_TransientsInfilMP_OnLevelPreloadCancel(void)
{
  ?CL_TransientsInfilMP_OnLevelPreloadCancel@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_OnDevMap
==============
*/

void __fastcall CL_TransientsInfilMP_OnDevMap(const char *map)
{
  ?CL_TransientsInfilMP_OnDevMap@@YAXPEBD@Z(map);
}

/*
==============
CL_TransientsInfilMP_OnLobbyToGameStart
==============
*/

void CL_TransientsInfilMP_OnLobbyToGameStart(void)
{
  ?CL_TransientsInfilMP_OnLobbyToGameStart@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_ErrorCleanup
==============
*/

void CL_TransientsInfilMP_ErrorCleanup(void)
{
  ?CL_TransientsInfilMP_ErrorCleanup@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_ProcessFastfiles
==============
*/

void CL_TransientsInfilMP_ProcessFastfiles(void)
{
  ?CL_TransientsInfilMP_ProcessFastfiles@@YAXXZ();
}

/*
==============
CL_TransientsInfilMP_AreAllInfilsOfGivenTypeLoaded
==============
*/
char CL_TransientsInfilMP_AreAllInfilsOfGivenTypeLoaded(const InfilTransientType trType)
{
  __int64 v2; 
  __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 

  if ( (unsigned __int8)trType >= INFIL_TRTYPE_COUNT )
  {
    v7 = 2;
    v5 = (unsigned __int8)trType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( trType ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.requestCount ) ) + 0 ) )", "trType doesn't index ARRAY_COUNT( s_infilGlob.requestCount )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( !s_infilGlob.requestCount[(unsigned __int8)trType] )
    return 1;
  v2 = 0i64;
  if ( !BG_TransientsInfilMP_GetInfilCount() )
    return 1;
  while ( 1 )
  {
    if ( BG_TransientsInfilMP_GetInfilType(v2) == trType )
    {
      if ( (unsigned int)v2 >= 0xC )
      {
        LODWORD(v6) = 12;
        LODWORD(v4) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 300, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", v4, v6) )
          __debugbreak();
      }
      if ( s_infilGlob.infilState[v2].requested && !s_infilGlob.infilState[v2].loaded )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= BG_TransientsInfilMP_GetInfilCount() )
      return 1;
  }
  return 0;
}

/*
==============
CL_TransientsInfilMP_AreGameplayInfilsLoaded
==============
*/
char CL_TransientsInfilMP_AreGameplayInfilsLoaded()
{
  return CL_TransientsInfilMP_AreAllInfilsOfGivenTypeLoaded(INFIL_TRTYPE_GAMEPLAY);
}

/*
==============
CL_TransientsInfilMP_AreIntroInfilsLoaded
==============
*/
char CL_TransientsInfilMP_AreIntroInfilsLoaded()
{
  return CL_TransientsInfilMP_AreAllInfilsOfGivenTypeLoaded(INFIL_TRTYPE_INTRO);
}

/*
==============
CL_TransientsInfilMP_ErrorCleanup
==============
*/
void CL_TransientsInfilMP_ErrorCleanup(void)
{
  CLTransientInfilState *infilState; 
  __int64 v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 282, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(14, "CL_TransientsInfilMP_ErrorCleanup\n");
  infilState = s_infilGlob.infilState;
  v1 = 12i64;
  do
  {
    if ( infilState->requested )
      CL_TransientsMP_UnloadByFileIndex(infilState->mpFileIndex);
    ++infilState;
    --v1;
  }
  while ( v1 );
  memset_0(&s_infilGlob, 0, sizeof(s_infilGlob));
}

/*
==============
CL_TransientsInfilMP_FindInfilStateByName
==============
*/
CLTransientInfilState *CL_TransientsInfilMP_FindInfilStateByName(const char *const transientFile)
{
  __int64 i; 
  const char *InfilName; 
  __int64 v4; 
  const char *v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 
  __int64 v12; 
  __int64 v13; 

  for ( i = 0i64; (unsigned int)i < BG_TransientsInfilMP_GetInfilCount(); i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0xC )
    {
      LODWORD(v13) = 12;
      LODWORD(v12) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 339, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    InfilName = BG_TransientsInfilMP_GetInfilName(i);
    if ( !InfilName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 343, ASSERT_TYPE_ASSERT, "(thisInfilName)", (const char *)&queryFormat, "thisInfilName") )
      __debugbreak();
    v4 = 0x7FFFFFFFi64;
    if ( !transientFile && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !InfilName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v5 = (const char *)(transientFile - InfilName);
    while ( 1 )
    {
      v6 = (unsigned __int8)InfilName[(_QWORD)v5];
      v7 = v4;
      v8 = *(unsigned __int8 *)InfilName++;
      --v4;
      if ( !v7 )
        return &s_infilGlob.infilState[i];
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
        return &s_infilGlob.infilState[i];
    }
  }
  return 0i64;
}

/*
==============
CL_TransientsInfilMP_GetGameplayInfilRequestCount
==============
*/
__int64 CL_TransientsInfilMP_GetGameplayInfilRequestCount()
{
  return s_infilGlob.requestCount[1];
}

/*
==============
CL_TransientsInfilMP_IsLoadedByName
==============
*/
bool CL_TransientsInfilMP_IsLoadedByName(const char *transientFile)
{
  CLTransientInfilState *InfilStateByName; 

  if ( !transientFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 371, ASSERT_TYPE_ASSERT, "(transientFile)", (const char *)&queryFormat, "transientFile") )
    __debugbreak();
  InfilStateByName = CL_TransientsInfilMP_FindInfilStateByName(transientFile);
  return InfilStateByName && InfilStateByName->requested && InfilStateByName->loaded;
}

/*
==============
CL_TransientsInfilMP_IsRequestedByName
==============
*/
CLTransientInfilState *CL_TransientsInfilMP_IsRequestedByName(const char *transientFile)
{
  CLTransientInfilState *result; 

  if ( !transientFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 356, ASSERT_TYPE_ASSERT, "(transientFile)", (const char *)&queryFormat, "transientFile") )
    __debugbreak();
  result = CL_TransientsInfilMP_FindInfilStateByName(transientFile);
  if ( result )
    return (CLTransientInfilState *)result->requested;
  return result;
}

/*
==============
CL_TransientsInfilMP_LoadInfilFastfile
==============
*/
void CL_TransientsInfilMP_LoadInfilFastfile(const unsigned int infilIndex)
{
  __int64 v1; 
  CLTransientInfilState *v2; 
  const char *InfilName; 
  InfilTransientType InfilType; 
  InfilTransientType v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = infilIndex;
  if ( infilIndex >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 74, ASSERT_TYPE_ASSERT, "(unsigned)( infilIndex ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "infilIndex doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", infilIndex, 12) )
    __debugbreak();
  v2 = &s_infilGlob.infilState[v1];
  if ( !s_infilGlob.infilState[v1].requested )
  {
    InfilName = BG_TransientsInfilMP_GetInfilName(v1);
    if ( !InfilName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 81, ASSERT_TYPE_ASSERT, "(fileName)", (const char *)&queryFormat, "fileName") )
      __debugbreak();
    if ( s_infilGlob.infilState[v1].loaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 83, ASSERT_TYPE_ASSERT, "(!infilState.loaded)", (const char *)&queryFormat, "!infilState.loaded") )
      __debugbreak();
    s_infilGlob.infilState[v1].requested = 1;
    v2->mpFileIndex = CL_TransientsMP_GetFileIndexForFileName(InfilName);
    InfilType = BG_TransientsInfilMP_GetInfilType(v1);
    v5 = InfilType;
    if ( (unsigned __int8)InfilType >= INFIL_TRTYPE_COUNT )
    {
      LODWORD(v8) = 2;
      LODWORD(v7) = (unsigned __int8)InfilType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 89, ASSERT_TYPE_ASSERT, "(unsigned)( trType ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.requestCount ) ) + 0 ) )", "trType doesn't index ARRAY_COUNT( s_infilGlob.requestCount )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    ++s_infilGlob.requestCount[(unsigned __int8)v5];
    if ( v5 )
    {
      if ( v5 == INFIL_TRTYPE_GAMEPLAY )
      {
        v6 = 4196;
      }
      else
      {
        LODWORD(v7) = (unsigned __int8)v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 66, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid type %d", v7) )
          __debugbreak();
        v6 = 0;
      }
    }
    else
    {
      v6 = 9000;
    }
    CL_TransientsMP_LoadByFileIndex(v2->mpFileIndex, v6);
  }
}

/*
==============
CL_TransientsInfilMP_LoadIntroInfils
==============
*/
void CL_TransientsInfilMP_LoadIntroInfils(const char *const map)
{
  __int64 i; 
  __int64 v3; 
  __int64 v4; 

  if ( !BG_TransientsInfilMP_IsTableInited(map) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 164, ASSERT_TYPE_ASSERT, "(BG_TransientsInfilMP_IsTableInited( map ))", (const char *)&queryFormat, "BG_TransientsInfilMP_IsTableInited( map )") )
    __debugbreak();
  if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 165, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
    __debugbreak();
  for ( i = 0i64; (unsigned int)i < BG_TransientsInfilMP_GetInfilCount(); i = (unsigned int)(i + 1) )
  {
    if ( BG_TransientsInfilMP_GetInfilType(i) == INFIL_TRTYPE_INTRO )
    {
      if ( (unsigned int)i >= 0xC )
      {
        LODWORD(v4) = 12;
        LODWORD(v3) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 171, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( s_infilGlob.infilState[i].requested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 172, ASSERT_TYPE_ASSERT, "(!s_infilGlob.infilState[i].requested)", (const char *)&queryFormat, "!s_infilGlob.infilState[i].requested") )
        __debugbreak();
      CL_TransientsInfilMP_LoadInfilFastfile(i);
    }
  }
}

/*
==============
CL_TransientsInfilMP_OnDevMap
==============
*/
void CL_TransientsInfilMP_OnDevMap(const char *map)
{
  int ZoneIndexFromName; 
  const char *v3; 
  int v4; 
  const char *v5; 
  __int64 v6; 
  char *mapName; 
  int v8; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 243, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 244, ASSERT_TYPE_ASSERT, "(map)", (const char *)&queryFormat, "map") )
    __debugbreak();
  Com_Printf(14, "CL_TransientsInfilMP_OnDevMap\n");
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) )
    return;
  ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(map);
  if ( ZoneIndexFromName == 0xFFFF )
  {
    v3 = "zoneIndex != INVALID_ZONE_INDEX";
    v4 = 255;
    v5 = "(zoneIndex != INVALID_ZONE_INDEX)";
    goto LABEL_12;
  }
  if ( !ZoneIndexFromName )
  {
    v3 = "zoneIndex != DEFAULT_ZONE_INDEX";
    v4 = 256;
    v5 = "(zoneIndex != DEFAULT_ZONE_INDEX)";
LABEL_12:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", v4, ASSERT_TYPE_ASSERT, v5, (const char *)&queryFormat, v3) )
      __debugbreak();
  }
  if ( (DB_Zones_GetZoneFlagsFromIndex(ZoneIndexFromName) & 0x100) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 257, ASSERT_TYPE_ASSERT, "(DB_Zones_GetZoneFlagsFromIndex( zoneIndex ) & DB_ZONE_GAME)", (const char *)&queryFormat, "DB_Zones_GetZoneFlagsFromIndex( zoneIndex ) & DB_ZONE_GAME") )
    __debugbreak();
  if ( !DB_Zones_IsFinishedLoadingByIndex(ZoneIndexFromName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 258, ASSERT_TYPE_ASSERT, "(DB_Zones_IsFinishedLoadingByIndex( zoneIndex ))", (const char *)&queryFormat, "DB_Zones_IsFinishedLoadingByIndex( zoneIndex )") )
    __debugbreak();
  if ( s_infilGlob.mapName[0] )
  {
    v6 = 0x7FFFFFFFi64;
    mapName = s_infilGlob.mapName;
    if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    do
    {
      v8 = (unsigned __int8)mapName[map - s_infilGlob.mapName];
      v9 = v6;
      v10 = (unsigned __int8)*mapName++;
      --v6;
      if ( !v9 )
        break;
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
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 267, ASSERT_TYPE_ASSERT, "( I_stricmp( map, s_infilGlob.mapName ) == 0 )", "%s != %s", map, s_infilGlob.mapName) )
            __debugbreak();
          break;
        }
      }
    }
    while ( v8 );
    CL_TransientsInfilMP_ProcessFastfiles();
  }
  else
  {
    CL_TransientsInfilMP_LoadIntroInfils(map);
  }
  CL_TransientsMP_StallUntilCompletion();
  Core_strcpy(s_infilGlob.mapName, 0x40ui64, map);
}

/*
==============
CL_TransientsInfilMP_OnLevelLoad
==============
*/
void CL_TransientsInfilMP_OnLevelLoad(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 224, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(14, "CL_TransientsInfilMP_OnLevelLoad\n");
}

/*
==============
CL_TransientsInfilMP_OnLevelPreloadCancel
==============
*/
void CL_TransientsInfilMP_OnLevelPreloadCancel(void)
{
  CLTransientInfilState *infilState; 
  __int64 v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 208, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  infilState = s_infilGlob.infilState;
  v1 = 12i64;
  do
  {
    if ( infilState->requested )
      CL_TransientsMP_UnloadByFileIndex(infilState->mpFileIndex);
    ++infilState;
    --v1;
  }
  while ( v1 );
  memset_0(&s_infilGlob, 0, sizeof(s_infilGlob));
}

/*
==============
CL_TransientsInfilMP_OnLevelPreloadComplete
==============
*/
void CL_TransientsInfilMP_OnLevelPreloadComplete(void)
{
  const dvar_t *v0; 
  const char *string; 
  int ZoneIndexFromName; 
  int v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 182, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && !s_infilGlob.mapName[0] )
  {
    v0 = DVARSTR_ui_mapname;
    if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    string = v0->current.string;
    if ( string )
    {
      if ( *string )
      {
        ZoneIndexFromName = DB_Zones_GetZoneIndexFromName(string);
        v3 = ZoneIndexFromName;
        if ( ZoneIndexFromName != 0xFFFF )
        {
          if ( !ZoneIndexFromName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 151, ASSERT_TYPE_ASSERT, "(zoneIndex != DEFAULT_ZONE_INDEX)", (const char *)&queryFormat, "zoneIndex != DEFAULT_ZONE_INDEX") )
            __debugbreak();
          if ( (DB_Zones_GetZoneFlagsFromIndex(v3) & 0x100000) != 0 && DB_Zones_IsFinishedLoadingByIndex(v3) )
          {
            BG_TransientsInfilMP_InitTableForMap(string);
            CL_TransientsInfilMP_LoadIntroInfils(string);
            Core_strcpy(s_infilGlob.mapName, 0x40ui64, string);
          }
        }
      }
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 192, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 144, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
        __debugbreak();
    }
  }
}

/*
==============
CL_TransientsInfilMP_OnLevelUnload
==============
*/
void CL_TransientsInfilMP_OnLevelUnload(void)
{
  CLTransientInfilState *infilState; 
  __int64 v1; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 232, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(14, "CL_TransientsInfilMP_OnLevelUnload\n");
  infilState = s_infilGlob.infilState;
  v1 = 12i64;
  do
  {
    if ( infilState->requested )
      CL_TransientsMP_UnloadByFileIndex(infilState->mpFileIndex);
    ++infilState;
    --v1;
  }
  while ( v1 );
  memset_0(&s_infilGlob, 0, sizeof(s_infilGlob));
}

/*
==============
CL_TransientsInfilMP_OnLobbyToGameStart
==============
*/
void CL_TransientsInfilMP_OnLobbyToGameStart(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 216, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Com_Printf(14, "CL_TransientsInfilMP_OnLobbyToGameStart\n");
}

/*
==============
CL_TransientsInfilMP_ProcessFastfiles
==============
*/
void CL_TransientsInfilMP_ProcessFastfiles(void)
{
  __int64 v0; 
  unsigned int i; 
  unsigned int InfilOmnvarIndexByIndex; 
  const OmnvarDef *Def; 
  LocalClientNum_t v4; 
  OmnvarData *Data; 
  bool enabled; 
  InfilTransientType InfilType; 
  InfilTransientType v8; 
  bool v9; 
  unsigned int *v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 386, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_RELOADING|0x80) && BG_TransientsInfilMP_IsTableInited(s_infilGlob.mapName) )
  {
    v0 = 0i64;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|0x80) && BG_TransientsInfilMP_IsOmnvarsInited() )
    {
      for ( i = 0; i < BG_TransientsInfilMP_GetInfilCount(); ++i )
      {
        InfilOmnvarIndexByIndex = BG_TransientsInfilMP_GetInfilOmnvarIndexByIndex(i);
        Def = BG_Omnvar_GetDef(InfilOmnvarIndexByIndex);
        v4 = LOCAL_CLIENT_0;
        if ( SLODWORD(cl_maxLocalClients) > 0 )
        {
          do
          {
            if ( (unsigned int)v4 >= LOCAL_CLIENT_COUNT )
            {
              LODWORD(v12) = 2;
              LODWORD(v11) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
                __debugbreak();
            }
            if ( v4 < cg_t::ms_allocatedCount )
            {
              Data = CG_Omnvar_GetData(v4, InfilOmnvarIndexByIndex);
              if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
                __debugbreak();
              if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
                __debugbreak();
              if ( Def->type == OMNVAR_TYPE_BOOL )
                goto LABEL_24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
                __debugbreak();
              if ( Def->type )
                enabled = 0;
              else
LABEL_24:
                enabled = Data->current.enabled;
              if ( i >= 0xC )
              {
                LODWORD(v12) = 12;
                LODWORD(v11) = i;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 418, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", v11, v12) )
                  __debugbreak();
              }
              if ( s_infilGlob.infilState[i].requested )
              {
                if ( !enabled )
                {
                  CL_TransientsMP_UnloadByFileIndex(s_infilGlob.infilState[i].mpFileIndex);
                  InfilType = BG_TransientsInfilMP_GetInfilType(i);
                  v8 = InfilType;
                  if ( (unsigned __int8)InfilType >= INFIL_TRTYPE_COUNT )
                  {
                    LODWORD(v12) = 2;
                    LODWORD(v11) = (unsigned __int8)InfilType;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 108, ASSERT_TYPE_ASSERT, "(unsigned)( trType ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.requestCount ) ) + 0 ) )", "trType doesn't index ARRAY_COUNT( s_infilGlob.requestCount )\n\t%i not in [0, %i)", v11, v12) )
                      __debugbreak();
                  }
                  v9 = s_infilGlob.requestCount[(unsigned __int8)v8] == 0;
                  v10 = &s_infilGlob.requestCount[(unsigned __int8)v8];
                  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 109, ASSERT_TYPE_ASSERT, "(s_infilGlob.requestCount[trType] > 0)", (const char *)&queryFormat, "s_infilGlob.requestCount[trType] > 0") )
                    __debugbreak();
                  --*v10;
                  s_infilGlob.infilState[i] = 0;
                }
              }
              else if ( enabled )
              {
                CL_TransientsInfilMP_LoadInfilFastfile(i);
              }
            }
            ++v4;
          }
          while ( v4 < SLODWORD(cl_maxLocalClients) );
          v0 = 0i64;
        }
      }
    }
    if ( BG_TransientsInfilMP_GetInfilCount() )
    {
      do
      {
        if ( (unsigned int)v0 >= 0xC )
        {
          LODWORD(v12) = 12;
          LODWORD(v11) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 437, ASSERT_TYPE_ASSERT, "(unsigned)( i ) < (unsigned)( ( sizeof( *array_counter( s_infilGlob.infilState ) ) + 0 ) )", "i doesn't index ARRAY_COUNT( s_infilGlob.infilState )\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        if ( s_infilGlob.infilState[v0].requested && !s_infilGlob.infilState[v0].loaded )
        {
          if ( !s_infilGlob.infilState[v0].mpFileIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_transients_infil_mp.cpp", 442, ASSERT_TYPE_ASSERT, "(infilState.mpFileIndex)", (const char *)&queryFormat, "infilState.mpFileIndex") )
            __debugbreak();
          if ( CL_TransientsMP_IsLoadedByFileIndex(s_infilGlob.infilState[v0].mpFileIndex) )
            s_infilGlob.infilState[v0].loaded = 1;
        }
        v0 = (unsigned int)(v0 + 1);
      }
      while ( (unsigned int)v0 < BG_TransientsInfilMP_GetInfilCount() );
    }
  }
}

