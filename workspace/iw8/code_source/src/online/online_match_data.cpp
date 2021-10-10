/*
==============
Online_MatchData_Read
==============
*/

void __fastcall Online_MatchData_Read(MemoryFile *memFile)
{
  ?Online_MatchData_Read@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Online_MatchData_Load
==============
*/

bool __fastcall Online_MatchData_Load()
{
  return ?Online_MatchData_Load@@YA_NXZ();
}

/*
==============
Online_MatchData_Send_Internal
==============
*/

void __fastcall Online_MatchData_Send_Internal(const int controllerIndex, const unsigned __int64 id, const DDLContext *buffer)
{
  ?Online_MatchData_Send_Internal@@YAXH_KPEBUDDLContext@@@Z(controllerIndex, id, buffer);
}

/*
==============
Online_MatchData_Init
==============
*/

void Online_MatchData_Init(void)
{
  ?Online_MatchData_Init@@YAXXZ();
}

/*
==============
Online_MatchData_FlagHostMigration
==============
*/

void Online_MatchData_FlagHostMigration(void)
{
  ?Online_MatchData_FlagHostMigration@@YAXXZ();
}

/*
==============
Online_MatchData_RecordBreadcrumbData
==============
*/

void __fastcall Online_MatchData_RecordBreadcrumbData(gentity_s *player, BG_SynchronizedPlayerInfo *playerInfo, unsigned int timeIntoMatchMilliseconds, int currentLifeIndex, bool isADS)
{
  ?Online_MatchData_RecordBreadcrumbData@@YAXPEAUgentity_s@@PEAUBG_SynchronizedPlayerInfo@@IH_N@Z(player, playerInfo, timeIntoMatchMilliseconds, currentLifeIndex, isADS);
}

/*
==============
Online_MatchData_Write
==============
*/

void __fastcall Online_MatchData_Write(MemoryFile *memFile)
{
  ?Online_MatchData_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Online_MatchData_Send
==============
*/

void __fastcall Online_MatchData_Send(const int controllerIndex, const unsigned __int64 id, const DDLContext *buffer)
{
  ?Online_MatchData_Send@@YAXH_KPEBUDDLContext@@@Z(controllerIndex, id, buffer);
}

/*
==============
Online_MatchData_GetMotionState
==============
*/

unsigned __int8 __fastcall Online_MatchData_GetMotionState(playerState_s *ps)
{
  return ?Online_MatchData_GetMotionState@@YAEAEAUplayerState_s@@@Z(ps);
}

/*
==============
Online_MatchData_RecordBreadcrumbCount
==============
*/

void Online_MatchData_RecordBreadcrumbCount(void)
{
  ?Online_MatchData_RecordBreadcrumbCount@@YAXXZ();
}

/*
==============
Online_MatchData_FlagHostMigration
==============
*/

void __fastcall Online_MatchData_FlagHostMigration(double _XMM0_8)
{
  unsigned __int8 ActiveGameMode; 
  unsigned int RawHash; 
  DDLState toState; 
  DDLState result; 

  if ( s_matchdataDef )
  {
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    if ( BG_GameInterface_GameModeIsMP((GameModeType)ActiveGameMode) )
    {
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&toState.member = _XMM0;
      toState.isValid = 0;
      toState.offset = 0;
      toState.arrayIndex = -1;
      DDL_GetRootState(&result, s_matchdataDef);
      RawHash = j_SL_GetRawHash(scr_const.hostMigrationOccurred);
      if ( DDL_MoveToNameByHash(&result, &toState, RawHash, NULL) )
        DDL_SetBool(&toState, &s_matchdataContext, 1);
    }
  }
}

/*
==============
Online_MatchData_GetMotionState
==============
*/
__int64 Online_MatchData_GetMotionState(playerState_s *ps)
{
  float v1; 
  float v2; 
  unsigned __int8 v3; 
  GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> pm_flags; 

  v1 = (float)(ps->velocity.v[0] * ps->velocity.v[0]) + (float)(ps->velocity.v[1] * ps->velocity.v[1]);
  v2 = ps->velocity.v[2] * ps->velocity.v[2];
  pm_flags = ps->pm_flags;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 0) )
    v3 = 2;
  else
    v3 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 1u);
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 0x1Du) )
    v3 |= 0x80u;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 0x1Eu) )
    v3 |= 0x40u;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 0x13u) )
    v3 |= 0x10u;
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm_flags, ACTIVE, 0x14u) )
  {
    v3 |= 8u;
  }
  else if ( (float)(v1 + v2) >= 225.0 )
  {
    v3 |= 4u;
  }
  return v3;
}

/*
==============
Online_MatchData_Init
==============
*/
void Online_MatchData_Init(void)
{
  memset_0(&matchDataGlob, 0, sizeof(matchDataGlob));
}

/*
==============
Online_MatchData_Load
==============
*/
char Online_MatchData_Load()
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const DDLDef *Asset; 

  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->matchDataDef[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
    s_matchdataDef = Asset;
    if ( Asset )
    {
      if ( DDL_ResetContext(SvGameGlobalsMP->matchData, 2048, Asset, &s_matchdataContext, NULL, NULL) )
      {
        s_breadcrumbIndex = 0;
        return 1;
      }
      else
      {
        Com_Printf(16, "Online_MatchData_Load: DDL_ResetContext failed!\n");
        return 0;
      }
    }
    else
    {
      Com_Printf(16, "Online_MatchData_Load: loading of matchdata ddl failed!\n");
      return 0;
    }
  }
  else
  {
    s_matchdataDef = NULL;
    Com_Printf(16, "Online_MatchData_Load: sv->matchDataDef is not set!\n");
    return 0;
  }
}

/*
==============
Online_MatchData_Read
==============
*/
void Online_MatchData_Read(MemoryFile *memFile)
{
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 197, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 4ui64, &p);
  s_breadcrumbIndex = p;
}

/*
==============
Online_MatchData_RecordBreadcrumbCount
==============
*/

void __fastcall Online_MatchData_RecordBreadcrumbCount(double _XMM0_8)
{
  SvGameGlobalsMP *SvGameGlobalsMP; 
  const dvar_t *v3; 
  const DDLDef *Asset; 
  unsigned int RawHash; 
  DDLState toState; 
  DDLState fromState; 
  DDLContext ddlContext; 
  DDLState result; 

  fromState.isValid = 0;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  fromState.offset = 0;
  *(_OWORD *)&fromState.member = _XMM0;
  toState.isValid = 0;
  toState.offset = 0;
  *(_OWORD *)&toState.member = _XMM0;
  fromState.arrayIndex = -1;
  toState.arrayIndex = -1;
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  if ( SvGameGlobalsMP->matchDataDef[0] )
  {
    Asset = Com_DDL_LoadAsset(SvGameGlobalsMP->matchDataDef);
    Com_DDL_CreateContext(SvGameGlobalsMP->matchData, 2048, Asset, &ddlContext, NULL, NULL);
    fromState = *DDL_GetRootState(&result, Asset);
    RawHash = j_SL_GetRawHash(scr_const.breadcrumb_count);
    if ( DDL_MoveToNameByHash(&fromState, &toState, RawHash, NULL) )
    {
      if ( DDL_GetType(&toState) == DDL_UINT_TYPE )
        DDL_SetUInt(&toState, &ddlContext, s_breadcrumbIndex);
      else
        Com_PrintError(15, "Online_MatchData_RecordBreadcrumbData - Invalid match data definition specified.breadcrumb_count must be a uint.\n");
    }
    else
    {
      Com_PrintError(15, "Online_MatchData_RecordBreadcrumbData - Invalid match data definition specified. Must contain a breadcrumb_count field.\n");
    }
  }
  else
  {
    v3 = DVARBOOL_online_matchdata_enabled;
    if ( !DVARBOOL_online_matchdata_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_matchdata_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      Com_PrintError(15, "Online_MatchData_RecordBreadcrumbData - no matchdata def specified.\n");
  }
}

/*
==============
Online_MatchData_RecordBreadcrumbData
==============
*/
void Online_MatchData_RecordBreadcrumbData(gentity_s *player, BG_SynchronizedPlayerInfo *playerInfo, unsigned int timeIntoMatchMilliseconds, int currentLifeIndex)
{
  ;
}

/*
==============
Online_MatchData_Send
==============
*/

void __fastcall Online_MatchData_Send(const int controllerIndex, const unsigned __int64 id, const DDLContext *buffer)
{
  Online_MatchData_Send_Internal(controllerIndex, id, buffer);
}

/*
==============
Online_MatchData_Send_Internal
==============
*/
void Online_MatchData_Send_Internal(const int controllerIndex, const unsigned __int64 id, const DDLContext *buffer)
{
  int v5; 
  const dvar_t *v6; 
  char ActiveGameMode; 
  const XUID *Xuid; 
  int len; 
  void *buff; 
  unsigned __int64 UniversalId; 
  XUID v12; 
  XUID result; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 79, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !buffer->buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 80, ASSERT_TYPE_ASSERT, "(buffer->buff)", (const char *)&queryFormat, "buffer->buff") )
    __debugbreak();
  if ( buffer->len > 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 81, ASSERT_TYPE_ASSERT, "(buffer->len <= (2 * (1024)))", (const char *)&queryFormat, "buffer->len <= MATCH_DATA_BUFFER_SIZE") )
    __debugbreak();
  if ( matchdata_ddlactive->current.enabled )
  {
    if ( buffer->def->byteSize > buffer->len && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 87, ASSERT_TYPE_ASSERT, "(buffer->def->byteSize <= buffer->len)", (const char *)&queryFormat, "buffer->def->byteSize <= buffer->len") )
      __debugbreak();
    v5 = MemFile_CompressWithZLib((const unsigned __int8 *)buffer->buff, buffer->def->byteSize, matchDataGlob.matchData, 2048);
    matchDataGlob.size = v5;
    if ( v5 <= 0 )
    {
      memset_0(&matchDataGlob, 0, sizeof(matchDataGlob));
      Com_PrintWarning(16, "Problem compressing match data\n");
    }
    else
    {
      Com_Printf(25, "Uploading matchdata - %d bytes compressed to %d bytes.\n", (unsigned int)buffer->def->byteSize, (unsigned int)v5);
      v6 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      if ( v6->current.enabled && Live_IsSignedIn(controllerIndex) )
      {
        XUID::XUID(&v12);
        ActiveGameMode = Com_GameMode_GetActiveGameMode();
        Xuid = Live_GetXuid(&result, controllerIndex);
        XUID::operator=(&v12, Xuid);
        len = buffer->len;
        buff = buffer->buff;
        UniversalId = XUID::GetUniversalId(&v12);
        if ( ActiveGameMode == 3 )
        {
          if ( DLog_RecordBinary(UniversalId, "dlog_event_cp_matchdata", buff, len, DLOG_SERIALIZATION_FORMAT_DDL4) )
            return;
          goto LABEL_22;
        }
        if ( !DLog_RecordBinary(UniversalId, "dlog_event_matchdata", buff, len, DLOG_SERIALIZATION_FORMAT_DDL4) )
LABEL_22:
          Com_PrintWarning(16, "Failed to record binary matchdata blob\n");
      }
    }
  }
}

/*
==============
Online_MatchData_Write
==============
*/
void Online_MatchData_Write(MemoryFile *memFile)
{
  unsigned int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_match_data.cpp", 189, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  p = s_breadcrumbIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
}

