/*
==============
Scr_PreloadZones
==============
*/

void __fastcall Scr_PreloadZones(scrContext_t *scrContext)
{
  ?Scr_PreloadZones@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_PreloadSP_IsPreloadingNonTransientZones
==============
*/

bool __fastcall SV_PreloadSP_IsPreloadingNonTransientZones()
{
  return ?SV_PreloadSP_IsPreloadingNonTransientZones@@YA_NXZ();
}

/*
==============
SV_PreloadSP_ClearZones
==============
*/

void SV_PreloadSP_ClearZones(void)
{
  ?SV_PreloadSP_ClearZones@@YAXXZ();
}

/*
==============
Scr_IsPreloadZonesComplete
==============
*/

void __fastcall Scr_IsPreloadZonesComplete(scrContext_t *scrContext)
{
  ?Scr_IsPreloadZonesComplete@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_PreloadSP_HadStartedPreloadingZone
==============
*/

bool __fastcall SV_PreloadSP_HadStartedPreloadingZone(const char *const zoneName)
{
  return ?SV_PreloadSP_HadStartedPreloadingZone@@YA_NQEBD@Z(zoneName);
}

/*
==============
SV_PreloadSP_DumpDBPreloadZoneNames
==============
*/

void SV_PreloadSP_DumpDBPreloadZoneNames(void)
{
  ?SV_PreloadSP_DumpDBPreloadZoneNames@@YAXXZ();
}

/*
==============
Scr_WasPreloadZonesStarted
==============
*/

void __fastcall Scr_WasPreloadZonesStarted(scrContext_t *scrContext)
{
  ?Scr_WasPreloadZonesStarted@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
SV_PreloadSP_HaveFastfilesFinishedLoading
==============
*/

bool __fastcall SV_PreloadSP_HaveFastfilesFinishedLoading()
{
  return ?SV_PreloadSP_HaveFastfilesFinishedLoading@@YA_NXZ();
}

/*
==============
SV_PreloadSP_ClearZones
==============
*/
void SV_PreloadSP_ClearZones(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 79, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  memset_0(level.preloadedFiles, 0, sizeof(level.preloadedFiles));
  s_preloadComplete = 0;
}

/*
==============
SV_PreloadSP_DumpDBPreloadZoneNames
==============
*/
void SV_PreloadSP_DumpDBPreloadZoneNames(void)
{
  unsigned int i; 
  const char *ZoneNameFromIndex; 

  for ( i = 0; i < 0x7A4; ++i )
  {
    if ( DB_Zones_IsValidZoneIndex(i) && (DB_Zones_GetZoneFlagsFromIndex(i) & 0x600000) != 0 )
    {
      ZoneNameFromIndex = DB_Zones_GetZoneNameFromIndex(i);
      Com_Printf(24, "Preload zone : %s (either loading or loaded)\n", ZoneNameFromIndex);
    }
  }
}

/*
==============
SV_PreloadSP_HadStartedPreloadingZone
==============
*/
char SV_PreloadSP_HadStartedPreloadingZone(const char *const zoneName)
{
  int i; 
  __int64 v3; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  int v11; 

  if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 89, ASSERT_TYPE_ASSERT, "(zoneName)", (const char *)&queryFormat, "zoneName") )
    __debugbreak();
  for ( i = 0; i < 8; ++i )
  {
    v3 = 0x7FFFFFFFi64;
    v4 = (__int64)i << 6;
    v5 = zoneName;
    if ( (level_locals_t *)((char *)&level + v4) == (level_locals_t *)-88580i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, (AssertType)(v4 + (unsigned int)&level + 88581), "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !zoneName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v6 = v4 - (_QWORD)zoneName;
    while ( 1 )
    {
      v7 = (unsigned __int8)v5[(_QWORD)level.preloadedFiles + v6];
      v8 = v3;
      v9 = *(unsigned __int8 *)v5++;
      --v3;
      if ( !v8 )
        return 1;
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
          break;
      }
      if ( !v7 )
        return 1;
    }
  }
  return 0;
}

/*
==============
SV_PreloadSP_HaveFastfilesFinishedLoading
==============
*/
char SV_PreloadSP_HaveFastfilesFinishedLoading()
{
  char (*preloadedFiles)[64]; 
  int v1; 

  preloadedFiles = level.preloadedFiles;
  v1 = 0;
  while ( !*(_BYTE *)preloadedFiles || DB_Zones_IsPreloadZoneName(level.preloadedFiles[(__int64)v1]) && DB_Zones_IsFinishedLoading(level.preloadedFiles[(__int64)v1]) )
  {
    ++v1;
    ++preloadedFiles;
    if ( v1 >= 8 )
      return 1;
  }
  return 0;
}

/*
==============
SV_PreloadSP_IsPreloadingNonTransientZones
==============
*/
char SV_PreloadSP_IsPreloadingNonTransientZones()
{
  int v0; 

  v0 = 0;
  while ( DB_Zones_IsTransientZoneName(level.preloadedFiles[(__int64)v0]) )
  {
    if ( ++v0 >= 8 )
      return 0;
  }
  return 1;
}

/*
==============
Scr_IsPreloadZonesComplete
==============
*/
void Scr_IsPreloadZonesComplete(scrContext_t *scrContext)
{
  bool v2; 
  int v3; 
  char (*preloadedFiles)[64]; 
  int v5; 

  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_2325, scrContext, "Incorrect IsPreloadZonesComplete() call.");
  v2 = level.preloadedFiles[0][0] != 0;
  v3 = 0;
  if ( SV_IsDemoPlaying() )
  {
    s_preloadComplete = SV_DemoSP_GetPreloadZonesState();
    goto LABEL_16;
  }
  if ( v2 )
  {
    if ( !s_preloadComplete )
    {
      if ( !level.preloadedFiles[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 66, ASSERT_TYPE_ASSERT, "(level.preloadedFiles[0][0] != '\\0')", (const char *)&queryFormat, "level.preloadedFiles[0][0] != '\\0'") )
        __debugbreak();
      preloadedFiles = level.preloadedFiles;
      v5 = 0;
      while ( !*(_BYTE *)preloadedFiles || DB_Zones_IsPreloadZoneName(level.preloadedFiles[(__int64)v5]) && DB_Zones_IsFinishedLoading(level.preloadedFiles[(__int64)v5]) )
      {
        ++v5;
        ++preloadedFiles;
        if ( v5 >= 8 )
        {
          s_preloadComplete = 1;
          break;
        }
      }
    }
LABEL_16:
    if ( v2 )
      goto LABEL_20;
  }
  if ( s_preloadComplete && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 299, ASSERT_TYPE_ASSERT, "(!s_preloadComplete)", (const char *)&queryFormat, "!s_preloadComplete") )
    __debugbreak();
LABEL_20:
  CL_PreloadSP_DelayStreamingYield();
  if ( !SV_IsDemoPlaying() )
    SV_DemoSP_RecordPreloadZonesState(s_preloadComplete);
  LOBYTE(v3) = s_preloadComplete;
  Scr_AddBool(scrContext, v3);
}

/*
==============
Scr_PreloadZones
==============
*/
void Scr_PreloadZones(scrContext_t *scrContext)
{
  char (*preloadedFiles)[64]; 
  int v3; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  signed int v6; 
  unsigned int ArrayVariable; 
  scr_string_t *VariableValueAddress; 
  const char *v9; 
  char (*v10)[64]; 
  const char *v11; 
  const char *String; 
  char p_destString[256]; 

  preloadedFiles = level.preloadedFiles;
  do
  {
    if ( *(_BYTE *)preloadedFiles )
      Scr_Error(COM_ERR_2320, scrContext, "You have already preloaded a set of fastfiles. You can only issue one PreloadZones() at a time.\n");
    ++preloadedFiles;
  }
  while ( (__int64)preloadedFiles < (__int64)&level.entFxMarkClearRequests );
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_2321, scrContext, "PreloadZones should be called with one parameter. A string, or an array.\n");
  if ( Sys_IsMainThread() && level.initializing && !SV_IsDemoPlaying() )
    Scr_Error(COM_ERR_2322, scrContext, "Cannot use preloadzones() in the first frame of a level script. Wait at least a frame after your start point.");
  v3 = 0;
  if ( Scr_GetType(scrContext, 0) == VAR_POINTER && Scr_GetPointerType(scrContext, 0) == VAR_ARRAY )
  {
    ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
    ArraySize = GetArraySize(scrContext, ArrayObject);
    v6 = 0;
    if ( ArraySize )
    {
      do
      {
        ArrayVariable = GetArrayVariable(scrContext, ArrayObject, v6);
        if ( GetValueType(scrContext, ArrayVariable) != VAR_STRING )
          Scr_ParamError(COM_ERR_2323, scrContext, v6, "All array elements need to be strings.");
        VariableValueAddress = (scr_string_t *)GetVariableValueAddress(scrContext, ArrayVariable);
        v9 = SL_ConvertToString(*VariableValueAddress);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 211, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
          __debugbreak();
        if ( level.preloadedFiles[(__int64)v6][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 33, ASSERT_TYPE_ASSERT, "(level.preloadedFiles[index][0] == '\\0')", (const char *)&queryFormat, "level.preloadedFiles[index][0] == '\\0'") )
          __debugbreak();
        Core_strcpy(level.preloadedFiles[(__int64)v6++], 0x40ui64, v9);
      }
      while ( v6 < ArraySize );
      v3 = 0;
    }
  }
  else
  {
    String = Scr_GetString(scrContext, 0);
    if ( level.preloadedFiles[0][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 33, ASSERT_TYPE_ASSERT, "(level.preloadedFiles[index][0] == '\\0')", (const char *)&queryFormat, "level.preloadedFiles[index][0] == '\\0'") )
      __debugbreak();
    Core_strcpy(level.preloadedFiles[0], 0x40ui64, String);
  }
  p_destString[0] = 0;
  ntl::internal::string_assign(p_destString, 0x100ui64, "preloadzones");
  v10 = level.preloadedFiles;
  do
  {
    if ( !*(_BYTE *)v10 )
      break;
    ntl::internal::string_append(p_destString, 0x100ui64, " ");
    v11 = level.preloadedFiles[(__int64)v3];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\string\\string_storage.h", 41, ASSERT_TYPE_ASSERT, "( p_constString != 0 )", (const char *)&queryFormat, "p_constString != NULL") )
      __debugbreak();
    ntl::internal::string_append(p_destString, 0x100ui64, v11);
    ++v3;
    ++v10;
  }
  while ( v3 < 8 );
  if ( v3 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_preload_sp.cpp", 58, ASSERT_TYPE_ASSERT, "(i > 0)", "%s\n\tAt least one zone needs to be specified to be preloaded", "i > 0") )
    __debugbreak();
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, p_destString);
}

/*
==============
Scr_WasPreloadZonesStarted
==============
*/
void Scr_WasPreloadZonesStarted(scrContext_t *scrContext)
{
  if ( Scr_GetNumParam(scrContext) )
    Scr_Error(COM_ERR_2324, scrContext, "Incorrect WasPreloadZonesStarted() call.");
  Scr_AddBool(scrContext, level.preloadedFiles[0][0] != 0);
}

