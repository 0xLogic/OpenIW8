/*
==============
G_ScrMP_GetBotScript
==============
*/

void __fastcall G_ScrMP_GetBotScript(char *filename, const char *gameType, GameModeType gamemode)
{
  ?G_ScrMP_GetBotScript@@YAXPEADPEBDW4GameModeType@@@Z(filename, gameType, gamemode);
}

/*
==============
G_ScrMP_LoadGameTypeScript_Shared
==============
*/

void __fastcall G_ScrMP_LoadGameTypeScript_Shared(EntryLoadScriptArray *loadArray, bool isFrontEnd, const char *gameType, GameModeType gameModeType)
{
  ?G_ScrMP_LoadGameTypeScript_Shared@@YAXPEAUEntryLoadScriptArray@@_NPEBDW4GameModeType@@@Z(loadArray, isFrontEnd, gameType, gameModeType);
}

/*
==============
GScr_MainMP_LoadScripts_shared
==============
*/

void __fastcall GScr_MainMP_LoadScripts_shared(EntryLoadScriptArray *loadArray, const ScrThreadMode scriptThreadMode, const char *gameType, bool isFrontEnd, const char *mapName, GameModeType gamemode, bool botsEnabled, bool agentsEnabled)
{
  ?GScr_MainMP_LoadScripts_shared@@YAXPEAUEntryLoadScriptArray@@W4ScrThreadMode@@PEBD_N2W4GameModeType@@33@Z(loadArray, scriptThreadMode, gameType, isFrontEnd, mapName, gamemode, botsEnabled, agentsEnabled);
}

/*
==============
G_ScrMP_GetAgentScript
==============
*/

void __fastcall G_ScrMP_GetAgentScript(char *filename, const char *gameType, GameModeType gamemodeType)
{
  ?G_ScrMP_GetAgentScript@@YAXPEADPEBDW4GameModeType@@@Z(filename, gameType, gamemodeType);
}

/*
==============
GScr_MainMP_LoadScripts_shared
==============
*/
void GScr_MainMP_LoadScripts_shared(EntryLoadScriptArray *loadArray, const ScrThreadMode scriptThreadMode, const char *gameType, bool isFrontEnd, const char *mapName, GameModeType gamemode, bool botsEnabled, bool agentsEnabled)
{
  GameScriptDataMPShared *GameScriptDataMP; 
  scrContext_t *v12; 
  const char *v13; 
  scrContext_t *v14; 
  bool v15; 
  bool v17; 
  scrContext_t *scrContext; 
  char dest[128]; 
  char scriptfile[128]; 

  GameScriptDataMP = GameScriptDataMPShared::GetGameScriptDataMP();
  v17 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH|WEAPON_LADDER_AIM, (GameModeType)(unsigned __int8)gamemode);
  v12 = ScriptContext_Server();
  Core_strcpy(dest, 0x80ui64, "scripts/code/delete.gsc");
  AddScriptAndLabel(&GameScriptDataMP->delete_, loadArray, v12, dest, "main", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/code/struct.gsc");
  AddScriptAndLabel(&GameScriptDataMP->initstructs, loadArray, v12, dest, "initstructs", 1);
  AddScriptAndLabel(&GameScriptDataMP->createstruct, loadArray, v12, dest, "createstruct", 1);
  G_ScrMP_LoadGameTypeScript_Shared(loadArray, isFrontEnd, gameType, (GameModeType)(unsigned __int8)gamemode);
  scrContext = ScriptContext_Server();
  v15 = Com_FrontEnd_IsInFrontEnd();
  if ( Com_IsCpMap(mapName) )
  {
    if ( (_BYTE)gamemode != LONG && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 128, ASSERT_TYPE_ASSERT, "( gameModeType == GameModeType::CP )", (const char *)&queryFormat, "gameModeType == GameModeType::CP") )
      __debugbreak();
    v13 = "scripts/cp/maps";
  }
  else
  {
    if ( !Com_IsMpMap(mapName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 136, ASSERT_TYPE_ASSERT, "( Com_IsMpMap( mapName ) )", (const char *)&queryFormat, "Com_IsMpMap( mapName )") )
      __debugbreak();
    if ( (_BYTE)gamemode != HALF_HALF && !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 137, ASSERT_TYPE_ASSERT, "( gameModeType == GameModeType::MP || isInFrontEnd )", (const char *)&queryFormat, "gameModeType == GameModeType::MP || isInFrontEnd") )
      __debugbreak();
    v13 = "scripts/mp/maps";
  }
  Com_sprintf(scriptfile, 0x80ui64, "%s/%s/%s%s", v13, mapName, mapName, ".gsc");
  AddScriptAndLabel(&GameScriptDataMP->levelscript, loadArray, scrContext, scriptfile, "main", 0);
  if ( !isFrontEnd )
  {
    if ( botsEnabled )
    {
      if ( (unsigned __int8)gamemode == HALF_HALF || (unsigned __int8)gamemode == LONG )
      {
        Com_sprintf(scriptfile, 0x80ui64, "%s/bots_gametype_%s%s", "scripts/mp/bots", gameType, ".gsc");
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 30, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
      {
        __debugbreak();
      }
      *(_QWORD *)&GameScriptDataMP->botMain = 0i64;
      GameScriptDataMP->leaderDialog = 0;
      v14 = ScriptContext_Server();
      AddScriptAndLabel(&GameScriptDataMP->botGameTypeMain, loadArray, v14, scriptfile, "main", 0);
      Core_strcpy(scriptfile, 0x80ui64, "scripts/mp/bots/bots.gsc");
      AddScriptAndLabel(&GameScriptDataMP->botMain, loadArray, v14, scriptfile, "main", 1);
      AddScriptAndLabel(&GameScriptDataMP->leaderDialog, loadArray, v14, scriptfile, "codecallback_leaderdialog", 0);
    }
    if ( agentsEnabled )
      G_ScrMP_LoadAgentScript(loadArray, gameType, (GameModeType)(unsigned __int8)gamemode);
    Core_strcpy(dest, 0x80ui64, "scripts/aitypes/bt_util.gsc");
    AddScriptAndLabel(&GameScriptDataMP->bt_getfunction, loadArray, v12, dest, "bt_getfunction", 1);
    Core_strcpy(dest, 0x80ui64, "scripts/asm/asm.gsc");
    AddScriptAndLabel(&GameScriptDataMP->ai_asm_getfunction, loadArray, v12, dest, "asm_getfunction", 1);
    AddScriptAndLabel(&GameScriptDataMP->ai_asm_getparams, loadArray, v12, dest, "asm_getparams", 1);
    AddScriptAndLabel(&GameScriptDataMP->ai_asm_getgenerichandler, loadArray, v12, dest, "asm_getgenerichandler", 1);
    if ( v17 )
    {
      if ( (_BYTE)gamemode == HALF_HALF )
      {
        Core_strcpy(dest, 0x80ui64, "scripts/mp/weapons.gsc");
      }
      else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 263, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to load script for callback 'codecallback_getprojectilespeedscale'.  Script not defined for this game mode.") )
      {
        __debugbreak();
      }
      AddScriptAndLabel(&GameScriptDataMP->projectile_speed, loadArray, v12, dest, "codecallback_getprojectilespeedscale", 1);
    }
  }
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptable_init, loadArray, v12, dest, "scriptable_initialize", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptable_postinit, loadArray, v12, dest, "scriptable_post_initialize", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptable_used, loadArray, v12, dest, "scriptable_used", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->riotshield_damaged, loadArray, v12, dest, "riotshield_damaged", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptable_touched, loadArray, v12, dest, "scriptable_touched", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/scriptable.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptable_notify_callback, loadArray, v12, dest, "scriptable_notify_callback", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/interactive.gsc");
  AddScriptAndLabel(&GameScriptDataMP->entity_used, loadArray, v12, dest, "entity_used", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/common/ui.gsc");
  AddScriptAndLabel(&GameScriptDataMP->lui_callback, loadArray, v12, dest, "lui_notify_callback", 1);
}

/*
==============
G_ScrMP_GetAgentScript
==============
*/
void G_ScrMP_GetAgentScript(char *filename, const char *gameType, GameModeType gamemodeType)
{
  const char *v3; 

  if ( (unsigned __int8)gamemodeType == HALF_HALF )
  {
    v3 = "scripts/mp/agents";
    goto LABEL_7;
  }
  if ( (unsigned __int8)gamemodeType == LONG )
  {
    v3 = "scripts/cp/agents";
LABEL_7:
    Com_sprintf(filename, 0x80ui64, "%s/gametype_%s%s", v3, gameType, ".gsc");
    return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 72, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
    __debugbreak();
}

/*
==============
G_ScrMP_GetBotScript
==============
*/
void G_ScrMP_GetBotScript(char *filename, const char *gameType, GameModeType gamemode)
{
  if ( (unsigned __int8)gamemode == HALF_HALF || (unsigned __int8)gamemode == LONG )
  {
    Com_sprintf(filename, 0x80ui64, "%s/bots_gametype_%s%s", "scripts/mp/bots", gameType, ".gsc");
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 30, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
  {
    __debugbreak();
  }
}

/*
==============
G_ScrMP_LoadAgentScript
==============
*/
void G_ScrMP_LoadAgentScript(EntryLoadScriptArray *loadArray, const char *gameType, GameModeType gamemodeType)
{
  int v3; 
  GameScriptDataMPShared *GameScriptDataMP; 
  const char *v7; 
  scrContext_t *v8; 
  const char *v9; 
  char dest[128]; 

  v3 = (unsigned __int8)gamemodeType;
  GameScriptDataMP = GameScriptDataMPShared::GetGameScriptDataMP();
  if ( v3 == 2 )
  {
    v7 = "scripts/mp/agents";
    goto LABEL_7;
  }
  if ( v3 == 3 )
  {
    v7 = "scripts/cp/agents";
LABEL_7:
    Com_sprintf(dest, 0x80ui64, "%s/gametype_%s%s", v7, gameType, ".gsc");
    goto LABEL_8;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 72, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
    __debugbreak();
LABEL_8:
  v8 = ScriptContext_Server();
  AddScriptAndLabel(&GameScriptDataMP->agentGameTypeMain, loadArray, v8, dest, "main", 0);
  v9 = "scripts/mp/agents/alien/agents.gsc";
  if ( (_BYTE)v3 != 3 )
    v9 = "scripts/mp/agents/agents.gsc";
  Core_strcpy(dest, 0x80ui64, v9);
  AddScriptAndLabel(&GameScriptDataMP->agentMain, loadArray, v8, dest, "main", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/mp/agents/agent_common.gsc");
  AddScriptAndLabel(&GameScriptDataMP->agentAdded, loadArray, v8, dest, "codecallback_agentadded", 1);
  AddScriptAndLabel(&GameScriptDataMP->agentDamaged, loadArray, v8, dest, "codecallback_agentdamaged", 1);
  AddScriptAndLabel(&GameScriptDataMP->agentImpaled, loadArray, v8, dest, "codecallback_agentimpaled", 1);
  AddScriptAndLabel(&GameScriptDataMP->agentKilled, loadArray, v8, dest, "codecallback_agentkilled", 1);
  AddScriptAndLabel(&GameScriptDataMP->agentFinishWeaponChange, loadArray, v8, dest, "codecallback_agentfinishweaponchange", 1);
  Core_strcpy(dest, 0x80ui64, "scripts/mp/agents/scriptedagents.gsc");
  AddScriptAndLabel(&GameScriptDataMP->scriptedAgentOnEnterState, loadArray, v8, dest, "onenterstate", 1);
  AddScriptAndLabel(&GameScriptDataMP->scriptedAgentOnDeactivate, loadArray, v8, dest, "ondeactivate", 1);
}

/*
==============
G_ScrMP_LoadGameTypeScript_Shared
==============
*/
void G_ScrMP_LoadGameTypeScript_Shared(EntryLoadScriptArray *loadArray, bool isFrontEnd, const char *gameType, GameModeType gameModeType)
{
  const char *v6; 
  GameScriptDataMPShared *GameScriptDataMP; 
  scrContext_t *v8; 
  char dest[128]; 

  if ( isFrontEnd || (unsigned __int8)gameModeType == HALF_HALF )
  {
    v6 = "scripts/mp/gametypes";
    goto LABEL_8;
  }
  if ( (unsigned __int8)gameModeType == LONG )
  {
    v6 = "scripts/cp/gametypes";
LABEL_8:
    GameScriptDataMP = GameScriptDataMPShared::GetGameScriptDataMP();
    v8 = ScriptContext_Server();
    Com_sprintf(dest, 0x80ui64, "%s/%s%s", v6, gameType, ".gsc");
    AddScriptAndLabel(&GameScriptDataMP->gametype.main, loadArray, v8, dest, "main", 1);
    Core_strcpy(dest, 0x80ui64, "scripts/mp/callbacksetup.gsc");
    AddScriptAndLabel(&GameScriptDataMP->gametype.startupgametype, loadArray, v8, dest, "codecallback_startgametype", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playeractive, loadArray, v8, dest, "codecallback_playeractive", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerconnect, loadArray, v8, dest, "codecallback_playerconnect", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerdisconnect, loadArray, v8, dest, "codecallback_playerdisconnect", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerdamage, loadArray, v8, dest, "codecallback_playerdamage", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerimpaled, loadArray, v8, dest, "codecallback_playerimpaled", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerkilled, loadArray, v8, dest, "codecallback_playerkilled", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.vehicleDamage, loadArray, v8, dest, "codecallback_vehicledamage", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerlaststand, loadArray, v8, dest, "codecallback_playerlaststand", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playerfinishweaponchange, loadArray, v8, dest, "codecallback_playerfinishweaponchange", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.spawnpointsprecalc, loadArray, v8, dest, "codecallback_spawnpointsprecalc", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.spawnpointscore, loadArray, v8, dest, "codecallback_spawnpointscore", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.spawnpointcritscore, loadArray, v8, dest, "codecallback_spawnpointcritscore", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.playermigrated, loadArray, v8, dest, "codecallback_playermigrated", 1);
    AddScriptAndLabel(&GameScriptDataMP->gametype.hostmigration, loadArray, v8, dest, "codecallback_hostmigration", 1);
    return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main_mp_entry.cpp", 171, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled game mode type") )
    __debugbreak();
}

