/*
==============
Scr_SetCinematicMotionOverride
==============
*/

void Scr_SetCinematicMotionOverride(void)
{
  ?Scr_SetCinematicMotionOverride@@YAXXZ();
}

/*
==============
Scr_ClearCinematicMotionOverride
==============
*/

void Scr_ClearCinematicMotionOverride(void)
{
  ?Scr_ClearCinematicMotionOverride@@YAXXZ();
}

/*
==============
SV_Cmds_CheckMapCmdValid
==============
*/

bool __fastcall SV_Cmds_CheckMapCmdValid(const char *map)
{
  return ?SV_Cmds_CheckMapCmdValid@@YA_NPEBD@Z(map);
}

/*
==============
SV_Cmds_RegisterCommonCommands
==============
*/

void SV_Cmds_RegisterCommonCommands(void)
{
  ?SV_Cmds_RegisterCommonCommands@@YAXXZ();
}

/*
==============
SV_Cmds_DumpHudElemsCmd
==============
*/

void SV_Cmds_DumpHudElemsCmd(void)
{
  G_HudElem_DumpHudElems();
}

/*
==============
SV_StringUsage_f
==============
*/

void SV_StringUsage_f(void)
{
  MT_DumpTree();
}

/*
==============
SV_StringUsageCSV_f
==============
*/

void SV_StringUsageCSV_f(void)
{
  MT_DumpTreeToCSV();
}

/*
==============
SV_ScriptDisassembleAddress_f
==============
*/
void SV_ScriptDisassembleAddress_f()
{
  const char *v0; 
  const char *v1; 
  scrContext_t *v2; 

  if ( SV_Cmd_Argc() >= 2 )
  {
    v0 = SV_Cmd_Argv(1);
    v1 = (const char *)I_atoui64_hex(v0);
    v2 = ScriptContext_Server();
    Scr_DisassembleAddress(v2, v1);
  }
  else
  {
    Com_Printf(0, " Usage: SV_ScriptDisassembleAddress_f <hexaddress>.\n");
  }
}

/*
==============
SV_ScriptDisassembleFunction_f
==============
*/
void SV_ScriptDisassembleFunction_f()
{
  scrContext_t *v0; 
  const char *v1; 
  const char *v2; 
  const char *v3; 

  if ( SV_Cmd_Argc() >= 2 )
  {
    v0 = ScriptContext_Server();
    if ( SV_Cmd_Argc() >= 3 )
    {
      v2 = SV_Cmd_Argv(2);
      v3 = SV_Cmd_Argv(1);
      Scr_DisassembleFunction(v0, v3, v2);
    }
    else
    {
      v1 = SV_Cmd_Argv(1);
      Scr_DisassembleFunction(v0, NULL, v1);
    }
  }
  else
  {
    Com_Printf(0, " Usage: SV_ScriptDisassembleFunction_f <filename> <funcname> or SV_ScriptDisassembleFunction_f <funcname>.\n");
  }
}

/*
==============
SV_ScriptClassifyFunctions_f
==============
*/
void SV_ScriptClassifyFunctions_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_ClassifyFunctions(v0);
}

/*
==============
SV_ScriptFindUnusedVars_f
==============
*/
void SV_ScriptFindUnusedVars_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_FindUnusedVariables(v0);
}

/*
==============
SV_Cmds_DevmapCmd
==============
*/
__int64 SV_Cmds_DevmapCmd()
{
  SvGameModeApplication *ActiveServerApplication; 

  SV_Cmds_DevmapCmd_CheckGameMode(1u);
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  return ((__int64 (__fastcall *)(SvGameModeApplication *))ActiveServerApplication->DevmapCmd)(ActiveServerApplication);
}

/*
==============
SV_Cmds_DevmapDediCmd
==============
*/
__int64 SV_Cmds_DevmapDediCmd()
{
  SvGameModeApplication *ActiveServerApplication; 

  SV_Cmds_DevmapCmd_CheckGameMode(1u);
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  return ((__int64 (__fastcall *)(SvGameModeApplication *))ActiveServerApplication->DevmapDediCmd)(ActiveServerApplication);
}

/*
==============
SV_Cmds_DevJoinCmd
==============
*/
void SV_Cmds_DevJoinCmd()
{
  unsigned __int8 LUIModeTransition; 
  unsigned __int8 ActiveGameMode; 
  SvGameModeApplication *ActiveServerApplication; 
  char buffer[64]; 
  char hostName[1024]; 

  SV_Cmd_ArgvBuffer(1, buffer, 0x40ui64);
  SV_Cmd_ArgvBuffer(2, hostName, 0x400ui64);
  Com_GameMode_DevSetDesiredGameModeStr(buffer);
  LUIModeTransition = Com_GameMode_GetLUIModeTransition();
  CL_Mgr_InitialiseDevClients((GameModeType)LUIModeTransition);
  Com_GameMode_UpdateGameMode();
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  if ( !BG_GameInterface_GameModeIsOnline((GameModeType)ActiveGameMode) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_ccmds.cpp", 215, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() ))", "%s\n\tMP or CP game mode need to be set for devjoin, soemthing went wrong with the activation. usage: \"+devjoin <mode> <hostname>\" where modes is mp or cp and hostname is the name in the server browser", "BG_GameInterface_GameModeIsOnline( Com_GameMode_GetActiveGameMode() )") )
    __debugbreak();
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  ActiveServerApplication->DevJoinCmd(ActiveServerApplication, hostName);
  CL_DevJoin_Init(hostName);
  CL_DevJoin_Start();
}

/*
==============
Scr_PrintScriptCanonicalStringUsage_f
==============
*/

void Scr_PrintScriptCanonicalStringUsage_f(void)
{
  Scr_PrintScriptCanonicalStringUsage();
}

/*
==============
SV_ScriptUsage_f
==============
*/
void SV_ScriptUsage_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_DumpScriptThreads(v0, 0);
}

/*
==============
SV_ScriptVarUsage_f
==============
*/
void SV_ScriptVarUsage_f()
{
  int v0; 
  int minCount; 
  bool v2; 
  bool parentVars; 
  bool childVars; 
  bool notifyVars; 
  bool v6; 
  bool lineSort; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  const scrContext_t *v22; 
  bool functionSummary; 
  const char *functionName; 
  const char *fileName; 
  char dest[272]; 
  char v27[272]; 

  v0 = 1;
  minCount = 0;
  v2 = 0;
  fileName = NULL;
  functionSummary = 0;
  parentVars = 1;
  functionName = NULL;
  childVars = 1;
  notifyVars = 1;
  v6 = 0;
  lineSort = 0;
  if ( SV_Cmd_Argc() <= 1 )
  {
LABEL_27:
    v22 = ScriptContext_Server();
    Scr_DumpScriptVariables(v22, 1, v6, v2, functionSummary, lineSort, fileName, functionName, minCount, parentVars, childVars, notifyVars);
    return;
  }
  while ( 1 )
  {
    v8 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-spreadsheet", v8) )
      goto LABEL_26;
    v9 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-summary", v9) )
    {
      v6 = 1;
      goto LABEL_26;
    }
    v10 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-lineSort", v10) )
    {
      lineSort = 1;
      goto LABEL_26;
    }
    v11 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-functionSummary", v11) )
    {
      functionSummary = 1;
      goto LABEL_26;
    }
    v12 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-total", v12) )
    {
      v2 = 1;
      goto LABEL_26;
    }
    v13 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-filename", v13) )
    {
      if ( ++v0 >= SV_Cmd_Argc() )
        goto LABEL_28;
      v14 = SV_Cmd_Argv(v0);
      Core_strcpy_truncate(dest, 0x104ui64, v14);
      fileName = dest;
      goto LABEL_26;
    }
    v15 = SV_Cmd_Argv(v0);
    if ( !I_stricmp("-function", v15) )
    {
      if ( ++v0 >= SV_Cmd_Argc() )
        goto LABEL_28;
      v16 = SV_Cmd_Argv(v0);
      Core_strcpy_truncate(v27, 0x104ui64, v16);
      functionName = v27;
      goto LABEL_26;
    }
    v17 = SV_Cmd_Argv(v0);
    if ( I_stricmp("-minCount", v17) )
      break;
    if ( ++v0 >= SV_Cmd_Argc() )
      goto LABEL_28;
    v18 = SV_Cmd_Argv(v0);
    minCount = atoi(v18);
LABEL_26:
    if ( ++v0 >= SV_Cmd_Argc() )
      goto LABEL_27;
  }
  v19 = SV_Cmd_Argv(v0);
  if ( !I_stricmp("-parentVars", v19) )
  {
    childVars = 0;
    parentVars = 1;
    notifyVars = 0;
    goto LABEL_26;
  }
  v20 = SV_Cmd_Argv(v0);
  if ( !I_stricmp("-childVars", v20) )
  {
    parentVars = 0;
    childVars = 1;
    notifyVars = 0;
    goto LABEL_26;
  }
  v21 = SV_Cmd_Argv(v0);
  if ( !I_stricmp("-notifyVars", v21) )
  {
    parentVars = 0;
    notifyVars = 1;
    childVars = 0;
    goto LABEL_26;
  }
LABEL_28:
  SV_ScriptVarUsage_f_usage();
}

/*
==============
Scr_SetCinematicMotionOverride
==============
*/
void Scr_SetCinematicMotionOverride(void)
{
  const char *v0; 
  playerState_s *EntityPlayerState; 
  playerState_s *v2; 
  unsigned int outIndex; 

  if ( Cmd_Argc() == 2 )
  {
    v0 = Cmd_Argv(1);
    if ( G_IsEntityInUse(0) )
    {
      EntityPlayerState = G_GetEntityPlayerState(g_entities);
      outIndex = 31;
      v2 = EntityPlayerState;
      NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_CINEMATICMOTION, v0, &outIndex);
      if ( outIndex < 0x1F )
        v2->cinematicMotionOverride = outIndex;
      else
        Com_PrintError(15, "devSetCinematicMotion: '%s' is not a valid loaded cinematicmotion asset\n", v0);
    }
    else
    {
      Com_PrintWarning(14, "devSetCinematicMotion: Player 0 does not exist, this can't be used right now.\n");
    }
  }
  else
  {
    Com_PrintError(15, "devSetCinematicMotion usage: devSetCinematicMotion <asset_name>\n");
  }
}

/*
==============
Scr_ClearCinematicMotionOverride
==============
*/
void Scr_ClearCinematicMotionOverride(void)
{
  if ( Cmd_Argc() == 1 )
  {
    if ( G_IsEntityInUse(0) )
      G_GetEntityPlayerState(g_entities)->cinematicMotionOverride = 31;
    else
      Com_PrintWarning(14, "devClearCinematicMotion: Player 0 does not exist, this can't be used right now.\n");
  }
  else
  {
    Com_PrintError(15, "devClearCinematicMotion usage: devClearCinematicMotion\n");
  }
}

/*
==============
SV_Cmds_EntityCount_f
==============
*/
void SV_Cmds_EntityCount_f()
{
  unsigned int ActiveEntityCount; 

  ActiveEntityCount = G_Utils_GetActiveEntityCount();
  Com_Printf(0, "Active entity count = %i\n", ActiveEntityCount);
}

/*
==============
SV_Cmds_CheckMapCmdValid
==============
*/
char SV_Cmds_CheckMapCmdValid(const char *map)
{
  const dvar_t *v3; 

  if ( !map && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_ccmds.cpp", 131, ASSERT_TYPE_ASSERT, "( map )", (const char *)&queryFormat, "map") )
    __debugbreak();
  if ( *map )
  {
    if ( Com_GameMode_SupportsMap(map) )
    {
      v3 = DCONST_DVARBOOL_map_zone_check;
      if ( !DCONST_DVARBOOL_map_zone_check && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "map_zone_check") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( !v3->current.enabled || DB_FastfileLoad_IsFastfileValid(map) )
      {
        return 1;
      }
      else
      {
        Com_PrintError(15, "Cannot load map '%s', fastfile is not valid.\n", map);
        return 0;
      }
    }
    else
    {
      Com_PrintError(15, "Cannot load map '%s' in current game mode.\n", map);
      return 0;
    }
  }
  else
  {
    Com_PrintError(15, "Cannot load map. No map name specified");
    return 0;
  }
}

/*
==============
SV_Cmds_DevmapCmd_CheckGameMode
==============
*/
void SV_Cmds_DevmapCmd_CheckGameMode(const unsigned int mapParamIndex)
{
  unsigned __int8 LUIModeTransition; 
  char buffer[64]; 

  if ( !SvGameModeApplication::HasActiveServerApplication() )
  {
    SV_Cmd_ArgvBuffer(mapParamIndex, buffer, 0x40ui64);
    I_strlwr(buffer);
    Com_GameMode_DevHandleDevMap(buffer);
    LUIModeTransition = Com_GameMode_GetLUIModeTransition();
    CL_Mgr_InitialiseDevClients((GameModeType)LUIModeTransition);
    Com_GameMode_UpdateGameMode();
    if ( !(unsigned __int8)Com_GameMode_GetActiveGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_ccmds.cpp", 178, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() != GameModeType::NONE)", "%s\n\tA game mode should have been set for the map, soemthing went wrong with the activation", "Com_GameMode_GetActiveGameMode() != GameModeType::NONE") )
      __debugbreak();
    if ( !Com_GameMode_SupportsMap(buffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_ccmds.cpp", 179, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsMap( map ))", "%s\n\tSomething went wrong with the game mode activation", "Com_GameMode_SupportsMap( map )") )
      __debugbreak();
  }
}

/*
==============
SV_Cmds_RegisterCommonCommands
==============
*/
void SV_Cmds_RegisterCommonCommands(void)
{
  Cmd_AddServerCommandList(S_SV_OPERATOR_COMMANDS_COMMON, 0x1Au);
  G_Omnvar_RegisterCommands();
}

/*
==============
SV_ScriptVarUsage_f_usage
==============
*/
void SV_ScriptVarUsage_f_usage()
{
  Com_Printf(1, "usage: scriptVarUsage [-spreadsheet] [-summary] [-functionSummary] [-total] [-filename name]  [-function name] [-linenumber number] [-minCount number] [-lineSort] [-parentVars/-childVars/-notifyVars] [-combinePools]\n");
  Com_Printf(1, "    -spreadsheet     - tab delimited with one entry per line\n");
  Com_Printf(1, "    -summary         - display totals per file\n");
  Com_Printf(1, "    -functionSummary - display totals per function\n");
  Com_Printf(1, "    -total           - display grand total only\n");
  Com_Printf(1, "    -filename        - filter files based on the specified string\n");
  Com_Printf(1, "    -function        - filter lines based on the function name\n");
  Com_Printf(1, "    -minCount        - only show variables used more often than this count\n");
  Com_Printf(1, "    -lineSort        - sort by line number instead of number of variables\n");
  Com_Printf(1, "    -parentVars      - only show parent variables\n");
  Com_Printf(1, "    -childVars       - only show child variables\n");
  Com_Printf(1, "    -notifyVars      - only show notify variables\n");
}

