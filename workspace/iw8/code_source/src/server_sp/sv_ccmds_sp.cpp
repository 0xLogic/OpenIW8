/*
==============
SV_CmdsSP_SetDifficultyDvars
==============
*/

void __fastcall SV_CmdsSP_SetDifficultyDvars(const int difficultyLevel)
{
  ?SV_CmdsSP_SetDifficultyDvars@@YAXH@Z(difficultyLevel);
}

/*
==============
SvGameModeAppSP::DevmapCmd
==============
*/

void __fastcall SvGameModeAppSP::DevmapCmd(SvGameModeAppSP *this)
{
  ?DevmapCmd@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SV_CmdsSP_SetYoloModeDvar
==============
*/

void __fastcall SV_CmdsSP_SetYoloModeDvar(const bool yoloMode)
{
  ?SV_CmdsSP_SetYoloModeDvar@@YAX_N@Z(yoloMode);
}

/*
==============
SvGameModeAppSP::DevmapDediCmd
==============
*/

void __fastcall SvGameModeAppSP::DevmapDediCmd(SvGameModeAppSP *this)
{
  ?DevmapDediCmd@SvGameModeAppSP@@UEAAXXZ(this);
}

/*
==============
SV_CmdsSP_RequestMapRestart
==============
*/

void __fastcall SV_CmdsSP_RequestMapRestart(int loadScripts)
{
  ?SV_CmdsSP_RequestMapRestart@@YAXH@Z(loadScripts);
}

/*
==============
SvGameModeAppSP::DevJoinCmd
==============
*/

void __fastcall SvGameModeAppSP::DevJoinCmd(SvGameModeAppSP *this, const char *hostname)
{
  ?DevJoinCmd@SvGameModeAppSP@@UEAAXPEBD@Z(this, hostname);
}

/*
==============
SV_CmdsSP_AddOperatorCommands
==============
*/

void SV_CmdsSP_AddOperatorCommands(void)
{
  ?SV_CmdsSP_AddOperatorCommands@@YAXXZ();
}

/*
==============
SV_CmdsSP_RemoveOperatorCommands
==============
*/

void SV_CmdsSP_RemoveOperatorCommands(void)
{
  ?SV_CmdsSP_RemoveOperatorCommands@@YAXXZ();
}

/*
==============
SV_CmdsSP_ClearLoadGame
==============
*/

void SV_CmdsSP_ClearLoadGame(void)
{
  ?SV_CmdsSP_ClearLoadGame@@YAXXZ();
}

/*
==============
SV_SaveGameLastCommit_f
==============
*/

void SV_SaveGameLastCommit_f(void)
{
  ?SV_SaveGameLastCommit_f@@YAXXZ();
}

/*
==============
SV_CmdsSP_CheckLoadGame
==============
*/

int __fastcall SV_CmdsSP_CheckLoadGame()
{
  return ?SV_CmdsSP_CheckLoadGame@@YAHXZ();
}

/*
==============
SV_CmdsSP_SetSpecialistModeDvar
==============
*/

void __fastcall SV_CmdsSP_SetSpecialistModeDvar(const bool specialistMode)
{
  ?SV_CmdsSP_SetSpecialistModeDvar@@YAX_N@Z(specialistMode);
}

/*
==============
SV_ScriptProfile_f
==============
*/

void __fastcall SV_ScriptProfile_f(double _XMM0_8)
{
  scrContext_t *v1; 

  v1 = ScriptContext_Server();
  _XMM0_8 = SV_Cmd_ArgFloat(1);
  __asm { vmovaps xmm1, xmm0; minTime }
  Scr_DoProfile(v1, *(float *)&_XMM1);
}

/*
==============
SV_ScriptBuiltin_f
==============
*/

void __fastcall SV_ScriptBuiltin_f(double _XMM0_8)
{
  scrContext_t *v1; 

  v1 = ScriptContext_Server();
  _XMM0_8 = SV_Cmd_ArgFloat(1);
  __asm { vmovaps xmm1, xmm0; minTime }
  Scr_DoProfileBuiltin(v1, *(float *)&_XMM1);
}

/*
==============
SV_ScriptProfilePrintUsageReport_f
==============
*/
void SV_ScriptProfilePrintUsageReport_f()
{
  g_reportScriptContextUsage = SCRIPTINSTANCE_SERVER;
}

/*
==============
SV_ScriptProfilePrintUsageReportToBlackbox_f
==============
*/
void SV_ScriptProfilePrintUsageReportToBlackbox_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_ScriptProfilePrintUsageReportToBlackBox(v0);
}

/*
==============
SV_ScriptProfileResetUsageReport_f
==============
*/
void SV_ScriptProfileResetUsageReport_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_ScriptProfileResetUsageReport(v0);
}

/*
==============
Scr_PrintScriptFunctionNames_f
==============
*/
void Scr_PrintScriptFunctionNames_f()
{
  const scrContext_t *v0; 
  const char *v1; 

  if ( SV_Cmd_Argc() >= 2 )
  {
    v0 = ScriptContext_Server();
    v1 = SV_Cmd_Argv(1);
    Scr_PrintScriptFunctionNames(v0, v1);
  }
  else
  {
    Com_Printf(0, " Usage: Scr_PrintScriptFunctionNames_f <scriptFileName>. Pass in 'all' for filename to show all.\n");
  }
}

/*
==============
SV_CmdsSP_FastRestart_f
==============
*/

char __fastcall SV_CmdsSP_FastRestart_f(double _XMM0_8)
{
  char result; 

  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 859, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", "%s\n\tCan't restart map while server is starting up", "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0; volume }
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  s_svCmdsSP_mapRestart = 1;
  s_svCmdsSP_loadScripts = 0;
  result = Com_IsAnyLocalServerRunning();
  if ( !result )
    return SV_CmdsSP_CheckLoadGame();
  return result;
}

/*
==============
SV_CmdsSP_MapRestart_f
==============
*/
void SV_CmdsSP_MapRestart_f()
{
  SV_CmdsSP_RequestMapRestart(1);
}

/*
==============
SV_CmdsSP_NextLevel_f
==============
*/

void SV_CmdsSP_NextLevel_f(void)
{
  G_MainSP_LoadNextMap();
}

/*
==============
SV_CmdsSP_LoadGame_f
==============
*/
void SV_CmdsSP_LoadGame_f()
{
  const char *v0; 
  const char *v1; 
  const char *v2; 
  signed __int64 v3; 
  __int64 v4; 
  char v5; 
  __int64 v6; 
  char v7; 
  char v8; 
  int v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  const char *v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  char *i; 
  char v20[4]; 
  char dest[64]; 

  v0 = SV_Cmd_Argv(1);
  v1 = v0;
  if ( *v0 )
  {
    v2 = "save";
    v3 = v0 - "save";
    v4 = 4i64;
    do
    {
      v5 = v2[v3];
      v6 = v4;
      v7 = *v2++;
      --v4;
      if ( !v6 )
        break;
      if ( v5 != v7 )
        goto LABEL_9;
    }
    while ( v5 );
    v8 = v1[4];
    if ( v8 == 47 || v8 == 92 )
    {
      Core_strcpy_truncate(dest, 0x40ui64, v1);
      v10 = -1i64;
      do
        ++v10;
      while ( dest[v10] );
      v9 = truncate_cast<int,unsigned __int64>(v10);
      goto LABEL_14;
    }
LABEL_9:
    v9 = Com_sprintf_truncate(dest, 0x40ui64, "save/%s", v1);
    if ( v9 < 0 )
    {
      Com_Printf(0, "filename 'save/%s' is too long", v1);
      return;
    }
LABEL_14:
    if ( v9 < 4 )
    {
LABEL_27:
      I_strcat(dest, 0x40ui64, ".svg");
    }
    else
    {
      v11 = 0x7FFFFFFFi64;
      v12 = v9;
      v13 = ".svg";
      if ( !&v20[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v14 = (unsigned __int8)v20[v12 - (_QWORD)".svg" + (_QWORD)v13];
        v15 = v11;
        v16 = *(unsigned __int8 *)v13++;
        --v11;
        if ( !v15 )
          break;
        if ( v14 != v16 )
        {
          v17 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          v18 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v18 = v16;
          if ( v14 != v18 )
            goto LABEL_27;
        }
      }
      while ( v14 );
    }
    for ( i = strchr_0(dest, 92); i; i = strchr_0(i, 92) )
      *i = 47;
    if ( Com_BuildPlayerProfilePath(sv_save_filename_0, 64, dest) >= 0 )
    {
      MemCard_SetUseDevSaveArea(1);
      s_svCmdsSP_mapRestart = 0;
      s_svCmdsSP_loadScripts = 0;
      if ( !Com_IsAnyLocalServerRunning() )
        SV_CmdsSP_CheckLoadGame();
    }
    else
    {
      Com_Printf(0, "filename '%s' is too long", dest);
      sv_save_filename_0[0] = 0;
    }
  }
  else
  {
    Com_Printf(0, "You must specify a savegame to load\n");
  }
}

/*
==============
SV_LoadGameContinue_f
==============
*/
void SV_LoadGameContinue_f()
{
  const char *v0; 

  if ( SV_Cmd_Argc() <= 1 )
  {
    SV_LoadGameContinue(0, 0, NULL);
  }
  else
  {
    v0 = SV_Cmd_Argv(1);
    SV_LoadGameContinue(0, 0, v0);
  }
}

/*
==============
SV_LoadGameContinueMissionfailed_f
==============
*/
void SV_LoadGameContinueMissionfailed_f()
{
  SV_LoadGameContinue(0, 1, NULL);
}

/*
==============
SV_CmdsSP_ScriptReload_f
==============
*/
void SV_CmdsSP_ScriptReload_f()
{
  const dvar_t *v0; 
  __int64 suppressPlayerNotify; 
  __int64 suppressPlayerNotifya; 

  if ( Com_IsAnyLocalServerRunning() && SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    if ( com_cheats->current.enabled )
    {
      v0 = DVARINT_reloading;
      if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v0);
      if ( v0->current.integer )
      {
        Com_Printf(0, "savegame request ignored\n");
      }
      else
      {
        if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
          __debugbreak();
        if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
        {
          LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 1096, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
            __debugbreak();
        }
        SV_SaveSP_ClearPendingSaves();
        SV_SaveSP_AddPendingSave("script_reload", "Start Level Save", (const char *)&queryFormat.fmt + 3, SAVE_TYPE_AUTOSAVE, 6u, 1);
        SV_SaveSP_AddLoadGameContinue();
        SV_MainSP_ClearInFrameSMP();
        SV_SaveSP_ProcessPendingSaves();
        if ( ((unsigned __int64)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
          __debugbreak();
        if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
        {
          LODWORD(suppressPlayerNotifya) = g_serverThreadOwnership;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 1110, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotifya) )
            __debugbreak();
        }
      }
    }
    else
    {
      Com_Printf(0, "Saving games from the console is cheat protected.\n");
    }
  }
  else
  {
    Com_Printf(0, "Game is not running.\n");
  }
}

/*
==============
SV_CmdsSP_ScriptLoadGameContinue_f
==============
*/
void SV_CmdsSP_ScriptLoadGameContinue_f()
{
  SV_LoadGameContinue(1, 0, NULL);
}

/*
==============
SV_ScriptProfileReset_f
==============
*/
void SV_ScriptProfileReset_f()
{
  scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_ScriptProfileTimesReset(v0);
}

/*
==============
SV_ScriptProfileFile_f
==============
*/
void SV_ScriptProfileFile_f()
{
  const scrContext_t *v0; 

  v0 = ScriptContext_Server();
  Scr_PrintScriptProfileTimesForScriptFile(v0);
}

/*
==============
SV_SaveGame_f
==============
*/
void SV_SaveGame_f()
{
  const dvar_t *v0; 
  unsigned __int64 v1; 
  int v2; 
  char *i; 
  char buffer[1024]; 
  char screenshot[1024]; 
  char description[1024]; 

  if ( Com_IsAnyLocalServerRunning() && SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    if ( com_cheats->current.enabled )
    {
      v0 = DVARINT_reloading;
      if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v0);
      if ( v0->current.integer )
      {
        Com_Printf(0, "savegame request ignored\n");
      }
      else
      {
        SV_Cmd_ArgvBuffer(1, buffer, 0x400ui64);
        if ( buffer[0] )
        {
          if ( strrchr_0(buffer, 46) )
          {
            v1 = strrchr_0(buffer, 46) - buffer;
            if ( v1 >= 0x400 )
            {
              j___report_rangecheckfailure(buffer);
              JUMPOUT(0x1426CA078i64);
            }
            buffer[v1] = 0;
          }
          v2 = buffer[0];
          for ( i = buffer; *i; v2 = *i )
            *i++ = v2 + ((unsigned int)(v2 - 65) < 0x1A ? 0x20 : 0);
          SV_Cmd_ArgvBuffer(2, description, 0x400ui64);
          SV_Cmd_ArgvBuffer(3, screenshot, 0x400ui64);
          if ( com_inServerFrame )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 1275, ASSERT_TYPE_ASSERT, "(!com_inServerFrame)", (const char *)&queryFormat, "!com_inServerFrame") )
              __debugbreak();
          }
          SV_SaveSP_AddPendingSave(buffer, description, screenshot, SAVE_TYPE_CONSOLE, 6u, 0);
        }
        else
        {
          Com_Printf(0, "syntax: devsave <name>\n");
        }
      }
    }
    else
    {
      Com_Printf(0, "Saving games from the console is cheat protected.\n");
    }
  }
  else
  {
    Com_Printf(0, "Game is not running.\n");
  }
}

/*
==============
SV_SaveGameLastCommit_f
==============
*/
void SV_SaveGameLastCommit_f(void)
{
  LocalClientNum_t OnlyLocalClientNum; 
  int ControllerFromClient; 
  bool v2; 
  LocalClientNum_t v3; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
  GamerProfile_UpdateProfileAndSaveIfNeeded(ControllerFromClient);
  v2 = G_SaveMemorySP_WaitForWritesToComplete(0);
  v3 = CL_GetOnlyLocalClientNum();
  if ( v2 )
    LUI_CoD_SaveComplete(v3);
  else
    LUI_CoD_SaveError(v3);
}

/*
==============
SV_SaveGameWriteLastCommittedSave_f
==============
*/

void SV_SaveGameWriteLastCommittedSave_f(void)
{
  G_SaveMemorySP_WriteLastCommittedSave();
}

/*
==============
SV_DumpProgressionData_f
==============
*/
void SV_DumpProgressionData_f()
{
  LocalClientNum_t OnlyLocalClientNum; 
  int ControllerFromClient; 
  int i; 
  const DDLContext *DDLContext; 
  const char *v4; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(OnlyLocalClientNum);
  for ( i = 0; i < 3; ++i )
  {
    DDLContext = GamerProfile_GetDDLContext(ControllerFromClient, SP_PROGRESSION);
    v4 = j_va("DDL_DumpProfileDDLType%d.txt", (unsigned int)i);
    Com_DDL_WriteAsText(DDLContext, v4, (const char *)&queryFormat.fmt + 3);
  }
}

/*
==============
SV_CmdsSP_DifficultyEasy
==============
*/
void SV_CmdsSP_DifficultyEasy()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 120, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS )") )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_g_gameskill, 0);
}

/*
==============
SV_CmdsSP_DifficultyMedium
==============
*/
void SV_CmdsSP_DifficultyMedium()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 120, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS )") )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_g_gameskill, 1);
}

/*
==============
SV_CmdsSP_DifficultyHard
==============
*/
void SV_CmdsSP_DifficultyHard()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 120, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS )") )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_g_gameskill, 2);
}

/*
==============
SV_CmdsSP_DifficultyFu
==============
*/
void SV_CmdsSP_DifficultyFu()
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 120, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS )") )
    __debugbreak();
  Dvar_SetInt_Internal(DVARINT_g_gameskill, 3);
}

/*
==============
SV_CmdSP_Map_f
==============
*/
void SV_CmdSP_Map_f()
{
  unsigned __int64 v0; 
  unsigned int v1; 
  char *v2; 
  char *v3; 
  char v4; 
  char v5; 
  char *v6; 
  int v7; 
  char v8; 
  unsigned __int64 v9; 
  const dvar_t *VarByName; 
  const char *string; 
  bool v12; 
  __int64 v13; 
  const char *v14; 
  const char *v15; 
  signed __int64 v16; 
  int v17; 
  int v18; 
  int v20; 
  int v21; 
  bool v22; 
  unsigned int v23; 
  bool v24; 
  _QWORD v25[132]; 

  v25[130] = -2i64;
  v0 = (unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64;
  OnlineMatchId::ResetMatchId();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "SV_CmdSP_Map_f");
  v1 = 0;
  SV_Cmd_ArgvBuffer(1, (char *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64) + 896), 0x40ui64);
  I_strlwr((char *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64) + 896));
  v2 = strstr_0((const char *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64) + 896), "dvarstring");
  v3 = v2;
  if ( v2 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = *v2;
      do
      {
        v4 = v5;
        if ( v5 == 40 )
          break;
        v4 = *++v3;
        v5 = *v3;
      }
      while ( *v3 );
    }
    v6 = v3 + 1;
    if ( v4 != 40 )
      v6 = v3;
    v7 = 0;
    v8 = *v6;
    if ( *v6 )
    {
      v9 = v0 + 896 - (_QWORD)v6;
      do
      {
        if ( v8 == 41 )
          break;
        v6[v9] = v8;
        ++v7;
        v8 = *++v6;
      }
      while ( *v6 );
    }
    *(_BYTE *)(((unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64) + 0x380 + v7) = 0;
    if ( v7 > 1 )
    {
      VarByName = Dvar_FindVarByName((const char *)(v0 + 896));
      if ( VarByName )
      {
        string = VarByName->current.string;
        if ( string )
          Core_strcpy((char *)(v0 + 896), 0x40ui64, string);
      }
    }
  }
  v12 = I_EndsWith((const char *)(v0 + 896), ".svg");
  v13 = 2i64;
  if ( v12 )
  {
    Core_strcpy((char *)(v0 + 960), 0x40ui64, (const char *)(v0 + 896));
    if ( G_SaveMemorySP_ReadHeader((const char *)(v0 + 960), (SaveHeader *)((unsigned __int64)v25 & 0xFFFFFFFFFFFFFF80ui64)) )
    {
      Core_strcpy((char *)(v0 + 896), 0x40ui64, (const char *)(v0 + 72));
      LOBYTE(v1) = strcmp_0((const char *)(v0 + 328), "Start Level Save") != 0;
      SV_TransientsSP_SetSavegameTransientState((const bitarray<32> *)(v0 + 660));
    }
    else
    {
      G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_1444D3E28);
    }
  }
  if ( SV_Cmds_CheckMapCmdValid((const char *)(v0 + 896)) )
  {
    Com_FrontEndScene_ShutdownAndDisable();
    R_BeginRemoteScreenUpdate();
    v22 = ((unsigned __int16)DB_Zones_GetInUseFlags() >> 8) & 1;
    if ( v22 )
    {
      DB_BeginSPHotLoad();
      SND_SetIgnorePauseFlag(1);
    }
    SI_SuspendInstall();
    v23 = DB_Zones_GetInUseFlags() & 0x600000;
    v24 = v23 && !SV_PreloadSP_IsPreloadingNonTransientZones();
    if ( v23 && SV_PreloadSP_HadStartedPreloadingZone((const char *const)(v0 + 896)) || v24 )
    {
      if ( !SV_PreloadSP_HaveFastfilesFinishedLoading() )
      {
        Com_Error_impl(ERR_SCRIPT, (const ObfuscateErrorText)&stru_1444D3BA0, 1135i64, v0 + 896);
        SV_PreloadSP_DumpDBPreloadZoneNames();
        Com_PrintError(24, "Preloads queued weren't complete by the time of changelevel into '%s'. Stalling...\n", (const char *)(v0 + 896));
        CL_PreloadSP_SyncLoads();
        if ( !SV_PreloadSP_HaveFastfilesFinishedLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 275, ASSERT_TYPE_ASSERT, "(SV_PreloadSP_HaveFastfilesFinishedLoading())", (const char *)&queryFormat, "SV_PreloadSP_HaveFastfilesFinishedLoading()") )
          __debugbreak();
      }
    }
    else if ( v23 )
    {
      SV_PreloadSP_DumpDBPreloadZoneNames();
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444D3D10, 1136i64, v0 + 896);
    }
    CL_PreloadSP_NewMapLoad();
    DB_CancelLoadFastfilesByZoneFlags(0x4000u);
    SV_TransientsSP_ShutdownLevel();
    if ( !Sys_IsDatabaseReady() )
    {
      Com_Printf(0, "SV_Map_f: Blocking for DB thread to complete...\n");
      Sys_SyncDatabase();
      if ( !Sys_IsDatabaseReady() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 239, ASSERT_TYPE_ASSERT, "(Sys_IsDatabaseReady())", (const char *)&queryFormat, "Sys_IsDatabaseReady()") )
        __debugbreak();
      Com_Printf(0, "SV_Map_f: DB thread has completed.\n");
    }
    Com_MapLoadErrors_Reset(0);
    if ( Party_InParty(&g_partyData) )
      Party_StopParty(&g_partyData);
    Dvar_SetBool_Internal(DVARBOOL_com_loadingSavegame, v12);
    Dvar_SetBool_Internal(com_cheats, 1);
    FS_ConvertPath((char *)(v0 + 896));
    SV_InitSP_SpawnServer((const char *)(v0 + 896), v12, v1, 0, v22);
    Com_MapLoadErrors_AppendFileOpenLoadErrors();
    Com_MapLoadErrors_Finalize((const char *)(v0 + 896));
    R_EndRemoteScreenUpdate();
    if ( v22 )
      DB_EndSPHotLoad();
  }
  else
  {
    v14 = SV_Cmd_Argv(0);
    v15 = "sp";
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v16 = v14 - "sp";
    do
    {
      v17 = (unsigned __int8)v15[v16];
      v18 = *(unsigned __int8 *)v15++;
      if ( !v13-- )
        break;
      if ( v17 != v18 )
      {
        v20 = v17 + 32;
        if ( (unsigned int)(v17 - 65) > 0x19 )
          v20 = v17;
        v17 = v20;
        v21 = v18 + 32;
        if ( (unsigned int)(v18 - 65) > 0x19 )
          v21 = v18;
        if ( v20 != v21 )
          goto LABEL_34;
      }
    }
    while ( v17 );
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444D3E80, 1137i64, v0 + 896);
LABEL_34:
    Com_SetLocalizedErrorMessage("Can't load the requested map. See console for details", "Map Error");
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SvGameModeAppSP::DevJoinCmd
==============
*/
void SvGameModeAppSP::DevJoinCmd(SvGameModeAppSP *this, const char *hostname)
{
  Com_PrintWarning(25, "%s does nothing in SP.\n", "SvGameModeAppSP::DevJoinCmd");
}

/*
==============
SvGameModeAppSP::DevmapCmd
==============
*/
void SvGameModeAppSP::DevmapCmd(SvGameModeAppSP *this)
{
  unsigned __int8 ActiveGameMode; 

  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  CL_Mgr_InitialiseDevClients((GameModeType)ActiveGameMode);
  SV_CmdSP_Map_f();
}

/*
==============
SvGameModeAppSP::DevmapDediCmd
==============
*/
void SvGameModeAppSP::DevmapDediCmd(SvGameModeAppSP *this)
{
  Com_PrintWarning(25, "%s does nothing in SP.\n", "SvGameModeAppSP::DevmapDediCmd");
}

/*
==============
SV_CmdsSP_AddOperatorCommands
==============
*/
void SV_CmdsSP_AddOperatorCommands(void)
{
  Cmd_AddServerCommandList(S_SV_OPERATOR_COMMANDS_SP, 0x29u);
}

/*
==============
SV_CmdsSP_CheckForSaveGame
==============
*/
bool SV_CmdsSP_CheckForSaveGame(char *mapname, char *filename)
{
  unsigned __int64 v2; 
  char *v5; 
  char v6; 
  SvGameGlobalsSP *SvGameGlobalsSP; 
  SaveGame *SaveHandle; 
  const SaveHeader *v9; 
  char *v10; 
  char *v11; 
  char v12; 
  bool result; 
  char *v14; 
  char *v15; 
  char v16; 
  SaveHeader header; 

  v2 = (unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64;
  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 767, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !filename && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 768, ASSERT_TYPE_ASSERT, "(filename)", (const char *)&queryFormat, "filename") )
    __debugbreak();
  v5 = sv_save_filename_0;
  do
  {
    v6 = *v5;
    v5[filename - sv_save_filename_0] = *v5;
    ++v5;
  }
  while ( v6 );
  sv_save_filename_0[0] = 0;
  if ( Com_IsAnyLocalServerRunning() && (SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP(), G_SaveMemorySP_IsCommittedSaveAvailable(filename, SvGameGlobalsSP->mapcrc)) )
  {
    SaveHandle = G_SaveMemorySP_GetSaveHandle(SAVE_LAST_COMMITTED);
    if ( !SaveHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 787, ASSERT_TYPE_ASSERT, "(lastCommittedSave)", (const char *)&queryFormat, "lastCommittedSave") )
      __debugbreak();
    v9 = G_SaveMemorySP_GetHeader(SaveHandle);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 789, ASSERT_TYPE_ASSERT, "(lastCommittedHeader)", (const char *)&queryFormat, "lastCommittedHeader") )
      __debugbreak();
    v10 = v9->mapName;
    v11 = (char *)(mapname - v9->mapName);
    do
    {
      v12 = *v10;
      v10[(_QWORD)v11] = *v10;
      ++v10;
    }
    while ( v12 );
  }
  else
  {
    result = G_SaveMemorySP_ReadHeader(filename, (SaveHeader *)((unsigned __int64)&header & 0xFFFFFFFFFFFFFF80ui64));
    if ( !result )
      return result;
    v14 = &mapname[-v2 - 72];
    v15 = (char *)(v2 + 72);
    do
    {
      v16 = *v15;
      v15[(_QWORD)v14] = *v15;
      ++v15;
    }
    while ( v16 );
  }
  G_SaveSP_SetPendingLoadName(filename);
  return 1;
}

/*
==============
SV_CmdsSP_CheckLoadGame
==============
*/
__int64 SV_CmdsSP_CheckLoadGame()
{
  __int64 v0; 
  const char *v1; 
  char *v2; 
  int v3; 
  __int64 v4; 
  int v5; 
  int v6; 
  int v7; 
  const char *v9; 
  const char *v10; 
  int v11; 
  int v12; 
  scrContext_t *v13; 
  char filename[64]; 
  char mapname[256]; 

  if ( s_svCmdsSP_mapRestart )
  {
    SV_CmdsSP_MapRestart(0, s_svCmdsSP_loadScripts);
    return 1i64;
  }
  if ( sv_save_filename_0[0] && SV_CmdsSP_CheckForSaveGame(mapname, filename) )
  {
    SND_StopSounds(SND_STOP_ALL);
    if ( Com_IsAnyLocalServerRunning() )
    {
      v0 = 0x7FFFFFFFi64;
      v1 = SV_Game_GetMapName();
      if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v2 = (char *)(mapname - v1);
      do
      {
        v3 = (unsigned __int8)v1[(_QWORD)v2];
        v4 = v0;
        v5 = *(unsigned __int8 *)v1++;
        --v0;
        if ( !v4 )
          break;
        if ( v3 != v5 )
        {
          v6 = v3 + 32;
          if ( (unsigned int)(v3 - 65) > 0x19 )
            v6 = v3;
          v3 = v6;
          v7 = v5 + 32;
          if ( (unsigned int)(v5 - 65) > 0x19 )
            v7 = v5;
          if ( v3 != v7 )
            goto LABEL_20;
        }
      }
      while ( v3 );
      SV_CmdsSP_MapRestart(1, s_svCmdsSP_loadScripts);
    }
    else
    {
LABEL_20:
      v9 = "devmap %s\n";
      if ( !com_cheats->current.enabled )
        v9 = "map %s\n";
      v10 = j_va(v9, filename);
      Sys_EnterCriticalSection(CRITSECT_CBUF);
      v11 = strlen_noncrt(v10);
      v12 = v11;
      if ( s_cmd_textArray[0].cmdsize + v11 < s_cmd_textArray[0].maxsize )
      {
        memcpy_noncrt(&s_cmd_textArray[0].data[s_cmd_textArray[0].cmdsize], v10, v11 + 1);
        s_cmd_textArray[0].cmdsize += v12;
        v13 = ScriptContext_Server();
        Scr_MonitorCommand(v13, v10);
      }
      else
      {
        Com_Printf(16, "Cbuf_AddText: overflow (adding '%s')\n", v10);
      }
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
    return 1i64;
  }
  return 0i64;
}

/*
==============
SV_CmdsSP_ClearLoadGame
==============
*/
void SV_CmdsSP_ClearLoadGame(void)
{
  sv_save_filename_0[0] = 0;
  s_svCmdsSP_mapRestart = 0;
  s_svCmdsSP_loadScripts = 0;
}

/*
==============
SV_CmdsSP_MapRestart
==============
*/
void SV_CmdsSP_MapRestart(int savegame, int loadScripts)
{
  unsigned __int64 v3; 
  CLPauseReason PauseReason; 
  LocalClientNum_t OnlyLocalClientNum; 
  LocalClientNum_t v6; 
  int v7; 
  SvGameGlobalsSP *SvGameGlobalsSP; 
  __int64 suppressPlayerNotify; 
  int savegamea; 
  SaveGame *save; 

  savegamea = savegame;
  DB_MyChanges_Reload();
  Com_SyncThreads();
  SV_GameSP_CancelAndSyncTransients(1);
  CL_PreloadSP_MapRestart();
  v3 = (unsigned __int64)&g_serverThreadOwnership & 3;
  if ( ((unsigned __int8)&g_serverThreadOwnership & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
    __debugbreak();
  if ( _InterlockedIncrement(&g_serverThreadOwnership) != 1 )
  {
    LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 613, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedIncrement( (volatile_int32 *)&g_serverThreadOwnership ) == 1 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
      __debugbreak();
  }
  PauseReason = CL_Pause_GetPauseReason();
  sv_save_filename_0[0] = 0;
  s_svCmdsSP_mapRestart = 0;
  s_svCmdsSP_loadScripts = 0;
  if ( Com_IsAnyLocalServerRunning() )
  {
    G_SaveMemorySP_WaitForWritesToComplete(0);
    *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1052i64) = -4609;
    if ( loadScripts )
    {
      OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
      Con_Close(OnlyLocalClientNum);
    }
    CL_ShutdownDebugData();
    SV_SaveSP_ClearPendingSaves();
    Com_ResetSlowMotion();
    CL_CGameSP_CleanupBeforeServerShutdown(loadScripts != 0);
    v6 = CL_GetOnlyLocalClientNum();
    FX_WaitKillAllEffects(v6, 0);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_STREAM_UPDATE_DYNAMIC_MODELS);
    SV_GameSP_RestartGameProgs_Shutdown(loadScripts);
    CL_CGameSP_Restart_Shutdown(loadScripts != 0);
    if ( s_svCmdsSP_loadZone[0] )
    {
      Core_strcpy(g_debugZoneName, 0x40ui64, s_svCmdsSP_loadZone);
      DB_UpdateDebugZone();
    }
    SV_InitSP_UpdateNetConstStrings();
    v7 = Sys_Milliseconds();
    SV_GameSP_RestartGameProgs_Init(v7, &savegamea, &save, loadScripts);
    CL_CGameSP_Restart_Init(loadScripts != 0, savegamea != 0);
    R_Cinematic_ClearSaveLoad();
    SV_GameSP_CheckLoadLevel(save);
    Com_EventLoop();
    SV_MainSP_InitSnapshot();
    Stream_LoadSync_WaitAndEndSP(savegamea != 0, 1);
    if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
      __debugbreak();
    GSaveMemorySP::ResetGlobalBufferPointers((GSaveMemorySP *)GSaveMemory::ms_gSaveMemory);
    SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP();
    if ( !savegamea && loadScripts || SvGameGlobalsSP->saveProcessedOnInit )
    {
      SV_SaveSP_ClearPendingSaves();
      SV_SaveSP_AddPendingSave("map_restart", "Start Level Save", (const char *)&queryFormat.fmt + 3, SAVE_TYPE_AUTOSAVE, 2u, 1);
      SV_SaveSP_ProcessPendingSaves();
    }
    CL_CGameSP_SetActive();
    if ( G_MainSP_IsDemoSaveGame() )
    {
      Com_SyncThreads();
      SV_MainSP_DemoSetAnimTime();
      SV_MainSP_RunFrame(SV_FRAME_DO_ALL, 0);
    }
    if ( G_MainSP_IsDemoSaveGame() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 736, ASSERT_TYPE_ASSERT, "(!G_MainSP_IsDemoSaveGame())", (const char *)&queryFormat, "!G_MainSP_IsDemoSaveGame()") )
      __debugbreak();
    SV_Main_RestrictClientAllowedDvarFlags(0);
    Com_ResetFrametime();
    CL_Pause_SetPauseReason(PauseReason);
    R_Cinematic_PlayFromSave();
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
    {
      LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 748, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
        __debugbreak();
    }
    Dvar_SetBoolByName("NMMPTOSMKQ", 0);
    Sys_Print("SV_CmdsSP_MapRestart: completed\n");
    Compass_Print("Ready for Compass\n");
  }
  else
  {
    Com_Printf(15, "Game is not running.\n");
    Dvar_SetBoolByName("NMMPTOSMKQ", 0);
    if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_serverThreadOwnership) )
      __debugbreak();
    if ( _InterlockedExchangeAdd(&g_serverThreadOwnership, 0xFFFFFFFF) != 1 )
    {
      LODWORD(suppressPlayerNotify) = g_serverThreadOwnership;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 628, ASSERT_TYPE_ASSERT, "( ( Sys_InterlockedDecrement( (volatile_int32 *)&g_serverThreadOwnership ) == 0 ) )", "( g_serverThreadOwnership ) = %i", suppressPlayerNotify) )
        __debugbreak();
    }
  }
}

/*
==============
SV_CmdsSP_RemoveOperatorCommands
==============
*/
void SV_CmdsSP_RemoveOperatorCommands(void)
{
  Cmd_RemoveServerCommandList(S_SV_OPERATOR_COMMANDS_SP, 0x29u);
}

/*
==============
SV_CmdsSP_RequestMapRestart
==============
*/
void SV_CmdsSP_RequestMapRestart(int loadScripts)
{
  const char *v4; 

  if ( Com_IsAnyLocalServerStarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 859, ASSERT_TYPE_ASSERT, "(!Com_IsAnyLocalServerStarting())", "%s\n\tCan't restart map while server is starting up", "!Com_IsAnyLocalServerStarting()") )
    __debugbreak();
  __asm { vxorps  xmm0, xmm0, xmm0; volume }
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  s_svCmdsSP_mapRestart = 1;
  if ( loadScripts )
  {
    v4 = Cmd_Argv(1);
    Core_strcpy_truncate(s_svCmdsSP_loadZone, 0x40ui64, v4);
  }
  s_svCmdsSP_loadScripts = loadScripts;
  if ( !Com_IsAnyLocalServerRunning() )
    SV_CmdsSP_CheckLoadGame();
}

/*
==============
SV_CmdsSP_SetDifficultyDvars
==============
*/
void SV_CmdsSP_SetDifficultyDvars(const int difficultyLevel)
{
  __int64 v2; 
  int v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 120, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::DIFFICULTY_SETTINGS )") )
    __debugbreak();
  if ( (unsigned int)difficultyLevel > 5 )
  {
    v3 = 5;
    LODWORD(v2) = difficultyLevel;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_ccmds_sp.cpp", 121, ASSERT_TYPE_ASSERT, "( DIFFICULTY_EASY ) <= ( difficultyLevel ) && ( difficultyLevel ) <= ( DIFFICULTY_YOLO )", "difficultyLevel not in [DIFFICULTY_EASY, DIFFICULTY_YOLO]\n\t%i not in [%i, %i]", v2, 0i64, v3) )
      __debugbreak();
  }
  Dvar_SetInt_Internal(DVARINT_g_gameskill, difficultyLevel);
}

/*
==============
SV_CmdsSP_SetSpecialistModeDvar
==============
*/
void SV_CmdsSP_SetSpecialistModeDvar(const bool specialistMode)
{
  Dvar_SetBool_Internal(DVARBOOL_g_specialistMode, specialistMode);
}

/*
==============
SV_CmdsSP_SetYoloModeDvar
==============
*/
void SV_CmdsSP_SetYoloModeDvar(const bool yoloMode)
{
  Dvar_SetBool_Internal(DVARBOOL_g_yoloMode, yoloMode);
}

/*
==============
SV_LoadGameContinue
==============
*/
void SV_LoadGameContinue(int loadScripts, int missionfailed, const char *overrideFilename)
{
  SvGameGlobalsSP *SvGameGlobalsSP; 

  if ( SV_IsDemoPlaying() && SV_DemoSP_HasMark() )
  {
    SV_DemoSP_Restart_f();
    return;
  }
  __asm { vxorps  xmm0, xmm0, xmm0; volume }
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  s_svCmdsSP_mapRestart = 0;
  s_svCmdsSP_loadScripts = loadScripts;
  MemCard_SetUseDevSaveArea(0);
  if ( overrideFilename && *overrideFilename )
    Core_strcpy_truncate(sv_save_filename_0, 0x40ui64, overrideFilename);
  else
    Core_strcpy(sv_save_filename_0, 0x40ui64, DEFAULT_SAVE_NAME);
  if ( !Com_IsAnyLocalServerRunning() || (SvGameGlobalsSP = SvGameGlobalsSP::GetSvGameGlobalsSP(), !G_SaveMemorySP_IsCommittedSaveAvailable(sv_save_filename_0, SvGameGlobalsSP->mapcrc)) )
  {
    if ( !SaveExists(sv_save_filename_0) )
    {
      sv_save_filename_0[0] = 0;
      s_svCmdsSP_mapRestart = 0;
      s_svCmdsSP_loadScripts = 0;
      if ( missionfailed )
      {
        SV_CmdsSP_RequestMapRestart(0);
        return;
      }
      G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_1444D36E0);
    }
  }
  if ( !Com_IsAnyLocalServerRunning() && !SV_CmdsSP_CheckLoadGame() )
    G_SaveError(SAVE_ERROR_CANNOT_LOAD, &byte_1444D36E0);
}

