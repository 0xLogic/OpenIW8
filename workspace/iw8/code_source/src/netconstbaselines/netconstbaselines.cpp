/*
==============
NetConstBaselines_GetEntity
==============
*/

const entityState_t *__fastcall NetConstBaselines_GetEntity(const __int16 entNum)
{
  return ?NetConstBaselines_GetEntity@@YAPEBUentityState_t@@F@Z(entNum);
}

/*
==============
NetConstBaselines_ClearBaselineData
==============
*/

void NetConstBaselines_ClearBaselineData(void)
{
  ?NetConstBaselines_ClearBaselineData@@YAXXZ();
}

/*
==============
SV_NetConstBaselines_GetBaselineValidState
==============
*/

bool __fastcall SV_NetConstBaselines_GetBaselineValidState()
{
  return ?SV_NetConstBaselines_GetBaselineValidState@@YA_NXZ();
}

/*
==============
NetConstBaselines_ReadBaselineDataFromFile
==============
*/

bool __fastcall NetConstBaselines_ReadBaselineDataFromFile(const char *mapName, const char *gameType)
{
  return ?NetConstBaselines_ReadBaselineDataFromFile@@YA_NPEBD0@Z(mapName, gameType);
}

/*
==============
NetConstBaselines_GetEntityArrayCountUsed
==============
*/

unsigned int __fastcall NetConstBaselines_GetEntityArrayCountUsed()
{
  return ?NetConstBaselines_GetEntityArrayCountUsed@@YAIXZ();
}

/*
==============
SV_NetConstBaselines_SetBaselineValidState
==============
*/

void __fastcall SV_NetConstBaselines_SetBaselineValidState(bool IsValid)
{
  ?SV_NetConstBaselines_SetBaselineValidState@@YAX_N@Z(IsValid);
}

/*
==============
NetConstBaselines_InitDvars
==============
*/

void NetConstBaselines_InitDvars(void)
{
  ?NetConstBaselines_InitDvars@@YAXXZ();
}

/*
==============
NetConstBaselines_WriteBaselineDataToFile
==============
*/

void __fastcall NetConstBaselines_WriteBaselineDataToFile(unsigned int entityCount, entityState_t *noDeltaEntityStates, const char *mapName, const char *gameType)
{
  ?NetConstBaselines_WriteBaselineDataToFile@@YAXIPEAUentityState_t@@PEBD1@Z(entityCount, noDeltaEntityStates, mapName, gameType);
}

/*
==============
NetConstBaselines_ClearBaselineData
==============
*/
void NetConstBaselines_ClearBaselineData(void)
{
  s_constBaselineEntitesCount = 0;
}

/*
==============
NetConstBaselines_GetEntity
==============
*/
entityState_t *NetConstBaselines_GetEntity(const __int16 entNum)
{
  __int64 v2; 
  int v4; 
  int v5; 

  if ( (unsigned __int16)entNum >= 0x800u )
  {
    v5 = 2048;
    v4 = entNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 76, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( s_constBaselineEntitesIndex ) ) + 0 ) )", "entNum doesn't index ARRAY_COUNT( s_constBaselineEntitesIndex )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = s_constBaselineEntitesIndex[entNum];
  if ( (unsigned int)v2 >= s_constBaselineEntitesCount )
    return 0i64;
  else
    return &s_constBaselineEntities.ents[v2];
}

/*
==============
NetConstBaselines_GetEntityArrayCountUsed
==============
*/
__int64 NetConstBaselines_GetEntityArrayCountUsed()
{
  return s_constBaselineEntitesCount;
}

/*
==============
NetConstBaselines_InitDvars
==============
*/
void NetConstBaselines_InitDvars(void)
{
  Dvar_BeginPermanentRegistration();
  DCONST_DVARBOOL_bg_usePrecomputedBaselineData = Dvar_RegisterBool("bg_usePrecomputedBaselineData", 0, 0x40004u, "Controls whether baselines should be used.");
  dev_verifyBaselineFile = Dvar_RegisterBool("LRSRTOOLNL", 0, 0, "Dev only - if enabled instructs the game to throw a com error if the baseline file doesn't exist, is the wrong version, or the wrong entity count for the current map.");
  Dvar_EndPermanentRegistration();
}

/*
==============
NetConstBaselines_ReadBaselineDataFromFile
==============
*/
char NetConstBaselines_ReadBaselineDataFromFile(const char *mapName, const char *gameType)
{
  unsigned int v4; 
  unsigned int *v5; 
  __int64 v6; 
  unsigned __int8 ActiveGameMode; 
  const char *v8; 
  const RawFile *rawfile; 
  unsigned int len; 
  unsigned __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  char result; 
  __int64 StaticEntitiesMaxCount; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int number; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  char *fmt; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  char dest[64]; 

  if ( !mapName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 151, ASSERT_TYPE_ASSERT, "(mapName)", (const char *)&queryFormat, "mapName") )
    __debugbreak();
  if ( !gameType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 152, ASSERT_TYPE_ASSERT, "(gameType)", (const char *)&queryFormat, "gameType") )
    __debugbreak();
  v4 = 0;
  v5 = s_constBaselineEntitesIndex;
  v6 = 128i64;
  do
  {
    *(_QWORD *)v5 = -1i64;
    *((_QWORD *)v5 + 1) = -1i64;
    *((_QWORD *)v5 + 2) = -1i64;
    v5 += 16;
    *((_QWORD *)v5 - 5) = -1i64;
    *((_QWORD *)v5 - 4) = -1i64;
    *((_QWORD *)v5 - 3) = -1i64;
    *((_QWORD *)v5 - 2) = -1i64;
    *((_QWORD *)v5 - 1) = -1i64;
    --v6;
  }
  while ( v6 );
  if ( Com_FrontEndScene_IsActive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 172, ASSERT_TYPE_ASSERT, "(!Com_FrontEndScene_IsActive())", "%s\n\tShould not read const baselines for front-end scene", "!Com_FrontEndScene_IsActive()") )
    __debugbreak();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( ActiveGameMode == 2 )
  {
    v8 = "mp/constBaselines";
LABEL_16:
    Com_sprintf(dest, 0x40ui64, "%s/bl_%s_%s.%s", v8, mapName, gameType, "bin");
    rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, dest, 1).rawfile;
    if ( !rawfile || DB_IsXAssetDefault(ASSET_TYPE_RAWFILE, dest) )
    {
      s_constBaselineEntitesCount = 0;
      Com_PrintWarning(16, "Missing precomputed constBaseline data file [%s] for map [%s]!\n", dest, mapName);
      if ( Sys_IsMainThread() && dev_verifyBaselineFile && dev_verifyBaselineFile->current.enabled )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EFE7E0, 663i64, dest, mapName);
      return 0;
    }
    else
    {
      len = rawfile->len;
      if ( len > 0x10 && (v11 = len - 16, v12 = ((len - 16) * (unsigned __int128)0x842108421084211ui64) >> 64, v13 = (v12 + ((v11 - v12) >> 1)) >> 7, v11 == 248 * v13) )
      {
        if ( len <= 0x1E478 )
        {
          DB_GetRawBuffer(rawfile, (char *)&s_constBaselineEntities, 124024);
          if ( s_constBaselineEntities.const_baseline_version == 519 )
          {
            s_constBaselineEntitesCount = v11 / 0xF8;
            StaticEntitiesMaxCount = ComCharacterLimits::GetStaticEntitiesMaxCount();
            LODWORD(v16) = 0;
            if ( StaticEntitiesMaxCount != s_constBaselineEntities.character_limit )
            {
              v16 = (unsigned int)StaticEntitiesMaxCount - s_constBaselineEntities.character_limit;
              if ( (unsigned __int64)(v16 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v16, "signed", v16) )
                __debugbreak();
              Com_Printf(16, "Adjusting const baseline entities indices by %d: currentCharacterLimit %lld != const baseline characterLimit %lld\n", (unsigned int)v16, StaticEntitiesMaxCount, s_constBaselineEntities.character_limit);
            }
            v17 = s_constBaselineEntitesCount;
            if ( s_constBaselineEntitesCount )
            {
              do
              {
                v18 = v4;
                number = s_constBaselineEntities.ents[v18].number;
                v20 = number + v16;
                if ( number + (unsigned int)v16 + 0x8000 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)(number + v16), "signed", v20) )
                  __debugbreak();
                v21 = *(_DWORD *)&s_constBaselineEntities.ents[v18].clientLinkInfo & 0x7FF;
                v22 = v21;
                if ( v21 > s_constBaselineEntities.character_limit )
                  v22 = v21 + v16;
                LODWORD(v27) = v22;
                LODWORD(v26) = *(_DWORD *)&s_constBaselineEntities.ents[v18].clientLinkInfo & 0x7FF;
                LODWORD(v25) = s_constBaselineEntities.ents[v18].eType;
                LODWORD(fmt) = (__int16)(number + v16);
                Com_Printf(16, "[%d] Read no-delta entity %u->%u of type %u (parentId %u->%u)\n", v4, number, fmt, v25, v26, v27);
                *(_DWORD *)&s_constBaselineEntities.ents[v18].clientLinkInfo &= 0xFFFFF800;
                *(_DWORD *)&s_constBaselineEntities.ents[v18].clientLinkInfo |= v22 & 0x7FF;
                s_constBaselineEntities.ents[v18].number = v20;
                if ( (__int16)v20 < StaticEntitiesMaxCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 282, ASSERT_TYPE_ASSERT, "(s_constBaselineEntities.ents[i].number >= currentCharacterLimit)", (const char *)&queryFormat, "s_constBaselineEntities.ents[i].number >= currentCharacterLimit") )
                  __debugbreak();
                if ( (unsigned __int16)v20 >= 0x800u )
                {
                  LODWORD(v26) = 2048;
                  LODWORD(v25) = (__int16)v20;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( newEntNum ) < (unsigned)( ( sizeof( *array_counter( s_constBaselineEntitesIndex ) ) + 0 ) )", "newEntNum doesn't index ARRAY_COUNT( s_constBaselineEntitesIndex )\n\t%i not in [0, %i)", v25, v26) )
                    __debugbreak();
                }
                v17 = s_constBaselineEntitesCount;
                s_constBaselineEntitesIndex[(__int16)v20] = v4++;
              }
              while ( v4 < (unsigned int)v17 );
            }
            Com_Printf(16, "Read completed file %s [%d entities, %zu bytes per entity]\n", dest, v17, 0xF8ui64);
            return 1;
          }
          else
          {
            Com_PrintWarning(1, "constBaseline file %s has wrong CONST_BASELINE_VERSION, expected %i but got %lld, ignoring file!\n", dest, 519i64, s_constBaselineEntities.const_baseline_version);
            return 0;
          }
        }
        else
        {
          Com_PrintWarning(1, "constBaseline file %s is larger than our local buffer can hold (file entities = %zu local max = %zu), ignoring file!\n", dest, v13, 0x1F4ui64);
          result = 0;
          s_constBaselineEntitesCount = 0;
        }
      }
      else
      {
        Com_PrintWarning(1, "constBaseline file %s appears corrupt, ignoring file (len = %d).\n", dest, len);
        result = 0;
        s_constBaselineEntitesCount = 0;
      }
    }
    return result;
  }
  if ( ActiveGameMode == 3 )
  {
    v8 = "cp/constBaselines";
    goto LABEL_16;
  }
  LODWORD(v24) = ActiveGameMode;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 185, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Game Mode %hhu not supported for const baselines\n", v24) )
    __debugbreak();
  s_constBaselineEntitesCount = 0;
  return 0;
}

/*
==============
NetConstBaselines_WriteBaselineDataToFile
==============
*/
void NetConstBaselines_WriteBaselineDataToFile(unsigned int entityCount, entityState_t *noDeltaEntityStates, const char *mapName, const char *gameType)
{
  int v8; 
  Online_ErrorReporting *InstancePtr; 
  const char *v10; 
  fileHandle_t *v11; 
  unsigned int i; 
  float v13; 
  char *fmt; 
  char *fmta; 
  __int64 v16; 
  __int64 buffer; 
  __int64 m_staticEntityCount; 
  char dest[8]; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 

  v8 = Sys_Milliseconds();
  if ( !noDeltaEntityStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\netconstbaselines\\netconstbaselines.cpp", 323, ASSERT_TYPE_ASSERT, "(noDeltaEntityStates)", (const char *)&queryFormat, "noDeltaEntityStates") )
    __debugbreak();
  if ( entityCount > 0x1F4 )
  {
    Com_PrintWarning(16, "Clamping baseline to MAX_ENTITIES_CONST_BASELINE (%zu) due to nextNoDeltaEntity = %d, this will result in non optimal network baselines!\n", 0x1F4ui64, entityCount);
    entityCount = 500;
    InstancePtr = Online_ErrorReporting::GetInstancePtr();
    Online_ErrorReporting::ReportError(InstancePtr, COUNT, NULL);
  }
  *(_QWORD *)dest = 0i64;
  v20 = 0i64;
  v21 = 0i64;
  v22 = 0i64;
  v23 = 0i64;
  v24 = 0i64;
  v25 = 0i64;
  v26 = 0i64;
  Com_sprintf(dest, 0x40ui64, "/main/bl_%s_%s_%s.%s", "LITTLE_END", mapName, gameType, "bin");
  v11 = FS_FOpenFileWrite((fileHandle_t *)dest, v10);
  if ( v11 == (fileHandle_t *)-1i64 )
  {
    Com_Printf(16, "Generating constbaseline data file %s FAILED.\n", dest);
  }
  else
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v16) = ComCharacterLimits::ms_gameData.m_staticEntityCount;
    LODWORD(fmt) = 519;
    Com_Printf(16, "Generating constbaseline data file %s due to sv_generateConstBaselines being set, map has %d entities, CONST_BASELINE_VERSION: %d, characterLimit: %d.\n", dest, entityCount, fmt, v16);
    buffer = 519i64;
    FS_Write(&buffer, 8ui64, (fileHandle_t)v11);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_staticEntityCount = ComCharacterLimits::ms_gameData.m_staticEntityCount;
    FS_Write(&m_staticEntityCount, 8ui64, (fileHandle_t)v11);
    for ( i = 0; i < entityCount; ++noDeltaEntityStates )
    {
      LODWORD(fmta) = noDeltaEntityStates->eType;
      Com_Printf(16, "[%d] Wrote no-delta entity %u of type %u\n", i, (unsigned int)noDeltaEntityStates->number, fmta);
      FS_Write(noDeltaEntityStates, 0xF8ui64, (fileHandle_t)v11);
      ++i;
    }
    FS_Flush((fileHandle_t)v11);
    FS_FCloseFile((fileHandle_t)v11);
    v13 = (float)(unsigned int)(Sys_Milliseconds() - v8);
    Com_Printf(16, "Generating constbaseline data file %s done finished %d entities in %f seconds.\n", dest, entityCount, (float)(v13 * 0.001));
  }
}

/*
==============
SV_NetConstBaselines_GetBaselineValidState
==============
*/
_BOOL8 SV_NetConstBaselines_GetBaselineValidState()
{
  return s_constBaselineValidityCheckPassed;
}

/*
==============
SV_NetConstBaselines_SetBaselineValidState
==============
*/
void SV_NetConstBaselines_SetBaselineValidState(bool IsValid)
{
  s_constBaselineValidityCheckPassed = IsValid;
}

